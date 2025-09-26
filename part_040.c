      param_4[1] = (float)*pbVar1 / 255.0;
      param_4[2] = (float)*pbStack_8 / 255.0;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + iVar7;
      param_4[3] = (float)bVar2 / 255.0;
      param_4 = param_4 + 4;
      iVar5 = iVar5 + -1;
      pbStack_8 = pbStack_8 + iVar7;
    } while (iVar5 != 0);
  }
  if (uVar3 < param_3) {
    param_1 = param_1 + uVar3 * param_2;
    iVar7 = param_3 - uVar3;
    do {
      bVar2 = *param_1;
      param_1 = param_1 + param_2;
      *param_4 = (float)bVar2 / 255.0;
      iVar7 = iVar7 + -1;
      param_4 = param_4 + 1;
    } while (iVar7 != 0);
  }
  return;
}



void FUN_00a88160(byte *param_1,int param_2,uint param_3,float *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbStack_8;
  
  uVar3 = 0;
  if (3 < param_3) {
    pbVar6 = param_1 + param_2 * 3;
    iVar5 = (param_3 - 4 >> 2) + 1;
    iVar7 = param_2 * 4;
    uVar3 = iVar5 * 4;
    pbVar4 = param_1;
    pbStack_8 = param_1 + param_2 * 2;
    do {
      *param_4 = (float)*pbVar4;
      pbVar1 = pbVar4 + param_2;
      pbVar4 = pbVar4 + iVar7;
      param_4[1] = (float)*pbVar1;
      param_4[2] = (float)*pbStack_8;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + iVar7;
      param_4[3] = (float)bVar2;
      param_4 = param_4 + 4;
      iVar5 = iVar5 + -1;
      pbStack_8 = pbStack_8 + iVar7;
    } while (iVar5 != 0);
  }
  if (uVar3 < param_3) {
    param_1 = param_1 + uVar3 * param_2;
    iVar7 = param_3 - uVar3;
    do {
      bVar2 = *param_1;
      param_1 = param_1 + param_2;
      *param_4 = (float)bVar2;
      iVar7 = iVar7 + -1;
      param_4 = param_4 + 1;
    } while (iVar7 != 0);
  }
  return;
}



void FUN_00a88240(byte *param_1,int param_2,int param_3,float *param_4)

