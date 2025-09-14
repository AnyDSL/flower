; ModuleID = '/home/puya/Projects/flower_anydsl/build/apps/./paper_example'
source_filename = "/home/puya/Projects/flower_anydsl/build/apps/./paper_example"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%0 = type { i1 }
%1 = type { i1 }
%2 = type { i1 }
%3 = type { i1 }

@_126375 = internal constant [9 x i8] c"Timing: \00"
@_126394 = internal constant [4 x i8] c" | \00"
@_126406 = internal constant [4 x i8] c" | \00"
@_126423 = internal constant [10 x i8] c" (median(\00"
@_126439 = internal constant [27 x i8] c") | minimum | maximum) ms\0A\00"
@_126525 = internal constant [23 x i8] c"End-to-End Host Time: \00"
@_126537 = internal constant [4 x i8] c" | \00"
@_126549 = internal constant [4 x i8] c" | \00"
@_126561 = internal constant [10 x i8] c" (median(\00"
@_126567 = internal constant [27 x i8] c") | minimum | maximum) ms\0A\00"
@total_fpga_timing_124963 = internal unnamed_addr global i64 0
@_126626 = internal constant [11 x i8] c"Executed!\0A\00"
@0 = private unnamed_addr constant [8 x i8] c"hls_top\00", align 1
@1 = private unnamed_addr constant [64 x i8] c"/home/puya/Projects/flower_anydsl/build/apps/./paper_example.cl\00", align 1

define void @main() local_unnamed_addr #0 {
main:
  %0 = alloca [3 x i32], align 4
  %1 = alloca [3 x i32], align 4
  %dummy_cgra_channel90 = alloca %0, align 8
  %dummy_cgra_channel89 = alloca %1, align 8
  %dummy_cgra_channel88 = alloca %2, align 8
  %dummy_cgra_channel = alloca %3, align 8
  %2 = alloca ptr, align 8
  %3 = alloca ptr, align 8
  %types = alloca [6 x i8], align 1
  %allocs = alloca [6 x i32], align 4
  %aligns = alloca [6 x i32], align 4
  %sizes = alloca [6 x i32], align 4
  %args = alloca [6 x ptr], align 8
  %4 = tail call ptr @anydsl_alloc(i32 0, i64 4194304)
  %5 = tail call ptr @anydsl_alloc(i32 0, i64 4194304)
  %6 = tail call ptr @anydsl_alloc(i32 2, i64 4194304)
  %7 = tail call ptr @anydsl_alloc(i32 2, i64 4194304)
  br label %branch_true87

