/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

union _4_main_$node;
struct _IO_FILE;
enum _4_main_$op;
struct _3_main__opaque_Node_1;
struct timeval;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
typedef struct _IO_FILE FILE;
extern int fclose(void *stream ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
typedef struct _3_main__opaque_Node_1 *_3_main__opaque_List_1;
extern void abort() ;
union _4_main_$node {
   void *_void_star ;
   unsigned long _unsigned_long ;
   int _int ;
   unsigned char _unsigned_char ;
};
extern void exit(int status ) ;
int _1_main_entropy  =    0;
extern int raise(int sig ) ;
struct _3_main__opaque_Node_1 {
   int data ;
   struct _3_main__opaque_Node_1 *next ;
};
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
char const   *_4_main_$strings  =    "The license key is correct!\n\000The license key is incorrect!\n\000";
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
int _2entropy  =    0;
enum _4_main_$op {
    _4_main__label$label_LAB_0 = 29,
    _4_main__convert_int2unsigned_long$left_STA_0$result_STA_0 = 72,
    _4_main__return_int$expr_STA_0 = 213,
    _4_main__string$result_STA_0$value_LIT_0 = 133,
    _4_main__store_unsigned_long$left_STA_0$right_STA_1 = 102,
    _4_main__BOr_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 55,
    _4_main__Shiftrt_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 28,
    _4_main__store_void_star$left_STA_0$right_STA_1 = 40,
    _4_main__store_void_star$right_STA_0$left_STA_1 = 45,
    _4_main__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 197,
    _4_main__load_void_star$left_STA_0$result_STA_0 = 157,
    _4_main__load_unsigned_char$left_STA_0$result_STA_0 = 109,
    _4_main__store_int$right_STA_0$left_STA_1 = 229,
    _4_main__local$result_STA_0$value_LIT_0 = 38,
    _4_main__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1 = 107,
    _4_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1 = 200,
    _4_main__global$result_STA_0$value_LIT_0 = 146,
    _4_main__convert_void_star2unsigned_long$left_STA_0$result_STA_0 = 21,
    _4_main__convert_unsigned_long2int$left_STA_0$result_STA_0 = 12,
    _4_main__call$func_LIT_0 = 94,
    _4_main__Eq_unsigned_long_unsigned_long2int$left_STA_0$result_STA_0$right_STA_1 = 50,
    _4_main__MinusA_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 191,
    _4_main__goto$label_LAB_0 = 91,
    _4_main__IndexPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1 = 5,
    _4_main__store_int$left_STA_0$right_STA_1 = 140,
    _4_main__Shiftrt_unsigned_long_int2unsigned_long$left_STA_0$result_STA_0$right_STA_1 = 182,
    _4_main__load_int$left_STA_0$result_STA_0 = 129,
    _4_main__Shiftlt_unsigned_long_int2unsigned_long$left_STA_0$result_STA_0$right_STA_1 = 103,
    _4_main__MinusA_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 82,
    _4_main__formal$result_STA_0$value_LIT_0 = 25,
    _4_main__Mult_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 246,
    _4_main__load_unsigned_long$left_STA_0$result_STA_0 = 114,
    _4_main__branchIfTrue$expr_STA_0$label_LAB_0 = 89,
    _4_main__Shiftrt_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 76,
    _4_main__Ne_unsigned_long_unsigned_long2int$left_STA_0$result_STA_0$right_STA_1 = 219,
    _4_main__PlusA_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1 = 135,
    _4_main__convert_unsigned_char2unsigned_long$left_STA_0$result_STA_0 = 220,
    _4_main__constant_unsigned_long$result_STA_0$value_LIT_0 = 26,
    _4_main__convert_void_star2void_star$left_STA_0$result_STA_0 = 14,
    _4_main__constant_int$result_STA_0$value_LIT_0 = 58,
    _4_main__BAnd_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1 = 217
} ;
unsigned char _4_main_$array[1][470]  = { {        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__formal$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__load_int$left_STA_0$result_STA_0,        _4_main__global$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__load_int$left_STA_0$result_STA_0,        _4_main__MinusA_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _4_main__store_int$right_STA_0$left_STA_1,        _4_main__global$result_STA_0$value_LIT_0, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__load_int$left_STA_0$result_STA_0,        _4_main__formal$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__load_void_star$left_STA_0$result_STA_0,        _4_main__convert_void_star2unsigned_long$left_STA_0$result_STA_0, 
            _4_main__convert_unsigned_long2int$left_STA_0$result_STA_0,        _4_main__Mult_int_int2int$left_STA_0$result_STA_0$right_STA_1,        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__store_int$left_STA_0$right_STA_1, 
            _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__load_int$left_STA_0$result_STA_0,        _4_main__formal$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__load_int$left_STA_0$result_STA_0, 
            _4_main__MinusA_int_int2int$left_STA_0$result_STA_0$right_STA_1,        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__store_int$left_STA_0$right_STA_1,        _4_main__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)5,        (unsigned char)21,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__store_unsigned_long$left_STA_0$right_STA_1,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)24, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__formal$result_STA_0$value_LIT_0, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__load_void_star$left_STA_0$result_STA_0,        _4_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)8,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__convert_int2unsigned_long$left_STA_0$result_STA_0, 
            _4_main__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1,        _4_main__IndexPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _4_main__load_void_star$left_STA_0$result_STA_0,        _4_main__convert_void_star2void_star$left_STA_0$result_STA_0, 
            _4_main__store_void_star$right_STA_0$left_STA_1,        _4_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)24, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__load_void_star$left_STA_0$result_STA_0, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)32,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__store_void_star$left_STA_0$right_STA_1,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)24, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__load_void_star$left_STA_0$result_STA_0, 
            _4_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__convert_int2unsigned_long$left_STA_0$result_STA_0,        _4_main__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1, 
            _4_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)24,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__store_void_star$left_STA_0$right_STA_1,        _4_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)32,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__load_void_star$left_STA_0$result_STA_0,        _4_main__load_unsigned_char$left_STA_0$result_STA_0,        _4_main__convert_unsigned_char2unsigned_long$left_STA_0$result_STA_0,        _4_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)40,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__store_unsigned_long$left_STA_0$right_STA_1,        _4_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)40,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__load_unsigned_long$left_STA_0$result_STA_0,        _4_main__Ne_unsigned_long_unsigned_long2int$left_STA_0$result_STA_0$right_STA_1,        _4_main__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)14, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__goto$label_LAB_0,        (unsigned char)87,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__load_int$left_STA_0$result_STA_0, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)40,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__load_unsigned_long$left_STA_0$result_STA_0,        _4_main__convert_unsigned_long2int$left_STA_0$result_STA_0,        _4_main__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1, 
            _4_main__store_int$right_STA_0$left_STA_1,        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__load_int$left_STA_0$result_STA_0, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)32,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__load_void_star$left_STA_0$result_STA_0,        _4_main__convert_void_star2unsigned_long$left_STA_0$result_STA_0,        _4_main__convert_unsigned_long2int$left_STA_0$result_STA_0, 
            _4_main__Shiftrt_int_int2int$left_STA_0$result_STA_0$right_STA_1,        _4_main__store_int$right_STA_0$left_STA_1,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)40, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__load_unsigned_long$left_STA_0$result_STA_0, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__load_unsigned_long$left_STA_0$result_STA_0,        _4_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)5, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)16,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__load_unsigned_long$left_STA_0$result_STA_0,        _4_main__Shiftlt_unsigned_long_int2unsigned_long$left_STA_0$result_STA_0$right_STA_1,        _4_main__PlusA_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1,        _4_main__PlusA_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__store_unsigned_long$left_STA_0$right_STA_1,        _4_main__goto$label_LAB_0,        (unsigned char)91, 
            (unsigned char)255,        (unsigned char)255,        (unsigned char)255,        _4_main__goto$label_LAB_0, 
            (unsigned char)86,        (unsigned char)255,        (unsigned char)255,        (unsigned char)255, 
            _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__load_unsigned_long$left_STA_0$result_STA_0,        _4_main__convert_unsigned_long2int$left_STA_0$result_STA_0, 
            _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__load_int$left_STA_0$result_STA_0,        _4_main__BOr_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _4_main__store_int$right_STA_0$left_STA_1, 
            _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)24,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__load_void_star$left_STA_0$result_STA_0,        _4_main__convert_void_star2unsigned_long$left_STA_0$result_STA_0, 
            _4_main__convert_unsigned_long2int$left_STA_0$result_STA_0,        _4_main__global$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__load_int$left_STA_0$result_STA_0,        _4_main__Shiftrt_int_int2int$right_STA_0$result_STA_0$left_STA_1, 
            _4_main__store_int$right_STA_0$left_STA_1,        _4_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)53, 
            (unsigned char)73,        (unsigned char)165,        (unsigned char)73,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)16,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__load_unsigned_long$left_STA_0$result_STA_0,        _4_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)255,        (unsigned char)255, 
            (unsigned char)255,        (unsigned char)255,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__BAnd_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1,        _4_main__Eq_unsigned_long_unsigned_long2int$left_STA_0$result_STA_0$right_STA_1, 
            _4_main__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)9,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__goto$label_LAB_0,        (unsigned char)80,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__constant_unsigned_long$result_STA_0$value_LIT_0,        (unsigned char)110, 
            (unsigned char)12,        (unsigned char)21,        (unsigned char)188,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__constant_int$result_STA_0$value_LIT_0, 
            (unsigned char)32,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__load_unsigned_long$left_STA_0$result_STA_0,        _4_main__Shiftrt_unsigned_long_int2unsigned_long$left_STA_0$result_STA_0$right_STA_1,        _4_main__Eq_unsigned_long_unsigned_long2int$left_STA_0$result_STA_0$right_STA_1, 
            _4_main__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)9,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__goto$label_LAB_0,        (unsigned char)26,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)48, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__string$result_STA_0$value_LIT_0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__convert_void_star2void_star$left_STA_0$result_STA_0,        _4_main__store_void_star$right_STA_0$left_STA_1,        _4_main__call$func_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__goto$label_LAB_0, 
            (unsigned char)48,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)56,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__string$result_STA_0$value_LIT_0,        (unsigned char)29,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__convert_void_star2void_star$left_STA_0$result_STA_0,        _4_main__store_void_star$right_STA_0$left_STA_1, 
            _4_main__call$func_LIT_0,        (unsigned char)2,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__goto$label_LAB_0,        (unsigned char)26,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _4_main__local$result_STA_0$value_LIT_0,        (unsigned char)64, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__string$result_STA_0$value_LIT_0, 
            (unsigned char)29,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__convert_void_star2void_star$left_STA_0$result_STA_0,        _4_main__store_void_star$right_STA_0$left_STA_1,        _4_main__call$func_LIT_0,        (unsigned char)3, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _4_main__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _4_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _4_main__return_int$expr_STA_0}};
