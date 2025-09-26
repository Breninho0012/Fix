  int iStack_10;
  
  iVar8 = param_1 + 4;
  piVar1 = *(int **)(param_2 + 0x510);
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) + 0xb20);
  iVar3 = func_0x00eaa820(iVar8,1);
  if (iVar3 != 1) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)func_0x00e9b5f0(param_1,*(int *)(param_2 + 0x504) << 2);
  uVar5 = func_0x00e9cb70(*(int *)(param_2 + 0x50c) + -1);
  uVar5 = func_0x00eaa820(iVar8,uVar5);
  *puVar4 = uVar5;
  uVar5 = func_0x00e9cb70(*(int *)(param_2 + 0x50c) + -1);
  uVar5 = func_0x00eaa820(iVar8,uVar5);
  puVar4[1] = uVar5;
  iStack_18 = 0;
  piStack_28 = (int *)0x2;
  piVar10 = piVar1;
  if (0 < *piVar1) {
    do {
      iVar3 = piVar10[1];
      uVar16 = 0;
      iVar2 = piVar1[iVar3 + 0x20];
      bVar9 = (byte)piVar1[iVar3 + 0x30];
      if ((piVar1[iVar3 + 0x30] != 0) &&
         (uVar16 = func_0x00e9d6d0(iVar7 + piVar1[iVar3 + 0x40] * 0x38,iVar8), uVar16 == 0xffffffff)
         ) {
        return (undefined4 *)0x0;
      }
      iVar13 = 0;
      if (0 < iVar2) {
        piVar15 = puVar4 + (int)piStack_28;
        do {
          uVar12 = (1 << (bVar9 & 0x1f)) - 1U & uVar16;
          uVar16 = (int)uVar16 >> (bVar9 & 0x1f);
          if (piVar1[uVar12 + iVar3 * 8 + 0x50] < 0) {
            *piVar15 = 0;
          }
          else {
            iVar6 = func_0x00e9d6d0(iVar7 + piVar1[uVar12 + iVar3 * 8 + 0x50] * 0x38,iVar8);
            *piVar15 = iVar6;
            if (iVar6 == -1) {
              return (undefined4 *)0x0;
            }
          }
          iVar13 = iVar13 + 1;
          piVar15 = piVar15 + 1;
        } while (iVar13 < iVar2);
      }
      iStack_18 = iStack_18 + 1;
      piStack_28 = (int *)((int)piStack_28 + iVar2);
      piVar10 = piVar10 + 1;
    } while (iStack_18 < *piVar1);
  }
  iStack_10 = 2;
  if (2 < *(int *)(param_2 + 0x504)) {
    piVar10 = (int *)(param_2 + 0x30c);
    piStack_28 = piVar1 + 0xd3;
    do {
      uVar16 = (puVar4[*piVar10] & 0x7fff) - (puVar4[piVar10[0x3f]] & 0x7fff);
      iVar7 = (int)(((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f)) *
                   (*piStack_28 - piVar1[piVar10[0x3f] + 0xd1])) /
              (piVar1[*piVar10 + 0xd1] - piVar1[piVar10[0x3f] + 0xd1]);
      iVar8 = -iVar7;
      if (-1 < (int)uVar16) {
        iVar8 = iVar7;
      }
      uVar14 = (puVar4[piVar10[0x3f]] & 0x7fff) + iVar8;
      uVar12 = *(int *)(param_2 + 0x50c) - uVar14;
      uVar16 = puVar4[iStack_10];
      if (uVar16 == 0) {
        puVar4[iStack_10] = uVar14 | 0x8000;
      }
      else {
        uVar11 = uVar14;
        if ((int)uVar12 < (int)uVar14) {
          uVar11 = uVar12;
        }
        if ((int)uVar16 < (int)(uVar11 * 2)) {
          if ((uVar16 & 1) == 0) {
            iVar8 = (int)uVar16 >> 1;
          }
          else {
            iVar8 = -((int)(uVar16 + 1) >> 1);
          }
        }
        else if ((int)uVar14 < (int)uVar12) {
          iVar8 = uVar16 - uVar14;
        }
        else {
          iVar8 = (uVar12 - uVar16) + -1;
        }
        puVar4[iStack_10] = iVar8 + uVar14 & 0x7fff;
        puVar4[piVar10[0x3f]] = puVar4[piVar10[0x3f]] & 0x7fff;
        puVar4[*piVar10] = puVar4[*piVar10] & 0x7fff;
      }
      piStack_28 = piStack_28 + 1;
      iStack_10 = iStack_10 + 1;
      piVar10 = piVar10 + 1;
    } while (iStack_10 < *(int *)(param_2 + 0x504));
  }
  return puVar4;
}



undefined4 FUN_00ea61d0(int param_1,int param_2,int *param_3,void *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iStack_28;
  int iStack_20;
  
  iVar2 = *(int *)(param_2 + 0x510);
  iVar14 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) +
                   *(int *)(param_1 + 0x1c) * 4) / 2;
  if (param_3 == (int *)0x0) {
    memset(param_4,0,iVar14 * 4);
    return 0;
  }
  iVar12 = *(int *)(iVar2 + 0x340) * *param_3;
  iVar17 = 0;
  iVar11 = 0;
  iStack_28 = 0;
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (0xff < iVar12) {
    iVar12 = 0xff;
  }
  iStack_20 = 1;
  iVar4 = *(int *)(param_2 + 0x504);
  if (1 < iVar4) {
    piVar15 = (int *)(param_2 + 0x108);
    iVar13 = iVar12;
    do {
      uVar6 = param_3[*piVar15] & 0x7fff;
      iVar12 = iVar13;
      if (uVar6 == param_3[*piVar15]) {
        iVar11 = *(int *)(iVar2 + 0x344 + *piVar15 * 4);
        iVar12 = *(int *)(iVar2 + 0x340) * uVar6;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        uVar16 = iVar12 - iVar13;
        iVar7 = iVar11 - iVar17;
        uVar6 = (int)uVar16 >> 0x1f;
        iVar18 = 0;
        iVar3 = (int)uVar16 / iVar7;
        uVar10 = iVar3 * iVar7 >> 0x1f;
        iVar8 = iVar11;
        if (iVar14 <= iVar11) {
          iVar8 = iVar14;
        }
        if (iStack_28 < iVar8) {
          *(float *)((int)param_4 + iStack_28 * 4) =
               (float)(&DAT_0112db98)[iVar13] * *(float *)((int)param_4 + iStack_28 * 4);
          iVar4 = *(int *)(param_2 + 0x504);
        }
        iVar9 = iStack_28 + 1;
        iVar17 = iVar11;
        iStack_28 = iVar11;
        if (iVar9 < iVar8) {
          do {
            iVar18 = iVar18 + (((uVar16 ^ uVar6) - uVar6) - ((iVar3 * iVar7 ^ uVar10) - uVar10));
            iVar4 = iVar3;
            if (iVar7 <= iVar18) {
              iVar18 = iVar18 - iVar7;
              iVar4 = (uVar6 & 0xfffffffe) + 1 + iVar3;
            }
            iVar13 = iVar13 + iVar4;
            *(float *)((int)param_4 + iVar9 * 4) =
                 (float)(&DAT_0112db98)[iVar13] * *(float *)((int)param_4 + iVar9 * 4);
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar8);
          iVar4 = *(int *)(param_2 + 0x504);
        }
      }
      iStack_20 = iStack_20 + 1;
      piVar15 = piVar15 + 1;
      iVar13 = iVar12;
    } while (iStack_20 < iVar4);
  }
  if (iVar11 < iVar14) {
    if (0xf < (uint)(iVar14 - iVar11)) {
      fVar1 = (float)(&DAT_0112db98)[iVar12];
      uVar6 = iVar14 - iVar11 & 0x8000000f;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff0) + 1;
      }
      pfVar5 = (float *)((int)param_4 + iVar11 * 4 + 0x20);
      do {
        iVar11 = iVar11 + 0x10;
        pfVar5[-8] = pfVar5[-8] * fVar1;
        pfVar5[-7] = pfVar5[-7] * fVar1;
        pfVar5[-6] = pfVar5[-6] * fVar1;
        pfVar5[-5] = pfVar5[-5] * fVar1;
        pfVar5[-4] = pfVar5[-4] * fVar1;
        pfVar5[-3] = pfVar5[-3] * fVar1;
        pfVar5[-2] = pfVar5[-2] * fVar1;
        pfVar5[-1] = pfVar5[-1] * fVar1;
        *pfVar5 = *pfVar5 * fVar1;
        pfVar5[1] = pfVar5[1] * fVar1;
        pfVar5[2] = pfVar5[2] * fVar1;
        pfVar5[3] = pfVar5[3] * fVar1;
        pfVar5[4] = pfVar5[4] * fVar1;
        pfVar5[5] = pfVar5[5] * fVar1;
        pfVar5[6] = pfVar5[6] * fVar1;
        pfVar5[7] = pfVar5[7] * fVar1;
        pfVar5 = pfVar5 + 0x10;
      } while (iVar11 < (int)(iVar14 - uVar6));
      if (iVar14 <= iVar11) {
        return 1;
      }
    }
    fVar1 = (float)(&DAT_0112db98)[iVar12];
    if (3 < iVar14 - iVar11) {
      iVar2 = iVar11 + 2;
      iVar12 = ((iVar14 - iVar11) - 4U >> 2) + 1;
      iVar11 = iVar11 + iVar12 * 4;
      pfVar5 = (float *)((int)param_4 + iVar2 * 4);
      do {
        pfVar5[-2] = pfVar5[-2] * fVar1;
        pfVar5[-1] = pfVar5[-1] * fVar1;
        *pfVar5 = *pfVar5 * fVar1;
        pfVar5[1] = pfVar5[1] * fVar1;
        iVar12 = iVar12 + -1;
        pfVar5 = pfVar5 + 4;
      } while (iVar12 != 0);
      if (iVar14 <= iVar11) {
        return 1;
      }
    }
    do {
      *(float *)((int)param_4 + iVar11 * 4) = fVar1 * *(float *)((int)param_4 + iVar11 * 4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar14);
  }
  return 1;
}



void FUN_00ea7c10(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xb18);
    free(param_1);
  }
  return;
}



void FUN_00ea7c40(void *param_1)

{
  void *_Memory;
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = 0;
    if (0 < *(int *)((int)param_1 + 4)) {
      do {
        _Memory = *(void **)(*(int *)((int)param_1 + 0x14) + iVar1 * 4);
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)param_1 + 4));
    }
    free(*(void **)((int)param_1 + 0x14));
    iVar1 = 0;
    if (0 < *(int *)((int)param_1 + 0x18)) {
      do {
        free(*(void **)(*(int *)((int)param_1 + 0x1c) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)param_1 + 0x18));
    }
    free(*(void **)((int)param_1 + 0x1c));
    memset(param_1,0,0x2c);
    free(param_1);
  }
  return;
}