branch_false:                                     ; preds = %branch_true87
  %8 = tail call ptr @anydsl_alloc(i32 0, i64 48)
  %9 = tail call ptr @anydsl_alloc(i32 0, i64 48)
  %10 = getelementptr inbounds [6 x ptr], ptr %args, i64 0, i64 1
  %11 = getelementptr inbounds [6 x i32], ptr %sizes, i64 0, i64 1
  %12 = getelementptr inbounds [6 x i32], ptr %aligns, i64 0, i64 1
  %13 = getelementptr inbounds [6 x i32], ptr %allocs, i64 0, i64 1
  %14 = getelementptr inbounds [6 x i8], ptr %types, i64 0, i64 1
  %15 = getelementptr inbounds [6 x ptr], ptr %args, i64 0, i64 2
  %16 = getelementptr inbounds [6 x i32], ptr %sizes, i64 0, i64 2
  %17 = getelementptr inbounds [6 x i32], ptr %aligns, i64 0, i64 2
  %18 = getelementptr inbounds [6 x i32], ptr %allocs, i64 0, i64 2
  %19 = getelementptr inbounds [6 x i8], ptr %types, i64 0, i64 2
  %20 = getelementptr inbounds [6 x ptr], ptr %args, i64 0, i64 3
  %21 = getelementptr inbounds [6 x i32], ptr %sizes, i64 0, i64 3
  %22 = getelementptr inbounds [6 x i32], ptr %aligns, i64 0, i64 3
  %23 = getelementptr inbounds [6 x i32], ptr %allocs, i64 0, i64 3
  %24 = getelementptr inbounds [6 x i8], ptr %types, i64 0, i64 3
  %25 = getelementptr inbounds [6 x ptr], ptr %args, i64 0, i64 4
  %26 = getelementptr inbounds [6 x i32], ptr %sizes, i64 0, i64 4
  %27 = getelementptr inbounds [6 x i32], ptr %aligns, i64 0, i64 4
  %28 = getelementptr inbounds [6 x i32], ptr %allocs, i64 0, i64 4
  %29 = getelementptr inbounds [6 x i8], ptr %types, i64 0, i64 4
  %30 = getelementptr inbounds [6 x ptr], ptr %args, i64 0, i64 5
  %31 = getelementptr inbounds [6 x i32], ptr %sizes, i64 0, i64 5
  %32 = getelementptr inbounds [6 x i32], ptr %aligns, i64 0, i64 5
  %33 = getelementptr inbounds [6 x i32], ptr %allocs, i64 0, i64 5
  %34 = getelementptr inbounds [6 x i8], ptr %types, i64 0, i64 5
  %.repack96 = getelementptr inbounds [3 x i32], ptr %1, i64 0, i64 1
  %.repack97 = getelementptr inbounds [3 x i32], ptr %1, i64 0, i64 2
  %.repack98 = getelementptr inbounds [3 x i32], ptr %0, i64 0, i64 1
  %.repack99 = getelementptr inbounds [3 x i32], ptr %0, i64 0, i64 2
  br label %branch_true73

branch_false54:                                   ; preds = %branch_true
  call void @anydsl_release(i32 2, ptr %7)
  call void @anydsl_release(i32 2, ptr %6)
  call void @anydsl_release(i32 0, ptr %4)
  call void @anydsl_release(i32 0, ptr %5)
  call void @anydsl_print_string(ptr nonnull @_126626)
  ret void

branch_true:                                      ; preds = %while_exit.3, %branch_true
  %error_126604.0 = phi i32 [ 0, %while_exit.3 ], [ %spec.select, %branch_true ]
  %loop5195 = phi i32 [ 0, %while_exit.3 ], [ %42, %branch_true ]
  %35 = zext i32 %loop5195 to i64
  %36 = getelementptr inbounds [0 x i32], ptr %4, i64 0, i64 %35
  %37 = load i32, ptr %36, align 4
  %38 = zext i32 %loop5195 to i64
  %39 = getelementptr inbounds [0 x i32], ptr %5, i64 0, i64 %38
  %40 = load i32, ptr %39, align 4
  %expected = mul nsw i32 %37, %37
  %.not = icmp eq i32 %40, %expected
  %41 = add nsw i32 %error_126604.0, 1
  %spec.select = select i1 %.not, i32 %error_126604.0, i32 %41
  %42 = add nuw nsw i32 %loop5195, 1
  %43 = icmp ult i32 %loop5195, 1048575
  br i1 %43, label %branch_true, label %branch_false54

and_true:                                         ; preds = %while_exit71.3, %branch_true65
  %j_126464.0 = phi i32 [ 1, %while_exit71.3 ], [ %121, %branch_true65 ]
  %44 = add nsw i32 %j_126464.0, -1
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %45
  %47 = load i64, ptr %46, align 8
  %48 = icmp slt i64 %194, %47
  br i1 %48, label %branch_true65, label %while_exit

while_exit:                                       ; preds = %and_true, %branch_true65
  %j_126464.1 = phi i32 [ %121, %branch_true65 ], [ %j_126464.0, %and_true ]
  %49 = sext i32 %j_126464.1 to i64
  %50 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %49
  store i64 %194, ptr %50, align 8
  %51 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 2
  %52 = load i64, ptr %51, align 8
  br label %and_true.1

