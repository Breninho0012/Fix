


void FUN_00e2d980(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(0x10,0x10140);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0;
    memset(puVar2 + 0x80e,0,0xd008);
    memset(puVar2 + 0x4010,0,0x100);
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = _anon_215083BD::FshifterState::vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    memset(puVar2 + 0xe,0,0x2000);
    iVar4 = 0x100;
    puVar3 = puVar2 + 0x80e;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
    iVar4 = 0x400;
    puVar3 = puVar2 + 0xc0e;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
    iVar4 = 0x400;
    puVar3 = puVar2 + 0x1c0e;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
    iVar4 = 0x400;
    puVar3 = puVar2 + 0x2c0e;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
    memset(puVar2 + 0x3c10,0,0x1000);
    puVar3 = puVar2 + 0x4010;
    iVar4 = 2;
    do {
      memset(puVar3,0,0x40);
      memset(puVar3 + 0x10,0,0x40);
      puVar3 = puVar3 + 0x20;
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



undefined4 __thiscall FUN_00e2db00(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x10140);
  }
  return param_1;
}



undefined ** FUN_00e2db40(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e4980) {
    func_0x008ab40d(&DAT_013e4980);
    if (DAT_013e4980 == -1) {
      func_0x008ab7fd(FUN_00f75cf0);
      func_0x008ab3bc(&DAT_013e4980);
    }
  }
  return &PTR_vftable_012ba8c8;
}



// WARNING: Removing unreachable block (ram,0x00e2dd5f)
// WARNING: Removing unreachable block (ram,0x00e2dd63)
// WARNING: Removing unreachable block (ram,0x00e2dd6b)
// WARNING: Removing unreachable block (ram,0x00e2dd73)
// WARNING: Removing unreachable block (ram,0x00e2dd3c)
// WARNING: Removing unreachable block (ram,0x00e2dc4d)
// WARNING: Removing unreachable block (ram,0x00e2dc13)
// WARNING: Removing unreachable block (ram,0x00e2dbdd)
// WARNING: Removing unreachable block (ram,0x00e2dc8e)
// WARNING: Removing unreachable block (ram,0x00e2dc95)
// WARNING: Removing unreachable block (ram,0x00e2dd1c)
// WARNING: Removing unreachable block (ram,0x00e2dd20)
// WARNING: Removing unreachable block (ram,0x00e2dd28)
// WARNING: Removing unreachable block (ram,0x00e2dd30)
// WARNING: Removing unreachable block (ram,0x00e2dd7f)
// WARNING: Removing unreachable block (ram,0x00e2dd9c)
// WARNING: Removing unreachable block (ram,0x00e2ddaa)
// WARNING: Removing unreachable block (ram,0x00e2ddaf)
// WARNING: Removing unreachable block (ram,0x00e2ddc3)
// WARNING: Removing unreachable block (ram,0x00e2ddd4)
// WARNING: Removing unreachable block (ram,0x00e2ddd8)

void __fastcall FUN_00e2dba0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x300;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3ff00000;
  memset((void *)(param_1 + 0x38),0,0x2000);
  iVar2 = 0x100;
  puVar1 = (undefined4 *)(param_1 + 0x2040);
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  iVar2 = 0x400;
  puVar1 = (undefined4 *)(param_1 + 0x3040);
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  iVar2 = 0x400;
  puVar1 = (undefined4 *)(param_1 + 0x7040);
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  if (param_1 + 0x10040 != param_1 + 0x10140) {
    _Dst = (void *)(param_1 + 0x10080);
    do {
      memset((void *)((int)_Dst + -0x40),0,0x40);
      memset(_Dst,0,0x40);
      iVar2 = (int)_Dst + 0x40;
      _Dst = (void *)((int)_Dst + 0x80);
    } while (iVar2 != param_1 + 0x10140);
  }
  return;
}



void __thiscall
FUN_00e2de00(int param_1,double *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  uint uVar12;
  double *pdVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double *pdStack_38;
  int iStack_34;
  uint *puStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  double *pdStack_1c;
  int iStack_18;
  double dStack_14;
  double dStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&pdStack_38;
  pdStack_38 = (double *)0x0;
  iVar9 = param_1;
  iStack_34 = param_1;
  if (param_2 != (double *)0x0) {
    do {
      param_1 = iStack_34;
      uVar12 = *(uint *)(iVar9 + 0x10);
      uVar15 = 0x100 - uVar12;
      if ((uint)((int)param_2 - (int)pdStack_38) < 0x100 - uVar12) {
        uVar15 = (int)param_2 - (int)pdStack_38;
      }
      pdVar8 = (double *)(iVar9 + (*(int *)(iVar9 + 0x14) + 7 + uVar12) * 8);
      puVar14 = (undefined4 *)(iVar9 + 0x2038 + uVar12 * 0x10);
      puVar16 = (undefined4 *)((int)pdStack_38 * 0x10 + 0xb038 + iVar9);
      do {
        uVar12 = uVar12 + 1;
        iVar9 = (int)pdStack_38 * 4;
        pdStack_38 = (double *)((int)pdStack_38 + 1);
        *pdVar8 = (double)*(float *)(param_3 + iVar9);
        uVar2 = puVar14[1];
        uVar3 = puVar14[2];
        uVar4 = puVar14[3];
        *puVar16 = *puVar14;
        puVar16[1] = uVar2;
        puVar16[2] = uVar3;
        puVar16[3] = uVar4;
        uVar15 = uVar15 - 1;
        pdVar8 = pdVar8 + 1;
        puVar14 = puVar14 + 4;
        puVar16 = puVar16 + 4;
      } while (uVar15 != 0);
      *(uint *)(iStack_34 + 0x10) = uVar12;
      if (uVar12 < 0x100) break;
      *(undefined4 *)(iStack_34 + 0x10) = 0;
      uVar12 = *(int *)(iStack_34 + 0x14) + 0x100U & 0x3ff;
      iVar9 = 0;
      *(uint *)(iStack_34 + 0x14) = uVar12;
      if (3 < 0x400 - uVar12) {
        iVar10 = uVar12 * 8;
        iVar17 = (0x3fc - uVar12 >> 2) + 1;
        uVar12 = uVar12 + iVar17 * 4;
        puVar6 = (undefined8 *)(iStack_34 + 0x7050);
        pdVar8 = (double *)(iStack_34 + 0x40 + iVar10);
        do {
          puVar6[-3] = (double)(&DAT_013e2980)[iVar9] * pdVar8[-1];
          puVar6[-2] = 0;
          puVar6[-1] = (double)(&DAT_013e2988)[iVar9] * *pdVar8;
          *puVar6 = 0;
          puVar6[1] = (double)(&DAT_013e2990)[iVar9] * pdVar8[1];
          puVar6[2] = 0;
          pdVar7 = (double *)(&DAT_013e2998 + iVar9);
          iVar9 = iVar9 + 4;
          puVar6[3] = *pdVar7 * pdVar8[2];
          puVar6[4] = 0;
          iVar17 = iVar17 + -1;
          puVar6 = puVar6 + 8;
          pdVar8 = pdVar8 + 4;
        } while (iVar17 != 0);
      }
      if (uVar12 < 0x400) {
        pdVar7 = (double *)(&DAT_013e2980 + iVar9);
        pdVar8 = (double *)(iStack_34 + 0x38 + uVar12 * 8);
        iVar10 = 0x400 - uVar12;
        pdVar11 = (double *)(iStack_34 + 0x7038 + iVar9 * 0x10);
        do {
          dVar18 = *pdVar8;
          dVar19 = *pdVar7;
          pdVar8 = pdVar8 + 1;
          pdVar7 = pdVar7 + 1;
          pdVar11[1] = 0.0;
          *pdVar11 = dVar18 * dVar19;
          iVar10 = iVar10 + -1;
          pdVar11 = pdVar11 + 2;
        } while (iVar10 != 0);
      }
      uVar12 = 0;
      iVar9 = 0x400 - *(int *)(iStack_34 + 0x14);
      if (*(int *)(iStack_34 + 0x14) != 0) {
        pdVar7 = (double *)(&DAT_013e2980 + iVar9);
        pdVar8 = (double *)(iStack_34 + 0x38);
        pdVar11 = (double *)(iStack_34 + 0x7038 + iVar9 * 0x10);
        do {
          dVar18 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          dVar19 = *pdVar7;
          pdVar7 = pdVar7 + 1;
          uVar12 = uVar12 + 1;
          pdVar11[1] = 0.0;
          *pdVar11 = dVar18 * dVar19;
          pdVar11 = pdVar11 + 2;
        } while (uVar12 < *(uint *)(iStack_34 + 0x14));
      }
      pdVar8 = (double *)(iStack_34 + 0x7038);
      func_0x00e41560(pdVar8,iStack_34 + 0xb038);
      uVar12 = *(uint *)(param_1 + 0x14);
      if (uVar12 < 0x400) {
        pdVar11 = (double *)&DAT_013e2980;
        pdVar7 = (double *)(uVar12 * 0x10 + 0x3038 + param_1);
        iVar9 = 0x400 - uVar12;
        do {
          dVar18 = *pdVar11;
          pdVar11 = pdVar11 + 1;
          dVar19 = *pdVar8;
          dVar1 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
          *pdVar7 = dVar19 * dVar18 * 0.5 + *pdVar7;
          pdVar7[1] = dVar1 * dVar18 * 0.5 + pdVar7[1];
          pdVar7 = pdVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      uVar12 = *(uint *)(param_1 + 0x14);
      pdVar8 = (double *)(param_1 + 0x3038);
      uVar15 = 0;
      if (uVar12 != 0) {
        pdVar7 = (double *)(&DAT_013e2980 + (0x400 - uVar12));
        pdVar13 = (double *)((0x400 - uVar12) * 0x10 + 0x7038 + param_1);
        pdVar11 = pdVar8;
        do {
          dVar18 = *pdVar7;
          uVar15 = uVar15 + 1;
          dVar19 = *pdVar13;
          pdVar7 = pdVar7 + 1;
          dVar1 = pdVar13[1];
          pdVar13 = pdVar13 + 2;
          *pdVar11 = dVar19 * dVar18 * 0.5 + *pdVar11;
          pdVar11[1] = dVar1 * dVar18 * 0.5 + pdVar11[1];
          pdVar11 = pdVar11 + 2;
          uVar12 = *(uint *)(param_1 + 0x14);
        } while (uVar15 < uVar12);
      }
      func_0x008ab0e6(param_1 + 0x2038,pdVar8 + uVar12 * 2,0x1000);
      iVar9 = 0x100;
      pdVar8 = pdVar8 + *(int *)(param_1 + 0x14) * 2 + 1;
      do {
        *(undefined4 *)(pdVar8 + -1) = 0;
        *(undefined4 *)((int)pdVar8 + -4) = 0;
        *(undefined4 *)pdVar8 = 0;
        *(undefined4 *)((int)pdVar8 + 4) = 0;
        iVar9 = iVar9 + -1;
        pdVar8 = pdVar8 + 2;
      } while (iVar9 != 0);
      iVar9 = param_1;
    } while (pdStack_38 < param_2);
  }
  iStack_24 = param_1 + 0xf040;
  iStack_28 = 2;
  iStack_2c = param_1 + 0x10040;
  iStack_18 = iStack_24 + (int)param_2 * 4;
  puStack_30 = (uint *)(param_1 + 0x20);
  pdStack_1c = (double *)0x200;
  if ((double *)0x200 < param_2) {
    pdStack_1c = param_2;
  }
  pdStack_38 = (double *)(param_1 + 0x28);
  do {
    pdVar8 = pdStack_38;
    uStack_20 = puStack_30[-2];
    uVar12 = *puStack_30;
    pdVar7 = (double *)0x0;
    if (param_2 != (double *)0x0) {
      pdVar11 = (double *)(param_1 + 0xb038);
      do {
        dVar18 = ((double)(int)uVar12 + (double)(&DAT_011a2c10)[-((int)uVar12 >> 0x1f)]) *
                 9.587379924285257e-05;
        dStack_14 = dVar18;
        func_0x00e8799b();
        dStack_c = dVar18 * pdVar11[1] * *pdVar8;
        dVar19 = dStack_14;
        func_0x00e87995();
        dVar18 = *pdVar11;
        pdVar11 = pdVar11 + 2;
        *(float *)(iStack_24 + (int)pdVar7 * 4) = (float)(dStack_c + dVar19 * dVar18);
        pdVar7 = (double *)((int)pdVar7 + 1);
        uVar12 = uStack_20 + uVar12 & 0xffff;
        param_1 = iStack_34;
      } while (pdVar7 < param_2);
    }
    iVar9 = iStack_2c;
    puVar5 = puStack_30;
    *puStack_30 = uVar12;
    (*(code *)PTR_FUN_012ba8a0)
              (param_1 + 0xf040,iStack_18,param_5,param_6,iStack_2c,iStack_2c + 0x40,pdStack_1c,0);
    pdStack_38 = pdStack_38 + 1;
    puStack_30 = puVar5 + 1;
    iStack_2c = iVar9 + 0x80;
    iStack_28 = iStack_28 + -1;
  } while (iStack_28 != 0);
  FUN_008ab370();
  return;
}



void __thiscall FUN_00e2e270(int param_1,int *param_2,int param_3,float *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *param_2;
  iVar2 = *(int *)(iVar1 + 4);
  fVar7 = *param_4 / (float)((double)iVar2 + (double)(&DAT_011a2c10)[-(iVar2 >> 0x1f)]);
  fVar8 = 1.0;
  if (fVar7 <= 1.0) {
    fVar8 = fVar7;
  }
  *(int *)(param_1 + 0x1c) = (int)ROUND(fVar8 * 65536.0);
  *(int *)(param_1 + 0x18) = (int)ROUND(fVar8 * 65536.0);
  fVar8 = param_4[1];
  if (fVar8 == 0.0) {
    *(undefined8 *)(param_1 + 0x28) = 0xbff0000000000000;
  }
  else if (fVar8 == 1.4013e-45) {
    *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  }
  else if (fVar8 == 2.8026e-45) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  fVar8 = param_4[2];
  if (fVar8 == 0.0) {
    *(undefined8 *)(param_1 + 0x30) = 0xbff0000000000000;
  }
  else if (fVar8 == 1.4013e-45) {
    *(undefined8 *)(param_1 + 0x30) = 0x3ff0000000000000;
  }
  else if (fVar8 == 2.8026e-45) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  bVar6 = *(char *)(iVar1 + 0x40) == '\x01';
  puVar5 = &DAT_010e6cc0;
  if (bVar6) {
    puVar5 = &DAT_010e6c40;
  }
  puVar4 = &DAT_010e6d00;
  if (bVar6) {
    puVar4 = &DAT_010e6c80;
  }
  uVar3 = *(undefined4 *)(param_5 + 0x84);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  func_0x00e1c4d0(param_5,puVar5,*(undefined4 *)(param_3 + 0x90));
  func_0x00e1c4d0(param_5,puVar4,*(undefined4 *)(param_3 + 0x90));
  return;
}



void FUN_00e2e3b0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *_Dst;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_c [12];
  
  _Dst = (undefined4 *)func_0x00ddbb30(4,0x29c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x29c);
    puVar3 = _Dst + 7;
    _Dst[1] = 1;
    _Dst[3] = 0;
    *_Dst = _anon_84432E4C::ModulatorState::vftable;
    _Dst[4] = 0;
    iVar4 = 0x10;
    _Dst[5] = 0;
    _Dst[6] = 1;
    puVar2 = _Dst;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 10;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0x3f800000;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 10;
    } while (iVar4 != 0);
    *param_1 = _Dst;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e2e4a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *param_1 = 0x3f800000;
      param_1 = param_1 + 1;
    }
  }
  return;
}



void FUN_00e2e4c0(int param_1,uint3 param_2,int3 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      param_2 = param_2 + param_3;
      *(float *)(param_1 + uVar1 * 4) = ((float)param_2 + 0.0) * 1.1920929e-07 - 1.0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4);
  }
  return;
}



void FUN_00e2e530(int param_1,uint3 param_2,int3 param_3,uint param_4)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      param_2 = param_2 + param_3;
      dVar2 = (double)(((float)param_2 + 0.0) * 3.7450704e-07);
      func_0x00e8799b();
      *(float *)(param_1 + uVar1 * 4) = (float)dVar2;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4);
  }
  return;
}



void FUN_00e2e5a0(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      param_2 = param_2 + param_3;
      *(float *)(param_1 + uVar1 * 4) = (float)(int)((param_2 >> 0x16 & 2) - 1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4);
  }
  return;
}



undefined4 __thiscall FUN_00e2e5e0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x29c);
  }
  return param_1;
}



undefined ** FUN_00e2e620(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e4984) {
    func_0x008ab40d(&DAT_013e4984);
    if (DAT_013e4984 == -1) {
      func_0x008ab7fd(FUN_00f75d00);
      func_0x008ab3bc(&DAT_013e4984);
    }
  }
  return &PTR_vftable_012ba8cc;
}



void __fastcall FUN_00e2e680(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)(param_1 + 0x1c) != (undefined4 *)(param_1 + 0x29c)) {
    puVar2 = (undefined4 *)(param_1 + 0x20);
    do {
      puVar2[-1] = 0xffffffff;
      puVar2[1] = 0;
      puVar1 = puVar2 + 9;
      *puVar2 = 0;
      puVar2[7] = 0;
      puVar2 = puVar2 + 10;
    } while (puVar1 != (undefined4 *)(param_1 + 0x29c));
  }
  return;
}



void __thiscall FUN_00e2e6c0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  uint uStack_438;
  int iStack_434;
  uint uStack_430;
  float fStack_42c;
  int iStack_428;
  int iStack_424;
  float afStack_420 [125];
  float afStack_22c [134];
  uint uStack_14;
  
  uStack_14 = DAT_0128fd40 ^ (uint)&uStack_438;
  uStack_438 = 0;
  iStack_424 = param_1;
  if (param_2 != 0) {
    do {
      iVar1 = iStack_424;
      uStack_430 = param_2 - uStack_438;
      uVar8 = 0x80;
      if (uStack_430 < 0x80) {
        uVar8 = uStack_430;
      }
      (**(code **)(iStack_424 + 0x10))
                (afStack_22c + 3,*(undefined4 *)(iStack_424 + 0x14),
                 *(undefined4 *)(iStack_424 + 0x18),uVar8);
      iStack_434 = param_3;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 0x18) * uVar8;
      *(undefined1 *)(iVar1 + 0x17) = 0;
      pfVar9 = (float *)(iVar1 + 0x1c);
      iStack_428 = param_4;
      if (param_3 != param_4) {
        do {
          fStack_42c = *pfVar9;
          if (fStack_42c != -NAN) {
            iVar1 = iStack_434 + uStack_438 * 4;
            pfVar10 = afStack_420;
            func_0x00e1ad60(iVar1,iVar1 + uVar8 * 4,pfVar10);
            uVar7 = 0;
            if (uVar8 != 0) {
              if (1 < uVar8) {
                if (uVar8 < 0x10) {
LAB_00e2e800:
                  do {
                    *(ulonglong *)(&fStack_42c + uVar7) =
                         CONCAT44((float)((ulonglong)*(undefined8 *)(afStack_22c + uVar7) >> 0x20) *
                                  (float)((ulonglong)*(undefined8 *)(&fStack_42c + uVar7) >> 0x20),
                                  (float)*(undefined8 *)(afStack_22c + uVar7) *
                                  (float)*(undefined8 *)(&fStack_42c + uVar7));
                    uVar7 = uVar7 + 2;
                  } while (uVar7 < (uVar8 & 0xfffffffe));
                }
                else {
                  do {
                    fVar2 = afStack_420[uVar7 - 1];
                    fVar3 = afStack_420[uVar7];
                    fVar4 = afStack_22c[uVar7 + 1];
                    fVar5 = afStack_22c[uVar7 + 2];
                    fVar6 = afStack_22c[uVar7 + 3];
                    (&fStack_42c)[uVar7] = afStack_22c[uVar7] * (&fStack_42c)[uVar7];
                    (&fStack_42c)[uVar7 + 1] = fVar4 * (&fStack_42c)[uVar7 + 1];
                    afStack_420[uVar7 - 1] = fVar5 * fVar2;
                    afStack_420[uVar7] = fVar6 * fVar3;
                    fVar2 = afStack_22c[uVar7 + 5];
                    fVar3 = afStack_22c[uVar7 + 6];
                    fVar4 = afStack_22c[uVar7 + 7];
                    afStack_420[uVar7 + 1] = afStack_22c[uVar7 + 4] * afStack_420[uVar7 + 1];
                    afStack_420[uVar7 + 2] = fVar2 * afStack_420[uVar7 + 2];
                    afStack_420[uVar7 + 3] = fVar3 * afStack_420[uVar7 + 3];
                    afStack_420[uVar7 + 4] = fVar4 * afStack_420[uVar7 + 4];
                    fVar2 = afStack_22c[uVar7 + 9];
                    fVar3 = afStack_22c[uVar7 + 10];
                    fVar4 = afStack_22c[uVar7 + 0xb];
                    afStack_420[uVar7 + 5] = afStack_22c[uVar7 + 8] * afStack_420[uVar7 + 5];
                    afStack_420[uVar7 + 6] = fVar2 * afStack_420[uVar7 + 6];
                    afStack_420[uVar7 + 7] = fVar3 * afStack_420[uVar7 + 7];
                    afStack_420[uVar7 + 8] = fVar4 * afStack_420[uVar7 + 8];
                    fVar2 = afStack_22c[uVar7 + 0xd];
                    fVar3 = afStack_22c[uVar7 + 0xe];
                    fVar4 = afStack_22c[uVar7 + 0xf];
                    afStack_420[uVar7 + 9] = afStack_22c[uVar7 + 0xc] * afStack_420[uVar7 + 9];
                    afStack_420[uVar7 + 10] = fVar2 * afStack_420[uVar7 + 10];
                    afStack_420[uVar7 + 0xb] = fVar3 * afStack_420[uVar7 + 0xb];
                    afStack_420[uVar7 + 0xc] = fVar4 * afStack_420[uVar7 + 0xc];
                    uVar7 = uVar7 + 0x10;
                  } while (uVar7 < uVar8 - (uVar8 & 0xf));
                  if (1 < (uVar8 & 0xf)) goto LAB_00e2e800;
                }
                if (uVar8 <= uVar7) goto LAB_00e2e8cb;
              }
              if (3 < uVar8 - uVar7) {
                do {
                  (&fStack_42c)[uVar7] = afStack_22c[uVar7] * (&fStack_42c)[uVar7];
                  (&fStack_42c)[uVar7 + 1] = afStack_22c[uVar7 + 1] * (&fStack_42c)[uVar7 + 1];
                  afStack_420[uVar7 - 1] = afStack_22c[uVar7 + 2] * afStack_420[uVar7 - 1];
                  afStack_420[uVar7] = afStack_22c[uVar7 + 3] * afStack_420[uVar7];
                  uVar7 = uVar7 + 4;
                } while (uVar7 < uVar8 - 3);
                if (uVar8 <= uVar7) goto LAB_00e2e8cb;
              }
              do {
                (&fStack_42c)[uVar7] = afStack_22c[uVar7] * (&fStack_42c)[uVar7];
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar8);
            }
LAB_00e2e8cb:
            (*(code *)PTR_FUN_012ba8a4)
                      (&fStack_42c,&fStack_42c + uVar8,
                       param_5 + (int)(pfVar10 + uStack_438 * 0x100) * 4,pfVar9 + 8,pfVar9[9],
                       unaff_ESI);
          }
          iStack_434 = iStack_434 + 0x1000;
          pfVar9 = pfVar9 + 10;
        } while (iStack_434 != iStack_428);
      }
      uStack_438 = uStack_438 + uVar8;
    } while (uStack_438 < param_2);
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00e2e950(int param_1,int *param_2,undefined4 param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int unaff_retaddr;
  int iStack_8;
  float fStack_4;
  
  iVar4 = *param_2;
  iVar1 = *(int *)(iVar4 + 4);
  fVar13 = (*param_4 / (float)((double)iVar1 + (double)(&DAT_011a2c10)[-(iVar1 >> 0x1f)])) *
           16777216.0;
  fVar12 = 0.0;
  if (0.0 <= fVar13) {
    fVar12 = fVar13;
  }
  if (16777215.0 <= fVar12) {
    fVar12 = 16777215.0;
  }
  *(int *)(param_1 + 0x18) = (int)ROUND(fVar12);
  if ((int)ROUND(fVar12) == 0) {
    pcVar3 = FUN_00e2e4a0;
  }
  else if (param_4[2] == 0.0) {
    pcVar3 = FUN_00e2e530;
  }
  else {
    pcVar3 = FUN_00e2e5a0;
    if (param_4[2] == 1.4013e-45) {
      pcVar3 = FUN_00e2e4c0;
    }
  }
  *(code **)(param_1 + 0x10) = pcVar3;
  iVar4 = *(int *)(iVar4 + 4);
  fVar13 = param_4[1] / (float)((double)iVar4 + (double)(&DAT_011a2c10)[-(iVar4 >> 0x1f)]);
  fVar12 = 0.001953125;
  if (0.001953125 <= fVar13) {
    fVar12 = fVar13;
  }
  if (0.49 <= fVar12) {
    fVar12 = 0.49;
  }
  func_0x00e879c5();
  func_0x00e8799b();
  fVar10 = (float10)func_0x00e87a1c();
  func_0x00e1ae00(4,fVar12,0x3f800000,(float)fVar10 + (float)fVar10);
  iStack_8 = SUB84((double)fVar10,0);
  uVar8 = 1;
  if (1 < (uint)(*(int *)(iStack_8 + 0x8c) - *(int *)(iStack_8 + 0x88) >> 0xc)) {
    puVar5 = (undefined4 *)(param_1 + 0x54);
    do {
      puVar5[-1] = *(undefined4 *)(param_1 + 0x28);
      uVar8 = uVar8 + 1;
      *puVar5 = *(undefined4 *)(param_1 + 0x2c);
      puVar5[1] = *(undefined4 *)(param_1 + 0x30);
      puVar5[2] = *(undefined4 *)(param_1 + 0x34);
      puVar5[3] = *(undefined4 *)(param_1 + 0x38);
      puVar5 = puVar5 + 10;
    } while (uVar8 < (uint)(*(int *)(iStack_8 + 0x8c) - *(int *)(iStack_8 + 0x88) >> 0xc));
  }
  uVar2 = *(undefined4 *)(unaff_retaddr + 0x84);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(unaff_retaddr + 0x80);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  fVar12 = *(float *)(iStack_8 + 0x90);
  iVar4 = *(int *)(iStack_8 + 0x8c) - *(int *)(iStack_8 + 0x88) >> 0xc;
  fVar13 = (float)(*(int *)(unaff_retaddr + 0x84) - *(int *)(unaff_retaddr + 0x80) >> 0xc);
  if (iVar4 != 0) {
    pfVar9 = (float *)(param_1 + 0x40);
    piVar6 = (int *)(iStack_8 + 0xc);
    do {
      fStack_4 = 0.0;
      fVar11 = 0.0;
      if (fVar13 == 0.0) {
        fStack_4 = -NAN;
      }
      else {
        piVar7 = (int *)(unaff_retaddr + 4);
        do {
          if (*piVar7 == *piVar6) {
            fVar11 = fVar12 * *(float *)(unaff_retaddr + (int)fStack_4 * 8);
            goto LAB_00e2ebad;
          }
          fStack_4 = (float)((int)fStack_4 + 1);
          piVar7 = piVar7 + 2;
        } while ((uint)fStack_4 < (uint)fVar13);
        fStack_4 = -NAN;
      }
LAB_00e2ebad:
      pfVar9[-9] = fStack_4;
      piVar6 = piVar6 + 2;
      *pfVar9 = fVar11;
      pfVar9 = pfVar9 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_00e2ebd0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(0x10,0x80c0);
  if (puVar2 != (undefined4 *)0x0) {
    memset(puVar2 + 3,0,0x80b4);
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    iVar4 = 0x400;
    *puVar2 = _anon_35B2FABA::PshifterState::vftable;
    puVar3 = puVar2 + 0xc0a;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 2;
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



undefined4 __thiscall FUN_00e2ed70(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x80c0);
  }
  return param_1;
}



undefined ** FUN_00e2edb0(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e5990) {
    func_0x008ab40d(&DAT_013e5990);
    if (DAT_013e5990 == -1) {
      func_0x008ab7fd(FUN_00f75d10);
      func_0x008ab3bc(&DAT_013e5990);
    }
  }
  return &PTR_vftable_012ba8d0;
}



void __fastcall FUN_00e2ee10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 *puVar3;
  undefined4 *puStack_18;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = 0;
  _puStack_18 = CONCAT44(unaff_EDI,auStack_8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x380;
  *(undefined4 *)(param_1 + 0x18) = 0x10000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  func_0x00e047b0();
  func_0x00e2ef50(&stack0xfffffff4);
  func_0x00e2ef50(&stack0xfffffff0);
  _puStack_18 = _puStack_18 & 0xffffffff;
  func_0x00e047b0(&stack0xffffffec);
  iVar2 = 0x400;
  puVar1 = (undefined4 *)(param_1 + 0x302c);
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x5028) = 0;
  *(undefined4 *)(param_1 + 0x502c) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x5028);
  puVar3 = (undefined4 *)(param_1 + 0x5030);
  for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x6030) = 0;
  *(undefined4 *)(param_1 + 0x6034) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x6030);
  puVar3 = (undefined4 *)(param_1 + 0x6038);
  for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  _puStack_18 = 0;
  func_0x00e0b5e0(param_1 + 0x8040,param_1 + 0x8080,&puStack_18);
  _puStack_18 = _puStack_18 & 0xffffffff00000000;
  func_0x00e0b5e0(param_1 + 0x8080,param_1 + 0x80c0,&puStack_18);
  return;
}



// WARNING: Removing unreachable block (ram,0x00e2f783)
// WARNING: Removing unreachable block (ram,0x00e2f78c)
// WARNING: Removing unreachable block (ram,0x00e2f78e)

void __thiscall
FUN_00e2efd0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  int iVar7;
  uint *puVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float10 fVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 uStack_28;
  int iStack_20;
  float fStack_1c;
  uint uStack_18;
  undefined8 uStack_14;
  uint uStack_c;
  float *pfStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_40;
  uStack_18 = 0;
  iStack_20 = param_1;
  if (param_2 != 0) {
    do {
      pfStack_8 = (float *)(0x80 - *(int *)(param_1 + 0x10));
      if ((float *)(param_2 - uStack_18) < pfStack_8) {
        pfStack_8 = (float *)(param_2 - uStack_18);
      }
      iVar7 = param_1 + (*(int *)(param_1 + 0x14) + 8 + *(int *)(param_1 + 0x10)) * 4;
      uStack_c = (int)pfStack_8 * 4;
      if (pfStack_8 != (float *)0x0) {
        func_0x008ab0e6(param_1 + (uStack_18 + 0x1c10) * 4,iVar7,uStack_c);
        func_0x008ab0e6(iVar7,param_3 + uStack_18 * 4,uStack_c);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (int)pfStack_8;
      uStack_18 = uStack_18 + (int)pfStack_8;
      if (*(uint *)(param_1 + 0x10) < 0x80) break;
      *(undefined4 *)(param_1 + 0x10) = 0;
      pfStack_8 = (float *)(*(int *)(param_1 + 0x14) + 0x80U & 0x3ff);
      iVar7 = 0;
      *(float **)(param_1 + 0x14) = pfStack_8;
      if (3 < 0x400U - (int)pfStack_8) {
        iVar10 = (int)pfStack_8 + 9;
        iVar12 = (0x3fcU - (int)pfStack_8 >> 2) + 1;
        pfStack_8 = (float *)((int)pfStack_8 + iVar12 * 4);
        puVar2 = (undefined4 *)(param_1 + 0x3034);
        pfVar6 = (float *)(param_1 + iVar10 * 4);
        do {
          puVar2[-3] = (float)(&DAT_013e4990)[iVar7] * pfVar6[-1];
          puVar2[-2] = 0;
          puVar2[-1] = (float)(&DAT_013e4994)[iVar7] * *pfVar6;
          *puVar2 = 0;
          puVar2[1] = (float)(&DAT_013e4998)[iVar7] * pfVar6[1];
          puVar2[2] = 0;
          pfVar4 = (float *)(&DAT_013e499c + iVar7);
          iVar7 = iVar7 + 4;
          puVar2[3] = *pfVar4 * pfVar6[2];
          puVar2[4] = 0;
          iVar12 = iVar12 + -1;
          puVar2 = puVar2 + 8;
          pfVar6 = pfVar6 + 4;
          param_1 = iStack_20;
        } while (iVar12 != 0);
      }
      if (pfStack_8 < 0x400) {
        pfVar4 = (float *)(&DAT_013e4990 + iVar7);
        pfVar6 = (float *)(param_1 + ((int)pfStack_8 + 8U) * 4);
        pfStack_8 = (float *)(0x400 - (int)pfStack_8);
        pfVar9 = (float *)(param_1 + (iVar7 + 0x605) * 8);
        uVar11 = (uint)pfStack_8;
        do {
          fVar16 = *pfVar4;
          fVar1 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          pfVar9[1] = 0.0;
          pfVar4 = pfVar4 + 1;
          *pfVar9 = fVar16 * fVar1;
          uVar11 = uVar11 - 1;
          pfVar9 = pfVar9 + 2;
        } while (uVar11 != 0);
      }
      iVar7 = -*(int *)(param_1 + 0x14);
      uStack_c = iVar7 + 0x400;
      uVar11 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        pfVar6 = (float *)(&DAT_013e4990 + uStack_c);
        pfVar4 = (float *)(param_1 + (iVar7 + 0xa05) * 8);
        pfVar9 = (float *)(param_1 + 0x20);
        do {
          fVar16 = *pfVar6;
          fVar1 = *pfVar9;
          pfVar4[1] = 0.0;
          pfVar6 = pfVar6 + 1;
          uVar11 = uVar11 + 1;
          *pfVar4 = fVar16 * fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar9 = pfVar9 + 1;
        } while (uVar11 < *(uint *)(param_1 + 0x14));
      }
      uStack_28._4_4_ = (float *)(param_1 + 0x3028);
      func_0x00e41060((float *)(param_1 + 0x3028),param_1 + 0x5028,0xbf800000);
      pfStack_8 = (float *)(param_1 + 0x1020);
      uStack_c = 0;
      pfVar6 = uStack_28._4_4_;
      do {
        uVar11 = uStack_c;
        fStack_1c = pfVar6[1];
        uStack_14 = CONCAT44(*pfVar6,(undefined4)uStack_14);
        uStack_28 = (double)*pfVar6;
        fVar14 = (float10)func_0x00e87a10();
        fVar16 = *pfStack_8;
        *pfStack_8 = (float)fVar14;
        fVar16 = (((float)fVar14 - fVar16) - ((float)(uVar11 & 7) + 0.0) * 0.7853982) * 0.31830987;
        uStack_28 = (double)CONCAT44(fVar16,(undefined4)uStack_28);
        uVar13 = (uint)fVar16;
        fVar14 = (float10)func_0x00e87c72(uStack_14._4_4_,fStack_1c);
        pfVar6[0x800] = (float)fVar14;
        uVar11 = uVar13 & 0x80000001;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
        }
        pfStack_8 = pfStack_8 + 1;
        iVar7 = (int)uStack_c >> 0x1f;
        dVar15 = (double)(int)uStack_c;
        uStack_c = uStack_c + 1;
        pfVar6[0x801] =
             ((float)uStack_28._4_4_ - (float)(int)(uVar11 + uVar13)) * 4.0 +
             (float)(dVar15 + (double)(&DAT_011a2c10)[-iVar7]);
        pfVar6 = pfVar6 + 2;
      } while (uStack_c < 0x201);
      for (puVar2 = (undefined4 *)(iStack_20 + 0x6030); puVar2 != (undefined4 *)(iStack_20 + 0x7038)
          ; puVar2 = puVar2 + 2) {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      uVar13 = (int)(0x2007fff / (ulonglong)*(uint *)(iStack_20 + 0x18)) + 1;
      uVar11 = 0x201;
      if (uVar13 < 0x201) {
        uVar11 = uVar13;
      }
      uVar13 = 0;
      uStack_14 = 0;
      if (uVar11 != 0) {
        pfVar6 = (float *)(iStack_20 + 0x5028);
        do {
          uVar3 = *(uint *)(iStack_20 + 0x18) * uVar13 + 0x8000 >> 0x10;
          pfVar4 = (float *)(iStack_20 + 0x6030 + uVar3 * 8);
          if (*pfVar4 <= *pfVar6 && *pfVar6 != *pfVar4) {
            *(float *)(iStack_20 + 0x6034 + uVar3 * 8) = pfVar6[1] * *(float *)(iStack_20 + 0x1c);
          }
          uVar13 = uVar13 + 1;
          fVar16 = *pfVar6;
          pfVar6 = pfVar6 + 2;
          *(float *)(iStack_20 + 0x6030 + uVar3 * 8) =
               *(float *)(iStack_20 + 0x6030 + uVar3 * 8) + fVar16;
        } while (uVar13 < uVar11);
      }
      pfVar6 = (float *)(iStack_20 + 0x6030);
      pfStack_8 = (float *)(iStack_20 + 0x1824);
      iVar7 = 0x201;
      do {
        fVar16 = (pfVar6[1] * 0.7853982 + *pfStack_8) * 0.31830987;
        uVar13 = (uint)fVar16;
        uVar11 = uVar13 & 0x80000001;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
        }
        fStack_1c = (fVar16 - (float)(int)(uVar11 + uVar13)) * 3.1415927;
        *pfStack_8 = fStack_1c;
        fVar16 = *pfVar6;
        if ((((uint)ABS(fVar16) < 0x7f800001) &&
            (uStack_14 = CONCAT44(fVar16,(undefined4)uStack_14), ABS(fVar16) != INFINITY)) &&
           (fVar16 != 0.0)) {
          dVar15 = (double)fStack_1c;
          func_0x00e87995();
          fStack_30 = (float)dVar15 * *pfVar6;
          uStack_14 = CONCAT44(fStack_30,(undefined4)uStack_14);
          dVar15 = (double)fStack_1c;
          func_0x00e8799b();
          fStack_2c = (float)dVar15 * *pfVar6;
          fVar16 = uStack_14._4_4_;
        }
        else {
          uStack_14 = CONCAT44(fVar16,(undefined4)uStack_14);
          iVar10 = func_0x00e879e6(fVar16);
          if (iVar10 == 0) {
            func_0x00e2ec70(&fStack_30,pfVar6,pfStack_8);
            fVar16 = fStack_30;
          }
          else {
            uStack_14 = CONCAT44(*pfVar6,(undefined4)uStack_14) ^ 0x8000000000000000;
            pfVar4 = (float *)func_0x00e2ec70(auStack_40,(int)&uStack_14 + 4,pfStack_8);
            fStack_30 = -*pfVar4;
            fStack_2c = -pfVar4[1];
            fVar16 = fStack_30;
          }
        }
        param_1 = iStack_20;
        pfVar6[-0xc02] = fVar16;
        pfStack_8 = pfStack_8 + 1;
        pfVar6[-0xc01] = fStack_2c;
        pfVar6 = pfVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar7 = 0x49;
      puVar5 = (uint *)(iStack_20 + 0x403c);
      puVar8 = (uint *)(iStack_20 + 0x401c);
      do {
        uVar11 = puVar8[2];
        puVar5[-3] = puVar8[1];
        puVar5[-2] = uVar11 ^ 0x80000000;
        uVar11 = *puVar8;
        puVar5[-1] = puVar8[-1];
        *puVar5 = uVar11 ^ 0x80000000;
        uVar11 = puVar8[-2];
        puVar5[1] = puVar8[-3];
        puVar5[2] = uVar11 ^ 0x80000000;
        uVar11 = puVar8[-4];
        puVar5[3] = puVar8[-5];
        puVar5[4] = uVar11 ^ 0x80000000;
        uVar11 = puVar8[-6];
        puVar5[5] = puVar8[-7];
        puVar5[6] = uVar11 ^ 0x80000000;
        uVar11 = puVar8[-8];
        puVar5[7] = puVar8[-9];
        puVar5[8] = uVar11 ^ 0x80000000;
        uVar11 = puVar8[-10];
        puVar5[9] = puVar8[-0xb];
        puVar5[10] = uVar11 ^ 0x80000000;
        iVar7 = iVar7 + -1;
        puVar5 = puVar5 + 0xe;
        puVar8 = puVar8 + -0xe;
      } while (iVar7 != 0);
      func_0x00e41060(iStack_20 + 0x3028,iStack_20 + 0x5028,0x3f800000);
      if (*(uint *)(param_1 + 0x14) < 0x400) {
        pfVar6 = (float *)(param_1 + 0x3028);
        pfVar9 = (float *)&DAT_013e4990;
        iVar7 = 0x400 - *(int *)(param_1 + 0x14);
        pfVar4 = (float *)(param_1 + (*(uint *)(param_1 + 0x14) + 0x80a) * 4);
        do {
          fVar16 = *pfVar6;
          pfVar6 = pfVar6 + 2;
          fVar1 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          *pfVar4 = fVar16 * fVar1 * 0.00036621094 + *pfVar4;
          pfVar4 = pfVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar7 = *(int *)(param_1 + 0x14);
      uVar11 = 0;
      if (iVar7 != 0) {
        pfVar9 = (float *)(&DAT_013e4990 + -iVar7 + 0x400);
        pfVar6 = (float *)(param_1 + 0x2028);
        pfVar4 = (float *)(param_1 + (-iVar7 + 0xa05) * 8);
        do {
          fVar16 = *pfVar9;
          uVar11 = uVar11 + 1;
          fVar1 = *pfVar4;
          pfVar9 = pfVar9 + 1;
          pfVar4 = pfVar4 + 2;
          *pfVar6 = fVar16 * fVar1 * 0.00036621094 + *pfVar6;
          pfVar6 = pfVar6 + 1;
          uStack_14 = CONCAT44(pfVar6,(undefined4)uStack_14);
        } while (uVar11 < *(uint *)(param_1 + 0x14));
        iVar7 = *(int *)(param_1 + 0x14);
      }
      func_0x008ab0e6(param_1 + 0x20 + iVar7 * 4,param_1 + 0x2028 + iVar7 * 4,0x200);
      uStack_34 = 0;
      uStack_38 = 0;
      memset((void *)(param_1 + (*(int *)(param_1 + 0x14) + 0x80a) * 4),0,0x200);
    } while (uStack_18 < param_2);
  }
  uVar11 = 0x200;
  if (0x200 < param_2) {
    uVar11 = param_2;
  }
  (*(code *)PTR_FUN_012ba8a0)
            (param_1 + 0x7040,param_1 + 0x7040 + param_2 * 4,param_5,param_6,param_1 + 0x8040,
             param_1 + 0x8080,uVar11,0);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00e2f800(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = 2.0;
  func_0x00e879bf();
  uVar2 = (uint)ROUND((float)dVar4 * 65536.0);
  if (uVar2 < 0x8000) {
    uVar2 = 0x8000;
  }
  uVar3 = 0x20000;
  if (uVar2 < 0x20000) {
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 0x18) = uVar3;
  *(float *)(param_1 + 0x1c) =
       (float)((double)(int)uVar3 + (double)(&DAT_011a2c10)[-((int)uVar3 >> 0x1f)]) * 1.5258789e-05;
  uVar1 = *(undefined4 *)(param_5 + 0x80);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_5 + 0x84);
  *(undefined4 *)(param_1 + 8) = uVar1;
  func_0x00e1c4d0(param_5,&DAT_010e6db0,*(undefined4 *)(param_3 + 0x90));
  return;
}



void FUN_00e2f8c0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(0x10,0x14e0);
  if (puVar2 != (undefined4 *)0x0) {
    memset(puVar2 + 3,0,0x8c4);
    puVar2[0x237] = 0;
    puVar4 = puVar2 + 4;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    iVar5 = 0x10;
    *puVar2 = _anon_72C56B86::VmorpherState::vftable;
    puVar3 = puVar2 + 7;
    do {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 0x23;
      puVar3[-2] = 0;
      puVar3[-1] = 0x3f800000;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0x3f800000;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0x3f800000;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0x3f800000;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0x3f800000;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0x3f800000;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0x3f800000;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0x3f800000;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1e] = 0;
      puVar3[0x1f] = 0;
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 0x23;
    } while (iVar5 != 0);
    puVar2[0x234] = 0;
    puVar2[0x235] = 0;
    puVar2[0x236] = 1;
    memset(puVar2 + 0x238,0,0x400);
    memset(puVar2 + 0x338,0,0x400);
    memset(puVar2 + 0x438,0,0x400);
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00e2fab0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *param_1 = 0x3f000000;
      param_1 = param_1 + 1;
    }
  }
  return;
}



