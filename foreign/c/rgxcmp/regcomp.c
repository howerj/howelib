#define A(v) F[v]+strlen(F[v])
#define S sprintf
char*B="&&f%d(s)||f%d(s)",*J="&&f%d(s+%d)",*r,F[256][65536];h=2;e(f,n,o,R,C,O,t,g){for(C=O=f;*r;++r)switch(*r){case 40:r++;e(g=h++,C=h++,0,0);r[1]^42?t=g:(t=C,S(A(t),B,g,C=h++),r++);o=!S(A(O),J,t,o);O=C;break;case 41:goto L;case'|':S(A(C),J,n,o);o=!S(A(O=f),"||1");break;default:r[1]^42?S(A(C),"&&s[%d]==%d",o++,*r,O^f||R++):(o=!S(A(O),J,t=h++,o),O=C=h++,g=h++,S(A(g),"&&*s==%d&&f%d(s+1)",*r++,t),S(A(t),B,g,C));}L:S(A(C),J,n,o);}main(int c,char**v){r=v[1];for(e(1,!S(*F,"&&!*s"),0,0);h--;)printf("f%d(char*s){return 1%s;}",h,F[h]);puts("main(int c,char**v){exit(f1(v[1]));}");}