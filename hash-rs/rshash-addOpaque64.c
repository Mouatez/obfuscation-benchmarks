/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _1_main__opaque_Node_1;
struct _IO_FILE;
struct timeval;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
typedef unsigned long size_t;
typedef struct _IO_FILE FILE;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int fclose(void *stream ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
unsigned int RSHash(char *str , unsigned int len ) ;
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
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1), __leaf__)) strlen)(char const   *__s )  __attribute__((__pure__)) ;
void megaInit(void) ;
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
  unsigned char *str ;
  unsigned int hash ;
  size_t tmp ;
  unsigned int tmp___0 ;
  int i7 ;
  int r8 ;
  struct _1_main__opaque_Node_1 *p9 ;

  {
  megaInit();
  i7 = 0;
  while (i7 < 2) {
    r8 = rand();
    {
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
    }
    i7 ++;
  }
  _1_main__opaque_list2_1 = _1_main__opaque_list1_1;
  str = (unsigned char *)*(argv + 1);
  tmp = strlen((char const   *)str);
  tmp___0 = RSHash((char *)str, (unsigned int )tmp);
  hash = tmp___0;
  if (hash == 1294241610U) {
    printf((char const   */* __restrict  */)"The license key is correct!\n");
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n");
  }
  return (0);
}
}
unsigned int RSHash(char *str , unsigned int len ) 
{ 
  unsigned int b ;
  unsigned int a ;
  unsigned int hash ;
  unsigned int i ;
  int randomVars_BogusReturn7 ;

  {
  b = 378551U;
  a = 63689U;
  hash = 0U;
  i = 0U;
  i = 0U;
  while (1) {
    if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      __asm__  volatile   (".byte 0xcb,0x85,0xaf":);
    } else
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
      } else {

      }
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
        randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
      } else {

      }
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

      } else {
        len = RSHash(0, len);
      }
      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

        } else
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          __asm__  volatile   (".byte 0x0,0x48":);
        } else {
          randomVars_BogusReturn7 = main(0, & str);
        }
      } else
      if ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) < randomVars_BogusReturn7) {
        if ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) != randomVars_BogusReturn7) {
          if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
            __asm__  volatile   (".byte 0x83,0x33,0xb2,0x1d,0x4a":);
          } else {
            randomVars_BogusReturn7 = main(0 ^ randomVars_BogusReturn7, & str - -1);
          }
        } else {
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

          } else {
            randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
          }
          __asm__  volatile   (".byte 0x0,0x48":);
        }
      } else {

      }
      while (1) {
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              a = RSHash(0, i);
            } else {

            }
          } else
          if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
            __asm__  volatile   (".byte 0x60,0x4c,0x8b,0x42":);
          } else {
            __asm__  volatile   (".byte 0x60,0x4c,0x8b,0x42":);
          }
        } else {

        }
        if ((i < len) != 8) {

        } else
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

        } else {
          break;
        }
      }
    } else
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

      } else {
        randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
      }
      if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        len = RSHash(0, i);
      } else {

      }
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        if (! (i < len)) {
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

            } else
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              __asm__  volatile   (".byte 0xfa,0xce,0x64,0x17,0xf9,0xd4,0x78,0xb4":);
            } else {
              return (i);
            }
          } else {
            break;
          }
        }
      } else {
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

        } else
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            randomVars_BogusReturn7 = main(randomVars_BogusReturn7 - randomVars_BogusReturn7,
                                           & str + 1);
          } else {

          }
        } else {
          randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
        }
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          while (1) {
            if ((i < len) > 2) {

            } else {
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                hash = RSHash(0, hash);
              } else {

              }
              if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

              } else {
                hash = RSHash(0, len);
              }
              break;
            }
          }
        } else
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          __asm__  volatile   (".byte 0xf9,0x44,0x89,0xe0,0xe9,0xbe,0xfe,0xff":);
        } else {
          while (1) {
            if (((i < len) > 2) == randomVars_BogusReturn7) {
              while (1) {
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  while (((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) >= randomVars_BogusReturn7) == randomVars_BogusReturn7) {

                  }
                } else
                if ((_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) >= randomVars_BogusReturn7) {

                } else {
                  break;
                }
                hash = RSHash(0 << 5, b);
              }
              return (a);
            } else {

            }
          }
        }
      }
    } else
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          while (1) {
            if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
              if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  if ((i < len) >= 7) {

                  } else {
                    break;
                  }
                } else
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

                } else
                if (((i < len) >= 7) != randomVars_BogusReturn7) {
                  return (hash);
                } else {

                }
              } else {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
                } else {

                }
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
                }
                __asm__  volatile   (".byte 0x85,0xc0,0x75,0x7":);
              }
            } else {
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

              } else {
                a = RSHash(0, hash);
              }
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                while ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) <= randomVars_BogusReturn7) {

                }
              } else
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

              } else {
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
                } else {

                }
                i = RSHash(0, b);
              }
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                __asm__  volatile   (".byte 0xff,0xff,0xff,0xff,0x7d,0x2":);
              } else {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  a = RSHash(0, hash);
                } else {

                }
                if (((i < len) >= 7) <= 5) {
                  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                      return (i);
                    } else {
                      return (b);
                    }
                  } else {

                  }
                } else {

                }
              }
            }
          }
        } else {

        }
      } else
      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        __asm__  volatile   (".byte 0x0":);
      }
    } else {
      __asm__  volatile   (".byte 0x5b":);
    }
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

    } else
    if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

        } else {
          len = RSHash(0, i);
        }
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          hash = (((hash * a + (unsigned int )*str) << a) >> i) & hash;
          a = ((a * b - 5) + 10) << 2;
          str = (((str + 1) + -1) + 1) - -1;
          i = (10U - 10) ^ a;
        } else {
          hash = ((hash * a + (unsigned int )*str) << a) >> i;
          a = (a * b - 5) + 10;
          str = ((str + 1) + -1) + 1;
          i = 10U - 10;
        }
      } else {
        hash = (hash * a + (unsigned int )*str) << a;
        a = a * b - 5;
        str = (str + 1) + -1;
        i = 10U;
      }
    } else
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        hash = hash * a + (unsigned int )*str;
        a *= b;
        str ++;
        i ++;
      } else {

      }
    } else
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      __asm__  volatile   (".byte 0xb5,0xff":);
    } else {
      __asm__  volatile   (".byte 0xb5,0xff":);
    }
  }
  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
    if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
      __asm__  volatile   (".byte 0x0,0x0,0xc7,0x85,0xa8,0xff":);
    } else
    if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
      }
      if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        return (hash ^ 1);
      } else {
        return (hash);
      }
    } else {
      __asm__  volatile   (".byte 0x41,0xbf,0x10,0x0,0x0,0x0":);
    }
  } else {
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        randomVars_BogusReturn7 = main(randomVars_BogusReturn7, & str);
      }
    } else {
      while (1) {
        if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) == randomVars_BogusReturn7) {

        } else
        if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          break;
        } else {
          return (len);
        }

      }
    }
    __asm__  volatile   (".byte 0x48":);
  }
}
}
void megaInit(void) 
{ 


  {

}
}