and_true.1:                                       ; preds = %branch_true65.1, %while_exit
  %j_126464.2 = phi i32 [ 2, %while_exit ], [ %64, %branch_true65.1 ]
  %53 = add nsw i32 %j_126464.2, -1
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %54
  %56 = load i64, ptr %55, align 8
  %57 = icmp slt i64 %52, %56
  br i1 %57, label %branch_true65.1, label %while_exit.1

branch_true65.1:                                  ; preds = %and_true.1
  %58 = add nsw i32 %j_126464.2, -1
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %59
  %61 = load i64, ptr %60, align 8
  %62 = sext i32 %j_126464.2 to i64
  %63 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %62
  store i64 %61, ptr %63, align 8
  %64 = add nsw i32 %j_126464.2, -1
  %65 = icmp sgt i32 %j_126464.2, 1
  br i1 %65, label %and_true.1, label %while_exit.1

while_exit.1:                                     ; preds = %branch_true65.1, %and_true.1
  %j_126464.3 = phi i32 [ %64, %branch_true65.1 ], [ %j_126464.2, %and_true.1 ]
  %66 = sext i32 %j_126464.3 to i64
  %67 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %66
  store i64 %52, ptr %67, align 8
  %68 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 3
  %69 = load i64, ptr %68, align 8
  br label %and_true.2

and_true.2:                                       ; preds = %branch_true65.2, %while_exit.1
  %j_126464.4 = phi i32 [ 3, %while_exit.1 ], [ %81, %branch_true65.2 ]
  %70 = add nsw i32 %j_126464.4, -1
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %71
  %73 = load i64, ptr %72, align 8
  %74 = icmp slt i64 %69, %73
  br i1 %74, label %branch_true65.2, label %while_exit.2

branch_true65.2:                                  ; preds = %and_true.2
  %75 = add nsw i32 %j_126464.4, -1
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %76
  %78 = load i64, ptr %77, align 8
  %79 = sext i32 %j_126464.4 to i64
  %80 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %79
  store i64 %78, ptr %80, align 8
  %81 = add nsw i32 %j_126464.4, -1
  %82 = icmp sgt i32 %j_126464.4, 1
  br i1 %82, label %and_true.2, label %while_exit.2

while_exit.2:                                     ; preds = %branch_true65.2, %and_true.2
  %j_126464.5 = phi i32 [ %81, %branch_true65.2 ], [ %j_126464.4, %and_true.2 ]
  %83 = sext i32 %j_126464.5 to i64
  %84 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %83
  store i64 %69, ptr %84, align 8
  %85 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 4
  %86 = load i64, ptr %85, align 8
  br label %and_true.3

and_true.3:                                       ; preds = %branch_true65.3, %while_exit.2
  %j_126464.6 = phi i32 [ 4, %while_exit.2 ], [ %98, %branch_true65.3 ]
  %87 = add nsw i32 %j_126464.6, -1
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %88
  %90 = load i64, ptr %89, align 8
  %91 = icmp slt i64 %86, %90
  br i1 %91, label %branch_true65.3, label %while_exit.3

branch_true65.3:                                  ; preds = %and_true.3
  %92 = add nsw i32 %j_126464.6, -1
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %93
  %95 = load i64, ptr %94, align 8
  %96 = sext i32 %j_126464.6 to i64
  %97 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %96
  store i64 %95, ptr %97, align 8
  %98 = add nsw i32 %j_126464.6, -1
  %99 = icmp sgt i32 %j_126464.6, 1
  br i1 %99, label %and_true.3, label %while_exit.3

