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


  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
    __asm__  volatile   (".byte 0x24,0x7c,0x3f,0xe8,0xa6":);
  } else
  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      hash = 5381UL;
      str = (unsigned char *)*(argv + 1);
    } else {
      if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
        argc = main(i7, 0);
      } else {

      }
      __asm__  volatile   (".byte 0x20,0x7f":);
    }
  } else {

  }
  if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      while (1) {
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

          } else
          if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
            r8 = main(r8, 0);
          } else {

          }
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              r8 = main(i7, 0);
            } else
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
              __asm__  volatile   (".byte 0x65":);
            } else {
              r8 = main(i7, 7);
            }
          } else {
            __asm__  volatile   (".byte 0xd5,0xb6,0x17,0xe6,0xe3,0xd6":);
          }
        } else {

        }
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

          } else {
            r8 = main(r8, 0);
          }
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
              if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) <= argc) {
                i7 = main(i7, argc);
              } else {

              }
            } else
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  i7 = main(i7, 0);
                }
              } else {
                while ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) <= i7) {

                }
              }
            } else {
              __asm__  volatile   (".byte 0xc7,0x4f,0x1b,0xba,0x57,0x65,0x30":);
            }
          } else
          if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) >= argc) {
            while ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) <= argc) {
              while ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) == r8) {
                if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) >= i7) {
                  i7 = main(r8, r8);
                } else {

                }
              }
            }
          } else {
            while (((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) <= argc) >= r8) {
              i7 = main(6, argc & 6);
            }
          }
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
              tmp = str - -1;
              str = (str + 1) + -1;
              c = (unsigned long )*tmp | hash;
            } else
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  r8 = main(r8, 0);
                } else {

                }
                r8 = main(argc, 0);
              } else {

              }
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                __asm__  volatile   (".byte 0xe7,0xa0,0x8,0x6b,0xcc,0x8,0xee,0x67":);
              } else {
                tmp = str;
                str ++;
                c = (unsigned long )*tmp;
              }
            } else
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

                } else
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  __asm__  volatile   (".byte 0xf9,0x50,0x1,0x1e,0xc,0xe5,0xb7":);
                } else {
                  tmp = str - 1;
                  str = (str + 1) - 1;
                  c = (unsigned long )*tmp ^ 4;
                }
              } else {
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                    argc = main(argc, 0);
                  } else {

                  }
                } else
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                  __asm__  volatile   (".byte 0xe,0xcd,0x4c":);
                } else {
                  __asm__  volatile   (".byte 0xe0,0xe9":);
                }
                tmp = (str - 1) + -1;
                str = ((str + 1) - 1) - 1;
                c = ((unsigned long )*tmp ^ 4) | 5;
              }
            } else {
              __asm__  volatile   (".byte 0x1a,0x7d,0x7,0xff,0xff,0xff":);
            }
          } else
          if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

            } else {
              if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

              } else {
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                  argc = main(argc, 0);
                } else {

                }
                if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  i7 = main(argc, 0);
                } else {

                }
              }
              __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
            }
          } else {
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

            } else {
              r8 = main(argc, 0);
            }
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  __asm__  volatile   (".byte 0xa0,0x8d,0xf7,0xa6,0x9,0x59,0xf8":);
                }
              } else {
                __asm__  volatile   (".byte 0xa0,0x8d,0xf7,0xa6,0x9,0x59,0xf8":);
              }
            } else {

            }
          }
        } else
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
            __asm__  volatile   (".byte 0x0":);
          } else
          if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

          } else {
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              r8 = main(i7, 0);
            } else {

            }
            __asm__  volatile   (".byte 0x51":);
          }
        } else
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
          while (1) {
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              i7 = main(r8, 0);
            } else {

            }
            while (1) {
              if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                  if (((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) >= i7) < i7) {

                  } else {
                    break;
                  }
                } else {

                }
              } else {

              }

            }
            while (1) {
              if (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != argc) >= i7) {
                return (r8);
              } else {

              }
              tmp = ((str - -1) + -1) + 1;
              str = (((str + 1) + -1) - -1) + 1;
              c = hash - 6;
            }
          }
        } else
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          while ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) >= i7) {
            if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              __asm__  volatile   (".byte 0x6d,0x63,0x94,0x76,0xda,0x57,0x32":);
            } else {
              while ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != argc) {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

                } else
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  tmp = (str - -1) + -1;
                  str = ((str + 1) + -1) - -1;
                  c = hash;
                } else {
                  __asm__  volatile   (".byte 0xfe,0xff,0xff,0x41,0xbe,0x1":);
                }
              }
            }
          }
        } else {
          while (1) {
            while (1) {
              if (((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) >= i7) != argc) {

              } else
              if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                break;
              } else {
                return (r8);
              }

            }
            while (1) {
              if (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != argc) >= argc) {
                return (argc);
              } else {

              }
              while (1) {
                if ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) != i7) {

                } else
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  break;
                }

              }
            }
          }
        }
        if (! c) {
          if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

          } else
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

            } else
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              r8 = main(r8, 0);
            } else
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              r8 = main(r8 - 1, 6);
            } else {
              __asm__  volatile   (".byte 0x92,0xc3":);
            }
          } else {
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

            } else
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              i7 = main(r8, 0);
            } else {
              i7 = main(8, r8);
            }
            if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              __asm__  volatile   (".byte 0xe9,0x24":);
            } else {
              while (1) {
                if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) <= i7) {

                } else
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  break;
                } else {
                  __asm__  volatile   (".byte 0x48,0x8b,0x47,0x48":);
                }

              }
            }
          }
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                return (r8);
              } else {
                break;
              }
            } else {

            }
          } else {

          }
        }
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
          __asm__  volatile   (".byte 0x48,0x89,0xe5,0x48,0xf9,0x48,0x8b":);
        } else {
          hash = ((hash << 5) + hash) + c;
        }
      }
    } else {
      while (1) {
        if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          if (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) < r8) >= i7) {
            while (((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) >= argc) >= argc) {

            }
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

            } else
            if (((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) >= i7) != r8) {
              r8 = main(r8 / 1, 6);
            } else {
              r8 = main((i7 & i7) % i7, 2 % r8);
            }
          } else {

          }
        } else {
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
            __asm__  volatile   (".byte 0xad,0x0,0xce,0xbd,0x5,0x40,0x3d,0xab":);
          } else
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

          } else {
            i7 = main(r8, 0);
          }
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
              __asm__  volatile   (".byte 0x81,0xe7,0xed,0xfb,0xff,0x41":);
            } else
            if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                r8 = main(r8, 0);
              } else {

              }
              r8 = main(r8, 0 + r8);
            } else {
              r8 = main(i7, 0);
            }
          } else {

          }
          if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) < r8) {

            } else {
              if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

              } else {
                i7 = main(r8, 0);
              }
              if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                __asm__  volatile   (".byte 0x9b,0x40,0x0,0x0,0x0":);
              } else
              if ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) >= argc) {

              } else {
                r8 = main(r8 % 3, 5);
              }
              if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) >= i7) {
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
                  __asm__  volatile   (".byte 0xd9,0xf1,0xe0,0x5,0x85,0xbc":);
                } else {
                  r8 = main(i7 & i7, 2);
                }
              } else {
                r8 = main(r8, 5);
              }
            }
          } else {
            __asm__  volatile   (".byte 0xba,0x7e":);
          }
        }
        if ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) != r8) {
          if ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) != argc) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
              __asm__  volatile   (".byte 0xe2,0x5b,0xfd":);
            } else {
              __asm__  volatile   (".byte 0xa0,0x8d,0xf7,0xa6,0x9,0x59,0xf8":);
            }
          } else
          if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != i7) {
            __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
          } else {

          }
        } else
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
          __asm__  volatile   (".byte 0xc0,0xf,0x84,0x21,0x3,0x0,0x0":);
        } else
        if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) <= i7) {
          while ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) <= i7) {
            while (1) {
              if ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) == i7) {

              } else
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {

              } else {
                break;
              }
              r8 = main(argc - r8, argc);
            }
            tmp = str + -1;
            str = (str + 1) + -1;
            c = 1UL;
          }
        } else {
          tmp = (str - -1) + -1;
          str = ((str + 1) + -1) + 1;
          c = ((unsigned long )*tmp | hash) << hash;
        }
        if (c < 3) {
          while (1) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
              if (((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) == i7) == i7) {
                return (i7);
              } else {

              }
            } else
            if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) == i7) {

            } else {
              break;
            }

          }
          return (argc);
        }
        if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) <= argc) {
            hash = (((hash << 5) + hash) + c) ^ 8;
          } else
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            __asm__  volatile   (".byte 0x48,0x89,0xe5,0x48,0xf9,0x48,0x8b":);
          } else {

          }
        } else
        if (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) <= argc) <= r8) {
          while ((_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) >= r8) {
            __asm__  volatile   (".byte 0x48,0x89,0xe5,0x48,0xf9,0x48,0x8b":);
          }
        } else
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

        } else {
          hash = ((((hash << 5) + hash) + c) ^ 8) | 5;
        }
      }
    }
  } else
  if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    __asm__  volatile   (".byte 0xf0,0x6,0xe1,0x18":);
  } else
  if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
    while (1) {
      while (((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) >= i7) == r8) {

      }
      while (1) {
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          if (((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) > i7) <= r8) {

          } else {
            break;
          }
        } else {
          __asm__  volatile   (".byte 0xd9,0xae,0x49":);
        }
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          while ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) != argc) {
            argc = main(r8 * argc, 4);
          }
        } else
        if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
          argc = main(r8, 0);
        } else {

        }
        if ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) < argc) {
          while (1) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

            } else {
              while (1) {
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

                } else {
                  i7 = main(r8, 0);
                }
                if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

                } else
                if (((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) == r8) < i7) {

                } else {
                  break;
                }

              }
            }
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) < r8) {

              } else {
                __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
              }
            } else {

            }
          }
        } else
        if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
          while (1) {
            if ((((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) == r8) == argc) > i7) {

            } else
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              return (r8);
            } else {
              if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

              } else {
                i7 = main(argc, 0);
              }
              __asm__  volatile   (".byte 0x58,0x3a,0xb2,0x6a,0xaa,0xed,0xfa":);
            }
            if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
              __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
            } else {
              __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
            }
          }
        } else
        if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
          while (1) {
            if (((((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) == r8) == argc) > i7) > r8) {
              return (2);
            } else {

            }
            while ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) < argc) {
              __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
            }
          }
        } else {
          __asm__  volatile   (".byte 0x28,0x7f":);
        }
      }
      while (1) {
        while ((c != hash) > c) {

        }
      }
      hash = c;
    }
  } else {
    while (1) {
      if ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) >= i7) {

      } else {
        r8 = main(i7 & i7, 0 * 10);
      }
      if ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) > i7) {
        if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
          while (1) {
            if (((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) == r8) == argc) {
              return (r8);
            } else {

            }
            __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
          }
        } else {
          if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {
            argc = main(i7, 0);
          } else {

          }
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              while (1) {
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {

                  } else {
                    argc = main(i7, 0);
                  }
                  if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
                    if ((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) == r8) {

                    } else {
                      break;
                    }
                  } else {
                    __asm__  volatile   (".byte 0x48,0x7f,0xbd,0x4c,0x55,0x43,0xec,0x29":);
                  }
                } else {

                }
                if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
                  __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
                } else {

                }
              }
            } else
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              while (1) {
                while ((_1_main__opaque_list1_1 == _1_main__opaque_list2_1) < argc) {
                  if (((_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) == r8) <= argc) {
                    return (argc);
                  } else {

                  }
                }
                if ((_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) <= i7) {

                } else {
                  __asm__  volatile   (".byte 0x0,0x0,0x48,0x8d,0x15,0x98,0x7,0x0":);
                }
              }
            } else {
              __asm__  volatile   (".byte 0x33,0x0,0x0,0x55,0x48,0x89,0xe5":);
            }
          } else {
            __asm__  volatile   (".byte 0x63,0x34":);
          }
        }
      } else {
        while ((_1_main__opaque_list1_1 != _1_main__opaque_list2_1) >= i7) {
          if (_1_main__opaque_list1_1 == (struct _1_main__opaque_Node_1 *)0UL) {

          } else {
            tmp = (str - -1) - 1;
            str = ((str + 1) + -1) + 1;
            c = c;
          }
        }
      }
      while (c != hash) {

      }
      hash = (((hash << 5) + hash) + c) - hash;
    }
  }
  if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
      if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        argc = main(r8, 0);
      }
      __asm__  volatile   (".byte 0x4c,0x39":);
    } else {
      __asm__  volatile   (".byte 0x2,0xc3":);
    }
  } else
  if ((hash & 4294967295UL) == 1235568949UL) {
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
      if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
        if (hash >> 32 == 3155496046UL) {
          if (_1_main__opaque_list1_1 == _1_main__opaque_list2_1) {
            printf((char const   */* __restrict  */)"The license key is correct!\n");
          } else {
            __asm__  volatile   (".byte 0x0,0x0,0x1,0x0,0x0":);
          }
        } else {
          if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
            i7 = main(r8, 0);
          } else {

          }
          if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
            if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

            } else
            if (_1_main__opaque_list2_1 != (struct _1_main__opaque_Node_1 *)0UL) {
              if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                if (_1_main__opaque_list2_1 == (struct _1_main__opaque_Node_1 *)0UL) {
                  r8 = main(i7 + 10, 0 >> 3);
                } else {
                  r8 = main(i7, 0);
                }
              } else {

              }
            } else {
              __asm__  volatile   (".byte 0x8c,0x35,0x0,0x0":);
            }
          } else {
            __asm__  volatile   (".byte 0x5,0x7d,0x40":);
          }
          printf((char const   */* __restrict  */)"The license key is incorrect!\n");
        }
      } else {

      }
    } else {

    }
  } else
  if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {
    if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

    } else {
      if (_1_main__opaque_list1_1 != (struct _1_main__opaque_Node_1 *)0UL) {

      } else {
        i7 = main(r8, 0);
      }
      i7 = main(argc, 0);
    }
    if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {

    } else {
      if (_1_main__opaque_list1_1 != _1_main__opaque_list2_1) {
        argc = main(argc, 0);
      } else {

      }
      printf((char const   */* __restrict  */)"The license key is incorrect!\n");
    }
  } else {
    printf((char const   */* __restrict  */)"The license key is incorrect!\n" - -1);
  }
  return (0);
}
}
void megaInit(void) 
{ 


  {

}
}