void FUN_00e2fad0(int param_1,uint3 param_2,int3 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      param_2 = param_2 + param_3;
      *(float *)(param_1 + uVar1 * 4) = ((float)param_2 + 0.0) * 5.9604645e-08;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4);
  }
  return;
}



void FUN_00e2fb30(int param_1,uint3 param_2,int3 param_3,uint param_4)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      param_2 = param_2 + param_3;
      dVar2 = (double)(((float)param_2 + 0.0) * 3.7450704e-07);
      func_0x00e8799b();
      *(float *)(param_1 + uVar1 * 4) = (float)dVar2 * 0.5 + 0.5;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4);
  }
  return;
}



void FUN_00e2fbb0(int param_1,uint3 param_2,int3 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      param_2 = param_2 + param_3;
      *(float *)(param_1 + uVar1 * 4) = ABS(((float)param_2 + 0.0) * 1.1920929e-07 - 1.0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4);
  }
  return;
}



undefined4 __thiscall FUN_00e2fc20(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x14e0);
  }
  return param_1;
}



undefined ** FUN_00e2fc60(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e5994) {
    func_0x008ab40d(&DAT_013e5994);
    if (DAT_013e5994 == -1) {
      func_0x008ab7fd(FUN_00f75d20);
      func_0x008ab3bc(&DAT_013e5994);
    }
  }
  return &PTR_vftable_012ba8d4;
}



