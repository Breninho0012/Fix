// WARNING: Removing unreachable block (ram,0x00e141ac)
// WARNING: Removing unreachable block (ram,0x00e14435)
// WARNING: Removing unreachable block (ram,0x00e14439)
// WARNING: Removing unreachable block (ram,0x00e14441)
// WARNING: Removing unreachable block (ram,0x00e14449)
// WARNING: Removing unreachable block (ram,0x00e14455)
// WARNING: Removing unreachable block (ram,0x00e145c1)
// WARNING: Removing unreachable block (ram,0x00e145c5)
// WARNING: Removing unreachable block (ram,0x00e145cd)
// WARNING: Removing unreachable block (ram,0x00e145d5)
// WARNING: Removing unreachable block (ram,0x00e148b2)
// WARNING: Removing unreachable block (ram,0x00e14d56)
// WARNING: Removing unreachable block (ram,0x00e14d5c)
// WARNING: Removing unreachable block (ram,0x00e14d64)
// WARNING: Removing unreachable block (ram,0x00e14d6c)
// WARNING: Removing unreachable block (ram,0x00e14d74)
// WARNING: Removing unreachable block (ram,0x00e14e2b)
// WARNING: Removing unreachable block (ram,0x00e14d95)
// WARNING: Removing unreachable block (ram,0x00e14da3)
// WARNING: Removing unreachable block (ram,0x00e14da7)
// WARNING: Removing unreachable block (ram,0x00e1463b)
// WARNING: Removing unreachable block (ram,0x00e14645)
// WARNING: Removing unreachable block (ram,0x00e14648)
// WARNING: Removing unreachable block (ram,0x00e1464c)
// WARNING: Removing unreachable block (ram,0x00e1464e)
// WARNING: Removing unreachable block (ram,0x00e14207)
// WARNING: Removing unreachable block (ram,0x00e14210)
// WARNING: Removing unreachable block (ram,0x00e14213)
// WARNING: Removing unreachable block (ram,0x00e14217)
// WARNING: Removing unreachable block (ram,0x00e14219)
// WARNING: Removing unreachable block (ram,0x00e1421b)
// WARNING: Removing unreachable block (ram,0x00e14499)
// WARNING: Removing unreachable block (ram,0x00e144a3)
// WARNING: Removing unreachable block (ram,0x00e144a6)
// WARNING: Removing unreachable block (ram,0x00e144aa)
// WARNING: Removing unreachable block (ram,0x00e144ac)
// WARNING: Removing unreachable block (ram,0x00e1490b)
// WARNING: Removing unreachable block (ram,0x00e14915)
// WARNING: Removing unreachable block (ram,0x00e14918)
// WARNING: Removing unreachable block (ram,0x00e1491c)
// WARNING: Removing unreachable block (ram,0x00e1491e)
// WARNING: Removing unreachable block (ram,0x00e14920)
// WARNING: Removing unreachable block (ram,0x00e14e45)
// WARNING: Removing unreachable block (ram,0x00e14e53)
// WARNING: Removing unreachable block (ram,0x00e14e57)

