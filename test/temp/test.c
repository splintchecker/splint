static int
PutPixel32MSB(char * chp, int x)
{
    unsigned char *addr;

    addr = &((unsigned char *)chp) [x];
    addr[0] = 3;
    return 1;
}