{
  byte *pbVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = (float)*param_1 / 255.0;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + param_2;
      param_4[1] = (float)*pbVar1 / 255.0;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a882a0(byte *param_1,int param_2,uint param_3,float *param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbStack_10;
  
  uVar3 = 0;
  if (3 < param_3) {
    pbStack_10 = param_1;
    pbVar6 = param_1 + param_2 * 3;
    iVar4 = (param_3 - 4 >> 2) + 1;
    pbVar5 = param_1 + param_2;
    uVar3 = iVar4 * 4;
    do {
      *param_4 = (float)*pbStack_10;
      param_4[1] = (float)pbVar5[1 - param_2];
      param_4[2] = (float)*pbVar5;
      pbVar1 = pbVar5 + param_2;
      param_4[3] = (float)(pbVar5 + (1 - param_2))[param_2];
      param_4[4] = (float)*pbVar1;
      param_4[5] = (float)pbVar5[param_2 + 1];
      param_4[6] = (float)*pbVar6;
      iVar2 = param_2 * 4;
      pbStack_10 = pbStack_10 + iVar2;
      pbVar5 = pbVar5 + iVar2;
      pbVar6 = pbVar6 + iVar2;
      param_4[7] = (float)pbVar1[param_2 + 1];
      param_4 = param_4 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (uVar3 < param_3) {
    param_1 = param_1 + uVar3 * param_2;
    iVar4 = param_3 - uVar3;
    do {
      *param_4 = (float)*param_1;
      pbVar6 = param_1 + 1;
      param_1 = param_1 + param_2;
      param_4[1] = (float)*pbVar6;
      iVar4 = iVar4 + -1;
      param_4 = param_4 + 2;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_00a883f0(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_1 + 2);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)pbVar2[-2] / 255.0;
      pfVar3[-1] = (float)pbVar2[-1] / 255.0;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + param_2;
      *pfVar3 = (float)bVar1 / 255.0;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 3;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88460(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_1 + 2);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)pbVar2[-2];
      pfVar3[-1] = (float)pbVar2[-1];
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + param_2;
      *pfVar3 = (float)bVar1;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 3;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a884c0(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_1 + 2);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)pbVar2[-2] / 255.0;
      pfVar3[-1] = (float)pbVar2[-1] / 255.0;
      *pfVar3 = (float)*pbVar2 / 255.0;
      pbVar1 = pbVar2 + 1;
      pbVar2 = pbVar2 + param_2;
      pfVar3[1] = (float)*pbVar1 / 255.0;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88540(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_1 + 2);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)pbVar2[-2];
      pfVar3[-1] = (float)pbVar2[-1];
      *pfVar3 = (float)*pbVar2;
      pbVar1 = pbVar2 + 1;
      pbVar2 = pbVar2 + param_2;
      pfVar3[1] = (float)*pbVar1;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a885b0(undefined2 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  if (param_3 != 0) {
    do {
      *param_4 = *param_1;
      param_1 = (undefined2 *)((int)param_1 + param_2);
      param_4[1] = 0;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a885e0(undefined2 *param_1,int param_2,int param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = (undefined2 *)((int)param_1 + param_2);
      param_4[1] = *puVar1;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88620(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined2 *)(param_1 + 4);
    puVar2 = (undefined2 *)(param_4 + 4);
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      uVar1 = *puVar3;
      puVar3 = (undefined2 *)((int)puVar3 + param_2);
      *puVar2 = uVar1;
      puVar2[1] = 1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88670(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined2 *)(param_1 + 4);
    puVar2 = (undefined2 *)(param_4 + 4);
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar1 = puVar3 + 1;
      puVar3 = (undefined2 *)((int)puVar3 + param_2);
      puVar2[1] = *puVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a886c0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined2 *)(param_1 + 4);
    puVar2 = (undefined2 *)(param_4 + 4);
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      uVar1 = *puVar3;
      puVar3 = (undefined2 *)((int)puVar3 + param_2);
      *puVar2 = uVar1;
      puVar2[1] = 0x7fff;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88710(short *param_1,int param_2,uint param_3,float *param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  short *psStack_c;
  
  uVar4 = 0;
  if (3 < param_3) {
    psVar5 = (short *)((int)param_1 + param_2 * 3);
    iVar3 = (param_3 - 4 >> 2) + 1;
    uVar4 = iVar3 * 4;
    psVar6 = param_1;
    psStack_c = param_1 + param_2;
    do {
      *param_4 = ((float)(int)*psVar6 + (float)(int)*psVar6 + 1.0) * 1.5259022e-05;
      psVar1 = (short *)((int)psVar6 + param_2);
      psVar6 = psVar6 + param_2 * 2;
      param_4[1] = ((float)(int)*psVar1 + (float)(int)*psVar1 + 1.0) * 1.5259022e-05;
      param_4[2] = ((float)(int)*psStack_c + (float)(int)*psStack_c + 1.0) * 1.5259022e-05;
      sVar2 = *psVar5;
      psVar5 = psVar5 + param_2 * 2;
      param_4[3] = ((float)(int)sVar2 + (float)(int)sVar2 + 1.0) * 1.5259022e-05;
      param_4 = param_4 + 4;
      iVar3 = iVar3 + -1;
      psStack_c = psStack_c + param_2 * 2;
    } while (iVar3 != 0);
  }
  if (uVar4 < param_3) {
    param_1 = (short *)(uVar4 * param_2 + (int)param_1);
    iVar3 = param_3 - uVar4;
    do {
      sVar2 = *param_1;
      param_1 = (short *)((int)param_1 + param_2);
      *param_4 = ((float)(int)sVar2 + (float)(int)sVar2 + 1.0) * 1.5259022e-05;
      param_4 = param_4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



void FUN_00a88840(short *param_1,int param_2,int param_3,float *param_4)

{
  short *psVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = ((float)(int)*param_1 + (float)(int)*param_1 + 1.0) * 1.5259022e-05;
      psVar1 = param_1 + 1;
      param_1 = (short *)((int)param_1 + param_2);
      param_4[1] = ((float)(int)*psVar1 + (float)(int)*psVar1 + 1.0) * 1.5259022e-05;
      param_4 = param_4 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a888b0(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar3 = (float *)(param_4 + 8);
    psVar2 = (short *)(param_1 + 4);
    do {
      pfVar3[-2] = ((float)(int)psVar2[-2] + (float)(int)psVar2[-2] + 1.0) * 1.5259022e-05;
      pfVar3[-1] = ((float)(int)psVar2[-1] + (float)(int)psVar2[-1] + 1.0) * 1.5259022e-05;
      sVar1 = *psVar2;
      psVar2 = (short *)((int)psVar2 + param_2);
      *pfVar3 = ((float)(int)sVar1 + (float)(int)sVar1 + 1.0) * 1.5259022e-05;
      pfVar3 = pfVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88940(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar3 = (float *)(param_4 + 8);
    psVar2 = (short *)(param_1 + 4);
    do {
      pfVar3[-2] = ((float)(int)psVar2[-2] + (float)(int)psVar2[-2] + 1.0) * 1.5259022e-05;
      pfVar3[-1] = ((float)(int)psVar2[-1] + (float)(int)psVar2[-1] + 1.0) * 1.5259022e-05;
      *pfVar3 = ((float)(int)*psVar2 + (float)(int)*psVar2 + 1.0) * 1.5259022e-05;
      psVar1 = psVar2 + 1;
      psVar2 = (short *)((int)psVar2 + param_2);
      pfVar3[1] = ((float)(int)*psVar1 + (float)(int)*psVar1 + 1.0) * 1.5259022e-05;
      pfVar3 = pfVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a889f0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined2 *)(param_1 + 4);
    puVar2 = (undefined2 *)(param_4 + 4);
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      uVar1 = *puVar3;
      puVar3 = (undefined2 *)((int)puVar3 + param_2);
      *puVar2 = uVar1;
      puVar2[1] = 0xffff;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88a40(ushort *param_1,int param_2,uint param_3,float *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puStack_8;
  
  uVar3 = 0;
  if (3 < param_3) {
    puVar6 = (ushort *)((int)param_1 + param_2 * 3);
    iVar5 = (param_3 - 4 >> 2) + 1;
    uVar3 = iVar5 * 4;
    puVar4 = param_1;
    puStack_8 = param_1 + param_2;
    do {
      *param_4 = (float)*puVar4 / 65535.0;
      puVar1 = (ushort *)((int)puVar4 + param_2);
      puVar4 = puVar4 + param_2 * 2;
      param_4[1] = (float)*puVar1 / 65535.0;
      param_4[2] = (float)*puStack_8 / 65535.0;
      uVar2 = *puVar6;
      puVar6 = puVar6 + param_2 * 2;
      param_4[3] = (float)uVar2 / 65535.0;
      param_4 = param_4 + 4;
      iVar5 = iVar5 + -1;
      puStack_8 = puStack_8 + param_2 * 2;
    } while (iVar5 != 0);
  }
  if (uVar3 < param_3) {
    param_1 = (ushort *)(uVar3 * param_2 + (int)param_1);
    iVar5 = param_3 - uVar3;
    do {
      uVar2 = *param_1;
      param_1 = (ushort *)((int)param_1 + param_2);
      *param_4 = (float)uVar2 / 65535.0;
      iVar5 = iVar5 + -1;
      param_4 = param_4 + 1;
    } while (iVar5 != 0);
  }
  return;
}



void FUN_00a88b40(ushort *param_1,int param_2,uint param_3,float *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puStack_8;
  
  uVar3 = 0;
  if (3 < param_3) {
    puVar6 = (ushort *)((int)param_1 + param_2 * 3);
    iVar5 = (param_3 - 4 >> 2) + 1;
    uVar3 = iVar5 * 4;
    puVar4 = param_1;
    puStack_8 = param_1 + param_2;
    do {
      *param_4 = (float)*puVar4;
      puVar1 = (ushort *)((int)puVar4 + param_2);
      puVar4 = puVar4 + param_2 * 2;
      param_4[1] = (float)*puVar1;
      param_4[2] = (float)*puStack_8;
      uVar2 = *puVar6;
      puVar6 = puVar6 + param_2 * 2;
      param_4[3] = (float)uVar2;
      param_4 = param_4 + 4;
      iVar5 = iVar5 + -1;
      puStack_8 = puStack_8 + param_2 * 2;
    } while (iVar5 != 0);
  }
  if (uVar3 < param_3) {
    param_1 = (ushort *)(uVar3 * param_2 + (int)param_1);
    iVar5 = param_3 - uVar3;
    do {
      uVar2 = *param_1;
      param_1 = (ushort *)((int)param_1 + param_2);
      *param_4 = (float)uVar2;
      iVar5 = iVar5 + -1;
      param_4 = param_4 + 1;
    } while (iVar5 != 0);
  }
  return;
}



void FUN_00a88c20(ushort *param_1,int param_2,int param_3,float *param_4)

{
  ushort *puVar1;
  
  if (param_3 != 0) {
    do {
      *param_4 = (float)*param_1 / 65535.0;
      puVar1 = param_1 + 1;
      param_1 = (ushort *)((int)param_1 + param_2);
      param_4[1] = (float)*puVar1 / 65535.0;
      param_3 = param_3 + -1;
      param_4 = param_4 + 2;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88c80(ushort *param_1,int param_2,uint param_3,float *param_4)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puStack_10;
  
  uVar2 = 0;
  if (3 < param_3) {
    puStack_10 = param_1;
    puVar6 = (ushort *)((int)param_1 + param_2 * 3);
    iVar4 = (param_3 - 4 >> 2) + 1;
    puVar5 = (ushort *)((int)param_1 + param_2);
    uVar2 = iVar4 * 4;
    do {
      puVar3 = (ushort *)((2 - param_2) + (int)puVar5);
      *param_4 = (float)*puStack_10;
      param_4[1] = (float)*puVar3;
      param_4[2] = (float)*puVar5;
      puVar1 = (ushort *)(param_2 + (int)puVar5);
      param_4[3] = (float)*(ushort *)((int)puVar3 + param_2);
      param_4[4] = (float)*puVar1;
      param_4[5] = (float)*(ushort *)(param_2 + 2 + (int)puVar5);
      param_4[6] = (float)*puVar6;
      puStack_10 = puStack_10 + param_2 * 2;
      puVar5 = puVar5 + param_2 * 2;
      puVar6 = puVar6 + param_2 * 2;
      param_4[7] = (float)*(ushort *)((int)puVar1 + param_2 + 2);
      param_4 = param_4 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (uVar2 < param_3) {
    param_1 = (ushort *)(uVar2 * param_2 + (int)param_1);
    iVar4 = param_3 - uVar2;
    do {
      *param_4 = (float)*param_1;
      puVar6 = param_1 + 1;
      param_1 = (ushort *)((int)param_1 + param_2);
      param_4[1] = (float)*puVar6;
      iVar4 = iVar4 + -1;
      param_4 = param_4 + 2;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_00a88dd0(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    puVar2 = (ushort *)(param_1 + 4);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)puVar2[-2] / 65535.0;
      pfVar3[-1] = (float)puVar2[-1] / 65535.0;
      uVar1 = *puVar2;
      puVar2 = (ushort *)((int)puVar2 + param_2);
      *pfVar3 = (float)uVar1 / 65535.0;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 3;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88e40(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    puVar2 = (ushort *)(param_1 + 4);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)puVar2[-2];
      pfVar3[-1] = (float)puVar2[-1];
      uVar1 = *puVar2;
      puVar2 = (ushort *)((int)puVar2 + param_2);
      *pfVar3 = (float)uVar1;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 3;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88ea0(int param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    puVar2 = (ushort *)(param_1 + 4);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)puVar2[-2] / 65535.0;
      pfVar3[-1] = (float)puVar2[-1] / 65535.0;
      *pfVar3 = (float)*puVar2 / 65535.0;
      puVar1 = puVar2 + 1;
      puVar2 = (ushort *)((int)puVar2 + param_2);
      pfVar3[1] = (float)*puVar1 / 65535.0;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88f20(int param_1,int param_2,int param_3,int param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    puVar2 = (ushort *)(param_1 + 4);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)puVar2[-2];
      pfVar3[-1] = (float)puVar2[-1];
      *pfVar3 = (float)*puVar2;
      puVar1 = puVar2 + 1;
      puVar2 = (ushort *)((int)puVar2 + param_2);
      pfVar3[1] = (float)*puVar1;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a88f90(int *param_1,int param_2,uint param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  uVar5 = 0;
  if (3 < param_3) {
    piVar7 = (int *)((int)param_1 + param_2 * 3);
    piVar4 = (int *)((int)param_1 + param_2 * 2);
    iVar6 = (param_3 - 4 >> 2) + 1;
    uVar5 = iVar6 * 4;
    piVar3 = param_1;
    do {
      *param_4 = (float)*piVar3 * 1.5258789e-05;
      piVar1 = (int *)((int)piVar3 + param_2);
      piVar3 = piVar3 + param_2;
      param_4[1] = (float)*piVar1 * 1.5258789e-05;
      iVar2 = *piVar4;
      piVar4 = piVar4 + param_2;
      param_4[2] = (float)iVar2 * 1.5258789e-05;
      iVar2 = *piVar7;
      piVar7 = piVar7 + param_2;
      param_4[3] = (float)iVar2 * 1.5258789e-05;
      param_4 = param_4 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar5 < param_3) {
    param_1 = (int *)(uVar5 * param_2 + (int)param_1);
    iVar6 = param_3 - uVar5;
    do {
      iVar2 = *param_1;
      param_1 = (int *)((int)param_1 + param_2);
      *param_4 = (float)iVar2 * 1.5258789e-05;
      iVar6 = iVar6 + -1;
      param_4 = param_4 + 1;
    } while (iVar6 != 0);
  }
  return;
}



void FUN_00a89070(int *param_1,int param_2,uint param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piStack_10;
  
  uVar6 = 0;
  if (3 < param_3) {
    piStack_10 = param_1;
    piVar4 = (int *)((int)param_1 + param_2 * 3);
    piVar5 = (int *)((int)param_1 + param_2);
    iVar7 = (param_3 - 4 >> 2) + 1;
    uVar6 = iVar7 * 4;
    do {
      piVar3 = (int *)((4 - param_2) + (int)piVar5);
      *param_4 = (float)*piStack_10 * 1.5258789e-05;
      param_4[1] = (float)*piVar3 * 1.5258789e-05;
      param_4[2] = (float)*piVar5 * 1.5258789e-05;
      piVar1 = (int *)((int)piVar5 + param_2);
      param_4[3] = (float)*(int *)((int)piVar3 + param_2) * 1.5258789e-05;
      param_4[4] = (float)*piVar1 * 1.5258789e-05;
      piVar3 = (int *)(param_2 + 4 + (int)piVar5);
      piVar5 = piVar5 + param_2;
      param_4[5] = (float)*piVar3 * 1.5258789e-05;
      iVar2 = *piVar4;
      piVar4 = piVar4 + param_2;
      param_4[6] = (float)iVar2 * 1.5258789e-05;
      piStack_10 = piStack_10 + param_2;
      param_4[7] = (float)*(int *)((int)piVar1 + param_2 + 4) * 1.5258789e-05;
      param_4 = param_4 + 8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (uVar6 < param_3) {
    param_1 = (int *)(uVar6 * param_2 + (int)param_1);
    iVar7 = param_3 - uVar6;
    do {
      *param_4 = (float)*param_1 * 1.5258789e-05;
      piVar4 = param_1 + 1;
      param_1 = (int *)((int)param_1 + param_2);
      param_4[1] = (float)*piVar4 * 1.5258789e-05;
      iVar7 = iVar7 + -1;
      param_4 = param_4 + 2;
    } while (iVar7 != 0);
  }
  return;
}



void FUN_00a891d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_1 + 8);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)piVar2[-2] * 1.5258789e-05;
      pfVar3[-1] = (float)piVar2[-1] * 1.5258789e-05;
      iVar1 = *piVar2;
      piVar2 = (int *)((int)piVar2 + param_2);
      *pfVar3 = (float)iVar1 * 1.5258789e-05;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 3;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a89240(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_1 + 8);
    pfVar3 = (float *)(param_4 + 8);
    do {
      pfVar3[-2] = (float)piVar2[-2] * 1.5258789e-05;
      pfVar3[-1] = (float)piVar2[-1] * 1.5258789e-05;
      *pfVar3 = (float)*piVar2 * 1.5258789e-05;
      piVar1 = piVar2 + 1;
      piVar2 = (int *)((int)piVar2 + param_2);
      pfVar3[1] = (float)*piVar1 * 1.5258789e-05;
      param_3 = param_3 + -1;
      pfVar3 = pfVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a892c0(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iStack_c;
  
  uVar3 = 0;
  if (3 < param_3) {
    puVar5 = (undefined4 *)((int)param_1 + param_2 * 3);
    puVar6 = (undefined4 *)((int)param_1 + param_2 * 2);
    iStack_c = (param_3 - 4 >> 2) + 1;
    uVar3 = iStack_c * 4;
    puVar4 = param_1;
    do {
      *param_4 = *puVar4;
      puVar1 = (undefined4 *)((int)puVar4 + param_2);
      puVar4 = puVar4 + param_2;
      param_4[1] = *puVar1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + param_2;
      param_4[2] = uVar2;
      uVar2 = *puVar5;
      puVar5 = puVar5 + param_2;
      param_4[3] = uVar2;
      param_4 = param_4 + 4;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
  }
  if (uVar3 < param_3) {
    param_1 = (undefined4 *)(uVar3 * param_2 + (int)param_1);
    iVar7 = param_3 - uVar3;
    do {
      uVar2 = *param_1;
      param_1 = (undefined4 *)((int)param_1 + param_2);
      *param_4 = uVar2;
      iVar7 = iVar7 + -1;
      param_4 = param_4 + 1;
    } while (iVar7 != 0);
  }
  return;
}



void FUN_00a89370(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puStack_10;
  
  uVar1 = 0;
  if (3 < param_3) {
    puStack_10 = param_1;
    puVar5 = (undefined4 *)((int)param_1 + param_2 * 3);
    puVar3 = (undefined4 *)((int)param_1 + param_2);
    iVar4 = (param_3 - 4 >> 2) + 1;
    uVar1 = iVar4 * 4;
    do {
      puVar2 = (undefined4 *)((4 - param_2) + (int)puVar3);
      *param_4 = *puStack_10;
      param_4[1] = *puVar2;
      param_4[2] = *puVar3;
      param_4[3] = *(undefined4 *)((int)puVar2 + param_2);
      param_4[4] = *(undefined4 *)((int)puVar3 + param_2);
      param_4[5] = *(undefined4 *)(param_2 + 4 + (int)puVar3);
      param_4[6] = *puVar5;
      param_4[7] = *(undefined4 *)((int)puVar3 + param_2 + param_2 + 4);
      puStack_10 = puStack_10 + param_2;
      param_4 = param_4 + 8;
      puVar3 = puVar3 + param_2;
      puVar5 = puVar5 + param_2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (uVar1 < param_3) {
    param_1 = (undefined4 *)(uVar1 * param_2 + (int)param_1);
    iVar4 = param_3 - uVar1;
    do {
      *param_4 = *param_1;
      puVar5 = param_1 + 1;
      param_1 = (undefined4 *)((int)param_1 + param_2);
      param_4[1] = *puVar5;
      iVar4 = iVar4 + -1;
      param_4 = param_4 + 2;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_00a89450(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_1 + 8);
    puVar3 = (undefined4 *)(param_4 + 8);
    do {
      puVar3[-2] = puVar2[-2];
      puVar3[-1] = puVar2[-1];
      uVar1 = *puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + param_2);
      *puVar3 = uVar1;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 3;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00a89490(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_1 + 8);
    puVar3 = (undefined4 *)(param_4 + 8);
    do {
      puVar3[-2] = puVar2[-2];
      puVar3[-1] = puVar2[-1];
      *puVar3 = *puVar2;
      puVar1 = puVar2 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + param_2);
      puVar3[1] = *puVar1;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 4;
    } while (param_3 != 0);
  }
  return;
}



// WARNING: Type propagation algorithm not settling

void FUN_00a894e0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_d0;
  undefined **appuStack_cc [14];
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined ***pppuStack_34;
  undefined4 uStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5296f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_34 = appuStack_cc;
  uStack_30 = 0;
  appuStack_cc[0] = (undefined **)&DAT_01141e20;
  func_0x0046a560(uStack_14);
  uStack_8 = 2;
  uStack_30 = 2;
  *(undefined ***)((int)appuStack_cc + (int)appuStack_cc[0][1]) = std::basic_ostream<>::vftable;
  *(undefined **)((int)&iStack_d0 + (int)appuStack_cc[0][1]) = appuStack_cc[0][1] + -8;
  func_0x0046b070(appuStack_cc + 1,0);
  uStack_8 = 4;
  *(undefined ***)((int)appuStack_cc + (int)appuStack_cc[0][1]) =
       std::basic_ostringstream<>::vftable;
  *(undefined **)((int)&iStack_d0 + (int)appuStack_cc[0][1]) = appuStack_cc[0][1] + -0x50;
  appuStack_cc[1] = std::basic_streambuf<>::vftable;
  appuStack_cc[2] = (undefined **)0x0;
  appuStack_cc[3] = (undefined **)0x0;
  appuStack_cc[4] = (undefined **)0x0;
  appuStack_cc[5] = (undefined **)0x0;
  appuStack_cc[6] = (undefined **)0x0;
  appuStack_cc[7] = (undefined **)0x0;
  appuStack_cc[8] = (undefined **)0x0;
  appuStack_cc[9] = (undefined **)0x0;
  appuStack_cc[10] = (undefined **)0x0;
  appuStack_cc[0xb] = (undefined **)0x0;
  appuStack_cc[0xc] = (undefined **)0x0;
  appuStack_cc[0xd] = (undefined **)0x0;
  iStack_94 = func_0x008ab47d(8);
  if (iStack_94 == 0) {
    iStack_94 = 0;
  }
  else {
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    uVar2 = func_0x00e70415(1);
    *(undefined4 *)(iStack_94 + 4) = uVar2;
  }
  func_0x0046adc0();
  appuStack_cc[1] = std::basic_stringbuf<>::vftable;
  uStack_90 = 0;
  uStack_8c = 4;
  uStack_8 = 6;
  func_0x0046a470(aiStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  func_0x0091ffd0(0x3002,0x3002,aiStack_2c);
  if (0xf < uStack_18) {
    uVar3 = uStack_18 + 1;
    iVar4 = aiStack_2c[0];
    if (0xfff < uVar3) {
      iVar4 = *(int *)(aiStack_2c[0] + -4);
      uVar3 = uStack_18 + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00a89700(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FramebufferAttachmentObjectImpl::vftable;
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



undefined4 FUN_00a89730(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x3008);
  uStack_8 = 2;
  func_0x009b8ac0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a897b0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x3008);
  uStack_8 = 2;
  func_0x009b8ac0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a89830(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x3008);
  uStack_8 = 2;
  func_0x009b8ac0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00a898b0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void __thiscall
FUN_00a898c0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x58);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *param_4 = uVar2;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



void __thiscall
FUN_00a89900(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x54);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *param_4 = uVar2;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



undefined4 FUN_00a89940(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x3009);
  uStack_8 = 2;
  func_0x00922cb0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a899c0(void)

{
  return 0x30ce;
}



undefined4 __thiscall FUN_00a899d0(undefined4 param_1,undefined4 param_2)

{
  func_0x00920160(param_2,0,param_1);
  return param_2;
}



undefined4 FUN_00a899f0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f52df0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x3009);
  uStack_8 = 0;
  func_0x00922cb0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a89a70(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_ac [156];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x300d);
  uStack_8 = 2;
  func_0x0046b6e0(auStack_ac,"setPresentationTime implementation missing.");
  func_0x009f4a40(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a89b00(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_ac [156];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x300d);
  uStack_8 = 2;
  func_0x0046b6e0(auStack_ac,"swapWithDamage implementation missing.");
  func_0x009f4a40(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00a89b90(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46500;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uVar1,0x3009);
  uStack_8 = 2;
  func_0x00922cb0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00a8b7a0(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb2c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ab3550(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  *param_1 = rx::ContextGL::vftable;
  piVar2 = (int *)param_1[9];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 __thiscall FUN_00ab35c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f584e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x188);
  _guard_check_icall(1,&uStack_14,uVar2);
  (*pcVar1)();
  iVar3 = func_0x008ab47d(0x50);
  uStack_8 = 0;
  if (iVar3 != 0) {
    uVar4 = func_0x00b52a70(param_2,uStack_14);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00ab3660(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f58524;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(8,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b53160(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00ab36d0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f58573;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10);
  cVar1 = func_0x00abc480(uVar4,uVar2);
  if (cVar1 == '\0') {
    iVar3 = func_0x008ab47d(0xc);
    uStack_8 = 1;
    if (iVar3 != 0) {
      uVar4 = func_0x00abc300(uVar4);
      *unaff_FS_OFFSET = iStack_10;
      return uVar4;
    }
  }
  else {
    iVar3 = func_0x008ab47d(0xc);
    uStack_8 = 0;
    if (iVar3 != 0) {
      uVar4 = func_0x00abc290(uVar4);
      *unaff_FS_OFFSET = iStack_10;
      return uVar4;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3780(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f585a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  uStack_14 = 0;
  cVar2 = func_0x0098ddb0(uVar3);
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(iVar4 + 0x3b8);
    _guard_check_icall(1,&uStack_14);
    (*pcVar1)();
  }
  iVar4 = func_0x008ab47d(0x10);
  uStack_8 = 0;
  if (iVar4 != 0) {
    uVar5 = func_0x00b531c0(param_2,uStack_14,0);
    *unaff_FS_OFFSET = iStack_10;
    return uVar5;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00ab3830(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f585e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0xa7c);
  _guard_check_icall(1,&uStack_14,uVar2);
  (*pcVar1)();
  iVar3 = func_0x008ab47d(8);
  uStack_8 = 0;
  if (iVar3 != 0) {
    uVar4 = func_0x00b55d90(uStack_14);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab38c0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f58624;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x44,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    uVar3 = func_0x00b56090(param_2,*(undefined4 *)(iVar2 + 0x10),iVar2 + 0x13c8,
                            *(undefined4 *)(iVar2 + 0x14),param_1 + 0x20);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3950(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f465a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x10,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b5a530(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab39d0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f58673;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((param_2 & 0xff) == 2) {
    iVar2 = func_0x008ab47d(0x14,uVar1);
    uStack_8 = 0;
    if (iVar2 != 0) {
      uVar3 = func_0x00abc9b0(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  else {
    iVar2 = func_0x008ab47d(0x30,uVar1);
    uStack_8 = 1;
    if (iVar2 != 0) {
      uVar3 = func_0x00abc900(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10),
                              *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3a90(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f586a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x3bc);
  _guard_check_icall(1,&uStack_14,uVar2);
  (*pcVar1)();
  func_0x00ab6c70(0x8d41,uStack_14);
  iVar3 = func_0x008ab47d(0x3c);
  uStack_8 = 0;
  if (iVar3 != 0) {
    uVar4 = func_0x00b5a640(param_2,uStack_14);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3b40(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f586e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x58,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b5ab00(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10),
                            *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00ab3bc0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f585e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0xad4);
  _guard_check_icall(1,&uStack_14,uVar2);
  (*pcVar1)();
  iVar3 = func_0x008ab47d(8);
  uStack_8 = 0;
  if (iVar3 != 0) {
    uVar4 = func_0x00b5ae70(uStack_14);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3c50(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f58724;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x1cc);
  uVar3 = func_0x008badb0(*(undefined1 *)(param_2 + 0x18),uVar2);
  _guard_check_icall(uVar3);
  uVar3 = (*pcVar1)();
  iVar4 = func_0x008ab47d(0x34);
  uStack_8 = 0;
  if (iVar4 != 0) {
    uVar5 = func_0x00a06ba0();
    uVar3 = func_0x00b5b820(param_2,uVar3,uVar5,param_1 + 0x20);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00ab3d00(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50624;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0xc,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b5d300(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3d70(int param_1,undefined1 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f58767;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0xe4);
  _guard_check_icall(1,&uStack_14,uVar2);
  (*pcVar1)();
  func_0x00ab6cf0(*param_2,uStack_14);
  iVar3 = func_0x008ab47d(0xa8);
  uStack_8 = 0;
  if (iVar3 != 0) {
    uVar4 = func_0x00b5d660(param_2,uStack_14);
    *unaff_FS_OFFSET = iStack_10;
    return uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3e20(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49bd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x1c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b62410(param_2,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10),
                            *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00ab3ea0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f587b9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x1a58) == '\0') {
    iStack_14 = 0;
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x3c0);
    _guard_check_icall(1,&iStack_14,uVar2);
    (*pcVar1)();
    iVar5 = func_0x008ab47d(0x100);
    uStack_8 = 1;
    if (iVar5 != 0) {
      uVar3 = func_0x00b62810(param_2,iStack_14);
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  else {
    iStack_14 = func_0x008ab47d(0x100);
    uStack_8 = 0;
    if (iStack_14 != 0) {
      uVar3 = func_0x0047d980();
      uVar4 = FUN_00921200();
      uVar3 = func_0x00b62980(param_2,uVar4,uVar3);
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00ab3fa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x10) + 0x7e8);
  _guard_check_icall(param_3,param_4,param_5);
  (*pcVar1)();
  *(undefined1 *)(iVar2 + 0x1368) = 1;
  return 0;
}



undefined4 __thiscall FUN_00ab3fb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x10) + 0x7ec);
  _guard_check_icall(param_3);
  (*pcVar1)();
  *(undefined1 *)(iVar2 + 0x1368) = 1;
  return 0;
}



undefined4 __thiscall
FUN_00ab3fc0(int param_1,int param_2,undefined1 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  iVar3 = iVar1;
  if (iVar1 == -1) {
    iVar3 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_2 + 0x1fe4) == 0) {
    if (*(char *)(iVar5 + 0x1a40) == '\0') goto LAB_00ab4064;
    if (0 < param_4) goto LAB_00ab4036;
    if (param_4 != 0) goto LAB_00ab4064;
    iVar4 = func_0x00b63380(param_2);
  }
  else {
LAB_00ab4036:
    iVar4 = func_0x00b63930(param_2,*(int *)(*(int *)(param_1 + 0x10) + 0x14f8) + 0x38,param_4,
                            param_5,iVar3);
  }
  if (iVar4 == 1) {
    return 1;
  }
LAB_00ab4064:
  if ((*(char *)(iVar5 + 0x1818) != '\0') &&
     (iVar5 = func_0x00ab9070(param_2,0xffffffff), iVar5 == 1)) {
    return 1;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iVar1 != -1) {
    pcVar2 = *(code **)(iVar5 + 0x498);
    _guard_check_icall(param_3,param_4,param_5,iVar3);
    (*pcVar2)();
    func_0x00a06eb0();
    return 0;
  }
  pcVar2 = *(code **)(iVar5 + 0xdc);
  _guard_check_icall(param_3,param_4,param_5);
  (*pcVar2)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab40f0(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x59c);
  _guard_check_icall(param_3,param_4);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab4130(int param_1,int param_2,undefined1 param_3,int param_4,undefined4 param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  if (iVar3 != -1) {
    param_6 = param_6 * iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_2 + 0x1fe4) == 0) {
    if (*(char *)(iVar3 + 0x1a40) == '\0') goto LAB_00ab41c8;
    if (0 < param_4) goto LAB_00ab419a;
    if (param_4 != 0) goto LAB_00ab41c8;
    iVar2 = func_0x00b63380(param_2);
  }
  else {
LAB_00ab419a:
    iVar2 = func_0x00b63930(param_2,*(int *)(*(int *)(param_1 + 0x10) + 0x14f8) + 0x38,param_4,
                            param_5,param_6);
  }
  if (iVar2 == 1) {
    return 1;
  }
LAB_00ab41c8:
  if ((*(char *)(iVar3 + 0x1818) != '\0') &&
     (iVar3 = func_0x00ab9070(param_2,0xffffffff), iVar3 == 1)) {
    return 1;
  }
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x498);
  _guard_check_icall(param_3,param_4,param_5,param_6);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab4220(int param_1,int param_2,undefined1 param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 unaff_ESI;
  int iStack_8;
  int iStack_4;
  
  iStack_8 = *(int *)(param_2 + 0x14f4);
  if (*(int *)(iStack_8 + 0xac) != -1) {
    param_6 = param_6 * *(int *)(iStack_8 + 0xac);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_2 + 0x1fe4) == 0) {
    if (*(char *)(iVar3 + 0x1a40) == '\0') goto LAB_00ab42c0;
    if (0 < param_4) goto LAB_00ab4292;
    if (param_4 != 0) goto LAB_00ab42c0;
    iVar2 = func_0x00b63380(param_2);
  }
  else {
LAB_00ab4292:
    iVar2 = func_0x00b63930(param_2,*(int *)(*(int *)(param_1 + 0x10) + 0x14f8) + 0x38,param_4,
                            param_5,param_6);
  }
  if (iVar2 == 1) {
    return 1;
  }
LAB_00ab42c0:
  if ((*(char *)(iVar3 + 0x1818) != '\0') &&
     (iVar3 = func_0x00ab9070(param_2,0xffffffff), iVar3 == 1)) {
    return 1;
  }
  iStack_4 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  pcVar1 = *(code **)(iStack_4 + 0x79c);
  if (pcVar1 == (code *)0x0) {
    iVar3 = iStack_8;
    func_0x00ab5840(&iStack_8,iStack_8,param_7);
    pcVar1 = *(code **)(unaff_EBX + 0x498);
    _guard_check_icall(unaff_ESI,param_4,param_2,param_6);
    (*pcVar1)();
    func_0x00ab5670(iVar3);
    func_0x00a06eb0();
    return 0;
  }
  _guard_check_icall(param_3,param_4,param_5,param_6);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab4380(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_4 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  iStack_14 = iStack_4;
  if (iStack_4 == -1) {
    iStack_14 = 0;
  }
  uStack_18 = 0;
  iStack_8 = *(int *)(param_1 + 0x20);
  iStack_c = *(int *)(*(int *)(param_1 + 0x10) + 0x14f8);
  iStack_10 = *(int *)(param_2 + 0x1514);
  if ((*(char *)(iStack_8 + 0x1a40) != '\0') && (iVar3 = func_0x00b63380(param_2), iVar3 == 1)) {
    return 1;
  }
  if ((*(int *)(param_2 + 0x1fe4) == 0) && (*(int *)(iStack_10 + 100) != 0)) {
    uStack_18 = param_6;
  }
  else {
    iStack_10 = CONCAT31(iStack_10._1_3_,*(undefined1 *)(param_2 + 0x186c));
    iVar3 = func_0x00b63e20(param_2,iStack_c + 0x38,0,param_4,param_5,param_6,iStack_14,iStack_10,
                            &uStack_18);
    if (iVar3 == 1) {
      return 1;
    }
  }
  if ((*(char *)(param_2 + 0x186c) != '\0') && (*(char *)(iStack_8 + 0x1800) != '\0')) {
    uVar4 = func_0x0093e160(param_5);
    iVar3 = func_0x00ab9070(param_2,uVar4);
    if (iVar3 == 1) {
      return 1;
    }
  }
  iVar3 = param_5 * 2 + 0x1401;
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iStack_4 == -1) {
    pcVar2 = *(code **)(iVar1 + 0xe0);
    _guard_check_icall(param_3,param_4,iVar3,uStack_18);
    (*pcVar2)();
    func_0x00a06eb0();
    return 0;
  }
  pcVar2 = *(code **)(iVar1 + 0x49c);
  _guard_check_icall(param_3,param_4,iVar3,uStack_18,iStack_14);
  (*pcVar2)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab4510(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar4 = *(int *)(param_2 + 0x1514);
  iStack_4 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  iStack_10 = iStack_4;
  if (iStack_4 == -1) {
    iStack_10 = 0;
  }
  uStack_14 = 0;
  iStack_c = *(int *)(*(int *)(param_1 + 0x10) + 0x14f8);
  iStack_8 = *(int *)(param_1 + 0x20);
  if ((*(char *)(iStack_8 + 0x1a40) != '\0') && (iVar2 = func_0x00b63380(param_2), iVar2 == 1)) {
    return 1;
  }
  iVar2 = iStack_c;
  if ((*(int *)(param_2 + 0x1fe4) == 0) && (*(int *)(iVar4 + 100) != 0)) {
    uStack_14 = param_6;
  }
  else {
    iStack_c = CONCAT31(iStack_c._1_3_,*(undefined1 *)(param_2 + 0x186c));
    iVar4 = func_0x00b63e20(param_2,iVar2 + 0x38,0,param_4,param_5,param_6,iStack_10,iStack_c,
                            &uStack_14);
    if (iVar4 == 1) {
      return 1;
    }
  }
  if ((*(char *)(param_2 + 0x186c) != '\0') && (*(char *)(iStack_8 + 0x1800) != '\0')) {
    uVar3 = func_0x0093e160(param_5);
    iVar4 = func_0x00ab9070(param_2,uVar3);
    if (iVar4 == 1) {
      return 1;
    }
  }
  iVar4 = param_5 * 2 + 0x1401;
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iStack_4 == -1) {
    pcVar1 = *(code **)(iVar2 + 0x4cc);
    _guard_check_icall(param_3,param_4,iVar4,uStack_14);
    (*pcVar1)();
    func_0x00a06eb0();
    return 0;
  }
  pcVar1 = *(code **)(iVar2 + 0x4d0);
  _guard_check_icall(param_3,param_4,iVar4,uStack_14,iStack_10,param_7);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab46b0(int param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x5a0);
  _guard_check_icall(param_3,param_4 * 2 + 0x1401,param_5);
  (*pcVar1)();
  return 0;
}



undefined4 __thiscall
FUN_00ab46f0(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  if (iVar2 != -1) {
    param_7 = param_7 * iVar2;
  }
  iStack_4 = *(int *)(param_1 + 0x20);
  uStack_10 = 0;
  iStack_8 = *(int *)(*(int *)(param_1 + 0x10) + 0x14f8);
  iStack_c = *(int *)(param_2 + 0x1514);
  if ((*(char *)(iStack_4 + 0x1a40) != '\0') && (iVar2 = func_0x00b63380(param_2), iVar2 == 1)) {
    return 1;
  }
  iVar2 = iStack_8;
  if ((*(int *)(param_2 + 0x1fe4) == 0) && (*(int *)(iStack_c + 100) != 0)) {
    uStack_10 = param_6;
  }
  else {
    iStack_8 = CONCAT31(iStack_8._1_3_,*(undefined1 *)(param_2 + 0x186c));
    iVar2 = func_0x00b63e20(param_2,iVar2 + 0x38,0,param_4,param_5,param_6,param_7,iStack_8,
                            &uStack_10);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if ((*(char *)(param_2 + 0x186c) != '\0') && (*(char *)(iStack_4 + 0x1800) != '\0')) {
    uVar3 = func_0x0093e160(param_5);
    iVar2 = func_0x00ab9070(param_2,uVar3);
    if (iVar2 == 1) {
      return 1;
    }
  }
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x49c);
  _guard_check_icall(param_3,param_4,param_5 * 2 + 0x1401,uStack_10,param_7);
  (*pcVar1)();
  return 0;
}



undefined4 __thiscall
FUN_00ab4840(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7,undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  if (iVar2 != -1) {
    param_7 = param_7 * iVar2;
  }
  iStack_4 = *(int *)(param_1 + 0x20);
  uStack_10 = 0;
  iStack_8 = *(int *)(*(int *)(param_1 + 0x10) + 0x14f8);
  iStack_c = *(int *)(param_2 + 0x1514);
  if ((*(char *)(iStack_4 + 0x1a40) != '\0') && (iVar2 = func_0x00b63380(param_2), iVar2 == 1)) {
    return 1;
  }
  iVar2 = iStack_8;
  if ((*(int *)(param_2 + 0x1fe4) == 0) && (*(int *)(iStack_c + 100) != 0)) {
    uStack_10 = param_6;
  }
  else {
    iStack_8 = CONCAT31(iStack_8._1_3_,*(undefined1 *)(param_2 + 0x186c));
    iVar2 = func_0x00b63e20(param_2,iVar2 + 0x38,0,param_4,param_5,param_6,param_7,iStack_8,
                            &uStack_10);
    if (iVar2 == 1) {
      return 1;
    }
  }
  if ((*(char *)(param_2 + 0x186c) != '\0') && (*(char *)(iStack_4 + 0x1800) != '\0')) {
    uVar3 = func_0x0093e160(param_5);
    iVar2 = func_0x00ab9070(param_2,uVar3);
    if (iVar2 == 1) {
      return 1;
    }
  }
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x4d0);
  _guard_check_icall(param_3,param_4,param_5 * 2 + 0x1401,uStack_10,param_7,param_8);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab49a0(int param_1,int param_2,byte param_3,undefined4 param_4,int param_5,undefined4 param_6,
            int param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_4 = *(int *)(param_2 + 0x14f4);
  if (*(int *)(iStack_4 + 0xac) != -1) {
    param_7 = param_7 * *(int *)(iStack_4 + 0xac);
  }
  iStack_8 = *(int *)(param_1 + 0x20);
  uStack_14 = 0;
  uStack_c = *(int *)(*(int *)(param_1 + 0x10) + 0x14f8);
  iStack_10 = *(int *)(param_2 + 0x1514);
  if ((*(char *)(iStack_8 + 0x1a40) != '\0') && (iVar3 = func_0x00b63380(param_2), iVar3 == 1)) {
    return 1;
  }
  uVar2 = uStack_c;
  if ((*(int *)(param_2 + 0x1fe4) == 0) && (*(int *)(iStack_10 + 100) != 0)) {
    uStack_14 = param_6;
  }
  else {
    uStack_c = CONCAT31(uStack_c._1_3_,*(undefined1 *)(param_2 + 0x186c));
    iVar3 = func_0x00b63e20(param_2,uVar2 + 0x38,0,param_4,param_5,param_6,param_7,uStack_c,
                            &uStack_14);
    if (iVar3 == 1) {
      return 1;
    }
  }
  if ((*(char *)(param_2 + 0x186c) != '\0') && (*(char *)(iStack_8 + 0x1800) != '\0')) {
    uVar4 = func_0x0093e160(param_5);
    iVar3 = func_0x00ab9070(param_2,uVar4);
    if (iVar3 == 1) {
      return 1;
    }
  }
  uStack_c = (uint)param_3;
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  pcVar1 = *(code **)(iVar3 + 0x7a4);
  iStack_8 = param_5 * 2 + 0x1401;
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(uStack_c,param_4,iStack_8,uStack_14,param_7,param_8);
    (*pcVar1)();
    func_0x00a06eb0();
    return 0;
  }
  func_0x00ab5840(&iStack_4,iStack_4,param_9);
  pcVar1 = *(code **)(iVar3 + 0x4d0);
  _guard_check_icall(unaff_EBX,unaff_retaddr,uStack_14,unaff_ESI,param_7,param_5);
  (*pcVar1)();
  func_0x00ab5670(param_9);
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall FUN_00ab4b70(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iStack_20;
  undefined1 auStack_8 [8];
  
  iVar10 = *(int *)(param_2 + 0x18c0) + -1;
  if (-1 < iVar10) {
    pcVar11 = (char *)(param_3 + 4 + iVar10 * 0x54);
    do {
      if (((pcVar11[0x4c] == '\0') || (*pcVar11 != '\0')) ||
         (*(int *)(param_4 + iVar10 * 4) != 0x1e00)) {
        bVar6 = false;
        uVar5 = (uint)iStack_20._1_3_;
        iStack_20 = uVar5 << 8;
        if (pcVar11[0x4c] != '\0') goto LAB_00ab4bdb;
        iStack_20 = uVar5 << 8;
        func_0x00ad6f30(0,iStack_20);
      }
      else {
        bVar6 = true;
        iStack_20 = CONCAT31(iStack_20._1_3_,1);
LAB_00ab4bdb:
        func_0x00ad6f30(*(undefined4 *)(pcVar11 + -4),iStack_20);
        if (bVar6) {
          uVar1 = *(undefined4 *)(pcVar11 + -4);
          uVar2 = *(undefined4 *)(pcVar11 + 0x10);
          uVar3 = *(undefined4 *)(pcVar11 + 0xc);
          func_0x00990860(param_2);
          uVar8 = func_0x008dfd50();
          func_0x00ab6bc0(iStack_20,uVar8,uVar3,0,uVar2,0x88b9,uVar1);
        }
      }
      pcVar11 = pcVar11 + -0x54;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  func_0x00ad6d90(auStack_8,1,0);
  cVar7 = func_0x00ad6c90();
  if (cVar7 != '\0') {
    iVar10 = func_0x00a06d40();
    iVar9 = func_0x00ad6db0(param_1,0);
    func_0x00ab7550(*(undefined4 *)(iVar9 + 0x10));
    func_0x00ab6dd0(*(undefined4 *)(iVar10 + 0xc),iVar10 + 0x10);
    func_0x00ab55b0(param_2);
    pcVar4 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0xdc);
    _guard_check_icall(5,0,4);
    (*pcVar4)();
    func_0x00a06eb0();
  }
  pcVar4 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x2c);
  _guard_check_icall(0x8f64);
  (*pcVar4)();
  return 0;
}



undefined4 __thiscall FUN_00ab4d10(int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar8;
  undefined4 unaff_retaddr;
  int iStack_18;
  undefined4 auStack_c [3];
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x34);
  _guard_check_icall(0x8f64);
  (*pcVar1)();
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar8 = (undefined4 *)(param_2 * 0x54 + param_3);
    do {
      iVar6 = *(int *)(param_4 + param_2 * 4);
      if (iVar6 == 0x96e5) {
        func_0x00ad6f30(0,iVar6 == 0x1e00);
      }
      else {
        func_0x00ad6f30(*puVar8,CONCAT31((int3)((uint)param_2 >> 8),iVar6 == 0x1e00));
        if (iVar6 == 0x1e00) {
          uVar2 = *puVar8;
          uVar3 = puVar8[5];
          uVar4 = puVar8[4];
          func_0x00990860(unaff_retaddr);
          uVar5 = func_0x008dfd50();
          func_0x00ab6bc0(unaff_EBP,uVar5,uVar4,0,uVar3,35000,uVar2);
          param_1 = iStack_18;
        }
      }
      puVar8 = puVar8 + -0x15;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  func_0x00ad6d90(auStack_c,0,0);
  iVar6 = func_0x00a06d40();
  iVar7 = func_0x00ad6db0(iStack_18,0);
  func_0x00ab7550(*(undefined4 *)(iVar7 + 0x10));
  func_0x00ad71f0(0,auStack_c[0]);
  func_0x00ab6dd0(*(undefined4 *)(iVar6 + 0xc),iVar6 + 0x10);
  func_0x00ab55b0(unaff_ESI);
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0xdc);
  _guard_check_icall(5,0,4);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab4ea0(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar4 = *(int *)(param_2 + 0x1514);
  iStack_4 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  iStack_10 = iStack_4;
  if (iStack_4 == -1) {
    iStack_10 = 0;
  }
  uStack_14 = 0;
  iStack_c = *(int *)(*(int *)(param_1 + 0x10) + 0x14f8);
  iStack_8 = *(int *)(param_1 + 0x20);
  if ((*(char *)(iStack_8 + 0x1a40) != '\0') && (iVar2 = func_0x00b63380(param_2), iVar2 == 1)) {
    return 1;
  }
  iVar2 = iStack_c;
  if ((*(int *)(param_2 + 0x1fe4) == 0) && (*(int *)(iVar4 + 100) != 0)) {
    uStack_14 = param_8;
  }
  else {
    iStack_c = CONCAT31(iStack_c._1_3_,*(undefined1 *)(param_2 + 0x186c));
    iVar4 = func_0x00b63e20(param_2,iVar2 + 0x38,0,param_6,param_7,param_8,iStack_10,iStack_c,
                            &uStack_14);
    if (iVar4 == 1) {
      return 1;
    }
  }
  if ((*(char *)(param_2 + 0x186c) != '\0') && (*(char *)(iStack_8 + 0x1800) != '\0')) {
    uVar3 = func_0x0093e160(param_7);
    iVar4 = func_0x00ab9070(param_2,uVar3);
    if (iVar4 == 1) {
      return 1;
    }
  }
  iVar4 = param_7 * 2 + 0x1401;
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iStack_4 == -1) {
    pcVar1 = *(code **)(iVar2 + 0x104);
    _guard_check_icall(param_3,param_4,param_5,param_6,iVar4,uStack_14);
    (*pcVar1)();
    func_0x00a06eb0();
    return 0;
  }
  pcVar1 = *(code **)(iVar2 + 0x49c);
  _guard_check_icall(param_3,param_6,iVar4,uStack_14,iStack_10);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



undefined4 __thiscall
FUN_00ab5040(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar4 = *(int *)(param_2 + 0x1514);
  iStack_4 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xac);
  iStack_10 = iStack_4;
  if (iStack_4 == -1) {
    iStack_10 = 0;
  }
  uStack_14 = 0;
  iStack_c = *(int *)(*(int *)(param_1 + 0x10) + 0x14f8);
  iStack_8 = *(int *)(param_1 + 0x20);
  if ((*(char *)(iStack_8 + 0x1a40) != '\0') && (iVar2 = func_0x00b63380(param_2), iVar2 == 1)) {
    return 1;
  }
  iVar2 = iStack_c;
  if ((*(int *)(param_2 + 0x1fe4) == 0) && (*(int *)(iVar4 + 100) != 0)) {
    uStack_14 = param_8;
  }
  else {
    iStack_c = CONCAT31(iStack_c._1_3_,*(undefined1 *)(param_2 + 0x186c));
    iVar4 = func_0x00b63e20(param_2,iVar2 + 0x38,0,param_6,param_7,param_8,iStack_10,iStack_c,
                            &uStack_14);
    if (iVar4 == 1) {
      return 1;
    }
  }
  if ((*(char *)(param_2 + 0x186c) != '\0') && (*(char *)(iStack_8 + 0x1800) != '\0')) {
    uVar3 = func_0x0093e160(param_7);
    iVar4 = func_0x00ab9070(param_2,uVar3);
    if (iVar4 == 1) {
      return 1;
    }
  }
  iVar4 = param_7 * 2 + 0x1401;
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iStack_4 == -1) {
    pcVar1 = *(code **)(iVar2 + 0x4d4);
    _guard_check_icall(param_3,param_4,param_5,param_6,iVar4,uStack_14);
    (*pcVar1)();
    func_0x00a06eb0();
    return 0;
  }
  pcVar1 = *(code **)(iVar2 + 0x4d0);
  _guard_check_icall(param_3,param_6,iVar4,uStack_14,iStack_10,param_9);
  (*pcVar1)();
  func_0x00a06eb0();
  return 0;
}



void FUN_00ab51e0(void)

{
  func_0x00a06a40();
  return;
}



void FUN_00ab51f0(void)

{
  func_0x00a06ab0();
  return;
}



void __fastcall FUN_00ab5210(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar1 = *(code **)(*(int *)(iVar2 + 0x10) + 0xaf8);
  _guard_check_icall();
  (*pcVar1)();
  *(undefined1 *)(iVar2 + 0x1368) = 1;
  return;
}



undefined4 FUN_00ab5240(void)

{
  return 0;
}



undefined4 __fastcall FUN_00ab5260(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = func_0x00a06bf0(param_1);
  func_0x009551a0(uVar1);
  return unaff_retaddr;
}



int __fastcall FUN_00ab5280(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(iVar1 + 0x25) == '\0') {
    func_0x009f7d60(*(undefined4 *)(iVar1 + 0x10),iVar1 + 0x13c8,iVar1 + 0x28,iVar1 + 0x398,
                    iVar1 + 0x1278,iVar1 + 0x134e,iVar1 + 8,iVar1 + 0x1360,iVar1 + 0x1364);
    *(undefined1 *)(iVar1 + 0x25) = 1;
  }
  return iVar1 + 0x1278;
}



int __fastcall FUN_00ab5290(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(iVar1 + 0x25) == '\0') {
    func_0x009f7d60(*(undefined4 *)(iVar1 + 0x10),iVar1 + 0x13c8,iVar1 + 0x28,iVar1 + 0x398,
                    iVar1 + 0x1278,iVar1 + 0x134e,iVar1 + 8,iVar1 + 0x1360,iVar1 + 0x1364);
    *(undefined1 *)(iVar1 + 0x25) = 1;
  }
  return iVar1 + 0x134e;
}



undefined4 __fastcall FUN_00ab52a0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1364);
}



int __fastcall FUN_00ab52b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(iVar1 + 0x25) == '\0') {
    func_0x009f7d60(*(undefined4 *)(iVar1 + 0x10),iVar1 + 0x13c8,iVar1 + 0x28,iVar1 + 0x398,
                    iVar1 + 0x1278,iVar1 + 0x134e,iVar1 + 8,iVar1 + 0x1360,iVar1 + 0x1364);
    *(undefined1 *)(iVar1 + 0x25) = 1;
  }
  return iVar1 + 0x398;
}



uint __fastcall FUN_00ab52c0(int param_1)

{
  uint uVar1;
  
  uVar1 = func_0x00a06dc0();
  if (((char)uVar1 == '\x04') && (uVar1 = uVar1 & 0xff, *(int *)(param_1 + 0x28) == 0)) {
    uVar1 = 3;
  }
  return uVar1;
}



undefined8 __fastcall FUN_00ab52f0(int param_1)

{
  code *pcVar1;
  undefined4 unaff_ESI;
  undefined8 uStack_8;
  
  uStack_8 = 0;
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + 0x4e8);
  _guard_check_icall(0x8e28);
  (*pcVar1)();
  return CONCAT44(unaff_ESI,&uStack_8);
}



undefined4 FUN_00ab5300(undefined4 param_1,undefined4 param_2)

{
  FUN_00467240(param_1,param_2);
  return 0;
}



void __thiscall FUN_00ab5320(int param_1,uint param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_ESI;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0x14);
  uStack_4 = 0;
  pcVar2 = *(code **)(*piVar1 + 0x54);
  uVar3 = func_0x00a02360(param_2);
  _guard_check_icall(uVar3,&uStack_4);
  (*pcVar2)();
  piVar1[(param_2 & 0xff) * 0x60 + piVar1[0xd0] + 0xd1] = unaff_ESI;
  piVar1[0x5c1] = piVar1[0x5c1] | 0x20000;
  return;
}



void FUN_00ab5340(undefined4 param_1,undefined4 param_2)

{
  func_0x00a06ec0(param_2);
  return;
}



void FUN_00ab5350(undefined4 param_1,undefined4 param_2)

{
  func_0x00a06ef0(param_2);
  return;
}



void __thiscall
FUN_00ab5360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  func_0x00a06eb0();
  func_0x0095d160(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void __thiscall
FUN_00ab5390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  func_0x00a06eb0();
  func_0x0095d620(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void __thiscall
FUN_00ab53c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x00a06eb0();
  func_0x0095df20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void __thiscall
FUN_00ab53f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  func_0x00a06eb0();
  func_0x0095d680(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void __thiscall
FUN_00ab5430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x00a06eb0();
  func_0x0095e420(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void __thiscall
FUN_00ab5460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x00a06eb0();
  func_0x0095e8f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void __thiscall
FUN_00ab5490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  func_0x00a06eb0();
  func_0x0095f9a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



void __thiscall
FUN_00ab54d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  func_0x00a06eb0();
  func_0x0095e960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



undefined4 __thiscall FUN_00ab5510(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EBX;
  char cVar7;
  code *pcVar8;
  uint uStack_10;
  int *piStack_8;
  undefined4 uStack_4;
  
  cVar7 = (char)((uint)unaff_EBX >> 0x18);
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0x14);
  piStack_8 = (int *)(param_2 + 8);
  iVar2 = *piStack_8;
  if (iVar2 != piVar1[0x564]) {
    bVar3 = 0;
    uStack_10 = uStack_10 & 0xffffff00;
    do {
      if ((int *)piVar1[bVar3 + 0x556] != (int *)0x0) {
        pcVar8 = *(code **)(*(int *)piVar1[bVar3 + 0x556] + 0x2c);
        _guard_check_icall(param_2);
        iVar5 = (*pcVar8)();
        if (iVar5 == 1) {
          return 1;
        }
        piVar1[bVar3 + 0x556] = 0;
      }
      iVar5 = func_0x008ea190(uStack_10);
      if (iVar5 != 0) {
        piVar6 = (int *)FUN_00921200();
        pcVar8 = *(code **)(*piVar6 + 0x30);
        _guard_check_icall(param_2);
        iVar5 = (*pcVar8)();
        if (iVar5 == 1) {
          return 1;
        }
      }
      bVar3 = (char)uStack_10 + 1;
      uStack_10 = CONCAT31(uStack_10._1_3_,bVar3);
    } while (bVar3 != 7);
  }
  piStack_8 = (int *)0x3;
  piVar1[0x5c1] = piVar1[0x5c1] | 0x80000;
  piVar1[0x564] = iVar2;
  iVar2 = *(int *)(param_2 + 0x1c);
  uStack_4 = 2;
  cVar4 = func_0x009f6430(&piStack_8);
  if ((cVar4 != '\0') && ((char)piVar1[0x5b9] != cVar7)) {
    *(char *)(piVar1 + 0x5b9) = cVar7;
    if (iVar2 < 3) {
      pcVar8 = *(code **)(*piVar1 + 0x2c);
    }
    else {
      pcVar8 = *(code **)(*piVar1 + 0x34);
    }
    _guard_check_icall(0x884f);
    (*pcVar8)();
  }
  return 0;
}



void __thiscall FUN_00ab5520(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  _guard_check_icall(param_2);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return;
  }
  if (*(char *)(param_1[8] + 0x1a88) != '\0') {
    func_0x00ab6ac0(0x8d40,0);
  }
  FUN_00463ff0(unaff_retaddr);
  return;
}



undefined4 FUN_00ab5570(void)

{
  _guard_check_icall();
  return 0;
}



undefined4 FUN_00ab5580(void)

{
  _guard_check_icall();
  return 0;
}



undefined4 FUN_00ab5590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00466fb0(param_2,param_3,param_4);
  return 0;
}



void __thiscall FUN_00ab5800(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x1968) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
    pcVar2 = *(code **)(iVar1 + 0xb0c);
    if (pcVar2 == (code *)0x0) {
      if (*(int *)(iVar1 + 0xa60) != 0) {
        pcVar2 = *(code **)(iVar1 + 0xa60);
        _guard_check_icall(param_2);
        (*pcVar2)();
        return;
      }
    }
    else {
      _guard_check_icall(param_2);
      (*pcVar2)();
    }
  }
  return;
}



void FUN_00ab5820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00ab9640(param_1,param_2,param_3);
  return;
}



undefined4 * __thiscall FUN_00abc330(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::FenceNVGL::vftable;
  pcVar1 = *(code **)(param_1[2] + 0x110);
  uStack_8 = 0;
  _guard_check_icall(1,param_1 + 1,uVar2);
  (*pcVar1)();
  param_1[1] = 0;
  *param_1 = rx::FenceNVImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00abc3c0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FenceNVImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00abc3f0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::FenceNVSyncGL::vftable;
  if (param_1[1] != 0) {
    pcVar1 = *(code **)(param_1[2] + 0x4c8);
    _guard_check_icall(param_1[1],uVar2);
    (*pcVar1)();
    param_1[1] = 0;
  }
  *param_1 = rx::FenceNVImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __fastcall FUN_00abc750(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x114);
  _guard_check_icall(*(undefined4 *)(param_1 + 4));
  (*pcVar1)();
  return 0;
}



undefined4 __fastcall FUN_00abc770(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x4c4);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),1,0xffffffff,0xffffffff);
  iVar2 = (*pcVar1)();
  if ((iVar2 != 0x911a) && (iVar2 != 0x911c)) {
    func_0x0098f180(0x505,
                    "glClientWaitSync did not return GL_ALREADY_SIGNALED or GL_CONDITION_SATISFIED."
                    ,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\FenceNVGL.cpp"
                    ,"rx::FenceNVSyncGL::finish",99);
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00abc7d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x124);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),param_3);
  (*pcVar1)();
  func_0x00ab5330();
  return 0;
}



undefined4 __fastcall FUN_00abc810(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x4d8);
  _guard_check_icall(0x9117,0);
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    func_0x0098f180(0x505,"glFenceSync failed to create a GLsync object.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\FenceNVGL.cpp"
                    ,"rx::FenceNVSyncGL::set",0x4d);
    return 1;
  }
  func_0x00ab5330();
  return 0;
}



undefined4 __thiscall FUN_00abc880(int param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x128);
  _guard_check_icall(*(undefined4 *)(param_1 + 4));
  uVar2 = (*pcVar1)();
  *param_2 = uVar2;
  return 0;
}



undefined4 __fastcall FUN_00abc8b0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x4f0);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),0x9114,1,0);
  (*pcVar1)();
  return 0;
}



undefined4 * __thiscall FUN_00abcad0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::QueryImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00abcb00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f41cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::StandardQueryGL::vftable;
  if (param_1[4] != 0) {
    func_0x00ab7510(*(undefined1 *)(param_1 + 1),param_1,param_1[4],uVar3);
    pcVar2 = *(code **)(param_1[2] + 0x180);
    _guard_check_icall(1,param_1 + 4);
    (*pcVar2)();
    param_1[4] = 0;
  }
  if (param_1[9] != 0) {
    while( true ) {
      uStack_14 = *(undefined4 *)
                   (*(int *)(param_1[6] + ((uint)param_1[8] >> 2 & param_1[7] - 1) * 4) +
                   (param_1[8] & 3) * 4);
      pcVar2 = *(code **)(param_1[2] + 0x180);
      _guard_check_icall(1,&uStack_14);
      (*pcVar2)();
      piVar1 = param_1 + 9;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) break;
      param_1[8] = param_1[8] + 1;
    }
    param_1[8] = 0;
  }
  func_0x00abca10();
  *param_1 = rx::QueryImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00abcc00(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SyncProviderGL::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00abcc30(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::SyncProviderGLQuery::vftable;
  pcVar1 = *(code **)(param_1[1] + 0x180);
  uStack_8 = 0;
  _guard_check_icall(1,param_1 + 2,uVar2);
  (*pcVar1)();
  *param_1 = rx::SyncProviderGL::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00abccb0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::SyncProviderGLSync::vftable;
  uStack_8 = 0;
  pcVar1 = *(code **)(param_1[1] + 0x4c8);
  _guard_check_icall(param_1[2],uVar2);
  (*pcVar1)();
  *param_1 = rx::SyncProviderGL::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00abcd30(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::SyncQueryGL::vftable;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[3];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_1 = rx::QueryImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



void __thiscall FUN_00abcf60(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  param_1[10] = 0;
  param_1[0xb] = 0;
  pcVar1 = *(code **)(*param_1 + 0x30);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00abcf90(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x2c);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



bool __thiscall FUN_00abcfc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3d9e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar4 = func_0x00a041b0(*(undefined4 *)(param_1 + 8),uVar5);
  if (cVar4 == '\0') {
    cVar4 = func_0x00a04490(*(undefined4 *)(param_1 + 8));
    if (cVar4 == '\0') {
      func_0x0098f180(0x502,"Unreachable Code.",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\QueryGL.cpp"
                      ,"rx::SyncQueryGL::end",0x161);
      *unaff_FS_OFFSET = iStack_10;
      return true;
    }
    puVar6 = (undefined4 *)func_0x008ab47d(0xc);
    if (puVar6 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      *puVar6 = rx::SyncProviderGLQuery::vftable;
      puVar6[1] = uVar1;
      puVar6[2] = 0;
      goto LAB_00abd059;
    }
  }
  else {
    puVar6 = (undefined4 *)func_0x008ab47d(0xc);
    if (puVar6 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 8);
      *puVar6 = rx::SyncProviderGLSync::vftable;
      puVar6[1] = uVar1;
      puVar6[2] = 0;
      goto LAB_00abd059;
    }
  }
  puVar6 = (undefined4 *)0x0;
LAB_00abd059:
  piVar8 = (int *)(param_1 + 0xc);
  puVar2 = (undefined4 *)*piVar8;
  *piVar8 = (int)puVar6;
  if (puVar2 != (undefined4 *)0x0) {
    pcVar3 = *(code **)*puVar2;
    _guard_check_icall(1);
    (*pcVar3)();
  }
  pcVar3 = *(code **)(*(int *)*piVar8 + 4);
  _guard_check_icall(param_2,0);
  iVar7 = (*pcVar3)();
  *unaff_FS_OFFSET = iStack_10;
  return iVar7 == 1;
}



undefined4 __thiscall FUN_00abd2c0(int param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  undefined1 *unaff_retaddr;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x19c);
  if (param_3 != '\0') {
    _guard_check_icall(*(undefined4 *)(param_1 + 8),0x8866,&uStack_4);
    (*pcVar1)();
    *unaff_retaddr = 1;
    return 0;
  }
  iVar2 = 0x8867;
  _guard_check_icall(*(undefined4 *)(param_1 + 8),0x8867,&uStack_4);
  (*pcVar1)();
  *unaff_retaddr = iVar2 == 1;
  return 0;
}



undefined4 __thiscall FUN_00abd330(undefined1 *param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  undefined4 unaff_ESI;
  int iVar2;
  undefined1 *puStack_4;
  
  if (param_3 != '\0') {
    pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x4c4);
    puStack_4 = param_1;
    _guard_check_icall(*(undefined4 *)(param_1 + 8),0,0,0);
    (*pcVar1)();
    *puStack_4 = 1;
    return 0;
  }
  puStack_4 = (undefined1 *)0x0;
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x4f0);
  iVar2 = 0x9114;
  _guard_check_icall(*(undefined4 *)(param_1 + 8),0x9114,1,0,&puStack_4);
  (*pcVar1)();
  *(bool *)unaff_ESI = iVar2 == 0x9119;
  return 0;
}



undefined4 __thiscall FUN_00abd3b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_retaddr;
  
  iVar1 = func_0x00abd0f0(param_2,1);
  if (iVar1 == 1) {
    return 1;
  }
  *unaff_retaddr = *(undefined4 *)(param_1 + 0x28);
  return 0;
}



undefined4 __thiscall FUN_00abd3e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  iVar2 = func_0x00abd0f0(param_2,1);
  if (iVar2 == 1) {
    return 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *unaff_retaddr = *(undefined4 *)(param_1 + 0x28);
  unaff_retaddr[1] = uVar1;
  return 0;
}



undefined4 __thiscall FUN_00abd410(int param_1,undefined4 param_2,uint *param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  pcVar1 = (char *)(param_1 + 0x10);
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0xc) + 8);
    _guard_check_icall(param_2,1,pcVar1);
    iVar4 = (*pcVar2)();
    if (iVar4 == 1) {
      return 1;
    }
    if (*pcVar1 != '\0') {
      puVar3 = *(undefined4 **)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (puVar3 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar3;
        _guard_check_icall(1);
        (*pcVar2)();
      }
    }
  }
  *param_3 = (uint)(*pcVar1 != '\0');
  return 0;
}



undefined4 __thiscall FUN_00abd490(int param_1,undefined4 param_2,uint *param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  pcVar1 = (char *)(param_1 + 0x10);
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    pcVar3 = *(code **)(**(int **)(param_1 + 0xc) + 8);
    _guard_check_icall(param_2,1,pcVar1);
    iVar5 = (*pcVar3)();
    if (iVar5 == 1) {
      return 1;
    }
    if (*pcVar1 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (puVar4 != (undefined4 *)0x0) {
        pcVar3 = *(code **)*puVar4;
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  cVar2 = *pcVar1;
  param_3[1] = 0;
  *param_3 = (uint)(cVar2 != '\0');
  return 0;
}



void __thiscall FUN_00abd510(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  func_0x00a02140(param_2);
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x18c);
  _guard_check_icall(1,param_1 + 8);
  (*pcVar1)();
  iVar2 = func_0x00ab77e0(param_2,unaff_retaddr);
  if (iVar2 == 1) {
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x16c);
  uVar3 = func_0x008bad50(unaff_EBX);
  _guard_check_icall(uVar3,uVar4);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x184);
  uVar4 = func_0x008bad50(unaff_ESI);
  _guard_check_icall(uVar4);
  (*pcVar1)();
  func_0x00ab7980(param_2,unaff_ESI);
  return;
}



undefined4 __fastcall FUN_00abd5c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x4d8);
  _guard_check_icall(0x9117,0);
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    func_0x0098f180(0x505,"glFenceSync failed to create a GLsync object.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\QueryGL.cpp"
                    ,"rx::SyncProviderGLSync::init",0xfe);
    return 1;
  }
  func_0x00ab5330();
  return 0;
}



undefined4 __thiscall FUN_00abd630(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = func_0x00abd0f0(param_2,0);
  if (iVar1 == 1) {
    return 1;
  }
  *(bool *)unaff_retaddr = *(int *)(param_1 + 0x24) == 0;
  return 0;
}



undefined4 __thiscall FUN_00abd660(int param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  pcVar1 = (char *)(param_1 + 0x10);
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0xc) + 8);
    _guard_check_icall(param_2,0,pcVar1);
    iVar4 = (*pcVar2)();
    if (iVar4 == 1) {
      return 1;
    }
    if (*pcVar1 != '\0') {
      puVar3 = *(undefined4 **)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (puVar3 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar3;
        _guard_check_icall(1);
        (*pcVar2)();
      }
    }
  }
  *param_3 = *pcVar1;
  return 0;
}



undefined4 __thiscall FUN_00abd6e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00ab7510(*(undefined1 *)(param_1 + 4),param_1,*(int *)(param_1 + 0x10));
    func_0x00abd730((undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (4 < *(uint *)(param_1 + 0x24)) {
    iVar1 = func_0x00abd0f0(param_2,0);
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_00abd7c0(int param_1)

{
  code *pcVar1;
  undefined4 unaff_EDI;
  undefined4 uStack_14;
  int *piStack_10;
  int iStack_4;
  
  piStack_10 = &iStack_4;
  uStack_14 = 1;
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x18c);
  iStack_4 = param_1;
  _guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x540);
  _guard_check_icall(unaff_EDI,0x8e28);
  (*pcVar1)();
  func_0x00abd730(&uStack_14);
  return 0;
}



undefined4 __fastcall FUN_00abd810(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 **ppuVar4;
  int iVar5;
  undefined4 **unaff_ESI;
  int unaff_EDI;
  bool bVar6;
  undefined4 *puStack_10;
  undefined8 uStack_c;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    if (4 < *(uint *)(param_1 + 0x24)) {
      while( true ) {
        uStack_c = uStack_c & 0xffffffff;
        uStack_4 = *(undefined4 *)
                    (*(int *)(*(int *)(param_1 + 0x18) +
                             (*(uint *)(param_1 + 0x20) >> 2 & *(int *)(param_1 + 0x1c) - 1U) * 4) +
                    (*(uint *)(param_1 + 0x20) & 3) * 4);
        pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x1a0);
        _guard_check_icall(uStack_4,0x8867,(int)&uStack_c + 4);
        (*pcVar2)();
        if (uStack_c._4_4_ == 0) break;
        pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x528);
        if (pcVar2 == (code *)0x0) {
          ppuVar4 = &puStack_10;
          puStack_10 = (undefined4 *)0x0;
          pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x1a0);
          _guard_check_icall(uStack_4,0x8866);
          (*pcVar2)();
          iVar5 = 0;
          switch(*(undefined1 *)(param_1 + 4)) {
          case 0:
          case 1:
            if ((*(int *)(param_1 + 0x28) == 1) && (*(int *)(param_1 + 0x2c) == 0))
            goto code_r0x00abd8de;
            if (ppuVar4 != (undefined4 **)0x1) goto LAB_00abd949;
            iVar5 = 0;
            break;
          default:
            goto LAB_00abd949;
          case 3:
          case 4:
          case 6:
            bVar6 = CARRY4((uint)ppuVar4,*(uint *)(param_1 + 0x28));
            ppuVar4 = (undefined4 **)((int)ppuVar4 + *(uint *)(param_1 + 0x28));
            iVar5 = *(int *)(param_1 + 0x2c) + (uint)bVar6;
            break;
          case 5:
            break;
          }
        }
        else {
          uStack_c = 0;
          _guard_check_icall(uStack_4,0x8866,&uStack_c);
          (*pcVar2)();
          uVar3 = *(uint *)(param_1 + 0x28);
          ppuVar4 = unaff_ESI;
          iVar5 = unaff_EDI;
          switch(*(undefined1 *)(param_1 + 4)) {
          case 0:
          case 1:
            if (((uVar3 != 1) || (*(int *)(param_1 + 0x2c) != 0)) &&
               ((unaff_ESI != (undefined4 **)0x1 || (unaff_EDI != 0)))) goto LAB_00abd949;
code_r0x00abd8de:
            ppuVar4 = (undefined4 **)0x1;
            iVar5 = 0;
            break;
          default:
LAB_00abd949:
            ppuVar4 = (undefined4 **)0x0;
            iVar5 = 0;
          case 5:
            unaff_ESI = ppuVar4;
            unaff_EDI = iVar5;
            break;
          case 3:
          case 4:
          case 6:
            ppuVar4 = (undefined4 **)(uVar3 + (int)unaff_ESI);
            iVar5 = *(int *)(param_1 + 0x2c) + unaff_EDI + (uint)CARRY4(uVar3,(uint)unaff_ESI);
          }
        }
        *(undefined4 ***)(param_1 + 0x28) = ppuVar4;
        *(int *)(param_1 + 0x2c) = iVar5;
        pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x180);
        _guard_check_icall(1,&puStack_10);
        (*pcVar2)();
        piVar1 = (int *)(param_1 + 0x24);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          break;
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
    }
    uStack_c = CONCAT44(param_1 + 0x10,(undefined4)uStack_c);
    pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x18c);
    _guard_check_icall(1,param_1 + 0x10);
    (*pcVar2)();
    func_0x00ab6940(*(undefined1 *)(param_1 + 4),param_1,*puStack_10);
    func_0x00ab5330();
  }
  return 0;
}



undefined4 * __thiscall FUN_00ad6a50(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::base::MRUCacheBase<>::vftable;
  func_0x009bc4d0();
  func_0x00ad6820();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ad6a90(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::PixelLocalStoragePlane::ClearCommands::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



void __thiscall FUN_00ad6d00(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x278);
  _guard_check_icall(*(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4),1,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00ad6d30(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x280);
  _guard_check_icall(*(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4),1,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00ad6d60(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x43c);
  _guard_check_icall(*(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4),1,param_3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00ad7350(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SurfaceGL::vftable;
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



void FUN_00ad7380(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f464b8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uStack_14);
  uStack_8 = 2;
  func_0x0046a470(aiStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  func_0x0091ffd0(0x300d,0x300d,aiStack_2c);
  if (0xf < uStack_18) {
    uVar2 = uStack_18 + 1;
    iVar3 = aiStack_2c[0];
    if (0xfff < uVar2) {
      iVar3 = *(int *)(aiStack_2c[0] + -4);
      uVar2 = uStack_18 + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar2);
  }
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_00ad7460(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = func_0x008cc550(0);
  uVar1 = *(undefined4 *)(iVar2 + 0x338);
  func_0x00a01ec0(param_1);
  if (param_1 == 0x405) {
    iVar2 = func_0x00ad0440(0x405,1,0,0,uVar1);
  }
  else {
    if ((param_1 != 0x1801) && (param_1 != 0x1802)) {
      return 0;
    }
    iVar2 = func_0x00ad0440(param_1,0,1,1,uVar1);
  }
  if (iVar2 != 1) {
    return 0;
  }
  return 1;
}



undefined4 __thiscall FUN_00ad7ae0(undefined4 param_1,byte param_2)

{
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x5c);
  }
  return param_1;
}



undefined4 FUN_00ad80c0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if ((ushort)(*(short *)(param_2 + 0xb8) - 0x3eU) < 0x5b) {
    cVar1 = func_0x00ad8010(*(undefined4 *)(*(int *)(param_2 + 0xd0) + 8));
    if (cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0xcc) = 1;
      return 1;
    }
  }
  return 1;
}



undefined4 FUN_00ad8100(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)(param_2 + 0xc4) != 0) {
    cVar1 = func_0x00ad8010(*(undefined4 *)(*(int *)(param_2 + 0xc4) + 8));
    if (cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0xc0) = 1;
      return 1;
    }
  }
  return 1;
}



int __thiscall FUN_00ad8f60(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x50;
  func_0x00ad8ed0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0x98);
  }
  return iVar1;
}