void __fastcall FUN_00e2fcc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)(param_1 + 0x10) != (undefined4 *)(param_1 + 0x8d0)) {
    puVar2 = (undefined4 *)(param_1 + 0x54);
    do {
      puVar2[-0x11] = 0xffffffff;
      for (puVar1 = puVar2 + -0x10; puVar1 != puVar2; puVar1 = puVar1 + 4) {
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      for (puVar1 = puVar2; puVar1 != puVar2 + 0x10; puVar1 = puVar1 + 4) {
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      puVar2[0x10] = 0;
      puVar1 = puVar2 + 0x12;
      puVar2 = puVar2 + 0x23;
    } while (puVar1 != (undefined4 *)(param_1 + 0x8d0));
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00e303ae)
// WARNING: Removing unreachable block (ram,0x00e303b6)
// WARNING: Removing unreachable block (ram,0x00e303b8)
// WARNING: Removing unreachable block (ram,0x00e30729)
// WARNING: Removing unreachable block (ram,0x00e30737)
// WARNING: Removing unreachable block (ram,0x00e30739)

void __thiscall FUN_00e302b0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_458;
  int iStack_454;
  uint uStack_450;
  int iStack_44c;
  float *pfStack_448;
  uint uStack_444;
  uint uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  float fStack_434;
  uint uStack_430;
  uint uStack_42c;
  int iStack_428;
  int iStack_424;
  float afStack_420 [259];
  uint uStack_14;
  
  uStack_14 = DAT_0128fd40 ^ (uint)&fStack_458;
  uStack_450 = 0;
  iStack_454 = param_1;
  if (param_2 != 0) {
    param_1 = param_1 + 0x10e0;
    do {
      uStack_42c = param_2 - uStack_450;
      uVar8 = 0x100;
      if (uStack_42c < 0x100) {
        uVar8 = uStack_42c;
      }
      uStack_444 = uVar8;
      (**(code **)(iStack_454 + 0x8d0))
                (param_1,*(undefined4 *)(iStack_454 + 0x8d4),*(undefined4 *)(iStack_454 + 0x8d8),
                 uVar8);
      iStack_44c = param_3;
      piVar7 = (int *)(iStack_454 + 0x10);
      *(int *)(iStack_454 + 0x8d4) =
           *(int *)(iStack_454 + 0x8d4) + *(int *)(iStack_454 + 0x8d8) * uVar8;
      *(undefined1 *)(iStack_454 + 0x8d7) = 0;
      iStack_424 = param_4;
      if (param_3 != param_4) {
        pfVar4 = (float *)(iStack_454 + 0x8e0);
        pfStack_448 = pfVar4;
        do {
          iStack_428 = *piVar7;
          if (iStack_428 != -1) {
            uStack_43c = 0;
            if (uVar8 != 0) {
              uStack_438 = 0;
              memset(pfStack_448,0,uVar8 * 4);
              pfVar4 = pfStack_448;
            }
            fVar3 = (float)piVar7[1];
            fStack_434 = (float)piVar7[2];
            fVar12 = (float)piVar7[3];
            fVar13 = (float)piVar7[4];
            iVar6 = iStack_44c + uStack_450 * 4;
            if (uVar8 != 0) {
              uVar5 = uVar8;
              do {
                fVar9 = ((*(float *)((iVar6 - (int)pfStack_448) + (int)pfVar4) -
                         (fVar3 + 0.2) * fVar12) - fVar13) *
                        (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar10 = fVar9 + fVar12;
                fVar12 = fVar9 + fVar10;
                *pfVar4 = fVar10 * fStack_434 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar13 = fVar13 + fVar10 * fVar3 + fVar10 * fVar3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            piVar7[3] = (int)fVar12;
            piVar7[4] = (int)fVar13;
            fVar3 = (float)piVar7[5];
            fVar12 = (float)piVar7[6];
            fVar13 = (float)piVar7[7];
            fVar9 = (float)piVar7[8];
            if (uVar8 != 0) {
              pfVar4 = pfStack_448;
              uVar5 = uVar8;
              do {
                fVar10 = ((*(float *)((iVar6 - (int)pfStack_448) + (int)pfVar4) -
                          (fVar3 + 0.2) * fVar13) - fVar9) *
                         (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar11 = fVar10 + fVar13;
                fVar13 = fVar10 + fVar11;
                *pfVar4 = fVar11 * fVar12 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar9 = fVar9 + fVar11 * fVar3 + fVar11 * fVar3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            piVar7[7] = (int)fVar13;
            piVar7[8] = (int)fVar9;
            fVar3 = (float)piVar7[9];
            fVar12 = (float)piVar7[10];
            pfVar4 = (float *)(iStack_454 + 0x8e0);
            fVar13 = (float)piVar7[0xb];
            fVar9 = (float)piVar7[0xc];
            if (uVar8 != 0) {
              iVar6 = (iStack_44c + uStack_450 * 4) - (int)pfVar4;
              uVar5 = uVar8;
              do {
                fVar10 = ((*(float *)(iVar6 + (int)pfVar4) - (fVar3 + 0.2) * fVar13) - fVar9) *
                         (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar11 = fVar10 + fVar13;
                fVar13 = fVar10 + fVar11;
                *pfVar4 = fVar11 * fVar12 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar9 = fVar9 + fVar11 * fVar3 + fVar11 * fVar3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            piVar7[0xb] = (int)fVar13;
            piVar7[0xc] = (int)fVar9;
            fVar3 = (float)piVar7[0xd];
            fStack_458 = (float)piVar7[0xe];
            pfVar4 = (float *)(iStack_454 + 0x8e0);
            fVar12 = (float)piVar7[0xf];
            fVar13 = (float)piVar7[0x10];
            if (uVar8 == 0) {
              piVar7[0xf] = (int)fVar12;
              piVar7[0x10] = (int)fVar13;
              uStack_440 = 0;
            }
            else {
              iVar6 = (iStack_44c + uStack_450 * 4) - (int)pfVar4;
              uStack_440 = uVar8;
              do {
                fVar9 = ((*(float *)(iVar6 + (int)pfVar4) - (fVar3 + 0.2) * fVar12) - fVar13) *
                        (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar10 = fVar9 + fVar12;
                fVar12 = fVar9 + fVar10;
                *pfVar4 = fVar10 * fStack_458 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar13 = fVar13 + fVar10 * fVar3 + fVar10 * fVar3;
                uStack_440 = uStack_440 - 1;
              } while (uStack_440 != 0);
              piVar7[0xf] = (int)fVar12;
              piVar7[0x10] = (int)fVar13;
              uStack_430 = uStack_440;
              memset((void *)(iStack_454 + 0xce0),0,uVar8 * 4);
            }
            fVar3 = (float)piVar7[0x11];
            fVar12 = (float)piVar7[0x12];
            pfVar4 = (float *)(iStack_454 + 0xce0);
            fVar13 = (float)piVar7[0x13];
            fVar9 = (float)piVar7[0x14];
            if (uVar8 != 0) {
              iVar6 = (iStack_44c + uStack_450 * 4) - (int)pfVar4;
              uVar5 = uVar8;
              do {
                fVar10 = ((*(float *)(iVar6 + (int)pfVar4) - (fVar3 + 0.2) * fVar13) - fVar9) *
                         (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar11 = fVar10 + fVar13;
                fVar13 = fVar10 + fVar11;
                *pfVar4 = fVar11 * fVar12 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar9 = fVar9 + fVar11 * fVar3 + fVar11 * fVar3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            piVar7[0x13] = (int)fVar13;
            piVar7[0x14] = (int)fVar9;
            fVar3 = (float)piVar7[0x15];
            fVar12 = (float)piVar7[0x16];
            pfVar4 = (float *)(iStack_454 + 0xce0);
            fVar13 = (float)piVar7[0x17];
            fVar9 = (float)piVar7[0x18];
            if (uVar8 != 0) {
              iVar6 = (iStack_44c + uStack_450 * 4) - (int)pfVar4;
              uVar5 = uVar8;
              do {
                fVar10 = ((*(float *)(iVar6 + (int)pfVar4) - (fVar3 + 0.2) * fVar13) - fVar9) *
                         (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar11 = fVar10 + fVar13;
                fVar13 = fVar10 + fVar11;
                *pfVar4 = fVar11 * fVar12 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar9 = fVar9 + fVar11 * fVar3 + fVar11 * fVar3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            piVar7[0x17] = (int)fVar13;
            piVar7[0x18] = (int)fVar9;
            fVar3 = (float)piVar7[0x19];
            fVar12 = (float)piVar7[0x1a];
            pfVar4 = (float *)(iStack_454 + 0xce0);
            fVar13 = (float)piVar7[0x1b];
            fVar9 = (float)piVar7[0x1c];
            if (uVar8 != 0) {
              iVar6 = (iStack_44c + uStack_450 * 4) - (int)pfVar4;
              uVar5 = uVar8;
              do {
                fVar10 = ((*(float *)(iVar6 + (int)pfVar4) - (fVar3 + 0.2) * fVar13) - fVar9) *
                         (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar11 = fVar10 + fVar13;
                fVar13 = fVar10 + fVar11;
                *pfVar4 = fVar11 * fVar12 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar9 = fVar9 + fVar11 * fVar3 + fVar11 * fVar3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            piVar7[0x1b] = (int)fVar13;
            piVar7[0x1c] = (int)fVar9;
            fVar3 = (float)piVar7[0x1d];
            fStack_458 = (float)piVar7[0x1e];
            pfVar4 = (float *)(iStack_454 + 0xce0);
            fVar12 = (float)piVar7[0x1f];
            fVar13 = (float)piVar7[0x20];
            if (uVar8 == 0) {
              piVar7[0x1f] = (int)fVar12;
              piVar7[0x20] = (int)fVar13;
            }
            else {
              iVar6 = (iStack_44c + uStack_450 * 4) - (int)pfVar4;
              uVar5 = uVar8;
              do {
                fVar9 = ((*(float *)(iVar6 + (int)pfVar4) - (fVar3 + 0.2) * fVar12) - fVar13) *
                        (1.0 / (fVar3 * fVar3 + fVar3 / 5.0 + 1.0)) * fVar3;
                fVar10 = fVar9 + fVar12;
                fVar12 = fVar9 + fVar10;
                *pfVar4 = fVar10 * fStack_458 + *pfVar4;
                pfVar4 = pfVar4 + 1;
                fVar13 = fVar13 + fVar10 * fVar3 + fVar10 * fVar3;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
              piVar7[0x1f] = (int)fVar12;
              pfVar4 = (float *)(iStack_454 + 0xce0);
              piVar7[0x20] = (int)fVar13;
              uVar5 = 0;
              do {
                pfVar1 = pfVar4 + -0x100;
                fVar3 = *pfVar4;
                pfVar2 = pfVar4 + 0x100;
                pfVar4 = pfVar4 + 1;
                afStack_420[uVar5] = (fVar3 - *pfVar1) * *pfVar2 + *pfVar1;
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar8);
            }
            (*(code *)PTR_FUN_012ba8a4)
                      (afStack_420,afStack_420 + uVar8,
                       param_5 + (iStack_428 * 0x400 + uStack_450) * 4,piVar7 + 0x21,piVar7[0x22],
                       uStack_42c);
            pfVar4 = pfStack_448;
          }
          iStack_44c = iStack_44c + 0x1000;
          piVar7 = piVar7 + 0x23;
        } while (iStack_44c != iStack_424);
      }
      param_1 = iStack_454 + 0x10e0;
      uStack_450 = uStack_450 + uVar8;
    } while (uStack_450 < param_2);
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_00e30b70(int *param_1,int *param_2,int param_3,float *param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fStack_f8;
  int *piStack_f4;
  int iStack_f0;
  code *pcStack_ec;
  float fStack_e8;
  undefined1 auStack_e0 [64];
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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_14;
  
  uStack_14 = DAT_0128fd40 ^ (uint)&fStack_f8;
  iStack_f0 = param_5;
  fStack_f8 = (float)((double)*(int *)(*param_2 + 4) +
                     (double)(&DAT_011a2c10)[-(*(int *)(*param_2 + 4) >> 0x1f)]);
  fVar7 = (*param_4 / fStack_f8) * 16777216.0;
  fVar10 = 0.0;
  if (0.0 <= fVar7) {
    fVar10 = fVar7;
  }
  if (16777215.0 <= fVar10) {
    fVar10 = 16777215.0;
  }
  param_1[0x236] = (int)ROUND(fVar10);
  if ((int)ROUND(fVar10) == 0) {
    pcVar2 = FUN_00e2fab0;
  }
  else if (param_4[5] == 0.0) {
    pcVar2 = FUN_00e2fb30;
  }
  else {
    pcStack_ec = FUN_00e2fbb0;
    pcVar2 = FUN_00e2fad0;
    if (param_4[5] == 1.4013e-45) {
      pcVar2 = FUN_00e2fbb0;
    }
  }
  param_1[0x234] = (int)pcVar2;
  dVar9 = 2.0;
  piStack_f4 = param_1;
  func_0x00e879bf();
  pcStack_ec = (code *)(float)dVar9;
  dVar9 = 2.0;
  func_0x00e879bf();
  fStack_e8 = (float)dVar9;
  puVar3 = (undefined4 *)func_0x00e2fd30(auStack_e0,param_4[1],fStack_f8,pcStack_ec);
  uStack_a0 = *puVar3;
  uStack_9c = puVar3[1];
  uStack_98 = puVar3[2];
  uStack_94 = puVar3[3];
  uStack_90 = puVar3[4];
  uStack_8c = puVar3[5];
  uStack_88 = puVar3[6];
  uStack_84 = puVar3[7];
  uStack_80 = puVar3[8];
  uStack_7c = puVar3[9];
  uStack_78 = puVar3[10];
  uStack_74 = puVar3[0xb];
  uStack_70 = puVar3[0xc];
  uStack_6c = puVar3[0xd];
  uStack_68 = puVar3[0xe];
  uStack_64 = puVar3[0xf];
  puVar3 = (undefined4 *)func_0x00e2fd30(auStack_e0,param_4[2],fStack_f8,fStack_e8);
  fStack_f8 = 0.0;
  uStack_60 = *puVar3;
  uStack_5c = puVar3[1];
  uStack_58 = puVar3[2];
  uStack_54 = puVar3[3];
  uStack_50 = puVar3[4];
  uStack_4c = puVar3[5];
  uStack_48 = puVar3[6];
  uStack_44 = puVar3[7];
  uStack_40 = puVar3[8];
  uStack_3c = puVar3[9];
  uStack_38 = puVar3[10];
  uStack_34 = puVar3[0xb];
  uStack_30 = puVar3[0xc];
  uStack_2c = puVar3[0xd];
  uStack_28 = puVar3[0xe];
  uStack_24 = puVar3[0xf];
  if (*(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc != 0) {
    piVar5 = piStack_f4 + 0x15;
    do {
      func_0x008ab0e6(piVar5 + -0x10,&uStack_a0,0x40);
      func_0x008ab0e6(piVar5,&uStack_60,0x40);
      piVar5 = piVar5 + 0x23;
      fStack_f8 = (float)((int)fStack_f8 + 1);
      param_5 = iStack_f0;
    } while ((uint)fStack_f8 < (uint)(*(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc));
  }
  iVar1 = *(int *)(param_5 + 0x84);
  piStack_f4[2] = *(int *)(param_5 + 0x80);
  piStack_f4[3] = iVar1;
  fVar10 = *(float *)(param_3 + 0x90);
  fStack_f8 = (float)(*(int *)(param_3 + 0x8c) - *(int *)(param_3 + 0x88) >> 0xc);
  fVar7 = (float)(*(int *)(param_5 + 0x84) - *(int *)(param_5 + 0x80) >> 0xc);
  if (fStack_f8 != 0.0) {
    pfVar6 = (float *)(piStack_f4 + 0x26);
    piStack_f4 = (int *)(param_3 + 0xc);
    do {
      fVar4 = 0.0;
      fStack_e8 = -NAN;
      fVar8 = 0.0;
      if (fVar7 == 0.0) {
        fVar4 = -NAN;
      }
      else {
        piVar5 = (int *)(iStack_f0 + 4);
        do {
          if (*piVar5 == *piStack_f4) {
            fVar8 = fVar10 * *(float *)(iStack_f0 + (int)fVar4 * 8);
            goto LAB_00e30e3d;
          }
          fVar4 = (float)((int)fVar4 + 1);
          piVar5 = piVar5 + 2;
        } while ((uint)fVar4 < (uint)fVar7);
        fVar4 = -NAN;
      }
LAB_00e30e3d:
      pfVar6[-0x22] = fVar4;
      piStack_f4 = piStack_f4 + 2;
      *pfVar6 = fVar8;
      pfVar6 = pfVar6 + 0x23;
      fStack_f8 = (float)((int)fStack_f8 + -1);
    } while (fStack_f8 != 0.0);
  }
  FUN_008ab370();
  return;
}



void FUN_00e30e80(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(4,0x90);
  if (puVar2 != (undefined4 *)0x0) {
    memset(puVar2 + 3,0,0x84);
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = _anon_34520463::DedicatedState::vftable;
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00e30ef0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x90);
  }
  return param_1;
}



undefined ** FUN_00e30f30(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e5998) {
    func_0x008ab40d(&DAT_013e5998);
    if (DAT_013e5998 == -1) {
      func_0x008ab7fd(FUN_00f75d30);
      func_0x008ab3bc(&DAT_013e5998);
    }
  }
  return &PTR_vftable_012ba8d8;
}



void __fastcall FUN_00e30f90(int param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = 0;
  func_0x00e0b5e0(param_1 + 0x10,param_1 + 0x50,&uStack_4);
  return;
}



void __thiscall
FUN_00e30fb0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  (*(code *)PTR_FUN_012ba8a0)
            (param_3,param_3 + param_2 * 4,param_5,param_6,param_1 + 0x10,param_1 + 0x50,param_2,0);
  return;
}



void __thiscall
FUN_00e30fe0(int param_1,undefined4 param_2,int param_3,float *param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  func_0x00e0b5e0(param_1 + 0x50,param_1 + 0x90,&uStack_4);
  fVar3 = *(float *)(param_3 + 0x90) * *param_4;
  if (*(char *)(param_3 + 0x9c) == '\x0e') {
    if ((param_6 != 0) && (iVar2 = *(int *)(param_6 + 0x14), iVar2 != -1)) {
LAB_00e31033:
      uVar1 = *(undefined4 *)(param_6 + 0x8c);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_6 + 0x88);
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *(float *)(param_1 + 0x50 + iVar2 * 4) = fVar3;
      return;
    }
  }
  else if (*(char *)(param_3 + 0x9c) == '\x0f') {
    if ((param_6 != 0) && (iVar2 = *(int *)(param_6 + 0x10), iVar2 != -1)) goto LAB_00e31033;
    uVar1 = *(undefined4 *)(param_5 + 0x84);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 0x80);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    func_0x00e1c4d0(param_5,&DAT_010e6e88,fVar3,param_1 + 0x50);
  }
  return;
}



void FUN_00e310a0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_c [12];
  
  puVar2 = (undefined4 *)func_0x00ddbb30(0x10,0xc60);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0;
    *(undefined1 *)((int)puVar2 + 0x13) = 0;
    *(undefined8 *)(puVar2 + 0x108) = 0;
    memset(puVar2 + 0x10b,0,0x814);
    *(undefined8 *)(puVar2 + 0x316) = 0;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = _anon_734A390D::ConvolutionState::vftable;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined1 *)((int)puVar2 + 0x12) = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    memset(puVar2 + 7,0,0x400);
    puVar2[0x107] = 0;
    puVar2[0x108] = 0;
    puVar2[0x109] = 0;
    iVar4 = 0x100;
    puVar2[0x10a] = 0;
    puVar2[0x10b] = 0;
    puVar2[0x10c] = 0;
    puVar3 = puVar2 + 0x111;
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 2;
    } while (iVar4 != 0);
    puVar2[0x312] = 0;
    puVar2[0x313] = 0;
    puVar2[0x310] = 0;
    puVar2[0x311] = 0;
    puVar2[0x314] = FUN_00e31d60;
    puVar2[0x315] = 0;
    *param_1 = puVar2;
    return;
  }
  func_0x0062c530();
  func_0x00e87d2e(auStack_c,&DAT_0125c4dc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



int __thiscall FUN_00e315f0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0xc4c) != 0) {
    func_0x008ab37e(*(int *)(param_1 + 0xc4c));
  }
  if (*(int *)(param_1 + 0xc48) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0xc48));
  }
  if (*(int *)(param_1 + 0x428) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0x428));
    *(undefined4 *)(param_1 + 0x428) = 0;
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(int *)(param_1 + 0x41c) != 0) {
    func_0x00ddbb20(*(int *)(param_1 + 0x41c));
    *(undefined4 *)(param_1 + 0x41c) = 0;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x424) = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      func_0x00ddbb20(param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0xc60);
  }
  return param_1;
}



undefined ** FUN_00e316b0(void)

{
  int unaff_FS_OFFSET;
  
  if (*(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x14) < DAT_013e599c) {
    func_0x008ab40d(&DAT_013e599c);
    if (DAT_013e599c == -1) {
      func_0x008ab7fd(FUN_00f75d40);
      func_0x008ab3bc(&DAT_013e599c);
    }
  }
  return &PTR_vftable_012ba8dc;
}



void __thiscall FUN_00e31d60(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0xc48);
  iVar2 = *piVar1;
  for (piVar3 = piVar1 + 4; piVar3 != piVar1 + iVar2 * 0x428 + 4; piVar3 = piVar3 + 0x428) {
    (*(code *)PTR_FUN_012ba8a0)
              (piVar3,piVar3 + param_4,param_2,param_3,piVar3 + 0x406,piVar3 + 0x416,param_4,0);
  }
  return;
}



void __thiscall FUN_00e31dc0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0xc48);
  iVar2 = *piVar1;
  piVar3 = piVar1 + 4;
  if (piVar3 != piVar1 + iVar2 * 0x428 + 4) {
    piVar4 = piVar3 + param_4;
    do {
      func_0x00e1ab40(piVar3,piVar4,piVar3[0x400],piVar3[0x401]);
      (*(code *)PTR_FUN_012ba8a0)
                (piVar3,piVar3 + ((int)piVar4 - (int)piVar3 >> 2),unaff_ESI,unaff_EBP,piVar3 + 0x406
                 ,piVar3 + 0x416,param_4,0);
      piVar3 = piVar3 + 0x428;
      piVar4 = piVar4 + 0x428;
    } while (piVar3 != piVar1 + iVar2 * 0x428 + 4);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00e31edc)
// WARNING: Removing unreachable block (ram,0x00e31ee3)

void __thiscall FUN_00e31e60(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  char cVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  size_t sVar16;
  int iVar17;
  int *piVar18;
  double *pdVar19;
  float *pfVar20;
  double *pdVar21;
  float *pfVar22;
  int *piVar23;
  double *pdVar24;
  double *pdVar25;
  int *unaff_FS_OFFSET;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_4f0 [512];
  undefined1 auStack_2f0 [516];
  int aiStack_ec [3];
  int aiStack_e0 [3];
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  double *pdStack_c4;
  float *pfStack_c0;
  int aiStack_bc [5];
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 auStack_9c [16];
  double *apdStack_8c [2];
  int *apiStack_84 [3];
  uint auStack_78 [2];
  undefined1 auStack_70 [12];
  double *pdStack_64;
  undefined4 *puStack_5c;
  double *pdStack_58;
  double *pdStack_54;
  uint uStack_50;
  float *pfStack_4c;
  uint uStack_48;
  float *pfStack_44;
  uint uStack_40;
  float *pfStack_3c;
  int iStack_38;
  double *pdStack_34;
  double *pdStack_30;
  double *pdStack_2c;
  double *pdStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f6eaf6;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  apiStack_84[2] = (int *)0x0;
  apiStack_84[1] = (int *)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iStack_38 = param_1;
  memset((void *)(param_1 + 0x1c),0,0x400);
  apiStack_84[0] = (int *)(param_1 + 0x41c);
  if (aiStack_e0 != apiStack_84[0]) {
    iVar17 = *apiStack_84[0];
    *apiStack_84[0] = 0;
    *(undefined4 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x424) = 0;
    if (iVar17 != 0) {
      func_0x00ddbb20();
    }
  }
  piVar23 = (int *)(param_1 + 0x428);
  if (aiStack_ec != piVar23) {
    iVar17 = *piVar23;
    *piVar23 = 0;
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x430) = 0;
    if (iVar17 != 0) {
      func_0x00ddbb20();
    }
  }
  iVar17 = 0x100;
  puVar11 = (undefined4 *)(param_1 + 0x444);
  do {
    puVar11[-1] = 0;
    *puVar11 = 0;
    iVar17 = iVar17 + -1;
    puVar11 = puVar11 + 2;
  } while (iVar17 != 0);
  *(undefined4 *)(param_1 + 0xc44) = 0;
  iVar17 = *(int *)(param_1 + 0xc48);
  *(undefined4 *)(param_1 + 0xc40) = 0;
  *(undefined4 *)(param_1 + 0xc48) = 0;
  if (iVar17 != 0) {
    func_0x00ddbb20();
  }
  iVar17 = *(int *)(param_1 + 0xc4c);
  *(undefined4 *)(param_1 + 0xc4c) = 0;
  if (iVar17 != 0) {
    func_0x008ab37e();
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x18) == 0)) goto LAB_00e32988;
  cVar5 = *(char *)(param_3 + 0x14);
  *(char *)(param_1 + 0x10) = cVar5;
  if ((cVar5 == '\t') || ((cVar5 == '\n' || (cVar5 == '\v')))) {
    *(undefined1 *)(param_1 + 0x11) = 0;
    if ((cVar5 == '\t') || (((cVar5 == '\n' || (cVar5 == '\v')) || (cVar5 == '\f'))))
    goto LAB_00e31fe7;
    uVar9 = *(undefined1 *)(param_3 + 0x21);
  }
  else if (cVar5 == '\f') {
    *(undefined1 *)(param_1 + 0x11) = 0;
LAB_00e31fe7:
    uVar9 = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_3 + 0x20);
    uVar9 = *(undefined1 *)(param_3 + 0x21);
  }
  *(undefined1 *)(param_1 + 0x12) = uVar9;
  uVar10 = *(uint *)(param_3 + 0x24);
  if (1 < uVar10) {
    uVar10 = 1;
  }
  *(uint *)(param_1 + 0x14) = uVar10;
  uStack_50 = func_0x00ddbb50();
  pdStack_54 = (double *)func_0x00ddbba0();
  if (*(char *)(param_1 + 0x10) == '\t') {
    pdStack_28 = (double *)0x3;
  }
  else {
    pdStack_28 = (double *)func_0x00ddbba0(*(char *)(param_1 + 0x10));
  }
  puVar11 = (undefined4 *)func_0x00ddbae0(0x10);
  *puVar11 = pdStack_28;
  func_0x00e31510(puVar11 + 4,pdStack_28);
  iVar17 = *(int *)(iStack_38 + 0xc48);
  *(undefined4 **)(iStack_38 + 0xc48) = puVar11;
  if (iVar17 != 0) {
    func_0x00ddbb20();
  }
  iStack_a8 = 0;
  iStack_a4 = 0;
  iStack_a0 = 0;
  uStack_14 = 0;
  if (*(int *)(param_2 + 4) != *(int *)(param_3 + 0x10)) {
    func_0x00e417e0(*(int *)(param_3 + 0x10));
  }
  uStack_40 = func_0x00e87db0((ulonglong)*(uint *)(param_3 + 0x18) *
                              (ulonglong)*(uint *)(param_2 + 4) +
                              (ulonglong)(*(int *)(param_3 + 0x10) - 1),*(int *)(param_3 + 0x10));
  iStack_d4 = 0;
  iStack_d0 = 0;
  iStack_cc = 0;
  iStack_c8 = 0;
  func_0x00e1a840(*(float *)(param_2 + 0x18) /
                  (float)((double)*(int *)(param_2 + 4) +
                         (double)(&DAT_011a2c10)[-(*(int *)(param_2 + 4) >> 0x1f)]));
  iVar3 = iStack_38;
  piVar23 = *(int **)(iStack_38 + 0xc48);
  iVar17 = *piVar23;
  piVar18 = piVar23 + 4;
  if (piVar18 != piVar23 + iVar17 * 0x428 + 4) {
    piVar12 = piVar23 + 0x406;
    do {
      piVar18 = piVar18 + 0x428;
      *piVar12 = iStack_d4;
      piVar12[1] = iStack_d0;
      piVar12[2] = iStack_cc;
      piVar12[3] = iStack_c8;
      piVar12 = piVar12 + 0x428;
    } while (piVar18 != piVar23 + iVar17 * 0x428 + 4);
  }
  memset(auStack_2f0,0,0x200);
  pdVar24 = pdStack_28;
  func_0x00e31350(pdStack_28,auStack_2f0);
  memset(auStack_4f0,0,0x400);
  func_0x00e311f0(pdVar24,auStack_4f0);
  uVar13 = uStack_40 + 0x7f >> 7;
  uVar10 = 2;
  if (2 < uVar13) {
    uVar10 = uVar13;
  }
  *(uint *)(iVar3 + 0xc44) = uVar10 - 1;
  uVar10 = ((int)pdVar24 + 1) * (uVar10 - 1) * 0x81;
  uVar14 = (undefined4)((ulonglong)uVar10 * 8);
  if ((int)((ulonglong)uVar10 * 8 >> 0x20) != 0) {
    uVar14 = 0xffffffff;
  }
  puVar15 = (undefined4 *)func_0x008ab843(uVar14);
  uVar13 = uVar10;
  puVar11 = puVar15;
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 2;
    }
  }
  piVar23 = (int *)(iStack_38 + 0xc4c);
  if (piVar23 != aiStack_bc) {
    puVar11 = (undefined4 *)*piVar23;
    *piVar23 = (int)puVar15;
    puVar15 = puVar11;
  }
  if (puVar15 != (undefined4 *)0x0) {
    func_0x008ab37e(puVar15);
  }
  if (uVar10 != 0) {
    puVar11 = (undefined4 *)(*piVar23 + 4);
    do {
      puVar11[-1] = 0;
      *puVar11 = 0;
      uVar10 = uVar10 - 1;
      puVar11 = puVar11 + 2;
    } while (uVar10 != 0);
  }
  uVar10 = *(int *)(param_3 + 0x18) + 0x10f;
  pdVar24 = (double *)(uVar10 & 0xfffffff0);
  pdStack_30 = (double *)((int)pdVar24 * (int)pdStack_28);
  auStack_70._0_8_ = CONCAT44(uVar10,uVar10) & 0xfffffff0fffffff0;
  auStack_70._8_4_ = pdVar24;
  pdStack_64 = pdVar24;
  sVar16 = (size_t)(ZEXT48(pdStack_30) * 4);
  if ((int)(ZEXT48(pdStack_30) * 4 >> 0x20) != 0) {
    sVar16 = 0xffffffff;
  }
  pdStack_2c = pdVar24;
  pfStack_3c = (float *)func_0x008ab843(sVar16);
  if (pfStack_3c == (float *)0x0) {
    pfStack_3c = (float *)0x0;
  }
  else {
    memset(pfStack_3c,0,sVar16);
  }
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  pdStack_34 = (double *)0x0;
  pfStack_c0 = pfStack_3c;
  func_0x00de02f0(pfStack_3c,pdStack_30,&pdStack_34);
  pdVar21 = (double *)0x0;
  if (pdStack_28 != (double *)0x0) {
    iVar17 = 0;
    pdStack_34 = (double *)((int)pdStack_2c << 2);
    pfStack_44 = pfStack_3c;
    do {
      pdVar24 = pdStack_2c;
      if (pdStack_54 <= pdVar21) break;
      func_0x00e31710(pfStack_44,*(int *)(param_3 + 8) + iVar17,pdStack_54,
                      *(undefined1 *)(param_3 + 0x15),*(undefined4 *)(param_3 + 0x18));
      pdVar21 = (double *)((int)pdVar21 + 1);
      pfStack_44 = (float *)((int)pfStack_44 + (int)pdStack_34);
      iVar17 = iVar17 + uStack_50;
      pdVar24 = pdStack_2c;
    } while (pdVar21 < pdStack_28);
  }
  cVar5 = *(char *)(iStack_38 + 0x10);
  if (((cVar5 == '\t') || (cVar5 == '\n')) || ((cVar5 == '\v' || (cVar5 == '\f')))) {
    pdVar21 = (double *)func_0x00ddbb30(0x10,0x5c10);
    pdStack_30 = pdVar21;
    if (pdVar21 == (double *)0x0) {
      func_0x0062c530();
      func_0x00e87d2e(auStack_70 + 4,&DAT_0125c4dc);
      goto LAB_00e329be;
    }
    *(undefined8 *)((int)pdVar21 + 8) = 0;
    *(undefined4 *)((int)pdVar21 + 0x400c) = 0;
    *(undefined4 *)((int)pdVar21 + 0x440c) = 0;
    *(undefined4 *)((int)pdVar21 + 4) = 0x3f17ced9;
    *(undefined ***)pdVar21 = UhjDecoder<512>::vftable;
    memset((undefined4 *)((int)pdVar21 + 0x10),0,0x1400);
    memset((undefined4 *)((int)pdVar21 + 0x1410),0,0x1400);
    memset((undefined4 *)((int)pdVar21 + 0x2810),0,0x1400);
    memset((undefined4 *)((int)pdVar21 + 0x3c10),0,0x3fc);
    memset((undefined4 *)((int)pdVar21 + 0x4010),0,0x3fc);
    memset((undefined4 *)((int)pdVar21 + 0x4410),0,0x1800);
    pfVar22 = pfStack_3c;
    auVar8 = _auStack_70;
    auStack_9c = ZEXT816(0);
    pdVar19 = (double *)0x0;
    uStack_14._0_1_ = 2;
    puStack_5c = (undefined4 *)pdVar21;
    if (pdStack_28 != (double *)0x0) {
      pdVar25 = pdVar24;
      if ((&DAT_0000000f < pdStack_28) && (1 < DAT_013ddbb0)) {
        pdVar24 = (double *)((uint)pdStack_28 & 0xfffffff0);
        iVar17 = 8;
        pdStack_34 = pdVar24;
        do {
          auVar26._4_4_ = (int)pdVar19 + 1;
          auVar26._0_4_ = pdVar19;
          auVar26._8_4_ = (int)pdVar19 + 2;
          auVar26._12_4_ = (int)pdVar19 + 3;
          auVar26 = pmulld(auVar26,auVar8);
          iVar3 = (int)pdVar19 * 4;
          *(float **)(auStack_9c + iVar3) = pfVar22 + auVar26._0_4_;
          *(float **)(auStack_9c + iVar3 + 4) = pfVar22 + auVar26._4_4_;
          *(float **)(auStack_9c + iVar3 + 8) = pfVar22 + auVar26._8_4_;
          apdStack_8c[(int)pdVar19 + -1] = (double *)(pfVar22 + auVar26._12_4_);
          auVar27._4_4_ = iVar17 + -3;
          auVar27._0_4_ = iVar17 + -4;
          auVar27._8_4_ = iVar17 + -2;
          auVar27._12_4_ = iVar17 + -1;
          auVar26 = pmulld(auVar27,auVar8);
          apdStack_8c[(int)pdVar19] = (double *)(pfVar22 + auVar26._0_4_);
          apdStack_8c[(int)pdVar19 + 1] = (double *)(pfVar22 + auVar26._4_4_);
          apiStack_84[(int)pdVar19] = (int *)(pfVar22 + auVar26._8_4_);
          apiStack_84[(int)pdVar19 + 1] = (int *)(pfVar22 + auVar26._12_4_);
          auVar28._4_4_ = iVar17 + 1;
          auVar28._0_4_ = iVar17;
          auVar28._8_4_ = iVar17 + 2;
          auVar28._12_4_ = iVar17 + 3;
          auVar26 = pmulld(auVar28,auVar8);
          apiStack_84[(int)pdVar19 + 2] = (int *)(pfVar22 + auVar26._0_4_);
          auStack_78[(int)pdVar19] = (uint)(pfVar22 + auVar26._4_4_);
          *(float **)(auStack_70 + (int)pdVar19 * 4 + -4) = pfVar22 + auVar26._8_4_;
          *(float **)(auStack_70 + (int)pdVar19 * 4) = pfVar22 + auVar26._12_4_;
          auVar29._4_4_ = iVar17 + 5;
          auVar29._0_4_ = iVar17 + 4;
          auVar29._8_4_ = iVar17 + 6;
          auVar29._12_4_ = iVar17 + 7;
          auVar26 = pmulld(auVar29,auVar8);
          auVar30._0_4_ = pfVar22 + auVar26._0_4_;
          auVar30._4_4_ = pfVar22 + auVar26._4_4_;
          auVar30._8_4_ = pfVar22 + auVar26._8_4_;
          auVar30._12_4_ = pfVar22 + auVar26._12_4_;
          *(undefined1 (*) [16])(auStack_70 + (int)pdVar19 * 4 + 4) = auVar30;
          pdVar19 = pdVar19 + 2;
          iVar17 = iVar17 + 0x10;
        } while (pdVar19 < pdVar24);
        pdVar21 = pdStack_30;
        pdVar24 = pdStack_2c;
        pdVar25 = pdStack_2c;
        if (pdStack_28 <= pdVar19) goto LAB_00e32562;
      }
      pdVar24 = pdStack_2c;
      pfVar22 = pfStack_3c + (int)pdVar19 * (int)pdVar25;
      do {
        *(float **)(auStack_9c + (int)pdVar19 * 4) = pfVar22;
        pdVar19 = (double *)((int)pdVar19 + 1);
        pfVar22 = pfVar22 + (int)pdVar25;
      } while (pdVar19 < pdStack_28);
    }
LAB_00e32562:
    FUN_00e0e040(auStack_9c,auStack_9c + (int)pdStack_28 * 4,*(int *)(param_3 + 0x18),
                 *(int *)(param_3 + 0x18) != 0);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    func_0x00ddbb20(pdVar21);
  }
  uVar10 = 0;
  if (iStack_a8 != iStack_a4) {
    uVar10 = uStack_40;
  }
  lVar7 = (ulonglong)(uVar10 + *(int *)(param_3 + 0x18)) * 8;
  sVar16 = (size_t)lVar7;
  if ((int)((ulonglong)lVar7 >> 0x20) != 0) {
    sVar16 = 0xffffffff;
  }
  pdStack_2c = (double *)func_0x008ab843(sVar16);
  if (pdStack_2c == (double *)0x0) {
    pdStack_2c = (double *)0x0;
  }
  else {
    memset(pdStack_2c,0,sVar16);
  }
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  pdStack_34 = (double *)0x0;
  pfVar22 = (float *)(*(int *)(iStack_38 + 0xc44) * 0x408 + *(int *)(iStack_38 + 0xc4c));
  pdStack_c4 = pdStack_2c;
  if (pdStack_28 != (double *)0x0) {
    puStack_5c = (undefined4 *)((int)pdVar24 * 4);
    auStack_78[0] = 0x80;
    auStack_78[1] = uStack_40;
    if (0x80 < uStack_40) {
      auStack_78[1] = 0x80;
    }
    pfStack_44 = (float *)0x0;
    pfStack_4c = pfStack_3c;
    do {
      iVar17 = *(int *)(param_3 + 0x18);
      if (iStack_a8 == iStack_a4) {
        if (iVar17 != 0) {
          *pdStack_2c = (double)*pfStack_4c;
          pfVar20 = pfStack_4c;
          pdVar24 = pdStack_2c;
          while (iVar17 = iVar17 + -1, iVar17 != 0) {
            pdVar24 = pdVar24 + 1;
            pfVar1 = pfVar20 + 1;
            pfVar20 = pfVar20 + 1;
            *pdVar24 = (double)*pfVar1;
          }
        }
      }
      else {
        pdStack_30 = pdStack_2c + uStack_40;
        if (iVar17 != 0) {
          *pdStack_30 = (double)*pfStack_4c;
          pdVar24 = pdStack_30;
          pfVar20 = pfStack_4c;
          while (iVar17 = iVar17 + -1, iVar17 != 0) {
            pdVar24 = pdVar24 + 1;
            pfVar1 = pfVar20 + 1;
            pfVar20 = pfVar20 + 1;
            *pdVar24 = (double)*pfVar1;
          }
        }
        func_0x00e41a70(*(undefined4 *)(param_3 + 0x18),pdStack_30,uStack_40,pdStack_2c);
      }
      pdStack_30 = (double *)(*apiStack_84[0] + (int)pfStack_44);
      if (pdStack_2c != pdStack_2c + auStack_78[1]) {
        pdVar24 = pdStack_2c;
        pfVar20 = (float *)((int)pdStack_30 + 0x1fc);
        do {
          dVar4 = *pdVar24;
          pdVar24 = pdVar24 + 1;
          *pfVar20 = (float)dVar4;
          pfVar20 = pfVar20 + -1;
        } while (pdVar24 != pdStack_2c + auStack_78[1]);
      }
      _auStack_70 = ZEXT416((uint)auStack_70._0_4_);
      iVar17 = func_0x008ab47d();
      if (iVar17 == 0) goto LAB_00e329be;
      pdStack_54 = (double *)(iVar17 + 0x23U & 0xffffffe0);
      auStack_70._0_8_ = CONCAT44(iVar17 + 0x23U,auStack_70._0_4_) & 0xffffffe0ffffffff;
      pdStack_58 = pdStack_54 + 0x200;
      *(int *)((int)pdStack_54 + -4) = iVar17;
      iVar17 = 0x100;
      pdVar24 = pdStack_54;
      do {
        *(undefined4 *)pdVar24 = 0;
        *(undefined4 *)((int)pdVar24 + 4) = 0;
        *(undefined4 *)(pdVar24 + 1) = 0;
        *(undefined4 *)((int)pdVar24 + 0xc) = 0;
        pdVar24 = pdVar24 + 2;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      auStack_70._8_4_ = pdVar24;
      pdStack_64 = pdStack_58;
      uStack_48 = auStack_78[1];
      uStack_14._0_1_ = 4;
      pdStack_30 = (double *)0x0;
      pdVar21 = pdVar24;
      if (*(int *)(iStack_38 + 0xc44) != 0) {
        do {
          apdStack_8c[1] = pdVar21;
          uStack_50 = uStack_40 - uStack_48;
          if (0x80 < uStack_40 - uStack_48) {
            uStack_50 = auStack_78[0];
          }
          pdVar21 = pdStack_54;
          if (uStack_50 != 0) {
            pdVar19 = pdStack_2c + uStack_48;
            *pdStack_54 = pdStack_2c[uStack_48];
            pdStack_54[1] = 0.0;
            pdVar25 = pdStack_54;
            uVar10 = uStack_50;
            while( true ) {
              uVar10 = uVar10 - 1;
              pdVar21 = pdVar25 + 2;
              if (uVar10 == 0) break;
              pdVar2 = pdVar19 + 1;
              pdVar19 = pdVar19 + 1;
              *pdVar21 = *pdVar2;
              pdVar25[3] = 0.0;
              pdVar25 = pdVar21;
            }
          }
          uStack_48 = uStack_48 + uStack_50;
          if (pdVar21 != pdVar24) {
            pdVar21 = pdVar21 + 1;
            do {
              *(undefined4 *)(pdVar21 + -1) = 0;
              *(undefined4 *)((int)pdVar21 + -4) = 0;
              *(undefined4 *)pdVar21 = 0;
              *(undefined4 *)((int)pdVar21 + 4) = 0;
              pdVar19 = pdVar21 + 1;
              pdVar21 = pdVar21 + 2;
            } while (pdVar19 != pdVar24);
          }
          func_0x00e412f0(pdStack_54,apdStack_8c[1],0xbff0000000000000);
          iVar17 = 0x80;
          *pfVar22 = (float)*pdStack_54;
          pfVar22[1] = (float)pdStack_54[1];
          pfVar22 = pfVar22 + 2;
          pdVar21 = pdStack_54;
          do {
            *pfVar22 = (float)pdVar21[2];
            pfVar22[1] = (float)pdVar21[3];
            pfVar22 = pfVar22 + 2;
            iVar17 = iVar17 + -1;
            pdVar21 = pdVar21 + 2;
          } while (iVar17 != 0);
          pdStack_30 = (double *)((int)pdStack_30 + 1);
          pdVar21 = apdStack_8c[1];
        } while (pdStack_30 < *(undefined4 **)(iStack_38 + 0xc44));
      }
      uStack_14 = CONCAT31(uStack_14._1_3_,3);
      uVar10 = (int)pdStack_58 - (int)pdStack_54 & 0xfffffff0;
      if ((0xfff < uVar10) &&
         (pdStack_58 = (double *)(uVar10 + 0x23),
         0x1f < (uint)((int)pdStack_54 + (-4 - *(int *)((int)pdStack_54 + -4))))) goto LAB_00e329be;
      func_0x008ab812();
      pdStack_34 = (double *)((int)pdStack_34 + 1);
      pfStack_4c = (float *)((int)pfStack_4c + (int)puStack_5c);
      pfStack_44 = pfStack_44 + 0x80;
      _auStack_70 = ZEXT416((uint)auStack_70._0_4_);
    } while (pdStack_34 < pdStack_28);
  }
  if (pdStack_2c != (double *)0x0) {
    func_0x008ab37e();
  }
  if (pfStack_3c != (float *)0x0) {
    func_0x008ab37e();
  }
  if (iStack_a8 != 0) {
    uVar10 = iStack_a0 - iStack_a8 & 0xfffffff8;
    iVar17 = iStack_a8;
    if (0xfff < uVar10) {
      iVar17 = *(int *)(iStack_a8 + -4);
      uVar10 = uVar10 + 0x23;
      if (0x1f < (iStack_a8 - iVar17) - 4U) {
LAB_00e329be:
        func_0x008aaf66();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    func_0x008ab812(iVar17,uVar10);
  }
LAB_00e32988:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00e329d0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  uint *puVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfStack_50;
  float *pfStack_4c;
  uint uStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  int iStack_3c;
  int iStack_38;
  float *pfStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint *puStack_24;
  float *pfStack_1c;
  uint uStack_18;
  float *pfStack_14;
  uint uStack_10;
  float *pfStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&pfStack_50;
  iStack_8 = param_1;
  if (*(int *)(param_1 + 0xc44) != 0) {
    puStack_24 = *(uint **)(param_1 + 0xc48);
    uStack_10 = *(uint *)(param_1 + 0xc40);
    puVar8 = (uint *)(param_1 + 0xc40);
    uStack_28 = 0;
    if (param_2 != 0) {
      iStack_44 = param_1 + 0x21c;
      do {
        iVar14 = *(int *)(param_1 + 0x18);
        puVar7 = (undefined4 *)(0x80 - iVar14);
        if ((undefined4 *)(param_2 - uStack_28) < (undefined4 *)(0x80 - iVar14)) {
          puVar7 = (undefined4 *)(param_2 - uStack_28);
        }
        iStack_30 = (int)puVar7 * 4;
        puStack_40 = puVar7;
        if (puVar7 != (undefined4 *)0x0) {
          uStack_18 = iVar14;
          func_0x008ab0e6(iStack_44 + iVar14 * 4,param_3 + uStack_28 * 4,iStack_30);
          iVar14 = *(int *)(iStack_8 + 0x18);
          param_1 = iStack_8;
        }
        uStack_18 = 0;
        if (*puStack_24 != 0) {
          uStack_48 = (uint)puVar7 & 0x3fffffff;
          pfStack_14 = *(float **)(param_1 + 0x428);
          iStack_38 = *(int *)(param_1 + 0x41c);
          pfStack_c = (float *)(puStack_24 + (int)puVar7 + uStack_28 + 4);
          pfStack_1c = (float *)(puStack_24 + uStack_28 + 4);
          iVar11 = iVar14;
          do {
            pfStack_4c = pfStack_1c;
            pfVar15 = (float *)(param_1 + (iVar11 + 8) * 4);
            if (pfStack_4c != pfStack_c) {
              iVar14 = iStack_38 - (int)pfVar15;
              pfVar12 = pfStack_4c;
              do {
                fVar17 = 0.0;
                fVar18 = 0.0;
                fVar19 = 0.0;
                fVar20 = 0.0;
                iVar11 = 0x20;
                pfVar10 = pfVar15;
                do {
                  fVar2 = *pfVar10;
                  pfVar3 = pfVar10 + 1;
                  pfVar4 = pfVar10 + 2;
                  pfVar5 = pfVar10 + 3;
                  pfVar1 = (float *)(iVar14 + (int)pfVar10);
                  pfVar10 = pfVar10 + 4;
                  fVar17 = fVar17 + *pfVar1 * fVar2;
                  fVar18 = fVar18 + pfVar1[1] * *pfVar3;
                  fVar19 = fVar19 + pfVar1[2] * *pfVar4;
                  fVar20 = fVar20 + pfVar1[3] * *pfVar5;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                pfVar15 = pfVar15 + 1;
                iVar14 = iVar14 + -4;
                *pfVar12 = fVar18 + fVar19 + fVar20 + fVar17;
                pfVar12 = pfVar12 + 1;
                param_1 = iStack_8;
              } while (pfVar12 != pfStack_c);
            }
            iVar14 = *(int *)(param_1 + 0x18);
            pfVar15 = pfStack_14 + iVar14;
            pfStack_34 = (float *)(iStack_30 + (int)pfVar15);
            iStack_3c = 0;
            uStack_2c = uStack_48;
            if (pfStack_34 < pfVar15) {
              uStack_2c = 0;
            }
            pfVar12 = pfStack_4c;
            pfVar10 = pfStack_4c;
            iVar11 = *(int *)(iStack_8 + 0x18);
            if ((uStack_2c != 0) &&
               (iVar14 = *(int *)(iStack_8 + 0x18), iVar11 = iVar14, 0xf < uStack_2c)) {
              pfStack_50 = pfStack_4c + (uStack_2c - 1);
              if (pfStack_50 < pfStack_4c) {
                if ((pfVar15 + (uStack_2c - 1) < pfStack_4c) ||
                   (iVar14 = *(int *)(iStack_8 + 0x18), iVar11 = iVar14, pfStack_50 < pfVar15)) {
                  uVar16 = 0;
                  do {
                    fVar17 = pfVar12[1];
                    fVar18 = pfVar12[2];
                    fVar19 = pfVar12[3];
                    uVar16 = uVar16 + 0x10;
                    fVar20 = pfVar15[1];
                    fVar2 = pfVar15[2];
                    fVar6 = pfVar15[3];
                    *pfVar10 = *pfVar15 + *pfVar12;
                    pfVar10[1] = fVar20 + fVar17;
                    pfVar10[2] = fVar2 + fVar18;
                    pfVar10[3] = fVar6 + fVar19;
                    fVar17 = pfVar12[5];
                    fVar18 = pfVar12[6];
                    fVar19 = pfVar12[7];
                    fVar20 = pfVar15[5];
                    fVar2 = pfVar15[6];
                    fVar6 = pfVar15[7];
                    pfVar10[4] = pfVar15[4] + pfVar12[4];
                    pfVar10[5] = fVar20 + fVar17;
                    pfVar10[6] = fVar2 + fVar18;
                    pfVar10[7] = fVar6 + fVar19;
                    fVar17 = pfVar12[9];
                    fVar18 = pfVar12[10];
                    fVar19 = pfVar12[0xb];
                    fVar20 = pfVar15[9];
                    fVar2 = pfVar15[10];
                    fVar6 = pfVar15[0xb];
                    pfVar10[8] = pfVar15[8] + pfVar12[8];
                    pfVar10[9] = fVar20 + fVar17;
                    pfVar10[10] = fVar2 + fVar18;
                    pfVar10[0xb] = fVar6 + fVar19;
                    pfVar1 = pfVar15 + 0xc;
                    fVar17 = pfVar15[0xd];
                    fVar18 = pfVar15[0xe];
                    fVar19 = pfVar15[0xf];
                    pfVar15 = pfVar15 + 0x10;
                    pfVar3 = pfVar12 + 0xc;
                    fVar20 = pfVar12[0xd];
                    fVar2 = pfVar12[0xe];
                    fVar6 = pfVar12[0xf];
                    pfVar12 = pfVar12 + 0x10;
                    pfVar10[0xc] = *pfVar1 + *pfVar3;
                    pfVar10[0xd] = fVar17 + fVar20;
                    pfVar10[0xe] = fVar18 + fVar2;
                    pfVar10[0xf] = fVar19 + fVar6;
                    pfVar10 = pfVar10 + 0x10;
                  } while (uVar16 != (uStack_2c & 0xfffffff0));
                  iVar14 = *(int *)(iStack_8 + 0x18);
                  iVar11 = iVar14;
                }
              }
              else {
                iVar14 = *(int *)(iStack_8 + 0x18);
                iVar11 = iVar14;
              }
            }
            if (pfVar15 != pfStack_34) {
              iVar14 = (int)pfVar10 - (int)pfVar12;
              do {
                fVar17 = *pfVar15;
                pfVar15 = pfVar15 + 1;
                *(float *)(iVar14 + (int)pfVar12) = fVar17 + *pfVar12;
                pfVar12 = pfVar12 + 1;
              } while (pfVar15 != pfStack_34);
              iVar14 = *(int *)(iStack_8 + 0x18);
              iVar11 = iVar14;
            }
            uStack_18 = uStack_18 + 1;
            pfStack_c = pfStack_c + 0x428;
            pfStack_1c = pfStack_4c + 0x428;
            iStack_38 = iStack_38 + 0x200;
            pfStack_14 = pfStack_14 + 0x100;
            param_1 = iStack_8;
          } while (uStack_18 < *puStack_24);
        }
        uStack_28 = uStack_28 + (int)puStack_40;
        *(int *)(param_1 + 0x18) = iVar14 + (int)puStack_40;
        if ((uint)(iVar14 + (int)puStack_40) < 0x80) break;
        *(undefined4 *)(param_1 + 0x18) = 0;
        func_0x008ab0e6(param_1 + 0x1c,iStack_44,0x200);
        param_1 = iStack_8;
        pfVar15 = (float *)(iStack_8 + 0x1c);
        iVar14 = 0x7f;
        pfStack_14 = (float *)(iStack_8 + 0x440);
        *(undefined4 *)(iStack_8 + 0x444) = 0;
        *pfStack_14 = *pfVar15;
        puStack_40 = (undefined4 *)(iStack_8 + 0x444);
        pfVar12 = (float *)(iStack_8 + 0x448);
        do {
          pfVar10 = pfVar12;
          pfVar12 = pfVar15 + 1;
          pfVar15 = pfVar15 + 1;
          *pfVar10 = *pfVar12;
          pfVar10[1] = 0.0;
          iVar14 = iVar14 + -1;
          pfVar12 = pfVar10 + 2;
        } while (iVar14 != 0);
        if (pfVar10 + 2 != (float *)(iStack_8 + 0xc40)) {
          pfVar15 = pfVar10 + 3;
          do {
            pfVar15[-1] = 0.0;
            *pfVar15 = 0.0;
            pfVar12 = pfVar15 + 1;
            pfVar15 = pfVar15 + 2;
          } while (pfVar12 != (float *)(iStack_8 + 0xc40));
        }
        iVar14 = iStack_8 + 0x440;
        iStack_3c = iStack_8 + 0xc40;
        func_0x00e41060(iVar14,iStack_3c,0xbf800000);
        iVar11 = uStack_10 * 0x408;
        iStack_30 = iVar11;
        func_0x008ab0e6(*(int *)(param_1 + 0xc4c) + iVar11,iVar14,0x408);
        uStack_18 = 0;
        pfVar15 = (float *)(*(int *)(param_1 + 0xc44) * 0x408 + *(int *)(param_1 + 0xc4c));
        if (*puStack_24 != 0) {
          pfStack_c = (float *)0x0;
          do {
            iVar14 = 0x81;
            puVar7 = puStack_40;
            do {
              puVar7[-1] = 0;
              *puVar7 = 0;
              iVar14 = iVar14 + -1;
              puVar7 = puVar7 + 2;
            } while (iVar14 != 0);
            pfVar12 = (float *)(*(int *)(param_1 + 0xc4c) + iVar11);
            uVar16 = uStack_10;
            if (uStack_10 < *(uint *)(param_1 + 0xc44)) {
              do {
                iVar14 = 0x81;
                pfVar10 = pfStack_14;
                do {
                  fVar17 = *pfVar12;
                  fVar18 = pfVar12[1];
                  pfVar12 = pfVar12 + 2;
                  fVar19 = *pfVar15;
                  fVar20 = pfVar15[1];
                  pfVar15 = pfVar15 + 2;
                  *pfVar10 = (fVar19 * fVar17 - fVar20 * fVar18) + *pfVar10;
                  pfVar10[1] = fVar19 * fVar18 + fVar20 * fVar17 + pfVar10[1];
                  pfVar10 = pfVar10 + 2;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
                uVar16 = uVar16 + 1;
                param_1 = iStack_8;
              } while (uVar16 < *(uint *)(iStack_8 + 0xc44));
            }
            pfVar12 = *(float **)(param_1 + 0xc4c);
            for (uVar16 = uStack_10; uVar16 != 0; uVar16 = uVar16 - 1) {
              iVar14 = 0x81;
              pfVar10 = pfStack_14;
              do {
                fVar17 = *pfVar15;
                fVar18 = pfVar15[1];
                fVar19 = *pfVar12;
                pfVar15 = pfVar15 + 2;
                fVar20 = pfVar12[1];
                pfVar1 = pfVar12 + 1;
                fVar2 = *pfVar12;
                pfVar12 = pfVar12 + 2;
                *pfVar10 = (fVar17 * fVar19 - fVar18 * *pfVar1) + *pfVar10;
                pfVar10[1] = fVar17 * fVar20 + fVar18 * fVar2 + pfVar10[1];
                pfVar10 = pfVar10 + 2;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
              param_1 = iStack_8;
            }
            puVar8 = (uint *)(param_1 + 0x854);
            puVar13 = (uint *)(param_1 + 0x834);
            iVar14 = 0xf;
            do {
              iVar11 = iVar14;
              uVar16 = puVar13[2];
              puVar8[-3] = puVar13[1];
              puVar8[-2] = uVar16 ^ 0x80000000;
              uVar16 = *puVar13;
              puVar8[-1] = puVar13[-1];
              *puVar8 = uVar16 ^ 0x80000000;
              uVar16 = puVar13[-2];
              puVar8[1] = puVar13[-3];
              puVar8[2] = uVar16 ^ 0x80000000;
              uVar16 = puVar13[-4];
              puVar8[3] = puVar13[-5];
              puVar8[4] = uVar16 ^ 0x80000000;
              uVar16 = puVar13[-6];
              puVar8[5] = puVar13[-7];
              puVar8[6] = uVar16 ^ 0x80000000;
              uVar16 = puVar13[-8];
              puVar8[7] = puVar13[-9];
              puVar8[8] = uVar16 ^ 0x80000000;
              uVar16 = puVar13[-10];
              puVar8[9] = puVar13[-0xb];
              puVar8[10] = uVar16 ^ 0x80000000;
              uVar16 = puVar13[-0xc];
              puVar8[0xb] = puVar13[-0xd];
              puVar8[0xc] = uVar16 ^ 0x80000000;
              iVar14 = iVar11 + -1;
              puVar8 = puVar8 + 0x10;
              puVar13 = puVar13 + -0x10;
            } while (iVar14 != 0);
            puVar7 = (undefined4 *)(param_1 + 0x478);
            iVar11 = iVar11 + 6;
            puVar9 = (undefined4 *)(param_1 + 0xc08);
            do {
              uVar16 = puVar7[1];
              *puVar9 = *puVar7;
              puVar7 = puVar7 + -2;
              puVar9[1] = uVar16 ^ 0x80000000;
              iVar11 = iVar11 + -1;
              puVar9 = puVar9 + 2;
            } while (iVar11 != 0);
            func_0x00e41060(pfStack_14,iStack_3c,0x3f800000);
            pfVar12 = (float *)(iStack_8 + 0x448);
            pfVar10 = (float *)((int)pfStack_c + *(int *)(iStack_8 + 0x428) + 0x204);
            iVar14 = 0x10;
            do {
              pfVar10[-0x81] = (pfVar12[-2] + pfVar10[-1]) * 0.00390625;
              pfVar10[-0x80] = (*pfVar10 + *pfVar12) * 0.00390625;
              pfVar10[-0x7f] = (pfVar12[2] + pfVar10[1]) * 0.00390625;
              pfVar10[-0x7e] = (pfVar12[4] + pfVar10[2]) * 0.00390625;
              pfVar10[-0x7d] = (pfVar12[6] + pfVar10[3]) * 0.00390625;
              pfVar10[-0x7c] = (pfVar12[8] + pfVar10[4]) * 0.00390625;
              pfVar10[-0x7b] = (pfVar12[10] + pfVar10[5]) * 0.00390625;
              pfVar1 = pfVar12 + 0xc;
              pfVar12 = pfVar12 + 0x10;
              pfVar10[-0x7a] = (*pfVar1 + pfVar10[6]) * 0.00390625;
              pfVar10 = pfVar10 + 8;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x10;
            puVar7 = (undefined4 *)(iStack_8 + 0x848);
            puVar9 = (undefined4 *)((int)pfStack_c + *(int *)(iStack_8 + 0x428) + 0x204);
            do {
              puVar9[-1] = puVar7[-2];
              *puVar9 = *puVar7;
              puVar9[1] = puVar7[2];
              puVar9[2] = puVar7[4];
              puVar9[3] = puVar7[6];
              puVar9[4] = puVar7[8];
              puVar9[5] = puVar7[10];
              puVar9[6] = puVar7[0xc];
              iVar14 = iVar14 + -1;
              puVar7 = puVar7 + 0x10;
              puVar9 = puVar9 + 8;
            } while (iVar14 != 0);
            uStack_18 = uStack_18 + 1;
            pfStack_c = pfStack_c + 0x100;
            param_1 = iStack_8;
            iVar11 = iStack_30;
          } while (uStack_18 < *puStack_24);
        }
        if (uStack_10 == 0) {
          uStack_10 = *(uint *)(param_1 + 0xc44);
        }
        uStack_10 = uStack_10 - 1;
      } while (uStack_28 < param_2);
      puVar8 = (uint *)(param_1 + 0xc40);
    }
    *puVar8 = uStack_10;
    (**(code **)(param_1 + 0xc50))(param_5,param_6,param_2);
  }
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e332b8)
// WARNING: Removing unreachable block (ram,0x00e332be)
// WARNING: Removing unreachable block (ram,0x00e332c6)
// WARNING: Removing unreachable block (ram,0x00e332ce)
// WARNING: Removing unreachable block (ram,0x00e332d6)
// WARNING: Removing unreachable block (ram,0x00e332da)

void __thiscall
FUN_00e33200(undefined1 *param_1,float *param_2,float *param_3,undefined4 param_4,int param_5,
            float param_6)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined1 auStack_b4 [64];
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int *piStack_68;
  float *pfStack_64;
  float *pfStack_60;
  float *pfStack_5c;
  float *pfStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_b4;
  pfStack_64 = param_2;
  pfStack_58 = param_3;
  iStack_6c = param_5;
  piStack_8 = (int *)param_6;
  pfStack_60 = (float *)param_1;
  if (*(int *)(param_1 + 0xc44) != 0) {
    piVar11 = *(int **)(param_1 + 0xc48);
    *(code **)(param_1 + 0xc50) = FUN_00e31d60;
    *(undefined4 *)(param_1 + 0xc54) = 0;
    piStack_8 = piVar11 + *piVar11 * 0x428 + 4;
    piStack_68 = piVar11 + 4;
    if (piStack_68 != piStack_8) {
      uStack_70 = 0;
      uStack_74 = 0;
      pfStack_5c = (float *)0x0;
      piVar11 = piVar11 + 0x41a;
      do {
        if (pfStack_5c == (float *)0x0) {
          memset(piVar11,0,0x40);
        }
        else {
          iVar8 = (-(uint)(piVar11 + 0x10 < piVar11) & 0xfffffff0) + 0x10;
          piVar14 = piVar11;
          if (piVar11 <= piVar11 + 0x10) {
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar14 = 0;
              piVar14 = piVar14 + 1;
            }
          }
        }
        piVar11 = piVar11 + 0x428;
        piStack_68 = piStack_68 + 0x428;
      } while (piStack_68 != piStack_8);
    }
    pfVar13 = pfStack_60;
    iVar8 = iStack_6c;
    piStack_68 = (int *)pfStack_58[0x24];
    cVar1 = *(char *)((int)pfStack_60 + 0x10);
    if ((((cVar1 == '\a') || (cVar1 == '\b')) || (cVar1 == '\t')) ||
       (((cVar1 == '\n' || (cVar1 == '\v')) || (cVar1 == '\f')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    piStack_8 = (int *)*pfStack_64;
    if (bVar4) {
      if ((cVar1 == '\t') && (*(int *)((int)piStack_8 + 0x1a400) == 0)) {
        *(code **)((int)pfStack_60 + 0xc50) = FUN_00e31dc0;
        *(undefined4 *)((int)pfStack_60 + 0xc54) = 0;
        *(undefined4 *)(*(int *)((int)pfStack_60 + 0xc48) + 0x1010) = 0x3f800000;
        *(undefined4 *)(*(int *)((int)pfStack_60 + 0xc48) + 0x1014) = 0x3f29374c;
        *(undefined4 *)(*(int *)((int)pfStack_60 + 0xc48) + 0x20b0) = 0x3f800000;
        *(undefined4 *)(*(int *)((int)pfStack_60 + 0xc48) + 0x20b4) = 0x3fa58106;
        *(undefined4 *)(*(int *)((int)pfStack_60 + 0xc48) + 0x3150) = 0x3f800000;
        *(undefined4 *)(*(int *)((int)pfStack_60 + 0xc48) + 0x3154) = 0x3fa58106;
      }
      else if (*(uint *)((int)pfStack_60 + 0x14) < *(uint *)((int)piStack_8 + 0x14)) {
        *(code **)((int)pfStack_60 + 0xc50) = FUN_00e31dc0;
        *(undefined4 *)((int)pfStack_60 + 0xc54) = 0;
        puVar5 = (undefined4 *)
                 func_0x00e1a160(&uStack_14,*(uint *)((int)pfStack_60 + 0x14),
                                 *(undefined4 *)((int)piStack_8 + 0x14));
        uVar10 = 1;
        uStack_14 = *puVar5;
        uStack_10 = puVar5[1];
        uStack_c = puVar5[2];
        piStack_8 = (int *)puVar5[3];
        *(undefined4 *)(*(int *)((int)pfVar13 + 0xc48) + 0x1010) = uStack_14;
        *(undefined4 *)(*(int *)((int)pfVar13 + 0xc48) + 0x1014) = 0x3f800000;
        puVar6 = *(uint **)((int)pfVar13 + 0xc48);
        if (1 < *puVar6) {
          iVar9 = 0x10a0;
          do {
            *(undefined4 *)(iVar9 + 0x1010 + (int)puVar6) = uStack_10;
            uVar10 = uVar10 + 1;
            *(undefined4 *)(iVar9 + 0x1014 + *(int *)((int)pfVar13 + 0xc48)) = 0x3f800000;
            puVar6 = *(uint **)((int)pfVar13 + 0xc48);
            iVar9 = iVar9 + 0x10a0;
          } while (uVar10 < *puVar6);
        }
      }
      uVar3 = *(undefined4 *)(iVar8 + 0x84);
      *(undefined4 *)((int)pfVar13 + 8) = *(undefined4 *)(iVar8 + 0x80);
      cVar1 = *(char *)((int)pfVar13 + 0x12);
      *(undefined4 *)((int)pfVar13 + 0xc) = uVar3;
      if (cVar1 == '\0') {
        pfStack_5c = (float *)&DAT_010dded8;
      }
      else if (cVar1 == '\x01') {
        pfStack_5c = (float *)&DAT_010dde98;
      }
      else if (cVar1 == '\x03') {
        pfStack_5c = (float *)&DAT_010ddf18;
      }
      else {
        pfStack_5c = (float *)&DAT_010dde58;
      }
      cVar1 = *(char *)((int)pfVar13 + 0x10);
      if ((((cVar1 == '\a') || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\f')) {
        pfVar12 = (float *)&DAT_010ddf80;
        puVar7 = &DAT_010ddf68;
      }
      else {
        pfVar12 = (float *)&DAT_010ddf70;
        puVar7 = &DAT_010ddf58;
      }
      if (*(char *)((int)pfVar13 + 0x11) == '\0') {
        pfVar12 = (float *)puVar7;
      }
      pfStack_60 = pfVar12;
      memset(afStack_54,0,0x40);
      pfStack_58 = (float *)0x0;
      if (**(int **)((int)pfVar13 + 0xc48) != 0) {
        pfStack_64 = (float *)0x0;
        do {
          bVar2 = *(byte *)((int)pfVar12 + (int)pfStack_58);
          afStack_54[bVar2] = pfStack_5c[bVar2];
          func_0x00e1c4d0(iStack_6c,afStack_54,piStack_68);
          puVar5 = *(undefined4 **)((int)pfVar13 + 0xc48);
          pfStack_58 = (float *)((int)pfStack_58 + 1);
          afStack_54[bVar2] = 0.0;
          pfStack_64 = pfStack_64 + 0x428;
          pfVar12 = pfStack_60;
        } while (pfStack_58 < (float *)*puVar5);
      }
    }
    else {
      puVar5 = (undefined4 *)0x0;
      pfStack_58 = (float *)0x0;
      switch(cVar1) {
      case '\0':
        pfStack_58 = (float *)&DAT_010e6eec;
        puVar5 = (undefined4 *)&DAT_010e6ef8;
        break;
      case '\x01':
      case '\f':
        pfStack_58 = (float *)&DAT_010e6ef8;
        puVar5 = (undefined4 *)&UNK_010e6f10;
        break;
      case '\x02':
        pfStack_58 = (float *)&UNK_010e6f10;
        puVar5 = (undefined4 *)&UNK_010e6f28;
        break;
      case '\x03':
        pfStack_58 = (float *)&UNK_010e6f28;
        puVar5 = (undefined4 *)&UNK_010e6f58;
        break;
      case '\x04':
        pfStack_58 = (float *)&UNK_010e6f58;
        puVar5 = (undefined4 *)&UNK_010e6fa0;
        break;
      case '\x05':
        pfStack_58 = (float *)&UNK_010e6fa0;
        puVar5 = (undefined4 *)&UNK_010e6ff4;
        break;
      case '\x06':
        pfStack_58 = (float *)&UNK_010e6ff8;
        puVar5 = &DAT_010e7058;
      }
      pfStack_64 = pfStack_58;
      uVar3 = *(undefined4 *)(iStack_6c + 0x84);
      *(undefined4 *)((int)pfStack_60 + 8) = *(undefined4 *)(iStack_6c + 0x80);
      *(undefined4 *)((int)pfStack_60 + 0xc) = uVar3;
      pfStack_5c = pfStack_58;
      if (*(char *)((int)piStack_8 + 0x40) == '\x01') {
        piStack_8 = (int *)(((int)puVar5 - (int)pfStack_58) / 0xc);
        if (piStack_8 != (int *)0x0) {
          pfVar13 = pfStack_58 + 2;
          pfStack_58 = (float *)0x0;
          do {
            if (*(char *)(pfVar13 + -2) != '\x03') {
              pfStack_5c = (float *)pfVar13[-1];
              fVar18 = ABS((float)pfStack_5c);
              if (fVar18 < 1.5707964) {
                pfStack_60 = (float *)1.5707964;
                if (fVar18 + fVar18 <= 1.5707964) {
                  pfStack_60 = (float *)(fVar18 + fVar18);
                }
                fVar15 = (float10)func_0x00e87c60(pfStack_60);
                pfStack_5c = (float *)(float)fVar15;
              }
              dVar16 = (double)*pfVar13;
              pfStack_60 = pfStack_5c;
              func_0x00e87995();
              pfStack_60 = (float *)(float)dVar16;
              dVar16 = (double)(float)pfStack_5c;
              func_0x00e87995();
              dVar17 = (double)*pfVar13;
              func_0x00e8799b((float)dVar16 * (float)pfStack_60);
              dVar16 = (double)(float)pfStack_5c;
              func_0x00e8799b((float)dVar17);
              pfVar12 = (float *)func_0x00e1c0e0(auStack_b4,-(float)dVar16 * (float)pfStack_60);
              afStack_54[0] = *pfVar12;
              afStack_54[1] = pfVar12[1];
              afStack_54[2] = pfVar12[2];
              afStack_54[3] = pfVar12[3];
              fStack_44 = pfVar12[4];
              fStack_40 = pfVar12[5];
              fStack_3c = pfVar12[6];
              fStack_38 = pfVar12[7];
              fStack_34 = pfVar12[8];
              fStack_30 = pfVar12[9];
              fStack_2c = pfVar12[10];
              fStack_28 = pfVar12[0xb];
              fStack_24 = pfVar12[0xc];
              fStack_20 = pfVar12[0xd];
              fStack_1c = pfVar12[0xe];
              fStack_18 = pfVar12[0xf];
              func_0x00e1c4d0(iStack_6c,afStack_54,piStack_68);
            }
            pfStack_58 = pfStack_58 + 0x428;
            pfVar13 = pfVar13 + 3;
            piStack_8 = (int *)((int)piStack_8 + -1);
          } while (piStack_8 != (int *)0x0);
          piStack_8 = (int *)0x0;
        }
      }
      else {
        pfStack_60 = (float *)(((int)puVar5 - (int)pfStack_58) / 0xc);
        if (pfStack_60 != (float *)0x0) {
          pfStack_58 = (float *)0x0;
          pfVar13 = pfStack_64 + 2;
          do {
            if (*(char *)(pfVar13 + -2) != '\x03') {
              dVar16 = (double)*pfVar13;
              func_0x00e87995();
              piStack_8 = (int *)(float)dVar16;
              dVar16 = (double)pfVar13[-1];
              func_0x00e87995();
              dVar17 = (double)*pfVar13;
              func_0x00e8799b((float)dVar16 * (float)piStack_8);
              dVar16 = (double)pfVar13[-1];
              func_0x00e8799b((float)dVar17);
              pfVar12 = (float *)func_0x00e1c0e0(auStack_b4,-(float)dVar16 * (float)piStack_8);
              afStack_54[0] = *pfVar12;
              afStack_54[1] = pfVar12[1];
              afStack_54[2] = pfVar12[2];
              afStack_54[3] = pfVar12[3];
              fStack_44 = pfVar12[4];
              fStack_40 = pfVar12[5];
              fStack_3c = pfVar12[6];
              fStack_38 = pfVar12[7];
              fStack_34 = pfVar12[8];
              fStack_30 = pfVar12[9];
              fStack_2c = pfVar12[10];
              fStack_28 = pfVar12[0xb];
              fStack_24 = pfVar12[0xc];
              fStack_20 = pfVar12[0xd];
              fStack_1c = pfVar12[0xe];
              fStack_18 = pfVar12[0xf];
              func_0x00e1c4d0(iStack_6c,afStack_54,piStack_68);
            }
            pfStack_58 = pfStack_58 + 0x428;
            pfVar13 = pfVar13 + 3;
            pfStack_60 = (float *)((int)pfStack_60 + -1);
          } while (pfStack_60 != (float *)0x0);
        }
      }
    }
  }
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00e38ac0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[0xd];
  *param_1 = std::basic_streambuf<>::vftable;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 4) + 8))();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    func_0x008ab812(iVar1,8);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00e38b10(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar4 = (undefined4 *)(param_1 - *(int *)(param_1 + -4));
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = puVar4[-3];
  puVar4[-0x10] = std::basic_streambuf<>::vftable;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 4) + 8))(uVar2);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
    func_0x008ab812(iVar1,8);
  }
  *(undefined ***)(*(int *)(puVar4[-0x14] + 4) + -0x50 + (int)puVar4) =
       std::basic_istream<>::vftable;
  *(int *)(*(int *)(puVar4[-0x14] + 4) + -0x54 + (int)puVar4) = *(int *)(puVar4[-0x14] + 4) + -0x18;
  uStack_8 = 0;
  *puVar4 = std::ios_base::vftable;
  func_0x00e706cb(puVar4);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar4 + -0x14,0x98);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar4 + -0x14;
}



int * __thiscall
FUN_00e3e350(int param_1,int *param_2,uint param_3,int param_4,int param_5,byte param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  int *piVar5;
  
  if ((param_6 & 3) != 1) {
LAB_00e3e4ed:
    *param_2 = -1;
    param_2[1] = -1;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    return param_2;
  }
  if (param_5 == 0) {
    if (-1 < param_4) {
      piVar5 = *(int **)(param_1 + 0xc);
      iVar4 = **(int **)(param_1 + 0x1c);
      _param_6 = *piVar5;
      uVar1 = (**(int **)(param_1 + 0x2c) - _param_6) + iVar4;
      iVar2 = (int)uVar1 >> 0x1f;
      if ((param_4 <= iVar2) && ((param_4 < iVar2 || (param_3 <= uVar1)))) {
        iVar2 = _param_6 + param_3;
        goto LAB_00e3e48c;
      }
    }
  }
  else if (param_5 == 1) {
    if (param_4 < 0) {
      piVar5 = *(int **)(param_1 + 0xc);
      uVar1 = **(int **)(param_1 + 0x1c) - *piVar5;
      iVar2 = (int)uVar1 >> 0x1f;
      param_4 = param_4 + (uint)(param_3 != 0);
      iVar4 = -param_4;
      if ((-iVar2 == param_4 || iVar4 < iVar2) &&
         ((iVar4 < iVar2 || (-param_3 < uVar1 || -uVar1 == param_3)))) {
        iVar4 = **(int **)(param_1 + 0x1c);
        iVar2 = param_3 + iVar4;
        _param_6 = *piVar5;
        goto LAB_00e3e48c;
      }
    }
    else {
      iVar4 = (int)**(uint **)(param_1 + 0x2c) >> 0x1f;
      if ((param_4 <= iVar4) && ((param_4 < iVar4 || (param_3 <= **(uint **)(param_1 + 0x2c))))) {
        piVar5 = *(int **)(param_1 + 0xc);
        iVar4 = **(int **)(param_1 + 0x1c);
        iVar2 = param_3 + iVar4;
        _param_6 = *piVar5;
LAB_00e3e48c:
        iVar3 = **(int **)(param_1 + 0x2c);
        *piVar5 = _param_6;
        **(int **)(param_1 + 0x1c) = iVar2;
        **(int **)(param_1 + 0x2c) = (iVar3 + iVar4) - iVar2;
        iVar2 = iVar2 - **(int **)(param_1 + 0xc);
        *param_2 = iVar2;
        param_2[1] = iVar2 >> 0x1f;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        return param_2;
      }
    }
  }
  else {
    if (param_5 != 2) goto LAB_00e3e4ed;
    if ((param_4 < 1) && ((param_4 < 0 || (param_3 == 0)))) {
      piVar5 = *(int **)(param_1 + 0xc);
      _param_6 = *piVar5;
      iVar4 = **(int **)(param_1 + 0x1c);
      uVar1 = (iVar4 - _param_6) + **(int **)(param_1 + 0x2c);
      iVar3 = (int)uVar1 >> 0x1f;
      param_4 = param_4 + (uint)(param_3 != 0);
      iVar2 = -param_4;
      if ((-iVar3 == param_4 || iVar2 < iVar3) &&
         ((iVar2 < iVar3 || (-param_3 < uVar1 || -uVar1 == param_3)))) {
        iVar2 = **(int **)(param_1 + 0x2c) + iVar4 + param_3;
        goto LAB_00e3e48c;
      }
    }
  }
  func_0x00468710(0xffffffff,0xffffffff);
  return unaff_EBX;
}



void __thiscall
FUN_00e3e520(int param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            undefined8 param_7,byte param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((param_8 & 3) == 1) {
    iVar5 = param_6 + param_4 + (uint)CARRY4(param_5,param_3);
    if (-1 < iVar5) {
      iVar1 = **(int **)(param_1 + 0x2c);
      iVar2 = **(int **)(param_1 + 0xc);
      iVar3 = **(int **)(param_1 + 0x1c);
      uVar4 = (iVar3 - iVar2) + iVar1;
      iVar6 = (int)uVar4 >> 0x1f;
      if ((iVar5 <= iVar6) && ((iVar5 < iVar6 || (param_5 + param_3 <= uVar4)))) {
        iVar5 = param_3 + iVar2 + param_5;
        **(int **)(param_1 + 0xc) = iVar2;
        **(int **)(param_1 + 0x1c) = iVar5;
        **(int **)(param_1 + 0x2c) = (iVar3 - iVar5) + iVar1;
        *param_2 = param_3;
        param_2[1] = param_4;
        param_2[2] = param_5;
        param_2[3] = param_6;
        *(undefined8 *)(param_2 + 4) = param_7;
        return;
      }
    }
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



void FUN_00e3e5f0(undefined4 param_1,int param_2,uint param_3,int param_4,float *param_5,int param_6
                 )

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar20;
  double dVar19;
  float fVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  
  iVar2 = param_4 * 4;
  uVar12 = param_3 + param_4;
  uVar13 = uVar12 >> 0x10;
  uVar27 = (uVar12 & 0xffff) + param_4;
  iVar11 = (uVar27 >> 0x10) + uVar13;
  uVar14 = param_4 + (uVar27 & 0xffff);
  iVar15 = (uVar14 >> 0x10) + iVar11;
  uVar22 = CONCAT44(uVar14,uVar12) & 0xffff0000ffff;
  uVar14 = (uint)(uVar22 >> 0x20);
  uVar25 = (uint)uVar22;
  iVar29 = 0;
  pfVar17 = param_5;
  for (uVar12 = (uint)(param_6 - (int)param_5 >> 2) >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    uVar26 = uVar27 & 0xffff;
    fVar4 = *(float *)(param_2 + iVar11 * 4);
    fVar5 = *(float *)(param_2 + iVar29 * 4);
    iVar3 = iVar29 * 4;
    fVar6 = *(float *)(param_2 + iVar15 * 4);
    fVar7 = *(float *)(param_2 + uVar13 * 4);
    fVar8 = *(float *)(param_2 + 4 + iVar11 * 4);
    fVar9 = *(float *)(param_2 + 4 + iVar15 * 4);
    fVar10 = *(float *)(param_2 + 4 + uVar13 * 4);
    fVar18 = (float)(int)param_3;
    fVar20 = (float)uVar25;
    fVar21 = (float)uVar14;
    uVar23 = param_3 + iVar2;
    uVar24 = uVar25 + iVar2;
    uVar27 = uVar26 + iVar2;
    uVar28 = uVar14 + iVar2;
    param_3 = uVar23 & 0xffff;
    uVar25 = uVar24 & 0xffff;
    uVar14 = uVar28 & 0xffff;
    iVar29 = iVar29 + (uVar23 >> 0x10);
    uVar13 = uVar13 + (uVar24 >> 0x10);
    iVar11 = iVar11 + (uVar27 >> 0x10);
    iVar15 = iVar15 + (uVar28 >> 0x10);
    *pfVar17 = (*(float *)(param_2 + 4 + iVar3) - fVar5) * fVar18 * 1.5258789e-05 + fVar5;
    pfVar17[1] = (fVar10 - fVar7) * fVar20 * 1.5258789e-05 + fVar7;
    pfVar17[2] = (fVar8 - fVar4) * (float)uVar26 * 1.5258789e-05 + fVar4;
    pfVar17[3] = (fVar9 - fVar6) * fVar21 * 1.5258789e-05 + fVar6;
    pfVar17 = pfVar17 + 4;
  }
  uVar12 = param_6 - (int)param_5 >> 2 & 3;
  if (uVar12 != 0) {
    pfVar16 = (float *)(param_2 + iVar29 * 4);
    do {
      pfVar1 = pfVar16 + 1;
      fVar4 = *pfVar16;
      dVar19 = (double)(int)param_3;
      uVar27 = param_3 + param_4;
      iVar2 = (int)param_3 >> 0x1f;
      param_3 = uVar27 & 0xffff;
      fVar5 = *pfVar16;
      pfVar16 = pfVar16 + (uVar27 >> 0x10);
      *pfVar17 = (*pfVar1 - fVar4) *
                 (float)(dVar19 + (double)(&DAT_011a2c10)[-iVar2]) * 1.5258789e-05 + fVar5;
      pfVar17 = pfVar17 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}



void FUN_00e3e7d0(undefined4 param_1,int param_2,uint param_3,int param_4,float *param_5,int param_6
                 )

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float fVar18;
  float fVar20;
  double dVar19;
  float fVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  
  iVar2 = param_4 * 4;
  uVar11 = param_3 + param_4;
  uVar13 = uVar11 >> 0x10;
  uVar27 = (uVar11 & 0xffff) + param_4;
  iVar12 = (uVar27 >> 0x10) + uVar13;
  uVar14 = param_4 + (uVar27 & 0xffff);
  iVar15 = (uVar14 >> 0x10) + iVar12;
  uVar22 = CONCAT44(uVar14,uVar11) & 0xffff0000ffff;
  uVar14 = (uint)(uVar22 >> 0x20);
  uVar25 = (uint)uVar22;
  iVar29 = 0;
  pfVar17 = param_5;
  for (uVar11 = (uint)(param_6 - (int)param_5 >> 2) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    uVar26 = uVar27 & 0xffff;
    fVar4 = *(float *)(param_2 + uVar13 * 4);
    fVar5 = *(float *)(param_2 + iVar12 * 4);
    fVar6 = *(float *)(param_2 + iVar29 * 4);
    iVar3 = iVar29 * 4;
    fVar7 = *(float *)(param_2 + iVar15 * 4);
    fVar8 = *(float *)(param_2 + 4 + iVar12 * 4);
    fVar9 = *(float *)(param_2 + 4 + iVar15 * 4);
    fVar10 = *(float *)(param_2 + 4 + uVar13 * 4);
    fVar18 = (float)(int)param_3;
    fVar20 = (float)uVar25;
    fVar21 = (float)uVar14;
    uVar23 = param_3 + iVar2;
    uVar24 = uVar25 + iVar2;
    uVar27 = uVar26 + iVar2;
    uVar28 = uVar14 + iVar2;
    param_3 = uVar23 & 0xffff;
    uVar25 = uVar24 & 0xffff;
    uVar14 = uVar28 & 0xffff;
    iVar29 = iVar29 + (uVar23 >> 0x10);
    uVar13 = uVar13 + (uVar24 >> 0x10);
    iVar12 = iVar12 + (uVar27 >> 0x10);
    iVar15 = iVar15 + (uVar28 >> 0x10);
    *pfVar17 = (*(float *)(param_2 + 4 + iVar3) - fVar6) * fVar18 * 1.5258789e-05 + fVar6;
    pfVar17[1] = (fVar10 - fVar4) * fVar20 * 1.5258789e-05 + fVar4;
    pfVar17[2] = (fVar8 - fVar5) * (float)uVar26 * 1.5258789e-05 + fVar5;
    pfVar17[3] = (fVar9 - fVar7) * fVar21 * 1.5258789e-05 + fVar7;
    pfVar17 = pfVar17 + 4;
  }
  uVar11 = param_6 - (int)param_5 >> 2 & 3;
  if (uVar11 != 0) {
    pfVar16 = (float *)(param_2 + iVar29 * 4);
    do {
      pfVar1 = pfVar16 + 1;
      fVar4 = *pfVar16;
      dVar19 = (double)(int)param_3;
      uVar27 = param_3 + param_4;
      iVar2 = (int)param_3 >> 0x1f;
      param_3 = uVar27 & 0xffff;
      fVar5 = *pfVar16;
      pfVar16 = pfVar16 + (uVar27 >> 0x10);
      *pfVar17 = (*pfVar1 - fVar4) *
                 (float)(dVar19 + (double)(&DAT_011a2c10)[-iVar2]) * 1.5258789e-05 + fVar5;
      pfVar17 = pfVar17 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



int * __thiscall FUN_00e3f4c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [4];
  int *piStack_3c;
  int *piStack_38;
  char cStack_34;
  uint uStack_2c;
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6f27d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_6c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_6c;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  piVar7 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  piStack_38 = param_1;
  piStack_18 = param_1;
  puVar3 = &uStack_6c;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 4))();
    puVar3 = (uint *)puStack_14;
  }
  puStack_14 = (undefined1 *)puVar3;
  uStack_8 = 0;
  cStack_34 = func_0x00484390(0);
  uStack_8 = 1;
  if (cStack_34 != '\0') {
    piVar7 = *(int **)(*(int *)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1) + 4);
    piStack_3c = piVar7;
    (**(code **)(*piVar7 + 4))();
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    uStack_24 = CONCAT22(uStack_24._2_2_,1);
    iVar1 = *(int *)(*param_1 + 4);
    iStack_20 = *(int *)(iVar1 + 0x38 + (int)param_1);
    uStack_2c = CONCAT31((int3)(uStack_2c >> 8),iStack_20 == 0) & 0xffff00ff;
    piVar4 = (int *)func_0x00488b90(auStack_40);
    (**(code **)(*piVar4 + 0x18))
              (auStack_48,iStack_20,uStack_2c,0,uStack_24,iVar1 + (int)param_1,&uStack_1c,param_2);
    if ((piVar7 != (int *)0x0) &&
       (puVar5 = (undefined4 *)(**(code **)(*piVar7 + 8))(), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
  }
  uStack_8 = 1;
  uVar8 = 4;
  iVar1 = *(int *)(*param_1 + 4);
  if (*(int *)((int)param_1 + iVar1 + 0x38) != 0) {
    uVar8 = 0;
  }
  uVar8 = uVar8 | (*(uint *)(iVar1 + 0xc + (int)param_1) | uStack_1c) & 0x17;
  *(uint *)((int)param_1 + iVar1 + 0xc) = uVar8;
  uVar8 = *(uint *)((int)param_1 + iVar1 + 0x10) & uVar8;
  if (uVar8 != 0) {
    if ((uVar8 & 4) == 0) {
      pcVar9 = "ios_base::failbit set";
      if ((uVar8 & 2) == 0) {
        pcVar9 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar9 = "ios_base::badbit set";
    }
    uVar6 = func_0x00463740(auStack_48,1);
    func_0x004646a0(pcVar9,uVar6);
    func_0x00e87d2e(auStack_5c,&DAT_01288518);
    pcVar2 = (code *)swi(3);
    piVar7 = (int *)(*pcVar2)();
    return piVar7;
  }
  uStack_8 = 5;
  piVar7 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 8))();
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_All_00e3f5a9(void)

{
  func_0x0046a610(4,1);
  return &DAT_00e3f5c2;
}



undefined4 * __fastcall FUN_00e3f740(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



void FUN_00e41d90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00e4f350(**(undefined4 **)(param_1 + 4),param_2,param_3,param_4);
  return;
}



void FUN_00e41db0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00e4f700(**(undefined4 **)(param_1 + 4),param_2,param_3,param_4);
  return;
}



void FUN_00e41dd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00e4f450(**(undefined4 **)(param_1 + 4),param_2,param_3);
  return;
}



void FUN_00e41df0(int param_1)

{
  func_0x00e4f690(**(undefined4 **)(param_1 + 4));
  return;
}



void FUN_00e41e10(int param_1)

{
  func_0x00e4f0e0(**(undefined4 **)(param_1 + 4));
  return;
}



void FUN_00e41e30(int param_1)

{
  func_0x00e442b0(*(undefined4 *)(*(int *)(param_1 + 4) + 4),
                  *(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return;
}



void FUN_00e41e50(int param_1)

{
  func_0x00e4f160(**(undefined4 **)(param_1 + 4));
  return;
}



void FUN_00e41e70(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  func_0x00e4ecb0(*puVar1);
  (*DAT_01466b90)(puVar1[1]);
  (*DAT_01466b90)(puVar1);
  (*DAT_01466b90)(param_1);
  return;
}



undefined8 FUN_00e41ea0(int param_1,void *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  uVar4 = piVar2[2] - piVar2[4];
  uVar3 = (piVar2[3] - piVar2[5]) - (uint)((uint)piVar2[2] < (uint)piVar2[4]);
  if (uVar4 != 0 || uVar3 != 0) {
    if ((uVar3 <= param_4) && ((uVar3 < param_4 || (uVar4 < param_3)))) {
      param_4 = uVar3;
      param_3 = uVar4;
    }
    memcpy(param_2,(void *)(*piVar2 + piVar2[4]),param_3);
    puVar1 = (uint *)(piVar2 + 4);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + param_3;
    piVar2[5] = piVar2[5] + param_4 + (uint)CARRY4(uVar3,param_3);
    return CONCAT44(param_4,param_3);
  }
  return 0;
}



void FUN_00e41f00(void)

{
  func_0x00e43780(0xe);
  return;
}



undefined4 FUN_00e41f10(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0xc) <= param_3) &&
     ((*(uint *)(iVar1 + 0xc) < param_3 || (*(uint *)(iVar1 + 8) < param_2)))) {
    func_0x00e43780(7);
    return 0;
  }
  *(uint *)(iVar1 + 0x10) = param_2;
  *(uint *)(iVar1 + 0x14) = param_3;
  return 1;
}



undefined8 FUN_00e41f50(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 4) + 0x10);
}



undefined8 FUN_00e41f60(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 4) + 8);
}



