/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _1_main__opaque_Node_1;
struct _IO_FILE;
struct timeval;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
typedef struct _IO_FILE FILE;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int fclose(void *stream ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
extern void exit(int status ) ;
struct _1_main__opaque_Node_1 {
   int data ;
   struct _1_main__opaque_Node_1 *next ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list1_1  =    (struct _1_main__opaque_Node_1 *)0;
extern int raise(int sig ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int main(int argc , char **argv ) ;
void megaInit(void) ;
extern unsigned long strlen(char const   *s ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
struct _1_main__opaque_Node_1 *_1_main__opaque_list2_1  =    (struct _1_main__opaque_Node_1 *)0;
extern void *malloc(unsigned long size ) ;
typedef struct _1_main__opaque_Node_1 *_1_main__opaque_List_1;
extern int scanf(char const   *format  , ...) ;
int main(int argc , char **argv ) 
{ 
  unsigned long hash ;
  unsigned char *str ;
  unsigned long c ;
  unsigned char *tmp ;
  int i7 ;
  int r8 ;
  struct _1_main__opaque_Node_1 *p9 ;

  {
  megaInit();
  {  /* __blockattribute__(__ATOMIC__)*/ 
  i7 = 0;
  while (i7 < 2) {
    r8 = rand();
    p9 = (struct _1_main__opaque_Node_1 *)malloc(sizeof(struct _1_main__opaque_Node_1 ));
    if (p9 != (struct _1_main__opaque_Node_1 *)0UL) {
      p9->data = r8;
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        p9->next = _1_main__opaque_list1_1->next;
        _1_main__opaque_list1_1->next = p9;
      } else {
        p9->next = p9;
        _1_main__opaque_list1_1 = p9;
      }
    } else {

    }
    i7 ++;
  }
  _1_main__opaque_list2_1 = _1_main__opaque_list1_1;
  }

  {  /* __blockattribute__(__ATOMIC__)*/ 
  _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
  _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
  }
  hash = 5381UL;
  str = (unsigned char *)*(argv + 1);
  while (1) {
    tmp = str;
    str ++;
    c = (unsigned long )*tmp;
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      argc = main(argc, 0);
    } else {

    }
    {  /* __blockattribute__(__ATOMIC__)*/ 
    _1_main__opaque_list1_1 = _1_main__opaque_list1_1->next;
    _1_main__opaque_list2_1 = _1_main__opaque_list2_1->next;
    }

    if (! c) {
      break;
    }
    hash = ((hash << 5) + hash) + c;
  }
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if ((hash & 4294967295UL) == 1235568949UL) {
      if (hash >> 32 == 3155496046UL) {
        printf((char const   */* __restrict  */)"The license key is correct!\n");
      } else {
        printf((char const   */* __restrict  */)"The license key is incorrect!\n");
      }
    } else {
      printf((char const   */* __restrict  */)"The license key is incorrect!\n");
    }
  } else {
    __asm__  volatile   (".byte 0xe0,0xe9,0x21":);
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