undefined4 __thiscall FUN_00ad8fa0(undefined4 param_1,byte param_2)

{
  func_0x00ad8b90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



int __thiscall FUN_00adb130(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  void *_Dst;
  int iVar5;
  int unaff_EBX;
  void *_Src;
  size_t _Size;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    return -1;
  }
  if (param_2 != -1) {
    uVar2 = **(uint **)(param_1 + 0x20);
    iVar3 = **(int **)(param_1 + 0x30);
    uVar1 = iVar3 + uVar2;
    if ((uVar2 != 0) && (uVar2 < uVar1)) {
      **(int **)(param_1 + 0x30) = iVar3 + -1;
      puVar4 = (undefined1 *)**(int **)(param_1 + 0x20);
      **(int **)(param_1 + 0x20) = (int)(puVar4 + 1);
      *puVar4 = (char)param_2;
      *(uint *)(param_1 + 0x38) = uVar2 + 1;
      return param_2;
    }
    _Size = 0;
    if ((uVar2 == 0) || (_Size = uVar1 - **(int **)(param_1 + 0xc), _Size < 0x20)) {
      _Src = (void *)0x20;
    }
    else if (_Size < 0x3fffffff) {
      _Src = (void *)(_Size * 2);
    }
    else {
      if (0x7ffffffe < _Size) {
        return -1;
      }
      _Src = (void *)0x7fffffff;
    }
    func_0x00ad78b0();
    _Dst = (void *)func_0x00ad7620(_Src);
    memcpy(_Dst,_Src,_Size);
    iVar3 = _Size + (int)_Dst;
    *(int *)(param_1 + 0x38) = iVar3 + 1;
    **(undefined4 **)(param_1 + 0x10) = _Dst;
    **(int **)(param_1 + 0x20) = iVar3;
    **(int **)(param_1 + 0x30) = (int)_Dst + (unaff_EBX - iVar3);
    if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
      iVar3 = *(int *)(param_1 + 0x38);
      iVar5 = (**(int **)(param_1 + 0x1c) - (int)_Src) + (int)_Dst;
      **(undefined4 **)(param_1 + 0xc) = _Dst;
      **(int **)(param_1 + 0x1c) = iVar5;
      **(int **)(param_1 + 0x2c) = iVar3 - iVar5;
    }
    else {
      **(undefined4 **)(param_1 + 0xc) = _Dst;
      **(undefined4 **)(param_1 + 0x1c) = _Dst;
      **(undefined4 **)(param_1 + 0x2c) = 0;
    }
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
    **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + -1;
    puVar4 = (undefined1 *)**(int **)(param_1 + 0x20);
    **(int **)(param_1 + 0x20) = (int)(puVar4 + 1);
    *puVar4 = (char)param_2;
    return param_2;
  }
  return 0;
}