void __thiscall FUN_00e140f0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *_Dst;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  float *pfVar19;
  int iVar20;
  int unaff_EBP;
  uint uVar21;
  int iVar22;
  float *pfVar23;
  int unaff_EDI;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  int iStack_6c;
  float *pfStack_68;
  float *pfStack_60;
  int iStack_5c;
  float *pfStack_58;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_2c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar17 = *(uint *)(param_1 + 0x16cc);
  uVar11 = (*(byte *)(param_1 + 0x41) ^ 1) * 0xb44 + 0x44 + param_1;
  _Dst = (float *)(param_1 + 0x16d0);
  iVar24 = param_1 + 0x44 + (uint)*(byte *)(param_1 + 0x41) * 0xb44;
  puStack_2c = (undefined4 *)((int)param_2 * 4);
  pfVar3 = (float *)((int)puStack_2c + (int)_Dst);
  if (*(byte *)(param_1 + 0x40) < 2) {
    uVar25 = param_4 - param_3 >> 0xc;
    if (4 < uVar25) {
      uVar25 = 4;
    }
    fVar30 = 1.0 / (float)((double)(int)param_2 + (double)(&DAT_011a2c10)[-((int)param_2 >> 0x1f)]);
    pfStack_58 = (float *)0x0;
    pfStack_60 = (float *)&DAT_010e0ea0;
    uStack_4c = 0;
    iStack_5c = iVar24;
    do {
      memset(_Dst,0,(int)pfVar3 - (int)_Dst & 0xfffffffc);
      uStack_40 = 0;
      if (uVar25 != 0) {
        iStack_48 = 0;
        uVar12 = (uint)((int)pfVar3 + (3 - (int)_Dst)) >> 2;
        pfVar13 = pfStack_60;
        if (pfVar3 < _Dst) {
          uVar12 = 0;
        }
        do {
          pfVar15 = (float *)(iStack_48 + param_3);
          fVar29 = *pfVar13;
          pfVar19 = _Dst;
          pfVar23 = _Dst;
          if ((((uVar12 != 0) && (0xf < uVar12)) && (_Dst + (uVar12 - 1) < _Dst)) &&
             ((pfVar15 + (uVar12 - 1) < _Dst || (_Dst + (uVar12 - 1) < pfVar15)))) {
            uVar26 = 0;
            do {
              fVar5 = pfVar15[1];
              fVar6 = pfVar15[2];
              fVar7 = pfVar15[3];
              uVar26 = uVar26 + 0x10;
              fVar8 = pfVar19[1];
              fVar9 = pfVar19[2];
              fVar10 = pfVar19[3];
              *pfVar23 = fVar29 * *pfVar15 + *pfVar19;
              pfVar23[1] = fVar29 * fVar5 + fVar8;
              pfVar23[2] = fVar29 * fVar6 + fVar9;
              pfVar23[3] = fVar29 * fVar7 + fVar10;
              fVar5 = pfVar15[5];
              fVar6 = pfVar15[6];
              fVar7 = pfVar15[7];
              fVar8 = pfVar19[5];
              fVar9 = pfVar19[6];
              fVar10 = pfVar19[7];
              pfVar23[4] = fVar29 * pfVar15[4] + pfVar19[4];
              pfVar23[5] = fVar29 * fVar5 + fVar8;
              pfVar23[6] = fVar29 * fVar6 + fVar9;
              pfVar23[7] = fVar29 * fVar7 + fVar10;
              fVar5 = pfVar15[9];
              fVar6 = pfVar15[10];
              fVar7 = pfVar15[0xb];
              fVar8 = pfVar19[9];
              fVar9 = pfVar19[10];
              fVar10 = pfVar19[0xb];
              pfVar23[8] = fVar29 * pfVar15[8] + pfVar19[8];
              pfVar23[9] = fVar29 * fVar5 + fVar8;
              pfVar23[10] = fVar29 * fVar6 + fVar9;
              pfVar23[0xb] = fVar29 * fVar7 + fVar10;
              pfVar4 = pfVar15 + 0xc;
              fVar5 = pfVar15[0xd];
              fVar6 = pfVar15[0xe];
              fVar7 = pfVar15[0xf];
              pfVar15 = pfVar15 + 0x10;
              pfVar1 = pfVar19 + 0xc;
              fVar8 = pfVar19[0xd];
              fVar9 = pfVar19[0xe];
              fVar10 = pfVar19[0xf];
              pfVar19 = pfVar19 + 0x10;
              pfVar23[0xc] = fVar29 * *pfVar4 + *pfVar1;
              pfVar23[0xd] = fVar29 * fVar5 + fVar8;
              pfVar23[0xe] = fVar29 * fVar6 + fVar9;
              pfVar23[0xf] = fVar29 * fVar7 + fVar10;
              pfVar23 = pfVar23 + 0x10;
            } while (uVar26 != (uVar12 & 0xfffffff0));
          }
          if (pfVar19 != pfVar3) {
            iVar22 = (int)pfVar23 - (int)pfVar15;
            do {
              fVar5 = *pfVar19;
              pfVar19 = pfVar19 + 1;
              *(float *)((int)pfVar15 + iVar22) = fVar29 * *pfVar15 + fVar5;
              pfVar15 = pfVar15 + 1;
            } while (pfVar19 != pfVar3);
          }
          uStack_40 = uStack_40 + 1;
          iStack_48 = iStack_48 + 0x1000;
          pfVar13 = pfVar13 + 1;
        } while (uStack_40 < uVar25);
      }
      fVar29 = 0.0;
      for (pfVar13 = _Dst; pfVar13 != pfVar3; pfVar13 = pfVar13 + 1) {
        fVar29 = fVar29 + 1.0;
        *pfVar13 = fVar29 * fVar30 * *pfVar13;
      }
      func_0x00e1ac00(iStack_5c + 0x1c,_Dst,_Dst + ((int)puStack_2c >> 2),_Dst);
      puVar14 = (undefined4 *)0x0;
      uVar12 = uVar17;
      if (param_2 != (undefined4 *)0x0) {
        do {
          uVar12 = uVar12 & *(uint *)(iVar24 + 0xe0);
          uVar26 = (*(uint *)(iVar24 + 0xe0) - uVar12) + 1;
          if ((uint)((int)param_2 - (int)puVar14) < uVar26) {
            uVar26 = (int)param_2 - (int)puVar14;
          }
          iVar22 = uVar12 << 4;
          do {
            uVar12 = uVar12 + 1;
            pfVar13 = _Dst + (int)puVar14;
            iVar16 = *(int *)(iVar24 + 0xe4) + iVar22;
            iVar22 = iVar22 + 0x10;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
            *(float *)((int)pfStack_58 + iVar16) = *pfVar13;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        } while (puVar14 < param_2);
      }
      iStack_5c = iStack_5c + 0x38;
      uStack_4c = uStack_4c + 0x10;
      pfStack_58 = (float *)((int)pfStack_58 + 4);
      pfStack_60 = pfStack_60 + 4;
    } while (uStack_4c < 0x40);
    pfStack_60 = (float *)0x0;
    uVar26 = (int)pfVar3 - (int)_Dst & 0xfffffffc;
    uStack_4c = 0;
    puStack_2c = (undefined4 *)((int)_Dst + uVar26);
    pfStack_58 = (float *)&DAT_010e0ea0;
    uVar12 = uVar11;
    do {
      memset(_Dst,0,uVar26);
      uStack_40 = 0;
      if (uVar25 != 0) {
        uVar21 = ((int)pfVar3 - (int)_Dst) + 3U >> 2;
        iStack_48 = 0;
        pfVar13 = pfStack_58;
        if (pfVar3 < _Dst) {
          uVar21 = 0;
        }
        do {
          fVar29 = *pfVar13;
          uVar27 = 0;
          pfVar15 = (float *)(iStack_48 + param_3);
          pfVar19 = _Dst;
          pfVar23 = _Dst;
          if (((uVar21 != 0) && (0xf < uVar21)) &&
             ((_Dst + (uVar21 - 1) < _Dst &&
              ((pfVar15 + (uVar21 - 1) < _Dst || (_Dst + (uVar21 - 1) < pfVar15)))))) {
            do {
              fVar5 = pfVar15[1];
              fVar6 = pfVar15[2];
              fVar7 = pfVar15[3];
              uVar27 = uVar27 + 0x10;
              fVar8 = pfVar19[1];
              fVar9 = pfVar19[2];
              fVar10 = pfVar19[3];
              *pfVar23 = *pfVar15 * fVar29 + *pfVar19;
              pfVar23[1] = fVar5 * fVar29 + fVar8;
              pfVar23[2] = fVar6 * fVar29 + fVar9;
              pfVar23[3] = fVar7 * fVar29 + fVar10;
              fVar5 = pfVar15[5];
              fVar6 = pfVar15[6];
              fVar7 = pfVar15[7];
              fVar8 = pfVar19[5];
              fVar9 = pfVar19[6];
              fVar10 = pfVar19[7];
              pfVar23[4] = pfVar15[4] * fVar29 + pfVar19[4];
              pfVar23[5] = fVar5 * fVar29 + fVar8;
              pfVar23[6] = fVar6 * fVar29 + fVar9;
              pfVar23[7] = fVar7 * fVar29 + fVar10;
              fVar5 = pfVar15[9];
              fVar6 = pfVar15[10];
              fVar7 = pfVar15[0xb];
              fVar8 = pfVar19[9];
              fVar9 = pfVar19[10];
              fVar10 = pfVar19[0xb];
              pfVar23[8] = pfVar15[8] * fVar29 + pfVar19[8];
              pfVar23[9] = fVar5 * fVar29 + fVar8;
              pfVar23[10] = fVar6 * fVar29 + fVar9;
              pfVar23[0xb] = fVar7 * fVar29 + fVar10;
              pfVar4 = pfVar15 + 0xc;
              fVar8 = pfVar15[0xd];
              fVar9 = pfVar15[0xe];
              fVar10 = pfVar15[0xf];
              pfVar15 = pfVar15 + 0x10;
              pfVar1 = pfVar19 + 0xc;
              fVar5 = pfVar19[0xd];
              fVar6 = pfVar19[0xe];
              fVar7 = pfVar19[0xf];
              pfVar19 = pfVar19 + 0x10;
              pfVar23[0xc] = *pfVar4 * fVar29 + *pfVar1;
              pfVar23[0xd] = fVar8 * fVar29 + fVar5;
              pfVar23[0xe] = fVar9 * fVar29 + fVar6;
              pfVar23[0xf] = fVar10 * fVar29 + fVar7;
              pfVar23 = pfVar23 + 0x10;
            } while (uVar27 != (uVar21 & 0xfffffff0));
          }
          if (pfVar19 != pfVar3) {
            iVar22 = (int)pfVar23 - (int)pfVar15;
            do {
              fVar5 = *pfVar19;
              pfVar19 = pfVar19 + 1;
              *(float *)((int)pfVar15 + iVar22) = fVar29 * *pfVar15 + fVar5;
              pfVar15 = pfVar15 + 1;
            } while (pfVar19 != pfVar3);
          }
          uStack_40 = uStack_40 + 1;
          iStack_48 = iStack_48 + 0x1000;
          pfVar13 = pfVar13 + 1;
        } while (uStack_40 < uVar25);
      }
      fVar29 = 0.0;
      for (pfVar13 = _Dst; pfVar13 != pfVar3; pfVar13 = pfVar13 + 1) {
        fVar29 = fVar29 + 1.0;
        *pfVar13 = (1.0 - fVar29 * fVar30) * *pfVar13;
      }
      func_0x00e1ac00(uVar12 + 0x1c,_Dst,puStack_2c,_Dst);
      puVar14 = (undefined4 *)0x0;
      uVar21 = uVar17;
      if (param_2 != (undefined4 *)0x0) {
        do {
          uVar21 = uVar21 & *(uint *)(uVar11 + 0xe0);
          uVar27 = (*(uint *)(uVar11 + 0xe0) - uVar21) + 1;
          if ((uint)((int)param_2 - (int)puVar14) < uVar27) {
            uVar27 = (int)param_2 - (int)puVar14;
          }
          iVar22 = uVar21 << 4;
          do {
            uVar21 = uVar21 + 1;
            pfVar13 = _Dst + (int)puVar14;
            iVar16 = *(int *)(uVar11 + 0xe4) + iVar22;
            iVar22 = iVar22 + 0x10;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
            *(float *)((int)pfStack_60 + iVar16) = *pfVar13;
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
        } while (puVar14 < param_2);
      }
      uStack_4c = uStack_4c + 0x10;
      pfStack_58 = pfStack_58 + 4;
      pfStack_60 = (float *)((int)pfStack_60 + 4);
      uVar12 = uVar12 + 0x38;
    } while (uStack_4c < 0x40);
    *(undefined1 *)(param_1 + 0x40) = 2;
  }
  else {
    uVar25 = param_4 - param_3 >> 0xc;
    uStack_3c = 0;
    if (4 < uVar25) {
      uVar25 = 4;
    }
    uStack_40 = 0;
    pfStack_60 = (float *)0x0;
    uStack_4c = 4;
    pfStack_68 = (float *)&DAT_010e0ea0;
    iStack_6c = iVar24;
    do {
      memset(_Dst,0,(size_t)puStack_2c);
      if (uVar25 != 0) {
        uVar12 = (uint)param_2 & 0x3fffffff;
        iStack_5c = 0;
        pfVar13 = pfStack_68;
        uStack_50 = uVar25;
        if (pfVar3 < _Dst) {
          uVar12 = 0;
        }
        do {
          fVar30 = *pfVar13;
          uVar26 = 0;
          pfVar15 = (float *)(iStack_5c + param_3);
          pfVar19 = _Dst;
          pfVar23 = _Dst;
          if ((uVar12 != 0) && (0xf < uVar12)) {
            puVar14 = puStack_2c;
            if (pfVar3 < _Dst) {
              puVar14 = (undefined4 *)0x0;
            }
            pfVar4 = (float *)((int)(puVar14 + -1) + (int)_Dst);
            if ((pfVar4 < _Dst) &&
               (((float *)((int)(puVar14 + -1) + (int)pfVar15) < _Dst || (pfVar4 < pfVar15)))) {
              do {
                fVar29 = pfVar15[1];
                fVar5 = pfVar15[2];
                fVar6 = pfVar15[3];
                uVar26 = uVar26 + 0x10;
                fVar7 = pfVar19[1];
                fVar8 = pfVar19[2];
                fVar9 = pfVar19[3];
                *pfVar23 = fVar30 * *pfVar15 + *pfVar19;
                pfVar23[1] = fVar30 * fVar29 + fVar7;
                pfVar23[2] = fVar30 * fVar5 + fVar8;
                pfVar23[3] = fVar30 * fVar6 + fVar9;
                fVar29 = pfVar15[5];
                fVar5 = pfVar15[6];
                fVar6 = pfVar15[7];
                fVar7 = pfVar19[5];
                fVar8 = pfVar19[6];
                fVar9 = pfVar19[7];
                pfVar23[4] = fVar30 * pfVar15[4] + pfVar19[4];
                pfVar23[5] = fVar30 * fVar29 + fVar7;
                pfVar23[6] = fVar30 * fVar5 + fVar8;
                pfVar23[7] = fVar30 * fVar6 + fVar9;
                fVar29 = pfVar15[9];
                fVar5 = pfVar15[10];
                fVar6 = pfVar15[0xb];
                fVar7 = pfVar19[9];
                fVar8 = pfVar19[10];
                fVar9 = pfVar19[0xb];
                pfVar23[8] = fVar30 * pfVar15[8] + pfVar19[8];
                pfVar23[9] = fVar30 * fVar29 + fVar7;
                pfVar23[10] = fVar30 * fVar5 + fVar8;
                pfVar23[0xb] = fVar30 * fVar6 + fVar9;
                pfVar4 = pfVar15 + 0xc;
                fVar29 = pfVar15[0xd];
                fVar5 = pfVar15[0xe];
                fVar6 = pfVar15[0xf];
                pfVar15 = pfVar15 + 0x10;
                pfVar1 = pfVar19 + 0xc;
                fVar7 = pfVar19[0xd];
                fVar8 = pfVar19[0xe];
                fVar9 = pfVar19[0xf];
                pfVar19 = pfVar19 + 0x10;
                pfVar23[0xc] = fVar30 * *pfVar4 + *pfVar1;
                pfVar23[0xd] = fVar30 * fVar29 + fVar7;
                pfVar23[0xe] = fVar30 * fVar5 + fVar8;
                pfVar23[0xf] = fVar30 * fVar6 + fVar9;
                pfVar23 = pfVar23 + 0x10;
              } while (uVar26 != (uVar12 & 0xfffffff0));
            }
          }
          if (pfVar19 != pfVar3) {
            iVar22 = (int)pfVar23 - (int)pfVar15;
            do {
              fVar29 = *pfVar19;
              pfVar19 = pfVar19 + 1;
              *(float *)(iVar22 + (int)pfVar15) = fVar30 * *pfVar15 + fVar29;
              pfVar15 = pfVar15 + 1;
            } while (pfVar19 != pfVar3);
          }
          iStack_5c = iStack_5c + 0x1000;
          uStack_50 = uStack_50 - 1;
          pfVar13 = pfVar13 + 1;
        } while (uStack_50 != 0);
      }
      func_0x00e1ac00(iStack_6c + 0x1c,_Dst,(float *)((int)puStack_2c + (int)_Dst),_Dst);
      puVar14 = (undefined4 *)0x0;
      uVar12 = uVar17;
      if (param_2 != (undefined4 *)0x0) {
        do {
          uVar12 = uVar12 & *(uint *)(iVar24 + 0xe0);
          uVar26 = (*(uint *)(iVar24 + 0xe0) - uVar12) + 1;
          if ((uint)((int)param_2 - (int)puVar14) < uVar26) {
            uVar26 = (int)param_2 - (int)puVar14;
          }
          iVar22 = uVar12 << 4;
          do {
            uVar12 = uVar12 + 1;
            pfVar13 = _Dst + (int)puVar14;
            iVar16 = *(int *)(iVar24 + 0xe4) + iVar22;
            iVar22 = iVar22 + 0x10;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
            *(float *)((int)pfStack_60 + iVar16) = *pfVar13;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        } while (puVar14 < param_2);
      }
      iStack_6c = iStack_6c + 0x38;
      pfStack_60 = (float *)((int)pfStack_60 + 4);
      pfStack_68 = pfStack_68 + 4;
      uStack_4c = uStack_4c + -1;
    } while (uStack_4c != 0);
    if (*(char *)(param_1 + 0x40) == '\x02') {
      pfStack_60 = (float *)0x0;
      uVar25 = (int)pfVar3 - (int)_Dst & 0xfffffffc;
      puStack_2c = (undefined4 *)(uVar25 + (int)_Dst);
      uStack_40 = uVar11;
      do {
        memset(_Dst,0,uVar25);
        func_0x00e1ac00(uStack_40 + 0x1c,_Dst,puStack_2c,_Dst);
        puVar14 = (undefined4 *)0x0;
        uVar12 = uVar17;
        if (param_2 != (undefined4 *)0x0) {
          do {
            uVar12 = uVar12 & *(uint *)(uVar11 + 0xe0);
            uVar26 = (*(uint *)(uVar11 + 0xe0) - uVar12) + 1;
            if ((uint)((int)param_2 - (int)puVar14) < uVar26) {
              uVar26 = (int)param_2 - (int)puVar14;
            }
            iVar22 = uVar12 << 4;
            do {
              uVar12 = uVar12 + 1;
              pfVar3 = _Dst + (int)puVar14;
              iVar16 = *(int *)(uVar11 + 0xe4) + iVar22;
              iVar22 = iVar22 + 0x10;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              *(float *)((int)pfStack_60 + iVar16) = *pfVar3;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          } while (puVar14 < param_2);
        }
        pfStack_60 = (float *)((int)pfStack_60 + 4);
        uStack_40 = uStack_40 + 0x38;
      } while (pfStack_60 < 0x10);
    }
  }
  iVar16 = param_1 + 0x26d0;
  func_0x00e15230(uVar17,param_2,param_1 + 0x16d0,iVar16);
  iVar20 = unaff_EDI + 0x66d0;
  iVar22 = unaff_EDI + 0x16d0;
  func_0x00e15640();
  func_0x00e14000(iVar24,uStack_10,uStack_c,param_2);
  if (*(char *)(unaff_EBP + 0x40) != '\x04') {
    if (*(char *)(unaff_EBP + 0x40) == '\x03') {
      uVar17 = (uint)(*(int *)(unaff_EBP + 0x14) - *(int *)(unaff_EBP + 0x10) >> 4) >> 1;
      if (uVar17 != 0) {
        puVar14 = (undefined4 *)
                  ((*(byte *)(unaff_EBP + 0x41) ^ 1) * uVar17 * 0x10 + *(int *)(unaff_EBP + 0x10));
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar18 = puVar14 + 4;
        for (uVar17 = uVar17 * 0x10 - 0xd >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar18 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      if (param_2 != param_2 + 0x38) {
        puVar14 = param_2 + 1;
        do {
          *puVar14 = 0;
          puVar14[-1] = 0;
          puVar18 = puVar14 + 0xd;
          puVar14[7] = 0;
          puVar14[6] = 0;
          puVar14 = puVar14 + 0xe;
        } while (puVar18 != param_2 + 0x38);
      }
      if (param_2 + 0xea != param_2 + 0x126) {
        puVar14 = param_2 + 0xf3;
        do {
          puVar14[-7] = 0;
          puVar14[-8] = 0;
          puVar18 = puVar14 + 6;
          *puVar14 = 0;
          puVar14[-1] = 0;
          puVar14 = puVar14 + 0xf;
        } while (puVar18 != param_2 + 0x126);
      }
      if (param_2 + 0x2b0 != param_2 + 0x2d0) {
        puVar14 = param_2 + 0x2c0;
        do {
          if (puVar14 + -0x10 != puVar14) {
            puVar18 = puVar14 + -0xe;
            do {
              puVar18[1] = 0;
              *puVar18 = 0;
              puVar2 = puVar18 + 2;
              puVar18[-1] = 0;
              puVar18 = puVar18 + 4;
            } while (puVar2 != puVar14);
          }
          bVar28 = puVar14 != param_2 + 0x2d0;
          puVar14 = puVar14 + 0x10;
        } while (bVar28);
      }
      *(undefined1 *)(unaff_EBP + 0x40) = 4;
      *(int *)(unaff_EBP + 0x16cc) = (int)puStack_2c + iVar22;
      return;
    }
    if (param_2 < (undefined4 *)param_2[0x2d0]) {
      param_2[0x2d0] = (int)param_2[0x2d0] - (int)param_2;
      puStack_2c = param_2;
    }
    else {
      puVar14 = param_2 + 0xa3;
      if (puVar14 != param_2 + 0xe3) {
        uStack_40 = 0;
        uStack_3c = 0;
        do {
          memset(puVar14,0,0x40);
          puVar14 = puVar14 + 0x10;
        } while (puVar14 != param_2 + 0xe3);
        iVar16 = unaff_EBP + 0x26d0;
        iVar20 = unaff_EBP + 0x66d0;
      }
      puVar14 = param_2 + 0x270;
      if (puVar14 != param_2 + 0x2b0) {
        do {
          memset(puVar14,0,0x40);
          puVar14 = puVar14 + 0x10;
        } while (puVar14 != param_2 + 0x2b0);
        iVar16 = unaff_EBP + 0x26d0;
        iVar20 = unaff_EBP + 0x66d0;
      }
      param_2[0x2d0] = 0;
      *(undefined1 *)(unaff_EBP + 0x40) = 3;
    }
    func_0x00e15230(iVar22,puStack_2c,unaff_EBP + 0x16d0,iVar16);
    func_0x00e15640(iVar22,puStack_2c,iVar24 + 0x16d0,iVar20);
    func_0x00e14000(param_2,uStack_40,uStack_3c,puStack_2c);
    *(int *)(iVar24 + 0x16cc) = iVar22 + (int)puStack_2c;
    return;
  }
  *(int *)(unaff_EBP + 0x16cc) = iVar22 + (int)param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_00e15f20(int param_1,undefined4 param_2,int param_3,float *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 unaff_ESI;
  int *piVar15;
  undefined4 unaff_EDI;
  uint uVar16;
  float10 fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char cStack_71;
  float fVar26;
  float *pfVar27;
  float fVar28;
  
  fVar21 = param_4[6];
  if ((*(char *)(param_4 + 0x1a) != '\0') && (param_4[0x16] < 1.0)) {
    dVar19 = (double)param_4[0x16];
    func_0x00e87c48();
    fVar18 = 0.0029129044 / (((float)dVar19 * param_4[5]) / -3.0);
    fVar21 = param_4[6];
    if (fVar18 <= param_4[6]) {
      fVar21 = fVar18;
    }
  }
  fVar18 = param_4[5];
  fVar24 = 0.1;
  if (0.1 <= fVar18 * param_4[7]) {
    fVar24 = fVar18 * param_4[7];
  }
  fVar23 = 0.1;
  if (0.1 <= fVar18 * fVar21) {
    fVar23 = fVar18 * fVar21;
  }
  if (20.0 <= fVar24) {
    fVar24 = 20.0;
  }
  if (20.0 <= fVar23) {
    fVar23 = 20.0;
  }
  if ((((((*(char *)(param_1 + 0x40) == '\0') || (*(float *)(param_1 + 0x1c) != *param_4)) ||
        (*(float *)(param_1 + 0x20) != param_4[1])) ||
       ((*(float *)(param_1 + 0x24) != fVar18 || (*(float *)(param_1 + 0x28) != fVar23)))) ||
      ((*(float *)(param_1 + 0x2c) != fVar24 ||
       ((*(float *)(param_1 + 0x30) != param_4[0x14] ||
        (*(float *)(param_1 + 0x34) != param_4[0x15])))))) ||
     ((*(float *)(param_1 + 0x38) != param_4[0x17] || (*(float *)(param_1 + 0x3c) != param_4[0x18]))
     )) {
    *(float *)(param_1 + 0x1c) = *param_4;
    *(float *)(param_1 + 0x20) = param_4[1];
    *(float *)(param_1 + 0x24) = param_4[5];
    *(float *)(param_1 + 0x28) = fVar23;
    *(float *)(param_1 + 0x2c) = fVar24;
    *(float *)(param_1 + 0x30) = param_4[0x14];
    *(float *)(param_1 + 0x34) = param_4[0x15];
    *(float *)(param_1 + 0x38) = param_4[0x17];
    *(float *)(param_1 + 0x3c) = param_4[0x18];
    uVar11 = 4;
    if (*(char *)(param_1 + 0x40) != '\0') {
      uVar11 = 1;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ 1;
    *(undefined1 *)(param_1 + 0x40) = uVar11;
  }
  uVar14 = *(undefined4 *)(param_5 + 0x84);
  iVar12 = (uint)*(byte *)(param_1 + 0x41) * 0xb44 + 0x44 + param_1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = uVar14;
  bVar10 = *(byte *)(param_1 + 0xa6e0);
  fVar21 = *(float *)(param_3 + 0x90) * param_4[2] * _DAT_012ba83c;
  pfVar22 = param_4 + 0xf;
  fVar24 = fVar21 * param_4[8];
  pfVar27 = param_4 + 10;
  func_0x00e15b30(pfVar27,pfVar22,fVar24,fVar21 * param_4[0xd]);
  fVar18 = param_4[0x17] / (float)(uint)bVar10;
  fVar21 = 0.49;
  if (fVar18 <= 0.49) {
    fVar21 = fVar18;
  }
  fVar18 = 0.001;
  if (0.001 <= param_4[3]) {
    fVar18 = param_4[3];
  }
  dVar19 = (double)((1.0 / fVar18 + fVar18) * 0.0 + 2.0);
  if (dVar19 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar19 = SQRT(dVar19);
  }
  fVar23 = 0.0;
  func_0x00e1ae00(0,fVar21,fVar18,(float)dVar19);
  if (param_4[0x18] / (float)pfVar27 <= (float)pfVar22) {
    pfVar22 = (float *)(param_4[0x18] / (float)pfVar27);
  }
  fVar25 = 0.001;
  if (0.001 <= param_4[4]) {
    fVar25 = param_4[4];
  }
  dVar19 = (double)((1.0 / fVar25 + fVar25) * 0.0 + 2.0);
  if (dVar19 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar19 = SQRT(dVar19);
  }
  func_0x00e1ae00(1,pfVar22,fVar25);
  uVar14 = *(undefined4 *)(iVar12 + 8);
  *(undefined4 *)(iVar12 + 0x40) = uVar14;
  uVar1 = *(undefined4 *)(iVar12 + 0xc);
  *(undefined4 *)(iVar12 + 0x44) = uVar1;
  uVar2 = *(undefined4 *)(iVar12 + 0x10);
  *(undefined4 *)(iVar12 + 0x48) = uVar2;
  uVar3 = *(undefined4 *)(iVar12 + 0x14);
  *(undefined4 *)(iVar12 + 0x4c) = uVar3;
  uVar4 = *(undefined4 *)(iVar12 + 0x18);
  *(undefined4 *)(iVar12 + 0x50) = uVar4;
  uVar5 = *(undefined4 *)(iVar12 + 0x24);
  *(undefined4 *)(iVar12 + 0x5c) = uVar5;
  uVar6 = *(undefined4 *)(iVar12 + 0x28);
  *(undefined4 *)(iVar12 + 0x60) = uVar6;
  uVar7 = *(undefined4 *)(iVar12 + 0x2c);
  *(undefined4 *)(iVar12 + 100) = uVar7;
  uVar8 = *(undefined4 *)(iVar12 + 0x30);
  *(undefined4 *)(iVar12 + 0x68) = uVar8;
  uVar9 = *(undefined4 *)(iVar12 + 0x34);
  *(undefined4 *)(iVar12 + 0x6c) = uVar9;
  *(undefined4 *)(iVar12 + 0x78) = uVar14;
  *(undefined4 *)(iVar12 + 0x7c) = uVar1;
  *(undefined4 *)(iVar12 + 0x80) = uVar2;
  *(undefined4 *)(iVar12 + 0x84) = uVar3;
  *(undefined4 *)(iVar12 + 0x88) = uVar4;
  *(undefined4 *)(iVar12 + 0x94) = uVar5;
  *(undefined4 *)(iVar12 + 0x98) = uVar6;
  *(undefined4 *)(iVar12 + 0x9c) = uVar7;
  *(undefined4 *)(iVar12 + 0xa0) = uVar8;
  *(undefined4 *)(iVar12 + 0xa4) = uVar9;
  *(undefined4 *)(iVar12 + 0xb0) = uVar14;
  *(undefined4 *)(iVar12 + 0xb4) = uVar1;
  *(undefined4 *)(iVar12 + 0xb8) = uVar2;
  *(undefined4 *)(iVar12 + 0xbc) = uVar3;
  *(undefined4 *)(iVar12 + 0xc0) = uVar4;
  *(undefined4 *)(iVar12 + 0xcc) = uVar5;
  *(undefined4 *)(iVar12 + 0xd0) = uVar6;
  *(undefined4 *)(iVar12 + 0xd4) = uVar7;
  *(undefined4 *)(iVar12 + 0xd8) = uVar8;
  *(undefined4 *)(iVar12 + 0xdc) = uVar9;
  fVar17 = (float10)func_0x00e87c66(*param_4 * 125000.0);
  pfVar22 = (float *)(iVar12 + 0x110);
  fVar25 = param_4[9];
  fVar28 = param_4[0xe];
  piVar15 = (int *)(iVar12 + 0x124);
  uVar16 = 0;
  fVar26 = 5.0;
  if (5.0 <= (float)fVar17) {
    fVar26 = (float)fVar17;
  }
  do {
    dVar20 = 0.0010000000474974513;
    piVar15[-0xc] = (int)((fVar26 * *(float *)((int)&DAT_010e0f60 + uVar16) + fVar25) * fVar23);
    func_0x00e879bf();
    *pfVar22 = (float)dVar20;
    pfVar22 = pfVar22 + 1;
    pfVar27 = (float *)((int)&DAT_010e0fa0 + uVar16);
    uVar16 = uVar16 + 4;
    *piVar15 = (int)(((*pfVar27 - 0.0019419362) * 0.25 * fVar26 + fVar28) * fVar23);
    piVar15 = piVar15 + 2;
  } while (uVar16 < 0x10);
  cStack_71 = (char)((uint)(float)dVar19 >> 0x18);
  if (cStack_71 != '\0') {
    uVar16 = 0;
    *(float *)((int)fVar18 + 0x150) = param_4[1] * param_4[1] * 0.70710677;
    piVar15 = (int *)((int)fVar18 + 0x16c);
    do {
      dVar19 = 0.0010000000474974513;
      piVar15[-6] = (int)(fVar26 * *(float *)((int)&DAT_010e0f70 + uVar16) * fVar23);
      *piVar15 = (int)(fVar26 * *(float *)((int)&DAT_010e0f80 + uVar16) * fVar23);
      func_0x00e879bf();
      uVar16 = uVar16 + 4;
      piVar15[4] = (int)(float)dVar19;
      piVar15 = piVar15 + 1;
    } while (uVar16 < 0x10);
    dVar19 = 1.7320507764816284;
    func_0x00e87a34();
    dVar20 = (double)((float)dVar19 * param_4[1]);
    dVar19 = dVar20;
    func_0x00e87995();
    *(float *)((int)fVar18 + 0x140) = (float)dVar19;
    func_0x00e8799b();
    *(float *)((int)fVar18 + 0x144) = (float)dVar20 / 1.7320508;
    fVar25 = param_4[0x14];
    fVar28 = param_4[0x15];
    uVar13 = (uint)ROUND(16777216.0 / (fVar25 * fVar23));
    uVar16 = 1;
    if (1 < uVar13) {
      uVar16 = uVar13;
    }
    *(uint *)((int)fVar18 + 0x49c) = uVar16;
    if (fVar25 < 0.25) {
      fVar25 = fVar25 * 0.0125;
    }
    else {
      fVar25 = 0.003125;
    }
    *(float *)((int)fVar18 + 0x4a0) = fVar28 * fVar25 * fVar23;
    func_0x00e166b0(fVar26,param_4[1],unaff_ESI,param_4[5],unaff_EDI,fVar21,fVar24,fVar23);
  }
  uVar14 = func_0x008abcb0();
  *(undefined4 *)((int)fVar18 + 0xb40) = uVar14;
  return;
}



undefined4 * __thiscall FUN_00e18650(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_E2E8E842::EaxCallException::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00e18910(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_5C40C845::EaxFxSlotsException::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00e18ad0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_421BB3EC::EaxFxSlotIndexException::vftable;
  return param_1;
}



undefined1 * FUN_00e18da0(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined1 *puVar2;
  int *unaff_FS_OFFSET;
  uint uStack_34;
  undefined1 auStack_24 [8];
  int *piStack_1c;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6e9ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_34;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0062c5e0(auStack_24);
  uStack_8 = 1;
  func_0x0062c5a0(auStack_24,extraout_ECX);
  func_0x0062c660();
  uVar1 = (**(code **)(*piStack_1c + 4))();
  if (0 < DAT_012ba4e8) {
    puVar2 = &DAT_0112e1b4;
    if (param_1 != (undefined1 *)0x0) {
      puVar2 = param_1;
    }
    func_0x00ddf410(1,DAT_013e0188,"%s %s\n",puVar2,uVar1);
  }
  return &LAB_00e18e62;
}



undefined1 * Catch_00e18df0(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int unaff_EBP;
  
  uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 4))();
  if (0 < DAT_012ba4e8) {
    puVar2 = &DAT_0112e1b4;
    if (*(undefined1 **)(unaff_EBP + 8) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(unaff_EBP + 8);
    }
    func_0x00ddf410(1,DAT_013e0188,"%s %s\n",puVar2,uVar1);
  }
  return &LAB_00e18e62;
}



undefined1 * Catch_All_00e18e2b(void)

{
  undefined1 *puVar1;
  int unaff_EBP;
  
  if (0 < DAT_012ba4e8) {
    puVar1 = &DAT_0112e1b4;
    if (*(undefined1 **)(unaff_EBP + 8) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(unaff_EBP + 8);
    }
    func_0x00ddf410(1,DAT_013e0188,"%s %s\n",puVar1,"Generic exception.");
  }
  return &LAB_00e18e62;
}



undefined4 * __thiscall FUN_00e18ea0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = std::overflow_error::vftable;
  return param_1;
}



void FUN_00e19560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  func_0x00e192f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



void FUN_00e19590(int param_1,int param_2,uint param_3,uint param_4,int *param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar12 = param_4;
  fVar3 = (float)param_5[4];
  iVar5 = *param_5;
  fVar17 = (float)((double)(int)param_6 + (double)(&DAT_011a2c10)[-((int)param_6 >> 0x1f)]);
  fVar16 = *(float *)(param_4 + 0x408);
  if (1e-05 < fVar16) {
    piVar1 = (int *)(param_4 + 0x404);
    if (param_6 != 0) {
      pfVar7 = (float *)(param_1 + (0x40 - *(int *)(param_4 + 0x400)) * 4);
      iVar11 = param_4 - param_2;
      pfVar10 = (float *)(param_2 + 4);
      param_4 = param_6;
      pfVar6 = (float *)(param_1 + (0x40 - *piVar1) * 4);
      fVar15 = fVar17;
      do {
        fVar13 = fVar15 * (fVar16 / fVar17);
        fVar14 = *pfVar6;
        fVar4 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        uVar9 = 0;
        pfVar8 = pfVar10;
        if (param_3 != 0) {
          do {
            iVar2 = uVar9 * 8;
            uVar9 = uVar9 + 1;
            pfVar8[-1] = fVar13 * fVar4 * *(float *)(iVar12 + iVar2) + pfVar8[-1];
            *pfVar8 = fVar13 * fVar14 * *(float *)(iVar11 + (int)pfVar8) + *pfVar8;
            pfVar8 = pfVar8 + 2;
          } while (uVar9 < param_3);
        }
        fVar15 = fVar15 - 1.0;
        pfVar10 = pfVar10 + 2;
        iVar11 = iVar11 + -8;
        param_4 = param_4 - 1;
        pfVar6 = pfVar6 + 1;
      } while (param_4 != 0);
    }
  }
  if (1e-05 < fVar17 * fVar3) {
    fVar16 = 1.0;
    if (1 < param_6) {
      pfVar7 = (float *)(param_1 + (0x41 - param_5[1]) * 4);
      iVar12 = iVar5 - param_2;
      pfVar10 = (float *)(param_2 + 0xc);
      param_6 = param_6 - 1;
      pfVar6 = (float *)(param_1 + (0x41 - param_5[2]) * 4);
      do {
        iVar12 = iVar12 + -8;
        fVar14 = fVar16 * fVar3;
        uVar9 = 0;
        fVar17 = *pfVar6;
        fVar15 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar10;
        if (param_3 != 0) {
          do {
            iVar11 = uVar9 * 8;
            uVar9 = uVar9 + 1;
            pfVar8[-1] = fVar14 * fVar15 * *(float *)(iVar5 + iVar11) + pfVar8[-1];
            *pfVar8 = fVar14 * fVar17 * *(float *)(iVar12 + (int)pfVar8) + *pfVar8;
            pfVar8 = pfVar8 + 2;
          } while (uVar9 < param_3);
        }
        fVar16 = fVar16 + 1.0;
        pfVar10 = pfVar10 + 2;
        param_6 = param_6 + -1;
        pfVar6 = pfVar6 + 1;
      } while (param_6 != 0);
    }
  }
  return;
}



void thunk_FUN_00e19590(int param_1,int param_2,uint param_3,uint param_4,int *param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar12 = param_4;
  fVar3 = (float)param_5[4];
  iVar5 = *param_5;
  fVar17 = (float)((double)(int)param_6 + (double)(&DAT_011a2c10)[-((int)param_6 >> 0x1f)]);
  fVar16 = *(float *)(param_4 + 0x408);
  if (1e-05 < fVar16) {
    piVar1 = (int *)(param_4 + 0x404);
    if (param_6 != 0) {
      pfVar7 = (float *)(param_1 + (0x40 - *(int *)(param_4 + 0x400)) * 4);
      iVar11 = param_4 - param_2;
      pfVar10 = (float *)(param_2 + 4);
      param_4 = param_6;
      pfVar6 = (float *)(param_1 + (0x40 - *piVar1) * 4);
      fVar15 = fVar17;
      do {
        fVar13 = fVar15 * (fVar16 / fVar17);
        fVar14 = *pfVar6;
        fVar4 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        uVar9 = 0;
        pfVar8 = pfVar10;
        if (param_3 != 0) {
          do {
            iVar2 = uVar9 * 8;
            uVar9 = uVar9 + 1;
            pfVar8[-1] = fVar13 * fVar4 * *(float *)(iVar12 + iVar2) + pfVar8[-1];
            *pfVar8 = fVar13 * fVar14 * *(float *)(iVar11 + (int)pfVar8) + *pfVar8;
            pfVar8 = pfVar8 + 2;
          } while (uVar9 < param_3);
        }
        fVar15 = fVar15 - 1.0;
        pfVar10 = pfVar10 + 2;
        iVar11 = iVar11 + -8;
        param_4 = param_4 - 1;
        pfVar6 = pfVar6 + 1;
      } while (param_4 != 0);
    }
  }
  if (1e-05 < fVar17 * fVar3) {
    fVar16 = 1.0;
    if (1 < param_6) {
      pfVar7 = (float *)(param_1 + (0x41 - param_5[1]) * 4);
      iVar12 = iVar5 - param_2;
      pfVar10 = (float *)(param_2 + 0xc);
      param_6 = param_6 - 1;
      pfVar6 = (float *)(param_1 + (0x41 - param_5[2]) * 4);
      do {
        iVar12 = iVar12 + -8;
        fVar14 = fVar16 * fVar3;
        uVar9 = 0;
        fVar17 = *pfVar6;
        fVar15 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar10;
        if (param_3 != 0) {
          do {
            iVar11 = uVar9 * 8;
            uVar9 = uVar9 + 1;
            pfVar8[-1] = fVar14 * fVar15 * *(float *)(iVar5 + iVar11) + pfVar8[-1];
            *pfVar8 = fVar14 * fVar17 * *(float *)(iVar12 + (int)pfVar8) + *pfVar8;
            pfVar8 = pfVar8 + 2;
          } while (uVar9 < param_3);
        }
        fVar16 = fVar16 + 1.0;
        pfVar10 = pfVar10 + 2;
        param_6 = param_6 + -1;
        pfVar6 = pfVar6 + 1;
      } while (param_6 != 0);
    }
  }
  return;
}



void FUN_00e19790(int param_1,int param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = 0.0;
  iVar6 = *param_4;
  fVar2 = (float)param_4[4];
  fVar3 = (float)param_4[3];
  if (param_5 != 0) {
    pfVar9 = (float *)(param_1 + (0x40 - param_4[2]) * 4);
    pfVar7 = (float *)(param_1 + (0x40 - param_4[1]) * 4);
    iVar12 = iVar6 - param_2;
    pfVar11 = (float *)(param_2 + 4);
    do {
      fVar13 = fVar14 * fVar2 + fVar3;
      fVar4 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      fVar5 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      uVar10 = 0;
      pfVar8 = pfVar11;
      if (param_3 != 0) {
        do {
          iVar1 = uVar10 * 8;
          uVar10 = uVar10 + 1;
          pfVar8[-1] = fVar13 * fVar5 * *(float *)(iVar6 + iVar1) + pfVar8[-1];
          *pfVar8 = fVar13 * fVar4 * *(float *)(iVar12 + (int)pfVar8) + *pfVar8;
          pfVar8 = pfVar8 + 2;
        } while (uVar10 < param_3);
      }
      fVar14 = fVar14 + 1.0;
      pfVar11 = pfVar11 + 2;
      iVar12 = iVar12 + -8;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



void FUN_00e19870(int param_1,int param_2,float *param_3,float *param_4,float param_5,uint param_6)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = 0.0;
  if (param_6 == 0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 1.0 / (float)((double)(int)param_6 + (double)(&DAT_011a2c10)[-((int)param_6 >> 0x1f)]);
  }
  fVar2 = *param_4;
  uVar7 = param_2 - param_1 >> 2;
  uVar3 = param_6;
  if (uVar7 < param_6) {
    uVar3 = uVar7;
  }
  uVar9 = 0;
  fVar12 = (param_5 - fVar2) * fVar12;
  if (1.1920929e-07 < ABS(fVar12)) {
    if (uVar3 != 0) {
      pfVar5 = param_3;
      uVar6 = uVar3;
      fVar11 = fVar10;
      do {
        fVar10 = fVar11 + 1.0;
        *pfVar5 = (fVar11 * fVar12 + fVar2) * *(float *)((param_1 - (int)param_3) + (int)pfVar5) +
                  *pfVar5;
        pfVar5 = pfVar5 + 1;
        uVar6 = uVar6 - 1;
        uVar9 = uVar3;
        fVar11 = fVar10;
      } while (uVar6 != 0);
    }
    if (uVar9 != param_6) {
      param_5 = fVar10 * fVar12 + fVar2;
    }
  }
  *param_4 = param_5;
  if ((1e-05 < ABS(param_5)) && (uVar3 = uVar7 - uVar9, uVar9 != uVar7)) {
    if ((0xf < uVar3) &&
       (((float *)(param_1 + (uVar7 - 1) * 4) < param_3 + uVar9 ||
        (param_3 + (uVar7 - 1) < (float *)(param_1 + uVar9 * 4))))) {
      pfVar5 = (float *)(param_1 + (uVar9 + 0xc) * 4);
      pfVar4 = param_3 + uVar9 + 4;
      do {
        fVar10 = pfVar5[-0xb];
        fVar12 = pfVar5[-10];
        fVar2 = pfVar5[-9];
        uVar9 = uVar9 + 0x10;
        pfVar4[-4] = pfVar5[-0xc] * param_5 + pfVar4[-4];
        pfVar4[-3] = fVar10 * param_5 + pfVar4[-3];
        pfVar4[-2] = fVar12 * param_5 + pfVar4[-2];
        pfVar4[-1] = fVar2 * param_5 + pfVar4[-1];
        pfVar1 = (float *)((int)pfVar4 + (param_1 - (int)param_3));
        fVar10 = pfVar1[1];
        fVar12 = pfVar1[2];
        fVar2 = pfVar1[3];
        *pfVar4 = *pfVar1 * param_5 + *pfVar4;
        pfVar4[1] = fVar10 * param_5 + pfVar4[1];
        pfVar4[2] = fVar12 * param_5 + pfVar4[2];
        pfVar4[3] = fVar2 * param_5 + pfVar4[3];
        fVar10 = pfVar5[-3];
        fVar12 = pfVar5[-2];
        fVar2 = pfVar5[-1];
        pfVar4[4] = pfVar5[-4] * param_5 + pfVar4[4];
        pfVar4[5] = fVar10 * param_5 + pfVar4[5];
        pfVar4[6] = fVar12 * param_5 + pfVar4[6];
        pfVar4[7] = fVar2 * param_5 + pfVar4[7];
        fVar10 = *pfVar5;
        fVar12 = pfVar5[1];
        fVar2 = pfVar5[2];
        fVar11 = pfVar5[3];
        pfVar5 = pfVar5 + 0x10;
        pfVar4[8] = fVar10 * param_5 + pfVar4[8];
        pfVar4[9] = fVar12 * param_5 + pfVar4[9];
        pfVar4[10] = fVar2 * param_5 + pfVar4[10];
        pfVar4[0xb] = fVar11 * param_5 + pfVar4[0xb];
        pfVar4 = pfVar4 + 0x10;
      } while (uVar9 != uVar7 - (uVar3 & 0xf));
      if (uVar9 == uVar7) {
        return;
      }
    }
    iVar8 = uVar7 - uVar9;
    pfVar5 = param_3 + uVar9;
    do {
      *pfVar5 = param_5 * *(float *)((param_1 - (int)param_3) + (int)pfVar5) + *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



void FUN_00e19a70(int param_1,int param_2,int param_3,int param_4,float *param_5,int param_6,
                 uint param_7,int param_8)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iStack_8;
  
  if (param_7 == 0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = 1.0 / (float)((double)(int)param_7 + (double)(&DAT_011a2c10)[-((int)param_7 >> 0x1f)]);
  }
  uVar4 = param_2 - param_1 >> 2;
  uVar8 = param_7;
  if (uVar4 < param_7) {
    uVar8 = uVar4;
  }
  iStack_8 = param_3;
  if (param_3 != param_4) {
    param_6 = param_6 - (int)param_5;
    do {
      fVar13 = *(float *)(param_6 + (int)param_5);
      fVar3 = *param_5;
      uVar4 = 0;
      iVar1 = iStack_8 + param_8 * 4;
      fVar14 = (fVar13 - fVar3) * fVar15;
      if (1.1920929e-07 < ABS(fVar14)) {
        fVar11 = 0.0;
        fVar12 = fVar11;
        if (uVar8 != 0) {
          do {
            fVar11 = fVar12 + 1.0;
            *(float *)(iVar1 + uVar4 * 4) =
                 (fVar12 * fVar14 + fVar3) * *(float *)(param_1 + uVar4 * 4) +
                 *(float *)(iVar1 + uVar4 * 4);
            uVar4 = uVar4 + 1;
            fVar12 = fVar11;
          } while (uVar4 != uVar8);
        }
        if (uVar4 != param_7) {
          fVar13 = fVar11 * fVar14 + fVar3;
        }
      }
      *param_5 = fVar13;
      if (1e-05 < ABS(fVar13)) {
        uVar9 = param_2 - param_1 >> 2;
        uVar5 = uVar9 - uVar4;
        if (uVar4 != uVar9) {
          if ((0xf < uVar5) &&
             ((param_1 + -4 + uVar9 * 4 < iVar1 + uVar4 * 4 ||
              (iVar1 + (uVar9 - 1) * 4 < param_1 + uVar4 * 4)))) {
            pfVar7 = (float *)(param_1 + 0x30 + uVar4 * 4);
            pfVar6 = (float *)(iVar1 + 0x10 + uVar4 * 4);
            do {
              fVar3 = pfVar7[-0xb];
              fVar14 = pfVar7[-10];
              fVar12 = pfVar7[-9];
              uVar4 = uVar4 + 0x10;
              pfVar6[-4] = pfVar7[-0xc] * fVar13 + pfVar6[-4];
              pfVar6[-3] = fVar3 * fVar13 + pfVar6[-3];
              pfVar6[-2] = fVar14 * fVar13 + pfVar6[-2];
              pfVar6[-1] = fVar12 * fVar13 + pfVar6[-1];
              pfVar2 = (float *)((param_1 - iVar1) + (int)pfVar6);
              fVar3 = pfVar2[1];
              fVar14 = pfVar2[2];
              fVar12 = pfVar2[3];
              *pfVar6 = *pfVar2 * fVar13 + *pfVar6;
              pfVar6[1] = fVar3 * fVar13 + pfVar6[1];
              pfVar6[2] = fVar14 * fVar13 + pfVar6[2];
              pfVar6[3] = fVar12 * fVar13 + pfVar6[3];
              fVar3 = pfVar7[-3];
              fVar14 = pfVar7[-2];
              fVar12 = pfVar7[-1];
              pfVar6[4] = pfVar7[-4] * fVar13 + pfVar6[4];
              pfVar6[5] = fVar3 * fVar13 + pfVar6[5];
              pfVar6[6] = fVar14 * fVar13 + pfVar6[6];
              pfVar6[7] = fVar12 * fVar13 + pfVar6[7];
              fVar3 = *pfVar7;
              fVar14 = pfVar7[1];
              fVar12 = pfVar7[2];
              fVar11 = pfVar7[3];
              pfVar7 = pfVar7 + 0x10;
              pfVar6[8] = fVar3 * fVar13 + pfVar6[8];
              pfVar6[9] = fVar14 * fVar13 + pfVar6[9];
              pfVar6[10] = fVar12 * fVar13 + pfVar6[10];
              pfVar6[0xb] = fVar11 * fVar13 + pfVar6[0xb];
              pfVar6 = pfVar6 + 0x10;
            } while (uVar4 != uVar9 - (uVar5 & 0xf));
            if (uVar4 == uVar9) goto LAB_00e19ca9;
          }
          pfVar7 = (float *)(iVar1 + uVar4 * 4);
          iVar10 = uVar9 - uVar4;
          do {
            *pfVar7 = fVar13 * *(float *)((param_1 - iVar1) + (int)pfVar7) + *pfVar7;
            pfVar7 = pfVar7 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
LAB_00e19ca9:
      iStack_8 = iStack_8 + 0x1000;
      param_5 = param_5 + 1;
    } while (iStack_8 != param_4);
  }
  return;
}



void FUN_00e19ce0(float *param_1,int param_2,float *param_3,int param_4,float *param_5,
                 float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  
  uVar12 = (uint)param_3;
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[3];
  param_2 = param_2 + (int)param_1[2] * -4;
  param_3 = param_5;
  if (param_5 != param_6) {
    do {
      fVar17 = 0.0;
      iVar15 = (int)fVar8 + (uVar12 >> 0xb) * (int)fVar7 * 8;
      iVar13 = (int)fVar7 * 0x100 + iVar15;
      pfVar9 = (float *)(iVar15 + (int)fVar7 * 4);
      if (fVar7 != 0.0) {
        iVar14 = (iVar13 + (int)fVar7 * 4) - (int)pfVar9;
        iVar13 = iVar13 - (int)pfVar9;
        iVar15 = iVar15 - (int)pfVar9;
        iVar16 = param_2 - (int)pfVar9;
        fVar10 = fVar7;
        do {
          pfVar1 = (float *)((int)pfVar9 + iVar14);
          pfVar2 = (float *)(iVar13 + (int)pfVar9);
          fVar5 = *pfVar9;
          pfVar3 = (float *)(iVar15 + (int)pfVar9);
          pfVar4 = (float *)(iVar16 + (int)pfVar9);
          pfVar9 = pfVar9 + 1;
          fVar17 = fVar17 + (fVar6 * *pfVar2 + *pfVar3 +
                            (fVar6 * *pfVar1 + fVar5) *
                            ((float)(uVar12 & 0x7ff) + 0.0) * 0.00048828125) * *pfVar4;
          fVar10 = (float)((int)fVar10 + -1);
        } while (fVar10 != 0.0);
      }
      uVar11 = uVar12 + param_4;
      *param_3 = fVar17;
      param_3 = param_3 + 1;
      uVar12 = uVar11 & 0xffff;
      param_2 = param_2 + (uVar11 >> 0x10) * 4;
    } while (param_3 != param_6);
  }
  return;
}



void FUN_00e19e10(int *param_1,int param_2,uint param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  float fVar10;
  
  iVar5 = *param_1;
  pfVar9 = (float *)(param_2 + -4);
  if (param_5 != param_6) {
    do {
      uVar6 = param_3 & 0x7ff;
      iVar7 = (param_3 >> 0xb) * 0x20;
      uVar8 = param_3 + param_4;
      param_3 = uVar8 & 0xffff;
      fVar10 = ((float)uVar6 + 0.0) * 0.00048828125;
      fVar4 = *pfVar9;
      pfVar1 = pfVar9 + 1;
      pfVar2 = pfVar9 + 2;
      pfVar3 = pfVar9 + 3;
      pfVar9 = pfVar9 + (uVar8 >> 0x10);
      *param_5 = (fVar10 * *(float *)(iVar7 + 0x14 + iVar5) + *(float *)(iVar7 + 4 + iVar5)) *
                 *pfVar1 + (fVar10 * *(float *)(iVar7 + 0x10 + iVar5) + *(float *)(iVar7 + iVar5)) *
                           fVar4 +
                 (fVar10 * *(float *)(iVar7 + 0x18 + iVar5) + *(float *)(iVar7 + 8 + iVar5)) *
                 *pfVar2 + (fVar10 * *(float *)(iVar7 + 0x1c + iVar5) +
                           *(float *)(iVar7 + 0xc + iVar5)) * *pfVar3;
      param_5 = param_5 + 1;
    } while (param_5 != param_6);
  }
  return;
}



void FUN_00e19f00(int param_1,int param_2,uint param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float *pfStack_24;
  
  uVar14 = *(uint *)(param_1 + 4);
  iVar15 = *(int *)(param_1 + 0xc);
  param_2 = param_2 + *(int *)(param_1 + 8) * -4;
  pfStack_24 = param_5;
  if (param_5 != param_6) {
    do {
      fVar20 = 0.0;
      iVar5 = iVar15 + (param_3 >> 0xb) * uVar14 * 8;
      uVar19 = 0;
      fVar21 = ((float)(param_3 & 0x7ff) + 0.0) * 0.00048828125;
      iVar6 = iVar5 + uVar14 * 4;
      if (3 < uVar14) {
        pfVar16 = (float *)(iVar5 + 4);
        pfVar17 = (float *)(param_2 + 8);
        do {
          pfVar7 = pfVar16 + uVar14;
          iVar18 = uVar19 * 4;
          fVar12 = *pfVar16;
          pfVar10 = pfVar16 + -1;
          pfVar8 = (float *)((int)pfVar16 + (param_2 - iVar5));
          pfVar1 = pfVar17 + -2;
          pfVar9 = (float *)((iVar6 - param_2) + (int)pfVar17);
          pfVar2 = pfVar16 + 1;
          fVar13 = *pfVar17;
          iVar11 = uVar19 * 4;
          uVar19 = uVar19 + 4;
          pfVar3 = pfVar16 + 2;
          pfVar16 = pfVar16 + 4;
          pfVar4 = pfVar17 + 1;
          pfVar17 = pfVar17 + 4;
          fVar20 = fVar20 + (fVar21 * *(float *)(iVar6 + iVar18) + *pfVar10) * *pfVar1 +
                   (fVar21 * *pfVar7 + fVar12) * *pfVar8 + (fVar21 * *pfVar9 + *pfVar2) * fVar13 +
                   (fVar21 * *(float *)(iVar6 + 0xc + iVar11) + *pfVar3) * *pfVar4;
        } while (uVar19 < uVar14 - 3);
      }
      if (uVar19 < uVar14) {
        pfVar17 = (float *)(iVar5 + uVar19 * 4);
        iVar18 = uVar14 - uVar19;
        do {
          pfVar16 = (float *)((iVar6 - iVar5) + (int)pfVar17);
          fVar12 = *pfVar17;
          pfVar10 = (float *)((param_2 - iVar5) + (int)pfVar17);
          pfVar17 = pfVar17 + 1;
          fVar20 = fVar20 + (fVar21 * *pfVar16 + fVar12) * *pfVar10;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      uVar19 = param_3 + param_4;
      *pfStack_24 = fVar20;
      pfStack_24 = pfStack_24 + 1;
      param_3 = uVar19 & 0xffff;
      param_2 = param_2 + (uVar19 >> 0x10) * 4;
    } while (pfStack_24 != param_6);
  }
  return;
}



void FUN_00e1a0b0(undefined4 param_1,float *param_2,uint param_3,int param_4,float *param_5,
                 float *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  
  if (param_5 != param_6) {
    do {
      pfVar1 = param_2 + 1;
      fVar2 = *param_2;
      uVar5 = param_3 + param_4;
      dVar6 = (double)(int)param_3;
      iVar4 = (int)param_3 >> 0x1f;
      param_3 = uVar5 & 0xffff;
      fVar3 = *param_2;
      param_2 = param_2 + (uVar5 >> 0x10);
      *param_5 = (*pfVar1 - fVar2) *
                 (float)(dVar6 + (double)(&DAT_011a2c10)[-iVar4]) * 1.5258789e-05 + fVar3;
      param_5 = param_5 + 1;
    } while (param_5 != param_6);
  }
  return;
}



void FUN_00e1a120(undefined4 param_1,undefined4 *param_2,uint param_3,int param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  
  if (param_5 != param_6) {
    do {
      uVar1 = param_3 + param_4;
      *param_5 = *param_2;
      param_5 = param_5 + 1;
      param_3 = uVar1 & 0xffff;
      param_2 = param_2 + (uVar1 >> 0x10);
    } while (param_5 != param_6);
  }
  return;
}



void __thiscall FUN_00e1a690(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  if (param_2 != param_3) {
    param_4 = param_4 - (int)param_2;
    do {
      fVar5 = fVar6 * fVar2;
      fVar4 = fVar1 * *param_2 - fVar3 * fVar6;
      fVar6 = fVar6 + fVar4;
      *(float *)(param_4 + (int)param_2) = fVar5 + fVar4;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *(float *)(param_1 + 0x10) = fVar6;
  return;
}



void __thiscall FUN_00e1a700(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 0x2c);
  fVar6 = *(float *)(param_1 + 0x30);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x1c);
  if (param_2 != param_3) {
    param_4 = param_4 - (int)param_2;
    do {
      fVar4 = fVar6 * *(float *)(param_1 + 0x20);
      fVar5 = fVar7 * fVar2;
      fVar3 = *(float *)(param_1 + 0x28) * fVar6;
      fVar6 = fVar6 + fVar7;
      fVar3 = (fVar1 * *param_2 - *(float *)(param_1 + 0x24) * fVar7) - fVar3;
      fVar7 = fVar7 + fVar3;
      *(float *)(param_4 + (int)param_2) = fVar5 + fVar3 + fVar4;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *(float *)(param_1 + 0x2c) = fVar7;
  *(float *)(param_1 + 0x30) = fVar6;
  return;
}



void __thiscall FUN_00e1a790(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_1 + 0x54);
  fVar5 = *(float *)(param_1 + 0x58);
  fVar7 = *(float *)(param_1 + 0x5c);
  if (param_2 != param_3) {
    param_4 = param_4 - (int)param_2;
    do {
      fVar4 = fVar6 * *(float *)(param_1 + 0x3c);
      fVar3 = fVar5 * *(float *)(param_1 + 0x40);
      fVar2 = fVar7 * *(float *)(param_1 + 0x44);
      fVar1 = *(float *)(param_1 + 0x4c) * fVar5;
      fVar5 = fVar5 + fVar6;
      fVar1 = (*(float *)(param_1 + 0x38) * *param_2 - *(float *)(param_1 + 0x48) * fVar6) - fVar1;
      fVar6 = fVar6 + fVar1;
      fVar1 = (fVar4 + fVar1 + fVar3) - *(float *)(param_1 + 0x50) * fVar7;
      fVar7 = fVar7 + fVar1;
      *(float *)(param_4 + (int)param_2) = fVar2 + fVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  *(float *)(param_1 + 0x54) = fVar6;
  *(float *)(param_1 + 0x58) = fVar5;
  *(float *)(param_1 + 0x5c) = fVar7;
  return;
}



void FUN_00e1b410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  func_0x00e1b100(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



void FUN_00e1b440(int param_1,float *param_2,int param_3,int *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar18 = 0.0;
  pfVar4 = (float *)*param_4;
  fVar2 = (float)param_4[4];
  fVar3 = (float)param_4[3];
  if (param_5 != 0) {
    pfVar13 = (float *)(param_1 + (0x40 - param_4[2]) * 4);
    pfVar9 = (float *)(param_1 + (0x40 - param_4[1]) * 4);
    iVar12 = (int)pfVar4 - (int)param_2;
    do {
      fVar14 = fVar18 * fVar2 + fVar3;
      fVar15 = fVar14 * *pfVar13;
      pfVar13 = pfVar13 + 1;
      fVar14 = fVar14 * *pfVar9;
      pfVar9 = pfVar9 + 1;
      if (((uint)param_2 & 0xf) == 0) {
        if (param_3 != 0) {
          iVar11 = (param_3 - 1U >> 1) + 1;
          pfVar10 = param_2;
          do {
            pfVar1 = (float *)(iVar12 + (int)pfVar10);
            fVar16 = pfVar1[1];
            fVar17 = pfVar1[2];
            fVar5 = pfVar1[3];
            *pfVar10 = *pfVar1 * fVar14 + *pfVar10;
            pfVar10[1] = fVar16 * fVar15 + pfVar10[1];
            pfVar10[2] = fVar17 * fVar14 + pfVar10[2];
            pfVar10[3] = fVar5 * fVar15 + pfVar10[3];
            pfVar10 = pfVar10 + 4;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      else {
        fVar16 = pfVar4[2];
        fVar17 = pfVar4[3];
        pfVar10 = param_2 + 2;
        param_4 = (int *)0x1;
        iVar11 = (param_3 + 1U >> 1) - 1;
        *(ulonglong *)param_2 =
             CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + pfVar4[1] * fVar15,
                      (float)*(undefined8 *)param_2 + *pfVar4 * fVar14);
        fVar16 = fVar16 * fVar14;
        fVar17 = fVar17 * fVar15;
        pfVar1 = pfVar4;
        do {
          fVar5 = pfVar1[4];
          fVar6 = pfVar1[5];
          fVar7 = pfVar1[6];
          fVar8 = pfVar1[7];
          param_4 = (int *)((int)param_4 + 2);
          *pfVar10 = *pfVar10 + fVar16;
          pfVar10[1] = pfVar10[1] + fVar17;
          pfVar10[2] = pfVar10[2] + fVar5 * fVar14;
          pfVar10[3] = pfVar10[3] + fVar6 * fVar15;
          pfVar10 = pfVar10 + 4;
          iVar11 = iVar11 + -1;
          fVar16 = fVar7 * fVar14;
          fVar17 = fVar8 * fVar15;
          pfVar1 = pfVar1 + 4;
        } while (iVar11 != 0);
        *(ulonglong *)(param_2 + (int)param_4 * 2) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + (int)param_4 * 2) >> 0x20) +
                      fVar8 * fVar15,
                      (float)*(undefined8 *)(param_2 + (int)param_4 * 2) + fVar7 * fVar14);
      }
      param_2 = param_2 + 2;
      fVar18 = fVar18 + 1.0;
      iVar12 = iVar12 + -8;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



void FUN_00e1b590(int param_1,float *param_2,int param_3,float *param_4,float *param_5,uint param_6)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfStack_8;
  uint uStack_4;
  
  fVar1 = (float)((int *)param_5)[4];
  pfVar2 = (float *)*param_5;
  fVar21 = (float)((double)(int)param_6 + (double)(&DAT_011a2c10)[-((int)param_6 >> 0x1f)]);
  fVar20 = param_4[0x102];
  if (1e-05 < fVar20) {
    if (param_6 != 0) {
      pfStack_8 = (float *)(param_1 + (0x40 - (int)param_4[0x101]) * 4);
      pfVar10 = (float *)(param_1 + (0x40 - (int)param_4[0x100]) * 4);
      iVar13 = (int)param_4 - (int)param_2;
      uStack_4 = param_6;
      pfVar7 = param_2;
      fVar19 = fVar21;
      do {
        fVar15 = fVar19 * (fVar20 / fVar21);
        fVar16 = fVar15 * *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar15 = fVar15 * *pfStack_8;
        pfStack_8 = pfStack_8 + 1;
        if (((uint)pfVar7 & 0xf) == 0) {
          if (param_3 != 0) {
            iVar11 = (param_3 - 1U >> 1) + 1;
            pfVar8 = pfVar7;
            do {
              pfVar9 = (float *)((int)pfVar8 + iVar13);
              fVar17 = pfVar9[1];
              fVar18 = pfVar9[2];
              fVar3 = pfVar9[3];
              *pfVar8 = *pfVar8 + *pfVar9 * fVar16;
              pfVar8[1] = pfVar8[1] + fVar17 * fVar15;
              pfVar8[2] = pfVar8[2] + fVar18 * fVar16;
              pfVar8[3] = pfVar8[3] + fVar3 * fVar15;
              pfVar8 = pfVar8 + 4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          fVar17 = param_4[2];
          fVar18 = param_4[3];
          pfVar8 = pfVar7 + 2;
          iVar12 = 1;
          iVar11 = (param_3 + 1U >> 1) - 1;
          *(ulonglong *)pfVar7 =
               CONCAT44((float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20) + param_4[1] * fVar15,
                        (float)*(undefined8 *)pfVar7 + *param_4 * fVar16);
          pfVar9 = param_4;
          fVar17 = fVar17 * fVar16;
          fVar18 = fVar18 * fVar15;
          do {
            fVar3 = pfVar9[4];
            fVar4 = pfVar9[5];
            fVar5 = pfVar9[6];
            fVar6 = pfVar9[7];
            iVar12 = iVar12 + 2;
            *pfVar8 = *pfVar8 + fVar17;
            pfVar8[1] = pfVar8[1] + fVar18;
            pfVar8[2] = pfVar8[2] + fVar3 * fVar16;
            pfVar8[3] = pfVar8[3] + fVar4 * fVar15;
            pfVar8 = pfVar8 + 4;
            iVar11 = iVar11 + -1;
            pfVar9 = pfVar9 + 4;
            fVar17 = fVar5 * fVar16;
            fVar18 = fVar6 * fVar15;
          } while (iVar11 != 0);
          *(ulonglong *)(pfVar7 + iVar12 * 2) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar7 + iVar12 * 2) >> 0x20) +
                        fVar6 * fVar15,(float)*(undefined8 *)(pfVar7 + iVar12 * 2) + fVar5 * fVar16)
          ;
        }
        pfVar7 = pfVar7 + 2;
        fVar19 = fVar19 - 1.0;
        iVar13 = iVar13 + -8;
        uStack_4 = uStack_4 - 1;
      } while (uStack_4 != 0);
    }
  }
  if (1e-05 < fVar21 * fVar1) {
    fVar20 = 1.0;
    if (1 < param_6) {
      pfVar7 = param_2 + 2;
      pfVar10 = (float *)(param_1 + (0x41 - ((int *)param_5)[2]) * 4);
      param_5 = (float *)(param_1 + (0x41 - ((int *)param_5)[1]) * 4);
      iVar11 = (int)pfVar2 - (int)param_2;
      iVar13 = param_6 - 1;
      do {
        iVar11 = iVar11 + -8;
        fVar21 = fVar20 * fVar1;
        fVar19 = fVar21 * *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar21 = fVar21 * *param_5;
        param_5 = param_5 + 1;
        if (((uint)pfVar7 & 0xf) == 0) {
          if (param_3 != 0) {
            iVar12 = (param_3 - 1U >> 1) + 1;
            pfVar8 = pfVar7;
            do {
              pfVar9 = (float *)(iVar11 + (int)pfVar8);
              fVar15 = pfVar9[1];
              fVar16 = pfVar9[2];
              fVar17 = pfVar9[3];
              *pfVar8 = *pfVar9 * fVar21 + *pfVar8;
              pfVar8[1] = fVar15 * fVar19 + pfVar8[1];
              pfVar8[2] = fVar16 * fVar21 + pfVar8[2];
              pfVar8[3] = fVar17 * fVar19 + pfVar8[3];
              pfVar8 = pfVar8 + 4;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        else {
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          iVar14 = 1;
          iVar12 = (param_3 + 1U >> 1) - 1;
          *(ulonglong *)pfVar7 =
               CONCAT44((float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20) + pfVar2[1] * fVar19,
                        (float)*(undefined8 *)pfVar7 + *pfVar2 * fVar21);
          pfVar9 = pfVar7 + 2;
          fVar15 = fVar15 * fVar21;
          fVar16 = fVar16 * fVar19;
          pfVar8 = pfVar2;
          do {
            fVar17 = pfVar8[4];
            fVar18 = pfVar8[5];
            fVar3 = pfVar8[6];
            fVar4 = pfVar8[7];
            iVar14 = iVar14 + 2;
            *pfVar9 = *pfVar9 + fVar15;
            pfVar9[1] = pfVar9[1] + fVar16;
            pfVar9[2] = pfVar9[2] + fVar17 * fVar21;
            pfVar9[3] = pfVar9[3] + fVar18 * fVar19;
            pfVar9 = pfVar9 + 4;
            iVar12 = iVar12 + -1;
            fVar15 = fVar3 * fVar21;
            fVar16 = fVar4 * fVar19;
            pfVar8 = pfVar8 + 4;
          } while (iVar12 != 0);
          *(ulonglong *)(pfVar7 + iVar14 * 2) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar7 + iVar14 * 2) >> 0x20) +
                        fVar4 * fVar19,(float)*(undefined8 *)(pfVar7 + iVar14 * 2) + fVar3 * fVar21)
          ;
        }
        pfVar7 = pfVar7 + 2;
        iVar13 = iVar13 + -1;
        fVar20 = fVar20 + 1.0;
      } while (iVar13 != 0);
    }
  }
  return;
}



void thunk_FUN_00e1b590(int param_1,float *param_2,int param_3,float *param_4,float *param_5,
                       uint param_6)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *pfStack_8;
  uint uStack_4;
  
  fVar1 = (float)((int *)param_5)[4];
  pfVar2 = (float *)*param_5;
  fVar21 = (float)((double)(int)param_6 + (double)(&DAT_011a2c10)[-((int)param_6 >> 0x1f)]);
  fVar20 = param_4[0x102];
  if (1e-05 < fVar20) {
    if (param_6 != 0) {
      pfStack_8 = (float *)(param_1 + (0x40 - (int)param_4[0x101]) * 4);
      pfVar10 = (float *)(param_1 + (0x40 - (int)param_4[0x100]) * 4);
      iVar13 = (int)param_4 - (int)param_2;
      uStack_4 = param_6;
      pfVar7 = param_2;
      fVar19 = fVar21;
      do {
        fVar15 = fVar19 * (fVar20 / fVar21);
        fVar16 = fVar15 * *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar15 = fVar15 * *pfStack_8;
        pfStack_8 = pfStack_8 + 1;
        if (((uint)pfVar7 & 0xf) == 0) {
          if (param_3 != 0) {
            iVar11 = (param_3 - 1U >> 1) + 1;
            pfVar8 = pfVar7;
            do {
              pfVar9 = (float *)((int)pfVar8 + iVar13);
              fVar17 = pfVar9[1];
              fVar18 = pfVar9[2];
              fVar3 = pfVar9[3];
              *pfVar8 = *pfVar8 + *pfVar9 * fVar16;
              pfVar8[1] = pfVar8[1] + fVar17 * fVar15;
              pfVar8[2] = pfVar8[2] + fVar18 * fVar16;
              pfVar8[3] = pfVar8[3] + fVar3 * fVar15;
              pfVar8 = pfVar8 + 4;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        else {
          fVar17 = param_4[2];
          fVar18 = param_4[3];
          pfVar8 = pfVar7 + 2;
          iVar12 = 1;
          iVar11 = (param_3 + 1U >> 1) - 1;
          *(ulonglong *)pfVar7 =
               CONCAT44((float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20) + param_4[1] * fVar15,
                        (float)*(undefined8 *)pfVar7 + *param_4 * fVar16);
          pfVar9 = param_4;
          fVar17 = fVar17 * fVar16;
          fVar18 = fVar18 * fVar15;
          do {
            fVar3 = pfVar9[4];
            fVar4 = pfVar9[5];
            fVar5 = pfVar9[6];
            fVar6 = pfVar9[7];
            iVar12 = iVar12 + 2;
            *pfVar8 = *pfVar8 + fVar17;
            pfVar8[1] = pfVar8[1] + fVar18;
            pfVar8[2] = pfVar8[2] + fVar3 * fVar16;
            pfVar8[3] = pfVar8[3] + fVar4 * fVar15;
            pfVar8 = pfVar8 + 4;
            iVar11 = iVar11 + -1;
            pfVar9 = pfVar9 + 4;
            fVar17 = fVar5 * fVar16;
            fVar18 = fVar6 * fVar15;
          } while (iVar11 != 0);
          *(ulonglong *)(pfVar7 + iVar12 * 2) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar7 + iVar12 * 2) >> 0x20) +
                        fVar6 * fVar15,(float)*(undefined8 *)(pfVar7 + iVar12 * 2) + fVar5 * fVar16)
          ;
        }
        pfVar7 = pfVar7 + 2;
        fVar19 = fVar19 - 1.0;
        iVar13 = iVar13 + -8;
        uStack_4 = uStack_4 - 1;
      } while (uStack_4 != 0);
    }
  }
  if (1e-05 < fVar21 * fVar1) {
    fVar20 = 1.0;
    if (1 < param_6) {
      pfVar7 = param_2 + 2;
      pfVar10 = (float *)(param_1 + (0x41 - ((int *)param_5)[2]) * 4);
      param_5 = (float *)(param_1 + (0x41 - ((int *)param_5)[1]) * 4);
      iVar11 = (int)pfVar2 - (int)param_2;
      iVar13 = param_6 - 1;
      do {
        iVar11 = iVar11 + -8;
        fVar21 = fVar20 * fVar1;
        fVar19 = fVar21 * *pfVar10;
        pfVar10 = pfVar10 + 1;
        fVar21 = fVar21 * *param_5;
        param_5 = param_5 + 1;
        if (((uint)pfVar7 & 0xf) == 0) {
          if (param_3 != 0) {
            iVar12 = (param_3 - 1U >> 1) + 1;
            pfVar8 = pfVar7;
            do {
              pfVar9 = (float *)(iVar11 + (int)pfVar8);
              fVar15 = pfVar9[1];
              fVar16 = pfVar9[2];
              fVar17 = pfVar9[3];
              *pfVar8 = *pfVar9 * fVar21 + *pfVar8;
              pfVar8[1] = fVar15 * fVar19 + pfVar8[1];
              pfVar8[2] = fVar16 * fVar21 + pfVar8[2];
              pfVar8[3] = fVar17 * fVar19 + pfVar8[3];
              pfVar8 = pfVar8 + 4;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        else {
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          iVar14 = 1;
          iVar12 = (param_3 + 1U >> 1) - 1;
          *(ulonglong *)pfVar7 =
               CONCAT44((float)((ulonglong)*(undefined8 *)pfVar7 >> 0x20) + pfVar2[1] * fVar19,
                        (float)*(undefined8 *)pfVar7 + *pfVar2 * fVar21);
          pfVar9 = pfVar7 + 2;
          fVar15 = fVar15 * fVar21;
          fVar16 = fVar16 * fVar19;
          pfVar8 = pfVar2;
          do {
            fVar17 = pfVar8[4];
            fVar18 = pfVar8[5];
            fVar3 = pfVar8[6];
            fVar4 = pfVar8[7];
            iVar14 = iVar14 + 2;
            *pfVar9 = *pfVar9 + fVar15;
            pfVar9[1] = pfVar9[1] + fVar16;
            pfVar9[2] = pfVar9[2] + fVar17 * fVar21;
            pfVar9[3] = pfVar9[3] + fVar18 * fVar19;
            pfVar9 = pfVar9 + 4;
            iVar12 = iVar12 + -1;
            fVar15 = fVar3 * fVar21;
            fVar16 = fVar4 * fVar19;
            pfVar8 = pfVar8 + 4;
          } while (iVar12 != 0);
          *(ulonglong *)(pfVar7 + iVar14 * 2) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar7 + iVar14 * 2) >> 0x20) +
                        fVar4 * fVar19,(float)*(undefined8 *)(pfVar7 + iVar14 * 2) + fVar3 * fVar21)
          ;
        }
        pfVar7 = pfVar7 + 2;
        iVar13 = iVar13 + -1;
        fVar20 = fVar20 + 1.0;
      } while (iVar13 != 0);
    }
  }
  return;
}



void thunk_FUN_00e1b440(int param_1,float *param_2,int param_3,int *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar18 = 0.0;
  pfVar4 = (float *)*param_4;
  fVar2 = (float)param_4[4];
  fVar3 = (float)param_4[3];
  if (param_5 != 0) {
    pfVar13 = (float *)(param_1 + (0x40 - param_4[2]) * 4);
    pfVar9 = (float *)(param_1 + (0x40 - param_4[1]) * 4);
    iVar12 = (int)pfVar4 - (int)param_2;
    do {
      fVar14 = fVar18 * fVar2 + fVar3;
      fVar15 = fVar14 * *pfVar13;
      pfVar13 = pfVar13 + 1;
      fVar14 = fVar14 * *pfVar9;
      pfVar9 = pfVar9 + 1;
      if (((uint)param_2 & 0xf) == 0) {
        if (param_3 != 0) {
          iVar11 = (param_3 - 1U >> 1) + 1;
          pfVar10 = param_2;
          do {
            pfVar1 = (float *)(iVar12 + (int)pfVar10);
            fVar16 = pfVar1[1];
            fVar17 = pfVar1[2];
            fVar5 = pfVar1[3];
            *pfVar10 = *pfVar1 * fVar14 + *pfVar10;
            pfVar10[1] = fVar16 * fVar15 + pfVar10[1];
            pfVar10[2] = fVar17 * fVar14 + pfVar10[2];
            pfVar10[3] = fVar5 * fVar15 + pfVar10[3];
            pfVar10 = pfVar10 + 4;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      else {
        fVar16 = pfVar4[2];
        fVar17 = pfVar4[3];
        pfVar10 = param_2 + 2;
        param_4 = (int *)0x1;
        iVar11 = (param_3 + 1U >> 1) - 1;
        *(ulonglong *)param_2 =
             CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + pfVar4[1] * fVar15,
                      (float)*(undefined8 *)param_2 + *pfVar4 * fVar14);
        fVar16 = fVar16 * fVar14;
        fVar17 = fVar17 * fVar15;
        pfVar1 = pfVar4;
        do {
          fVar5 = pfVar1[4];
          fVar6 = pfVar1[5];
          fVar7 = pfVar1[6];
          fVar8 = pfVar1[7];
          param_4 = (int *)((int)param_4 + 2);
          *pfVar10 = *pfVar10 + fVar16;
          pfVar10[1] = pfVar10[1] + fVar17;
          pfVar10[2] = pfVar10[2] + fVar5 * fVar14;
          pfVar10[3] = pfVar10[3] + fVar6 * fVar15;
          pfVar10 = pfVar10 + 4;
          iVar11 = iVar11 + -1;
          fVar16 = fVar7 * fVar14;
          fVar17 = fVar8 * fVar15;
          pfVar1 = pfVar1 + 4;
        } while (iVar11 != 0);
        *(ulonglong *)(param_2 + (int)param_4 * 2) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + (int)param_4 * 2) >> 0x20) +
                      fVar8 * fVar15,
                      (float)*(undefined8 *)(param_2 + (int)param_4 * 2) + fVar7 * fVar14);
      }
      param_2 = param_2 + 2;
      fVar18 = fVar18 + 1.0;
      iVar12 = iVar12 + -8;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



void FUN_00e1b8d0(int param_1,int param_2,float *param_3,float *param_4,float param_5,uint param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uStack_4;
  
  fVar17 = param_5;
  fVar12 = 0.0;
  if (param_6 == 0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = 1.0 / (float)((double)(int)param_6 + (double)(&DAT_011a2c10)[-((int)param_6 >> 0x1f)]);
  }
  uVar8 = param_2 - param_1 >> 2;
  uVar10 = param_6;
  if (uVar8 < param_6) {
    uVar10 = uVar8;
  }
  fVar2 = *param_4;
  uVar9 = uVar10 + 3 & 0xfffffffc;
  fVar11 = (param_5 - fVar2) * fVar11;
  if (uVar8 < uVar9) {
    uVar9 = uVar8;
  }
  uVar7 = 0;
  if (1.1920929e-07 < ABS(fVar11)) {
    param_5 = (float)(uVar10 >> 2);
    if (param_5 != 0.0) {
      pfVar6 = param_3;
      fVar13 = 0.0;
      fVar14 = 1.0;
      fVar15 = 2.0;
      fVar16 = 3.0;
      do {
        uVar7 = uVar7 + 4;
        fVar12 = fVar13 + 4.0;
        pfVar1 = (float *)((param_1 - (int)param_3) + (int)pfVar6);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        *pfVar6 = (fVar13 * fVar11 + fVar2) * *pfVar1 + *pfVar6;
        pfVar6[1] = (fVar14 * fVar11 + fVar2) * fVar3 + pfVar6[1];
        pfVar6[2] = (fVar15 * fVar11 + fVar2) * fVar4 + pfVar6[2];
        pfVar6[3] = (fVar16 * fVar11 + fVar2) * fVar5 + pfVar6[3];
        pfVar6 = pfVar6 + 4;
        param_5 = (float)((int)param_5 - 1);
        fVar13 = fVar12;
        fVar14 = fVar14 + 4.0;
        fVar15 = fVar15 + 4.0;
        fVar16 = fVar16 + 4.0;
      } while (param_5 != 0.0);
    }
    uStack_4 = uVar10 & 3;
    if (uStack_4 != 0) {
      pfVar6 = param_3 + uVar7;
      uVar7 = uVar7 + uStack_4;
      fVar13 = fVar12;
      do {
        fVar12 = fVar13 + 1.0;
        *pfVar6 = (fVar13 * fVar11 + fVar2) * *(float *)((int)pfVar6 + (param_1 - (int)param_3)) +
                  *pfVar6;
        pfVar6 = pfVar6 + 1;
        uStack_4 = uStack_4 - 1;
        fVar13 = fVar12;
      } while (uStack_4 != 0);
    }
    if (uVar7 != param_6) {
      fVar17 = fVar12 * fVar11 + fVar2;
    }
    uVar10 = uVar9 - uVar10 & 3;
    if (uVar10 != 0) {
      pfVar6 = param_3 + uVar7;
      uVar7 = uVar7 + uVar10;
      do {
        *pfVar6 = fVar17 * *(float *)((int)pfVar6 + (param_1 - (int)param_3)) + *pfVar6;
        pfVar6 = pfVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  *param_4 = fVar17;
  if (1e-05 < ABS(fVar17)) {
    uVar10 = uVar8 - uVar7 >> 2;
    if (uVar10 != 0) {
      pfVar6 = param_3 + uVar7;
      do {
        pfVar1 = (float *)((int)pfVar6 + (param_1 - (int)param_3));
        fVar12 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar2 = pfVar1[3];
        uVar7 = uVar7 + 4;
        *pfVar6 = *pfVar1 * fVar17 + *pfVar6;
        pfVar6[1] = fVar12 * fVar17 + pfVar6[1];
        pfVar6[2] = fVar11 * fVar17 + pfVar6[2];
        pfVar6[3] = fVar2 * fVar17 + pfVar6[3];
        pfVar6 = pfVar6 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uVar10 = uVar8 - uVar7 & 3;
    if (uVar10 != 0) {
      pfVar6 = param_3 + uVar7;
      do {
        *pfVar6 = fVar17 * *(float *)((int)pfVar6 + (param_1 - (int)param_3)) + *pfVar6;
        pfVar6 = pfVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return;
}



void FUN_00e1bb20(int param_1,int param_2,int param_3,int param_4,float *param_5,int param_6,
                 uint param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iStack_10;
  
  if (param_7 == 0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = 1.0 / (float)((double)(int)param_7 + (double)(&DAT_011a2c10)[-((int)param_7 >> 0x1f)]);
  }
  uVar6 = param_2 - param_1 >> 2;
  uVar11 = param_7;
  if (uVar6 < param_7) {
    uVar11 = uVar6;
  }
  uVar10 = uVar11 + 3 & 0xfffffffc;
  if (uVar6 < uVar10) {
    uVar10 = uVar6;
  }
  iStack_10 = param_3;
  if (param_3 != param_4) {
    pfVar7 = (float *)(param_3 + param_8 * 4);
    param_6 = param_6 - (int)param_5;
    do {
      fVar19 = *(float *)(param_6 + (int)param_5);
      fVar2 = *param_5;
      uVar6 = 0;
      fVar20 = (fVar19 - fVar2) * fVar13;
      if (1.1920929e-07 < ABS(fVar20)) {
        fVar14 = 0.0;
        uVar8 = uVar11 >> 2;
        if (uVar8 != 0) {
          pfVar9 = pfVar7;
          fVar15 = 0.0;
          fVar16 = 1.0;
          fVar17 = 2.0;
          fVar18 = 3.0;
          do {
            fVar14 = fVar15 + 4.0;
            pfVar1 = (float *)(param_1 + uVar6 * 4);
            fVar3 = pfVar1[1];
            fVar4 = pfVar1[2];
            fVar5 = pfVar1[3];
            uVar6 = uVar6 + 4;
            *pfVar9 = (fVar15 * fVar20 + fVar2) * *pfVar1 + *pfVar9;
            pfVar9[1] = (fVar16 * fVar20 + fVar2) * fVar3 + pfVar9[1];
            pfVar9[2] = (fVar17 * fVar20 + fVar2) * fVar4 + pfVar9[2];
            pfVar9[3] = (fVar18 * fVar20 + fVar2) * fVar5 + pfVar9[3];
            pfVar9 = pfVar9 + 4;
            uVar8 = uVar8 - 1;
            fVar15 = fVar14;
            fVar16 = fVar16 + 4.0;
            fVar17 = fVar17 + 4.0;
            fVar18 = fVar18 + 4.0;
          } while (uVar8 != 0);
        }
        uVar8 = uVar11 & 3;
        if (uVar8 != 0) {
          pfVar9 = pfVar7 + uVar6;
          uVar6 = uVar6 + uVar8;
          fVar15 = fVar14;
          do {
            fVar14 = fVar15 + 1.0;
            *pfVar9 = (fVar15 * fVar20 + fVar2) * *(float *)((param_1 - (int)pfVar7) + (int)pfVar9)
                      + *pfVar9;
            pfVar9 = pfVar9 + 1;
            uVar8 = uVar8 - 1;
            fVar15 = fVar14;
          } while (uVar8 != 0);
        }
        if (uVar6 != param_7) {
          fVar19 = fVar14 * fVar20 + fVar2;
        }
        uVar8 = uVar10 - uVar11 & 3;
        if (uVar8 != 0) {
          pfVar9 = pfVar7 + uVar6;
          uVar6 = uVar6 + uVar8;
          do {
            *pfVar9 = fVar19 * *(float *)((int)pfVar9 + (param_1 - (int)pfVar7)) + *pfVar9;
            pfVar9 = pfVar9 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      *param_5 = fVar19;
      if (1e-05 < ABS(fVar19)) {
        iVar12 = param_2 - param_1 >> 2;
        uVar8 = iVar12 - uVar6 >> 2;
        if (uVar8 != 0) {
          pfVar9 = pfVar7 + uVar6;
          do {
            pfVar1 = (float *)((int)pfVar9 + (param_1 - (int)pfVar7));
            fVar2 = pfVar1[1];
            fVar20 = pfVar1[2];
            fVar14 = pfVar1[3];
            uVar6 = uVar6 + 4;
            *pfVar9 = *pfVar1 * fVar19 + *pfVar9;
            pfVar9[1] = fVar2 * fVar19 + pfVar9[1];
            pfVar9[2] = fVar20 * fVar19 + pfVar9[2];
            pfVar9[3] = fVar14 * fVar19 + pfVar9[3];
            pfVar9 = pfVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar8 = iVar12 - uVar6 & 3;
        if (uVar8 != 0) {
          pfVar9 = pfVar7 + uVar6;
          do {
            *pfVar9 = fVar19 * *(float *)((int)pfVar9 + (param_1 - (int)pfVar7)) + *pfVar9;
            pfVar9 = pfVar9 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      pfVar7 = pfVar7 + 0x400;
      iStack_10 = iStack_10 + 0x1000;
      param_5 = param_5 + 1;
    } while (iStack_10 != param_4);
  }
  return;
}



void FUN_00e1bdc0(float *param_1,int param_2,uint param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfStack_8;
  
  fVar5 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[3];
  pfStack_8 = param_5;
  param_2 = param_2 + (int)param_1[2] * -4;
  if (param_5 != param_6) {
    do {
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar21 = 0.0;
      iVar17 = (int)fVar8 + (param_3 >> 0xb) * (int)fVar7 * 8;
      pfVar13 = (float *)(iVar17 + (int)fVar7 * 4);
      fVar22 = ((float)(param_3 & 0x7ff) + 0.0) * 0.00048828125;
      iVar14 = (int)fVar7 * 0x100 + iVar17;
      iVar17 = iVar17 - (int)pfVar13;
      iVar6 = iVar14 - (int)pfVar13;
      iVar14 = (iVar14 + (int)fVar7 * 4) - (int)pfVar13;
      iVar16 = param_2 - (int)pfVar13;
      uVar15 = (uint)fVar7 >> 2;
      do {
        pfVar1 = (float *)(iVar6 + (int)pfVar13);
        pfVar2 = (float *)(iVar14 + (int)pfVar13);
        pfVar3 = (float *)(iVar17 + (int)pfVar13);
        pfVar4 = (float *)(iVar16 + (int)pfVar13);
        fVar9 = *pfVar13;
        pfVar10 = pfVar13 + 1;
        pfVar11 = pfVar13 + 2;
        pfVar12 = pfVar13 + 3;
        pfVar13 = pfVar13 + 4;
        fVar18 = fVar18 + ((*pfVar2 * fVar5 + fVar9) * fVar22 + *pfVar1 * fVar5 + *pfVar3) * *pfVar4
        ;
        fVar19 = fVar19 + ((pfVar2[1] * fVar5 + *pfVar10) * fVar22 + pfVar1[1] * fVar5 + pfVar3[1])
                          * pfVar4[1];
        fVar20 = fVar20 + ((pfVar2[2] * fVar5 + *pfVar11) * fVar22 + pfVar1[2] * fVar5 + pfVar3[2])
                          * pfVar4[2];
        fVar21 = fVar21 + ((pfVar2[3] * fVar5 + *pfVar12) * fVar22 + pfVar1[3] * fVar5 + pfVar3[3])
                          * pfVar4[3];
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      uVar15 = param_3 + param_4;
      param_3 = uVar15 & 0xffff;
      param_2 = param_2 + (uVar15 >> 0x10) * 4;
      *pfStack_8 = fVar19 + fVar20 + fVar21 + fVar18;
      pfStack_8 = pfStack_8 + 1;
    } while (pfStack_8 != param_6);
  }
  return;
}



void FUN_00e1bf30(int *param_1,int param_2,uint param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  
  iVar3 = *param_1;
  pfVar10 = (float *)(param_2 + -4);
  if (param_5 != param_6) {
    do {
      iVar8 = (param_3 >> 0xb) * 0x20;
      uVar9 = param_3 + param_4;
      fVar4 = *pfVar10;
      pfVar5 = pfVar10 + 1;
      pfVar6 = pfVar10 + 2;
      pfVar7 = pfVar10 + 3;
      fVar11 = ((float)(param_3 & 0x7ff) + 0.0) * 0.00048828125;
      pfVar2 = (float *)(iVar8 + 0x10 + iVar3);
      pfVar1 = (float *)(iVar8 + iVar3);
      param_3 = uVar9 & 0xffff;
      pfVar10 = pfVar10 + (uVar9 >> 0x10);
      *param_5 = (fVar11 * pfVar2[1] + pfVar1[1]) * *pfVar5 +
                 (fVar11 * pfVar2[2] + pfVar1[2]) * *pfVar6 +
                 (fVar11 * pfVar2[3] + pfVar1[3]) * *pfVar7 + (fVar11 * *pfVar2 + *pfVar1) * fVar4;
      param_5 = param_5 + 1;
    } while (param_5 != param_6);
  }
  return;
}



void FUN_00e1bfe0(int param_1,float *param_2,uint param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 4);
  param_1 = (int)param_2 + *(int *)(param_1 + 8) * -4;
  param_2 = param_5;
  if (param_5 != param_6) {
    do {
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar15 = 0.0;
      pfVar9 = (float *)(iVar3 + (param_3 >> 0xb) * uVar4 * 8);
      fVar16 = ((float)(param_3 & 0x7ff) + 0.0) * 0.00048828125;
      iVar11 = param_1 - (int)pfVar9;
      uVar10 = uVar4 >> 2;
      do {
        pfVar1 = pfVar9 + uVar4;
        pfVar2 = (float *)(iVar11 + (int)pfVar9);
        fVar5 = *pfVar9;
        pfVar6 = pfVar9 + 1;
        pfVar7 = pfVar9 + 2;
        pfVar8 = pfVar9 + 3;
        pfVar9 = pfVar9 + 4;
        fVar12 = fVar12 + (*pfVar1 * fVar16 + fVar5) * *pfVar2;
        fVar13 = fVar13 + (pfVar1[1] * fVar16 + *pfVar6) * pfVar2[1];
        fVar14 = fVar14 + (pfVar1[2] * fVar16 + *pfVar7) * pfVar2[2];
        fVar15 = fVar15 + (pfVar1[3] * fVar16 + *pfVar8) * pfVar2[3];
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      uVar10 = param_3 + param_4;
      param_3 = uVar10 & 0xffff;
      param_1 = param_1 + (uVar10 >> 0x10) * 4;
      *param_2 = fVar13 + fVar14 + fVar15 + fVar12;
      param_2 = param_2 + 1;
    } while (param_2 != param_6);
  }
  return;
}



void FUN_00e1c5a0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid null effect integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1c5e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  FUN_00e1c5a0(param_1,param_2,*param_3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1c600(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid null effect float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1c640(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  FUN_00e1c600(param_1,param_2,*param_3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1c660(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_00e1c5a0(param_1,param_2,param_3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1c680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_00e1c600(param_1,param_2,param_3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00e1c6a0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00e1c700(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *_Dst;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6ea1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1,uVar5);
  *param_1 = al::base_exception::vftable;
  puVar7 = (undefined4 *)(param_2 + 0xc);
  puVar6 = param_1 + 3;
  uStack_8 = 0;
  *puVar6 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (0xf < *(uint *)(param_2 + 0x20)) {
    puVar7 = (undefined4 *)*puVar7;
  }
  uVar5 = *(uint *)(param_2 + 0x1c);
  if (uVar5 < 0x80000000) {
    if (uVar5 < 0x10) {
      param_1[7] = uVar5;
      param_1[8] = 0xf;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar6 = *puVar7;
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      param_1[6] = uVar4;
    }
    else {
      uStack_14 = uVar5 | 0xf;
      if (uStack_14 < 0x80000000) {
        if (uStack_14 < 0x16) {
          uStack_14 = 0x16;
        }
      }
      else {
        uStack_14 = 0x7fffffff;
      }
      _Dst = (void *)func_0x0046cf00(puVar6,&uStack_14);
      param_1[8] = uStack_14;
      *puVar6 = _Dst;
      param_1[7] = uVar5;
      memcpy(_Dst,puVar7,uVar5 + 1);
    }
    *param_1 = effect_exception::vftable;
    param_1[9] = *(undefined4 *)(param_2 + 0x24);
    *unaff_FS_OFFSET = iStack_10;
    return param_1;
  }
  func_0x00463570();
  pcVar1 = (code *)swi(3);
  puVar7 = (undefined4 *)(*pcVar1)();
  return puVar7;
}



void FUN_00e1c8d0(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  short sVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_34;
  uStack_34 = *param_3;
  uStack_30 = uStack_34;
  if (param_2 == 0xb) {
    sVar2 = func_0x00e87c3c(uStack_34);
    if (sVar2 < 1) {
      sVar2 = func_0x00e87c3c(param_3[1]);
      if (sVar2 < 1) {
        sVar2 = func_0x00e87c3c(param_3[2]);
        if (sVar2 < 1) {
          *(undefined4 *)(param_1 + 0x28) = uStack_30;
          *(undefined4 *)(param_1 + 0x2c) = param_3[1];
          *(undefined4 *)(param_1 + 0x30) = param_3[2];
          FUN_008ab370();
          return;
        }
      }
    }
    func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb reflections pan out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  else {
    if (param_2 != 0xe) {
      FUN_00e1d960(param_1,param_2,uStack_34);
      FUN_008ab370();
      return;
    }
    sVar2 = func_0x00e87c3c(uStack_34);
    if (sVar2 < 1) {
      sVar2 = func_0x00e87c3c(param_3[1]);
      if (sVar2 < 1) {
        sVar2 = func_0x00e87c3c(param_3[2]);
        if (sVar2 < 1) {
          *(undefined4 *)(param_1 + 0x3c) = uStack_30;
          *(undefined4 *)(param_1 + 0x40) = param_3[1];
          *(undefined4 *)(param_1 + 0x44) = param_3[2];
          FUN_008ab370();
          return;
        }
      }
    }
  }
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb late reverb pan out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1ca50(int param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 0x17) {
    *param_3 = (uint)*(byte *)(param_1 + 0x68);
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid EAX reverb integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00e1cab0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  case 2:
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  case 3:
    *param_3 = param_1[2];
    FUN_008ab370();
    return;
  case 4:
    *param_3 = param_1[3];
    FUN_008ab370();
    return;
  case 5:
    *param_3 = param_1[4];
    FUN_008ab370();
    return;
  case 6:
    *param_3 = param_1[5];
    FUN_008ab370();
    return;
  case 7:
    *param_3 = param_1[6];
    FUN_008ab370();
    return;
  case 8:
    *param_3 = param_1[7];
    FUN_008ab370();
    return;
  case 9:
    *param_3 = param_1[8];
    FUN_008ab370();
    return;
  case 10:
    *param_3 = param_1[9];
    FUN_008ab370();
    return;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid EAX reverb float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0xc:
    *param_3 = param_1[0xd];
    FUN_008ab370();
    return;
  case 0xd:
    *param_3 = param_1[0xe];
    FUN_008ab370();
    return;
  case 0xf:
    *param_3 = param_1[0x12];
    FUN_008ab370();
    return;
  case 0x10:
    *param_3 = param_1[0x13];
    FUN_008ab370();
    return;
  case 0x11:
    *param_3 = param_1[0x14];
    FUN_008ab370();
    return;
  case 0x12:
    *param_3 = param_1[0x15];
    FUN_008ab370();
    return;
  case 0x13:
    *param_3 = param_1[0x16];
    FUN_008ab370();
    return;
  case 0x14:
    *param_3 = param_1[0x17];
    FUN_008ab370();
    return;
  case 0x15:
    *param_3 = param_1[0x18];
    FUN_008ab370();
    return;
  case 0x16:
    *param_3 = param_1[0x19];
    FUN_008ab370();
    return;
  }
}



// WARNING: Instruction at (ram,0x00e1cf99) overlaps instruction at (ram,0x00e1cf98)
// 

undefined8 FUN_00e1cd40(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  char extraout_CL;
  char extraout_CL_00;
  byte extraout_CH;
  char extraout_CH_00;
  byte bVar4;
  int extraout_EDX;
  char *pcVar3;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 0xb) {
    *param_3 = param_1[10];
    param_3[1] = param_1[0xb];
    param_3[2] = param_1[0xc];
    uVar7 = FUN_008ab370();
  }
  else {
    if (param_2 == 0xe) {
      *param_3 = param_1[0xf];
      param_3[1] = param_1[0x10];
      param_3[2] = param_1[0x11];
      uVar7 = FUN_008ab370();
      return uVar7;
    }
    switch(param_2) {
    case 1:
      *param_3 = *param_1;
      uVar7 = FUN_008ab370();
      return uVar7;
    case 2:
      *param_3 = param_1[1];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 3:
      *param_3 = param_1[2];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 4:
      *param_3 = param_1[3];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 5:
      *param_3 = param_1[4];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 6:
      *param_3 = param_1[5];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 7:
      *param_3 = param_1[6];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 8:
      *param_3 = param_1[7];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 9:
      *param_3 = param_1[8];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 10:
      *param_3 = param_1[9];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0xc:
      *param_3 = param_1[0xd];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0xd:
      *param_3 = param_1[0xe];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0xf:
      *param_3 = param_1[0x12];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0x10:
      *param_3 = param_1[0x13];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0x11:
      *param_3 = param_1[0x14];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0x12:
      *param_3 = param_1[0x15];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0x13:
      *param_3 = param_1[0x16];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0x14:
      *param_3 = param_1[0x17];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0x15:
      *param_3 = param_1[0x18];
      uVar7 = FUN_008ab370();
      return uVar7;
    case 0x16:
      *param_3 = param_1[0x19];
      uVar7 = FUN_008ab370();
      return uVar7;
    }
    func_0x00de54d0(auStack_2c,0xa002,"Invalid EAX reverb float property 0x%04x",param_2);
    bVar5 = (POPCOUNT((uint)auStack_2c & 0xff) & 1U) == 0;
    uVar7 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    if (bVar5) {
      pcVar1 = (code *)swi(0xe1);
      (*pcVar1)();
      *(char *)(extraout_EDX + -0x3dff1e33) = *(char *)(extraout_EDX + -0x3dff1e33) + extraout_CH_00
      ;
      pcVar1 = (code *)swi(0xe1);
      (*pcVar1)();
      pcVar1 = (code *)swi(0xe1);
      (*pcVar1)();
      pcVar1 = (code *)swi(0xe1);
      uVar8 = (*pcVar1)();
      pcVar3 = (char *)(uVar8 >> 0x20);
      cVar6 = *pcVar3;
      *pcVar3 = *pcVar3 + extraout_CL;
      pcVar1 = (code *)swi(4);
      cVar2 = extraout_CL;
      if (SCARRY1(cVar6,extraout_CL)) {
        uVar8 = (*pcVar1)();
        cVar2 = extraout_CL_00;
      }
      uStack_28 = (undefined4)(uVar8 >> 0x20);
      bVar4 = (byte)(uVar8 >> 0x28);
      cVar6 = SBORROW1((cVar2 - 1U & bVar4) - 1,bVar4);
      pcVar1 = (code *)swi(4);
      if ((bool)cVar6) {
        uVar8 = (*pcVar1)();
      }
      DAT_6a00e1cf = (undefined1)uVar8;
      pcVar1 = (code *)swi(4);
      if (cVar6 == '\x01') {
        uVar8 = (*pcVar1)();
      }
      uVar9 = uVar8 | 0xe10000000000;
      pcVar3 = (char *)(((uint)(uVar8 >> 0x20) | 0xe100) + 0x9a00e1cf);
      cVar6 = *pcVar3;
      cVar2 = (char)(uVar8 >> 8);
      *pcVar3 = *pcVar3 + cVar2;
      pcVar1 = (code *)swi(4);
      if (SCARRY1(cVar6,cVar2)) {
        uVar9 = (*pcVar1)();
      }
      return CONCAT44(CONCAT31((int3)(uVar9 >> 0x28),0xce),(int)uVar9);
    }
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + 1,
                     CONCAT31((int3)((ulonglong)uVar7 >> 8),(byte)uVar7 | extraout_CH));
  }
  return uVar7;
}



void FUN_00e1d020(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 0xd) {
    if (param_3 < 2) {
      *(bool *)(param_1 + 0x68) = param_3 != 0;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Reverb decay hflimit out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid reverb integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1d0b0(int param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 0xd) {
    if (*param_3 < 2) {
      *(bool *)(param_1 + 0x68) = *param_3 != 0;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Reverb decay hflimit out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid reverb integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1d140(float *param_1,undefined4 param_2,float param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[1] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d453;
  case 3:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[2] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d478;
  case 4:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[3] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d49d;
  case 5:
    if ((0.1 <= param_3) && (param_3 <= 20.0)) {
      param_1[5] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d4c2;
  case 6:
    if ((0.1 <= param_3) && (param_3 <= 2.0)) {
      param_1[6] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d4e7;
  case 7:
    if ((0.0 <= param_3) && (param_3 <= 3.16)) {
      param_1[8] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d50c;
  case 8:
    if ((0.0 <= param_3) && (param_3 <= 0.3)) {
      param_1[9] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d531;
  case 9:
    if ((0.0 <= param_3) && (param_3 <= 10.0)) {
      param_1[0xd] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d556;
  case 10:
    if ((0.0 <= param_3) && (param_3 <= 0.1)) {
      param_1[0xe] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d57b;
  case 0xb:
    if ((0.892 <= param_3) && (param_3 <= 1.0)) {
      param_1[0x16] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d5a0;
  case 0xc:
    if ((0.0 <= param_3) && (param_3 <= 10.0)) {
      param_1[0x19] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1d5c5;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid reverb float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  func_0x00de54d0(auStack_2c,0xa003,"Reverb density out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d453:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb diffusion out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d478:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb gain out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d49d:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb gainhf out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d4c2:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb decay time out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d4e7:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb decay hfratio out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d50c:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb reflections gain out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d531:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb reflections delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d556:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb late reverb gain out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d57b:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb late reverb delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d5a0:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb air absorption gainhf out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1d5c5:
  func_0x00de54d0(auStack_2c,0xa003,"Reverb room rolloff factor out of range");
  iVar2 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  iVar3 = iVar2 + -1;
  *(char *)(iVar2 + -0x47ff1e2f) = *(char *)(iVar2 + -0x47ff1e2f) + (char)iVar3;
  pcVar4 = (char *)CONCAT31((int3)((uint)iVar3 >> 8),
                            (char)iVar3 +
                            (char)((ulonglong)((longlong)extraout_ECX * -0x2e5fff1f) >> 8));
  *pcVar4 = *pcVar4 + (char)((uint)(extraout_ECX + -3) >> 8);
  pcVar4[-0x2d] = pcVar4[-0x2d] + (char)((uint)iVar3 >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1d620(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00e1d140(param_1,param_2,*param_3);
  return;
}



void FUN_00e1d640(int param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 0xd) {
    *param_3 = (uint)*(byte *)(param_1 + 0x68);
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid reverb integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Instruction at (ram,0x00e1d805) overlaps instruction at (ram,0x00e1d803)
// 
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_00e1d6a0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  char *pcVar2;
  code *pcVar3;
  int extraout_ECX;
  int iVar4;
  int extraout_ECX_00;
  int unaff_EBX;
  int *piVar5;
  undefined1 *puVar6;
  int *unaff_EBP;
  int *piVar7;
  int unaff_EDI;
  undefined2 in_CS;
  int unaff_FS_OFFSET;
  char cVar8;
  undefined8 uVar9;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  case 2:
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  case 3:
    *param_3 = param_1[2];
    FUN_008ab370();
    return;
  case 4:
    *param_3 = param_1[3];
    FUN_008ab370();
    return;
  case 5:
    *param_3 = param_1[5];
    FUN_008ab370();
    return;
  case 6:
    *param_3 = param_1[6];
    FUN_008ab370();
    return;
  case 7:
    *param_3 = param_1[8];
    FUN_008ab370();
    return;
  case 8:
    *param_3 = param_1[9];
    FUN_008ab370();
    return;
  case 9:
    *param_3 = param_1[0xd];
    FUN_008ab370();
    return;
  case 10:
    *param_3 = param_1[0xe];
    FUN_008ab370();
    return;
  case 0xb:
    *param_3 = param_1[0x16];
    FUN_008ab370();
    return;
  case 0xc:
    *param_3 = param_1[0x19];
    FUN_008ab370();
    return;
  }
  while( true ) {
    while( true ) {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid reverb float property 0x%04x",param_2);
      cVar8 = &stack0x00000000 == &DAT_0000002c;
      uVar9 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      param_2 = (undefined4)((ulonglong)uVar9 >> 0x20);
      piVar7 = (int *)*unaff_EBP;
      iVar4 = extraout_ECX + -2;
      if (iVar4 == 0 || cVar8 != '\0') break;
      *(undefined2 *)unaff_EBP = in_CS;
      piVar7[0x1a020911] = piVar7[0x1a020911] + iVar4;
      piVar1 = (int *)((int)unaff_EBP + unaff_EDI * 8 + -1);
      *piVar1 = *piVar1 >> ((byte)iVar4 & 0x1f);
      unaff_EBP = piVar7;
    }
    if (!SCARRY4((uint)uVar9 & 0xffffff00,1)) break;
    pcVar2 = (char *)(unaff_FS_OFFSET + extraout_ECX + -8);
    *pcVar2 = *pcVar2 - *(char *)(unaff_EBX + (unaff_EBP[1] & 0xffU));
    unaff_EBP = piVar7;
  }
  piVar5 = unaff_EBP + -9;
  unaff_EBP[1] = DAT_0128fd40 ^ (uint)(unaff_EBP + -9);
  iVar4 = unaff_EBP[4];
  if (iVar4 == 0x17) {
    if ((uint)unaff_EBP[5] < 2) {
      *(bool *)(unaff_EBP[3] + 0x68) = unaff_EBP[5] != 0;
      unaff_EBP[-10] = 0xe1d877;
      FUN_008ab370();
      return;
    }
    unaff_EBP[-10] = (int)"EAX Reverb decay hflimit out of range";
    unaff_EBP[-0xb] = 0xa003;
    unaff_EBP[-0xc] = (int)(unaff_EBP + -9);
    piVar5 = unaff_EBP + -0xd;
    unaff_EBP[-0xd] = 0xe1d88f;
    func_0x00de54d0();
    piVar5[2] = (int)&DAT_012864b8;
    piVar5[1] = (int)(piVar5 + 3);
    *piVar5 = 0xe1d8a0;
    func_0x00e87d2e();
    iVar4 = extraout_ECX_00;
  }
  *(int *)((int)piVar5 + -4) = iVar4;
  *(char **)((int)piVar5 + -8) = "Invalid EAX reverb integer property 0x%04x";
  *(undefined4 *)((int)piVar5 + -0xc) = 0xa002;
  *(int **)((int)piVar5 + -0x10) = piVar5;
  puVar6 = (undefined1 *)((int)piVar5 + -0x14);
  *(undefined4 *)((int)piVar5 + -0x14) = 0xe1d8b5;
  func_0x00de54d0();
  *(undefined **)(puVar6 + 0xc) = &DAT_012864b8;
  *(undefined1 **)(puVar6 + 8) = puVar6 + 0x10;
  *(undefined4 *)(puVar6 + 4) = 0xe1d8c6;
  func_0x00e87d2e();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void FUN_00e1d840(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 0x17) {
    if (param_3 < 2) {
      *(bool *)(param_1 + 0x68) = param_3 != 0;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb decay hflimit out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid EAX reverb integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e1d8d0(int param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 0x17) {
    if (*param_3 < 2) {
      *(bool *)(param_1 + 0x68) = *param_3 != 0;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb decay hflimit out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid EAX reverb integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00e1d960(float *param_1,undefined4 param_2,float param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char extraout_DH;
  undefined4 unaff_EBX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[1] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1de33;
  case 3:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[2] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1de58;
  case 4:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[3] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1de7d;
  case 5:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[4] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1dea2;
  case 6:
    if ((0.1 <= param_3) && (param_3 <= 20.0)) {
      param_1[5] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1dec7;
  case 7:
    if ((0.1 <= param_3) && (param_3 <= 2.0)) {
      param_1[6] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1deec;
  case 8:
    if ((0.1 <= param_3) && (param_3 <= 2.0)) {
      param_1[7] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1df11;
  case 9:
    if ((0.0 <= param_3) && (param_3 <= 3.16)) {
      param_1[8] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1df36;
  case 10:
    if ((0.0 <= param_3) && (param_3 <= 0.3)) {
      param_1[9] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1df5b;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid EAX reverb float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    break;
  case 0xc:
    if ((0.0 <= param_3) && (param_3 <= 10.0)) {
      param_1[0xd] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1df80;
  case 0xd:
    if ((0.0 <= param_3) && (param_3 <= 0.1)) {
      param_1[0xe] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1dfa5;
  case 0xf:
    if ((0.075 <= param_3) && (param_3 <= 0.25)) {
      param_1[0x12] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1dfca;
  case 0x10:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[0x13] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1dfef;
  case 0x11:
    if ((0.04 <= param_3) && (param_3 <= 4.0)) {
      param_1[0x14] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1e014;
  case 0x12:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[0x15] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1e039;
  case 0x13:
    if ((0.892 <= param_3) && (param_3 <= 1.0)) {
      param_1[0x16] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1e05e;
  case 0x14:
    if ((1000.0 <= param_3) && (param_3 <= 20000.0)) {
      param_1[0x17] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1e083;
  case 0x15:
    if ((20.0 <= param_3) && (param_3 <= 1000.0)) {
      param_1[0x18] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1e0a8;
  case 0x16:
    if ((0.0 <= param_3) && (param_3 <= 10.0)) {
      param_1[0x19] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e1e0cd;
  }
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb density out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1de33:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb diffusion out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1de58:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb gain out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1de7d:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb gainhf out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1dea2:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb gainlf out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1dec7:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb decay time out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1deec:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb decay hfratio out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1df11:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb decay lfratio out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1df36:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb reflections gain out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1df5b:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb reflections delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1df80:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb late reverb gain out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1dfa5:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb late reverb delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1dfca:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb echo time out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1dfef:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb echo depth out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1e014:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb modulation time out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1e039:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb modulation depth out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1e05e:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb air absorption gainhf out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1e083:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb hfreference out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1e0a8:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb lfreference out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e1e0cd:
  func_0x00de54d0(auStack_2c,0xa003,"EAX Reverb room rolloff factor out of range");
  uVar1 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar2 = (char *)CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar1 + (char)((uint)unaff_EBX >> 8));
  *pcVar2 = *pcVar2 + extraout_DH;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 * __thiscall FUN_00e1e7c0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = _anon_3772B324::EaxReverbEffectException::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00e1e820(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxReverbCommitter::Exception::vftable;
  return param_1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00e209b0(float *param_1,undefined4 param_2,float param_3)

{
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    if ((0.0001 <= param_3) && (param_3 <= 1.0)) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((0.0001 <= param_3) && (param_3 <= 1.0)) {
      param_1[1] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e20b03;
  case 3:
    if ((2.0 <= param_3) && (param_3 <= 1000.0)) {
      param_1[2] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e20b28;
  case 4:
    if ((3e-05 <= param_3) && (param_3 <= 31621.0)) {
      param_1[3] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e20b4d;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid autowah float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  func_0x00de54d0(auStack_2c,0xa003,"Autowah attack time out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e20b03:
  func_0x00de54d0(auStack_2c,0xa003,"Autowah release time out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e20b28:
  func_0x00de54d0(auStack_2c,0xa003,"Autowah resonance out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e20b4d:
  func_0x00de54d0(auStack_2c,0xa003,"Autowah peak gain out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_00e20b90(float *param_1,undefined4 param_2,float *param_3)

{
  char *pcVar1;
  float fVar2;
  code *pcVar3;
  char extraout_AH;
  int extraout_ECX;
  undefined4 extraout_EDX;
  uint *unaff_EBX;
  uint uVar4;
  undefined4 unaff_ESI;
  char *pcStack_34;
  char *pcStack_30;
  char acStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_2c;
  fVar2 = *param_3;
  switch(param_2) {
  case 1:
    if ((0.0001 <= fVar2) && (fVar2 <= 1.0)) {
      *param_1 = fVar2;
      pcStack_30 = &UNK_00e20bee;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((0.0001 <= fVar2) && (fVar2 <= 1.0)) {
      param_1[1] = fVar2;
      pcStack_30 = &UNK_00e20c20;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e20cd3;
  case 3:
    if ((2.0 <= fVar2) && (fVar2 <= 1000.0)) {
      param_1[2] = fVar2;
      pcStack_30 = &UNK_00e20c52;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e20cf8;
  case 4:
    if ((3e-05 <= fVar2) && (fVar2 <= 31621.0)) {
      param_1[3] = fVar2;
      pcStack_30 = &UNK_00e20c84;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e20d1d;
  default:
    pcStack_30 = (char *)param_2;
    pcStack_34 = "Invalid autowah float property 0x%04x";
    func_0x00de54d0(acStack_2c,0xa002);
    pcStack_34 = acStack_2c;
    pcStack_30 = "";
    func_0x00e87d2e();
  }
  pcStack_30 = "Autowah attack time out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0(acStack_2c);
  pcStack_34 = acStack_2c;
  pcStack_30 = "";
  func_0x00e87d2e();
code_r0x00e20cd3:
  pcStack_30 = "Autowah release time out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0(acStack_2c);
  pcStack_34 = acStack_2c;
  pcStack_30 = "";
  func_0x00e87d2e();
code_r0x00e20cf8:
  pcStack_30 = "Autowah resonance out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0(acStack_2c);
  pcStack_34 = acStack_2c;
  pcStack_30 = "";
  func_0x00e87d2e();
code_r0x00e20d1d:
  pcStack_30 = "Autowah peak gain out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0(acStack_2c);
  pcStack_34 = acStack_2c;
  pcStack_30 = "";
  func_0x00e87d2e();
  *unaff_EBX = *unaff_EBX >> 2 | *unaff_EBX << 0x1e;
  uVar4 = (uint)&pcStack_34 |
          CONCAT31((int3)((uint)extraout_EDX >> 8),
                   (char)extraout_EDX + (char)((uint)extraout_EDX >> 8));
  pcVar1 = (char *)(uVar4 + extraout_ECX);
  *pcVar1 = *pcVar1 + extraout_AH;
  *(undefined4 *)(uVar4 - 4) = unaff_ESI;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void FUN_00e20d60(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid autowah integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e20da0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid autowah integer vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e20de0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  case 2:
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  case 3:
    *param_3 = param_1[2];
    FUN_008ab370();
    return;
  case 4:
    *param_3 = param_1[3];
    FUN_008ab370();
    return;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid autowah float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



undefined4 * __thiscall FUN_00e21270(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e216a0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if (param_3 == 0) {
      *param_1 = 0;
      FUN_008ab370();
      return;
    }
    if (param_3 == 1) {
      *param_1 = 1;
      FUN_008ab370();
      return;
    }
  }
  else {
    if (param_2 == 2) {
      if (param_3 + 0xb4U < 0x169) {
        param_1[1] = param_3;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid chorus integer property 0x%04x",param_2);
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      param_3 = extraout_ECX;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Chorus phase out of range: %d",param_3);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_3 = extraout_ECX_00;
  }
  func_0x00de54d0(auStack_2c,0xa003,"Invalid chorus waveform: 0x%04x",param_3);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e217a0(undefined4 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  iVar2 = *param_3;
  if (param_2 == 1) {
    if (iVar2 == 0) {
      *param_1 = 0;
      FUN_008ab370();
      return;
    }
    if (iVar2 == 1) {
      *param_1 = 1;
      FUN_008ab370();
      return;
    }
  }
  else {
    if (param_2 == 2) {
      if (iVar2 + 0xb4U < 0x169) {
        param_1[1] = iVar2;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid chorus integer property 0x%04x",param_2);
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      iVar2 = extraout_ECX;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Chorus phase out of range: %d",iVar2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    iVar2 = extraout_ECX_00;
  }
  func_0x00de54d0(auStack_2c,0xa003,"Invalid chorus waveform: 0x%04x",iVar2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_00e21890(int param_1,undefined4 param_2,float param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char extraout_AH;
  byte bVar10;
  undefined4 uVar9;
  char *extraout_ECX;
  byte bVar12;
  uint *puVar11;
  undefined4 unaff_EBX;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 unaff_ESI;
  undefined1 uVar15;
  bool bVar16;
  float in_XMM1_Da;
  float fVar17;
  undefined8 uVar18;
  undefined4 uStack_80;
  undefined1 auStack_7c [4];
  undefined4 uStack_78;
  undefined1 *puStack_74;
  int iStack_70;
  char *pcStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_60 [28];
  undefined4 uStack_44;
  char *apcStack_40 [2];
  int iStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  float *pfStack_28;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_2c;
  switch(param_2) {
  case 3:
    if ((0.0 <= param_3) && (param_3 <= 10.0)) {
      *(float *)(param_1 + 8) = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e218ed,(undefined4 *)uStack_34);
      FUN_008ab370();
      return;
    }
    break;
  case 4:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 0xc) = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e21925,(undefined4 *)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e219ef;
  case 5:
    if ((-1.0 <= param_3) && (param_3 <= 1.0)) {
      *(float *)(param_1 + 0x10) = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e2195d,(undefined4 *)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21a1f;
  case 6:
    if ((0.0 <= param_3) && (param_3 <= 0.016)) {
      *(float *)(param_1 + 0x14) = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e21995,(undefined4 *)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21a4f;
  default:
    uStack_34 = (double)CONCAT44(param_2,"Invalid chorus float property 0x%04x");
    apcStack_40[1] = (char *)&uStack_2c;
    iStack_38 = 0xa002;
    apcStack_40[0] = (char *)0xe219ae;
    func_0x00de54d0();
    uStack_34 = (double)CONCAT44(&DAT_012864b8,&uStack_2c);
    iStack_38 = 0xe219bf;
    func_0x00e87d2e();
    param_3 = in_XMM1_Da;
  }
  apcStack_40[0] = (char *)&uStack_2c;
  uStack_34 = (double)param_3;
  iStack_38 = 0x10e5728;
  apcStack_40[1] = (char *)0xa003;
  uStack_44 = 0xe219de;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,&uStack_2c);
  iStack_38 = 0xe219ef;
  func_0x00e87d2e();
code_r0x00e219ef:
  apcStack_40[0] = (char *)&uStack_2c;
  uStack_34 = (double)param_3;
  iStack_38 = 0x10e5748;
  apcStack_40[1] = (char *)0xa003;
  uStack_44 = 0xe21a0e;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,&uStack_2c);
  iStack_38 = 0xe21a1f;
  func_0x00e87d2e();
code_r0x00e21a1f:
  apcStack_40[0] = (char *)&uStack_2c;
  uStack_34 = (double)param_3;
  iStack_38 = 0x10e5768;
  apcStack_40[1] = (char *)0xa003;
  uStack_44 = 0xe21a3e;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,&uStack_2c);
  iStack_38 = 0xe21a4f;
  func_0x00e87d2e();
code_r0x00e21a4f:
  apcStack_40[0] = (char *)&uStack_2c;
  uStack_34 = (double)param_3;
  iStack_38 = 0x10e578c;
  apcStack_40[1] = (char *)0xa003;
  uStack_44 = 0xe21a6e;
  func_0x00de54d0();
  uStack_34._0_4_ = &uStack_2c;
  uStack_34._4_4_ = &DAT_012864b8;
  iStack_38 = 0xe21a7f;
  func_0x00e87d2e();
  DAT_f100e218 = DAT_f100e218 + -0x1e;
  DAT_f100e231 = DAT_f100e231 + extraout_AH;
  iStack_38 = DAT_0128fd40 ^ (uint)auStack_60;
  fVar17 = *pfStack_28;
  switch(uStack_2c) {
  case 3:
    if ((0.0 <= fVar17) && (fVar17 <= 10.0)) {
      *(float *)(uStack_34._4_4_ + 8) = fVar17;
      uStack_68 = (double)CONCAT44(&UNK_00e21aef,(undefined4)uStack_68);
      FUN_008ab370();
      return;
    }
    break;
  case 4:
    if ((0.0 <= fVar17) && (fVar17 <= 1.0)) {
      *(float *)(uStack_34._4_4_ + 0xc) = fVar17;
      uStack_68 = (double)CONCAT44(&UNK_00e21b21,(undefined4)uStack_68);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21bdf;
  case 5:
    if ((-1.0 <= fVar17) && (fVar17 <= 1.0)) {
      *(float *)(uStack_34._4_4_ + 0x10) = fVar17;
      uStack_68 = (double)CONCAT44(&UNK_00e21b53,(undefined4)uStack_68);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21c0f;
  case 6:
    if ((0.0 <= fVar17) && (fVar17 <= 0.016)) {
      *(float *)(uStack_34._4_4_ + 0x14) = fVar17;
      uStack_68 = (double)CONCAT44(&UNK_00e21b85,(undefined4)uStack_68);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21c3f;
  default:
    uStack_68 = (double)CONCAT44(uStack_2c,"Invalid chorus float property 0x%04x");
    iStack_70 = (int)auStack_60;
    pcStack_6c = (char *)0xa002;
    puStack_74 = (undefined1 *)0xe21b9e;
    func_0x00de54d0();
    uStack_68 = (double)CONCAT44(&DAT_012864b8,auStack_60);
    pcStack_6c = (char *)0xe21baf;
    func_0x00e87d2e();
  }
  puStack_74 = auStack_60;
  uStack_68 = (double)fVar17;
  pcStack_6c = "Chorus rate out of range: %f";
  iStack_70 = 0xa003;
  uStack_78 = 0xe21bce;
  func_0x00de54d0();
  uStack_68 = (double)CONCAT44(&DAT_012864b8,auStack_60);
  pcStack_6c = (char *)0xe21bdf;
  func_0x00e87d2e();
code_r0x00e21bdf:
  puStack_74 = auStack_60;
  uStack_68 = (double)fVar17;
  pcStack_6c = "Chorus depth out of range: %f";
  iStack_70 = 0xa003;
  uStack_78 = 0xe21bfe;
  func_0x00de54d0();
  uStack_68 = (double)CONCAT44(&DAT_012864b8,auStack_60);
  pcStack_6c = (char *)0xe21c0f;
  func_0x00e87d2e();
code_r0x00e21c0f:
  puStack_74 = auStack_60;
  uStack_68 = (double)fVar17;
  pcStack_6c = "Chorus feedback out of range: %f";
  iStack_70 = 0xa003;
  uStack_78 = 0xe21c2e;
  func_0x00de54d0();
  uStack_68 = (double)CONCAT44(&DAT_012864b8,auStack_60);
  pcStack_6c = (char *)0xe21c3f;
  func_0x00e87d2e();
code_r0x00e21c3f:
  puStack_74 = auStack_60;
  uStack_68 = (double)fVar17;
  pcStack_6c = "Chorus delay out of range: %f";
  iStack_70 = 0xa003;
  uStack_78 = 0xe21c5e;
  func_0x00de54d0();
  uVar15 = (undefined1 *)0xffffffeb < &puStack_74;
  uStack_68 = (double)CONCAT44(&DAT_012864b8,auStack_60);
  pcStack_6c = (char *)0xe21c6f;
  uVar18 = func_0x00e87d2e();
  puVar11 = (uint *)((ulonglong)uVar18 >> 0x20);
  *puVar11 = (uint)(CONCAT14(uVar15,*puVar11) >> 2) | *puVar11 << 0x1f;
  bVar12 = (byte)((ulonglong)uVar18 >> 0x28);
  cVar8 = (char)uVar18;
  bVar10 = ((char)((ulonglong)uVar18 >> 8) - (char)((ulonglong)uVar18 >> 0x20)) -
           CARRY1((byte)unaff_EBX,bVar12);
  bVar16 = CARRY1(DAT_5700e21b,bVar10);
  DAT_5700e21b = DAT_5700e21b + bVar10;
  iVar7 = -0x68 - (int)puVar11;
  iVar6 = -(uint)bVar16;
  pcVar1 = (char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX + bVar12) + 0x40a12cec);
  *pcVar1 = *pcVar1 + cVar8;
  *extraout_ECX = *extraout_ECX - cVar8;
  *(uint *)((int)apcStack_40 + iVar6 + iVar7 + 0x68) =
       CONCAT22((short)((ulonglong)uVar18 >> 0x10),CONCAT11(bVar10,cVar8)) ^
       (uint)(auStack_60 + iVar6 + iVar7 + 0x60);
  iVar2 = *(int *)((int)&uStack_34 + iVar6 + iVar7 + 0x68);
  puVar3 = *(undefined4 **)((int)&iStack_38 + iVar6 + iVar7 + 0x68);
  *(undefined4 *)((int)&pcStack_6c + iVar6 + iVar7 + 0x68) = unaff_ESI;
  puVar4 = *(undefined4 **)((int)&uStack_34 + iVar6 + iVar7 + 0x6c);
  if (iVar2 == 1) {
    *(undefined4 *)((int)&iStack_70 + iVar6 + iVar7 + 0x68) = *puVar3;
    puVar13 = (undefined1 *)((int)&puStack_74 + iVar6 + iVar7 + 0x68);
    *(undefined4 *)((int)&puStack_74 + iVar6 + iVar7 + 0x68) = 0xe21cc3;
    uVar9 = func_0x00e230e0();
    *puVar4 = uVar9;
    *(undefined4 *)(puVar13 + 4) = 0xe21cd4;
    FUN_008ab370();
    return;
  }
  if (iVar2 == 2) {
    *puVar4 = puVar3[1];
    *(undefined4 *)((int)&pcStack_6c + iVar6 + iVar7 + 0x68) = 0xe21cb8;
    FUN_008ab370();
    return;
  }
  *(int *)((int)&iStack_70 + iVar6 + iVar7 + 0x68) = iVar2;
  *(char **)((int)&puStack_74 + iVar6 + iVar7 + 0x68) = "Invalid chorus integer property 0x%04x";
  *(undefined4 *)((int)&uStack_78 + iVar6 + iVar7 + 0x68) = 0xa002;
  *(undefined1 **)(auStack_7c + iVar6 + iVar7 + 0x68) = auStack_60 + iVar6 + iVar7 + 0x60;
  puVar14 = (undefined1 *)((int)&uStack_80 + iVar6 + iVar7 + 0x68);
  *(undefined4 *)((int)&uStack_80 + iVar6 + iVar7 + 0x68) = 0xe21ced;
  func_0x00de54d0();
  *(undefined **)(puVar14 + 0xc) = &DAT_012864b8;
  *(int *)(puVar14 + 8) = (int)puVar14 + 0x14;
  *(undefined4 *)(puVar14 + 4) = 0xe21cff;
  func_0x00e87d2e();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_00e21a90(int param_1,undefined4 param_2,float *param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  byte bVar10;
  undefined4 uVar9;
  char *extraout_ECX;
  byte bVar12;
  uint *puVar11;
  undefined4 unaff_EBX;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined4 unaff_ESI;
  undefined1 uVar15;
  bool bVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  char *pcStack_38;
  undefined8 uStack_34;
  undefined1 auStack_2c [32];
  uint auStack_c [3];
  
  auStack_c[2] = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar17 = *param_3;
  switch(param_2) {
  case 3:
    if ((0.0 <= fVar17) && (fVar17 <= 10.0)) {
      *(float *)(param_1 + 8) = fVar17;
      uStack_34 = (double)CONCAT44(&UNK_00e21aef,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    break;
  case 4:
    if ((0.0 <= fVar17) && (fVar17 <= 1.0)) {
      *(float *)(param_1 + 0xc) = fVar17;
      uStack_34 = (double)CONCAT44(&UNK_00e21b21,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21bdf;
  case 5:
    if ((-1.0 <= fVar17) && (fVar17 <= 1.0)) {
      *(float *)(param_1 + 0x10) = fVar17;
      uStack_34 = (double)CONCAT44(&UNK_00e21b53,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21c0f;
  case 6:
    if ((0.0 <= fVar17) && (fVar17 <= 0.016)) {
      *(float *)(param_1 + 0x14) = fVar17;
      uStack_34 = (double)CONCAT44(&UNK_00e21b85,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e21c3f;
  default:
    uStack_34 = (double)CONCAT44(param_2,"Invalid chorus float property 0x%04x");
    iStack_3c = (int)auStack_2c;
    pcStack_38 = (char *)0xa002;
    puStack_40 = (undefined1 *)0xe21b9e;
    func_0x00de54d0();
    uStack_34 = (double)CONCAT44(&DAT_012864b8,auStack_2c);
    pcStack_38 = (char *)0xe21baf;
    func_0x00e87d2e();
  }
  puStack_40 = auStack_2c;
  uStack_34 = (double)fVar17;
  pcStack_38 = "Chorus rate out of range: %f";
  iStack_3c = 0xa003;
  uStack_44 = 0xe21bce;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,auStack_2c);
  pcStack_38 = (char *)0xe21bdf;
  func_0x00e87d2e();
code_r0x00e21bdf:
  puStack_40 = auStack_2c;
  uStack_34 = (double)fVar17;
  pcStack_38 = "Chorus depth out of range: %f";
  iStack_3c = 0xa003;
  uStack_44 = 0xe21bfe;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,auStack_2c);
  pcStack_38 = (char *)0xe21c0f;
  func_0x00e87d2e();
code_r0x00e21c0f:
  puStack_40 = auStack_2c;
  uStack_34 = (double)fVar17;
  pcStack_38 = "Chorus feedback out of range: %f";
  iStack_3c = 0xa003;
  uStack_44 = 0xe21c2e;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,auStack_2c);
  pcStack_38 = (char *)0xe21c3f;
  func_0x00e87d2e();
code_r0x00e21c3f:
  puStack_40 = auStack_2c;
  uStack_34 = (double)fVar17;
  pcStack_38 = "Chorus delay out of range: %f";
  iStack_3c = 0xa003;
  uStack_44 = 0xe21c5e;
  func_0x00de54d0();
  uVar15 = (undefined1 *)0xffffffeb < &puStack_40;
  uStack_34 = (double)CONCAT44(&DAT_012864b8,auStack_2c);
  pcStack_38 = (char *)0xe21c6f;
  uVar18 = func_0x00e87d2e();
  puVar11 = (uint *)((ulonglong)uVar18 >> 0x20);
  *puVar11 = (uint)(CONCAT14(uVar15,*puVar11) >> 2) | *puVar11 << 0x1f;
  bVar12 = (byte)((ulonglong)uVar18 >> 0x28);
  cVar8 = (char)uVar18;
  bVar10 = ((char)((ulonglong)uVar18 >> 8) - (char)((ulonglong)uVar18 >> 0x20)) -
           CARRY1((byte)unaff_EBX,bVar12);
  bVar16 = CARRY1(DAT_5700e21b,bVar10);
  DAT_5700e21b = DAT_5700e21b + bVar10;
  iVar7 = -0x34 - (int)puVar11;
  iVar6 = -(uint)bVar16;
  pcVar1 = (char *)(CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX + bVar12) + 0x40a12cec);
  *pcVar1 = *pcVar1 + cVar8;
  *extraout_ECX = *extraout_ECX - cVar8;
  *(uint *)((int)auStack_c + iVar6 + iVar7 + 0x34) =
       CONCAT22((short)((ulonglong)uVar18 >> 0x10),CONCAT11(bVar10,cVar8)) ^
       (uint)(auStack_2c + iVar6 + iVar7 + 0x2c);
  iVar2 = *(int *)(&stack0x00000000 + iVar6 + iVar7 + 0x34);
  puVar3 = *(undefined4 **)((int)auStack_c + iVar6 + iVar7 + 0x3c);
  *(undefined4 *)((int)&pcStack_38 + iVar6 + iVar7 + 0x34) = unaff_ESI;
  puVar4 = *(undefined4 **)((int)&param_1 + iVar6 + iVar7 + 0x34);
  if (iVar2 == 1) {
    *(undefined4 *)((int)&iStack_3c + iVar6 + iVar7 + 0x34) = *puVar3;
    puVar13 = (undefined1 *)((int)&puStack_40 + iVar6 + iVar7 + 0x34);
    *(undefined4 *)((int)&puStack_40 + iVar6 + iVar7 + 0x34) = 0xe21cc3;
    uVar9 = func_0x00e230e0();
    *puVar4 = uVar9;
    *(undefined4 *)(puVar13 + 4) = 0xe21cd4;
    FUN_008ab370();
    return;
  }
  if (iVar2 != 2) {
    *(int *)((int)&iStack_3c + iVar6 + iVar7 + 0x34) = iVar2;
    *(char **)((int)&puStack_40 + iVar6 + iVar7 + 0x34) = "Invalid chorus integer property 0x%04x";
    *(undefined4 *)((int)&uStack_44 + iVar6 + iVar7 + 0x34) = 0xa002;
    *(undefined1 **)(auStack_48 + iVar6 + iVar7 + 0x34) = auStack_2c + iVar6 + iVar7 + 0x2c;
    puVar14 = (undefined1 *)((int)&uStack_4c + iVar6 + iVar7 + 0x34);
    *(undefined4 *)((int)&uStack_4c + iVar6 + iVar7 + 0x34) = 0xe21ced;
    func_0x00de54d0();
    *(undefined **)(puVar14 + 0xc) = &DAT_012864b8;
    *(int *)(puVar14 + 8) = (int)puVar14 + 0x14;
    *(undefined4 *)(puVar14 + 4) = 0xe21cff;
    func_0x00e87d2e();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *puVar4 = puVar3[1];
  *(undefined4 *)((int)&pcStack_38 + iVar6 + iVar7 + 0x34) = 0xe21cb8;
  FUN_008ab370();
  return;
}



void FUN_00e21d00(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined2 extraout_DX;
  undefined4 *unaff_EDI;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 3:
    *param_3 = *(undefined4 *)(param_1 + 8);
    FUN_008ab370();
    return;
  case 4:
    *param_3 = *(undefined4 *)(param_1 + 0xc);
    FUN_008ab370();
    return;
  case 5:
    *param_3 = *(undefined4 *)(param_1 + 0x10);
    FUN_008ab370();
    return;
  case 6:
    *param_3 = *(undefined4 *)(param_1 + 0x14);
    FUN_008ab370();
    return;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid chorus float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    uVar1 = in(extraout_DX);
    *unaff_EDI = uVar1;
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
}



void FUN_00e21dc0(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if (param_3 == 0) {
      *param_1 = 0;
      FUN_008ab370();
      return;
    }
    if (param_3 == 1) {
      *param_1 = 1;
      FUN_008ab370();
      return;
    }
  }
  else {
    if (param_2 == 2) {
      if (param_3 + 0xb4U < 0x169) {
        param_1[1] = param_3;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid flanger integer property 0x%04x",param_2);
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      param_3 = extraout_ECX;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Flanger phase out of range: %d",param_3);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_3 = extraout_ECX_00;
  }
  func_0x00de54d0(auStack_2c,0xa003,"Invalid flanger waveform: 0x%04x",param_3);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e21ec0(undefined4 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  iVar2 = *param_3;
  if (param_2 == 1) {
    if (iVar2 == 0) {
      *param_1 = 0;
      FUN_008ab370();
      return;
    }
    if (iVar2 == 1) {
      *param_1 = 1;
      FUN_008ab370();
      return;
    }
  }
  else {
    if (param_2 == 2) {
      if (iVar2 + 0xb4U < 0x169) {
        param_1[1] = iVar2;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid flanger integer property 0x%04x",param_2);
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      iVar2 = extraout_ECX;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Flanger phase out of range: %d",iVar2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    iVar2 = extraout_ECX_00;
  }
  func_0x00de54d0(auStack_2c,0xa003,"Invalid flanger waveform: 0x%04x",iVar2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING: Instruction at (ram,0x00e223b3) overlaps instruction at (ram,0x00e223b2)
// 
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

void FUN_00e21fb0(float *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int *extraout_EDX;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 unaff_ESI;
  float *unaff_EDI;
  byte bVar11;
  float10 extraout_ST0;
  float in_XMM1_Da;
  float fVar12;
  undefined8 uVar13;
  undefined4 unaff_retaddr;
  int aiStack_80 [3];
  int aiStack_74 [3];
  undefined1 auStack_68 [28];
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  char *pcStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  char acStack_2c [32];
  uint uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_2c;
  switch(param_2) {
  case 3:
    if ((0.0 <= param_3) && (param_3 <= 10.0)) {
      param_1[2] = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e2200d,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    break;
  case 4:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[3] = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e22045,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2210f;
  case 5:
    if ((-1.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[4] = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e2207d,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2213f;
  case 6:
    if ((0.0 <= param_3) && (param_3 <= 0.004)) {
      param_1[5] = param_3;
      uStack_34 = (double)CONCAT44(&UNK_00e220b5,(undefined4)uStack_34);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2216f;
  default:
    uStack_34 = (double)CONCAT44(param_2,"Invalid flanger float property 0x%04x");
    uStack_3c = (double)CONCAT44(0xa002,acStack_2c);
    pcStack_40 = (char *)0xe220ce;
    func_0x00de54d0();
    uStack_34 = (double)CONCAT44(&DAT_012864b8,acStack_2c);
    uStack_3c = (double)CONCAT44(0xe220df,(undefined4)uStack_3c);
    func_0x00e87d2e();
    param_3 = in_XMM1_Da;
  }
  pcStack_40 = acStack_2c;
  uStack_34 = (double)param_3;
  uStack_3c = 1.3827944001145171e-303;
  puStack_44 = (undefined1 *)0xe220fe;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,acStack_2c);
  uStack_3c = (double)CONCAT44(0xe2210f,(undefined4)uStack_3c);
  func_0x00e87d2e();
code_r0x00e2210f:
  pcStack_40 = acStack_2c;
  uStack_34 = (double)param_3;
  uStack_3c = 1.3828166508531022e-303;
  puStack_44 = (undefined1 *)0xe2212e;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,acStack_2c);
  uStack_3c = (double)CONCAT44(0xe2213f,(undefined4)uStack_3c);
  func_0x00e87d2e();
code_r0x00e2213f:
  pcStack_40 = acStack_2c;
  uStack_34 = (double)param_3;
  uStack_3c = 1.3828389015916872e-303;
  puStack_44 = (undefined1 *)0xe2215e;
  func_0x00de54d0();
  uStack_34 = (double)CONCAT44(&DAT_012864b8,acStack_2c);
  uStack_3c = (double)CONCAT44(0xe2216f,(undefined4)uStack_3c);
  func_0x00e87d2e();
code_r0x00e2216f:
  pcStack_40 = acStack_2c;
  uStack_34 = (double)param_3;
  uStack_3c = 1.3828639336725954e-303;
  puStack_44 = (undefined1 *)0xe2218e;
  func_0x00de54d0();
  bVar11 = (undefined1 *)0xffffffeb < &pcStack_40;
  uStack_34 = (double)CONCAT44(&DAT_012864b8,acStack_2c);
  uStack_3c = (double)CONCAT44(0xe2219f,(undefined4)uStack_3c);
  uVar13 = func_0x00e87d2e();
  *unaff_EDI = (float)extraout_ST0;
  *(int *)uVar13 = (int)(acStack_2c + (uint)bVar11 + *(int *)uVar13 + -8);
  *(char *)(extraout_ECX + -0x7cff1de3) = *(char *)(extraout_ECX + -0x7cff1de3) + (char)uVar13;
  cVar7 = in((short)CONCAT31((int3)((ulonglong)uVar13 >> 0x28),
                             (byte)((ulonglong)uVar13 >> 0x20) & (byte)((ulonglong)uVar13 >> 8)));
  uStack_c = CONCAT31((int3)((ulonglong)uVar13 >> 8),cVar7 + '_') + 1;
  *(char *)(extraout_ECX + -3) = *(char *)(extraout_ECX + -3) - (char)uStack_c;
  uStack_c = uStack_c ^ (uint)&uStack_34;
  fVar12 = *param_1;
  switch(unaff_retaddr) {
  case 3:
    if ((0.0 <= fVar12) && (fVar12 <= 10.0)) {
      *(float *)(uStack_4 + 8) = fVar12;
      uStack_3c = (double)CONCAT44(&UNK_00e2220f,(undefined4)uStack_3c);
      FUN_008ab370();
      return;
    }
    break;
  case 4:
    if ((0.0 <= fVar12) && (fVar12 <= 1.0)) {
      *(float *)(uStack_4 + 0xc) = fVar12;
      uStack_3c = (double)CONCAT44(&UNK_00e22241,(undefined4)uStack_3c);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e222ff;
  case 5:
    if ((-1.0 <= fVar12) && (fVar12 <= 1.0)) {
      *(float *)(uStack_4 + 0x10) = fVar12;
      uStack_3c = (double)CONCAT44(&UNK_00e22273,(undefined4)uStack_3c);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2232f;
  case 6:
    if ((0.0 <= fVar12) && (fVar12 <= 0.004)) {
      *(float *)(uStack_4 + 0x14) = fVar12;
      uStack_3c = (double)CONCAT44(&UNK_00e222a5,(undefined4)uStack_3c);
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2235f;
  default:
    uStack_3c = (double)CONCAT44(unaff_retaddr,"Invalid flanger float property 0x%04x");
    pcStack_40 = (char *)0xa002;
    puStack_48 = (undefined1 *)0xe222be;
    puStack_44 = (undefined1 *)&uStack_34;
    func_0x00de54d0();
    uStack_3c = (double)CONCAT44(&DAT_012864b8,&uStack_34);
    pcStack_40 = (char *)0xe222cf;
    func_0x00e87d2e();
  }
  puStack_48 = (undefined1 *)&uStack_34;
  uStack_3c = (double)fVar12;
  pcStack_40 = "Flanger rate out of range: %f";
  puStack_44 = (undefined1 *)0xa003;
  uStack_4c = 0xe222ee;
  func_0x00de54d0();
  uStack_3c = (double)CONCAT44(&DAT_012864b8,&uStack_34);
  pcStack_40 = (char *)0xe222ff;
  func_0x00e87d2e();
code_r0x00e222ff:
  puStack_48 = (undefined1 *)&uStack_34;
  uStack_3c = (double)fVar12;
  pcStack_40 = "Flanger depth out of range: %f";
  puStack_44 = (undefined1 *)0xa003;
  uStack_4c = 0xe2231e;
  func_0x00de54d0();
  uStack_3c = (double)CONCAT44(&DAT_012864b8,&uStack_34);
  pcStack_40 = (char *)0xe2232f;
  func_0x00e87d2e();
code_r0x00e2232f:
  puStack_48 = (undefined1 *)&uStack_34;
  uStack_3c = (double)fVar12;
  pcStack_40 = "Flanger feedback out of range: %f";
  puStack_44 = (undefined1 *)0xa003;
  uStack_4c = 0xe2234e;
  func_0x00de54d0();
  uStack_3c = (double)CONCAT44(&DAT_012864b8,&uStack_34);
  pcStack_40 = (char *)0xe2235f;
  func_0x00e87d2e();
code_r0x00e2235f:
  puStack_48 = (undefined1 *)&uStack_34;
  uStack_3c = (double)fVar12;
  pcStack_40 = "Flanger delay out of range: %f";
  puStack_44 = (undefined1 *)0xa003;
  uStack_4c = 0xe2237e;
  func_0x00de54d0();
  bVar11 = (undefined1 *)0xffffffeb < &puStack_48;
  cVar7 = &stack0x00000000 == &DAT_00000034;
  uStack_3c = (double)CONCAT44(&DAT_012864b8,&uStack_34);
  pcStack_40 = (char *)0xe2238f;
  func_0x00e87d2e();
  if (extraout_ECX_00 != 1 && cVar7 != '\0') {
    return;
  }
  uVar4 = (uint)bVar11;
  iVar6 = *extraout_EDX + -0x3c;
  *(char *)((int)unaff_EDI + 0x22) =
       *(char *)((int)unaff_EDI + 0x22) + (char)((uint)extraout_EDX >> 8);
  *(uint *)((int)&pcStack_40 + uVar4 + iVar6 + 0x3c) =
       DAT_0128fd40 ^ (uint)(auStack_68 + uVar4 + iVar6 + 0x3c);
  iVar1 = *(int *)(acStack_2c + uVar4 + iVar6 + 0x34);
  puVar2 = *(undefined4 **)((int)&uStack_3c + uVar4 + iVar6 + 0x40);
  *(undefined4 *)((int)aiStack_74 + uVar4 + iVar6 + 0x44) = unaff_ESI;
  puVar3 = *(undefined4 **)(acStack_2c + uVar4 + iVar6 + 0x38);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      *puVar3 = puVar2[1];
      *(undefined4 *)((int)aiStack_74 + uVar4 + iVar6 + 0x44) = 0xe223d8;
      FUN_008ab370();
      return;
    }
    *(int *)((int)aiStack_74 + uVar4 + iVar6 + 0x40) = iVar1;
    *(char **)((int)aiStack_74 + uVar4 + iVar6 + 0x3c) = "Invalid flanger integer property 0x%04x";
    *(undefined4 *)((int)aiStack_80 + uVar4 + iVar6 + 0x44) = 0xa002;
    *(undefined1 **)((int)aiStack_80 + uVar4 + iVar6 + 0x40) = auStack_68 + uVar4 + iVar6 + 0x3c;
    puVar10 = (undefined1 *)((int)aiStack_80 + uVar4 + iVar6 + 0x3c);
    *(undefined4 *)((int)aiStack_80 + uVar4 + iVar6 + 0x3c) = 0xe2240d;
    func_0x00de54d0();
    *(undefined **)(puVar10 + 0xc) = &DAT_012864b8;
    *(int *)(puVar10 + 8) = (int)puVar10 + 0x14;
    *(undefined4 *)(puVar10 + 4) = 0xe2241f;
    func_0x00e87d2e();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined4 *)((int)aiStack_74 + uVar4 + iVar6 + 0x40) = *puVar2;
  puVar9 = (undefined1 *)((int)aiStack_74 + uVar4 + iVar6 + 0x3c);
  *(undefined4 *)((int)aiStack_74 + uVar4 + iVar6 + 0x3c) = 0xe223e3;
  uVar8 = func_0x00e230e0();
  *puVar3 = uVar8;
  *(undefined4 *)(puVar9 + 4) = 0xe223f4;
  FUN_008ab370();
  return;
}



void FUN_00e223a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    uVar2 = func_0x00e230e0(*param_1);
    *param_3 = uVar2;
    FUN_008ab370();
    return;
  }
  if (param_2 == 2) {
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid flanger integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// WARNING (jumptable): Unable to track spacebase fully for stack

void FUN_00e22420(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int extraout_ECX;
  char unaff_BL;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 3:
    *param_3 = *(undefined4 *)(param_1 + 8);
    FUN_008ab370();
    return;
  case 4:
    *param_3 = *(undefined4 *)(param_1 + 0xc);
    FUN_008ab370();
    return;
  case 5:
    *param_3 = *(undefined4 *)(param_1 + 0x10);
    FUN_008ab370();
    return;
  case 6:
    *param_3 = *(undefined4 *)(param_1 + 0x14);
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid flanger float property 0x%04x",param_2);
  uVar6 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (char *)(unaff_EBP + 0x25);
  *pcVar1 = *pcVar1 + unaff_BL;
  if (*pcVar1 == '\0') {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(char *)(extraout_ECX + -1) = *(char *)(extraout_ECX + -1) - (char)(uVar6 & 0xffffffe2);
  uVar6 = uVar6 & 0xffffffe2 ^ unaff_EBP + 1U;
  *(uint *)(unaff_EBP + -0xf) = uVar6;
  *unaff_FS_OFFSET = unaff_EBP + -0xb;
  piVar2 = *(int **)(unaff_EBP + 0xd);
  piVar3 = *(int **)(unaff_EBP + 0x11);
  *(undefined4 *)(unaff_EBP + -0x11b) = *(undefined4 *)(unaff_EBP + 9);
  iVar4 = *piVar2;
  if ((*piVar3 <= iVar4) && (iVar4 <= **(int **)(unaff_EBP + 0x15))) {
    *unaff_FS_OFFSET = *(int *)(unaff_EBP + -0xb);
    FUN_008ab370();
    return;
  }
  uVar7 = func_0x00dd7230(unaff_EBP + -0xff,**(int **)(unaff_EBP + 0x15),uVar6);
  iVar4 = *piVar3;
  *(undefined4 *)(unaff_EBP + -3) = 0;
  uVar8 = func_0x00dd7230(unaff_EBP + -0xe7,iVar4);
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -3) = 1;
  uVar9 = func_0x00dd7230(unaff_EBP + -0xcf,iVar4);
  *(undefined1 *)(unaff_EBP + -3) = 2;
  uVar10 = func_0x00469d30(*(undefined4 *)(unaff_EBP + -0x11b));
  *(undefined1 *)(unaff_EBP + -3) = 3;
  uVar10 = func_0x0046b5c0(unaff_EBP + -0x9f,uVar10," out of range (value: ");
  *(undefined1 *)(unaff_EBP + -3) = 4;
  uVar9 = func_0x0046b660(unaff_EBP + -0x87,uVar10,uVar9);
  *(undefined1 *)(unaff_EBP + -3) = 5;
  uVar9 = func_0x0046b5c0(unaff_EBP + -0x6f,uVar9,"; min: ");
  *(undefined1 *)(unaff_EBP + -3) = 6;
  uVar8 = func_0x0046b660(unaff_EBP + -0x57,uVar9,uVar8);
  *(undefined1 *)(unaff_EBP + -3) = 7;
  uVar8 = func_0x0046b5c0(unaff_EBP + -0x3f,uVar8,"; max: ");
  *(undefined1 *)(unaff_EBP + -3) = 8;
  uVar7 = func_0x0046b660(unaff_EBP + -0x27,uVar8,uVar7);
  *(undefined1 *)(unaff_EBP + -3) = 9;
  func_0x0046b5c0(unaff_EBP + -0x117,uVar7,&DAT_00fb0494);
  FUN_00469ba0();
  FUN_00469ba0();
  FUN_00469ba0();
  FUN_00469ba0();
  FUN_00469ba0();
  FUN_00469ba0();
  FUN_00469ba0();
  FUN_00469ba0();
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -3) = 0x14;
  FUN_00469ba0();
  uVar7 = func_0x00469a10();
  func_0x00e23050(uVar7);
  func_0x00e87d2e(unaff_EBP + -0x127,&DAT_012865f8);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



undefined4 * __thiscall FUN_00e23020(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



undefined4 * __thiscall FUN_00e23080(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e23b70(undefined4 param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int extraout_EDX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if (param_3 < 2) {
      *(bool *)param_1 = param_3 != 0;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Compressor state out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_EDX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid compressor integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e23c00(undefined4 param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  int extraout_EDX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if (*param_3 < 2) {
      *(bool *)param_1 = *param_3 != 0;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Compressor state out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_EDX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid compressor integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e23c90(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid compressor float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e23cd0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid compressor float-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e23d10(byte *param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = (uint)*param_1;
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid compressor integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00e23f40(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e240d0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid distortion integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e24110(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid distortion integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e24150(float *param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  int extraout_ECX;
  undefined2 extraout_DX;
  byte *extraout_EDX;
  undefined4 unaff_EBX;
  byte in_AF;
  bool bVar7;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  float in_XMM1_Da;
  undefined1 auStack_8f [39];
  undefined4 uStack_68;
  undefined3 uStack_5f;
  undefined1 *puStack_58;
  char *pcStack_54;
  undefined1 *puStack_50;
  char *pcStack_4c;
  undefined1 *puStack_48;
  char *pcStack_44;
  undefined1 *puStack_40;
  char *pcStack_3c;
  undefined1 *puStack_38;
  char *pcStack_34;
  char *pcStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    in_AF = 0;
    if ((0.0 <= param_3) && (in_AF = 0, param_3 <= 1.0)) {
      *param_1 = param_3;
      pcStack_30 = &UNK_00e241ac;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    in_AF = 0;
    if ((0.01 <= param_3) && (in_AF = 0, param_3 <= 1.0)) {
      param_1[1] = param_3;
      pcStack_30 = &UNK_00e241e4;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e242db;
  case 3:
    in_AF = 0;
    if ((80.0 <= param_3) && (in_AF = 0, param_3 <= 24000.0)) {
      param_1[2] = param_3;
      pcStack_30 = &UNK_00e2421c;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e24300;
  case 4:
    in_AF = 0;
    if ((80.0 <= param_3) && (in_AF = 0, param_3 <= 24000.0)) {
      param_1[3] = param_3;
      pcStack_30 = &UNK_00e24254;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e24325;
  case 5:
    in_AF = 0;
    if ((80.0 <= param_3) && (in_AF = 0, param_3 <= 24000.0)) {
      param_1[4] = param_3;
      pcStack_30 = &UNK_00e2428c;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2434a;
  default:
    pcStack_30 = (char *)param_2;
    pcStack_34 = "Invalid distortion float property 0x%04x";
    pcStack_3c = auStack_2c;
    puStack_38 = (undefined1 *)0xa002;
    puStack_40 = (undefined1 *)0xe242a5;
    func_0x00de54d0();
    pcStack_34 = auStack_2c;
    pcStack_30 = "";
    puStack_38 = (undefined1 *)0xe242b6;
    func_0x00e87d2e();
    param_3 = in_XMM1_Da;
  }
  puStack_38 = auStack_2c;
  pcStack_30 = "Distortion edge out of range";
  pcStack_34 = (char *)0xa003;
  pcStack_3c = (char *)0xe242ca;
  func_0x00de54d0();
  pcStack_34 = auStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe242db;
  func_0x00e87d2e();
code_r0x00e242db:
  puStack_38 = auStack_2c;
  pcStack_30 = "Distortion gain out of range";
  pcStack_34 = (char *)0xa003;
  pcStack_3c = (char *)0xe242ef;
  func_0x00de54d0();
  pcStack_34 = auStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe24300;
  func_0x00e87d2e();
code_r0x00e24300:
  puStack_38 = auStack_2c;
  pcStack_30 = "Distortion low-pass cutoff out of range";
  pcStack_34 = (char *)0xa003;
  pcStack_3c = (char *)0xe24314;
  func_0x00de54d0();
  pcStack_34 = auStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe24325;
  func_0x00e87d2e();
code_r0x00e24325:
  puStack_38 = auStack_2c;
  pcStack_30 = "Distortion EQ center out of range";
  pcStack_34 = (char *)0xa003;
  pcStack_3c = (char *)0xe24339;
  func_0x00de54d0();
  pcStack_34 = auStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe2434a;
  func_0x00e87d2e();
code_r0x00e2434a:
  puStack_38 = auStack_2c;
  pcStack_30 = "Distortion EQ bandwidth out of range";
  pcStack_34 = (char *)0xa003;
  pcStack_3c = (char *)0xe2435e;
  func_0x00de54d0();
  pcStack_34 = auStack_2c;
  bVar7 = (int)auStack_2c < 0;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe2436f;
  uVar5 = func_0x00e87d2e();
  if (bVar7) {
    puStack_38 = (undefined1 *)0xe2437d;
    func_0x20e325be();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar6 = (uint *)CONCAT31((int3)((uint)uVar5 >> 8),(char)uVar5 + '\x0f');
  LOCK();
  piVar2 = (int *)*puVar6;
  *puVar6 = (uint)puVar6;
  UNLOCK();
  *piVar2 = *piVar2 + (int)piVar2;
  bVar4 = (byte)piVar2 & 0x95;
  puStack_38 = (undefined1 *)
               ((uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                (uint)((char)bVar4 < '\0') * 0x80 | (uint)(((uint)piVar2 & 0x95) == 0) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar4) & 1U) == 0) * 4 |
                (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000);
  pcStack_44 = (char *)&puStack_38;
  if ((0.0 <= param_3) && (param_3 <= 1.0)) {
    *(float *)(extraout_ECX + -1) = param_3;
    pcStack_3c = (char *)0xe243ee;
    FUN_008ab370();
    return;
  }
  pcStack_3c = "Distortion edge out of range";
  puStack_40 = (undefined1 *)0xa003;
  puStack_48 = (undefined1 *)0xe244f4;
  func_0x00de54d0();
  puStack_40 = (undefined1 *)&puStack_38;
  pcStack_3c = "";
  pcStack_44 = (char *)0xe24505;
  func_0x00e87d2e();
  pcStack_44 = "Distortion gain out of range";
  puStack_48 = (undefined1 *)0xa003;
  puStack_50 = (undefined1 *)0xe24519;
  pcStack_4c = (char *)&puStack_40;
  func_0x00de54d0();
  puStack_48 = (undefined1 *)&puStack_40;
  pcStack_44 = "";
  pcStack_4c = (char *)0xe2452a;
  func_0x00e87d2e();
  pcStack_4c = "Distortion low-pass cutoff out of range";
  puStack_50 = (undefined1 *)0xa003;
  puStack_58 = (undefined1 *)0xe2453e;
  pcStack_54 = (char *)&puStack_48;
  func_0x00de54d0();
  puStack_50 = (undefined1 *)&puStack_48;
  pcStack_4c = "";
  pcStack_54 = (char *)0xe2454f;
  func_0x00e87d2e();
  pcStack_54 = "Distortion EQ center out of range";
  puStack_58 = (undefined1 *)0xa003;
  func_0x00de54d0();
  puStack_58 = (undefined1 *)&puStack_50;
  pcStack_54 = "";
  func_0x00e87d2e();
  uStack_68 = 0xe24588;
  func_0x00de54d0();
  bVar4 = func_0x00e87d2e();
  uVar5 = uStack_68;
  puVar1 = (undefined4 *)
           (CONCAT22((short)((uint)unaff_EBX >> 0x10),
                     CONCAT11((char)((uint)unaff_EBX >> 8) * '\x02',(char)unaff_EBX)) + -0x1e);
  *puVar1 = *puVar1;
  *extraout_EDX = bVar4 & 0x44;
  uStack_68._1_3_ = (uint3)DAT_0128fd40 ^ (uint3)auStack_8f;
  uStack_68._0_1_ = (undefined1)uVar5;
  switch(CONCAT13(puStack_58._0_1_,0x12864)) {
  case 4:
    uStack_5f = (undefined3)((uint)&puStack_58 >> 8);
    *(undefined4 *)CONCAT13(pcStack_54._0_1_,puStack_58._1_3_) =
         *(undefined4 *)(CONCAT13(0xb8,uStack_5f) + 0xc);
    FUN_008ab370();
    return;
  default:
    func_0x00de54d0(auStack_8f,0xa002,"Invalid distortion float property 0x%04x",
                    CONCAT13(puStack_58._0_1_,0x12864));
    func_0x00e87d2e(auStack_8f,&DAT_012864b8);
    in(extraout_DX);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}



void FUN_00e24390(float *param_1,undefined4 param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined2 extraout_DX;
  byte *extraout_EDX;
  int unaff_EBX;
  undefined1 auStack_63 [35];
  undefined *puStack_40;
  undefined1 *puStack_3c;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar2 = *param_3;
  switch(param_2) {
  case 1:
    if ((0.0 <= fVar2) && (fVar2 <= 1.0)) {
      *param_1 = fVar2;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((0.01 <= fVar2) && (fVar2 <= 1.0)) {
      param_1[1] = fVar2;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e24505;
  case 3:
    if ((80.0 <= fVar2) && (fVar2 <= 24000.0)) {
      param_1[2] = fVar2;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2452a;
  case 4:
    if ((80.0 <= fVar2) && (fVar2 <= 24000.0)) {
      param_1[3] = fVar2;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2454f;
  case 5:
    if ((80.0 <= fVar2) && (fVar2 <= 24000.0)) {
      param_1[4] = fVar2;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e24574;
  default:
    puStack_3c = auStack_2c;
    puStack_40 = &UNK_00e244cf;
    func_0x00de54d0();
    func_0x00e87d2e();
  }
  puStack_3c = (undefined1 *)0xe244f4;
  func_0x00de54d0();
  func_0x00e87d2e();
code_r0x00e24505:
  puStack_3c = (undefined1 *)0xe24519;
  func_0x00de54d0();
  func_0x00e87d2e();
code_r0x00e2452a:
  puStack_3c = (undefined1 *)0xe2453e;
  func_0x00de54d0();
  func_0x00e87d2e();
code_r0x00e2454f:
  puStack_3c = (undefined1 *)0xe24563;
  func_0x00de54d0();
  func_0x00e87d2e();
code_r0x00e24574:
  puStack_3c = (undefined1 *)0xe24588;
  func_0x00de54d0();
  bVar5 = func_0x00e87d2e();
  puVar4 = puStack_3c;
  *(undefined4 *)(unaff_EBX + -0x1e) = *(undefined4 *)(unaff_EBX + -0x1e);
  *extraout_EDX = bVar5 & 0x44;
  puStack_3c._1_3_ = (uint3)DAT_0128fd40 ^ (uint3)auStack_63;
  puStack_3c._0_1_ = SUB41(puVar4,0);
  uVar1 = CONCAT13(auStack_2c[0],0x12864) - 1;
  if (uVar1 < 5) {
                    // WARNING: Could not recover jumptable at 0x00e245ce. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(uVar1 * 4 + 0xe24674))();
    return;
  }
  func_0x00de54d0(auStack_63,0xa002,"Invalid distortion float property 0x%04x",
                  CONCAT13(auStack_2c[0],0x12864));
  func_0x00e87d2e(auStack_63,&DAT_012864b8);
  in(extraout_DX);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void FUN_00e245b0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  case 2:
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  case 3:
    *param_3 = param_1[2];
    FUN_008ab370();
    return;
  case 4:
    *param_3 = param_1[3];
    FUN_008ab370();
    return;
  case 5:
    *param_3 = param_1[4];
    FUN_008ab370();
    return;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid distortion float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    in(extraout_DX);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



undefined4 * __thiscall FUN_00e24a60(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e24f00(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid echo integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e24f40(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid echo integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e24f80(float *param_1,undefined4 param_2,float param_3)

{
  code *pcVar1;
  int iVar2;
  char extraout_DL;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    if ((0.0 <= param_3) && (param_3 <= 0.207)) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((0.0 <= param_3) && (param_3 <= 0.404)) {
      param_1[1] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2510b;
  case 3:
    if ((0.0 <= param_3) && (param_3 <= 0.99)) {
      param_1[2] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e25130;
  case 4:
    if ((0.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[3] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e25155;
  case 5:
    if ((-1.0 <= param_3) && (param_3 <= 1.0)) {
      param_1[4] = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2517a;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid echo float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  func_0x00de54d0(auStack_2c,0xa003,"Echo delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e2510b:
  func_0x00de54d0(auStack_2c,0xa003,"Echo LR delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e25130:
  func_0x00de54d0(auStack_2c,0xa003,"Echo damping out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e25155:
  func_0x00de54d0(auStack_2c,0xa003,"Echo feedback out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e2517a:
  func_0x00de54d0(auStack_2c,0xa003,"Echo spread out of range");
  iVar2 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  *(char *)(iVar2 + -0x1e) = *(char *)(iVar2 + -0x1e) - extraout_DL;
  *(char *)(iVar2 + 0x50) = *(char *)(iVar2 + 0x50) + extraout_DL;
  *(char *)(iVar2 + -0x1e) = extraout_DL;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e251c0(float *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  code *pcVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar1 = *param_3;
  switch(param_2) {
  case 1:
    if ((0.0 <= fVar1) && (fVar1 <= 0.207)) {
      *param_1 = fVar1;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((0.0 <= fVar1) && (fVar1 <= 0.404)) {
      param_1[1] = fVar1;
      FUN_008ab370();
      return;
    }
    goto LAB_00e25335;
  case 3:
    if ((0.0 <= fVar1) && (fVar1 <= 0.99)) {
      param_1[2] = fVar1;
      FUN_008ab370();
      return;
    }
    goto LAB_00e2535a;
  case 4:
    if ((0.0 <= fVar1) && (fVar1 <= 1.0)) {
      param_1[3] = fVar1;
      FUN_008ab370();
      return;
    }
    goto LAB_00e2537f;
  case 5:
    if ((-1.0 <= fVar1) && (fVar1 <= 1.0)) {
      param_1[4] = fVar1;
      FUN_008ab370();
      return;
    }
    goto LAB_00e253a4;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid echo float property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  func_0x00de54d0(auStack_2c,0xa003,"Echo delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
LAB_00e25335:
  func_0x00de54d0(auStack_2c,0xa003,"Echo LR delay out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
LAB_00e2535a:
  func_0x00de54d0(auStack_2c,0xa003,"Echo damping out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
LAB_00e2537f:
  func_0x00de54d0(auStack_2c,0xa003,"Echo feedback out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
LAB_00e253a4:
  func_0x00de54d0(auStack_2c,0xa003,"Echo spread out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



void FUN_00e253e0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  switch(param_2) {
  case 1:
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  case 2:
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  case 3:
    *param_3 = param_1[2];
    FUN_008ab370();
    return;
  case 4:
    *param_3 = param_1[3];
    FUN_008ab370();
    return;
  case 5:
    *param_3 = param_1[4];
    FUN_008ab370();
    return;
  default:
    func_0x00de54d0();
    func_0x00e87d2e();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
}



undefined4 * __thiscall FUN_00e256c0(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e25b30(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  undefined8 uVar7;
  int *piStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined *puStack_30;
  int iStack_2c;
  byte bStack_28;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_2c;
  switch(param_2) {
  case 1:
    *param_3 = param_1[1];
    puStack_30 = &UNK_00e25b6d;
    FUN_008ab370();
    return;
  case 2:
    *param_3 = *param_1;
    puStack_30 = &UNK_00e25b84;
    FUN_008ab370();
    return;
  case 3:
    *param_3 = param_1[3];
    puStack_30 = &UNK_00e25b9c;
    FUN_008ab370();
    return;
  case 4:
    *param_3 = param_1[2];
    puStack_30 = &UNK_00e25bb4;
    FUN_008ab370();
    return;
  case 5:
    *param_3 = param_1[4];
    puStack_30 = &UNK_00e25bcc;
    FUN_008ab370();
    return;
  case 6:
    *param_3 = param_1[6];
    puStack_30 = &UNK_00e25be4;
    FUN_008ab370();
    return;
  case 7:
    *param_3 = param_1[5];
    puStack_30 = &UNK_00e25bfc;
    FUN_008ab370();
    return;
  case 8:
    *param_3 = param_1[7];
    puStack_30 = &UNK_00e25c14;
    FUN_008ab370();
    return;
  case 9:
    *param_3 = param_1[9];
    puStack_30 = &UNK_00e25c2c;
    FUN_008ab370();
    return;
  case 10:
    *param_3 = param_1[8];
    puStack_30 = &UNK_00e25c44;
    FUN_008ab370();
    return;
  }
  puStack_30 = (undefined *)param_2;
  pcStack_34 = "Invalid equalizer float property 0x%04x";
  piStack_3c = &iStack_2c;
  uStack_38 = 0xa002;
  func_0x00de54d0();
  bVar6 = SCARRY4((int)&piStack_3c,0x10);
  pcStack_34 = (char *)&iStack_2c;
  puStack_30 = &DAT_012864b8;
  uStack_38 = 0xe25c6e;
  uVar7 = func_0x00e87d2e();
  pbVar5 = (byte *)((ulonglong)uVar7 >> 0x20);
  if (bVar6) {
    puStack_30[-0x1e] = (char)puStack_30;
    pbVar1 = (byte *)((int)uVar7 + -0x47ff1da5);
    bVar2 = *pbVar1;
    bVar4 = (byte)((ulonglong)uVar7 >> 8);
    *pbVar1 = *pbVar1 + bVar4;
    *(byte *)(iStack_2c + -0x1e) = *(byte *)(iStack_2c + -0x1e) >> 1 | CARRY1(bVar2,bVar4) << 7;
    bVar2 = *pbVar5;
    *pbVar5 = *pbVar5 + bStack_28;
    *pbVar5 = (*pbVar5 - bStack_28) - CARRY1(bVar2,bStack_28);
    *pbVar5 = *pbVar5 ^ bStack_28;
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcStack_34 = (char *)0xe25cd7;
  puStack_30 = (undefined *)(int)uVar7;
  func_0x00e87d2e();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void FUN_00e25ca0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid equalizer integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e25ce0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid equalizer integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e25d20(float *param_1,undefined4 param_2,float param_3)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar6;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char extraout_CL;
  char extraout_DH;
  char unaff_BL;
  int unaff_ESI;
  byte bVar7;
  undefined1 *puStack_38;
  char *pcStack_34;
  char *pcStack_30;
  int aiStack_2c [10];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)aiStack_2c;
  switch(param_2) {
  case 1:
    if ((0.126 <= param_3) && (param_3 <= 7.943)) {
      param_1[1] = param_3;
      pcStack_30 = &UNK_00e25d7d;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if ((50.0 <= param_3) && (param_3 <= 800.0)) {
      *param_1 = param_3;
      pcStack_30 = &UNK_00e25db4;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e25fc3;
  case 3:
    if ((0.126 <= param_3) && (param_3 <= 7.943)) {
      param_1[3] = param_3;
      pcStack_30 = &UNK_00e25dec;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e25fe8;
  case 4:
    if ((200.0 <= param_3) && (param_3 <= 3000.0)) {
      param_1[2] = param_3;
      pcStack_30 = &UNK_00e25e24;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2600d;
  case 5:
    if ((0.01 <= param_3) && (param_3 <= 1.0)) {
      param_1[4] = param_3;
      pcStack_30 = &UNK_00e25e5c;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e26032;
  case 6:
    if ((0.126 <= param_3) && (param_3 <= 7.943)) {
      param_1[6] = param_3;
      pcStack_30 = &UNK_00e25e94;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e26057;
  case 7:
    if ((1000.0 <= param_3) && (param_3 <= 8000.0)) {
      param_1[5] = param_3;
      pcStack_30 = &UNK_00e25ecc;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e2607c;
  case 8:
    if ((0.01 <= param_3) && (param_3 <= 1.0)) {
      param_1[7] = param_3;
      pcStack_30 = &UNK_00e25f04;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e260a1;
  case 9:
    if ((0.126 <= param_3) && (param_3 <= 7.943)) {
      param_1[9] = param_3;
      pcStack_30 = &UNK_00e25f3c;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e260c6;
  case 10:
    if ((4000.0 <= param_3) && (param_3 <= 16000.0)) {
      param_1[8] = param_3;
      pcStack_30 = &UNK_00e25f74;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e260eb;
  default:
    pcStack_30 = (char *)param_2;
    pcStack_34 = "Invalid equalizer float property 0x%04x";
    puStack_38 = (undefined1 *)0xa002;
    func_0x00de54d0(aiStack_2c);
    pcStack_34 = (char *)aiStack_2c;
    pcStack_30 = "";
    puStack_38 = (undefined1 *)0xe25f9e;
    func_0x00e87d2e();
  }
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer low-band gain out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe25fc3;
  func_0x00e87d2e();
code_r0x00e25fc3:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer low-band cutoff out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe25fe8;
  func_0x00e87d2e();
code_r0x00e25fe8:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer mid1-band gain out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe2600d;
  func_0x00e87d2e();
code_r0x00e2600d:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer mid1-band center out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe26032;
  func_0x00e87d2e();
code_r0x00e26032:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer mid1-band width out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe26057;
  func_0x00e87d2e();
code_r0x00e26057:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer mid2-band gain out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe2607c;
  func_0x00e87d2e();
code_r0x00e2607c:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer mid2-band center out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe260a1;
  func_0x00e87d2e();
code_r0x00e260a1:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer mid2-band width out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe260c6;
  func_0x00e87d2e();
code_r0x00e260c6:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer high-band gain out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe260eb;
  func_0x00e87d2e();
code_r0x00e260eb:
  puStack_38 = (undefined1 *)aiStack_2c;
  pcStack_30 = "Equalizer high-band cutoff out of range";
  pcStack_34 = (char *)0xa003;
  func_0x00de54d0();
  bVar7 = (undefined1 *)0xfffffff3 < &puStack_38;
  pcStack_34 = (char *)aiStack_2c;
  pcStack_30 = "";
  puStack_38 = (undefined1 *)0xe26110;
  uVar3 = func_0x00e87d2e();
  *(uint *)(pcStack_34 + -0x1e) = (*(int *)(pcStack_34 + -0x1e) + 0x1da24800) - (uint)bVar7;
  iVar4 = CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar3 + extraout_DH);
  *(char *)(unaff_ESI + -0x1e) = *(char *)(unaff_ESI + -0x1e) - unaff_BL;
  pbVar1 = (byte *)(iVar4 + 0x5e);
  bVar7 = *pbVar1;
  bVar6 = (byte)((uint)uVar3 >> 8);
  *pbVar1 = *pbVar1 + bVar6;
  pcVar5 = (char *)(int)(short)iVar4;
  *(byte *)(aiStack_2c[0] + -0x1e) =
       *(byte *)(aiStack_2c[0] + -0x1e) >> 1 | CARRY1(bVar7,bVar6) << 7;
  *pcVar5 = *pcVar5 + extraout_CL + -5;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_00e26140(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00e25d20(param_1,param_2,*param_3);
  return;
}



undefined4 * __thiscall FUN_00e26530(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e26d80(float *param_1,int param_2,float param_3)

{
  code *pcVar1;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if ((0.0 <= param_3) && (param_3 <= 24000.0)) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Frequency shifter frequency out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid frequency shifter float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e26e20(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  code *pcVar2;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar1 = *param_3;
  if (param_2 == 1) {
    if ((0.0 <= fVar1) && (fVar1 <= 24000.0)) {
      *param_1 = fVar1;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Frequency shifter frequency out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid frequency shifter float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_00e26ec0(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 2) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_008ab370();
      return;
    }
    if (param_3 == 1) {
      *(undefined4 *)(param_1 + 4) = 1;
      FUN_008ab370();
      return;
    }
    if (param_3 == 2) {
      *(undefined4 *)(param_1 + 4) = 2;
      FUN_008ab370();
      return;
    }
  }
  else {
    if (param_2 == 3) {
      if (param_3 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_008ab370();
        return;
      }
      if (param_3 == 1) {
        *(undefined4 *)(param_1 + 8) = 1;
        FUN_008ab370();
        return;
      }
      if (param_3 == 2) {
        *(undefined4 *)(param_1 + 8) = 2;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid frequency shifter integer property 0x%04x",param_2)
      ;
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      param_3 = extraout_ECX;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Unsupported frequency shifter right direction: 0x%04x",
                    param_3);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_3 = extraout_ECX_00;
  }
  func_0x00de54d0(auStack_2c,0xa003,"Unsupported frequency shifter left direction: 0x%04x",param_3);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e27010(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  iVar2 = *param_3;
  if (param_2 == 2) {
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_008ab370();
      return;
    }
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 4) = 1;
      FUN_008ab370();
      return;
    }
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 4) = 2;
      FUN_008ab370();
      return;
    }
  }
  else {
    if (param_2 == 3) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_008ab370();
        return;
      }
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 8) = 1;
        FUN_008ab370();
        return;
      }
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 8) = 2;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid frequency shifter integer property 0x%04x",param_2)
      ;
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      iVar2 = extraout_ECX;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Unsupported frequency shifter right direction: 0x%04x",iVar2)
    ;
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    iVar2 = extraout_ECX_00;
  }
  func_0x00de54d0(auStack_2c,0xa003,"Unsupported frequency shifter left direction: 0x%04x",iVar2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e27160(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 2) {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  else {
    if (param_2 != 3) {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid frequency shifter integer property 0x%04x",param_2)
      ;
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  uVar2 = func_0x00e27670(uVar2);
  *param_3 = uVar2;
  FUN_008ab370();
  return;
}



void FUN_00e271e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid frequency shifter float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00e27610(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e279f0(float *param_1,int param_2,float param_3)

{
  code *pcVar1;
  int extraout_ECX;
  float in_XMM1_Da;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if ((0.0 <= param_3) && (param_3 <= 8000.0)) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Modulator frequency out of range: %f",(double)param_3);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
    in_XMM1_Da = param_3;
  }
  else if (param_2 == 2) {
    if ((0.0 <= param_3) && (param_3 <= 24000.0)) {
      param_1[1] = param_3;
      FUN_008ab370();
      return;
    }
    goto LAB_00e27ad3;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid modulator float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  param_3 = in_XMM1_Da;
LAB_00e27ad3:
  func_0x00de54d0(auStack_2c,0xa003,"Modulator high-pass cutoff out of range: %f",(double)param_3);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e27b10(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00e279f0(param_1,param_2,*param_3);
  return;
}



void FUN_00e27b30(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  char acStack_34 [4];
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_34;
  if ((param_2 != 1) && (param_2 != 2)) {
    if (param_2 == 3) {
      func_0x00e284a0(acStack_34,param_3);
      uVar2 = extraout_EDX;
      if (acStack_34[0] != '\0') {
        *(undefined4 *)(param_1 + 8) = uStack_30;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid modulator integer property 0x%04x",param_2);
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      uVar2 = extraout_EDX_00;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Invalid modulator waveform: 0x%04x",uVar2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00e279f0(param_1,param_2,(float)param_3);
  FUN_008ab370();
  return;
}



void FUN_00e27c00(int param_1,int param_2,int *param_3)

{
  code *pcVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  char acStack_34 [4];
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_34;
  if ((param_2 != 1) && (param_2 != 2)) {
    if (param_2 == 3) {
      func_0x00e284a0(acStack_34,*param_3);
      uVar2 = extraout_EDX;
      if (acStack_34[0] != '\0') {
        *(undefined4 *)(param_1 + 8) = uStack_30;
        FUN_008ab370();
        return;
      }
    }
    else {
      func_0x00de54d0(auStack_2c,0xa002,"Invalid modulator integer property 0x%04x",param_2);
      func_0x00e87d2e(auStack_2c,&DAT_012864b8);
      uVar2 = extraout_EDX_00;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Invalid modulator waveform: 0x%04x",uVar2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_00e279f0(param_1,param_2,(float)*param_3);
  FUN_008ab370();
  return;
}



void FUN_00e27cd0(float *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  float extraout_EDX;
  float fVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [40];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6ea55;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 == 1) {
    iVar2 = (int)*param_1;
  }
  else if (param_2 == 2) {
    iVar2 = (int)param_1[1];
  }
  else {
    if (param_2 != 3) {
      func_0x00de54d0(auStack_3c,0xa002,"Invalid modulator integer property 0x%04x",param_2,
                      uStack_14);
      func_0x00e87d2e(auStack_3c,&DAT_012864b8);
      fVar4 = extraout_EDX;
LAB_00e27d83:
      uVar3 = func_0x00464a50(auStack_54,fVar4);
      uStack_8 = 0;
      uVar3 = func_0x005f2a30(auStack_6c,"Invalid modulator waveform: ",uVar3);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      func_0x00463580(uVar3);
      func_0x00e87d2e(auStack_78,&DAT_0127ffdc);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar4 = param_1[2];
    if (fVar4 == 0.0) {
      iVar2 = 0;
    }
    else if (fVar4 == 1.4013e-45) {
      iVar2 = 1;
    }
    else {
      if (fVar4 != 2.8026e-45) goto LAB_00e27d83;
      iVar2 = 2;
    }
  }
  *param_3 = iVar2;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00e27dd0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  }
  if (param_2 == 2) {
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid modulator float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00e28220(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e285b0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid pitch shifter float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e285f0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid pitch shifter float-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e28630(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int extraout_EDX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if (param_3 + 0xcU < 0x19) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Pitch shifter coarse tune out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_EDX;
  }
  else if (param_2 == 2) {
    if (param_3 + 0x32U < 0x65) {
      param_1[1] = param_3;
      FUN_008ab370();
      return;
    }
    goto LAB_00e286d8;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid pitch shifter integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
LAB_00e286d8:
  func_0x00de54d0(auStack_2c,0xa003,"Pitch shifter fine tune out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e28700(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  iVar1 = *param_3;
  if (param_2 == 1) {
    if (iVar1 + 0xcU < 0x19) {
      *param_1 = iVar1;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Pitch shifter coarse tune out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  else if (param_2 == 2) {
    if (iVar1 + 0x32U < 0x65) {
      param_1[1] = iVar1;
      FUN_008ab370();
      return;
    }
    goto LAB_00e287a7;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid pitch shifter integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
LAB_00e287a7:
  func_0x00de54d0(auStack_2c,0xa003,"Pitch shifter fine tune out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_00e287d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  }
  if (param_2 == 2) {
    *param_3 = param_1[1];
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid pitch shifter integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e28850(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid pitch shifter float vector-property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00e28a60(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00e28cd0(int param_1,undefined4 param_2,int param_3)

{
  char extraout_CH;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined2 extraout_var;
  undefined2 in_FS;
  char acStack_34 [4];
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)acStack_34;
  switch(param_2) {
  case 1:
    func_0x00e29c50(acStack_34,param_3);
    uVar1 = extraout_ECX;
    if (acStack_34[0] != '\0') {
      *(undefined4 *)(extraout_EDX + 4) = uStack_30;
      FUN_008ab370();
      return;
    }
    break;
  case 2:
    if (param_3 + 0x18U < 0x31) {
      *(int *)(param_1 + 0xc) = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e28e1e;
  case 3:
    func_0x00e29c50(acStack_34,param_3);
    uVar1 = extraout_ECX_00;
    if (acStack_34[0] != '\0') {
      *(undefined4 *)(extraout_EDX_00 + 8) = uStack_30;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e28e44;
  case 4:
    if (param_3 + 0x18U < 0x31) {
      *(int *)(param_1 + 0x10) = param_3;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e28e6b;
  case 5:
    func_0x00e284a0(acStack_34,param_3);
    if (acStack_34[0] != '\0') {
      *(undefined4 *)(extraout_EDX_01 + 0x14) = uStack_30;
      FUN_008ab370();
      return;
    }
    goto code_r0x00e28e91;
  default:
    func_0x00de54d0(auStack_2c,0xa002,"Invalid vocal morpher integer property 0x%04x",param_2);
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    uVar1 = extraout_ECX_01;
  }
  func_0x00de54d0(auStack_2c,0xa003,"Vocal morpher phoneme-a out of range: 0x%04x",uVar1);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e28e1e:
  func_0x00de54d0(auStack_2c,0xa003,"Vocal morpher phoneme-a coarse tuning out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  uVar1 = extraout_ECX_02;
code_r0x00e28e44:
  func_0x00de54d0(auStack_2c,0xa003,"Vocal morpher phoneme-b out of range: 0x%04x",uVar1);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e28e6b:
  func_0x00de54d0(auStack_2c,0xa003,"Vocal morpher phoneme-b coarse tuning out of range");
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
code_r0x00e28e91:
  func_0x00de54d0(auStack_2c,0xa003,"Vocal morpher waveform out of range: 0x%04x",param_3);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  *(char *)CONCAT22(extraout_var,in_FS) = *(char *)CONCAT22(extraout_var,in_FS) + extraout_CH;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00e28ed0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid vocal morpher integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e28f10(float *param_1,int param_2,float param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 6) {
    if ((0.0 <= param_3) && (param_3 <= 10.0)) {
      *param_1 = param_3;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Vocal morpher rate out of range");
    param_2 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid vocal morpher float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e28fc0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  code *pcVar2;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  fVar1 = *param_3;
  if (param_2 == 6) {
    if ((0.0 <= fVar1) && (fVar1 <= 10.0)) {
      *param_1 = fVar1;
      FUN_008ab370();
      return;
    }
    func_0x00de54d0(auStack_2c,0xa003,"Vocal morpher rate out of range");
    param_2 = func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid vocal morpher float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_00e29060(int param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  char extraout_CL;
  int extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 uVar6;
  undefined1 *puStack_94;
  char *pcStack_90;
  undefined1 *puStack_8c;
  char *pcStack_88;
  undefined *puStack_84;
  uint uStack_80;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [24];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [40];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6ea95;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_80 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uStack_80;
  switch(param_2) {
  case 1:
    puStack_84 = *(undefined **)(param_1 + 4);
    goto code_r0x00e290a4;
  case 2:
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    break;
  case 3:
    puStack_84 = *(undefined **)(param_1 + 8);
code_r0x00e290a4:
    pcStack_88 = &UNK_00e290a9;
    uVar4 = func_0x00e29960();
    break;
  case 4:
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    break;
  case 5:
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else if (iVar5 == 1) {
      uVar4 = 1;
    }
    else {
      if (iVar5 != 2) goto code_r0x00e29122;
      uVar4 = 2;
    }
    break;
  default:
    puStack_84 = (undefined *)param_2;
    pcStack_88 = "Invalid vocal morpher integer property 0x%04x";
    pcStack_90 = auStack_3c;
    puStack_8c = (undefined1 *)0xa002;
    puStack_94 = (undefined1 *)0xe29111;
    func_0x00de54d0();
    pcStack_88 = auStack_3c;
    puStack_84 = &DAT_012864b8;
    puStack_8c = (undefined1 *)0xe29122;
    func_0x00e87d2e();
    iVar5 = extraout_ECX;
code_r0x00e29122:
    pcStack_88 = auStack_54;
    puStack_8c = (undefined1 *)0xe2912c;
    puStack_84 = (undefined *)iVar5;
    puStack_8c = (undefined1 *)func_0x00464a50();
    puStack_94 = auStack_6c;
    uStack_8 = 0;
    pcStack_90 = "Invalid vocal morpher waveform: ";
    puStack_84 = (undefined *)func_0x005f2a30();
    uVar6 = (undefined1 *)0xffffffeb < &puStack_94;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    pcStack_88 = (char *)0xe29152;
    func_0x00463580();
    pcStack_88 = "";
    puStack_8c = auStack_78;
    pcStack_90 = (char *)0xe29160;
    func_0x00e87d2e();
    pcVar2 = (code *)swi(0x90);
    iVar5 = (*pcVar2)();
    bVar3 = (extraout_CL - 1U & 0x1f) % 9;
    bVar1 = *(byte *)(iVar5 + -0x6f28ff1e);
    *(byte *)(iVar5 + -0x6f28ff1e) = bVar1 << bVar3 | (byte)(CONCAT11(uVar6,bVar1) >> 9 - bVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_3 = uVar4;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00e29180(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 6) {
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid vocal morpher float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00e29780(undefined4 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  func_0x008ab0ac(param_2 + 4,param_1 + 1);
  *param_1 = EaxCommitter<>::Exception::vftable;
  return param_1;
}



void FUN_00e2a290(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid dedicated integer property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e2a2d0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  func_0x00de54d0(auStack_2c,0xa002,"Invalid dedicated integer-vector property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e2a310(float *param_1,int param_2,float param_3)

{
  code *pcVar1;
  short sVar2;
  int extraout_ECX;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    if (0.0 <= param_3) {
      sVar2 = func_0x00e87c3c(param_3);
      if (sVar2 < 1) {
        *param_1 = param_3;
        FUN_008ab370();
        return;
      }
    }
    func_0x00de54d0(auStack_2c,0xa003,"Dedicated gain out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid dedicated float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e2a3c0(float *param_1,int param_2,float *param_3)

{
  code *pcVar1;
  short sVar2;
  int extraout_ECX;
  float fStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&fStack_30;
  fStack_30 = *param_3;
  if (param_2 == 1) {
    if (0.0 <= fStack_30) {
      sVar2 = func_0x00e87c3c(fStack_30);
      if (sVar2 < 1) {
        *param_1 = fStack_30;
        FUN_008ab370();
        return;
      }
    }
    func_0x00de54d0(auStack_2c,0xa003,"Dedicated gain out of range");
    func_0x00e87d2e(auStack_2c,&DAT_012864b8);
    param_2 = extraout_ECX;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid dedicated float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e2a480(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  if (param_2 == 1) {
    *param_3 = *param_1;
    FUN_008ab370();
    return;
  }
  func_0x00de54d0(auStack_2c,0xa002,"Invalid dedicated float property 0x%04x",param_2);
  func_0x00e87d2e(auStack_2c,&DAT_012864b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e2a4e0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(4,0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = _anon_0E886E71::NullState::vftable;
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00e2a540(undefined4 *param_1,uint param_2)

{
  *param_1 = _anon_0E886E71::NullState::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x10);
  }
  return param_1;
}



undefined ** FUN_00e2a580(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e2954) {
    func_0x008ab40d(&DAT_013e2954);
    if (DAT_013e2954 == -1) {
      func_0x008ab7fd(FUN_00f75c70);
      func_0x008ab3bc(&DAT_013e2954);
    }
  }
  return &PTR_vftable_012ba8a8;
}



void FUN_00e2a5e0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(0x10,0x3170);
  if (puVar2 != (undefined4 *)0x0) {
    memset(puVar2 + 3,0,0x3164);
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar3 = puVar2 + 0x80b;
    puVar2[3] = 0;
    iVar4 = 0x10;
    *puVar2 = _anon_D5436C29::AutowahState::vftable;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00e2a670(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x3170);
  }
  return param_1;
}



undefined ** FUN_00e2a6b0(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e2958) {
    func_0x008ab40d(&DAT_013e2958);
    if (DAT_013e2958 == -1) {
      func_0x008ab7fd(FUN_00f75c80);
      func_0x008ab3bc(&DAT_013e2958);
    }
  }
  return &PTR_vftable_012ba8ac;
}



void __fastcall FUN_00e2a710(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x41200000;
  *(undefined4 *)(param_1 + 0x1c) = 0x40900000;
  *(undefined4 *)(param_1 + 0x20) = 0x39ebedfa;
  *(undefined4 *)(param_1 + 0x24) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x28) = 0;
  for (puVar2 = (undefined4 *)(param_1 + 0x2c); puVar2 != (undefined4 *)(param_1 + 0x202c);
      puVar2 = puVar2 + 2) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  if ((undefined4 *)(param_1 + 0x202c) != (undefined4 *)(param_1 + 0x216c)) {
    puVar2 = (undefined4 *)(param_1 + 0x2034);
    do {
      puVar2[-2] = 0xffffffff;
      puVar2[-1] = 0;
      puVar1 = puVar2 + 3;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 5;
    } while (puVar1 != (undefined4 *)(param_1 + 0x216c));
  }
  return;
}



void __thiscall FUN_00e2a7b0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dStack_30;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float *pfStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&dStack_30;
  uVar6 = 0;
  fStack_28 = *(float *)(param_1 + 0x10);
  fStack_14 = *(float *)(param_1 + 0x14);
  fStack_10 = *(float *)(param_1 + 0x18);
  fStack_18 = *(float *)(param_1 + 0x1c);
  pfStack_1c = *(float **)(param_1 + 0x20);
  fStack_20 = *(float *)(param_1 + 0x24);
  fVar15 = *(float *)(param_1 + 0x28);
  iStack_24 = param_1;
  if (param_2 != 0) {
    pfStack_8 = (float *)(param_1 + 0x30);
    fStack_c = *(float *)(param_1 + 0x28);
    do {
      fVar8 = ABS(*(float *)(param_3 + uVar6 * 4)) * fStack_18;
      fVar15 = fStack_28;
      if (fVar8 <= fStack_c) {
        fVar15 = fStack_14;
      }
      fStack_c = (fStack_c - fVar8) * fVar15 + fVar8;
      fVar8 = fStack_c * fStack_20 + (float)pfStack_1c;
      fVar15 = 0.46;
      if (fVar8 <= 0.46) {
        fVar15 = fVar8;
      }
      dVar9 = (double)(fVar15 * 6.2831855);
      dStack_30 = dVar9;
      func_0x00e87995();
      pfStack_8[-1] = (float)dVar9;
      dVar9 = dStack_30;
      func_0x00e8799b();
      uVar6 = uVar6 + 1;
      *pfStack_8 = (float)dVar9 / 10.0;
      pfStack_8 = pfStack_8 + 2;
      fVar15 = fStack_c;
    } while (uVar6 < param_2);
  }
  pfVar7 = (float *)(iStack_24 + 0x202c);
  *(float *)(iStack_24 + 0x28) = fVar15;
  fStack_14 = (float)param_4;
  pfStack_8 = pfVar7;
  if (param_3 != param_4) {
    fStack_c = (float)(iStack_24 + 0x2170);
    iVar4 = iStack_24;
    do {
      fStack_18 = *pfVar7;
      if (fStack_18 != -NAN) {
        fVar15 = pfVar7[1];
        fVar8 = pfVar7[2];
        fStack_20 = 0.0;
        if (param_2 != 0) {
          uVar6 = 0;
          pfStack_1c = (float *)(iVar4 + 0x2170);
          pfVar3 = (float *)(iVar4 + 0x2c);
          pfVar5 = pfStack_1c;
          do {
            pfVar1 = pfVar3 + 1;
            fVar10 = *pfVar3;
            fVar14 = *pfVar1 / fStack_10;
            pfVar3 = pfVar3 + 2;
            fVar13 = *pfVar1 * fStack_10;
            fVar11 = fVar14 + 1.0;
            fVar2 = *(float *)(param_3 + uVar6 * 4);
            uVar6 = uVar6 + 1;
            fVar10 = (fVar10 * -2.0) / fVar11;
            fVar12 = ((fVar13 + 1.0) / fVar11) * fVar2 + fVar15;
            *pfVar5 = fVar12;
            pfVar5 = pfVar5 + 1;
            fVar15 = (fVar10 * fVar2 - fVar10 * fVar12) + fVar8;
            fVar8 = ((1.0 - fVar13) / fVar11) * fVar2 - ((1.0 - fVar14) / fVar11) * fVar12;
          } while (uVar6 < param_2);
        }
        pfVar7[1] = fVar15;
        pfVar7[2] = fVar8;
        pfStack_8 = pfVar7;
        (*(code *)PTR_FUN_012ba8a4)
                  (fStack_c,(int)fStack_c + param_2 * 4,(int)fStack_18 * 0x1000 + param_5,pfVar7 + 3
                   ,pfVar7[4],param_2);
        iVar4 = iStack_24;
      }
      param_3 = param_3 + 0x1000;
      pfVar7 = pfVar7 + 5;
      pfStack_8 = pfVar7;
    } while ((float)param_3 != fStack_14);
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00e2aa80(int param_1,int *param_2,int param_3,float *param_4,int param_5)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iStack_10;
  
  fVar9 = (float)((double)*(int *)(*param_2 + 4) +
                 (double)(&DAT_011a2c10)[-(*(int *)(*param_2 + 4) >> 0x1f)]);
  fVar6 = 0.001;
  if (0.001 <= param_4[1]) {
    fVar6 = param_4[1];
  }
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  dVar8 = (double)(-1.0 / (fVar9 * *param_4));
  func_0x00e87a3a();
  *(float *)(param_1 + 0x10) = (float)dVar8;
  dVar8 = (double)(-1.0 / (fVar6 * fVar9));
  func_0x00e87a3a();
  *(float *)(param_1 + 0x14) = (float)dVar8;
  dVar8 = (double)param_4[2];
  func_0x00e87c48();
  dVar8 = (double)(((float)dVar8 * 10.0) / 3.0);
  if (dVar8 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  *(float *)(param_1 + 0x18) = (float)dVar8;
  dVar8 = (double)(param_4[3] / 31621.0);
  func_0x00e87c48();
  *(float *)(param_1 + 0x1c) = 1.0 - (float)dVar8;
  *(float *)(param_1 + 0x20) = 20.0 / fVar9;
  *(float *)(param_1 + 0x24) = 2480.0 / fVar9;
  uVar1 = *(undefined4 *)(param_5 + 0x84);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  fVar6 = *(float *)(param_3 + 0x90);
  iStack_10 = *(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc;
  fVar9 = (float)(*(int *)(param_5 + 0x84) - *(int *)(param_5 + 0x80) >> 0xc);
  if (iStack_10 != 0) {
    pfVar5 = (float *)(param_1 + 0x203c);
    piVar4 = (int *)(param_3 + 0xc);
    do {
      fVar2 = 0.0;
      fVar7 = 0.0;
      if (fVar9 == 0.0) {
        fVar2 = -NAN;
      }
      else {
        piVar3 = (int *)(param_5 + 4);
        do {
          if (*piVar3 == *piVar4) {
            fVar7 = fVar6 * *(float *)(param_5 + (int)fVar2 * 8);
            goto LAB_00e2ac44;
          }
          fVar2 = (float)((int)fVar2 + 1);
          piVar3 = piVar3 + 2;
        } while ((uint)fVar2 < (uint)fVar9);
        fVar2 = -NAN;
      }
LAB_00e2ac44:
      pfVar5[-4] = fVar2;
      piVar4 = piVar4 + 2;
      *pfVar5 = fVar7;
      pfVar5 = pfVar5 + 5;
      iStack_10 = iStack_10 + -1;
    } while (iStack_10 != 0);
  }
  return;
}



undefined4 * FUN_00e2ac70(undefined4 *param_1)

{
  code *pcVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_c [12];
  
  _Dst = (void *)func_0x00ddbb30(0x10,0x4140);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x4140);
    uVar2 = func_0x00e2acd0();
    *param_1 = uVar2;
    return param_1;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined4 *)(*pcVar1)();
  return puVar3;
}



int __thiscall FUN_00e2ad80(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x4140);
  }
  return param_1;
}



undefined ** FUN_00e2ade0(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e295c) {
    func_0x008ab40d(&DAT_013e295c);
    if (DAT_013e295c == -1) {
      func_0x008ab7fd(FUN_00f75c90);
      func_0x008ab3bc(&DAT_013e295c);
    }
  }
  return &PTR_vftable_012ba8b0;
}



undefined ** FUN_00e2ae40(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e2960) {
    func_0x008ab40d(&DAT_013e2960);
    if (DAT_013e2960 == -1) {
      func_0x008ab7fd(FUN_00f75ca0);
      func_0x008ab3bc(&DAT_013e2960);
    }
  }
  return &PTR_vftable_012ba8b4;
}



// WARNING: Removing unreachable block (ram,0x00e2b08d)
// WARNING: Removing unreachable block (ram,0x00e2b091)
// WARNING: Removing unreachable block (ram,0x00e2b099)
// WARNING: Removing unreachable block (ram,0x00e2b0a1)
// WARNING: Removing unreachable block (ram,0x00e2b066)
// WARNING: Removing unreachable block (ram,0x00e2afc0)
// WARNING: Removing unreachable block (ram,0x00e2afc4)
// WARNING: Removing unreachable block (ram,0x00e2afcc)
// WARNING: Removing unreachable block (ram,0x00e2afd4)
// WARNING: Removing unreachable block (ram,0x00e2afe0)
// WARNING: Removing unreachable block (ram,0x00e2b046)
// WARNING: Removing unreachable block (ram,0x00e2b04a)
// WARNING: Removing unreachable block (ram,0x00e2b052)
// WARNING: Removing unreachable block (ram,0x00e2b05a)
// WARNING: Removing unreachable block (ram,0x00e2b0b3)
// WARNING: Removing unreachable block (ram,0x00e2affd)
// WARNING: Removing unreachable block (ram,0x00e2b007)
// WARNING: Removing unreachable block (ram,0x00e2b00a)
// WARNING: Removing unreachable block (ram,0x00e2b00e)
// WARNING: Removing unreachable block (ram,0x00e2b100)
// WARNING: Removing unreachable block (ram,0x00e2b111)
// WARNING: Removing unreachable block (ram,0x00e2b115)

void __thiscall FUN_00e2aea0(int param_1,void *param_2)

{
  size_t _Size;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 *puVar9;
  int aiStack_38 [3];
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  void *pvStack_8;
  int iStack_4;
  
  uVar2 = (uint)((float)((double)*(int *)((int)param_2 + 4) +
                        (double)(&DAT_011a2c10)[-(*(int *)((int)param_2 + 4) >> 0x1f)]) * 0.032);
  uVar3 = uVar2 + 1;
  if (uVar3 != 0) {
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar3 = uVar2 | uVar2 >> 0x10;
  }
  piVar8 = (int *)(param_1 + 0x10);
  uVar3 = uVar3 + 1;
  iStack_4 = param_1;
  if (uVar3 != *(int *)(param_1 + 0x14) - *piVar8 >> 2) {
    pvVar6 = (void *)0x0;
    pvVar7 = (void *)0x0;
    param_2 = (void *)0x0;
    if (uVar3 == 0) {
      pvVar4 = (void *)*piVar8;
    }
    else {
      if (0x3fffffff < uVar3) {
        func_0x0046e700();
LAB_00e2b13c:
        func_0x0062c530();
        func_0x00e87d2e(auStack_2c,&DAT_0125c4dc);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      _Size = uVar3 * 4;
      pvVar7 = (void *)func_0x00ddbb30(0x10,_Size);
      if (pvVar7 == (void *)0x0) goto LAB_00e2b13c;
      param_2 = (void *)(_Size + (int)pvVar7);
      pvStack_8 = param_2;
      memset(pvVar7,0,_Size);
      pvVar4 = *(void **)(iStack_4 + 0x10);
      pvVar6 = pvStack_8;
    }
    if (aiStack_38 != piVar8) {
      *(void **)(param_1 + 0x14) = pvVar6;
      *piVar8 = (int)pvVar7;
      *(void **)(param_1 + 0x18) = param_2;
      pvVar7 = pvVar4;
    }
    if (pvVar7 != (void *)0x0) {
      func_0x00ddbb20(pvVar7);
    }
  }
  uStack_c = 0;
  uStack_10 = 0;
  memset((void *)*piVar8,0,*(int *)(iStack_4 + 0x14) - *piVar8 & 0xfffffffc);
  if (iStack_4 + 0x4030 != iStack_4 + 0x4130) {
    uStack_14 = 0;
    uStack_18 = 0;
    pvStack_8 = (void *)0x0;
    uStack_1c = 0;
    uStack_20 = 0;
    pvVar6 = (void *)(iStack_4 + 0x4070);
    do {
      pvVar7 = (void *)((int)pvVar6 + -0x40);
      if (pvStack_8 == (void *)0x0) {
        memset(pvVar7,0,0x40);
      }
      else {
        iVar5 = (-(uint)(pvVar6 < pvVar7) & 0xfffffff0) + 0x10;
        if (pvVar7 <= pvVar6) {
          puVar9 = (undefined4 *)((int)pvVar6 + -0x40);
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
        }
      }
      memset(pvVar6,0,0x40);
      iVar5 = (int)pvVar6 + 0x40;
      pvVar6 = (void *)((int)pvVar6 + 0x80);
    } while (iVar5 != iStack_4 + 0x4130);
  }
  return;
}



void __thiscall
FUN_00e2b160(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uStack_28;
  uint uStack_24;
  int *piStack_20;
  uint uStack_1c;
  uint uStack_14;
  uint uStack_10;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x4134);
  fVar1 = *(float *)(param_1 + 0x413c);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar13 = *(float *)(param_1 + 0x4138);
  uVar11 = *(uint *)(param_1 + 0x20);
  uVar7 = (*(int *)(param_1 + 0x14) - iVar3 >> 2) - 1;
  uStack_10 = *(uint *)(param_1 + 0x1c);
  uVar6 = *(uint *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x4130) == 0) {
    uStack_1c = 0;
    if (param_2 != 0) {
      do {
        uStack_24 = param_2 - uStack_1c;
        if (uVar6 - uVar11 < param_2 - uStack_1c) {
          uStack_24 = uVar6 - uVar11;
        }
        piStack_20 = (int *)(param_1 + uStack_1c * 4 + 0x30);
        do {
          dVar12 = (double)((float)((double)(int)uVar11 +
                                   (double)(&DAT_011a2c10)[-((int)uVar11 >> 0x1f)]) * fVar2);
          func_0x00e8799b();
          uVar11 = uVar11 + 1;
          uStack_1c = uStack_1c + 1;
          *piStack_20 = (int)ROUND((float)dVar12 * fVar13) + iVar4;
          piStack_20 = piStack_20 + 1;
          uStack_24 = uStack_24 - 1;
        } while (uStack_24 != 0);
        if (uVar11 == uVar6) {
          uVar11 = 0;
        }
      } while (uStack_1c < param_2);
      uVar11 = (uint)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x20)) % uVar6;
      uStack_24 = 0;
      do {
        uStack_1c = param_2 - uStack_24;
        if (uVar6 - uVar11 < param_2 - uStack_24) {
          uStack_1c = uVar6 - uVar11;
        }
        piStack_20 = (int *)(param_1 + uStack_24 * 4 + 0x1030);
        do {
          dVar12 = (double)((float)((double)(int)uVar11 +
                                   (double)(&DAT_011a2c10)[-((int)uVar11 >> 0x1f)]) * fVar2);
          func_0x00e8799b();
          uVar11 = uVar11 + 1;
          uStack_24 = uStack_24 + 1;
          *piStack_20 = (int)ROUND((float)dVar12 * fVar13) + iVar4;
          piStack_20 = piStack_20 + 1;
          uStack_1c = uStack_1c - 1;
        } while (uStack_1c != 0);
        if (uVar11 == uVar6) {
          uVar11 = 0;
        }
      } while (uStack_24 < param_2);
    }
  }
  else {
    uStack_14 = 0;
    if (param_2 != 0) {
      do {
        uVar10 = param_2 - uStack_14;
        if (uVar6 - uVar11 < param_2 - uStack_14) {
          uVar10 = uVar6 - uVar11;
        }
        piVar8 = (int *)(param_1 + 0x30 + uStack_14 * 4);
        do {
          dVar12 = (double)(int)uVar11;
          iVar5 = (int)uVar11 >> 0x1f;
          uVar11 = uVar11 + 1;
          *piVar8 = (int)ROUND((1.0 - ABS(2.0 - (float)(dVar12 + (double)(&DAT_011a2c10)[-iVar5]) *
                                                fVar2)) * fVar13) + iVar4;
          piVar8 = piVar8 + 1;
          uStack_14 = uStack_14 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if (uVar11 == uVar6) {
          uVar11 = 0;
        }
      } while (uStack_14 < param_2);
      uVar11 = (uint)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x20)) % uVar6;
      uStack_14 = 0;
      do {
        uVar10 = param_2 - uStack_14;
        if (uVar6 - uVar11 < param_2 - uStack_14) {
          uVar10 = uVar6 - uVar11;
        }
        piVar8 = (int *)(param_1 + 0x1030 + uStack_14 * 4);
        do {
          dVar12 = (double)(int)uVar11;
          iVar5 = (int)uVar11 >> 0x1f;
          uVar11 = uVar11 + 1;
          *piVar8 = (int)ROUND((1.0 - ABS(2.0 - (float)(dVar12 + (double)(&DAT_011a2c10)[-iVar5]) *
                                                fVar2)) * fVar13) + iVar4;
          piVar8 = piVar8 + 1;
          uStack_14 = uStack_14 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if (uVar11 == uVar6) {
          uVar11 = 0;
        }
      } while (uStack_14 < param_2);
    }
  }
  *(uint *)(param_1 + 0x20) = (*(int *)(param_1 + 0x20) + param_2) % uVar6;
  puVar9 = (uint *)(param_1 + 0x30);
  if (param_2 != 0) {
    uVar11 = uStack_10 - (iVar4 + 0x8000U >> 0x10);
    param_3 = param_3 - (int)puVar9;
    uStack_28 = param_2;
    do {
      fVar2 = *(float *)(param_3 + (int)puVar9);
      uVar6 = *puVar9;
      *(float *)(iVar3 + (uStack_10 & uVar7) * 4) = fVar2;
      uVar10 = uStack_10 - (uVar6 >> 0x10);
      fVar15 = ((float)(uVar6 & 0xffff) + 0.0) * 1.5258789e-05;
      fVar16 = fVar15 * fVar15;
      fVar13 = fVar16 * fVar15 * 1.5;
      fVar14 = fVar16 * fVar15 * 0.5;
      puVar9[0x800] =
           (uint)(((fVar16 - fVar14) - fVar15 * 0.5) * *(float *)(iVar3 + (uVar10 + 1 & uVar7) * 4)
                  + ((fVar13 - fVar16 * 2.5) + 1.0) * *(float *)(iVar3 + (uVar10 & uVar7) * 4) +
                  (((fVar16 + fVar16) - fVar13) + fVar15 * 0.5) *
                  *(float *)(iVar3 + (uVar10 - 1 & uVar7) * 4) +
                 (fVar14 - fVar16 * 0.5) * *(float *)(iVar3 + (uVar10 - 2 & uVar7) * 4));
      uVar10 = uStack_10 - (puVar9[0x400] >> 0x10);
      fVar16 = ((float)(puVar9[0x400] & 0xffff) + 0.0) * 1.5258789e-05;
      fVar17 = fVar16 * fVar16;
      fVar14 = fVar17 * fVar16 * 1.5;
      fVar15 = fVar17 * fVar16 * 0.5;
      uVar6 = uVar11 & uVar7;
      uVar11 = uVar11 + 1;
      fVar13 = *(float *)(iVar3 + uVar6 * 4);
      puVar9[0xc00] =
           (uint)(((fVar17 - fVar15) - fVar16 * 0.5) * *(float *)(iVar3 + (uVar10 + 1 & uVar7) * 4)
                  + ((fVar14 - fVar17 * 2.5) + 1.0) * *(float *)(iVar3 + (uVar10 & uVar7) * 4) +
                  (((fVar17 + fVar17) - fVar14) + fVar16 * 0.5) *
                  *(float *)(iVar3 + (uVar10 - 1 & uVar7) * 4) +
                 (fVar15 - fVar17 * 0.5) * *(float *)(iVar3 + (uVar10 - 2 & uVar7) * 4));
      puVar9 = puVar9 + 1;
      *(float *)(iVar3 + (uStack_10 & uVar7) * 4) = fVar1 * fVar13 + fVar2;
      uStack_10 = uStack_10 + 1;
      uStack_28 = uStack_28 - 1;
    } while (uStack_28 != 0);
  }
  (*(code *)PTR_FUN_012ba8a0)
            (param_1 + 0x2030,param_1 + 0x2030 + param_2 * 4,param_5,param_6,param_1 + 0x4030,
             param_1 + 0x4070,param_2,0);
  (*(code *)PTR_FUN_012ba8a0)
            (param_1 + 0x3030,param_1 + 0x3030 + param_2 * 4,param_5,param_6,param_1 + 0x40b0,
             param_1 + 0x40f0,param_2,0);
  *(uint *)(param_1 + 0x1c) = uStack_10;
  return;
}



undefined4 * __thiscall
FUN_00e2b740(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  iVar8 = *param_2;
  iVar4 = *(int *)(iVar8 + 4);
  dVar1 = (double)(&DAT_011a2c10)[-(iVar4 >> 0x1f)];
  *(undefined4 *)(param_1 + 0x4130) = *param_4;
  fVar11 = (float)((double)iVar4 + dVar1);
  iVar3 = (int)(fVar11 * (float)param_4[5] * 65536.0 + 0.5);
  iVar4 = 0x180000;
  if (0x180000 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x4134) = iVar4;
  fVar10 = (float)(iVar4 + -0x180000);
  if ((float)iVar4 * (float)param_4[3] <= (float)(iVar4 + -0x180000)) {
    fVar10 = (float)iVar4 * (float)param_4[3];
  }
  *(float *)(param_1 + 0x4138) = fVar10;
  *(undefined4 *)(param_1 + 0x413c) = param_4[4];
  puVar7 = &DAT_010e6ab8;
  bVar9 = *(char *)(iVar8 + 0x40) == '\x01';
  if (bVar9) {
    puVar7 = &DAT_010e6a38;
  }
  puVar5 = &DAT_010e6af8;
  if (bVar9) {
    puVar5 = &DAT_010e6a78;
  }
  uVar2 = *(undefined4 *)(param_5 + 0x84);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  func_0x00e1c4d0(param_5,puVar7,*(undefined4 *)(param_3 + 0x90));
  func_0x00e1c4d0(param_5,puVar5,*(undefined4 *)(param_3 + 0x90));
  if ((float)param_4[2] <= 0.0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return param_4;
  }
  fVar10 = fVar11 / (float)param_4[2] + 0.5;
  fVar11 = 5965052.0;
  if (fVar10 <= 5965052.0) {
    fVar11 = fVar10;
  }
  iVar8 = (int)fVar11;
  uVar6 = *(uint *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar8;
  *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) * iVar8) / uVar6;
  if (*(int *)(param_1 + 0x4130) == 0) {
    fVar11 = 6.2831855;
  }
  else {
    if (*(int *)(param_1 + 0x4130) != 1) goto LAB_00e2b90e;
    fVar11 = 4.0;
  }
  *(float *)(param_1 + 0x28) =
       fVar11 / (float)((double)iVar8 + (double)(&DAT_011a2c10)[-(iVar8 >> 0x1f)]);
LAB_00e2b90e:
  iVar4 = param_4[1];
  iVar3 = iVar4 + 0x168;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  uVar6 = iVar3 * iVar8 + 0xb4;
  *(uint *)(param_1 + 0x2c) = uVar6 / 0x168;
  return (undefined4 *)(uVar6 * 0x6c16c16d);
}



void FUN_00e2b950(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *_Dst;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_c [12];
  
  _Dst = (undefined4 *)func_0x00ddbb30(4,0xa0);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0xa0);
    _Dst[1] = 1;
    _Dst[3] = 0;
    *_Dst = _anon_870005FF::CompressorState::vftable;
    iVar3 = 0x10;
    puVar2 = _Dst + 4;
    do {
      *puVar2 = 0xffffffff;
      puVar2[1] = 0x3f800000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 2;
    } while (iVar3 != 0);
    *(undefined1 *)(_Dst + 0x24) = 1;
    _Dst[0x25] = 0x3f800000;
    _Dst[0x26] = 0x3f800000;
    _Dst[0x27] = 0x3f800000;
    *param_1 = _Dst;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00e2ba00(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0xa0);
  }
  return param_1;
}



undefined ** FUN_00e2ba40(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e2964) {
    func_0x008ab40d(&DAT_013e2964);
    if (DAT_013e2964 == -1) {
      func_0x008ab7fd(FUN_00f75cb0);
      func_0x008ab3bc(&DAT_013e2964);
    }
  }
  return &PTR_vftable_012ba8b8;
}



void __fastcall FUN_00e2baa0(int param_1)

{
  double dVar1;
  
  dVar1 = 4.0;
  func_0x00e879bf();
  *(float *)(param_1 + 0x94) = (float)dVar1;
  dVar1 = 0.25;
  func_0x00e879bf();
  *(float *)(param_1 + 0x98) = (float)dVar1;
  return;
}



// WARNING: Type propagation algorithm not settling

void __thiscall FUN_00e2bb40(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iStack_43c;
  int iStack_438;
  int iStack_434;
  int iStack_430;
  float *pfStack_42c;
  uint uStack_428;
  int *piStack_424;
  float *pfStack_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  int iStack_410;
  float *pfStack_40c;
  int iStack_408;
  float fStack_404;
  float fStack_400;
  float afStack_3fc [2];
  float afStack_3f4 [4];
  float afStack_3e4 [248];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_43c;
  uStack_428 = 0;
  if (param_2 != 0) {
    do {
      iStack_410 = param_3;
      fVar13 = *(float *)(param_1 + 0x9c);
      pfStack_420 = (float *)0x100;
      if ((float *)(param_2 - uStack_428) < (float *)0x100) {
        pfStack_420 = (float *)(param_2 - uStack_428);
      }
      pfVar8 = (float *)0x0;
      if (*(char *)(param_1 + 0x90) == '\0') {
        if (pfStack_420 != (float *)0x0) {
          do {
            if (1.0 <= fVar13) {
              if ((1.0 < fVar13) && (fVar13 = fVar13 * *(float *)(param_1 + 0x98), fVar13 <= 1.0)) {
                fVar13 = 1.0;
              }
            }
            else {
              fVar14 = fVar13 * *(float *)(param_1 + 0x94);
              fVar13 = 1.0;
              if (fVar14 <= 1.0) {
                fVar13 = fVar14;
              }
            }
            (&fStack_404)[(int)pfVar8] = 1.0 / fVar13;
            pfVar8 = (float *)((int)pfVar8 + 1);
          } while (pfVar8 < pfStack_420);
        }
      }
      else if (pfStack_420 != (float *)0x0) {
        pfVar9 = (float *)(param_3 + uStack_428 * 4);
        do {
          fVar14 = 0.5;
          if (0.5 <= ABS(*pfVar9)) {
            fVar14 = ABS(*pfVar9);
          }
          if (2.0 <= fVar14) {
            fVar14 = 2.0;
          }
          if (fVar14 <= fVar13) {
            if ((fVar14 < fVar13) &&
               (fVar13 = fVar13 * *(float *)(param_1 + 0x98), fVar13 <= fVar14)) {
              fVar13 = fVar14;
            }
          }
          else {
            fVar12 = fVar13 * *(float *)(param_1 + 0x94);
            fVar13 = fVar14;
            if (fVar12 <= fVar14) {
              fVar13 = fVar12;
            }
          }
          pfVar9 = pfVar9 + 1;
          (&fStack_404)[(int)pfVar8] = 1.0 / fVar13;
          pfVar8 = (float *)((int)pfVar8 + 1);
        } while (pfVar8 < pfStack_420);
      }
      piStack_424 = (int *)(param_1 + 0x10);
      *(float *)(param_1 + 0x9c) = fVar13;
      iStack_418 = param_4;
      if (param_3 != param_4) {
        do {
          if (*piStack_424 != -1) {
            iStack_414 = iStack_410 + uStack_428 * 4;
            iStack_408 = param_5 + (uStack_428 + *piStack_424 * 0x400) * 4;
            fVar13 = (float)piStack_424[1];
            if ((ABS(fVar13) <= 1e-05) && (pfVar8 = (float *)0x0, pfStack_420 != (float *)0x0)) {
              if (&DAT_0000000f < pfStack_420) {
                iStack_41c = iStack_414 - iStack_408;
                pfStack_42c = (float *)(iStack_414 + 0x30);
                iStack_430 = (int)&fStack_404 - iStack_408;
                pfVar9 = (float *)(iStack_408 + 0x10);
                iStack_434 = (int)afStack_3f4 - iStack_408;
                iStack_438 = (int)afStack_3e4 - iStack_408;
                pfVar10 = pfStack_42c;
                do {
                  fVar14 = pfVar10[-0xb];
                  fVar12 = pfVar10[-10];
                  fVar3 = pfVar10[-9];
                  pfVar1 = &fStack_404 + (int)pfVar8;
                  fVar4 = (&fStack_400)[(int)pfVar8];
                  fVar5 = afStack_3fc[(int)pfVar8];
                  fVar6 = afStack_3fc[(int)((int)pfVar8 + 1)];
                  pfVar8 = pfVar8 + 4;
                  pfVar9[-4] = *pfVar1 * pfVar10[-0xc] * fVar13 + pfVar9[-4];
                  pfVar9[-3] = fVar4 * fVar14 * fVar13 + pfVar9[-3];
                  pfVar9[-2] = fVar5 * fVar12 * fVar13 + pfVar9[-2];
                  pfVar9[-1] = fVar6 * fVar3 * fVar13 + pfVar9[-1];
                  pfVar1 = (float *)(iStack_41c + (int)pfVar9);
                  fVar14 = pfVar1[1];
                  fVar12 = pfVar1[2];
                  fVar3 = pfVar1[3];
                  pfVar2 = (float *)(iStack_430 + (int)pfVar9);
                  fVar4 = pfVar2[1];
                  fVar5 = pfVar2[2];
                  fVar6 = pfVar2[3];
                  *pfVar9 = *pfVar2 * *pfVar1 * fVar13 + *pfVar9;
                  pfVar9[1] = fVar4 * fVar14 * fVar13 + pfVar9[1];
                  pfVar9[2] = fVar5 * fVar12 * fVar13 + pfVar9[2];
                  pfVar9[3] = fVar6 * fVar3 * fVar13 + pfVar9[3];
                  fVar14 = pfVar10[-3];
                  fVar12 = pfVar10[-2];
                  fVar3 = pfVar10[-1];
                  pfVar1 = (float *)(iStack_434 + (int)pfVar9);
                  fVar4 = pfVar1[1];
                  fVar5 = pfVar1[2];
                  fVar6 = pfVar1[3];
                  pfVar9[4] = *pfVar1 * pfVar10[-4] * fVar13 + pfVar9[4];
                  pfVar9[5] = fVar4 * fVar14 * fVar13 + pfVar9[5];
                  pfVar9[6] = fVar5 * fVar12 * fVar13 + pfVar9[6];
                  pfVar9[7] = fVar6 * fVar3 * fVar13 + pfVar9[7];
                  fVar14 = *pfVar10;
                  fVar12 = pfVar10[1];
                  fVar3 = pfVar10[2];
                  fVar4 = pfVar10[3];
                  pfVar10 = pfVar10 + 0x10;
                  pfVar1 = (float *)(iStack_438 + (int)pfVar9);
                  fVar5 = pfVar1[1];
                  fVar6 = pfVar1[2];
                  fVar7 = pfVar1[3];
                  pfVar9[8] = *pfVar1 * fVar14 * fVar13 + pfVar9[8];
                  pfVar9[9] = fVar5 * fVar12 * fVar13 + pfVar9[9];
                  pfVar9[10] = fVar6 * fVar3 * fVar13 + pfVar9[10];
                  pfVar9[0xb] = fVar7 * fVar4 * fVar13 + pfVar9[0xb];
                  pfVar9 = pfVar9 + 0x10;
                } while (pfVar8 < (float *)((uint)pfStack_420 & 0xfffffff0));
                pfStack_40c = (float *)((uint)pfStack_420 & 0xfffffff0);
                if (pfStack_420 <= pfVar8) goto LAB_00e2befc;
              }
              if (3 < (uint)((int)pfStack_420 - (int)pfVar8)) {
                pfVar9 = (float *)(iStack_414 + (int)((int)pfVar8 + 3) * 4);
                pfStack_42c = (float *)((int)pfStack_420 + -3);
                iStack_438 = (int)&fStack_404 - iStack_408;
                iStack_434 = (int)&fStack_400 - iStack_408;
                pfVar10 = (float *)(iStack_408 + (int)pfVar8 * 4 + 4);
                iStack_430 = (int)afStack_3fc - iStack_408;
                do {
                  pfVar1 = &fStack_404 + (int)pfVar8;
                  pfVar8 = pfVar8 + 1;
                  pfVar10[-1] = *pfVar1 * pfVar9[-3] * fVar13 + pfVar10[-1];
                  *pfVar10 = *(float *)((int)pfVar10 + (iStack_414 - iStack_408)) *
                             *(float *)((int)pfVar10 + iStack_438) * fVar13 + *pfVar10;
                  pfVar10[1] = *(float *)((int)pfVar10 + iStack_434) * pfVar9[-1] * fVar13 +
                               pfVar10[1];
                  fVar14 = *pfVar9;
                  pfVar9 = pfVar9 + 4;
                  pfVar10[2] = *(float *)((int)pfVar10 + iStack_430) * fVar14 * fVar13 + pfVar10[2];
                  pfVar10 = pfVar10 + 4;
                } while (pfVar8 < pfStack_42c);
                pfStack_40c = pfVar8;
                if (pfStack_420 <= pfVar8) goto LAB_00e2befc;
              }
              iStack_414 = iStack_414 - (int)&fStack_404;
              pfVar9 = (float *)(iStack_408 + (int)pfVar8 * 4);
              pfStack_40c = (float *)((int)&fStack_404 - iStack_408);
              iVar11 = (int)pfStack_420 - (int)pfVar8;
              do {
                *pfVar9 = *(float *)((int)pfStack_40c + (int)pfVar9 + iStack_414) *
                          *(float *)((int)pfStack_40c + (int)pfVar9) * fVar13 + *pfVar9;
                pfVar9 = pfVar9 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar11 != 0);
            }
          }
LAB_00e2befc:
          iStack_410 = iStack_410 + 0x1000;
          piStack_424 = piStack_424 + 2;
        } while (iStack_410 != param_4);
      }
      iStack_410 = param_3;
      uStack_428 = uStack_428 + (int)pfStack_420;
    } while (uStack_428 < param_2);
  }
  iStack_43c = param_1;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00e2bf60(int param_1,undefined4 param_2,int param_3,undefined1 *param_4,int param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  float fVar6;
  int *piVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  
  *(undefined1 *)(param_1 + 0x90) = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_5 + 0x84);
  *(undefined4 *)(param_1 + 8) = uVar2;
  fVar1 = *(float *)(param_3 + 0x90);
  iVar3 = *(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc;
  fVar6 = (float)(*(int *)(param_5 + 0x84) - *(int *)(param_5 + 0x80) >> 0xc);
  if (iVar3 != 0) {
    pfVar9 = (float *)(param_1 + 0x14);
    piVar7 = (int *)(param_3 + 0xc);
    param_3 = iVar3;
    do {
      fVar8 = -NAN;
      fVar4 = 0.0;
      fVar10 = 0.0;
      if (fVar6 != 0.0) {
        piVar5 = (int *)(param_5 + 4);
        do {
          if (*piVar5 == *piVar7) {
            fVar10 = fVar1 * *(float *)(param_5 + (int)fVar4 * 8);
            fVar8 = fVar4;
            break;
          }
          fVar4 = (float)((int)fVar4 + 1);
          piVar5 = piVar5 + 2;
        } while ((uint)fVar4 < (uint)fVar6);
      }
      pfVar9[-1] = fVar8;
      piVar7 = piVar7 + 2;
      *pfVar9 = fVar10;
      pfVar9 = pfVar9 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_00e2c010(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(0x10,0x2090);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    *(undefined8 *)(puVar2 + 0x19) = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = _anon_F43A41D1::DistortionState::vftable;
    memset(puVar2 + 4,0,0x40);
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0x3f800000;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0x3f800000;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    memset(puVar2 + 0x24,0,0x2000);
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00e2c130(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x2090);
  }
  return param_1;
}



undefined ** FUN_00e2c170(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e2968) {
    func_0x008ab40d(&DAT_013e2968);
    if (DAT_013e2968 == -1) {
      func_0x008ab7fd(FUN_00f75cc0);
      func_0x008ab3bc(&DAT_013e2968);
    }
  }
  return &PTR_vftable_012ba8bc;
}



void __fastcall FUN_00e2c1d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



void __thiscall
FUN_00e2c1f0(int param_1,uint param_2,int param_3,undefined4 param_4,float param_5,float param_6)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  int iVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar30;
  float fVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float *pfStack_58;
  undefined1 (*pauStack_50) [16];
  uint uStack_48;
  undefined1 (*pauStack_44) [16];
  float fStack_38;
  
  fVar3 = *(float *)(param_1 + 0x8c);
  uStack_48 = 0;
  if (param_2 != 0) {
    pauVar17 = (undefined1 (*) [16])(param_1 + 0x90);
    fVar1 = (float)(param_1 + 0x6c);
    pfVar11 = (float *)(param_1 + 0x10);
    pauStack_44 = pauVar17;
    do {
      uVar12 = (param_2 - uStack_48) * 4;
      uVar20 = 0x400;
      if (uVar12 < 0x400) {
        uVar20 = uVar12;
      }
      uVar12 = 0;
      pauVar18 = pauVar17;
      if (uVar20 != 0) {
        do {
          if ((uVar12 & 3) == 0) {
            fVar21 = *(float *)(param_3 + ((uVar12 >> 2) + uStack_48) * 4) * 4.0;
          }
          else {
            fVar21 = 0.0;
          }
          *(float *)*pauVar17 = fVar21;
          uVar12 = uVar12 + 1;
          pauVar17 = (undefined1 (*) [16])((int)*pauVar17 + 4);
          pauVar18 = pauStack_44;
        } while (uVar12 < uVar20);
      }
      func_0x00e1ad60(pauVar18,(float *)((int)*pauVar18 + uVar20 * 4),param_1 + 0x1090);
      pauStack_44 = (undefined1 (*) [16])0x0;
      pfVar2 = (float *)(param_1 + 0x2120 + uVar20 * 4);
      uVar12 = (uint)((int)pfVar2 + (3 - (int)pfStack_58)) >> 2;
      if (pfVar2 < pfStack_58) {
        uVar12 = 0;
      }
      pfVar14 = pfStack_58;
      if (((uVar12 != 0) && (7 < uVar12)) &&
         (((undefined1 (*) [16])(pfStack_58 + (uVar12 - 1)) < pauStack_50 ||
          ((float *)((int)pauVar18[-1] + (uVar12 + 3) * 4) < pfStack_58)))) {
        uVar13 = 0;
        fVar21 = fVar3 + 1.0;
        fVar33 = fVar1 + 1.0;
        fVar34 = (float)pfVar11 + 1.0;
        fVar35 = fVar3 + 1.0;
        do {
          uVar13 = uVar13 + 8;
          auVar23._0_4_ = *pfVar14 * fVar21;
          auVar23._4_4_ = pfVar14[1] * fVar33;
          auVar23._8_4_ = pfVar14[2] * fVar34;
          auVar23._12_4_ = pfVar14[3] * fVar35;
          auVar24._4_4_ = ABS(pfVar14[1]) * fVar1 + 1.0;
          auVar24._0_4_ = ABS(*pfVar14) * fVar3 + 1.0;
          auVar24._8_4_ = ABS(pfVar14[2]) * (float)pfVar11 + 1.0;
          auVar24._12_4_ = ABS(pfVar14[3]) * fVar3 + 1.0;
          auVar24 = divps(auVar23,auVar24);
          auVar25._0_4_ = auVar24._0_4_ * fVar21;
          auVar25._4_4_ = auVar24._4_4_ * fVar33;
          auVar25._8_4_ = auVar24._8_4_ * fVar34;
          auVar25._12_4_ = auVar24._12_4_ * fVar35;
          auVar4._4_4_ = ABS(auVar24._4_4_) * fVar1 + 1.0;
          auVar4._0_4_ = ABS(auVar24._0_4_) * fVar3 + 1.0;
          auVar4._8_4_ = ABS(auVar24._8_4_) * (float)pfVar11 + 1.0;
          auVar4._12_4_ = ABS(auVar24._12_4_) * fVar3 + 1.0;
          auVar24 = divps(auVar25,auVar4);
          fVar22 = auVar24._0_4_ * -1.0;
          fVar30 = auVar24._4_4_ * -1.0;
          fVar31 = auVar24._8_4_ * -1.0;
          fVar32 = auVar24._12_4_ * -1.0;
          auVar26._0_4_ = fVar22 * fVar21;
          auVar26._4_4_ = fVar30 * fVar33;
          auVar26._8_4_ = fVar31 * fVar34;
          auVar26._12_4_ = fVar32 * fVar35;
          auVar5._4_4_ = ABS(fVar30) * fVar1 + 1.0;
          auVar5._0_4_ = ABS(fVar22) * fVar3 + 1.0;
          auVar5._8_4_ = ABS(fVar31) * (float)pfVar11 + 1.0;
          auVar5._12_4_ = ABS(fVar32) * fVar3 + 1.0;
          auVar24 = divps(auVar26,auVar5);
          *pauVar18 = auVar24;
          pfVar15 = pfVar14 + 4;
          pfVar16 = pfVar14 + 5;
          pfVar9 = pfVar14 + 6;
          pfVar10 = pfVar14 + 7;
          pfVar14 = pfVar14 + 8;
          auVar27._0_4_ = *pfVar15 * fVar21;
          auVar27._4_4_ = *pfVar16 * fVar33;
          auVar27._8_4_ = *pfVar9 * fVar34;
          auVar27._12_4_ = *pfVar10 * fVar35;
          auVar6._4_4_ = ABS(*pfVar16) * fVar1 + 1.0;
          auVar6._0_4_ = ABS(*pfVar15) * fVar3 + 1.0;
          auVar6._8_4_ = ABS(*pfVar9) * (float)pfVar11 + 1.0;
          auVar6._12_4_ = ABS(*pfVar10) * fVar3 + 1.0;
          auVar24 = divps(auVar27,auVar6);
          auVar28._0_4_ = auVar24._0_4_ * fVar21;
          auVar28._4_4_ = auVar24._4_4_ * fVar33;
          auVar28._8_4_ = auVar24._8_4_ * fVar34;
          auVar28._12_4_ = auVar24._12_4_ * fVar35;
          auVar7._4_4_ = ABS(auVar24._4_4_) * fVar1 + 1.0;
          auVar7._0_4_ = ABS(auVar24._0_4_) * fVar3 + 1.0;
          auVar7._8_4_ = ABS(auVar24._8_4_) * (float)pfVar11 + 1.0;
          auVar7._12_4_ = ABS(auVar24._12_4_) * fVar3 + 1.0;
          auVar24 = divps(auVar28,auVar7);
          fVar22 = auVar24._0_4_ * -1.0;
          fVar30 = auVar24._4_4_ * -1.0;
          fVar31 = auVar24._8_4_ * -1.0;
          fVar32 = auVar24._12_4_ * -1.0;
          auVar29._0_4_ = fVar22 * fVar21;
          auVar29._4_4_ = fVar30 * fVar33;
          auVar29._8_4_ = fVar31 * fVar34;
          auVar29._12_4_ = fVar32 * fVar35;
          auVar8._4_4_ = ABS(fVar30) * fVar1 + 1.0;
          auVar8._0_4_ = ABS(fVar22) * fVar3 + 1.0;
          auVar8._8_4_ = ABS(fVar31) * (float)pfVar11 + 1.0;
          auVar8._12_4_ = ABS(fVar32) * fVar3 + 1.0;
          auVar24 = divps(auVar29,auVar8);
          pauVar18[1] = auVar24;
          pauVar18 = pauVar18 + 2;
        } while (uVar13 != (uVar12 & 0xfffffff8));
      }
      if (pfVar14 != pfVar2) {
        iVar19 = (int)pauVar18 - (int)pfVar14;
        fVar21 = fStack_38 + 1.0;
        do {
          fVar33 = (fVar21 * *pfVar14) / (ABS(*pfVar14) * fStack_38 + 1.0);
          fVar33 = ((fVar21 * fVar33) / (ABS(fVar33) * fStack_38 + 1.0)) * -1.0;
          *(float *)(iVar19 + (int)pfVar14) = (fVar21 * fVar33) / (ABS(fVar33) * fStack_38 + 1.0);
          pfVar14 = pfVar14 + 1;
        } while (pfVar14 != pfVar2);
      }
      func_0x00e1ad60(pauStack_50,(float *)((int)*pauStack_50 + uVar20 * 4),pfStack_58);
      fStack_38 = param_6;
      uVar20 = uVar20 >> 2;
      pfVar14 = pfVar11;
      fVar21 = param_5;
      pauVar17 = pauStack_50;
      if (param_5 != param_6) {
        do {
          fVar33 = *pfVar14;
          if (1e-05 < ABS(fVar33)) {
            uVar12 = 0;
            if (3 < uVar20) {
              pfVar16 = (float *)(param_1 + 0x10a0);
              pfVar15 = (float *)((int)fVar21 + ((int)pfVar2 + 2U) * 4);
              iVar19 = (uVar20 - 4 >> 2) + 1;
              uVar12 = iVar19 * 4;
              do {
                pfVar15[-2] = fVar33 * pfVar16[-4] + pfVar15[-2];
                pfVar15[-1] = fVar33 * *pfVar16 + pfVar15[-1];
                *pfVar15 = fVar33 * pfVar16[4] + *pfVar15;
                pfVar9 = pfVar16 + 8;
                pfVar16 = pfVar16 + 0x10;
                pfVar15[1] = fVar33 * *pfVar9 + pfVar15[1];
                pfVar15 = pfVar15 + 4;
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
            }
            if (uVar12 < uVar20) {
              pfVar16 = (float *)((uVar12 + 0x109) * 0x10 + param_1);
              pfVar15 = (float *)((int)fVar21 + ((int)pfVar2 + uVar12) * 4);
              iVar19 = uVar20 - uVar12;
              do {
                fVar34 = *pfVar16;
                pfVar16 = pfVar16 + 4;
                *pfVar15 = fVar33 * fVar34 + *pfVar15;
                pfVar15 = pfVar15 + 1;
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
            }
          }
          fVar21 = (float)((int)fVar21 + 0x1000);
          pfVar14 = pfVar14 + 1;
        } while (fVar21 != param_6);
        pauVar17 = (undefined1 (*) [16])0x0;
      }
      uStack_48 = (int)pfVar2 + uVar20;
    } while (uStack_48 < param_2);
  }
  return;
}



void __thiscall FUN_00e2c5e0(int param_1,int *param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  double dVar4;
  float fVar5;
  
  dVar4 = (double)(*param_4 * 1.5707964);
  func_0x00e8799b();
  iVar1 = *param_2;
  fVar5 = 0.99;
  if ((float)dVar4 <= 0.99) {
    fVar5 = (float)dVar4;
  }
  *(float *)(param_1 + 0x8c) = (fVar5 + fVar5) / (1.0 - fVar5);
  fVar5 = (float)((double)*(int *)(iVar1 + 4) +
                 (double)(&DAT_011a2c10)[-(*(int *)(iVar1 + 4) >> 0x1f)]);
  func_0x00e879c5();
  func_0x00e8799b();
  func_0x00e87a1c();
  func_0x00e1ae00();
  func_0x00e8799b();
  fVar3 = (float10)func_0x00e87a1c();
  func_0x00e1ae00();
  uVar2 = *(undefined4 *)((int)fVar5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)fVar5 + 0x84);
  *(undefined4 *)(param_1 + 8) = uVar2;
  func_0x00e1c4d0(fVar5,&DAT_010e6b88,*(float *)(SUB84((double)fVar3,0) + 0x90) * param_4[1]);
  return;
}



void FUN_00e2c820(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *_Dst;
  int iVar2;
  undefined4 *_Dst_00;
  undefined1 auStack_c [12];
  
  _Dst = (undefined4 *)func_0x00ddbb30(0x10,0x2150);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x2150);
    _Dst[1] = 1;
    _Dst_00 = _Dst + 10;
    _Dst[3] = 0;
    _Dst[4] = 0;
    iVar2 = 2;
    _Dst[5] = 0;
    _Dst[6] = 0;
    *_Dst = _anon_44D29EBD::EchoState::vftable;
    _Dst[7] = 0;
    _Dst[8] = 0;
    _Dst[9] = 0;
    do {
      memset(_Dst_00,0,0x40);
      memset(_Dst_00 + 0x10,0,0x40);
      _Dst_00 = _Dst_00 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _Dst[0x4a] = 0;
    _Dst[0x4b] = 0;
    _Dst[0x4c] = 0x3f800000;
    _Dst[0x4d] = 0;
    _Dst[0x4e] = 0;
    _Dst[0x4f] = 0;
    _Dst[0x50] = 0;
    _Dst[0x51] = 0;
    *param_1 = _Dst;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int __thiscall FUN_00e2c930(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x2150);
  }
  return param_1;
}



undefined ** FUN_00e2c990(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e296c) {
    func_0x008ab40d(&DAT_013e296c);
    if (DAT_013e296c == -1) {
      func_0x008ab7fd(FUN_00f75cd0);
      func_0x008ab3bc(&DAT_013e296c);
    }
  }
  return &PTR_vftable_012ba8c0;
}



// WARNING: Removing unreachable block (ram,0x00e2cbf4)
// WARNING: Removing unreachable block (ram,0x00e2cbf8)
// WARNING: Removing unreachable block (ram,0x00e2cc00)
// WARNING: Removing unreachable block (ram,0x00e2cc08)
// WARNING: Removing unreachable block (ram,0x00e2cbcd)
// WARNING: Removing unreachable block (ram,0x00e2cb2b)
// WARNING: Removing unreachable block (ram,0x00e2cb2f)
// WARNING: Removing unreachable block (ram,0x00e2cb37)
// WARNING: Removing unreachable block (ram,0x00e2cb3f)
// WARNING: Removing unreachable block (ram,0x00e2cb4b)
// WARNING: Removing unreachable block (ram,0x00e2cbad)
// WARNING: Removing unreachable block (ram,0x00e2cbb1)
// WARNING: Removing unreachable block (ram,0x00e2cbb9)
// WARNING: Removing unreachable block (ram,0x00e2cbc1)
// WARNING: Removing unreachable block (ram,0x00e2cc1a)
// WARNING: Removing unreachable block (ram,0x00e2cb6b)
// WARNING: Removing unreachable block (ram,0x00e2cb75)
// WARNING: Removing unreachable block (ram,0x00e2cb78)
// WARNING: Removing unreachable block (ram,0x00e2cb7c)
// WARNING: Removing unreachable block (ram,0x00e2cc66)
// WARNING: Removing unreachable block (ram,0x00e2cc77)
// WARNING: Removing unreachable block (ram,0x00e2cc7b)

void __thiscall FUN_00e2c9f0(int param_1,void *param_2)

{
  int *piVar1;
  size_t _Size;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  float fVar9;
  int aiStack_38 [3];
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  void *pvStack_8;
  int iStack_4;
  
  fVar9 = (float)((double)*(int *)((int)param_2 + 4) +
                 (double)(&DAT_011a2c10)[-(*(int *)((int)param_2 + 4) >> 0x1f)]);
  uVar3 = (int)(fVar9 * 0.404 + 0.5) + (int)(fVar9 * 0.207 + 0.5);
  if (uVar3 != 0) {
    uVar3 = uVar3 - 1 | uVar3 - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
  }
  piVar1 = (int *)(param_1 + 0x10);
  uVar3 = uVar3 + 1;
  iStack_4 = param_1;
  if (uVar3 != *(int *)(param_1 + 0x14) - *piVar1 >> 2) {
    pvVar6 = (void *)0x0;
    pvVar7 = (void *)0x0;
    param_2 = (void *)0x0;
    if (uVar3 == 0) {
      pvVar4 = (void *)*piVar1;
    }
    else {
      if (0x3fffffff < uVar3) {
        func_0x0046e700();
LAB_00e2cca2:
        func_0x0062c530();
        func_0x00e87d2e(auStack_2c,&DAT_0125c4dc);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      _Size = uVar3 * 4;
      pvVar7 = (void *)func_0x00ddbb30(0x10,_Size);
      if (pvVar7 == (void *)0x0) goto LAB_00e2cca2;
      param_2 = (void *)(_Size + (int)pvVar7);
      pvStack_8 = param_2;
      memset(pvVar7,0,_Size);
      pvVar4 = *(void **)(iStack_4 + 0x10);
      pvVar6 = pvStack_8;
    }
    if (aiStack_38 != piVar1) {
      *(void **)(param_1 + 0x14) = pvVar6;
      *piVar1 = (int)pvVar7;
      *(void **)(param_1 + 0x18) = param_2;
      pvVar7 = pvVar4;
    }
    if (pvVar7 != (void *)0x0) {
      func_0x00ddbb20(pvVar7);
    }
  }
  iVar5 = iStack_4;
  uStack_c = 0;
  uStack_10 = 0;
  memset((void *)*piVar1,0,*(int *)(iStack_4 + 0x14) - *piVar1 & 0xfffffffc);
  if (iVar5 + 0x28 != iVar5 + 0x128) {
    uStack_14 = 0;
    uStack_18 = 0;
    pvStack_8 = (void *)0x0;
    uStack_1c = 0;
    uStack_20 = 0;
    pvVar6 = (void *)(iVar5 + 0x68);
    do {
      pvVar7 = (void *)((int)pvVar6 + -0x40);
      if (pvStack_8 == (void *)0x0) {
        memset(pvVar7,0,0x40);
      }
      else {
        iVar5 = (-(uint)(pvVar6 < pvVar7) & 0xfffffff0) + 0x10;
        if (pvVar7 <= pvVar6) {
          puVar8 = (undefined4 *)((int)pvVar6 + -0x40);
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
        }
      }
      memset(pvVar6,0,0x40);
      iVar5 = (int)pvVar6 + 0x40;
      pvVar6 = (void *)((int)pvVar6 + 0x80);
    } while (iVar5 != iStack_4 + 0x128);
  }
  return;
}



void __thiscall
FUN_00e2ccc0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uStack_34;
  float *pfStack_2c;
  float fStack_c;
  float fStack_8;
  
  uVar10 = 0;
  iVar13 = *(int *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x130);
  fVar6 = *(float *)(param_1 + 0x134);
  uVar15 = *(uint *)(param_1 + 0x24);
  fVar18 = *(float *)(param_1 + 0x128);
  uVar12 = uVar15 - *(int *)(param_1 + 0x20);
  fVar19 = *(float *)(param_1 + 300);
  uVar7 = (*(int *)(param_1 + 0x14) - iVar13 >> 2) - 1;
  fVar4 = *(float *)(param_1 + 0x140);
  uVar3 = *(undefined8 *)(param_1 + 0x138);
  if (param_2 != 0) {
    fStack_8 = (float)((ulonglong)uVar3 >> 0x20);
    uVar9 = uVar15 - *(int *)(param_1 + 0x1c);
    uVar14 = uVar15;
    do {
      uStack_34 = uVar12 & uVar7;
      uVar8 = uVar9 & uVar7;
      uVar15 = uVar14 & uVar7;
      if (uStack_34 < uVar8) {
        uVar12 = uVar9;
      }
      if ((uVar12 & uVar7) < uVar15) {
        uVar12 = uVar14;
      }
      uVar9 = (uVar7 - (uVar12 & uVar7)) + 1;
      pfStack_2c = (float *)(param_1 + 0x1150 + uVar10 * 4);
      if (param_2 - uVar10 < uVar9) {
        uVar9 = param_2 - uVar10;
      }
      do {
        fVar1 = *(float *)(param_3 + uVar10 * 4);
        uVar10 = uVar10 + 1;
        *(float *)(iVar13 + uVar15 * 4) = fVar1;
        iVar16 = uVar8 * 4;
        uVar8 = uVar8 + 1;
        pfStack_2c[-0x400] = *(float *)(iVar13 + iVar16);
        fVar2 = *(float *)(iVar13 + uStack_34 * 4);
        uVar12 = uStack_34 + 1;
        *pfStack_2c = fVar2;
        pfStack_2c = pfStack_2c + 1;
        fVar17 = fVar5 * fVar2 + fVar18;
        fVar18 = (fVar6 * fVar2 - fStack_8 * fVar17) + fVar19;
        fStack_c = (float)uVar3;
        fVar19 = fStack_c * fVar2 - fVar4 * fVar17;
        *(float *)(iVar13 + uVar15 * 4) = fVar17 * *(float *)(param_1 + 0x144) + fVar1;
        uVar15 = uVar15 + 1;
        uVar9 = uVar9 - 1;
        uStack_34 = uVar12;
      } while (uVar9 != 0);
      uVar9 = uVar8;
      uVar14 = uVar15;
    } while (uVar10 < param_2);
  }
  *(uint *)(param_1 + 0x24) = uVar15;
  iVar13 = param_1 + 0x28;
  *(float *)(param_1 + 0x128) = fVar18;
  iVar16 = param_1 + 0x150;
  *(float *)(param_1 + 300) = fVar19;
  iVar11 = 2;
  do {
    (*(code *)PTR_FUN_012ba8a0)
              (iVar16,iVar16 + param_2 * 4,param_5,param_6,iVar13,iVar13 + 0x40,param_2,0);
    iVar16 = iVar16 + 0x1000;
    iVar13 = iVar13 + 0x80;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}



void __thiscall
FUN_00e2ce90(int param_1,int *param_2,int param_3,float *param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  int iStack_108;
  float fStack_104;
  float fStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_14;
  
  uStack_14 = DAT_0128fd40 ^ (uint)&iStack_108;
  uStack_ec = param_5;
  uStack_e4 = param_6;
  uStack_f8._4_4_ =
       (float)((double)*(int *)(*param_2 + 4) +
              (double)(&DAT_011a2c10)[-(*(int *)(*param_2 + 4) >> 0x1f)]);
  uVar2 = (uint)(uStack_f8._4_4_ * *param_4 + 0.5);
  uVar4 = 1;
  if (1 < uVar2) {
    uVar4 = uVar2;
  }
  *(uint *)(param_1 + 0x1c) = uVar4;
  *(uint *)(param_1 + 0x20) = (int)(uStack_f8._4_4_ * param_4[1] + 0.5) + uVar4;
  fVar5 = 1.0 - param_4[2];
  if (fVar5 <= 0.0625) {
    fVar5 = 0.0625;
  }
  fStack_f0 = 0.001;
  if (0.001 <= fVar5) {
    fStack_f0 = fVar5;
  }
  uStack_f8._0_4_ = param_1;
  if ((1.0 / fStack_f0 + fStack_f0) * 0.0 + 2.0 < 0.0) {
    func_0x00e879a1();
  }
  func_0x00e1ae00();
  *(float *)(iStack_108 + 0x144) = param_4[3];
  dVar6 = (double)param_4[4];
  func_0x00e87a2e();
  fStack_100 = (float)dVar6;
  uStack_f8 = (double)-fStack_100;
  dVar6 = 0.0;
  func_0x00e87995();
  fVar5 = (float)dVar6;
  dVar6 = 0.0;
  func_0x00e8799b();
  fStack_104 = (float)dVar6;
  dVar6 = uStack_f8;
  func_0x00e87995();
  dVar7 = uStack_f8;
  func_0x00e8799b(fStack_104,(float)dVar6 * fVar5);
  puVar3 = (undefined4 *)func_0x00e1c0e0(&fStack_f0,-(float)dVar7 * fVar5);
  uStack_b0 = *puVar3;
  uStack_ac = puVar3[1];
  uStack_a8 = puVar3[2];
  uStack_a4 = puVar3[3];
  uStack_a0 = puVar3[4];
  uStack_9c = puVar3[5];
  uStack_98 = puVar3[6];
  uStack_94 = puVar3[7];
  uStack_90 = puVar3[8];
  uStack_8c = puVar3[9];
  uStack_88 = puVar3[10];
  uStack_84 = puVar3[0xb];
  uStack_80 = puVar3[0xc];
  uStack_7c = puVar3[0xd];
  uStack_78 = puVar3[0xe];
  uStack_74 = puVar3[0xf];
  dVar6 = (double)fStack_100;
  func_0x00e87995();
  dVar7 = (double)fStack_100;
  func_0x00e8799b(fStack_104,(float)dVar6 * fVar5);
  puVar3 = (undefined4 *)func_0x00e1c0e0(&fStack_f0,-(float)dVar7 * fVar5);
  uStack_70 = *puVar3;
  uStack_6c = puVar3[1];
  uStack_68 = puVar3[2];
  uStack_64 = puVar3[3];
  uStack_60 = puVar3[4];
  uStack_5c = puVar3[5];
  uStack_58 = puVar3[6];
  uStack_54 = puVar3[7];
  uStack_50 = puVar3[8];
  uStack_4c = puVar3[9];
  uStack_48 = puVar3[10];
  uStack_44 = puVar3[0xb];
  uStack_40 = puVar3[0xc];
  uStack_3c = puVar3[0xd];
  uStack_38 = puVar3[0xe];
  uStack_34 = puVar3[0xf];
  uVar1 = *(undefined4 *)(iStack_fc + 0x80);
  *(undefined4 *)(iStack_108 + 0xc) = *(undefined4 *)(iStack_fc + 0x84);
  *(undefined4 *)(iStack_108 + 8) = uVar1;
  func_0x00e1c4d0(iStack_fc,&uStack_b0,*(undefined4 *)(param_3 + 0x90));
  func_0x00e1c4d0(iStack_fc,&uStack_70,*(undefined4 *)(param_3 + 0x90));
  FUN_008ab370();
  return;
}



void FUN_00e2d1c0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(0x10,0x17d0);
  if (puVar2 != (undefined4 *)0x0) {
    memset(puVar2 + 3,0,0x7c4);
    puVar4 = puVar2 + 4;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = _anon_7A4B63AE::EqualizerState::vftable;
    iVar5 = 0x10;
    puVar3 = puVar2 + 7;
    do {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 0x1f;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0x3f800000;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0x3f800000;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0x3f800000;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0x3f800000;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0;
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 0x1f;
    } while (iVar5 != 0);
    memset(puVar2 + 500,0,0x1000);
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00e2d350(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x17d0);
  }
  return param_1;
}



undefined ** FUN_00e2d390(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e2970) {
    func_0x008ab40d(&DAT_013e2970);
    if (DAT_013e2970 == -1) {
      func_0x008ab7fd(FUN_00f75ce0);
      func_0x008ab3bc(&DAT_013e2970);
    }
  }
  return &PTR_vftable_012ba8c4;
}



void __fastcall FUN_00e2d3f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)(param_1 + 0x10) != (undefined4 *)(param_1 + 2000)) {
    puVar2 = (undefined4 *)(param_1 + 0x84);
    do {
      puVar2[-0x1d] = 0xffffffff;
      for (puVar1 = puVar2 + -0x1c; puVar1 != puVar2; puVar1 = puVar1 + 7) {
        puVar1[1] = 0;
        *puVar1 = 0;
      }
      *puVar2 = 0;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 0x1f;
    } while (puVar1 != (undefined4 *)(param_1 + 2000));
  }
  return;
}



void __thiscall FUN_00e2d450(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  int *piVar3;
  undefined4 unaff_EDI;
  int *piVar4;
  int *piVar5;
  
  piVar3 = (int *)(param_1 + 2000);
  piVar4 = (int *)(param_1 + 0x10);
  if (param_3 != param_4) {
    do {
      iVar2 = *piVar4;
      if (iVar2 != -1) {
        piVar5 = piVar4 + 8;
        func_0x00e1ac00(piVar5,param_3,param_2 * 4 + param_3,piVar3);
        piVar1 = piVar3 + (unaff_ESI >> 2);
        piVar3 = piVar5;
        func_0x00e1ac00(piVar4 + 0x16,unaff_EDI,piVar1,unaff_EDI);
        (*(code *)PTR_FUN_012ba8a4)
                  (piVar3,piVar1,iVar2 * 0x1000 + unaff_EBX,piVar4 + 0x1d,piVar4[0x1e],unaff_EDI);
      }
      param_3 = param_3 + 0x1000;
      piVar4 = piVar4 + 0x1f;
    } while (param_3 != param_4);
  }
  return;
}



void __thiscall FUN_00e2d510(int param_1,int *param_2,int param_3,float *param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  float unaff_EDI;
  float *pfVar7;
  float10 fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar5 = *(int *)(*param_2 + 4);
  dVar11 = (double)(&DAT_011a2c10)[-(iVar5 >> 0x1f)];
  dVar10 = (double)param_4[1];
  if (dVar10 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  fVar12 = 0.001;
  if (0.001 <= (float)dVar10) {
    fVar12 = (float)dVar10;
  }
  dVar10 = (double)((1.0 / fVar12 + fVar12) * 0.33333337 + 2.0);
  if (dVar10 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  fVar14 = 1.4013e-45;
  func_0x00e1ae00(1,*param_4 / (float)((double)iVar5 + dVar11),fVar12,(float)dVar10);
  fVar12 = param_4[2];
  func_0x00e879c5();
  func_0x00e8799b();
  fVar8 = (float10)func_0x00e87a1c();
  fVar9 = (float)fVar8 + (float)fVar8;
  dVar11 = (double)param_4[3];
  if (dVar11 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  fVar13 = 2.8026e-45;
  func_0x00e1ae00(2,fVar12 / unaff_EDI,(float)dVar11,fVar9);
  fVar12 = param_4[5];
  func_0x00e8799b();
  fVar8 = (float10)func_0x00e87a1c();
  fVar9 = (float)fVar8 + (float)fVar8;
  dVar11 = (double)param_4[6];
  if (dVar11 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  func_0x00e1ae00(2,fVar12 / fVar14,(float)dVar11,fVar9);
  dVar11 = (double)param_4[9];
  if (dVar11 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  fVar12 = 0.001;
  if (0.001 <= (float)dVar11) {
    fVar12 = (float)dVar11;
  }
  dVar11 = (double)((1.0 / fVar12 + fVar12) * 0.33333337 + 2.0);
  if (dVar11 < 0.0) {
    func_0x00e879a1();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  func_0x00e1ae00(0,param_4[8] / fVar13,fVar12,(float)dVar11);
  uVar6 = 1;
  if (1 < (uint)(*(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc)) {
    puVar2 = (undefined4 *)(param_1 + 0x9c);
    do {
      puVar2[-1] = *(undefined4 *)(param_1 + 0x1c);
      uVar6 = uVar6 + 1;
      *puVar2 = *(undefined4 *)(param_1 + 0x20);
      puVar2[1] = *(undefined4 *)(param_1 + 0x24);
      puVar2[2] = *(undefined4 *)(param_1 + 0x28);
      puVar2[3] = *(undefined4 *)(param_1 + 0x2c);
      puVar2[6] = *(undefined4 *)(param_1 + 0x38);
      puVar2[7] = *(undefined4 *)(param_1 + 0x3c);
      puVar2[8] = *(undefined4 *)(param_1 + 0x40);
      puVar2[9] = *(undefined4 *)(param_1 + 0x44);
      puVar2[10] = *(undefined4 *)(param_1 + 0x48);
      puVar2[0xd] = *(undefined4 *)(param_1 + 0x54);
      puVar2[0xe] = *(undefined4 *)(param_1 + 0x58);
      puVar2[0xf] = *(undefined4 *)(param_1 + 0x5c);
      puVar2[0x10] = *(undefined4 *)(param_1 + 0x60);
      puVar2[0x11] = *(undefined4 *)(param_1 + 100);
      puVar2[0x14] = *(undefined4 *)(param_1 + 0x70);
      puVar2[0x15] = *(undefined4 *)(param_1 + 0x74);
      puVar2[0x16] = *(undefined4 *)(param_1 + 0x78);
      puVar2[0x17] = *(undefined4 *)(param_1 + 0x7c);
      puVar2[0x18] = *(undefined4 *)(param_1 + 0x80);
      puVar2 = puVar2 + 0x1f;
    } while (uVar6 < (uint)(*(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc));
  }
  uVar1 = *(undefined4 *)(param_5 + 0x84);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  fVar12 = *(float *)(param_3 + 0x90);
  iVar5 = *(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc;
  fVar9 = (float)(*(int *)(param_5 + 0x84) - *(int *)(param_5 + 0x80) >> 0xc);
  if (iVar5 != 0) {
    pfVar7 = (float *)(param_1 + 0x88);
    piVar3 = (int *)(param_3 + 0xc);
    do {
      fVar14 = 0.0;
      fVar13 = 0.0;
      if (fVar9 == 0.0) {
        fVar14 = -NAN;
      }
      else {
        piVar4 = (int *)(param_5 + 4);
        do {
          if (*piVar4 == *piVar3) {
            fVar13 = fVar12 * *(float *)(param_5 + (int)fVar14 * 8);
            goto LAB_00e2d95c;
          }
          fVar14 = (float)((int)fVar14 + 1);
          piVar4 = piVar4 + 2;
        } while ((uint)fVar14 < (uint)fVar9);
        fVar14 = -NAN;
      }
LAB_00e2d95c:
      pfVar7[-0x1e] = fVar14;
      piVar3 = piVar3 + 2;
      *pfVar7 = fVar13;
      pfVar7 = pfVar7 + 0x1f;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}
