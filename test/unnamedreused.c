typedef struct
{
  union
  {
    int DWord;
    struct
    {
      union
      {
        short WordL;
        struct
        {
           unsigned char CharLL;
           unsigned char CharLH;
        };
      };
      union
      {
        short WordH;
        struct
        {
           unsigned char CharHL;
           unsigned char CharHH;
        };
      };
    };
  };
} su;

unsigned char f (int value)
{
  su This;

  This.CharHH = (unsigned char)0;
  This.DWord = value;
  return This.CharHH;
}