int __thiscall FUN_00adb280(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = **(uint **)(param_1 + 0x1c);
  if (((uVar1 != 0) && (**(uint **)(param_1 + 0xc) < uVar1)) &&
     ((param_2 == -1 ||
      (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)))))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -1;
    if (param_2 == -1) {
      param_2 = 0;
    }
    else {
      *(char *)**(undefined4 **)(param_1 + 0x1c) = (char)param_2;
    }
    return param_2;
  }
  return -1;
}



uint * __thiscall
FUN_00adb2f0(int param_1,uint *param_2,uint param_3,int param_4,int param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puStack_10;
  uint uStack_c;
  
  if (((param_6 & 1) == 0) || ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((param_6 & 2) == 0) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar4) || (bVar5)) goto LAB_00adb4a3;
  iVar1 = **(int **)(param_1 + 0x1c);
  if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
    uVar11 = **(uint **)(param_1 + 0x20);
    if ((uVar11 != 0) && (*(uint *)(param_1 + 0x38) < uVar11)) {
      *(uint *)(param_1 + 0x38) = uVar11;
    }
  }
  else {
    uVar11 = 0;
  }
  iVar2 = **(int **)(param_1 + 0xc);
  puVar9 = (uint *)(*(int *)(param_1 + 0x38) - iVar2);
  uVar8 = (int)puVar9 >> 0x1f;
  if (param_5 == 0) {
    uStack_c = 0;
    puStack_10 = (uint *)0x0;
LAB_00adb3df:
    puVar10 = (uint *)((int)puStack_10 + param_3);
    uVar6 = uStack_c + param_4 + (uint)CARRY4((uint)puStack_10,param_3);
    if ((uVar6 <= uVar8) && ((uVar6 < uVar8 || (puVar10 <= puVar9)))) {
      if ((puVar10 != (uint *)0x0 || uVar6 != 0) &&
         ((((param_6 & 1) != 0 && (iVar1 == 0)) || (((param_6 & 2) != 0 && (uVar11 == 0)))))) {
        func_0x00468710(0xffffffff,0xffffffff);
        return puVar9;
      }
      iVar7 = iVar2 + (int)puVar10;
      if (((param_6 & 1) != 0) && (iVar1 != 0)) {
        iVar1 = *(int *)(param_1 + 0x38);
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = iVar7;
        **(int **)(param_1 + 0x2c) = iVar1 - iVar7;
      }
      if (((param_6 & 2) != 0) && (uVar11 != 0)) {
        iVar1 = **(int **)(param_1 + 0x30);
        iVar3 = **(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x10) = iVar2;
        **(int **)(param_1 + 0x20) = iVar7;
        **(int **)(param_1 + 0x30) = (iVar1 + iVar3) - iVar7;
      }
      *param_2 = (uint)puVar10;
      param_2[1] = uVar6;
      goto LAB_00adb4b4;
    }
  }
  else if (param_5 == 1) {
    if ((param_6 & 3) != 3) {
      if ((param_6 & 1) == 0) {
        if (((param_6 & 2) != 0) && ((uVar11 != 0 || (iVar2 == 0)))) {
          uStack_c = (int)(uVar11 - iVar2) >> 0x1f;
          puStack_10 = (uint *)(uVar11 - iVar2);
          goto LAB_00adb3df;
        }
      }
      else if ((iVar1 != 0) || (iVar2 == 0)) {
        uStack_c = iVar1 - iVar2 >> 0x1f;
        puStack_10 = (uint *)(iVar1 - iVar2);
        goto LAB_00adb3df;
      }
    }
  }
  else {
    uStack_c = uVar8;
    puStack_10 = puVar9;
    if (param_5 == 2) goto LAB_00adb3df;
  }
LAB_00adb4a3:
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
LAB_00adb4b4:
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_2;
}



uint * __thiscall
FUN_00adb4e0(int param_1,uint *param_2,uint param_3,int param_4,uint param_5,int param_6,
            undefined4 param_7,undefined4 param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puStack_4;
  
  if (((param_9 & 1) == 0) || ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((param_9 & 2) == 0) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar4) && (!bVar5)) {
    uVar10 = param_3 + param_5;
    uVar9 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    iVar1 = **(int **)(param_1 + 0x1c);
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      uVar7 = **(uint **)(param_1 + 0x20);
      if ((uVar7 != 0) && (*(uint *)(param_1 + 0x38) < uVar7)) {
        *(uint *)(param_1 + 0x38) = uVar7;
      }
    }
    else {
      uVar7 = 0;
    }
    iVar2 = **(int **)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 0x38);
    uVar6 = iVar3 - iVar2;
    uVar8 = (int)uVar6 >> 0x1f;
    if ((uVar9 <= uVar8) && ((uVar9 < uVar8 || (uVar10 <= uVar6)))) {
      if ((uVar10 != 0 || uVar9 != 0) &&
         ((((param_9 & 1) != 0 && (iVar1 == 0)) || (((param_9 & 2) != 0 && (uVar7 == 0)))))) {
        func_0x00468710(0xffffffff,0xffffffff);
        return puStack_4;
      }
      if (((param_9 & 1) != 0) && (iVar1 != 0)) {
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = uVar10 + iVar2;
        **(int **)(param_1 + 0x2c) = iVar3 - (uVar10 + iVar2);
      }
      if (((param_9 & 2) != 0) && (uVar7 != 0)) {
        iVar1 = **(int **)(param_1 + 0x30);
        iVar3 = **(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x10) = iVar2;
        **(int **)(param_1 + 0x20) = uVar10 + iVar2;
        **(int **)(param_1 + 0x30) = (iVar1 + iVar3) - (uVar10 + iVar2);
      }
      *param_2 = uVar10;
      param_2[1] = uVar9;
      goto LAB_00adb623;
    }
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
LAB_00adb623:
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_2;
}



uint __fastcall FUN_00adb950(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  pbVar2 = (byte *)*piVar1;
  if (pbVar2 != (byte *)0x0) {
    if (pbVar2 < pbVar2 + **(int **)(param_1 + 0x2c)) {
      return (uint)*pbVar2;
    }
    pbVar3 = (byte *)**(undefined4 **)(param_1 + 0x20);
    if ((pbVar3 != (byte *)0x0) && ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
      pbVar5 = *(byte **)(param_1 + 0x38);
      if (*(byte **)(param_1 + 0x38) < pbVar3) {
        pbVar5 = pbVar3;
      }
      if (pbVar2 < pbVar5) {
        *(byte **)(param_1 + 0x38) = pbVar5;
        iVar4 = *piVar1;
        *piVar1 = iVar4;
        **(int **)(param_1 + 0x2c) = (int)pbVar5 - iVar4;
        return (uint)*(byte *)**(undefined4 **)(param_1 + 0x1c);
      }
    }
  }
  return 0xffffffff;
}



undefined4 __thiscall FUN_00addfa0(undefined4 param_1,byte param_2)

{
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x58);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00addfd0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TLValueTrackingTraverser::vftable;
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x5c);
  }
  return param_1;
}



undefined4 FUN_00ade000(uint *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  bVar2 = uVar1 < *param_2;
  if (uVar1 == *param_2) {
    uVar1 = param_1[1];
    bVar2 = uVar1 < param_2[1];
  }
  return CONCAT31((int3)(uVar1 >> 8),bVar2);
}



void __thiscall FUN_00ade7f0(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x58);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00ade810(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x4c);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00ade830(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x5c);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00ade850(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e01d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = param_2[0x10] - param_2[0xf] >> 2;
  iVar3 = param_2[2];
  if (param_2[2] < iVar4) {
    iVar3 = iVar4;
  }
  param_2[2] = iVar3;
  uStack_14 = param_1;
  func_0x00ade4a0(&uStack_14,uVar2);
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_2 + 8);
  _guard_check_icall(param_1);
  (*pcVar1)();
  param_2[0x10] = param_2[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00ade8e0(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x54);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00ade900(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e01d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = param_2[0x10] - param_2[0xf] >> 2;
  iVar3 = param_2[2];
  if (param_2[2] < iVar4) {
    iVar3 = iVar4;
  }
  param_2[2] = iVar3;
  uStack_14 = param_1;
  func_0x00ade4a0(&uStack_14,uVar2);
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_2 + 0x28);
  _guard_check_icall(param_1);
  (*pcVar1)();
  param_2[0x10] = param_2[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00ade990(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x60);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00ade9b0(undefined4 param_1)

{
  func_0x00add860(param_1);
  return;
}



void __thiscall FUN_00ade9c0(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e01d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar4 = param_2[0x10] - param_2[0xf] >> 2;
  iVar3 = param_2[2];
  if (param_2[2] < iVar4) {
    iVar3 = iVar4;
  }
  param_2[2] = iVar3;
  uStack_14 = param_1;
  func_0x00ade4a0(&uStack_14,uVar2);
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_2 + 4);
  _guard_check_icall(param_1);
  (*pcVar1)();
  param_2[0x10] = param_2[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adea50(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x50);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adea70(int *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint uStack_1c;
  uint uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5dddd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = param_1[0x10] - param_1[0xf] >> 2;
  uStack_1c = param_2;
  iVar3 = param_1[2];
  if (param_1[2] < iVar5) {
    iVar3 = iVar5;
  }
  param_1[2] = iVar3;
  func_0x00ade4a0(&uStack_1c,uVar2);
  uStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    cStack_11 = '\x01';
    if ((char)param_1[1] != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x30);
      _guard_check_icall(0,param_2);
      cStack_11 = (*pcVar1)();
      if (cStack_11 == '\0') goto LAB_00adeb9f;
    }
    uVar2 = 0;
    uStack_18 = 0;
    uStack_1c = FUN_00ae9a60();
    if (uStack_1c != 0) {
      do {
        if (cStack_11 == '\0') goto LAB_00adeb9f;
        param_1[0x12] = uVar2;
        piVar4 = (int *)FUN_00ae9b00(uVar2);
        pcVar1 = *(code **)(*piVar4 + 4);
        _guard_check_icall(param_1);
        (*pcVar1)();
        uVar2 = uStack_18;
        param_1[0x12] = uStack_18;
        if ((*(char *)((int)param_1 + 5) != '\0') && (uStack_18 != uStack_1c - 1)) {
          pcVar1 = *(code **)(*param_1 + 0x30);
          _guard_check_icall(1,param_2);
          cStack_11 = (*pcVar1)();
        }
        uVar2 = uVar2 + 1;
        uStack_18 = uVar2;
      } while (uVar2 < uStack_1c);
      if (cStack_11 == '\0') goto LAB_00adeb9f;
    }
    if (*(char *)((int)param_1 + 6) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x30);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
LAB_00adeb9f:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adebc0(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e04d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar7 = param_1[0x10] - param_1[0xf] >> 2;
  piStack_20 = param_2;
  iVar8 = param_1[2];
  if (param_1[2] < iVar7) {
    iVar8 = iVar7;
  }
  param_1[2] = iVar8;
  piStack_1c = param_1;
  func_0x00ade4a0(&piStack_20,uVar5);
  uStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    cStack_11 = '\x01';
    pcVar1 = *(code **)(param_2[0x2f] + 8);
    _guard_check_icall();
    piVar6 = (int *)(*pcVar1)();
    if ((char)param_1[1] != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x30);
      _guard_check_icall(0,param_2);
      cStack_11 = (*pcVar1)();
      if (cStack_11 == '\0') goto LAB_00aded4d;
    }
    puVar9 = (undefined4 *)*piVar6;
    puVar2 = (undefined4 *)piVar6[1];
    cVar4 = cStack_11;
    if (puVar9 != puVar2) {
      iVar8 = 0;
      iStack_18 = 0;
      do {
        piStack_20 = (int *)*puVar9;
        if (cVar4 != '\0') {
          if (param_2[0x34] != 0) {
            iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_2[0x34] + 0x14) + iVar8) + 0x10) + 8);
            if ((iVar7 == 0xf) || (iVar7 == 0x10)) {
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
            iStack_18 = iVar8 + 4;
            *(undefined1 *)((int)param_1 + 0x59) = uVar3;
          }
          pcVar1 = *(code **)(*piStack_20 + 4);
          _guard_check_icall(param_1);
          (*pcVar1)();
          iVar8 = iStack_18;
          param_1 = piStack_1c;
          cVar4 = cStack_11;
          if ((*(char *)((int)piStack_1c + 5) != '\0') && (piStack_20 != *(int **)(piVar6[1] + -4)))
          {
            pcVar1 = *(code **)(*piStack_1c + 0x30);
            _guard_check_icall(1,param_2);
            cStack_11 = (*pcVar1)();
            iVar8 = iStack_18;
            param_1 = piStack_1c;
            cVar4 = cStack_11;
          }
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar2);
    }
    *(undefined1 *)((int)param_1 + 0x59) = 0;
    if ((cVar4 != '\0') && (*(char *)((int)param_1 + 6) != '\0')) {
      pcVar1 = *(code **)(*param_1 + 0x30);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
LAB_00aded4d:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00aded70(int *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint uStack_1c;
  uint uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5dddd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = param_1[0x10] - param_1[0xf] >> 2;
  uStack_1c = param_2;
  iVar3 = param_1[2];
  if (param_1[2] < iVar5) {
    iVar3 = iVar5;
  }
  param_1[2] = iVar3;
  func_0x00ade4a0(&uStack_1c,uVar2);
  uStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    cStack_11 = '\x01';
    if ((char)param_1[1] != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x10);
      _guard_check_icall(0,param_2);
      cStack_11 = (*pcVar1)();
      if (cStack_11 == '\0') goto LAB_00adee9f;
    }
    uVar2 = 0;
    uStack_18 = 0;
    uStack_1c = FUN_00ae9a70();
    if (uStack_1c != 0) {
      do {
        if (cStack_11 == '\0') goto LAB_00adee9f;
        param_1[0x12] = uVar2;
        piVar4 = (int *)FUN_00ae9b10(uVar2);
        pcVar1 = *(code **)(*piVar4 + 4);
        _guard_check_icall(param_1);
        (*pcVar1)();
        uVar2 = uStack_18;
        param_1[0x12] = uStack_18;
        if ((*(char *)((int)param_1 + 5) != '\0') && (uStack_18 != uStack_1c - 1)) {
          pcVar1 = *(code **)(*param_1 + 0x10);
          _guard_check_icall(1,param_2);
          cStack_11 = (*pcVar1)();
        }
        uVar2 = uVar2 + 1;
        uStack_18 = uVar2;
      } while (uVar2 < uStack_1c);
      if (cStack_11 == '\0') goto LAB_00adee9f;
    }
    if (*(char *)((int)param_1 + 6) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x10);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
LAB_00adee9f:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adeec0(int *param_1,int *param_2)

{
  short sVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int *piStack_18;
  undefined1 uStack_12;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5dddd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = param_1[0x10] - param_1[0xf] >> 2;
  piStack_1c = param_2;
  iVar5 = param_1[2];
  if (param_1[2] < iVar6) {
    iVar5 = iVar6;
  }
  param_1[2] = iVar5;
  func_0x00ade4a0(&piStack_1c,uVar4);
  uStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    cStack_11 = '\x01';
    if ((char)param_1[1] != '\0') {
      pcVar2 = *(code **)(*param_1 + 0x10);
      _guard_check_icall(0,param_2);
      cStack_11 = (*pcVar2)();
      if (cStack_11 == '\0') goto LAB_00adf039;
    }
    cVar3 = FUN_00aea620();
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    pcVar2 = *(code **)(*(int *)param_2[0x2f] + 4);
    _guard_check_icall(param_1);
    (*pcVar2)();
    cVar3 = FUN_00aea620();
    piStack_1c = param_1 + 0x16;
    if (cVar3 != '\0') {
      *(undefined1 *)piStack_1c = 0;
    }
    piStack_18 = param_1 + 0x16;
    if (*(char *)((int)param_1 + 5) != '\0') {
      pcVar2 = *(code **)(*param_1 + 0x10);
      _guard_check_icall(1,param_2);
      cStack_11 = (*pcVar2)();
    }
    if (cStack_11 != '\0') {
      cStack_11 = (char)param_1[0x16];
      uStack_12 = *(undefined1 *)((int)param_1 + 0x59);
      sVar1 = (short)param_2[0x2e];
      if ((((sVar1 == 0x2a) || (sVar1 == 0x2d)) || (sVar1 == 0x2c)) || (sVar1 == 0x2b)) {
        *(undefined1 *)piStack_18 = 0;
        *(undefined1 *)((int)param_1 + 0x59) = 0;
      }
      pcVar2 = *(code **)(*(int *)param_2[0x30] + 4);
      piStack_1c = piStack_18;
      _guard_check_icall(param_1);
      (*pcVar2)();
      cVar3 = *(char *)((int)param_1 + 6);
      *(char *)piStack_1c = cStack_11;
      *(undefined1 *)((int)param_1 + 0x59) = uStack_12;
      if (cVar3 != '\0') {
        pcVar2 = *(code **)(*param_1 + 0x10);
        _guard_check_icall(2,param_2);
        (*pcVar2)();
      }
    }
  }
LAB_00adf039:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adf060(int *param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e07d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = param_1[0x10] - param_1[0xf] >> 2;
  piStack_1c = param_2;
  iVar3 = param_1[2];
  if (param_1[2] < iVar5) {
    iVar3 = iVar5;
  }
  param_1[2] = iVar3;
  func_0x00ade4a0(&piStack_1c,uVar2);
  uStack_8 = 0;
  if (param_1[3] <= param_1[2]) goto LAB_00adf1e1;
  piVar6 = (int *)param_1[0x14];
  piStack_20 = param_2;
  piStack_1c = (int *)0x0;
  if (piVar6 == (int *)param_1[0x15]) {
    func_0x008f19b0(piVar6,&piStack_20);
  }
  else {
    *piVar6 = (int)param_2;
    piVar6[1] = 0;
    param_1[0x14] = param_1[0x14] + 8;
  }
  cStack_11 = '\x01';
  pcVar1 = *(code **)(param_2[5] + 8);
  _guard_check_icall();
  piStack_18 = (int *)(*pcVar1)();
  if ((char)param_1[1] == '\0') {
LAB_00adf137:
    uVar2 = 0;
    iVar3 = *piStack_18;
    piVar6 = piStack_18;
    cVar4 = cStack_11;
    if (piStack_18[1] - iVar3 >> 2 != 0) {
      do {
        piStack_1c = *(int **)(iVar3 + uVar2 * 4);
        if (cVar4 != '\0') {
          param_1[0x12] = uVar2;
          pcVar1 = *(code **)(*piStack_1c + 4);
          _guard_check_icall(param_1);
          (*pcVar1)();
          param_1[0x12] = uVar2;
          if ((*(char *)((int)param_1 + 5) != '\0') && (piStack_1c != *(int **)(piStack_18[1] + -4))
             ) {
            pcVar1 = *(code **)(*param_1 + 0x34);
            _guard_check_icall(1,param_2);
            cStack_11 = (*pcVar1)();
          }
          *(int *)(param_1[0x14] + -4) = *(int *)(param_1[0x14] + -4) + 1;
          piVar6 = piStack_18;
          cVar4 = cStack_11;
        }
        uVar2 = uVar2 + 1;
        iVar3 = *piVar6;
      } while (uVar2 < (uint)(piVar6[1] - iVar3 >> 2));
    }
    if ((cStack_11 != '\0') && (*(char *)((int)param_1 + 6) != '\0')) {
      pcVar1 = *(code **)(*param_1 + 0x34);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
  else {
    pcVar1 = *(code **)(*param_1 + 0x34);
    _guard_check_icall(0,param_2);
    cStack_11 = (*pcVar1)();
    if (cStack_11 != '\0') goto LAB_00adf137;
  }
  param_1[0x14] = param_1[0x14] + -8;
LAB_00adf1e1:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adf200(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e0b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = param_1[0x10] - param_1[0xf] >> 2;
  iStack_14 = param_2;
  iVar4 = param_1[2];
  if (param_1[2] < iVar5) {
    iVar4 = iVar5;
  }
  param_1[2] = iVar4;
  func_0x00ade4a0(&iStack_14,uVar3);
  iStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    if ((char)param_1[1] != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x2c);
      _guard_check_icall(0,param_2);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') goto LAB_00adf352;
    }
    param_1[0x12] = 0;
    iVar4 = *(int *)(param_2 + 0x14);
    iVar6 = param_1[0x10] - param_1[0xf] >> 2;
    iVar5 = param_1[2];
    if (param_1[2] < iVar6) {
      iVar5 = iVar6;
    }
    param_1[2] = iVar5;
    iStack_14 = iVar4;
    func_0x00ade4a0(&iStack_14);
    iStack_8._0_1_ = 1;
    pcVar1 = *(code **)(*param_1 + 0x28);
    _guard_check_icall(iVar4);
    (*pcVar1)();
    param_1[0x10] = param_1[0x10] + -4;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    param_1[0x12] = 0;
    if (*(char *)((int)param_1 + 5) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x2c);
      _guard_check_icall(1,param_2);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') goto LAB_00adf352;
    }
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[0x12] = 1;
    pcVar1 = *(code **)(*param_1 + 0x5c);
    _guard_check_icall(*(undefined4 *)(param_2 + 0x18));
    (*pcVar1)();
    param_1[0x12] = 1;
    *(undefined1 *)(param_1 + 4) = 1;
    if (*(char *)((int)param_1 + 6) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x2c);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
LAB_00adf352:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adf370(int *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint uStack_1c;
  uint uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5dddd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = param_1[0x10] - param_1[0xf] >> 2;
  uStack_1c = param_2;
  iVar3 = param_1[2];
  if (param_1[2] < iVar5) {
    iVar3 = iVar5;
  }
  param_1[2] = iVar3;
  func_0x00ade4a0(&uStack_1c,uVar2);
  uStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    cStack_11 = '\x01';
    if ((char)param_1[1] != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x40);
      _guard_check_icall(0,param_2);
      cStack_11 = (*pcVar1)();
      if (cStack_11 == '\0') goto LAB_00adf49f;
    }
    uVar2 = 0;
    uStack_18 = 0;
    uStack_1c = FUN_00ae9ad0();
    if (uStack_1c != 0) {
      do {
        if (cStack_11 == '\0') goto LAB_00adf49f;
        param_1[0x12] = uVar2;
        piVar4 = (int *)FUN_00ae9ba0(uVar2);
        pcVar1 = *(code **)(*piVar4 + 4);
        _guard_check_icall(param_1);
        (*pcVar1)();
        uVar2 = uStack_18;
        param_1[0x12] = uStack_18;
        if ((*(char *)((int)param_1 + 5) != '\0') && (uStack_18 != uStack_1c - 1)) {
          pcVar1 = *(code **)(*param_1 + 0x40);
          _guard_check_icall(1,param_2);
          cStack_11 = (*pcVar1)();
        }
        uVar2 = uVar2 + 1;
        uStack_18 = uVar2;
      } while (uVar2 < uStack_1c);
      if (cStack_11 == '\0') goto LAB_00adf49f;
    }
    if (*(char *)((int)param_1 + 6) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x40);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
LAB_00adf49f:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adf4c0(int *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint uStack_1c;
  uint uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5dddd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = param_1[0x10] - param_1[0xf] >> 2;
  uStack_1c = param_2;
  iVar3 = param_1[2];
  if (param_1[2] < iVar5) {
    iVar3 = iVar5;
  }
  param_1[2] = iVar3;
  func_0x00ade4a0(&uStack_1c,uVar2);
  uStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    cStack_11 = '\x01';
    if ((char)param_1[1] != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x14);
      _guard_check_icall(0,param_2);
      cStack_11 = (*pcVar1)();
      if (cStack_11 == '\0') goto LAB_00adf5ef;
    }
    uVar2 = 0;
    uStack_18 = 0;
    uStack_1c = FUN_0058e2e0();
    if (uStack_1c != 0) {
      do {
        if (cStack_11 == '\0') goto LAB_00adf5ef;
        param_1[0x12] = uVar2;
        piVar4 = (int *)FUN_00ae9c50(uVar2);
        pcVar1 = *(code **)(*piVar4 + 4);
        _guard_check_icall(param_1);
        (*pcVar1)();
        uVar2 = uStack_18;
        param_1[0x12] = uStack_18;
        if ((*(char *)((int)param_1 + 5) != '\0') && (uStack_18 != uStack_1c - 1)) {
          pcVar1 = *(code **)(*param_1 + 0x14);
          _guard_check_icall(1,param_2);
          cStack_11 = (*pcVar1)();
        }
        uVar2 = uVar2 + 1;
        uStack_18 = uVar2;
      } while (uVar2 < uStack_1c);
      if (cStack_11 == '\0') goto LAB_00adf5ef;
    }
    if (*(char *)((int)param_1 + 6) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x14);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
LAB_00adf5ef:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adf610(int *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e0ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = param_1[0x10] - param_1[0xf] >> 2;
  iStack_14 = param_2;
  iVar4 = param_1[2];
  if (param_1[2] < iVar5) {
    iVar4 = iVar5;
  }
  param_1[2] = iVar4;
  func_0x00ade4a0(&iStack_14,uVar3);
  uStack_8 = 0;
  if (param_1[2] < param_1[3]) {
    if ((char)param_1[1] != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x14);
      _guard_check_icall(0,param_2);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') goto LAB_00adf6e5;
    }
    switch(*(undefined2 *)(param_2 + 0xb8)) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      *(undefined1 *)(param_1 + 0x16) = 1;
    }
    pcVar1 = *(code **)(**(int **)(param_2 + 0xbc) + 4);
    _guard_check_icall(param_1);
    (*pcVar1)();
    *(undefined1 *)(param_1 + 0x16) = 0;
    if (*(char *)((int)param_1 + 6) != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x14);
      _guard_check_icall(2,param_2);
      (*pcVar1)();
    }
  }
LAB_00adf6e5:
  param_1[0x10] = param_1[0x10] + -4;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00adfb20(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x30);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfb50(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x10);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfb80(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x34);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfbb0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x44);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfbe0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x24);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