while_exit.3:                                     ; preds = %branch_true65.3, %and_true.3
  %j_126464.7 = phi i32 [ %98, %branch_true65.3 ], [ %j_126464.6, %and_true.3 ]
  %100 = sext i32 %j_126464.7 to i64
  %101 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %100
  store i64 %86, ptr %101, align 8
  call void @anydsl_print_string(ptr nonnull @_126525)
  %102 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 3
  %103 = load i64, ptr %102, align 8
  %104 = sitofp i64 %103 to double
  %105 = fdiv double %104, 1.000000e+03
  call void @anydsl_print_f64(double %105)
  call void @anydsl_print_string(ptr nonnull @_126537)
  %106 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 1
  %107 = load i64, ptr %106, align 8
  %108 = sitofp i64 %107 to double
  %109 = fdiv double %108, 1.000000e+03
  call void @anydsl_print_f64(double %109)
  call void @anydsl_print_string(ptr nonnull @_126549)
  %110 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 4
  %111 = load i64, ptr %110, align 8
  %112 = sitofp i64 %111 to double
  %113 = fdiv double %112, 1.000000e+03
  call void @anydsl_print_f64(double %113)
  call void @anydsl_print_string(ptr nonnull @_126561)
  call void @anydsl_print_i32(i32 5)
  call void @anydsl_print_string(ptr nonnull @_126567)
  call void @anydsl_release(i32 0, ptr %9)
  %114 = load i64, ptr %181, align 8
  store i64 %114, ptr @total_fpga_timing_124963, align 8
  br label %branch_true

branch_true65:                                    ; preds = %and_true
  %115 = add nsw i32 %j_126464.0, -1
  %116 = sext i32 %115 to i64
  %117 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %116
  %118 = load i64, ptr %117, align 8
  %119 = sext i32 %j_126464.0 to i64
  %120 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %119
  store i64 %118, ptr %120, align 8
  %121 = add nsw i32 %j_126464.0, -1
  %122 = icmp sgt i32 %j_126464.0, 1
  br i1 %122, label %and_true, label %while_exit

and_true69:                                       ; preds = %branch_true66.preheader, %branch_true72
  %j_126307.0 = phi i32 [ 1, %branch_true66.preheader ], [ %201, %branch_true72 ]
  %123 = add nsw i32 %j_126307.0, -1
  %124 = sext i32 %123 to i64
  %125 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %124
  %126 = load i64, ptr %125, align 8
  %127 = icmp slt i64 %214, %126
  br i1 %127, label %branch_true72, label %while_exit71

while_exit71:                                     ; preds = %and_true69, %branch_true72
  %j_126307.1 = phi i32 [ %201, %branch_true72 ], [ %j_126307.0, %and_true69 ]
  %128 = sext i32 %j_126307.1 to i64
  %129 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %128
  store i64 %214, ptr %129, align 8
  %130 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 2
  %131 = load i64, ptr %130, align 8
  br label %and_true69.1

and_true69.1:                                     ; preds = %branch_true72.1, %while_exit71
  %j_126307.2 = phi i32 [ 2, %while_exit71 ], [ %143, %branch_true72.1 ]
  %132 = add nsw i32 %j_126307.2, -1
  %133 = sext i32 %132 to i64
  %134 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %133
  %135 = load i64, ptr %134, align 8
  %136 = icmp slt i64 %131, %135
  br i1 %136, label %branch_true72.1, label %while_exit71.1

branch_true72.1:                                  ; preds = %and_true69.1
  %137 = add nsw i32 %j_126307.2, -1
  %138 = sext i32 %137 to i64
  %139 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %138
  %140 = load i64, ptr %139, align 8
  %141 = sext i32 %j_126307.2 to i64
  %142 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %141
  store i64 %140, ptr %142, align 8
  %143 = add nsw i32 %j_126307.2, -1
  %144 = icmp sgt i32 %j_126307.2, 1
  br i1 %144, label %and_true69.1, label %while_exit71.1

while_exit71.1:                                   ; preds = %branch_true72.1, %and_true69.1
  %j_126307.3 = phi i32 [ %143, %branch_true72.1 ], [ %j_126307.2, %and_true69.1 ]
  %145 = sext i32 %j_126307.3 to i64
  %146 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %145
  store i64 %131, ptr %146, align 8
  %147 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 3
  %148 = load i64, ptr %147, align 8
  br label %and_true69.2