extern int strncmp(char const   *s1 ,
                   char const   *s2 , unsigned long maxlen ) ;
struct _3_main__opaque_Node_1 *_3_main__opaque_list2_1  =    (struct _3_main__opaque_Node_1 *)0;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int main(int argc , char **argv ) ;
void megaInit(void) ;
extern unsigned long strlen(char const   *s ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
struct _3_main__opaque_Node_1 *_3_main__opaque_list1_1  =    (struct _3_main__opaque_Node_1 *)0;
extern void *malloc(unsigned long size ) ;
extern int scanf(char const   *format  , ...) ;
int main(int argc , char **argv ) 
{ 
  int i7 ;
  int r8 ;
  struct _3_main__opaque_Node_1 *p9 ;
  int _3_main__BEGIN_0 ;
  int _3_main__END_0 ;
  int _3_main__BARRIER_1 ;
  char _4_main_$locals[72] ;
  int _4_main__alwaysOne ;
  union _4_main_$node _4_main_$stack[1][32] ;
  union _4_main_$node *_4_main_$sp[1] ;
  unsigned char *_4_main_$pc[1] ;
  unsigned char _4_main_$currentOp ;
  int randomFuns_n24 ;
  int randomFuns_body_i25 ;

  {
  megaInit();
  {  /* __blockattribute__(__ATOMIC__)*/ 
  _3_main__BEGIN_0 = 1;
  i7 = 0;
  while (i7 < 2) {
    r8 = rand();
    p9 = (struct _3_main__opaque_Node_1 *)malloc(sizeof(struct _3_main__opaque_Node_1 ));
    if (p9 != (struct _3_main__opaque_Node_1 *)0UL) {
      p9->data = r8;
      if (_3_main__opaque_list1_1 != (struct _3_main__opaque_Node_1 *)0UL) {
        p9->next = _3_main__opaque_list1_1->next;
        _3_main__opaque_list1_1->next = p9;
      } else {
        p9->next = p9;
        _3_main__opaque_list1_1 = p9;
      }
    } else {

    }
    i7 ++;
  }
  _3_main__opaque_list2_1 = _3_main__opaque_list1_1;
  _3_main__END_0 = 1;
  }
  _3_main__BARRIER_1 = 1;
  _4_main__alwaysOne = 1;
  _4_main_$sp[0] = _4_main_$stack[0];
  _4_main_$pc[0] = _4_main_$array[0];
  while (1) {
    randomFuns_body_i25 = 0;
    while (randomFuns_body_i25 < 4) {
      randomFuns_n24 = 1;
      while (randomFuns_n24 < 1192225) {
        _4_main__alwaysOne ++;
        randomFuns_n24 += 4516;
      }
      _4_main__alwaysOne -= 264;
      randomFuns_body_i25 ++;
    }
    _4_main_$currentOp = *(_4_main_$pc[0]);
    if (_4_main_$currentOp == _4_main__branchIfTrue$expr_STA_0$label_LAB_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      if ((_4_main_$sp[0] + 0)->_int) {
        _4_main_$pc[0] += *((int *)_4_main_$pc[0]);
      } else {
        _4_main_$pc[0] += 4;
      }
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__convert_void_star2void_star$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_void_star = (_4_main_$sp[0] + 0)->_void_star;
    } else
    if (_4_main_$currentOp == _4_main__call$func_LIT_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      switch (*((int *)_4_main_$pc[0])) {
      case 1: 
      printf(*((char const   * __restrict  *)(_4_main_$locals + 48)));
      break;
      case 2: 
      printf(*((char const   * __restrict  *)(_4_main_$locals + 56)));
      break;
      case 3: 
      printf(*((char const   * __restrict  *)(_4_main_$locals + 64)));
      break;
      }
      _4_main_$pc[0] += 4;
    } else
    if (_4_main_$currentOp == _4_main__constant_int$result_STA_0$value_LIT_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 1)->_int = *((int *)_4_main_$pc[0]);
      (_4_main_$sp[0]) ++;
      _4_main_$pc[0] += 4;
    } else
    if (_4_main_$currentOp == _4_main__formal$result_STA_0$value_LIT_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      switch (*((int *)_4_main_$pc[0])) {
      case 1: 
      (_4_main_$sp[0] + 1)->_void_star = (void *)(& argv);
      break;
      case 0: 
      (_4_main_$sp[0] + 1)->_void_star = (void *)(& argc);
      break;
      }
      (_4_main_$sp[0]) ++;
      _4_main_$pc[0] += 4;
    } else
    if (_4_main_$currentOp == _4_main__load_unsigned_long$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_unsigned_long = *((unsigned long *)(_4_main_$sp[0] + 0)->_void_star);
    } else
    if (_4_main_$currentOp == _4_main__MinusA_int_int2int$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + 0)->_int - (_4_main_$sp[0] + -1)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__convert_unsigned_char2unsigned_long$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_unsigned_long = (unsigned long )(_4_main_$sp[0] + 0)->_unsigned_char;
    } else
    if (_4_main_$currentOp == _4_main__store_unsigned_long$left_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      *((unsigned long *)(_4_main_$sp[0] + 0)->_void_star) = (_4_main_$sp[0] + -1)->_unsigned_long;
      _4_main_$sp[0] += -2;
    } else
    if (_4_main_$currentOp == _4_main__string$result_STA_0$value_LIT_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 1)->_void_star = (void *)(_4_main_$strings + *((int *)_4_main_$pc[0]));
      (_4_main_$sp[0]) ++;
      _4_main_$pc[0] += 4;
    } else
    if (_4_main_$currentOp == _4_main__Ne_unsigned_long_unsigned_long2int$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + 0)->_unsigned_long != (_4_main_$sp[0] + -1)->_unsigned_long;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__BAnd_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_unsigned_long = (_4_main_$sp[0] + -1)->_unsigned_long & (_4_main_$sp[0] + 0)->_unsigned_long;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__convert_void_star2unsigned_long$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_unsigned_long = (unsigned long )(_4_main_$sp[0] + 0)->_void_star;
    } else
    if (_4_main_$currentOp == _4_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_void_star = (_4_main_$sp[0] + -1)->_void_star + (_4_main_$sp[0] + 0)->_unsigned_long;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__store_void_star$left_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      *((void **)(_4_main_$sp[0] + 0)->_void_star) = (_4_main_$sp[0] + -1)->_void_star;
      _4_main_$sp[0] += -2;
    } else
    if (_4_main_$currentOp == _4_main__store_int$left_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      *((int *)(_4_main_$sp[0] + 0)->_void_star) = (_4_main_$sp[0] + -1)->_int;
      _4_main_$sp[0] += -2;
    } else
    if (_4_main_$currentOp == _4_main__convert_int2unsigned_long$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_unsigned_long = (unsigned long )(_4_main_$sp[0] + 0)->_int;
    } else
    if (_4_main_$currentOp == _4_main__store_void_star$right_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      *((void **)(_4_main_$sp[0] + -1)->_void_star) = (_4_main_$sp[0] + 0)->_void_star;
      _4_main_$sp[0] += -2;
    } else
    if (_4_main_$currentOp == _4_main__local$result_STA_0$value_LIT_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 1)->_void_star = (void *)(_4_main_$locals + *((int *)_4_main_$pc[0]));
      (_4_main_$sp[0]) ++;
      _4_main_$pc[0] += 4;
    } else
    if (_4_main_$currentOp == _4_main__load_unsigned_char$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_unsigned_char = *((unsigned char *)(_4_main_$sp[0] + 0)->_void_star);
    } else
    if (_4_main_$currentOp == _4_main__PlusA_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_unsigned_long = (_4_main_$sp[0] + 0)->_unsigned_long + (_4_main_$sp[0] + -1)->_unsigned_long;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__convert_unsigned_long2int$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_int = (int )(_4_main_$sp[0] + 0)->_unsigned_long;
    } else
    if (_4_main_$currentOp == _4_main__PlusA_int_int2int$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + 0)->_int + (_4_main_$sp[0] + -1)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__return_int$expr_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      return ((_4_main_$sp[0] + 0)->_int);
    } else
    if (_4_main_$currentOp == _4_main__load_int$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_int = *((int *)(_4_main_$sp[0] + 0)->_void_star);
    } else
    if (_4_main_$currentOp == _4_main__Shiftrt_unsigned_long_int2unsigned_long$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_unsigned_long = (_4_main_$sp[0] + 0)->_unsigned_long >> (_4_main_$sp[0] + -1)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__Shiftrt_int_int2int$right_STA_0$result_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + -1)->_int >> (_4_main_$sp[0] + 0)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__BOr_int_int2int$right_STA_0$result_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + -1)->_int | (_4_main_$sp[0] + 0)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__Mult_int_int2int$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + 0)->_int * (_4_main_$sp[0] + -1)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__Mult_unsigned_long_unsigned_long2unsigned_long$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_unsigned_long = (_4_main_$sp[0] + 0)->_unsigned_long * (_4_main_$sp[0] + -1)->_unsigned_long;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__global$result_STA_0$value_LIT_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      switch (*((int *)_4_main_$pc[0])) {
      case 1: 
      (_4_main_$sp[0] + 1)->_void_star = (void *)(& _1_main_entropy);
      break;
      case 0: 
      (_4_main_$sp[0] + 1)->_void_star = (void *)(& _2entropy);
      break;
      }
      (_4_main_$sp[0]) ++;
      _4_main_$pc[0] += 4;
    } else
    if (_4_main_$currentOp == _4_main__IndexPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_void_star = (_4_main_$sp[0] + -1)->_void_star + (_4_main_$sp[0] + 0)->_unsigned_long;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__store_int$right_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      *((int *)(_4_main_$sp[0] + -1)->_void_star) = (_4_main_$sp[0] + 0)->_int;
      _4_main_$sp[0] += -2;
    } else
    if (_4_main_$currentOp == _4_main__Shiftrt_int_int2int$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + 0)->_int >> (_4_main_$sp[0] + -1)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__constant_unsigned_long$result_STA_0$value_LIT_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 1)->_unsigned_long = *((unsigned long *)_4_main_$pc[0]);
      (_4_main_$sp[0]) ++;
      _4_main_$pc[0] += 8;
    } else
    if (_4_main_$currentOp == _4_main__Eq_unsigned_long_unsigned_long2int$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + 0)->_unsigned_long == (_4_main_$sp[0] + -1)->_unsigned_long;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__load_void_star$left_STA_0$result_STA_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + 0)->_void_star = *((void **)(_4_main_$sp[0] + 0)->_void_star);
    } else
    if (_4_main_$currentOp == _4_main__Shiftlt_unsigned_long_int2unsigned_long$left_STA_0$result_STA_0$right_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_unsigned_long = (_4_main_$sp[0] + 0)->_unsigned_long << (_4_main_$sp[0] + -1)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__label$label_LAB_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
    } else
    if (_4_main_$currentOp == _4_main__MinusA_int_int2int$right_STA_0$result_STA_0$left_STA_1) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      (_4_main_$sp[0] + -1)->_int = (_4_main_$sp[0] + -1)->_int - (_4_main_$sp[0] + 0)->_int;
      (_4_main_$sp[0]) --;
    } else
    if (_4_main_$currentOp == _4_main__goto$label_LAB_0) {
      _4_main_$pc[0] += _4_main__alwaysOne;
      _4_main_$pc[0] += *((int *)_4_main_$pc[0]);
    } else {

    }
  }
}
}
void megaInit(void) 
{ 


  {

}
}