undefined4 * FUN_00e41f70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4[6] != 0) {
                    // WARNING: Could not recover jumptable at 0x00e41f89. Too many branches
                    // WARNING: Treating indirect jump as call
    puVar4 = (undefined4 *)(**(code **)(puVar4[6] + 0x1c))();
    return puVar4;
  }
  puVar5 = (undefined4 *)(*DAT_01466b88)(0x28,0);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x00e43780(2);
    return (undefined4 *)0x0;
  }
  puVar6 = (undefined4 *)(*DAT_01466b88)(0x28,0);
  if (puVar6 == (undefined4 *)0x0) {
    (*DAT_01466b90)(puVar5);
    func_0x00e43780(2);
    return (undefined4 *)0x0;
  }
  LOCK();
  puVar4[7] = puVar4[7] + 1;
  UNLOCK();
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *puVar6 = *puVar4;
  uVar1 = puVar4[3];
  puVar6[2] = puVar4[2];
  puVar6[6] = param_1;
  puVar6[3] = uVar1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *puVar5 = *param_1;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  puVar5[4] = param_1[4];
  puVar5[5] = uVar1;
  puVar5[6] = uVar2;
  puVar5[7] = uVar3;
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_1 + 8);
  puVar5[1] = puVar6;
  return puVar5;
}



int FUN_00e42020(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  iVar5 = puVar2[6];
  if (iVar5 == 0) {
    LOCK();
    piVar1 = puVar2 + 7;
    iVar5 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar5 + -1;
    UNLOCK();
    if (iVar5 + -1 == 0) {
      pcVar3 = (code *)puVar2[8];
      uVar4 = *puVar2;
      *(undefined4 *)(param_1 + 4) = 0;
      (*DAT_01466b90)(puVar2);
      iVar6 = (*DAT_01466b90)(param_1);
      if (pcVar3 != (code *)0x0) {
        iVar6 = (*pcVar3)(uVar4);
      }
    }
    return iVar6;
  }
  (*DAT_01466b90)(puVar2);
  (*DAT_01466b90)(param_1);
  iVar5 = (**(code **)(iVar5 + 0x24))(iVar5);
  return iVar5;
}



void FUN_00e42080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00e43530(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return;
}



void FUN_00e420a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00e43d00(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return;
}



void FUN_00e420c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00e43670(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}



longlong FUN_00e420e0(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  lVar2 = (**(code **)(*piVar1 + 0x14))(*piVar1);
  if ((char)piVar1[1] != '\0') {
    return lVar2 + CONCAT44(-(uint)((uint)piVar1[6] < (uint)piVar1[5]),piVar1[6] - piVar1[5]);
  }
  return lVar2 + (ulonglong)(uint)piVar1[5];
}



void FUN_00e42120(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00e42130. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x18))();
  return;
}



undefined4 * FUN_00e42140(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar1 = (int *)param_1[1];
  piVar5 = (int *)(*DAT_01466b88)(0x20,0);
  if (piVar5 == (int *)0x0) {
    func_0x00e43780(2);
    return (undefined4 *)0x0;
  }
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  piVar5[4] = 0;
  piVar5[5] = 0;
  piVar5[6] = 0;
  piVar5[7] = 0;
  puVar6 = (undefined4 *)(*DAT_01466b88)(0x28,0);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x00e43780(2);
  }
  else {
    iVar7 = (**(code **)(*piVar1 + 0x1c))(*piVar1);
    *piVar5 = iVar7;
    uVar2 = DAT_0145a1fc;
    if (iVar7 != 0) {
      *(char *)(piVar5 + 1) = (char)piVar1[1];
      piVar5[2] = piVar1[2];
      func_0x00e4f1a0(uVar2);
      if ((char)piVar5[1] == '\0') {
        piVar5[7] = (int)DAT_0145a1d0;
        DAT_0145a1d0 = piVar5;
      }
      else {
        piVar5[7] = (int)DAT_0145a1d4;
        DAT_0145a1d4 = piVar5;
      }
      func_0x00bfa770(DAT_0145a1fc);
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *puVar6 = *param_1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      uVar4 = param_1[7];
      puVar6[4] = param_1[4];
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(param_1 + 8);
      puVar6[1] = piVar5;
      return puVar6;
    }
  }
  iVar7 = *piVar5;
  if (iVar7 != 0) {
    (**(code **)(iVar7 + 0x24))(iVar7);
  }
  if (piVar5[3] != 0) {
    (*DAT_01466b90)(piVar5[3]);
  }
  (*DAT_01466b90)(piVar5);
  return (undefined4 *)0x0;
}



// WARNING: Removing unreachable block (ram,0x00e42284)

undefined4 FUN_00e42250(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if ((char)piVar1[1] == '\0') {
    iVar2 = piVar1[6];
    if (iVar2 != piVar1[5]) {
      lVar3 = (**(code **)(*piVar1 + 0xc))(*piVar1,piVar1[3] + iVar2,piVar1[5] - iVar2,0);
      if (lVar3 < 1) {
        return 0;
      }
      piVar1[5] = 0;
      piVar1[6] = 0;
    }
  }
  return 1;
}



void FUN_00e422b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    func_0x00e4f1a0(DAT_0145a1fc);
    iVar2 = func_0x00e446a0(&DAT_0145a1d4,iVar1);
    if ((iVar2 == -1) ||
       ((iVar2 == 0 && (iVar2 = func_0x00e446a0(&DAT_0145a1d0,iVar1), iVar2 == -1)))) {
      func_0x00bfa770(DAT_0145a1fc);
      (*DAT_01466b90)(param_1);
      return;
    }
    func_0x00bfa770(DAT_0145a1fc);
    if (iVar2 == 0) {
      func_0x00e43780(9);
    }
  }
  (*DAT_01466b90)(param_1);
  return;
}



int FUN_00e43f20(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4,
                undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 1;
  iVar2 = func_0x00e44010(param_1,param_2);
  if (iVar2 == 0) {
    func_0x00e43780(0xb);
    return -1;
  }
  piVar1 = *(int **)(iVar2 + 8);
  while( true ) {
    if ((piVar1 == (int *)0x0) || (iVar6 != 1)) {
      return iVar6;
    }
    iVar6 = *piVar1;
    iVar3 = func_0x00e87d40(iVar6,0x2f);
    iVar2 = iVar3 + 1;
    if (iVar3 == 0) {
      iVar2 = iVar6;
    }
    iVar6 = (*param_3)(param_5,param_4,iVar2);
    if (iVar6 == -1) break;
    piVar1 = (int *)piVar1[3];
  }
  puVar4 = (undefined8 *)func_0x00e45550();
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(*DAT_01466b88)(0xc,0);
    if (puVar4 == (undefined8 *)0x0) {
      return -1;
    }
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    uVar5 = func_0x00bbb310();
    iVar6 = DAT_0145a1f8;
    *(undefined4 *)puVar4 = uVar5;
    if (iVar6 != 0) {
      func_0x00e4f1a0(iVar6);
      iVar6 = DAT_0145a1f8;
    }
    *(undefined8 **)(puVar4 + 1) = DAT_0145a1c4;
    DAT_0145a1c4 = puVar4;
    if (iVar6 != 0) {
      func_0x00bfa770(iVar6);
    }
  }
  *(undefined4 *)((int)puVar4 + 4) = 0x1d;
  return -1;
}



void FUN_00e45180(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 auStack_30 [32];
  int iStack_10;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  puVar3 = (undefined4 *)param_1[2];
  pcVar8 = (char *)param_1[3];
  pcVar7 = pcVar8 + 1;
  if (*pcVar8 != '/') {
    pcVar7 = pcVar8;
  }
  pcVar8 = pcVar7;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  pcVar9 = param_3;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  pcVar8 = pcVar8 + (int)(pcVar9 + ((2 - (int)(param_3 + 1)) - (int)(pcVar7 + 1)));
  if (pcVar8 < (char *)0x100) {
    puVar4 = (uint *)&stack0xffffffb0;
    func_0x00e88230();
    uVar10 = (uint)(&stack0x00000000 == (undefined1 *)0x50);
    if (&stack0x00000000 == (undefined1 *)0x50) goto LAB_00e45206;
  }
  else {
    uVar10 = 1;
LAB_00e45206:
    puVar4 = (uint *)(*DAT_01466b88)(pcVar8 + 4,0);
    if (puVar4 == (uint *)0x0) goto LAB_00e452d6;
  }
  *puVar4 = uVar10;
  puVar1 = puVar4 + 1;
  if (puVar1 != (uint *)0x0) {
    puVar5 = &DAT_0113c2ec;
    if (*pcVar7 == '\0') {
      puVar5 = (undefined2 *)&DAT_0112e1b4;
    }
    func_0x00e44410(puVar1,pcVar8,"%s%s%s",pcVar7,puVar5,param_3);
    iVar6 = (**(code **)(puVar3[5] + 0x34))(*puVar3,puVar1,auStack_30);
    if (iVar6 == 0) {
      iVar6 = func_0x00e45550();
      if (iVar6 == 0) {
        param_1[4] = 0;
      }
      else {
        param_1[4] = *(undefined4 *)(iVar6 + 4);
      }
    }
    else if ((iStack_10 != 2) &&
            (iVar6 = (*(code *)*param_1)(param_1[1],param_2,param_3), iVar6 == -1)) {
      param_1[4] = 0x1d;
    }
    if (*puVar4 != 0) {
      (*DAT_01466b90)(puVar4);
    }
    FUN_008ab370();
    return;
  }
LAB_00e452d6:
  param_1[4] = 2;
  FUN_008ab370();
  return;
}



undefined4 FUN_00e45300(int *param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  
  piVar2 = param_1;
  uVar5 = param_1[1];
  iVar6 = *param_1;
  param_1 = (int *)0x0;
  if (uVar5 != 0) {
    do {
      uVar9 = uVar5 >> 1;
      pbVar3 = *(byte **)(iVar6 + (uVar9 + (int)param_1) * 4);
      pbVar8 = param_3;
      do {
        bVar1 = *pbVar3;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00e45350:
          uVar4 = -(uint)bVar10 | 1;
          goto LAB_00e45355;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00e45350;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00e45355:
      if (uVar4 == 0) {
        return 1;
      }
      if ((int)uVar4 < 1) {
        param_1 = (int *)(uVar9 + (int)param_1 + 1);
        uVar9 = uVar5 + (-1 - uVar9);
      }
      iVar6 = *piVar2;
      uVar5 = uVar9;
    } while (uVar9 != 0);
    uVar5 = piVar2[1];
  }
  iVar6 = (*DAT_01466b8c)(iVar6,uVar5 * 4 + 8,0);
  pbVar3 = param_3;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  iVar7 = (*DAT_01466b88)(pbVar3 + (1 - (int)(param_3 + 1)),0);
  if (iVar6 == 0) {
    if (iVar7 != 0) {
      (*DAT_01466b90)(iVar7);
    }
  }
  else {
    *piVar2 = iVar6;
    if (iVar7 != 0) {
      pbVar3 = param_3;
      do {
        bVar1 = *pbVar3;
        pbVar3[iVar7 - (int)param_3] = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      if (param_1 != (int *)piVar2[1]) {
        iVar6 = *piVar2 + (int)param_1 * 4;
        func_0x008ab0e6(iVar6 + 4,iVar6,(piVar2[1] - (int)param_1) * 4);
      }
      *(int *)(*piVar2 + (int)param_1 * 4) = iVar7;
      piVar2[1] = piVar2[1] + 1;
      return 1;
    }
  }
  piVar2[2] = 2;
  return 0xffffffff;
}



undefined4 FUN_00e45830(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) && (param_1 != -1)) {
    uVar1 = func_0x008aafe4(param_1);
    return uVar1;
  }
  func_0x00e43780(2);
  return 0;
}



undefined4 FUN_00e45860(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 0) && (param_2 != -1)) {
    uVar1 = func_0x008ab004(param_1,param_2);
    return uVar1;
  }
  func_0x00e43780(2);
  return 0;
}



void FUN_00e46ad0(undefined4 param_1,int param_2)

{
  param_1 = 1;
  if (param_2 != 0) {
    param_1 = param_2;
  }
                    // WARNING: Could not recover jumptable at 0x00e46aea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01466b88)();
  return;
}



void FUN_00e46af0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_01466b90)(param_2);
  }
  return;
}



void FUN_00e46b10(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x24))(iVar1);
    }
    func_0x00e4b680(param_1 + 0x20,&PTR_FUN_012ba948);
    func_0x00e43ec0(param_1);
    (*DAT_01466b90)(param_1);
  }
  return;
}