uint __thiscall FUN_00adfc10(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = *(code **)(*param_3 + 8);
  _guard_check_icall(param_1);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffffff00;
}



void __thiscall FUN_00adfc30(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x3c);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfc60(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x2c);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



uint __thiscall FUN_00adfc90(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = *(code **)(*param_3 + 0x28);
  _guard_check_icall(param_1);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffffff00;
}



void __thiscall FUN_00adfcb0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x38);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfce0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x1c);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfd10(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x40);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfd40(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x20);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfd70(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0xc);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



uint __thiscall FUN_00adfda0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  
  pcVar1 = *(code **)(*param_3 + 4);
  _guard_check_icall(param_1);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffffff00;
}



void __thiscall FUN_00adfdc0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x18);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00adfdf0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_3 + 0x14);
  _guard_check_icall(param_2,param_1);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00ae1470(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -0x2f;
  if (param_1[1] != 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = sh::TIntermAggregateBase::vftable;
  *puVar1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(puVar1,0xd4);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_00ae1480(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -5;
  if (param_1[1] != 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = sh::TIntermAggregateBase::vftable;
  *puVar1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(puVar1,0x28);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_00ae1490(undefined4 *param_1,byte param_2)

{
  if (param_1[0x30] != 0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
  }
  param_1[0x2f] = sh::TIntermAggregateBase::vftable;
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0xd4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae14f0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0xc4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae1520(undefined4 *param_1,byte param_2)

{
  if (param_1[6] != 0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  param_1[5] = sh::TIntermAggregateBase::vftable;
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x28);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae1570(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x1c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae15a0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae15d0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0xbc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae1600(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0xb8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae1630(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x20);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae1660(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x28);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae1690(undefined4 *param_1,byte param_2)

{
  if (param_1[0x2f] != 0) {
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0xcc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00ae16e0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TIntermNode::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,200);
  }
  return param_1;
}



undefined4 __fastcall FUN_00ae5f40(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4d160;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar1);
  iVar2 = func_0x00ad7620(0xd4);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00adfeb0(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __fastcall FUN_00ae5fb0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e8c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar2);
  puVar3 = (undefined4 *)func_0x00ad7620(0xc4);
  uStack_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    func_0x00ae0ca0(param_1);
    *puVar3 = sh::TIntermBinary::vftable;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x58);
    _guard_check_icall();
    uVar4 = (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x58);
    _guard_check_icall();
    uVar5 = (*pcVar1)();
    puVar3[0x30] = uVar5;
    puVar3[0x2f] = uVar4;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 __fastcall FUN_00ae6080(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4d160;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar1);
  iVar2 = func_0x00ad7620(0x28);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00ae0340(param_1);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __fastcall FUN_00ae60f0(int param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5da40;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar3);
  puVar4 = (undefined4 *)func_0x00ad7620(0x1c);
  uStack_8 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    if (*(int **)(param_1 + 0x18) == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      pcVar2 = *(code **)(**(int **)(param_1 + 0x18) + 0x58);
      _guard_check_icall();
      uVar5 = (*pcVar2)();
    }
    uVar1 = *(undefined2 *)(param_1 + 0x14);
    puVar4[3] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[2] = 0;
    *(undefined2 *)(puVar4 + 5) = uVar1;
    puVar4[6] = uVar5;
    *puVar4 = sh::TIntermBranch::vftable;
    *unaff_FS_OFFSET = iStack_10;
    return puVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae61c0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e890;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar2);
  puVar3 = (undefined4 *)func_0x00ad7620(0x18);
  uStack_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 0x58);
    _guard_check_icall();
    uVar4 = (*pcVar1)();
    puVar3[5] = uVar4;
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    *puVar3 = sh::TIntermCase::vftable;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae6270(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e530;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar4);
  puVar5 = (undefined4 *)func_0x00ad7620(0xbc);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[3] = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    *puVar5 = sh::TIntermTyped::vftable;
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    puVar5[1] = *(undefined4 *)(param_1 + 4);
    puVar5[2] = uVar1;
    puVar5[3] = uVar2;
    puVar5[4] = uVar3;
    uStack_8 = 2;
    *puVar5 = sh::TIntermExpression::vftable;
    func_0x00ad8850(param_1 + 0x18);
    *puVar5 = sh::TIntermConstantUnion::vftable;
    puVar5[0x2e] = *(undefined4 *)(param_1 + 0xb8);
    *unaff_FS_OFFSET = iStack_10;
    return puVar5;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae6340(int param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e8c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar6);
  puVar7 = (undefined4 *)func_0x00ad7620(0x1c);
  uStack_8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    pcVar2 = *(code **)(**(int **)(param_1 + 0x14) + 0x58);
    _guard_check_icall();
    uVar8 = (*pcVar2)();
    puVar7[3] = 0;
    puVar7[1] = 0;
    puVar7[4] = 0;
    puVar7[2] = 0;
    puVar7[5] = uVar8;
    *puVar7 = sh::TIntermGlobalQualifierDeclaration::vftable;
    *(undefined1 *)(puVar7 + 6) = uVar1;
    uVar8 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    *puVar7 = sh::TIntermGlobalQualifierDeclaration::vftable;
    puVar7[1] = uVar8;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
    puVar7[4] = uVar5;
    *unaff_FS_OFFSET = iStack_10;
    return puVar7;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae6410(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e908;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar2);
  puVar3 = (undefined4 *)func_0x00ad7620(0x20);
  uStack_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x1c) + 0x58);
      _guard_check_icall();
      iVar4 = (*pcVar1)();
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 0x18) + 0x58);
    _guard_check_icall();
    uVar5 = (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 0x58);
    _guard_check_icall();
    uVar6 = (*pcVar1)();
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    puVar3[5] = uVar6;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    *puVar3 = sh::TIntermIfElse::vftable;
    puVar3[6] = uVar5;
    puVar3[7] = iVar4;
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*(int *)(iVar4 + 0x14) + 8);
      _guard_check_icall();
      piVar7 = (int *)(*pcVar1)();
      if (*piVar7 == piVar7[1]) {
        puVar3[7] = 0;
      }
    }
    *puVar3 = sh::TIntermIfElse::vftable;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae6540(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e948;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar3);
  puVar4 = (undefined4 *)func_0x00ad7620(0x28);
  uStack_8 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    if (*(int **)(param_1 + 0x24) == (int *)0x0) {
      uStack_1c = 0;
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x24) + 0x58);
      _guard_check_icall();
      uStack_1c = (*pcVar1)();
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      uStack_18 = 0;
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x20) + 0x58);
      _guard_check_icall();
      uStack_18 = (*pcVar1)();
    }
    if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
      uStack_14 = 0;
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x1c) + 0x58);
      _guard_check_icall();
      uStack_14 = (*pcVar1)();
    }
    if (*(int **)(param_1 + 0x18) == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x18) + 0x58);
      _guard_check_icall();
      piVar5 = (int *)(*pcVar1)();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    puVar4[3] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[2] = 0;
    puVar4[5] = uVar2;
    puVar4[7] = uStack_14;
    puVar4[8] = uStack_18;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    *puVar4 = sh::TIntermLoop::vftable;
    puVar4[6] = piVar5;
    puVar4[9] = uStack_1c;
    if (piVar5 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar5 + 0x28);
      _guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        pcVar1 = *(code **)(*(int *)puVar4[6] + 0x28);
        _guard_check_icall();
        iVar6 = (*pcVar1)();
        pcVar1 = *(code **)(*(int *)(iVar6 + 0x14) + 8);
        _guard_check_icall();
        piVar5 = (int *)(*pcVar1)();
        if (*piVar5 == piVar5[1]) {
          puVar4[6] = 0;
        }
      }
    }
    *puVar4 = sh::TIntermLoop::vftable;
    *unaff_FS_OFFSET = iStack_10;
    return puVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae66f0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e8c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar2);
  puVar3 = (undefined4 *)func_0x00ad7620(0x1c);
  uStack_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x18) + 0x58);
    _guard_check_icall();
    uVar4 = (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 0x58);
    _guard_check_icall();
    uVar5 = (*pcVar1)();
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    puVar3[5] = uVar5;
    puVar3[6] = uVar4;
    *puVar3 = sh::TIntermSwitch::vftable;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae67c0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e9a6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar4);
  puVar5 = (undefined4 *)func_0x00ad7620(0xcc);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[3] = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    *puVar5 = sh::TIntermTyped::vftable;
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    puVar5[1] = *(undefined4 *)(param_1 + 4);
    puVar5[2] = uVar6;
    puVar5[3] = uVar2;
    puVar5[4] = uVar3;
    uStack_8._0_1_ = 2;
    uStack_8._1_3_ = 0;
    *puVar5 = sh::TIntermExpression::vftable;
    func_0x00ad8850(param_1 + 0x18);
    *puVar5 = sh::TIntermSwizzle::vftable;
    puVar5[0x2f] = 0;
    puVar5[0x30] = 0;
    puVar5[0x31] = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,4);
    pcVar1 = *(code **)(**(int **)(param_1 + 0xb8) + 0x58);
    _guard_check_icall();
    uVar6 = (*pcVar1)();
    puVar5[0x2e] = uVar6;
    func_0x00ae12f0(param_1 + 0xbc);
    *(undefined1 *)(puVar5 + 0x32) = *(undefined1 *)(param_1 + 200);
    *unaff_FS_OFFSET = iStack_10;
    return puVar5;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae68f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e9e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar5);
  puVar6 = (undefined4 *)func_0x00ad7620(0x1c);
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[3] = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 5) = 0;
    *puVar6 = sh::TIntermTyped::vftable;
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    *puVar6 = sh::TIntermSymbol::vftable;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    puVar6[4] = uVar4;
    puVar6[6] = *(undefined4 *)(param_1 + 0x18);
    *unaff_FS_OFFSET = iStack_10;
    return puVar6;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae6990(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5ea38;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar2);
  puVar3 = (undefined4 *)func_0x00ad7620(0xc4);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    *puVar3 = sh::TIntermTyped::vftable;
    uVar4 = *(undefined4 *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    puVar3[1] = *(undefined4 *)(param_1 + 4);
    puVar3[2] = uVar4;
    puVar3[3] = uVar5;
    puVar3[4] = uVar6;
    uStack_8._0_1_ = 2;
    uStack_8._1_3_ = 0;
    *puVar3 = sh::TIntermExpression::vftable;
    func_0x00ad8850(param_1 + 0x18);
    *puVar3 = sh::TIntermTernary::vftable;
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    pcVar1 = *(code **)(**(int **)(param_1 + 0xb8) + 0x58);
    _guard_check_icall();
    uVar4 = (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x58);
    _guard_check_icall();
    uVar5 = (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x58);
    _guard_check_icall();
    uVar6 = (*pcVar1)();
    puVar3[0x2e] = uVar4;
    puVar3[0x30] = uVar6;
    puVar3[0x2f] = uVar5;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __fastcall FUN_00ae6ad0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5e4a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00ad78b0(uVar2);
  puVar3 = (undefined4 *)func_0x00ad7620(200);
  uStack_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    func_0x00ae0ca0(param_1);
    *puVar3 = sh::TIntermUnary::vftable;
    *(undefined1 *)(puVar3 + 0x30) = *(undefined1 *)(param_1 + 0xc0);
    puVar3[0x31] = *(undefined4 *)(param_1 + 0xc4);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x58);
    _guard_check_icall();
    uVar4 = (*pcVar1)();
    puVar3[0x2f] = uVar4;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



// WARNING: Possible PIC construction at 0x00ae6c64: Changing call to branch
// WARNING: Possible PIC construction at 0x00ae6c86: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00ae6c69)
// WARNING: Removing unreachable block (ram,0x00ae6c8b)
// WARNING: Removing unreachable block (ram,0x00ae6c8f)
// WARNING: Removing unreachable block (ram,0x00ae6c92)

int __fastcall FUN_00ae6b90(int *param_1)

{
  short sVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *unaff_ESI;
  undefined4 *puVar7;
  int *unaff_EDI;
  
  pcVar2 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall();
  piVar4 = (int *)(*pcVar2)();
  if (*piVar4 != 5) {
    pcVar2 = *(code **)(*param_1 + 0x7c);
    _guard_check_icall();
    piVar4 = (int *)(*pcVar2)();
    if (*piVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x7c);
      _guard_check_icall();
      piVar4 = (int *)(*pcVar2)();
      if (*piVar4 != 0x5d) {
        sVar1 = (short)param_1[0x2e];
        if ((sVar1 == 1) || (sVar1 == 2)) {
          return param_1[7];
        }
        switch(sVar1) {
        case 0x6a:
        case 0x6b:
        case 0x95:
        case 0x96:
        case 0x97:
        case 0x98:
        case 0xcb:
        case 0x105:
          return 3;
        default:
          if (((ushort)(sVar1 - 0x3eU) < 0x5b) || (sVar1 == 7)) {
            puVar7 = (undefined4 *)param_1[0x30];
            puVar3 = (undefined4 *)param_1[0x31];
            iVar6 = 0;
            if (puVar7 == puVar3) {
              return 0;
            }
            do {
              pcVar2 = *(code **)(*(int *)*puVar7 + 0xc);
              _guard_check_icall();
              piVar4 = (int *)(*pcVar2)();
              pcVar2 = *(code **)(*piVar4 + 0x7c);
              _guard_check_icall();
              iVar5 = (*pcVar2)();
              if (iVar6 < *(int *)(iVar5 + 4)) {
                iVar6 = *(int *)(iVar5 + 4);
              }
              puVar7 = puVar7 + 1;
            } while (puVar7 != puVar3);
            return iVar6;
          }
          if ((ushort)(sVar1 - 0x109U) < 8) {
            return 3;
          }
          if ((ushort)(sVar1 - 0xf1U) < 0xc) {
            return 3;
          }
          if ((ushort)(sVar1 - 0xfdU) < 8) {
            return 3;
          }
          if ((((0x49 < (ushort)(sVar1 - 0x99U)) && (sVar1 != 0x108)) &&
              (8 < (ushort)(sVar1 - 0xe5U))) && ((2 < (ushort)(sVar1 - 0xeeU) && (sVar1 != 0x128))))
          {
            return 0;
          }
        case 0x8f:
          pcVar2 = *(code **)(**(int **)param_1[0x30] + 0xc);
          _guard_check_icall();
          piVar4 = (int *)(*pcVar2)();
          break;
        case 0x90:
          unaff_EDI = *(int **)(param_1[0x30] + 4);
          unaff_ESI = *(code **)(*unaff_EDI + 0xc);
          _guard_check_icall();
          piVar4 = (int *)(*unaff_ESI)();
        }
        pcVar2 = *(code **)(*piVar4 + 0x7c);
        _guard_check_icall(unaff_EDI,unaff_ESI);
        iVar6 = (*pcVar2)();
        return *(int *)(iVar6 + 4);
      }
    }
  }
  return 0;
}



int __fastcall FUN_00ae6e50(int param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  cVar3 = func_0x00b65da0(*(undefined2 *)(param_1 + 0xb8));
  if (cVar3 != '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar4 = (*pcVar1)();
    return *(int *)(iVar4 + 4);
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x7c);
  _guard_check_icall();
  iVar4 = (*pcVar1)();
  iVar4 = *(int *)(iVar4 + 4);
  pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
  _guard_check_icall();
  iVar5 = (*pcVar1)();
  if (iVar4 < *(int *)(iVar5 + 4)) {
    iVar4 = *(int *)(iVar5 + 4);
  }
  switch(*(short *)(param_1 + 0xb8)) {
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x22:
  case 0x23:
  case 0x24:
    return 0;
  case 0x1c:
    pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x7c);
    _guard_check_icall(unaff_EDI,unaff_ESI);
    iVar4 = (*pcVar1)();
    return *(int *)(iVar4 + 4);
  default:
    return iVar4;
  case 0x25:
  case 0x26:
  case 0x2a:
  case 0x2b:
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar4 = (*pcVar1)();
    return *(int *)(iVar4 + 4);
  case 0x2c:
  case 0x2d:
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
    if (*(short *)(param_1 + 0xb8) == 0x2c) {
      _guard_check_icall();
      iVar4 = (*pcVar1)();
      iVar4 = *(int *)(iVar4 + 0x90);
    }
    else {
      _guard_check_icall();
      iVar4 = (*pcVar1)();
      iVar4 = *(int *)(iVar4 + 0x8c);
    }
    piVar2 = *(int **)(iVar4 + 0x10);
    pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x10);
    _guard_check_icall();
    (*pcVar1)();
    iVar4 = func_0x00aea2f0(0);
    return *(int *)(**(int **)(*piVar2 + iVar4 * 4) + 4);
  }
}



undefined4 __fastcall FUN_00ae6fb0(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xb8) + 0x7c);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  return *(undefined4 *)(iVar2 + 4);
}



int __fastcall FUN_00ae6fe0(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x7c);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar2 = *(int *)(iVar2 + 4);
  pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar2 < *(int *)(iVar3 + 4)) {
    iVar2 = *(int *)(iVar3 + 4);
  }
  return iVar2;
}



undefined4 __fastcall FUN_00ae7030(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  switch(*(undefined2 *)(param_1 + 0xb8)) {
  case 0x10:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x91:
    return 3;
  default:
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    return *(undefined4 *)(iVar2 + 4);
  case 99:
  case 100:
  case 0x8c:
  case 0x8d:
    return 0;
  case 0x6f:
  case 0x74:
  case 0x75:
    return 2;
  case 0x92:
  case 0x93:
  case 0x94:
    return 1;
  }
}



