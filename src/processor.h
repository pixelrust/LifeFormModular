
/* Code automatically generated by Vult https://github.com/modlfo/vult */
#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <stdint.h>
#include <math.h>
#include "vultin.h"
#include "processor.tables.h"

typedef struct _tuple___real_real_real_real__ {
   float field_0;
   float field_1;
   float field_2;
   float field_3;
} _tuple___real_real_real_real__;

typedef struct _tuple___real_real_real__ {
   float field_0;
   float field_1;
   float field_2;
} _tuple___real_real_real__;

typedef struct FIR__ctx_type_0 {
   float z[128];
   int index;
} FIR__ctx_type_0;

typedef FIR__ctx_type_0 FIR_do_type;

void FIR__ctx_type_0_init(FIR__ctx_type_0 &_output_);

static_inline void FIR_do_init(FIR__ctx_type_0 &_output_){
   FIR__ctx_type_0_init(_output_);
   return ;
}

float FIR_do(FIR__ctx_type_0 &_ctx, float x);

typedef FIR__ctx_type_0 FIR_skip_type;

static_inline void FIR_skip_init(FIR__ctx_type_0 &_output_){
   FIR__ctx_type_0_init(_output_);
   return ;
}

static_inline void FIR_skip(FIR__ctx_type_0 &_ctx, float x){
   _ctx.z[_ctx.index] = x;
   _ctx.index = ((1 + _ctx.index) % 128);
}

typedef struct Processor__ctx_type_0 {
   float y0;
   float upsample_ret_2;
   float upsample_ret_1;
   float upsample_ret_0;
} Processor__ctx_type_0;

typedef Processor__ctx_type_0 Processor_upsample_type;

void Processor__ctx_type_0_init(Processor__ctx_type_0 &_output_);

static_inline void Processor_upsample_init(Processor__ctx_type_0 &_output_){
   Processor__ctx_type_0_init(_output_);
   return ;
}

void Processor_upsample(Processor__ctx_type_0 &_ctx, float y1);

typedef Processor__ctx_type_0 Processor_upsample_ret_0_type;

static_inline void Processor_upsample_ret_0_init(Processor__ctx_type_0 &_output_){
   Processor__ctx_type_0_init(_output_);
   return ;
}

static_inline float Processor_upsample_ret_0(Processor__ctx_type_0 &_ctx){
   return _ctx.upsample_ret_0;
};

typedef Processor__ctx_type_0 Processor_upsample_ret_1_type;

static_inline void Processor_upsample_ret_1_init(Processor__ctx_type_0 &_output_){
   Processor__ctx_type_0_init(_output_);
   return ;
}

static_inline float Processor_upsample_ret_1(Processor__ctx_type_0 &_ctx){
   return _ctx.upsample_ret_1;
};

typedef Processor__ctx_type_0 Processor_upsample_ret_2_type;

static_inline void Processor_upsample_ret_2_init(Processor__ctx_type_0 &_output_){
   Processor__ctx_type_0_init(_output_);
   return ;
}

static_inline float Processor_upsample_ret_2(Processor__ctx_type_0 &_ctx){
   return _ctx.upsample_ret_2;
};

float Processor_pd(float ph, float d, float v);

static_inline float Processor_modulsine(float pdist){
   float mastersinus;
   mastersinus = sinf((6.28318530718f * pdist));
   return mastersinus;
}

static_inline float Processor_sine(float pdist, float fb, float fm){
   float sinus;
   sinus = sinf(((3.33333333333f * fb * fm) + (6.28318530718f * pdist)));
   return sinus;
}

static_inline float Processor_softsat(float x, float clipamt){
   return float_clip((5.f * clipamt * x),-1.f,1.f);
};

typedef struct Processor__ctx_type_5 {
   FIR__ctx_type_0 slavefilter;
   FIR__ctx_type_0 satfilter;
   float process_ret_3;
   float process_ret_2;
   float process_ret_1;
   float process_ret_0;
   FIR__ctx_type_0 filter;
   Processor__ctx_type_0 _inst41c;
   Processor__ctx_type_0 _inst21c;
   Processor__ctx_type_0 _inst11c;
} Processor__ctx_type_5;

typedef Processor__ctx_type_5 Processor_process_type;

void Processor__ctx_type_5_init(Processor__ctx_type_5 &_output_);

static_inline void Processor_process_init(Processor__ctx_type_5 &_output_){
   Processor__ctx_type_5_init(_output_);
   return ;
}

void Processor_process(Processor__ctx_type_5 &_ctx, float in1, float in2, float in3, float in4, float in5, float in6, float in7, float in8, float in9);

typedef Processor__ctx_type_5 Processor_process_ret_0_type;

static_inline void Processor_process_ret_0_init(Processor__ctx_type_5 &_output_){
   Processor__ctx_type_5_init(_output_);
   return ;
}

static_inline float Processor_process_ret_0(Processor__ctx_type_5 &_ctx){
   return _ctx.process_ret_0;
};

typedef Processor__ctx_type_5 Processor_process_ret_1_type;

static_inline void Processor_process_ret_1_init(Processor__ctx_type_5 &_output_){
   Processor__ctx_type_5_init(_output_);
   return ;
}

static_inline float Processor_process_ret_1(Processor__ctx_type_5 &_ctx){
   return _ctx.process_ret_1;
};

typedef Processor__ctx_type_5 Processor_process_ret_2_type;

static_inline void Processor_process_ret_2_init(Processor__ctx_type_5 &_output_){
   Processor__ctx_type_5_init(_output_);
   return ;
}

static_inline float Processor_process_ret_2(Processor__ctx_type_5 &_ctx){
   return _ctx.process_ret_2;
};

typedef Processor__ctx_type_5 Processor_process_ret_3_type;

static_inline void Processor_process_ret_3_init(Processor__ctx_type_5 &_output_){
   Processor__ctx_type_5_init(_output_);
   return ;
}

static_inline float Processor_process_ret_3(Processor__ctx_type_5 &_ctx){
   return _ctx.process_ret_3;
};



#endif // PROCESSOR_H