void FUN_00e46b50(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  longlong lVar5;
  int in_stack_00004028;
  short in_stack_0000402c;
  int in_stack_00004038;
  int in_stack_00004040;
  undefined4 *in_stack_00004044;
  
  func_0x00e87f70();
  if (in_stack_00004040 != 0) {
    func_0x00e43780();
    FUN_008ab370();
    return;
  }
  lVar5 = (**(code **)(in_stack_00004038 + 0x14))();
  if ((lVar5 != -1) && (lVar5 = (**(code **)(in_stack_00004038 + 8))(), lVar5 == 6)) {
    if ((in_stack_00004028 == -0x504385c9) && (in_stack_0000402c == 0x1c27)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *in_stack_00004044 = uVar2;
    iVar3 = (**(code **)(in_stack_00004038 + 0x10))();
    if (iVar3 != 0) {
      _Dst = (void *)(*DAT_01466b88)();
      if (_Dst == (void *)0x0) {
        func_0x00e43780();
      }
      else {
        memset(_Dst,0,0xa0);
        func_0x00e4b760();
        *(int *)((int)_Dst + 0x18) = in_stack_00004038;
        func_0x00e4e490();
        iVar3 = func_0x00e4b830();
        if (iVar3 == 0) {
          uVar4 = 0;
          iVar3 = func_0x00e44140();
          if (iVar3 != 0) {
            uVar1 = *(uint *)((int)_Dst + 0x60);
            if (uVar1 != 0) {
              do {
                iVar3 = func_0x00e4e4e0();
                if (iVar3 == 0) goto LAB_00e46cec;
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar1);
            }
            uVar4 = 1;
          }
          if (uVar4 != 0) goto LAB_00e46c34;
        }
        else {
          func_0x00e4b680();
          iVar3 = func_0x00e4e420();
          if (iVar3 != 0) {
            func_0x00e43780();
          }
        }
LAB_00e46cec:
        *(undefined4 *)((int)_Dst + 0x18) = 0;
        func_0x00e4b680();
        func_0x00e43ec0();
        (*DAT_01466b90)();
      }
    }
  }
LAB_00e46c34:
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e46e3e)
// WARNING: Removing unreachable block (ram,0x00e46e51)
// WARNING: Removing unreachable block (ram,0x00e46e54)
// WARNING: Removing unreachable block (ram,0x00e46e64)
// WARNING: Removing unreachable block (ram,0x00e46e83)
// WARNING: Removing unreachable block (ram,0x00e46e87)
// WARNING: Removing unreachable block (ram,0x00e46e98)
// WARNING: Removing unreachable block (ram,0x00e46eba)
// WARNING: Removing unreachable block (ram,0x00e46e72)

void FUN_00e46d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int in_stack_00004044;
  undefined4 in_stack_00004048;
  
  func_0x00e87f70();
  iVar1 = func_0x00e44010(in_stack_00004044,in_stack_00004048);
  param_4 = 0xffffffff;
  param_3 = 0;
  param_2 = 0;
  param_1 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      iVar2 = (**(code **)(*(int *)(in_stack_00004044 + 0x18) + 0x1c))
                        (*(int *)(in_stack_00004044 + 0x18));
      if (iVar2 != 0) {
        func_0x00e4e490(&stack0x00000014,iVar2);
        iVar1 = func_0x00e4b4b0(in_stack_00004044 + 0x20,&stack0x00000020,
                                *(undefined4 *)(iVar1 + 0x14),&param_4,&stack0x00000000,&param_3,
                                &param_2,&param_1,&PTR_FUN_012ba948,&PTR_FUN_012ba948);
        if (iVar1 == 0) {
          func_0x00e43780(2);
        }
        else {
          iVar1 = func_0x00e4e420(iVar1);
          if (iVar1 != 0) {
            func_0x00e43780(iVar1);
            (**(code **)(iVar2 + 0x24))(iVar2);
            goto LAB_00e46ec4;
          }
        }
        (**(code **)(iVar2 + 0x24))(iVar2);
      }
LAB_00e46ec4:
      FUN_008ab370();
      return;
    }
    func_0x00e43780(0x10);
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00e46ee0(void)

{
  func_0x00e43780(0x11);
  return 0;
}



undefined4 FUN_00e46ef0(int param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  iVar3 = func_0x00e44010(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  bVar9 = *(int *)(iVar3 + 0x10) == 0;
  iVar3 = *(int *)(iVar3 + 0x14) * 8;
  if (bVar9) {
    iVar6 = *(int *)(param_1 + 100);
    uVar5 = *(uint *)(iVar6 + 8 + iVar3);
    iVar4 = uVar5 - *(uint *)(iVar6 + iVar3);
    iVar6 = (*(int *)(iVar6 + 0xc + iVar3) - *(int *)(iVar6 + 4 + iVar3)) -
            (uint)(uVar5 < *(uint *)(iVar6 + iVar3));
  }
  else {
    iVar4 = -1;
    iVar6 = -1;
  }
  param_3[8] = (uint)!bVar9;
  *param_3 = iVar4;
  param_3[1] = iVar6;
  iVar6 = *(int *)(param_1 + 0x80);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      uVar10 = 0xffffffffffffffff;
    }
    else {
      uVar10 = func_0x00e4e3a0(*(int *)(param_1 + 0x88) + iVar3);
    }
  }
  else {
    uVar5 = *(uint *)(iVar6 + iVar3) + 0x2ac18000;
    uVar7 = *(int *)(iVar6 + 4 + iVar3) + -0x19db1df + (uint)(0xd53e7fff < *(uint *)(iVar6 + iVar3))
    ;
    lVar1 = (ulonglong)uVar5 * 0xd6bf94d5;
    lVar2 = (ulonglong)uVar7 * 0xe57a42bd + ((ulonglong)uVar5 * 0xe57a42bd >> 0x20);
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar1,(uint)lVar2);
    lVar1 = (ulonglong)uVar7 * 0xd6bf94d5 + (ulonglong)CONCAT14(CARRY4(uVar5,uVar8),uVar5 + uVar8);
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar10 = CONCAT44(uVar5 >> 0x17,(uint)lVar1 >> 0x17 | uVar5 * 0x200);
  }
  *(undefined8 *)(param_3 + 2) = uVar10;
  iVar6 = *(int *)(param_1 + 0x88);
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x80);
    if (iVar6 == 0) {
      uVar10 = 0xffffffffffffffff;
    }
    else {
      uVar10 = func_0x00e4e3a0(iVar6 + iVar3);
    }
  }
  else {
    uVar5 = *(uint *)(iVar6 + iVar3) + 0x2ac18000;
    uVar7 = *(int *)(iVar6 + 4 + iVar3) + -0x19db1df + (uint)(0xd53e7fff < *(uint *)(iVar6 + iVar3))
    ;
    lVar1 = (ulonglong)uVar5 * 0xd6bf94d5;
    lVar2 = (ulonglong)uVar7 * 0xe57a42bd + ((ulonglong)uVar5 * 0xe57a42bd >> 0x20);
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar1,(uint)lVar2);
    lVar1 = (ulonglong)uVar7 * 0xd6bf94d5 + (ulonglong)CONCAT14(CARRY4(uVar5,uVar8),uVar5 + uVar8);
    uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
    uVar10 = CONCAT44(uVar5 >> 0x17,(uint)lVar1 >> 0x17 | uVar5 * 0x200);
  }
  *(undefined8 *)(param_3 + 4) = uVar10;
  param_3[6] = -1;
  param_3[7] = -1;
  param_3[9] = 1;
  return 1;
}



uint __fastcall FUN_00e470d0(uint param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_3 != 0) {
    do {
      if (((uint)param_2 & 3) == 0) break;
      uVar1 = *param_2;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = param_1 >> 8 ^ *(uint *)(param_4 + (((byte)uVar1 ^ param_1) & 0xff) * 4);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  if (3 < param_3) {
    uVar1 = param_3 >> 2;
    do {
      param_1 = param_1 ^ *param_2;
      param_3 = param_3 - 4;
      param_2 = param_2 + 1;
      param_1 = *(uint *)(param_4 + 0x800 + (param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(param_4 + 0x400 + (param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(param_4 + 0xc00 + (param_1 & 0xff) * 4) ^
                *(uint *)(param_4 + (param_1 >> 0x18) * 4);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = *param_2;
    param_2 = (uint *)((int)param_2 + 1);
    param_1 = param_1 >> 8 ^ *(uint *)(param_4 + (((byte)uVar1 ^ param_1) & 0xff) * 4);
  }
  return param_1;
}



uint __fastcall FUN_00e47170(uint param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puStack_4;
  
  puStack_4 = param_2;
  if (param_3 != 0) {
    do {
      puStack_4 = param_2;
      if (((uint)param_2 & 7) == 0) break;
      uVar2 = *param_2;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = param_1 >> 8 ^ *(uint *)(param_4 + (((byte)uVar2 ^ param_1) & 0xff) * 4);
      param_3 = param_3 - 1;
      puStack_4 = param_2;
    } while (param_3 != 0);
  }
  if (7 < param_3) {
    uVar2 = param_3 >> 3;
    do {
      param_1 = param_1 ^ *puStack_4;
      param_3 = param_3 - 8;
      uVar1 = puStack_4[1];
      param_1 = *(uint *)(param_4 + 0x1800 + (param_1 >> 8 & 0xff) * 4) ^
                *(uint *)(param_4 + 0x1400 + (param_1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(param_4 + 0x800 + (uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(param_4 + 0x400 + (uVar1 >> 0x10 & 0xff) * 4) ^
                *(uint *)(param_4 + 0x1000 + (param_1 >> 0x18) * 4) ^
                *(uint *)(param_4 + 0x1c00 + (param_1 & 0xff) * 4) ^
                *(uint *)(param_4 + 0xc00 + (uVar1 & 0xff) * 4) ^
                *(uint *)(param_4 + (uVar1 >> 0x18) * 4);
      puStack_4 = puStack_4 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar2 = *puStack_4;
    puStack_4 = (uint *)((int)puStack_4 + 1);
    param_1 = param_1 >> 8 ^ *(uint *)(param_4 + (((byte)uVar2 ^ param_1) & 0xff) * 4);
  }
  return param_1;
}



undefined4 FUN_00e49190(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if ((uVar1 == 0) && (*param_3 != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (0x4000 < *param_3) {
      *param_3 = 0x4000;
    }
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 0x10))
                      (*(undefined4 **)(param_1 + 0x10),param_1 + 0x1c,param_3);
    uVar1 = *param_3;
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  if (uVar1 < *param_3) {
    *param_3 = uVar1;
  }
  *param_2 = *(int *)(param_1 + 0x14) + param_1 + 0x1c;
  return uVar2;
}



undefined4 FUN_00e491f0(int param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint _Size;
  
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if (uVar1 == 0) {
                    // WARNING: Could not recover jumptable at 0x00e49209. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 0x10))();
    return uVar2;
  }
  _Size = *param_3;
  if (uVar1 <= *param_3) {
    _Size = uVar1;
  }
  memcpy(param_2,(void *)(param_1 + 0x1c + *(int *)(param_1 + 0x14)),_Size);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + _Size;
  *param_3 = _Size;
  return 0;
}



void FUN_00e49240(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
                    // WARNING: Could not recover jumptable at 0x00e4925c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + 0x10) + 4))();
  return;
}



undefined4 FUN_00e49260(int param_1,int param_2)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  return 0;
}



undefined4 FUN_00e4b190(int param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  int iStack_8;
  
  if (*param_3 == 0) {
    iStack_8 = 0;
  }
  else {
    lVar1 = (**(code **)(*(int *)(param_1 + 8) + 8))(*(int *)(param_1 + 8),param_2,*param_3,0);
    iStack_8 = (int)lVar1;
    if ((lVar1 < 0x100000000) && (lVar1 < 0)) {
      *param_3 = 0;
      return 8;
    }
  }
  *param_3 = iStack_8;
  return 0;
}



undefined4 FUN_00e4b1f0(int param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 == 1) {
      pcVar2 = *(code **)(iVar5 + 0x14);
    }
    else {
      if (param_3 != 2) {
        return 0xb;
      }
      pcVar2 = *(code **)(iVar5 + 0x18);
    }
    lVar7 = (*pcVar2)(iVar5);
    if (lVar7 < 0) {
      return 0xb;
    }
  }
  iVar6 = (int)((ulonglong)lVar7 >> 0x20);
  iVar3 = *(int *)((int)param_2 + 4);
  lVar1 = *param_2;
  if ((iVar3 < 1) && (iVar3 < 0)) {
    iVar3 = iVar3 + (uint)((int)*param_2 != 0);
    iVar4 = -iVar3;
    if (iVar6 < iVar4) {
      return 0xb;
    }
    if ((iVar6 == iVar4 || SBORROW4(iVar6,iVar4) != iVar6 + iVar3 < 0) &&
       ((uint)lVar7 < (uint)-(int)*param_2)) {
      return 0xb;
    }
  }
  iVar5 = (**(code **)(iVar5 + 0x10))(iVar5,lVar7 + lVar1);
  if (iVar5 == 0) {
    return 0xb;
  }
  *param_2 = lVar7 + lVar1;
  return 0;
}



void FUN_00e4fb00(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_2c [32];
  int iStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_2c;
  pcVar1 = param_2 + 1;
  pcVar5 = param_2;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iVar3 = func_0x00e4f4b0(param_2,auStack_2c,1);
  if (iVar3 != 0) {
    if (iStack_c == 1) {
      *param_4 = 1;
      iVar3 = (*DAT_01466b88)(pcVar5 + (2 - (int)pcVar1),0);
      if (iVar3 == 0) {
        func_0x00e43780(2);
        FUN_008ab370();
        return;
      }
      iVar4 = iVar3 - (int)param_2;
      do {
        cVar2 = *param_2;
        param_2 = param_2 + 1;
        param_2[iVar4 + -1] = cVar2;
      } while (cVar2 != '\0');
      if (pcVar5[iVar3 + (-1 - (int)pcVar1)] != '\\') {
        (pcVar5 + (iVar3 - (int)pcVar1))[0] = '\\';
        (pcVar5 + (iVar3 - (int)pcVar1))[1] = '\0';
      }
      FUN_008ab370();
      return;
    }
    func_0x00e43780(6);
  }
  FUN_008ab370();
  return;
}



void FUN_00e4fbd0(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)(param_1 + 1);
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + iVar5 + (1 - (int)(param_2 + 1));
  if (pcVar4 < (char *)0x100) {
    puVar3 = &stack0xffffffec;
    func_0x00e88230();
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  iVar5 = func_0x00e443e0(puVar3,pcVar4);
  if (iVar5 != 0) {
    pcVar2 = "";
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    func_0x00e44410(iVar5,pcVar4,&DAT_01058a30,pcVar2,param_2);
    for (puVar3 = (undefined1 *)func_0x008ab0c6(iVar5,0x2f); puVar3 != (undefined1 *)0x0;
        puVar3 = (undefined1 *)func_0x008ab0c6(puVar3 + 1,0x2f)) {
      *puVar3 = 0x5c;
    }
    func_0x00e4eeb0(iVar5,param_3,param_4,param_5);
    func_0x00e444b0(iVar5);
    FUN_008ab370();
    return;
  }
  func_0x00e43780(2);
  FUN_008ab370();
  return;
}



void FUN_00e4fcd0(undefined4 param_1,undefined4 param_2)

{
  func_0x00e50010(param_1,param_2,0x72);
  return;
}



void FUN_00e4fcf0(undefined4 param_1,undefined4 param_2)

{
  func_0x00e50010(param_1,param_2,0x77);
  return;
}



void FUN_00e4fd10(undefined4 param_1,undefined4 param_2)

{
  func_0x00e50010(param_1,param_2,0x61);
  return;
}



void FUN_00e4fd30(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)(param_1 + 1);
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + iVar5 + (1 - (int)(param_2 + 1));
  if (pcVar4 < (char *)0x100) {
    puVar3 = &stack0xffffffec;
    func_0x00e88230();
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  iVar5 = func_0x00e443e0(puVar3,pcVar4);
  if (iVar5 != 0) {
    pcVar2 = "";
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    func_0x00e44410(iVar5,pcVar4,&DAT_01058a30,pcVar2,param_2);
    for (puVar3 = (undefined1 *)func_0x008ab0c6(iVar5,0x2f); puVar3 != (undefined1 *)0x0;
        puVar3 = (undefined1 *)func_0x008ab0c6(puVar3 + 1,0x2f)) {
      *puVar3 = 0x5c;
    }
    func_0x00e4ed80(iVar5);
    func_0x00e444b0(iVar5);
    FUN_008ab370();
    return;
  }
  func_0x00e43780(2);
  FUN_008ab370();
  return;
}



void FUN_00e4fe20(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)(param_1 + 1);
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + iVar5 + (1 - (int)(param_2 + 1));
  if (pcVar4 < (char *)0x100) {
    puVar3 = &stack0xffffffec;
    func_0x00e88230();
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  iVar5 = func_0x00e443e0(puVar3,pcVar4);
  if (iVar5 != 0) {
    pcVar2 = "";
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    func_0x00e44410(iVar5,pcVar4,&DAT_01058a30,pcVar2,param_2);
    for (puVar3 = (undefined1 *)func_0x008ab0c6(iVar5,0x2f); puVar3 != (undefined1 *)0x0;
        puVar3 = (undefined1 *)func_0x008ab0c6(puVar3 + 1,0x2f)) {
      *puVar3 = 0x5c;
    }
    func_0x00e4f1b0(iVar5);
    func_0x00e444b0(iVar5);
    FUN_008ab370();
    return;
  }
  func_0x00e43780(2);
  FUN_008ab370();
  return;
}



void FUN_00e4ff10(void)

{
                    // WARNING: Could not recover jumptable at 0x00e4ff10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_01466b90)();
  return;
}



void FUN_00e4ff20(char *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_1 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar4 - (int)(param_1 + 1);
  }
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + iVar5 + (1 - (int)(param_2 + 1));
  if (pcVar4 < (char *)0x100) {
    puVar3 = &stack0xffffffec;
    func_0x00e88230();
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  iVar5 = func_0x00e443e0(puVar3,pcVar4);
  if (iVar5 != 0) {
    pcVar2 = "";
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    func_0x00e44410(iVar5,pcVar4,&DAT_01058a30,pcVar2,param_2);
    for (puVar3 = (undefined1 *)func_0x008ab0c6(iVar5,0x2f); puVar3 != (undefined1 *)0x0;
        puVar3 = (undefined1 *)func_0x008ab0c6(puVar3 + 1,0x2f)) {
      *puVar3 = 0x5c;
    }
    func_0x00e4f4b0(iVar5,param_3,0);
    func_0x00e444b0(iVar5);
    FUN_008ab370();
    return;
  }
  func_0x00e43780(2);
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e5021b)
// WARNING: Removing unreachable block (ram,0x00e5026d)

longlong FUN_00e50130(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  uint uStack_8;
  int iStack_4;
  
  uVar8 = param_3;
  param_3 = param_4;
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  uVar3 = *(uint *)(iVar2 + 0x40) - piVar1[3];
  iVar6 = *(int *)(iVar2 + 0x44) - (uint)(*(uint *)(iVar2 + 0x40) < (uint)piVar1[3]);
  if ((iVar6 <= param_4) && ((iVar6 < param_4 || (uVar3 < uVar8)))) {
    uVar8 = uVar3;
    param_3 = iVar6;
  }
  if (uVar8 == 0 && param_3 == 0) {
    return 0;
  }
  if (*(short *)(iVar2 + 0x2e) == 0) {
    lVar10 = func_0x00e54380(piVar1,param_2,uVar8,param_3);
LAB_00e50267:
    if (0 < lVar10) {
      piVar1[3] = piVar1[3] + (int)lVar10;
      return lVar10;
    }
  }
  else {
    piVar1[0xe] = param_2;
    piVar1[0xf] = uVar8;
    uStack_8 = 0;
    iStack_4 = 0;
    lVar10 = 0;
    if ((-1 < (int)param_3) && ((0 < (int)param_3 || (lVar10 = 0, uVar8 != 0)))) {
      do {
        iVar6 = piVar1[0x10];
        if (piVar1[0xc] == 0) {
          uVar4 = *(uint *)(iVar2 + 0x38) - piVar1[2];
          uVar3 = (uint)(*(uint *)(iVar2 + 0x38) < (uint)piVar1[2]);
          iVar7 = *(int *)(iVar2 + 0x3c) - uVar3;
          if ((-1 < iVar7) && ((iVar7 != 0 && (int)uVar3 <= *(int *)(iVar2 + 0x3c) || (uVar4 != 0)))
             ) {
            if ((-1 < iVar7) && ((0 < iVar7 || (0x4000 < uVar4)))) {
              uVar4 = 0x4000;
              iVar7 = 0;
            }
            lVar11 = func_0x00e54380(piVar1,piVar1[4],uVar4,iVar7);
            lVar10 = CONCAT44(iStack_4,uStack_8);
            if (lVar11 < 1) goto LAB_00e50267;
            piVar1[2] = piVar1[2] + (int)lVar11;
            piVar1[0xb] = piVar1[4];
            piVar1[0xc] = (int)lVar11;
          }
        }
        uVar5 = func_0x00e510f0(piVar1 + 0xb,2);
        iVar7 = func_0x00e547e0(uVar5);
        bVar9 = CARRY4(uStack_8,piVar1[0x10] - iVar6);
        uStack_8 = uStack_8 + (piVar1[0x10] - iVar6);
        iStack_4 = iStack_4 + (uint)bVar9;
        lVar10 = CONCAT44(iStack_4,uStack_8);
        if ((iVar7 != 0) ||
           (((int)param_3 <= iStack_4 &&
            ((lVar10 = CONCAT44(iStack_4,uStack_8), (int)param_3 < iStack_4 ||
             (lVar10 = CONCAT44(iStack_4,uStack_8), uVar8 <= uStack_8)))))) goto LAB_00e50267;
      } while( true );
    }
  }
  return lVar10;
}



void FUN_00e502a0(void)

{
  func_0x00e43780(0x11);
  return;
}



undefined4 FUN_00e502b0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
}



// WARNING: Removing unreachable block (ram,0x00e50615)
// WARNING: Removing unreachable block (ram,0x00e50888)

void FUN_00e502c0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  longlong lVar14;
  int *piStack_27c;
  uint uStack_278;
  int iStack_274;
  uint uStack_270;
  int iStack_26c;
  undefined8 uStack_268;
  int iStack_260;
  uint uStack_25c;
  int iStack_258;
  undefined8 uStack_254;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int *piStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  undefined4 *puStack_220;
  code *pcStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined1 auStack_204 [512];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&piStack_27c;
  piVar3 = *(int **)(param_1 + 4);
  iStack_24c = param_1;
  iVar4 = *piVar3;
  iVar11 = piVar3[1];
  uVar2 = *(ushort *)(iVar4 + 0x2c);
  piStack_240 = piVar3;
  if ((param_3 < *(uint *)(iVar4 + 0x44)) ||
     ((param_3 <= *(uint *)(iVar4 + 0x44) && (param_2 <= *(uint *)(iVar4 + 0x40))))) {
    if (((uVar2 & 1) == 0) && (*(ushort *)(iVar4 + 0x2e) == (uVar2 & 1))) {
      iVar4 = (**(code **)(iVar11 + 0x10))
                        (iVar11,param_2 + *(uint *)(iVar4 + 0x20),
                         *(int *)(iVar4 + 0x24) + param_3 +
                         (uint)CARRY4(param_2,*(uint *)(iVar4 + 0x20)));
      if (iVar4 != 0) {
        piVar3[3] = param_2;
      }
    }
    else {
      uVar10 = piVar3[3];
      if ((param_3 == 0) && (param_2 < uVar10)) {
        func_0x00e51080(&iStack_23c);
        iStack_210 = 0;
        uStack_20c = 0;
        iStack_224 = 0;
        iStack_234 = 0;
        iStack_228 = 0;
        uStack_208 = 0;
        puVar5 = (undefined4 *)(*pcStack_21c)(iStack_214,1,0xab08);
        if (puVar5 == (undefined4 *)0x0) {
          uVar6 = 0xfffffffc;
        }
        else {
          *puVar5 = 0;
          puVar5[0xabc] = 0;
          puVar5[0xabd] = 0;
          puVar5[0x2ac1] = 1;
          puVar5[0xabe] = 1;
          puVar5[0xabf] = 0;
          puVar5[0xac0] = 0xfffffff1;
          uVar6 = 0;
          puStack_220 = puVar5;
        }
        iVar7 = func_0x00e547e0(uVar6);
        if ((iVar7 != 0) ||
           (uVar10 = -(uint)((uVar2 & 1) != 0) & 0xc,
           iVar4 = (**(code **)(iVar11 + 0x10))
                             (iVar11,uVar10 + *(uint *)(iVar4 + 0x20),
                              *(int *)(iVar4 + 0x24) + (uint)CARRY4(uVar10,*(uint *)(iVar4 + 0x20)))
           , iVar4 == 0)) goto LAB_00e5031d;
        if ((piVar3 + 0xb != (int *)0x0) && (piVar3[0x12] != 0)) {
          (*(code *)piVar3[0x14])(piVar3[0x15],piVar3[0x12]);
          piVar3[0x12] = 0;
        }
        uVar10 = 0;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[0xb] = iStack_23c;
        piVar3[0xc] = iStack_238;
        piVar3[0xd] = iStack_234;
        piVar3[0xe] = iStack_230;
        piVar3[0xf] = iStack_22c;
        piVar3[0x10] = iStack_228;
        piVar3[0x11] = iStack_224;
        piVar3[0x12] = (int)puStack_220;
        piVar3[0x13] = (int)pcStack_21c;
        piVar3[0x14] = iStack_218;
        piVar3[0x15] = iStack_214;
        piVar3[0x16] = iStack_210;
        *(ulonglong *)(piVar3 + 0x17) = CONCAT44(uStack_208,uStack_20c);
        if ((uVar2 & 1) != 0) {
          *(undefined8 *)(piVar3 + 5) = *(undefined8 *)(piVar3 + 8);
          piVar3[7] = piVar3[10];
          uVar10 = 0;
        }
      }
      if ((uVar10 != param_2) || (param_3 != 0)) {
LAB_00e504f3:
        uVar10 = param_2 - uVar10;
        uStack_268 = 0;
        if (0x200 < uVar10) {
          uVar10 = 0x200;
        }
        uStack_254 = CONCAT44(uStack_254._4_4_,uVar10);
        piVar3 = *(int **)(iStack_24c + 4);
        iStack_258 = 0;
        iStack_274 = *piVar3;
        uVar8 = *(uint *)(iStack_274 + 0x40) - piVar3[3];
        iVar4 = *(int *)(iStack_274 + 0x44) - (uint)(*(uint *)(iStack_274 + 0x40) < (uint)piVar3[3])
        ;
        uStack_278 = uVar10;
        if ((iVar4 < 1) && ((iVar4 < 0 || (uVar8 < uVar10)))) {
          uStack_278 = uVar8;
          iStack_258 = iVar4;
        }
        piStack_27c = piVar3;
        if (uStack_278 != 0 || iStack_258 != 0) {
          piVar12 = piVar3;
          if (*(short *)(iStack_274 + 0x2e) != 0) {
            piVar3[0xf] = uStack_278;
            piVar3[0xe] = (int)auStack_204;
            lVar14 = 0;
            if ((-1 < iStack_258) && ((0 < iStack_258 || (lVar14 = 0, uStack_278 != 0)))) {
              piVar1 = piVar3 + 0xb;
              iStack_26c = 0;
              uStack_270 = 0;
              uVar10 = uStack_278;
              do {
                uStack_268 = CONCAT44(uStack_268._4_4_,piVar12[0x10]);
                if (piVar12[0xc] == 0) {
                  uVar9 = *(uint *)(iStack_274 + 0x38) - piVar12[2];
                  uVar8 = (uint)(*(uint *)(iStack_274 + 0x38) < (uint)piVar12[2]);
                  iVar4 = *(int *)(iStack_274 + 0x3c) - uVar8;
                  if ((-1 < iVar4) &&
                     ((iVar4 != 0 && (int)uVar8 <= *(int *)(iStack_274 + 0x3c) || (uVar9 != 0)))) {
                    if ((-1 < iVar4) && ((0 < iVar4 || (0x4000 < uVar9)))) {
                      uVar9 = 0x4000;
                      iVar4 = 0;
                    }
                    lVar14 = func_0x00e54380(piVar12,piVar12[4],uVar9,iVar4);
                    if (lVar14 < 1) goto LAB_00e5086f;
                    piVar12[2] = piVar12[2] + (int)lVar14;
                    *piVar1 = piVar12[4];
                    piVar12[0xc] = (int)lVar14;
                  }
                }
                if ((piVar1 == (int *)0x0) ||
                   (iVar4 = piVar3[0x12], piVar12 = piStack_27c, iVar4 == 0)) {
LAB_00e50829:
                  uVar6 = 0xfffffffe;
                }
                else {
                  iStack_248 = piVar3[0xc];
                  *(undefined4 *)(iVar4 + 11000) = 0;
                  if (*(int *)(iVar4 + 0xab04) < 0) {
                    uVar6 = 0xfffffffd;
                  }
                  else {
                    if (*(int *)(iVar4 + 0x2afc) != 0) goto LAB_00e50829;
                    uVar8 = *(uint *)(iVar4 + 0x2af4);
                    *(undefined4 *)(iVar4 + 0x2afc) = 0;
                    iStack_244 = (0 < *(int *)(iVar4 + 0x2b00)) + 10;
                    if (uVar8 == 0) {
                      while( true ) {
                        iStack_260 = piVar3[0xc];
                        uStack_25c = 0x8000 - *(int *)(iVar4 + 0x2af0);
                        iVar11 = func_0x00e51560(iVar4,*piVar1,&iStack_260,iVar4 + 0x2b04,
                                                 *(int *)(iVar4 + 0x2af0) + 0x2b04 + iVar4,
                                                 &uStack_25c,iStack_244);
                        *(int *)(iVar4 + 0xab04) = iVar11;
                        *piVar1 = *piVar1 + iStack_260;
                        piVar3[0xc] = piVar3[0xc] - iStack_260;
                        piVar3[0xd] = piVar3[0xd] + iStack_260;
                        piVar3[0x17] = *(int *)(iVar4 + 0x1c);
                        *(uint *)(iVar4 + 0x2af4) = uStack_25c;
                        uVar10 = uStack_25c;
                        if ((uint)piVar3[0xf] <= uStack_25c) {
                          uVar10 = piVar3[0xf];
                        }
                        memcpy((void *)piVar3[0xe],
                               (void *)(*(int *)(iVar4 + 0x2af0) + 0x2b04 + iVar4),uVar10);
                        piVar3[0xe] = piVar3[0xe] + uVar10;
                        piVar3[0xf] = piVar3[0xf] - uVar10;
                        piVar3[0x10] = piVar3[0x10] + uVar10;
                        iVar7 = *(int *)(iVar4 + 0x2af4) - uVar10;
                        *(int *)(iVar4 + 0x2af4) = iVar7;
                        *(uint *)(iVar4 + 0x2af0) = *(int *)(iVar4 + 0x2af0) + uVar10 & 0x7fff;
                        piVar12 = piStack_27c;
                        uVar10 = uStack_278;
                        if (iVar11 < 0) {
                          uVar6 = 0xfffffffd;
                          goto LAB_00e5082e;
                        }
                        if ((iVar11 == 1) && (iStack_248 == 0)) {
                          uVar6 = 0xfffffffb;
                          goto LAB_00e5082e;
                        }
                        if (iVar11 == 0) break;
                        if (((piVar3[0xc] == 0) || (piVar3[0xf] == 0)) || (iVar7 != 0))
                        goto LAB_00e50806;
                      }
                      if (iVar7 == 0) {
                        uVar6 = 1;
                        goto LAB_00e5082e;
                      }
LAB_00e50806:
                      uVar6 = 0;
                    }
                    else {
                      if ((uint)piVar3[0xf] <= uVar8) {
                        uVar8 = piVar3[0xf];
                      }
                      memcpy((void *)piVar3[0xe],(void *)(*(int *)(iVar4 + 0x2af0) + 0x2b04 + iVar4)
                             ,uVar8);
                      piVar3[0xe] = piVar3[0xe] + uVar8;
                      piVar3[0xf] = piVar3[0xf] - uVar8;
                      piVar3[0x10] = piVar3[0x10] + uVar8;
                      iVar11 = *(int *)(iVar4 + 0x2af4) - uVar8;
                      *(int *)(iVar4 + 0x2af4) = iVar11;
                      *(uint *)(iVar4 + 0x2af0) = *(int *)(iVar4 + 0x2af0) + uVar8 & 0x7fff;
                      piVar12 = piStack_27c;
                      if ((*(int *)(iVar4 + 0xab04) == 0) && (iVar11 == 0)) {
                        uVar6 = 1;
                      }
                      else {
                        uVar6 = 0;
                      }
                    }
                  }
                }
LAB_00e5082e:
                iVar4 = func_0x00e547e0(uVar6);
                bVar13 = CARRY4(uStack_270,piVar12[0x10] - (int)uStack_268);
                uStack_270 = uStack_270 + (piVar12[0x10] - (int)uStack_268);
                iStack_26c = iStack_26c + (uint)bVar13;
                if ((iVar4 != 0) ||
                   ((iStack_258 <= iStack_26c &&
                    ((iStack_258 < iStack_26c || (uVar10 <= uStack_270)))))) goto LAB_00e5086f;
              } while( true );
            }
            goto LAB_00e50899;
          }
          lVar14 = func_0x00e54380(piVar3,auStack_204,uStack_278,iStack_258);
          goto LAB_00e50882;
        }
        uStack_254 = 0;
        lVar14 = 0;
        goto LAB_00e50899;
      }
    }
  }
  else {
    func_0x00e43780(7);
  }
LAB_00e5031d:
  FUN_008ab370();
  return;
LAB_00e5086f:
  lVar14 = CONCAT44(iStack_26c,uStack_270);
  uVar10 = (uint)uStack_254;
LAB_00e50882:
  if (0 < lVar14) {
    piVar12[3] = piVar12[3] + (int)lVar14;
  }
LAB_00e50899:
  if ((((uint)lVar14 != uVar10) || ((int)((ulonglong)lVar14 >> 0x20) != 0)) ||
     ((uVar10 = piStack_240[3], uVar10 == param_2 && (param_3 == 0)))) goto LAB_00e5031d;
  goto LAB_00e504f3;
}



undefined8 FUN_00e508e0(int param_1)

{
  return *(undefined8 *)(**(int **)(param_1 + 4) + 0x40);
}



undefined4 * FUN_00e508f0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *_Dst;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)param_1[1];
  puVar4 = (undefined4 *)(*DAT_01466b88)(0x28,0);
  _Dst = (int *)(*DAT_01466b88)(100,0);
  if (puVar4 == (undefined4 *)0x0) {
    func_0x00e43780(2);
LAB_00e50927:
    if (_Dst == (int *)0x0) goto LAB_00e50976;
  }
  else {
    if (_Dst == (int *)0x0) {
      func_0x00e43780(2);
      (*DAT_01466b90)(puVar4);
      return (undefined4 *)0x0;
    }
    memset(_Dst,0,100);
    iVar7 = *piVar1;
    *_Dst = iVar7;
    iVar5 = piVar1[1];
    iVar5 = (**(code **)(iVar5 + 0x1c))(iVar5);
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar7 + 0x14);
      if (iVar2 == 0) {
        uVar8 = *(undefined4 *)(iVar7 + 0x20);
        uVar6 = *(undefined4 *)(iVar7 + 0x24);
      }
      else {
        uVar8 = *(undefined4 *)(iVar2 + 0x20);
        uVar6 = *(undefined4 *)(iVar2 + 0x24);
      }
      iVar7 = (**(code **)(iVar5 + 0x10))(iVar5,uVar8,uVar6);
      if (iVar7 == 0) {
        (**(code **)(iVar5 + 0x24))(iVar5);
        iVar5 = 0;
      }
      _Dst[1] = iVar5;
      if (iVar5 != 0) {
        func_0x00e51080(_Dst + 0xb);
        if (*(short *)(*_Dst + 0x2e) == 0) {
LAB_00e50a66:
          uVar8 = param_1[1];
          uVar6 = param_1[2];
          uVar3 = param_1[3];
          *puVar4 = *param_1;
          puVar4[1] = uVar8;
          puVar4[2] = uVar6;
          puVar4[3] = uVar3;
          uVar8 = param_1[5];
          uVar6 = param_1[6];
          uVar3 = param_1[7];
          puVar4[4] = param_1[4];
          puVar4[5] = uVar8;
          puVar4[6] = uVar6;
          puVar4[7] = uVar3;
          *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_1 + 8);
          puVar4[1] = _Dst;
          return puVar4;
        }
        iVar7 = (*DAT_01466b88)(0x4000,0);
        _Dst[4] = iVar7;
        if (iVar7 == 0) {
          func_0x00e43780(2);
          goto LAB_00e5092b;
        }
        uVar8 = func_0x00e513e0(_Dst + 0xb,0xfffffff1);
        iVar7 = func_0x00e547e0(uVar8);
        if (iVar7 == 0) goto LAB_00e50a66;
      }
      goto LAB_00e50927;
    }
    _Dst[1] = 0;
  }
LAB_00e5092b:
  iVar7 = _Dst[1];
  if (iVar7 != 0) {
    (**(code **)(iVar7 + 0x24))(iVar7);
  }
  if (_Dst[4] != 0) {
    (*DAT_01466b90)(_Dst[4]);
    if ((_Dst != (int *)0xffffffd4) && (_Dst[0x12] != 0)) {
      (*(code *)_Dst[0x14])(_Dst[0x15],_Dst[0x12]);
      _Dst[0x12] = 0;
    }
  }
  (*DAT_01466b90)(_Dst);
LAB_00e50976:
  if (puVar4 != (undefined4 *)0x0) {
    (*DAT_01466b90)(puVar4);
  }
  return (undefined4 *)0x0;
}



void FUN_00e50a90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  (**(code **)(piVar1[1] + 0x24))(piVar1[1]);
  if (((*(short *)(*piVar1 + 0x2e) != 0) && (piVar1 != (int *)0xffffffd4)) && (piVar1[0x12] != 0)) {
    (*(code *)piVar1[0x14])(piVar1[0x15],piVar1[0x12]);
    piVar1[0x12] = 0;
  }
  if (piVar1[4] != 0) {
    (*DAT_01466b90)(piVar1[4]);
  }
  (*DAT_01466b90)(piVar1);
  (*DAT_01466b90)(param_1);
  return;
}



void FUN_00e50b00(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x24))(iVar1);
    }
    func_0x00e43ec0(param_1);
    (*DAT_01466b90)(param_1);
  }
  return;
}