int * __thiscall FUN_00ae7120(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  float10 fVar12;
  
  pcVar1 = *(code **)(param_1[0x2f] + 8);
  _guard_check_icall();
  puVar4 = (undefined4 *)(*pcVar1)();
  puVar2 = (undefined4 *)puVar4[1];
  for (puVar4 = (undefined4 *)*puVar4; puVar4 != puVar2; puVar4 = puVar4 + 1) {
    pcVar1 = *(code **)(*(int *)*puVar4 + 0x10);
    _guard_check_icall();
    iVar5 = (*pcVar1)();
    if (iVar5 == 0) {
      return param_1;
    }
  }
  if ((short)param_1[0x2e] == 7) {
    cVar3 = func_0x00ad98b0();
    if (cVar3 != '\0') {
      pcVar1 = *(code **)(*param_1 + 0x74);
      _guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 != 0) {
        if (param_1[6] == 4) {
          uVar6 = func_0x00adaa80();
          puVar2 = (undefined4 *)param_1[0x31];
          for (puVar4 = (undefined4 *)param_1[0x30]; puVar4 != puVar2; puVar4 = puVar4 + 1) {
            pcVar1 = *(code **)(*(int *)*puVar4 + 0xc);
            _guard_check_icall();
            piVar7 = (int *)(*pcVar1)();
            pcVar1 = *(code **)(*piVar7 + 0x7c);
            _guard_check_icall();
            piVar8 = (int *)(*pcVar1)();
            if (*piVar8 == 1) {
              pcVar1 = *(code **)(*piVar7 + 0x74);
              _guard_check_icall();
              (*pcVar1)();
              pcVar1 = *(code **)(*piVar7 + 0x7c);
              _guard_check_icall();
              (*pcVar1)();
              uVar9 = func_0x00adaa80();
              if (uVar6 < uVar9) {
                uVar9 = uVar6;
              }
              for (; uVar9 != 0; uVar9 = uVar9 - 1) {
                fVar12 = (float10)func_0x00b656b0();
                if ((float)fVar12 < 0.0) {
                  uVar10 = func_0x00ada7b0();
                  func_0x00aed150(param_1 + 1,"casting a negative float to uint is undefined",uVar10
                                 );
                }
              }
            }
            pcVar1 = *(code **)(*piVar7 + 0x7c);
            _guard_check_icall();
            (*pcVar1)();
            iVar11 = func_0x00adaa80();
            uVar6 = uVar6 - iVar11;
          }
        }
        piVar7 = (int *)func_0x00ae1a00(iVar5,param_1);
        return piVar7;
      }
    }
  }
  else {
    switch((short)param_1[0x2e]) {
    case 0x45:
    case 0x4c:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x69:
    case 0x6b:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x81:
    case 0x82:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8f:
    case 0x90:
    case 0xe5:
    case 0xe6:
    case 0xe7:
      iVar5 = func_0x00ae1b40(param_1,param_2);
      if (iVar5 != 0) {
        piVar7 = (int *)func_0x00ae1a00(iVar5,param_1);
        return piVar7;
      }
    }
  }
  return param_1;
}



// WARNING: Instruction at (ram,0x00ae75fd) overlaps instruction at (ram,0x00ae75fa)
// 

code * __fastcall FUN_00ae7410(code *param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  undefined *puVar10;
  char extraout_DL;
  bool bVar11;
  int iStack_4;
  
  pcVar9 = *(code **)(**(int **)(param_1 + 0xc0) + 0x74);
  _guard_check_icall();
  iVar4 = (*pcVar9)();
  switch(*(undefined2 *)(param_1 + 0xb8)) {
  case 0x1c:
    pcVar9 = *(code **)(**(int **)(param_1 + 0xbc) + 0x78);
    _guard_check_icall();
    cVar3 = (*pcVar9)();
    if (cVar3 == '\0') {
      return *(code **)(param_1 + 0xc0);
    }
    break;
  default:
    if (iVar4 == 0) {
      return param_1;
    }
    pcVar9 = *(code **)(**(int **)(param_1 + 0xbc) + 0x74);
    _guard_check_icall();
    iStack_4 = (*pcVar9)();
    if (iStack_4 == 0) {
      return param_1;
    }
    pcVar9 = *(code **)(**(int **)(param_1 + 0xc0) + 0x7c);
    _guard_check_icall();
    (*pcVar9)();
    pcVar9 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar8 = (*pcVar9)();
code_r0x00ae75f5:
    puVar10 = (undefined *)(uint)*(ushort *)(param_1 + 0xb8);
code_r0x00ae7606:
    iVar4 = func_0x00ae4140(puVar10,iStack_4,iVar8,iVar4);
    if (iVar4 != 0) {
      pcVar9 = (code *)func_0x00ae1a00(iVar4,param_1);
      return pcVar9;
    }
    break;
  case 0x2a:
  case 0x2c:
    if (iVar4 == 0) {
      return param_1;
    }
    uVar5 = FUN_005beae0();
    pcVar9 = *(code **)(**(int **)(param_1 + 0xbc) + 0x18);
    _guard_check_icall();
    piVar6 = (int *)(*pcVar9)();
    if (((piVar6 != (int *)0x0) && ((short)piVar6[0x2e] == 7)) &&
       (cVar3 = func_0x00aea7e0(), cVar3 != '\0')) {
      pcVar9 = *(code **)(*piVar6 + 0x78);
      _guard_check_icall();
      cVar3 = (*pcVar9)();
      if (cVar3 == '\0') {
        pcVar9 = *(code **)(piVar6[0x2f] + 8);
        _guard_check_icall();
        piVar6 = (int *)(*pcVar9)();
        uVar7 = piVar6[1] - *piVar6 >> 2;
        bVar11 = uVar7 == uVar5;
        if (uVar5 < uVar7) {
          pcVar9 = *(code **)(**(int **)(*piVar6 + uVar5 * 4) + 0xc);
          _guard_check_icall();
          pcVar9 = (code *)(*pcVar9)();
          return pcVar9;
        }
        puVar10 = &UNK_00ae7643;
        iVar8 = func_0x0046e490();
        if (bVar11) goto code_r0x00ae75f5;
        pbVar1 = (byte *)(iVar8 + 0x3200ae74);
        bVar2 = *pbVar1;
        *pbVar1 = *pbVar1 + (byte)puVar10;
        if (!CARRY1(bVar2,(byte)puVar10) && *pbVar1 != 0) {
          puVar10[0xae75] = puVar10[0xae75] + extraout_DL;
          pcVar9 = (code *)swi(3);
          pcVar9 = (code *)(*pcVar9)();
          return pcVar9;
        }
        iVar8 = 0x53000000;
        param_1 = pcVar9;
        goto code_r0x00ae7606;
      }
    }
    pcVar9 = *(code **)(**(int **)(param_1 + 0xbc) + 0x10);
    _guard_check_icall();
    iVar4 = (*pcVar9)();
    if (iVar4 == 0) {
      pcVar9 = *(code **)(*(int *)param_1 + 0x7c);
      _guard_check_icall();
      (*pcVar9)();
      cVar3 = func_0x00ad98b0();
      if (cVar3 == '\0') {
        return param_1;
      }
    }
    pcVar9 = *(code **)(*(int *)param_1 + 0x74);
    _guard_check_icall();
    iVar4 = (*pcVar9)();
    if (iVar4 != 0) {
      pcVar9 = (code *)func_0x00ae1a00(iVar4,param_1);
      return pcVar9;
    }
    break;
  case 0x2b:
  case 0x2d:
  case 0x2f:
    break;
  }
  return param_1;
}



void __fastcall FUN_00ae7670(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int *unaff_FS_OFFSET;
  int iStack_40;
  uint uStack_3c;
  uint uStack_2c;
  undefined1 uStack_25;
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5ea78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar2 = *(code **)(*(int *)param_1[0x2e] + 0x2c);
  uStack_14 = uVar5;
  _guard_check_icall(uVar5);
  iVar6 = (*pcVar2)();
  if (iVar6 == 0) {
    pcVar2 = *(code **)(*(int *)param_1[0x2e] + 0x10);
    _guard_check_icall(uVar5);
    piVar9 = (int *)(*pcVar2)();
    if (piVar9 != (int *)0x0) {
      uVar5 = param_1[0x30] - param_1[0x2f] >> 2;
      lVar3 = (ulonglong)uVar5 * 8;
      uVar8 = (undefined4)lVar3;
      if ((int)((ulonglong)lVar3 >> 0x20) != 0) {
        uVar8 = 0xffffffff;
      }
      func_0x00ad78b0();
      iStack_40 = func_0x00ad7620(uVar8);
      uStack_8 = 3;
      if (iStack_40 == 0) {
        iStack_40 = 0;
      }
      else {
        func_0x00466d40(iStack_40,8,uVar5,FUN_0046f300);
      }
      uStack_8 = 0xffffffff;
      uStack_3c = 0;
      iVar6 = param_1[0x30];
      iVar13 = param_1[0x2f];
      if (iVar6 - iVar13 >> 2 != 0) {
        do {
          if ((uint)(iVar6 - iVar13 >> 2) <= uStack_3c) {
            func_0x0046e490();
            goto LAB_00ae7a19;
          }
          uVar8 = *(undefined4 *)(iVar13 + uStack_3c * 4);
          pcVar2 = *(code **)(*piVar9 + 0x74);
          _guard_check_icall();
          uVar10 = (*pcVar2)();
          pcVar2 = *(code **)(*piVar9 + 0x7c);
          _guard_check_icall();
          uVar11 = (*pcVar2)();
          puVar12 = (undefined4 *)func_0x00ae5280(uVar11,uVar10,uVar8);
          uVar8 = *puVar12;
          *(undefined4 *)(iStack_40 + 4 + uStack_3c * 8) = puVar12[1];
          *(undefined4 *)(iStack_40 + uStack_3c * 8) = uVar8;
          uStack_3c = uStack_3c + 1;
          iVar6 = param_1[0x30];
          iVar13 = param_1[0x2f];
        } while (uStack_3c < (uint)(iVar6 - iVar13 >> 2));
      }
      func_0x00ae1a00(iStack_40,param_1);
    }
  }
  else {
    if (*(char *)(iVar6 + 200) == '\0') {
      piVar9 = *(int **)(iVar6 + 0xbc);
      piVar14 = *(int **)(iVar6 + 0xc0);
      iStack_24 = 0;
      puStack_20 = (undefined4 *)0x0;
      puStack_1c = (undefined4 *)0x0;
      puStack_18 = (undefined4 *)0x0;
      for (; piVar9 != piVar14; piVar9 = piVar9 + 1) {
        iVar13 = *piVar9;
        (&iStack_24)[iVar13] = (&iStack_24)[iVar13] + 1;
        if (1 < (&iStack_24)[iVar13]) {
          uStack_25 = 1;
          goto LAB_00ae770a;
        }
      }
      uStack_25 = 0;
    }
    else {
      uStack_25 = 1;
    }
LAB_00ae770a:
    puStack_20 = (undefined4 *)0x0;
    puStack_1c = (undefined4 *)0x0;
    puStack_18 = (undefined4 *)0x0;
    uStack_8 = 0;
    piVar9 = (int *)param_1[0x30];
    puVar12 = puStack_1c;
    for (piVar14 = (int *)param_1[0x2f]; puStack_1c = puVar12, piVar14 != piVar9;
        piVar14 = piVar14 + 1) {
      puVar1 = (undefined4 *)(*(int *)(iVar6 + 0xbc) + *piVar14 * 4);
      if (puVar12 == puStack_18) {
        iVar13 = (int)puVar12 - (int)puStack_20 >> 2;
        if (iVar13 == 0x3fffffff) {
LAB_00ae7a19:
          func_0x0046e700();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = iVar13 + 1;
        uStack_2c = (int)puStack_18 - (int)puStack_20 >> 2;
        if (0x3fffffff - (uStack_2c >> 1) < uStack_2c) {
          uStack_2c = 0x3fffffff;
        }
        else {
          uStack_2c = (uStack_2c >> 1) + uStack_2c;
          if (uStack_2c < uVar5) {
            uStack_2c = uVar5;
          }
        }
        func_0x00ad78b0();
        puVar7 = (undefined4 *)func_0x00ad7620(uStack_2c * 4);
        puVar7[iVar13] = *puVar1;
        puVar1 = puVar7;
        if (puVar12 == puStack_1c) {
          for (; puStack_20 != puStack_1c; puStack_20 = puStack_20 + 1) {
            *puVar1 = *puStack_20;
            puVar1 = puVar1 + 1;
          }
        }
        else {
          for (; puStack_20 != puVar12; puStack_20 = puStack_20 + 1) {
            *puVar1 = *puStack_20;
            puVar1 = puVar1 + 1;
          }
          if (puVar12 != puStack_1c) {
            iVar4 = 4 - (int)puVar12;
            do {
              *(undefined4 *)((int)(puVar7 + iVar13) + iVar4 + (int)puVar12) = *puVar12;
              puVar12 = puVar12 + 1;
            } while (puVar12 != puStack_1c);
          }
        }
        puStack_18 = puVar7 + uStack_2c;
        puVar12 = puVar7 + uVar5;
        puStack_20 = puVar7;
      }
      else {
        *puVar12 = *puVar1;
        puVar12 = puVar12 + 1;
      }
    }
    func_0x00ae12f0(&puStack_20);
    pcVar2 = *(code **)(*param_1 + 0x7c);
    _guard_check_icall();
    uVar8 = (*pcVar2)();
    func_0x00ad8c60(uVar8);
    *(undefined1 *)(iVar6 + 200) = uStack_25;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __fastcall FUN_00ae7a20(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xb8) + 0x10);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    return param_1;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0xb8) + 0x10);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if (*(int *)(iVar3 + 0xb8) != 0) {
    cVar2 = FUN_004b5b30();
    if (cVar2 != '\0') {
      return *(int *)(param_1 + 0xbc);
    }
  }
  return *(int *)(param_1 + 0xc0);
}



int __thiscall FUN_00ae7a90(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5da40;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(short *)(param_1 + 0xb8) == 0x10) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0xbc) + 0x78);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') goto LAB_00ae7be9;
    pcVar2 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
    _guard_check_icall(uVar4);
    (*pcVar2)();
    cVar3 = func_0x00adadc0();
    if (cVar3 != '\0') goto LAB_00ae7be9;
    func_0x00ad78b0();
    puVar5 = (undefined4 *)func_0x00ad7620(8);
    uStack_8 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_0046f300();
    }
    uStack_8 = 0xffffffff;
    pcVar2 = *(code **)(**(int **)(param_1 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar6 = (*pcVar2)();
    *puVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x80) + -4 + *(int *)(iVar6 + 0x84) * 4);
    puVar5[1] = 3;
  }
  else {
    pcVar2 = *(code **)(**(int **)(param_1 + 0xbc) + 0x10);
    _guard_check_icall(uVar4);
    iVar6 = (*pcVar2)();
    if (iVar6 == 0) goto LAB_00ae7be9;
    uVar1 = *(undefined2 *)(param_1 + 0xb8);
    switch(uVar1) {
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x78:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x8c:
    case 0x8d:
      puVar5 = (undefined4 *)func_0x00ae8bd0(uVar1);
      break;
    default:
      puVar5 = (undefined4 *)func_0x00ae7c30(uVar1,*(undefined4 *)(param_1 + 0xc4),param_2);
    }
  }
  if (puVar5 != (undefined4 *)0x0) {
    iVar6 = func_0x00ae1a00(puVar5,param_1);
    *unaff_FS_OFFSET = iStack_10;
    return iVar6;
  }
LAB_00ae7be9:
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __fastcall FUN_00ae9a60(int param_1)

{
  return *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2;
}



undefined4 FUN_00ae9a70(void)

{
  return 2;
}



int __fastcall FUN_00ae9a80(int param_1)

{
  return *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
}



bool __fastcall FUN_00ae9a90(int param_1)

{
  return *(int *)(param_1 + 0x18) != 0;
}



bool __fastcall FUN_00ae9aa0(int param_1)

{
  return *(int *)(param_1 + 0x14) != 0;
}



char __fastcall FUN_00ae9ab0(int param_1)

{
  return (*(int *)(param_1 + 0x1c) != 0) + (*(int *)(param_1 + 0x18) != 0) + '\x01';
}



char __fastcall FUN_00ae9ad0(int param_1)

{
  return (*(int *)(param_1 + 0x24) != 0) + (*(int *)(param_1 + 0x20) != 0) +
         (*(int *)(param_1 + 0x1c) != 0) + (*(int *)(param_1 + 0x18) != 0);
}



undefined4 __thiscall FUN_00ae9b00(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc0) + param_2 * 4);
}



undefined4 __thiscall FUN_00ae9b10(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(param_1 + 0xbc);
  }
  return *(undefined4 *)(param_1 + 0xc0);
}



undefined4 __thiscall FUN_00ae9b30(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4);
}



undefined4 __fastcall FUN_00ae9b40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



undefined4 __fastcall FUN_00ae9b50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



undefined4 __thiscall FUN_00ae9b60(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(param_1 + 0x14);
  }
  return *(undefined4 *)(param_1 + 0x18);
}



int __thiscall FUN_00ae9b80(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return *(int *)(param_1 + 0x14);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 == 0) || (param_2 != 1)) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  return iVar1;
}



void __fastcall FUN_00ae9ba0(int param_1)

{
  int iVar1;
  uint uVar2;
  int aiStack_14 [4];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)aiStack_14;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    aiStack_14[0] = iVar1;
  }
  uVar2 = (uint)(iVar1 != 0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    aiStack_14[uVar2] = *(int *)(param_1 + 0x1c);
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    aiStack_14[uVar2] = *(int *)(param_1 + 0x20);
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    aiStack_14[uVar2] = *(int *)(param_1 + 0x24);
  }
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_00ae9c10(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



undefined4 __thiscall FUN_00ae9c20(int param_1,int param_2)

{
  if (param_2 == 0) {
    return *(undefined4 *)(param_1 + 0xb8);
  }
  if (param_2 == 1) {
    return *(undefined4 *)(param_1 + 0xbc);
  }
  return *(undefined4 *)(param_1 + 0xc0);
}



undefined4 __fastcall FUN_00ae9c50(int param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}



void * __fastcall FUN_00ae9c80(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  void *_Src;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  void *_Dst;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  int iStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5ebfb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar4 = *(code **)(*param_1 + 0x6c);
  _guard_check_icall(uVar8);
  cVar7 = (*pcVar4)();
  if (cVar7 == '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return (void *)0x0;
  }
  pcVar4 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall(uVar8);
  iVar9 = (*pcVar4)();
  if (*(int *)(iVar9 + 0x84) != 0) {
    pcVar4 = *(code **)(**(int **)param_1[0x30] + 0xc);
    _guard_check_icall(uVar8);
    piVar10 = (int *)(*pcVar4)();
    pcVar4 = *(code **)(*piVar10 + 0x7c);
    _guard_check_icall();
    (*pcVar4)();
    iVar9 = func_0x00adaa80();
    pcVar4 = *(code **)(*param_1 + 0x7c);
    _guard_check_icall();
    iVar11 = (*pcVar4)();
    uVar8 = *(int *)(*(int *)(iVar11 + 0x80) + -4 + *(int *)(iVar11 + 0x84) * 4) * iVar9;
    lVar6 = (ulonglong)uVar8 * 8;
    uVar12 = (undefined4)lVar6;
    if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
      uVar12 = 0xffffffff;
    }
    func_0x00ad78b0();
    pvStack_20 = (void *)func_0x00ad7620(uVar12);
    uStack_8 = 0;
    if (pvStack_20 == (void *)0x0) {
      pvStack_20 = (void *)0x0;
    }
    else {
      func_0x00466d40(pvStack_20,8,uVar8,FUN_0046f300);
    }
    puVar13 = (undefined4 *)param_1[0x30];
    puVar5 = (undefined4 *)param_1[0x31];
    uStack_8 = 0xffffffff;
    _Dst = pvStack_20;
    for (; puVar13 != puVar5; puVar13 = puVar13 + 1) {
      pcVar4 = *(code **)(*(int *)*puVar13 + 0xc);
      _guard_check_icall();
      piVar10 = (int *)(*pcVar4)();
      pcVar4 = *(code **)(*piVar10 + 0x74);
      _guard_check_icall();
      _Src = (void *)(*pcVar4)();
      memcpy(_Dst,_Src,iVar9 * 8);
      _Dst = (void *)((int)_Dst + iVar9 * 8);
    }
    *unaff_FS_OFFSET = iStack_10;
    return pvStack_20;
  }
  pcVar4 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall(uVar8);
  (*pcVar4)();
  uVar8 = func_0x00adaa80();
  uVar12 = (undefined4)((ulonglong)uVar8 * 8);
  if ((int)((ulonglong)uVar8 * 8 >> 0x20) != 0) {
    uVar12 = 0xffffffff;
  }
  func_0x00ad78b0();
  pvStack_1c = (void *)func_0x00ad7620(uVar12);
  uStack_8 = 1;
  if (pvStack_1c == (void *)0x0) {
    pvStack_1c = (void *)0x0;
  }
  else {
    func_0x00466d40(pvStack_1c,8,uVar8,FUN_0046f300);
  }
  uStack_8 = 0xffffffff;
  pcVar4 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall();
  puVar13 = (undefined4 *)(*pcVar4)();
  uStack_18 = 0;
  uVar12 = *puVar13;
  if ((param_1[0x31] - param_1[0x30] & 0xfffffffcU) == 4) {
    pcVar4 = *(code **)(**(int **)param_1[0x30] + 0xc);
    _guard_check_icall();
    piVar10 = (int *)(*pcVar4)();
    pcVar4 = *(code **)(*piVar10 + 0x74);
    _guard_check_icall();
    iVar9 = (*pcVar4)();
    pcVar4 = *(code **)(*piVar10 + 0x7c);
    _guard_check_icall();
    (*pcVar4)();
    iVar11 = func_0x00adaa80();
    if (iVar11 == 1) {
      cVar7 = func_0x00aea900();
      if (cVar7 == '\0') {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          func_0x00b65300(uVar12,iVar9);
        }
      }
      else {
        pcVar4 = *(code **)(*param_1 + 0x7c);
        _guard_check_icall();
        iVar11 = (*pcVar4)();
        bVar1 = *(byte *)(iVar11 + 0x7c);
        pcVar4 = *(code **)(*param_1 + 0x7c);
        _guard_check_icall();
        iVar11 = (*pcVar4)();
        iVar14 = 0;
        bVar2 = *(byte *)(iVar11 + 0x7d);
        if (bVar1 != 0) {
          do {
            cVar7 = (char)((uint)iVar14 >> 8);
            if (bVar2 != 0) {
              puVar13 = (undefined4 *)((int)pvStack_1c + uStack_18 * 8);
              uStack_18 = uStack_18 + bVar2;
              do {
                cVar7 = (char)((uint)iVar14 >> 8);
                if (cVar7 == (char)iVar14) {
                  func_0x00b65300(uVar12,iVar9);
                }
                else {
                  *puVar13 = 0;
                  puVar13[1] = 1;
                }
                bVar16 = (char)iVar14 + 1;
                iVar14 = CONCAT31((int3)((uint)iVar14 >> 8),bVar16);
                puVar13 = puVar13 + 2;
              } while (bVar16 < bVar2);
            }
            iVar14 = (uint)(byte)(cVar7 + 1U) << 8;
          } while ((byte)(cVar7 + 1U) < bVar1);
        }
      }
      goto LAB_00aea1d1;
    }
    cVar7 = func_0x00aea900();
    if ((cVar7 != '\0') && (cVar7 = func_0x00aea900(), cVar7 != '\0')) {
      pcVar4 = *(code **)(*piVar10 + 0x7c);
      _guard_check_icall();
      iVar11 = (*pcVar4)();
      bVar1 = *(byte *)(iVar11 + 0x7c);
      pcVar4 = *(code **)(*piVar10 + 0x7c);
      _guard_check_icall();
      iVar11 = (*pcVar4)();
      bVar2 = *(byte *)(iVar11 + 0x7d);
      pcVar4 = *(code **)(*param_1 + 0x7c);
      _guard_check_icall();
      iVar11 = (*pcVar4)();
      bVar16 = *(byte *)(iVar11 + 0x7c);
      pcVar4 = *(code **)(*param_1 + 0x7c);
      _guard_check_icall();
      iVar14 = (*pcVar4)();
      iVar11 = 0;
      bVar3 = *(byte *)(iVar14 + 0x7d);
      if (bVar16 != 0) {
        iStack_24 = 0;
        do {
          bVar18 = (byte)((uint)iVar11 >> 8);
          if (bVar3 != 0) {
            iVar14 = 0;
            puVar13 = (undefined4 *)((int)pvStack_1c + uStack_18 * 8);
            uStack_18 = uStack_18 + bVar3;
            do {
              bVar18 = (byte)((uint)iVar11 >> 8);
              bVar17 = (byte)iVar11;
              if ((bVar18 < bVar1) && (bVar17 < bVar2)) {
                func_0x00b65300(uVar12,iVar9 + ((uint)bVar2 * iStack_24 + iVar14) * 8);
              }
              else {
                puVar13[1] = 1;
                if (bVar18 == bVar17) {
                  *puVar13 = 0x3f800000;
                }
                else {
                  *puVar13 = 0;
                }
              }
              iVar11 = CONCAT31((int3)((uint)iVar11 >> 8),bVar17 + 1);
              puVar13 = puVar13 + 2;
              iVar14 = iVar14 + 1;
            } while ((byte)(bVar17 + 1) < bVar3);
          }
          iVar11 = (uint)(byte)(bVar18 + 1) << 8;
          iStack_24 = iStack_24 + 1;
        } while ((byte)(bVar18 + 1) < bVar16);
      }
      goto LAB_00aea1d1;
    }
  }
  puVar5 = (undefined4 *)param_1[0x31];
  for (puVar13 = (undefined4 *)param_1[0x30]; puVar13 != puVar5; puVar13 = puVar13 + 1) {
    pcVar4 = *(code **)(*(int *)*puVar13 + 0xc);
    _guard_check_icall();
    piVar10 = (int *)(*pcVar4)();
    pcVar4 = *(code **)(*piVar10 + 0x7c);
    _guard_check_icall();
    (*pcVar4)();
    uVar15 = func_0x00adaa80();
    pcVar4 = *(code **)(*piVar10 + 0x74);
    _guard_check_icall();
    iVar9 = (*pcVar4)();
    uStack_2c = 0;
    if (uVar15 != 0) {
      do {
        if (uVar8 <= uStack_18) break;
        func_0x00b65300(uVar12,iVar9);
        uStack_18 = uStack_18 + 1;
        uStack_2c = uStack_2c + 1;
        iVar9 = iVar9 + 8;
      } while (uStack_2c < uVar15);
    }
  }
