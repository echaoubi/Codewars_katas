#define ab(n) n<=0 ? 0 : n
#define ad(n) n>255 ? 255 : n

int rgb(int r, int g, int b, char *output)
{
  r=ab(ad(r));
  g=ab(ad(g));
  b=ab(ad(b));
  char *po="0123456789ABCDEF";
  output[0]=po[r/16];
  output[1]=po[r%16];
  output[2]=po[g/16];
  output[3]=po[g%16];
  output[4]=po[b/16];
  output[5]=po[b%16];
   return 0; 
}