and_true69.2:                                     ; preds = %branch_true72.2, %while_exit71.1
  %j_126307.4 = phi i32 [ 3, %while_exit71.1 ], [ %160, %branch_true72.2 ]
  %149 = add nsw i32 %j_126307.4, -1
  %150 = sext i32 %149 to i64
  %151 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %150
  %152 = load i64, ptr %151, align 8
  %153 = icmp slt i64 %148, %152
  br i1 %153, label %branch_true72.2, label %while_exit71.2

branch_true72.2:                                  ; preds = %and_true69.2
  %154 = add nsw i32 %j_126307.4, -1
  %155 = sext i32 %154 to i64
  %156 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %155
  %157 = load i64, ptr %156, align 8
  %158 = sext i32 %j_126307.4 to i64
  %159 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %158
  store i64 %157, ptr %159, align 8
  %160 = add nsw i32 %j_126307.4, -1
  %161 = icmp sgt i32 %j_126307.4, 1
  br i1 %161, label %and_true69.2, label %while_exit71.2

while_exit71.2:                                   ; preds = %branch_true72.2, %and_true69.2
  %j_126307.5 = phi i32 [ %160, %branch_true72.2 ], [ %j_126307.4, %and_true69.2 ]
  %162 = sext i32 %j_126307.5 to i64
  %163 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %162
  store i64 %148, ptr %163, align 8
  %164 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 4
  %165 = load i64, ptr %164, align 8
  br label %and_true69.3

and_true69.3:                                     ; preds = %branch_true72.3, %while_exit71.2
  %j_126307.6 = phi i32 [ 4, %while_exit71.2 ], [ %177, %branch_true72.3 ]
  %166 = add nsw i32 %j_126307.6, -1
  %167 = sext i32 %166 to i64
  %168 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %167
  %169 = load i64, ptr %168, align 8
  %170 = icmp slt i64 %165, %169
  br i1 %170, label %branch_true72.3, label %while_exit71.3

branch_true72.3:                                  ; preds = %and_true69.3
  %171 = add nsw i32 %j_126307.6, -1
  %172 = sext i32 %171 to i64
  %173 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %172
  %174 = load i64, ptr %173, align 8
  %175 = sext i32 %j_126307.6 to i64
  %176 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %175
  store i64 %174, ptr %176, align 8
  %177 = add nsw i32 %j_126307.6, -1
  %178 = icmp sgt i32 %j_126307.6, 1
  br i1 %178, label %and_true69.3, label %while_exit71.3

while_exit71.3:                                   ; preds = %branch_true72.3, %and_true69.3
  %j_126307.7 = phi i32 [ %177, %branch_true72.3 ], [ %j_126307.6, %and_true69.3 ]
  %179 = sext i32 %j_126307.7 to i64
  %180 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %179
  store i64 %165, ptr %180, align 8
  call void @anydsl_print_string(ptr nonnull @_126375)
  %181 = getelementptr inbounds [0 x i64], ptr %8, i64 0, i64 3
  %182 = load i64, ptr %181, align 8
  %183 = sitofp i64 %182 to double
  %184 = fdiv double %183, 1.000000e+03
  call void @anydsl_print_f64(double %184)
  call void @anydsl_print_string(ptr nonnull @_126394)
  %185 = getelementptr inbounds [0 x i64], ptr %8, i64 0, i64 1
  %186 = load i64, ptr %185, align 8
  %187 = sitofp i64 %186 to double
  %188 = fdiv double %187, 1.000000e+03
  call void @anydsl_print_f64(double %188)
  call void @anydsl_print_string(ptr nonnull @_126406)
  %189 = getelementptr inbounds [0 x i64], ptr %8, i64 0, i64 4
  %190 = load i64, ptr %189, align 8
  %191 = sitofp i64 %190 to double
  %192 = fdiv double %191, 1.000000e+03
  call void @anydsl_print_f64(double %192)
  call void @anydsl_print_string(ptr nonnull @_126423)
  call void @anydsl_print_i32(i32 5)
  call void @anydsl_print_string(ptr nonnull @_126439)
  call void @anydsl_release(i32 0, ptr %8)
  %193 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 1
  %194 = load i64, ptr %193, align 8
  br label %and_true

