  if (param_4 != 0) {
    puVar3 = (uint *)(param_5 + 4);
    do {
      iVar2 = param_3;
      iVar4 = param_8;
      puVar5 = puVar3;
      if (param_3 != 0) {
        do {
          uVar7 = 0;
          puVar6 = puVar5;
          if (param_2 != 0) {
            do {
              uVar1 = func_0x008abcb0();
              *(uint *)(iVar4 + uVar7 * 4) = uVar1 | *puVar6 & 0xff000000;
              uVar7 = uVar7 + 1;
              puVar6 = puVar6 + 2;
            } while (uVar7 < param_2);
          }
          iVar2 = iVar2 + -1;
          iVar4 = iVar4 + param_9;
          puVar5 = (uint *)((int)puVar5 + param_6);
        } while (iVar2 != 0);
      }
      param_8 = param_8 + param_10;
      puVar3 = (uint *)((int)puVar3 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b4d90(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,float *param_8,int param_9,int param_10)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int iStack_4;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        pfVar4 = param_8;
        iVar5 = param_5;
        do {
          if (param_2 != 0) {
            pfVar2 = pfVar4;
            iVar3 = param_2;
            do {
              fVar1 = *(float *)((iVar5 - (int)pfVar4) + (int)pfVar2);
              if (fVar1 <= 0.0) {
                fVar6 = 0.0;
              }
              else {
                fVar6 = 1.0;
                if (fVar1 <= 1.0) {
                  fVar6 = fVar1;
                }
              }
              *pfVar2 = fVar6;
              pfVar2[1] = (float)(*(uint *)((iVar5 - (int)pfVar4) + 4 + (int)pfVar2) & 0xff000000);
              pfVar2 = pfVar2 + 2;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar5 = iVar5 + param_6;
          pfVar4 = (float *)((int)pfVar4 + param_9);
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = (float *)((int)param_8 + param_10);
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b4e60(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  int iStack_4;
  
  auVar4 = _DAT_011a2bf0;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        uVar9 = param_5;
        uVar11 = param_8;
        do {
          uVar8 = 0;
          if (param_2 != 0) {
            if ((7 < param_2) &&
               ((param_2 * 4 + -4 + uVar9 < uVar11 || (uVar11 + (param_2 - 1) * 4 < uVar9)))) {
              puVar5 = (uint *)(uVar11 + 0x10);
              do {
                auVar2 = *(undefined1 (*) [16])(uVar9 + uVar8 * 4);
                uVar8 = uVar8 + 8;
                auVar12 = minps(auVar4,auVar2);
                puVar5[-4] = -(uint)(0.0 < auVar2._0_4_) & auVar12._0_4_;
                puVar5[-3] = -(uint)(0.0 < auVar2._4_4_) & auVar12._4_4_;
                puVar5[-2] = -(uint)(0.0 < auVar2._8_4_) & auVar12._8_4_;
                puVar5[-1] = -(uint)(0.0 < auVar2._12_4_) & auVar12._12_4_;
                auVar2 = *(undefined1 (*) [16])((int)puVar5 + (uVar9 - uVar11));
                auVar12 = minps(auVar4,auVar2);
                *puVar5 = -(uint)(0.0 < auVar2._0_4_) & auVar12._0_4_;
                puVar5[1] = -(uint)(0.0 < auVar2._4_4_) & auVar12._4_4_;
                puVar5[2] = -(uint)(0.0 < auVar2._8_4_) & auVar12._8_4_;
                puVar5[3] = -(uint)(0.0 < auVar2._12_4_) & auVar12._12_4_;
                puVar5 = puVar5 + 8;
              } while (uVar8 < (param_2 & 0xfffffff8));
              if (param_2 <= uVar8) goto LAB_009b5012;
            }
            if (3 < param_2 - uVar8) {
              pfVar6 = (float *)(uVar11 + 4 + uVar8 * 4);
              pfVar7 = (float *)(uVar8 * 4 + 0xc + uVar9);
              iVar10 = ((param_2 - uVar8) - 4 >> 2) + 1;
              uVar8 = uVar8 + iVar10 * 4;
              do {
                fVar1 = pfVar7[-3];
                if (fVar1 <= 0.0) {
                  fVar3 = 0.0;
                }
                else {
                  fVar3 = 1.0;
                  if (fVar1 <= 1.0) {
                    fVar3 = fVar1;
                  }
                }
                pfVar6[-1] = fVar3;
                fVar1 = *(float *)((int)pfVar6 + (uVar9 - uVar11));
                if (fVar1 <= 0.0) {
                  fVar3 = 0.0;
                }
                else {
                  fVar3 = 1.0;
                  if (fVar1 <= 1.0) {
                    fVar3 = fVar1;
                  }
                }
                *pfVar6 = fVar3;
                fVar1 = pfVar7[-1];
                if (fVar1 <= 0.0) {
                  fVar3 = 0.0;
                }
                else {
                  fVar3 = 1.0;
                  if (fVar1 <= 1.0) {
                    fVar3 = fVar1;
                  }
                }
                pfVar6[1] = fVar3;
                fVar1 = *pfVar7;
                if (fVar1 <= 0.0) {
                  fVar3 = 0.0;
                }
                else {
                  fVar3 = 1.0;
                  if (fVar1 <= 1.0) {
                    fVar3 = fVar1;
                  }
                }
                pfVar6[2] = fVar3;
                pfVar7 = pfVar7 + 4;
                pfVar6 = pfVar6 + 4;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            if (uVar8 < param_2) {
              pfVar6 = (float *)(uVar11 + uVar8 * 4);
              iVar10 = param_2 - uVar8;
              do {
                fVar1 = *(float *)((uVar9 - uVar11) + (int)pfVar6);
                if (fVar1 <= 0.0) {
                  fVar3 = 0.0;
                }
                else {
                  fVar3 = 1.0;
                  if (fVar1 <= 1.0) {
                    fVar3 = fVar1;
                  }
                }
                *pfVar6 = fVar3;
                pfVar6 = pfVar6 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
LAB_009b5012:
          uVar11 = uVar11 + param_9;
          uVar9 = uVar9 + param_6;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5060(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iStack_c;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_c = param_3;
        uVar12 = param_8;
        uVar13 = param_5;
        do {
          uVar11 = 0;
          if (param_2 != 0) {
            if ((0xf < param_2) &&
               ((param_2 * 4 + -4 + uVar13 < uVar12 || (uVar12 + (param_2 - 1) * 4 < uVar13)))) {
              puVar9 = (uint *)(uVar13 + 0x30);
              pfVar7 = (float *)(uVar12 + 0x10);
              do {
                uVar3 = puVar9[-0xb];
                uVar4 = puVar9[-10];
                uVar5 = puVar9[-9];
                uVar11 = uVar11 + 0x10;
                pfVar7[-4] = ((float)(puVar9[-0xc] >> 8) * 256.0 + (float)(puVar9[-0xc] & 0xff)) *
                             2.3283064e-10;
                pfVar7[-3] = ((float)(uVar3 >> 8) * 256.0 + (float)(uVar3 & 0xff)) * 2.3283064e-10;
                pfVar7[-2] = ((float)(uVar4 >> 8) * 256.0 + (float)(uVar4 & 0xff)) * 2.3283064e-10;
                pfVar7[-1] = ((float)(uVar5 >> 8) * 256.0 + (float)(uVar5 & 0xff)) * 2.3283064e-10;
                puVar1 = (uint *)((int)pfVar7 + (uVar13 - uVar12));
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                *pfVar7 = ((float)(*puVar1 >> 8) * 256.0 + (float)(*puVar1 & 0xff)) * 2.3283064e-10;
                pfVar7[1] = ((float)(uVar3 >> 8) * 256.0 + (float)(uVar3 & 0xff)) * 2.3283064e-10;
                pfVar7[2] = ((float)(uVar4 >> 8) * 256.0 + (float)(uVar4 & 0xff)) * 2.3283064e-10;
                pfVar7[3] = ((float)(uVar5 >> 8) * 256.0 + (float)(uVar5 & 0xff)) * 2.3283064e-10;
                uVar3 = puVar9[-3];
                uVar4 = puVar9[-2];
                uVar5 = puVar9[-1];
                pfVar7[4] = ((float)(puVar9[-4] >> 8) * 256.0 + (float)(puVar9[-4] & 0xff)) *
                            2.3283064e-10;
                pfVar7[5] = ((float)(uVar3 >> 8) * 256.0 + (float)(uVar3 & 0xff)) * 2.3283064e-10;
                pfVar7[6] = ((float)(uVar4 >> 8) * 256.0 + (float)(uVar4 & 0xff)) * 2.3283064e-10;
                pfVar7[7] = ((float)(uVar5 >> 8) * 256.0 + (float)(uVar5 & 0xff)) * 2.3283064e-10;
                uVar3 = *puVar9;
                uVar4 = puVar9[1];
                uVar5 = puVar9[2];
                uVar6 = puVar9[3];
                puVar9 = puVar9 + 0x10;
                pfVar7[8] = ((float)(uVar3 >> 8) * 256.0 + (float)(uVar3 & 0xff)) * 2.3283064e-10;
                pfVar7[9] = ((float)(uVar4 >> 8) * 256.0 + (float)(uVar4 & 0xff)) * 2.3283064e-10;
                pfVar7[10] = ((float)(uVar5 >> 8) * 256.0 + (float)(uVar5 & 0xff)) * 2.3283064e-10;
                pfVar7[0xb] = ((float)(uVar6 >> 8) * 256.0 + (float)(uVar6 & 0xff)) * 2.3283064e-10;
                pfVar7 = pfVar7 + 0x10;
              } while (uVar11 < (param_2 & 0xfffffff0));
              if (param_2 <= uVar11) goto LAB_009b52df;
            }
            if (3 < param_2 - uVar11) {
              piVar8 = (int *)(uVar11 * 4 + 0xc + uVar13);
              pfVar7 = (float *)(uVar12 + (uVar11 + 1) * 4);
              iVar10 = ((param_2 - uVar11) - 4 >> 2) + 1;
              uVar11 = uVar11 + iVar10 * 4;
              do {
                pfVar7[-1] = (float)((double)piVar8[-3] +
                                    (double)(&DAT_011a2c10)[-(piVar8[-3] >> 0x1f)]) * 2.3283064e-10;
                iVar2 = *(int *)((int)pfVar7 + (uVar13 - uVar12));
                *pfVar7 = (float)((double)iVar2 + (double)(&DAT_011a2c10)[-(iVar2 >> 0x1f)]) *
                          2.3283064e-10;
                pfVar7[1] = (float)((double)piVar8[-1] +
                                   (double)(&DAT_011a2c10)[-(piVar8[-1] >> 0x1f)]) * 2.3283064e-10;
                iVar2 = *piVar8;
                piVar8 = piVar8 + 4;
                pfVar7[2] = (float)((double)iVar2 + (double)(&DAT_011a2c10)[-(iVar2 >> 0x1f)]) *
                            2.3283064e-10;
                pfVar7 = pfVar7 + 4;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            if (uVar11 < param_2) {
              pfVar7 = (float *)(uVar12 + uVar11 * 4);
              iVar10 = param_2 - uVar11;
              do {
                iVar2 = *(int *)((uVar13 - uVar12) + (int)pfVar7);
                *pfVar7 = (float)((double)iVar2 + (double)(&DAT_011a2c10)[-(iVar2 >> 0x1f)]) *
                          2.3283064e-10;
                pfVar7 = pfVar7 + 1;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
LAB_009b52df:
          uVar13 = uVar13 + param_6;
          uVar12 = uVar12 + param_9;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5330(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iStack_8;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        iVar6 = param_8;
        iVar7 = param_5;
        do {
          uVar2 = 0;
          if (3 < param_2) {
            piVar4 = (int *)(iVar7 + 8);
            iVar3 = (param_2 - 4 >> 2) + 1;
            pfVar5 = (float *)(iVar6 + 0x10);
            uVar2 = iVar3 * 4;
            do {
              pfVar5[-4] = (float)((double)piVar4[-2] +
                                  (double)(&DAT_011a2c10)[-(piVar4[-2] >> 0x1f)]) * 2.3283064e-10;
              pfVar5[-2] = (float)((double)piVar4[-1] +
                                  (double)(&DAT_011a2c10)[-(piVar4[-1] >> 0x1f)]) * 2.3283064e-10;
              *pfVar5 = (float)((double)*piVar4 + (double)(&DAT_011a2c10)[-(*piVar4 >> 0x1f)]) *
                        2.3283064e-10;
              piVar1 = piVar4 + 1;
              piVar4 = piVar4 + 4;
              pfVar5[2] = (float)((double)*piVar1 + (double)(&DAT_011a2c10)[-(*piVar1 >> 0x1f)]) *
                          2.3283064e-10;
              pfVar5 = pfVar5 + 8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
            iVar3 = *(int *)(iVar7 + uVar2 * 4);
            *(float *)(iVar6 + uVar2 * 8) =
                 (float)((double)iVar3 + (double)(&DAT_011a2c10)[-(iVar3 >> 0x1f)]) * 2.3283064e-10;
          }
          iVar7 = iVar7 + param_6;
          iVar6 = iVar6 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b54d0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iStack_8;
  
  if (param_4 != 0) {
    puVar3 = (undefined2 *)(param_8 + 4);
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        iVar5 = param_5;
        puVar6 = puVar3;
        do {
          uVar4 = 0;
          puVar2 = puVar6;
          if (param_2 != 0) {
            do {
              puVar2[-2] = *(undefined2 *)(iVar5 + uVar4 * 2);
              puVar2[-1] = *(undefined2 *)(iVar5 + uVar4 * 2);
              iVar1 = uVar4 * 2;
              uVar4 = uVar4 + 1;
              *puVar2 = *(undefined2 *)(iVar5 + iVar1);
              puVar2[1] = 0x3c00;
              puVar2 = puVar2 + 4;
            } while (uVar4 < param_2);
          }
          iVar5 = iVar5 + param_6;
          puVar6 = (undefined2 *)((int)puVar6 + param_9);
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_5 = param_5 + param_7;
      puVar3 = (undefined2 *)((int)puVar3 + param_10);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5590(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    puVar2 = (undefined4 *)(param_8 + 8);
    do {
      iVar5 = param_3;
      iVar6 = param_5;
      puVar7 = puVar2;
      if (param_3 != 0) {
        do {
          uVar4 = 0;
          puVar3 = puVar7;
          if (param_2 != 0) {
            do {
              puVar3[-2] = *(undefined4 *)(iVar6 + uVar4 * 4);
              puVar3[-1] = *(undefined4 *)(iVar6 + uVar4 * 4);
              iVar1 = uVar4 * 4;
              uVar4 = uVar4 + 1;
              *puVar3 = *(undefined4 *)(iVar6 + iVar1);
              puVar3[1] = 0x3f800000;
              puVar3 = puVar3 + 4;
            } while (uVar4 < param_2);
          }
          iVar5 = iVar5 + -1;
          iVar6 = iVar6 + param_6;
          puVar7 = (undefined4 *)((int)puVar7 + param_9);
        } while (iVar5 != 0);
      }
      param_5 = param_5 + param_7;
      puVar2 = (undefined4 *)((int)puVar2 + param_10);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5630(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_8 + 2);
    do {
      puVar5 = puVar3;
      iVar6 = param_3;
      iVar7 = param_5;
      if (param_3 != 0) {
        do {
          uVar4 = 0;
          puVar2 = puVar5;
          if (param_2 != 0) {
            do {
              uVar1 = *(undefined1 *)(iVar7 + uVar4);
              uVar4 = uVar4 + 1;
              puVar2[-2] = uVar1;
              puVar2[-1] = uVar1;
              *puVar2 = uVar1;
              puVar2[1] = 0xff;
              puVar2 = puVar2 + 4;
            } while (uVar4 < param_2);
          }
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + param_9;
          iVar7 = iVar7 + param_6;
        } while (iVar6 != 0);
      }
      param_5 = param_5 + param_7;
      puVar3 = puVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b56c0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  
  if (param_4 != 0) {
    puVar3 = (undefined2 *)(param_8 + 4);
    do {
      iVar5 = param_3;
      iVar6 = param_5;
      puVar7 = puVar3;
      if (param_3 != 0) {
        do {
          uVar4 = 0;
          puVar2 = puVar7;
          if (param_2 != 0) {
            do {
              puVar2[-2] = *(undefined2 *)(iVar6 + uVar4 * 4);
              puVar2[-1] = *(undefined2 *)(iVar6 + uVar4 * 4);
              *puVar2 = *(undefined2 *)(iVar6 + uVar4 * 4);
              iVar1 = uVar4 * 4;
              uVar4 = uVar4 + 1;
              puVar2[1] = *(undefined2 *)(iVar6 + 2 + iVar1);
              puVar2 = puVar2 + 4;
            } while (uVar4 < param_2);
          }
          iVar5 = iVar5 + -1;
          iVar6 = iVar6 + param_6;
          puVar7 = (undefined2 *)((int)puVar7 + param_9);
        } while (iVar5 != 0);
      }
      param_5 = param_5 + param_7;
      puVar3 = (undefined2 *)((int)puVar3 + param_10);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5770(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    puVar2 = (undefined4 *)(param_8 + 8);
    do {
      iVar5 = param_3;
      iVar6 = param_5;
      puVar7 = puVar2;
      if (param_3 != 0) {
        do {
          uVar3 = 0;
          puVar4 = puVar7;
          if (param_2 != 0) {
            do {
              puVar4[-2] = *(undefined4 *)(iVar6 + uVar3 * 8);
              puVar4[-1] = *(undefined4 *)(iVar6 + uVar3 * 8);
              *puVar4 = *(undefined4 *)(iVar6 + uVar3 * 8);
              iVar1 = uVar3 * 8;
              uVar3 = uVar3 + 1;
              puVar4[1] = *(undefined4 *)(iVar6 + 4 + iVar1);
              puVar4 = puVar4 + 4;
            } while (uVar3 < param_2);
          }
          iVar5 = iVar5 + -1;
          iVar6 = iVar6 + param_6;
          puVar7 = (undefined4 *)((int)puVar7 + param_9);
        } while (iVar5 != 0);
      }
      param_5 = param_5 + param_7;
      puVar2 = (undefined4 *)((int)puVar2 + param_10);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5810(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_8 + 2);
    do {
      iVar5 = param_3;
      iVar6 = param_5;
      puVar7 = puVar3;
      if (param_3 != 0) {
        do {
          uVar4 = 0;
          puVar2 = puVar7;
          if (param_2 != 0) {
            do {
              puVar2[-2] = *(undefined1 *)(iVar6 + uVar4 * 2);
              puVar2[-1] = *(undefined1 *)(iVar6 + uVar4 * 2);
              *puVar2 = *(undefined1 *)(iVar6 + uVar4 * 2);
              iVar1 = uVar4 * 2;
              uVar4 = uVar4 + 1;
              puVar2[1] = *(undefined1 *)(iVar6 + 1 + iVar1);
              puVar2 = puVar2 + 4;
            } while (uVar4 < param_2);
          }
          iVar5 = iVar5 + -1;
          iVar6 = iVar6 + param_6;
          puVar7 = puVar7 + param_9;
        } while (iVar5 != 0);
      }
      param_5 = param_5 + param_7;
      puVar3 = puVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b58c0(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iStack_8;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        uVar4 = param_5;
        uVar6 = param_8;
        do {
          uVar2 = 0;
          if (param_2 != 0) {
            if ((1 < param_2) &&
               ((uVar4 + (param_2 - 1) * 4 < uVar6 || (uVar6 + (param_2 - 1) * 2 < uVar4)))) {
              if (param_2 < 0x10) {
LAB_009b59cc:
                do {
                  uVar1 = *(undefined8 *)(uVar4 + uVar2 * 4);
                  auVar11._0_4_ = (uint)uVar1 >> 0x10;
                  auVar11._4_4_ = (uint)((ulonglong)uVar1 >> 0x30);
                  auVar11._8_8_ = 0;
                  auVar7 = pshufhw(auVar11,auVar11,0xd8);
                  auVar7 = pshuflw(auVar7,auVar7,0xd8);
                  *(int *)(uVar6 + uVar2 * 2) = auVar7._0_4_;
                  uVar2 = uVar2 + 2;
                } while (uVar2 < (param_2 & 0xfffffffe));
              }
              else {
                puVar3 = (undefined8 *)(uVar6 + 0x10);
                puVar5 = (uint *)(uVar4 + 0x20);
                do {
                  uVar2 = uVar2 + 0x10;
                  auVar7._0_4_ = puVar5[-8] >> 0x10;
                  auVar7._4_4_ = puVar5[-7] >> 0x10;
                  auVar7._8_4_ = puVar5[-6] >> 0x10;
                  auVar7._12_4_ = puVar5[-5] >> 0x10;
                  auVar7 = pshufhw(auVar7,auVar7,0xd8);
                  auVar7 = pshuflw(auVar7,auVar7,0xd8);
                  puVar3[-2] = CONCAT44(auVar7._8_4_,auVar7._0_4_);
                  auVar8._0_4_ = puVar5[-4] >> 0x10;
                  auVar8._4_4_ = puVar5[-3] >> 0x10;
                  auVar8._8_4_ = puVar5[-2] >> 0x10;
                  auVar8._12_4_ = puVar5[-1] >> 0x10;
                  auVar7 = pshufhw(auVar8,auVar8,0xd8);
                  auVar7 = pshuflw(auVar7,auVar7,0xd8);
                  puVar3[-1] = CONCAT44(auVar7._8_4_,auVar7._0_4_);
                  auVar9._0_4_ = *puVar5 >> 0x10;
                  auVar9._4_4_ = puVar5[1] >> 0x10;
                  auVar9._8_4_ = puVar5[2] >> 0x10;
                  auVar9._12_4_ = puVar5[3] >> 0x10;
                  auVar7 = pshufhw(auVar9,auVar9,0xd8);
                  auVar7 = pshuflw(auVar7,auVar7,0xd8);
                  *puVar3 = CONCAT44(auVar7._8_4_,auVar7._0_4_);
                  auVar10._0_4_ = puVar5[4] >> 0x10;
                  auVar10._4_4_ = puVar5[5] >> 0x10;
                  auVar10._8_4_ = puVar5[6] >> 0x10;
                  auVar10._12_4_ = puVar5[7] >> 0x10;
                  auVar7 = pshufhw(auVar10,auVar10,0xd8);
                  auVar7 = pshuflw(auVar7,auVar7,0xd8);
                  *(int *)(puVar3 + 1) = auVar7._0_4_;
                  *(int *)((int)puVar3 + 0xc) = auVar7._8_4_;
                  puVar3 = puVar3 + 4;
                  puVar5 = puVar5 + 0x10;
                } while (uVar2 < param_2 - (param_2 & 0xf));
                if (1 < (param_2 & 0xf)) goto LAB_009b59cc;
              }
              if (param_2 <= uVar2) goto LAB_009b5a14;
            }
            do {
              *(undefined2 *)(uVar6 + uVar2 * 2) = *(undefined2 *)(uVar4 + 2 + uVar2 * 4);
              uVar2 = uVar2 + 1;
            } while (uVar2 < param_2);
          }
LAB_009b5a14:
          uVar4 = uVar4 + param_6;
          uVar6 = uVar6 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5a60(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iStack_c;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_c = param_3;
        uVar10 = param_5;
        uVar11 = param_8;
        do {
          uVar6 = 0;
          if (param_2 != 0) {
            if ((1 < param_2) &&
               ((param_2 * 4 + -4 + uVar10 < uVar11 || (uVar11 + (param_2 - 1) * 4 < uVar10)))) {
              if (param_2 < 0x10) {
LAB_009b5b43:
                puVar7 = (uint *)(uVar11 + uVar6 * 4);
                do {
                  uVar2 = *(undefined8 *)((uVar10 - uVar11) + (int)puVar7);
                  uVar6 = uVar6 + 2;
                  *puVar7 = (uint)uVar2 >> 8;
                  puVar7[1] = (uint)((ulonglong)uVar2 >> 0x28);
                  puVar7 = puVar7 + 2;
                } while (uVar6 < (param_2 & 0xfffffffe));
              }
              else {
                puVar7 = (uint *)(uVar11 + 0x10);
                puVar8 = (uint *)(uVar10 + 0x30);
                do {
                  uVar3 = puVar8[-0xb];
                  uVar4 = puVar8[-10];
                  uVar5 = puVar8[-9];
                  uVar6 = uVar6 + 0x10;
                  puVar7[-4] = puVar8[-0xc] >> 8;
                  puVar7[-3] = uVar3 >> 8;
                  puVar7[-2] = uVar4 >> 8;
                  puVar7[-1] = uVar5 >> 8;
                  puVar1 = (uint *)((int)puVar7 + (uVar10 - uVar11));
                  uVar3 = puVar1[1];
                  uVar4 = puVar1[2];
                  uVar5 = puVar1[3];
                  *puVar7 = *puVar1 >> 8;
                  puVar7[1] = uVar3 >> 8;
                  puVar7[2] = uVar4 >> 8;
                  puVar7[3] = uVar5 >> 8;
                  uVar3 = puVar8[-3];
                  uVar4 = puVar8[-2];
                  uVar5 = puVar8[-1];
                  puVar7[4] = puVar8[-4] >> 8;
                  puVar7[5] = uVar3 >> 8;
                  puVar7[6] = uVar4 >> 8;
                  puVar7[7] = uVar5 >> 8;
                  uVar3 = puVar8[1];
                  uVar4 = puVar8[2];
                  uVar5 = puVar8[3];
                  puVar7[8] = *puVar8 >> 8;
                  puVar7[9] = uVar3 >> 8;
                  puVar7[10] = uVar4 >> 8;
                  puVar7[0xb] = uVar5 >> 8;
                  puVar7 = puVar7 + 0x10;
                  puVar8 = puVar8 + 0x10;
                } while (uVar6 < param_2 - (param_2 & 0xf));
                if (1 < (param_2 & 0xf)) goto LAB_009b5b43;
              }
              if (param_2 <= uVar6) goto LAB_009b5b91;
            }
            iVar9 = param_2 - uVar6;
            puVar7 = (uint *)(uVar11 + uVar6 * 4);
            do {
              *puVar7 = *(uint *)((uVar10 - uVar11) + (int)puVar7) >> 8;
              iVar9 = iVar9 + -1;
              puVar7 = puVar7 + 1;
            } while (iVar9 != 0);
          }
LAB_009b5b91:
          uVar10 = uVar10 + param_6;
          uVar11 = uVar11 + param_9;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5be0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  ushort uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iStack_8;
  
  if (param_4 != 0) {
    pbVar4 = (byte *)(param_8 + 2);
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        pbVar6 = pbVar4;
        iVar8 = param_5;
        do {
          uVar7 = 0;
          pbVar3 = pbVar6;
          if (param_2 != 0) {
            do {
              uVar1 = *(ushort *)(iVar8 + uVar7 * 2);
              pbVar3[1] = 0xff;
              uVar7 = uVar7 + 1;
              pbVar3[-2] = (byte)uVar1 >> 2 & 7 | (byte)uVar1 << 3;
              bVar2 = (byte)(uVar1 >> 8);
              bVar5 = (byte)(uVar1 >> 3);
              pbVar3[-1] = (bVar2 >> 1 ^ bVar5) & 3 ^ bVar5;
              *pbVar3 = bVar2 & 0xf8 | bVar2 >> 5;
              pbVar3 = pbVar3 + 4;
            } while (uVar7 < param_2);
          }
          iVar8 = iVar8 + param_6;
          pbVar6 = pbVar6 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_5 = param_5 + param_7;
      pbVar4 = pbVar4 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5cc0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iStack_8;
  
  if (param_4 != 0) {
    pbVar3 = (byte *)(param_8 + 2);
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        pbVar6 = pbVar3;
        iVar8 = param_5;
        do {
          uVar7 = 0;
          pbVar2 = pbVar6;
          if (param_2 != 0) {
            do {
              uVar1 = *(ushort *)(iVar8 + uVar7 * 2);
              pbVar2[1] = 0xff;
              bVar4 = (byte)(uVar1 >> 8);
              uVar7 = uVar7 + 1;
              pbVar2[-2] = bVar4 & 0xf8 | bVar4 >> 5;
              bVar5 = (byte)(uVar1 >> 3);
              pbVar2[-1] = (bVar4 >> 1 ^ bVar5) & 3 ^ bVar5;
              *pbVar2 = (byte)uVar1 >> 2 & 7 | (byte)uVar1 << 3;
              pbVar2 = pbVar2 + 4;
            } while (uVar7 < param_2);
          }
          iVar8 = iVar8 + param_6;
          pbVar6 = pbVar6 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_5 = param_5 + param_7;
      pbVar3 = pbVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5da0(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_8 + 2);
    do {
      puVar5 = puVar3;
      iVar6 = param_3;
      iVar7 = param_5;
      if (param_3 != 0) {
        do {
          uVar4 = 0;
          puVar2 = puVar5;
          if (param_2 != 0) {
            do {
              *(undefined2 *)(puVar2 + -2) = 0;
              puVar1 = (undefined1 *)(iVar7 + uVar4);
              uVar4 = uVar4 + 1;
              *puVar2 = *puVar1;
              puVar2[1] = 0xff;
              puVar2 = puVar2 + 4;
            } while (uVar4 < param_2);
          }
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + param_9;
          iVar7 = iVar7 + param_6;
        } while (iVar6 != 0);
      }
      param_5 = param_5 + param_7;
      puVar3 = puVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b5e40(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_8 + 2);
    do {
      puVar5 = puVar3;
      iVar6 = param_3;
      iVar7 = param_5;
      if (param_3 != 0) {
        do {
          uVar4 = 0;
          puVar2 = puVar5;
          if (param_2 != 0) {
            do {
              puVar2[-2] = 0;
              puVar2[-1] = *(undefined1 *)(iVar7 + 1 + uVar4 * 2);
              iVar1 = uVar4 * 2;
              uVar4 = uVar4 + 1;
              *puVar2 = *(undefined1 *)(iVar7 + iVar1);
              puVar2[1] = 0xff;
              puVar2 = puVar2 + 4;
            } while (uVar4 < param_2);
          }
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + param_9;
          iVar7 = iVar7 + param_6;
        } while (iVar6 != 0);
      }
      param_5 = param_5 + param_7;
      puVar3 = puVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b5ee0(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar23;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iStack_4;
  
  auVar6 = _DAT_00fb6520;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        uVar8 = param_8;
        uVar9 = param_5;
        do {
          uVar7 = 0;
          if (param_2 != 0) {
            if ((7 < param_2) &&
               ((uVar9 + (param_2 - 1) * 4 < uVar8 || (param_2 * 2 + -2 + uVar8 < uVar9)))) {
              do {
                puVar1 = (uint *)(uVar9 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar27._0_4_ = uVar2 >> 5;
                auVar27._4_4_ = uVar3 >> 5;
                auVar27._8_4_ = uVar4 >> 5;
                auVar27._12_4_ = uVar5 >> 5;
                auVar11 = pshufhw(auVar27,auVar27,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                uVar10 = auVar6._0_4_;
                auVar24._0_4_ = auVar11._0_4_ & uVar10;
                uVar23 = auVar6._4_4_;
                auVar24._4_4_ = auVar11._8_4_ & uVar23;
                auVar24._8_8_ = 0;
                auVar12._0_4_ = uVar2 >> 0x1f;
                auVar12._4_4_ = uVar3 >> 0x1f;
                auVar12._8_4_ = uVar4 >> 0x1f;
                auVar12._12_4_ = uVar5 >> 0x1f;
                auVar11 = pshufhw(auVar12,auVar12,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar13._0_4_ = auVar11._0_4_;
                auVar13._12_4_ = auVar11._12_4_;
                auVar13._4_4_ = auVar11._8_4_;
                auVar13._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar13,5);
                auVar14._0_4_ = uVar2 >> 0xf;
                auVar14._4_4_ = uVar3 >> 0xf;
                auVar14._8_4_ = uVar4 >> 0xf;
                auVar14._12_4_ = uVar5 >> 0xf;
                auVar25 = psllw(auVar24 | auVar11,5);
                auVar11 = pshufhw(auVar14,auVar14,0xd8);
                auVar15 = pshuflw(auVar11,auVar11,0xd8);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = auVar6._0_8_;
                auVar11._4_4_ = auVar15._8_4_ & uVar23;
                auVar11._0_4_ = auVar15._0_4_ & uVar10;
                auVar11._8_8_ = 0;
                auVar21._4_4_ = uVar3 >> 0x19;
                auVar21._0_4_ = uVar2 >> 0x19;
                auVar21._8_4_ = uVar4 >> 0x19;
                auVar21._12_4_ = uVar5 >> 0x19;
                auVar15 = pshufhw(auVar16,auVar21,0xd8);
                auVar15 = pshuflw(auVar15,auVar15,0xd8);
                auVar11 = psllw(auVar25 | auVar11,5);
                *(ulonglong *)(uVar8 + uVar7 * 2) =
                     auVar11._0_8_ | CONCAT44(auVar15._8_4_ & uVar23,auVar15._0_4_ & uVar10);
                puVar1 = (uint *)(uVar9 + 0x10 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar17._0_4_ = uVar2 >> 5;
                auVar17._4_4_ = uVar3 >> 5;
                auVar17._8_4_ = uVar4 >> 5;
                auVar17._12_4_ = uVar5 >> 5;
                auVar11 = pshufhw(auVar17,auVar17,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar26._0_4_ = auVar11._0_4_ & uVar10;
                auVar26._4_4_ = auVar11._8_4_ & uVar23;
                auVar26._8_8_ = 0;
                auVar18._0_4_ = uVar2 >> 0x1f;
                auVar18._4_4_ = uVar3 >> 0x1f;
                auVar18._8_4_ = uVar4 >> 0x1f;
                auVar18._12_4_ = uVar5 >> 0x1f;
                auVar11 = pshufhw(auVar18,auVar18,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar19._0_4_ = auVar11._0_4_;
                auVar19._12_4_ = auVar11._12_4_;
                auVar19._4_4_ = auVar11._8_4_;
                auVar19._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar19,5);
                auVar20._0_4_ = uVar2 >> 0xf;
                auVar20._4_4_ = uVar3 >> 0xf;
                auVar20._8_4_ = uVar4 >> 0xf;
                auVar20._12_4_ = uVar5 >> 0xf;
                auVar15 = pshufhw(auVar20,auVar20,0xd8);
                auVar21 = pshuflw(auVar15,auVar15,0xd8);
                auVar22._8_8_ = 0;
                auVar22._0_8_ = auVar6._0_8_;
                auVar27 = psllw(auVar26 | auVar11,5);
                auVar25._4_4_ = uVar3 >> 0x19;
                auVar25._0_4_ = uVar2 >> 0x19;
                auVar25._8_4_ = uVar4 >> 0x19;
                auVar25._12_4_ = uVar5 >> 0x19;
                auVar11 = pshufhw(auVar22,auVar25,0xd8);
                auVar15._4_4_ = auVar21._8_4_ & uVar23;
                auVar15._0_4_ = auVar21._0_4_ & uVar10;
                auVar15._8_8_ = 0;
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar15 = psllw(auVar27 | auVar15,5);
                *(ulonglong *)(uVar8 + 8 + uVar7 * 2) =
                     auVar15._0_8_ | CONCAT44(auVar11._8_4_ & uVar23,auVar11._0_4_ & uVar10);
                uVar7 = uVar7 + 8;
              } while (uVar7 < (param_2 & 0xfffffff8));
              if (param_2 <= uVar7) goto LAB_009b60c0;
            }
            do {
              uVar2 = *(uint *)(uVar9 + uVar7 * 4);
              *(ushort *)(uVar8 + uVar7 * 2) =
                   (ushort)(((uVar2 >> 5 & 0x1f | (uVar2 >> 0x1f) << 5) << 5 | uVar2 >> 0xf & 0x1f)
                           << 5) | (ushort)(uVar2 >> 0x19) & 0x1f;
              uVar7 = uVar7 + 1;
            } while (uVar7 < param_2);
          }
LAB_009b60c0:
          uVar9 = uVar9 + param_6;
          uVar8 = uVar8 + param_9;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b6110(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iStack_8;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        uVar9 = param_5;
        uVar10 = param_8;
        do {
          uVar6 = 0;
          if (param_2 != 0) {
            if ((0xf < param_2) &&
               ((uVar9 + (param_2 - 1) * 4 < uVar10 || (uVar10 + (param_2 - 1) * 4 < uVar9)))) {
              puVar5 = (uint *)(uVar10 + 0x10);
              puVar7 = (uint *)(uVar9 + 0x30);
              do {
                uVar2 = puVar7[-0xb];
                uVar3 = puVar7[-10];
                uVar4 = puVar7[-9];
                uVar6 = uVar6 + 0x10;
                puVar5[-4] = puVar7[-0xc] | 0xc0000000;
                puVar5[-3] = uVar2 | 0xc0000000;
                puVar5[-2] = uVar3 | 0xc0000000;
                puVar5[-1] = uVar4 | 0xc0000000;
                puVar1 = (uint *)((int)puVar5 + (uVar9 - uVar10));
                uVar2 = puVar1[1];
                uVar3 = puVar1[2];
                uVar4 = puVar1[3];
                *puVar5 = *puVar1 | 0xc0000000;
                puVar5[1] = uVar2 | 0xc0000000;
                puVar5[2] = uVar3 | 0xc0000000;
                puVar5[3] = uVar4 | 0xc0000000;
                uVar2 = puVar7[-3];
                uVar3 = puVar7[-2];
                uVar4 = puVar7[-1];
                puVar5[4] = puVar7[-4] | 0xc0000000;
                puVar5[5] = uVar2 | 0xc0000000;
                puVar5[6] = uVar3 | 0xc0000000;
                puVar5[7] = uVar4 | 0xc0000000;
                uVar2 = puVar7[1];
                uVar3 = puVar7[2];
                uVar4 = puVar7[3];
                puVar5[8] = *puVar7 | 0xc0000000;
                puVar5[9] = uVar2 | 0xc0000000;
                puVar5[10] = uVar3 | 0xc0000000;
                puVar5[0xb] = uVar4 | 0xc0000000;
                puVar5 = puVar5 + 0x10;
                puVar7 = puVar7 + 0x10;
              } while (uVar6 < (param_2 & 0xfffffff0));
              if (param_2 <= uVar6) goto LAB_009b61f4;
            }
            iVar8 = param_2 - uVar6;
            puVar5 = (uint *)(uVar10 + uVar6 * 4);
            do {
              *puVar5 = *(uint *)((uVar9 - uVar10) + (int)puVar5) | 0xc0000000;
              iVar8 = iVar8 + -1;
              puVar5 = puVar5 + 1;
            } while (iVar8 != 0);
          }
LAB_009b61f4:
          uVar9 = uVar9 + param_6;
          uVar10 = uVar10 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b6240(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar24;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iStack_4;
  
  auVar7 = _DAT_00fb6520;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        uVar9 = param_8;
        uVar10 = param_5;
        do {
          uVar8 = 0;
          if (param_2 != 0) {
            if ((7 < param_2) &&
               ((uVar10 + (param_2 - 1) * 4 < uVar9 || (param_2 * 2 + -2 + uVar9 < uVar10)))) {
              do {
                puVar1 = (uint *)(uVar10 + uVar8 * 4);
                uVar2 = *puVar1;
                uVar4 = puVar1[1];
                uVar5 = puVar1[2];
                uVar6 = puVar1[3];
                auVar28._0_4_ = uVar2 >> 0xf;
                auVar28._4_4_ = uVar4 >> 0xf;
                auVar28._8_4_ = uVar5 >> 0xf;
                auVar28._12_4_ = uVar6 >> 0xf;
                auVar12 = pshufhw(auVar28,auVar28,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                uVar11 = auVar7._0_4_;
                auVar25._0_4_ = auVar12._0_4_ & uVar11;
                uVar24 = auVar7._4_4_;
                auVar25._4_4_ = auVar12._8_4_ & uVar24;
                auVar25._8_8_ = 0;
                auVar13._0_4_ = uVar2 >> 5;
                auVar13._4_4_ = uVar4 >> 5;
                auVar13._8_4_ = uVar5 >> 5;
                auVar13._12_4_ = uVar6 >> 5;
                auVar12 = pshufhw(auVar13,auVar13,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar14._0_4_ = auVar12._0_4_;
                auVar14._12_4_ = auVar12._12_4_;
                auVar14._4_4_ = auVar12._8_4_;
                auVar14._8_4_ = auVar12._4_4_;
                auVar12 = psllw(auVar14,5);
                auVar15._0_4_ = uVar2 >> 0x19;
                auVar15._4_4_ = uVar4 >> 0x19;
                auVar15._8_4_ = uVar5 >> 0x19;
                auVar15._12_4_ = uVar6 >> 0x19;
                auVar26 = psllw(auVar25 | auVar12,5);
                auVar12 = pshufhw(auVar15,auVar15,0xd8);
                auVar16 = pshuflw(auVar12,auVar12,0xd8);
                auVar17._8_8_ = 0;
                auVar17._0_8_ = auVar7._0_8_;
                auVar12._4_4_ = auVar16._8_4_ & uVar24;
                auVar12._0_4_ = auVar16._0_4_ & uVar11;
                auVar12._8_8_ = 0;
                auVar22._4_4_ = uVar4 >> 0x1f;
                auVar22._0_4_ = uVar2 >> 0x1f;
                auVar22._8_4_ = uVar5 >> 0x1f;
                auVar22._12_4_ = uVar6 >> 0x1f;
                auVar16 = pshufhw(auVar17,auVar22,0xd8);
                auVar16 = pshuflw(auVar16,auVar16,0xd8);
                auVar12 = psllw(auVar26 | auVar12,1);
                *(ulonglong *)(uVar9 + uVar8 * 2) =
                     auVar12._0_8_ | CONCAT44(auVar16._8_4_,auVar16._0_4_) & 0x1000100010001;
                puVar1 = (uint *)(uVar10 + 0x10 + uVar8 * 4);
                uVar2 = *puVar1;
                uVar4 = puVar1[1];
                uVar5 = puVar1[2];
                uVar6 = puVar1[3];
                auVar18._0_4_ = uVar2 >> 0xf;
                auVar18._4_4_ = uVar4 >> 0xf;
                auVar18._8_4_ = uVar5 >> 0xf;
                auVar18._12_4_ = uVar6 >> 0xf;
                auVar12 = pshufhw(auVar18,auVar18,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar27._0_4_ = auVar12._0_4_ & uVar11;
                auVar27._4_4_ = auVar12._8_4_ & uVar24;
                auVar27._8_8_ = 0;
                auVar19._0_4_ = uVar2 >> 5;
                auVar19._4_4_ = uVar4 >> 5;
                auVar19._8_4_ = uVar5 >> 5;
                auVar19._12_4_ = uVar6 >> 5;
                auVar12 = pshufhw(auVar19,auVar19,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar20._0_4_ = auVar12._0_4_;
                auVar20._12_4_ = auVar12._12_4_;
                auVar20._4_4_ = auVar12._8_4_;
                auVar20._8_4_ = auVar12._4_4_;
                auVar12 = psllw(auVar20,5);
                auVar21._0_4_ = uVar2 >> 0x19;
                auVar21._4_4_ = uVar4 >> 0x19;
                auVar21._8_4_ = uVar5 >> 0x19;
                auVar21._12_4_ = uVar6 >> 0x19;
                auVar16 = pshufhw(auVar21,auVar21,0xd8);
                auVar22 = pshuflw(auVar16,auVar16,0xd8);
                auVar23._8_8_ = 0;
                auVar23._0_8_ = auVar7._0_8_;
                auVar28 = psllw(auVar27 | auVar12,5);
                auVar26._4_4_ = uVar4 >> 0x1f;
                auVar26._0_4_ = uVar2 >> 0x1f;
                auVar26._8_4_ = uVar5 >> 0x1f;
                auVar26._12_4_ = uVar6 >> 0x1f;
                auVar12 = pshufhw(auVar23,auVar26,0xd8);
                auVar16._4_4_ = auVar22._8_4_ & uVar24;
                auVar16._0_4_ = auVar22._0_4_ & uVar11;
                auVar16._8_8_ = 0;
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar16 = psllw(auVar28 | auVar16,1);
                *(ulonglong *)(uVar9 + 8 + uVar8 * 2) =
                     auVar16._0_8_ | CONCAT44(auVar12._8_4_,auVar12._0_4_) & 0x1000100010001;
                uVar8 = uVar8 + 8;
              } while (uVar8 < (param_2 & 0xfffffff8));
              if (param_2 <= uVar8) goto LAB_009b6419;
            }
            do {
              uVar2 = *(uint *)(uVar10 + uVar8 * 4);
              uVar3 = (ushort)(uVar2 >> 0x10);
              *(ushort *)(uVar9 + uVar8 * 2) =
                   ((ushort)((uVar2 >> 0xf & 0x1f | uVar2 & 0xffffffe0) << 5) | uVar3 >> 9 & 0x1f) *
                   2 | uVar3 >> 0xf;
              uVar8 = uVar8 + 1;
            } while (uVar8 < param_2);
          }
LAB_009b6419:
          uVar10 = uVar10 + param_6;
          uVar9 = uVar9 + param_9;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b6470(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iStack_8;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_8 + 2);
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        puVar4 = puVar3;
        iVar6 = param_5;
        do {
          uVar5 = 0;
          puVar2 = puVar4;
          if (param_2 != 0) {
            do {
              uVar1 = *(uint *)(iVar6 + uVar5 * 4);
              uVar5 = uVar5 + 1;
              puVar2[-2] = (char)(uVar1 >> 2);
              puVar2[-1] = (char)(uVar1 >> 0xc);
              *puVar2 = (char)(uVar1 >> 0x16);
              puVar2[1] = (byte)(uVar1 >> 0x1e) * 'U';
              puVar2 = puVar2 + 4;
            } while (uVar5 < param_2);
          }
          iVar6 = iVar6 + param_6;
          puVar4 = puVar4 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_5 = param_5 + param_7;
      puVar3 = puVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b6540(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  
  if (param_4 != 0) {
    puVar4 = (undefined2 *)(param_5 + 4);
    do {
      iVar2 = param_8;
      puVar5 = puVar4;
      iVar8 = param_3;
      if (param_3 != 0) {
        do {
          uVar9 = 0;
          puVar7 = puVar5;
          if (param_2 != 0) {
            do {
              fVar12 = (float10)func_0x009db200(puVar7[-2]);
              fVar1 = (float)fVar12;
              fVar6 = ABS(fVar1);
              if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
                if (((uint)fVar1 & 0x7fffff) == 0) {
                  uVar11 = 0x7c0;
                  if ((int)fVar1 < 0) {
                    uVar11 = 0;
                  }
                }
                else {
                  uVar11 = ((((uint)fVar6 >> 6 | (uint)fVar6) >> 5 | (uint)fVar6) >> 6 | (uint)fVar6
                           ) & 0x3f | 0x7c0;
                }
              }
              else if ((int)fVar1 < 0) {
                uVar11 = 0;
              }
              else if ((uint)fVar6 < 0x477e0001) {
                if ((uint)fVar6 < 0x35000080) {
                  uVar11 = 0;
                }
                else {
                  if ((uint)fVar6 < 0x38800000) {
                    uVar11 = ((uint)fVar1 & 0x7fffff | 0x800000) >>
                             (0x71U - (char)((uint)fVar6 >> 0x17) & 0x1f);
                  }
                  else {
                    uVar11 = (int)fVar6 + 0xc8000000;
                  }
                  uVar11 = uVar11 + 0xffff + (uVar11 >> 0x11 & 1) >> 0x11 & 0x7ff;
                }
              }
              else {
                uVar11 = 0x7bf;
              }
              fVar12 = (float10)func_0x009db200(puVar7[-1]);
              fVar1 = (float)fVar12;
              fVar6 = ABS(fVar1);
              if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
                if (((uint)fVar1 & 0x7fffff) == 0) {
                  uVar10 = 0x7c0;
                  if ((int)fVar1 < 0) {
                    uVar10 = 0;
                  }
                }
                else {
                  uVar10 = ((((uint)fVar6 >> 6 | (uint)fVar6) >> 5 | (uint)fVar6) >> 6 | (uint)fVar6
                           ) & 0x3f | 0x7c0;
                }
              }
              else if ((int)fVar1 < 0) {
                uVar10 = 0;
              }
              else if ((uint)fVar6 < 0x477e0001) {
                if ((uint)fVar6 < 0x35000080) {
                  uVar10 = 0;
                }
                else {
                  if ((uint)fVar6 < 0x38800000) {
                    uVar10 = ((uint)fVar1 & 0x7fffff | 0x800000) >>
                             (0x71U - (char)((uint)fVar6 >> 0x17) & 0x1f);
                  }
                  else {
                    uVar10 = (int)fVar6 + 0xc8000000;
                  }
                  uVar10 = uVar10 + 0xffff + (uVar10 >> 0x11 & 1) >> 0x11 & 0x7ff;
                }
              }
              else {
                uVar10 = 0x7bf;
              }
              fVar12 = (float10)func_0x009db200(*puVar7);
              fVar1 = (float)fVar12;
              fVar6 = ABS(fVar1);
              if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
                if (((uint)fVar1 & 0x7fffff) == 0) {
                  uVar3 = 0x3e0;
                  if ((int)fVar1 < 0) {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = ((((uint)fVar6 | 0xf800000) >> 5 | (uint)fVar6) >> 10 | (uint)fVar6) >> 3
                          | (uint)fVar6;
                }
              }
              else if ((int)fVar1 < 0) {
                uVar3 = 0;
              }
              else if ((uint)fVar6 < 0x477c0001) {
                if ((uint)fVar6 < 0x35800040) {
                  uVar3 = 0;
                }
                else {
                  if ((uint)fVar6 < 0x38800000) {
                    uVar3 = ((uint)fVar1 & 0x7fffff | 0x800000) >>
                            (0x71U - (char)((uint)fVar6 >> 0x17) & 0x1f);
                  }
                  else {
                    uVar3 = (int)fVar6 + 0xc8000000;
                  }
                  uVar3 = (uVar3 >> 0x12 & 1) + 0x1ffff + uVar3 >> 0x12;
                }
              }
              else {
                uVar3 = 0x3df;
              }
              *(uint *)(iVar2 + uVar9 * 4) = uVar3 << 0x16 | uVar10 << 0xb | uVar11;
              uVar9 = uVar9 + 1;
              puVar7 = puVar7 + 3;
            } while (uVar9 < param_2);
          }
          iVar8 = iVar8 + -1;
          iVar2 = iVar2 + param_9;
          puVar5 = (undefined2 *)((int)puVar5 + param_6);
        } while (iVar8 != 0);
      }
      param_8 = param_8 + param_10;
      puVar4 = (undefined2 *)((int)puVar4 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b6860(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if (param_4 != 0) {
    puVar3 = (undefined2 *)(param_5 + 2);
    do {
      iVar2 = param_3;
      iVar4 = param_8;
      puVar5 = puVar3;
      if (param_3 != 0) {
        do {
          uVar7 = 0;
          puVar6 = puVar5;
          if (param_2 != 0) {
            do {
              fVar8 = (float10)func_0x009db200(puVar6[1]);
              fVar9 = (float10)func_0x009db200(*puVar6);
              fVar10 = (float10)func_0x009db200(puVar6[-1]);
              uVar1 = func_0x009db300((float)fVar10,(float)fVar9,(float)fVar8);
              *(undefined4 *)(iVar4 + uVar7 * 4) = uVar1;
              uVar7 = uVar7 + 1;
              puVar6 = puVar6 + 3;
            } while (uVar7 < param_2);
          }
          iVar2 = iVar2 + -1;
          iVar4 = iVar4 + param_9;
          puVar5 = (undefined2 *)((int)puVar5 + param_6);
        } while (iVar2 != 0);
      }
      param_8 = param_8 + param_10;
      puVar3 = (undefined2 *)((int)puVar3 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b6970(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iStack_c;
  
  if (param_4 != 0) {
    puVar3 = (uint *)(param_5 + 8);
    do {
      if (param_3 != 0) {
        iStack_c = param_3;
        iVar2 = param_8;
        puVar5 = puVar3;
        do {
          uVar7 = 0;
          puVar6 = puVar5;
          if (param_2 != 0) {
            do {
              uVar1 = puVar6[-2];
              uVar8 = uVar1 & 0x7fffffff;
              if ((uVar1 & 0x7f800000) == 0x7f800000) {
                if ((uVar1 & 0x7fffff) == 0) {
                  uVar8 = 0x7c0;
                  if ((int)uVar1 < 0) {
                    uVar8 = 0;
                  }
                }
                else {
                  uVar8 = (((uVar8 >> 6 | uVar8) >> 5 | uVar8) >> 6 | uVar8) & 0x3f | 0x7c0;
                }
              }
              else if ((int)uVar1 < 0) {
                uVar8 = 0;
              }
              else if (uVar8 < 0x477e0001) {
                if (uVar8 < 0x35000080) {
                  uVar8 = 0;
                }
                else {
                  if (uVar8 < 0x38800000) {
                    uVar8 = (uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar8 >> 0x17) & 0x1f);
                  }
                  else {
                    uVar8 = uVar8 + 0xc8000000;
                  }
                  uVar8 = uVar8 + 0xffff + (uVar8 >> 0x11 & 1) >> 0x11 & 0x7ff;
                }
              }
              else {
                uVar8 = 0x7bf;
              }
              uVar1 = puVar6[-1];
              uVar9 = uVar1 & 0x7fffffff;
              if ((uVar1 & 0x7f800000) == 0x7f800000) {
                if ((uVar1 & 0x7fffff) == 0) {
                  uVar9 = 0x7c0;
                  if ((int)uVar1 < 0) {
                    uVar9 = 0;
                  }
                }
                else {
                  uVar9 = (((uVar9 >> 6 | uVar9) >> 5 | uVar9) >> 6 | uVar9) & 0x3f | 0x7c0;
                }
              }
              else if ((int)uVar1 < 0) {
                uVar9 = 0;
              }
              else if (uVar9 < 0x477e0001) {
                if (uVar9 < 0x35000080) {
                  uVar9 = 0;
                }
                else {
                  if (uVar9 < 0x38800000) {
                    uVar9 = (uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar9 >> 0x17) & 0x1f);
                  }
                  else {
                    uVar9 = uVar9 + 0xc8000000;
                  }
                  uVar9 = uVar9 + 0xffff + (uVar9 >> 0x11 & 1) >> 0x11 & 0x7ff;
                }
              }
              else {
                uVar9 = 0x7bf;
              }
              uVar1 = *puVar6;
              uVar4 = uVar1 & 0x7fffffff;
              if ((uVar1 & 0x7f800000) == 0x7f800000) {
                if ((uVar1 & 0x7fffff) == 0) {
                  uVar4 = 0x3e0;
                  if ((int)uVar1 < 0) {
                    uVar4 = 0;
                  }
                }
                else {
                  uVar4 = (((uVar4 | 0xf800000) >> 5 | uVar4) >> 10 | uVar4) >> 3 | uVar4;
                }
              }
              else if ((int)uVar1 < 0) {
                uVar4 = 0;
              }
              else if (uVar4 < 0x477c0001) {
                if (uVar4 < 0x35800040) {
                  uVar4 = 0;
                }
                else {
                  if (uVar4 < 0x38800000) {
                    uVar4 = (uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar4 >> 0x17) & 0x1f);
                  }
                  else {
                    uVar4 = uVar4 + 0xc8000000;
                  }
                  uVar4 = (uVar4 >> 0x12 & 1) + 0x1ffff + uVar4 >> 0x12;
                }
              }
              else {
                uVar4 = 0x3df;
              }
              *(uint *)(iVar2 + uVar7 * 4) = uVar4 << 0x16 | uVar9 << 0xb | uVar8;
              uVar7 = uVar7 + 1;
              puVar6 = puVar6 + 3;
            } while (uVar7 < param_2);
          }
          puVar5 = (uint *)((int)puVar5 + param_6);
          iVar2 = iVar2 + param_9;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
      }
      param_8 = param_8 + param_10;
      puVar3 = (uint *)((int)puVar3 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b6c90(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  ushort *puVar11;
  int iStack_10;
  
  if (param_4 != 0) {
    puVar4 = (ushort *)(param_8 + 4);
    puVar7 = (uint *)(param_5 + 8);
    do {
      if (param_3 != 0) {
        iStack_10 = param_3;
        puVar3 = puVar7;
        puVar6 = puVar4;
        do {
          puVar9 = puVar3;
          iVar10 = param_2;
          puVar11 = puVar6;
          if (param_2 != 0) {
            do {
              uVar1 = puVar9[-2];
              uVar8 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar8 < 0x7f800001) {
                if (uVar8 < 0x47fff000) {
                  if (uVar8 < 0x38800000) {
                    iVar5 = 0x71 - (uVar8 >> 0x17);
                    if (iVar5 < 0x18) {
                      uVar8 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar5 & 0x1f);
                      iVar5 = (uVar8 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar8 = 0;
                      iVar5 = 0xfff;
                    }
                  }
                  else {
                    iVar5 = (uVar8 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar5 + uVar8 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              puVar11[-2] = uVar2;
              uVar1 = puVar9[-1];
              uVar8 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar8 < 0x7f800001) {
                if (uVar8 < 0x47fff000) {
                  if (uVar8 < 0x38800000) {
                    iVar5 = 0x71 - (uVar8 >> 0x17);
                    if (iVar5 < 0x18) {
                      uVar8 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar5 & 0x1f);
                      iVar5 = (uVar8 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar8 = 0;
                      iVar5 = 0xfff;
                    }
                  }
                  else {
                    iVar5 = (uVar8 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar5 + uVar8 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              puVar11[-1] = uVar2;
              uVar1 = *puVar9;
              uVar8 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar8 < 0x7f800001) {
                if (uVar8 < 0x47fff000) {
                  if (uVar8 < 0x38800000) {
                    iVar5 = 0x71 - (uVar8 >> 0x17);
                    if (iVar5 < 0x18) {
                      uVar8 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar5 & 0x1f);
                      iVar5 = (uVar8 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar8 = 0;
                      iVar5 = 0xfff;
                    }
                  }
                  else {
                    iVar5 = (uVar8 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar5 + uVar8 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              *puVar11 = uVar2;
              iVar10 = iVar10 + -1;
              puVar9 = puVar9 + 3;
              puVar11 = puVar11 + 3;
            } while (iVar10 != 0);
          }
          puVar3 = (uint *)((int)puVar3 + param_6);
          puVar6 = (ushort *)((int)puVar6 + param_9);
          iStack_10 = iStack_10 + -1;
        } while (iStack_10 != 0);
      }
      puVar7 = (uint *)((int)puVar7 + param_7);
      puVar4 = (ushort *)((int)puVar4 + param_10);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b6f50(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_5 + 4);
    do {
      iVar2 = param_3;
      iVar4 = param_8;
      puVar5 = puVar3;
      if (param_3 != 0) {
        do {
          uVar7 = 0;
          puVar6 = puVar5;
          if (param_2 != 0) {
            do {
              uVar1 = func_0x009db300(puVar6[-1],*puVar6,puVar6[1]);
              *(undefined4 *)(iVar4 + uVar7 * 4) = uVar1;
              uVar7 = uVar7 + 1;
              puVar6 = puVar6 + 3;
            } while (uVar7 < param_2);
          }
          iVar2 = iVar2 + -1;
          iVar4 = iVar4 + param_9;
          puVar5 = (undefined4 *)((int)puVar5 + param_6);
        } while (iVar2 != 0);
      }
      param_8 = param_8 + param_10;
      puVar3 = (undefined4 *)((int)puVar3 + param_7);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b7030(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  ushort *puVar11;
  int iStack_10;
  
  if (param_4 != 0) {
    puVar4 = (ushort *)(param_8 + 4);
    puVar7 = (uint *)(param_5 + 8);
    do {
      if (param_3 != 0) {
        iStack_10 = param_3;
        puVar3 = puVar7;
        puVar6 = puVar4;
        do {
          puVar9 = puVar3;
          iVar10 = param_2;
          puVar11 = puVar6;
          if (param_2 != 0) {
            do {
              uVar1 = puVar9[-2];
              uVar8 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar8 < 0x7f800001) {
                if (uVar8 < 0x47fff000) {
                  if (uVar8 < 0x38800000) {
                    iVar5 = 0x71 - (uVar8 >> 0x17);
                    if (iVar5 < 0x18) {
                      uVar8 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar5 & 0x1f);
                      iVar5 = (uVar8 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar8 = 0;
                      iVar5 = 0xfff;
                    }
                  }
                  else {
                    iVar5 = (uVar8 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar5 + uVar8 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              puVar11[-2] = uVar2;
              uVar1 = puVar9[-1];
              uVar8 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar8 < 0x7f800001) {
                if (uVar8 < 0x47fff000) {
                  if (uVar8 < 0x38800000) {
                    iVar5 = 0x71 - (uVar8 >> 0x17);
                    if (iVar5 < 0x18) {
                      uVar8 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar5 & 0x1f);
                      iVar5 = (uVar8 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar8 = 0;
                      iVar5 = 0xfff;
                    }
                  }
                  else {
                    iVar5 = (uVar8 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar5 + uVar8 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              puVar11[-1] = uVar2;
              uVar1 = *puVar9;
              uVar8 = uVar1 & 0x7fffffff;
              uVar2 = (ushort)(uVar1 >> 0x10) & 0x8000;
              if (uVar8 < 0x7f800001) {
                if (uVar8 < 0x47fff000) {
                  if (uVar8 < 0x38800000) {
                    iVar5 = 0x71 - (uVar8 >> 0x17);
                    if (iVar5 < 0x18) {
                      uVar8 = (uVar1 & 0x7fffff | 0x800000) >> ((byte)iVar5 & 0x1f);
                      iVar5 = (uVar8 >> 0xd & 1) + 0xfff;
                    }
                    else {
                      uVar8 = 0;
                      iVar5 = 0xfff;
                    }
                  }
                  else {
                    iVar5 = (uVar8 >> 0xd & 1) + 0xc8000fff;
                  }
                  uVar2 = (ushort)(iVar5 + uVar8 >> 0xd) | uVar2;
                }
                else {
                  uVar2 = uVar2 | 0x7c00;
                }
              }
              else {
                uVar2 = 0x7fff;
              }
              *puVar11 = uVar2;
              puVar11[1] = 0x3c00;
              iVar10 = iVar10 + -1;
              puVar9 = puVar9 + 3;
              puVar11 = puVar11 + 4;
            } while (iVar10 != 0);
          }
          puVar3 = (uint *)((int)puVar3 + param_6);
          puVar6 = (ushort *)((int)puVar6 + param_9);
          iStack_10 = iStack_10 + -1;
        } while (iStack_10 != 0);
      }
      puVar7 = (uint *)((int)puVar7 + param_7);
      puVar4 = (ushort *)((int)puVar4 + param_10);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b72f0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined2 *param_8,int param_9,int param_10)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  
  if (param_4 != 0) {
    do {
      iVar3 = param_5;
      iVar4 = param_3;
      puVar5 = param_8;
      if (param_3 != 0) {
        do {
          if (param_2 != 0) {
            puVar1 = puVar5;
            iVar2 = param_2;
            do {
              *puVar1 = *(undefined2 *)((iVar3 - (int)puVar5) + (int)puVar1);
              iVar2 = iVar2 + -1;
              puVar1 = puVar1 + 1;
            } while (iVar2 != 0);
          }
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + param_6;
          puVar5 = (undefined2 *)((int)puVar5 + param_9);
        } while (iVar4 != 0);
      }
      param_8 = (undefined2 *)((int)param_8 + param_10);
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b7380(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,ushort *param_8,int param_9,int param_10)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  
  if (param_4 != 0) {
    do {
      iVar4 = param_5;
      iVar5 = param_3;
      puVar6 = param_8;
      if (param_3 != 0) {
        do {
          if (param_2 != 0) {
            puVar2 = puVar6;
            iVar3 = param_2;
            do {
              uVar1 = *(ushort *)((iVar4 - (int)puVar6) + (int)puVar2);
              *puVar2 = uVar1 >> 1 | (ushort)((uVar1 & 1) != 0) << 0xf;
              iVar3 = iVar3 + -1;
              puVar2 = puVar2 + 1;
            } while (iVar3 != 0);
          }
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + param_6;
          puVar6 = (ushort *)((int)puVar6 + param_9);
        } while (iVar5 != 0);
      }
      param_8 = (ushort *)((int)param_8 + param_10);
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b7410(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iStack_8;
  
  if (param_4 != 0) {
    pbVar3 = (byte *)(param_8 + 2);
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        pbVar6 = pbVar3;
        iVar8 = param_5;
        do {
          uVar7 = 0;
          pbVar2 = pbVar6;
          if (param_2 != 0) {
            do {
              uVar1 = *(ushort *)(iVar8 + uVar7 * 2);
              bVar5 = (byte)(uVar1 >> 3);
              pbVar2[-2] = ((byte)uVar1 & 0xfe) << 2 | bVar5 & 7;
              bVar4 = (byte)(uVar1 >> 8);
              pbVar2[-1] = (bVar4 ^ bVar5) & 7 ^ bVar5;
              *pbVar2 = bVar4 >> 5 | bVar4 & 0xf8;
              uVar7 = uVar7 + 1;
              pbVar2[1] = -((uVar1 & 1) != 0);
              pbVar2 = pbVar2 + 4;
            } while (uVar7 < param_2);
          }
          iVar8 = iVar8 + param_6;
          pbVar6 = pbVar6 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_5 = param_5 + param_7;
      pbVar3 = pbVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b7500(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iStack_8;
  
  if (param_4 != 0) {
    pbVar2 = (byte *)(param_5 + 2);
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        pbVar3 = pbVar2;
        iVar5 = param_8;
        do {
          uVar4 = 0;
          pbVar1 = pbVar3;
          if (param_2 != 0) {
            do {
              *(ushort *)(iVar5 + uVar4 * 2) =
                   ((ushort)(pbVar1[-2] >> 3) << 6 | (ushort)(pbVar1[-1] >> 2)) << 5 |
                   (ushort)(*pbVar1 >> 3);
              uVar4 = uVar4 + 1;
              pbVar1 = pbVar1 + 3;
            } while (uVar4 < param_2);
          }
          pbVar3 = pbVar3 + param_6;
          iVar5 = iVar5 + param_9;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_8 = param_8 + param_10;
      pbVar2 = pbVar2 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b75e0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_8 + 2);
    puVar1 = (undefined1 *)(param_5 + 1);
    do {
      puVar5 = puVar3;
      iVar6 = param_3;
      puVar8 = puVar1;
      if (param_3 != 0) {
        do {
          puVar2 = puVar5;
          puVar4 = puVar8;
          iVar7 = param_2;
          if (param_2 != 0) {
            do {
              puVar2[-2] = puVar4[1];
              puVar2[-1] = *puVar4;
              *puVar2 = puVar4[-1];
              puVar2[1] = 0xff;
              iVar7 = iVar7 + -1;
              puVar2 = puVar2 + 4;
              puVar4 = puVar4 + 3;
            } while (iVar7 != 0);
          }
          iVar6 = iVar6 + -1;
          puVar5 = puVar5 + param_9;
          puVar8 = puVar8 + param_6;
        } while (iVar6 != 0);
      }
      puVar1 = puVar1 + param_7;
      puVar3 = puVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b7690(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,ushort *param_8,int param_9,int param_10)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  
  if (param_4 != 0) {
    do {
      iVar4 = param_5;
      iVar5 = param_3;
      puVar6 = param_8;
      if (param_3 != 0) {
        do {
          if (param_2 != 0) {
            puVar2 = puVar6;
            iVar3 = param_2;
            do {
              uVar1 = *(ushort *)((iVar4 - (int)puVar6) + (int)puVar2);
              *puVar2 = uVar1 >> 4 | uVar1 << 0xc;
              iVar3 = iVar3 + -1;
              puVar2 = puVar2 + 1;
            } while (iVar3 != 0);
          }
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + param_6;
          puVar6 = (ushort *)((int)puVar6 + param_9);
        } while (iVar5 != 0);
      }
      param_8 = (ushort *)((int)param_8 + param_10);
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b7720(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iStack_c;
  
  if (param_4 != 0) {
    pbVar3 = (byte *)(param_8 + 2);
    do {
      if (param_3 != 0) {
        iStack_c = param_3;
        pbVar7 = pbVar3;
        iVar9 = param_5;
        do {
          uVar8 = 0;
          pbVar2 = pbVar7;
          if (param_2 != 0) {
            do {
              uVar1 = *(ushort *)(iVar9 + uVar8 * 2);
              uVar8 = uVar8 + 1;
              bVar6 = (byte)(uVar1 >> 4);
              bVar4 = (byte)uVar1;
              pbVar2[-2] = (bVar6 ^ bVar4) & 0xf ^ bVar4;
              bVar5 = (byte)(uVar1 >> 8);
              pbVar2[-1] = (bVar6 ^ bVar5) & 0xf ^ bVar6;
              *pbVar2 = bVar5 >> 4 | bVar5 & 0xf0;
              pbVar2[1] = bVar4 & 0xf | bVar4 << 4;
              pbVar2 = pbVar2 + 4;
            } while (uVar8 < param_2);
          }
          iVar9 = iVar9 + param_6;
          pbVar7 = pbVar7 + param_9;
          iStack_c = iStack_c + -1;
        } while (iStack_c != 0);
      }
      param_5 = param_5 + param_7;
      pbVar3 = pbVar3 + param_10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b7810(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar23;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iStack_4;
  
  auVar6 = _DAT_00fb6520;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        uVar8 = param_8;
        uVar9 = param_5;
        do {
          uVar7 = 0;
          if (param_2 != 0) {
            if ((7 < param_2) &&
               ((uVar9 + (param_2 - 1) * 4 < uVar8 || (param_2 * 2 + -2 + uVar8 < uVar9)))) {
              do {
                puVar1 = (uint *)(uVar9 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar27._0_4_ = uVar2 >> 3;
                auVar27._4_4_ = uVar3 >> 3;
                auVar27._8_4_ = uVar4 >> 3;
                auVar27._12_4_ = uVar5 >> 3;
                auVar11 = pshufhw(auVar27,auVar27,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                uVar10 = auVar6._0_4_;
                auVar24._0_4_ = auVar11._0_4_ & uVar10;
                uVar23 = auVar6._4_4_;
                auVar24._4_4_ = auVar11._8_4_ & uVar23;
                auVar24._8_8_ = 0;
                auVar12._0_4_ = uVar2 >> 0x1f;
                auVar12._4_4_ = uVar3 >> 0x1f;
                auVar12._8_4_ = uVar4 >> 0x1f;
                auVar12._12_4_ = uVar5 >> 0x1f;
                auVar11 = pshufhw(auVar12,auVar12,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar13._0_4_ = auVar11._0_4_;
                auVar13._12_4_ = auVar11._12_4_;
                auVar13._4_4_ = auVar11._8_4_;
                auVar13._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar13,5);
                auVar14._0_4_ = uVar2 >> 0xb;
                auVar14._4_4_ = uVar3 >> 0xb;
                auVar14._8_4_ = uVar4 >> 0xb;
                auVar14._12_4_ = uVar5 >> 0xb;
                auVar25 = psllw(auVar24 | auVar11,5);
                auVar11 = pshufhw(auVar14,auVar14,0xd8);
                auVar15 = pshuflw(auVar11,auVar11,0xd8);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = auVar6._0_8_;
                auVar11._4_4_ = auVar15._8_4_ & uVar23;
                auVar11._0_4_ = auVar15._0_4_ & uVar10;
                auVar11._8_8_ = 0;
                auVar21._4_4_ = uVar3 >> 0x13;
                auVar21._0_4_ = uVar2 >> 0x13;
                auVar21._8_4_ = uVar4 >> 0x13;
                auVar21._12_4_ = uVar5 >> 0x13;
                auVar15 = pshufhw(auVar16,auVar21,0xd8);
                auVar15 = pshuflw(auVar15,auVar15,0xd8);
                auVar11 = psllw(auVar25 | auVar11,5);
                *(ulonglong *)(uVar8 + uVar7 * 2) =
                     auVar11._0_8_ | CONCAT44(auVar15._8_4_ & uVar23,auVar15._0_4_ & uVar10);
                puVar1 = (uint *)(uVar9 + 0x10 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar17._0_4_ = uVar2 >> 3;
                auVar17._4_4_ = uVar3 >> 3;
                auVar17._8_4_ = uVar4 >> 3;
                auVar17._12_4_ = uVar5 >> 3;
                auVar11 = pshufhw(auVar17,auVar17,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar26._0_4_ = auVar11._0_4_ & uVar10;
                auVar26._4_4_ = auVar11._8_4_ & uVar23;
                auVar26._8_8_ = 0;
                auVar18._0_4_ = uVar2 >> 0x1f;
                auVar18._4_4_ = uVar3 >> 0x1f;
                auVar18._8_4_ = uVar4 >> 0x1f;
                auVar18._12_4_ = uVar5 >> 0x1f;
                auVar11 = pshufhw(auVar18,auVar18,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar19._0_4_ = auVar11._0_4_;
                auVar19._12_4_ = auVar11._12_4_;
                auVar19._4_4_ = auVar11._8_4_;
                auVar19._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar19,5);
                auVar20._0_4_ = uVar2 >> 0xb;
                auVar20._4_4_ = uVar3 >> 0xb;
                auVar20._8_4_ = uVar4 >> 0xb;
                auVar20._12_4_ = uVar5 >> 0xb;
                auVar15 = pshufhw(auVar20,auVar20,0xd8);
                auVar21 = pshuflw(auVar15,auVar15,0xd8);
                auVar22._8_8_ = 0;
                auVar22._0_8_ = auVar6._0_8_;
                auVar27 = psllw(auVar26 | auVar11,5);
                auVar25._4_4_ = uVar3 >> 0x13;
                auVar25._0_4_ = uVar2 >> 0x13;
                auVar25._8_4_ = uVar4 >> 0x13;
                auVar25._12_4_ = uVar5 >> 0x13;
                auVar11 = pshufhw(auVar22,auVar25,0xd8);
                auVar15._4_4_ = auVar21._8_4_ & uVar23;
                auVar15._0_4_ = auVar21._0_4_ & uVar10;
                auVar15._8_8_ = 0;
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar15 = psllw(auVar27 | auVar15,5);
                *(ulonglong *)(uVar8 + 8 + uVar7 * 2) =
                     auVar15._0_8_ | CONCAT44(auVar11._8_4_ & uVar23,auVar11._0_4_ & uVar10);
                uVar7 = uVar7 + 8;
              } while (uVar7 < (param_2 & 0xfffffff8));
              if (param_2 <= uVar7) goto LAB_009b79f0;
            }
            do {
              uVar2 = *(uint *)(uVar9 + uVar7 * 4);
              *(ushort *)(uVar8 + uVar7 * 2) =
                   (ushort)((((uVar2 >> 0x1f) << 5 | uVar2 >> 3 & 0x1f) << 5 | uVar2 >> 0xb & 0x1f)
                           << 5) | (ushort)(uVar2 >> 0x13) & 0x1f;
              uVar7 = uVar7 + 1;
            } while (uVar7 < param_2);
          }
LAB_009b79f0:
          uVar9 = uVar9 + param_6;
          uVar8 = uVar8 + param_9;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b7a40(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar23;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iStack_4;
  
  auVar6 = _DAT_00fb6510;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        uVar8 = param_8;
        uVar9 = param_5;
        do {
          uVar7 = 0;
          if (param_2 != 0) {
            if ((7 < param_2) &&
               ((uVar9 + (param_2 - 1) * 4 < uVar8 || (param_2 * 2 + -2 + uVar8 < uVar9)))) {
              do {
                puVar1 = (uint *)(uVar9 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar27._0_4_ = uVar2 >> 4;
                auVar27._4_4_ = uVar3 >> 4;
                auVar27._8_4_ = uVar4 >> 4;
                auVar27._12_4_ = uVar5 >> 4;
                auVar11 = pshufhw(auVar27,auVar27,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                uVar10 = auVar6._0_4_;
                auVar24._0_4_ = auVar11._0_4_ & uVar10;
                uVar23 = auVar6._4_4_;
                auVar24._4_4_ = auVar11._8_4_ & uVar23;
                auVar24._8_8_ = 0;
                auVar12._0_4_ = uVar2 >> 0x1c;
                auVar12._4_4_ = uVar3 >> 0x1c;
                auVar12._8_4_ = uVar4 >> 0x1c;
                auVar12._12_4_ = uVar5 >> 0x1c;
                auVar11 = pshufhw(auVar12,auVar12,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar13._0_4_ = auVar11._0_4_;
                auVar13._12_4_ = auVar11._12_4_;
                auVar13._4_4_ = auVar11._8_4_;
                auVar13._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar13,4);
                auVar14._0_4_ = uVar2 >> 0xc;
                auVar14._4_4_ = uVar3 >> 0xc;
                auVar14._8_4_ = uVar4 >> 0xc;
                auVar14._12_4_ = uVar5 >> 0xc;
                auVar25 = psllw(auVar24 | auVar11,4);
                auVar11 = pshufhw(auVar14,auVar14,0xd8);
                auVar15 = pshuflw(auVar11,auVar11,0xd8);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = auVar6._0_8_;
                auVar11._4_4_ = auVar15._8_4_ & uVar23;
                auVar11._0_4_ = auVar15._0_4_ & uVar10;
                auVar11._8_8_ = 0;
                auVar21._4_4_ = uVar3 >> 0x14;
                auVar21._0_4_ = uVar2 >> 0x14;
                auVar21._8_4_ = uVar4 >> 0x14;
                auVar21._12_4_ = uVar5 >> 0x14;
                auVar15 = pshufhw(auVar16,auVar21,0xd8);
                auVar15 = pshuflw(auVar15,auVar15,0xd8);
                auVar11 = psllw(auVar25 | auVar11,4);
                *(ulonglong *)(uVar8 + uVar7 * 2) =
                     auVar11._0_8_ | CONCAT44(auVar15._8_4_ & uVar23,auVar15._0_4_ & uVar10);
                puVar1 = (uint *)(uVar9 + 0x10 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar17._0_4_ = uVar2 >> 4;
                auVar17._4_4_ = uVar3 >> 4;
                auVar17._8_4_ = uVar4 >> 4;
                auVar17._12_4_ = uVar5 >> 4;
                auVar11 = pshufhw(auVar17,auVar17,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar26._0_4_ = auVar11._0_4_ & uVar10;
                auVar26._4_4_ = auVar11._8_4_ & uVar23;
                auVar26._8_8_ = 0;
                auVar18._0_4_ = uVar2 >> 0x1c;
                auVar18._4_4_ = uVar3 >> 0x1c;
                auVar18._8_4_ = uVar4 >> 0x1c;
                auVar18._12_4_ = uVar5 >> 0x1c;
                auVar11 = pshufhw(auVar18,auVar18,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar19._0_4_ = auVar11._0_4_;
                auVar19._12_4_ = auVar11._12_4_;
                auVar19._4_4_ = auVar11._8_4_;
                auVar19._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar19,4);
                auVar20._0_4_ = uVar2 >> 0xc;
                auVar20._4_4_ = uVar3 >> 0xc;
                auVar20._8_4_ = uVar4 >> 0xc;
                auVar20._12_4_ = uVar5 >> 0xc;
                auVar15 = pshufhw(auVar20,auVar20,0xd8);
                auVar21 = pshuflw(auVar15,auVar15,0xd8);
                auVar22._8_8_ = 0;
                auVar22._0_8_ = auVar6._0_8_;
                auVar27 = psllw(auVar26 | auVar11,4);
                auVar25._4_4_ = uVar3 >> 0x14;
                auVar25._0_4_ = uVar2 >> 0x14;
                auVar25._8_4_ = uVar4 >> 0x14;
                auVar25._12_4_ = uVar5 >> 0x14;
                auVar11 = pshufhw(auVar22,auVar25,0xd8);
                auVar15._4_4_ = auVar21._8_4_ & uVar23;
                auVar15._0_4_ = auVar21._0_4_ & uVar10;
                auVar15._8_8_ = 0;
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar15 = psllw(auVar27 | auVar15,4);
                *(ulonglong *)(uVar8 + 8 + uVar7 * 2) =
                     auVar15._0_8_ | CONCAT44(auVar11._8_4_ & uVar23,auVar11._0_4_ & uVar10);
                uVar7 = uVar7 + 8;
              } while (uVar7 < (param_2 & 0xfffffff8));
              if (param_2 <= uVar7) goto LAB_009b7c20;
            }
            do {
              uVar2 = *(uint *)(uVar9 + uVar7 * 4);
              *(ushort *)(uVar8 + uVar7 * 2) =
                   (ushort)((((uVar2 >> 0x1c) << 4 | uVar2 >> 4 & 0xf) << 4 | uVar2 >> 0xc & 0xf) <<
                           4) | (ushort)(uVar2 >> 0x14) & 0xf;
              uVar7 = uVar7 + 1;
            } while (uVar7 < param_2);
          }
LAB_009b7c20:
          uVar9 = uVar9 + param_6;
          uVar8 = uVar8 + param_9;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b7c70(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint *param_8,int param_9,int param_10)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 (*pauVar5) [16];
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  int iStack_1c;
  int iStack_18;
  uint *puStack_14;
  uint *puStack_10;
  int iStack_c;
  int iStack_8;
  
  cVar2 = func_0x009b8930();
  if (cVar2 == '\0') {
    iStack_8 = param_4;
    if (param_4 != 0) {
      iStack_c = param_5;
      puStack_10 = param_8;
      do {
        if (param_3 != 0) {
          puStack_14 = (uint *)param_3;
          puVar6 = puStack_10;
          iVar9 = iStack_c;
          do {
            if (param_2 != 0) {
              puVar4 = puVar6;
              uVar3 = param_2;
              do {
                uVar7 = *(uint *)((iVar9 - (int)puVar6) + (int)puVar4);
                *puVar4 = ((uVar7 << 0x10 | uVar7 >> 0x10) ^ uVar7) & 0xff00ff ^ uVar7;
                uVar3 = uVar3 - 1;
                puVar4 = puVar4 + 1;
              } while (uVar3 != 0);
            }
            iVar9 = iVar9 + param_6;
            puVar6 = (uint *)((int)puVar6 + param_9);
            puStack_14 = (uint *)((int)puStack_14 + -1);
          } while (puStack_14 != (uint *)0x0);
        }
        puStack_10 = (uint *)((int)puStack_10 + param_10);
        iStack_c = iStack_c + param_7;
        iStack_8 = iStack_8 + -1;
      } while (iStack_8 != 0);
    }
  }
  else {
    iStack_1c = param_4;
    if (param_4 != 0) {
      iStack_18 = param_5;
      puStack_14 = param_8;
      do {
        if (param_3 != 0) {
          puStack_10 = (uint *)param_3;
          puVar6 = puStack_14;
          iVar9 = iStack_18;
          do {
            uVar3 = 0;
            if (((uint)puVar6 & 0xf) != 0) {
              puVar4 = puVar6;
              do {
                if (param_2 <= uVar3) break;
                uVar7 = *(uint *)((iVar9 - (int)puVar6) + (int)puVar4);
                uVar3 = uVar3 + 1;
                *puVar4 = ((uVar7 << 0x10 | uVar7 >> 0x10) ^ uVar7) & 0xff00ff ^ uVar7;
                puVar4 = puVar4 + 1;
              } while (((uint)puVar4 & 0xf) != 0);
            }
            uVar7 = uVar3 + 3;
            if (uVar7 < param_2) {
              pauVar5 = (undefined1 (*) [16])(puVar6 + uVar3);
              do {
                puVar1 = (ulonglong *)((iVar9 - (int)puVar6) + (int)pauVar5);
                uVar7 = uVar7 + 4;
                uVar3 = uVar3 + 4;
                auVar10._0_8_ = *puVar1 & 0xff00ff00ff00ff;
                auVar10._8_4_ = (uint)puVar1[1] & 0xff00ff;
                auVar10._12_4_ = *(uint *)((int)puVar1 + 0xc) & 0xff00ff;
                auVar10 = pshuflw(auVar10,auVar10,0xb1);
                in_XMM1 = pshufhw(in_XMM1,auVar10,0xb1);
                auVar11._0_8_ = *puVar1 & 0xff00ff00ff00ff00;
                auVar11._8_4_ = (uint)puVar1[1] & 0xff00ff00;
                auVar11._12_4_ = *(uint *)((int)puVar1 + 0xc) & 0xff00ff00;
                in_XMM1 = in_XMM1 | auVar11;
                *pauVar5 = in_XMM1;
                pauVar5 = pauVar5 + 1;
              } while (uVar7 < param_2);
            }
            if (uVar3 < param_2) {
              iVar8 = param_2 - uVar3;
              puVar4 = puVar6 + uVar3;
              do {
                uVar3 = *(uint *)((iVar9 - (int)puVar6) + (int)puVar4);
                *puVar4 = ((uVar3 << 0x10 | uVar3 >> 0x10) ^ uVar3) & 0xff00ff ^ uVar3;
                iVar8 = iVar8 + -1;
                puVar4 = puVar4 + 1;
              } while (iVar8 != 0);
            }
            iVar9 = iVar9 + param_6;
            puVar6 = (uint *)((int)puVar6 + param_9);
            puStack_10 = (uint *)((int)puStack_10 + -1);
          } while (puStack_10 != (uint *)0x0);
        }
        puStack_14 = (uint *)((int)puStack_14 + param_10);
        iStack_18 = iStack_18 + param_7;
        iStack_1c = iStack_1c + -1;
        if (iStack_1c == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b7ec0(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar24;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iStack_4;
  
  auVar7 = _DAT_00fb6520;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        uVar9 = param_8;
        uVar10 = param_5;
        do {
          uVar8 = 0;
          if (param_2 != 0) {
            if ((7 < param_2) &&
               ((uVar10 + (param_2 - 1) * 4 < uVar9 || (param_2 * 2 + -2 + uVar9 < uVar10)))) {
              do {
                puVar1 = (uint *)(uVar10 + uVar8 * 4);
                uVar2 = *puVar1;
                uVar4 = puVar1[1];
                uVar5 = puVar1[2];
                uVar6 = puVar1[3];
                auVar28._0_4_ = uVar2 >> 0xb;
                auVar28._4_4_ = uVar4 >> 0xb;
                auVar28._8_4_ = uVar5 >> 0xb;
                auVar28._12_4_ = uVar6 >> 0xb;
                auVar12 = pshufhw(auVar28,auVar28,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                uVar11 = auVar7._0_4_;
                auVar25._0_4_ = auVar12._0_4_ & uVar11;
                uVar24 = auVar7._4_4_;
                auVar25._4_4_ = auVar12._8_4_ & uVar24;
                auVar25._8_8_ = 0;
                auVar13._0_4_ = uVar2 >> 3;
                auVar13._4_4_ = uVar4 >> 3;
                auVar13._8_4_ = uVar5 >> 3;
                auVar13._12_4_ = uVar6 >> 3;
                auVar12 = pshufhw(auVar13,auVar13,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar14._0_4_ = auVar12._0_4_;
                auVar14._12_4_ = auVar12._12_4_;
                auVar14._4_4_ = auVar12._8_4_;
                auVar14._8_4_ = auVar12._4_4_;
                auVar12 = psllw(auVar14,5);
                auVar15._0_4_ = uVar2 >> 0x13;
                auVar15._4_4_ = uVar4 >> 0x13;
                auVar15._8_4_ = uVar5 >> 0x13;
                auVar15._12_4_ = uVar6 >> 0x13;
                auVar26 = psllw(auVar25 | auVar12,5);
                auVar12 = pshufhw(auVar15,auVar15,0xd8);
                auVar16 = pshuflw(auVar12,auVar12,0xd8);
                auVar17._8_8_ = 0;
                auVar17._0_8_ = auVar7._0_8_;
                auVar12._4_4_ = auVar16._8_4_ & uVar24;
                auVar12._0_4_ = auVar16._0_4_ & uVar11;
                auVar12._8_8_ = 0;
                auVar22._4_4_ = uVar4 >> 0x1f;
                auVar22._0_4_ = uVar2 >> 0x1f;
                auVar22._8_4_ = uVar5 >> 0x1f;
                auVar22._12_4_ = uVar6 >> 0x1f;
                auVar16 = pshufhw(auVar17,auVar22,0xd8);
                auVar16 = pshuflw(auVar16,auVar16,0xd8);
                auVar12 = psllw(auVar26 | auVar12,1);
                *(ulonglong *)(uVar9 + uVar8 * 2) =
                     auVar12._0_8_ | CONCAT44(auVar16._8_4_,auVar16._0_4_) & 0x1000100010001;
                puVar1 = (uint *)(uVar10 + 0x10 + uVar8 * 4);
                uVar2 = *puVar1;
                uVar4 = puVar1[1];
                uVar5 = puVar1[2];
                uVar6 = puVar1[3];
                auVar18._0_4_ = uVar2 >> 0xb;
                auVar18._4_4_ = uVar4 >> 0xb;
                auVar18._8_4_ = uVar5 >> 0xb;
                auVar18._12_4_ = uVar6 >> 0xb;
                auVar12 = pshufhw(auVar18,auVar18,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar27._0_4_ = auVar12._0_4_ & uVar11;
                auVar27._4_4_ = auVar12._8_4_ & uVar24;
                auVar27._8_8_ = 0;
                auVar19._0_4_ = uVar2 >> 3;
                auVar19._4_4_ = uVar4 >> 3;
                auVar19._8_4_ = uVar5 >> 3;
                auVar19._12_4_ = uVar6 >> 3;
                auVar12 = pshufhw(auVar19,auVar19,0xd8);
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar20._0_4_ = auVar12._0_4_;
                auVar20._12_4_ = auVar12._12_4_;
                auVar20._4_4_ = auVar12._8_4_;
                auVar20._8_4_ = auVar12._4_4_;
                auVar12 = psllw(auVar20,5);
                auVar21._0_4_ = uVar2 >> 0x13;
                auVar21._4_4_ = uVar4 >> 0x13;
                auVar21._8_4_ = uVar5 >> 0x13;
                auVar21._12_4_ = uVar6 >> 0x13;
                auVar16 = pshufhw(auVar21,auVar21,0xd8);
                auVar22 = pshuflw(auVar16,auVar16,0xd8);
                auVar23._8_8_ = 0;
                auVar23._0_8_ = auVar7._0_8_;
                auVar28 = psllw(auVar27 | auVar12,5);
                auVar26._4_4_ = uVar4 >> 0x1f;
                auVar26._0_4_ = uVar2 >> 0x1f;
                auVar26._8_4_ = uVar5 >> 0x1f;
                auVar26._12_4_ = uVar6 >> 0x1f;
                auVar12 = pshufhw(auVar23,auVar26,0xd8);
                auVar16._4_4_ = auVar22._8_4_ & uVar24;
                auVar16._0_4_ = auVar22._0_4_ & uVar11;
                auVar16._8_8_ = 0;
                auVar12 = pshuflw(auVar12,auVar12,0xd8);
                auVar16 = psllw(auVar28 | auVar16,1);
                *(ulonglong *)(uVar9 + 8 + uVar8 * 2) =
                     auVar16._0_8_ | CONCAT44(auVar12._8_4_,auVar12._0_4_) & 0x1000100010001;
                uVar8 = uVar8 + 8;
              } while (uVar8 < (param_2 & 0xfffffff8));
              if (param_2 <= uVar8) goto LAB_009b809c;
            }
            do {
              uVar2 = *(uint *)(uVar10 + uVar8 * 4);
              uVar3 = (ushort)(uVar2 >> 0x10);
              *(ushort *)(uVar9 + uVar8 * 2) =
                   ((ushort)((uVar2 >> 0xb & 0x1f | (uVar2 >> 3) << 5) << 5) | uVar3 >> 3 & 0x1f) *
                   2 | uVar3 >> 0xf;
              uVar8 = uVar8 + 1;
            } while (uVar8 < param_2);
          }
LAB_009b809c:
          uVar10 = uVar10 + param_6;
          uVar9 = uVar9 + param_9;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b80f0(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar23;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iStack_4;
  
  auVar6 = _DAT_00fb6510;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_4 = param_3;
        uVar8 = param_8;
        uVar9 = param_5;
        do {
          uVar7 = 0;
          if (param_2 != 0) {
            if ((7 < param_2) &&
               ((uVar9 + (param_2 - 1) * 4 < uVar8 || (param_2 * 2 + -2 + uVar8 < uVar9)))) {
              do {
                puVar1 = (uint *)(uVar9 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar27._0_4_ = uVar2 >> 0xc;
                auVar27._4_4_ = uVar3 >> 0xc;
                auVar27._8_4_ = uVar4 >> 0xc;
                auVar27._12_4_ = uVar5 >> 0xc;
                auVar11 = pshufhw(auVar27,auVar27,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                uVar10 = auVar6._0_4_;
                auVar24._0_4_ = auVar11._0_4_ & uVar10;
                uVar23 = auVar6._4_4_;
                auVar24._4_4_ = auVar11._8_4_ & uVar23;
                auVar24._8_8_ = 0;
                auVar12._0_4_ = uVar2 >> 4;
                auVar12._4_4_ = uVar3 >> 4;
                auVar12._8_4_ = uVar4 >> 4;
                auVar12._12_4_ = uVar5 >> 4;
                auVar11 = pshufhw(auVar12,auVar12,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar13._0_4_ = auVar11._0_4_;
                auVar13._12_4_ = auVar11._12_4_;
                auVar13._4_4_ = auVar11._8_4_;
                auVar13._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar13,4);
                auVar14._0_4_ = uVar2 >> 0x14;
                auVar14._4_4_ = uVar3 >> 0x14;
                auVar14._8_4_ = uVar4 >> 0x14;
                auVar14._12_4_ = uVar5 >> 0x14;
                auVar25 = psllw(auVar24 | auVar11,4);
                auVar11 = pshufhw(auVar14,auVar14,0xd8);
                auVar15 = pshuflw(auVar11,auVar11,0xd8);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = auVar6._0_8_;
                auVar11._4_4_ = auVar15._8_4_ & uVar23;
                auVar11._0_4_ = auVar15._0_4_ & uVar10;
                auVar11._8_8_ = 0;
                auVar21._4_4_ = uVar3 >> 0x1c;
                auVar21._0_4_ = uVar2 >> 0x1c;
                auVar21._8_4_ = uVar4 >> 0x1c;
                auVar21._12_4_ = uVar5 >> 0x1c;
                auVar15 = pshufhw(auVar16,auVar21,0xd8);
                auVar15 = pshuflw(auVar15,auVar15,0xd8);
                auVar11 = psllw(auVar25 | auVar11,4);
                *(ulonglong *)(uVar8 + uVar7 * 2) =
                     auVar11._0_8_ | CONCAT44(auVar15._8_4_ & uVar23,auVar15._0_4_ & uVar10);
                puVar1 = (uint *)(uVar9 + 0x10 + uVar7 * 4);
                uVar2 = *puVar1;
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                auVar17._0_4_ = uVar2 >> 0xc;
                auVar17._4_4_ = uVar3 >> 0xc;
                auVar17._8_4_ = uVar4 >> 0xc;
                auVar17._12_4_ = uVar5 >> 0xc;
                auVar11 = pshufhw(auVar17,auVar17,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar26._0_4_ = auVar11._0_4_ & uVar10;
                auVar26._4_4_ = auVar11._8_4_ & uVar23;
                auVar26._8_8_ = 0;
                auVar18._0_4_ = uVar2 >> 4;
                auVar18._4_4_ = uVar3 >> 4;
                auVar18._8_4_ = uVar4 >> 4;
                auVar18._12_4_ = uVar5 >> 4;
                auVar11 = pshufhw(auVar18,auVar18,0xd8);
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar19._0_4_ = auVar11._0_4_;
                auVar19._12_4_ = auVar11._12_4_;
                auVar19._4_4_ = auVar11._8_4_;
                auVar19._8_4_ = auVar11._4_4_;
                auVar11 = psllw(auVar19,4);
                auVar20._0_4_ = uVar2 >> 0x14;
                auVar20._4_4_ = uVar3 >> 0x14;
                auVar20._8_4_ = uVar4 >> 0x14;
                auVar20._12_4_ = uVar5 >> 0x14;
                auVar15 = pshufhw(auVar20,auVar20,0xd8);
                auVar21 = pshuflw(auVar15,auVar15,0xd8);
                auVar22._8_8_ = 0;
                auVar22._0_8_ = auVar6._0_8_;
                auVar27 = psllw(auVar26 | auVar11,4);
                auVar25._4_4_ = uVar3 >> 0x1c;
                auVar25._0_4_ = uVar2 >> 0x1c;
                auVar25._8_4_ = uVar4 >> 0x1c;
                auVar25._12_4_ = uVar5 >> 0x1c;
                auVar11 = pshufhw(auVar22,auVar25,0xd8);
                auVar15._4_4_ = auVar21._8_4_ & uVar23;
                auVar15._0_4_ = auVar21._0_4_ & uVar10;
                auVar15._8_8_ = 0;
                auVar11 = pshuflw(auVar11,auVar11,0xd8);
                auVar15 = psllw(auVar27 | auVar15,4);
                *(ulonglong *)(uVar8 + 8 + uVar7 * 2) =
                     auVar15._0_8_ | CONCAT44(auVar11._8_4_ & uVar23,auVar11._0_4_ & uVar10);
                uVar7 = uVar7 + 8;
              } while (uVar7 < (param_2 & 0xfffffff8));
              if (param_2 <= uVar7) goto LAB_009b82ca;
            }
            do {
              uVar2 = *(uint *)(uVar9 + uVar7 * 4);
              *(ushort *)(uVar8 + uVar7 * 2) =
                   (ushort)(((uVar2 >> 0xc & 0xf | uVar2 & 0xfffffff0) << 4 | uVar2 >> 0x14 & 0xf)
                           << 4) | (ushort)(uVar2 >> 0x1c);
              uVar7 = uVar7 + 1;
            } while (uVar7 < param_2);
          }
LAB_009b82ca:
          uVar9 = uVar9 + param_6;
          uVar8 = uVar8 + param_9;
          iStack_4 = iStack_4 + -1;
        } while (iStack_4 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_009b8320(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [16];
  undefined1 (*pauVar17) [16];
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  ulonglong *puVar22;
  ushort *puVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iStack_8;
  
  auVar16 = _DAT_00fb6550;
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        uVar20 = param_8;
        uVar21 = param_5;
        do {
          uVar18 = 0;
          if (param_2 != 0) {
            if ((0xf < param_2) &&
               ((param_2 * 2 + -2 + uVar21 < uVar20 || (uVar20 + (param_2 - 1) * 4 < uVar21)))) {
              pauVar17 = (undefined1 (*) [16])(uVar20 + 0x20);
              puVar22 = (ulonglong *)(uVar21 + 0x10);
              do {
                uVar3 = puVar22[-2];
                auVar4._8_4_ = 0;
                auVar4._0_8_ = uVar3;
                auVar4._12_2_ = (short)(uVar3 >> 0x30);
                auVar8._8_2_ = (short)(uVar3 >> 0x20);
                auVar8._0_8_ = uVar3;
                auVar8._10_4_ = auVar4._10_4_;
                auVar12._6_8_ = 0;
                auVar12._0_6_ = auVar8._8_6_;
                uVar18 = uVar18 + 0x10;
                auVar25._0_4_ = (float)(ushort)uVar3;
                auVar25._4_4_ =
                     (float)(int)CONCAT82(SUB148(auVar12 << 0x40,6),(short)(uVar3 >> 0x10));
                auVar25._8_4_ = (float)auVar8._8_4_;
                auVar25._12_4_ = (float)(auVar4._10_4_ >> 0x10);
                auVar25 = divps(auVar25,auVar16);
                pauVar17[-2] = auVar25;
                uVar3 = puVar22[-1];
                auVar5._8_4_ = 0;
                auVar5._0_8_ = uVar3;
                auVar5._12_2_ = (short)(uVar3 >> 0x30);
                auVar9._8_2_ = (short)(uVar3 >> 0x20);
                auVar9._0_8_ = uVar3;
                auVar9._10_4_ = auVar5._10_4_;
                auVar13._6_8_ = 0;
                auVar13._0_6_ = auVar9._8_6_;
                auVar26._0_4_ = (float)(ushort)uVar3;
                auVar26._4_4_ =
                     (float)(int)CONCAT82(SUB148(auVar13 << 0x40,6),(short)(uVar3 >> 0x10));
                auVar26._8_4_ = (float)auVar9._8_4_;
                auVar26._12_4_ = (float)(auVar5._10_4_ >> 0x10);
                auVar25 = divps(auVar26,auVar16);
                pauVar17[-1] = auVar25;
                uVar3 = *puVar22;
                auVar6._8_4_ = 0;
                auVar6._0_8_ = uVar3;
                auVar6._12_2_ = (short)(uVar3 >> 0x30);
                auVar10._8_2_ = (short)(uVar3 >> 0x20);
                auVar10._0_8_ = uVar3;
                auVar10._10_4_ = auVar6._10_4_;
                auVar14._6_8_ = 0;
                auVar14._0_6_ = auVar10._8_6_;
                auVar27._0_4_ = (float)(ushort)uVar3;
                auVar27._4_4_ =
                     (float)(int)CONCAT82(SUB148(auVar14 << 0x40,6),(short)(uVar3 >> 0x10));
                auVar27._8_4_ = (float)auVar10._8_4_;
                auVar27._12_4_ = (float)(auVar6._10_4_ >> 0x10);
                auVar25 = divps(auVar27,auVar16);
                *pauVar17 = auVar25;
                uVar3 = puVar22[1];
                auVar7._8_4_ = 0;
                auVar7._0_8_ = uVar3;
                auVar7._12_2_ = (short)(uVar3 >> 0x30);
                auVar11._8_2_ = (short)(uVar3 >> 0x20);
                auVar11._0_8_ = uVar3;
                auVar11._10_4_ = auVar7._10_4_;
                auVar15._6_8_ = 0;
                auVar15._0_6_ = auVar11._8_6_;
                auVar28._0_4_ = (float)(ushort)uVar3;
                auVar28._4_4_ =
                     (float)(int)CONCAT82(SUB148(auVar15 << 0x40,6),(short)(uVar3 >> 0x10));
                auVar28._8_4_ = (float)auVar11._8_4_;
                auVar28._12_4_ = (float)(auVar7._10_4_ >> 0x10);
                auVar25 = divps(auVar28,auVar16);
                pauVar17[1] = auVar25;
                pauVar17 = pauVar17 + 4;
                puVar22 = puVar22 + 4;
              } while (uVar18 < (param_2 & 0xfffffff0));
              if (param_2 <= uVar18) goto LAB_009b84bd;
            }
            if (3 < param_2 - uVar18) {
              iVar1 = uVar18 * 4;
              iVar2 = uVar18 * 2;
              iVar24 = ((param_2 - uVar18) - 4 >> 2) + 1;
              uVar18 = uVar18 + iVar24 * 4;
              pfVar19 = (float *)(uVar20 + iVar1 + 8);
              puVar23 = (ushort *)(iVar2 + 4 + uVar21);
              do {
                pfVar19[-2] = (float)puVar23[-2] / 65535.0;
                pfVar19[-1] = (float)puVar23[-1] / 65535.0;
                *pfVar19 = (float)*puVar23 / 65535.0;
                pfVar19[1] = (float)puVar23[1] / 65535.0;
                iVar24 = iVar24 + -1;
                pfVar19 = pfVar19 + 4;
                puVar23 = puVar23 + 4;
              } while (iVar24 != 0);
              if (param_2 <= uVar18) goto LAB_009b84bd;
            }
            do {
              *(float *)(uVar20 + uVar18 * 4) = (float)*(ushort *)(uVar21 + uVar18 * 2) / 65535.0;
              uVar18 = uVar18 + 1;
            } while (uVar18 < param_2);
          }
LAB_009b84bd:
          uVar20 = uVar20 + param_9;
          uVar21 = uVar21 + param_6;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b8510(undefined4 param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong *puVar20;
  ushort *puVar21;
  int iVar22;
  int iStack_8;
  
  if (param_4 != 0) {
    do {
      if (param_3 != 0) {
        iStack_8 = param_3;
        uVar18 = param_8;
        uVar19 = param_5;
        do {
          uVar17 = 0;
          if (param_2 != 0) {
            if ((0xf < param_2) &&
               ((param_2 * 2 + -2 + uVar19 < uVar18 || (uVar18 + (param_2 - 1) * 4 < uVar19)))) {
              pfVar16 = (float *)(uVar18 + 0x20);
              puVar20 = (ulonglong *)(uVar19 + 0x10);
              do {
                uVar3 = puVar20[-2];
                auVar4._8_4_ = 0;
                auVar4._0_8_ = uVar3;
                auVar4._12_2_ = (short)(uVar3 >> 0x30);
                auVar8._8_2_ = (short)(uVar3 >> 0x20);
                auVar8._0_8_ = uVar3;
                auVar8._10_4_ = auVar4._10_4_;
                auVar12._6_8_ = 0;
                auVar12._0_6_ = auVar8._8_6_;
                uVar17 = uVar17 + 0x10;
                pfVar16[-8] = (float)(ushort)uVar3 * 2.3283064e-10;
                pfVar16[-7] = (float)(int)CONCAT82(SUB148(auVar12 << 0x40,6),(short)(uVar3 >> 0x10))
                              * 2.3283064e-10;
                pfVar16[-6] = (float)auVar8._8_4_ * 2.3283064e-10;
                pfVar16[-5] = (float)(auVar4._10_4_ >> 0x10) * 2.3283064e-10;
                uVar3 = puVar20[-1];
                auVar5._8_4_ = 0;
                auVar5._0_8_ = uVar3;
                auVar5._12_2_ = (short)(uVar3 >> 0x30);
                auVar9._8_2_ = (short)(uVar3 >> 0x20);
                auVar9._0_8_ = uVar3;
                auVar9._10_4_ = auVar5._10_4_;
                auVar13._6_8_ = 0;
                auVar13._0_6_ = auVar9._8_6_;
                pfVar16[-4] = (float)(ushort)uVar3 * 2.3283064e-10;
                pfVar16[-3] = (float)(int)CONCAT82(SUB148(auVar13 << 0x40,6),(short)(uVar3 >> 0x10))
                              * 2.3283064e-10;
                pfVar16[-2] = (float)auVar9._8_4_ * 2.3283064e-10;
                pfVar16[-1] = (float)(auVar5._10_4_ >> 0x10) * 2.3283064e-10;
                uVar3 = *puVar20;
                auVar6._8_4_ = 0;
                auVar6._0_8_ = uVar3;
                auVar6._12_2_ = (short)(uVar3 >> 0x30);
                auVar10._8_2_ = (short)(uVar3 >> 0x20);
                auVar10._0_8_ = uVar3;
                auVar10._10_4_ = auVar6._10_4_;
                auVar14._6_8_ = 0;
                auVar14._0_6_ = auVar10._8_6_;
                *pfVar16 = (float)(ushort)uVar3 * 2.3283064e-10;
                pfVar16[1] = (float)(int)CONCAT82(SUB148(auVar14 << 0x40,6),(short)(uVar3 >> 0x10))
                             * 2.3283064e-10;
                pfVar16[2] = (float)auVar10._8_4_ * 2.3283064e-10;
                pfVar16[3] = (float)(auVar6._10_4_ >> 0x10) * 2.3283064e-10;
                uVar3 = puVar20[1];
                auVar7._8_4_ = 0;
                auVar7._0_8_ = uVar3;
                auVar7._12_2_ = (short)(uVar3 >> 0x30);
                auVar11._8_2_ = (short)(uVar3 >> 0x20);
                auVar11._0_8_ = uVar3;
                auVar11._10_4_ = auVar7._10_4_;
                auVar15._6_8_ = 0;
                auVar15._0_6_ = auVar11._8_6_;
                pfVar16[4] = (float)(ushort)uVar3 * 2.3283064e-10;
                pfVar16[5] = (float)(int)CONCAT82(SUB148(auVar15 << 0x40,6),(short)(uVar3 >> 0x10))
                             * 2.3283064e-10;
                pfVar16[6] = (float)auVar11._8_4_ * 2.3283064e-10;
                pfVar16[7] = (float)(auVar7._10_4_ >> 0x10) * 2.3283064e-10;
                pfVar16 = pfVar16 + 0x10;
                puVar20 = puVar20 + 4;
              } while (uVar17 < (param_2 & 0xfffffff0));
              if (param_2 <= uVar17) goto LAB_009b86ad;
            }
            if (3 < param_2 - uVar17) {
              iVar1 = uVar17 * 4;
              iVar2 = uVar17 * 2;
              iVar22 = ((param_2 - uVar17) - 4 >> 2) + 1;
              uVar17 = uVar17 + iVar22 * 4;
              pfVar16 = (float *)(uVar18 + iVar1 + 8);
              puVar21 = (ushort *)(iVar2 + 4 + uVar19);
              do {
                pfVar16[-2] = (float)puVar21[-2] * 2.3283064e-10;
                pfVar16[-1] = (float)puVar21[-1] * 2.3283064e-10;
                *pfVar16 = (float)*puVar21 * 2.3283064e-10;
                pfVar16[1] = (float)puVar21[1] * 2.3283064e-10;
                iVar22 = iVar22 + -1;
                pfVar16 = pfVar16 + 4;
                puVar21 = puVar21 + 4;
              } while (iVar22 != 0);
              if (param_2 <= uVar17) goto LAB_009b86ad;
            }
            do {
              *(float *)(uVar18 + uVar17 * 4) =
                   (float)*(ushort *)(uVar19 + uVar17 * 2) * 2.3283064e-10;
              uVar17 = uVar17 + 1;
            } while (uVar17 < param_2);
          }
LAB_009b86ad:
          uVar18 = uVar18 + param_9;
          uVar19 = uVar19 + param_6;
          iStack_8 = iStack_8 + -1;
        } while (iStack_8 != 0);
      }
      param_8 = param_8 + param_10;
      param_5 = param_5 + param_7;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_009b8700(void)

{
  void *in_stack_00000014;
  size_t in_stack_0000001c;
  void *in_stack_00000020;
  
  memcpy(in_stack_00000020,in_stack_00000014,in_stack_0000001c);
  return;
}



undefined4 * __thiscall FUN_009b8b70(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -2;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = rx::DisplayImpl::vftable;
  *param_1 = rx::DisplayImpl::vftable;
  func_0x00953210(uVar1);
  *puVar2 = rx::EGLImplFactory::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_009b8b80(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::DisplayImpl::vftable;
  param_1[2] = rx::DisplayImpl::vftable;
  func_0x00953210(uVar1);
  *param_1 = rx::EGLImplFactory::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_009b8bf0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::EGLImplFactory::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall FUN_009b8c20(undefined4 param_1,byte param_2)

{
  func_0x009db570();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * FUN_009b8c40(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46474;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar2 = (undefined4 *)func_0x008ab47d(4,uVar1);
  uStack_8 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    func_0x009db560();
    *puVar2 = rx::_anon_76C2272A::MockDevice::vftable;
    *unaff_FS_OFFSET = iStack_10;
    return puVar2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



void FUN_009b8cc0(undefined4 *param_1)

{
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void FUN_009b8ce0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00956090();
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar1 + 1);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)puVar1 + 6);
  return;
}



void FUN_009b8d10(void)

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
  func_0x0091ffd0(0x3004,0x3004,aiStack_2c);
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



undefined4 FUN_009b8e60(void)

{
  return 0x3038;
}



void FUN_009b8e70(undefined4 *param_1)

{
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void FUN_009b8e90(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_009b8ee0(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 FUN_009b8f30(undefined4 param_1)

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
  func_0x005d5720(1,uVar1,0x3008);
  uStack_8 = 2;
  func_0x0046b6e0(auStack_ac,"DisplayImpl::validateClientBuffer unimplemented.");
  func_0x009b8ac0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_009b8fc0(undefined4 param_1)

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
  func_0x005d5720(1,uVar1,0x3008);
  uStack_8 = 2;
  func_0x0046b6e0(auStack_ac,"DisplayImpl::validateImageClientBuffer unimplemented.");
  func_0x009b8ac0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_009b9050(undefined4 param_1)

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
  func_0x005d5720(1,uVar1,0x3008);
  uStack_8 = 2;
  func_0x0046b6e0(auStack_ac,"DisplayImpl::valdiatePixmap unimplemented.");
  func_0x009b8ac0(param_1);
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_009b9310(int param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xb0);
  if (0xf < uVar1) {
    iVar4 = *(int *)(param_1 + 0x9c);
    uVar5 = uVar1 + 1;
    iVar3 = iVar4;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar4 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar4 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    func_0x008ab812(iVar3,uVar5);
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xf;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined ***)(param_1 + 0x90) = rx::d3d::Context::vftable;
  func_0x009b8a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -8,0xbc);
  }
  return param_1 + -8;
}



undefined4 * __thiscall FUN_009b9320(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar1 = param_1[8];
  if (0xf < uVar1) {
    iVar2 = param_1[3];
    uVar6 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar6 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar3)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = rx::d3d::Context::vftable;
  func_0x009b8a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -0x26,0xbc);
  }
  return param_1 + -0x26;
}



undefined4 * __thiscall FUN_009b9330(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d::Context::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



int __thiscall FUN_009b9360(int param_1,byte param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (0xf < uVar1) {
    iVar4 = *(int *)(param_1 + 0xa4);
    uVar5 = uVar1 + 1;
    iVar3 = iVar4;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar4 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar4 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    func_0x008ab812(iVar3,uVar5);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xf;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined ***)(param_1 + 0x98) = rx::d3d::Context::vftable;
  func_0x009b8a50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xbc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009b93f0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ShareGroupImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



void __thiscall FUN_009b9910(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x24);
  _guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_009b9940(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0xe8);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



void __thiscall
FUN_009b9960(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x90);
  _guard_check_icall(param_2,param_3,param_4,param_5);
  (*pcVar1)();
  return;
}



undefined4 __thiscall
FUN_009b99a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

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
    uVar3 = func_0x009f44f0(param_2,param_4,param_5,*(undefined4 *)(param_1 + 0xa0));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009b9a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f465e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x7c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x009f4780(param_2,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x9c),
                            param_3,param_4,param_5);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009b9ab0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f465e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x7c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x009f4780(param_2,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x9c),
                            0,0,param_3);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_009b9b40(void)

{
  return 0;
}



undefined8 * __fastcall FUN_009b9b50(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)func_0x008ab47d(8,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)((int)puVar1 + 4) = 0;
    *(undefined ***)puVar1 = rx::ShareGroupD3D::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



void __thiscall FUN_009b9b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0xec);
  _guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall
FUN_009b9bb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f465e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x7c,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x009f4950(param_2,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x9c),
                            param_3,param_4);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



void FUN_009b9c30(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x009dbef0();
  *param_1 = *(undefined1 *)(iVar1 + 0x8f);
  return;
}



undefined4 __thiscall FUN_009b9c50(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x1c);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return unaff_retaddr;
}



void __thiscall FUN_009b9c80(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x20);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_009b9cb0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0xfc);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return unaff_retaddr;
}



void FUN_009b9ce0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



undefined4 __thiscall FUN_009b9d00(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0xf8);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return unaff_retaddr;
}



undefined4 * __thiscall FUN_009b9d30(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *unaff_retaddr;
  
  if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x28);
    _guard_check_icall(param_2);
    (*pcVar1)();
    return unaff_retaddr;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_2;
}



undefined4 * __thiscall FUN_009b9d90(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *unaff_retaddr;
  
  if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x2c);
    _guard_check_icall(param_2);
    (*pcVar1)();
    return unaff_retaddr;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_2;
}



undefined4 * __thiscall FUN_009b9df0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  
  if ((int *)param_1[0x28] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[0x28] + 0x30);
    _guard_check_icall(param_2,param_3);
    (*pcVar1)();
    return param_1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_2;
}



void FUN_009b9e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e8 [160];
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46620;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = param_2;
  uStack_34 = param_3;
  uStack_30 = param_4;
  uStack_3c = param_5;
  func_0x004687a0(1,uStack_14);
  uStack_8 = 0;
  uVar3 = func_0x0046b6e0(auStack_e8,"Internal D3D11 error: ");
  piVar4 = (int *)func_0x009529d0(auStack_48,param_1);
  iVar1 = piVar4[1];
  if (*piVar4 != 0) {
    func_0x0046b6e0(uVar3,*piVar4);
  }
  uVar3 = func_0x0091fdc0(uVar3,iVar1,&DAT_00f9ad64,0x30);
  uVar3 = func_0x0046b6e0(uVar3,", in ",uStack_34,&DAT_0112e444,uStack_30,&DAT_0113c084);
  uVar3 = func_0x0046b6e0(uVar3);
  uVar3 = func_0x0046b6e0(uVar3);
  uVar3 = func_0x0046b6e0(uVar3);
  func_0x0046b6e0(uVar3);
  uVar3 = func_0x005b0d50(uStack_3c,&DAT_00f9ad50,uStack_38);
  uVar3 = func_0x0046b6e0(uVar3);
  func_0x0046b6e0(uVar3);
  func_0x0046a470(&uStack_2c);
  if ((uint *)(iStack_40 + 0xc) != &uStack_2c) {
    FUN_00469ba0();
    uVar5 = uStack_2c;
    uStack_2c = uStack_2c & 0xffffff00;
    *(uint *)(iStack_40 + 0xc) = uVar5;
    *(undefined4 *)(iStack_40 + 0x10) = uStack_28;
    *(undefined4 *)(iStack_40 + 0x14) = uStack_24;
    *(undefined4 *)(iStack_40 + 0x18) = uStack_20;
    *(ulonglong *)(iStack_40 + 0x1c) = CONCAT44(uStack_18,uStack_1c);
    uStack_1c = 0;
    uStack_18 = 0xf;
  }
  if (0xf < uStack_18) {
    uVar5 = uStack_18 + 1;
    uVar6 = uStack_2c;
    if (0xfff < uVar5) {
      uVar6 = *(uint *)(uStack_2c - 4);
      uVar5 = uStack_18 + 0x24;
      if (0x1f < (uStack_2c - uVar6) - 4) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(uVar6,uVar5);
  }
  func_0x004673c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_009ba010(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iStack_c;
  int iStack_8;
  int *piStack_4;
  
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  func_0x009b9420(&iStack_c,param_3,param_1 + 0xa0);
  if (iStack_c != 0x3000) {
    *param_2 = iStack_c;
    param_2[1] = iStack_8;
    param_2[2] = (int)piStack_4;
    return;
  }
  if (piStack_4 != (int *)0x0) {
    uVar1 = piStack_4[5];
    if (0xf < uVar1) {
      iVar2 = *piStack_4;
      uVar5 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar5) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar5 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar5);
    }
    piStack_4[4] = 0;
    piStack_4[5] = 0xf;
    *(undefined1 *)piStack_4 = 0;
    func_0x008ab812(piStack_4,0x18);
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



void __thiscall FUN_009ba0e0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0xf0);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_009ba110(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x40);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_009ba140(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x58);
  _guard_check_icall();
  (*pcVar1)();
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



void FUN_009ba180(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)func_0x009dbe40();
  piVar1 = (int *)*puVar5;
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    puVar3 = *(undefined4 **)(param_1 + 4);
    puVar4 = piVar2 + 10;
    if (puVar3 == *(undefined4 **)(param_1 + 8)) {
      func_0x008c0640(puVar3,puVar4);
    }
    else {
      *puVar3 = *puVar4;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
    }
    func_0x00499be0();
    piVar1 = (int *)*puVar5;
  }
  return;
}



void __thiscall FUN_009ba1a0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int aiStack_2c [3];
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46668;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x38) + 0x28);
  uStack_14 = uVar5;
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    func_0x009f5390(uVar5);
  }
  pcVar3 = *(code **)(**(int **)(param_1 + 0xa0) + 0xd0);
  _guard_check_icall();
  cVar4 = (*pcVar3)();
  if (cVar4 == '\0') {
    func_0x005d5720(1);
    uStack_8 = 2;
    func_0x0046a470(aiStack_2c);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    func_0x0091ffd0(0x3003,0x3003,aiStack_2c);
    if (0xf < uStack_18) {
      uVar5 = uStack_18 + 1;
      iVar6 = aiStack_2c[0];
      if (0xfff < uVar5) {
        iVar6 = *(int *)(aiStack_2c[0] + -4);
        uVar5 = uStack_18 + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar6) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar6,uVar5);
    }
    func_0x005d3940();
  }
  else {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x38) + 0x28);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      func_0x009f5460(&iStack_20,param_3);
      if (iStack_20 != 0x3000) {
        *param_2 = iStack_20;
        param_2[1] = iStack_1c;
        param_2[2] = uStack_18;
        goto LAB_009ba309;
      }
      func_0x008a4620();
    }
    *param_2 = 0x3000;
    param_2[1] = 0;
    param_2[2] = 0;
  }
LAB_009ba309:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_009ba350(int param_1)

{
  code *pcVar1;
  
  if (*(undefined4 **)(param_1 + 0xa0) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0xa0);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



void __fastcall FUN_009ba380(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0xd4);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



undefined4 __thiscall
FUN_009ba3a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  
  if (param_4 == 0x3200) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x50);
    _guard_check_icall(param_2,param_3,param_5,param_6);
    (*pcVar1)();
    return param_2;
  }
  if (param_4 != 0x33a3) {
    FUN_009b8f30(param_2,param_3,param_4,param_5,param_6);
    return param_2;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x4c);
  _guard_check_icall(param_2,param_3,param_5,param_6,0,0,0,0,0,0);
  (*pcVar1)();
  return param_2;
}



undefined4 __thiscall
FUN_009ba450(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (param_4 != 0x3484) {
    FUN_009b8fc0(param_2,param_3,param_4,param_5,param_6);
    return param_2;
  }
  uVar2 = 0;
  pcVar1 = *(code **)(**(int **)(param_1 + 0xa0) + 0x4c);
  _guard_check_icall(param_2,0,param_5,param_6,0,0,0,0,0,0);
  (*pcVar1)();
  return uVar2;
}



void __thiscall FUN_009ba4c0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iStack_c;
  int iStack_8;
  int *piStack_4;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x38) + 0x28);
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      *param_2 = 0x3000;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    func_0x009f4b70(&iStack_c,param_1);
    piVar6 = piStack_4;
    if (iStack_c != 0x3000) break;
    if (piStack_4 != (int *)0x0) {
      uVar3 = piStack_4[5];
      if (0xf < uVar3) {
        iVar4 = *piStack_4;
        uVar8 = uVar3 + 1;
        iVar7 = iVar4;
        if (0xfff < uVar8) {
          iVar7 = *(int *)(iVar4 + -4);
          uVar8 = uVar3 + 0x24;
          if (0x1f < (iVar4 - iVar7) - 4U) {
            func_0x008aaf66();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        func_0x008ab812(iVar7,uVar8);
      }
      piVar6[4] = 0;
      piVar6[5] = 0xf;
      *(undefined1 *)piVar6 = 0;
      func_0x008ab812(piVar6,0x18);
    }
    puVar2 = (undefined4 *)*puVar2;
  }
  *param_2 = iStack_c;
  param_2[1] = iStack_8;
  param_2[2] = (int)piStack_4;
  return;
}



void __thiscall FUN_009ba5a0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_c;
  int iStack_8;
  int *piStack_4;
  
  iVar1 = *(int *)(param_3 + 0x1fc8);
  if (*(int *)(param_3 + 0x1fc4) != 0) {
    func_0x009f4b70(&iStack_c,param_1);
    piVar4 = piStack_4;
    if (iStack_c != 0x3000) goto LAB_009ba5dd;
    if (piStack_4 != (int *)0x0) {
      uVar2 = piStack_4[5];
      if (0xf < uVar2) {
        iVar6 = *piStack_4;
        uVar7 = uVar2 + 1;
        iVar5 = iVar6;
        if (0xfff < uVar7) {
          iVar5 = *(int *)(iVar6 + -4);
          uVar7 = uVar2 + 0x24;
          if (0x1f < (iVar6 - iVar5) - 4U) goto LAB_009ba6ea;
        }
        func_0x008ab812(iVar5,uVar7);
      }
      piVar4[4] = 0;
      piVar4[5] = 0xf;
      *(undefined1 *)piVar4 = 0;
      func_0x008ab812(piVar4,0x18);
    }
  }
  if (iVar1 != 0) {
    func_0x009f4b70(&iStack_c,param_1);
    if (iStack_c != 0x3000) {
LAB_009ba5dd:
      *param_2 = iStack_c;
      param_2[1] = iStack_8;
      param_2[2] = (int)piStack_4;
      return;
    }
    if (piStack_4 != (int *)0x0) {
      uVar2 = piStack_4[5];
      if (0xf < uVar2) {
        iVar1 = *piStack_4;
        uVar7 = uVar2 + 1;
        iVar6 = iVar1;
        if (0xfff < uVar7) {
          iVar6 = *(int *)(iVar1 + -4);
          uVar7 = uVar2 + 0x24;
          if (0x1f < (iVar1 - iVar6) - 4U) {
LAB_009ba6ea:
            func_0x008aaf66();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        func_0x008ab812(iVar6,uVar7);
      }
      piStack_4[4] = 0;
      piStack_4[5] = 0xf;
      *(undefined1 *)piStack_4 = 0;
      func_0x008ab812(piStack_4,0x18);
    }
  }
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



int * __thiscall FUN_009bc940(int param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)(param_1 - *(int *)(param_1 + -4));
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = puVar3 + -2;
  *(undefined ***)(*(int *)(puVar3[-2] + 4) + -8 + (int)puVar3) = std::basic_ostream<>::vftable;
  *(int *)(*(int *)(*piVar1 + 4) + -0xc + (int)puVar3) = *(int *)(*piVar1 + 4) + -8;
  uStack_8 = 0;
  *puVar3 = std::ios_base::vftable;
  func_0x00e706cb(puVar3,uVar2);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(piVar1,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar1;
}



int __thiscall FUN_009bc950(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = (param_1 - *(int *)(param_1 + -4)) + -0x50;
  func_0x009bc8b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(iVar1,0x98);
  }
  return iVar1;
}



undefined4 * __thiscall FUN_009bc960(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = param_1 + -2;
  *puVar5 = rx::DisplayWGL::vftable;
  *param_1 = rx::DisplayWGL::vftable;
  FUN_00993470();
  func_0x008ac870();
  func_0x009bc4d0();
  piVar2 = (int *)param_1[0x25];
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
  func_0x009f64f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x128);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_009bc970(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = std::ios_base::vftable;
  func_0x00e706cb(param_1,uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_009bcaa0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[0xd];
  *param_1 = std::basic_streambuf<>::vftable;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(iVar1 + 4) + 8);
      _guard_check_icall();
      puVar3 = (undefined4 *)(*pcVar2)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar2 = *(code **)*puVar3;
        _guard_check_icall(1);
        (*pcVar2)();
      }
    }
    func_0x008ab812(iVar1,8);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 __thiscall FUN_009bcb10(undefined4 param_1,byte param_2)

{
  func_0x009bc600();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009bcb30(undefined4 *param_1,byte param_2)

{
  *param_1 = std::ctype<wchar_t>::vftable;
  if (param_1[4] != 0) {
    free((void *)param_1[3]);
  }
  free((void *)param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009bcb80(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009bcbb0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::numpunct<wchar_t>::vftable;
  free((void *)param_1[2]);
  free((void *)param_1[4]);
  free((void *)param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009bcc00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  *param_1 = rx::DisplayWGL::vftable;
  param_1[2] = rx::DisplayWGL::vftable;
  FUN_00993470();
  func_0x008ac870();
  func_0x009bc4d0();
  piVar2 = (int *)param_1[0x27];
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
  func_0x009f64f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x128);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009bcca0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FunctionsGLWindows::vftable;
  func_0x009f59e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb50);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009bccd0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::WorkerContext::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009bcd00(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::WorkerContextWGL::vftable;
  pcVar1 = *(code **)(param_1[1] + 0x28);
  uStack_8 = 0;
  _guard_check_icall(param_1[3],0,uVar2);
  (*pcVar1)();
  pcVar1 = *(code **)(param_1[1] + 0x18);
  _guard_check_icall(param_1[4]);
  (*pcVar1)();
  pcVar1 = *(code **)(param_1[1] + 0x80);
  _guard_check_icall(param_1[2],param_1[3]);
  (*pcVar1)();
  pcVar1 = *(code **)(param_1[1] + 0x84);
  _guard_check_icall(param_1[2]);
  (*pcVar1)();
  *param_1 = rx::WorkerContext::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_009bdee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46b24;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x38,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a09550(param_2,param_3,param_1 + 0x98);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_009be230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int aiStack_20 [3];
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46b9f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x009c0500(aiStack_20,uVar1);
  uStack_8 = 0;
  if (aiStack_20[0] == 0x3000) {
    iStack_14 = func_0x008ab47d(0x84);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (iStack_14 != 0) {
      uVar2 = func_0x00a09710(param_2,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x14),param_3,
                              param_4,param_1,*(undefined4 *)(param_1 + 0xfc),
                              *(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),
                              *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x10),
                              *(undefined4 *)(param_1 + 0xc4));
      goto LAB_009be2c4;
    }
  }
  uVar2 = 0;
LAB_009be2c4:
  func_0x008a4620();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



undefined4 __thiscall FUN_009be2e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46bd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar2 = func_0x008acb20(0x3057,0,uVar1);
  uVar3 = func_0x008acb20(0x3056,0);
  iVar4 = func_0x008acb20(0x3058,0);
  uVar5 = func_0x008acb20(0x3080,0x305c);
  uVar6 = func_0x008acb20(0x3081,0x305c);
  iVar7 = func_0x008ab47d(0x5c);
  uStack_8 = 0;
  if (iVar7 != 0) {
    uVar2 = func_0x00a0c840(param_2,uVar2,uVar3,uVar5,uVar6,iVar4 == 1,
                            *(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0xfc),
                            *(undefined4 *)(param_1 + 0xc4));
    *unaff_FS_OFFSET = iStack_10;
    return uVar2;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_009be950(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int aiStack_20 [3];
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46cbe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar2 = func_0x008acb20(0x33a8,0,uVar1);
  if (*(char *)(param_1 + 0x104) == '\0') {
    iStack_14 = func_0x008ab47d(0x48);
    uStack_8 = 2;
    if (iStack_14 != 0) {
      uVar2 = func_0x00a0cef0(param_2,param_3,*(undefined4 *)(param_1 + 0x100),
                              *(undefined4 *)(param_1 + 0xc4),uVar2);
      *unaff_FS_OFFSET = iStack_10;
      return uVar2;
    }
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  func_0x009c0500(aiStack_20);
  uStack_8 = 0;
  if (aiStack_20[0] == 0x3000) {
    iStack_14 = func_0x008ab47d(0x90);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (iStack_14 != 0) {
      uVar2 = func_0x00a0ade0(param_2,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x14),param_3,
                              *(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x110),
                              *(undefined4 *)(param_1 + 0xfc),
                              *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x10),
                              *(undefined4 *)(param_1 + 0xc4),uVar2);
      func_0x008a4620();
      *unaff_FS_OFFSET = iStack_10;
      return uVar2;
    }
  }
  func_0x008a4620();
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined2 __fastcall FUN_009bf030(int param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



undefined4 * __thiscall FUN_009bf040(int param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = *(short **)(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  func_0x005dd9e0(psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return param_2;
}



undefined4 * __thiscall FUN_009bf090(int param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_2;
}



void __thiscall FUN_009bf0d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00e7551d(param_2,param_3,param_4,param_1 + 8);
  return;
}



bool __thiscall FUN_009bf0f0(int param_1,ushort param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = func_0x00e754fd(param_3,param_1 + 8);
  return (param_2 & uVar1) != 0;
}



void __thiscall FUN_009bf110(int param_1,undefined4 param_2)

{
  undefined8 uStack_14;
  undefined1 auStack_c [8];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  uStack_14 = 0;
  func_0x00e72f9e(auStack_c,param_2,&uStack_14,param_1 + 0x18);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009bf170(int param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
            undefined1 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uStack_14;
  undefined1 auStack_c [8];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  if (param_2 != param_3) {
    do {
      uStack_14 = 0;
      iVar1 = func_0x00e72f9e(auStack_c,*param_2,&uStack_14,param_1 + 0x18);
      uVar2 = auStack_c[0];
      if (iVar1 != 1) {
        uVar2 = param_4;
      }
      param_2 = param_2 + 1;
      *param_5 = uVar2;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009bf1f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char acStack_4c [8];
  char acStack_44 [64];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_4c;
  acStack_4c[0] = '%';
  uVar1 = *(uint *)(param_5 + 0x14);
  if ((uVar1 & 0x20) != 0) {
    acStack_4c[1] = 0x2b;
  }
  pcVar4 = acStack_4c + 1;
  if ((uVar1 & 0x20) != 0) {
    pcVar4 = acStack_4c + 2;
  }
  if ((uVar1 & 8) != 0) {
    *pcVar4 = '#';
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = 'l';
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 100;
  }
  pcVar4[1] = bVar2;
  pcVar4[2] = '\0';
  iVar3 = sprintf_s(acStack_44,0x40,acStack_4c,param_7);
  func_0x009bd5e0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_44,iVar3);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009bf2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char acStack_4c [8];
  char acStack_44 [64];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_4c;
  acStack_4c[0] = '%';
  uVar1 = *(uint *)(param_5 + 0x14);
  if ((uVar1 & 0x20) != 0) {
    acStack_4c[1] = 0x2b;
  }
  pcVar4 = acStack_4c + 1;
  if ((uVar1 & 0x20) != 0) {
    pcVar4 = acStack_4c + 2;
  }
  if ((uVar1 & 8) != 0) {
    *pcVar4 = '#';
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = 'l';
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 0x75;
  }
  pcVar4[1] = bVar2;
  pcVar4[2] = '\0';
  iVar3 = sprintf_s(acStack_44,0x40,acStack_4c,param_7);
  func_0x009bd5e0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_44,iVar3);
  FUN_008ab370();
  return;
}



void FUN_009bf390(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,double param_6)

{
  code *pcVar1;
  short sVar2;
  char ****ppppcVar3;
  char *_Format;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uStack_3c;
  undefined4 uStack_38;
  char ***pppcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined1 auStack_1c [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f46d7d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0xf;
  pppcStack_34 = (char ***)0x0;
  uVar5 = *(uint *)(param_4 + 0x14) & 0x3000;
  uStack_8 = 0;
  uVar8 = SUB84(param_6,0);
  uVar9 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (uVar5 == 0x3000) {
    iVar7 = -1;
    iVar6 = 0xd;
    uStack_3c = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(param_4 + 0x1c);
    iVar7 = *(int *)(param_4 + 0x18);
    if ((iVar4 < 0) || ((iVar6 = iVar7, iVar4 < 1 && (iVar7 == 0)))) {
      if (iVar7 == 0 && iVar4 == 0) {
        if (uVar5 == 0) {
          iVar6 = 1;
          goto LAB_009bf488;
        }
        iVar6 = 0;
      }
      else {
        iVar6 = 6;
      }
    }
    if ((uVar5 == 0x2000) && (10000000000.0 <= ABS(param_6) && ABS(param_6) != 10000000000.0)) {
      func_0x008aaf90(uVar8,uVar9,&uStack_3c,uStack_14);
      iVar6 = iVar6 + (int)(((uStack_3c ^ (int)uStack_3c >> 0x1f) - ((int)uStack_3c >> 0x1f)) *
                           0x7597) / 100000;
    }
  }
LAB_009bf488:
  uVar5 = iVar6 + 0x32;
  if (uStack_24 < uVar5) {
    func_0x0046a730(uVar5 - uStack_24,0);
  }
  else {
    ppppcVar3 = &pppcStack_34;
    if (0xf < uStack_20) {
      ppppcVar3 = (char ****)pppcStack_34;
    }
    uStack_24 = uVar5;
    *(char *)((int)ppppcVar3 + uVar5) = '\0';
  }
  sVar2 = func_0x008ab08e(uVar8,uVar9);
  uStack_3c = CONCAT31(uStack_3c._1_3_,sVar2 < 1);
  uVar5 = *(uint *)(param_4 + 0x14);
  if (sVar2 >= 1) {
    uVar5 = *(uint *)(param_4 + 0x14) & 0xffffffef;
  }
  _Format = (char *)func_0x009bcfb0(uStack_38,auStack_1c,0,uVar5);
  ppppcVar3 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar3 = (char ****)pppcStack_34;
  }
  iVar4 = sprintf_s((char *)ppppcVar3,uStack_24,_Format,iVar7,uVar8,uVar9);
  ppppcVar3 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar3 = (char ****)pppcStack_34;
  }
  func_0x009bb160(param_1,param_2,param_3,param_4,param_5,ppppcVar3,iVar4,uStack_3c);
  if (0xf < uStack_20) {
    uVar5 = uStack_20 + 1;
    ppppcVar3 = (char ****)pppcStack_34;
    if (0xfff < uVar5) {
      ppppcVar3 = (char ****)pppcStack_34[-1];
      uVar5 = uStack_20 + 0x24;
      if ((char *)0x1f < (char *)((int)pppcStack_34 + (-4 - (int)ppppcVar3))) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(ppppcVar3,uVar5);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_009bf590(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,double param_6)

{
  code *pcVar1;
  short sVar2;
  char ****ppppcVar3;
  char *_Format;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uStack_3c;
  undefined4 uStack_38;
  char ***pppcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined1 auStack_1c [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f46d7d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0xf;
  pppcStack_34 = (char ***)0x0;
  uVar5 = *(uint *)(param_4 + 0x14) & 0x3000;
  uStack_8 = 0;
  uVar8 = SUB84(param_6,0);
  uVar9 = (undefined4)((ulonglong)param_6 >> 0x20);
  if (uVar5 == 0x3000) {
    iVar7 = -1;
    iVar6 = 0xd;
    uStack_3c = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(param_4 + 0x1c);
    iVar7 = *(int *)(param_4 + 0x18);
    if ((iVar4 < 0) || ((iVar6 = iVar7, iVar4 < 1 && (iVar7 == 0)))) {
      if (iVar7 == 0 && iVar4 == 0) {
        if (uVar5 == 0) {
          iVar6 = 1;
          goto LAB_009bf688;
        }
        iVar6 = 0;
      }
      else {
        iVar6 = 6;
      }
    }
    if ((uVar5 == 0x2000) && (10000000000.0 <= ABS(param_6) && ABS(param_6) != 10000000000.0)) {
      func_0x008aaf90(uVar8,uVar9,&uStack_3c,uStack_14);
      iVar6 = iVar6 + (int)(((uStack_3c ^ (int)uStack_3c >> 0x1f) - ((int)uStack_3c >> 0x1f)) *
                           0x7597) / 100000;
    }
  }
LAB_009bf688:
  uVar5 = iVar6 + 0x32;
  if (uStack_24 < uVar5) {
    func_0x0046a730(uVar5 - uStack_24,0);
  }
  else {
    ppppcVar3 = &pppcStack_34;
    if (0xf < uStack_20) {
      ppppcVar3 = (char ****)pppcStack_34;
    }
    uStack_24 = uVar5;
    *(char *)((int)ppppcVar3 + uVar5) = '\0';
  }
  sVar2 = func_0x008ab094(uVar8,uVar9);
  uStack_3c = CONCAT31(uStack_3c._1_3_,sVar2 < 1);
  uVar5 = *(uint *)(param_4 + 0x14);
  if (sVar2 >= 1) {
    uVar5 = *(uint *)(param_4 + 0x14) & 0xffffffef;
  }
  _Format = (char *)func_0x009bcfb0(uStack_38,auStack_1c,0x4c,uVar5);
  ppppcVar3 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar3 = (char ****)pppcStack_34;
  }
  iVar4 = sprintf_s((char *)ppppcVar3,uStack_24,_Format,iVar7,uVar8,uVar9);
  ppppcVar3 = &pppcStack_34;
  if (0xf < uStack_20) {
    ppppcVar3 = (char ****)pppcStack_34;
  }
  func_0x009bb160(param_1,param_2,param_3,param_4,param_5,ppppcVar3,iVar4,uStack_3c);
  if (0xf < uStack_20) {
    uVar5 = uStack_20 + 1;
    ppppcVar3 = (char ****)pppcStack_34;
    if (0xfff < uVar5) {
      ppppcVar3 = (char ****)pppcStack_34[-1];
      uVar5 = uStack_20 + 0x24;
      if ((char *)0x1f < (char *)((int)pppcStack_34 + (-4 - (int)ppppcVar3))) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(ppppcVar3,uVar5);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009bf790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char acStack_44 [64];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_44;
  iVar1 = sprintf_s(acStack_44,0x40,"%p",param_7);
  func_0x009bd5e0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_44,iVar1);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009bf800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  char cStack_4c;
  undefined1 auStack_4b [2];
  byte abStack_49 [5];
  char acStack_44 [64];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&cStack_4c;
  cStack_4c = '%';
  uVar1 = *(uint *)(param_5 + 0x14);
  if ((uVar1 & 0x20) != 0) {
    auStack_4b[0] = 0x2b;
  }
  puVar2 = (undefined2 *)auStack_4b;
  if ((uVar1 & 0x20) != 0) {
    puVar2 = (undefined2 *)(auStack_4b + 1);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  *puVar2 = 0x3649;
  *(undefined1 *)(puVar2 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar4 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar4 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar4 = 100;
  }
  *(byte *)((int)puVar2 + 3) = bVar4;
  *(undefined1 *)(puVar2 + 2) = 0;
  iVar3 = sprintf_s(acStack_44,0x40,&cStack_4c,param_7,param_8);
  func_0x009bd5e0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_44,iVar3);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009bf8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  char cStack_4c;
  undefined1 auStack_4b [2];
  byte abStack_49 [5];
  char acStack_44 [64];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&cStack_4c;
  cStack_4c = '%';
  uVar1 = *(uint *)(param_5 + 0x14);
  if ((uVar1 & 0x20) != 0) {
    auStack_4b[0] = 0x2b;
  }
  puVar2 = (undefined2 *)auStack_4b;
  if ((uVar1 & 0x20) != 0) {
    puVar2 = (undefined2 *)(auStack_4b + 1);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  *puVar2 = 0x3649;
  *(undefined1 *)(puVar2 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar4 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar4 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar4 = 0x75;
  }
  *(byte *)((int)puVar2 + 3) = bVar4;
  *(undefined1 *)(puVar2 + 2) = 0;
  iVar3 = sprintf_s(acStack_44,0x40,&cStack_4c,param_7,param_8);
  func_0x009bd5e0(param_1,param_2,param_3,param_4,param_5,param_6,acStack_44,iVar3);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009bf9c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            ushort param_6,char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_58 [4];
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  int *piStack_48;
  undefined4 ***pppuStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46dc5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_4c = (uint)param_6;
  piStack_48 = param_1;
  if ((*(uint *)(param_5 + 0x14) & 0x4000) == 0) {
    pcVar6 = *(code **)(*param_1 + 0x24);
    _guard_check_icall(param_2,param_3,param_4,param_5,uStack_4c,param_7);
    (*pcVar6)();
  }
  else {
    piStack_54 = *(int **)(*(int *)(param_5 + 0x30) + 4);
    pcVar6 = *(code **)(*piStack_54 + 4);
    _guard_check_icall(uStack_14);
    (*pcVar6)();
    uStack_8 = 0;
    piStack_50 = (int *)func_0x009bbd40(auStack_58);
    if (piStack_54 != (int *)0x0) {
      pcVar6 = *(code **)(*piStack_54 + 8);
      _guard_check_icall();
      puVar3 = (undefined4 *)(*pcVar6)();
      if (puVar3 != (undefined4 *)0x0) {
        pcVar6 = *(code **)*puVar3;
        _guard_check_icall(1);
        (*pcVar6)();
      }
    }
    uStack_1c = 0x700000000;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    pppuStack_2c = (undefined4 ***)0x0;
    uStack_8 = 1;
    if (param_7 == '\0') {
      pcVar6 = *(code **)(*piStack_50 + 0x18);
    }
    else {
      pcVar6 = *(code **)(*piStack_50 + 0x1c);
    }
    _guard_check_icall(&pppuStack_44);
    (*pcVar6)();
    pppuStack_2c = pppuStack_44;
    pppuStack_44 = (undefined4 ***)((uint)pppuStack_44 & 0xffff0000);
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    uStack_1c = CONCAT44(uStack_30,uStack_34);
    uStack_34 = 0;
    uStack_30 = 7;
    func_0x00588fe0();
    uVar5 = *(uint *)(param_5 + 0x20);
    if ((*(int *)(param_5 + 0x24) < 0) ||
       (((*(int *)(param_5 + 0x24) < 1 && (uVar5 == 0)) || (uVar5 <= (uint)uStack_1c)))) {
      iVar7 = 0;
    }
    else {
      iVar7 = uVar5 - (uint)uStack_1c;
    }
    if ((*(uint *)(param_5 + 0x14) & 0x1c0) != 0x40) {
      puVar3 = (undefined4 *)func_0x009bdbf0(piStack_48,auStack_58,param_3,param_4,uStack_4c,iVar7);
      iVar7 = 0;
      param_3 = *puVar3;
      param_4 = puVar3[1];
    }
    ppppuVar4 = &pppuStack_2c;
    if (7 < uStack_1c._4_4_) {
      ppppuVar4 = (undefined4 ****)pppuStack_2c;
    }
    puVar3 = (undefined4 *)
             func_0x009bdb60(piStack_48,auStack_58,param_3,param_4,ppppuVar4,(uint)uStack_1c);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    *(undefined4 *)(param_5 + 0x20) = 0;
    *(undefined4 *)(param_5 + 0x24) = 0;
    func_0x009bdbf0(piStack_48,param_2,uVar1,uVar2,uStack_4c,iVar7);
    if (7 < uStack_1c._4_4_) {
      uVar5 = uStack_1c._4_4_ * 2 + 2;
      ppppuVar4 = (undefined4 ****)pppuStack_2c;
      if (0xfff < uVar5) {
        ppppuVar4 = (undefined4 ****)pppuStack_2c[-1];
        uVar5 = uStack_1c._4_4_ * 2 + 0x25;
        if (0x1f < (uint)((int)pppuStack_2c + (-4 - (int)ppppuVar4))) {
          func_0x008aaf66();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      func_0x008ab812(ppppuVar4,uVar5);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined2 * __thiscall
FUN_009bfc10(int *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  char cVar2;
  
  if (param_3 == param_4) {
    return param_3;
  }
  do {
    pcVar1 = *(code **)(*param_1 + 0x10);
    _guard_check_icall(param_2,*param_3);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      return param_3;
    }
    param_3 = param_3 + 1;
  } while (param_3 != param_4);
  return param_3;
}



undefined2 * __thiscall
FUN_009bfc60(int *param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  code *pcVar1;
  char cVar2;
  
  if (param_3 == param_4) {
    return param_3;
  }
  do {
    pcVar1 = *(code **)(*param_1 + 0x10);
    _guard_check_icall(param_2,*param_3);
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      return param_3;
    }
    param_3 = param_3 + 1;
  } while (param_3 != param_4);
  return param_3;
}



undefined2 __fastcall FUN_009bfcb0(int param_1)

{
  return *(undefined2 *)(param_1 + 0xe);
}



undefined2 * __thiscall FUN_009bfcc0(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = func_0x00e7553c(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}



void __thiscall FUN_009bfd00(int param_1,undefined4 param_2)

{
  func_0x00e7553c(param_2,param_1 + 8);
  return;
}



undefined2 * __thiscall FUN_009bfd20(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = func_0x00e7559c(*param_2,param_1 + 8);
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}



void __thiscall FUN_009bfd60(int param_1,undefined4 param_2)

{
  func_0x00e7559c(param_2,param_1 + 8);
  return;
}



undefined4 * __thiscall FUN_009bfd80(int param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = *(short **)(param_1 + 0x14);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  psVar3 = psVar2;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  func_0x005dd9e0(psVar2,(int)psVar3 - (int)(psVar2 + 1) >> 1);
  return param_2;
}



undefined1 * __thiscall
FUN_009bfdd0(int param_1,undefined1 *param_2,undefined1 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auStack_10 [4];
  undefined2 auStack_c [2];
  undefined8 uStack_8;
  
  if (param_2 != param_3) {
    do {
      auStack_10[0] = *param_2;
      uStack_8 = 0;
      iVar1 = func_0x00e73ee4(auStack_c,auStack_10,1,&uStack_8,param_1 + 0x18);
      uVar2 = auStack_c[0];
      if (iVar1 < 0) {
        uVar2 = 0xffff;
      }
      param_2 = param_2 + 1;
      *param_4 = uVar2;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}



undefined2 __thiscall FUN_009bfe40(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_10 [4];
  undefined2 auStack_c [2];
  undefined8 uStack_8;
  
  auStack_10[0] = param_2;
  uStack_8 = 0;
  iVar1 = func_0x00e73ee4(auStack_c,auStack_10,1,&uStack_8,param_1 + 0x18);
  if (iVar1 < 0) {
    auStack_c[0] = 0xffff;
  }
  return auStack_c[0];
}



void FUN_009bfe90(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



void __thiscall FUN_009bfea0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_58;
  undefined *puStack_54;
  undefined4 uStack_50;
  uint auStack_4c [2];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  tagPIXELFORMATDESCRIPTOR tStack_30;
  uint uStack_8;
  
  puStack_54 = &DAT_00f46e19;
  iStack_58 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_4c;
  *unaff_FS_OFFSET = (int)&iStack_58;
  uStack_44 = param_2;
  uStack_50 = 0;
  uStack_40 = param_2;
  uStack_38 = 0;
  piStack_34 = param_1;
  func_0x009b0510(uStack_8);
  uVar6 = 8;
  uStack_50 = 0;
  uStack_38 = 1;
  iVar4 = *(int *)(param_1[0x31] + 0x74);
  if (iVar4 == 0) {
    uVar6 = 1;
  }
  pcVar1 = *(code **)(*param_1 + 0x74);
  _guard_check_icall(auStack_4c);
  (*pcVar1)();
  iVar5 = (-(uint)(auStack_4c[0] < 3) & 0xffffffc0) + 0x44;
  DescribePixelFormat((HDC)piStack_34[0x3f],piStack_34[0x40],0x28,&tStack_30);
  uStack_3c = 0;
  if ((char)piStack_34[0x41] != '\0') {
    uStack_3c = 2;
  }
  func_0x009b03d0();
  uStack_f8 = (uint)tStack_30.cColorBits;
  uStack_f4 = (uint)tStack_30.cRedBits;
  uStack_f0 = (uint)tStack_30.cGreenBits;
  uStack_ec = (uint)tStack_30.cBlueBits;
  uStack_e4 = (uint)tStack_30.cAlphaBits;
  uStack_50 = 1;
  uStack_100 = 0x8058;
  uStack_fc = 0x88f0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  iVar3 = func_0x00a0d860(piStack_34[0x3f],piStack_34[0x40],0x2070,piStack_34[0x31]);
  uStack_dc = (uint)(iVar3 == 1);
  iVar3 = func_0x00a0d860(piStack_34[0x3f],piStack_34[0x40],0x2071,piStack_34[0x31]);
  uStack_d8 = (uint)(iVar3 == 1);
  uStack_d0 = 0x308e;
  uStack_cc = 0x3038;
  uStack_c0 = (uint)tStack_30.cDepthBits;
  uStack_bc = 0;
  uStack_b8 = 0x3038;
  iStack_c4 = iVar5;
  uStack_b4 = func_0x00a0d860(piStack_34[0x3f],piStack_34[0x40],0x202f,piStack_34[0x31]);
  uStack_b0 = func_0x00a0d860(piStack_34[0x3f],piStack_34[0x40],0x2030,piStack_34[0x31]);
  uStack_ac = func_0x00a0d860(piStack_34[0x3f],piStack_34[0x40],0x202e,piStack_34[0x31]);
  piVar2 = piStack_34;
  uStack_88 = (uint)tStack_30.cStencilBits;
  uStack_a0 = 1;
  uStack_9c = 0;
  uStack_98 = 0x3038;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_a8 = uVar6;
  uStack_a4 = (uint)(iVar4 == 0);
  iStack_94 = iVar5;
  iVar4 = func_0x00a0d860(piStack_34[0x3f],piStack_34[0x40],0x202d,piStack_34[0x31]);
  iVar5 = func_0x00a0d860(piVar2[0x3f],piVar2[0x40],0x2007,piVar2[0x31]);
  uStack_84 = 0;
  uStack_6c = 0x333a;
  uStack_80 = 0x3038;
  uStack_7c = 0;
  if (iVar5 == 0x2029) {
    uStack_84 = 0x400;
  }
  uStack_70 = uStack_3c;
  uStack_84 = uStack_84 | (uint)(iVar4 == 1) | tStack_30.dwFlags & 4;
  uStack_78 = 0;
  uStack_74 = 0;
  func_0x009b0700(&uStack_100);
  _guard_check_icall();
  *unaff_FS_OFFSET = iStack_58;
  FUN_008ab370();
  return;
}



void __thiscall FUN_009c01d0(int param_1,undefined1 *param_2)

{
  param_2[8] = *(undefined1 *)(param_1 + 0x104);
  param_2[7] = *(undefined1 *)(param_1 + 0x104);
  *param_2 = *(undefined1 *)(param_1 + 0xc9);
  param_2[2] = *(undefined1 *)(param_1 + 0x105);
  param_2[1] = *(undefined1 *)(param_1 + 0x105);
  *(undefined2 *)(param_2 + 3) = 0x101;
  param_2[6] = 1;
  *(undefined2 *)(param_2 + 0x22) = 0x101;
  param_2[0x21] = 1;
  param_2[0x26] = 1;
  return;
}



void FUN_009c0230(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0x00a06b50();
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return;
}



int * FUN_009c0250(int *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46e5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x009c0750(&iStack_20,param_2,uVar3);
  uStack_8 = 0;
  if (iStack_20 != 0x3000) {
    func_0x009bed20();
    *param_1 = iStack_20;
    param_1[1] = iStack_1c;
    param_1[2] = (int)piStack_18;
    *unaff_FS_OFFSET = iStack_10;
    return param_1;
  }
  FUN_0098f350(param_1,param_2);
  if (piStack_18 != (int *)0x0) {
    uVar3 = piStack_18[5];
    if (0xf < uVar3) {
      iVar1 = *piStack_18;
      uVar6 = uVar3 + 1;
      iVar4 = iVar1;
      if (0xfff < uVar6) {
        iVar4 = *(int *)(iVar1 + -4);
        uVar6 = uVar3 + 0x24;
        if (0x1f < (iVar1 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar2 = (code *)swi(3);
          piVar5 = (int *)(*pcVar2)();
          return piVar5;
        }
      }
      func_0x008ab812(iVar4,uVar6);
    }
    piStack_18[4] = 0;
    piStack_18[5] = 0xf;
    *(undefined1 *)piStack_18 = 0;
    func_0x008ab812(piStack_18,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_009c0740(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x98);
  if (*(char *)(iVar1 + 0x25) == '\0') {
    func_0x009f7d60(*(undefined4 *)(iVar1 + 0x10),iVar1 + 0x13c8,iVar1 + 0x28,iVar1 + 0x398,
                    iVar1 + 0x1278,iVar1 + 0x134e,iVar1 + 8,iVar1 + 0x1360,iVar1 + 0x1364);
    *(undefined1 *)(iVar1 + 0x25) = 1;
  }
  func_0x00a039e0(*(undefined4 *)(iVar1 + 0x10),param_2);
  return;
}



bool FUN_009c1690(HWND param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindow(param_1);
  return BVar1 == 1;
}



void __thiscall FUN_009c16b0(int param_1,LPCSTR param_2)

{
  code *pcVar1;
  LPCSTR pCVar2;
  int iVar3;
  
  pcVar1 = *(code **)(param_1 + 0xb4c);
  pCVar2 = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pCVar2 = *(LPCSTR *)param_2;
  }
  _guard_check_icall(pCVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    if (0xf < *(uint *)(param_2 + 0x14)) {
      param_2 = *(LPCSTR *)param_2;
    }
    GetProcAddress(*(HMODULE *)(param_1 + 0xb48),param_2);
  }
  return;
}



void __thiscall
FUN_009c1700(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [152];
  int iStack_5c;
  undefined *puStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [12];
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  uStack_54 = 0xffffffff;
  puStack_58 = &DAT_00f470a8;
  iStack_5c = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_50;
  *unaff_FS_OFFSET = (int)&iStack_5c;
  uStack_34 = param_2;
  uStack_38 = param_3;
  iStack_30 = param_4;
  uStack_3c = param_5;
  iStack_2c = param_6;
  iStack_28 = param_1;
  uStack_44 = func_0x009db0d0(uStack_8);
  piVar3 = (int *)func_0x009bb820(auStack_50,&uStack_44);
  iVar4 = *(int *)(param_1 + 0xfc);
  iVar1 = *piVar3;
  if (iStack_30 != 0) {
    pcVar2 = *(code **)(**(int **)(iStack_30 + 0x80) + 0xac);
    iStack_24 = iVar4;
    _guard_check_icall();
    iVar4 = (*pcVar2)();
  }
  iVar5 = *(int *)(iVar1 + 0x14);
  iStack_24 = iVar4;
  if (iStack_2c == 0) {
    if (*(char *)(iStack_28 + 0x104) == '\0') {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = func_0x00a096c0();
  }
  if ((iVar4 != *(int *)(iVar1 + 0x10)) || (iVar5 != *(int *)(iVar1 + 0x14))) {
    pcVar2 = *(code **)(*(int *)(iStack_28 + 0xc4) + 0x28);
    _guard_check_icall(iStack_24,iVar5);
    iVar4 = (*pcVar2)();
    if (iVar4 == 0) {
      func_0x005d5720(1);
      uStack_54 = 0;
      func_0x0046b6e0(auStack_f4,"Failed to make the WGL context current.");
      func_0x0046a470(aiStack_20);
      uStack_54 = CONCAT31(uStack_54._1_3_,1);
      func_0x0091ffd0(0x300e,0x300e,aiStack_20);
      if (0xf < uStack_c) {
        uVar6 = uStack_c + 1;
        iVar4 = aiStack_20[0];
        if (0xfff < uVar6) {
          iVar4 = *(int *)(aiStack_20[0] + -4);
          uVar6 = uStack_c + 0x24;
          if (0x1f < (aiStack_20[0] - iVar4) - 4U) {
            func_0x008aaf66();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        func_0x008ab812(iVar4,uVar6);
      }
      func_0x005d3940();
      goto LAB_009c18bd;
    }
    *(int *)(iVar1 + 0x10) = iStack_24;
    *(int *)(iVar1 + 0x14) = iVar5;
  }
  FUN_009f7030(uStack_34,uStack_38,iStack_30,uStack_3c,iStack_2c);
LAB_009c18bd:
  *unaff_FS_OFFSET = iStack_5c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_009c18f0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [24];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4711a;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar4 = false;
  bVar3 = false;
  pcVar2 = *(code **)(*(int *)(param_1 + 4) + 0x28);
  _guard_check_icall(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),uStack_14);
  iVar6 = (*pcVar2)();
  if (iVar6 == 0) {
    cVar5 = func_0x00952a70(3);
    if (cVar5 != '\0') {
      iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\wgl\\DisplayWGL.cpp"
                              ,"rx::WorkerContextWGL::makeCurrent",0x3c6,3);
      uStack_8 = 0;
      puVar7 = (undefined4 *)func_0x009bcdc0(auStack_2c);
      bVar4 = true;
      bVar3 = true;
      puVar1 = puVar7 + 4;
      uStack_8 = 1;
      if (0xf < (uint)puVar7[5]) {
        puVar7 = (undefined4 *)*puVar7;
      }
      func_0x0046cb10(iVar6 + 0x10,puVar7,*puVar1);
    }
    if (bVar3) {
      FUN_00469ba0();
    }
    if (bVar4) {
      func_0x00952760();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_009c1a00(void)

{
  return 0xffff;
}



short __thiscall FUN_009c1a10(int param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  void *pvVar4;
  uint uVar5;
  void *pvStack_c;
  void *pvStack_8;
  void *pvStack_4;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar1 = **(uint **)(param_1 + 0x20);
  iVar2 = **(int **)(param_1 + 0x30);
  uVar5 = uVar1 + iVar2 * 2;
  if (uVar1 == 0) {
    uVar5 = 0;
    pvStack_c = (void *)**(int **)(param_1 + 0xc);
  }
  else {
    if (uVar1 < uVar5) {
      **(int **)(param_1 + 0x30) = iVar2 + -1;
      psVar3 = (short *)**(int **)(param_1 + 0x20);
      **(int **)(param_1 + 0x20) = (int)(psVar3 + 1);
      *psVar3 = param_2;
      *(uint *)(param_1 + 0x38) = uVar1 + 2;
      return param_2;
    }
    pvStack_c = (void *)**(int **)(param_1 + 0xc);
    uVar5 = (int)(uVar5 - (int)pvStack_c) >> 1;
    if (0x1f < uVar5) {
      if (uVar5 < 0x3fffffff) {
        pvStack_8 = (void *)(uVar5 * 2);
      }
      else {
        if (0x7ffffffe < uVar5) {
          return -1;
        }
        pvStack_8 = (void *)0x7fffffff;
      }
      goto LAB_009c1ac6;
    }
  }
  pvStack_8 = (void *)0x20;
LAB_009c1ac6:
  pvStack_4 = pvStack_8;
  pvStack_8 = (void *)func_0x0058a440(param_1 + 0x40,&pvStack_8);
  memcpy(pvStack_8,pvStack_c,uVar5 * 2);
  pvVar4 = (void *)((int)pvStack_8 + uVar5 * 2);
  *(int *)(param_1 + 0x38) = (int)pvVar4 + 2;
  **(undefined4 **)(param_1 + 0x10) = pvStack_8;
  **(undefined4 **)(param_1 + 0x20) = pvVar4;
  **(int **)(param_1 + 0x30) = ((int)pvStack_4 * 2 - (int)pvVar4) + (int)pvStack_8 >> 1;
  if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    pvVar4 = (void *)((int)pvStack_8 + (**(int **)(param_1 + 0x1c) - (int)pvStack_c >> 1) * 2);
    **(undefined4 **)(param_1 + 0xc) = pvStack_8;
    **(int **)(param_1 + 0x1c) = (int)pvVar4;
    **(int **)(param_1 + 0x2c) = iVar2 - (int)pvVar4 >> 1;
  }
  else {
    **(undefined4 **)(param_1 + 0xc) = pvStack_8;
    **(undefined4 **)(param_1 + 0x1c) = pvStack_8;
    **(undefined4 **)(param_1 + 0x2c) = 0;
  }
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    func_0x00589650(pvStack_c,uVar5);
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
  **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + -1;
  psVar3 = (short *)**(int **)(param_1 + 0x20);
  **(int **)(param_1 + 0x20) = (int)(psVar3 + 1);
  *psVar3 = param_2;
  return param_2;
}



uint __thiscall FUN_009c1bb0(int param_1,ushort param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x1c);
  uVar1 = *puVar2;
  if (((uVar1 != 0) && (puVar2 = *(uint **)(param_1 + 0xc), *puVar2 < uVar1)) &&
     ((param_2 == 0xffff ||
      ((param_2 == *(ushort *)(uVar1 - 2) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)))))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -2;
    if (param_2 != 0xffff) {
      *(ushort *)**(undefined4 **)(param_1 + 0x1c) = param_2;
    }
    uVar1 = (uint)param_2;
    if (param_2 == 0xffff) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return CONCAT22((short)((uint)puVar2 >> 0x10),0xffff);
}



void __thiscall FUN_009c1c10(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x98) + 0x13c8);
  piVar1 = (int *)*puVar5;
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    puVar3 = *(undefined4 **)(param_2 + 4);
    puVar4 = piVar2 + 10;
    if (puVar3 == *(undefined4 **)(param_2 + 8)) {
      func_0x008c0640(puVar3,puVar4);
    }
    else {
      *puVar3 = *puVar4;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 4;
    }
    func_0x00499be0();
    piVar1 = (int *)*puVar5;
  }
  return;
}



void FUN_009c1ef0(void)

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
  puStack_c = &DAT_00f471b8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x005d5720(1,uStack_14);
  uStack_8 = 0;
  func_0x0046a470(aiStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0091ffd0(0x3008,0x3008,aiStack_2c);
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



void FUN_009c1fd0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



uint * __thiscall
FUN_009c2000(int param_1,uint *param_2,uint param_3,int param_4,int param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puStack_c;
  uint uStack_8;
  
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
  if ((bVar4) || (bVar5)) goto LAB_009c21c1;
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
  iVar8 = *(int *)(param_1 + 0x38) - iVar2;
  puVar9 = (uint *)(iVar8 >> 1);
  uVar7 = iVar8 >> 0x1f;
  if (param_5 == 0) {
    uStack_8 = 0;
    puStack_c = (uint *)0x0;
LAB_009c20f5:
    puVar10 = (uint *)((int)puStack_c + param_3);
    uVar6 = uStack_8 + param_4 + (uint)CARRY4((uint)puStack_c,param_3);
    if ((uVar6 <= uVar7) && ((uVar6 < uVar7 || (puVar10 <= puVar9)))) {
      if ((puVar10 != (uint *)0x0 || uVar6 != 0) &&
         ((((param_6 & 1) != 0 && (iVar1 == 0)) || (((param_6 & 2) != 0 && (uVar11 == 0)))))) {
        func_0x00468710(0xffffffff,0xffffffff);
        return puVar9;
      }
      iVar8 = iVar2 + (int)puVar10 * 2;
      if (((param_6 & 1) != 0) && (iVar1 != 0)) {
        iVar1 = *(int *)(param_1 + 0x38);
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = iVar8;
        **(int **)(param_1 + 0x2c) = iVar1 - iVar8 >> 1;
      }
      if (((param_6 & 2) != 0) && (uVar11 != 0)) {
        iVar1 = **(int **)(param_1 + 0x30);
        iVar3 = **(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x10) = iVar2;
        **(int **)(param_1 + 0x20) = iVar8;
        **(int **)(param_1 + 0x30) = (iVar3 + iVar1 * 2) - iVar8 >> 1;
      }
      *param_2 = (uint)puVar10;
      param_2[1] = uVar6;
      goto LAB_009c21d2;
    }
  }
  else if (param_5 == 1) {
    if ((param_6 & 3) != 3) {
      if ((param_6 & 1) == 0) {
        if (((param_6 & 2) != 0) && ((uVar11 != 0 || (iVar2 == 0)))) {
          uStack_8 = (int)(uVar11 - iVar2) >> 0x1f;
          puStack_c = (uint *)((int)(uVar11 - iVar2) >> 1);
          goto LAB_009c20f5;
        }
      }
      else if ((iVar1 != 0) || (iVar2 == 0)) {
        uStack_8 = iVar1 - iVar2 >> 0x1f;
        puStack_c = (uint *)(iVar1 - iVar2 >> 1);
        goto LAB_009c20f5;
      }
    }
  }
  else {
    uStack_8 = uVar7;
    puStack_c = puVar9;
    if (param_5 == 2) goto LAB_009c20f5;
  }
LAB_009c21c1:
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
LAB_009c21d2:
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_2;
}



void FUN_009c2200(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



uint * __thiscall
FUN_009c2230(int param_1,uint *param_2,uint param_3,int param_4,uint param_5,int param_6,
            undefined4 param_7,undefined4 param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (((param_9 & 1) == 0) || ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((param_9 & 2) == 0) || ((*(byte *)(param_1 + 0x3c) & 2) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar6) && (!bVar7)) {
    uVar11 = param_3 + param_5;
    uVar10 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    iVar2 = **(int **)(param_1 + 0x1c);
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      uVar8 = **(uint **)(param_1 + 0x20);
      if ((uVar8 != 0) && (*(uint *)(param_1 + 0x38) < uVar8)) {
        *(uint *)(param_1 + 0x38) = uVar8;
      }
    }
    else {
      uVar8 = 0;
    }
    iVar3 = **(int **)(param_1 + 0xc);
    puVar4 = *(uint **)(param_1 + 0x38);
    uVar9 = (int)puVar4 - iVar3 >> 0x1f;
    if ((uVar10 <= uVar9) && ((uVar10 < uVar9 || (uVar11 <= (uint)((int)puVar4 - iVar3 >> 1))))) {
      if ((uVar11 != 0 || uVar10 != 0) &&
         ((((param_9 & 1) != 0 && (iVar2 == 0)) || (((param_9 & 2) != 0 && (uVar8 == 0)))))) {
        func_0x00468710(0xffffffff,0xffffffff);
        return puVar4;
      }
      iVar1 = iVar3 + uVar11 * 2;
      if (((param_9 & 1) != 0) && (iVar2 != 0)) {
        **(int **)(param_1 + 0xc) = iVar3;
        **(int **)(param_1 + 0x1c) = iVar1;
        **(int **)(param_1 + 0x2c) = (int)puVar4 - iVar1 >> 1;
      }
      if (((param_9 & 2) != 0) && (uVar8 != 0)) {
        iVar2 = **(int **)(param_1 + 0x30);
        iVar5 = **(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x10) = iVar3;
        **(int **)(param_1 + 0x20) = iVar1;
        **(int **)(param_1 + 0x30) = (iVar5 + iVar2 * 2) - iVar1 >> 1;
      }
      *param_2 = uVar11;
      param_2[1] = uVar10;
      goto LAB_009c2383;
    }
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
LAB_009c2383:
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_2;
}



void __fastcall FUN_009c2520(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  HMODULE hInstance;
  BOOL BVar6;
  int iVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x9c2528;
  _guard_check_icall();
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f46d41;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(param_1 + 0x11c);
  iVar7 = *(int *)(param_1 + 0x110);
  piVar2 = (int *)*piVar1;
  do {
    if (piVar2 == piVar1) {
LAB_009bedd3:
      piVar1 = *(int **)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      if (piVar1 != (int *)0x0) {
        LOCK();
        iVar7 = piVar1[1] + -1;
        piVar1[1] = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar3 = *(code **)*piVar1;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          iVar7 = piVar1[2] + -1;
          piVar1[2] = iVar7;
          UNLOCK();
          if (iVar7 == 0) {
            pcVar3 = *(code **)(*piVar1 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
      if ((*(int *)(param_1 + 0xc4) != 0) && (*(int *)(param_1 + 0xfc) != 0)) {
        pcVar3 = *(code **)(*(int *)(param_1 + 0xc4) + 0x28);
        _guard_check_icall(*(int *)(param_1 + 0xfc),0);
        (*pcVar3)();
      }
      func_0x009bdd50();
      iVar7 = *(int *)(param_1 + 0xc4);
      if (iVar7 != 0) {
        func_0x00a073d0();
        func_0x008ab812(iVar7,0xb8);
      }
      *(undefined4 *)(param_1 + 0xc4) = 0;
      if (*(HDC *)(param_1 + 0xfc) != (HDC)0x0) {
        ReleaseDC(*(HWND *)(param_1 + 0xf8),*(HDC *)(param_1 + 0xfc));
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
      if (*(HWND *)(param_1 + 0xf8) != (HWND)0x0) {
        DestroyWindow(*(HWND *)(param_1 + 0xf8));
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      if (*(short *)(param_1 + 0xf4) != 0) {
        hInstance = GetModuleHandleA((LPCSTR)0x0);
        BVar6 = UnregisterClassA((LPCSTR)(uint)*(ushort *)(param_1 + 0xf4),hInstance);
        if (BVar6 == 0) {
          cVar4 = func_0x00952a70(2);
          if (cVar4 != '\0') {
            iVar7 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\wgl\\DisplayWGL.cpp"
                                    ,"rx::DisplayWGL::destroy",0x17d,2);
            uStack_8 = 0;
            uVar8 = func_0x0046b6e0(iVar7 + 0x10,"Failed to unregister OpenGL window class: ");
            func_0x009ba9c0(uVar8,*(undefined2 *)(param_1 + 0xf4),&DAT_00f9ad64,0x30);
          }
          uStack_8 = 0xffffffff;
          if (cVar4 != '\0') {
            func_0x00952760();
          }
        }
        *(undefined2 *)(param_1 + 0xf4) = 0;
      }
      if (*(HMODULE *)(param_1 + 0xc0) != (HMODULE)0x0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0xc0));
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      piVar1 = *(int **)(param_1 + 0x114);
      if (piVar1 != (int *)0x0) {
        pcVar3 = *(code **)(*piVar1 + 8);
        _guard_check_icall(piVar1);
        (*pcVar3)();
        *(undefined4 *)(param_1 + 0x114) = 0;
      }
      piVar1 = *(int **)(param_1 + 0x118);
      if (piVar1 != (int *)0x0) {
        pcVar3 = *(code **)(*piVar1 + 8);
        _guard_check_icall(piVar1);
        (*pcVar3)();
        *(undefined4 *)(param_1 + 0x118) = 0;
      }
      if (*(HMODULE *)(param_1 + 0x108) != (HMODULE)0x0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x108));
        *(undefined4 *)(param_1 + 0x108) = 0;
      }
      if (*(HMODULE *)(param_1 + 0x10c) != (HMODULE)0x0) {
        FreeLibrary(*(HMODULE *)(param_1 + 0x10c));
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
    if (piVar2[5] == iVar7) {
      piVar1 = piVar2 + 6;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)(*(int *)(param_1 + 0xc4) + 0xa0);
        _guard_check_icall(piVar2[5],uVar5);
        (*pcVar3)();
        pcVar3 = *(code **)(*(int *)piVar2[4] + 8);
        _guard_check_icall((int *)piVar2[4]);
        (*pcVar3)();
        uVar8 = func_0x008c33a0(piVar2);
        func_0x008ab812(uVar8,0x1c);
        goto LAB_009bedd3;
      }
    }
    func_0x00499be0();
    piVar1 = *(int **)(param_1 + 0x11c);
  } while( true );
}



undefined2 __fastcall FUN_009c2550(int *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  short sVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x18);
  _guard_check_icall();
  sVar3 = (*pcVar1)();
  if (sVar3 == -1) {
    return 0xffff;
  }
  *(int *)param_1[0xb] = *(int *)param_1[0xb] + -1;
  puVar2 = *(undefined2 **)param_1[7];
  *(undefined2 **)param_1[7] = puVar2 + 1;
  return *puVar2;
}



undefined4 FUN_009c2590(void)

{
  return 0xffff;
}



undefined2 __fastcall FUN_009c25a0(int param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  puVar2 = (undefined2 *)*piVar1;
  if (puVar2 != (undefined2 *)0x0) {
    if (puVar2 < puVar2 + **(int **)(param_1 + 0x2c)) {
      return *puVar2;
    }
    puVar3 = (undefined2 *)**(undefined4 **)(param_1 + 0x20);
    if ((puVar3 != (undefined2 *)0x0) && ((*(byte *)(param_1 + 0x3c) & 4) == 0)) {
      puVar5 = *(undefined2 **)(param_1 + 0x38);
      if (*(undefined2 **)(param_1 + 0x38) < puVar3) {
        puVar5 = puVar3;
      }
      if (puVar2 < puVar5) {
        *(undefined2 **)(param_1 + 0x38) = puVar5;
        iVar4 = *piVar1;
        *piVar1 = iVar4;
        **(int **)(param_1 + 0x2c) = (int)puVar5 - iVar4 >> 1;
        return *(undefined2 *)**(undefined4 **)(param_1 + 0x1c);
      }
    }
  }
  return 0xffff;
}



void __fastcall FUN_009c2610(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x28);
  _guard_check_icall(*(undefined4 *)(param_1 + 0xc),0);
  (*pcVar1)();
  return;
}



int * __thiscall
FUN_009c2630(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *unaff_retaddr;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  if ((param_4 != 0x3200) && (param_4 != 0x33a3)) {
    FUN_009b8f30(param_2,param_3,param_4,param_5,param_6);
    return param_2;
  }
  func_0x009c0500(&iStack_c);
  if (iStack_10 != 0x3000) {
    *unaff_retaddr = iStack_10;
    unaff_retaddr[1] = iStack_c;
    unaff_retaddr[2] = (int)piStack_8;
    return unaff_retaddr;
  }
  if (piStack_8 != (int *)0x0) {
    uVar1 = piStack_8[5];
    if (0xf < uVar1) {
      iVar2 = *piStack_8;
      uVar6 = uVar1 + 1;
      iVar4 = iVar2;
      if (0xfff < uVar6) {
        iVar4 = *(int *)(iVar2 + -4);
        uVar6 = uVar1 + 0x24;
        if (0x1f < (iVar2 - iVar4) - 4U) {
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          piVar5 = (int *)(*pcVar3)();
          return piVar5;
        }
      }
      func_0x008ab812(iVar4,uVar6);
    }
    piStack_8[4] = 0;
    piStack_8[5] = 0xf;
    *(undefined1 *)piStack_8 = 0;
    func_0x008ab812(piStack_8,0x18);
  }
  func_0x00a0a1c0(unaff_retaddr,param_4,param_4,*(undefined4 *)(param_1 + 0x114),
                  *(undefined4 *)(param_1 + 0x118));
  return unaff_retaddr;
}



undefined8 __thiscall FUN_009c2760(int *param_1,short *param_2,uint param_3,int param_4)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  uint uVar5;
  bool bVar6;
  int iStack_10;
  
  iVar4 = param_4;
  uVar5 = param_3;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    do {
      if (*(void **)param_1[7] == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)param_1[0xb];
      }
      iStack_10 = (int)uVar3 >> 0x1f;
      if ((iStack_10 < 0) || ((-1 < (int)uVar3 || iStack_10 < 0 && (uVar3 == 0)))) {
        pcVar1 = *(code **)(*param_1 + 0x1c);
        _guard_check_icall();
        sVar2 = (*pcVar1)();
        if (sVar2 == -1) break;
        bVar6 = uVar5 != 0;
        uVar5 = uVar5 - 1;
        _Size = 2;
        iVar4 = iVar4 + -1 + (uint)bVar6;
        *param_2 = sVar2;
      }
      else {
        if ((iVar4 <= iStack_10) && ((iVar4 < iStack_10 || (uVar5 < uVar3)))) {
          uVar3 = uVar5;
          iStack_10 = iVar4;
        }
        _Size = uVar3 * 2;
        memcpy(param_2,*(void **)param_1[7],_Size);
        bVar6 = uVar5 < uVar3;
        uVar5 = uVar5 - uVar3;
        iVar4 = (iVar4 - iStack_10) - (uint)bVar6;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - uVar3;
        *(int *)param_1[7] = *(int *)param_1[7] + _Size;
      }
      param_2 = (short *)((int)param_2 + _Size);
      if ((iVar4 < 1) && ((iVar4 < 0 || (uVar5 == 0)))) break;
    } while( true );
  }
  return CONCAT44((param_4 - iVar4) - (uint)(param_3 < uVar5),param_3 - uVar5);
}



undefined8 __thiscall FUN_009c2860(int *param_1,undefined2 *param_2,uint param_3,int param_4)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  uint uVar5;
  bool bVar6;
  int iStack_10;
  
  iVar4 = param_4;
  uVar5 = param_3;
  if ((-1 < param_4) && ((0 < param_4 || (param_3 != 0)))) {
    do {
      if (*(void **)param_1[8] == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)param_1[0xc];
      }
      iStack_10 = (int)uVar3 >> 0x1f;
      if ((iStack_10 < 0) || ((-1 < (int)uVar3 || iStack_10 < 0 && (uVar3 == 0)))) {
        pcVar1 = *(code **)(*param_1 + 0xc);
        _guard_check_icall(*param_2);
        sVar2 = (*pcVar1)();
        if (sVar2 == -1) break;
        bVar6 = uVar5 != 0;
        uVar5 = uVar5 - 1;
        _Size = 2;
        iVar4 = iVar4 + -1 + (uint)bVar6;
      }
      else {
        if ((iVar4 <= iStack_10) && ((iVar4 < iStack_10 || (uVar5 < uVar3)))) {
          uVar3 = uVar5;
          iStack_10 = iVar4;
        }
        _Size = uVar3 * 2;
        memcpy(*(void **)param_1[8],param_2,_Size);
        bVar6 = uVar5 < uVar3;
        uVar5 = uVar5 - uVar3;
        iVar4 = (iVar4 - iStack_10) - (uint)bVar6;
        *(int *)param_1[0xc] = *(int *)param_1[0xc] - uVar3;
        *(int *)param_1[8] = *(int *)param_1[8] + _Size;
      }
      param_2 = (undefined2 *)((int)param_2 + _Size);
      if ((iVar4 < 1) && ((iVar4 < 0 || (uVar5 == 0)))) break;
    } while( true );
  }
  return CONCAT44((param_4 - iVar4) - (uint)(param_3 < uVar5),param_3 - uVar5);
}



undefined4 * __thiscall FUN_009c2990(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::DeviceD3D::vftable;
  if ((*(char *)(param_1 + 3) != '\0') && (param_1[2] == 0x33a1)) {
    pcVar1 = *(code **)(*(int *)param_1[1] + 8);
    _guard_check_icall((int *)param_1[1],uVar2);
    (*pcVar1)();
  }
  func_0x009db570();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall
FUN_009c2a20(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  *param_5 = *(undefined4 *)(param_1 + 4);
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// WARNING: Type propagation algorithm not settling

void __thiscall FUN_009c2a50(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_d4;
  undefined **appuStack_d0 [14];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  uStack_30 = 0xffffffff;
  puStack_34 = &DAT_00f4726f;
  iStack_38 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&pppuStack_2c;
  *unaff_FS_OFFSET = (int)&iStack_38;
  puStack_24 = param_2;
  uStack_28 = 0;
  if (*(int *)(param_1 + 8) == 0x33a1) {
    puStack_24 = (undefined4 *)0x0;
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
    _guard_check_icall(*(undefined4 **)(param_1 + 4),&DAT_00fb7748,&puStack_24,uStack_8);
    iVar2 = (*pcVar1)();
    if (iVar2 < 0) {
      pppuStack_2c = appuStack_d0;
      appuStack_d0[0] = (undefined **)&DAT_01141e20;
      func_0x0046a560();
      uStack_30 = 0;
      uStack_28 = 2;
      *(undefined ***)((int)appuStack_d0 + (int)appuStack_d0[0][1]) = std::basic_ostream<>::vftable;
      *(undefined **)((int)&iStack_d4 + (int)appuStack_d0[0][1]) = appuStack_d0[0][1] + -8;
      func_0x0046b070(appuStack_d0 + 1,0);
      uStack_30 = 2;
      *(undefined ***)((int)appuStack_d0 + (int)appuStack_d0[0][1]) =
           std::basic_ostringstream<>::vftable;
      *(undefined **)((int)&iStack_d4 + (int)appuStack_d0[0][1]) = appuStack_d0[0][1] + -0x50;
      appuStack_d0[1] = std::basic_streambuf<>::vftable;
      appuStack_d0[2] = (undefined **)0x0;
      appuStack_d0[3] = (undefined **)0x0;
      appuStack_d0[4] = (undefined **)0x0;
      appuStack_d0[5] = (undefined **)0x0;
      appuStack_d0[6] = (undefined **)0x0;
      appuStack_d0[7] = (undefined **)0x0;
      appuStack_d0[8] = (undefined **)0x0;
      appuStack_d0[9] = (undefined **)0x0;
      appuStack_d0[10] = (undefined **)0x0;
      appuStack_d0[0xb] = (undefined **)0x0;
      appuStack_d0[0xc] = (undefined **)0x0;
      appuStack_d0[0xd] = (undefined **)0x0;
      iStack_98 = func_0x008ab47d(8);
      if (iStack_98 == 0) {
        iStack_98 = 0;
      }
      else {
        uStack_30 = CONCAT31(uStack_30._1_3_,3);
        uVar3 = func_0x00e70415(1);
        *(undefined4 *)(iStack_98 + 4) = uVar3;
      }
      func_0x0046adc0();
      appuStack_d0[1] = std::basic_stringbuf<>::vftable;
      uStack_94 = 0;
      uStack_90 = 4;
      uStack_30 = 4;
      func_0x0046b6e0(appuStack_d0,"Invalid D3D device passed into EGLDeviceEXT");
      func_0x0046a470(aiStack_20);
      uStack_30 = CONCAT31(uStack_30._1_3_,5);
      func_0x0091ffd0(0x3004,0x3004,aiStack_20);
      if (0xf < uStack_c) {
        uVar4 = uStack_c + 1;
        iVar2 = aiStack_20[0];
        if (0xfff < uVar4) {
          iVar2 = *(int *)(aiStack_20[0] + -4);
          uVar4 = uStack_c + 0x24;
          if (0x1f < (aiStack_20[0] - iVar2) - 4U) {
            func_0x008aaf66();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        func_0x008ab812(iVar2,uVar4);
      }
      func_0x005d3940();
      goto LAB_009c2c71;
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_009c2c71:
  *unaff_FS_OFFSET = iStack_38;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_009c2ce0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::EGLSyncImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009c2d10(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ReusableSync::vftable;
  func_0x00e7323d(param_1 + 2);
  if (*(char *)(param_1 + 0xd) != '\0') {
    func_0x00e730b2(param_1[0xc]);
  }
  *param_1 = rx::EGLSyncImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x009c2f76)
// WARNING: Removing unreachable block (ram,0x009c2fbf)

undefined4 * __thiscall
FUN_009c2d60(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,byte param_5,
            uint param_6,uint param_7,undefined4 *param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_1c;
  int iStack_14;
  uint uStack_c;
  int iStack_8;
  
  if (*(int *)(param_1 + 4) == 0x30f2) {
    *param_8 = 0x30f6;
    *param_2 = 0x3000;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  if (((param_5 & 1) != 0) && (param_4 != 0)) {
    pcVar1 = *(code **)(**(int **)(param_4 + 0x1d14) + 0x50);
    _guard_check_icall(param_4);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      func_0x00920160(param_2,iVar2);
      return param_2;
    }
  }
  if (param_6 == 0 && param_7 == 0) {
LAB_009c300e:
    *param_8 = 0x30f5;
LAB_009c3024:
    *param_2 = 0x3000;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  if ((param_6 & param_7) == 0xffffffff) {
    param_6 = 0xffffffff;
    param_7 = 0x7fffffff;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
LAB_009c3046:
    func_0x00585aa0(1);
LAB_009c304d:
    func_0x00585aa0(0x24);
  }
  else {
    if (*(char *)(param_1 + 0x34) != '\0') goto LAB_009c304d;
    iVar3 = func_0x00e7307f(iVar2);
    if (iVar3 == 0) {
      if (*(int *)(iVar2 + 0x2c) == 0x7fffffff) goto LAB_009c305b;
      *(undefined1 *)(param_1 + 0x34) = 1;
      if (((int)param_7 < 1) && (((int)param_7 < 0 || (param_6 == 0)))) {
LAB_009c2fe5:
        iVar2 = 1;
      }
      else {
        func_0x0046ede0(&uStack_c);
        if (((int)(0x7fffffff - param_7) < iStack_8) ||
           (((int)(0x7fffffff - param_7) <= iStack_8 && (-param_6 - 1 <= uStack_c)))) {
          uStack_1c = 0xffffffff;
          iStack_14 = 0x7fffffff;
        }
        else {
          uStack_1c = param_6 + uStack_c;
          iStack_14 = param_7 + iStack_8 + (uint)CARRY4(param_6,uStack_c);
        }
        do {
          lVar6 = func_0x00e728cb();
          uStack_c = (uint)lVar6;
          lVar7 = func_0x00e728b4();
          uVar10 = (undefined4)lVar7;
          if (lVar6 == 10000000) {
            lVar7 = lVar7 * 100;
          }
          else {
            if (lVar6 == 24000000) {
              uVar8 = func_0x00e87ec0(lVar7,24000000,0);
              lVar6 = func_0x00e87d70(uVar8,24000000,0);
              uVar9 = func_0x00e87d70(lVar7 - lVar6,1000000000,0);
              uVar11 = 0;
              uVar10 = 24000000;
            }
            else {
              uVar8 = func_0x00e87fa0(lVar7,lVar6);
              uVar11 = 0;
              uVar9 = func_0x00e87d70(extraout_ECX,(int)((ulonglong)lVar7 >> 0x20),1000000000,0);
            }
            lVar7 = func_0x00e87ec0(uVar9,uVar10,uVar11);
            lVar6 = (uVar8 & 0xffffffff) * 1000000000;
            lVar7 = lVar7 + CONCAT44((int)(uVar8 >> 0x20) * 1000000000 +
                                     (int)((ulonglong)lVar6 >> 0x20),(int)lVar6);
          }
          if (CONCAT44(iStack_14,uStack_1c) <= lVar7) goto LAB_009c2fe5;
          uVar5 = uStack_1c - (uint)lVar7;
          iVar2 = (iStack_14 - (int)((ulonglong)lVar7 >> 0x20)) - (uint)(uStack_1c < (uint)lVar7);
          if ((iVar2 < 0x4e94) || ((iVar2 < 0x4e95 && (uVar5 < 0x914f0001)))) {
            uVar9 = func_0x00e87ec0(uVar5,iVar2,1000000,0);
            iVar3 = (int)uVar9;
            lVar7 = func_0x00e87d70(uVar9,1000000,0);
            if (lVar7 < CONCAT44(iVar2,uVar5)) {
              iVar3 = iVar3 + 1;
            }
          }
          else {
            iVar3 = 86400000;
          }
          iVar2 = func_0x00e754e0(param_1 + 8,*(undefined4 *)(param_1 + 0x30),iVar3);
        } while (iVar2 != 0);
        iVar2 = 0;
      }
      if ((*(int *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x34) != '\0')) {
        func_0x00e730b2(*(int *)(param_1 + 0x30));
        *(undefined1 *)(param_1 + 0x34) = 0;
        if (iVar2 == 0) {
          *param_8 = 0x30f6;
          goto LAB_009c3024;
        }
        if (iVar2 != 1) goto LAB_009c3024;
        goto LAB_009c300e;
      }
      goto LAB_009c3046;
    }
  }
  func_0x00e7304a(5);
LAB_009c305b:
  *(undefined4 *)(iVar2 + 0x2c) = 0x7ffffffe;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined4 *)(*pcVar1)();
  return puVar4;
}



void __thiscall FUN_009c3070(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = *(undefined4 *)(param_1 + 4);
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



void FUN_009c30a0(undefined4 *param_1)

{
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// WARNING: Type propagation algorithm not settling

void FUN_009c30c0(void)

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
  int iStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined ***pppuStack_28;
  undefined4 uStack_24;
  int aiStack_20 [5];
  uint uStack_c;
  uint uStack_8;
  
  uStack_2c = 0xffffffff;
  puStack_30 = &DAT_00f472df;
  iStack_34 = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)&pppuStack_28;
  *unaff_FS_OFFSET = (int)&iStack_34;
  pppuStack_28 = appuStack_cc;
  uStack_24 = 0;
  appuStack_cc[0] = (undefined **)&DAT_01141e20;
  func_0x0046a560(uStack_8);
  uStack_2c = 0;
  uStack_24 = 2;
  *(undefined ***)((int)appuStack_cc + (int)appuStack_cc[0][1]) = std::basic_ostream<>::vftable;
  *(undefined **)((int)&iStack_d0 + (int)appuStack_cc[0][1]) = appuStack_cc[0][1] + -8;
  func_0x0046b070(appuStack_cc + 1,0);
  uStack_2c = 2;
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
    uStack_2c = CONCAT31(uStack_2c._1_3_,3);
    uVar2 = func_0x00e70415(1);
    *(undefined4 *)(iStack_94 + 4) = uVar2;
  }
  func_0x0046adc0();
  appuStack_cc[1] = std::basic_stringbuf<>::vftable;
  uStack_90 = 0;
  uStack_8c = 4;
  uStack_2c = 4;
  func_0x0046a470(aiStack_20);
  uStack_2c = CONCAT31(uStack_2c._1_3_,5);
  func_0x0091ffd0(0x3009,0x3009,aiStack_20);
  if (0xf < uStack_c) {
    uVar3 = uStack_c + 1;
    iVar4 = aiStack_20[0];
    if (0xfff < uVar3) {
      iVar4 = *(int *)(aiStack_20[0] + -4);
      uVar3 = uStack_c + 0x24;
      if (0x1f < (aiStack_20[0] - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
  }
  func_0x005d3940();
  *unaff_FS_OFFSET = iStack_34;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009c32a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_5 == 0x30f2) {
    if (*(int *)(param_1 + 4) == 0x30f3) {
      func_0x00e7323d(param_1 + 8);
    }
    uVar1 = 0x30f2;
  }
  else {
    uVar1 = 0x30f3;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_2 = 0x3000;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



void __fastcall FUN_009c38e0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x80);
  if (0xf < uVar5) {
    iVar1 = *(int *)(param_1 + 0x6c);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xf;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  uVar5 = *(uint *)(param_1 + 0x68);
  if (0xf < uVar5) {
    iVar1 = *(int *)(param_1 + 0x54);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0xf;
  *(undefined1 *)(param_1 + 0x54) = 0;
  func_0x0096d4e0();
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    uVar5 = *(int *)(param_1 + 0x40) - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar5);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x34);
  if (0xf < uVar5) {
    iVar1 = *(int *)(param_1 + 0x20);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_009c3a4f;
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar5 = *(uint *)(param_1 + 0x1c);
  if (0xf < uVar5) {
    iVar1 = *(int *)(param_1 + 8);
    uVar4 = uVar5 + 1;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar5 + 0x24;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_009c3a4f:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



undefined4 FUN_009c46d0(void)

{
  return 3;
}



undefined4 * __thiscall FUN_009c4df0(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::ActiveVariable::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009c4e20(undefined4 *param_1,byte param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *param_1 = gl::LinkedUniform::vftable;
  iVar1 = param_1[0x36];
  if (iVar1 != 0) {
    uVar5 = param_1[0x38] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined4 *)(*pcVar2)();
        return puVar4;
      }
    }
    func_0x008ab812(iVar3,uVar5);
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
  }
  *param_1 = gl::ActiveVariable::vftable;
  FUN_009c38e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xe8);
  }
  return param_1;
}



undefined4 __thiscall FUN_009c4eb0(undefined4 param_1,byte param_2)

{
  func_0x009c4d10();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



void FUN_009c50f0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)*param_1;
  _guard_check_icall(param_2 * param_3);
  (*pcVar1)();
  return;
}



void FUN_009c5110(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_009c6ec0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}



undefined4 __thiscall FUN_009c70c0(undefined4 param_1,byte param_2)

{
  func_0x009c6fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x24);
  }
  return param_1;
}



void __fastcall FUN_009c70f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 8);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



void __fastcall FUN_009c7110(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 4);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_009c96b0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f47730;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uStack_8 = 0;
  func_0x008ab84c(param_1 + 9,0xc,6,FUN_005650e0,FUN_004c7ec0,uVar1);
  uStack_8 = 1;
  func_0x008ab84c(param_1 + 0x1b,0xc,6,FUN_005650e0,FUN_004c7ec0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_009c9950(int *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f45790;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x1b,0xc,6,FUN_004c7ec0,uVar3);
  uStack_8 = 1;
  func_0x008ab4ad(param_1 + 9,0xc,6,FUN_004c7ec0);
  func_0x009c97c0();
  func_0x008e8a10();
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar3 = param_1[2] - iVar1 & 0xfffffffc;
    iVar4 = iVar1;
    if (0xfff < uVar3) {
      iVar4 = *(int *)(iVar1 + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (iVar1 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_009c9be0(uint *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  uint *puVar8;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  int iStack_17c;
  undefined *puStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [56];
  int iStack_138;
  int iStack_134;
  undefined1 auStack_bc [56];
  int iStack_84;
  int iStack_80;
  uint uStack_8;
  
  uStack_174 = 0xffffffff;
  puStack_178 = &DAT_00f47768;
  iStack_17c = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_170;
  *unaff_FS_OFFSET = (int)&iStack_17c;
  func_0x009c37e0(uStack_8);
  uStack_174 = 0;
  func_0x009c37e0();
  puStack_184 = (undefined1 *)*param_1;
  uStack_174 = CONCAT31(uStack_174._1_3_,1);
  if (puStack_184 == (undefined1 *)0x0) {
    puStack_184 = (undefined1 *)param_1[0xe];
  }
  puStack_180 = (undefined1 *)*param_2;
  if (puStack_180 == (undefined1 *)0x0) {
    puStack_180 = (undefined1 *)param_2[0xe];
  }
  if ((((char)param_1[0x1e] != '\0') && (param_1[0x1d] != 0xffffffff)) &&
     (func_0x009c3b20(puStack_184), puStack_184 = auStack_170, iStack_138 != iStack_134)) {
    iStack_134 = iStack_138;
  }
  if (((char)param_2[0x1e] != '\0') && (param_2[0x1d] != -1)) {
    func_0x009c3b20(puStack_180);
    if (iStack_84 != iStack_80) {
      iStack_80 = iStack_84;
    }
    puStack_180 = auStack_bc;
  }
  uVar3 = *param_1;
  if (uVar3 == 0) {
    uVar4 = param_1[0x14];
  }
  else {
    uVar4 = param_1[6];
  }
  if (*param_2 == 0) {
    iVar5 = param_2[0x14];
  }
  else {
    iVar5 = param_2[6];
  }
  if ((uVar4 != 0) == (iVar5 != 0)) {
    if (uVar3 == 0) {
      uVar4 = param_1[0x14];
    }
    else {
      uVar4 = param_1[6];
    }
    if (uVar4 != 0) {
      piVar7 = param_2 + 2;
      if (*param_2 == 0) {
        piVar7 = param_2 + 0x10;
      }
      puVar8 = param_1 + 2;
      if (uVar3 == 0) {
        puVar8 = param_1 + 0x10;
      }
      piVar1 = piVar7 + 4;
      if (0xf < (uint)piVar7[5]) {
        piVar7 = (int *)*piVar7;
      }
      puVar2 = puVar8 + 4;
      if (0xf < puVar8[5]) {
        puVar8 = (uint *)*puVar8;
      }
      cVar6 = func_0x0046cf20(puVar8,*puVar2,piVar7,*piVar1);
      if (cVar6 == '\0') {
        if (*param_2 == 0) {
          param_2 = param_2 + 0x10;
        }
        else {
          param_2 = param_2 + 2;
        }
        if (uVar3 == 0) {
          func_0x004a52f0(param_1 + 0x10,param_2);
        }
        else {
          func_0x004a52f0(param_1 + 2,param_2);
        }
        goto LAB_009c9dca;
      }
    }
    if ((((((char)param_1[0x1e] != '\0') && (param_1[0x1d] != 0xffffffff)) ||
         (((char)param_2[0x1e] != '\0' && (param_2[0x1d] != -1)))) ||
        (param_1[0x1d] == param_2[0x1d])) &&
       ((param_1[0x1f] == param_2[0x1f] && (param_1[0x20] == param_2[0x20])))) {
      FUN_0096cb50(puStack_184,puStack_180);
    }
  }
LAB_009c9dca:
  FUN_009c38e0();
  FUN_009c38e0();
  *unaff_FS_OFFSET = iStack_17c;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_009ceed0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::BlockLayoutEncoder::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 __thiscall FUN_009cef00(undefined4 param_1,byte param_2)

{
  func_0x009cebc0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009cef20(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::InterfaceBlockLinker::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x24);
  }
  return param_1;
}



undefined4 * __thiscall FUN_009cef50(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::InterfaceBlockLinker::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



int __thiscall FUN_009cef80(int param_1,byte param_2)

{
  *(undefined ***)(param_1 + 0x4c) = sh::BlockLayoutEncoder::vftable;
  func_0x00a18930();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_009cefb0(undefined4 param_1,byte param_2)

{
  func_0x00a18940();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



void __thiscall FUN_009d1a30(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_009d1a50(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_009d1a70(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_009d1a90(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void FUN_009d1ab0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  func_0x009d3870(param_1,param_2,*param_3);
  return;
}



void FUN_009d1ad0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  func_0x009d3970(param_1,param_2,*param_3);
  return;
}



TypeDescriptor * FUN_009d1f90(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_009d1fa0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_009d1fb0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_009d1fc0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



void FUN_009d2cf0(undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  func_0x0069f9c0(&stack0x00000008);
  FUN_00a19650(unaff_retaddr,param_1);
  return;
}



void __fastcall FUN_009d2d20(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  puStack_c = &DAT_00f4d9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_2c[4] = 1;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0x2e;
  puVar1 = *(undefined4 **)(param_1 + 8);
  uStack_8 = 0;
  aiStack_2c[6] = uVar3;
  if (puVar1 == *(undefined4 **)(param_1 + 0xc)) {
    func_0x005aedd0(puVar1,aiStack_2c,uVar3);
  }
  else {
    aiStack_2c[0] = 0;
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0xf00000001;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
  }
  uStack_8 = 0xffffffff;
  if (0xf < (uint)aiStack_2c[5]) {
    uVar4 = aiStack_2c[5] + 1;
    iVar5 = aiStack_2c[0];
    if (0xfff < uVar4) {
      iVar5 = *(int *)(aiStack_2c[0] + -4);
      uVar4 = aiStack_2c[5] + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar5) - 4U) goto LAB_00a19c10;
    }
    func_0x008ab812(iVar5,uVar4);
  }
  aiStack_2c[4] = 1;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0x2e;
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  uStack_8 = 1;
  if (puVar1 == *(undefined4 **)(param_1 + 0x18)) {
    func_0x005aedd0(puVar1,aiStack_2c,uVar3);
  }
  else {
    aiStack_2c[0] = 0;
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0xf00000001;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 0x18;
  }
  if (0xf < (uint)aiStack_2c[5]) {
    uVar3 = aiStack_2c[5] + 1;
    iVar5 = aiStack_2c[0];
    if (0xfff < uVar3) {
      iVar5 = *(int *)(aiStack_2c[0] + -4);
      uVar3 = aiStack_2c[5] + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar5) - 4U) {
LAB_00a19c10:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_009d2d30(int param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -4;
  func_0x00a1a150();
  func_0x00a1a150();
  return;
}



void __fastcall FUN_009d2d40(int param_1)

{
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  func_0x00a1a150();
  func_0x00a1a150();
  return;
}



int __fastcall FUN_009d3a80(int param_1)

{
  return ((*(int **)(param_1 + 0x24))[1] - **(int **)(param_1 + 0x24)) / 0xd8;
}



int __fastcall FUN_009d3aa0(int param_1)

{
  return ((*(int **)(param_1 + 0x24))[1] - **(int **)(param_1 + 0x24)) / 0xe8;
}



undefined4 * __thiscall
FUN_009d3de0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4835c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x54,uVar2);
  uStack_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    func_0x00a18650(param_3,param_4,puVar3 + 0x13);
    *(undefined1 *)(puVar3 + 0x11) = param_5;
    puVar3[0x12] = param_6;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    *puVar3 = gl::_anon_428E691D::ShaderStorageBlockVisitor::vftable;
    puVar3[0xf] = param_2;
    puVar3[0x10] = uVar1;
    func_0x00a186a0();
    puVar3[0x13] = sh::StubBlockEncoder::vftable;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall
FUN_009d3ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48394;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x38,uVar2);
  uStack_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    func_0x00a186f0(param_3,param_4);
    puVar3[10] = param_2;
    *(undefined1 *)(puVar3 + 0xc) = param_5;
    *puVar3 = gl::_anon_428E691D::UniformBlockEncodingVisitor::vftable;
    puVar3[0xb] = uVar1;
    puVar3[0xd] = param_6;
    *unaff_FS_OFFSET = iStack_10;
    return puVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (undefined4 *)0x0;
}



void __thiscall
FUN_009d5800(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x30);
  _guard_check_icall(param_2,0,param_3,param_4,param_5);
  (*pcVar1)();
  return;
}



void __thiscall
FUN_009d5830(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *****pppppuVar8;
  byte *pbVar9;
  undefined4 uVar10;
  int iVar11;
  byte *****pppppbVar12;
  int iVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  uint uStack_160;
  uint uStack_15c;
  undefined4 *puStack_158;
  uint uStack_154;
  int *piStack_150;
  int *piStack_14c;
  undefined4 *puStack_148;
  uint *puStack_144;
  char cStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  int iStack_13c;
  undefined4 *puStack_138;
  undefined4 *puStack_134;
  char cStack_12f;
  char cStack_12e;
  char cStack_12d;
  int iStack_12c;
  undefined *puStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [8];
  undefined4 uStack_118;
  undefined1 auStack_110 [60];
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined4 uStack_84;
  undefined1 auStack_79 [16];
  undefined1 uStack_69;
  int iStack_68;
  int iStack_64;
  int iStack_3c;
  byte ****appppbStack_38 [4];
  uint uStack_28;
  uint uStack_24;
  undefined4 ****appppuStack_20 [4];
  undefined4 uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_124 = 0xffffffff;
  puStack_128 = &DAT_00f4861b;
  iStack_12c = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_120;
  *unaff_FS_OFFSET = (int)&iStack_12c;
  puStack_148 = param_2;
  piStack_150 = param_6;
  cStack_12d = func_0x0093e540(*param_2,uStack_8);
  cStack_12e = func_0x0093e2e0(*puStack_148);
  cStack_140 = func_0x0093e230(*puStack_148);
  puStack_144 = *(uint **)(param_1 + 0x38);
  cStack_12f = *(char *)((int)puStack_148 + 0x9f);
  if (cStack_12d == '\0') {
    if (cStack_12e == '\0') {
      if (cStack_140 == '\0') {
        if (cStack_12f != '\0') {
          puStack_144 = *(uint **)(param_1 + 0x48);
        }
      }
      else {
        puStack_144 = *(uint **)(param_1 + 0x44);
      }
    }
    else {
      puStack_144 = *(uint **)(param_1 + 0x40);
    }
  }
  else {
    puStack_144 = *(uint **)(param_1 + 0x3c);
  }
  func_0x00469da0(param_4);
  uStack_124 = 0;
  func_0x00469da0(param_5);
  piStack_14c = puStack_148 + 0xe;
  uStack_124._0_1_ = 1;
  if (*piStack_14c != puStack_148[0xf]) {
    func_0x0046a880(&DAT_00fb0ac0,3);
    func_0x0046a880(&DAT_00fb0ac0,3);
  }
  puVar3 = puStack_148;
  uStack_154 = puStack_144[1];
  for (uVar14 = *puStack_144; uVar14 != uStack_154; uVar14 = uVar14 + 0xe8) {
    uVar6 = *(uint *)(uVar14 + 0x20);
    pbVar9 = (byte *)(uVar14 + 0x10);
    pppppbVar12 = appppbStack_38;
    if (0xf < uStack_24) {
      pppppbVar12 = (byte *****)appppbStack_38[0];
    }
    if (0xf < *(uint *)(uVar14 + 0x24)) {
      pbVar9 = *(byte **)pbVar9;
    }
    if (uVar6 == uStack_28) {
      if (uVar6 != 0) {
        while (uVar2 = uVar6 - 4, 3 < uVar6) {
          if (*(byte *****)pbVar9 != *pppppbVar12) goto LAB_009d59a9;
          pbVar9 = pbVar9 + 4;
          pppppbVar12 = pppppbVar12 + 1;
          uVar6 = uVar2;
        }
        if (uVar2 == 0xfffffffc) {
LAB_009d59dd:
          uVar6 = 0;
        }
        else {
LAB_009d59a9:
          bVar15 = *pbVar9 < *(byte *)pppppbVar12;
          if ((*pbVar9 == *(byte *)pppppbVar12) &&
             ((uVar2 == 0xfffffffd ||
              ((bVar15 = pbVar9[1] < *(byte *)((int)pppppbVar12 + 1),
               pbVar9[1] == *(byte *)((int)pppppbVar12 + 1) &&
               ((uVar2 == 0xfffffffe ||
                ((bVar15 = pbVar9[2] < *(byte *)((int)pppppbVar12 + 2),
                 pbVar9[2] == *(byte *)((int)pppppbVar12 + 2) &&
                 ((uVar2 == 0xffffffff ||
                  (bVar15 = pbVar9[3] < *(byte *)((int)pppppbVar12 + 3),
                  pbVar9[3] == *(byte *)((int)pppppbVar12 + 3))))))))))))) goto LAB_009d59dd;
          uVar6 = -(uint)bVar15 | 1;
        }
        if (uVar6 != 0) goto LAB_009d59eb;
      }
      iVar11 = *(int *)(param_1 + 0x70);
      if (uVar14 == 0) goto LAB_009d59fc;
      if ((iVar11 == 0) && (*(int *)(param_1 + 0x2c) != -1)) {
        *(int *)(uVar14 + 0x98) = *(int *)(param_1 + 0x2c);
      }
      if ((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x30) != -1)) {
        *(int *)(uVar14 + 0xa0) = *(int *)(param_1 + 0x30);
      }
      if (*(int *)(param_1 + 0x34) != -1) {
        *(int *)(uVar14 + 0x90) = *(int *)(param_1 + 0x34);
      }
      if (*(char *)(param_1 + 0x29) != '\0') {
        *(undefined1 *)(uVar14 + 0x4d) = 1;
        func_0x009c50b0(*(undefined1 *)(param_1 + 0x28),1);
      }
      if (*(char *)(param_1 + 0x2a) != '\0') {
        *(undefined1 *)(uVar14 + 0x4c) = 1;
      }
      goto LAB_009d5db0;
    }
LAB_009d59eb:
  }
  iVar11 = *(int *)(param_1 + 0x70);
LAB_009d59fc:
  if (iVar11 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x30);
    uVar10 = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    uVar7 = 0xffffffff;
    uVar10 = 0xffffffff;
  }
  func_0x009c4a20(*puStack_148,puStack_148[1],appppbStack_38,piStack_14c,uVar10,uVar7,
                  *(undefined4 *)(param_1 + 0x34),0xffffffff,&DAT_00fb8aac);
  pppppuVar8 = appppuStack_20;
  if (0xf < uStack_c) {
    pppppuVar8 = (undefined4 *****)appppuStack_20[0];
  }
  uStack_124._0_1_ = 2;
  func_0x0046a660(pppppuVar8,uStack_10);
  uStack_d3 = *(undefined1 *)(param_1 + 0x29);
  uStack_d4 = *(undefined1 *)(param_1 + 0x2a);
  func_0x0060e120(piStack_150);
  uStack_69 = *(undefined1 *)((int)puVar3 + 0xaf);
  uStack_84 = puVar3[0x25];
  auStack_79[0] = *(undefined1 *)((int)puVar3 + 0x9f);
  if (puVar3[0x2c] != -1) {
    iStack_68 = puVar3[0x2c];
  }
  iStack_13c = 0;
  puStack_138 = (undefined4 *)0x0;
  uVar14 = piStack_150[1] - *piStack_150 >> 2;
  puStack_134 = (undefined4 *)0x0;
  if (uVar14 == 0) {
LAB_009d5b72:
    puVar3 = puStack_138;
    uStack_124._0_1_ = 3;
    if ((undefined4 *)*piStack_14c == (undefined4 *)piStack_14c[1]) {
      piStack_14c = (int *)0x1;
    }
    else {
      piStack_14c = *(int **)*piStack_14c;
    }
    if (puStack_138 == puStack_134) {
      puStack_158 = (undefined4 *)((int)puStack_138 - iStack_13c >> 2);
      if (puStack_158 == (undefined4 *)0x3fffffff) goto LAB_009d5ec8;
      uStack_15c = (int)puStack_158 + 1;
      uStack_160 = (int)puStack_134 - iStack_13c >> 2;
      if (0x3fffffff - (uStack_160 >> 1) < uStack_160) {
        uStack_160 = 0x3fffffff;
      }
      else {
        uStack_160 = (uStack_160 >> 1) + uStack_160;
        if (uStack_160 < uStack_15c) {
          uStack_160 = uStack_15c;
        }
      }
      uStack_154 = uStack_160;
      iVar11 = func_0x0057d790(&iStack_13c,&uStack_160);
      puStack_158 = (undefined4 *)(iVar11 + (int)puStack_158 * 4);
      *puStack_158 = piStack_14c;
      if (puVar3 == puStack_138) {
        func_0x008ab0e6(iVar11,iStack_13c,(int)puStack_138 - iStack_13c);
      }
      else {
        func_0x008ab0e6(iVar11,iStack_13c,(int)puVar3 - iStack_13c);
        func_0x008ab0e6(puStack_158 + 1,puVar3,(int)puStack_138 - (int)puVar3);
      }
      if (iStack_13c != 0) {
        uVar14 = ((int)puStack_134 - iStack_13c >> 2) * 4;
        iVar13 = iStack_13c;
        if (0xfff < uVar14) {
          iVar13 = *(int *)(iStack_13c + -4);
          uVar14 = uVar14 + 0x23;
          if (0x1f < (iStack_13c - iVar13) - 4U) goto LAB_009d5ecd;
        }
        func_0x008ab812(iVar13,uVar14);
      }
      puStack_138 = (undefined4 *)(iVar11 + uStack_15c * 4);
      puStack_134 = (undefined4 *)(iVar11 + uStack_154 * 4);
      iStack_13c = iVar11;
    }
    else {
      *puStack_138 = piStack_14c;
      puStack_138 = puStack_138 + 1;
    }
    iVar13 = 1;
    iVar11 = piStack_150[1] - *piStack_150 >> 2;
    if (iVar11 != 0) {
      uStack_15c = iStack_13c + 4;
      do {
        iVar13 = iVar13 * *(int *)(iStack_13c + iVar11 * 4);
        iVar11 = iVar11 + -1;
        iStack_3c = iStack_3c + *(int *)(*(int *)(param_1 + 0x50) + iVar11 * 4) * iVar13;
      } while (iVar11 != 0);
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      uStack_13d = func_0x0093e230(uStack_118);
      uStack_13e = *(undefined1 *)(iStack_64 + 0x32);
      uStack_13f = *(undefined1 *)(iStack_64 + 0x30);
      func_0x009cd8e0(auStack_110,&uStack_13f,&uStack_13e,&uStack_13d,auStack_79);
    }
    else {
      func_0x009c50b0(*(undefined1 *)(param_1 + 0x28),1);
    }
    puVar4 = puStack_144;
    if (puStack_144[1] == puStack_144[2]) {
      func_0x00971b60(puStack_144[1],auStack_120);
    }
    else {
      func_0x009c4960();
      puVar4[1] = puVar4[1] + 0xe8;
    }
    uStack_124._0_1_ = 2;
    if (iStack_13c != 0) {
      uVar14 = ((int)puStack_134 - iStack_13c >> 2) * 4;
      iVar11 = iStack_13c;
      if (0xfff < uVar14) {
        iVar11 = *(int *)(iStack_13c + -4);
        uVar14 = uVar14 + 0x23;
        if (0x1f < (iStack_13c - iVar11) - 4U) goto LAB_009d5ecd;
      }
      func_0x008ab812(iVar11,uVar14);
      iStack_13c = 0;
      puStack_138 = (undefined4 *)0x0;
      puStack_134 = (undefined4 *)0x0;
    }
    uStack_124._0_1_ = 1;
    func_0x009c4c90();
LAB_009d5db0:
    puVar3 = puStack_148;
    iVar11 = func_0x009c4240();
    cVar5 = func_0x0093e3b0(*puVar3);
    if ((cVar5 == '\0') && (cStack_12f == '\0')) {
      iVar13 = func_0x0093f170(*puVar3);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar13 * iVar11;
    }
    iVar13 = 0;
    if (cStack_12d != '\0') {
      iVar13 = iVar11;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar13;
    iVar13 = 0;
    if (cStack_12e != '\0') {
      iVar13 = iVar11;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar13;
    iVar13 = 0;
    if (cStack_140 != '\0') {
      iVar13 = iVar11;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar13;
    iVar13 = 0;
    if (cStack_12f != '\0') {
      iVar13 = iVar11;
    }
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar13;
    if (*(int *)(param_1 + 0x34) != -1) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar11;
    }
    if (0xf < uStack_c) {
      uVar14 = uStack_c + 1;
      pppppuVar8 = (undefined4 *****)appppuStack_20[0];
      if (0xfff < uVar14) {
        pppppuVar8 = (undefined4 *****)appppuStack_20[0][-1];
        uVar14 = uStack_c + 0x24;
        if (0x1f < (uint)((int)appppuStack_20[0] + (-4 - (int)pppppuVar8))) goto LAB_009d5ed2;
      }
      func_0x008ab812(pppppuVar8,uVar14);
    }
    uStack_10 = 0;
    uStack_c = 0xf;
    appppuStack_20[0] = (undefined4 ****)((uint)appppuStack_20[0] & 0xffffff00);
    if (0xf < uStack_24) {
      uVar14 = uStack_24 + 1;
      pppppbVar12 = (byte *****)appppbStack_38[0];
      if (0xfff < uVar14) {
        pppppbVar12 = (byte *****)appppbStack_38[0][-1];
        uVar14 = uStack_24 + 0x24;
        if ((byte *)0x1f < (byte *)((int)appppbStack_38[0] + (-4 - (int)pppppbVar12)))
        goto LAB_009d5ed2;
      }
      func_0x008ab812(pppppbVar12,uVar14);
    }
    *unaff_FS_OFFSET = iStack_12c;
    FUN_008ab370();
    return;
  }
  if (uVar14 < 0x40000000) {
    func_0x0057d350(uVar14);
    iVar11 = iStack_13c;
    iVar13 = piStack_150[1] - *piStack_150;
    func_0x008ab0e6(iStack_13c,*piStack_150,iVar13);
    puStack_138 = (undefined4 *)(iVar11 + (iVar13 >> 2) * 4);
    goto LAB_009d5b72;
  }
LAB_009d5ec8:
  func_0x0046e700();
LAB_009d5ecd:
  func_0x008aaf66();
LAB_009d5ed2:
  func_0x008aaf66();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall
FUN_009d5ee0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 ****ppppuVar6;
  byte ****ppppbVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined4 uStack_130;
  int *piStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  undefined *puStack_118;
  undefined4 uStack_114;
  undefined1 auStack_110 [212];
  undefined4 uStack_3c;
  undefined4 ***apppuStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  byte ***apppbStack_20 [4];
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_114._0_1_ = 0xff;
  uStack_114._1_3_ = 0xffffff;
  puStack_118 = &DAT_00f48673;
  iStack_11c = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)auStack_110;
  *unaff_FS_OFFSET = (int)&iStack_11c;
  uStack_120 = param_4;
  uStack_124 = param_5;
  if (*(char *)(param_1 + 0x31) == '\0') {
    puStack_128 = &uStack_140;
    uStack_140 = 0xffffffff;
    uStack_13c = 0xffffffff;
    uStack_138 = 0xffffffff;
    uStack_134 = 0;
    uStack_130 = 0xffffffff;
    piStack_12c = *(int **)(*(int *)(param_1 + 0x3c) + 0x24);
    if (piStack_12c == (int *)0x0) {
      func_0x00e701bd(uStack_8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = *(code **)(*piStack_12c + 8);
    _guard_check_icall(param_4,param_5,&puStack_128);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      func_0x00469da0(uStack_120);
      uStack_114 = 0;
      func_0x00469da0(uStack_124);
      uStack_114._0_1_ = 1;
      if (param_2[0xe] != param_2[0xf]) {
        func_0x0046a880(&DAT_00fb0ac0,3);
        func_0x0046a880(&DAT_00fb0ac0,3);
      }
      if (*(int *)(param_1 + 0x48) == -1) {
        uStack_124 = CONCAT31(uStack_124._1_3_,*(undefined1 *)((int)param_2 + 0x45));
        uStack_120 = CONCAT31(uStack_120._1_3_,*(undefined1 *)(param_1 + 0x44));
        for (iVar8 = **(int **)(param_1 + 0x40); iVar8 != (*(int **)(param_1 + 0x40))[1];
            iVar8 = iVar8 + 0xd8) {
          uVar5 = *(uint *)(iVar8 + 0x20);
          pbVar4 = (byte *)(iVar8 + 0x10);
          ppppbVar7 = apppbStack_20;
          if (0xf < uStack_c) {
            ppppbVar7 = (byte ****)apppbStack_20[0];
          }
          if (0xf < *(uint *)(iVar8 + 0x24)) {
            pbVar4 = *(byte **)pbVar4;
          }
          if (uVar5 == uStack_10) {
            if (uVar5 != 0) {
              while (uVar2 = uVar5 - 4, 3 < uVar5) {
                if (*(byte ****)pbVar4 != *ppppbVar7) goto LAB_009d6069;
                pbVar4 = pbVar4 + 4;
                ppppbVar7 = ppppbVar7 + 1;
                uVar5 = uVar2;
              }
              if (uVar2 == 0xfffffffc) {
LAB_009d609d:
                uVar5 = 0;
              }
              else {
LAB_009d6069:
                bVar9 = *pbVar4 < *(byte *)ppppbVar7;
                if ((*pbVar4 == *(byte *)ppppbVar7) &&
                   ((uVar2 == 0xfffffffd ||
                    ((bVar9 = pbVar4[1] < *(byte *)((int)ppppbVar7 + 1),
                     pbVar4[1] == *(byte *)((int)ppppbVar7 + 1) &&
                     ((uVar2 == 0xfffffffe ||
                      ((bVar9 = pbVar4[2] < *(byte *)((int)ppppbVar7 + 2),
                       pbVar4[2] == *(byte *)((int)ppppbVar7 + 2) &&
                       ((uVar2 == 0xffffffff ||
                        (bVar9 = pbVar4[3] < *(byte *)((int)ppppbVar7 + 3),
                        pbVar4[3] == *(byte *)((int)ppppbVar7 + 3))))))))))))) goto LAB_009d609d;
                uVar5 = -(uint)bVar9 | 1;
              }
              if (uVar5 != 0) goto LAB_009d60a8;
            }
            func_0x009c50b0(uStack_120,uStack_124);
            break;
          }
LAB_009d60a8:
        }
      }
      else {
        func_0x009c4730(*param_2,param_2[1],apppbStack_20,param_2 + 0xe,*(int *)(param_1 + 0x48),
                        &uStack_140);
        ppppuVar6 = apppuStack_38;
        if (0xf < uStack_24) {
          ppppuVar6 = (undefined4 ****)apppuStack_38[0];
        }
        uStack_114._0_1_ = 2;
        func_0x0046a660(ppppuVar6,uStack_28);
        func_0x009c50b0(*(undefined1 *)(param_1 + 0x44),*(undefined1 *)((int)param_2 + 0x45));
        iVar8 = *(int *)(param_1 + 0x40);
        uStack_3c = *(undefined4 *)(param_1 + 0x28);
        if (*(int *)(iVar8 + 4) == *(int *)(iVar8 + 8)) {
          func_0x0097bbb0(*(int *)(iVar8 + 4),auStack_110);
        }
        else {
          func_0x0097d1b0();
          *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 0xd8;
        }
        func_0x009c4c80();
      }
      FUN_00469ba0();
      FUN_00469ba0();
    }
  }
  *unaff_FS_OFFSET = iStack_11c;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_009d61a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *****pppppuVar6;
  byte *****pppppbVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined4 uStack_140;
  int *piStack_13c;
  undefined4 *puStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_12c [232];
  byte ****appppbStack_44 [4];
  uint uStack_34;
  uint uStack_30;
  undefined4 ****appppuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  puStack_c = &DAT_00f486c0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_138 = &uStack_150;
  uStack_150 = 0xffffffff;
  uStack_14c = 0xffffffff;
  uStack_148 = 0xffffffff;
  uStack_144 = 0;
  uStack_140 = 0xffffffff;
  piStack_13c = *(int **)(*(int *)(param_1 + 0x28) + 0x24);
  uStack_130 = param_4;
  uStack_134 = param_5;
  if (piStack_13c == (int *)0x0) {
    func_0x00e701bd(uStack_14);
LAB_009d64a7:
    func_0x008aaf66();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(*piStack_13c + 8);
  _guard_check_icall(param_4,param_5,&puStack_138);
  cVar3 = (*pcVar1)();
  if (cVar3 != '\0') {
    func_0x00469da0(uStack_130);
    uStack_8 = 0;
    func_0x00469da0(uStack_134);
    uStack_8._0_1_ = 1;
    if (param_2[0xe] != param_2[0xf]) {
      func_0x0046a880(&DAT_00fb0ac0,3);
      func_0x0046a880(&DAT_00fb0ac0,3);
    }
    if (*(int *)(param_1 + 0x34) == -1) {
      uStack_134 = CONCAT31(uStack_134._1_3_,*(undefined1 *)((int)param_2 + 0x45));
      uStack_130 = CONCAT31(uStack_130._1_3_,*(undefined1 *)(param_1 + 0x30));
      for (iVar8 = **(int **)(param_1 + 0x2c); iVar8 != (*(int **)(param_1 + 0x2c))[1];
          iVar8 = iVar8 + 0xe8) {
        uVar5 = *(uint *)(iVar8 + 0x20);
        pbVar4 = (byte *)(iVar8 + 0x10);
        pppppbVar7 = appppbStack_44;
        if (0xf < uStack_30) {
          pppppbVar7 = (byte *****)appppbStack_44[0];
        }
        if (0xf < *(uint *)(iVar8 + 0x24)) {
          pbVar4 = *(byte **)pbVar4;
        }
        if (uVar5 == uStack_34) {
          if (uVar5 != 0) {
            while (uVar2 = uVar5 - 4, 3 < uVar5) {
              if (*(byte *****)pbVar4 != *pppppbVar7) goto LAB_009d631d;
              pbVar4 = pbVar4 + 4;
              pppppbVar7 = pppppbVar7 + 1;
              uVar5 = uVar2;
            }
            if (uVar2 == 0xfffffffc) {
LAB_009d6351:
              uVar5 = 0;
            }
            else {
LAB_009d631d:
              bVar9 = *pbVar4 < *(byte *)pppppbVar7;
              if ((*pbVar4 == *(byte *)pppppbVar7) &&
                 ((uVar2 == 0xfffffffd ||
                  ((bVar9 = pbVar4[1] < *(byte *)((int)pppppbVar7 + 1),
                   pbVar4[1] == *(byte *)((int)pppppbVar7 + 1) &&
                   ((uVar2 == 0xfffffffe ||
                    ((bVar9 = pbVar4[2] < *(byte *)((int)pppppbVar7 + 2),
                     pbVar4[2] == *(byte *)((int)pppppbVar7 + 2) &&
                     ((uVar2 == 0xffffffff ||
                      (bVar9 = pbVar4[3] < *(byte *)((int)pppppbVar7 + 3),
                      pbVar4[3] == *(byte *)((int)pppppbVar7 + 3))))))))))))) goto LAB_009d6351;
              uVar5 = -(uint)bVar9 | 1;
            }
            if (uVar5 != 0) goto LAB_009d635c;
          }
          func_0x009c50b0(uStack_130,uStack_134);
          break;
        }
LAB_009d635c:
      }
    }
    else {
      func_0x009c4a20(*param_2,param_2[1],appppbStack_44,param_2 + 0xe,0xffffffff,0xffffffff,
                      0xffffffff,*(int *)(param_1 + 0x34),&uStack_150);
      pppppuVar6 = appppuStack_2c;
      if (0xf < uStack_18) {
        pppppuVar6 = (undefined4 *****)appppuStack_2c[0];
      }
      uStack_8._0_1_ = 2;
      func_0x0046a660(pppppuVar6,uStack_1c);
      func_0x009c50b0(*(undefined1 *)(param_1 + 0x30),*(undefined1 *)((int)param_2 + 0x45));
      iVar8 = *(int *)(param_1 + 0x2c);
      if (*(int *)(iVar8 + 4) == *(int *)(iVar8 + 8)) {
        func_0x00971b60(*(int *)(iVar8 + 4),auStack_12c);
      }
      else {
        func_0x009c4960();
        *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 0xe8;
      }
      func_0x009c4c90();
    }
    if (0xf < uStack_18) {
      uVar5 = uStack_18 + 1;
      pppppuVar6 = (undefined4 *****)appppuStack_2c[0];
      if (0xfff < uVar5) {
        pppppuVar6 = (undefined4 *****)appppuStack_2c[0][-1];
        uVar5 = uStack_18 + 0x24;
        if (0x1f < (uint)((int)appppuStack_2c[0] + (-4 - (int)pppppuVar6))) goto LAB_009d64a7;
      }
      func_0x008ab812(pppppuVar6,uVar5);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    appppuStack_2c[0] = (undefined4 ****)((uint)appppuStack_2c[0] & 0xffffff00);
    if (0xf < uStack_30) {
      uVar5 = uStack_30 + 1;
      pppppbVar7 = (byte *****)appppbStack_44[0];
      if (0xfff < uVar5) {
        pppppbVar7 = (byte *****)appppbStack_44[0][-1];
        uVar5 = uStack_30 + 0x24;
        if ((byte *)0x1f < (byte *)((int)appppbStack_44[0] + (-4 - (int)pppppbVar7)))
        goto LAB_009d64a7;
      }
      func_0x008ab812(pppppbVar7,uVar5);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_009d64b0(uint *param_1,int param_2,int param_3,uint *param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puStack_8;
  int iStack_4;
  
  if ((param_2 == 4) && (param_5 == 4)) {
    func_0x009d6570(param_1,param_3,param_4,param_6,param_7,param_8);
    return;
  }
  iStack_4 = param_8;
  if (0 < param_8) {
    puStack_8 = param_4;
    puVar3 = (uint *)(param_2 * param_7 + (int)param_1);
    puVar2 = param_1;
    do {
      while (param_1 != puVar3) {
        uVar1 = *param_1;
        param_1 = (uint *)((int)param_1 + param_2);
        *param_4 = uVar1 >> 0x10 & 0xff | (uVar1 & 0xff) << 0x10 | uVar1 & 0xff00ff00;
        param_4 = (uint *)((int)param_4 + param_5);
      }
      param_1 = (uint *)((int)puVar2 + param_3);
      param_4 = (uint *)((int)puStack_8 + param_6);
      puVar3 = (uint *)((int)puVar3 + param_3);
      iStack_4 = iStack_4 + -1;
      puStack_8 = param_4;
      puVar2 = param_1;
    } while (iStack_4 != 0);
  }
  return;
}



undefined4 * __thiscall FUN_009db580(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::DeviceImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



void FUN_009db5b0(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 * __thiscall FUN_009dbb10(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::BufferFactoryD3D::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __fastcall FUN_009dbb40(undefined4 *param_1)

{
  int *piVar1;
  uint unaff_ESI;
  
  piVar1 = param_1 + 0x4d3;
  *param_1 = rx::RendererD3D::vftable;
  func_0x009246b0(piVar1,*(undefined4 *)(*piVar1 + 4));
  func_0x008ab812(*piVar1,0x2c);
  func_0x00956e60();
  func_0x00956d30();
  *param_1 = rx::BufferFactoryD3D::vftable;
  if ((unaff_ESI & 1) != 0) {
    func_0x008ab812(param_1,0x1588);
  }
  return param_1;
}



undefined4 * __fastcall FUN_009dd580(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = rx::Resource11Base<>::vftable;
  puVar1 = (undefined4 *)func_0x008ab47d(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  param_1[1] = puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = rx::Resource11<>::vftable;
  return param_1;
}



undefined4 * __fastcall FUN_009dd650(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = rx::Resource11Base<>::vftable;
  puVar1 = (undefined4 *)func_0x008ab47d(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  func_0x009dc230(puVar1);
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = rx::SharedResource11<>::vftable;
  return param_1;
}



void __fastcall thunk_FUN_009de130(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_009de130(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)param_1[1];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(10,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    func_0x008ab812(piVar1,8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_009de630(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[2];
  *param_1 = rx::Resource11Base<>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
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
      iVar4 = piVar2[2] + -1;
      piVar2[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = (int *)param_1[2];
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
  return;
}



undefined4 __thiscall FUN_009decd0(undefined4 param_1,byte param_2)

{
  func_0x009ddcd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
