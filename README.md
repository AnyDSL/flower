# FLOWER #

This repository contains the applications implementated for paper "FLOWER: A Comprehensive Dataflow Compiler for High-Level Synthesis".

It is based on a fork of [Stincilla](https://github.com/AnyDSL/stincilla).

## Prerequisites ##
FLOWER requires a working AnyDSL installation. A script to build the [impala](https://github.com/AnyDSL/impala) frontend and [thorin](https://github.com/AnyDSL/thorin) backend as well as the [runtime](https://github.com/AnyDSL/runtime) component is provided by the [anydsl metaproject](https://github.com/AnyDSL/anydsl) (setup.sh).

Also Xilinx Vitis 2020.1 and Intel FPGA SDK for OpenCL 19.4 needs to be separatly installed.

## Building ##
The setup.sh configures Flower and sets all required paths. The backend for code generation will be set to `cpu`. This can be changed via CMake:
- `BACKEND` : defines the backend to generate code for (supported values:`cpu`,`avx` `aocl`, `hls`)
    + On `hls`
        - `FPGA_PART`: insert FPGA part or the model of Xilinx accelerator card.
        - `SYNTHESIS`: `off` for a quick software simulation. `on` for HDL generation and logic synthesis.
            - `HW_EMULATION`: `off` logic synthesis and FPGA bitstream generation, `on` hardware emulation.
            - `PROFILER` : `on` enabling runtime full profiler.
        - `ANYDSL_FPGA`: device configuration variable. `HPC` for generating complete HW/SW design for PCIe accelerator cards. `SOC` generating IP.
        Adding `GMEM_OPT` beside *HPC* or *SOC*, assigns separate memory interfaces for ports accessing the global memory.

Example:
```bash
cd anydsl/flower_anydsl/build
cmake -DBACKEND=aocl .. # optional: switch to multi-platform (Intel/Xilinx) OpenCL backend.
make
```

To generate vectorized version of applications, edit `src/backend_hls.impala` and modify the value of `vector_length`, then before generating a new application rebuild the cache:
```bash
cd anydsl/flower_anydsl/build
make rebuild_cache
```