int * FUN_00e50b30(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uStack_18;
  uint uStack_10;
  uint uStack_c;
  undefined8 uStack_8;
  
  uStack_18 = 0;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    return (int *)0x0;
  }
  iVar1 = func_0x00e44480(param_1,&param_3,4);
  if ((iVar1 == 0) ||
     ((iVar1 = FUN_008ad590(param_3), iVar1 != 0x4034b50 &&
      (lVar6 = func_0x00e53490(param_1,0), lVar6 == -1)))) {
    return (int *)0x0;
  }
  *param_4 = 1;
  piVar2 = (int *)(*DAT_01466b88)(0x24,0);
  if (piVar2 == (int *)0x0) {
    func_0x00e43780(2);
    return (int *)0x0;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[6] = param_1;
  iVar1 = func_0x00e53db0(piVar2,&uStack_18,&uStack_8,&uStack_10);
  if ((iVar1 != 0) && (iVar1 = func_0x00e44140(piVar2,0x58,1,0), iVar1 != 0)) {
    *(undefined4 *)(*piVar2 + 0x18) = 4;
    param_3 = piVar2[7];
    iVar1 = (**(code **)(piVar2[6] + 0x10))(piVar2[6],(uint)uStack_8,uStack_8._4_4_);
    if (iVar1 != 0) {
      uStack_8 = 0;
      if ((uStack_c != 0) || (uStack_10 != 0)) {
        uStack_8._4_4_ = 0;
        uStack_8._0_4_ = 0;
        uVar3 = uStack_8._4_4_;
        uVar4 = (uint)uStack_8;
        do {
          iVar1 = func_0x00e536d0(piVar2,param_3,(undefined4)uStack_18,uStack_18._4_4_);
          if (iVar1 == 0) goto LAB_00e50cd2;
          if ((*(byte *)(iVar1 + 0x2c) & 1) != 0) {
            piVar2[8] = 1;
          }
          bVar5 = 0xfffffffe < uVar4;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 + bVar5;
        } while ((uVar3 < uStack_c) || ((uVar3 <= uStack_c && (uVar4 < uStack_10))));
      }
      return piVar2;
    }
  }
LAB_00e50cd2:
  piVar2[6] = 0;
  func_0x00e43ec0(piVar2);
  (*DAT_01466b90)(piVar2);
  return (int *)0x0;
}



void FUN_00e50d00(int param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  int *_Dst_00;
  int iVar4;
  undefined1 *puVar5;
  size_t _Size;
  longlong lVar6;
  undefined4 uVar7;
  int iStack_18;
  undefined1 auStack_14 [12];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  iVar1 = func_0x00e44010(param_1,param_2);
  iStack_18 = 0;
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x20) == 0) ||
       (iStack_18 = func_0x00e87d40(param_2,0x24), iStack_18 == 0)) goto LAB_00e50f0f;
    _Size = iStack_18 - (int)param_2;
    if (_Size + 1 < 0x100) {
      puVar5 = &stack0xffffffd0;
      func_0x00e88230();
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
    _Dst = (void *)func_0x00e443e0(puVar5,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
      iVar1 = func_0x00e44010(param_1,_Dst);
      func_0x00e444b0(_Dst);
      iStack_18 = iStack_18 + 1;
      if (iVar1 == 0) goto LAB_00e50f0f;
      goto LAB_00e50dca;
    }
LAB_00e50d8c:
    func_0x00e43780(2);
    goto LAB_00e50f0f;
  }
LAB_00e50dca:
  iVar2 = func_0x00e54460(*(undefined4 *)(param_1 + 0x18),param_1,iVar1);
  if (iVar2 == 0) goto LAB_00e50f0f;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x00e43780(0x10);
    goto LAB_00e50f0f;
  }
  puVar3 = (undefined4 *)(*DAT_01466b88)(0x28,0);
  if (puVar3 == (undefined4 *)0x0) goto LAB_00e50d8c;
  _Dst_00 = (int *)(*DAT_01466b88)(100,0);
  if (_Dst_00 == (int *)0x0) {
    func_0x00e43780(2);
  }
  else {
    memset(_Dst_00,0,100);
    iVar2 = func_0x00e53660(*(undefined4 *)(param_1 + 0x18),param_1,iVar1);
    if (iVar2 != 0) {
      _Dst_00[1] = iVar2;
      iVar4 = iVar1;
      if (*(int *)(iVar1 + 0x14) != 0) {
        iVar4 = *(int *)(iVar1 + 0x14);
      }
      *_Dst_00 = iVar4;
      func_0x00e51080(_Dst_00 + 0xb);
      if (*(short *)(*_Dst_00 + 0x2e) == 0) {
LAB_00e50e9b:
        if ((*(byte *)(iVar1 + 0x2c) & 1) == 0) {
          if (iStack_18 == 0) {
LAB_00e50f67:
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = FUN_00e50130;
            puVar3[3] = FUN_00e502a0;
            puVar3[4] = FUN_00e502c0;
            puVar3[5] = FUN_00e502b0;
            puVar3[6] = FUN_00e508e0;
            puVar3[7] = FUN_00e508f0;
            *(undefined8 *)(puVar3 + 8) = 0xe50a900058e2e0;
            puVar3[1] = _Dst_00;
            FUN_008ab370();
            return;
          }
        }
        else if (iStack_18 != 0) {
          lVar6 = (**(code **)(iVar2 + 8))(iVar2,auStack_14,0xc,0);
          if ((lVar6 == 0xc) && (iVar1 = func_0x00e54230(_Dst_00,auStack_14,iStack_18), iVar1 != 0))
          goto LAB_00e50f67;
          goto LAB_00e50eb9;
        }
        uVar7 = 0x1c;
      }
      else {
        iVar4 = (*DAT_01466b88)(0x4000,0);
        _Dst_00[4] = iVar4;
        if (iVar4 != 0) {
          uVar7 = func_0x00e513e0(_Dst_00 + 0xb,0xfffffff1);
          iVar4 = func_0x00e547e0(uVar7);
          if (iVar4 != 0) goto LAB_00e50eb9;
          goto LAB_00e50e9b;
        }
        uVar7 = 2;
      }
      func_0x00e43780(uVar7);
    }
LAB_00e50eb9:
    iVar1 = _Dst_00[1];
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x24))(iVar1);
    }
    if (((_Dst_00[4] != 0) && ((*DAT_01466b90)(_Dst_00[4]), _Dst_00 != (int *)0xffffffd4)) &&
       (_Dst_00[0x12] != 0)) {
      (*(code *)_Dst_00[0x14])(_Dst_00[0x15],_Dst_00[0x12]);
      _Dst_00[0x12] = 0;
    }
    (*DAT_01466b90)(_Dst_00);
  }
  (*DAT_01466b90)(puVar3);
LAB_00e50f0f:
  FUN_008ab370();
  return;
}



undefined4 FUN_00e50fb0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x00e44010(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = func_0x00e54460(*(undefined4 *)(param_1 + 0x18),param_1,iVar3);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = *(int *)(iVar3 + 0x18);
  if (iVar4 == 4) {
    param_3[8] = 1;
  }
  else {
    if (((iVar4 != 1) && (iVar4 != 6)) && (*(int *)(iVar3 + 0x14) == 0)) {
      uStack_8 = *(undefined4 *)(iVar3 + 0x40);
      uStack_4 = *(undefined4 *)(iVar3 + 0x44);
      param_3[8] = 0;
      goto LAB_00e51032;
    }
    param_3[8] = 2;
  }
  uStack_8 = 0;
  uStack_4 = 0;
LAB_00e51032:
  *param_3 = uStack_8;
  param_3[1] = uStack_4;
  uVar1 = *(undefined4 *)(iVar3 + 0x48);
  uVar2 = *(undefined4 *)(iVar3 + 0x4c);
  param_3[2] = uVar1;
  param_3[4] = uVar1;
  param_3[3] = uVar2;
  param_3[5] = uVar2;
  param_3[6] = 0xffffffff;
  param_3[7] = 0xffffffff;
  param_3[9] = 1;
  return 1;
}



void FUN_00e547b0(int param_1,int param_2,int param_3)

{
  (**(code **)(param_1 + 8))(param_2 * param_3,0);
  return;
}



void FUN_00e547d0(int param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}



void FUN_00e54860(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uStack_30;
  uint uStack_2c;
  int aiStack_28 [2];
  undefined1 auStack_20 [12];
  undefined1 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_30;
  uStack_30 = 0;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    FUN_008ab370();
    return;
  }
  iVar1 = func_0x00e44480(param_1,&iStack_10,0xc);
  if (iVar1 != 0) {
    if (((iStack_10 == 0x536e654b) && (iStack_c == 0x65766c69)) && (iStack_8 == 0x6e616d72)) {
      *param_4 = 1;
      iVar1 = func_0x00e44480(param_1,&uStack_30,4);
      if (iVar1 != 0) {
        uStack_30 = FUN_008ad590(uStack_30);
        iVar1 = func_0x00e56660(param_1,0,1);
        if (iVar1 != 0) {
          uVar4 = 0;
          uStack_2c = uStack_30;
          iVar5 = (uStack_30 + 1) * 0x10;
          if (uStack_30 != 0) {
            do {
              iVar2 = func_0x00e44480(param_1,auStack_20,0xc);
              if (iVar2 == 0) {
LAB_00e549d2:
                func_0x00e56560(iVar1);
                FUN_008ab370();
                return;
              }
              iVar2 = func_0x00e44480(param_1,aiStack_28,4);
              if (iVar2 == 0) goto LAB_00e549d2;
              uStack_14 = 0;
              puVar3 = (undefined1 *)func_0x008ab0c6(auStack_20,0x20);
              if (puVar3 != (undefined1 *)0x0) {
                *puVar3 = 0;
              }
              aiStack_28[0] = FUN_008ad590(aiStack_28[0]);
              iVar2 = func_0x00e565a0(iVar1,auStack_20,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff
                                      ,iVar5,0,aiStack_28[0],0);
              if (iVar2 == 0) goto LAB_00e549d2;
              iVar5 = iVar5 + aiStack_28[0];
              uVar4 = uVar4 + 1;
            } while (uVar4 < uStack_2c);
          }
          FUN_008ab370();
          return;
        }
      }
    }
    else {
      func_0x00e43780(6);
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00e54a10(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [56];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_48;
  uStack_48 = 0;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    FUN_008ab370();
    return;
  }
  iVar1 = func_0x00e44480(param_1,&uStack_48,4);
  if (iVar1 == 0) goto LAB_00e54a87;
  iVar1 = FUN_008ad590(uStack_48);
  if (iVar1 == 0x4b434150) {
    *param_4 = 1;
    iVar1 = func_0x00e44480(param_1,&uStack_48,4);
    if (iVar1 == 0) goto LAB_00e54a87;
    uVar5 = FUN_008ad590(uStack_48);
    iVar1 = func_0x00e44480(param_1,&uStack_48,4);
    if (iVar1 == 0) goto LAB_00e54a87;
    uVar2 = FUN_008ad590(uStack_48);
    if ((uVar2 & 0x3f) == 0) {
      iVar1 = (**(code **)(param_1 + 0x10))(param_1,uVar5,0);
      if ((iVar1 != 0) && (iVar1 = func_0x00e56660(param_1,1,0), iVar1 != 0)) {
        uVar4 = 0;
        if (uVar2 >> 6 != 0) {
          do {
            iVar3 = func_0x00e44480(param_1,auStack_3c,0x38);
            if (((iVar3 == 0) || (iVar3 = func_0x00e44480(param_1,&uStack_40,4), iVar3 == 0)) ||
               (iVar3 = func_0x00e44480(param_1,&uStack_44,4), iVar3 == 0)) {
LAB_00e54bbd:
              func_0x00e56560(iVar1);
              goto LAB_00e54a87;
            }
            uStack_44 = FUN_008ad590(uStack_44);
            uStack_40 = FUN_008ad590(uStack_40);
            iVar3 = func_0x00e565a0(iVar1,auStack_3c,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
                                    uStack_40,0,uStack_44,0);
            if (iVar3 == 0) goto LAB_00e54bbd;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar2 >> 6);
        }
        FUN_008ab370();
        return;
      }
      goto LAB_00e54a87;
    }
    uVar5 = 0x12;
  }
  else {
    uVar5 = 6;
  }
  func_0x00e43780(uVar5);
LAB_00e54a87:
  FUN_008ab370();
  return;
}



void FUN_00e54bd0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iStack_54;
  uint uStack_50;
  short sStack_4c;
  char cStack_4a;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [12];
  undefined1 uStack_30;
  undefined1 auStack_2c [36];
  undefined1 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_54;
  bVar1 = false;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    FUN_008ab370();
    return;
  }
  iVar3 = func_0x00e44480(param_1,&sStack_4c,3);
  if (iVar3 == 0) goto LAB_00e54eaf;
  if ((sStack_4c != 0x4844) || (cStack_4a != 'F')) {
    if ((sStack_4c == 0x4f48) && (cStack_4a == 'G')) {
      iVar3 = func_0x00e44480(param_1,&sStack_4c,1);
      if (iVar3 == 0) goto LAB_00e54eaf;
      if ((char)sStack_4c == '2') goto LAB_00e54c7a;
    }
    func_0x00e43780(6);
    goto LAB_00e54eaf;
  }
  bVar1 = true;
LAB_00e54c7a:
  *param_4 = 1;
  iVar3 = func_0x00e56660(param_1,0,1);
  iStack_54 = iVar3;
  if (iVar3 == 0) goto LAB_00e54eaf;
  if (bVar1) {
    uVar9 = (**(code **)(param_1 + 0x18))(param_1);
    uVar8 = 3;
    uVar2 = uVar9;
    if (((int)((ulonglong)uVar9 >> 0x20) != 0) || (iStack_54 = iVar3, 3 < (uint)uVar9)) {
      do {
        iStack_54 = (int)((ulonglong)uVar2 >> 0x20);
        uStack_50 = (uint)uVar2;
        iVar4 = func_0x00e44480(param_1,auStack_3c,0xd);
        if ((iVar4 == 0) || (iVar4 = func_0x00e44480(param_1,&iStack_48,4), iVar4 == 0))
        goto LAB_00e54d73;
        iVar4 = FUN_008ad590(iStack_48);
        uStack_30 = 0;
        iVar5 = func_0x00e565a0(iVar3,auStack_3c,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
                                uVar8 + 0x11,0,iVar4,0);
        if (iVar5 == 0) goto LAB_00e54d73;
        uVar8 = uVar8 + 0x11 + iVar4;
        iVar4 = (**(code **)(param_1 + 0x10))(param_1,uVar8,0);
        uVar9 = CONCAT44(iStack_54,uStack_50);
        if (iVar4 == 0) goto LAB_00e54d73;
        uVar2 = CONCAT44(iStack_54,uStack_50);
      } while ((iStack_54 != 0) || (iStack_54 = iVar3, uVar2 = uVar9, uVar8 < uStack_50));
    }
LAB_00e54e7f:
    iVar4 = 1;
    iVar3 = iStack_54;
  }
  else {
    iVar4 = func_0x00e44480(param_1,&uStack_50,4);
    if (iVar4 == 0) {
LAB_00e54d73:
      uVar9 = CONCAT44(iStack_54,uStack_50);
      iVar4 = 0;
    }
    else {
      uVar8 = FUN_008ad590(uStack_50);
      iVar4 = func_0x00e44480(param_1,&uStack_50,4);
      uVar9 = CONCAT44(iStack_54,uStack_50);
      if (iVar4 != 0) {
        iVar3 = FUN_008ad590(uStack_50);
        iVar4 = (**(code **)(param_1 + 0x10))(param_1,0x44,0);
        uVar9 = CONCAT44(iStack_54,uStack_50);
        if (iVar4 != 0) {
          uVar7 = 0;
          if (uVar8 != 0) {
            do {
              iVar4 = func_0x00e44480(param_1,auStack_2c,0x24);
              if ((iVar4 == 0) || (iVar4 = func_0x00e44480(param_1,&uStack_50,4), iVar4 == 0))
              goto LAB_00e54db9;
              FUN_008ad590(uStack_50);
              iVar4 = func_0x00e44480(param_1,&uStack_44,4);
              if (iVar4 == 0) goto LAB_00e54db9;
              iStack_48 = FUN_008ad590(uStack_44);
              iVar4 = func_0x00e44480(param_1,&uStack_40,4);
              if (iVar4 == 0) goto LAB_00e54db9;
              uVar6 = FUN_008ad590(uStack_40);
              uStack_8 = 0;
              iVar4 = func_0x00e565a0(iStack_54,auStack_2c,0,uVar6,0,uVar6,0,iVar3,0,iStack_48,0);
              uVar9 = CONCAT44(iStack_54,uStack_50);
              if (iVar4 == 0) goto LAB_00e54db9;
              iVar3 = iVar3 + iStack_48;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar8);
          }
          goto LAB_00e54e7f;
        }
LAB_00e54db9:
        uVar9 = CONCAT44(iStack_54,uStack_50);
        iVar4 = 0;
        iVar3 = iStack_54;
      }
    }
  }
  iStack_54 = (int)((ulonglong)uVar9 >> 0x20);
  uStack_50 = (uint)uVar9;
  if (iVar4 != 0) {
    FUN_008ab370();
    return;
  }
  func_0x00e56560(iVar3);
LAB_00e54eaf:
  FUN_008ab370();
  return;
}



void FUN_00e54ed0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int aiStack_1c [2];
  undefined1 auStack_14 [12];
  undefined1 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_28;
  uStack_28 = 0;
  if (param_3 == 0) {
    iVar2 = func_0x00e44480(param_1,&iStack_20,4);
    if (iVar2 != 0) {
      if (iStack_20 != 0x4c564d44) {
        func_0x00e43780(6);
        FUN_008ab370();
        return;
      }
      *param_4 = 1;
      iVar2 = func_0x00e44480(param_1,&uStack_28,4);
      if (iVar2 != 0) {
        uStack_28 = FUN_008ad590(uStack_28);
        iStack_24 = func_0x00e56660(param_1,0,1);
        uVar1 = uStack_28;
        if (iStack_24 != 0) {
          uVar4 = 0;
          iVar2 = uStack_28 * 0x11 + 8;
          if (uStack_28 != 0) {
            while ((iVar3 = func_0x00e44480(param_1,auStack_14,0xd), iVar3 != 0 &&
                   (iVar3 = func_0x00e44480(param_1,aiStack_1c,4), iVar3 != 0))) {
              uStack_8 = 0;
              aiStack_1c[0] = FUN_008ad590(aiStack_1c[0]);
              iVar3 = func_0x00e565a0(iStack_24,auStack_14,0,0xffffffff,0xffffffff,0xffffffff,
                                      0xffffffff,iVar2,0,aiStack_1c[0],0);
              if (iVar3 == 0) break;
              iVar2 = iVar2 + aiStack_1c[0];
              uVar4 = uVar4 + 1;
              if (uVar1 <= uVar4) {
                FUN_008ab370();
                return;
              }
            }
            func_0x00e56560(iStack_24);
          }
          FUN_008ab370();
          return;
        }
      }
    }
  }
  else {
    func_0x00e43780(0x11);
  }
  FUN_008ab370();
  return;
}



void FUN_00e55050(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  undefined1 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_24;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    FUN_008ab370();
    return;
  }
  iVar2 = func_0x00e44480(param_1,&iStack_1c,4);
  if (iVar2 != 0) {
    if ((iStack_1c == 0x44415749) || (iStack_1c == 0x44415750)) {
      *param_4 = 1;
      iVar2 = func_0x00e44480(param_1,&uStack_24,4);
      if (iVar2 != 0) {
        uStack_24 = FUN_008ad590(uStack_24);
        iVar2 = func_0x00e44480(param_1,&uStack_18,4);
        if (iVar2 != 0) {
          uStack_18 = FUN_008ad590(uStack_18);
          iVar2 = (**(code **)(param_1 + 0x10))(param_1,uStack_18,0);
          if (iVar2 != 0) {
            iVar2 = func_0x00e56660(param_1,0,1);
            uVar1 = uStack_24;
            if (iVar2 != 0) {
              uVar4 = 0;
              if (uStack_24 != 0) {
                do {
                  iVar3 = func_0x00e44480(param_1,&uStack_14,4);
                  if (iVar3 == 0) {
LAB_00e551f2:
                    func_0x00e56560(iVar2);
                    FUN_008ab370();
                    return;
                  }
                  iVar3 = func_0x00e44480(param_1,&uStack_20,4);
                  if (iVar3 == 0) goto LAB_00e551f2;
                  iVar3 = func_0x00e44480(param_1,auStack_10,8);
                  if (iVar3 == 0) goto LAB_00e551f2;
                  uStack_8 = 0;
                  uStack_20 = FUN_008ad590(uStack_20);
                  uStack_14 = FUN_008ad590(uStack_14);
                  iVar3 = func_0x00e565a0(iVar2,auStack_10,0,0xffffffff,0xffffffff,0xffffffff,
                                          0xffffffff,uStack_14,0,uStack_20,0);
                  if (iVar3 == 0) goto LAB_00e551f2;
                  uVar4 = uVar4 + 1;
                } while (uVar4 < uVar1);
              }
              FUN_008ab370();
              return;
            }
          }
        }
      }
    }
    else {
      func_0x00e43780(6);
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00e55210(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 auStack_64 [3];
  char cStack_61;
  uint uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 *puStack_50;
  undefined4 auStack_4c [2];
  char acStack_44 [63];
  undefined1 uStack_5;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_64;
  puStack_50 = param_4;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    FUN_008ab370();
    return;
  }
  iVar4 = func_0x00e44480(param_1,&iStack_58,4);
  if (iVar4 == 0) goto LAB_00e55445;
  iStack_58 = FUN_008ad590(iStack_58);
  if (iStack_58 == 0) {
    iVar4 = func_0x00e44480(param_1,&uStack_60,4);
    if (iVar4 == 0) goto LAB_00e55445;
    uStack_60 = FUN_008ad590(uStack_60);
    if (uStack_60 != 0) {
      iVar4 = func_0x00e44480(param_1,&iStack_54,4);
      if (iVar4 == 0) goto LAB_00e55445;
      iStack_54 = FUN_008ad590(iStack_54);
      if (iStack_54 != 0) {
        iVar4 = (**(code **)(param_1 + 0x10))(param_1,iStack_54,0);
        if ((iVar4 != 0) && (iVar4 = func_0x00e56660(param_1,1,0), uVar3 = uStack_60, iVar4 != 0)) {
          uVar7 = 0;
          if (uStack_60 != 0) {
            do {
              iVar5 = func_0x00e44480(param_1,&cStack_61,1);
              if (iVar5 == 0) {
LAB_00e5541d:
                func_0x00e56560(iVar4);
                FUN_008ab370();
                return;
              }
              if (cStack_61 != '\\') {
                func_0x00e43780(0x12);
                goto LAB_00e5541d;
              }
              iVar5 = func_0x00e44480(param_1,acStack_44,0x3f);
              if (iVar5 == 0) goto LAB_00e5541d;
              pcVar6 = acStack_44;
              uStack_5 = 0;
              cVar2 = acStack_44[0];
              while (cVar2 != '\0') {
                if (cVar2 == '\\') {
                  *pcVar6 = '/';
                }
                pcVar1 = pcVar6 + 1;
                pcVar6 = pcVar6 + 1;
                cVar2 = *pcVar1;
              }
              iVar5 = func_0x00e44480(param_1,&uStack_5c,4);
              if (iVar5 == 0) goto LAB_00e5541d;
              uStack_5c = FUN_008ad590(uStack_5c);
              iVar5 = func_0x00e44480(param_1,auStack_4c,4);
              if (iVar5 == 0) goto LAB_00e5541d;
              auStack_4c[0] = FUN_008ad590(auStack_4c[0]);
              iVar5 = func_0x00e565a0(iVar4,acStack_44,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff
                                      ,uStack_5c,0,auStack_4c[0],0);
              if (iVar5 == 0) goto LAB_00e5541d;
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar3);
          }
          *puStack_50 = 1;
          FUN_008ab370();
          return;
        }
        goto LAB_00e55445;
      }
    }
  }
  func_0x00e43780(6);
LAB_00e55445:
  FUN_008ab370();
  return;
}



int FUN_00e55460(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uStack_10 = 0;
  uStack_8 = 0;
  uStack_14 = 0;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    return 0;
  }
  iVar1 = func_0x00e55b00(param_1,&uStack_10,&uStack_8,&uStack_14,param_4);
  if (iVar1 != 0) {
    iVar1 = func_0x00e56660(param_1,1,0);
    if (iVar1 != 0) {
      iVar2 = func_0x00e55740(param_1,uStack_14,&DAT_0112e1b4,(uint)uStack_10,uStack_10._4_4_,
                              (uint)uStack_8 + (uint)uStack_10,
                              uStack_8._4_4_ + uStack_10._4_4_ +
                              (uint)CARRY4((uint)uStack_8,(uint)uStack_10),iVar1);
      if (iVar2 != 0) {
        return iVar1;
      }
      func_0x00e56560(iVar1);
    }
  }
  return 0;
}



void FUN_00e55f60(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  int aiStack_24 [4];
  undefined1 auStack_14 [16];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_4c;
  if (param_3 != 0) {
    func_0x00e43780(0x11);
    FUN_008ab370();
    return;
  }
  iVar1 = (**(code **)(param_1 + 0x10))(param_1,0x100,0);
  if ((iVar1 == 0) || (iVar1 = func_0x00e44480(param_1,aiStack_24,0x10), iVar1 == 0))
  goto LAB_00e561b0;
  piVar5 = aiStack_24;
  uVar7 = 0xc;
  piVar6 = (int *)PTR_DAT_012ba950;
  do {
    if (*piVar5 != *piVar6) {
      piVar5 = aiStack_24;
      uVar7 = 0xc;
      piVar6 = (int *)PTR_DAT_012ba954;
      goto LAB_00e56002;
    }
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
    bVar8 = 3 < uVar7;
    uVar7 = uVar7 - 4;
  } while (bVar8);
  goto LAB_00e56017;
  while( true ) {
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
    bVar8 = uVar7 < 4;
    uVar7 = uVar7 - 4;
    if (bVar8) break;
LAB_00e56002:
    if (*piVar5 != *piVar6) goto LAB_00e561a6;
  }
LAB_00e56017:
  *param_4 = 1;
  iVar1 = func_0x00e44480(param_1,&uStack_4c,4);
  if (iVar1 != 0) {
    uVar2 = FUN_008ad590(uStack_4c);
    iVar1 = func_0x00e44480(param_1,auStack_14,4);
    if ((iVar1 != 0) && (iVar1 = func_0x00e44480(param_1,&uStack_4c,4), iVar1 != 0)) {
      uVar7 = FUN_008ad590(uStack_4c);
      iVar1 = func_0x00e44480(param_1,&uStack_4c,4);
      if (iVar1 != 0) {
        FUN_008ad590(uStack_4c);
        iVar1 = func_0x00e44480(param_1,&uStack_4c,4);
        if (iVar1 != 0) {
          uVar3 = FUN_008ad590(uStack_4c);
          iVar1 = func_0x00e44480(param_1,&uStack_4c,4);
          if (iVar1 != 0) {
            iVar1 = FUN_008ad590(uStack_4c);
            if (iVar1 == 0x50) {
              iVar1 = (**(code **)(param_1 + 0x10))(param_1,uVar3,0);
              if ((iVar1 != 0) && (iVar1 = func_0x00e56660(param_1,1,0), iVar1 != 0)) {
                uStack_28 = 0;
                iStack_38 = (uVar7 >> 0x15 & 0xf) - 1;
                iStack_34 = (uVar7 >> 0x19) + 0x50;
                uStack_30 = 0;
                uStack_3c = uVar7 >> 0x10 & 0x1f;
                uStack_40 = uVar7 >> 0xb & 0x1f;
                uStack_44 = uVar7 >> 5 & 0x3f;
                iStack_48 = (uVar7 & 0x1f) * 2;
                uVar9 = func_0x00e87c12(&iStack_48);
                iVar4 = func_0x00e561d0(param_1,uVar2,uVar9,iVar1);
                if (iVar4 != 0) {
                  FUN_008ab370();
                  return;
                }
                func_0x00e56560(iVar1);
              }
            }
            else {
LAB_00e561a6:
              func_0x00e43780(6);
            }
          }
        }
      }
    }
  }
LAB_00e561b0:
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e563bb)

void FUN_00e56370(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  piVar1 = *(int **)(param_1 + 4);
  uVar2 = *(uint *)(piVar1[1] + 0x20);
  uVar3 = uVar2 - piVar1[2];
  uVar2 = *(int *)(piVar1[1] + 0x24) - (uint)(uVar2 < (uint)piVar1[2]);
  if ((uVar2 <= param_4) && ((uVar2 < param_4 || (uVar3 < param_3)))) {
    param_3 = uVar3;
    param_4 = uVar2;
  }
  lVar4 = (**(code **)(*piVar1 + 8))(*piVar1,param_2,param_3,param_4);
  if (0 < lVar4) {
    piVar1[2] = piVar1[2] + (int)lVar4;
  }
  return;
}



undefined4 FUN_00e563d0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}



int FUN_00e563e0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = piVar1[1];
  if ((*(uint *)(iVar2 + 0x24) <= param_3) &&
     ((*(uint *)(iVar2 + 0x24) < param_3 || (*(uint *)(iVar2 + 0x20) <= param_2)))) {
    func_0x00e43780(7);
    return 0;
  }
  iVar2 = (**(code **)(*piVar1 + 0x10))
                    (*piVar1,param_2 + *(uint *)(iVar2 + 0x18),
                     *(int *)(iVar2 + 0x1c) + param_3 +
                     (uint)CARRY4(param_2,*(uint *)(iVar2 + 0x18)));
  if (iVar2 != 0) {
    piVar1[2] = param_2;
  }
  return iVar2;
}



undefined8 FUN_00e56440(int param_1)

{
  return *(undefined8 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20);
}



undefined4 * FUN_00e56460(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = 0;
  piVar1 = (int *)param_1[1];
  puVar5 = (undefined4 *)(*DAT_01466b88)(0x28,0);
  piVar6 = (int *)(*DAT_01466b88)(0xc,0);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x00e43780(2);
LAB_00e564bf:
    if (piVar6 != (int *)0x0) {
      (*DAT_01466b90)(piVar6);
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_00e564db;
  }
  else {
    if (piVar6 != (int *)0x0) {
      iVar7 = *piVar1;
      iVar7 = (**(code **)(iVar7 + 0x1c))(iVar7);
      if (iVar7 != 0) {
        *piVar6 = iVar7;
        piVar6[1] = piVar1[1];
        piVar6[2] = 0;
        uVar2 = param_1[1];
        uVar3 = param_1[2];
        uVar4 = param_1[3];
        *puVar5 = *param_1;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        uVar2 = param_1[5];
        uVar3 = param_1[6];
        uVar4 = param_1[7];
        puVar5[4] = param_1[4];
        puVar5[5] = uVar2;
        puVar5[6] = uVar3;
        puVar5[7] = uVar4;
        *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_1 + 8);
        puVar5[1] = piVar6;
        return puVar5;
      }
      goto LAB_00e564bf;
    }
    func_0x00e43780(2);
  }
  (*DAT_01466b90)(puVar5);
LAB_00e564db:
  if (iVar7 != 0) {
    (**(code **)(iVar7 + 0x24))(iVar7);
  }
  return (undefined4 *)0x0;
}



void FUN_00e56530(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))(iVar2);
  (*DAT_01466b90)(piVar1);
  (*DAT_01466b90)(param_1);
  return;
}



void FUN_00e56630(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    func_0x00e43ec0(param_1);
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x24))(iVar1);
    }
    (*DAT_01466b90)(param_1);
  }
  return;
}



undefined4 * FUN_00e566c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = func_0x00e44010(param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      puVar2 = (undefined4 *)(*DAT_01466b88)(0x28,0);
      if (puVar2 == (undefined4 *)0x0) {
        func_0x00e43780(2);
        return (undefined4 *)0x0;
      }
      piVar3 = (int *)(*DAT_01466b88)(0xc,0);
      if (piVar3 == (int *)0x0) {
        func_0x00e43780(2);
        (*DAT_01466b90)(puVar2);
        return (undefined4 *)0x0;
      }
      iVar4 = (**(code **)(*(int *)(param_1 + 0x18) + 0x1c))(*(int *)(param_1 + 0x18));
      *piVar3 = iVar4;
      if (iVar4 != 0) {
        iVar4 = (**(code **)(iVar4 + 0x10))
                          (iVar4,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c));
        if (iVar4 != 0) {
          piVar3[1] = iVar1;
          piVar3[2] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = FUN_00e56370;
          puVar2[3] = FUN_00e502a0;
          puVar2[4] = FUN_00e563e0;
          puVar2[5] = FUN_00e563d0;
          puVar2[6] = FUN_00e56440;
          puVar2[7] = FUN_00e56460;
          *(undefined8 *)(puVar2 + 8) = 0xe565300058e2e0;
          puVar2[1] = piVar3;
          return puVar2;
        }
      }
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0x24))(iVar1);
      }
      (*DAT_01466b90)(piVar3);
      (*DAT_01466b90)(puVar2);
      return (undefined4 *)0x0;
    }
    func_0x00e43780(0x10);
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_00e567d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar2 = func_0x00e44010(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
    param_3[8] = 0;
    uStack_8 = *(undefined4 *)(iVar2 + 0x20);
    uStack_4 = *(undefined4 *)(iVar2 + 0x24);
  }
  else {
    param_3[8] = 1;
    uStack_4 = 0;
    uStack_8 = 0;
  }
  *param_3 = uStack_8;
  param_3[1] = uStack_4;
  uVar1 = *(undefined4 *)(iVar2 + 0x34);
  param_3[2] = *(undefined4 *)(iVar2 + 0x30);
  param_3[3] = uVar1;
  uVar1 = *(undefined4 *)(iVar2 + 0x2c);
  param_3[4] = *(undefined4 *)(iVar2 + 0x28);
  param_3[5] = uVar1;
  param_3[6] = 0xffffffff;
  param_3[7] = 0xffffffff;
  param_3[9] = 1;
  return 1;
}



int FUN_00e5a360(int param_1,int param_2)

{
  char *_Str2;
  int iVar1;
  
  _Str2 = *(char **)(param_2 + 8);
  if (*(char **)(param_1 + 8) == (char *)0x0) {
    return -(uint)(_Str2 != (char *)0x0);
  }
  if (_Str2 == (char *)0x0) {
    return 1;
  }
                    // WARNING: Could not recover jumptable at 0x00e87c80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _stricmp(*(char **)(param_1 + 8),_Str2);
  return iVar1;
}