void FUN_00ea7cc0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  iVar6 = 0;
  func_0x00eaa940(param_2,*param_1,0x18);
  func_0x00eaa940(param_2,param_1[1],0x18);
  func_0x00eaa940(param_2,param_1[2] + -1,0x18);
  func_0x00eaa940(param_2,param_1[3] + -1,6);
  func_0x00eaa940(param_2,param_1[5],8);
  iVar4 = 0;
  if (0 < (int)param_1[3]) {
    puVar5 = param_1 + 6;
    do {
      iVar1 = func_0x00e9cb70(*puVar5);
      uVar3 = *puVar5;
      if (iVar1 < 4) {
        uVar2 = 4;
      }
      else {
        func_0x00eaa940(param_2,uVar3,3);
        func_0x00eaa940(param_2,1,1);
        uVar3 = (int)*puVar5 >> 3;
        uVar2 = 5;
      }
      func_0x00eaa940(param_2,uVar3,uVar2);
      iVar1 = 0;
      for (uVar3 = *puVar5; uVar3 != 0; uVar3 = uVar3 >> 1) {
        iVar1 = iVar1 + (uVar3 & 1);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + iVar1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < (int)param_1[3]);
    if (0 < iVar6) {
      param_1 = param_1 + 0x46;
      do {
        func_0x00eaa940(param_2,*param_1,8);
        param_1 = param_1 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}



undefined4 * FUN_00ea7db0(int param_1,undefined4 param_2)

{
  undefined4 *_Dst;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iStack_8;
  uint *puStack_4;
  
  iVar7 = 0;
  _Dst = (undefined4 *)func_0x008aaf6c(1,0xb18);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar1 = func_0x00eaa820(param_2,0x18);
  *_Dst = uVar1;
  uVar1 = func_0x00eaa820(param_2,0x18);
  _Dst[1] = uVar1;
  iVar2 = func_0x00eaa820(param_2,0x18);
  _Dst[2] = iVar2 + 1;
  iVar2 = func_0x00eaa820(param_2,6);
  _Dst[3] = iVar2 + 1;
  iVar2 = func_0x00eaa820(param_2,8);
  _Dst[5] = iVar2;
  if (-1 < iVar2) {
    iStack_8 = 0;
    if (0 < (int)_Dst[3]) {
      puStack_4 = _Dst + 6;
      do {
        uVar3 = func_0x00eaa820(param_2,3);
        iVar2 = func_0x00eaa820(param_2,1);
        if (iVar2 < 0) goto LAB_00ea7f2e;
        if (iVar2 != 0) {
          iVar2 = func_0x00eaa820(param_2,5);
          if (iVar2 < 0) goto LAB_00ea7f2e;
          uVar3 = uVar3 | iVar2 << 3;
        }
        iVar2 = 0;
        *puStack_4 = uVar3;
        for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
          iVar2 = iVar2 + (uVar3 & 1);
        }
        puStack_4 = puStack_4 + 1;
        iStack_8 = iStack_8 + 1;
        iVar7 = iVar7 + iVar2;
      } while (iStack_8 < (int)_Dst[3]);
    }
    iVar2 = 0;
    if (0 < iVar7) {
      piVar6 = _Dst + 0x46;
      do {
        iVar4 = func_0x00eaa820(param_2,8);
        if (iVar4 < 0) goto LAB_00ea7f2e;
        *piVar6 = iVar4;
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar2 < iVar7);
    }
    iVar2 = _Dst[5];
    if (iVar2 < *(int *)(iVar5 + 0x18)) {
      iVar4 = 0;
      if (0 < iVar7) {
        piVar6 = _Dst + 0x46;
        do {
          if ((*(int *)(iVar5 + 0x18) <= *piVar6) ||
             (iVar2 = _Dst[5], *(int *)(*(int *)(iVar5 + 0x720 + *piVar6 * 4) + 0xc) == 0))
          goto LAB_00ea7f2e;
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < iVar7);
      }
      piVar6 = *(int **)(iVar5 + 0x720 + iVar2 * 4);
      iVar7 = 1;
      iVar5 = *piVar6;
      iVar2 = piVar6[1];
      if (0 < iVar5) {
        while (iVar7 = iVar7 * _Dst[3], iVar7 - iVar2 == 0 || iVar7 < iVar2) {
          iVar5 = iVar5 + -1;
          if (iVar5 < 1) {
            _Dst[4] = iVar7;
            return _Dst;
          }
        }
      }
    }
  }
LAB_00ea7f2e:
  memset(_Dst,0,0xb18);
  free(_Dst);
  return (undefined4 *)0x0;
}



int * FUN_00ea7f50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iStack_18;
  int iStack_14;
  
  piVar2 = (int *)func_0x008aaf6c(1,0x2c);
  iVar7 = 0;
  iVar9 = 0;
  iStack_14 = 0;
  iStack_18 = 0;
  iVar10 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  *piVar2 = param_2;
  iVar4 = *(int *)(param_2 + 0xc);
  piVar2[1] = iVar4;
  piVar2[3] = *(int *)(iVar10 + 0xb20);
  piVar8 = (int *)(*(int *)(iVar10 + 0xb20) + *(int *)(param_2 + 0x14) * 0x38);
  piVar2[4] = (int)piVar8;
  iVar1 = *piVar8;
  iVar3 = func_0x008aaf6c(iVar4,4);
  iVar4 = piVar2[1];
  piVar2[5] = iVar3;
  param_1 = 0;
  if (0 < iVar4) {
    do {
      iVar4 = func_0x00e9cb70(*(undefined4 *)(param_2 + 0x18 + param_1 * 4));
      if (iVar4 != 0) {
        if (iVar9 < iVar4) {
          iVar9 = iVar4;
        }
        iVar3 = piVar2[5];
        uVar5 = func_0x008aaf6c(iVar4,4);
        *(undefined4 *)(iVar3 + param_1 * 4) = uVar5;
        iVar3 = 0;
        iStack_18 = iVar9;
        if (0 < iVar4) {
          uVar6 = 1;
          piVar8 = (int *)(param_2 + 0x118 + iVar7 * 4);
          do {
            if ((*(uint *)(param_2 + 0x18 + param_1 * 4) & uVar6) != 0) {
              iVar7 = *piVar8;
              iStack_14 = iStack_14 + 1;
              piVar8 = piVar8 + 1;
              *(int *)(*(int *)(piVar2[5] + param_1 * 4) + iVar3 * 4) =
                   *(int *)(iVar10 + 0xb20) + iVar7 * 0x38;
            }
            iVar3 = iVar3 + 1;
            uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
            iVar7 = iStack_14;
          } while (iVar3 < iVar4);
        }
      }
      iVar4 = piVar2[1];
      param_1 = param_1 + 1;
    } while (param_1 < iVar4);
  }
  piVar2[6] = 1;
  iVar7 = 1;
  iVar10 = iVar1;
  if (0 < iVar1) {
    do {
      iVar7 = iVar7 * iVar4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    piVar2[6] = iVar7;
  }
  piVar2[2] = iStack_18;
  iVar10 = func_0x008aafe4(iVar7 * 4);
  piVar2[7] = iVar10;
  iVar10 = piVar2[6];
  param_1 = 0;
  if (0 < iVar10) {
    do {
      iVar4 = piVar2[1];
      iVar7 = piVar2[7];
      uVar5 = func_0x008aafe4(iVar1 * 4);
      iVar9 = 0;
      *(undefined4 *)(iVar7 + param_1 * 4) = uVar5;
      iVar10 = iVar10 / iVar4;
      param_2 = param_1;
      if (0 < iVar1) {
        do {
          iVar7 = param_2 / iVar10;
          iVar4 = piVar2[1];
          param_2 = param_2 - iVar7 * iVar10;
          *(int *)(*(int *)(param_1 * 4 + piVar2[7]) + iVar9 * 4) = iVar7;
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 / iVar4;
        } while (iVar9 < iVar1);
      }
      iVar10 = piVar2[6];
      param_1 = param_1 + 1;
    } while (param_1 < iVar10);
  }
  return piVar2;
}



undefined4
FUN_00ea8180(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_5) {
    puVar2 = param_3;
    do {
      if (*(int *)((int)puVar2 + (param_4 - (int)param_3)) != 0) {
        param_3[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      }
      puVar2 = puVar2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (iVar3 != 0) {
      uVar1 = func_0x00ea8cc0(param_1,param_2,param_3,iVar3,FUN_00e9dbf0);
      return uVar1;
    }
  }
  return 0;
}



undefined4
FUN_00ea81e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_6) {
    puVar2 = param_4;
    do {
      if (*(int *)((int)puVar2 + (param_5 - (int)param_4)) != 0) {
        param_4[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      }
      puVar2 = puVar2 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    if (iVar3 != 0) {
      uVar1 = func_0x00ea89f0(param_1,param_3,param_4,iVar3,param_7,FUN_00ea8f00);
      return uVar1;
    }
  }
  return 0;
}



int FUN_00ea8240(undefined4 param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  undefined1 (*pauVar5) [16];
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar16;
  int iVar17;
  undefined1 auVar15 [16];
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iStack_24;
  int iStack_14;
  int iStack_10;
  
  iVar10 = 0;
  if (0 < (int)param_5) {
    piVar7 = param_3;
    do {
      if (*(int *)((int)piVar7 + (param_4 - (int)param_3)) != 0) {
        param_3[iVar10] = *piVar7;
        iVar10 = iVar10 + 1;
      }
      piVar7 = piVar7 + 1;
      param_5 = (int *)((int)param_5 + -1);
    } while (param_5 != (int *)0x0);
    if (iVar10 != 0) {
      piVar7 = (int *)*param_2;
      iVar1 = piVar7[3];
      uVar2 = piVar7[2];
      iVar3 = (piVar7[1] - *piVar7) / (int)uVar2;
      iVar4 = func_0x00e9b5f0(param_1,iVar10 * 4);
      iVar12 = 0;
      if (0 < iVar10) {
        do {
          _Dst = (void *)func_0x00e9b5f0(param_1,iVar3 << 2);
          *(void **)(iVar4 + iVar12 * 4) = _Dst;
          memset(_Dst,0,iVar3 << 2);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar10);
      }
      iStack_24 = 0;
      if (0 < iVar3) {
        iStack_10 = 0;
        do {
          iVar12 = *piVar7;
          if (0 < iVar10) {
            param_5 = param_3;
            iStack_14 = iVar10;
            do {
              uVar13 = 0;
              iVar11 = 0;
              iVar9 = 0;
              if (0 < (int)uVar2) {
                if ((7 < uVar2) && (1 < DAT_013ddbb0)) {
                  uVar13 = uVar2 & 0x80000007;
                  if ((int)uVar13 < 0) {
                    uVar13 = (uVar13 - 1 | 0xfffffff8) + 1;
                  }
                  uVar19 = 0;
                  uVar20 = 0;
                  uVar21 = 0;
                  uVar22 = 0;
                  uVar23 = 0;
                  uVar24 = 0;
                  uVar25 = 0;
                  uVar26 = 0;
                  iVar11 = 0;
                  iVar27 = 0;
                  iVar28 = 0;
                  iVar29 = 0;
                  iVar30 = 0;
                  iVar31 = 0;
                  iVar32 = 0;
                  iVar33 = 0;
                  pauVar5 = (undefined1 (*) [16])(*param_5 + (iVar12 + iStack_10) * 4);
                  do {
                    iVar9 = iVar9 + 8;
                    auVar15 = pabsd(*pauVar5,*pauVar5);
                    iVar14 = auVar15._0_4_;
                    iVar30 = iVar30 + iVar14;
                    iVar16 = auVar15._4_4_;
                    iVar31 = iVar31 + iVar16;
                    iVar17 = auVar15._8_4_;
                    iVar32 = iVar32 + iVar17;
                    iVar18 = auVar15._12_4_;
                    iVar33 = iVar33 + iVar18;
                    uVar19 = (uint)((int)uVar19 < iVar14) * iVar14 |
                             ((int)uVar19 >= iVar14) * uVar19;
                    uVar20 = (uint)((int)uVar20 < iVar16) * iVar16 |
                             ((int)uVar20 >= iVar16) * uVar20;
                    uVar21 = (uint)((int)uVar21 < iVar17) * iVar17 |
                             ((int)uVar21 >= iVar17) * uVar21;
                    uVar22 = (uint)((int)uVar22 < iVar18) * iVar18 |
                             ((int)uVar22 >= iVar18) * uVar22;
                    auVar15 = pabsd(pauVar5[1],pauVar5[1]);
                    iVar14 = auVar15._0_4_;
                    iVar11 = iVar11 + iVar14;
                    iVar16 = auVar15._4_4_;
                    iVar27 = iVar27 + iVar16;
                    iVar17 = auVar15._8_4_;
                    iVar28 = iVar28 + iVar17;
                    iVar18 = auVar15._12_4_;
                    iVar29 = iVar29 + iVar18;
                    uVar23 = (uint)((int)uVar23 < iVar14) * iVar14 |
                             ((int)uVar23 >= iVar14) * uVar23;
                    uVar24 = (uint)((int)uVar24 < iVar16) * iVar16 |
                             ((int)uVar24 >= iVar16) * uVar24;
                    uVar25 = (uint)((int)uVar25 < iVar17) * iVar17 |
                             ((int)uVar25 >= iVar17) * uVar25;
                    uVar26 = (uint)((int)uVar26 < iVar18) * iVar18 |
                             ((int)uVar26 >= iVar18) * uVar26;
                    pauVar5 = pauVar5 + 2;
                  } while (iVar9 < (int)(uVar2 - uVar13));
                  iVar11 = iVar11 + iVar30 + iVar28 + iVar32 + iVar27 + iVar31 + iVar29 + iVar33;
                  uVar13 = ((int)uVar19 < (int)uVar23) * uVar23 |
                           ((int)uVar19 >= (int)uVar23) * uVar19;
                  uVar19 = ((int)uVar20 < (int)uVar24) * uVar24 |
                           ((int)uVar20 >= (int)uVar24) * uVar20;
                  uVar20 = ((int)uVar21 < (int)uVar25) * uVar25 |
                           ((int)uVar21 >= (int)uVar25) * uVar21;
                  uVar21 = ((int)uVar22 < (int)uVar26) * uVar26 |
                           ((int)uVar22 >= (int)uVar26) * uVar22;
                  uVar13 = ((int)uVar13 < (int)uVar20) * uVar20 |
                           ((int)uVar13 >= (int)uVar20) * uVar13;
                  uVar19 = ((int)uVar19 < (int)uVar21) * uVar21 |
                           ((int)uVar19 >= (int)uVar21) * uVar19;
                  uVar13 = ((int)uVar13 < (int)uVar19) * uVar19 |
                           ((int)uVar13 >= (int)uVar19) * uVar13;
                  if ((int)uVar2 <= iVar9) goto LAB_00ea844b;
                }
                iVar27 = uVar2 - iVar9;
                puVar8 = (uint *)(*param_5 + (iVar12 + iStack_10 + iVar9) * 4);
                do {
                  uVar19 = *puVar8;
                  puVar8 = puVar8 + 1;
                  uVar20 = (int)uVar19 >> 0x1f;
                  uVar20 = (uVar19 ^ uVar20) - uVar20;
                  if ((int)uVar13 < (int)uVar20) {
                    uVar13 = uVar20;
                  }
                  iVar11 = iVar11 + uVar20;
                  iVar27 = iVar27 + -1;
                } while (iVar27 != 0);
              }
LAB_00ea844b:
              iVar9 = 0;
              if (0 < iVar1 + -1) {
                piVar6 = piVar7 + 0x286;
                do {
                  if (((int)uVar13 <= piVar6[-0x40]) &&
                     ((*piVar6 < 0 || ((int)((float)iVar11 * (100.0 / (float)(int)uVar2)) < *piVar6)
                      ))) break;
                  iVar9 = iVar9 + 1;
                  piVar6 = piVar6 + 1;
                } while (iVar9 < iVar1 + -1);
              }
              *(int *)(*(int *)((int)param_5 + (iVar4 - (int)param_3)) + iStack_24 * 4) = iVar9;
              param_5 = param_5 + 1;
              iStack_14 = iStack_14 + -1;
            } while (iStack_14 != 0);
          }
          iStack_24 = iStack_24 + 1;
          iStack_10 = iStack_10 + uVar2;
        } while (iStack_24 < iVar3);
      }
      param_2[10] = param_2[10] + 1;
      return iVar4;
    }
  }
  return 0;
}



undefined4
FUN_00ea8500(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_5) {
    puVar2 = param_3;
    do {
      if (*(int *)((int)puVar2 + (param_4 - (int)param_3)) != 0) {
        param_3[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      }
      puVar2 = puVar2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if (iVar3 != 0) {
      uVar1 = func_0x00ea8cc0(param_1,param_2,param_3,iVar3,FUN_00e9d700);
      return uVar1;
    }
  }
  return 0;
}



int * FUN_00ea8560(undefined4 param_1,int *param_2,int *param_3,int param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  void *_Dst;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_20;
  int iStack_14;
  
  uVar3 = param_5;
  iVar7 = 0;
  iVar6 = 0;
  if (0 < (int)param_5) {
    if (param_5 < 8) goto LAB_00ea85f0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar7 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    do {
      piVar1 = (int *)(param_4 + iVar6 * 4);
      iVar12 = iVar12 + (~-(uint)(*piVar1 == 0) & 1);
      iVar13 = iVar13 + (~-(uint)(piVar1[1] == 0) & 1);
      iVar14 = iVar14 + (~-(uint)(piVar1[2] == 0) & 1);
      iVar15 = iVar15 + (~-(uint)(piVar1[3] == 0) & 1);
      piVar1 = (int *)(param_4 + 0x10 + iVar6 * 4);
      iVar6 = iVar6 + 8;
      iVar7 = iVar7 + (~-(uint)(*piVar1 == 0) & 1);
      iVar9 = iVar9 + (~-(uint)(piVar1[1] == 0) & 1);
      iVar10 = iVar10 + (~-(uint)(piVar1[2] == 0) & 1);
      iVar11 = iVar11 + (~-(uint)(piVar1[3] == 0) & 1);
    } while (iVar6 < (int)(param_5 & 0xfffffff8));
    iVar7 = iVar7 + iVar12 + iVar10 + iVar14 + iVar9 + iVar13 + iVar11 + iVar15;
    for (; iVar6 < (int)param_5; iVar6 = iVar6 + 1) {
LAB_00ea85f0:
      iVar9 = iVar7 + 1;
      if (*(int *)(param_4 + iVar6 * 4) == 0) {
        iVar9 = iVar7;
      }
      iVar7 = iVar9;
    }
    if (iVar7 != 0) {
      piVar1 = (int *)*param_2;
      iVar6 = piVar1[2];
      iVar7 = piVar1[3];
      iVar9 = (piVar1[1] - *piVar1) / iVar6;
      piVar4 = (int *)func_0x00e9b5f0(param_1,4);
      _Dst = (void *)func_0x00e9b5f0(param_1,iVar9 << 2);
      *piVar4 = (int)_Dst;
      memset(_Dst,0,iVar9 << 2);
      iStack_14 = 0;
      param_5 = *piVar1 / (int)param_5;
      if (0 < iVar9) {
        do {
          iVar10 = 0;
          iVar11 = 0;
          iStack_20 = 0;
          if (0 < iVar6) {
            do {
              uVar2 = *(uint *)(*param_3 + param_5 * 4);
              iVar13 = 1;
              uVar8 = (int)uVar2 >> 0x1f;
              iVar12 = (uVar2 ^ uVar8) - uVar8;
              if (iVar11 < iVar12) {
                iVar11 = iVar12;
              }
              if (1 < (int)uVar3) {
                do {
                  uVar2 = *(uint *)(param_3[iVar13] + param_5 * 4);
                  uVar8 = (int)uVar2 >> 0x1f;
                  iVar12 = (uVar2 ^ uVar8) - uVar8;
                  if (iVar10 < iVar12) {
                    iVar10 = iVar12;
                  }
                  iVar13 = iVar13 + 1;
                } while (iVar13 < (int)uVar3);
              }
              iStack_20 = iStack_20 + uVar3;
              param_5 = param_5 + 1;
            } while (iStack_20 < iVar6);
          }
          iVar12 = 0;
          if (0 < iVar7 + -1) {
            piVar5 = piVar1 + 0x286;
            do {
              if ((iVar11 <= piVar5[-0x40]) && (iVar10 <= *piVar5)) break;
              iVar12 = iVar12 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar12 < iVar7 + -1);
          }
          *(int *)(*piVar4 + iStack_14 * 4) = iVar12;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iVar9);
      }
      param_2[10] = param_2[10] + 1;
      return piVar4;
    }
  }
  return (int *)0x0;
}



undefined4
FUN_00ea8760(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iStack_4;
  
  iVar8 = *(int *)(param_2 + 0x24) / 2;
  iStack_4 = func_0x00e9b5f0(param_2,iVar8 * param_6 * 4);
  if (0 < param_6) {
    iVar6 = iStack_4 - (int)param_5;
    param_4 = param_4 - (int)param_5;
    param_2 = param_6;
    iVar4 = 0;
    do {
      iVar2 = *(int *)((int)param_5 + param_4);
      iVar3 = iVar4 + 1;
      if (*param_5 == 0) {
        iVar3 = iVar4;
      }
      iVar4 = 0;
      if (0 < iVar8) {
        puVar7 = (undefined4 *)(iVar6 + (int)param_5);
        do {
          iVar1 = iVar4 * 4;
          iVar4 = iVar4 + 1;
          *puVar7 = *(undefined4 *)(iVar2 + iVar1);
          puVar7 = puVar7 + param_6;
        } while (iVar4 < iVar8);
      }
      param_5 = param_5 + 1;
      param_2 = param_2 + -1;
      iVar4 = iVar3;
    } while (param_2 != 0);
    if (iVar3 != 0) {
      uVar5 = func_0x00ea89f0(param_1,param_3,&iStack_4,1,param_7,FUN_00ea8f00);
      return uVar5;
    }
  }
  return 0;
}



undefined4 FUN_00ea8840(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_18;
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[2];
  iVar3 = *(int *)param_2[4];
  iVar9 = *(int *)(param_1 + 0x24) * param_5 >> 1;
  iVar4 = piVar1[1];
  if (iVar9 <= piVar1[1]) {
    iVar4 = iVar9;
  }
  if (0 < iVar4 - *piVar1) {
    iVar4 = (iVar4 - *piVar1) / iVar2;
    piVar5 = (int *)func_0x00e9b5f0(param_1,(iVar4 + -1 + iVar3) / iVar3 << 2);
    iVar9 = 0;
    if (0 < param_5) {
      do {
        if (*(int *)(param_4 + iVar9 * 4) != 0) break;
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_5);
    }
    if ((iVar9 != param_5) && (iStack_18 = 0, 0 < param_2[2])) {
      do {
        iVar9 = 0;
        piVar6 = piVar5;
        if (0 < iVar4) {
          do {
            if (iStack_18 == 0) {
              iVar7 = func_0x00e9d6d0(param_2[4],param_1 + 4);
              if (iVar7 == -1) {
                return 0;
              }
              if (piVar1[4] <= iVar7) {
                return 0;
              }
              iVar7 = *(int *)(param_2[7] + iVar7 * 4);
              *piVar6 = iVar7;
              if (iVar7 == 0) {
                return 0;
              }
            }
            iVar7 = 0;
            if (0 < iVar3) {
              iVar10 = iVar9 * iVar2;
              do {
                if (iVar4 <= iVar9) break;
                iVar8 = *(int *)(*piVar6 + iVar7 * 4);
                if ((((piVar1[iVar8 + 6] & 1 << ((byte)iStack_18 & 0x1f)) != 0) &&
                    (iVar8 = *(int *)(*(int *)(param_2[5] + iVar8 * 4) + iStack_18 * 4), iVar8 != 0)
                    ) && (iVar8 = func_0x00e9de50(iVar8,param_3,*piVar1 + iVar10,param_5,param_1 + 4
                                                  ,iVar2), iVar8 == -1)) {
                  return 0;
                }
                iVar7 = iVar7 + 1;
                iVar9 = iVar9 + 1;
                iVar10 = iVar10 + iVar2;
              } while (iVar7 < iVar3);
            }
            piVar6 = piVar6 + 1;
          } while (iVar9 < iVar4);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < param_2[2]);
    }
  }
  return 0;
}



int FUN_00ea8f00(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_4;
  iVar4 = 0;
  param_3 = param_3 / iVar1;
  if (0 < param_3) {
    do {
      uVar2 = func_0x00ea8f60(param_4,param_2);
      iVar3 = func_0x00e9e070(param_4,uVar2,param_1);
      iVar4 = iVar4 + iVar3;
      param_2 = param_2 + iVar1 * 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return iVar4;
}



void FUN_00ea93e0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xc88);
    free(param_1);
  }
  return;
}



void FUN_00ea9410(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_4;
  
  if (*param_2 < 2) {
    iVar1 = 0;
    uVar3 = 1;
  }
  else {
    func_0x00eaa940(param_3,1,1);
    iVar1 = *param_2 + -1;
    uVar3 = 4;
  }
  func_0x00eaa940(param_3,iVar1,uVar3);
  if (param_2[0x121] < 1) {
    func_0x00eaa940(param_3,0,1);
  }
  else {
    func_0x00eaa940(param_3,1,1);
    func_0x00eaa940(param_3,param_2[0x121] + -1,8);
    iStack_4 = 0;
    if (0 < param_2[0x121]) {
      piVar2 = param_2 + 0x222;
      do {
        iVar1 = piVar2[-0x100];
        uVar3 = func_0x00e9cb70(*(int *)(param_1 + 4) + -1);
        func_0x00eaa940(param_3,iVar1,uVar3);
        iVar1 = *piVar2;
        uVar3 = func_0x00e9cb70(*(int *)(param_1 + 4) + -1);
        func_0x00eaa940(param_3,iVar1,uVar3);
        iStack_4 = iStack_4 + 1;
        piVar2 = piVar2 + 1;
      } while (iStack_4 < param_2[0x121]);
    }
  }
  func_0x00eaa940(param_3,0,2);
  if ((1 < *param_2) && (iVar1 = 0, piVar2 = param_2, 0 < *(int *)(param_1 + 4))) {
    do {
      func_0x00eaa940(param_3,piVar2[1],4);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  iVar1 = 0;
  if (0 < *param_2) {
    piVar2 = param_2 + 0x111;
    do {
      func_0x00eaa940(param_3,0,8);
      func_0x00eaa940(param_3,piVar2[-0x10],8);
      func_0x00eaa940(param_3,*piVar2,8);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *param_2);
  }
  return;
}



int * FUN_00ea9580(int param_1,undefined4 param_2)

{
  int iVar1;
  int *_Dst;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piStack_c;
  
  _Dst = (int *)func_0x008aaf6c(1,0xc88);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (0 < *(int *)(param_1 + 4)) {
    iVar2 = func_0x00eaa820(param_2,1);
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        *_Dst = 1;
      }
      else {
        iVar2 = func_0x00eaa820(param_2,4);
        *_Dst = iVar2 + 1;
        if (iVar2 + 1 < 1) goto LAB_00ea95d0;
      }
      iVar2 = func_0x00eaa820(param_2,1);
      if (-1 < iVar2) {
        if (iVar2 != 0) {
          iVar2 = func_0x00eaa820(param_2,8);
          _Dst[0x121] = iVar2 + 1;
          if (iVar2 + 1 < 1) goto LAB_00ea95d0;
          piStack_c = _Dst + 0x222;
          iVar2 = 0;
          do {
            uVar3 = func_0x00e9cb70(*(int *)(param_1 + 4) + -1);
            iVar4 = func_0x00eaa820(param_2,uVar3);
            piStack_c[-0x100] = iVar4;
            uVar3 = func_0x00e9cb70(*(int *)(param_1 + 4) + -1);
            iVar5 = func_0x00eaa820(param_2,uVar3);
            *piStack_c = iVar5;
            if ((((iVar4 < 0) || (iVar5 < 0)) || (iVar4 == iVar5)) ||
               ((*(int *)(param_1 + 4) <= iVar4 || (*(int *)(param_1 + 4) <= iVar5))))
            goto LAB_00ea95d0;
            iVar2 = iVar2 + 1;
            piStack_c = piStack_c + 1;
          } while (iVar2 < _Dst[0x121]);
        }
        iVar2 = func_0x00eaa820(param_2,2);
        if (iVar2 == 0) {
          iVar2 = *_Dst;
          if ((1 < iVar2) && (iVar4 = 0, piVar6 = _Dst, 0 < *(int *)(param_1 + 4))) {
            do {
              iVar5 = func_0x00eaa820(param_2,4);
              piVar6[1] = iVar5;
              iVar2 = *_Dst;
              if ((iVar2 <= iVar5) || (iVar5 < 0)) goto LAB_00ea95d0;
              iVar4 = iVar4 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar4 < *(int *)(param_1 + 4));
          }
          iVar4 = 0;
          if (0 < iVar2) {
            piVar6 = _Dst + 0x111;
            do {
              func_0x00eaa820(param_2,8);
              iVar2 = func_0x00eaa820(param_2,8);
              piVar6[-0x10] = iVar2;
              if ((*(int *)(iVar1 + 0x10) <= iVar2) || (iVar2 < 0)) goto LAB_00ea95d0;
              iVar2 = func_0x00eaa820(param_2,8);
              *piVar6 = iVar2;
              if ((*(int *)(iVar1 + 0x14) <= iVar2) || (iVar2 < 0)) goto LAB_00ea95d0;
              iVar4 = iVar4 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar4 < *_Dst);
          }
          return _Dst;
        }
      }
    }
  }
LAB_00ea95d0:
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0xc88);
    free(_Dst);
  }
  return (int *)0x0;
}



void FUN_00ea9770(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  void *_Dst;
  undefined4 uVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  float *pfVar25;
  uint *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  int *piVar29;
  uint uVar30;
  float fVar31;
  float fStack_40;
  int iStack_3c;
  int iStack_30;
  int iStack_24;
  int iStack_20;
  float *pfStack_14;
  int iStack_10;
  uint uStack_c;
  
  iVar1 = *(int *)(param_1[0x10] + 4);
  iVar2 = *(int *)(param_1[0x10] + 0x68);
  iVar3 = param_1[0x1a];
  iVar4 = *(int *)(iVar1 + 4);
  iVar5 = *(int *)(iVar1 + 0x1c);
  iVar18 = param_1[9];
  func_0x00e88230();
  iVar12 = func_0x00e9b5f0(param_1,iVar4 << 2);
  puVar13 = (undefined4 *)func_0x00e9b5f0(param_1,*(int *)(iVar1 + 4) << 2);
  piVar14 = (int *)func_0x00e9b5f0(param_1,*(int *)(iVar1 + 4) << 2);
  fStack_40 = *(float *)(iVar3 + 4);
  pfStack_14 = (float *)&stack0xffffff84;
  func_0x00e88230();
  iVar4 = param_1[7];
  piVar6 = *(int **)(iVar5 + 0x220 + iVar4 * 4);
  iStack_24 = 0;
  iVar15 = ((-(uint)(iVar4 != 0) & 2) + *(int *)(iVar3 + 8)) * 0x34 + *(int *)(iVar2 + 0x38);
  param_1[10] = iVar4;
  if (0 < *(int *)(iVar1 + 4)) {
    iVar16 = iVar18 / 2 << 2;
    fVar10 = (((float)(int)ABS(4.0 / (float)iVar18) + 0.0) * 7.1771143e-07 - 764.6162) + 0.345;
    do {
      puVar28 = (undefined4 *)((iVar12 - (int)&stack0xffffff84) + (int)pfStack_14);
      pfVar25 = *(float **)(*param_1 + iStack_24 * 4);
      uVar17 = func_0x00e9b5f0(param_1,iVar16);
      *(undefined4 *)((int)puVar28 + ((int)puVar13 - iVar12)) = uVar17;
      uVar17 = func_0x00e9b5f0(param_1,iVar16);
      *puVar28 = uVar17;
      func_0x00ea4d00(pfVar25,iVar2 + 4,iVar5,param_1[6],param_1[7],param_1[8]);
      func_0x00ea29d0(**(undefined4 **)(iVar2 + 0xc + param_1[7] * 4),pfVar25,*puVar28);
      func_0x00ea4850(iVar2 + 0x14 + param_1[7] * 0xc,pfVar25);
      iVar23 = 1;
      fVar31 = (((float)(int)ABS(*pfVar25) + 0.0) * 7.1771143e-07 - 764.6162) + fVar10 + 0.345;
      *pfVar25 = fVar31;
      *pfStack_14 = fVar31;
      if (1 < iVar18 + -1) {
        do {
          fVar11 = (((float)(int)ABS(pfVar25[iVar23] * pfVar25[iVar23] +
                                     pfVar25[iVar23 + 1] * pfVar25[iVar23 + 1]) + 0.0) *
                    7.1771143e-07 - 764.6162) * 0.5 + fVar10 + 0.345;
          pfVar25[iVar23 + 1 >> 1] = fVar11;
          fVar31 = *pfStack_14;
          if (*pfStack_14 < fVar11) {
            *pfStack_14 = fVar11;
            fVar31 = fVar11;
          }
          iVar23 = iVar23 + 2;
        } while (iVar23 < iVar18 + -1);
      }
      if (0.0 < fVar31) {
        fVar31 = 0.0;
        *pfStack_14 = 0.0;
      }
      if (fVar31 <= fStack_40) {
        fVar31 = fStack_40;
      }
      pfStack_14 = pfStack_14 + 1;
      iStack_24 = iStack_24 + 1;
      fStack_40 = fVar31;
    } while (iStack_24 < *(int *)(iVar1 + 4));
  }
  iVar18 = iVar18 / 2;
  iVar16 = iVar18 * 4;
  uVar17 = func_0x00e9b5f0(param_1,iVar16);
  uVar19 = func_0x00e9b5f0(param_1,iVar16);
  iStack_30 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    piVar22 = piVar14;
    do {
      iVar7 = piVar6[iStack_30 + 1];
      iVar8 = *(int *)(&stack0xffffff84 + -(int)piVar14 + (iVar12 - (int)&stack0xffffff84) +
                      (int)piVar22);
      iVar9 = *(int *)(*param_1 + iStack_30 * 4);
      iVar20 = iVar9 + iVar16;
      param_1[10] = iVar4;
      _Dst = (void *)func_0x00e9b5f0(param_1,0x3c);
      *piVar22 = (int)_Dst;
      memset(_Dst,0,0x3c);
      iVar23 = 0;
      if (3 < iVar18) {
        pfVar25 = (float *)(iVar20 + 4);
        puVar26 = (uint *)(iVar8 + 0xc);
        iVar24 = (iVar18 - 4U >> 2) + 1;
        iVar23 = iVar24 * 4;
        do {
          pfVar25[-1] = (((float)(puVar26[-3] & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) +
                        0.345;
          *pfVar25 = (((float)(*(uint *)((iVar8 - iVar20) + (int)pfVar25) & 0x7fffffff) + 0.0) *
                      7.1771143e-07 - 764.6162) + 0.345;
          pfVar25[1] = (((float)(puVar26[-1] & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) +
                       0.345;
          uVar30 = *puVar26;
          puVar26 = puVar26 + 4;
          pfVar25[2] = (((float)(uVar30 & 0x7fffffff) + 0.0) * 7.1771143e-07 - 764.6162) + 0.345;
          pfVar25 = pfVar25 + 4;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      if (iVar23 < iVar18) {
        pfVar25 = (float *)(iVar20 + iVar23 * 4);
        iVar23 = iVar18 - iVar23;
        do {
          *pfVar25 = (((float)(*(uint *)((iVar8 - iVar20) + (int)pfVar25) & 0x7fffffff) + 0.0) *
                      7.1771143e-07 - 764.6162) + 0.345;
          pfVar25 = pfVar25 + 1;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      func_0x00e9eeb0(iVar15,iVar20,uVar17);
      func_0x00e9fe70(iVar15,iVar9,uVar19,fStack_40,
                      *(undefined4 *)(&stack0xffffff84 + -(int)piVar14 + (int)piVar22));
      func_0x00e9f360(iVar15,uVar17,uVar19,1,iVar9,iVar8,iVar20);
      if (*(int *)(iVar5 + 800 + piVar6[iVar7 + 0x101] * 4) != 1) {
        FUN_008ab370();
        return;
      }
      uVar21 = func_0x00ea6fc0(param_1,*(undefined4 *)
                                        (*(int *)(iVar2 + 0x30) + piVar6[iVar7 + 0x101] * 4),iVar20,
                               iVar9);
      *(undefined4 *)(*piVar22 + 0x1c) = uVar21;
      iVar23 = func_0x00ea4ce0(param_1);
      if ((iVar23 != 0) && (*(int *)(*piVar22 + 0x1c) != 0)) {
        func_0x00e9f360(iVar15,uVar17,uVar19,2,iVar9,iVar8,iVar20);
        uVar21 = func_0x00ea6fc0(param_1,*(undefined4 *)
                                          (*(int *)(iVar2 + 0x30) + piVar6[iVar7 + 0x101] * 4),
                                 iVar20,iVar9);
        *(undefined4 *)(*piVar22 + 0x38) = uVar21;
        func_0x00e9f360(iVar15,uVar17,uVar19,0,iVar9,iVar8,iVar20);
        uVar21 = func_0x00ea6fc0(param_1,*(undefined4 *)
                                          (*(int *)(iVar2 + 0x30) + piVar6[iVar7 + 0x101] * 4),
                                 iVar20,iVar9);
        pfStack_14 = (float *)0x4;
        uStack_c = 0x10000;
        *(undefined4 *)*piVar22 = uVar21;
        do {
          uVar21 = func_0x00ea77c0(param_1,*(undefined4 *)
                                            (*(int *)(iVar2 + 0x30) + piVar6[iVar7 + 0x101] * 4),
                                   *(undefined4 *)*piVar22,((undefined4 *)*piVar22)[7],uStack_c / 7)
          ;
          *(undefined4 *)((int)pfStack_14 + *piVar22) = uVar21;
          uStack_c = uStack_c + 0x10000;
          pfStack_14 = (float *)((int)pfStack_14 + 4);
        } while ((int)uStack_c < 0x70000);
        uStack_c = 0x20;
        uVar30 = 0x10000;
        do {
          uVar21 = func_0x00ea77c0(param_1,*(undefined4 *)
                                            (*(int *)(iVar2 + 0x30) + piVar6[iVar7 + 0x101] * 4),
                                   *(undefined4 *)(*piVar22 + 0x1c),*(undefined4 *)(*piVar22 + 0x38)
                                   ,uVar30 / 7);
          uVar30 = uVar30 + 0x10000;
          *(undefined4 *)(uStack_c + *piVar22) = uVar21;
          uStack_c = uStack_c + 4;
        } while ((int)uVar30 < 0x70000);
      }
      piVar22 = piVar22 + 1;
      iStack_30 = iStack_30 + 1;
    } while (iStack_30 < *(int *)(iVar1 + 4));
  }
  *(float *)(iVar3 + 4) = fStack_40;
  func_0x00e88230();
  func_0x00e88230();
  iVar18 = func_0x00ea4ce0(param_1);
  iStack_20 = (-(uint)(iVar18 != 0) & 0xfffffff9) + 7;
  func_0x00ea4ce0(param_1);
  do {
    uVar17 = *(undefined4 *)(iVar3 + 0xc + iStack_20 * 4);
    func_0x00eaa940(uVar17,0,1);
    func_0x00eaa940(uVar17,iVar4,*(undefined4 *)(iVar2 + 0x2c));
    if (param_1[7] != 0) {
      func_0x00eaa940(uVar17,param_1[6],1);
      func_0x00eaa940(uVar17,param_1[8],1);
    }
    iVar18 = *(int *)(iVar1 + 4);
    iStack_30 = 0;
    if (0 < iVar18) {
      piVar22 = piVar14;
      piVar29 = piVar6;
      do {
        piVar29 = piVar29 + 1;
        uVar19 = func_0x00ea6970(uVar17,param_1,
                                 *(undefined4 *)
                                  (*(int *)(iVar2 + 0x30) + piVar6[*piVar29 + 0x101] * 4),
                                 *(undefined4 *)(*piVar22 + iStack_20 * 4),
                                 *(undefined4 *)((int)piVar22 + ((int)puVar13 - (int)piVar14)));
        piVar22 = piVar22 + 1;
        *(undefined4 *)(&stack0xffffff80 + -(int)piVar14 + (int)piVar22) = uVar19;
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < *(int *)(iVar1 + 4));
      iVar18 = *(int *)(iVar1 + 4);
    }
    func_0x00e9e410(iStack_20,iVar5 + 0xb34,iVar15,piVar6,iVar12,puVar13,&stack0xffffff84,
                    *(undefined4 *)(iVar5 + ((param_1[7] + 0x36) * 0xf + iStack_20) * 4),iVar18);
    iStack_3c = 0;
    if (0 < *piVar6) {
      piVar22 = piVar6 + 0x111;
      do {
        iVar18 = *piVar22;
        iVar16 = 0;
        iStack_10 = 0;
        if (0 < *(int *)(iVar1 + 4)) {
          puVar28 = (undefined4 *)&stack0xffffff84;
          puVar27 = puVar13;
          piVar29 = piVar6;
          do {
            piVar29 = piVar29 + 1;
            if (*piVar29 == iStack_3c) {
              *puVar28 = 0;
              if (*(int *)((int)puVar27 + (int)(&stack0xffffff84 + -(int)puVar13)) != 0) {
                *puVar28 = 1;
              }
              iStack_10 = iStack_10 + 1;
              *puVar28 = *puVar27;
              puVar28 = puVar28 + 1;
            }
            iVar16 = iVar16 + 1;
            puVar27 = puVar27 + 1;
          } while (iVar16 < *(int *)(iVar1 + 4));
        }
        uVar19 = (**(code **)((&PTR_DAT_01125bb8)[*(int *)(iVar5 + 0x520 + iVar18 * 4)] + 0x14))
                           (param_1,*(undefined4 *)(*(int *)(iVar2 + 0x34) + iVar18 * 4),
                            &stack0xffffff84,&stack0xffffff84,iStack_10);
        iVar16 = 0;
        iVar23 = 0;
        piVar29 = piVar6;
        if (0 < *(int *)(iVar1 + 4)) {
          do {
            if (piVar29[1] == iStack_3c) {
              *(undefined4 *)(&stack0xffffff84 + iVar23 * 4) = puVar13[iVar16];
              iVar23 = iVar23 + 1;
            }
            iVar16 = iVar16 + 1;
            piVar29 = piVar29 + 1;
          } while (iVar16 < *(int *)(iVar1 + 4));
        }
        (**(code **)((&PTR_DAT_01125bb8)[*(int *)(iVar5 + 0x520 + iVar18 * 4)] + 0x18))
                  (uVar17,param_1,*(undefined4 *)(*(int *)(iVar2 + 0x34) + iVar18 * 4),
                   &stack0xffffff84,&stack0xffffff84,iVar23,uVar19,iStack_3c);
        iStack_3c = iStack_3c + 1;
        piVar22 = piVar22 + 1;
      } while (iStack_3c < *piVar6);
    }
    iStack_20 = iStack_20 + 1;
    iVar18 = func_0x00ea4ce0(param_1);
  } while (iStack_20 <= (int)((-(uint)(iVar18 != 0) & 7) + 7));
  FUN_008ab370();
  return;
}



void FUN_00eaa1d0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iStack_10;
  int *piStack_c;
  
  iVar3 = *(int *)(param_1[0x10] + 4);
  iVar4 = *(int *)(param_1[0x10] + 0x68);
  iVar13 = *(int *)(iVar3 + 0x1c);
  iVar8 = *(int *)(iVar13 + param_1[7] * 4);
  param_1[9] = iVar8;
  iVar6 = *(int *)(iVar3 + 4);
  func_0x00e88230();
  func_0x00e88230();
  func_0x00e88230();
  func_0x00e88230();
  piStack_c = (int *)0x0;
  if (0 < iVar6) {
    iStack_10 = 0;
    do {
      iVar6 = (**(code **)((&PTR_DAT_01125bb0)
                           [*(int *)(iVar13 + 800 + param_2[param_2[(int)piStack_c + 1] + 0x101] * 4
                                    )] + 0x14))
                        (param_1,*(undefined4 *)
                                  (*(int *)(iVar4 + 0x30) +
                                  param_2[param_2[(int)piStack_c + 1] + 0x101] * 4));
      *(int *)(&stack0xffffffbc + iStack_10) = iVar6;
      *(uint *)(&stack0xffffffbc + (int)piStack_c * 4) = (uint)(iVar6 != 0);
      memset(*(void **)(*param_1 + (int)piStack_c * 4),0,(uint)(iVar8 << 2) >> 1);
      piStack_c = (int *)((int)piStack_c + 1);
      iStack_10 = iStack_10 + 4;
    } while ((int)piStack_c < *(int *)(iVar3 + 4));
  }
  iVar6 = 0;
  if (0 < param_2[0x121]) {
    piVar9 = param_2 + 0x222;
    do {
      iVar12 = piVar9[-0x100];
      if (*(int *)(&stack0xffffffbc + iVar12 * 4) == 0) {
        if (*(int *)(&stack0xffffffbc + *piVar9 * 4) != 0) {
          iVar12 = piVar9[-0x100];
          goto LAB_00eaa2fa;
        }
      }
      else {
LAB_00eaa2fa:
        *(undefined4 *)(&stack0xffffffbc + iVar12 * 4) = 1;
        *(undefined4 *)(&stack0xffffffbc + *piVar9 * 4) = 1;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < param_2[0x121]);
  }
  iStack_10 = 0;
  if (0 < *param_2) {
    piStack_c = param_2 + 0x111;
    do {
      iVar6 = 0;
      iVar12 = 0;
      puVar11 = (uint *)&stack0xffffffbc;
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          if (param_2[iVar6 + 1] == iStack_10) {
            iVar12 = iVar12 + 1;
            *puVar11 = (uint)(*(int *)(&stack0xffffffbc + iVar6 * 4) != 0);
            *puVar11 = *(uint *)(*param_1 + iVar6 * 4);
            puVar11 = puVar11 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar3 + 4));
      }
      (**(code **)((&PTR_DAT_01125bb8)[*(int *)(iVar13 + 0x520 + *piStack_c * 4)] + 0x1c))
                (param_1,*(undefined4 *)(*(int *)(iVar4 + 0x34) + *piStack_c * 4),&stack0xffffffbc,
                 &stack0xffffffbc,iVar12);
      iStack_10 = iStack_10 + 1;
      piStack_c = piStack_c + 1;
    } while (iStack_10 < *param_2);
  }
  iVar6 = param_2[0x121] + -1;
  if (-1 < iVar6) {
    piVar9 = param_2 + param_2[0x121] + 0x221;
    do {
      pfVar10 = *(float **)(*param_1 + piVar9[-0x100] * 4);
      if (0 < iVar8 / 2) {
        iVar7 = *(int *)(*param_1 + *piVar9 * 4) - (int)pfVar10;
        iVar12 = iVar8 / 2;
        do {
          fVar1 = *pfVar10;
          fVar2 = *(float *)((int)pfVar10 + iVar7);
          if (fVar1 <= 0.0) {
            if (fVar2 <= 0.0) {
              *(float *)((int)pfVar10 + iVar7) = fVar1;
              *pfVar10 = fVar1 - fVar2;
            }
            else {
              *pfVar10 = fVar1;
              *(float *)((int)pfVar10 + iVar7) = fVar2 + fVar1;
            }
          }
          else if (fVar2 <= 0.0) {
            *(float *)((int)pfVar10 + iVar7) = fVar1;
            *pfVar10 = fVar2 + fVar1;
          }
          else {
            *pfVar10 = fVar1;
            *(float *)((int)pfVar10 + iVar7) = fVar1 - fVar2;
          }
          pfVar10 = pfVar10 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      piVar9 = piVar9 + -1;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  iVar6 = 0;
  iVar8 = *(int *)(iVar3 + 4);
  if (0 < iVar8) {
    do {
      (**(code **)((&PTR_DAT_01125bb0)
                   [*(int *)(iVar13 + 800 + param_2[param_2[iVar6 + 1] + 0x101] * 4)] + 0x18))
                (param_1,*(undefined4 *)
                          (*(int *)(iVar4 + 0x30) + param_2[param_2[iVar6 + 1] + 0x101] * 4),
                 *(undefined4 *)(&stack0xffffffbc + iVar6 * 4),*(undefined4 *)(*param_1 + iVar6 * 4)
                );
      iVar8 = *(int *)(iVar3 + 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar8);
  }
  iVar13 = 0;
  if (0 < iVar8) {
    do {
      uVar5 = *(undefined4 *)(*param_1 + iVar13 * 4);
      func_0x00ea1b20(**(undefined4 **)(iVar4 + 0xc + param_1[7] * 4),uVar5,uVar5);
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(iVar3 + 4));
  }
  FUN_008ab370();
  return;
}



void Unwind_00eab8c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab8f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab920(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab928(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab960(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab968(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab9a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab9a8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab9e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eab9e8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eaba20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eaba60(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eaba68(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x78);
    if (0xf < *(uint *)(unaff_EBP + -100)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -100));
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    *(undefined4 *)(unaff_EBP + -100) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eaba81(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eaba89(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x60);
    if (0xf < *(uint *)(unaff_EBP + -0x4c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x4c));
    }
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eabaa2(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x7c);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabad0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x2c);
  if (0xf < *(uint *)(unaff_EBP + -0x18)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x18));
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eabad8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb18(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb50(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb58(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb60(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabb98(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabba0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabbd0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabbd8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabc10(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eabc50(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = **(int **)(unaff_EBP + -0x10);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00eabc58(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabc63(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabc6e(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabc79(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabc84(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabc8f(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabcc0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = **(int **)(unaff_EBP + -0x10);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00eabcc8(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabcd3(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabcde(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabce9(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabcf4(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x24);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabcff(void)

{
  void *_Memory;
  undefined4 *puVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x2c);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Memory = (void *)*puVar1;
  if (_Memory != (void *)0x0) {
    free(_Memory);
  }
  *puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabd30(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00eabd60(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00eabd90(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eabd98(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00eabdd0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eabdd8(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00eabe10(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::ctype_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eabe18(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eabe20(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = std::_Facet_base::vftable;
  return;
}



void Unwind_00eabe50(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabe80(void)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar1 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    puVar3 = (undefined4 *)(*pcVar2)();
    if (puVar3 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00eabec0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabec8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabed0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabed8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabf10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabf18(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabf20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabf28(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabf60(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eabb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eabf90(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x30);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eabfa9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x30);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eabff0(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBP;
  
  piVar3 = *(int **)(unaff_EBP + -0x10);
  piVar1 = (int *)piVar3[9];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != piVar3);
    (*pcVar2)();
    piVar3[9] = 0;
  }
  return;
}



void Unwind_00eac020(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x3c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x3c) = *(uint *)(unaff_EBP + -0x3c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x40);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac070(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac089(void)

{
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  LocalFree(*(HLOCAL *)(unaff_EBP + -0x3c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac091(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac0d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac0e9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac150(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x48) = *(uint *)(unaff_EBP + -0x48) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x4c);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac1a0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x4c);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac1b9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac1f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac209(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac222(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac260(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x44);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac279(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x38) = *(uint *)(unaff_EBP + -0x38) & 0xfffffffd;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x44);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac2c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x30);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac2d9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac2e1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac310(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac340(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac370(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *(int *)(unaff_EBP + -0x14) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac378(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(unaff_EBP + -0x24);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *(int *)(unaff_EBP + -0x24) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac3b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x80);
  if (0xf < *(uint *)(unaff_EBP + -0x6c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x6c));
  }
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac3b8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac3c0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x50);
    if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac3d9(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    puVar1 = (undefined4 *)(unaff_EBP + -0x68);
    if (0xf < *(uint *)(unaff_EBP + -0x54)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x54));
    }
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac3f2(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x20);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac420(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x2c) = std::exception::vftable;
  __std_exception_destroy(unaff_EBP + -0x28,uVar1,(undefined4 *)(unaff_EBP + -0x2c));
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac460(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac4a0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DeleteCriticalSection(lpCriticalSection);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac4d0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac4d8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x34);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac520(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac528(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00eac560(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac568(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00eac5a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = stdext::exception::vftable;
  uStack_8 = 0;
  puVar1 = puVar2 + 3;
  if (0xf < (uint)puVar2[8]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[8],uVar3);
  }
  puVar2[7] = 0;
  puVar2[8] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *puVar2 = std::exception::vftable;
  __std_exception_destroy(puVar2 + 1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac5a8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00eac5e0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac5e8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x44);
  puStack_c = &DAT_00eac66d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x30),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)puVar1 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac5f0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac5f8(void)

{
  int unaff_EBP;
  
  func_0x008ab4ad(unaff_EBP + -0x44,0x1c,2,FUN_00466d70);
  return;
}



void Unwind_00eac630(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (DAT_0145cedc != 0) {
    func_0x0046ac90(DAT_0145cedc,DAT_0145cee4 - DAT_0145cedc >> 2,uVar1);
    DAT_0145cedc = 0;
    DAT_0145cee0 = 0;
    DAT_0145cee4 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(DAT_0145ced4,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac660(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac690(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0046bf70(uVar2);
  func_0x008ab812(*(undefined4 *)(iVar1 + 4),0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac69b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



uint Unwind_00eac6d0(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00eac710(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00eac729(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eac770(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eac7b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)(*(int *)(*(int *)(iVar4 + -0x68) + 4) + -0x20 + iVar4 + -0x48) =
       std::basic_iostream<>::vftable;
  iVar2 = *(int *)(*(int *)(iVar4 + -0x68) + 4);
  *(int *)(iVar2 + -0x24 + iVar4 + -0x48) = iVar2 + -0x20;
  iVar2 = iVar4 + -0x50;
  *(undefined ***)(*(int *)(*(int *)(iVar4 + -0x58) + 4) + -8 + iVar2) =
       std::basic_ostream<>::vftable;
  iVar3 = *(int *)(*(int *)(iVar4 + -0x58) + 4);
  *(int *)(iVar3 + -0xc + iVar2) = iVar3 + -8;
  *(undefined ***)(*(int *)(*(int *)(iVar4 + -0x68) + 4) + -0x18 + iVar2) =
       std::basic_istream<>::vftable;
  iVar3 = *(int *)(*(int *)(iVar4 + -0x68) + 4);
  *(int *)(iVar3 + -0x1c + iVar2) = iVar3 + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eac7bb(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar1 + -0x50) = std::basic_stringbuf<>::vftable;
  uStack_8 = 0;
  if ((*(byte *)(iVar1 + -0x14) & 1) != 0) {
    if (**(int **)(iVar1 + -0x30) == 0) {
      iVar3 = **(int **)(iVar1 + -0x24) + **(int **)(iVar1 + -0x34);
    }
    else {
      iVar3 = **(int **)(iVar1 + -0x20) + **(int **)(iVar1 + -0x30);
    }
    func_0x0046aa00(**(int **)(iVar1 + -0x44),iVar3 - **(int **)(iVar1 + -0x44),uVar2);
  }
  **(undefined4 **)(iVar1 + -0x44) = 0;
  **(undefined4 **)(iVar1 + -0x34) = 0;
  **(undefined4 **)(iVar1 + -0x24) = 0;
  **(undefined4 **)(iVar1 + -0x40) = 0;
  **(undefined4 **)(iVar1 + -0x30) = 0;
  **(undefined4 **)(iVar1 + -0x20) = 0;
  *(uint *)(iVar1 + -0x14) = *(uint *)(iVar1 + -0x14) & 0xfffffffe;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac7c6(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00eac7f0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eca02d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = Thing::vftable;
  _DAT_0145f164 = _DAT_0145f164 + 1;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0(uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac7f8(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x18);
  puVar6 = (undefined4 *)(iVar3 + 0x50);
  puStack_c = &DAT_00eac8a3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar1 = *(int **)(iVar3 + 0x94);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar4 = piVar1[1] + -1;
    piVar1[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar5);
      (*pcVar2)();
      LOCK();
      iVar4 = piVar1[2] + -1;
      piVar1[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_8 = uStack_8 & 0xffffff00;
  iVar4 = *(int *)(iVar3 + 0x68);
  if (iVar4 != 0) {
    func_0x0046ab40(iVar4,(*(int *)(iVar3 + 0x70) - iVar4 >> 2) * -0x33333333);
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    *(undefined4 *)(iVar3 + 0x70) = 0;
  }
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar3 + 100)) {
    func_0x0046b1f0(puVar6,*puVar6,*(uint *)(iVar3 + 100));
  }
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 100) = 0xf;
  *(undefined1 *)puVar6 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac803(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x38);
  if (0xf < *(uint *)(unaff_EBP + -0x24)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x24));
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac80b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Unwind_00eac840(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eca02d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = Thing::vftable;
  _DAT_0145f164 = _DAT_0145f164 + 1;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0(uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac848(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar3 = *(int *)(unaff_EBP + -0x10);
  puVar6 = (undefined4 *)(iVar3 + 0x50);
  puStack_c = &DAT_00eac8a3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 1;
  piVar1 = *(int **)(iVar3 + 0x94);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar4 = piVar1[1] + -1;
    piVar1[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar5);
      (*pcVar2)();
      LOCK();
      iVar4 = piVar1[2] + -1;
      piVar1[2] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_8 = uStack_8 & 0xffffff00;
  iVar4 = *(int *)(iVar3 + 0x68);
  if (iVar4 != 0) {
    func_0x0046ab40(iVar4,(*(int *)(iVar3 + 0x70) - iVar4 >> 2) * -0x33333333);
    *(undefined4 *)(iVar3 + 0x68) = 0;
    *(undefined4 *)(iVar3 + 0x6c) = 0;
    *(undefined4 *)(iVar3 + 0x70) = 0;
  }
  uStack_8 = 0xffffffff;
  if (0xf < *(uint *)(iVar3 + 100)) {
    func_0x0046b1f0(puVar6,*puVar6,*(uint *)(iVar3 + 100));
  }
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 100) = 0xf;
  *(undefined1 *)puVar6 = 0;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * Unwind_00eac853(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f202a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = LuaObject::vftable;
  uStack_8 = 0;
  iVar2 = puVar5[3];
  if (iVar2 != -1) {
    if ((-1 < iVar2) && (DAT_0145e9f0 != 0)) {
      func_0x00d69b70(DAT_0145e9f0,0xffffd8f0,iVar2,uVar6);
    }
    puVar5[3] = 0xffffffff;
  }
  puVar7 = puVar5 + 1;
  uStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00eac880(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac888(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  iVar1 = *(int *)(iVar2 + 0x18);
  if (iVar1 != 0) {
    func_0x0046ab40(iVar1,(*(int *)(iVar2 + 0x20) - iVar1 >> 2) * -0x33333333);
    *(int *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  return;
}



void Unwind_00eac893(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x44);
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



uint Unwind_00eac8c0(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x1c) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x14);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eac8d9(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
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



int * Unwind_00eac8e1(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(unaff_EBP + -0x20);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00eac8e9(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x40);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -100));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  return;
}



void Unwind_00eac8f1(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x6c) + 4);
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



int * Unwind_00eac8f9(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x68);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00eac904(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(unaff_EBP + -0x40);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -100),uVar3);
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eac90c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eac914(void)

{
  int *piVar1;
  code *pcVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x40);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(unaff_EBP + -100));
    (*pcVar2)();
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  return;
}



void Unwind_00eac91c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x20);
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



void Unwind_00eac950(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
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



void Unwind_00eac958(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00eac960(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00eac968(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00eac970(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 4);
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



void Unwind_00eac9b0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
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



void Unwind_00eac9e0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



uint Unwind_00eaca10(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x1c) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x34);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00eaca29(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x1c) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffd;
  piVar5 = *(int **)(unaff_EBP + -0x3c);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eaca42(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eaca4a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eaca52(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x50);
  if (0xf < *(uint *)(unaff_EBP + -0x3c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x3c));
  }
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eaca80(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00eacab0(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0046bf70(uVar2);
  func_0x008ab812(*(undefined4 *)(iVar1 + 4),0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eacabb(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2);
    *(int *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  return;
}



void Unwind_00eacac6(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(iVar2 + 0xc);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(iVar2 + 0x14) - iVar1 >> 2,uVar3);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(*(undefined4 *)(iVar2 + 4),0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00eacaf0(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eacb30(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x68);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar2 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar2 = std::ios_base::vftable;
    func_0x00e706cb(puVar2,uVar1,puVar2);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eacb4c(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *(undefined ***)((int)piVar2 + *(int *)(*piVar2 + 4)) = std::basic_iostream<>::vftable;
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4) + -0x20;
  *(undefined ***)((int)piVar2 + *(int *)(piVar2[4] + 4) + 0x10) = std::basic_ostream<>::vftable;
  *(int *)((int)piVar2 + *(int *)(piVar2[4] + 4) + 0xc) = *(int *)(piVar2[4] + 4) + -8;
  *(undefined ***)((int)piVar2 + *(int *)(*piVar2 + 4)) = std::basic_istream<>::vftable;
  *(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + -4) = *(int *)(*piVar2 + 4) + -0x18;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00eacb57(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  iVar1 = (*(undefined4 **)(unaff_EBP + -0x18))[0xd];
  **(undefined4 **)(unaff_EBP + -0x18) = std::basic_streambuf<>::vftable;
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
  return;
}



void Unwind_00eacb5f(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eacc4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar1 + 0x18) = std::basic_stringbuf<>::vftable;
  uStack_8 = 0;
  if ((*(byte *)(iVar1 + 0x54) & 1) != 0) {
    if (**(int **)(iVar1 + 0x38) == 0) {
      iVar3 = **(int **)(iVar1 + 0x44) + **(int **)(iVar1 + 0x34);
    }
    else {
      iVar3 = **(int **)(iVar1 + 0x48) + **(int **)(iVar1 + 0x38);
    }
    func_0x0046aa00(**(int **)(iVar1 + 0x24),iVar3 - **(int **)(iVar1 + 0x24),uVar2);
  }
  **(undefined4 **)(iVar1 + 0x24) = 0;
  **(undefined4 **)(iVar1 + 0x34) = 0;
  **(undefined4 **)(iVar1 + 0x44) = 0;
  **(undefined4 **)(iVar1 + 0x28) = 0;
  **(undefined4 **)(iVar1 + 0x38) = 0;
  **(undefined4 **)(iVar1 + 0x48) = 0;
  *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0xfffffffe;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00eacb90(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eacba9(void)

{
  func_0x008ab391(&DAT_0145ca68);
  return;
}



void Unwind_00eacbb5(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x1c),1);
  return;
}



void Unwind_00eacbc4(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x14),1);
  }
  return;
}



void Unwind_00eacbcc(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x20),0x10);
  return;
}



void Unwind_00eacc00(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x20) + 4) + -0x18 + iVar2 + -8) =
       std::basic_istream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x20) + 4);
  *(int *)(iVar1 + -0x1c + iVar2 + -8) = iVar1 + -0x18;
  return;
}



void Unwind_00eacc0b(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + -0x10) + 4) + -8 + iVar2 + -8) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + -0x10) + 4);
  *(int *)(iVar1 + -0xc + iVar2 + -8) = iVar1 + -8;
  return;
}



void Unwind_00eacc40(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  iVar1 = (*(undefined4 **)(unaff_EBP + -0x10))[0xd];
  **(undefined4 **)(unaff_EBP + -0x10) = std::basic_streambuf<>::vftable;
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
  return;
}



void Unwind_00eacc70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eaccc0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 5) == '\0') &&
     (puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 1), puVar1 != (undefined4 *)0x0)) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00eaccf0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eacd20(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eacd50(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x10) + 6) == '\0') &&
     (puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 2), puVar1 != (undefined4 *)0x0)) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void Unwind_00eacd80(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(*(int *)(*(int *)*piVar2 + 4) + 0x38 + *piVar2);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eacdb0(void)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(*(int *)(*(int *)*piVar2 + 4) + 0x38 + *piVar2);
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    _guard_check_icall(uVar3);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eacde0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x20);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar2 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar2 = std::ios_base::vftable;
    func_0x00e706cb(puVar2,uVar1,puVar2);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eacdfc(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined ***)((int)piVar1 + *(int *)(*piVar1 + 4)) = std::basic_istream<>::vftable;
  *(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + -4) = *(int *)(*piVar1 + 4) + -0x18;
  return;
}



void Unwind_00eace07(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + -8 + iVar2 + 0x18) =
       std::basic_ostream<>::vftable;
  iVar1 = *(int *)(*(int *)(iVar2 + 0x10) + 4);
  *(int *)(iVar1 + -0xc + iVar2 + 0x18) = iVar1 + -8;
  return;
}



void Unwind_00eace40(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + 8);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00eace80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eaced0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x18);
    puStack_c = &DAT_00eacc7d;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    *puVar2 = std::basic_ios<>::vftable;
    uStack_8 = 0xffffffff;
    *puVar2 = std::ios_base::vftable;
    func_0x00e706cb(puVar2,uVar1,puVar2);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00eacf10(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x1c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eacf18(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x1c));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eacf70(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00eacfb0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x18) + 8);
    _guard_check_icall();
    puVar2 = (undefined4 *)(*pcVar1)();
    if (puVar2 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar2;
      _guard_check_icall(1);
      (*pcVar1)();
    }
  }
  return;
}



void Unwind_00eacff0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00eacff8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00ead000(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x24),0x18);
  return;
}



void Unwind_00ead00f(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  if ((*(uint *)(unaff_EBP + -0x20) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(unaff_EBP + -0x20) & 0xfffffffe;
    puStack_c = &DAT_00eabd0f;
    iStack_10 = *unaff_FS_OFFSET;
    uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
    *unaff_FS_OFFSET = (int)&iStack_10;
    iStack_8 = 6;
    func_0x00e7055f(unaff_EBP + -0x6c,uVar1);
    iStack_8._0_1_ = 5;
    if (*(void **)(unaff_EBP + -0x40) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x40));
    }
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    iStack_8._0_1_ = 4;
    if (*(void **)(unaff_EBP + -0x48) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x48));
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    iStack_8._0_1_ = 3;
    if (*(void **)(unaff_EBP + -0x50) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x50));
    }
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    iStack_8._0_1_ = 2;
    if (*(void **)(unaff_EBP + -0x58) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x58));
    }
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    iStack_8._0_1_ = 1;
    if (*(void **)(unaff_EBP + -0x60) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x60));
    }
    *(undefined4 *)(unaff_EBP + -0x60) = 0;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (*(void **)(unaff_EBP + -0x68) != (void *)0x0) {
      free(*(void **)(unaff_EBP + -0x68));
    }
    *(undefined4 *)(unaff_EBP + -0x68) = 0;
    iStack_8 = 0xffffffff;
    func_0x00e6ffe4();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  return;
}



void Unwind_00ead028(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x24) = std::_Facet_base::vftable;
  return;
}



void Unwind_00ead030(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ead038(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *puVar2 = std::ctype_base::vftable;
  *puVar2 = std::locale::facet::vftable;
  *puVar2 = std::_Facet_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void Unwind_00ead040(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(undefined4 **)(unaff_EBP + -0x18) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(unaff_EBP + -0x18);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00ead080(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x28));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead088(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x28));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead0c0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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



uint Unwind_00ead0c8(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x14) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00ead0e1(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x14) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ead120(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac5b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(unaff_EBP + -0x4c) = stdext::cast_exception::vftable;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14),uVar2);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  FUN_004668a0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead160(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x24,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead168(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x2c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead170(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead525;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(unaff_EBP + -0x24);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 8);
    uStack_8 = 0;
    if (0xf < *(uint *)(iVar1 + 0x1c)) {
      func_0x0046b1f0(puVar3,*puVar3,*(uint *)(iVar1 + 0x1c),uVar2);
    }
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0xf;
    *(undefined1 *)puVar3 = 0;
  }
  uStack_8 = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x24);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead178(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    func_0x008ab812(*(int *)(unaff_EBP + -0x24),0x24,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead1b0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead1e0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = DAT_014638dc;
  if (DAT_014638dc != (int *)0x0) {
    LOCK();
    iVar3 = DAT_014638dc[1] + -1;
    DAT_014638dc[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar4;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  return;
}



void Unwind_00ead210(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead240(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = boost::exception_detail::clone_base::vftable;
  return;
}



void Unwind_00ead248(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 8,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead253(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x1c) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x20) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead25e(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x10) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead269(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eab8fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2,puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead271(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead2a0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::exception_detail::clone_base::vftable;
  return;
}



void Unwind_00ead2a8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 8,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead2b3(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x1c) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x20) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead2e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead2e8(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ead2f3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = stdext::exception::vftable;
  uStack_8 = 0;
  puVar1 = puVar2 + 3;
  if (0xf < (uint)puVar2[8]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[8],uVar3);
  }
  puVar2[7] = 0;
  puVar2[8] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *puVar2 = std::exception::vftable;
  __std_exception_destroy(puVar2 + 1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead2fb(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ead330(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar1 = std::exception::vftable;
  __std_exception_destroy(puVar1 + 1,uVar2);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead338(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0xc);
  if (0xf < *(uint *)(iVar1 + 0x20)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x20));
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ead343(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar2 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac538;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = stdext::exception::vftable;
  uStack_8 = 0;
  puVar1 = puVar2 + 3;
  if (0xf < (uint)puVar2[8]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar2[8],uVar3);
  }
  puVar2[7] = 0;
  puVar2[8] = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  *puVar2 = std::exception::vftable;
  __std_exception_destroy(puVar2 + 1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead34b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x24);
  if (0xf < *(uint *)(iVar1 + 0x38)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ead380(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x14),0x34);
  return;
}



void Unwind_00ead38f(void)

{
  code *pcVar1;
  int unaff_EBP;
  
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x10) + 8);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



void Unwind_00ead3c0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x10) = boost::exception_detail::clone_base::vftable;
  return;
}



void Unwind_00ead3c8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar3 = (undefined4 *)(iVar1 + 4);
  puStack_c = &DAT_00eab9b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *puVar3 = std::exception::vftable;
  __std_exception_destroy(iVar1 + 8,uVar2,puVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead3d3(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  piVar5 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac130;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)*piVar5;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      *piVar5 = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead3de(void)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac350;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined ***)(iVar2 + 0x1c) = boost::exception::vftable;
  uStack_8 = 0xffffffff;
  if (*(int **)(iVar2 + 0x20) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(iVar2 + 0x20) + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead410(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != 0) {
    if (iVar1 < 8) {
      func_0x00e75861(&DAT_0145c230 + iVar1 * 0x18);
    }
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c9e. Too many branches
                    // WARNING: Treating indirect jump as call
  _unlock_locales();
  return;
}



void Unwind_00ead450(void)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eacd8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  cVar3 = func_0x00e7067a(uVar4);
  if (cVar3 == '\0') {
    func_0x0046afe0();
  }
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead458(void)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x24) + 4) + 0x38 +
                    (int)*(int **)(unaff_EBP + -0x24));
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead490(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac7d3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined ***)(*(int *)(*(int *)(unaff_EBP + -0xc0) + 4) + -0x68 + (int)puVar1) =
       std::basic_stringstream<>::vftable;
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0xc0) + 4);
  *(int *)(iVar2 + -0x6c + (int)puVar1) = iVar2 + -0x68;
  uStack_8 = 0;
  func_0x00469040(uVar3);
  uStack_8 = 0xffffffff;
  func_0x004689e0();
  *puVar1 = std::basic_ios<>::vftable;
  uStack_8 = 0xffffffff;
  *puVar1 = std::ios_base::vftable;
  func_0x00e706cb(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead49b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xf4);
  if (0xf < *(uint *)(unaff_EBP + -0xe0)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0xe0));
  }
  *(undefined4 *)(unaff_EBP + -0xe4) = 0;
  *(undefined4 *)(unaff_EBP + -0xe0) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead4a6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
  if (0xf < *(uint *)(unaff_EBP + -200)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
  }
  *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  *(undefined4 *)(unaff_EBP + -200) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead4b1(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xc4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xc4) = *(uint *)(unaff_EBP + -0xc4) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0xdc);
    if (0xf < *(uint *)(unaff_EBP + -200)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -200));
    }
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
    *(undefined4 *)(unaff_EBP + -200) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ead510(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 != 0) {
    func_0x008ab812(iVar1,0x24,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead518(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x10);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



int * Unwind_00ead550(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ead55b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



void Unwind_00ead590(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



int * Unwind_00ead598(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ead5d0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 4);
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



int * Unwind_00ead5d8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x10);
  puStack_c = &DAT_00eac9bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 1;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ead610(void)

{
  int iVar1;
  int unaff_EBP;
  int *piStack_8;
  
  piStack_8 = (int *)(unaff_EBP + -0x30);
  iVar1 = *piStack_8;
  if ((iVar1 != 0) && (*(uint *)(iVar1 + 8) != 0)) {
    if (*(uint *)(iVar1 + 8) < *(uint *)(iVar1 + 0x1c) >> 3) {
      func_0x0046d500(**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
      return;
    }
    func_0x0046bf70();
    *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 8) = 0;
    piStack_8 = *(int **)(iVar1 + 4);
    func_0x0046c050(&piStack_8);
  }
  return;
}



void Unwind_00ead640(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 4) = *(undefined4 *)(unaff_EBP + -0x44);
  return;
}



void Unwind_00ead648(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead650(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x3c);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead680(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
    if (0xf < (uint)puVar1[5]) {
      func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
    }
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
}



void Unwind_00ead6c0(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x28) + 4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}



int * Unwind_00ead6c8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x28);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 4);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void Unwind_00ead6d0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x28) + 0x1c);
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



uint Unwind_00ead6db(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x14);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ead6f4(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x2c),0x18);
  return;
}



void Unwind_00ead703(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x1c);
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



void Unwind_00ead730(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}



void Unwind_00ead760(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead768(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead770(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead778(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead780(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead788(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x3c);
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00ead7c0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00ead7f0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    func_0x0046e710(*(int *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  }
  return;
}



void Unwind_00ead830(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145cefc != 0) {
    func_0x0046ac90(iRam0145cefc,iRam0145cf04 - iRam0145cefc >> 2,uVar1);
    iRam0145cefc = 0;
    uRam0145cf00 = 0;
    iRam0145cf04 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145cef4,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00ead860(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x18) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
  piVar5 = *(int **)(unaff_EBP + -0x24);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



uint Unwind_00ead879(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x18) & 2;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
  piVar5 = *(int **)(unaff_EBP + -0x1c);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00ead892(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x24);
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



void Unwind_00ead8c0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145cf1c != 0) {
    func_0x0046ac90(iRam0145cf1c,iRam0145cf24 - iRam0145cf1c >> 2,uVar1);
    iRam0145cf1c = 0;
    uRam0145cf20 = 0;
    iRam0145cf24 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145cf14,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00ead8f0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00ead8f8(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00ead900(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00ead908(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00ead940(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00ead948(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x10);
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



void Unwind_00ead980(void)

{
  int unaff_EBP;
  
  func_0x008ab812(*(undefined4 *)(unaff_EBP + -0x10),0x38);
  return;
}



void Unwind_00ead98f(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 8);
  if (0xf < *(uint *)(iVar1 + 0x1c)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x1c));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ead99a(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00ead9f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac6ab;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (iRam0145cf3c != 0) {
    func_0x0046ac90(iRam0145cf3c,iRam0145cf44 - iRam0145cf3c >> 2,uVar1);
    iRam0145cf3c = 0;
    uRam0145cf40 = 0;
    iRam0145cf44 = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x0046bf70();
  func_0x008ab812(uRam0145cf34,0x24);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eada20(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 4);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[2] + -1;
    piVar1[2] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      _guard_check_icall();
      (*pcVar2)();
    }
  }
  return;
}



int * Unwind_00eada28(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar4 = *(int *)(unaff_EBP + -0x14);
  puStack_c = &DAT_00ead73d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(iVar4 + 8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    piVar1 = piVar2 + 2;
    iVar4 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(uVar5);
      piVar6 = (int *)(*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



undefined4 * Unwind_00eada33(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x14);
  puStack_c = &DAT_00f202a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = LuaObject::vftable;
  uStack_8 = 0;
  iVar2 = puVar5[3];
  if (iVar2 != -1) {
    if ((-1 < iVar2) && (DAT_0145e9f0 != 0)) {
      func_0x00d69b70(DAT_0145e9f0,0xffffd8f0,iVar2,uVar6);
    }
    puVar5[3] = 0xffffffff;
  }
  puVar7 = puVar5 + 1;
  uStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00eada3b(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1c);
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



void Unwind_00eada46(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00eada51(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x44);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00470060(uVar2);
  uVar1 = *puVar3;
  *puVar3 = 0;
  func_0x008ab812(uVar1,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void Unwind_00eada5c(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x18);
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



undefined4 * Unwind_00eada90(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar5 = *(undefined4 **)(unaff_EBP + -0x10);
  puStack_c = &DAT_00f202a8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar5 = LuaObject::vftable;
  uStack_8 = 0;
  iVar2 = puVar5[3];
  if (iVar2 != -1) {
    if ((-1 < iVar2) && (DAT_0145e9f0 != 0)) {
      func_0x00d69b70(DAT_0145e9f0,0xffffd8f0,iVar2,uVar6);
    }
    puVar5[3] = 0xffffffff;
  }
  puVar7 = puVar5 + 1;
  uStack_8 = 0xffffffff;
  piVar3 = (int *)puVar5[2];
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      puVar7 = (undefined4 *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar7;
}



void Unwind_00eada98(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x1c);
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



void Unwind_00eadaa3(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x10);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (0xf < *(uint *)(iVar1 + 0x34)) {
    func_0x0046b1f0(puVar2,*puVar2,*(uint *)(iVar1 + 0x34));
  }
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xf;
  *(undefined1 *)puVar2 = 0;
  return;
}



void Unwind_00eadaae(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x44);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab880;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00470060(uVar2);
  uVar1 = *puVar3;
  *puVar3 = 0;
  func_0x008ab812(uVar1,8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



uint Unwind_00eadae0(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x10) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + 8) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eadb20(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x28);
  if (0xf < *(uint *)(unaff_EBP + -0x14)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x14));
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadb50(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadb58(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadb60(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



uint Unwind_00eadb90(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  int unaff_EBP;
  
  uVar7 = *(uint *)(unaff_EBP + -0x18) & 1;
  if (uVar7 == 0) {
    return 0;
  }
  *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
  piVar5 = *(int **)(*(int *)(unaff_EBP + -0x24) + 4);
  if (piVar5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(piVar5 + 1);
    uVar3 = *puVar1;
    uVar7 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      pcVar6 = *(code **)*piVar5;
      _guard_check_icall();
      uVar7 = (*pcVar6)();
      LOCK();
      piVar2 = piVar5 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar6 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        uVar7 = (*pcVar6)();
      }
    }
  }
  return uVar7;
}



void Unwind_00eadbd0(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00eadbd8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadbe0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadbe8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x38);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadc20(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadc28(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00eadc30(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x30);
  if (0xf < *(uint *)(unaff_EBP + -0x1c)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x1c));
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadc38(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadc40(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x48);
  if (0xf < *(uint *)(unaff_EBP + -0x34)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x34));
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadc48(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x50);
  if (0xf < (uint)puVar1[5]) {
    func_0x0046b1f0(puVar1,*puVar1,puVar1[5]);
  }
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadc80(void)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_EBP;
  
  piVar2 = *(int **)(unaff_EBP + -0x14);
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



void Unwind_00eadcb0(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x6c);
  if (0xf < *(uint *)(unaff_EBP + -0x58)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x58));
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadcb8(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = (undefined4 *)(unaff_EBP + -0x9c);
  if (0xf < *(uint *)(unaff_EBP + -0x88)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x88));
  }
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  *(undefined4 *)(unaff_EBP + -0x88) = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}



void Unwind_00eadcc3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
    puVar1 = (undefined4 *)(unaff_EBP + -0x54);
    if (0xf < *(uint *)(unaff_EBP + -0x40)) {
      func_0x0046b1f0(puVar1,*puVar1,*(uint *)(unaff_EBP + -0x40));
    }
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0xf;
    *(undefined1 *)puVar1 = 0;
    return;
  }
  return;