LAB_00aea1d1:
  *unaff_FS_OFFSET = iStack_10;
  return pvStack_1c;
}



int __fastcall FUN_00aea1f0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar1 = *(code **)(*param_1 + 0x6c);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  if (cVar2 == '\0') {
    return 0;
  }
  pcVar1 = *(code **)(*(int *)param_1[0x2f] + 0x74);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)param_1[0x30] + 0x74);
  _guard_check_icall();
  (*pcVar1)();
  iVar4 = FUN_005beae0();
  if ((short)param_1[0x2e] == 0x2a) {
    pcVar1 = *(code **)(*(int *)param_1[0x2f] + 0x7c);
    _guard_check_icall(iVar3,iVar4);
    uVar5 = (*pcVar1)();
    iVar3 = func_0x00ae5280(uVar5);
    return iVar3;
  }
  pcVar1 = *(code **)(*(int *)param_1[0x2f] + 0x7c);
  _guard_check_icall();
  (*pcVar1)();
  iVar8 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      iVar6 = func_0x00adaa80();
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + iVar6;
    } while (iVar7 < iVar4);
  }
  return iVar3 + iVar8 * 8;
}



undefined4 __fastcall FUN_00aea2d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



undefined4 __fastcall FUN_00aea2e0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14);
}



undefined4 __fastcall FUN_00aea3c0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
}



undefined4 __fastcall FUN_00aea3d0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
}



undefined4 __fastcall FUN_00aea3e0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (*(short *)(param_1 + 0xb8) == 7) {
    puVar5 = *(undefined4 **)(param_1 + 0xc0);
    puVar1 = *(undefined4 **)(param_1 + 0xc4);
    while( true ) {
      if (puVar5 == puVar1) {
        return 1;
      }
      pcVar2 = *(code **)(*(int *)*puVar5 + 0xc);
      _guard_check_icall();
      piVar4 = (int *)(*pcVar2)();
      pcVar2 = *(code **)(*piVar4 + 0x6c);
      _guard_check_icall();
      cVar3 = (*pcVar2)();
      if (cVar3 == '\0') break;
      puVar5 = puVar5 + 1;
    }
  }
  return 0;
}



bool __fastcall FUN_00aea450(int param_1)

{
  code *pcVar1;
  char cVar2;
  
  if ((*(short *)(param_1 + 0xb8) == 0x2a) || (*(short *)(param_1 + 0xb8) == 0x2c)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x6c);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x6c);
      _guard_check_icall();
      cVar2 = (*pcVar1)();
      return cVar2 != '\0';
    }
  }
  return false;
}



undefined4 __fastcall FUN_00aea4b0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),
                  *(int *)(*(int *)(param_1 + 0x18) + 0x14) != 0);
}



undefined4 __fastcall FUN_00aea530(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar1 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall();
  iVar4 = (*pcVar1)();
  if (*(int *)(iVar4 + 8) != 2) {
    if ((param_1[0x34] != 0) && ((*(byte *)(param_1[0x34] + 0x2a) & 4) == 0)) {
      return 1;
    }
    puVar2 = (undefined4 *)param_1[0x31];
    for (puVar6 = (undefined4 *)param_1[0x30]; puVar6 != puVar2; puVar6 = puVar6 + 1) {
      pcVar1 = *(code **)(*(int *)*puVar6 + 0xc);
      _guard_check_icall();
      piVar5 = (int *)(*pcVar1)();
      pcVar1 = *(code **)(*piVar5 + 0x78);
      _guard_check_icall();
      cVar3 = (*pcVar1)();
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



undefined1 __fastcall FUN_00aea5c0(int param_1)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = func_0x00b65da0(*(undefined2 *)(param_1 + 0xb8));
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x78);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x78);
      _guard_check_icall();
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



void __fastcall FUN_00aea620(int param_1)

{
  func_0x00b65da0(*(undefined2 *)(param_1 + 0xb8));
  return;
}



void __fastcall FUN_00aea640(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xb8) + 0x78);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



undefined1 __fastcall FUN_00aea660(int param_1)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xb8) + 0x78);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x78);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      pcVar1 = *(code **)(**(int **)(param_1 + 0xc0) + 0x78);
      _guard_check_icall();
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



undefined1 __fastcall FUN_00aea6c0(int param_1)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = func_0x00b65da0(*(undefined2 *)(param_1 + 0xb8));
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xbc) + 0x78);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



undefined4 __fastcall FUN_00aea810(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (*(short *)(param_1 + 0xb8) == 7) {
    puVar5 = *(undefined4 **)(param_1 + 0xc0);
    puVar1 = *(undefined4 **)(param_1 + 0xc4);
    while( true ) {
      if (puVar5 == puVar1) {
        return 1;
      }
      pcVar2 = *(code **)(*(int *)*puVar5 + 0xc);
      _guard_check_icall();
      piVar4 = (int *)(*pcVar2)();
      pcVar2 = *(code **)(*piVar4 + 0x70);
      _guard_check_icall();
      cVar3 = (*pcVar2)();
      if (cVar3 == '\0') break;
      puVar5 = puVar5 + 1;
    }
  }
  return 0;
}



undefined4 FUN_00aea880(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = func_0x00adaa80();
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      cVar1 = func_0x00b656f0();
      if (cVar1 == '\0') {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 1;
}



void __thiscall FUN_00aeb260(int param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uStack_4;
  
  *(int *)(param_1 + 0x1c) = param_2;
  sVar1 = *(short *)(param_1 + 0xb8);
  if (sVar1 == 7) {
    puVar10 = *(undefined4 **)(param_1 + 0xc0);
    puVar2 = *(undefined4 **)(param_1 + 0xc4);
    if (puVar10 != puVar2) {
      do {
        pcVar3 = *(code **)(*(int *)*puVar10 + 0xc);
        _guard_check_icall();
        piVar5 = (int *)(*pcVar3)();
        if (param_2 != 0) {
          pcVar3 = *(code **)(*piVar5 + 0x7c);
          _guard_check_icall();
          iVar6 = (*pcVar3)();
          if (*(int *)(iVar6 + 4) == 0) {
            pcVar3 = *(code **)(*piVar5 + 0x7c);
            _guard_check_icall();
            puVar7 = (undefined4 *)(*pcVar3)();
            cVar4 = func_0x00b268b0(*puVar7);
            if (cVar4 != '\0') {
              pcVar3 = *(code **)(*piVar5 + 0x84);
              _guard_check_icall(param_2);
              (*pcVar3)();
            }
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar2);
      return;
    }
  }
  else if ((sVar1 == 1) || (sVar1 == 2)) {
    iVar6 = *(int *)(param_1 + 0xd0);
    uStack_4 = 0;
    if (*(int *)(iVar6 + 0x24) != 0) {
      do {
        uVar8 = *(undefined4 *)
                 (*(int *)(*(int *)(*(int *)(iVar6 + 0x14) + uStack_4 * 4) + 0x10) + 4);
        pcVar3 = *(code **)(**(int **)(*(int *)(param_1 + 0xc0) + uStack_4 * 4) + 0xc);
        _guard_check_icall();
        uVar9 = (*pcVar3)();
        func_0x00ae5990(uVar9,uVar8);
        iVar6 = *(int *)(param_1 + 0xd0);
        uStack_4 = uStack_4 + 1;
      } while (uStack_4 < *(uint *)(iVar6 + 0x24));
    }
  }
  else {
    switch(sVar1) {
    case 0x6a:
    case 0x6b:
    case 0x94:
      pcVar3 = *(code **)(*(int *)**(undefined4 **)(param_1 + 0xc0) + 0xc);
      _guard_check_icall(3);
      uVar8 = (*pcVar3)();
      func_0x00ae5990(uVar8);
      return;
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
      pcVar3 = *(code **)(*(int *)**(undefined4 **)(param_1 + 0xc0) + 0xc);
      _guard_check_icall(3);
      uVar8 = (*pcVar3)();
      func_0x00ae5990(uVar8);
      pcVar3 = *(code **)(**(int **)(*(int *)(param_1 + 0xc0) + 4) + 0xc);
      _guard_check_icall(3);
      uVar8 = (*pcVar3)();
      func_0x00ae5990(uVar8);
      return;
    }
  }
  return;
}



void __thiscall FUN_00aeb460(int param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  if (*(short *)(param_1 + 0xb8) != 0x1c) {
    func_0x00ae5990(*(undefined4 *)(param_1 + 0xbc),param_2);
  }
  sVar1 = *(short *)(param_1 + 0xb8);
  if ((((sVar1 != 0x2a) && (sVar1 != 0x2b)) && (sVar1 != 0x2c)) && (sVar1 != 0x2d)) {
    func_0x00ae5990(*(undefined4 *)(param_1 + 0xc0),param_2);
  }
  if ((*(short *)(param_1 + 0xb8) == 0x2a) || (*(short *)(param_1 + 0xb8) == 0x2b)) {
    piVar2 = *(int **)(param_1 + 0xc0);
    pcVar3 = *(code **)(*piVar2 + 0x7c);
    _guard_check_icall();
    iVar5 = (*pcVar3)();
    if (*(int *)(iVar5 + 4) == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x7c);
      _guard_check_icall();
      puVar6 = (undefined4 *)(*pcVar3)();
      cVar4 = func_0x00b268b0(*puVar6);
      if (cVar4 != '\0') {
        pcVar3 = *(code **)(*piVar2 + 0x84);
        _guard_check_icall(3);
        (*pcVar3)();
      }
    }
  }
  return;
}



void __thiscall FUN_00aeb520(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



void __thiscall FUN_00aeb530(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  func_0x00ae5990(*(undefined4 *)(param_1 + 0xb8),param_2);
  return;
}



void __thiscall FUN_00aeb550(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  func_0x00ae5990(*(undefined4 *)(param_1 + 0xbc),param_2);
  func_0x00ae5990(*(undefined4 *)(param_1 + 0xc0),param_2);
  return;
}



void __thiscall FUN_00aeb580(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  switch(*(undefined2 *)(param_1 + 0xb8)) {
  case 0x10:
  case 99:
  case 100:
  case 0x6c:
  case 0x6d:
  case 0x70:
  case 0x72:
  case 0x73:
  case 0x92:
  case 0x93:
  case 0x94:
    goto code_r0x00aeb5fc;
  default:
    func_0x00ae5990(*(undefined4 *)(param_1 + 0xbc),param_2);
    return;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x74:
  case 0x75:
  case 0x91:
    piVar1 = *(int **)(param_1 + 0xbc);
    pcVar2 = *(code **)(*piVar1 + 0x7c);
    _guard_check_icall();
    iVar4 = (*pcVar2)();
    if (*(int *)(iVar4 + 4) == 0) {
      pcVar2 = *(code **)(*piVar1 + 0x7c);
      _guard_check_icall();
      puVar5 = (undefined4 *)(*pcVar2)();
      cVar3 = func_0x00b268b0(*puVar5);
      if (cVar3 != '\0') {
        pcVar2 = *(code **)(*piVar1 + 0x84);
        _guard_check_icall(3);
        (*pcVar2)();
      }
    }
code_r0x00aeb5fc:
    return;
  }
}



undefined4 __thiscall FUN_00aeb6e0(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)(param_1 + 0xbc);
  uVar4 = 0;
  pcVar1 = *(code **)(*piVar3 + 8);
  _guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    do {
      pcVar1 = *(code **)(*piVar3 + 8);
      _guard_check_icall();
      piVar2 = (int *)(*pcVar1)();
      pcVar1 = *(code **)(*piVar3 + 8);
      if (*(int *)(*piVar2 + uVar4 * 4) == param_2) {
        _guard_check_icall();
        piVar2 = (int *)(*pcVar1)();
        *(undefined4 *)(*piVar2 + uVar4 * 4) = param_3;
        return 1;
      }
      uVar4 = uVar4 + 1;
      _guard_check_icall();
      piVar2 = (int *)(*pcVar1)();
    } while (uVar4 < (uint)(piVar2[1] - *piVar2 >> 2));
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb6f0(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xbc) == param_2) {
    *(undefined4 *)(param_1 + 0xbc) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0xc0) == param_2) {
    *(undefined4 *)(param_1 + 0xc0) = param_3;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb730(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)(param_1 + 0x14);
  uVar4 = 0;
  pcVar1 = *(code **)(*piVar3 + 8);
  _guard_check_icall();
  piVar2 = (int *)(*pcVar1)();
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    do {
      pcVar1 = *(code **)(*piVar3 + 8);
      _guard_check_icall();
      piVar2 = (int *)(*pcVar1)();
      pcVar1 = *(code **)(*piVar3 + 8);
      if (*(int *)(*piVar2 + uVar4 * 4) == param_2) {
        _guard_check_icall();
        piVar2 = (int *)(*pcVar1)();
        *(undefined4 *)(*piVar2 + uVar4 * 4) = param_3;
        return 1;
      }
      uVar4 = uVar4 + 1;
      _guard_check_icall();
      piVar2 = (int *)(*pcVar1)();
    } while (uVar4 < (uint)(piVar2[1] - *piVar2 >> 2));
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb740(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x18) == param_2) {
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb760(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x14) == param_2) {
    *(undefined4 *)(param_1 + 0x14) = param_3;
    return 1;
  }
  return 0;
}



undefined1 FUN_00aeb780(void)

{
  return 0;
}



undefined4 __thiscall FUN_00aeb790(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x14) == param_2) {
    *(undefined4 *)(param_1 + 0x14) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == param_2) {
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb7c0(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x14) == param_2) {
    *(undefined4 *)(param_1 + 0x14) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == param_2) {
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0x1c) == param_2) {
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb800(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x18) == param_2) {
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0x1c) == param_2) {
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0x20) == param_2) {
    *(undefined4 *)(param_1 + 0x20) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0x24) == param_2) {
    *(undefined4 *)(param_1 + 0x24) = param_3;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb850(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xb8) == param_2) {
    *(undefined4 *)(param_1 + 0xb8) = param_3;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb870(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xb8) == param_2) {
    *(undefined4 *)(param_1 + 0xb8) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0xbc) == param_2) {
    *(undefined4 *)(param_1 + 0xbc) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 0xc0) == param_2) {
    *(undefined4 *)(param_1 + 0xc0) = param_3;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00aeb8c0(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xbc) == param_2) {
    *(undefined4 *)(param_1 + 0xbc) = param_3;
    return 1;
  }
  return 0;
}



int __fastcall FUN_00aec1c0(int param_1)

{
  byte unaff_SI;
  
  func_0x00aebc20((undefined4 *)(param_1 + 0x5c),*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x5c),0x30);
  func_0x00adddc0();
  if ((unaff_SI & 5) == 5) {
    _guard_check_icall(param_1,0x6c);
  }
  return param_1;
}



undefined4 __thiscall FUN_00aecbb0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  undefined1 auStack_24 [4];
  int *piStack_20;
  int iStack_1c;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5eded;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(short *)(param_3 + 0xb8) == 1) {
    piStack_18 = *(int **)(*(int *)(param_3 + 0xd0) + 8);
    piStack_14 = piStack_18;
    func_0x0092d560(auStack_24,&piStack_14,uVar5);
    if ((*(char *)(iStack_1c + 0xd) != '\0') || ((int)piStack_18 < *(int *)(iStack_1c + 0x10))) {
      iStack_1c = *(int *)(param_1 + 0x5c);
    }
    piStack_20 = *(int **)(param_1 + 100);
    if (piStack_20 != (int *)0x0) {
      piStack_18 = (int *)*piStack_20;
      uVar5 = iStack_1c + 0x14;
      bVar10 = false;
      puVar6 = (undefined4 *)piStack_18[1];
      cVar1 = *(char *)((int)puVar6 + 0xd);
      puVar9 = piStack_18;
      puVar4 = puVar6;
      while (puVar3 = puVar6, cVar1 == '\0') {
        bVar10 = uVar5 <= (uint)puVar3[4];
        if (bVar10) {
          puVar6 = (undefined4 *)*puVar3;
          puVar9 = puVar3;
        }
        else {
          puVar6 = (undefined4 *)puVar3[2];
        }
        cVar1 = *(char *)((int)puVar6 + 0xd);
        puVar4 = puVar3;
      }
      if ((*(char *)((int)puVar9 + 0xd) != '\0') || (uVar5 < (uint)puVar9[4])) {
        piStack_14 = piStack_20;
        if (piStack_20[1] == 0xccccccc) {
          func_0x0048d790();
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        uStack_8 = 0;
        iStack_1c = 0;
        piVar7 = (int *)func_0x008ab47d(0x14);
        piVar7[4] = uVar5;
        *piVar7 = (int)piStack_18;
        piVar7[1] = (int)piStack_18;
        piVar7[2] = (int)piStack_18;
        *(undefined2 *)(piVar7 + 3) = 0;
        func_0x008b95c0(puVar4,bVar10,piVar7);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



uint __thiscall FUN_00aeccd0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  uStack_8 = *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x14) + 0x18) + 8);
  iStack_4 = param_1;
  uVar2 = func_0x00aec0a0(&uStack_8);
  *(undefined4 *)(param_1 + 100) = uVar2;
  puVar3 = (undefined4 *)func_0x00aee9d0(&stack0xfffffff0);
  uVar2 = puVar3[1];
  iVar1 = *(int *)(uStack_c + 100);
  *(undefined4 *)(iVar1 + 0xc) = *puVar3;
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  *(int *)(*(int *)(uStack_c + 100) + 8) = param_3;
  FUN_00ade830(uStack_c);
  *(undefined4 *)(uStack_c + 100) = 0;
  return uStack_c & 0xffffff00;
}



void FUN_00aecd50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_c [3];
  
  auStack_c[0] = *(undefined4 *)(*(int *)(param_1 + 0x18) + 8);
  iVar2 = func_0x00aec0a0(auStack_c);
  puVar3 = (undefined4 *)func_0x00aee9d0(auStack_c);
  uVar1 = puVar3[1];
  *(undefined4 *)(iVar2 + 0xc) = *puVar3;
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  return;
}



undefined4 __thiscall FUN_00aecde0(undefined4 param_1,byte param_2)

{
  func_0x00b65e00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00aece00(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TDiagnostics::vftable;
  func_0x00b65e00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



void FUN_00aecfc0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  uVar2 = func_0x00b65e30(param_1);
  uVar1 = func_0x00b65e10(unaff_retaddr);
  func_0x00aed1f0(uVar1,unaff_retaddr,uVar2,param_3);
  return;
}



undefined4 __thiscall FUN_00af1c60(undefined4 param_1,byte param_2)

{
  func_0x00af1910();
  func_0x008acf70();
  FUN_00993470();
  func_0x008acf70();
  func_0x00af1980();
  func_0x00993430();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0xc0);
  }
  return param_1;
}



undefined4 __thiscall FUN_00af22f0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int unaff_EBX;
  uint uStack_28;
  int iStack_24;
  
  iStack_24 = param_3;
  uStack_28 = param_2;
  func_0x00af30f0();
  func_0x00af1e10(param_2,param_3,0);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x5b) != '\0') {
      func_0x00af2510(param_3,*(undefined4 *)(param_3 + 0xd0));
    }
    if ((*(char *)(param_1 + 0x5c) != '\0') && (*(short *)(param_3 + 0xb8) == 1)) {
      uVar1 = *(uint *)(param_3 + 0xd0);
      uStack_28 = uVar1;
      if (uVar1 == 0) {
        func_0x00aeced0(param_3 + 4,"Found node calling function without a reference to it",
                        "<validateFunctionCall>");
        *(undefined1 *)(param_1 + 0xa4) = 1;
      }
      else {
        func_0x008ace40(&stack0xffffffe0,&uStack_28);
        if (((*(char *)(unaff_EBX + 0xd) != '\0') || (uVar1 < *(uint *)(unaff_EBX + 0x10))) ||
           (unaff_EBX == *(int *)(param_1 + 0x9c))) {
          puVar2 = (undefined4 *)func_0x00aee9d0(&uStack_28);
          puVar3 = &DAT_0112e1b4;
          if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
            puVar3 = (undefined1 *)*puVar2;
          }
          func_0x00aeced0(param_3 + 4,
                          "Found node calling previously undeclared function <validateFunctionCall>"
                          ,puVar3);
          *(undefined1 *)(param_1 + 0xa4) = 1;
        }
      }
    }
    if ((*(char *)(param_1 + 0x5d) != '\0') && (*(short *)(param_3 + 0xb8) == 2)) {
      puVar2 = (undefined4 *)func_0x00aee9d0(&uStack_28);
      puVar3 = &DAT_0112e1b4;
      if ((undefined1 *)*puVar2 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)*puVar2;
      }
      func_0x00aeced0(param_3 + 4,
                      "Found node calling a raw function (deprecated) <validateNoRawFunctionCalls>",
                      puVar3);
      *(undefined1 *)(param_1 + 0xa5) = 1;
    }
    return 1;
  }
  return 1;
}



undefined1 __thiscall FUN_00af2440(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_ESI;
  undefined4 unaff_retaddr;
  
  func_0x00af30f0(param_2,param_3);
  if ((*(char *)(param_1 + 100) != '\0') && (unaff_ESI == 0)) {
    func_0x00af2110(unaff_retaddr);
  }
  return 1;
}



undefined4 __thiscall FUN_00af2470(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  func_0x00af30f0(param_2,param_3);
  func_0x00af1f20(param_2);
  func_0x00af1e10(param_2,param_3,0);
  if (param_2 == 2) {
    uVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
    if ((1 < uVar3) &&
       (piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + -8 + uVar3 * 4), piVar1 != (int *)0x0)) {
      pcVar2 = *(code **)(*piVar1 + 0x1c);
      _guard_check_icall();
      iVar4 = (*pcVar2)();
      if (iVar4 != 0) {
        return 1;
      }
    }
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  return 1;
}



void __thiscall FUN_00af24e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_EDI;
  
  func_0x00af30f0(param_2,param_3);
  if (unaff_EDI == 2) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
  }
  return;
}



undefined1 __thiscall FUN_00af2860(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0xbc) = 0;
  func_0x00af30f0(param_2,param_3);
  return 1;
}



void FUN_00af2880(undefined4 param_1)

{
  func_0x00af30f0(0,param_1);
  return;
}