longlong FUN_00e5cde0(void *param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  void *_Dst;
  uint uVar11;
  bool bVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  switch(param_5) {
  case 0:
    iVar6 = *(int *)((int)param_1 + 0x30);
    *(undefined4 *)(iVar6 + 0x38) = 0;
    *(undefined4 *)(iVar6 + 0x3c) = 0;
    iVar6 = *(int *)((int)param_1 + 0x30);
    goto LAB_00e5ce2c;
  case 1:
    uStack_10 = param_4;
    if (param_4 < 0x80000000) {
      uStack_18 = param_3;
      piVar2 = *(int **)((int)param_1 + 0x30);
      uVar11 = piVar2[0xe];
      uVar7 = piVar2[0xc] - uVar11;
      uVar9 = (piVar2[0xd] - piVar2[0xf]) - (uint)((uint)piVar2[0xc] < uVar11);
      if ((uVar9 <= param_4) && ((uVar9 < param_4 || (uVar7 <= param_3)))) {
        uStack_18 = uVar7;
        uStack_10 = uVar9;
      }
      if (uStack_18 == 0 && uStack_10 == 0) {
        return 0;
      }
      if ((0x7ffffffe < uStack_10) && (0x7fffffff < uStack_10)) {
        return -1;
      }
      iStack_14 = piVar2[0x11];
      param_1 = (void *)piVar2[0x10];
      puVar1 = (uint *)(piVar2[1] + (int)param_1 * 8);
      uStack_c = uVar11 - *puVar1;
      iStack_1c = (piVar2[0xf] - *(int *)(piVar2[1] + 4 + (int)param_1 * 8)) -
                  (uint)(uVar11 < *puVar1);
      uStack_8 = 0;
      uStack_4 = 0;
      if ((uStack_10 == 0) && (uStack_18 == 0)) {
LAB_00e5d357:
        puVar1 = (uint *)(piVar2 + 0xe);
        uVar11 = *puVar1;
        *puVar1 = *puVar1 + uStack_8;
        piVar2[0xf] = piVar2[0xf] + uStack_4 + (uint)CARRY4(uVar11,uStack_8);
        piVar2[0x10] = (int)param_1;
        piVar2[0x11] = iStack_14;
        return CONCAT44(uStack_4,uStack_8);
      }
      do {
        piVar5 = (int *)((int)param_1 * 0x10 + *piVar2);
        uVar9 = piVar5[2] - uStack_c;
        uVar10 = (piVar5[3] - iStack_1c) - (uint)((uint)piVar5[2] < uStack_c);
        uVar11 = uStack_18 - uStack_8;
        uVar7 = (uStack_10 - uStack_4) - (uint)(uStack_18 < uStack_8);
        if ((uVar10 < uVar7) || ((uVar10 <= uVar7 && (uVar9 <= uVar11)))) {
          uVar11 = uVar9;
          uVar7 = uVar10;
        }
        if ((uVar7 != 0) || (uVar11 == 0xffffffff)) {
          uVar11 = 0xffffffff;
        }
        _Dst = (void *)((int)param_2 + uStack_8);
        if (uVar11 != 0) {
          if (_Dst != (void *)0x0) {
            if ((void *)(*piVar5 + uStack_c) != (void *)0x0) {
              memcpy(_Dst,(void *)(*piVar5 + uStack_c),uVar11);
              goto LAB_00e5d2db;
            }
            memset(_Dst,0,uVar11);
          }
          puVar8 = (undefined4 *)func_0x008aaf8a();
          *puVar8 = 0x16;
          func_0x00e87c86();
        }
LAB_00e5d2db:
        uVar7 = *(uint *)(*piVar2 + 8 + (int)param_1 * 0x10);
        if ((uVar11 == uVar7 - uStack_c) &&
           (*(int *)(*piVar2 + 0xc + (int)param_1 * 0x10) - iStack_1c == (uint)(uVar7 < uStack_c)))
        {
          bVar12 = 0xfffffffe < param_1;
          param_1 = (void *)((int)param_1 + 1);
          iStack_14 = iStack_14 + (uint)bVar12;
        }
        bVar12 = CARRY4(uStack_8,uVar11);
        uStack_8 = uStack_8 + uVar11;
        uStack_4 = uStack_4 + bVar12;
        if ((uStack_10 <= uStack_4) && ((uStack_10 < uStack_4 || (uStack_18 <= uStack_8))))
        goto LAB_00e5d357;
        iStack_1c = 0;
        uStack_c = 0;
      } while( true );
    }
    break;
  case 2:
    goto LAB_00e5ce3a;
  case 3:
    if ((param_4 != 0) || (0x3f < param_3)) {
      func_0x00e5da80(param_2);
      uVar14 = *(undefined4 *)((int)param_1 + 0x14);
      param_2[10] = *(undefined4 *)((int)param_1 + 0x10);
      param_2[0xb] = uVar14;
      uVar14 = *(undefined4 *)(*(int *)((int)param_1 + 0x30) + 0x30);
      uVar15 = *(undefined4 *)(*(int *)((int)param_1 + 0x30) + 0x34);
      param_2[7] = uVar15;
      param_2[9] = uVar15;
      param_2[0xd] = 0;
      param_2[1] = 0;
      param_2[6] = uVar14;
      param_2[8] = uVar14;
      *param_2 = 0xdc;
      return 0x40;
    }
    break;
  case 4:
    lVar13 = func_0x00e5dba0(param_1,param_2,param_3,param_4);
    return lVar13;
  case 5:
    func_0x00e5c620(*(undefined4 *)((int)param_1 + 0x30));
    piVar2 = *(int **)((int)param_1 + 0x34);
    if (piVar2 != (int *)0x0) {
      if (piVar2[10] != 0) {
        *(undefined4 *)(piVar2[10] + 0x28) = 0;
        iVar6 = piVar2[10];
        *(undefined4 *)(iVar6 + 0x20) = 0;
        *(undefined4 *)(iVar6 + 0x24) = 0;
        uVar11 = piVar2[7];
        uVar7 = piVar2[9];
        uVar9 = piVar2[6];
        if ((uVar11 < uVar7) || ((uVar11 <= uVar7 && (uVar9 <= (uint)piVar2[8])))) {
          uVar9 = piVar2[8];
          uVar11 = uVar7;
        }
        piVar2[6] = uVar9;
        piVar2[7] = uVar11;
      }
      uVar11 = piVar2[7];
      uVar7 = piVar2[6];
      if ((uVar11 <= (uint)piVar2[3]) && ((uVar11 < (uint)piVar2[3] || (uVar7 < (uint)piVar2[2]))))
      {
        do {
          do {
            free(*(void **)(*piVar2 + uVar7 * 0x10));
            bVar12 = 0xfffffffe < uVar7;
            uVar7 = uVar7 + 1;
            uVar11 = uVar11 + bVar12;
          } while (uVar11 < (uint)piVar2[3]);
        } while ((uVar11 <= (uint)piVar2[3]) && (uVar7 < (uint)piVar2[2]));
      }
      free((void *)*piVar2);
      free((void *)piVar2[1]);
      free(piVar2);
    }
    free(param_1);
    return 0;
  case 6:
    iVar6 = func_0x00e5c9f0(*(undefined4 *)((int)param_1 + 0x30),param_2,param_3,param_4,param_1);
    return (longlong)iVar6;
  case 7:
    uVar11 = *(uint *)(*(int *)((int)param_1 + 0x30) + 0x3c);
    uVar14 = *(undefined4 *)(*(int *)((int)param_1 + 0x30) + 0x38);
    goto joined_r0x00e5d580;
  case 8:
    iVar6 = func_0x00e5c790(0,0,0,0,param_1);
    *(int *)((int)param_1 + 0x34) = iVar6;
    if (iVar6 == 0) {
      return -1;
    }
    *(undefined4 *)(iVar6 + 0x38) = 0;
    *(undefined4 *)(iVar6 + 0x3c) = 0;
    iVar6 = *(int *)((int)param_1 + 0x34);
LAB_00e5ce2c:
    *(undefined4 *)(iVar6 + 0x40) = 0;
    *(undefined4 *)(iVar6 + 0x44) = 0;
LAB_00e5ce3a:
    return 0;
  case 9:
    func_0x00e5c620(*(undefined4 *)((int)param_1 + 0x30));
    *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)((int)param_1 + 0x34);
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    return 0;
  case 10:
    piVar2 = *(int **)((int)param_1 + 0x34);
    if (piVar2 != (int *)0x0) {
      if (piVar2[10] != 0) {
        *(undefined4 *)(piVar2[10] + 0x28) = 0;
        iVar6 = piVar2[10];
        *(undefined4 *)(iVar6 + 0x20) = 0;
        *(undefined4 *)(iVar6 + 0x24) = 0;
        uVar11 = piVar2[7];
        uVar7 = piVar2[9];
        uVar9 = piVar2[6];
        if ((uVar11 < uVar7) || ((uVar11 <= uVar7 && (uVar9 <= (uint)piVar2[8])))) {
          uVar9 = piVar2[8];
          uVar11 = uVar7;
        }
        piVar2[6] = uVar9;
        piVar2[7] = uVar11;
      }
      uVar11 = piVar2[7];
      uVar7 = piVar2[6];
      if ((uVar11 <= (uint)piVar2[3]) && ((uVar11 < (uint)piVar2[3] || (uVar7 < (uint)piVar2[2]))))
      {
        do {
          do {
            free(*(void **)(*piVar2 + uVar7 * 0x10));
            bVar12 = 0xfffffffe < uVar7;
            uVar7 = uVar7 + 1;
            uVar11 = uVar11 + bVar12;
          } while (uVar11 < (uint)piVar2[3]);
        } while ((uVar11 <= (uint)piVar2[3]) && (uVar7 < (uint)piVar2[2]));
      }
      free((void *)*piVar2);
      free((void *)piVar2[1]);
      free(piVar2);
    }
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    return 0;
  case 0xb:
    if ((param_4 < 0x7fffffff) || (param_4 < 0x80000000)) {
      lVar13 = func_0x00e5ca50(*(undefined4 *)((int)param_1 + 0x34),param_2,param_3,param_4,param_1)
      ;
      return lVar13;
    }
    break;
  case 0xc:
    iVar6 = func_0x00e5c9f0(*(undefined4 *)((int)param_1 + 0x34),param_2,param_3,param_4,param_1);
    return (longlong)iVar6;
  case 0xd:
    uVar11 = *(uint *)(*(int *)((int)param_1 + 0x34) + 0x3c);
    uVar14 = *(undefined4 *)(*(int *)((int)param_1 + 0x34) + 0x38);
    if (uVar11 < 0x7fffffff) goto LAB_00e5d565;
joined_r0x00e5d580:
    if (uVar11 < 0x80000000) {
LAB_00e5d565:
      return CONCAT44(uVar11,uVar14);
    }
    uVar15 = 0x84;
    uVar14 = 0x1e;
    goto LAB_00e5d5cb;
  case 0xe:
    lVar13 = func_0x00e60a20(0x13,0,1,2,3,4,5,6,7,8,0x11,9,0xf,10,0xc,0xd,0xb,0x14,0xffffffff);
    return lVar13;
  case 0xf:
    iVar6 = func_0x00e5c790(0,0,0,0,param_1);
    if (iVar6 == 0) {
      return -1;
    }
    func_0x00e5c620(*(undefined4 *)((int)param_1 + 0x30));
    *(int *)((int)param_1 + 0x30) = iVar6;
    return 0;
  default:
    uVar15 = 0;
    uVar14 = 0x1c;
    goto LAB_00e5d5cb;
  case 0x11:
    piVar2 = *(int **)((int)param_1 + 0x30);
    if (param_3 == 0 && param_4 == 0) {
      piVar5 = (int *)func_0x00e5c790(0,0,0,1,param_1);
      *(int **)((int)param_1 + 0x34) = piVar5;
      if (piVar5 == (int *)0x0) {
        return -1;
      }
LAB_00e5cfe6:
      piVar5[0xe] = param_3;
      piVar5[0xf] = param_4;
      iVar6 = *(int *)((int)param_1 + 0x34);
      *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar6 + 8);
      *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)(iVar6 + 0xc);
      return 0;
    }
    if ((param_4 < (uint)piVar2[0xd]) ||
       ((param_4 <= (uint)piVar2[0xd] && (param_3 <= (uint)piVar2[0xc])))) {
      if (piVar2[10] == 0) {
        lVar13 = func_0x00e5c520(piVar2,param_3,param_4);
        puVar1 = (uint *)(piVar2[1] + (int)lVar13 * 8);
        param_5 = param_3 - *puVar1;
        uStack_18 = (param_4 - *(int *)(piVar2[1] + 4 + (int)lVar13 * 8)) -
                    (uint)(param_3 < *puVar1);
        if (param_5 == 0 && uStack_18 == 0) {
          lVar13 = lVar13 + -1;
          param_5 = *(uint *)(*piVar2 + 8 + (int)lVar13 * 0x10);
          uStack_18 = *(int *)(*piVar2 + 0xc + (int)lVar13 * 0x10);
        }
        iVar6 = (int)lVar13 * 0x10;
        uVar11 = *(uint *)(*piVar2 + 8 + iVar6);
        uVar7 = (*(int *)(iVar6 + 0xc + *piVar2) - uStack_18) - (uint)(uVar11 < param_5);
        if ((uVar7 < param_4) || ((uVar7 <= param_4 && (uVar11 - param_5 <= param_3)))) {
          lVar13 = lVar13 + 1;
          piVar5 = (int *)func_0x00e5c790(*piVar2,lVar13,0,param_1);
          if (piVar5 != (int *)0x0) {
            iVar3 = *piVar5;
            *(uint *)(iVar3 + 8 + iVar6) = param_5;
            *(uint *)(iVar3 + 0xc + iVar6) = uStack_18;
            iVar6 = piVar5[1];
            iVar3 = piVar5[2];
            *(uint *)(iVar6 + iVar3 * 8) = param_3;
            *(uint *)(iVar6 + 4 + iVar3 * 8) = param_4;
            piVar5[0xc] = param_3;
            piVar5[0xd] = param_4;
            param_5 = piVar2[7];
            uVar11 = piVar2[6];
            if (((uint)piVar5[3] < param_5) ||
               (((uint)piVar5[3] <= param_5 && ((uint)piVar5[2] <= uVar11)))) {
              param_5 = piVar5[3];
              uVar11 = piVar5[2];
            }
            piVar5[6] = uVar11;
            piVar5[7] = param_5;
            piVar2[10] = (int)piVar5;
            piVar5[10] = (int)piVar2;
            *(longlong *)(piVar2 + 8) = lVar13;
            *(longlong *)(piVar5 + 8) = lVar13;
            *(int **)((int)param_1 + 0x34) = piVar5;
            goto LAB_00e5cfe6;
          }
          goto LAB_00e5cf30;
        }
        uVar14 = 0x1c;
      }
      else {
        uVar14 = 0x1d;
      }
    }
    else {
      uVar14 = 0x12;
    }
    func_0x00e5db40(param_1,uVar14,0);
LAB_00e5cf30:
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    return -1;
  case 0x13:
    if ((param_4 != 0) || (0x17 < param_3)) {
      if (param_2 != (undefined4 *)0x0) {
        if ((undefined4 *)((int)param_1 + 0x18) != (undefined4 *)0x0) {
          uVar14 = *(undefined4 *)((int)param_1 + 0x1c);
          uVar15 = *(undefined4 *)((int)param_1 + 0x20);
          uVar4 = *(undefined4 *)((int)param_1 + 0x24);
          *param_2 = *(undefined4 *)((int)param_1 + 0x18);
          param_2[1] = uVar14;
          param_2[2] = uVar15;
          param_2[3] = uVar4;
          *(undefined8 *)(param_2 + 4) = *(undefined8 *)((int)param_1 + 0x28);
          return 0x18;
        }
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        *(undefined8 *)(param_2 + 4) = 0;
      }
      puVar8 = (undefined4 *)func_0x008aaf8a();
      *puVar8 = 0x16;
      func_0x00e87c86();
      return 0x18;
    }
  }
  uVar15 = 0;
  uVar14 = 0x12;
LAB_00e5d5cb:
  func_0x00e5db40(param_1,uVar14,uVar15);
  return -1;
}



// WARNING: Removing unreachable block (ram,0x00e5ea56)

void FUN_00e5e8e0(void)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 in_stack_00002010;
  ulonglong *in_stack_00002014;
  uint *in_stack_00002018;
  uint in_stack_0000201c;
  uint in_stack_00002020;
  undefined4 in_stack_00002024;
  undefined4 uVar9;
  uint uVar10;
  
  func_0x00e87f70();
  switch(in_stack_00002024) {
  case 0:
    if (*(uint *)((int)in_stack_00002014 + 0x14) != 0) {
      lVar8 = func_0x00e63430(*(uint *)((int)in_stack_00002014 + 0x14),(uint)in_stack_00002014[3],
                              *(uint *)((int)in_stack_00002014 + 0x1c),in_stack_00002014 + 0x11);
      if (lVar8 == 0) break;
      uVar10 = (uint)(lVar8 + in_stack_00002014[1]);
      uVar6 = (uint)(lVar8 + in_stack_00002014[1] >> 0x20);
      if ((uVar6 <= *(uint *)((int)in_stack_00002014 + 0xc)) &&
         ((uVar6 < *(uint *)((int)in_stack_00002014 + 0xc) || (uVar10 < (uint)in_stack_00002014[1]))
         )) {
        uVar10 = (uint)in_stack_00002014[3];
        if ((*(uint *)((int)in_stack_00002014 + 0x1c) != 0) || (0x7fffff < uVar10)) {
          uVar10 = 0x7fffff;
        }
        uVar10 = uVar10 << 8 | 4;
        uVar9 = 0x15;
        goto LAB_00e5e9bd;
      }
      uVar7 = *in_stack_00002014;
      *(uint *)in_stack_00002014 = (uint)*in_stack_00002014 + (uint)lVar8;
      *(uint *)(in_stack_00002014 + 1) = uVar10;
      *(uint *)((int)in_stack_00002014 + 4) =
           *(uint *)((int)in_stack_00002014 + 4) + (int)((ulonglong)lVar8 >> 0x20) +
           (uint)CARRY4((uint)uVar7,(uint)lVar8);
      *(uint *)((int)in_stack_00002014 + 0xc) = uVar6;
      *(uint *)((int)in_stack_00002014 + 0x14) = 0;
    }
    if ((char)in_stack_00002014[0x14] == '\0') {
      uVar10 = *(uint *)((int)in_stack_00002014 + 4);
      uVar6 = (uint)*in_stack_00002014;
      if ((uVar10 != 0) || (uVar6 != 0)) {
        uVar7 = 0;
        do {
          uVar3 = uVar6 - (uint)uVar7;
          if ((uVar10 - (int)(uVar7 >> 0x20) != (uint)(uVar6 < (uint)uVar7)) || (0x2000 < uVar3)) {
            uVar3 = 0x2000;
          }
          lVar8 = func_0x00e5ddc0(in_stack_00002010,&stack0x00000008,uVar3,0);
          if (lVar8 < 0) {
            func_0x00e5db60(in_stack_00002014 + 0x11,in_stack_00002010);
            goto LAB_00e5ed86;
          }
          if (lVar8 == 0) goto LAB_00e5ea6e;
          uVar6 = (uint)*in_stack_00002014;
          uVar7 = lVar8 + uVar7;
          uVar10 = *(uint *)((int)in_stack_00002014 + 4);
        } while (uVar7 < *in_stack_00002014);
      }
    }
    *(uint *)(in_stack_00002014 + 4) = (uint)*in_stack_00002014;
    *(uint *)((int)in_stack_00002014 + 0x24) = *(uint *)((int)in_stack_00002014 + 4);
    break;
  case 1:
    if ((char)in_stack_00002014[2] != '\0') {
      uVar10 = (uint)in_stack_00002014[1] - (uint)in_stack_00002014[4];
      uVar6 = (*(uint *)((int)in_stack_00002014 + 0xc) - *(uint *)((int)in_stack_00002014 + 0x24)) -
              (uint)((uint)in_stack_00002014[1] < (uint)in_stack_00002014[4]);
      if ((uVar6 <= in_stack_00002020) &&
         ((uVar6 < in_stack_00002020 || (uVar10 < in_stack_0000201c)))) {
        in_stack_0000201c = uVar10;
        in_stack_00002020 = uVar6;
      }
    }
    if (in_stack_0000201c == 0 && in_stack_00002020 == 0) goto LAB_00e5e95b;
    if (((char)in_stack_00002014[0x14] != '\0') &&
       (iVar4 = func_0x00e5f3c0(in_stack_00002010,(uint)in_stack_00002014[4],
                                *(uint *)((int)in_stack_00002014 + 0x24),0), iVar4 < 0)) {
LAB_00e5ebfe:
      func_0x00e5db60(in_stack_00002014 + 0x11,in_stack_00002010);
      break;
    }
    lVar8 = func_0x00e5ddc0(in_stack_00002010,in_stack_00002018,in_stack_0000201c,in_stack_00002020)
    ;
    if (-1 < lVar8) {
      uVar7 = in_stack_00002014[4];
      uVar10 = (uint)lVar8 + (uint)in_stack_00002014[4];
      *(uint *)(in_stack_00002014 + 4) = uVar10;
      uVar6 = *(uint *)((int)in_stack_00002014 + 0x24) + (int)((ulonglong)lVar8 >> 0x20) +
              (uint)CARRY4((uint)lVar8,(uint)uVar7);
      *(uint *)((int)in_stack_00002014 + 0x24) = uVar6;
      if (((lVar8 != 0) || ((char)in_stack_00002014[2] == '\0')) ||
         ((*(uint *)((int)in_stack_00002014 + 0xc) <= uVar6 &&
          ((*(uint *)((int)in_stack_00002014 + 0xc) < uVar6 ||
           ((uint)in_stack_00002014[1] <= uVar10)))))) break;
    }
LAB_00e5ea6e:
    uVar10 = 0;
    uVar9 = 0x11;
    goto LAB_00e5e9bd;
  case 2:
    goto LAB_00e5e95b;
  case 3:
    iVar4 = func_0x00e5d9c0(in_stack_00002018,in_stack_00002014 + 5,in_stack_00002014 + 0x11);
    if (-1 < iVar4) {
      if ((in_stack_00002014[5] & 4) == 0) {
        if ((char)in_stack_00002014[2] == '\0') {
          if ((*in_stack_00002018 & 4) != 0) {
            uVar7 = *in_stack_00002014;
            puVar1 = in_stack_00002018 + 6;
            uVar10 = *puVar1;
            *puVar1 = *puVar1 - (uint)uVar7;
            in_stack_00002018[7] =
                 (in_stack_00002018[7] - *(uint *)((int)in_stack_00002014 + 4)) -
                 (uint)(uVar10 < (uint)uVar7);
          }
        }
        else {
          in_stack_00002018[1] = in_stack_00002018[1];
          *in_stack_00002018 = *in_stack_00002018 | 4;
          uVar7 = in_stack_00002014[1];
          uVar2 = *in_stack_00002014;
          uVar10 = *(uint *)((int)in_stack_00002014 + 0xc);
          uVar6 = *(uint *)((int)in_stack_00002014 + 4);
          in_stack_00002018[6] = (uint)uVar7 - (uint)*in_stack_00002014;
          in_stack_00002018[7] = (uVar10 - uVar6) - (uint)((uint)uVar7 < (uint)uVar2);
        }
      }
      uVar7 = in_stack_00002014[0xd];
      in_stack_00002018[1] = in_stack_00002018[1] & ~*(uint *)((int)in_stack_00002014 + 0x6c);
      *in_stack_00002018 = *in_stack_00002018 & ~(uint)uVar7;
    }
    break;
  case 4:
    func_0x00e5dba0(in_stack_00002014 + 0x11,in_stack_00002018,in_stack_0000201c,in_stack_00002020);
    break;
  case 5:
    free(in_stack_00002014);
    goto LAB_00e5e95b;
  case 6:
    if ((char)in_stack_00002014[2] == '\0') {
      if ((in_stack_00002020 == 0) && (in_stack_0000201c < 0x10)) goto LAB_00e5ed01;
      if (in_stack_00002018 == (uint *)0x0) break;
      if (in_stack_00002018[2] == 2) {
        iVar4 = func_0x00e5f3c0(in_stack_00002010,*in_stack_00002018,in_stack_00002018[1],2);
        if (-1 < iVar4) {
          uVar7 = func_0x00e64520(in_stack_00002010);
          uVar10 = (uint)(uVar7 >> 0x20);
          if (-1 < (longlong)uVar7) {
            if ((*(uint *)((int)in_stack_00002014 + 4) < uVar10) ||
               ((*(uint *)((int)in_stack_00002014 + 4) <= uVar10 &&
                ((uint)*in_stack_00002014 <= (uint)uVar7)))) {
              in_stack_00002014[4] = uVar7;
            }
            else {
              func_0x00e5db40(in_stack_00002014 + 0x11,0x12,0);
              func_0x00e5f3c0(in_stack_00002010,(uint)in_stack_00002014[4],
                              *(uint *)((int)in_stack_00002014 + 0x24),0);
            }
            break;
          }
        }
        goto LAB_00e5ebfe;
      }
    }
    lVar8 = func_0x00e5f460((uint)in_stack_00002014[4] - (uint)*in_stack_00002014,
                            (*(uint *)((int)in_stack_00002014 + 0x24) -
                            *(uint *)((int)in_stack_00002014 + 4)) -
                            (uint)((uint)in_stack_00002014[4] < (uint)*in_stack_00002014),
                            (uint)in_stack_00002014[1] - (uint)*in_stack_00002014,
                            (*(uint *)((int)in_stack_00002014 + 0xc) -
                            *(uint *)((int)in_stack_00002014 + 4)) -
                            (uint)((uint)in_stack_00002014[1] < (uint)*in_stack_00002014),
                            in_stack_00002018,in_stack_0000201c,in_stack_00002020,
                            in_stack_00002014 + 0x11);
    if (-1 < lVar8) {
      *(uint *)(in_stack_00002014 + 4) = (uint)lVar8 + (uint)*in_stack_00002014;
      *(uint *)((int)in_stack_00002014 + 0x24) =
           *(uint *)((int)in_stack_00002014 + 4) + (int)((ulonglong)lVar8 >> 0x20) +
           (uint)CARRY4((uint)lVar8,(uint)*in_stack_00002014);
    }
    break;
  case 7:
    break;
  default:
    func_0x00e653c0(in_stack_00002010,in_stack_00002018,in_stack_0000201c,in_stack_00002020,
                    in_stack_00002024);
    break;
  case 0xe:
    break;
  case 0x13:
    if ((in_stack_00002020 != 0) || (0x17 < in_stack_0000201c)) {
      if (in_stack_00002018 != (uint *)0x0) {
        if (in_stack_00002014 + 0xe != (ulonglong *)0x0) {
          uVar10 = *(uint *)((int)in_stack_00002014 + 0x74);
          uVar7 = in_stack_00002014[0xf];
          uVar6 = *(uint *)((int)in_stack_00002014 + 0x7c);
          *in_stack_00002018 = (uint)in_stack_00002014[0xe];
          in_stack_00002018[1] = uVar10;
          in_stack_00002018[2] = (uint)uVar7;
          in_stack_00002018[3] = uVar6;
          *(ulonglong *)(in_stack_00002018 + 4) = in_stack_00002014[0x10];
          break;
        }
        *in_stack_00002018 = 0;
        in_stack_00002018[1] = 0;
        in_stack_00002018[2] = 0;
        in_stack_00002018[3] = 0;
        in_stack_00002018[4] = 0;
        in_stack_00002018[5] = 0;
      }
      puVar5 = (undefined4 *)func_0x008aaf8a();
      *puVar5 = 0x16;
      func_0x00e87c86();
      break;
    }
LAB_00e5ed01:
    uVar10 = 0;
    uVar9 = 0x12;
LAB_00e5e9bd:
    func_0x00e5db40(in_stack_00002014 + 0x11,uVar9,uVar10);
  }
LAB_00e5ed86:
  FUN_008ab370();
  return;
LAB_00e5e95b:
  goto LAB_00e5ed86;
}



void FUN_00e5fd90(undefined4 param_1,void *param_2,uint *param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 auStack_5c [64];
  undefined1 auStack_1c [24];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_5c;
  switch(param_6) {
  case 0:
    *(undefined4 *)((int)param_2 + 0x18) = 0;
    *(undefined4 *)((int)param_2 + 0x1c) = 0;
    *(undefined2 *)((int)param_2 + 0xc) = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
    *(undefined4 *)((int)param_2 + 0x20) = 0xffffffff;
    *(undefined4 *)((int)param_2 + 0x24) = 0xffffffff;
    iVar5 = func_0x00e5e540(param_1,auStack_5c);
    if ((iVar5 < 0) || (iVar5 = func_0x00e5f1c0(param_1,auStack_1c), iVar5 < 0)) {
      func_0x00e5db60(param_2,param_1);
      FUN_008ab370();
      return;
    }
    cVar3 = (**(code **)(*(int *)((int)param_2 + 0x2028) + 0x14))
                      (*(undefined4 *)((int)param_2 + 0x202c),auStack_5c,auStack_1c);
    if (cVar3 != '\0') {
      FUN_008ab370();
      return;
    }
    break;
  case 1:
    func_0x00e60110(param_1,param_2,param_3,param_4,param_5);
    FUN_008ab370();
    return;
  case 2:
    cVar3 = (**(code **)(*(int *)((int)param_2 + 0x2028) + 0x18))
                      (*(undefined4 *)((int)param_2 + 0x202c));
    if (cVar3 != '\0') goto LAB_00e5ffc9;
    break;
  case 3:
    if (*(char *)((int)param_2 + 0x10) != '\0') {
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        *param_3 = *param_3 & 0xffffffb7;
        param_3[1] = 0;
        FUN_008ab370();
        return;
      }
      if (*(char *)((int)param_2 + 0xf) == '\0') {
        iVar5 = *(int *)((int)param_2 + 0x14);
        if ((iVar5 == -1) || (iVar5 == -2)) {
          iVar5 = 8;
        }
        uVar4 = (undefined2)iVar5;
      }
      else {
        uVar4 = 0;
      }
      *(undefined2 *)(param_3 + 0xd) = uVar4;
      uVar1 = *(uint *)((int)param_2 + 0x18);
      uVar2 = *(uint *)((int)param_2 + 0x1c);
      *param_3 = *param_3 | 0x48;
      param_3[8] = uVar1;
      param_3[1] = param_3[1];
      param_3[9] = uVar2;
      FUN_008ab370();
      return;
    }
    uVar1 = *param_3;
    *(undefined2 *)(param_3 + 0xd) = 0;
    *param_3 = uVar1 & 0xffffffb7 | 0x40;
    param_3[1] = 0;
    if (*(char *)((int)param_2 + 0xd) != '\0') {
      uVar2 = *(uint *)((int)param_2 + 0x1c);
      param_3[6] = *(uint *)((int)param_2 + 0x18);
      *param_3 = uVar1 & 0xffffffb7 | 0x44;
      param_3[1] = 0;
      param_3[7] = uVar2;
      FUN_008ab370();
      return;
    }
    goto LAB_00e5ffc9;
  case 4:
    func_0x00e5dba0(param_2,param_3,param_4,param_5);
    FUN_008ab370();
    return;
  case 5:
    if (param_2 != (void *)0x0) {
      (**(code **)(*(int *)((int)param_2 + 0x2028) + 8))(*(undefined4 *)((int)param_2 + 0x202c));
      func_0x00e5db20(param_2);
      free(param_2);
    }
LAB_00e5ffc9:
    FUN_008ab370();
    return;
  default:
    func_0x00e653c0(param_1,param_3,param_4,param_5,param_6);
    FUN_008ab370();
    return;
  case 0xe:
    func_0x00e60a20(0x13,0x14,0xffffffff);
    FUN_008ab370();
    return;
  case 0x13:
    if ((param_5 == 0) && (param_4 < 0x18)) {
      func_0x00e5db40(param_2,0x12,0);
      FUN_008ab370();
      return;
    }
    *param_3 = *param_3 | 0x14;
    param_3[1] = param_3[1];
    *(undefined1 *)((int)param_3 + 0xb) = *(undefined1 *)(*(int *)((int)param_2 + 0x2028) + 0x10);
    *(undefined2 *)((int)param_3 + 0x12) = 0x836;
    if (*(char *)((int)param_2 + 0xf) == '\0') {
      uVar4 = (**(code **)(*(int *)((int)param_2 + 0x2028) + 0xc))
                        (*(undefined4 *)((int)param_2 + 0x202c));
      *(undefined2 *)(param_3 + 4) = uVar4;
      FUN_008ab370();
      return;
    }
    *(undefined2 *)(param_3 + 4) = 0;
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00e60681)

uint FUN_00e60520(undefined4 param_1,int *param_2,uint *param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint auStack_40 [6];
  int iStack_28;
  int iStack_24;
  int iStack_10;
  
  switch(param_6) {
  case 0:
    param_2[8] = 0;
    param_2[9] = 0;
    return 0;
  case 1:
    uVar9 = func_0x00e5ddc0(param_1,param_3,param_4,param_5);
    uVar4 = (uint)(uVar9 >> 0x20);
    uVar6 = (uint)uVar9;
    if (-1 < (longlong)uVar9) {
      if (uVar9 == 0) {
        if ((param_2[10] == param_2[8]) && (param_2[0xb] == param_2[9])) {
          param_2[1] = 1;
          param_2[6] = param_2[8];
          param_2[7] = param_2[9];
          if (*param_2 != 0) {
            iVar5 = func_0x00e5e540(param_1,auStack_40);
            if (iVar5 < 0) break;
            if (((auStack_40[0] & 0x20) == 0) || (iStack_10 == param_2[0xc])) {
              if (((auStack_40[0] & 4) == 0) ||
                 ((iStack_28 == param_2[6] && (iStack_24 == param_2[7])))) goto LAB_00e606fb;
              uVar12 = 0x7fffff11;
              uVar11 = 0x15;
            }
            else {
              uVar12 = 0;
              uVar11 = 7;
            }
LAB_00e60604:
            func_0x00e5db40(param_2 + 2,uVar11,uVar12);
            return 0xffffffff;
          }
        }
      }
      else if (param_2[1] == 0) {
        uVar7 = param_2[0xb];
        uVar2 = param_2[8];
        uVar3 = param_2[10];
        if (((uint)param_2[9] <= uVar7) && (((uint)param_2[9] < uVar7 || (uVar2 <= uVar3)))) {
          uStack_48 = uVar3 - uVar2;
          uStack_44 = (uVar7 - param_2[9]) - (uint)(uVar3 < uVar2);
          if (CONCAT44(uStack_44,uStack_48) < uVar9) {
            iStack_4c = param_2[0xc];
            while( true ) {
              do {
                uVar7 = uVar6 - uStack_48;
                iVar5 = (uVar4 - uStack_44) - (uint)(uVar6 < uStack_48);
                if ((uStack_44 <= uVar4 && (uint)(uVar6 < uStack_48) <= uVar4 - uStack_44) &&
                    iVar5 != 0) {
                  uVar7 = 0xffffffff;
                  iVar5 = 0;
                }
                iStack_4c = func_0x00e6ac60(iStack_4c,uStack_48 + (int)param_3,uVar7);
                puVar1 = (uint *)(param_2 + 10);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + uVar7;
                param_2[0xb] = param_2[0xb] + iVar5 + (uint)CARRY4(uVar2,uVar7);
                param_2[0xc] = iStack_4c;
                bVar8 = CARRY4(uStack_48,uVar7);
                uStack_48 = uStack_48 + uVar7;
                uStack_44 = uStack_44 + iVar5 + (uint)bVar8;
              } while (uStack_44 < uVar4);
              if (uVar4 < uStack_44) break;
              if (uVar6 <= uStack_48) {
                puVar1 = (uint *)(param_2 + 8);
                uVar7 = *puVar1;
                *puVar1 = *puVar1 + uVar6;
                param_2[9] = param_2[9] + uVar4 + (uint)CARRY4(uVar7,uVar6);
                return uVar6;
              }
            }
          }
        }
      }
LAB_00e606fb:
      puVar1 = (uint *)(param_2 + 8);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + uVar6;
      param_2[9] = param_2[9] + uVar4 + (uint)CARRY4(uVar7,uVar6);
      return uVar6;
    }
    break;
  case 2:
    return 0;
  case 3:
    if (param_2[1] == 0) {
      return 0;
    }
    if (((*param_3 & 4) == 0) || ((param_3[6] == param_2[6] && (param_3[7] == param_2[7])))) {
      uVar6 = param_2[7];
      param_3[6] = param_2[6];
      param_3[7] = uVar6;
      param_3[0xc] = param_2[0xc];
      uVar6 = param_2[7];
      param_3[8] = param_2[6];
      param_3[9] = uVar6;
      param_3[0xd] = 0;
      *param_3 = *param_3 | 0xec;
      param_3[1] = param_3[1];
      return 0;
    }
    uVar12 = 0;
    uVar11 = 0x21;
    goto LAB_00e60604;
  case 4:
    uVar6 = func_0x00e5dba0(param_2 + 2,param_3,param_4,param_5);
    return uVar6;
  case 5:
    free(param_2);
    return 0;
  case 6:
    if ((param_5 == 0) && (param_4 < 0x10)) {
      func_0x00e5db40(param_2 + 2,0x12,0);
      return 0xffffffff;
    }
    if (param_3 == (uint *)0x0) {
      return 0xffffffff;
    }
    iVar5 = func_0x00e5f3c0(param_1,*param_3,param_3[1],param_3[2]);
    if ((-1 < iVar5) && (lVar10 = func_0x00e64520(param_1), -1 < lVar10)) {
      *(longlong *)(param_2 + 8) = lVar10;
      return 0;
    }
    break;
  case 7:
    return param_2[8];
  default:
    uVar6 = func_0x00e653c0(param_1,param_3,param_4,param_5,param_6);
    return uVar6;
  case 0xe:
    lVar10 = func_0x00e60a70(param_1);
    if (-1 < lVar10) {
      uVar6 = func_0x00e60a20(8,9,10,0xc,0xd,0xf,0x13,0xffffffff);
      uVar4 = func_0x00e60a20(5,0xffffffff);
      return uVar4 | (uint)lVar10 & ~uVar6;
    }
  }
  func_0x00e5db60(param_2 + 2,param_1);
  return 0xffffffff;
}