branch_true72:                                    ; preds = %and_true69
  %195 = add nsw i32 %j_126307.0, -1
  %196 = sext i32 %195 to i64
  %197 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %196
  %198 = load i64, ptr %197, align 8
  %199 = sext i32 %j_126307.0 to i64
  %200 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %199
  store i64 %198, ptr %200, align 8
  %201 = add nsw i32 %j_126307.0, -1
  %202 = icmp sgt i32 %j_126307.0, 1
  br i1 %202, label %and_true69, label %while_exit71

branch_true73:                                    ; preds = %branch_false, %branch_true73
  %loop1692 = phi i32 [ 0, %branch_false ], [ %211, %branch_true73 ]
  store i64 0, ptr @total_fpga_timing_124963, align 8
  %203 = call i64 @anydsl_get_micro_time()
  call void @anydsl_copy(i32 0, ptr %4, i64 0, i32 2, ptr %6, i64 0, i64 4194304)
  store ptr %6, ptr %3, align 8
  store ptr %3, ptr %args, align 8
  store i32 8, ptr %sizes, align 4
  store i32 8, ptr %aligns, align 4
  store i32 8, ptr %allocs, align 4
  store i8 1, ptr %types, align 1
  store ptr %7, ptr %2, align 8
  store ptr %2, ptr %10, align 8
  store i32 8, ptr %11, align 4
  store i32 8, ptr %12, align 4
  store i32 8, ptr %13, align 4
  store i8 1, ptr %14, align 1
  store i1 true, ptr %dummy_cgra_channel, align 8
  store ptr %dummy_cgra_channel, ptr %15, align 8
  store i32 1, ptr %16, align 4
  store i32 1, ptr %17, align 4
  store i32 1, ptr %18, align 4
  store i8 2, ptr %19, align 1
  store i1 true, ptr %dummy_cgra_channel88, align 8
  store ptr %dummy_cgra_channel88, ptr %20, align 8
  store i32 1, ptr %21, align 4
  store i32 1, ptr %22, align 4
  store i32 1, ptr %23, align 4
  store i8 2, ptr %24, align 1
  store i1 true, ptr %dummy_cgra_channel89, align 8
  store ptr %dummy_cgra_channel89, ptr %25, align 8
  store i32 1, ptr %26, align 4
  store i32 1, ptr %27, align 4
  store i32 1, ptr %28, align 4
  store i8 2, ptr %29, align 1
  store i1 true, ptr %dummy_cgra_channel90, align 8
  store ptr %dummy_cgra_channel90, ptr %30, align 8
  store i32 1, ptr %31, align 4
  store i32 1, ptr %32, align 4
  store i32 1, ptr %33, align 4
  store i8 2, ptr %34, align 1
  store i32 1, ptr %1, align 4
  store i32 1, ptr %.repack96, align 4
  store i32 1, ptr %.repack97, align 4
  store i32 1, ptr %0, align 4
  store i32 1, ptr %.repack98, align 4
  store i32 1, ptr %.repack99, align 4
  call void @anydsl_launch_kernel(i32 2, ptr nonnull @1, ptr nonnull @0, ptr nonnull %1, ptr nonnull %0, ptr nonnull %args, ptr nonnull %sizes, ptr nonnull %aligns, ptr nonnull %allocs, ptr nonnull %types, i32 6)
  call void @anydsl_synchronize(i32 2)
  call void @anydsl_copy(i32 2, ptr %7, i64 0, i32 0, ptr %5, i64 0, i64 4194304)
  %204 = call i64 @anydsl_get_micro_time()
  %205 = zext i32 %loop1692 to i64
  %206 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 %205
  %207 = sub nsw i64 %204, %203
  store i64 %207, ptr %206, align 8
  %208 = load i64, ptr @total_fpga_timing_124963, align 8
  %209 = zext i32 %loop1692 to i64
  %210 = getelementptr inbounds [0 x i64], ptr %8, i64 0, i64 %209
  store i64 %208, ptr %210, align 8
  %211 = add nuw nsw i32 %loop1692, 1
  %212 = icmp ult i32 %loop1692, 5
  br i1 %212, label %branch_true73, label %branch_true66.preheader