undefined4 FUN_00af2890(int param_1,int param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [12];
  undefined8 uStack_58;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  int iStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5f25d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00af30f0(param_1,param_2,uVar5);
  func_0x00af1e10(param_1,param_2,0);
  pcVar2 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall();
  piStack_1c = (int *)(*pcVar2)();
  iVar6 = iStack_18;
  if ((*(char *)(iStack_18 + 0x65) != '\0') && (1 < (uint)(piStack_1c[1] - *piStack_1c >> 2))) {
    pcVar2 = *(code **)(**(int **)(*piStack_1c + 4) + 0x48);
    _guard_check_icall();
    iVar6 = (*pcVar2)();
    if (iVar6 == 0) {
      pcVar2 = *(code **)(**(int **)(*piStack_1c + 4) + 0x30);
      _guard_check_icall();
      iVar6 = (*pcVar2)();
      pcVar2 = *(code **)(**(int **)(iVar6 + 0xbc) + 0x48);
      _guard_check_icall();
      (*pcVar2)();
    }
    iVar6 = iStack_18;
    puVar7 = (undefined4 *)func_0x00aee9d0(&puStack_3c);
    puVar10 = &DAT_0112e1b4;
    if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)*puVar7;
    }
    func_0x00aeced0(param_2 + 4,
                    "Found multiple declarations where SeparateDeclarations should have separated them <validateMultiDeclarations>"
                    ,puVar10);
    *(undefined1 *)(iVar6 + 0xba) = 1;
  }
  if (param_1 == 0) {
    cStack_11 = *(char *)(iVar6 + 99);
    puStack_28 = (undefined4 *)*piStack_1c;
    puStack_34 = (undefined4 *)piStack_1c[1];
    if (puStack_28 != puStack_34) {
      do {
        piStack_1c = (int *)*puStack_28;
        pcVar2 = *(code **)(*piStack_1c + 0x48);
        _guard_check_icall();
        iStack_24 = (*pcVar2)();
        if (iStack_24 == 0) {
          pcVar2 = *(code **)(*piStack_1c + 0x30);
          _guard_check_icall();
          iVar6 = (*pcVar2)();
          pcVar2 = *(code **)(**(int **)(iVar6 + 0xbc) + 0x48);
          _guard_check_icall();
          iStack_24 = (*pcVar2)();
          iVar6 = iStack_18;
        }
        puStack_20 = *(undefined4 **)(iStack_24 + 0x18);
        piVar11 = (int *)puStack_20[4];
        piStack_30 = piVar11;
        piStack_1c = puStack_20;
        if (*(char *)(iVar6 + 0x59) != '\0') {
          cVar4 = func_0x00af1ec0(puStack_20);
          if (cVar4 != '\0') {
            puVar7 = (undefined4 *)func_0x00aee9d0(auStack_44);
            puVar10 = &DAT_0112e1b4;
            if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
              puVar10 = (undefined1 *)*puVar7;
            }
            func_0x00aeced0(param_2 + 4,
                            "Found two declarations of the same variable <validateVariableReferences>"
                            ,puVar10);
            *(undefined1 *)(iVar6 + 0x98) = 1;
            break;
          }
          func_0x00af1510(auStack_44,&puStack_20);
          piStack_1c = puStack_20;
          puStack_2c = *(undefined4 **)(puStack_20[4] + 0x8c);
          pbVar1 = (byte *)((int)puStack_20 + 0xf);
          puStack_20 = puStack_2c;
          if (((*pbVar1 & 0xf) == 3) && (puStack_2c != (undefined4 *)0x0)) {
            puVar8 = (undefined8 *)func_0x008ace40(auStack_64,&puStack_2c);
            uStack_58 = *puVar8;
            if ((*(char *)(*(int *)(puVar8 + 1) + 0xd) != '\0') ||
               (puStack_20 < *(undefined4 **)(*(int *)(puVar8 + 1) + 0x10))) {
              if (*(int *)(iVar6 + 0x8c) == 0xccccccc) {
                func_0x0048d790();
                pcVar2 = (code *)swi(3);
                uVar9 = (*pcVar2)();
                return uVar9;
              }
              uVar9 = *(undefined4 *)(iVar6 + 0x88);
              uStack_8 = 2;
              uStack_38 = 0;
              puStack_3c = (undefined4 *)(iVar6 + 0x88);
              puVar7 = (undefined4 *)func_0x008ab47d(0x14);
              uStack_8 = 0xffffffff;
              uStack_38 = 0;
              puVar7[4] = puStack_20;
              *puVar7 = uVar9;
              puVar7[1] = uVar9;
              puVar7[2] = uVar9;
              *(undefined2 *)(puVar7 + 3) = 0;
              func_0x008b95c0((undefined4)uStack_58,uStack_58._4_4_,puVar7);
              piVar11 = piStack_30;
            }
          }
        }
        if (cStack_11 != '\0') {
          cStack_11 = '\0';
          if (((char)piVar11[0x25] == '\0') && (*piVar11 != 0x5e)) {
            func_0x00af3790(piVar11,param_2 + 4);
          }
          else {
            func_0x00af32a0(piVar11,param_2 + 4);
          }
        }
        puVar7 = (undefined4 *)func_0x00aee9d0(auStack_4c);
        puVar10 = &DAT_0112e1b4;
        if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)*puVar7;
        }
        cVar4 = func_0x0093e240(puVar10);
        if (cVar4 != '\0') {
          func_0x00af25e0(iStack_24);
        }
        if ((*(char *)(iVar6 + 0x60) != '\0') &&
           (((char)piVar11[0x25] != '\0' || (*piVar11 == 0x5e)))) {
          puVar7 = (undefined4 *)(-(uint)(piVar11[0x24] != 0) & piVar11[0x24] + 0x10U);
          if (puVar7 == (undefined4 *)0x0) {
            if (piVar11[0x23] == 0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar7 = (undefined4 *)(piVar11[0x23] + 0x10);
            }
          }
          puVar3 = (undefined4 *)((undefined4 *)*puVar7)[1];
          iVar6 = iStack_18;
          for (puVar7 = *(undefined4 **)*puVar7; iStack_18 = iVar6, puVar7 != puVar3;
              puVar7 = puVar7 + 1) {
            puStack_2c = (undefined4 *)*puVar7;
            piStack_30 = (int *)*puStack_2c;
            cVar4 = func_0x00b268b0(*piStack_30);
            if ((cVar4 != '\0') && (piStack_30[1] == 0)) {
              puVar10 = &DAT_0112e1b4;
              if ((undefined1 *)puStack_2c[1] != (undefined1 *)0x0) {
                puVar10 = (undefined1 *)puStack_2c[1];
              }
              func_0x00aeced0(param_2 + 4,
                              "Found block field with undefined precision <validatePrecision>",
                              puVar10);
              *(undefined1 *)(iStack_18 + 0xa8) = 1;
            }
            iVar6 = iStack_18;
          }
        }
        puStack_28 = puStack_28 + 1;
      } while (puStack_28 != puStack_34);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4 __thiscall FUN_00af2c80(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iStack_20;
  int iStack_c;
  
  iStack_20 = param_3;
  func_0x00af30f0(param_2);
  func_0x00af1f20(param_2);
  if ((*(char *)(param_1 + 0x59) != '\0') && (param_2 == 0)) {
    iVar1 = *(int *)(*(int *)(param_3 + 0x14) + 0x18);
    uVar2 = *(uint *)(iVar1 + 0x24);
    uVar6 = 0;
    if (uVar2 != 0) {
      while (cVar3 = func_0x00af1ec0(*(undefined4 *)(*(int *)(iVar1 + 0x14) + uVar6 * 4)),
            cVar3 == '\0') {
        func_0x00af1510(&stack0xffffffe8,&iStack_20);
        uVar6 = uVar6 + 1;
        if (uVar2 <= uVar6) {
          return 1;
        }
      }
      puVar4 = (undefined4 *)func_0x00aee9d0(&stack0xffffffe8);
      puVar5 = &DAT_0112e1b4;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)*puVar4;
      }
      func_0x00aeced0(iStack_c + 4,
                      "Found two declarations of the same function argument <validateVariableReferences>"
                      ,puVar5);
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
  }
  return 1;
}



void __thiscall FUN_00af2d50(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  undefined8 uStack_44;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  undefined4 *puStack_24;
  uint uStack_20;
  uint uStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5f28d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00af30f0(0,param_2,uVar6);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    uStack_20 = *(uint *)(param_2 + 0x18);
    uStack_1c = uStack_20;
    puVar7 = (undefined8 *)func_0x008ace40(auStack_38,&uStack_20);
    uStack_44 = *puVar7;
    if ((*(char *)(*(int *)(puVar7 + 1) + 0xd) != '\0') ||
       (uStack_1c < *(uint *)(*(int *)(puVar7 + 1) + 0x10))) {
      if (*(int *)(param_1 + 0xa0) == 0xccccccc) {
        func_0x0048d790();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
      uStack_8 = 0;
      uStack_20 = 0;
      puStack_24 = (undefined4 *)(param_1 + 0x9c);
      puVar8 = (undefined4 *)func_0x008ab47d(0x14);
      uStack_8 = 0xffffffff;
      puVar8[4] = uStack_1c;
      *puVar8 = uVar1;
      puVar8[1] = uVar1;
      puVar8[2] = uVar1;
      *(undefined2 *)(puVar8 + 3) = 0;
      func_0x008b95c0((undefined4)uStack_44,uStack_44._4_4_,puVar8);
    }
  }
  uStack_1c = *(int *)(param_2 + 0x18);
  puVar8 = *(undefined4 **)(uStack_1c + 0x18);
  if (((*(char *)(param_1 + 0x60) != '\0') && (cVar5 = func_0x00b268b0(*puVar8), cVar5 != '\0')) &&
     (puVar8[1] == 0)) {
    puVar9 = (undefined4 *)func_0x00aee9d0(&puStack_24);
    puVar10 = &DAT_0112e1b4;
    if ((undefined1 *)*puVar9 != (undefined1 *)0x0) {
      puVar10 = (undefined1 *)*puVar9;
    }
    func_0x00aeced0(param_2 + 4,
                    "Found function with undefined precision on return value <validatePrecision>",
                    puVar10);
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if (*(char *)(param_1 + 99) != '\0') {
    if (*(char *)(puVar8 + 0x25) == '\0') {
      func_0x00af3790(puVar8,param_2 + 4);
    }
    else {
      func_0x00af32a0();
    }
  }
  uStack_20 = 0;
  if (*(int *)(uStack_1c + 0x24) != 0) {
    do {
      iStack_18 = *(int *)(*(int *)(uStack_1c + 0x14) + uStack_20 * 4);
      piVar11 = *(int **)(iStack_18 + 0x10);
      piStack_14 = piVar11;
      if (*(char *)(param_1 + 99) != '\0') {
        func_0x00af3790(piVar11,param_2 + 4);
      }
      if (*(char *)(param_1 + 0x5f) != '\0') {
        iVar2 = piVar11[2];
        if (((iVar2 != 0xe) && (iVar2 != 0xf)) && ((iVar2 != 0x10 && (iVar2 != 0x11)))) {
          puVar8 = (undefined4 *)func_0x00aee9d0(auStack_2c);
          puVar10 = &DAT_0112e1b4;
          if ((undefined1 *)*puVar8 != (undefined1 *)0x0) {
            puVar10 = (undefined1 *)*puVar8;
          }
          func_0x00aeced0(param_2 + 4,
                          "Found function prototype with an invalid qualifier <validateQualifiers>",
                          puVar10);
          *(undefined1 *)(param_1 + 0xa7) = 1;
        }
        iVar3 = *piStack_14;
        piVar11 = piStack_14;
        if ((((iVar3 - 8U < 0x2b) || (iVar3 - 0x33U < 0x21)) ||
            ((iVar3 == 6 || ((iVar3 - 0x54U < 3 || (iVar3 - 0x57U < 6)))))) && (iVar2 != 0xe)) {
          puVar8 = (undefined4 *)func_0x00aee9d0(auStack_34);
          puVar10 = &DAT_0112e1b4;
          if ((undefined1 *)*puVar8 != (undefined1 *)0x0) {
            puVar10 = (undefined1 *)*puVar8;
          }
          func_0x00aeced0(param_2 + 4,
                          "Found function prototype with an invalid qualifier on opaque parameter <validateQualifiers>"
                          ,puVar10);
          *(undefined1 *)(param_1 + 0xa7) = 1;
          piVar11 = piStack_14;
        }
      }
      if (((*(char *)(param_1 + 0x60) != '\0') && (cVar5 = func_0x00b268b0(*piVar11), cVar5 != '\0')
          ) && (piVar11[1] == 0)) {
        puVar8 = (undefined4 *)func_0x00aee9d0((int)&uStack_44 + 4);
        puVar10 = &DAT_0112e1b4;
        if ((undefined1 *)*puVar8 != (undefined1 *)0x0) {
          puVar10 = (undefined1 *)*puVar8;
        }
        func_0x00aeced0(param_2 + 4,
                        "Found function parameter with undefined precision <validatePrecision>",
                        puVar10);
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
      uStack_20 = uStack_20 + 1;
    } while (uStack_20 < *(uint *)(uStack_1c + 0x24));
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_00af3020(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iStack_18;
  
  iStack_18 = param_3;
  func_0x00af30f0(param_2);
  iVar1 = *(int *)(*(int *)(param_3 + 0x14) + 0x18);
  if (*(char *)(param_1 + 0x59) != '\0') {
    puVar3 = (undefined4 *)func_0x00aee9d0(&stack0xfffffff0);
    puVar4 = &DAT_0112e1b4;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)*puVar3;
    }
    cVar2 = func_0x0093e240(puVar4);
    if ((cVar2 == '\0') &&
       ((*(int *)(*(int *)(iVar1 + 0x10) + 8) != 0x5c || (*(char *)(param_1 + 0x5a) != '\0')))) {
      cVar2 = func_0x00af1ec0(iVar1);
      if (cVar2 == '\0') {
        puVar3 = (undefined4 *)func_0x00aee9d0(&iStack_18);
        puVar4 = &DAT_0112e1b4;
        if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
          puVar4 = (undefined1 *)*puVar3;
        }
        func_0x00aeced0(param_3 + 4,
                        "Found reference to undeclared or inconsistently transformed variable <validateVariableReferences>"
                        ,puVar4);
        *(undefined1 *)(param_1 + 0x98) = 1;
      }
    }
  }
  return 1;
}



undefined1 FUN_00af30d0(undefined4 param_1,undefined4 param_2)

{
  func_0x00af30f0(param_1,param_2);
  return 1;
}



undefined4 __thiscall FUN_00af3870(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  func_0x00af30f0(param_2,param_3);
  if ((*(char *)(param_1 + 100) != '\0') && (param_2 == 0)) {
    pcVar1 = *(code **)(**(int **)(param_3 + 0x14) + 0x7c);
    _guard_check_icall();
    piVar3 = (int *)(*pcVar1)();
    iVar2 = *piVar3;
    if ((iVar2 == 7) || ((iVar2 == 3 || (iVar2 == 4)))) {
      if (((char)piVar3[0x1f] == '\x01') &&
         (((*(char *)((int)piVar3 + 0x7d) == '\x01' && (piVar3[0x24] == 0)) && (piVar3[0x21] == 0)))
         ) {
        return 1;
      }
      pcVar4 = "Found switch selector expression that is not scalar";
    }
    else {
      pcVar4 = "Found switch selector expression that is not integer";
    }
    func_0x00aeced0(param_3 + 4,pcVar4,"<validateExpressionTypes>");
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
  return 1;
}



undefined4 __thiscall FUN_00af3910(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  func_0x00af30f0(param_2,param_3);
  if (*(char *)(param_1 + 0x67) != '\0') {
    pcVar1 = *(code **)(**(int **)(param_3 + 0xb8) + 0x2c);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      func_0x00aeced0(param_3 + 4,"Found swizzle applied to swizzle","<validateNoSwizzleOfSwizzle>")
      ;
      *(undefined1 *)(param_1 + 0xbb) = 1;
    }
  }
  return 1;
}



void __thiscall FUN_00af3970(int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  func_0x00af30f0(0,param_2);
  iVar4 = param_2[6];
  if (*(char *)(param_1 + 0x59) != '\0') {
    puVar3 = (undefined4 *)func_0x00aee9d0(&stack0xfffffff0);
    puVar5 = &DAT_0112e1b4;
    if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
      puVar5 = (undefined1 *)*puVar3;
    }
    cVar2 = func_0x0093e240(puVar5);
    if ((cVar2 == '\0') &&
       ((*(int *)(*(int *)(iVar4 + 0x10) + 8) != 0x5c || (*(char *)(param_1 + 0x5a) != '\0')))) {
      func_0x00af3ac0(param_2);
    }
  }
  puVar3 = (undefined4 *)func_0x00aee9d0(&stack0xfffffff0);
  puVar5 = &DAT_0112e1b4;
  if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)*puVar3;
  }
  cVar2 = func_0x0093e240(puVar5);
  if (cVar2 != '\0') {
    func_0x00af25e0(param_2);
  }
  if ((*(char *)(param_1 + 0x60) != '\0') && (cVar2 == '\0')) {
    pcVar1 = *(code **)(*param_2 + 0x7c);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar1)();
    cVar2 = func_0x00b268b0(*puVar3);
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*param_2 + 0x7c);
      _guard_check_icall();
      iVar4 = (*pcVar1)();
      if (*(int *)(iVar4 + 4) == 0) {
        puVar3 = (undefined4 *)func_0x00aee9d0(&stack0xffffffec);
        puVar5 = &DAT_0112e1b4;
        if ((undefined1 *)*puVar3 != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)*puVar3;
        }
        func_0x00aeced0(param_2 + 1,"Found symbol with undefined precision <validatePrecision>",
                        puVar5);
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
    }
  }
  return;
}



undefined1 __thiscall FUN_00af3a80(int param_1,undefined4 param_2,int param_3)

{
  int unaff_EBX;
  
  func_0x00af30f0(param_2,param_3);
  if ((unaff_EBX == 0) && (*(char *)(param_1 + 0x5b) != '\0')) {
    func_0x00af2510(param_3,*(undefined4 *)(param_3 + 0xc4));
  }
  return 1;
}



int __fastcall FUN_00af3fd0(int param_1)

{
  byte unaff_SI;
  
  func_0x009246b0((undefined4 *)(param_1 + 0x78),*(undefined4 *)(*(int *)(param_1 + 0x78) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x78),0x2c);
  func_0x00adddc0();
  if ((unaff_SI & 5) == 5) {
    _guard_check_icall(param_1,0xbc);
  }
  return param_1;
}



undefined4 __thiscall FUN_00af5470(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBX;
  int unaff_EBP;
  int iStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [2];
  int aiStack_1c [2];
  int aiStack_14 [5];
  
  if (*(short *)(param_3 + 0xb8) != 0x2d) {
    return 1;
  }
  pcVar1 = *(code **)(**(int **)(param_3 + 0xbc) + 0xc);
  _guard_check_icall();
  piVar3 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)(param_3 + 0xc0) + 0x10);
  _guard_check_icall();
  uStack_28 = (*pcVar1)();
  pcVar1 = *(code **)(*piVar3 + 0x30);
  _guard_check_icall();
  aiStack_24[0] = (*pcVar1)();
  if (aiStack_24[0] != 0) {
    piVar3 = *(int **)(aiStack_24[0] + 0xbc);
  }
  pcVar1 = *(code **)(*piVar3 + 0x7c);
  _guard_check_icall();
  iVar4 = (*pcVar1)();
  iVar7 = *(int *)(iVar4 + 8);
  iStack_2c = *(int *)(iVar4 + 0x8c);
  if (iVar7 == 0x49) {
    pcVar1 = *(code **)(*piVar3 + 0x48);
    _guard_check_icall();
    iVar4 = (*pcVar1)();
    func_0x00af4550(*(undefined4 *)(iVar4 + 0x18),param_1 + 0x9c,*(undefined4 *)(param_1 + 100));
    uVar6 = *(undefined4 *)(param_1 + 100);
    piVar3 = &iStack_2c;
LAB_00af5591:
    uVar5 = func_0x00aee9d0(piVar3);
    iVar4 = func_0x00af4180(uVar5,uVar6);
    if (iVar4 == 0) goto LAB_00af55ad;
  }
  else {
    cVar2 = func_0x00b26ab0(iVar7);
    if (cVar2 != '\0') {
      uVar6 = *(undefined4 *)(param_1 + 100);
      piVar3 = aiStack_24;
      goto LAB_00af5591;
    }
    if (iVar7 == 0x54) {
      pcVar1 = *(code **)(*piVar3 + 0x48);
      _guard_check_icall();
      iVar4 = (*pcVar1)();
      func_0x00af4550(*(undefined4 *)(iVar4 + 0x18),param_1 + 0x9d,*(undefined4 *)(param_1 + 0x68));
      piVar3 = aiStack_1c;
LAB_00af558e:
      uVar6 = *(undefined4 *)(param_1 + 0x68);
      goto LAB_00af5591;
    }
    cVar2 = func_0x00b26b30(iVar7);
    if (cVar2 != '\0') {
      piVar3 = aiStack_14;
      goto LAB_00af558e;
    }
LAB_00af55ad:
    if (iVar7 == 0x5d) goto LAB_00af560d;
    uVar6 = func_0x00aee9d0(aiStack_14);
    iVar7 = func_0x00af3c80(uVar6,*(undefined4 *)(param_1 + 0x70));
    if (iVar7 == 0) {
      iVar7 = func_0x00af3c80(uVar6,*(undefined4 *)(param_1 + 0x74));
    }
    *(undefined1 *)(iVar7 + 0x59) = 1;
    if (*(int *)(unaff_EBP + 0xb8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_005beae0();
    }
    iVar4 = iVar4 * 0xb4 + *(int *)(iVar7 + 0x60);
  }
  func_0x00af4320(iVar4);
LAB_00af560d:
  if (unaff_EBX != 0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBX + 0xc0) + 4);
    _guard_check_icall(param_1);
    (*pcVar1)();
  }
  return 0;
}



void FUN_00af5650(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *unaff_FS_OFFSET;
  undefined1 auStack_220 [16];
  undefined4 *puStack_210;
  int *piStack_20c;
  undefined4 uStack_205;
  int iStack_200;
  undefined4 *puStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  uint uStack_1f0;
  byte bStack_1e9;
  int iStack_1e8;
  undefined *puStack_1e4;
  undefined4 uStack_1e0;
  undefined1 auStack_1dc [180];
  undefined1 auStack_128 [136];
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 auStack_74 [4];
  undefined4 auStack_70 [7];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_40;
  undefined4 uStack_1c;
  undefined1 uStack_c;
  uint uStack_8;
  
  uStack_1e0 = 0xffffffff;
  puStack_1e4 = &DAT_00f5f547;
  iStack_1e8 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_1dc;
  *unaff_FS_OFFSET = (int)&iStack_1e8;
  uStack_1f0 = 0;
  pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall(uStack_8);
  puStack_1fc = (undefined4 *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)*puStack_1fc + 0xc);
  _guard_check_icall();
  piVar3 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*piVar3 + 0x7c);
  piStack_20c = piVar3;
  _guard_check_icall();
  iVar4 = (*pcVar1)();
  iStack_200 = *(int *)(iVar4 + 8);
  if ((((iStack_200 != 3) && (iStack_200 != 9)) && (iStack_200 != 10)) &&
     ((iStack_200 != 0xd && (iStack_200 != 6)))) {
    cVar2 = func_0x00b26a80(iStack_200);
    bStack_1e9 = 0;
    if (cVar2 == '\0') goto LAB_00af570e;
  }
  bStack_1e9 = 1;
LAB_00af570e:
  pcVar1 = *(code **)(*piVar3 + 0x7c);
  _guard_check_icall();
  piVar3 = (int *)(*pcVar1)();
  if ((*piVar3 == 0x5e) || (bStack_1e9 != 0)) {
    puVar7 = (undefined4 *)*puStack_1fc;
    puStack_210 = (undefined4 *)puStack_1fc[1];
    puStack_1fc = puVar7;
    if (puVar7 != puStack_210) {
      do {
        pcVar1 = *(code **)(*(int *)*puVar7 + 0x48);
        puStack_1fc = puVar7;
        _guard_check_icall();
        piVar3 = (int *)(*pcVar1)();
        if ((*(byte *)(piVar3[6] + 0xf) & 0xf) != 2) {
          pcVar1 = *(code **)(*piStack_20c + 0x7c);
          _guard_check_icall();
          piVar5 = (int *)(*pcVar1)();
          iVar4 = iStack_200;
          if ((((*piVar5 == 0x5e) && (cVar2 = func_0x00af42a0(iStack_200), cVar2 == '\0')) &&
              (iVar4 != 0x50)) && (iVar4 != 0x51)) {
            func_0x009c3420();
            uStack_1e0 = 0;
            bStack_1e9 = *(byte *)(piVar3[6] + 0xf) & 0xf;
            pcVar1 = *(code **)(*piVar3 + 0x7c);
            _guard_check_icall();
            uVar6 = (*pcVar1)();
            if (bStack_1e9 == 3) {
              puVar9 = (undefined1 *)0x0;
            }
            else {
              puVar7 = (undefined4 *)func_0x00aea310(auStack_220);
              puVar9 = &DAT_0112e1b4;
              if ((undefined1 *)*puVar7 != (undefined1 *)0x0) {
                puVar9 = (undefined1 *)*puVar7;
              }
            }
            iVar8 = iStack_1f4;
            func_0x00af4630(puVar9,uVar6,auStack_74);
            if (iVar4 == 6) {
              iVar4 = *(int *)(iVar8 + 0x70);
LAB_00af5825:
              if (*(int *)(iVar4 + 4) != *(int *)(iVar4 + 8)) {
                func_0x009c3370();
                *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0x6c;
                uStack_1e0 = 0xffffffff;
                func_0x009c3800();
                goto LAB_00af5c5e;
              }
              func_0x00a106c0(*(int *)(iVar4 + 4),auStack_74);
            }
            else if (iVar4 == 7) {
              iVar4 = *(int *)(iVar8 + 0x74);
              goto LAB_00af5825;
            }
            uStack_1e0 = 0xffffffff;
            func_0x009c3800();
          }
          else {
            switch(iVar4) {
            case 3:
            case 9:
              iStack_1f8 = *(int *)(iStack_1f4 + 0x58);
              uStack_1e0 = 1;
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar8 = (*pcVar1)();
              func_0x009c37e0();
              uStack_1f0 = uStack_1f0 | 1;
              func_0x00af4df0(iVar8,piVar3[6],auStack_128);
              iVar4 = iStack_1f8;
              puVar7 = (undefined4 *)(iVar8 + 0x14);
              puVar11 = auStack_70;
              for (iVar10 = 0x1a; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar11 = puVar11 + 1;
              }
              uStack_a0 = auStack_70[0];
              if (*(int *)(iStack_1f8 + 4) == *(int *)(iStack_1f8 + 8)) {
                func_0x0096a6e0(*(int *)(iStack_1f8 + 4),auStack_128);
                uStack_1f0 = uStack_1f0 & 0xfffffffe;
              }
              else {
                func_0x009c34c0();
                *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0xb4;
                uStack_1f0 = uStack_1f0 & 0xfffffffe;
              }
              break;
            default:
              cVar2 = func_0x00b26ab0(iVar4);
              if (cVar2 == '\0') {
                iVar4 = *(int *)(iStack_1f4 + 0x68);
                uVar6 = func_0x00af4a90(auStack_1dc,piVar3);
                uStack_1e0 = 5;
                if (*(int *)(iVar4 + 4) == *(int *)(iVar4 + 8)) {
                  func_0x0096a6e0(*(int *)(iVar4 + 4),uVar6);
                }
                else {
                  func_0x009c34c0();
                  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0xb4;
                }
              }
              else {
                iVar4 = *(int *)(iStack_1f4 + 100);
                uVar6 = func_0x00af4a90(auStack_128,piVar3);
                uStack_1e0 = 4;
                if (*(int *)(iVar4 + 4) == *(int *)(iVar4 + 8)) {
                  func_0x0096a6e0(*(int *)(iVar4 + 4),uVar6);
                }
                else {
                  func_0x009c34c0();
                  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0xb4;
                }
              }
              break;
            case 6:
              iStack_1f8 = *(int *)(iStack_1f4 + 0x60);
              uStack_1e0 = 3;
              func_0x009c37e0();
              uStack_1f0 = uStack_1f0 | 4;
              iVar4 = piVar3[6];
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              uVar6 = (*pcVar1)();
              func_0x00af4df0(uVar6,iVar4,auStack_128);
              pcVar1 = *(code **)(*piVar3 + 0x7c);
              _guard_check_icall();
              iVar4 = (*pcVar1)();
              puVar7 = (undefined4 *)(iVar4 + 0x14);
              puVar11 = auStack_70;
              for (iVar8 = 0x1a; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