void FUN_00e654b0(undefined4 param_1,undefined4 *param_2,uint *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char cVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 uStack_60;
  char cStack_5f;
  uint uStack_5c;
  undefined1 auStack_54 [4];
  uint auStack_50 [10];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char cStack_1d;
  undefined1 auStack_10 [11];
  char cStack_5;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_60;
  switch(param_6) {
  case 0:
    puVar1 = param_2 + 1;
    func_0x00e67b80(puVar1);
    pcVar4 = (char *)*param_2;
    pcVar6 = pcVar4;
    do {
      cVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar7 != '\0');
    func_0x00e678a0(puVar1,0,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1),0);
    uStack_5c = uStack_5c & 0xffffff00;
    lVar8 = func_0x00e5ddc0(param_1,auStack_10,0xc,0);
    if (((int)((ulonglong)lVar8 >> 0x20) < 1) && (lVar8 < 0)) {
      func_0x00e5db60(param_2 + 4,param_1);
      FUN_008ab370();
      return;
    }
    if (lVar8 != 0xc) {
      uVar9 = 0x11;
LAB_00e6561b:
      func_0x00e5db40(param_2 + 4,uVar9,0);
      FUN_008ab370();
      return;
    }
    func_0x00e678a0(puVar1,auStack_10,auStack_10,0xc,0);
    iVar5 = func_0x00e5e540(param_1,auStack_50);
    if (iVar5 == 0) {
      if ((auStack_50[0] & 0x10) == 0) {
        cVar7 = (char)uStack_5c;
      }
      else {
        func_0x00e63170(uStack_28,uStack_24,&uStack_60,auStack_54);
        cVar7 = (char)uStack_5c;
        if (cStack_5 == cStack_5f) {
          cVar7 = '\x01';
        }
      }
      if (((((auStack_50[0] & 0x20) == 0) || (cStack_5 != cStack_1d)) && (cVar7 == '\0')) &&
         ((auStack_50[0] & 0x30) != 0)) {
        uVar9 = 0x1b;
        goto LAB_00e6561b;
      }
    }
    break;
  case 1:
    lVar8 = func_0x00e5ddc0(param_1,param_3,param_4,param_5);
    uStack_5c = (uint)((ulonglong)lVar8 >> 0x20);
    if (((int)uStack_5c < 1) && (lVar8 < 0)) {
      func_0x00e5db60(param_2 + 4,param_1);
      FUN_008ab370();
      return;
    }
    func_0x00e678a0(param_2 + 1,param_3,param_3,lVar8);
    goto LAB_00e6577f;
  case 2:
    break;
  case 3:
    *param_3 = *param_3 | 0x80;
    *(undefined2 *)((int)param_3 + 0x36) = 0;
    param_3[1] = param_3[1];
    if ((*param_3 & 8) != 0) {
      puVar2 = param_3 + 8;
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0xc;
      param_3[9] = (param_3[9] - 1) + (uint)(0xb < uVar3);
      FUN_008ab370();
      return;
    }
    break;
  case 4:
    func_0x00e5dba0(param_2 + 4,param_3,param_4,param_5);
    FUN_008ab370();
    return;
  case 5:
    if (param_2 != (undefined4 *)0x0) {
      free((void *)*param_2);
      free(param_2);
    }
    break;
  default:
    func_0x00e653c0(param_1,param_3,param_4,param_5,param_6);
LAB_00e6577f:
    FUN_008ab370();
    return;
  case 0xe:
    func_0x00e60a20(0,1,2,3,4,5,0x14,0xffffffff);
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



int FUN_00e657d0(int param_1,int param_2,short param_3,byte param_4,int param_5)

{
  int *_Memory;
  int iVar1;
  int iVar2;
  
  if (((param_5 == 0) || (param_2 == 0)) || (param_3 != 1)) {
    func_0x00e5db40(param_1 + 8,0x12,0);
    return 0;
  }
  iVar2 = param_1 + 8;
  if ((param_4 & 1) != 0) {
    func_0x00e5db40(iVar2,0x18,0);
    return 0;
  }
  _Memory = (int *)func_0x008aafe4(0x1c);
  if (_Memory == (int *)0x0) {
    func_0x00e5db40(iVar2,0xe,0);
    iVar2 = 0;
  }
  else {
    iVar1 = func_0x00e87a96(param_5);
    *_Memory = iVar1;
    if (iVar1 == 0) {
      func_0x00e5db40(iVar2,0xe,0);
      free(_Memory);
      return 0;
    }
    FUN_0095c880(_Memory + 4);
    iVar2 = func_0x00e65270(param_1,param_2,FUN_00e654b0,_Memory);
    if (iVar2 == 0) {
      free((void *)*_Memory);
      free(_Memory);
      return 0;
    }
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x00e65b06)

uint FUN_00e658b0(undefined4 param_1,undefined4 *param_2,uint *param_3,uint param_4,int param_5,
                 int param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *_Memory;
  char cVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uStack_4c;
  uint uStack_48;
  uint auStack_40 [10];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar7 = param_4;
  puVar9 = param_3;
  _Memory = param_2;
  switch(param_6) {
  case 0:
    break;
  case 1:
    if (param_2[4] == 0) {
      param_2 = (undefined4 *)param_5;
      param_6 = 0;
      uStack_4c = param_4;
      uStack_48 = 0;
    }
    else {
      uVar10 = func_0x00e61100(param_2[4],param_3,param_4,param_5);
      param_6 = (int)((ulonglong)uVar10 >> 0x20);
      uStack_48 = (uint)uVar10;
      puVar9 = (uint *)((int)puVar9 + uStack_48);
      uStack_4c = uVar7 - uStack_48;
      param_2 = (undefined4 *)((param_5 - param_6) - (uint)(uVar7 < uStack_48));
      cVar5 = func_0x00e60aa0(_Memory[4]);
      if (cVar5 != '\0') {
        func_0x00e60ac0(_Memory[4]);
        _Memory[4] = 0;
      }
    }
    if (*(char *)(_Memory + 5) == '\0') {
      uVar11 = func_0x00e5ddc0(param_1,puVar9,uStack_4c,param_2);
      if (((longlong)uVar11 < 0x100000000) && ((longlong)uVar11 < 0)) {
        func_0x00e5db60(_Memory + 8,param_1);
        return 0xffffffff;
      }
      func_0x00e67a00(_Memory + 1,puVar9,puVar9,uVar11);
      if (uVar11 < CONCAT44(param_2,uStack_4c)) {
        *(undefined1 *)(_Memory + 5) = 1;
      }
      return (int)uVar11 + uStack_48;
    }
    return uStack_48;
  case 2:
    func_0x00e60ac0(param_2[4]);
    _Memory[4] = 0;
    return 0;
  case 3:
    uVar7 = *param_3;
    *(undefined2 *)((int)param_3 + 0x36) = 1;
    param_3[1] = param_3[1];
    *param_3 = uVar7 | 0x80;
    if ((uVar7 & 8) != 0) {
      puVar2 = param_3 + 8;
      uVar3 = *puVar2;
      *puVar2 = *puVar2 + 0xc;
      param_3[9] = param_3[9] + (uint)(0xfffffff3 < uVar3);
    }
    puVar2 = param_2 + 6;
    if (*(char *)((int)param_2 + 0x15) == '\0') {
      if ((uVar7 & 0x10) == 0) {
        func_0x008aaff6(puVar2);
      }
      else {
        uVar7 = param_3[0xb];
        *puVar2 = param_3[10];
        param_2[7] = uVar7;
      }
      *(undefined1 *)((int)_Memory + 0x15) = 1;
    }
    uVar7 = *puVar2;
    uVar3 = _Memory[7];
    *puVar9 = *puVar9 | 0x10;
    puVar9[10] = uVar7;
    puVar9[1] = puVar9[1];
    puVar9[0xb] = uVar3;
    return 0;
  case 4:
    uVar7 = func_0x00e5dba0(param_2 + 8,param_3,param_4,param_5);
    return uVar7;
  case 5:
    if (param_2 != (undefined4 *)0x0) {
      free((void *)*param_2);
      func_0x00e60ac0(_Memory[4]);
      func_0x00e5db20(_Memory + 8);
      free(_Memory);
    }
    return 0;
  default:
    uVar7 = func_0x00e653c0(param_1,param_3,param_4,param_5,param_6);
    return uVar7;
  case 0xe:
    uVar7 = func_0x00e60a20(0,1,2,3,4,5,0x13,0xffffffff);
    return uVar7;
  case 0x13:
    if ((param_5 == 0) && (param_4 < 0x18)) {
      func_0x00e5db40(param_2 + 8,0x12,0);
      return 0xffffffff;
    }
    *param_3 = *param_3 | 4;
    param_3[1] = param_3[1];
    *(undefined1 *)((int)param_3 + 0xb) = 0x14;
    return 0;
  }
  puVar1 = param_2 + 1;
  *(undefined1 *)(param_2 + 5) = 0;
  func_0x00e67b80(puVar1);
  pcVar4 = (char *)*_Memory;
  pcVar8 = pcVar4;
  do {
    cVar5 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar5 != '\0');
  func_0x00e67a00(puVar1,0,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1),0);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    iVar6 = func_0x00e5e540(param_1,auStack_40);
    if (iVar6 != 0) {
      func_0x00e5db60(_Memory + 8,param_1);
      return 0xffffffff;
    }
    if (*(char *)((int)_Memory + 0x15) == '\0') {
      if ((auStack_40[0] & 0x10) == 0) {
        func_0x008aaff6(_Memory + 6);
      }
      else {
        _Memory[6] = uStack_18;
        _Memory[7] = uStack_14;
      }
      *(undefined1 *)((int)_Memory + 0x15) = 1;
    }
  }
  func_0x00e63170(_Memory[6],_Memory[7],&param_2,&param_6);
  iVar6 = func_0x00e60d60(0,0xc,0);
  _Memory[4] = iVar6;
  if (iVar6 != 0) {
    iVar6 = func_0x00bb6b70(iVar6);
    cVar5 = func_0x00e67fe0(iVar6,0xb);
    if (cVar5 != '\0') {
      *(char *)(iVar6 + 0xb) = (char)((uint)param_2 >> 8);
      func_0x00e67a00(puVar1,iVar6,iVar6,0xc,0);
      return 0;
    }
    func_0x00e5db40(_Memory + 8,0x14);
    func_0x00e60ac0(_Memory[4]);
    _Memory[4] = 0;
    return 0xffffffff;
  }
  func_0x00e5db40(_Memory + 8,0xe,0);
  return 0xffffffff;
}



int FUN_00e65cc0(int param_1,int param_2,short param_3,byte param_4,int param_5)

{
  int *_Memory;
  int iVar1;
  int iVar2;
  
  if (((param_5 == 0) || (param_2 == 0)) || (param_3 != 1)) {
    func_0x00e5db40(param_1 + 8,0x12,0);
    return 0;
  }
  iVar2 = param_1 + 8;
  if ((param_4 & 1) == 0) {
    func_0x00e5db40(iVar2,0x18,0);
    return 0;
  }
  _Memory = (int *)func_0x008aafe4(0x30);
  if (_Memory == (int *)0x0) {
    func_0x00e5db40(iVar2,0xe,0);
    return 0;
  }
  iVar1 = func_0x00e87a96(param_5);
  *_Memory = iVar1;
  if (iVar1 == 0) {
    func_0x00e5db40(iVar2,0xe,0);
    free(_Memory);
    iVar2 = 0;
  }
  else {
    _Memory[4] = 0;
    *(undefined1 *)((int)_Memory + 0x15) = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
    FUN_0095c880(_Memory + 8);
    iVar2 = func_0x00e65270(param_1,param_2,FUN_00e658b0,_Memory);
    if (iVar2 == 0) {
      free((void *)*_Memory);
      func_0x00e60ac0(_Memory[4]);
      func_0x00e5db20(_Memory + 8);
      free(_Memory);
      return 0;
    }
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x00e65fbe)

void FUN_00e65dd0(undefined4 param_1,undefined4 *param_2,uint *param_3,uint param_4,uint param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  short asStack_44 [2];
  int iStack_40;
  int iStack_38;
  int iStack_34;
  short sStack_30;
  short asStack_2c [4];
  short asStack_24 [6];
  int iStack_18;
  int iStack_14;
  short sStack_10;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)asStack_44;
  switch(param_6) {
  case 0:
    if (*(short *)(param_2 + 1) == 0x101) {
      iVar5 = 8;
    }
    else {
      iVar5 = (uint)(*(short *)(param_2 + 1) != 0x102) * 4 + 0xc;
    }
    lVar10 = func_0x00e5ddc0(param_1,asStack_2c,iVar5 + 2,0);
    puVar1 = param_2 + 7;
    if ((lVar10 < 0x100000000) && (lVar10 < 0)) {
      func_0x00e5db60(puVar1,param_1);
      FUN_008ab370();
      return;
    }
    if (((int)lVar10 != iVar5 + 2) || ((int)((ulonglong)lVar10 >> 0x20) != 0)) {
      func_0x00e5db40(puVar1,0x11,0);
      FUN_008ab370();
      return;
    }
    pcVar3 = (char *)*param_2;
    pcVar8 = pcVar3;
    do {
      cVar4 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar4 != '\0');
    iVar5 = func_0x00e680f0(pcVar3,(int)pcVar8 - (int)(pcVar3 + 1),0,asStack_2c,
                            *(undefined2 *)(param_2 + 1),asStack_44,puVar1);
    param_2[6] = iVar5;
    if (iVar5 != 0) {
      if (*(short *)(param_2 + 1) == 0x101) {
        iVar9 = 8;
      }
      else {
        iVar9 = (uint)(*(short *)(param_2 + 1) != 0x102) * 4 + 0xc;
      }
      if (asStack_44[0] == *(short *)((int)asStack_2c + iVar9)) {
        param_2[4] = 0;
        param_2[5] = 0;
        FUN_008ab370();
        return;
      }
      func_0x00e680c0(iVar5);
      param_2[6] = 0;
      func_0x00e5db40(puVar1,0x1b,0);
      FUN_008ab370();
      return;
    }
    goto LAB_00e66048;
  case 1:
    break;
  case 3:
    *param_3 = *param_3 | 0x80;
    *(undefined2 *)((int)param_3 + 0x36) = 0;
    param_3[1] = param_3[1];
    if ((*param_3 & 8) != 0) {
      if (*(short *)(param_2 + 1) == 0x101) {
        puVar2 = param_3 + 8;
        uVar6 = *puVar2;
        *puVar2 = *puVar2 - 0x14;
        param_3[9] = param_3[9] - (uint)(uVar6 < 0x14);
        FUN_008ab370();
        return;
      }
      uVar7 = (uint)(*(short *)(param_2 + 1) != 0x102) * 4 + 0x18;
      puVar2 = param_3 + 8;
      uVar6 = *puVar2;
      *puVar2 = *puVar2 - uVar7;
      param_3[9] = param_3[9] - (uint)(uVar6 < uVar7);
    }
  case 2:
LAB_00e66146:
    FUN_008ab370();
    return;
  case 4:
    func_0x00e5dba0(param_2 + 7,param_3,param_4,param_5);
    FUN_008ab370();
    return;
  case 5:
    func_0x00e66230(param_2);
    FUN_008ab370();
    return;
  default:
    func_0x00e653c0(param_1,param_3,param_4,param_5,param_6);
    FUN_008ab370();
    return;
  case 0xe:
    func_0x00e60a20(0,1,2,3,4,5,0x14,0xffffffff);
    FUN_008ab370();
    return;
  }
  uVar6 = param_2[2] - param_2[4];
  uVar7 = (param_2[3] - param_2[5]) - (uint)((uint)param_2[2] < (uint)param_2[4]);
  if ((uVar7 <= param_5) && ((uVar7 < param_5 || (uVar6 < param_4)))) {
    param_4 = uVar6;
    param_5 = uVar7;
  }
  if (param_4 == 0 && param_5 == 0) {
    lVar10 = func_0x00e5ddc0(param_1,&iStack_38,10,0);
    if (lVar10 < 10) {
      func_0x00e5db60(param_2 + 7,param_1);
      FUN_008ab370();
      return;
    }
    cVar4 = func_0x00e680a0(param_2[6],&iStack_18);
    if (cVar4 == '\0') goto LAB_00e65ffc;
    func_0x00e680c0(param_2[6]);
    param_2[6] = 0;
    if (((iStack_38 == iStack_18) && (iStack_34 == iStack_14)) && (sStack_30 == sStack_10))
    goto LAB_00e66146;
    uVar11 = 7;
  }
  else {
    lVar10 = func_0x00e5ddc0(param_1,param_3,param_4,param_5);
    iStack_40 = (int)((ulonglong)lVar10 >> 0x20);
    if ((lVar10 < 0x100000000) && (lVar10 < 0)) {
      func_0x00e5db60(param_2 + 7,param_1);
      FUN_008ab370();
      return;
    }
    puVar2 = param_2 + 4;
    uVar6 = *puVar2;
    *puVar2 = *puVar2 + (uint)lVar10;
    param_2[5] = param_2[5] + iStack_40 + (uint)CARRY4(uVar6,(uint)lVar10);
    cVar4 = func_0x00e68000(param_2[6],param_3,lVar10);
    if (cVar4 != '\0') {
      FUN_008ab370();
      return;
    }
LAB_00e65ffc:
    uVar11 = 0x14;
  }
  func_0x00e5db40(param_2 + 7,uVar11,0);
LAB_00e66048:
  FUN_008ab370();
  return;
}



int FUN_00e66280(int param_1,int param_2,short param_3,byte param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int *_Memory;
  undefined4 uVar3;
  uint auStack_40 [8];
  uint uStack_20;
  int iStack_1c;
  
  if ((((param_3 == 0x101) || (param_3 == 0x102)) || (param_3 == 0x103)) &&
     ((param_5 != 0 && (param_2 != 0)))) {
    if ((param_4 & 1) == 0) {
      iVar2 = func_0x00e5e540(param_2,auStack_40);
      if (iVar2 != 0) {
        func_0x00e5db60(param_1 + 8,param_2);
        return 0;
      }
      if (param_3 == 0x101) {
        iVar2 = 8;
      }
      else {
        iVar2 = (uint)(param_3 != 0x102) * 4 + 0xc;
      }
      uVar1 = iVar2 + 0xc;
      if (((auStack_40[0] & 8) != 0) && ((iStack_1c != 0 || (uVar1 <= uStack_20)))) {
        _Memory = (int *)func_0x008aafe4(0x28);
        if (_Memory == (int *)0x0) {
          func_0x00e5db40(param_1 + 8,0xe,0);
          return 0;
        }
        iVar2 = func_0x00e87a96(param_5);
        *_Memory = iVar2;
        if (iVar2 != 0) {
          *(short *)(_Memory + 1) = param_3;
          _Memory[6] = 0;
          FUN_0095c880(_Memory + 7);
          _Memory[2] = uStack_20 - uVar1;
          _Memory[3] = iStack_1c - (uint)(uStack_20 < uVar1);
          iVar2 = func_0x00e65270(param_1,param_2,FUN_00e65dd0,_Memory);
          if (iVar2 != 0) {
            return iVar2;
          }
          func_0x00e66230(_Memory);
          return 0;
        }
        func_0x00e5db40(param_1 + 8,0xe,0);
        free(_Memory);
        return 0;
      }
      uVar3 = 0x1c;
    }
    else {
      uVar3 = 0x18;
    }
  }
  else {
    uVar3 = 0x12;
  }
  func_0x00e5db40(param_1 + 8,uVar3,0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00e6661d)

uint FUN_00e66420(undefined4 param_1,undefined4 *param_2,uint *param_3,uint param_4,int param_5,
                 uint *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  uint uStack_10;
  uint uStack_8;
  
  switch(param_6) {
  case (uint *)0x0:
    *(undefined1 *)(param_2 + 9) = 0;
    if (*(short *)(param_2 + 1) == 0x101) {
      iVar8 = 8;
    }
    else {
      iVar8 = (uint)(*(short *)(param_2 + 1) != 0x102) * 4 + 0xc;
    }
    iVar1 = (int)param_2 + 6;
    puVar2 = param_2 + 10;
    cVar6 = func_0x00e67fe0(iVar1,iVar8);
    if (cVar6 != '\0') {
      pcVar5 = (char *)*param_2;
      pcVar11 = pcVar5;
      do {
        cVar6 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar6 != '\0');
      iVar7 = func_0x00e680f0(pcVar5,(int)pcVar11 - (int)(pcVar5 + 1),0,iVar1,
                              *(undefined2 *)(param_2 + 1),(int)param_2 + iVar8 + 6,puVar2);
      param_2[8] = iVar7;
      if (iVar7 != 0) {
        iVar8 = func_0x00e60d60(iVar1,iVar8 + 2,0);
        param_2[7] = iVar8;
        if (iVar8 != 0) {
          return 0;
        }
        func_0x00e680c0(param_2[8]);
        param_2[8] = 0;
        func_0x00e5db40(puVar2,0xe,0);
      }
      return 0xffffffff;
    }
    func_0x00e5db40(puVar2,0x14,0);
    return 0xffffffff;
  case (uint *)0x1:
    if (param_2[7] == 0) {
      uStack_10 = 0;
      uStack_8 = param_4;
      param_6 = param_3;
    }
    else {
      uVar12 = func_0x00e61100(param_2[7],param_3,param_4,param_5);
      uStack_10 = (uint)uVar12;
      param_6 = (uint *)((int)param_3 + uStack_10);
      uStack_8 = param_4 - uStack_10;
      param_5 = (param_5 - (int)((ulonglong)uVar12 >> 0x20)) - (uint)(param_4 < uStack_10);
      cVar6 = func_0x00e60aa0(param_2[7]);
      if (cVar6 != '\0') {
        func_0x00e60ac0(param_2[7]);
        param_2[7] = 0;
      }
    }
    if (*(char *)(param_2 + 9) != '\0') {
      return uStack_10;
    }
    uVar13 = func_0x00e5ddc0(param_1,param_6,uStack_8,param_5);
    uVar10 = (uint)uVar13;
    if (((longlong)uVar13 < 0x100000000) && ((longlong)uVar13 < 0)) {
      func_0x00e5db60(param_2 + 10,param_1);
      return 0xffffffff;
    }
    cVar6 = func_0x00e68050(param_2[8],param_6,uVar13);
    if (cVar6 != '\0') {
      if (CONCAT44(param_5,uStack_8) <= uVar13) {
        return uVar10 + uStack_10;
      }
      *(undefined1 *)(param_2 + 9) = 1;
      cVar6 = func_0x00e680a0(param_2[8],(int)param_2 + 6);
      if (cVar6 != '\0') {
        func_0x00e680c0(param_2[8]);
        param_2[8] = 0;
        iVar8 = func_0x00e60d60((int)param_2 + 6,10,0);
        param_2[7] = iVar8;
        if (iVar8 != 0) {
          iVar8 = func_0x00e61100(iVar8,(int)param_6 + uVar10,uStack_8 - uVar10,
                                  (param_5 - (int)(uVar13 >> 0x20)) - (uint)(uStack_8 < uVar10));
          return uVar10 + uStack_10 + iVar8;
        }
        uVar14 = 0xe;
        break;
      }
    }
    uVar14 = 0x14;
    break;
  case (uint *)0x2:
    return 0;
  case (uint *)0x3:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_3 = *param_3 | 0x80;
    *(undefined2 *)((int)param_3 + 0x36) = uVar4;
    param_3[1] = param_3[1];
    if ((*param_3 & 8) == 0) {
      return 0;
    }
    if (*(short *)(param_2 + 1) != 0x101) {
      uVar9 = (uint)(*(short *)(param_2 + 1) != 0x102) * 4 + 0x18;
      puVar3 = param_3 + 8;
      uVar10 = *puVar3;
      *puVar3 = *puVar3 + uVar9;
      param_3[9] = param_3[9] + (uint)CARRY4(uVar10,uVar9);
      return 0;
    }
    puVar3 = param_3 + 8;
    uVar10 = *puVar3;
    *puVar3 = *puVar3 + 0x14;
    param_3[9] = param_3[9] + (uint)(0xffffffeb < uVar10);
    return 0;
  case (uint *)0x4:
    uVar10 = func_0x00e5dba0(param_2 + 10,param_3,param_4,param_5);
    return uVar10;
  case (uint *)0x5:
    func_0x00e66840(param_2);
    return 0;
  default:
    uVar10 = func_0x00e653c0(param_1,param_3,param_4,param_5,param_6);
    return uVar10;
  case (uint *)0xe:
    uVar10 = func_0x00e60a20(0,1,2,3,4,5,0x13,0xffffffff);
    return uVar10;
  case (uint *)0x13:
    if ((param_5 != 0) || (0x17 < param_4)) {
      *param_3 = *param_3 | 4;
      param_3[1] = param_3[1];
      *(undefined1 *)((int)param_3 + 0xb) = 0x33;
      return 0;
    }
    uVar14 = 0x12;
  }
  func_0x00e5db40(param_2 + 10,uVar14,0);
  return 0xffffffff;
}



int FUN_00e66890(int param_1,int param_2,short param_3,undefined4 param_4,int param_5)

{
  int *_Memory;
  int iVar1;
  
  if ((((param_3 == 0x101) || (param_3 == 0x102)) || (param_3 == 0x103)) &&
     ((param_5 != 0 && (param_2 != 0)))) {
    _Memory = (int *)func_0x008aafe4(0x34);
    if (_Memory != (int *)0x0) {
      iVar1 = func_0x00e87a96(param_5);
      *_Memory = iVar1;
      if (iVar1 != 0) {
        *(short *)(_Memory + 1) = param_3;
        _Memory[7] = 0;
        _Memory[8] = 0;
        FUN_0095c880(_Memory + 10);
        *(undefined1 *)(_Memory + 9) = 0;
        iVar1 = func_0x00e65270(param_1,param_2,FUN_00e66420,_Memory);
        if (iVar1 != 0) {
          return iVar1;
        }
        func_0x00e66840(_Memory);
        return 0;
      }
      free(_Memory);
    }
    func_0x00e5db40(param_1 + 8,0xe,0);
    return 0;
  }
  func_0x00e5db40(param_1 + 8,0x12,0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00e669a2)

undefined4 FUN_00e66980(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  func_0x008abeb0();
  uVar2 = func_0x008abdd0();
  uVar1 = (undefined4)uVar2;
  if (uVar2 < CONCAT44(param_2,param_1)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined4 * FUN_00e669b0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008aafe4(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 1;
  if (8 < param_2 - 1U) {
    param_2 = 9;
  }
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return puVar1;
}



undefined4 * FUN_00e66a00(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008aafe4(0x40);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  if (8 < param_2 - 1U) {
    param_2 = 9;
  }
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return puVar1;
}



uint FUN_00e66a50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar1 = param_1 + 4;
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    iVar2 = func_0x00e88b60(puVar1,0,0);
  }
  else {
    iVar2 = func_0x00e886e0(puVar1,param_1[2],0,0x1e);
  }
  if (iVar2 != 0) {
    uVar3 = func_0x00e66c40(iVar2,0);
    uVar4 = func_0x00e5db40(*param_1,uVar3);
    return uVar4 & 0xffffff00;
  }
  return 1;
}



uint FUN_00e66ac0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 1) == '\0') {
    iVar1 = func_0x00e88ae0(param_1 + 4);
  }
  else {
    iVar1 = func_0x00e88670();
  }
  if (iVar1 != 0) {
    uVar2 = func_0x00e66c40(iVar1,0);
    uVar3 = func_0x00e5db40(*param_1,uVar2);
    return uVar3 & 0xffffff00;
  }
  return 1;
}



undefined4 FUN_00e66b00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (param_1[5] == 0)) {
    param_1[5] = param_3;
    param_1[4] = param_2;
    return 1;
  }
  func_0x00e5db40(*param_1,0x12,0);
  return 0;
}



void FUN_00e66b40(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



undefined4 FUN_00e66b50(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1[5] == 0) && (*(char *)(param_1 + 3) == '\0')) {
    *param_3 = 0;
    param_3[1] = 0;
    return 3;
  }
  iVar2 = *param_3;
  if (param_3[1] != 0) {
    iVar2 = -1;
  }
  param_1[9] = iVar2;
  param_1[8] = param_2;
  if (*(char *)(param_1 + 1) == '\0') {
    uVar1 = func_0x00e88960(param_1 + 4);
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + 3) != '\0') {
      uVar1 = 2;
    }
    uVar1 = func_0x00e88500(param_1 + 4,uVar1);
  }
  *param_3 = iVar2 - param_1[9];
  param_3[1] = 0;
  switch(uVar1) {
  case 0:
  case 1:
    break;
  default:
    uVar1 = func_0x00e66c40(uVar1,0);
    func_0x00e5db40(*param_1,uVar1);
    return 2;
  case 3:
    return 0;
  case 4:
    return 1;
  }
  uVar1 = 0;
  if (param_1[5] == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



undefined8 FUN_00e66ca0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2 + (0xffffc000 < param_1);
  uVar5 = uVar4 * 0x40000;
  uVar1 = param_1 + 0x3fff >> 0xe | uVar5;
  uVar4 = uVar4 >> 0xe;
  uVar2 = uVar1 * 5 + param_1;
  uVar3 = uVar2 + 6;
  uVar5 = uVar4 + (uVar4 << 2 | uVar5 >> 0x1e) + (uint)CARRY4(uVar1,uVar1 * 4) + param_2 +
          (uint)CARRY4(uVar1 * 5,param_1) + (uint)(0xfffffff9 < uVar2);
  if ((uVar5 <= param_2) && ((uVar5 < param_2 || (uVar3 < param_1)))) {
    return 0xffffffffffffffff;
  }
  return CONCAT44(uVar5,uVar3);
}



undefined4 * FUN_00e66d00(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1 = 1;
  puVar1 = (undefined4 *)func_0x008aafe4(0x4c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)func_0x008aaf8a();
    func_0x00e5db40(param_3,1,*puVar1);
    return (undefined4 *)0x0;
  }
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = (undefined1)param_1;
  iVar2 = param_2;
  if (8 < param_2 - 1U) {
    iVar2 = 9;
  }
  puVar1[2] = iVar2;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = (param_2 != 0xffff) + 8;
  puVar1[0xf] = 0;
  return puVar1;
}



undefined4 * FUN_00e66d10(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1 = 0;
  puVar1 = (undefined4 *)func_0x008aafe4(0x4c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)func_0x008aaf8a();
    func_0x00e5db40(param_3,1,*puVar1);
    return (undefined4 *)0x0;
  }
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = (undefined1)param_1;
  iVar2 = param_2;
  if (8 < param_2 - 1U) {
    iVar2 = 9;
  }
  puVar1[2] = iVar2;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[3] = (param_2 != 0xffff) + 8;
  puVar1[0xf] = 0;
  return puVar1;
}



undefined4 FUN_00e66d20(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 8) < 3) {
    return 4;
  }
  uVar1 = 0;
  if (7 < *(int *)(param_1 + 8)) {
    uVar1 = 2;
  }
  return uVar1;
}



uint FUN_00e66d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = param_1 + 5;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    iVar2 = func_0x00e6a8c0(puVar1,0xfffffff1,"1.3.1",0x38);
  }
  else {
    iVar2 = func_0x00e6c980(puVar1,param_1[2],8,0xfffffff1,param_1[3],0);
  }
  if (iVar2 != 0) {
    uVar3 = func_0x00e5db40(*param_1,0xd,iVar2);
    return uVar3 & 0xffffff00;
  }
  return 1;
}



uint FUN_00e66dc0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 1) == '\0') {
    iVar1 = func_0x00e6a850(param_1 + 5);
  }
  else {
    iVar1 = func_0x00e6c850();
  }
  if (iVar1 != 0) {
    uVar2 = func_0x00e5db40(*param_1,0xd,iVar1);
    return uVar2 & 0xffffff00;
  }
  return 1;
}



undefined4 FUN_00e66e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (param_1[6] == 0)) {
    param_1[6] = param_3;
    param_1[5] = param_2;
    return 1;
  }
  func_0x00e5db40(*param_1,0x12,0);
  return 0;
}



void FUN_00e66e40(int param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



undefined4 FUN_00e66e50(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_3;
  if (param_3[1] != 0) {
    iVar3 = -1;
  }
  param_1[9] = iVar3;
  param_1[8] = param_2;
  if (*(char *)(param_1 + 1) == '\0') {
    iVar2 = func_0x00e68f80(param_1 + 5,2);
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + 4) != '\0') {
      uVar1 = 4;
    }
    iVar2 = func_0x00e6be60(param_1 + 5,uVar1);
  }
  *param_3 = iVar3 - param_1[9];
  param_3[1] = 0;
  if (iVar2 == -5) {
    if (param_1[6] == 0) {
      return 3;
    }
  }
  else {
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 == 1) {
      return 1;
    }
  }
  func_0x00e5db40(*param_1,0xd,iVar2);
  return 2;
}



void FUN_00e67260(short *param_1,int param_2,int *param_3)

{
  short *psVar1;
  short sVar2;
  
  psVar1 = param_1 + 1;
  do {
    sVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (sVar2 != 0);
  param_2 = param_2 + ((int)param_1 - (int)psVar1 >> 1);
  *param_3 = param_2;
  func_0x008aafe4(param_2 * 2);
  return;
}



HANDLE CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
                  LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
                  DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e67290. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}



void FUN_00e672a0(wchar_t *param_1,size_t param_2,undefined4 param_3,undefined4 param_4)

{
  _snwprintf_s(param_1,param_2,param_2,L"%s.%08x",param_3,param_4);
  return;
}



wchar_t * __cdecl _wcsdup(wchar_t *_Str)

{
  wchar_t *pwVar1;
  
                    // WARNING: Could not recover jumptable at 0x00e87c92. Too many branches
                    // WARNING: Treating indirect jump as call
  pwVar1 = _wcsdup(_Str);
  return pwVar1;
}



undefined8 FUN_00e683f0(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0xac);
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0xa4));
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = func_0x00e68b60(DVar2);
    func_0x00e5db40(param_1,6,uVar3);
    return 0xffffffffffffffff;
  }
  uVar4 = (**(code **)(iVar6 + 0xc))(*(undefined4 *)(param_1 + 0xa0));
  if (uVar4 != 0xffffffff) {
    if ((uVar4 & 0x100) != 0) {
      iVar5 = (**(code **)(iVar6 + 0x1c))(*(undefined4 *)(param_1 + 0xa0),uVar4 & 0xfffffeff);
      if (iVar5 == 0) goto LAB_00e6843c;
    }
    iVar6 = (**(code **)(iVar6 + 0x18))
                      (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x18),1);
    if (iVar6 != 0) {
      return 0;
    }
  }
LAB_00e6843c:
  DVar2 = GetLastError();
  uVar3 = func_0x00e68b60(DVar2);
  func_0x00e5db40(param_1,2,uVar3);
  return 0xffffffffffffffff;
}



undefined8 FUN_00e684a0(PSECURITY_DESCRIPTOR param_1)

{
  undefined4 *puVar1;
  PSECURITY_DESCRIPTOR pvVar2;
  DWORD DVar3;
  void *_Memory;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  PACL pAStack_18;
  DWORD DStack_14;
  undefined4 *puStack_10;
  undefined4 uStack_c;
  HLOCAL pvStack_8;
  undefined4 uStack_4;
  
  pvVar2 = param_1;
  iVar5 = -1;
  param_1 = (HLOCAL)0x0;
  puStack_1c = (undefined4 *)0x0;
  puVar1 = *(undefined4 **)((int)pvVar2 + 0xac);
  pAStack_18 = (PACL)0x0;
  uStack_20 = 0;
  puStack_10 = puVar1;
  if (((*(HANDLE *)((int)pvVar2 + 0x1c) != (HANDLE)0xffffffff) &&
      (DVar3 = GetFileType(*(HANDLE *)((int)pvVar2 + 0x1c)), DVar3 == 1)) &&
     (DVar3 = GetSecurityInfo(*(HANDLE *)((int)pvVar2 + 0x1c),SE_FILE_OBJECT,0x20000004,(PSID *)0x0,
                              (PSID *)0x0,&pAStack_18,(PACL *)0x0,&param_1), DVar3 == 0)) {
    pvStack_8 = param_1;
    puStack_1c = &uStack_c;
    uStack_c = 0xc;
    uStack_4 = 0;
  }
  DStack_14 = GetTickCount();
  _Memory = (void *)(*(code *)*puVar1)(*(undefined4 *)((int)pvVar2 + 0x18),10,&uStack_20);
  if (_Memory == (void *)0x0) {
    func_0x00e5db40(pvVar2,0xe,0);
    return 0xffffffffffffffff;
  }
  uVar6 = 0;
  do {
    if (iVar5 != -1) goto LAB_00e68636;
    (*(code *)puStack_10[5])
              (_Memory,uStack_20,*(undefined4 *)((int)pvVar2 + 0x18),DStack_14 + uVar6);
    iVar5 = (**(code **)(*(int *)((int)pvVar2 + 0xac) + 4))
                      (_Memory,0xc0000000,1,puStack_1c,1,0x180,0);
    if (iVar5 == -1) {
      DVar3 = GetLastError();
      uVar4 = func_0x00e68b60(DVar3);
      func_0x00e5db40(pvVar2,0xb,uVar4);
      DVar3 = GetLastError();
      if (DVar3 != 0x50) goto LAB_00e685fa;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x400);
  if (iVar5 == -1) {
LAB_00e685fa:
    free(_Memory);
    LocalFree(param_1);
    DVar3 = GetLastError();
    uVar4 = func_0x00e68b60(DVar3);
    func_0x00e5db40(pvVar2,0xc,uVar4);
    return 0xffffffffffffffff;
  }
LAB_00e68636:
  LocalFree(param_1);
  *(int *)((int)pvVar2 + 0xa4) = iVar5;
  *(void **)((int)pvVar2 + 0xa0) = _Memory;
  return 0;
}



undefined4 FUN_00e68660(int param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xac) + 4))
                    (*(undefined4 *)(param_1 + 0x18),0x80000000,3,0,3,0x80,0);
  if (iVar1 == -1) {
    DVar2 = GetLastError();
    uVar3 = func_0x00e68b60(DVar2);
    func_0x00e5db40(param_1,0xb,uVar3);
    return 0;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return 1;
}



undefined8 FUN_00e686b0(int param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xac) + 8))(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = func_0x00e68b60(DVar2);
    func_0x00e5db40(param_1,0x16,uVar3);
    return 0xffffffffffffffff;
  }
  return 0;
}



void FUN_00e686f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (*(HANDLE *)(param_1 + 0xa4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xa4));
  }
  (**(code **)(iVar1 + 8))(*(undefined4 *)(param_1 + 0xa0));
  return;
}



void FUN_00e68720(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_28;
  iVar2 = (**(code **)(*(int *)(param_1 + 0xac) + 0x10))(*(undefined4 *)(param_1 + 0x18),0);
  if (iVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 2) {
      *(undefined1 *)(param_2 + 4) = 0;
      FUN_008ab370();
      return;
    }
    uVar4 = func_0x00e68b60(DVar3);
    func_0x00e5db40(param_1,5,uVar4);
    FUN_008ab370();
    return;
  }
  *(undefined2 *)(param_2 + 4) = 1;
  if ((&stack0x00000000 != (undefined1 *)0x27) && (((uint)auStack_28 & 0x450) == 0)) {
    *(undefined1 *)((int)param_2 + 0x11) = 1;
  }
  cVar1 = func_0x00e68ae0(uStack_20,uStack_1c,param_2 + 2);
  if (cVar1 == '\0') {
    func_0x00e5db40(param_1,5,0x22);
    FUN_008ab370();
    return;
  }
  param_2[1] = uStack_18;
  *param_2 = uStack_14;
  FUN_008ab370();
  return;
}



void FUN_00e68810(int param_1,undefined4 param_2)

{
  (**(code **)(*(int *)(param_1 + 0xac) + 0x20))(param_2);
  return;
}



void FUN_00e68830(int param_1,LPCVOID param_2,DWORD param_3,int param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  DWORD DStack_4;
  
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0xa4),param_2,param_3,&DStack_4,(LPOVERLAPPED)0x0);
  if (((BVar1 == 0) || (DStack_4 != param_3)) || (param_4 != 0)) {
    DVar2 = GetLastError();
    uVar3 = func_0x00e68b60(DVar2);
    func_0x00e5db40(param_1,6,uVar3);
  }
  return;
}



void FUN_00e68890(int param_1)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x1c));
  return;
}



ulonglong FUN_00e688a0(int param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  uint uStack_4;
  
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 0x1c),param_2,param_3,&uStack_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = func_0x00e68b60(DVar2);
    func_0x00e5db40(param_1,5,uVar3);
    return 0xffffffffffffffff;
  }
  return (ulonglong)uStack_4;
}



undefined4
FUN_00e688f0(undefined4 param_1,HANDLE param_2,undefined4 param_3,uint param_4,int param_5)

{
  LARGE_INTEGER liDistanceToMove;
  PLARGE_INTEGER lpNewFilePointer;
  BOOL BVar1;
  undefined4 uVar2;
  DWORD unaff_retaddr;
  
  if (param_5 == 0) {
    lpNewFilePointer = (PLARGE_INTEGER)0x0;
  }
  else if (param_5 == 1) {
    lpNewFilePointer = (PLARGE_INTEGER)0x1;
  }
  else {
    if (param_5 != 2) {
      func_0x00e5db40(param_1,4,0x16);
      return 0;
    }
    lpNewFilePointer = (PLARGE_INTEGER)0x2;
  }
  liDistanceToMove.s.HighPart = 0;
  liDistanceToMove.s.LowPart = param_4;
  BVar1 = SetFilePointerEx(param_2,liDistanceToMove,lpNewFilePointer,unaff_retaddr);
  if (BVar1 == 0) {
    GetLastError();
    uVar2 = func_0x00e68b60();
    func_0x00e5db40(param_2,4,uVar2);
    return 0;
  }
  return 1;
}



undefined8 FUN_00e68960(undefined4 param_1,HANDLE param_2)

{
  BOOL BVar1;
  DWORD DVar2;