branch_true66.preheader:                          ; preds = %branch_true73
  %213 = getelementptr inbounds [0 x i64], ptr %9, i64 0, i64 1
  %214 = load i64, ptr %213, align 8
  br label %and_true69

branch_true87:                                    ; preds = %main, %branch_true87
  %loop891 = phi i32 [ 0, %main ], [ %219, %branch_true87 ]
  %215 = zext i32 %loop891 to i64
  %216 = getelementptr inbounds [0 x i32], ptr %4, i64 0, i64 %215
  store i32 %loop891, ptr %216, align 4
  %217 = zext i32 %loop891 to i64
  %218 = getelementptr inbounds [0 x i32], ptr %5, i64 0, i64 %217
  store i32 0, ptr %218, align 4
  %219 = add nuw nsw i32 %loop891, 1
  %220 = icmp ult i32 %loop891, 1048575
  br i1 %220, label %branch_true87, label %branch_false
}

declare ptr @anydsl_alloc(i32, i64) local_unnamed_addr #0

declare void @anydsl_print_string(ptr) local_unnamed_addr #0

declare void @anydsl_print_f64(double) local_unnamed_addr #0

declare void @anydsl_print_i32(i32) local_unnamed_addr #0

declare void @anydsl_release(i32, ptr) local_unnamed_addr #0

declare i64 @anydsl_get_micro_time() local_unnamed_addr #0

declare void @anydsl_copy(i32, ptr, i64, i32, ptr, i64, i64) local_unnamed_addr #0

declare void @anydsl_launch_kernel(i32, ptr, ptr, ptr, ptr, ptr, ptr, ptr, ptr, ptr, i32) local_unnamed_addr #0

declare void @anydsl_synchronize(i32) local_unnamed_addr #0

attributes #0 = { "target-cpu"="broadwell" "target-features"="-avx512pf,-tsxldtrk,+cx16,+sahf,-tbm,-avx512ifma,-sha,+crc32,-fma4,-vpclmulqdq,+prfchw,+bmi2,-cldemote,+fsgsbase,-avx512bf16,-amx-tile,-raoint,-uintr,-gfni,+popcnt,-ptwrite,+aes,-avx512bitalg,-movdiri,-widekl,-xsaves,-avx512er,-avxvnni,-avx512fp16,-avx512vnni,-amx-bf16,-avxvnniint8,-avx512vpopcntdq,-pconfig,-clwb,-cmpccxadd,-avx512f,-xsavec,-clzero,-pku,-amx-fp16,+mmx,-lwp,-rdpid,-xop,+rdseed,-waitpkg,-prefetchi,-kl,-movdir64b,-sse4a,-avx512bw,-avxneconvert,-clflushopt,+xsave,-avx512vbmi2,+64bit,-avx512vl,-serialize,-hreset,+invpcid,-avx512cd,+avx,-vaes,-amx-int8,+cx8,+fma,+rtm,+bmi,-enqcmd,+rdrnd,-mwaitx,+sse4.1,+sse4.2,+avx2,+fxsr,-wbnoinvd,+sse,+lzcnt,+pclmul,-rdpru,-avxifma,+f16c,+ssse3,-sgx,-prefetchwt1,+cmov,-avx512vbmi,-shstk,+movbe,-avx512vp2intersect,+xsaveopt,-avx512dq,+sse2,+adx,+sse3," }
