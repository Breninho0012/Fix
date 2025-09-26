
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_14;
  int iStack_10;
  
  iVar7 = 0;
  iStack_14 = -1;
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_20 = -1;
  iStack_1c = -1;
  iStack_10 = -1;
  iVar6 = -1;
  if (0 < *(int *)(param_1 + 0x308)) {
    piVar9 = *(int **)(param_1 + 0x42c);
    do {
      iVar6 = *piVar9;
      iVar1 = piVar9[2];
      iVar2 = piVar9[1];
      iVar3 = piVar9[3];
      if ((*piVar9 <= iVar1) && (iVar2 <= iVar3)) {
        iVar5 = iVar2;
        iVar4 = iVar6;
        iVar8 = iVar3;
        if ((iStack_24 <= iStack_20) && (iStack_28 <= iStack_1c)) {
          iVar5 = iStack_28;
          iVar4 = iStack_24;
          iVar1 = iStack_20;
          iVar8 = iStack_1c;
        }
        iStack_1c = iVar8;
        iStack_20 = iVar1;
        iStack_24 = iVar4;
        iStack_28 = iVar5;
        iVar1 = *(int *)(param_1 + 0x338);
        iVar6 = iVar6 - *(int *)(iVar1 + 0x34);
        iVar8 = (iVar2 - *(int *)(iVar1 + 0x28)) - *(int *)(iVar1 + 0x38);
        iVar2 = piVar9[2];
        iVar1 = iVar6 + -1;
        iVar4 = iVar2;
        iVar5 = iVar1;
        if (iVar6 + -2 <= iVar2) {
          iVar4 = iVar1;
          iVar5 = iVar2;
        }
        iVar2 = piVar9[3];
        iVar6 = iVar7;
        iStack_10 = iVar3;
        if ((iVar4 <= param_2) && (param_2 <= iVar5)) {
          iVar5 = iVar2;
          iVar3 = iVar8;
          if (iVar8 + -1 <= iVar2) {
            iVar5 = iVar8;
            iVar3 = iVar2;
          }
          if ((iVar5 <= param_3) && (param_3 <= iVar3)) break;
        }
        if ((iVar8 <= param_3) && (param_3 <= iVar2)) {
          if (param_2 <= iVar1) break;
          if (piVar9[2] <= param_2) {
            iStack_14 = iVar7 + 1;
          }
        }
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 4;
      iVar6 = iStack_14;
    } while (iVar7 < *(int *)(param_1 + 0x308));
    if (param_3 < iStack_28) {
      return 0;
    }
    if (iStack_10 < param_3) {
      iVar6 = *(int *)(param_1 + 0x308);
    }
  }
  return iVar6;
}



int * __thiscall FUN_0084d010(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f362be;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  puVar3 = &stack0xfffffffc;
  if (((*(byte *)(param_1 + 0xf8) & 3) != 0) &&
     (puVar3 = &stack0xfffffffc, *(int *)(param_1 + 0x374) == *(int *)(param_1 + 0x378))) {
    func_0x0086c030(uVar4);
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[5] = 0xf;
  *(undefined1 *)param_2 = 0;
  uStack_14 = 0;
  if (*(char *)(param_1 + 0x3d8) == '\0') {
    piVar5 = (int *)(param_1 + 0x2f8);
    if (param_2 != piVar5) {
      if (0xf < *(uint *)(param_1 + 0x30c)) {
        piVar5 = (int *)*piVar5;
      }
      func_0x0046a660(piVar5,*(undefined4 *)(param_1 + 0x308));
    }
  }
  else {
    piVar5 = (int *)func_0x00469c80(*(undefined4 *)(param_1 + 0x308),0x2a);
    uStack_14 = 1;
    if (param_2 != piVar5) {
      uVar4 = param_2[5];
      if (0xf < uVar4) {
        iVar1 = *param_2;
        uVar7 = uVar4 + 1;
        iVar6 = iVar1;
        if (0xfff < uVar7) {
          iVar6 = *(int *)(iVar1 + -4);
          uVar7 = uVar4 + 0x24;
          if (0x1f < (iVar1 - iVar6) - 4U) goto LAB_0084d16f;
        }
        func_0x008ab812(iVar6,uVar7);
      }
      param_2[4] = 0;
      param_2[5] = 0xf;
      *(undefined1 *)param_2 = 0;
      iVar1 = piVar5[1];
      iVar6 = piVar5[2];
      iVar2 = piVar5[3];
      *param_2 = *piVar5;
      param_2[1] = iVar1;
      param_2[2] = iVar6;
      param_2[3] = iVar2;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < uStack_24) {
      func_0x0046b1f0(auStack_38,auStack_38[0],uStack_24);
    }
    uStack_28 = 0;
    uStack_24 = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
  }
  if ((int *)(param_1 + 0x34c) != (int *)(param_1 + 0x340)) {
    iVar1 = *(int *)(param_1 + 0x340);
    func_0x0084f020(iVar1,(*(int *)(param_1 + 0x344) - iVar1 >> 2) * -0x33333333);
  }
  if (((*(char *)(param_1 + 0x334) != '\0') &&
      (*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x48))) &&
     (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x4c))) {
    piVar5 = (int *)func_0x00618000(auStack_38,param_2,
                                    (((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8)) -
                                     *(int *)(param_1 + 0x32c)) -
                                    (*(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x40))) + 1,
                                    param_1 + 0x34c);
    uStack_14 = 2;
    if (param_2 != piVar5) {
      uVar4 = param_2[5];
      if (0xf < uVar4) {
        iVar1 = *param_2;
        uVar7 = uVar4 + 1;
        iVar6 = iVar1;
        if (0xfff < uVar7) {
          iVar6 = *(int *)(iVar1 + -4);
          uVar7 = uVar4 + 0x24;
          if (0x1f < (iVar1 - iVar6) - 4U) {
LAB_0084d16f:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(iVar6,uVar7);
      }
      param_2[4] = 0;
      param_2[5] = 0xf;
      *(undefined1 *)param_2 = 0;
      iVar1 = piVar5[1];
      iVar6 = piVar5[2];
      iVar2 = piVar5[3];
      *param_2 = *piVar5;
      param_2[1] = iVar1;
      param_2[2] = iVar6;
      param_2[3] = iVar2;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(piVar5 + 4);
      piVar5[4] = 0;
      piVar5[5] = 0xf;
      *(undefined1 *)piVar5 = 0;
    }
    uStack_14 = uStack_14 & 0xffffff00;
    if (0xf < uStack_24) {
      func_0x0046b1f0(auStack_38,auStack_38[0],uStack_24);
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return param_2;
}



undefined4 * __thiscall FUN_0084d2d0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404);
  if (iVar2 < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[5] = 0xf;
    *(undefined1 *)param_2 = 0;
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00482f60(param_2,*(int *)(param_1 + 0x404),iVar2,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __fastcall FUN_0084d390(int param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x308) < *(int *)(param_1 + 0x3b0)) {
    *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x308);
  }
  if (*(char *)(param_1 + 0x3ff) != '\0') {
    *(undefined4 *)(param_1 + 0x408) = 0;
    *(undefined4 *)(param_1 + 0x404) = 0;
  }
  uStack_c = (undefined4)DAT_0145db28;
  uStack_8 = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
  *(undefined4 *)(param_1 + 0x3d4) = uStack_8;
  *(undefined4 *)(param_1 + 0x3d0) = uStack_c;
  func_0x0084b7d0(1);
  return;
}



void __thiscall FUN_0084d400(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int ****extraout_ECX;
  int ****extraout_ECX_00;
  int ****extraout_ECX_01;
  undefined4 ****extraout_ECX_02;
  undefined4 ****extraout_ECX_03;
  undefined4 ****extraout_ECX_04;
  undefined4 ****extraout_ECX_05;
  undefined4 ****extraout_ECX_06;
  undefined4 ****extraout_ECX_07;
  int ****extraout_ECX_08;
  undefined4 ****extraout_ECX_09;
  undefined4 ****extraout_ECX_10;
  undefined4 ****extraout_ECX_11;
  int ****ppppiVar4;
  int *unaff_FS_OFFSET;
  undefined1 *puStack_28c;
  int ***pppiStack_288;
  undefined4 ***pppuStack_284;
  undefined4 ***pppuStack_280;
  undefined4 ***pppuStack_27c;
  undefined4 ***pppuStack_278;
  undefined4 ***pppuStack_274;
  undefined4 ***pppuStack_270;
  undefined4 ***pppuStack_26c;
  undefined4 ***pppuStack_268;
  int ***pppiStack_264;
  int ***pppiStack_260;
  int ***pppiStack_25c;
  undefined4 ***pppuStack_258;
  undefined4 ***pppuStack_254;
  undefined4 ***pppuStack_250;
  undefined4 ***pppuStack_24c;
  int ***pppiStack_248;
  int ***pppiStack_244;
  int ***pppiStack_240;
  int ***pppiStack_23c;
  int ***pppiStack_238;
  int ***pppiStack_234;
  uint uStack_230;
  undefined4 **appuStack_220 [4];
  undefined4 **appuStack_210 [4];
  undefined4 **appuStack_200 [4];
  undefined1 *puStack_1f0;
  undefined1 *puStack_1ec;
  undefined1 *puStack_1e8;
  int ***apppiStack_1e4 [4];
  undefined4 uStack_1d4;
  int **ppiStack_1d0;
  int ***pppiStack_1cc;
  int **ppiStack_1c8;
  int ***apppiStack_1c4 [4];
  undefined4 ***pppuStack_1b4;
  int **ppiStack_1b0;
  undefined4 ***apppuStack_1ac [4];
  undefined4 ***pppuStack_19c;
  undefined4 ***pppuStack_198;
  undefined4 ***apppuStack_194 [4];
  undefined4 ***pppuStack_184;
  undefined4 ***pppuStack_180;
  undefined4 ***apppuStack_17c [4];
  undefined4 ***pppuStack_16c;
  undefined4 ***pppuStack_168;
  undefined4 ***apppuStack_164 [4];
  undefined4 ***pppuStack_154;
  undefined4 ***pppuStack_150;
  undefined4 ***apppuStack_14c [4];
  undefined4 ***pppuStack_13c;
  undefined4 ***pppuStack_138;
  undefined4 ***apppuStack_134 [4];
  undefined4 ***pppuStack_124;
  int ***pppiStack_120;
  undefined4 ***apppuStack_11c [4];
  undefined4 ***pppuStack_10c;
  undefined4 ***pppuStack_108;
  undefined4 ***apppuStack_104 [4];
  undefined4 ***pppuStack_f4;
  undefined4 ***pppuStack_f0;
  int ***apppiStack_ec [4];
  int ***pppiStack_dc;
  undefined4 ***pppuStack_d8;
  undefined4 ***apppuStack_d4 [4];
  undefined4 ***pppuStack_c4;
  undefined4 ***pppuStack_c0;
  undefined4 ***apppuStack_bc [4];
  undefined4 ***pppuStack_ac;
  undefined4 ***pppuStack_a8;
  undefined4 ***apppuStack_a4 [4];
  undefined4 ***pppuStack_94;
  undefined4 ***pppuStack_90;
  undefined4 ***apppuStack_8c [4];
  undefined4 ***pppuStack_7c;
  int ***pppiStack_78;
  undefined4 ***apppuStack_74 [4];
  undefined4 ***pppuStack_64;
  int ***pppiStack_60;
  undefined4 ***apppuStack_5c [4];
  undefined4 ***pppuStack_4c;
  int ***pppiStack_48;
  int ***apppiStack_44 [4];
  int ***pppiStack_34;
  uint uStack_30;
  int ***pppiStack_2c;
  undefined4 uStack_28;
  char cStack_21;
  int ***pppiStack_20;
  int ***pppiStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3651e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_230 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppiStack_234 = (int ***)param_3;
  pppiStack_238 = (int ***)param_2;
  uStack_28 = 0;
  pppiStack_23c = (int ***)0x84d441;
  uStack_14 = uStack_230;
  FUN_0085b8a0();
  pppiStack_234 = (int ***)&pppiStack_20;
  pppiStack_238 = (int ***)0x84d44c;
  func_0x0080ff70();
  iStack_8 = 0;
  pppiStack_2c = pppiStack_1c;
  ppppiVar4 = (int ****)pppiStack_20;
  if (pppiStack_20 != pppiStack_1c) {
    do {
      iStack_8._0_1_ = 1;
      pppiStack_238 = *ppppiVar4 + 0xb;
      pppiStack_23c = (int ***)0x84d472;
      func_0x00469da0();
      uStack_28 = 1;
      pppiStack_23c = (int ***)0x4;
      pppiStack_248 = (int ***)apppiStack_44;
      if (0xf < uStack_30) {
        pppiStack_248 = apppiStack_44[0];
      }
      pppiStack_240 = (int ***)&DAT_011a0d6c;
      pppiStack_244 = pppiStack_34;
      pppuStack_24c = (undefined4 ****)0x84d493;
      cStack_21 = func_0x0046cf20();
      uStack_28 = 0;
      iStack_8._0_1_ = 0;
      if (0xf < uStack_30) {
        pppiStack_23c = (int ***)uStack_30;
        pppiStack_240 = apppiStack_44[0];
        pppiStack_244 = (int ***)apppiStack_44;
        pppiStack_248 = (int ***)0x84d4b8;
        func_0x0046b1f0();
      }
      pppiStack_34 = (int ***)0x0;
      uStack_30 = 0xf;
      apppiStack_44[0] = (int ***)((uint)apppiStack_44[0] & 0xffffff00);
      if (cStack_21 == '\0') {
        iStack_8._0_1_ = 3;
        pppiStack_23c = *ppppiVar4 + 0xb;
        pppiStack_240 = (int ***)0x84d530;
        func_0x00469da0();
        uStack_28 = 2;
        pppiStack_240 = (int ***)0xb;
        pppuStack_24c = apppuStack_5c;
        if (&DAT_0000000f < pppiStack_48) {
          pppuStack_24c = apppuStack_5c[0];
        }
        pppiStack_244 = (int ***)0x11a0d4c;
        pppiStack_248 = pppuStack_4c;
        pppuStack_250 = (undefined4 ****)0x84d551;
        cStack_21 = func_0x0046cf20();
        uStack_28 = 0;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        pppiStack_240 = pppiStack_48;
        if (&DAT_0000000f < pppiStack_48) {
          pppiStack_244 = apppuStack_5c[0];
          pppiStack_248 = (int ***)apppuStack_5c;
          pppuStack_24c = (undefined4 ****)0x84d576;
          func_0x0046b1f0();
          pppiStack_240 = (int ***)extraout_ECX;
        }
        pppuStack_4c = (undefined4 ****)0x0;
        pppiStack_48 = (int ***)&DAT_0000000f;
        apppuStack_5c[0] = (undefined4 ***)((uint)apppuStack_5c[0] & 0xffffff00);
        if (cStack_21 == '\0') {
          iStack_8._0_1_ = 4;
          pppiStack_240 = *ppppiVar4 + 0xb;
          pppiStack_244 = (int ***)0x84d5c0;
          func_0x00469da0();
          uStack_28 = 4;
          pppiStack_244 = (int ***)0x10;
          pppuStack_250 = apppuStack_74;
          if (&DAT_0000000f < pppiStack_60) {
            pppuStack_250 = apppuStack_74[0];
          }
          pppiStack_248 = (int ***)0x11a0d58;
          pppuStack_24c = pppuStack_64;
          pppuStack_254 = (undefined4 ****)0x84d5e1;
          cStack_21 = func_0x0046cf20();
          uStack_28 = 0;
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          pppiStack_244 = pppiStack_60;
          if (&DAT_0000000f < pppiStack_60) {
            pppiStack_248 = apppuStack_74[0];
            pppuStack_24c = apppuStack_74;
            pppuStack_250 = (undefined4 ****)0x84d606;
            func_0x0046b1f0();
            pppiStack_244 = (int ***)extraout_ECX_00;
          }
          pppuStack_64 = (undefined4 ****)0x0;
          pppiStack_60 = (int ***)&DAT_0000000f;
          apppuStack_74[0] = (undefined4 ***)((uint)apppuStack_74[0] & 0xffffff00);
          if (cStack_21 == '\0') {
            iStack_8._0_1_ = 5;
            pppiStack_244 = *ppppiVar4 + 0xb;
            pppiStack_248 = (int ***)0x84d649;
            func_0x00469da0();
            uStack_28 = 8;
            pppiStack_248 = (int ***)0x9;
            pppuStack_254 = apppuStack_8c;
            if (&DAT_0000000f < pppiStack_78) {
              pppuStack_254 = apppuStack_8c[0];
            }
            pppuStack_24c = (undefined4 ***)0x11a0d90;
            pppuStack_250 = pppuStack_7c;
            pppuStack_258 = (undefined4 ****)0x84d670;
            cStack_21 = func_0x0046cf20();
            uStack_28 = 0;
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            pppiStack_248 = pppiStack_78;
            if (&DAT_0000000f < pppiStack_78) {
              pppuStack_24c = apppuStack_8c[0];
              pppuStack_250 = apppuStack_8c;
              pppuStack_254 = (undefined4 ****)0x84d69b;
              func_0x0046b1f0();
              pppiStack_248 = (int ***)extraout_ECX_01;
            }
            pppuStack_7c = (undefined4 ****)0x0;
            pppiStack_78 = (int ***)&DAT_0000000f;
            apppuStack_8c[0] = (undefined4 ***)((uint)apppuStack_8c[0] & 0xffffff00);
            if (cStack_21 == '\0') {
              iStack_8._0_1_ = 6;
              pppiStack_248 = *ppppiVar4 + 0xb;
              pppuStack_24c = (undefined4 ***)0x84d6e1;
              func_0x00469da0();
              uStack_28 = 0x10;
              pppuStack_24c = (undefined4 ***)0xa;
              pppuStack_258 = apppuStack_a4;
              if (&DAT_0000000f < pppuStack_90) {
                pppuStack_258 = apppuStack_a4[0];
              }
              pppuStack_250 = (undefined4 ***)0x11a0d9c;
              pppuStack_254 = pppuStack_94;
              pppiStack_25c = (int ***)0x84d70e;
              cStack_21 = func_0x0046cf20();
              uStack_28 = 0;
              iStack_8 = (uint)iStack_8._1_3_ << 8;
              pppuStack_24c = pppuStack_90;
              if (&DAT_0000000f < pppuStack_90) {
                pppuStack_250 = apppuStack_a4[0];
                pppuStack_254 = apppuStack_a4;
                pppuStack_258 = (undefined4 ****)0x84d73c;
                func_0x0046b1f0();
                pppuStack_24c = extraout_ECX_02;
              }
              pppuStack_94 = (undefined4 ****)0x0;
              pppuStack_90 = (undefined4 ***)&DAT_0000000f;
              apppuStack_a4[0] = (undefined4 ***)((uint)apppuStack_a4[0] & 0xffffff00);
              if (cStack_21 == '\0') {
                iStack_8._0_1_ = 7;
                pppuStack_24c = *ppppiVar4 + 0xb;
                pppuStack_250 = (undefined4 ***)0x84d788;
                func_0x00469da0();
                uStack_28 = 0x20;
                pppuStack_250 = (undefined4 ***)0x8;
                pppiStack_25c = (int ***)apppuStack_bc;
                if (&DAT_0000000f < pppuStack_a8) {
                  pppiStack_25c = apppuStack_bc[0];
                }
                pppuStack_254 = (undefined4 ***)0x11a0d78;
                pppuStack_258 = pppuStack_ac;
                pppiStack_260 = (int ***)0x84d7b5;
                cStack_21 = func_0x0046cf20();
                uStack_28 = 0;
                iStack_8 = (uint)iStack_8._1_3_ << 8;
                pppuStack_250 = pppuStack_a8;
                if (&DAT_0000000f < pppuStack_a8) {
                  pppuStack_254 = apppuStack_bc[0];
                  pppuStack_258 = apppuStack_bc;
                  pppiStack_25c = (int ***)0x84d7e3;
                  func_0x0046b1f0();
                  pppuStack_250 = extraout_ECX_03;
                }
                pppuStack_ac = (undefined4 ****)0x0;
                pppuStack_a8 = (undefined4 ***)&DAT_0000000f;
                apppuStack_bc[0] = (undefined4 ***)((uint)apppuStack_bc[0] & 0xffffff00);
                if (cStack_21 == '\0') {
                  iStack_8._0_1_ = 8;
                  pppuStack_250 = *ppppiVar4 + 0xb;
                  pppuStack_254 = (undefined4 ***)0x84d82f;
                  func_0x00469da0();
                  uStack_28 = 0x40;
                  pppuStack_254 = (undefined4 ***)0xa;
                  pppiStack_260 = (int ***)apppuStack_d4;
                  if (&DAT_0000000f < pppuStack_c0) {
                    pppiStack_260 = apppuStack_d4[0];
                  }
                  pppuStack_258 = (undefined4 ***)0x11a0d84;
                  pppiStack_25c = pppuStack_c4;
                  pppiStack_264 = (int ***)0x84d85c;
                  cStack_21 = func_0x0046cf20();
                  uStack_28 = 0;
                  iStack_8 = (uint)iStack_8._1_3_ << 8;
                  pppuStack_254 = pppuStack_c0;
                  if (&DAT_0000000f < pppuStack_c0) {
                    pppuStack_258 = apppuStack_d4[0];
                    pppiStack_25c = (int ***)apppuStack_d4;
                    pppiStack_260 = (int ***)0x84d88a;
                    func_0x0046b1f0();
                    pppuStack_254 = extraout_ECX_04;
                  }
                  pppuStack_c4 = (undefined4 ****)0x0;
                  pppuStack_c0 = (undefined4 ***)&DAT_0000000f;
                  apppuStack_d4[0] = (undefined4 ***)((uint)apppuStack_d4[0] & 0xffffff00);
                  if (cStack_21 == '\0') {
                    iStack_8._0_1_ = 9;
                    pppuStack_254 = *ppppiVar4 + 0xb;
                    pppuStack_258 = (undefined4 ***)0x84d8d6;
                    func_0x00469da0();
                    uStack_28 = 0x80;
                    pppuStack_258 = (undefined4 ***)0xf;
                    pppiStack_264 = (int ***)apppiStack_ec;
                    if (&DAT_0000000f < pppuStack_d8) {
                      pppiStack_264 = apppiStack_ec[0];
                    }
                    pppiStack_25c = (int ***)0x11a0dc4;
                    pppiStack_260 = pppiStack_dc;
                    pppuStack_268 = (undefined4 ****)0x84d906;
                    cStack_21 = func_0x0046cf20();
                    uStack_28 = 0;
                    iStack_8 = (uint)iStack_8._1_3_ << 8;
                    pppuStack_258 = pppuStack_d8;
                    if (&DAT_0000000f < pppuStack_d8) {
                      pppiStack_25c = apppiStack_ec[0];
                      pppiStack_260 = (int ***)apppiStack_ec;
                      pppiStack_264 = (int ***)0x84d937;
                      func_0x0046b1f0();
                      pppuStack_258 = extraout_ECX_05;
                    }
                    pppiStack_dc = (int ***)0x0;
                    pppuStack_d8 = (undefined4 ***)&DAT_0000000f;
                    apppiStack_ec[0] = (int ***)((uint)apppiStack_ec[0] & 0xffffff00);
                    if (cStack_21 == '\0') {
                      iStack_8._0_1_ = 10;
                      pppuStack_258 = *ppppiVar4 + 0xb;
                      pppiStack_25c = (int ***)0x84d9a7;
                      func_0x00469da0();
                      uStack_28 = 0x100;
                      pppiStack_25c = (int ***)0x1a;
                      pppuStack_268 = apppuStack_104;
                      if (&DAT_0000000f < pppuStack_f0) {
                        pppuStack_268 = apppuStack_104[0];
                      }
                      pppiStack_260 = (int ***)0x11a0dd4;
                      pppiStack_264 = pppuStack_f4;
                      pppuStack_26c = (undefined4 ****)0x84d9d7;
                      cStack_21 = func_0x0046cf20();
                      uStack_28 = 0;
                      iStack_8 = (uint)iStack_8._1_3_ << 8;
                      pppiStack_25c = pppuStack_f0;
                      if (&DAT_0000000f < pppuStack_f0) {
                        pppiStack_260 = apppuStack_104[0];
                        pppiStack_264 = (int ***)apppuStack_104;
                        pppuStack_268 = (undefined4 ****)0x84da08;
                        func_0x0046b1f0();
                        pppiStack_25c = (int ***)extraout_ECX_06;
                      }
                      pppuStack_f4 = (undefined4 ****)0x0;
                      pppuStack_f0 = (undefined4 ***)&DAT_0000000f;
                      apppuStack_104[0] = (undefined4 ***)((uint)apppuStack_104[0] & 0xffffff00);
                      if (cStack_21 == '\0') {
                        iStack_8._0_1_ = 0xb;
                        pppiStack_25c = *ppppiVar4 + 0xb;
                        pppiStack_260 = (int ***)0x84da78;
                        func_0x00469da0();
                        uStack_28 = 0x200;
                        pppiStack_260 = (int ***)0x9;
                        pppuStack_26c = apppuStack_11c;
                        if (&DAT_0000000f < pppuStack_108) {
                          pppuStack_26c = apppuStack_11c[0];
                        }
                        pppiStack_264 = (int ***)0x11a0da8;
                        pppuStack_268 = pppuStack_10c;
                        pppuStack_270 = (undefined4 ****)0x84daa8;
                        cStack_21 = func_0x0046cf20();
                        uStack_28 = 0;
                        iStack_8 = (uint)iStack_8._1_3_ << 8;
                        pppiStack_260 = pppuStack_108;
                        if (&DAT_0000000f < pppuStack_108) {
                          pppiStack_264 = apppuStack_11c[0];
                          pppuStack_268 = apppuStack_11c;
                          pppuStack_26c = (undefined4 ****)0x84dad9;
                          func_0x0046b1f0();
                          pppiStack_260 = (int ***)extraout_ECX_07;
                        }
                        pppuStack_10c = (undefined4 ****)0x0;
                        pppuStack_108 = (undefined4 ***)&DAT_0000000f;
                        apppuStack_11c[0] = (undefined4 ***)((uint)apppuStack_11c[0] & 0xffffff00);
                        if (cStack_21 == '\0') {
                          iStack_8._0_1_ = 0xc;
                          pppiStack_260 = *ppppiVar4 + 0xb;
                          pppiStack_264 = (int ***)0x84db39;
                          func_0x00469da0();
                          uStack_28 = 0x400;
                          pppiStack_264 = (int ***)0xe;
                          pppuStack_270 = apppuStack_134;
                          if (&DAT_0000000f < pppiStack_120) {
                            pppuStack_270 = apppuStack_134[0];
                          }
                          pppuStack_268 = (undefined4 ***)0x11a0db4;
                          pppuStack_26c = pppuStack_124;
                          pppuStack_274 = (undefined4 ****)0x84db69;
                          cStack_21 = func_0x0046cf20();
                          uStack_28 = 0;
                          iStack_8 = (uint)iStack_8._1_3_ << 8;
                          pppiStack_264 = pppiStack_120;
                          if (&DAT_0000000f < pppiStack_120) {
                            pppuStack_268 = apppuStack_134[0];
                            pppuStack_26c = apppuStack_134;
                            pppuStack_270 = (undefined4 ****)0x84db9a;
                            func_0x0046b1f0();
                            pppiStack_264 = (int ***)extraout_ECX_08;
                          }
                          pppuStack_124 = (undefined4 ****)0x0;
                          pppiStack_120 = (int ***)&DAT_0000000f;
                          apppuStack_134[0] = (undefined4 ***)((uint)apppuStack_134[0] & 0xffffff00)
                          ;
                          if (cStack_21 == '\0') {
                            iStack_8._0_1_ = 0xd;
                            pppiStack_264 = *ppppiVar4 + 0xb;
                            pppuStack_268 = (undefined4 ***)0x84dbe6;
                            func_0x00469da0();
                            uStack_28 = 0x800;
                            pppuStack_268 = (undefined4 ***)0xb;
                            pppuStack_274 = apppuStack_14c;
                            if (&DAT_0000000f < pppuStack_138) {
                              pppuStack_274 = apppuStack_14c[0];
                            }
                            pppuStack_26c = (undefined4 ***)0x11a0e10;
                            pppuStack_270 = pppuStack_13c;
                            pppuStack_278 = (undefined4 ****)0x84dc16;
                            cStack_21 = func_0x0046cf20();
                            uStack_28 = 0;
                            iStack_8 = (uint)iStack_8._1_3_ << 8;
                            pppuStack_268 = pppuStack_138;
                            if (&DAT_0000000f < pppuStack_138) {
                              pppuStack_26c = apppuStack_14c[0];
                              pppuStack_270 = apppuStack_14c;
                              pppuStack_274 = (undefined4 ****)0x84dc47;
                              func_0x0046b1f0();
                              pppuStack_268 = extraout_ECX_09;
                            }
                            pppuStack_13c = (undefined4 ****)0x0;
                            pppuStack_138 = (undefined4 ***)&DAT_0000000f;
                            apppuStack_14c[0] =
                                 (undefined4 ***)((uint)apppuStack_14c[0] & 0xffffff00);
                            if (cStack_21 == '\0') {
                              iStack_8._0_1_ = 0xe;
                              pppuStack_268 = *ppppiVar4 + 0xb;
                              pppuStack_26c = (undefined4 ***)0x84dc93;
                              func_0x00469da0();
                              uStack_28 = 0x1000;
                              pppuStack_26c = (undefined4 ***)0x10;
                              pppuStack_278 = apppuStack_164;
                              if (&DAT_0000000f < pppuStack_150) {
                                pppuStack_278 = apppuStack_164[0];
                              }
                              pppuStack_270 = (undefined4 ***)0x11a0e1c;
                              pppuStack_274 = pppuStack_154;
                              pppuStack_27c = (undefined4 ****)0x84dcc3;
                              cStack_21 = func_0x0046cf20();
                              uStack_28 = 0;
                              iStack_8 = (uint)iStack_8._1_3_ << 8;
                              pppuStack_26c = pppuStack_150;
                              if (&DAT_0000000f < pppuStack_150) {
                                pppuStack_270 = apppuStack_164[0];
                                pppuStack_274 = apppuStack_164;
                                pppuStack_278 = (undefined4 ****)0x84dcf4;
                                func_0x0046b1f0();
                                pppuStack_26c = extraout_ECX_10;
                              }
                              pppuStack_154 = (undefined4 ****)0x0;
                              pppuStack_150 = (undefined4 ***)&DAT_0000000f;
                              apppuStack_164[0] =
                                   (undefined4 ***)((uint)apppuStack_164[0] & 0xffffff00);
                              if (cStack_21 == '\0') {
                                iStack_8._0_1_ = 0xf;
                                pppuStack_26c = *ppppiVar4 + 0xb;
                                pppuStack_270 = (undefined4 ***)0x84dd40;
                                func_0x00469da0();
                                uStack_28 = 0x2000;
                                pppuStack_270 = (undefined4 ****)0xb;
                                pppuStack_27c = apppuStack_17c;
                                if (&DAT_0000000f < pppuStack_168) {
                                  pppuStack_27c = apppuStack_17c[0];
                                }
                                pppuStack_274 = (undefined4 ***)0x11a0df0;
                                pppuStack_278 = pppuStack_16c;
                                pppuStack_280 = (undefined4 ****)0x84dd70;
                                cStack_21 = func_0x0046cf20();
                                uStack_28 = 0;
                                iStack_8._0_1_ = 0;
                                if (&DAT_0000000f < pppuStack_168) {
                                  pppuStack_270 = pppuStack_168;
                                  pppuStack_274 = apppuStack_17c[0];
                                  pppuStack_278 = apppuStack_17c;
                                  pppuStack_27c = (undefined4 ****)0x84dda1;
                                  func_0x0046b1f0();
                                }
                                pppuStack_16c = (undefined4 ****)0x0;
                                pppuStack_168 = (undefined4 ***)&DAT_0000000f;
                                apppuStack_17c[0] =
                                     (undefined4 ***)((uint)apppuStack_17c[0] & 0xffffff00);
                                if (cStack_21 == '\0') {
                                  iStack_8._0_1_ = 0x11;
                                  pppuStack_270 = *ppppiVar4 + 0xb;
                                  pppuStack_274 = (undefined4 ***)0x84de02;
                                  func_0x00469da0();
                                  uStack_28 = 0x4000;
                                  pppuStack_274 = (undefined4 ***)0x11;
                                  pppuStack_280 = apppuStack_194;
                                  if (&DAT_0000000f < pppuStack_180) {
                                    pppuStack_280 = apppuStack_194[0];
                                  }
                                  pppuStack_278 = (undefined4 ***)0x11a0dfc;
                                  pppuStack_27c = pppuStack_184;
                                  pppuStack_284 = (undefined4 ****)0x84de32;
                                  cStack_21 = func_0x0046cf20();
                                  uStack_28 = 0;
                                  iStack_8 = (uint)iStack_8._1_3_ << 8;
                                  pppuStack_274 = pppuStack_180;
                                  if (&DAT_0000000f < pppuStack_180) {
                                    pppuStack_278 = apppuStack_194[0];
                                    pppuStack_27c = apppuStack_194;
                                    pppuStack_280 = (undefined4 ****)0x84de63;
                                    func_0x0046b1f0();
                                    pppuStack_274 = extraout_ECX_11;
                                  }
                                  pppuStack_184 = (undefined4 ****)0x0;
                                  pppuStack_180 = (undefined4 ***)&DAT_0000000f;
                                  apppuStack_194[0] =
                                       (undefined4 ***)((uint)apppuStack_194[0] & 0xffffff00);
                                  if (cStack_21 == '\0') {
                                    iStack_8._0_1_ = 0x12;
                                    pppuStack_274 = *ppppiVar4 + 0xb;
                                    pppuStack_278 = (undefined4 ***)0x84ded3;
                                    func_0x00469da0();
                                    uStack_28 = 0x8000;
                                    pppuStack_278 = (undefined4 ****)0x11;
                                    pppuStack_284 = apppuStack_1ac;
                                    if (&DAT_0000000f < pppuStack_198) {
                                      pppuStack_284 = apppuStack_1ac[0];
                                    }
                                    pppuStack_27c = (undefined4 ***)0x11a0e44;
                                    pppuStack_280 = pppuStack_19c;
                                    pppiStack_288 = (int ***)0x84df03;
                                    cStack_21 = func_0x0046cf20();
                                    uStack_28 = 0;
                                    iStack_8._0_1_ = 0;
                                    if (&DAT_0000000f < pppuStack_198) {
                                      pppuStack_278 = pppuStack_198;
                                      pppuStack_27c = apppuStack_1ac[0];
                                      pppuStack_280 = apppuStack_1ac;
                                      pppuStack_284 = (undefined4 ****)0x84df34;
                                      func_0x0046b1f0();
                                    }
                                    pppuStack_19c = (undefined4 ****)0x0;
                                    pppuStack_198 = (undefined4 ***)&DAT_0000000f;
                                    apppuStack_1ac[0] =
                                         (undefined4 ***)((uint)apppuStack_1ac[0] & 0xffffff00);
                                    if (cStack_21 == '\0') {
                                      iStack_8._0_1_ = 0x14;
                                      pppuStack_278 = *ppppiVar4 + 0xb;
                                      pppuStack_27c = (undefined4 ***)0x84df9c;
                                      func_0x00469da0();
                                      uStack_28 = 0x10000;
                                      pppuStack_27c = (undefined4 ***)&DAT_00000010;
                                      pppiStack_288 = (int ***)apppiStack_1c4;
                                      if ((int ***)0xf < ppiStack_1b0) {
                                        pppiStack_288 = apppiStack_1c4[0];
                                      }
                                      pppuStack_280 = (undefined4 ***)0x11a0e58;
                                      pppuStack_284 = pppuStack_1b4;
                                      puStack_28c = (undefined1 *)0x84dfcc;
                                      cStack_21 = func_0x0046cf20();
                                      uStack_28 = 0;
                                      iStack_8 = (uint)iStack_8._1_3_ << 8;
                                      if ((int ***)0xf < ppiStack_1b0) {
                                        pppiStack_238 = (int ***)ppiStack_1b0;
                                        pppiStack_23c = apppiStack_1c4[0];
                                        pppiStack_240 = (int ***)apppiStack_1c4;
                                        pppiStack_244 = (int ***)0x84dffd;
                                        func_0x0046b1f0();
                                      }
                                      pppuStack_1b4 = (undefined4 ****)0x0;
                                      ppiStack_1b0 = (int **)0xf;
                                      apppiStack_1c4[0] =
                                           (int ***)((uint)apppiStack_1c4[0] & 0xffffff00);
                                      if (cStack_21 != '\0') {
                                        pppiStack_23c = (int ***)apppiStack_1e4;
                                        pppiStack_238 = (int ***)0x0;
                                        pppiStack_240 = (int ***)0x84e032;
                                        pppiStack_238 = (int ***)func_0x005ba8a0();
                                        iStack_8._0_1_ = 0x15;
                                        pppiStack_23c = (int ***)0x84e03e;
                                        FUN_0084eef0();
                                        iStack_8 = (uint)iStack_8._1_3_ << 8;
                                        if ((int ***)0xf < ppiStack_1d0) {
                                          pppiStack_238 = (int ***)ppiStack_1d0;
                                          pppiStack_23c = apppiStack_1e4[0];
                                          pppiStack_240 = (int ***)apppiStack_1e4;
                                          pppiStack_244 = (int ***)0x84e060;
                                          func_0x0046b1f0();
                                        }
                                        uStack_1d4 = 0;
                                        ppiStack_1d0 = (int **)0xf;
                                        apppiStack_1e4[0] =
                                             (int ***)((uint)apppiStack_1e4[0] & 0xffffff00);
                                      }
                                    }
                                    else {
                                      puStack_1f0 = (undefined1 *)&puStack_28c;
                                      func_0x005ba8a0(&puStack_28c,0);
                                      iStack_8 = (uint)iStack_8._1_3_ << 8;
                                      uVar2 = func_0x0084f540();
                                      *(undefined4 *)(param_1 + 0x498) = uVar2;
                                    }
                                  }
                                  else {
                                    pppuStack_278 = appuStack_220;
                                    pppuStack_27c = (undefined4 ****)0x84de98;
                                    puVar3 = (undefined4 *)func_0x005d33b0();
                                    *(undefined4 *)(param_1 + 0x488) = *puVar3;
                                    *(undefined4 *)(param_1 + 0x48c) = puVar3[1];
                                    *(undefined4 *)(param_1 + 0x490) = puVar3[2];
                                    *(undefined4 *)(param_1 + 0x494) = puVar3[3];
                                  }
                                }
                                else {
                                  puStack_1ec = (undefined1 *)&pppuStack_284;
                                  puStack_28c = (undefined1 *)&pppuStack_284;
                                  pppiStack_288 = (int ***)0x0;
                                  func_0x005ba8a0();
                                  iStack_8 = (uint)iStack_8._1_3_ << 8;
                                  pppuStack_250 = (undefined4 ****)0x84ddea;
                                  FUN_00781800();
                                }
                              }
                              else {
                                pppuStack_270 = (undefined4 ****)0x84dd22;
                                uVar1 = func_0x005bee00();
                                *(undefined1 *)(param_1 + 0x3fe) = uVar1;
                              }
                            }
                            else {
                              pppuStack_26c = (undefined4 ****)0x84dc75;
                              uVar1 = func_0x005bee00();
                              *(undefined1 *)(param_1 + 0x3fd) = uVar1;
                            }
                          }
                          else {
                            pppuStack_268 = (undefined4 ****)0x84dbc8;
                            uVar1 = func_0x005bee00();
                            *(undefined1 *)(param_1 + 0x3dc) = uVar1;
                          }
                        }
                        else {
                          pppiStack_264 = (int ***)&pppiStack_1cc;
                          pppuStack_268 = (undefined4 ****)0x84db0e;
                          func_0x00775820();
                          pppiStack_238 = (int ***)ppiStack_1c8;
                          pppiStack_23c = pppiStack_1cc;
                          pppiStack_240 = (int ***)0x84db21;
                          FUN_0084c070();
                        }
                      }
                      else {
                        pppiStack_260 = appuStack_210;
                        pppiStack_264 = (int ***)0x84da3d;
                        puVar3 = (undefined4 *)func_0x005d33b0();
                        *(undefined4 *)(param_1 + 0x41c) = *puVar3;
                        *(undefined4 *)(param_1 + 0x420) = puVar3[1];
                        *(undefined4 *)(param_1 + 0x424) = puVar3[2];
                        *(undefined4 *)(param_1 + 0x428) = puVar3[3];
                      }
                    }
                    else {
                      pppiStack_25c = appuStack_200;
                      pppiStack_260 = (int ***)0x84d96c;
                      puVar3 = (undefined4 *)func_0x005d33b0();
                      *(undefined4 *)(param_1 + 0x40c) = *puVar3;
                      *(undefined4 *)(param_1 + 0x410) = puVar3[1];
                      *(undefined4 *)(param_1 + 0x414) = puVar3[2];
                      *(undefined4 *)(param_1 + 0x418) = puVar3[3];
                    }
                  }
                  else {
                    pppuStack_258 = (undefined4 ****)0x84d8b8;
                    uVar1 = func_0x005bee00();
                    *(undefined1 *)(param_1 + 0x3ff) = uVar1;
                  }
                }
                else {
                  pppuStack_254 = (undefined4 ****)0x84d811;
                  uVar1 = func_0x005bee00();
                  *(undefined1 *)(param_1 + 0x3dd) = uVar1;
                }
              }
              else {
                pppuStack_250 = (undefined4 ****)0x84d76a;
                uVar2 = func_0x005cc550();
                *(undefined4 *)(param_1 + 0x3f8) = uVar2;
              }
            }
            else {
              pppuStack_24c = (undefined4 ****)0x84d6c3;
              uVar1 = func_0x005bee00();
              *(undefined1 *)(param_1 + 0x3da) = uVar1;
            }
          }
          else {
            pppiStack_248 = (int ***)0x84d62b;
            uVar1 = func_0x005bee00();
            *(undefined1 *)(param_1 + 0x3d9) = uVar1;
          }
        }
        else {
          pppiStack_244 = (int ***)0x84d59b;
          func_0x005bee00();
          pppiStack_244 = (int ***)0x1;
          *(undefined1 *)(param_1 + 0x3d8) = 1;
          pppiStack_248 = (int ***)0x84d5ab;
          func_0x0084b7d0();
        }
      }
      else {
        pppiStack_23c = (int ***)0x0;
        puStack_1e8 = (undefined1 *)&pppuStack_254;
        pppiStack_25c = (int ***)&pppuStack_254;
        pppuStack_258 = (undefined4 ****)0x0;
        pppiStack_260 = (int ***)0x84d4eb;
        func_0x005ba8a0();
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        pppuStack_254 = (undefined4 ****)0x84d4fa;
        FUN_0086b520();
        if (*(int *)(param_1 + 0x308) != *(int *)(param_1 + 0x3b0)) {
          pppiStack_238 = (int ***)0x1;
          *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x308);
          pppiStack_23c = (int ***)0x84d51b;
          func_0x0084b7d0();
        }
      }
      ppppiVar4 = ppppiVar4 + 2;
    } while (ppppiVar4 != (int ****)pppiStack_2c);
  }
  iStack_8 = 0xffffffff;
  if ((int ****)pppiStack_20 != (int ****)0x0) {
    pppiStack_238 = pppiStack_20;
    pppiStack_23c = (int ***)0x84e0a1;
    func_0x00485920();
    pppiStack_238 = (int ***)(iStack_18 - (int)pppiStack_20 >> 3);
    pppiStack_23c = pppiStack_20;
    pppiStack_240 = (int ***)0x84e0b6;
    func_0x0046e710();
    pppiStack_20 = (int ***)0x0;
    pppiStack_1c = (int ***)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0084e0f0(undefined4 param_1,undefined4 param_2)

{
  func_0x0084b7d0(1);
  FUN_0085bb70(param_1,param_2);
  return;
}



void __thiscall FUN_0084e120(int param_1,char param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  uint auStack_48 [6];
  undefined8 uStack_30;
  char acStack_28 [4];
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f3655d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (param_2 == '\0') {
    puVar2 = &stack0xfffffffc;
    if (*(char *)(param_1 + 0x3ff) != '\0') {
      FUN_007818e0(uStack_24);
      puVar2 = puStack_20;
    }
  }
  else {
    if (param_3 == 1) {
      if (*(int *)(param_1 + 0x308) != *(int *)(param_1 + 0x3b0)) {
        *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x308);
        puStack_20 = &stack0xfffffffc;
        func_0x0084b7d0(1);
        func_0x0084b7d0(1);
        puVar2 = puStack_20;
        goto LAB_0084e1cf;
      }
    }
    else {
      uStack_30 = DAT_0145db28;
      uVar1 = uStack_30;
      uStack_30._0_4_ = (undefined4)DAT_0145db28;
      uStack_30._4_4_ = (undefined4)((ulonglong)DAT_0145db28 >> 0x20);
      *(undefined4 *)(param_1 + 0x3d0) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x3d4) = uStack_30._4_4_;
      uStack_30 = uVar1;
    }
    puStack_20 = &stack0xfffffffc;
    func_0x0084b7d0(1);
    puVar2 = puStack_20;
  }
LAB_0084e1cf:
  puStack_20 = puVar2;
  uStack_30 = CONCAT44(param_3,(undefined4)uStack_30);
  acStack_28[0] = param_2;
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  auStack_48[2] = 0;
  auStack_48[3] = 0;
  auStack_48[4] = 0;
  auStack_48[5] = 0;
  func_0x0046bc40("onFocusChange",0xd);
  uStack_14 = 0;
  uVar3 = func_0x00860250(auStack_48,acStack_28,(int)&uStack_30 + 4);
  if (0 < (int)uVar3) {
    func_0x00d66d90(DAT_0145e9f0,~uVar3);
  }
  uStack_14 = 0xffffffff;
  if (0xf < auStack_48[5]) {
    func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
  }
  auStack_48[4] = 0;
  auStack_48[5] = 0xf;
  auStack_48[0] = auStack_48[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0084e280(int param_1,char param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint *puStack_6c;
  uint uStack_68;
  uint *puStack_64;
  uint *puStack_60;
  char *pcStack_5c;
  int iStack_58;
  uint *puStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint auStack_3c [7];
  undefined8 uStack_20;
  char acStack_18 [4];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f365bd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_48 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  auStack_3c[6] = param_4;
  uStack_4c = 10;
  pcStack_50 = "onKeyPress";
  uStack_20 = CONCAT44(param_3,(int)uStack_20);
  acStack_18[0] = param_2;
  auStack_3c[0] = 0;
  auStack_3c[1] = 0;
  auStack_3c[2] = 0;
  auStack_3c[3] = 0;
  auStack_3c[4] = 0;
  auStack_3c[5] = 0;
  puStack_54 = (uint *)0x84e2e2;
  uStack_14 = uStack_48;
  func_0x0046bc40();
  uStack_8 = 0;
  puStack_54 = auStack_3c + 6;
  iStack_58 = (int)&uStack_20 + 4;
  pcStack_5c = acStack_18;
  puStack_60 = auStack_3c;
  puStack_64 = (uint *)0x84e300;
  iVar3 = func_0x004b0730();
  if (iVar3 < 1) {
    acStack_18[0] = '\0';
    uVar5 = extraout_ECX;
  }
  else {
    puStack_64 = (uint *)0xffffffff;
    uStack_68 = DAT_0145e9f0;
    puStack_6c = (uint *)0x84e311;
    iVar3 = func_0x00d66e90();
    acStack_18[0] = iVar3 != 0;
    puStack_6c = (uint *)0xfffffffe;
    uStack_70 = DAT_0145e9f0;
    uStack_74 = 0x84e324;
    func_0x00d66d90();
    uVar5 = extraout_ECX_00;
  }
  uStack_8 = 0xffffffff;
  if (0xf < auStack_3c[5]) {
    puStack_64 = (uint *)auStack_3c[5];
    uStack_68 = auStack_3c[0];
    puStack_6c = auStack_3c;
    uStack_70 = 0x84e349;
    func_0x0046b1f0();
    uVar5 = extraout_ECX_01;
  }
  auStack_3c[4] = 0;
  auStack_3c[5] = 0xf;
  auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  if (acStack_18[0] != '\0') goto LAB_0084e52e;
  if (param_3 == 0) {
    if (param_2 == '\a') {
      if ((*(char *)(param_1 + 0x3dd) != '\0') &&
         ((*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
           -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404) ||
          (*(int *)(param_1 + 0x308) != 0)))) {
        puStack_64 = (uint *)0x1;
        uStack_68 = 0x84e3a9;
        FUN_0084c830();
      }
      goto LAB_0084e52e;
    }
    if (param_2 == '\x03') {
      if ((*(char *)(param_1 + 0x3dd) != '\0') &&
         ((*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
           -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404) ||
          (*(int *)(param_1 + 0x308) != 0)))) {
        puStack_64 = (uint *)0x0;
        uStack_68 = 0x84e3e5;
        FUN_0084c830();
      }
      goto LAB_0084e52e;
    }
    if (param_2 == '\x11') {
      if (*(char *)(param_1 + 0x3d9) == '\0') {
        puStack_64 = (uint *)0x84e402;
        FUN_007818e0();
        puStack_64 = (uint *)0x1;
        uStack_68 = 0x84e40b;
        FUN_0084ccf0();
      }
      goto LAB_0084e52e;
    }
    if (param_2 == '\x10') {
      if (*(char *)(param_1 + 0x3d9) == '\0') {
        puStack_64 = (uint *)0x84e428;
        FUN_007818e0();
        puStack_64 = (uint *)0x0;
        uStack_68 = 0x84e431;
        FUN_0084ccf0();
      }
      goto LAB_0084e52e;
    }
    if (param_2 == '\n') {
      if (*(int *)(param_1 + 0x3b0) == 0) goto LAB_0084e52e;
      puStack_64 = (uint *)0x84e44e;
      FUN_007818e0();
      if (*(int *)(param_1 + 0x3b0) == 0) goto LAB_0084e52e;
      goto LAB_0084e7b2;
    }
    if (param_2 == '\v') {
      if (*(int *)(param_1 + 0x3b0) != *(int *)(param_1 + 0x308)) {
        puStack_64 = (uint *)0x84e47d;
        FUN_007818e0();
        puStack_64 = *(uint **)(param_1 + 0x308);
        uStack_68 = 0x84e48a;
        FUN_0084c030();
      }
      goto LAB_0084e52e;
    }
    if (param_2 != '\x02') {
      if (param_2 == '\x05') {
        if ((*(char *)(param_1 + 0x3da) != '\0') && (*(char *)(param_1 + 0x3dd) != '\0')) {
          uStack_68 = 0x84e571;
          puStack_64 = (uint *)uVar5;
          func_0x0084c550();
        }
      }
      else if (param_2 == '\x0e') {
        if ((*(char *)(param_1 + 0x3d9) == '\0') && (*(char *)(param_1 + 0x3da) != '\0')) {
          puStack_64 = (uint *)0x1;
          uStack_68 = 0x84e59a;
          FUN_0084cd60();
        }
      }
      else if (((param_2 == '\x0f') && (*(char *)(param_1 + 0x3d9) == '\0')) &&
              (*(char *)(param_1 + 0x3da) != '\0')) {
        puStack_64 = (uint *)0x0;
        uStack_68 = 0x84e5c7;
        FUN_0084cd60();
      }
      goto LAB_0084e52e;
    }
    if (*(char *)(param_1 + 0x3d9) != '\0') goto LAB_0084e52e;
    if (*(char *)(param_1 + 0x3da) != '\0') {
      uStack_20 = CONCAT44(&uStack_78,(int)uStack_20);
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      puStack_6c = (uint *)0x0;
      uStack_68 = 0;
      puStack_64 = (uint *)0x0;
      func_0x0046bc40(&DAT_0119c998,2);
      uStack_8 = 0xffffffff;
      FUN_0084c130();
      goto LAB_0084e52e;
    }
    puStack_64 = (uint *)0x84e4f3;
    FUN_007818e0();
    puStack_64 = (uint *)&uStack_20;
    uStack_20 = 0;
    uStack_68 = 0x84e506;
    FUN_0077fac0();
    uStack_8 = 4;
    if ((int)uStack_20 != 0) {
      puStack_64 = (uint *)0x1;
      uStack_68 = 1;
      puStack_6c = (uint *)0x84e51d;
      FUN_008539a0();
    }
LAB_0084e51d:
    uStack_8 = 0xffffffff;
    puStack_64 = (uint *)0x84e52c;
    FUN_00468340();
    goto LAB_0084e52e;
  }
  if (param_3 == 1) {
    if (param_2 == 'V') {
      if (*(char *)(param_1 + 0x3dd) != '\0') {
        pcVar1 = *(code **)(DAT_0145ea60 + 0x58);
        puStack_64 = auStack_3c;
        uStack_68 = 0x84e5fd;
        _guard_check_icall();
        uStack_68 = 0x84e604;
        puStack_64 = (uint *)(*pcVar1)();
        uStack_8 = 5;
        uStack_68 = 0x84e613;
        FUN_0084c990();
        uStack_8 = 0xffffffff;
        puStack_64 = (uint *)0x84e622;
        FUN_00469ba0();
      }
    }
    else if (param_2 == 'X') {
      if (((*(char *)(param_1 + 0x3dd) != '\0') && (*(char *)(param_1 + 0x3ff) != '\0')) &&
         (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
          -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404))) {
        puStack_64 = auStack_3c;
        uStack_68 = 0x84e664;
        FUN_0084cb70();
        puStack_64 = (uint *)0x84e66c;
        FUN_00469ba0();
      }
    }
    else if (param_2 == 'C') {
      if ((*(char *)(param_1 + 0x3ff) != '\0') &&
         (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x404) &&
          -1 < *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404))) {
        puStack_64 = auStack_3c;
        uStack_68 = 0x84e6a1;
        FUN_0084ca10();
        puStack_64 = (uint *)0x84e6a9;
        FUN_00469ba0();
      }
    }
    else if (((param_2 == 'A') && (*(char *)(param_1 + 0x3ff) != '\0')) &&
            (*(uint *)(param_1 + 0x308) != 0)) {
      uStack_68 = 0;
      puStack_6c = (uint *)0x84e6db;
      puStack_64 = (uint *)*(uint *)(param_1 + 0x308);
      FUN_0084c070();
    }
    goto LAB_0084e52e;
  }
  if (param_3 != 4) goto LAB_0084e52e;
  if (param_2 == '\x02') {
    if (*(char *)(param_1 + 0x3d9) != '\0') goto LAB_0084e52e;
    puStack_64 = (uint *)&uStack_20;
    uStack_20 = 0;
    uStack_68 = 0x84e710;
    FUN_0077fac0();
    uStack_8 = 6;
    if ((int)uStack_20 != 0) {
      puStack_64 = (uint *)0x1;
      uStack_68 = 1;
      puStack_6c = (uint *)0x84e72b;
      FUN_00853d70();
    }
    goto LAB_0084e51d;
  }
  if (((param_2 != '\x11') && (param_2 != '\x10')) &&
     (((param_2 != '\x0e' && (param_2 != '\x0f')) || (*(char *)(param_1 + 0x3da) == '\0')))) {
    if (param_2 != '\n') {
      if (param_2 == '\v') {
        if (*(int *)(param_1 + 0x3b0) != *(int *)(param_1 + 0x308)) {
          puStack_6c = (uint *)0x84e7f8;
          uStack_68 = *(int *)(param_1 + 0x3b0);
          puStack_64 = (uint *)*(int *)(param_1 + 0x308);
          FUN_0084c070();
          puStack_64 = *(uint **)(param_1 + 0x308);
          uStack_68 = 0x84e805;
          FUN_0084c030();
        }
      }
      goto LAB_0084e52e;
    }
    iVar3 = *(int *)(param_1 + 0x3b0);
    if (iVar3 == 0) goto LAB_0084e52e;
    if ((iVar3 != *(int *)(param_1 + 0x404)) || (*(int *)(param_1 + 0x408) != 0)) {
      iVar6 = iVar3;
      iVar7 = 0;
      if (0 < iVar3) {
        iVar6 = 0;
        iVar7 = iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x308);
      *(undefined1 *)(param_1 + 0x46c) = 1;
      if (iVar3 < iVar6) {
        iVar6 = iVar3;
      }
      iVar4 = 0;
      if (0 < iVar6) {
        iVar4 = iVar6;
      }
      *(int *)(param_1 + 0x404) = iVar4;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
      iVar3 = 0;
      if (0 < iVar7) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 0x408) = iVar3;
    }
LAB_0084e7b2:
    puStack_64 = (uint *)0x1;
    *(undefined4 *)(param_1 + 0x3b0) = 0;
    uStack_68 = 0x84e7ce;
    func_0x0084b7d0();
    goto LAB_0084e52e;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x3b0);
  if (param_2 == '\x11') {
    puStack_64 = (uint *)0x1;
    uStack_68 = 0x84e81d;
    FUN_0084ccf0();
LAB_0084e867:
    if (*(char *)(param_1 + 0x3d9) == '\0') {
      if (*(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404) < 1) {
        *(undefined4 *)(param_1 + 0x400) = uVar2;
      }
      iVar3 = *(int *)(param_1 + 0x400);
      iVar6 = *(int *)(param_1 + 0x3b0);
      if ((iVar3 != *(int *)(param_1 + 0x404)) || (iVar6 != *(int *)(param_1 + 0x408))) {
        iVar7 = iVar6;
        if (iVar6 < iVar3) {
          iVar7 = iVar3;
          iVar3 = iVar6;
        }
        if (iVar7 == -1) {
          iVar7 = *(int *)(param_1 + 0x308);
        }
        iVar6 = *(int *)(param_1 + 0x308);
        *(undefined1 *)(param_1 + 0x46c) = 1;
        if (iVar6 < iVar3) {
          iVar3 = iVar6;
        }
        iVar4 = 0;
        if (0 < iVar3) {
          iVar4 = iVar3;
        }
        *(int *)(param_1 + 0x404) = iVar4;
        if (iVar6 < iVar7) {
          iVar7 = iVar6;
        }
        iVar3 = 0;
        if (0 < iVar7) {
          iVar3 = iVar7;
        }
        *(int *)(param_1 + 0x408) = iVar3;
      }
      goto LAB_0084e52e;
    }
  }
  else {
    if (param_2 == '\x10') {
      puStack_64 = (uint *)0x0;
      uStack_68 = 0x84e82c;
      FUN_0084ccf0();
      goto LAB_0084e867;
    }
    if (param_2 != '\x0e') {
      if (param_2 == '\x0f') {
        if (*(char *)(param_1 + 0x3d9) != '\0') goto LAB_0084e870;
        if (*(char *)(param_1 + 0x3da) != '\0') {
          puStack_64 = (uint *)0x0;
          goto LAB_0084e860;
        }
      }
      goto LAB_0084e867;
    }
    if (*(char *)(param_1 + 0x3d9) == '\0') {
      if (*(char *)(param_1 + 0x3da) != '\0') {
        puStack_64 = (uint *)0x1;
LAB_0084e860:
        uStack_68 = 0x84e867;
        FUN_0084cd60();
      }
      goto LAB_0084e867;
    }
  }
LAB_0084e870:
  puStack_64 = (uint *)0x84e877;
  FUN_007818e0();
LAB_0084e52e:
  *unaff_FS_OFFSET = iStack_10;
  iStack_58 = 0x84e545;
  FUN_008ab370();
  return;
}



undefined1 * __thiscall FUN_0084e910(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [196];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_1c;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede2ad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x3dd) != '\0') {
    uStack_38 = param_2;
    uStack_3c = 0x84e94f;
    func_0x00469da0();
    uStack_8 = 0xffffffff;
    uStack_3c = 0x84e964;
    FUN_0084c130();
    *unaff_FS_OFFSET = iStack_10;
    return (undefined1 *)0x1;
  }
  *unaff_FS_OFFSET = iStack_10;
  return auStack_100;
}



undefined4 __thiscall FUN_0084e990(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0085c9a0(param_2,param_3);
  if (cVar1 == '\0') {
    if (param_3 != 1) {
      return 0;
    }
    iVar2 = FUN_0084cea0(*param_2,param_2[1]);
    if (-1 < iVar2) {
      FUN_0084c030(iVar2);
      if (*(char *)(param_1 + 0x3ff) != '\0') {
        *(int *)(param_1 + 0x400) = iVar2;
        FUN_0084c070(iVar2,iVar2);
      }
    }
  }
  return 1;
}



void FUN_0084ea10(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  uint auStack_34 [6];
  undefined1 uStack_19;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36605;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_18 = param_2;
  if (((param_2 == 4) || (param_2 == 5)) || (param_2 == 6)) {
    auStack_34[4] = 0;
    auStack_34[5] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    func_0x0046bc40("onTouchRelease",0xe,uStack_14);
    uStack_8 = 0;
    iVar1 = func_0x008619c0(auStack_34,param_1,&iStack_18);
    if (iVar1 < 1) {
      uStack_19 = 0;
    }
    else {
      iVar1 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
      uStack_19 = iVar1 != 0;
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
  }
  else {
    auStack_34[4] = 0;
    auStack_34[5] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    func_0x0046bc40("onMouseRelease",0xe,uStack_14);
    uStack_8 = 3;
    uStack_19 = func_0x0085eb60(auStack_34,param_1,&iStack_18);
  }
  uStack_8 = 0xffffffff;
  if (0xf < auStack_34[5]) {
    func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
  }
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  auStack_34[5] = 0xf;
  auStack_34[4] = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_0084eb50(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0085cce0(param_2,param_3);
  if (cVar1 == '\0') {
    if ((*(char *)(param_1 + 0x3ff) == '\0') || ((*(uint *)(param_1 + 0x108) >> 3 & 1) == 0)) {
      return 0;
    }
    iVar2 = FUN_0084cea0(*param_2,param_2[1]);
    if ((-1 < iVar2) && (*(int *)(param_1 + 0x400) != -1)) {
      FUN_0084c070(*(int *)(param_1 + 0x400),iVar2);
      FUN_0084c030(iVar2);
    }
  }
  return 1;
}



undefined4 __thiscall FUN_0084ebd0(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  uint auStack_44 [8];
  char cStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f3663d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  auStack_44[4] = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  auStack_44[5] = 0;
  auStack_44[7] = param_1;
  func_0x0046bc40("onDoubleClick",0xd,uVar1);
  uStack_14 = 0;
  iVar2 = func_0x00860c80(auStack_44,param_2);
  if (iVar2 < 1) {
    cStack_21 = '\0';
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    cStack_21 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_14 = 0xffffffff;
  if (0xf < auStack_44[5]) {
    func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
  }
  auStack_44[4] = 0;
  auStack_44[5] = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  if (cStack_21 == '\0') {
    iVar2 = FUN_0084cea0(*param_2,param_2[1]);
    if (((*(char *)(param_1 + 0x3ff) == '\0') || (iVar2 < 0)) ||
       (iVar6 = *(int *)(param_1 + 0x308), iVar6 == 0)) {
      uVar4 = 0;
      goto LAB_0084ee09;
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
    auStack_44[6] = 0;
    if (0 < iVar2) {
      do {
        if (iVar6 <= iVar3) break;
        uVar1 = *(uint *)(param_1 + 0x30c);
        puVar5 = (undefined4 *)(param_1 + 0x2f8);
        puVar7 = puVar5;
        if (0xf < uVar1) {
          puVar7 = (undefined4 *)*puVar5;
        }
        if (*(char *)((int)puVar7 + iVar3) == ' ') {
LAB_0084ed4b:
          auStack_44[6] = iVar3 + 1;
        }
        else {
          if (0xf < uVar1) {
            puVar5 = (undefined4 *)*puVar5;
          }
          if (*(char *)((int)puVar5 + iVar3) == '\t') goto LAB_0084ed4b;
          puVar5 = (undefined4 *)(auStack_44[7] + 0x2f8);
          if (0xf < uVar1) {
            puVar5 = (undefined4 *)*puVar5;
          }
          if (*(char *)((int)puVar5 + iVar3) == '\n') goto LAB_0084ed4b;
        }
        iVar6 = *(int *)(auStack_44[7] + 0x308);
        iVar3 = iVar3 + 1;
        param_1 = auStack_44[7];
      } while (iVar3 < iVar2);
    }
    iVar6 = *(int *)(param_1 + 0x308);
    iVar3 = iVar6;
    if (iVar2 < iVar6) {
      puVar5 = (undefined4 *)(param_1 + 0x2f8);
      while( true ) {
        puVar7 = puVar5;
        if (0xf < *(uint *)(param_1 + 0x30c)) {
          puVar7 = (undefined4 *)*puVar5;
        }
        iVar3 = iVar2;
        if (*(char *)((int)puVar7 + iVar2) == ' ') break;
        puVar7 = puVar5;
        if (0xf < *(uint *)(param_1 + 0x30c)) {
          puVar7 = (undefined4 *)*puVar5;
        }
        if (*(char *)((int)puVar7 + iVar2) == '\t') break;
        puVar7 = puVar5;
        if (0xf < *(uint *)(param_1 + 0x30c)) {
          puVar7 = (undefined4 *)*puVar5;
        }
        if ((*(char *)((int)puVar7 + iVar2) == '\n') ||
           (iVar2 = iVar2 + 1, iVar3 = iVar6, iVar6 <= iVar2)) break;
      }
    }
    if ((auStack_44[6] != *(int *)(param_1 + 0x404)) || (iVar3 != *(int *)(param_1 + 0x408))) {
      uVar1 = iVar3;
      if (iVar3 < (int)auStack_44[6]) {
        uVar1 = auStack_44[6];
        auStack_44[6] = iVar3;
      }
      if (uVar1 == -1) {
        uVar1 = *(int *)(param_1 + 0x308);
        iVar6 = uVar1;
      }
      *(undefined1 *)(param_1 + 0x46c) = 1;
      if (iVar6 < (int)auStack_44[6]) {
        auStack_44[6] = iVar6;
      }
      iVar2 = 0;
      if (0 < (int)auStack_44[6]) {
        iVar2 = auStack_44[6];
      }
      *(int *)(param_1 + 0x404) = iVar2;
      if (iVar6 < (int)uVar1) {
        uVar1 = iVar6;
      }
      iVar2 = 0;
      if (0 < (int)uVar1) {
        iVar2 = uVar1;
      }
      *(int *)(param_1 + 0x408) = iVar2;
    }
  }
  uVar4 = 1;
LAB_0084ee09:
  *unaff_FS_OFFSET = iStack_1c;
  return uVar4;
}



void FUN_0084ee30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onTextAreaUpdate",0x10,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x0084f1f0(&uStack_28,param_1,param_2,param_3);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int FUN_0084eef0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar5 = func_0x0061cc30(auStack_18,param_1,uVar4);
  uStack_8 = 0;
  iVar6 = func_0x0046ffa0(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_14 != (int *)0x0) {
    LOCK();
    piVar1 = piStack_14 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piStack_14;
      _guard_check_icall();
      iVar6 = (*pcVar3)();
      LOCK();
      piVar1 = piStack_14 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piStack_14 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



void FUN_00850b30(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 ***pppuVar4;
  uint extraout_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece116;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  uStack_14 = uVar3;
  FUN_008416d0(param_1);
  func_0x0080ff70(&piStack_20,uVar3);
  iStack_8 = 0;
  piStack_2c = piStack_1c;
  piVar5 = piStack_20;
  if (piStack_20 != piStack_1c) {
    do {
      iStack_8._0_1_ = 1;
      func_0x00469da0(*piVar5 + 0x2c);
      uStack_24 = 1;
      pppuVar4 = appuStack_44;
      if (0xf < uStack_30) {
        pppuVar4 = (undefined4 ***)appuStack_44[0];
      }
      cVar1 = func_0x0046cf20(pppuVar4,uStack_34,"align-bottom",0xc);
      uStack_24 = 0;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      uVar3 = uStack_30;
      if (0xf < uStack_30) {
        func_0x0046b1f0(appuStack_44,appuStack_44[0],uStack_30);
        uVar3 = extraout_ECX;
      }
      uStack_34 = 0;
      uStack_30 = 0xf;
      appuStack_44[0] = (undefined4 **)((uint)appuStack_44[0] & 0xffffff00);
      if (cVar1 != '\0') {
        uVar2 = func_0x005bee00(uVar3);
        *(undefined1 *)(iStack_28 + 0x28) = uVar2;
        FUN_008439e0();
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piStack_2c);
  }
  iStack_8 = 0xffffffff;
  if (piStack_20 != (int *)0x0) {
    func_0x00485920(piStack_20);
    func_0x0046e710(piStack_20,iStack_18 - (int)piStack_20 >> 3);
    piStack_20 = (int *)0x0;
    piStack_1c = (int *)0x0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00850c80(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  undefined ***pppuVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [24];
  undefined4 uStack_e8;
  undefined ****ppppuStack_e4;
  undefined4 uStack_e0;
  undefined ***pppuStack_dc;
  undefined ****ppppuStack_d8;
  undefined ****ppppuStack_d4;
  undefined4 ***pppuStack_d0;
  uint uStack_cc;
  undefined **ppuStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined ***pppuStack_98;
  undefined ***pppuStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined ***pppuStack_7c;
  undefined **ppuStack_78;
  int *piStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  undefined ***pppuStack_5c;
  int *piStack_58;
  undefined ***pppuStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined ***pppuStack_3c;
  undefined ***pppuStack_38;
  undefined1 *puStack_34;
  undefined ****ppppuStack_30;
  int iStack_2c;
  int iStack_28;
  undefined ***pppuStack_24;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3681c;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_cc = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_34 = auStack_100;
  pppuStack_d0 = (undefined4 ***)&uStack_1c;
  uStack_1c = 0;
  ppppuStack_d4 = (undefined ****)0x850cc8;
  iStack_4c = param_1;
  uStack_14 = uStack_cc;
  FUN_0046e7a0();
  uStack_8 = 0;
  if ((int)uStack_1c == 0) {
    puStack_34 = (undefined1 *)0x0;
  }
  else {
    pppuStack_d0 = &ppppuStack_30;
    iStack_20 = 0;
    ppppuStack_30 = (undefined ****)0x0;
    iStack_2c = 0;
    iStack_28 = 0;
    pppuStack_24 = (undefined ***)0x0;
    ppppuStack_d4 = (undefined ****)0x850cfa;
    FUN_0077fbc0();
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (*(char *)(param_1 + 0x28) != '\0') {
      pppuStack_d0 = (undefined4 ***)((int)pppuStack_24 + iStack_20);
      ppppuStack_d4 = (undefined ****)0x0;
      ppppuStack_d8 = ppppuStack_30;
      uStack_e0 = 0;
      pppuStack_dc = pppuStack_24;
      ppppuStack_e4 = ppppuStack_30;
      uStack_e8 = 0x850d46;
      func_0x008437e0();
    }
    iStack_50 = (int)uStack_1c;
    iStack_44 = *(int *)((int)uStack_1c + 0x48) - *(int *)((int)uStack_1c + 0x1f8);
    iVar9 = *(int *)((int)uStack_1c + 0x200) + *(int *)((int)uStack_1c + 0x40);
    pppuStack_7c = (undefined ***)(*(int *)((int)uStack_1c + 0x44) + *(int *)((int)uStack_1c + 500))
    ;
    pppuStack_54 = (undefined ***)
                   (*(int *)((int)uStack_1c + 0x4c) - *(int *)((int)uStack_1c + 0x1fc));
    pppuVar5 = pppuStack_7c;
    if (*(char *)(iStack_4c + 0x28) != '\0') {
      pppuVar5 = pppuStack_38;
      pppuStack_38 = pppuStack_54;
    }
    pppuStack_5c = pppuStack_24;
    pppuStack_3c = pppuStack_38;
    if (*(char *)(iStack_4c + 0x28) == '\0') {
      pppuStack_3c = pppuVar5;
    }
    pppuStack_38 = (undefined ***)(iStack_20 + (int)pppuStack_24);
    iStack_40 = 0;
    iVar7 = (int)uStack_1c;
    iStack_48 = iVar9;
    if (pppuStack_24 != pppuStack_38) {
      do {
        piStack_58 = (int *)(*(int *)(iStack_2c + ((uint)pppuStack_5c >> 1 & iStack_28 - 1U) * 4) +
                            ((uint)pppuStack_5c & 1) * 8);
        iVar6 = *piStack_58;
        if (*(char *)(iVar6 + 0x6a) != '\0') {
          if ((*(int *)(iVar6 + 0x50) == 0) && (*(int *)(iVar6 + 0x54) == 0)) {
            iVar9 = iStack_44 - iStack_48;
          }
          else {
            iVar9 = iStack_44 - iVar9;
            piStack_74 = (int *)((int)pppuStack_54 + (1 - (int)pppuStack_7c));
            ppuStack_78 = (undefined **)(iVar9 + 1);
            pppuStack_d0 = (undefined4 ***)&ppuStack_78;
            ppppuStack_d4 = (undefined ****)0x850e17;
            func_0x0085e3b0();
            iStack_50 = (int)uStack_1c;
          }
          iVar7 = *piStack_58;
          piStack_60 = (int *)(*(int *)(iVar7 + 0x4c) - *(int *)(iVar7 + 0x44));
          iStack_68 = (*(int *)(iVar7 + 0x48) - *(int *)(iVar7 + 0x40)) + 1;
          if (*(char *)(iStack_4c + 0x28) == '\0') {
            iVar6 = *(int *)(iVar7 + 0x1e4);
          }
          else {
            iVar6 = ((*(int *)(iVar7 + 0x44) - *(int *)(iVar7 + 0x1ec)) - *(int *)(iVar7 + 0x4c)) +
                    -1;
          }
          pppuStack_3c = (undefined ***)((int)pppuStack_3c + iVar6);
          iStack_40 = iStack_40 + iVar6;
          if (*(char *)(iVar7 + 0x6c) == '\0') {
            iStack_68 = (((iStack_44 - *(int *)(iVar7 + 0x1e8)) - *(int *)(iVar7 + 0x1f0)) -
                        iStack_48) + 1;
            iStack_70 = ((iVar9 - iStack_68) + 1) / 2 + iStack_48;
          }
          else if ((*(byte *)(iVar7 + 0x328) & 1) == 0) {
            iVar9 = ((((iStack_44 - *(int *)(iVar7 + 0x1e8)) - *(int *)(iVar7 + 0x1f0)) -
                     *(int *)(iVar7 + 0x48)) - iStack_48) + *(int *)(iVar7 + 0x40);
            if (iVar9 < 0) {
              iVar9 = iVar9 + 1;
            }
            iStack_70 = (iVar9 >> 1) + iStack_48;
            if (iStack_70 < iStack_48) {
              iStack_70 = iStack_48;
            }
          }
          else {
            iStack_70 = *(int *)(iVar7 + 0x1f0) + iStack_48;
          }
          iStack_70 = iStack_70 - *(int *)(iStack_50 + 0x60);
          iStack_6c = (int)pppuStack_3c - *(int *)(iStack_50 + 100);
          iStack_68 = iStack_70 + -1 + iStack_68;
          iStack_64 = (int)piStack_60 + iStack_6c;
          pppuStack_d0 = (undefined4 ***)&iStack_70;
          ppppuStack_d4 = (undefined ****)0x850ee1;
          cVar4 = FUN_00857930();
          puStack_34 = (undefined1 *)((uint)puStack_34 & 0xff);
          if (cVar4 != '\0') {
            puStack_34 = (undefined1 *)0x1;
          }
          iVar9 = *piStack_58;
          if (*(char *)(iStack_4c + 0x28) == '\0') {
            iVar7 = (*(int *)(iVar9 + 0x1ec) - *(int *)(iVar9 + 0x44)) + *(int *)(iVar9 + 0x4c) + 1;
            iVar9 = *(int *)(iStack_4c + 0x24);
          }
          else {
            iVar7 = -*(int *)(iVar9 + 0x1e4);
            uVar8 = (int)*(uint *)(iStack_4c + 0x24) >> 0x1f;
            iVar9 = -((*(uint *)(iStack_4c + 0x24) ^ uVar8) - uVar8);
          }
          pppuStack_3c = (undefined ***)((int)pppuStack_3c + iVar7 + iVar9);
          iStack_40 = iStack_40 + iVar7 + iVar9;
          iStack_50 = (int)uStack_1c;
          iVar7 = (int)uStack_1c;
          iVar9 = iStack_48;
        }
        pppuStack_5c = (undefined ***)((int)pppuStack_5c + 1);
      } while (pppuStack_5c != pppuStack_38);
    }
    iVar9 = iStack_40 +
            ((*(int *)(iVar7 + 0x1fc) + *(int *)(iVar7 + 500)) - *(int *)(iStack_4c + 0x24));
    if ((*(char *)(iStack_4c + 0x20) != '\0') &&
       (iVar9 != (*(int *)(iVar7 + 0x4c) - *(int *)(iVar7 + 0x44)) + 1)) {
      iStack_b8 = iVar7;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
        UNLOCK();
        iStack_b8 = (int)uStack_1c;
      }
      pppuStack_38 = &ppuStack_bc;
      piStack_60 = &iStack_b8;
      ppuStack_bc = std::_Func_impl_no_alloc<>::vftable;
      iStack_b4 = (int)uStack_1c._4_4_;
      iStack_6c = 0;
      iStack_68 = 0;
      uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
      pppuStack_98 = &ppuStack_bc;
      uStack_8._0_1_ = 7;
      pppuStack_d0 = (undefined4 ***)0x20;
      ppppuStack_d4 = (undefined ****)0x11a0f58;
      uStack_84 = 0;
      pppuStack_94 = (undefined ***)0x0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      ppppuStack_d8 = (undefined ****)0x851050;
      iStack_b0 = iVar9;
      iStack_64 = iVar9;
      func_0x0046bc40();
      uStack_8 = CONCAT31(uStack_8._1_3_,8);
      ppppuStack_d4 = (undefined ****)&ppuStack_bc;
      pppuStack_d0 = (undefined4 ***)0x0;
      ppppuStack_d8 = &pppuStack_94;
      pppuStack_dc = &ppuStack_78;
      uStack_e0 = 0x851072;
      FUN_005e5070();
      piVar3 = piStack_74;
      if (piStack_74 != (int *)0x0) {
        LOCK();
        iVar9 = piStack_74[1] + -1;
        piStack_74[1] = iVar9;
        UNLOCK();
        if (iVar9 == 0) {
          pcVar2 = *(code **)*piStack_74;
          pppuStack_d0 = (undefined4 ***)0x85108f;
          _guard_check_icall();
          pppuStack_d0 = (undefined4 ***)0x851093;
          (*pcVar2)();
          LOCK();
          piVar1 = piVar3 + 2;
          iVar9 = *piVar1 + -1;
          *piVar1 = iVar9;
          UNLOCK();
          if (iVar9 == 0) {
            pcVar2 = *(code **)(*piVar3 + 4);
            pppuStack_d0 = (undefined4 ***)0x8510aa;
            _guard_check_icall();
            pppuStack_d0 = (undefined4 ***)0x8510ae;
            (*pcVar2)();
          }
        }
      }
      uStack_8._0_1_ = 7;
      if (0xf < uStack_80) {
        pppuStack_d0 = (undefined4 ***)uStack_80;
        ppppuStack_d4 = (undefined ****)pppuStack_94;
        ppppuStack_d8 = &pppuStack_94;
        pppuStack_dc = (undefined ***)0x8510cd;
        func_0x0046b1f0();
      }
      uStack_84 = 0;
      uStack_80 = 0xf;
      pppuStack_94 = (undefined ***)((uint)pppuStack_94 & 0xffffff00);
      uStack_8._0_1_ = 3;
      if (pppuStack_98 != (undefined ***)0x0) {
        pcVar2 = (code *)(*pppuStack_98)[4];
        pppuStack_d0 = (undefined4 ***)
                       CONCAT31((int3)((uint)&ppuStack_bc >> 8),pppuStack_98 != &ppuStack_bc);
        ppppuStack_d4 = (undefined ****)0x85110c;
        _guard_check_icall();
        ppppuStack_d4 = (undefined ****)0x851110;
        (*pcVar2)();
        pppuStack_98 = (undefined ***)0x0;
      }
      uStack_8 = (uint)uStack_8._1_3_ << 8;
    }
    uStack_8 = uStack_8 & 0xffffff00;
    pppuStack_d0 = (undefined4 ***)0x85112a;
    func_0x00792a10();
    pppuStack_d0 = (undefined4 ***)&DAT_00000008;
    ppppuStack_d4 = ppppuStack_30;
    ppppuStack_30 = (undefined ****)0x0;
    ppppuStack_d8 = (undefined ****)0x85113c;
    func_0x008ab812();
  }
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar9 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar9;
    UNLOCK();
    if (iVar9 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      pppuStack_d0 = (undefined4 ***)0x851166;
      _guard_check_icall();
      pppuStack_d0 = (undefined4 ***)0x85116a;
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        pppuStack_d0 = (undefined4 ***)0x851182;
        _guard_check_icall();
        pppuStack_d0 = (undefined4 ***)0x851186;
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



TypeDescriptor * FUN_008511b0(void)

{
  return &`protected:_virtual_bool___thiscall_UIVerticalLayout::internalUpdate(void)'::__l34::
          <lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __thiscall FUN_008511c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar1;
  return param_2;
}



void __thiscall FUN_00851250(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  *unaff_FS_OFFSET = iVar2;
  return;
}



undefined4 __thiscall FUN_00851360(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



undefined4 __thiscall FUN_00851f40(undefined4 param_1,byte param_2)

{
  func_0x00851fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3a0);
  }
  return param_1;
}



void __thiscall FUN_00852730(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_40 [16];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36c74;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar9 = DAT_0145ec98[1] - *DAT_0145ec98 >> 2;
  pcVar2 = *(code **)(*param_1 + 8);
  _guard_check_icall(param_3,uVar7);
  (*pcVar2)();
  if ((char)param_1[0x1c] != '\0') {
    func_0x00580c40(iVar9,param_2);
  }
  if (param_1[0x2b] != 0) {
    piStack_14 = (int *)(DAT_0145ec98[1] - *DAT_0145ec98 >> 2);
    pcVar2 = *(code **)(*param_1 + 0xc);
    _guard_check_icall(param_2,param_3);
    (*pcVar2)();
    if ((char)param_1[0x1c] != '\0') {
      iStack_30 = param_1[0x80] + param_1[0x10];
      iStack_2c = param_1[0x7d] + param_1[0x11];
      iStack_28 = param_1[0x12] - param_1[0x7e];
      iStack_24 = param_1[0x13] - param_1[0x7f];
      uVar8 = func_0x0085e690(auStack_40,&iStack_30);
      func_0x00580c40(piStack_14,uVar8);
    }
  }
  if ((float)param_1[0x81] < 0.99) {
    func_0x00580bd0(iVar9);
  }
  piVar6 = DAT_0145ec98;
  fVar1 = (float)param_1[0x82];
  if ((fVar1 < -0.1) || (0.1 < fVar1)) {
    piStack_14 = DAT_0145ec98;
    iStack_18 = (param_1[0x13] + param_1[0x11]) / 2;
    iVar3 = param_1[0x12];
    puStack_1c = (undefined4 *)(fVar1 * 0.017453292);
    iVar4 = param_1[0x10];
    if ((iVar9 != DAT_0145ec98[1] - *DAT_0145ec98 >> 2) && ((float)puStack_1c != 0.0)) {
      puStack_20 = (undefined4 *)func_0x008ab47d(0x18);
      puStack_20[2] = piVar6[1] - *piVar6 >> 2;
      puStack_20[1] = iVar9;
      *puStack_20 = DrawQueueConditionRotation::vftable;
      puStack_20[3] = (iVar3 + iVar4) / 2;
      puStack_20[4] = iStack_18;
      puStack_20[5] = puStack_1c;
      uStack_8 = 0xffffffff;
      puVar5 = (undefined4 *)piVar6[4];
      if (puVar5 != (undefined4 *)piVar6[5]) {
        *puVar5 = puStack_20;
        piVar6[4] = piVar6[4] + 4;
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
      puStack_1c = puStack_20;
      func_0x0047c3d0(puVar5,&puStack_1c);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00852940(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = param_1 + 0x40;
    if (0.003 < *(float *)(param_1 + 0x128)) {
      func_0x008673d0(iVar1);
    }
    func_0x00869510(iVar1);
    func_0x008675b0(iVar1);
    func_0x0086b280(iVar1);
    func_0x00867470(iVar1);
  }
  return;
}



void __thiscall FUN_008529a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  uint auStack_78 [4];
  undefined4 uStack_68;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36cc6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_44 = 0;
  uStack_50 = param_2;
  uStack_48 = *(uint *)(param_1 + 0xa8);
  uStack_58 = *(int *)(param_1 + 0xac) + uStack_48;
  iStack_3c = param_1;
  uStack_14 = uVar3;
  if (uStack_48 != uStack_58) {
    do {
      uVar4 = uStack_48 & 1;
      iStack_40 = *(int *)(*(int *)(param_1 + 0xa0) +
                          (uStack_48 >> 1 & *(int *)(param_1 + 0xa4) - 1U) * 4);
      iVar1 = *(int *)(iStack_40 + uVar4 * 8);
      uStack_54 = uVar4;
      if ((*(char *)(iVar1 + 0x68) != '\0') && (*(char *)(iVar1 + 0x6a) != '\0')) {
        param_1 = iStack_3c;
        if ((*(int *)(iVar1 + 0x40) <= *(int *)(iVar1 + 0x48)) &&
           ((*(int *)(iVar1 + 0x44) <= *(int *)(iVar1 + 0x4c) &&
            (0.003 < *(float *)(iVar1 + 0x204) || *(float *)(iVar1 + 0x204) == 0.003)))) {
          uStack_80 = *(undefined4 *)(iVar1 + 0x48);
          iStack_88 = *(int *)(iVar1 + 0x40);
          iStack_84 = *(int *)(iVar1 + 0x44);
          iStack_7c = *(int *)(iVar1 + 0x4c);
          func_0x0085e690(&iStack_24,&iStack_88,uVar3);
          param_1 = iStack_3c;
          if ((iStack_24 <= iStack_1c) && (iStack_20 <= iStack_18)) {
            pcVar2 = *(code **)(**(int **)(iStack_40 + uVar4 * 8) + 4);
            _guard_check_icall(&iStack_24,param_3);
            (*pcVar2)();
            uVar4 = uStack_54;
            param_1 = iStack_3c;
            if ((DAT_0145ee4a != '\0') && (param_3 == 1)) {
              uStack_4c = DAT_0145ec98;
              iVar1 = *(int *)(iStack_40 + uStack_54 * 8);
              iStack_98 = *(int *)(iVar1 + 0x40);
              iStack_90 = *(int *)(iVar1 + 0x48);
              iStack_94 = *(int *)(iVar1 + 0x44);
              iStack_8c = *(int *)(iVar1 + 0x4c);
              if ((iStack_98 <= iStack_90) && (iStack_94 <= iStack_8c)) {
                uStack_28 = 0;
                uStack_38 = 0;
                uStack_34 = 0;
                uStack_30 = 0;
                uStack_2c = 0;
                func_0x00618ca0();
                uStack_8 = 0;
                func_0x00618f80(&iStack_98,1);
                func_0x00472530(&uStack_38,&DAT_012bc20c);
                uStack_8 = 0xffffffff;
                func_0x00618eb0();
              }
              param_1 = iStack_3c;
              if (*(int *)(iStack_3c + 0x338) != 0) {
                iVar1 = *(int *)(iStack_40 + uVar4 * 8);
                uStack_5c = *(undefined4 *)(iVar1 + 0x44);
                iStack_60 = *(int *)(iVar1 + 0x40) + 2;
                uStack_8 = 1;
                func_0x00469da0(iVar1 + 0x10);
                uVar4 = uStack_44;
                uStack_44 = uStack_44 | 1;
                func_0x00617860(auStack_78,&iStack_60);
                uStack_44 = uVar4 & 0xfffffffe;
                uStack_8 = 0xffffffff;
                if (0xf < uStack_64) {
                  func_0x0046b1f0(auStack_78,auStack_78[0],uStack_64);
                }
                uStack_68 = 0;
                uStack_64 = 0xf;
                auStack_78[0] = auStack_78[0] & 0xffffff00;
                param_1 = iStack_3c;
              }
            }
          }
        }
      }
      uStack_48 = uStack_48 + 1;
    } while (uStack_48 != uStack_58);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00852c20(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  char cVar4;
  undefined4 ***pppuVar5;
  int *unaff_FS_OFFSET;
  uint auStack_90 [4];
  undefined4 **ppuStack_80;
  undefined4 **ppuStack_7c;
  char *pcStack_78;
  uint *puStack_74;
  uint uStack_70;
  char acStack_60 [8];
  undefined1 auStack_58 [4];
  int iStack_54;
  uint auStack_50 [6];
  uint *puStack_38;
  undefined4 **appuStack_34 [4];
  int iStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36d4d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_70 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_38 = param_1;
  uVar1 = *param_1;
  uStack_14 = uStack_70;
  if (uVar1 == 0) {
    puStack_74 = (uint *)0x2b;
    pcStack_78 = "attempt to add a null child into a UIWidget";
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    ppuStack_7c = (undefined4 **)0x852c7b;
    auStack_50[4] = uVar1;
    auStack_50[5] = uVar1;
    func_0x0046bc40();
    uStack_8 = 0;
    puStack_38 = auStack_90;
    auStack_90[0] = 0;
    auStack_90[1] = 0;
    auStack_90[2] = 0;
    auStack_90[3] = 0;
    ppuStack_80 = (undefined4 **)0x0;
    ppuStack_7c = (undefined4 **)0x0;
    func_0x0046bc40("?addChild@UIWidget@@QAEXABV?$shared_ptr@VUIWidget@@@std@@@Z",0x3b);
    uStack_8 = uStack_8 & 0xffffff00;
  }
  else if (*(char *)(uVar1 + 0x6f) == '\0') {
    puStack_74 = param_1;
    pcStack_78 = (char *)0x852d65;
    cVar4 = FUN_00858440();
    if (cVar4 == '\0') {
      puStack_74 = (uint *)&uStack_1c;
      uStack_1c = 0;
      pcStack_78 = (char *)0x852ddf;
      FUN_0077fc80();
      uStack_8 = 6;
      puStack_74 = param_1;
      pcStack_78 = (char *)0x852df2;
      func_0x00470370();
      pcStack_78 = acStack_60;
      ppuStack_7c = (undefined4 **)0x852e00;
      ppuStack_7c = (undefined4 **)func_0x0046b930();
      uStack_8._0_1_ = 7;
      ppuStack_80 = (undefined4 **)0x852e0c;
      FUN_00857490();
      uStack_8._0_1_ = 6;
      ppuStack_7c = (undefined4 **)0x852e18;
      FUN_00468340();
      ppuStack_7c = appuStack_34;
      ppuStack_80 = (undefined4 **)0x852e23;
      FUN_005cc780();
      uStack_8._0_1_ = 8;
      if (iStack_24 != 0) {
        ppuStack_7c = appuStack_34;
        ppuStack_80 = (undefined4 **)0x852e3b;
        cVar4 = func_0x0077c4a0();
        if (cVar4 == '\0') {
          ppuStack_7c = (undefined4 **)0x852e46;
          func_0x004719c0();
          ppuStack_7c = appuStack_34;
          ppuStack_80 = (undefined4 **)0x852e51;
          func_0x0077c510();
          ppuStack_80 = (undefined4 **)param_1;
          auStack_90[3] = 0x852e5d;
          pppuVar5 = (undefined4 ***)func_0x0085e4f0();
          if (pppuVar5 != appuStack_34) {
            ppuStack_7c = (undefined4 **)iStack_24;
            ppuStack_80 = appuStack_34;
            if (0xf < uStack_20) {
              ppuStack_80 = appuStack_34[0];
            }
            auStack_90[3] = 0x852e77;
            func_0x0046a660();
          }
        }
      }
      if (*(int *)(iStack_54 + 0x74) == 0) {
        ppuStack_7c = (undefined4 **)auStack_58;
        ppuStack_80 = (undefined4 **)0x852e88;
        func_0x0046b930();
        uStack_8._0_1_ = 9;
        ppuStack_80 = (undefined4 **)0x852e96;
        ppuStack_80 = (undefined4 **)func_0x0085e890();
        uStack_8._0_1_ = 10;
        auStack_90[3] = 0x852ea3;
        func_0x0046ffa0();
        uStack_8._0_1_ = 9;
        ppuStack_7c = (undefined4 **)0x852eaf;
        FUN_00468340();
        uStack_8._0_1_ = 8;
        ppuStack_7c = (undefined4 **)0x852ebb;
        FUN_00468340();
      }
      ppuStack_7c = (undefined4 **)puStack_38;
      pcVar2 = *(code **)(**(int **)(iStack_54 + 0x74) + 8);
      ppuStack_80 = (undefined4 **)0x852ece;
      _guard_check_icall();
      ppuStack_80 = (undefined4 **)0x852ed2;
      (*pcVar2)();
      puVar3 = puStack_38;
      ppuStack_80 = (undefined4 **)0x852edc;
      func_0x0085ac20();
      if ((int)uStack_1c != 0) {
        ppuStack_80 = (undefined4 **)0x100;
        auStack_90[3] = 0x852eed;
        func_0x00859ee0();
        auStack_90[3] = 0x200;
        auStack_90[2] = 0x852efa;
        func_0x00859ee0();
      }
      ppuStack_80 = (undefined4 **)puVar3;
      auStack_90[3] = 0x852f00;
      func_0x00845f90();
      uStack_8 = CONCAT31(uStack_8._1_3_,6);
      if (0xf < uStack_20) {
        func_0x0046b1f0(appuStack_34,appuStack_34[0],uStack_20);
      }
      iStack_24 = 0;
      uStack_20 = 0xf;
      appuStack_34[0] = (undefined4 **)((uint)appuStack_34[0] & 0xffffff00);
      uStack_8 = 0xffffffff;
      FUN_00468340();
      goto LAB_00852f3d;
    }
    puStack_74 = (uint *)&DAT_0000002c;
    pcStack_78 = "attempt to add a child again into a UIWidget";
    auStack_50[4] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    auStack_50[5] = 0;
    ppuStack_7c = (undefined4 **)0x852d8d;
    func_0x0046bc40();
    uStack_8 = 4;
    puStack_38 = auStack_90;
    auStack_90[0] = 0;
    auStack_90[1] = 0;
    auStack_90[2] = 0;
    auStack_90[3] = 0;
    ppuStack_80 = (undefined4 **)0x0;
    ppuStack_7c = (undefined4 **)0x0;
    func_0x0046bc40("?addChild@UIWidget@@QAEXABV?$shared_ptr@VUIWidget@@@std@@@Z",0x3b);
    uStack_8 = CONCAT31((int3)(uStack_8 >> 8),4);
  }
  else {
    puStack_74 = (uint *)&DAT_0000002f;
    auStack_50[4] = 0;
    pcStack_78 = "attemp to add a destroyed child into a UIWidget";
    auStack_50[5] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    ppuStack_7c = (undefined4 **)0x852d1d;
    func_0x0046bc40();
    uStack_8 = 2;
    puStack_38 = auStack_90;
    auStack_90[0] = 0;
    auStack_90[1] = 0;
    auStack_90[2] = 0;
    auStack_90[3] = 0;
    ppuStack_80 = (undefined4 **)0x0;
    ppuStack_7c = (undefined4 **)0x0;
    func_0x0046bc40("?addChild@UIWidget@@QAEXABV?$shared_ptr@VUIWidget@@@std@@@Z",0x3b);
    uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  }
  func_0x005eea60(2,auStack_50);
  uStack_8 = 0xffffffff;
  if (0xf < auStack_50[5]) {
    func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
  }
  auStack_50[4] = 0;
  auStack_50[5] = 0xf;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
LAB_00852f3d:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00853180(undefined1 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int *piStack_68;
  uint *puStack_64;
  undefined1 *puStack_60;
  uint *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *pcStack_50;
  int *piStack_4c;
  uint uStack_48;
  undefined1 auStack_3c [8];
  int *piStack_34;
  uint auStack_30 [6];
  undefined1 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36e1d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_48 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_34 = param_3;
  puStack_18 = param_1;
  uStack_14 = uStack_48;
  if (*param_3 == 0) {
    piStack_4c = (int *)0x2e;
    auStack_30[4] = 0;
    pcStack_50 = "attempt to insert a null child into a UIWidget";
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    uStack_54 = 0x8531e5;
    func_0x0046bc40();
    uStack_8 = 0;
    puStack_18 = (undefined1 *)&piStack_68;
    piStack_68 = (int *)0x0;
    puStack_64 = (uint *)0x0;
    puStack_60 = (undefined1 *)0x0;
    puStack_5c = (uint *)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0046bc40("?insertChild@UIWidget@@QAEXHABV?$shared_ptr@VUIWidget@@@std@@@Z",0x3f);
    uStack_8 = uStack_8 & 0xffffff00;
  }
  else {
    piStack_4c = param_3;
    pcStack_50 = (char *)0x853263;
    cVar4 = FUN_00858440();
    if (cVar4 == '\0') {
      if (param_2 < 1) {
        iVar5 = *(int *)(param_1 + 0xac);
      }
      else {
        iVar5 = -1;
      }
      uVar6 = param_2 + iVar5;
      if (((int)uVar6 < 0) || (*(uint *)(param_1 + 0xac) < uVar6)) {
        uVar7 = uVar6;
        if ((int)*(uint *)(param_1 + 0xac) < (int)uVar6) {
          uVar7 = *(uint *)(param_1 + 0xac);
        }
        uVar6 = 0;
        if (0 < (int)uVar7) {
          uVar6 = uVar7;
        }
      }
      uStack_58 = *(undefined4 *)(param_1 + 0x9c);
      pcStack_50 = (char *)(*(int *)(param_1 + 0xa8) + uVar6);
      piStack_4c = piStack_34;
      uStack_54 = 0;
      puStack_5c = auStack_30 + 3;
      puStack_60 = (undefined1 *)0x85332e;
      func_0x0085ecb0();
      puVar3 = puStack_18;
      puStack_60 = auStack_3c;
      puStack_64 = (uint *)0x85333e;
      puStack_64 = (uint *)func_0x0046b930();
      uStack_8 = 4;
      piStack_68 = (int *)0x85334d;
      FUN_00857490();
      uStack_8 = 0xffffffff;
      puStack_64 = (uint *)0x85335c;
      FUN_00468340();
      if (*(int *)(puVar3 + 0x74) == 0) {
        puStack_64 = auStack_30 + 4;
        piStack_68 = (int *)0x85336d;
        func_0x0046b930();
        uStack_8 = 5;
        piStack_68 = (int *)0x85337e;
        piStack_68 = (int *)func_0x0085e890();
        uStack_8._0_1_ = 6;
        func_0x0046ffa0();
        uStack_8 = CONCAT31(uStack_8._1_3_,5);
        puStack_64 = (uint *)0x853397;
        FUN_00468340();
        uStack_8 = 0xffffffff;
        puStack_64 = (uint *)0x8533a6;
        FUN_00468340();
      }
      puStack_64 = (uint *)piStack_34;
      pcVar1 = *(code **)(**(int **)(puVar3 + 0x74) + 8);
      piStack_68 = (int *)0x8533b9;
      _guard_check_icall();
      piStack_68 = (int *)0x8533bd;
      (*pcVar1)();
      piVar2 = piStack_34;
      piStack_68 = (int *)0x8533c7;
      func_0x0085ac20();
      piStack_68 = (int *)0x8533cf;
      func_0x0085ac50();
      piStack_68 = piVar2;
      func_0x00845f90();
      goto LAB_008533d5;
    }
    piStack_4c = (int *)&DAT_0000002f;
    auStack_30[4] = 0;
    pcStack_50 = "attempt to insert a child again into a UIWidget";
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    uStack_54 = 0x85328b;
    func_0x0046bc40();
    uStack_8 = 2;
    puStack_18 = (undefined1 *)&piStack_68;
    piStack_68 = (int *)0x0;
    puStack_64 = (uint *)0x0;
    puStack_60 = (undefined1 *)0x0;
    puStack_5c = (uint *)0x0;
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0046bc40("?insertChild@UIWidget@@QAEXHABV?$shared_ptr@VUIWidget@@@std@@@Z",0x3f);
    uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  }
  func_0x005eea60(2,auStack_30);
  uStack_8 = 0xffffffff;
  if (0xf < auStack_30[5]) {
    func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
  }
  auStack_30[4] = 0;
  auStack_30[5] = 0xf;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
LAB_008533d5:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00853400(int param_1,uint param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_74;
  uint *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  uint *puStack_5c;
  undefined4 *puStack_58;
  uint uStack_54;
  uint auStack_48 [5];
  int *piStack_34;
  int iStack_30;
  int *piStack_2c;
  char cStack_25;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f36e80;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  puStack_58 = &param_2;
  puStack_5c = (uint *)0x853453;
  iStack_30 = param_1;
  uStack_24 = uStack_54;
  cVar6 = FUN_00858440();
  if (cVar6 == '\0') {
    puStack_58 = (undefined4 *)0x32;
    auStack_48[4] = 0;
    puStack_5c = (uint *)0x11a118c;
    piStack_34 = (int *)0x0;
    auStack_48[0] = 0;
    auStack_48[1] = 0;
    auStack_48[2] = 0;
    auStack_48[3] = 0;
    uStack_60 = 0x8536c5;
    func_0x0046bc40();
    iStack_14._0_1_ = 3;
    piStack_2c = (int *)&puStack_74;
    puStack_74 = (undefined4 *)0x0;
    puStack_70 = (uint *)0x0;
    uStack_6c = 0;
    uStack_68 = 0;
    piStack_64 = (int *)0x0;
    uStack_60 = 0;
    func_0x0046bc40("?removeChild@UIWidget@@QAEXV?$shared_ptr@VUIWidget@@@std@@@Z",0x3c);
    iStack_14._0_1_ = 3;
    func_0x005eea60(3,auStack_48);
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < piStack_34) {
      func_0x0046b1f0(auStack_48,auStack_48[0],piStack_34);
    }
    auStack_48[4] = 0;
    piStack_34 = (int *)&DAT_0000000f;
    auStack_48[0] = auStack_48[0] & 0xffffff00;
  }
  else {
    cStack_25 = '\0';
    if (*(uint *)(param_1 + 0xcc) == param_2) {
      auStack_48[4] = 0;
      piStack_34 = (int *)0x0;
      iStack_14._0_1_ = 1;
      puStack_5c = auStack_48 + 4;
      puStack_58 = (undefined4 *)0x2;
      uStack_60 = 0x85348c;
      FUN_008537a0();
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      piStack_2c = piStack_34;
      if (piStack_34 != (int *)0x0) {
        LOCK();
        iVar3 = piStack_34[1] + -1;
        piStack_34[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)*piStack_34;
          puStack_58 = (undefined4 *)0x8534af;
          _guard_check_icall();
          puStack_58 = (undefined4 *)0x8534b4;
          (*pcVar2)();
          LOCK();
          iVar3 = piStack_2c[2] + -1;
          piStack_2c[2] = iVar3;
          UNLOCK();
          param_1 = iStack_30;
          if (iVar3 == 0) {
            pcVar2 = *(code **)(*piStack_2c + 4);
            puStack_58 = (undefined4 *)0x8534cd;
            _guard_check_icall();
            puStack_58 = (undefined4 *)0x8534d1;
            (*pcVar2)();
            param_1 = iStack_30;
          }
        }
      }
      cStack_25 = '\x01';
    }
    puStack_58 = &param_2;
    puStack_5c = (uint *)0x8534e3;
    cVar6 = FUN_008583c0();
    if (cVar6 != '\0') {
      puStack_58 = &param_2;
      puStack_5c = (uint *)0x8534f2;
      FUN_00854b90();
    }
    puStack_58 = (undefined4 *)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8));
    puStack_5c = (uint *)0x0;
    uStack_60 = *(undefined4 *)(param_1 + 0x9c);
    piStack_64 = *(int **)(param_1 + 0xa8);
    uStack_68 = 0;
    uStack_6c = *(undefined4 *)(param_1 + 0x9c);
    puStack_70 = (uint *)0x853541;
    func_0x005f4600();
    puStack_58 = (undefined4 *)((int)piStack_34 + 1);
    puStack_5c = (uint *)0x0;
    uStack_60 = auStack_48[3];
    uStack_68 = 0;
    uStack_6c = auStack_48[3];
    piStack_64 = piStack_34;
    puStack_70 = auStack_48 + 3;
    puStack_74 = (undefined4 *)0x853577;
    func_0x008492c0();
    iVar3 = iStack_30;
    puStack_74 = &param_2;
    func_0x004a0ce0(auStack_48 + 3);
    piVar5 = piStack_34;
    if (((*(char *)((int)piStack_34 + 0xd) == '\0') && ((uint)piStack_34[4] <= param_2)) &&
       (piStack_34 != *(int **)(iVar3 + 0xc4))) {
      func_0x00d667d0(DAT_0145e9f0);
      func_0x0077c510(piVar5 + 6);
      uVar7 = func_0x0057b590(piVar5);
      func_0x005a2dc0();
      func_0x008ab812(uVar7,0x30);
    }
    auStack_48[4] = 0;
    piStack_34 = (int *)0x0;
    iStack_14._0_1_ = 2;
    FUN_00857490(auStack_48 + 4);
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    piStack_2c = piStack_34;
    if (piStack_34 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_34[1] + -1;
      piStack_34[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)*piStack_34;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar4 = piStack_2c[2] + -1;
        piStack_2c[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar2 = *(code **)(*piStack_2c + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    pcVar2 = *(code **)(**(int **)(iVar3 + 0x74) + 0xc);
    _guard_check_icall(&param_2);
    (*pcVar2)();
    func_0x0085ac20();
    iVar3 = iStack_30;
    func_0x0085ac50();
    if (((*(int *)(iVar3 + 0xf4) != 0) && (cStack_25 != '\0')) && (*(int *)(iVar3 + 0xcc) == 0)) {
      FUN_00853d70(2,1);
    }
    func_0x00845f90(&param_2);
  }
  piVar5 = param_3;
  iStack_14 = 0xffffffff;
  if (param_3 != (int *)0x0) {
    LOCK();
    iVar3 = param_3[1] + -1;
    param_3[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*param_3;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar5 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_008537a0(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  uint auStack_3c [6];
  int *piStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36ec5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_24 = param_2;
  piStack_20 = param_1;
  uStack_14 = uVar6;
  if (*(char *)((int)param_1 + 0x6f) == '\0') {
    if (*param_2 != param_1[0x33]) {
      if (*param_2 != 0) {
        cVar5 = FUN_00858440(param_2);
        if (cVar5 == '\0') {
          auStack_3c[4] = 0;
          auStack_3c[5] = 0;
          auStack_3c[0] = 0;
          auStack_3c[1] = 0;
          auStack_3c[2] = 0;
          auStack_3c[3] = 0;
          func_0x0046bc40("attempt to focus an unknown child in a UIWidget",0x2f);
          uStack_8 = 0;
          FUN_005ee340(3,auStack_3c);
          uStack_8 = 0xffffffff;
          if (0xf < auStack_3c[5]) {
            func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
          }
          auStack_3c[4] = 0;
          auStack_3c[5] = 0xf;
          auStack_3c[0] = auStack_3c[0] & 0xffffff00;
          goto LAB_00853982;
        }
      }
      if (param_1[0x34] != 0) {
        LOCK();
        piVar1 = (int *)(param_1[0x34] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      uStack_1c = *(undefined8 *)(param_1 + 0x33);
      uStack_8 = 1;
      func_0x004683d0(param_2,uVar6);
      if (*param_2 != 0) {
        *(undefined4 *)(*param_2 + 0xf0) = param_3;
        func_0x00859ee0(2);
        func_0x00859ee0(1);
        pcVar3 = *(code **)(*(int *)*param_2 + 0x1c);
        _guard_check_icall(1,param_3);
        (*pcVar3)();
      }
      if ((int *)uStack_1c != (int *)0x0) {
        *(undefined4 *)((int)(int *)uStack_1c + 0xf0) = param_3;
        func_0x00859ee0(2);
        func_0x00859ee0(1);
        pcVar3 = *(code **)(*(int *)uStack_1c + 0x1c);
        _guard_check_icall(0,param_3);
        (*pcVar3)();
      }
      pcVar3 = *(code **)(*piStack_20 + 0x20);
      _guard_check_icall(piStack_24,&uStack_1c,param_3);
      (*pcVar3)();
      uStack_8 = 0xffffffff;
      piVar1 = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar4 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)*uStack_1c._4_4_;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar2 = piVar1 + 2;
          iVar4 = *piVar2 + -1;
          *piVar2 = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)(*piVar1 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
    }
  }
LAB_00853982:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_008539a0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined4 uStack_4c;
  int iStack_44;
  undefined8 uStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f36f0d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uStack_30 = 0;
    iStack_8 = 0;
    puVar5 = (undefined4 *)(param_1 + 0x9c);
    if (param_3 == '\0') {
      piVar7 = (int *)*puVar5;
      uVar6 = *(uint *)(param_1 + 0xa8);
      if (*(int *)(param_1 + 0xcc) != 0) {
        puVar5 = (undefined4 *)
                 func_0x005f4600(*puVar5,0,*(undefined4 *)(param_1 + 0xa8),*puVar5,0,
                                 *(int *)(param_1 + 0xac) + uVar6,uStack_14);
        piVar7 = (int *)*puVar5;
        uVar6 = puVar5[2];
      }
      for (; uVar6 != *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xac); uVar6 = uVar6 + 1) {
        if (piVar7 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar7;
        }
        piVar1 = (int *)(*(int *)(*(int *)(iVar8 + 4) + (uVar6 >> 1 & *(int *)(iVar8 + 8) - 1U) * 4)
                        + (uVar6 & 1) * 8);
        iVar8 = *piVar1;
        if ((((iVar8 != *(int *)(param_1 + 0xcc)) && (*(char *)(iVar8 + 0x6b) != '\0')) &&
            (*(char *)(iVar8 + 0x69) != '\0')) &&
           ((~(byte)(*(uint *)(iVar8 + 0x108) >> 0xc) & 1) != 0)) {
          func_0x004683d0(piVar1);
          break;
        }
      }
    }
    else {
      iStack_18 = 0;
      uStack_28 = 0;
      iStack_24 = 0;
      iStack_20 = 0;
      uStack_1c = 0;
      func_0x007929c0(puVar5);
      iStack_8._0_1_ = 1;
      if (*(int *)(param_1 + 0xcc) != 0) {
        func_0x005f4600(uStack_28,0,uStack_1c,uStack_28,0,uStack_1c + iStack_18);
        if (iStack_44 != uStack_1c + iStack_18) {
          func_0x0085e990(uStack_28,0,uStack_1c,uStack_4c,0,iStack_44,uStack_28,0,
                          uStack_1c + iStack_18);
          func_0x0047aa40();
          iStack_18 = iStack_18 + -1;
          if (iStack_18 == 0) {
            uStack_1c = 0;
          }
          else {
            uStack_1c = uStack_1c + 1;
          }
        }
      }
      uVar4 = uStack_30;
      if (uStack_1c != uStack_1c + iStack_18) {
        uVar6 = uStack_1c;
        do {
          piVar7 = (int *)(*(int *)(iStack_24 + (uVar6 >> 1 & iStack_20 - 1U) * 4) + (uVar6 & 1) * 8
                          );
          iVar8 = *piVar7;
          if (((*(char *)(iVar8 + 0x6b) != '\0') && (*(char *)(iVar8 + 0x69) != '\0')) &&
             ((~(byte)(*(uint *)(iVar8 + 0x108) >> 0xc) & 1) != 0)) {
            if (piVar7[1] != 0) {
              LOCK();
              piVar1 = (int *)(piVar7[1] + 4);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            uVar4 = *(undefined8 *)piVar7;
            piVar7 = uStack_30._4_4_;
            iStack_8._0_1_ = 1;
            if (uStack_30._4_4_ != (int *)0x0) {
              LOCK();
              iVar8 = uStack_30._4_4_[1] + -1;
              uStack_30._4_4_[1] = iVar8;
              UNLOCK();
              if (iVar8 == 0) {
                pcVar2 = *(code **)*uStack_30._4_4_;
                uStack_30 = uVar4;
                _guard_check_icall();
                (*pcVar2)();
                LOCK();
                piVar1 = piVar7 + 2;
                iVar8 = *piVar1 + -1;
                *piVar1 = iVar8;
                UNLOCK();
                uVar4 = uStack_30;
                if (iVar8 == 0) {
                  pcVar2 = *(code **)(*piVar7 + 4);
                  _guard_check_icall();
                  (*pcVar2)();
                  uVar4 = uStack_30;
                }
              }
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uStack_1c + iStack_18);
      }
      uStack_30 = uVar4;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x00792a10();
      uVar3 = uStack_28;
      uStack_28 = 0;
      func_0x008ab812(uVar3,8);
    }
    if (((int)uStack_30 != 0) && ((int)uStack_30 != *(int *)(param_1 + 0xcc))) {
      FUN_008537a0(&uStack_30,param_2);
    }
    iStack_8 = 0xffffffff;
    piVar7 = uStack_30._4_4_;
    if (uStack_30._4_4_ != (int *)0x0) {
      LOCK();
      iVar8 = uStack_30._4_4_[1] + -1;
      uStack_30._4_4_[1] = iVar8;
      UNLOCK();
      if (iVar8 == 0) {
        pcVar2 = *(code **)*uStack_30._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar7 + 2;
        iVar8 = *piVar1 + -1;
        *piVar1 = iVar8;
        UNLOCK();
        if (iVar8 == 0) {
          pcVar2 = *(code **)(*piVar7 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00853d70(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined4 uStack_60;
  int iStack_58;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f36f5d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puVar5 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uStack_40 = 0;
    iStack_14 = 0;
    puVar6 = (undefined4 *)(param_1 + 0x9c);
    if (param_3 == '\0') {
      uVar8 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
      piVar7 = (int *)*puVar6;
      puVar5 = &stack0xfffffffc;
      if (*(int *)(param_1 + 0xcc) != 0) {
        if (puVar6 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        puVar6 = (undefined4 *)
                 func_0x0085ea70(*puVar6,0,*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8),
                                 piVar7,0,*(int *)(param_1 + 0xa8),uStack_24);
        piVar7 = (int *)*puVar6;
        uVar8 = puVar6[2];
        puVar5 = puStack_20;
      }
      puStack_20 = puVar5;
      do {
        uVar9 = uVar8 - 1;
        if (uVar8 == *(uint *)(param_1 + 0xa8)) goto LAB_0085410f;
        if (piVar7 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar7;
        }
        piVar1 = (int *)(*(int *)(*(int *)(iVar10 + 4) +
                                 (uVar9 >> 1 & *(int *)(iVar10 + 8) - 1U) * 4) + (uVar9 & 1) * 8);
        iVar10 = *piVar1;
        uVar8 = uVar9;
      } while ((((iVar10 == *(int *)(param_1 + 0xcc)) || (*(char *)(iVar10 + 0x6b) == '\0')) ||
               (*(char *)(iVar10 + 0x69) == '\0')) ||
              ((~(byte)(*(uint *)(iVar10 + 0x108) >> 0xc) & 1) == 0));
      func_0x004683d0(piVar1);
    }
    else {
      iStack_28 = 0;
      uStack_38 = 0;
      iStack_34 = 0;
      iStack_30 = 0;
      uStack_2c = 0;
      puStack_20 = &stack0xfffffffc;
      func_0x007929c0(puVar6);
      iStack_14._0_1_ = 1;
      func_0x008437e0(uStack_38,0,uStack_2c,uStack_38,0,uStack_2c + iStack_28);
      if (*(int *)(param_1 + 0xcc) != 0) {
        func_0x005f4600(uStack_38,0,uStack_2c,uStack_38,0,uStack_2c + iStack_28);
        if (iStack_58 != uStack_2c + iStack_28) {
          func_0x0085e990(uStack_38,0,uStack_2c,uStack_60,0,iStack_58,uStack_38,0,
                          uStack_2c + iStack_28);
          func_0x0047aa40();
          iStack_28 = iStack_28 + -1;
          if (iStack_28 == 0) {
            uStack_2c = 0;
          }
          else {
            uStack_2c = uStack_2c + 1;
          }
        }
      }
      uVar4 = uStack_40;
      if (uStack_2c != iStack_28 + uStack_2c) {
        uVar8 = uStack_2c;
        do {
          piVar7 = (int *)(*(int *)(iStack_34 + (uVar8 >> 1 & iStack_30 - 1U) * 4) + (uVar8 & 1) * 8
                          );
          iVar10 = *piVar7;
          if (((*(char *)(iVar10 + 0x6b) != '\0') && (*(char *)(iVar10 + 0x69) != '\0')) &&
             ((~(byte)(*(uint *)(iVar10 + 0x108) >> 0xc) & 1) != 0)) {
            if (piVar7[1] != 0) {
              LOCK();
              piVar1 = (int *)(piVar7[1] + 4);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            uVar4 = *(undefined8 *)piVar7;
            piVar7 = uStack_40._4_4_;
            iStack_14._0_1_ = 1;
            if (uStack_40._4_4_ != (int *)0x0) {
              LOCK();
              iVar10 = uStack_40._4_4_[1] + -1;
              uStack_40._4_4_[1] = iVar10;
              UNLOCK();
              if (iVar10 == 0) {
                pcVar2 = *(code **)*uStack_40._4_4_;
                uStack_40 = uVar4;
                _guard_check_icall();
                (*pcVar2)();
                LOCK();
                piVar1 = piVar7 + 2;
                iVar10 = *piVar1 + -1;
                *piVar1 = iVar10;
                UNLOCK();
                uVar4 = uStack_40;
                if (iVar10 == 0) {
                  pcVar2 = *(code **)(*piVar7 + 4);
                  _guard_check_icall();
                  (*pcVar2)();
                  uVar4 = uStack_40;
                }
              }
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != iStack_28 + uStack_2c);
      }
      uStack_40 = uVar4;
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      func_0x00792a10();
      uVar3 = uStack_38;
      uStack_38 = 0;
      func_0x008ab812(uVar3,8);
    }
LAB_0085410f:
    if (((int)uStack_40 != 0) && ((int)uStack_40 != *(int *)(param_1 + 0xcc))) {
      FUN_008537a0(&uStack_40,param_2);
    }
    iStack_14 = 0xffffffff;
    piVar7 = uStack_40._4_4_;
    puVar5 = puStack_20;
    if (uStack_40._4_4_ != (int *)0x0) {
      LOCK();
      iVar10 = uStack_40._4_4_[1] + -1;
      uStack_40._4_4_[1] = iVar10;
      UNLOCK();
      if (iVar10 == 0) {
        pcVar2 = *(code **)*uStack_40._4_4_;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piVar7 + 2;
        iVar10 = *piVar1 + -1;
        *piVar1 = iVar10;
        UNLOCK();
        puVar5 = puStack_20;
        if (iVar10 == 0) {
          pcVar2 = *(code **)(*piVar7 + 4);
          _guard_check_icall();
          (*pcVar2)();
          puVar5 = puStack_20;
        }
      }
    }
  }
  puStack_20 = puVar5;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00854190(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 **ppuStack_4c;
  uint *puStack_48;
  char *pcStack_44;
  uint uStack_40;
  uint uStack_3c;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint *puStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f36fad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uStack_3c;
  if ((*(char *)(param_1 + 0x6f) == '\0') && (param_2 != 0)) {
    uStack_40 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
    pcStack_44 = (char *)0x0;
    puStack_48 = *(uint **)(param_1 + 0x9c);
    ppuStack_4c = *(undefined4 ***)(param_1 + 0xa8);
    puStack_50 = (undefined4 *)0x0;
    uStack_54 = *(undefined4 *)(param_1 + 0x9c);
    uStack_58 = 0x854226;
    func_0x005f4600();
    if (uStack_1c == *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8)) {
      uStack_40 = 0x11;
      uStack_20 = 0;
      pcStack_44 = "cannot find child";
      uStack_1c = 0;
      pcStack_30 = (char *)0x0;
      uStack_2c = 0;
      uStack_28 = 0;
      puStack_24 = (uint *)0x0;
      puStack_48 = (uint *)0x854264;
      func_0x0046bc40();
      iStack_8._0_1_ = 1;
      puStack_18 = (undefined1 *)&uStack_5c;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      puStack_50 = (undefined4 *)0x0;
      ppuStack_4c = (uint **)0x0;
      puStack_48 = (uint *)0x0;
      func_0x0046bc40("?lowerChild@UIWidget@@QAEXV?$shared_ptr@VUIWidget@@@std@@@Z",0x3b);
      iStack_8._0_1_ = 1;
      func_0x005eea60(3,&pcStack_30);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_1c) {
        uStack_40 = uStack_1c;
        pcStack_44 = pcStack_30;
        puStack_48 = (uint *)&pcStack_30;
        ppuStack_4c = (uint **)0x8542bc;
        func_0x0046b1f0();
      }
      uStack_20 = 0;
      uStack_1c = 0xf;
      pcStack_30 = (char *)((uint)pcStack_30 & 0xffffff00);
    }
    else {
      puStack_48 = puStack_24;
      ppuStack_4c = &puStack_24;
      uStack_40 = uStack_1c;
      pcStack_44 = (char *)0x0;
      puStack_50 = (undefined4 *)0x8542f2;
      func_0x00849150();
      puStack_50 = &param_2;
      uStack_54 = 0x8542fd;
      func_0x005f40c0();
      uStack_54 = 0x854304;
      func_0x0085ac50();
    }
  }
  piVar4 = param_3;
  iStack_8 = 0xffffffff;
  if (param_3 != (int *)0x0) {
    LOCK();
    iVar3 = param_3[1] + -1;
    param_3[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*param_3;
      uStack_40 = 0x854328;
      _guard_check_icall();
      uStack_40 = 0x85432c;
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        uStack_40 = 0x854343;
        _guard_check_icall();
        uStack_40 = 0x854347;
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00854370(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined4 **ppuStack_4c;
  uint *puStack_48;
  char *pcStack_44;
  uint uStack_40;
  uint uStack_3c;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint *puStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f36fad;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uStack_3c;
  if ((*(char *)(param_1 + 0x6f) == '\0') && (param_2 != 0)) {
    uStack_40 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
    pcStack_44 = (char *)0x0;
    puStack_48 = *(uint **)(param_1 + 0x9c);
    ppuStack_4c = *(undefined4 ***)(param_1 + 0xa8);
    puStack_50 = (undefined4 *)0x0;
    uStack_54 = *(undefined4 *)(param_1 + 0x9c);
    uStack_58 = 0x854406;
    func_0x005f4600();
    if (uStack_1c == *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8)) {
      uStack_40 = 0x11;
      uStack_20 = 0;
      pcStack_44 = "cannot find child";
      uStack_1c = 0;
      pcStack_30 = (char *)0x0;
      uStack_2c = 0;
      uStack_28 = 0;
      puStack_24 = (uint *)0x0;
      puStack_48 = (uint *)0x854444;
      func_0x0046bc40();
      iStack_8._0_1_ = 1;
      puStack_18 = (undefined1 *)&uStack_5c;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      puStack_50 = (undefined4 *)0x0;
      ppuStack_4c = (uint **)0x0;
      puStack_48 = (uint *)0x0;
      func_0x0046bc40("?raiseChild@UIWidget@@QAEXV?$shared_ptr@VUIWidget@@@std@@@Z",0x3b);
      iStack_8._0_1_ = 1;
      func_0x005eea60(3,&pcStack_30);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_1c) {
        uStack_40 = uStack_1c;
        pcStack_44 = pcStack_30;
        puStack_48 = (uint *)&pcStack_30;
        ppuStack_4c = (uint **)0x85449c;
        func_0x0046b1f0();
      }
      uStack_20 = 0;
      uStack_1c = 0xf;
      pcStack_30 = (char *)((uint)pcStack_30 & 0xffffff00);
    }
    else {
      puStack_48 = puStack_24;
      ppuStack_4c = &puStack_24;
      uStack_40 = uStack_1c;
      pcStack_44 = (char *)0x0;
      puStack_50 = (undefined4 *)0x8544d2;
      func_0x00849150();
      puStack_50 = &param_2;
      uStack_54 = 0x8544dd;
      func_0x00470370();
      uStack_54 = 0x8544e4;
      func_0x0085ac50();
    }
  }
  piVar4 = param_3;
  iStack_8 = 0xffffffff;
  if (param_3 != (int *)0x0) {
    LOCK();
    iVar3 = param_3[1] + -1;
    param_3[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*param_3;
      uStack_40 = 0x854508;
      _guard_check_icall();
      uStack_40 = 0x85450c;
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        uStack_40 = 0x854523;
        _guard_check_icall();
        uStack_40 = 0x854527;
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00854550(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int aiStack_a8 [2];
  undefined4 ***pppuStack_a0;
  char *pcStack_9c;
  undefined4 ***pppuStack_98;
  undefined4 ***pppuStack_94;
  undefined4 ***pppuStack_90;
  undefined4 ***pppuStack_8c;
  int *piStack_88;
  undefined4 ***pppuStack_84;
  undefined4 ***pppuStack_80;
  undefined4 ***pppuStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 ***apppuStack_68 [4];
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 ***pppuStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 ***pppuStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 ***pppuStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  int *piStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37037;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_74 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  piStack_20 = param_2;
  uStack_14 = uStack_74;
  if ((*(char *)(param_1 + 0x6f) == '\0') && (*param_2 != 0)) {
    if (param_3 - 1U < *(uint *)(param_1 + 0xac)) {
      puVar1 = (undefined4 *)(param_1 + 0x9c);
      uStack_78 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
      pppuStack_7c = (undefined4 ***)0x0;
      pppuStack_80 = (undefined4 ***)*puVar1;
      pppuStack_84 = *(undefined4 ****)(param_1 + 0xa8);
      piStack_88 = (int *)0x0;
      pppuStack_8c = (undefined4 ***)*puVar1;
      pppuStack_90 = (undefined4 ***)0x854797;
      func_0x005f4600();
      if (uStack_3c == *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xac)) {
        uStack_78 = 0x11;
        uStack_28 = 0;
        pppuStack_7c = (undefined4 ***)0x11a1534;
        uStack_24 = 0;
        pppuStack_38 = (undefined4 ****)0x0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        pppuStack_80 = (undefined4 ***)0x8547d5;
        func_0x0046bc40();
        iStack_8 = 4;
        puStack_1c = (undefined1 *)&pppuStack_94;
        pppuStack_98 = (undefined4 ****)0x44;
        pppuStack_94 = (undefined4 ***)0x0;
        pppuStack_90 = (undefined4 ***)0x0;
        pppuStack_8c = (undefined4 ***)0x0;
        piStack_88 = (int *)0x0;
        pcStack_9c = "?moveChildToIndex@UIWidget@@QAEXABV?$shared_ptr@VUIWidget@@@std@@H@Z";
        pppuStack_84 = (undefined4 ****)0x0;
        pppuStack_80 = (undefined4 ****)0x0;
        pppuStack_a0 = (undefined4 ***)0x854804;
        func_0x0046bc40();
        pppuStack_a0 = &pppuStack_38;
        aiStack_a8[1] = 3;
        iStack_8 = CONCAT31((int3)((uint)iStack_8 >> 8),4);
        aiStack_a8[0] = 0x854817;
        func_0x005eea60();
        iStack_8 = 0xffffffff;
        if (0xf < uStack_24) {
          uStack_78 = uStack_24;
          pppuStack_7c = pppuStack_38;
          pppuStack_80 = &pppuStack_38;
          pppuStack_84 = (undefined4 ****)0x854833;
          func_0x0046b1f0();
        }
        uStack_28 = 0;
        uStack_24 = 0xf;
        pppuStack_38 = (undefined4 ***)((uint)pppuStack_38 & 0xffffff00);
      }
      else {
        pppuStack_80 = pppuStack_44;
        pppuStack_84 = &pppuStack_44;
        pppuStack_7c = (undefined4 ****)0x0;
        uStack_78 = uStack_3c;
        piStack_88 = (int *)0x854869;
        func_0x00849150();
        piStack_88 = piStack_20;
        if (param_3 < *(int *)(param_1 + 0xac) + 1) {
          pppuStack_94 = (undefined4 ***)*puVar1;
          pppuStack_8c = (undefined4 ***)(param_3 + -1 + *(int *)(param_1 + 0xa8));
          pppuStack_90 = (undefined4 ***)0x0;
          pppuStack_98 = &pppuStack_44;
          pcStack_9c = (char *)0x8548a5;
          func_0x0085e7d0();
        }
        else {
          pppuStack_8c = (undefined4 ***)0x854881;
          func_0x00470370();
        }
        pppuStack_8c = (undefined4 ***)0x8548ac;
        func_0x0085ac50();
        uStack_78 = 0x8548b3;
        FUN_00855d80();
      }
    }
    else {
      iStack_8 = 0;
      uStack_78 = *param_2 + 0x10;
      pppuStack_7c = (undefined4 ***)0x8545c0;
      func_0x00469da0();
      pppuStack_7c = (undefined4 ****)0x1b;
      uStack_18 = 1;
      pppuStack_80 = (undefined4 ***)0x11a15c8;
      uStack_40 = 0;
      pppuStack_50 = (undefined4 ****)0x0;
      uStack_4c = 0;
      uStack_48 = 0;
      pppuStack_44 = (undefined4 ****)0x0;
      uStack_3c = 0;
      pppuStack_84 = (undefined4 ***)0x8545eb;
      func_0x0046bc40();
      iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
      iStack_8._0_1_ = 2;
      piStack_88 = &param_3;
      pppuStack_90 = &pppuStack_50;
      if (0xf < uStack_3c) {
        pppuStack_90 = pppuStack_50;
      }
      pppuStack_8c = apppuStack_68;
      pppuStack_94 = (undefined4 ***)0x854614;
      pppuStack_84 = (undefined4 ***)(param_1 + 0x10);
      iVar2 = func_0x0085f140();
      piStack_88 = (int *)(iVar2 + 1);
      if (SCARRY4(iVar2,1)) {
        piStack_88 = (int *)0xffffffff;
      }
      pppuStack_84 = (undefined4 ****)0x0;
      pppuStack_8c = (undefined4 ***)0x85462d;
      func_0x00469c80();
      pppuStack_90 = (undefined4 ***)&param_3;
      uStack_18 = 3;
      pppuStack_98 = &pppuStack_50;
      if (0xf < uStack_3c) {
        pppuStack_98 = pppuStack_50;
      }
      pppuStack_94 = apppuStack_68;
      pcStack_9c = (char *)0x85465c;
      pppuStack_8c = (undefined4 ***)(param_1 + 0x10);
      pppuStack_90 = (undefined4 ***)func_0x0085f140();
      pppuStack_8c = (undefined4 ***)0x0;
      pppuStack_94 = (undefined4 ***)0x85466a;
      func_0x004698c0();
      piStack_20 = aiStack_a8;
      aiStack_a8[0] = 0;
      aiStack_a8[1] = 0;
      pppuStack_a0 = (undefined4 ****)0x0;
      pcStack_9c = (char *)0x0;
      pppuStack_98 = (undefined4 ****)0x0;
      pppuStack_94 = (undefined4 ***)0x0;
      func_0x0046bc40("?moveChildToIndex@UIWidget@@QAEXABV?$shared_ptr@VUIWidget@@@std@@H@Z",0x44);
      iStack_8._0_1_ = 2;
      func_0x005eea60(3,&pppuStack_38);
      uStack_18 = 1;
      iStack_8._0_1_ = 1;
      if (0xf < uStack_24) {
        uStack_78 = uStack_24;
        pppuStack_7c = pppuStack_38;
        pppuStack_80 = &pppuStack_38;
        pppuStack_84 = (undefined4 ****)0x8546cc;
        func_0x0046b1f0();
      }
      uStack_28 = 0;
      uStack_24 = 0xf;
      pppuStack_38 = (undefined4 ***)((uint)pppuStack_38 & 0xffffff00);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_3c) {
        uStack_78 = uStack_3c;
        pppuStack_7c = pppuStack_50;
        pppuStack_80 = &pppuStack_50;
        pppuStack_84 = (undefined4 ****)0x8546fa;
        func_0x0046b1f0();
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      pppuStack_50 = (undefined4 ***)((uint)pppuStack_50 & 0xffffff00);
      uStack_18 = 0;
      iStack_8 = 0xffffffff;
      if (0xf < uStack_54) {
        uStack_78 = uStack_54;
        pppuStack_7c = apppuStack_68[0];
        pppuStack_80 = apppuStack_68;
        pppuStack_84 = (undefined4 ****)0x854731;
        func_0x0046b1f0();
      }
      uStack_58 = 0;
      uStack_54 = 0xf;
      apppuStack_68[0] = (undefined4 ***)((uint)apppuStack_68[0] & 0xffffff00);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_008548d0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3706d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_18 = param_1;
  if (*(int *)(param_1 + 0xac) != param_2[1] - *param_2 >> 3) {
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    func_0x0046bc40("Invalid parameter for reorderChildren",0x25);
    uStack_8 = 0;
    FUN_005ee340(3,&uStack_30);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_1c) {
      func_0x0046b1f0(&uStack_30,uStack_30,uStack_1c);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iStack_14 = param_1 + 0x9c;
  func_0x00792a10(uVar1);
  uVar1 = 0;
  iVar2 = *param_2;
  if (param_2[1] - iVar2 >> 3 != 0) {
    do {
      func_0x00470370(iVar2 + uVar1 * 8);
      uVar1 = uVar1 + 1;
      iVar2 = *param_2;
    } while (uVar1 < (uint)(param_2[1] - iVar2 >> 3));
  }
  func_0x0085ac50();
  FUN_00855d80();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008549f0(int param_1,int *param_2)

{
  char cVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int **ppiStack_4c;
  int *piStack_48;
  int *piStack_44;
  uint uStack_40;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f33425;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_40 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uStack_40;
  if ((*(char *)(param_1 + 0x6f) == '\0') && (*param_2 != 0)) {
    piStack_44 = param_2;
    piStack_48 = (int *)0x854a38;
    cVar1 = FUN_00858440();
    if (cVar1 == '\0') {
      piStack_44 = (int *)0x11;
      uStack_24 = 0;
      piStack_48 = (int *)0x11a1534;
      piStack_20 = (int *)0x0;
      piStack_34 = (int *)0x0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      ppiStack_4c = (int **)0x854a64;
      func_0x0046bc40();
      uStack_8 = 0;
      puStack_1c = (undefined1 *)&uStack_60;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      ppiStack_4c = (int **)0x0;
      func_0x0046bc40("?lockChild@UIWidget@@QAEXABV?$shared_ptr@VUIWidget@@@std@@@Z",0x3c);
      uStack_8 = uStack_8 & 0xffffff00;
      func_0x005eea60(3,&piStack_34);
      uStack_8 = 0xffffffff;
      if (&DAT_0000000f < piStack_20) {
        piStack_44 = piStack_20;
        piStack_48 = piStack_34;
        ppiStack_4c = &piStack_34;
        uStack_50 = 0x854ac2;
        func_0x0046b1f0();
      }
      uStack_24 = 0;
      piStack_20 = (int *)0xf;
      piStack_34 = (int *)((uint)piStack_34 & 0xffffff00);
    }
    else {
      piStack_44 = param_2;
      piStack_48 = (int *)0x854ae4;
      cVar1 = FUN_008583c0();
      if (cVar1 != '\0') {
        piStack_44 = param_2;
        piStack_48 = (int *)0x854af0;
        FUN_00854b90();
      }
      puStack_18 = *(undefined1 **)(param_1 + 0xa8);
      puStack_1c = puStack_18 + *(int *)(param_1 + 0xac);
      if (puStack_18 != puStack_1c) {
        do {
          piStack_44 = (int *)(uint)(*(int *)(*(int *)(*(int *)(param_1 + 0xa0) +
                                                      ((uint)puStack_18 >> 1 &
                                                      *(int *)(param_1 + 0xa4) - 1U) * 4) +
                                             ((uint)puStack_18 & 1) * 8) == *param_2);
          piStack_48 = (int *)0x854b41;
          FUN_00857e00();
          puStack_18 = puStack_18 + 1;
        } while (puStack_18 != puStack_1c);
      }
      piStack_44 = param_2;
      piStack_48 = (int *)0x854b59;
      func_0x005f40c0();
      if (*(char *)(*param_2 + 0x6b) != '\0') {
        piStack_44 = (int *)0x2;
        piStack_48 = param_2;
        ppiStack_4c = (int **)0x854b6b;
        FUN_008537a0();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00854b90(int param_1,int *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 **ppuStack_64;
  undefined8 **ppuStack_60;
  char *pcStack_5c;
  int *piStack_58;
  uint uStack_54;
  char *pcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 **ppuStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined1 *puStack_30;
  int aiStack_2c [3];
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f370ad;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_54 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  aiStack_2c[2] = uStack_54;
  puVar2 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x6f) == '\0') && (puVar2 = &stack0xfffffffc, *param_2 != 0)) {
    piStack_58 = param_2;
    pcStack_5c = (char *)0x854bec;
    cVar1 = FUN_00858440();
    if (cVar1 == '\0') {
      piStack_58 = (int *)0x11;
      uStack_38 = 0;
      pcStack_5c = "cannot find child";
      uStack_34 = 0;
      pcStack_48 = (char *)0x0;
      uStack_44 = 0;
      uStack_40 = 0;
      ppuStack_3c = (undefined8 **)0x0;
      ppuStack_60 = (undefined8 **)0x854c18;
      func_0x0046bc40();
      uStack_14 = 0;
      puStack_30 = (undefined1 *)&uStack_74;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      ppuStack_64 = (undefined8 ***)0x0;
      ppuStack_60 = (undefined8 **)0x0;
      func_0x0046bc40("?unlockChild@UIWidget@@QAEXABV?$shared_ptr@VUIWidget@@@std@@@Z",0x3e);
      uStack_14 = uStack_14 & 0xffffff00;
      func_0x005eea60(3,&pcStack_48);
      uStack_14 = 0xffffffff;
      if (0xf < uStack_34) {
        piStack_58 = (int *)uStack_34;
        pcStack_5c = pcStack_48;
        ppuStack_60 = (undefined8 **)&pcStack_48;
        ppuStack_64 = (undefined8 ***)0x854c76;
        func_0x0046b1f0();
      }
      uStack_38 = 0;
      uStack_34 = 0xf;
      pcStack_48 = (char *)((uint)pcStack_48 & 0xffffff00);
      puVar2 = puStack_20;
    }
    else {
      piStack_58 = (int *)(*(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xbc));
      pcStack_5c = (char *)0x0;
      ppuStack_60 = *(undefined8 ***)(param_1 + 0xb0);
      ppuStack_64 = *(undefined4 ***)(param_1 + 0xbc);
      uStack_68 = 0;
      uStack_6c = *(undefined4 *)(param_1 + 0xb0);
      uStack_70 = 0x854ce6;
      func_0x005f4600();
      puVar2 = puStack_20;
      if (uStack_34 != *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xbc)) {
        ppuStack_60 = ppuStack_3c;
        ppuStack_64 = &ppuStack_3c;
        pcStack_5c = (char *)0x0;
        piStack_58 = (int *)uStack_34;
        uStack_68 = 0x854d23;
        func_0x00849150();
        aiStack_2c[0] = 0;
        aiStack_2c[1] = 0;
        uStack_14 = 2;
        if (*(int *)(param_1 + 0xc0) != 0) {
          piStack_58 = (int *)(*(int *)(*(int *)(param_1 + 0xb4) +
                                       (*(int *)(param_1 + 0xb8) - 1U &
                                       *(uint *)(param_1 + 0xbc) >> 1) * 4) +
                              (*(uint *)(param_1 + 0xbc) & 1) * 8);
          pcStack_5c = (char *)0x854d74;
          func_0x004683d0();
        }
        puVar2 = *(undefined1 **)(param_1 + 0xa8);
        puStack_30 = puVar2 + *(int *)(param_1 + 0xac);
        if (puVar2 != puStack_30) {
          do {
            if ((aiStack_2c[0] == 0) ||
               (*(int *)(*(int *)(*(int *)(param_1 + 0xa0) +
                                 ((uint)puVar2 >> 1 & *(int *)(param_1 + 0xa4) - 1U) * 4) +
                        ((uint)puVar2 & 1) * 8) == aiStack_2c[0])) {
              piStack_58 = (int *)0x1;
            }
            else {
              piStack_58 = (int *)0x0;
            }
            pcStack_5c = (char *)0x854dca;
            FUN_00857e00();
            puVar2 = puVar2 + 1;
          } while (puVar2 != puStack_30);
        }
        if ((aiStack_2c[0] != 0) && (*(char *)(aiStack_2c[0] + 0x6b) != '\0')) {
          piStack_58 = (int *)0x2;
          pcStack_5c = (char *)aiStack_2c;
          ppuStack_60 = (undefined8 **)0x854dea;
          FUN_008537a0();
        }
        uStack_14 = 0xffffffff;
        piStack_58 = (int *)0x854df9;
        FUN_00468340();
        puVar2 = puStack_20;
      }
    }
  }
  puStack_20 = puVar2;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00854e20(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 ***pppuVar2;
  int *unaff_FS_OFFSET;
  uint auStack_44 [4];
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 **appuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f370f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar1;
  FUN_00854f40(param_2);
  func_0x005ba660(auStack_44,uVar1);
  uStack_8 = 0;
  func_0x005f0030(appuStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0080fd90(param_2);
  func_0x00810300(auStack_44);
  if ((undefined4 ***)(*(int *)(param_1 + 0xd4) + 0x5c) != appuStack_2c) {
    pppuVar2 = appuStack_2c;
    if (0xf < uStack_18) {
      pppuVar2 = (undefined4 ***)appuStack_2c[0];
    }
    func_0x0046a660(pppuVar2,uStack_1c);
  }
  func_0x0085ace0();
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < uStack_18) {
    func_0x0046b1f0(appuStack_2c,appuStack_2c[0],uStack_18);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_30) {
    func_0x0046b1f0(auStack_44,auStack_44[0],uStack_30);
  }
  uStack_34 = 0;
  uStack_30 = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00854f40(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  uint uStack_1d0;
  undefined1 auStack_1c4 [48];
  undefined1 auStack_194 [24];
  undefined1 auStack_17c [24];
  undefined1 auStack_164 [24];
  undefined1 auStack_14c [24];
  undefined1 auStack_134 [24];
  undefined1 auStack_11c [52];
  undefined1 auStack_e8 [24];
  undefined1 *puStack_d0;
  undefined1 auStack_cc [4];
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int *piStack_b8;
  uint uStack_b4;
  char cStack_ad;
  undefined1 auStack_ac [24];
  undefined1 auStack_94 [24];
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [36];
  int iStack_40;
  int iStack_3c;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00f37227;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_1d0 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_1d0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_34 = CONCAT44(param_1,(int)uStack_34);
  piStack_b8 = param_2;
  uStack_b4 = 0;
  iStack_c0 = param_1;
  uStack_2c = uStack_1d0;
  puVar3 = &stack0xfffffffc;
  puVar4 = &uStack_1d0;
  if ((*(char *)(param_1 + 0x6f) != '\0') ||
     (puVar3 = &stack0xfffffffc, puVar4 = &uStack_1d0, *(int *)(*param_2 + 0x14) == 0))
  goto LAB_008554cd;
  puStack_d0 = (undefined1 *)(param_1 + 0xfd);
  *puStack_d0 = 1;
  uStack_14 = 0;
  func_0x0080ff70(&iStack_40);
  uStack_14._0_1_ = 1;
  iStack_c8 = iStack_3c;
  for (iVar11 = iStack_40; iStack_c4 = iVar11, iStack_bc = iVar11, iVar11 != iStack_c8;
      iVar11 = iVar11 + 8) {
    pcVar5 = (char *)func_0x005ba660(auStack_11c);
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar5 = *(char **)pcVar5;
    }
    cStack_ad = *pcVar5;
    uStack_14._0_1_ = 1;
    FUN_00469ba0();
    if (cStack_ad == '!') {
      func_0x005ba660(auStack_134);
      uStack_14._0_1_ = 3;
      func_0x00482f60(auStack_64,1,0xffffffff);
      uStack_14._0_1_ = 5;
      FUN_00469ba0();
      uVar6 = func_0x005ba8a0(auStack_14c,0);
      uStack_14._0_1_ = 6;
      func_0x00469d30("tostring(%s)");
      uStack_14._0_1_ = 7;
      func_0x00484eb0(uVar6);
      uStack_14._0_1_ = 9;
      FUN_00469ba0();
      uStack_14._0_1_ = 10;
      FUN_00469ba0();
      uVar6 = func_0x005ba660(auStack_e8);
      uStack_14._0_1_ = 0xb;
      uVar7 = func_0x005f0030(auStack_1c4);
      uStack_14._0_1_ = 0xc;
      uVar8 = func_0x00469d30(&DAT_011426e0);
      uStack_14._0_1_ = 0xd;
      uVar7 = func_0x0046b660(auStack_194,uVar8,uVar7);
      uStack_14._0_1_ = 0xe;
      uVar7 = func_0x0046b5c0(auStack_17c,uVar7,&DAT_011a166c);
      uStack_14._0_1_ = 0xf;
      uVar6 = func_0x0046b660(auStack_164,uVar7,uVar6);
      uStack_14._0_1_ = 0x10;
      func_0x0046b5c0(auStack_94,uVar6,&DAT_0112e28c);
      uStack_14._0_1_ = 0x12;
      FUN_00469ba0();
      uStack_14._0_1_ = 0x13;
      FUN_00469ba0();
      uStack_14._0_1_ = 0x14;
      FUN_00469ba0();
      uStack_14._0_1_ = 0x15;
      FUN_00469ba0();
      uStack_14._0_1_ = 0x16;
      FUN_00469ba0();
      uStack_14._0_1_ = 0x17;
      FUN_00469ba0();
      func_0x00778710(auStack_ac,auStack_94);
      func_0x0077ad80(auStack_7c);
      iVar11 = iStack_bc;
      uStack_14._0_1_ = 0x18;
      func_0x00810300(auStack_64);
      func_0x0080f3d0(auStack_7c);
      uStack_14._0_1_ = 0x17;
      FUN_00469ba0();
      uStack_14._0_1_ = 10;
      FUN_00469ba0();
      uStack_14._0_1_ = 5;
      FUN_00469ba0();
      uStack_14._0_1_ = 1;
      FUN_00469ba0();
    }
  }
  uStack_14._0_1_ = 0;
  FUN_00482c00();
  piVar2 = uStack_34._4_4_;
  pcVar1 = *(code **)(*uStack_34._4_4_ + 0x10);
  uVar6 = func_0x005ba660(auStack_e8);
  uStack_14._0_1_ = 0x19;
  _guard_check_icall(uVar6,piStack_b8);
  (*pcVar1)();
  uStack_14._0_1_ = 0;
  FUN_00469ba0();
  uVar6 = func_0x005ba660(auStack_e8);
  uStack_14._0_1_ = 0x1a;
  func_0x00469d30("onStyleApply");
  uStack_14 = CONCAT31(uStack_14._1_3_,0x1b);
  uVar9 = func_0x0085f210(auStack_64,uVar6,piStack_b8);
  if (0 < (int)uVar9) {
    func_0x00d66d90(DAT_0145e9f0,~uVar9);
  }
  uStack_14._0_1_ = 0x1a;
  FUN_00469ba0();
  uStack_14._0_1_ = 0;
  FUN_00469ba0();
  if (*(char *)((int)piVar2 + 0xff) != '\0') {
    uStack_34 = 0;
    FUN_0077fac0(&uStack_34);
    uStack_14 = CONCAT31(uStack_14._1_3_,0x1c);
    if ((((*(char *)((int)piVar2 + 0x6b) == '\0') || (*(char *)((int)piVar2 + 0x6a) == '\0')) ||
        (*(char *)((int)piVar2 + 0x69) == '\0')) || ((int)uStack_34 == 0)) {
LAB_00855386:
      cStack_ad = '\0';
    }
    else {
      piVar10 = (int *)FUN_0077fb40(auStack_cc);
      uStack_b4 = uStack_b4 | 1;
      if (((*piVar10 != 0) || (*(int *)((int)uStack_34 + 0xf4) != 1)) &&
         (*(int *)((int)uStack_34 + 0xf4) != 2)) goto LAB_00855386;
      cStack_ad = '\x01';
    }
    uStack_14 = 0x1c;
    if ((uStack_b4 & 1) != 0) {
      uStack_b4 = uStack_b4 & 0xfffffffe;
      FUN_00468340();
    }
    if (cStack_ad != '\0') {
      FUN_008560d0();
    }
    uStack_14 = uStack_14 & 0xffffff00;
    FUN_00468340();
  }
  *(undefined1 *)((int)piVar2 + 0xff) = 0;
  *puStack_d0 = 0;
  puVar3 = puStack_24;
  puVar4 = (uint *)puStack_20;
LAB_008554cd:
  puStack_20 = (undefined1 *)puVar4;
  puStack_24 = puVar3;
  uStack_14 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined * Catch_008553d5(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xdc) + 4);
  uStack_4 = 0x8553eb;
  _guard_check_icall();
  uStack_4 = 0x8553ef;
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  uStack_4 = 0x28;
  pcStack_8 = "failed to apply style to widget \'%s\': %s";
  iStack_c = 0x855416;
  func_0x0046bc40();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iStack_c = unaff_EBP + -0x20;
  iStack_10 = *(int *)(unaff_EBP + -0xb0) + 0x10;
  uStack_14 = 0x855436;
  uVar2 = func_0x004852c0();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  *(undefined4 **)(unaff_EBP + -0xb0) = &uStack_20;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  iStack_10 = 0;
  iStack_c = 0;
  func_0x0046bc40("?applyStyle@UIWidget@@QAEXABV?$shared_ptr@VOTMLNode@@@std@@@Z",0x3d);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  func_0x005eea60(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (0xf < *(uint *)(unaff_EBP + -0x28)) {
    func_0x0046b1f0(unaff_EBP + -0x3c,*(undefined4 *)(unaff_EBP + -0x3c),
                    *(uint *)(unaff_EBP + -0x28));
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x3c) = 0;
  return &DAT_008554ba;
}



void __thiscall FUN_008554f0(int param_1,undefined4 param_2,char **param_3,char *param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint auStack_84 [5];
  uint *puStack_70;
  char *pcStack_6c;
  undefined8 *puStack_68;
  uint uStack_64;
  undefined1 auStack_58 [8];
  char *apcStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3728d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_20 = (uint *)param_3;
  uStack_14 = uStack_64;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    puStack_68 = &uStack_1c;
    uStack_1c = 0;
    pcStack_6c = (char *)0x85553d;
    FUN_00858800();
    iStack_8 = 0;
    if ((int)uStack_1c == 0) {
      puStack_68 = (undefined8 *)0x48;
      uStack_28 = 0;
      pcStack_6c = "cannot add anchors to widget \'%s\': the parent doesn\'t use anchors layout";
      uStack_24 = 0;
      pcStack_38 = (char *)0x0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      puStack_70 = (uint *)0x8555a0;
      func_0x0046bc40();
      iStack_8._0_1_ = 2;
      puStack_70 = (uint *)(param_1 + 0x10);
      auStack_84[4] = 0x8555b3;
      uVar5 = func_0x00484eb0();
      iStack_8._0_1_ = 3;
      puStack_20 = auStack_84;
      auStack_84[0] = 0;
      auStack_84[1] = 0;
      auStack_84[2] = 0;
      auStack_84[3] = 0;
      auStack_84[4] = 0;
      puStack_70 = (uint *)0x0;
      func_0x0046bc40("?addAnchor@UIWidget@@QAEXW4AnchorEdge@Fw@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z"
                      ,0x6d);
      iStack_8._0_1_ = 3;
      func_0x005eea60(3,uVar5);
      iStack_8._0_1_ = 2;
      if (0xf < uStack_3c) {
        puStack_68 = (undefined8 *)uStack_3c;
        pcStack_6c = apcStack_50[0];
        puStack_70 = (uint *)apcStack_50;
        auStack_84[4] = 0x85560a;
        func_0x0046b1f0();
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      apcStack_50[0] = (char *)((uint)apcStack_50[0] & 0xffffff00);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_24) {
        puStack_68 = (undefined8 *)uStack_24;
        pcStack_6c = pcStack_38;
        puStack_70 = (uint *)&pcStack_38;
        auStack_84[4] = 0x855638;
        func_0x0046b1f0();
      }
      uStack_28 = 0;
      uStack_24 = 0xf;
      pcStack_38 = (char *)((uint)pcStack_38 & 0xffffff00);
    }
    else {
      puStack_68 = (undefined8 *)auStack_58;
      pcStack_6c = (char *)0x855556;
      auStack_84[3] = func_0x0046b930();
      iStack_8._0_1_ = 1;
      pcStack_6c = param_4;
      puStack_70 = puStack_20;
      auStack_84[4] = param_2;
      auStack_84[2] = 0x85556b;
      func_0x00840910();
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      puStack_68 = (undefined8 *)0x855577;
      FUN_00468340();
    }
    iStack_8 = 0xffffffff;
    piVar4 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar3 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        puStack_68 = (undefined8 *)0x855671;
        _guard_check_icall();
        puStack_68 = (undefined8 *)0x855675;
        (*pcVar2)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar3 = *piVar1 + -1;
        *piVar1 = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piVar4 + 4);
          puStack_68 = (undefined8 *)0x85568c;
          _guard_check_icall();
          puStack_68 = (undefined8 *)0x855690;
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_008556b0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40(&DAT_01142038,4,uVar1);
  uStack_8 = 0;
  FUN_008554f0(param_1,&uStack_28,0);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00855760(int param_1,char **param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint *puStack_84;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint *puStack_70;
  char *pcStack_6c;
  undefined8 *puStack_68;
  uint uStack_64;
  char *apcStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [8];
  uint *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f372f5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_20 = (uint *)param_2;
  uStack_14 = uStack_64;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    puStack_68 = &uStack_1c;
    uStack_1c = 0;
    pcStack_6c = (char *)0x8557ad;
    FUN_00858800();
    iStack_8 = 0;
    if ((int)uStack_1c == 0) {
      puStack_68 = (undefined8 *)0x48;
      uStack_30 = 0;
      pcStack_6c = "cannot add anchors to widget \'%s\': the parent doesn\'t use anchors layout";
      uStack_2c = 0;
      pcStack_40 = (char *)0x0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      puStack_70 = (uint *)0x85583b;
      func_0x0046bc40();
      iStack_8._0_1_ = 3;
      puStack_70 = (uint *)(param_1 + 0x10);
      uStack_74 = 0x85584e;
      uVar5 = func_0x00484eb0();
      iStack_8._0_1_ = 4;
      puStack_20 = (uint *)&puStack_84;
      puStack_84 = (uint *)0x0;
      uStack_80 = 0;
      puStack_7c = (undefined1 *)0x0;
      uStack_78 = 0;
      uStack_74 = 0;
      puStack_70 = (uint *)0x0;
      func_0x0046bc40("?centerIn@UIWidget@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z"
                      ,0x5a);
      iStack_8._0_1_ = 4;
      func_0x005eea60(3,uVar5);
      iStack_8._0_1_ = 3;
      if (0xf < uStack_44) {
        puStack_68 = (undefined8 *)uStack_44;
        pcStack_6c = apcStack_58[0];
        puStack_70 = (uint *)apcStack_58;
        uStack_74 = 0x8558a5;
        func_0x0046b1f0();
      }
      uStack_48 = 0;
      uStack_44 = 0xf;
      apcStack_58[0] = (char *)((uint)apcStack_58[0] & 0xffffff00);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_2c) {
        puStack_68 = (undefined8 *)uStack_2c;
        pcStack_6c = pcStack_40;
        puStack_70 = (uint *)&pcStack_40;
        uStack_74 = 0x8558d3;
        func_0x0046b1f0();
      }
      uStack_30 = 0;
      uStack_2c = 0xf;
      pcStack_40 = (char *)((uint)pcStack_40 & 0xffffff00);
    }
    else {
      puStack_68 = (undefined8 *)auStack_28;
      pcStack_6c = (char *)0x8557c6;
      uStack_78 = func_0x0046b930();
      iStack_8._0_1_ = 1;
      pcStack_6c = (char *)0x6;
      puStack_70 = puStack_20;
      uStack_74 = 6;
      puStack_7c = (undefined1 *)0x8557d9;
      func_0x00840910();
      iStack_8._0_1_ = 0;
      puStack_7c = (undefined1 *)0x8557e5;
      FUN_00468340();
      puStack_7c = auStack_28;
      uStack_80 = 0x8557f3;
      uVar5 = func_0x0046b930();
      iStack_8._0_1_ = 2;
      uStack_80 = 5;
      puStack_84 = puStack_20;
      func_0x00840910(uVar5,5);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      puStack_68 = (undefined8 *)0x855812;
      FUN_00468340();
    }
    iStack_8 = 0xffffffff;
    piVar4 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar3 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        puStack_68 = (undefined8 *)0x85590c;
        _guard_check_icall();
        puStack_68 = (undefined8 *)0x855910;
        (*pcVar2)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar3 = *piVar1 + -1;
        *piVar1 = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piVar4 + 4);
          puStack_68 = (undefined8 *)0x855927;
          _guard_check_icall();
          puStack_68 = (undefined8 *)0x85592b;
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00855950(int param_1,char **param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  uint *puStack_84;
  undefined4 uStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint *puStack_70;
  char *pcStack_6c;
  undefined8 *puStack_68;
  uint uStack_64;
  char *apcStack_58 [4];
  undefined4 uStack_48;
  uint uStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [8];
  uint *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37365;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_20 = (uint *)param_2;
  uStack_14 = uStack_64;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    puStack_68 = &uStack_1c;
    uStack_1c = 0;
    pcStack_6c = (char *)0x85599d;
    FUN_00858800();
    iStack_8 = 0;
    if ((int)uStack_1c == 0) {
      puStack_68 = (undefined8 *)0x48;
      uStack_30 = 0;
      pcStack_6c = "cannot add anchors to widget \'%s\': the parent doesn\'t use anchors layout";
      uStack_2c = 0;
      pcStack_40 = (char *)0x0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      puStack_70 = (uint *)0x855a89;
      func_0x0046bc40();
      iStack_8._0_1_ = 5;
      puStack_70 = (uint *)(param_1 + 0x10);
      uStack_74 = 0x855a9c;
      uVar5 = func_0x00484eb0();
      iStack_8._0_1_ = 6;
      puStack_20 = (uint *)&puStack_84;
      puStack_84 = (uint *)0x0;
      uStack_80 = 0;
      puStack_7c = (undefined1 *)0x0;
      uStack_78 = 0;
      uStack_74 = 0;
      puStack_70 = (uint *)0x0;
      func_0x0046bc40("?fill@UIWidget@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z"
                      ,0x56);
      iStack_8._0_1_ = 6;
      func_0x005eea60(3,uVar5);
      iStack_8._0_1_ = 5;
      if (0xf < uStack_44) {
        puStack_68 = (undefined8 *)uStack_44;
        pcStack_6c = apcStack_58[0];
        puStack_70 = (uint *)apcStack_58;
        uStack_74 = 0x855af3;
        func_0x0046b1f0();
      }
      uStack_48 = 0;
      uStack_44 = 0xf;
      apcStack_58[0] = (char *)((uint)apcStack_58[0] & 0xffffff00);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      if (0xf < uStack_2c) {
        puStack_68 = (undefined8 *)uStack_2c;
        pcStack_6c = pcStack_40;
        puStack_70 = (uint *)&pcStack_40;
        uStack_74 = 0x855b21;
        func_0x0046b1f0();
      }
      uStack_30 = 0;
      uStack_2c = 0xf;
      pcStack_40 = (char *)((uint)pcStack_40 & 0xffffff00);
    }
    else {
      puStack_68 = (undefined8 *)auStack_28;
      pcStack_6c = (char *)0x8559ba;
      uStack_78 = func_0x0046b930();
      iStack_8._0_1_ = 1;
      pcStack_6c = (char *)0x3;
      puStack_70 = puStack_20;
      uStack_74 = 3;
      puStack_7c = (undefined1 *)0x8559cd;
      func_0x00840910();
      iStack_8._0_1_ = 0;
      puStack_7c = (undefined1 *)0x8559d9;
      FUN_00468340();
      puStack_7c = auStack_28;
      uStack_80 = 0x8559e7;
      uVar5 = func_0x0046b930();
      iStack_8._0_1_ = 2;
      uStack_80 = 4;
      puStack_84 = puStack_20;
      func_0x00840910(uVar5,4);
      iStack_8._0_1_ = 0;
      FUN_00468340();
      uVar5 = func_0x0046b930(auStack_28);
      iStack_8._0_1_ = 3;
      func_0x00840910(uVar5,1,puStack_20,1);
      iStack_8._0_1_ = 0;
      FUN_00468340();
      uVar5 = func_0x0046b930(auStack_28);
      iStack_8._0_1_ = 4;
      func_0x00840910(uVar5,2,puStack_20,2);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      puStack_68 = (undefined8 *)0x855a60;
      FUN_00468340();
    }
    iStack_8 = 0xffffffff;
    piVar4 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar3 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
        puStack_68 = (undefined8 *)0x855b5a;
        _guard_check_icall();
        puStack_68 = (undefined8 *)0x855b5e;
        (*pcVar2)();
        LOCK();
        piVar1 = piVar4 + 2;
        iVar3 = *piVar1 + -1;
        *piVar1 = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piVar4 + 4);
          puStack_68 = (undefined8 *)0x855b75;
          _guard_check_icall();
          puStack_68 = (undefined8 *)0x855b79;
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00855ba0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_24 [8];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec0455;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar5;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uStack_1c = 0;
    FUN_00858800(&uStack_1c);
    iStack_8 = 0;
    if ((int)uStack_1c != 0) {
      uVar6 = func_0x0046b930(auStack_24,uVar5);
      iStack_8._0_1_ = 1;
      FUN_00840a20(uVar6);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
    }
    iStack_8 = 0xffffffff;
    piVar4 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar3 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*uStack_1c._4_4_;
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
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00855c80(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f373ae;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar6 = 0;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uStack_8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    FUN_00855d80(uVar5);
    uVar6 = 0;
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6);
  return;
}



void __fastcall FUN_00855d80(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37406;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_008439e0(uStack_14);
    }
    iStack_8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    uStack_1c = *(undefined8 *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x7c) != 0) {
      uStack_24 = 0;
      FUN_0077fce0(&uStack_24);
      iStack_8._0_1_ = 1;
      if ((int)uStack_24 != 0) {
        FUN_00843a30();
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
    }
    iStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00855eb0(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37456;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    iStack_8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    uStack_1c = *(undefined8 *)(param_1 + 0x7c);
    uStack_20 = 1;
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar5 = func_0x0046b930(auStack_28,uStack_14);
      iStack_8._0_1_ = 1;
      FUN_008549f0(uVar5);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
    }
    uStack_20 = 0;
    iStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00855fc0(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37456;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    iStack_8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    uStack_1c = *(undefined8 *)(param_1 + 0x7c);
    uStack_20 = 1;
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar5 = func_0x0046b930(auStack_28,uStack_14);
      iStack_8._0_1_ = 1;
      FUN_00854b90(uVar5);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
    }
    uStack_20 = 0;
    iStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_008560d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_24 [8];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec0455;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar1;
  if ((*(char *)(param_1 + 0x6f) == '\0') && (*(char *)(param_1 + 0x6b) != '\0')) {
    uStack_1c = 0;
    FUN_0077fac0(&uStack_1c);
    iStack_8 = 0;
    if ((int)uStack_1c != 0) {
      uVar2 = func_0x0046b930(auStack_24,uVar1);
      iStack_8._0_1_ = 1;
      FUN_008537a0(uVar2,2);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00468340();
    }
    iStack_8 = 0xffffffff;
    FUN_00468340();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_008562a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f374a6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uStack_8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x7c) != 0) {
      func_0x0046b930(auStack_3c);
      uStack_8 = uStack_8 & 0xffffff00;
      FUN_00854190();
    }
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        uStack_38 = 0x85636f;
        _guard_check_icall();
        uStack_38 = 0x856373;
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          uStack_38 = 0x856388;
          _guard_check_icall();
          uStack_38 = 0x85638c;
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_008563b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f374a6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_34 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uStack_8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x7c) != 0) {
      func_0x0046b930(auStack_3c);
      uStack_8 = uStack_8 & 0xffffff00;
      FUN_00854370();
    }
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar1;
        uStack_38 = 0x85647f;
        _guard_check_icall();
        uStack_38 = 0x856483;
        (*pcVar3)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piVar1 + 4);
          uStack_38 = 0x856498;
          _guard_check_icall();
          uStack_38 = 0x85649c;
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * __fastcall FUN_008564c0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uVar5 = func_0x0046b930(auStack_18,uVar4);
    uStack_8 = 0;
    piVar6 = (int *)func_0x004683d0(uVar5);
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_14 + 1;
      iVar2 = *piVar1;
      piVar6 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_14;
        _guard_check_icall();
        piVar6 = (int *)(*pcVar3)();
        LOCK();
        piVar1 = piStack_14 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piStack_14 + 4);
          _guard_check_icall();
          piVar6 = (int *)(*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void FUN_00856560(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [4];
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f374f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  piVar5 = (int *)func_0x0046b930(auStack_2c,uVar4);
  if (DAT_0145edcc != (int *)0x0) {
    LOCK();
    DAT_0145edcc[1] = DAT_0145edcc[1] + 1;
    UNLOCK();
  }
  piVar3 = DAT_0145edcc;
  iStack_24 = DAT_0145edc8;
  iStack_1c = DAT_0145edc8;
  iStack_18 = *piVar5;
  piStack_20 = DAT_0145edcc;
  uStack_14 = 0;
  uStack_8 = 0;
  if (DAT_0145edcc != (int *)0x0) {
    LOCK();
    iVar2 = DAT_0145edcc[1] + -1;
    DAT_0145edcc[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piVar3;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piVar3[2] + -1;
      piVar3[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  if (piStack_28 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_28[1] + -1;
    piStack_28[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_28;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      piVar5 = piStack_28 + 2;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar1 = *(code **)(*piStack_28 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  if (iStack_1c == iStack_18) {
    func_0x004683d0(&DAT_0145edc0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int * __fastcall FUN_008566a0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_18 [4];
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uVar5 = func_0x0046b930(auStack_18,uVar4);
    uStack_8 = 0;
    piVar6 = (int *)func_0x004683d0(uVar5);
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar1 = piStack_14 + 1;
      iVar2 = *piVar1;
      piVar6 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_14;
        _guard_check_icall();
        piVar6 = (int *)(*pcVar3)();
        LOCK();
        piVar1 = piStack_14 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piStack_14 + 4);
          _guard_check_icall();
          piVar6 = (int *)(*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



void FUN_00856740(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [4];
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f374f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  piVar5 = (int *)func_0x0046b930(auStack_2c,uVar4);
  if (DAT_0145edd4 != (int *)0x0) {
    LOCK();
    DAT_0145edd4[1] = DAT_0145edd4[1] + 1;
    UNLOCK();
  }
  piVar3 = DAT_0145edd4;
  iStack_24 = DAT_0145edd0;
  iStack_1c = DAT_0145edd0;
  iStack_18 = *piVar5;
  piStack_20 = DAT_0145edd4;
  uStack_14 = 0;
  uStack_8 = 0;
  if (DAT_0145edd4 != (int *)0x0) {
    LOCK();
    iVar2 = DAT_0145edd4[1] + -1;
    DAT_0145edd4[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piVar3;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = piVar3[2] + -1;
      piVar3[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  if (piStack_28 != (int *)0x0) {
    LOCK();
    iVar2 = piStack_28[1] + -1;
    piStack_28[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*piStack_28;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      piVar5 = piStack_28 + 2;
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar1 = *(code **)(*piStack_28 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  if (iStack_1c == iStack_18) {
    func_0x004683d0(&DAT_0145edc0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_00856880(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *unaff_FS_OFFSET;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3753e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = 0;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    uStack_30 = *(undefined4 *)(param_1 + 0x40);
    uStack_2c = *(undefined4 *)(param_1 + 0x44);
    uStack_28 = *(undefined4 *)(param_1 + 0x48);
    uStack_24 = *(undefined4 *)(param_1 + 0x4c);
    uStack_8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x7c);
    piVar1 = *(int **)(param_1 + 0x80);
    uStack_1c = *(undefined8 *)(param_1 + 0x7c);
    uStack_20 = 1;
    if (iVar3 != 0) {
      iStack_40 = *(int *)(iVar3 + 0x200) + *(int *)(iVar3 + 0x40);
      iStack_3c = *(int *)(iVar3 + 500) + *(int *)(iVar3 + 0x44);
      iStack_38 = *(int *)(iVar3 + 0x48) - *(int *)(iVar3 + 0x1f8);
      iStack_34 = *(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x1fc);
      func_0x0047a400(&iStack_40,uStack_14);
    }
    FUN_00857930(&uStack_30);
    uStack_20 = 0;
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar4 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar4 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar4)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00856f28)
// WARNING: Removing unreachable block (ram,0x00856e8a)
// WARNING: Removing unreachable block (ram,0x00856fac)
// WARNING: Removing unreachable block (ram,0x00856fb5)
// WARNING: Removing unreachable block (ram,0x00856fd0)

void __fastcall FUN_00856da0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint uStack_58;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f3762e;
  iStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (*(char *)(param_1 + 0x6f) != '\0') {
    func_0x0046bc40();
    iStack_14 = 0;
    func_0x005c0170(param_1 + 0x10,param_1 + 0x28);
    iStack_14._0_1_ = 1;
    FUN_005ee340();
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < uStack_58) {
      func_0x0046b1f0();
    }
  }
  iStack_14 = 0xffffffff;
  func_0x0046b930();
  *(undefined1 *)(param_1 + 0x6f) = 1;
  iStack_14 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x7c) != 0) {
    iStack_14 = 3;
    FUN_00853400();
  }
  iStack_14 = CONCAT31(iStack_14._1_3_,2);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar2)();
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
  }
  func_0x008569d0();
  iStack_14 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00857000(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f37696;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x78) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iStack_30 = *(int *)(param_1 + 0x74);
  piStack_34 = *(int **)(param_1 + 0x78);
  uStack_28 = *(undefined8 *)(param_1 + 0x74);
  uStack_2c = 1;
  if (iStack_30 != 0) {
    *(int *)(iStack_30 + 0x10) = *(int *)(iStack_30 + 0x10) + 1;
  }
  cVar4 = *(char *)(**(int **)(param_1 + 0xc4) + 0xd);
  uStack_14 = uVar6;
  iVar7 = **(int **)(param_1 + 0xc4);
  while (iStack_20 = iVar7, cVar4 == '\0') {
    func_0x00d667d0(DAT_0145e9f0,uVar6);
    func_0x0077c510(iVar7 + 0x18);
    func_0x00499be0();
    iVar7 = iStack_20;
    cVar4 = *(char *)(iStack_20 + 0xd);
  }
  iVar7 = *(int *)(param_1 + 0xc4);
  func_0x0085ec30((int *)(param_1 + 0xc4),*(undefined4 *)(iVar7 + 4));
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined4 *)(param_1 + 200) = 0;
  uStack_1c = 0;
  iStack_8._0_1_ = 1;
  func_0x0046ffa0(&uStack_1c);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar1 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar7 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar5 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar5)();
      LOCK();
      piVar2 = piVar1 + 2;
      iVar7 = *piVar2 + -1;
      *piVar2 = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar5 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar5)();
      }
    }
  }
  func_0x00792a10();
  iVar7 = *(int *)(param_1 + 0xac);
  piVar1 = piStack_34;
  while (piStack_34 = piVar1, iVar7 != 0) {
    puVar3 = (undefined8 *)
             (*(int *)(*(int *)(param_1 + 0xa0) +
                      (*(uint *)(param_1 + 0xa8) >> 1 & *(int *)(param_1 + 0xa4) - 1U) * 4) +
             (*(uint *)(param_1 + 0xa8) & 1) * 8);
    iVar7 = *(int *)((int)puVar3 + 4);
    if (iVar7 != 0) {
      LOCK();
      piVar1 = (int *)(iVar7 + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uStack_1c = *puVar3;
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    iStack_8._0_1_ = 2;
    func_0x0047aa40(*(int *)(*(int *)(param_1 + 0xa0) +
                            (*(uint *)(param_1 + 0xa8) >> 1 & *(int *)(param_1 + 0xa4) - 1U) * 4) +
                    (*(uint *)(param_1 + 0xa8) & 1) * 8);
    piVar1 = (int *)(param_1 + 0xac);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    else {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    uStack_3c = 0;
    piStack_38 = (int *)0x0;
    iStack_8._0_1_ = 3;
    FUN_00857490(&uStack_3c);
    piVar1 = piStack_38;
    iStack_8._0_1_ = 2;
    if (piStack_38 != (int *)0x0) {
      LOCK();
      iVar7 = piStack_38[1] + -1;
      piStack_38[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar5 = *(code **)*piStack_38;
        _guard_check_icall();
        (*pcVar5)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar7 = *piVar2 + -1;
        *piVar2 = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar5 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar5)();
        }
      }
    }
    pcVar5 = *(code **)(**(int **)(param_1 + 0x74) + 0xc);
    _guard_check_icall(&uStack_1c);
    (*pcVar5)();
    FUN_00856da0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    piVar1 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar7 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar5 = *(code **)*uStack_1c._4_4_;
        _guard_check_icall();
        (*pcVar5)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar7 = *piVar2 + -1;
        *piVar2 = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar5 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar5)();
        }
      }
    }
    piVar1 = piStack_34;
    iVar7 = *(int *)(param_1 + 0xac);
  }
  if (iStack_30 != 0) {
    iVar7 = *(int *)(iStack_30 + 0x10) + -1;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    *(int *)(iStack_30 + 0x10) = iVar7;
  }
  uStack_2c = 0;
  iStack_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar7 = piVar1[1] + -1;
    piVar1[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar5 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar5)();
      LOCK();
      piVar2 = piVar1 + 2;
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        pcVar5 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar5)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00857350(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  uint auStack_30 [6];
  undefined1 auStack_18 [4];
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f376d5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar5 = (int *)(param_1 + 0x10);
  piVar4 = piVar5;
  if (0xf < *(uint *)(param_1 + 0x24)) {
    piVar4 = (int *)*piVar5;
  }
  piVar7 = param_2;
  if (0xf < (uint)param_2[5]) {
    piVar7 = (int *)*param_2;
  }
  iStack_14 = param_1;
  cVar2 = func_0x0046cf20(piVar7,param_2[4],piVar4,*(undefined4 *)(param_1 + 0x20),uVar3);
  if (cVar2 == '\0') {
    if (piVar5 != param_2) {
      piVar5 = param_2;
      if (0xf < (uint)param_2[5]) {
        piVar5 = (int *)*param_2;
      }
      func_0x0046a660(piVar5,param_2[4]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    func_0x0046bc40("onIdChange",10);
    iVar1 = iStack_14;
    uStack_8 = 0;
    uVar3 = func_0x0085f580(auStack_30,param_2);
    if (0 < (int)uVar3) {
      func_0x00d66d90(DAT_0145e9f0,~uVar3);
    }
    uStack_8 = 0xffffffff;
    if (0xf < auStack_30[5]) {
      func_0x0046b1f0(auStack_30,auStack_30[0],auStack_30[5]);
    }
    auStack_30[4] = 0;
    auStack_30[5] = 0xf;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    if (*(int *)(iVar1 + 0x7c) != 0) {
      uVar6 = func_0x0046b930(auStack_18);
      uStack_8 = 1;
      func_0x00852f60(uVar6);
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00857490(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  int *piStack_68;
  uint uStack_64;
  uint auStack_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  int *piStack_30;
  undefined8 *puStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3773e;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_68 = (int *)&uStack_24;
  uStack_28 = 0;
  piStack_30 = param_2;
  uStack_24 = 0;
  uStack_6c = 0x8574de;
  iStack_3c = param_1;
  uStack_14 = uStack_64;
  FUN_0077fac0();
  iStack_8 = 0;
  if ((int)uStack_24 != *param_2) {
    piStack_68 = (int *)&uStack_1c;
    uStack_1c = 0;
    uStack_6c = 0x857506;
    func_0x0046b930();
    iStack_8._0_1_ = 1;
    if ((int)uStack_24 != 0) {
      piStack_68 = (int *)&uStack_1c;
      uStack_6c = 0x85751a;
      cVar5 = FUN_00858440();
      if (cVar5 != '\0') {
        puStack_2c = (undefined8 *)&uStack_6c;
        if (uStack_1c._4_4_ != (int *)0x0) {
          LOCK();
          *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
          UNLOCK();
        }
        uStack_6c = (uint)uStack_1c;
        piStack_68 = uStack_1c._4_4_;
        iStack_8._0_1_ = 1;
        FUN_00853400();
      }
    }
    puStack_2c = (undefined8 *)(param_1 + 0x7c);
    piVar2 = *(int **)(param_1 + 0x80);
    uStack_38 = *puStack_2c;
    *(undefined4 *)puStack_2c = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    iStack_8._0_1_ = 1;
    if (piVar2 != (int *)0x0) {
      LOCK();
      iVar4 = piVar2[1] + -1;
      piVar2[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piVar2;
        piStack_68 = (int *)0x8575ae;
        _guard_check_icall();
        piStack_68 = (int *)0x8575b2;
        (*pcVar3)();
        LOCK();
        iVar4 = piVar2[2] + -1;
        piVar2[2] = iVar4;
        UNLOCK();
        param_2 = piStack_30;
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar2 + 4);
          piStack_68 = (int *)0x8575c8;
          _guard_check_icall();
          piStack_68 = (int *)0x8575cc;
          (*pcVar3)();
          param_2 = piStack_30;
        }
      }
    }
    if (*param_2 != 0) {
      uStack_6c = 0x8575e1;
      piStack_68 = param_2;
      func_0x004683d0();
      iStack_8._0_1_ = 4;
      uStack_6c = *param_2 + 0x10;
      func_0x00469da0();
      uStack_28 = 2;
      func_0x00469bd0(auStack_54);
      uStack_28 = 0;
      iStack_8._0_1_ = 1;
      if (0xf < uStack_40) {
        piStack_68 = (int *)uStack_40;
        uStack_6c = auStack_54[0];
        func_0x0046b1f0(auStack_54);
      }
      piStack_68 = (int *)&uStack_1c;
      uStack_44 = 0;
      uStack_40 = 0xf;
      auStack_54[0] = auStack_54[0] & 0xffffff00;
      uStack_6c = 0x857653;
      cVar5 = FUN_00858440();
      if (cVar5 == '\0') {
        piStack_68 = (int *)&uStack_1c;
        uStack_6c = 0x857662;
        FUN_00852c20();
      }
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    piVar2 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      iVar4 = uStack_1c._4_4_[1] + -1;
      uStack_1c._4_4_[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*uStack_1c._4_4_;
        piStack_68 = (int *)0x857682;
        _guard_check_icall();
        piStack_68 = (int *)0x857686;
        (*pcVar3)();
        LOCK();
        piVar1 = piVar2 + 2;
        iVar4 = *piVar1 + -1;
        *piVar1 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar2 + 4);
          piStack_68 = (int *)0x85769c;
          _guard_check_icall();
          piStack_68 = (int *)0x8576a0;
          (*pcVar3)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  piVar2 = uStack_24._4_4_;
  if (uStack_24._4_4_ != (int *)0x0) {
    LOCK();
    iVar4 = uStack_24._4_4_[1] + -1;
    uStack_24._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*uStack_24._4_4_;
      piStack_68 = (int *)0x8576c3;
      _guard_check_icall();
      piStack_68 = (int *)0x8576c7;
      (*pcVar3)();
      LOCK();
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        piStack_68 = (int *)0x8576dc;
        _guard_check_icall();
        piStack_68 = (int *)0x8576e0;
        (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall FUN_00857700(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37795;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 == 0) {
    func_0x00469d30();
    uStack_8 = 0;
    func_0x0047d860();
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x74) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  func_0x0046b930();
  uStack_8 = 0xffffffff;
  FUN_0077f5c0();
  *(int *)(*param_2 + 0x10) = *(int *)(*param_2 + 0x10) + 1;
  iVar5 = *(int *)(param_1 + 0xa8);
  iVar4 = *(int *)(param_1 + 0xac) + iVar5;
  for (; iVar5 != iVar4; iVar5 = iVar5 + 1) {
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)(param_1 + 0x74) + 0xc);
      _guard_check_icall();
      (*pcVar3)();
    }
    pcVar3 = *(code **)(*(int *)*param_2 + 8);
    _guard_check_icall();
    (*pcVar3)();
  }
  iVar5 = *(int *)(param_1 + 0x74);
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0x10) + -1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    *(int *)(iVar5 + 0x10) = iVar4;
    uStack_8 = 0xffffffff;
    FUN_0077f5c0();
    piVar1 = *(int **)(param_1 + 0x74);
    if ((piVar1[6] != 0) && (piVar1[4] == 0)) {
      if ((char)piVar1[5] == '\0') {
        *(undefined1 *)(piVar1 + 5) = 1;
        pcVar3 = *(code **)(*piVar1 + 0x28);
        _guard_check_icall();
        (*pcVar3)();
        pcVar3 = *(code **)(*(int *)piVar1[6] + 0x18);
        _guard_check_icall();
        (*pcVar3)();
        *(undefined1 *)(piVar1 + 5) = 0;
      }
      else {
        FUN_00843a30();
      }
    }
  }
  iVar5 = *(int *)(*param_2 + 0x10) + -1;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  *(int *)(*param_2 + 0x10) = iVar5;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar4 = param_2[1];
  iVar5 = *(int *)(param_1 + 0x74);
  piVar1 = *(int **)(param_1 + 0x78);
  *(int *)(param_1 + 0x74) = *param_2;
  *(int *)(param_1 + 0x78) = iVar4;
  uStack_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    piVar2 = piVar1 + 1;
    iVar4 = *piVar2;
    iVar5 = *piVar2;
    *piVar2 = iVar4 + -1;
    UNLOCK();
    if (iVar4 + -1 == 0) {
      pcVar3 = *(code **)*piVar1;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar2 = piVar1 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



void __thiscall FUN_00857930(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  int *unaff_FS_OFFSET;
  int aiStack_b0 [9];
  int *piStack_8c;
  undefined1 auStack_84 [8];
  int *piStack_7c;
  int *piStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint auStack_5c [8];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f37829;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_34 = *(int *)(param_1 + 0x40);
  iStack_38 = *(int *)(param_1 + 0x44);
  iStack_3c = *(int *)(param_1 + 0x48);
  auStack_5c[7] = *(int *)(param_1 + 0x4c);
  if ((((*param_2 != iStack_34) || (param_2[1] != iStack_38)) || (param_2[2] != iStack_3c)) ||
     (puVar3 = &stack0xfffffffc, param_2[3] != auStack_5c[7])) {
    *(int *)(param_1 + 0x40) = *param_2;
    *(int *)(param_1 + 0x44) = param_2[1];
    *(int *)(param_1 + 0x48) = param_2[2];
    *(int *)(param_1 + 0x4c) = param_2[3];
    FUN_00855d80(uStack_24);
    if (*(char *)(param_1 + 0xfc) == '\0') {
      uStack_2c = 0;
      func_0x0046b930(&uStack_2c);
      if (uStack_2c._4_4_ != 0) {
        LOCK();
        *(int *)(uStack_2c._4_4_ + 4) = *(int *)(uStack_2c._4_4_ + 4) + 1;
        UNLOCK();
      }
      iStack_30 = uStack_2c._4_4_;
      iVar2 = (int)uStack_2c;
      iStack_74 = (int)uStack_2c;
      iStack_70 = uStack_2c._4_4_;
      iStack_6c = iStack_34;
      iStack_68 = iStack_38;
      iStack_64 = iStack_3c;
      iStack_60 = auStack_5c[7];
      uStack_14._1_3_ = 0;
      piStack_8c = (int *)0x0;
      uStack_14._0_1_ = 3;
      piStack_8c = (int *)func_0x008ab47d(0x1c);
      piStack_7c = piStack_8c + 1;
      piStack_8c[2] = 0;
      *piStack_8c = (int)std::_Func_impl_no_alloc<>::vftable;
      *piStack_7c = iVar2;
      piStack_8c[2] = iStack_30;
      iStack_74 = 0;
      iStack_70 = 0;
      piStack_8c[3] = iStack_34;
      piStack_8c[4] = iStack_38;
      piStack_8c[5] = iStack_3c;
      piStack_8c[6] = auStack_5c[7];
      auStack_5c[6] = 0;
      uStack_14._0_1_ = 7;
      auStack_5c[4] = 0;
      auStack_5c[0] = 0;
      auStack_5c[1] = 0;
      auStack_5c[2] = 0;
      auStack_5c[3] = 0;
      auStack_5c[5] = 0;
      piStack_78 = piStack_8c;
      func_0x0046bc40("UIWidget::setRect",0x11);
      uStack_14._0_1_ = 8;
      FUN_005e5070(auStack_84,auStack_5c,aiStack_b0,0);
      FUN_00468340();
      uStack_14._0_1_ = 7;
      if (0xf < auStack_5c[5]) {
        func_0x0046b1f0(auStack_5c,auStack_5c[0],auStack_5c[5]);
      }
      auStack_5c[4] = 0;
      auStack_5c[5] = 0xf;
      auStack_5c[0] = auStack_5c[0] & 0xffffff00;
      uStack_14 = CONCAT31(uStack_14._1_3_,2);
      if (piStack_8c != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_8c + 0x10);
        _guard_check_icall(CONCAT31((int3)((uint)aiStack_b0 >> 8),piStack_8c != aiStack_b0));
        (*pcVar1)();
        piStack_8c = (int *)0x0;
      }
      *(undefined1 *)(param_1 + 0xfc) = 1;
      uStack_14 = 0xffffffff;
      FUN_00468340();
    }
    uStack_2c = CONCAT44(DAT_0145eaf0,DAT_0145eaec);
    cVar4 = FUN_0077fa00(&uStack_2c);
    puVar3 = puStack_20;
    if (cVar4 != '\0') {
      func_0x00845810(0);
      puVar3 = puStack_20;
    }
  }
  puStack_20 = puVar3;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00857bd0(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  char *pcStack_6c;
  undefined1 *puStack_68;
  uint uStack_64;
  undefined1 auStack_58 [4];
  int *piStack_54;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [6];
  undefined1 *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3788d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_64 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_6c = (char *)&uStack_1c;
  puStack_68 = (undefined1 *)param_1;
  uStack_1c = 0;
  puStack_70 = (undefined8 *)0x857c19;
  uStack_14 = uStack_64;
  FUN_00847a30();
  iStack_8 = 0;
  if ((uint)uStack_1c == 0) {
    puStack_68 = (undefined1 *)0x32;
    auStack_38[4] = (uint)uStack_1c;
    auStack_38[5] = (uint)uStack_1c;
    pcStack_6c = "unable to retrieve style \'%s\': not a defined style";
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    puStack_70 = (undefined8 *)0x857c47;
    func_0x0046bc40();
    iStack_8._0_1_ = 1;
    puStack_70 = (undefined8 *)param_1;
    uStack_74 = 0x857c57;
    uVar5 = func_0x00484eb0();
    iStack_8._0_1_ = 2;
    puStack_20 = (undefined1 *)&uStack_84;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    puStack_70 = (undefined8 *)0x0;
    func_0x0046bc40("?setStyle@UIWidget@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z"
                    ,0x5a);
    iStack_8._0_1_ = 2;
    func_0x005eea60(3,uVar5);
    iStack_8._0_1_ = 1;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(auStack_50,auStack_50[0],uStack_3c);
    }
    uStack_40 = 0;
    uStack_3c = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < auStack_38[5]) {
      func_0x0046b1f0(auStack_38,auStack_38[0],auStack_38[5]);
    }
    auStack_38[4] = 0;
    auStack_38[5] = 0xf;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
  }
  else {
    puStack_68 = auStack_58;
    pcStack_6c = (char *)0x857cfc;
    pcStack_6c = (char *)func_0x008100a0();
    iStack_8._0_1_ = 4;
    puStack_70 = (undefined8 *)0x857d09;
    func_0x0046ffa0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_54 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_54[1] + -1;
      piStack_54[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_54;
        puStack_70 = (undefined8 *)0x857d2a;
        _guard_check_icall();
        puStack_70 = (undefined8 *)0x857d2e;
        (*pcVar2)();
        LOCK();
        iVar3 = piStack_54[2] + -1;
        piStack_54[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piStack_54 + 4);
          puStack_70 = (undefined8 *)0x857d45;
          _guard_check_icall();
          puStack_70 = (undefined8 *)0x857d49;
          (*pcVar2)();
        }
      }
    }
    puStack_70 = &uStack_1c;
    uStack_74 = 0x857d57;
    FUN_00854f40();
    puStack_70 = &uStack_1c;
    uStack_74 = 0x857d66;
    func_0x004683d0();
    uStack_74 = 0x857d6d;
    func_0x0085ace0();
  }
  iStack_8 = 0xffffffff;
  piVar4 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00857dd0(undefined4 param_1)

{
  FUN_00854f40(param_1);
  func_0x004683d0(param_1);
  func_0x0085ace0();
  return;
}



void __thiscall FUN_00857e00(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x69)) {
    *(char *)(param_1 + 0x69) = param_2;
    func_0x00859ee0(0x10);
    func_0x00859ee0(1);
  }
  return;
}



void __thiscall FUN_00857e30(int param_1,char param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f378dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar1;
  if (*(char *)(param_1 + 0x6a) == param_2) goto LAB_00857efd;
  *(char *)(param_1 + 0x6a) = param_2;
  if ((param_2 == '\0') && ((*(uint *)(param_1 + 0x108) >> 1 & 1) != 0)) {
    uStack_1c = 0;
    FUN_0077fac0(&uStack_1c);
    uStack_8 = 0;
    if ((int)uStack_1c != 0) {
      FUN_00853d70(2,1);
    }
    uStack_8 = 0xffffffff;
    FUN_00468340();
    FUN_00855c80(uVar1);
    func_0x00859ee0(1);
    func_0x00859ee0(0x1000);
LAB_00857ed6:
    uVar2 = func_0x0046b930(&uStack_1c);
    uStack_8 = 2;
    func_0x00845f90(uVar2);
  }
  else {
    FUN_00855c80(uVar1);
    func_0x00859ee0(1);
    func_0x00859ee0(0x1000);
    if (param_2 == '\0') goto LAB_00857ed6;
    uVar2 = func_0x0046b930(&uStack_1c);
    uStack_8 = 1;
    func_0x00845f90(uVar2);
  }
  uStack_8 = 0xffffffff;
  FUN_00468340();
LAB_00857efd:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00857f60(undefined4 param_1)

{
  func_0x00859dd0(0x40,param_1);
  return;
}



void FUN_00857f90(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = func_0x00859dd0(0x20,param_1,uVar2);
  if (cVar1 != '\0') {
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    func_0x0046bc40("onCheckChange",0xd);
    uStack_8 = 0;
    uVar2 = func_0x004b11b0(&uStack_28,&param_1);
    if (0 < (int)uVar2) {
      func_0x00d66d90(DAT_0145e9f0,~uVar2);
    }
    uStack_8 = 0xffffffff;
    if (0xf < uStack_14) {
      func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00858060(int param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_30 [8];
  int iStack_28;
  uint uStack_24;
  char cStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37947;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_24 = 0;
  uStack_14 = uVar4;
  if (*(char *)(param_1 + 0x6b) == param_2) goto LAB_008581a1;
  *(char *)(param_1 + 0x6b) = param_2;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iStack_28 = *(int *)(param_1 + 0x7c);
  uVar6 = 2;
  piVar1 = *(int **)(param_1 + 0x80);
  uStack_1c = *(undefined8 *)(param_1 + 0x7c);
  uStack_24 = 2;
  if (iStack_28 != 0) {
    if (param_2 == '\0') {
      if ((*(uint *)(param_1 + 0x108) >> 1 & 1) != 0) {
        FUN_00853d70(2,1);
        goto LAB_0085815b;
      }
LAB_00858130:
      cStack_1d = '\0';
    }
    else {
      piVar5 = (int *)FUN_0077fb40(auStack_30);
      uVar6 = 3;
      uStack_24 = 3;
      if ((*piVar5 != 0) || (cStack_1d = '\x01', *(int *)(iStack_28 + 0xf4) == 0))
      goto LAB_00858130;
    }
    uStack_8 = 0;
    if ((uVar6 & 1) != 0) {
      uVar6 = uVar6 & 0xfffffffe;
      uStack_24 = uVar6;
      FUN_00468340(uVar4);
    }
    if (cStack_1d != '\0') {
      FUN_008560d0();
    }
  }
LAB_0085815b:
  uStack_24 = uVar6 & 0xfffffffd;
  uStack_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar5 = piVar1 + 2;
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
LAB_008581a1:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_008581c0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6d) = param_2;
  return;
}



void __thiscall FUN_008581d0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6e) = param_2;
  return;
}



void __thiscall FUN_008581e0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6c) = param_2;
  FUN_00855c80();
  return;
}



void __thiscall FUN_00858200(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}



void __thiscall FUN_00858210(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}



void __thiscall FUN_00858220(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x60) = *param_2;
  *(undefined4 *)(param_1 + 100) = param_2[1];
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_008439e0();
  }
  return;
}



undefined4 __fastcall FUN_008583c0(int param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  func_0x005f4600(*(undefined4 *)(param_1 + 0xb0),0,*(undefined4 *)(param_1 + 0xbc),
                  *(undefined4 *)(param_1 + 0xb0),0,
                  *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xbc));
  iVar1 = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xbc);
  return CONCAT31((int3)((uint)iVar1 >> 8),uStack_8 != iVar1);
}



undefined4 __fastcall FUN_00858440(int param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  func_0x005f4600(*(undefined4 *)(param_1 + 0x9c),0,*(undefined4 *)(param_1 + 0xa8),
                  *(undefined4 *)(param_1 + 0x9c),0,
                  *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8));
  iVar1 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
  return CONCAT31((int3)((uint)iVar1 >> 8),uStack_8 != iVar1);
}



int __thiscall FUN_008584c0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  uVar2 = *(int *)(param_1 + 0xac) + uVar1;
  iVar4 = 1;
  if (uVar1 != uVar2) {
    do {
      if (*(int **)(param_1 + 0x9c) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(param_1 + 0x9c);
      }
      if (*(int *)(*(int *)(*(int *)(iVar3 + 4) + (uVar1 >> 1 & *(int *)(iVar3 + 8) - 1U) * 4) +
                  (uVar1 & 1) * 8) == *param_2) {
        return iVar4;
      }
      uVar1 = uVar1 + 1;
      iVar4 = iVar4 + 1;
    } while (uVar1 != uVar2);
  }
  return -1;
}



int * __thiscall FUN_00858540(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 500);
  iVar4 = *(int *)(param_1 + 0x44);
  param_2[2] = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar6 = *(int *)(param_1 + 0x1fc);
  *param_2 = iVar1 + iVar2;
  param_2[1] = iVar3 + iVar4;
  param_2[3] = iVar5 - iVar6;
  return param_2;
}



int * __thiscall FUN_00858590(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x1f0);
  iVar3 = *(int *)(param_1 + 0x44);
  iVar4 = *(int *)(param_1 + 0x1e4);
  param_2[2] = *(int *)(param_1 + 0x1e8) + *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(param_1 + 0x1ec);
  iVar6 = *(int *)(param_1 + 0x4c);
  *param_2 = iVar1 - iVar2;
  param_2[1] = iVar3 - iVar4;
  param_2[3] = iVar5 + iVar6;
  return param_2;
}



void __thiscall FUN_008585e0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_3c;
  param_2[3] = -1;
  piStack_24 = param_2 + 3;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = -1;
  uVar6 = *(uint *)(param_1 + 0xa8);
  uVar3 = *(int *)(param_1 + 0xac) + uVar6;
  for (; uVar6 != uVar3; uVar6 = uVar6 + 1) {
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xa0) +
                             (uVar6 >> 1 & *(int *)(param_1 + 0xa4) - 1U) * 4) + (uVar6 & 1) * 8);
    if (*(char *)(iVar5 + 0x6a) != '\0') {
      if ((*(int *)(iVar5 + 0x40) <= *(int *)(iVar5 + 0x48)) &&
         (*(int *)(iVar5 + 0x44) <= *(int *)(iVar5 + 0x4c))) {
        iStack_2c = *(int *)(iVar5 + 0x1e8) + *(int *)(iVar5 + 0x48);
        iStack_1c = *(int *)(iVar5 + 0x40) - *(int *)(iVar5 + 0x1f0);
        iStack_18 = *(int *)(iVar5 + 0x44) - *(int *)(iVar5 + 0x1e4);
        iStack_10 = *(int *)(iVar5 + 0x1ec) + *(int *)(iVar5 + 0x4c);
        iStack_28 = param_2[2];
        iStack_14 = iStack_2c;
        if ((iStack_28 < *param_2) || (param_2[3] < param_2[1])) {
          param_2[1] = iStack_18;
          *param_2 = iStack_1c;
          param_2[3] = iStack_10;
          iVar5 = iStack_2c;
        }
        else {
          piVar4 = &iStack_1c;
          if (*param_2 <= iStack_1c) {
            piVar4 = param_2;
          }
          iStack_20 = *piVar4;
          piVar4 = &iStack_14;
          if (iStack_2c <= iStack_28) {
            piVar4 = param_2 + 2;
          }
          iVar5 = *piVar4;
          piVar4 = &iStack_18;
          if (param_2[1] <= iStack_18) {
            piVar4 = param_2 + 1;
          }
          iVar1 = *piVar4;
          piVar4 = &iStack_10;
          if (iStack_10 <= param_2[3]) {
            piVar4 = piStack_24;
          }
          iVar2 = *piVar4;
          *param_2 = iStack_20;
          param_2[1] = iVar1;
          param_2[3] = iVar2;
        }
        param_2[2] = iVar5;
      }
    }
  }
  iStack_38 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x200);
  iStack_34 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x1fc);
  iVar5 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x1f8);
  iStack_30 = *(int *)(param_1 + 500) + *(int *)(param_1 + 0x44);
  if (*param_2 <= param_2[2]) {
    iVar1 = param_2[1];
    if (iVar1 <= param_2[3]) {
      if ((param_2[2] - *param_2) + 1 < (iVar5 - iStack_38) + 1) {
        param_2[2] = (iVar5 - iStack_38) + *param_2;
      }
      if ((param_2[3] - iVar1) + 1 < (iStack_34 - iStack_30) + 1) {
        param_2[3] = (iVar1 - iStack_30) + iStack_34;
        FUN_008ab370();
        return;
      }
      goto LAB_008587e7;
    }
  }
  *param_2 = iStack_38;
  param_2[1] = iStack_30;
  param_2[2] = iVar5;
  param_2[3] = iStack_34;
LAB_008587e7:
  FUN_008ab370();
  return;
}



void FUN_00858800(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_28;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f379ee;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  uStack_18 = uVar5;
  FUN_0077fac0(&uStack_28);
  iStack_8 = 1;
  if ((int)uStack_28 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    iStack_8 = 0;
    piVar3 = uStack_28._4_4_;
    if (uStack_28._4_4_ == (int *)0x0) goto LAB_00858a23;
    LOCK();
    iVar2 = uStack_28._4_4_[1] + -1;
    uStack_28._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_00858a23;
    pcVar6 = *(code **)*uStack_28._4_4_;
    _guard_check_icall(uVar5);
    (*pcVar6)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_00858a23;
    pcVar6 = *(code **)(*piVar3 + 4);
  }
  else {
    uStack_20 = 0;
    FUN_0077fce0(&uStack_20);
    iStack_8._0_1_ = 2;
    pcVar6 = *(code **)(*(int *)uStack_20 + 0x10);
    _guard_check_icall(uVar5);
    cVar4 = (*pcVar6)();
    if (cVar4 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      iStack_8._0_1_ = 1;
      piVar3 = uStack_20._4_4_;
      if (uStack_20._4_4_ != (int *)0x0) {
        LOCK();
        iVar2 = uStack_20._4_4_[1] + -1;
        uStack_20._4_4_[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar6 = *(code **)*uStack_20._4_4_;
          _guard_check_icall(uVar5);
          (*pcVar6)();
          LOCK();
          piVar1 = piVar3 + 2;
          iVar2 = *piVar1 + -1;
          *piVar1 = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar6 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      piVar3 = uStack_28._4_4_;
      if (uStack_28._4_4_ == (int *)0x0) goto LAB_00858a23;
      LOCK();
      iVar2 = uStack_28._4_4_[1] + -1;
      uStack_28._4_4_[1] = iVar2;
      UNLOCK();
      if (iVar2 != 0) goto LAB_00858a23;
      pcVar6 = *(code **)*uStack_28._4_4_;
      _guard_check_icall();
      (*pcVar6)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) goto LAB_00858a23;
      pcVar6 = *(code **)(*piVar3 + 4);
    }
    else {
      func_0x0046b930(param_1);
      iStack_8._0_1_ = 1;
      piVar3 = uStack_20._4_4_;
      if (uStack_20._4_4_ != (int *)0x0) {
        LOCK();
        iVar2 = uStack_20._4_4_[1] + -1;
        uStack_20._4_4_[1] = iVar2;
        UNLOCK();
        if (iVar2 == 0) {
          pcVar6 = *(code **)*uStack_20._4_4_;
          _guard_check_icall();
          (*pcVar6)();
          LOCK();
          piVar1 = piVar3 + 2;
          iVar2 = *piVar1 + -1;
          *piVar1 = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar6 = *(code **)(*piVar3 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      piVar3 = uStack_28._4_4_;
      if (uStack_28._4_4_ == (int *)0x0) goto LAB_00858a23;
      LOCK();
      iVar2 = uStack_28._4_4_[1] + -1;
      uStack_28._4_4_[1] = iVar2;
      UNLOCK();
      if (iVar2 != 0) goto LAB_00858a23;
      pcVar6 = *(code **)*uStack_28._4_4_;
      _guard_check_icall();
      (*pcVar6)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) goto LAB_00858a23;
      pcVar6 = *(code **)(*piVar3 + 4);
    }
  }
  _guard_check_icall(uVar5);
  (*pcVar6)();
LAB_00858a23:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00858a50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  int *unaff_FS_OFFSET;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37a46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uVar6 = param_1;
  uStack_14 = uVar4;
  FUN_0077fac0(&uStack_1c);
  uStack_8 = 1;
  if ((int)uStack_1c == 0) {
    func_0x0046b930(param_1,uVar4);
    uVar7 = 1;
    uStack_8 = uStack_8 & 0xffffff00;
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_00858b4d;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_00858b4d;
    pcVar5 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar5)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_00858b4d;
    pcVar5 = *(code **)(*piVar3 + 4);
  }
  else {
    FUN_00858a50(param_1);
    uVar7 = 1;
    uStack_8 = uStack_8 & 0xffffff00;
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ == (int *)0x0) goto LAB_00858b4d;
    LOCK();
    iVar2 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar2;
    UNLOCK();
    if (iVar2 != 0) goto LAB_00858b4d;
    pcVar5 = *(code **)*uStack_1c._4_4_;
    _guard_check_icall();
    (*pcVar5)();
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_00858b4d;
    pcVar5 = *(code **)(*piVar3 + 4);
  }
  _guard_check_icall();
  (*pcVar5)();
LAB_00858b4d:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6,uVar7);
  return;
}



void __thiscall FUN_00858b70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 *puVar6;
  int *piStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37a8e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar6 = param_2;
  func_0x005f4600(*(undefined4 *)(param_1 + 0x9c),0,*(undefined4 *)(param_1 + 0xa8),
                  *(undefined4 *)(param_1 + 0x9c),0,
                  *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8),uVar3);
  uVar3 = *(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xac);
  if ((uStack_18 == uVar3) || (uVar4 = uStack_18 + 1, uVar4 == uVar3)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (piStack_20 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piStack_20;
    }
    uVar3 = uVar4 & 1;
    iVar5 = *(int *)(*(int *)(iVar5 + 4) + (uVar4 >> 1 & *(int *)(iVar5 + 8) - 1U) * 4);
    *param_2 = 0;
    param_2[1] = 0;
    iVar2 = *(int *)(iVar5 + 4 + uVar3 * 8);
    if (iVar2 != 0) {
      LOCK();
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(undefined4 *)(iVar5 + uVar3 * 8);
    param_2[1] = *(undefined4 *)(iVar5 + 4 + uVar3 * 8);
  }
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar6);
  return;
}



void __thiscall FUN_00858ca0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puVar5;
  int *piStack_20;
  int iStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37ade;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar5 = param_2;
  func_0x0085ea70(*(undefined4 *)(param_1 + 0x9c),0,
                  *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8),
                  *(undefined4 *)(param_1 + 0x9c),0,*(undefined4 *)(param_1 + 0xa8),uVar3);
  if ((iStack_18 == *(int *)(param_1 + 0xa8)) || (iStack_18 + -1 == *(int *)(param_1 + 0xa8))) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (piStack_20 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piStack_20;
    }
    uVar3 = iStack_18 - 2U & 1;
    iVar4 = *(int *)(*(int *)(iVar4 + 4) + (iStack_18 - 2U >> 1 & *(int *)(iVar4 + 8) - 1U) * 4);
    *param_2 = 0;
    param_2[1] = 0;
    iVar2 = *(int *)(iVar4 + 4 + uVar3 * 8);
    if (iVar2 != 0) {
      LOCK();
      piVar1 = (int *)(iVar2 + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(undefined4 *)(iVar4 + uVar3 * 8);
    param_2[1] = *(undefined4 *)(iVar4 + 4 + uVar3 * 8);
  }
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(puVar5);
  return;
}



int * __thiscall FUN_00858dc0(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 ***pppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  int *piStack_24;
  uint uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  char cStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ed2a17;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uVar5 = *(uint *)(param_1 + 0xa8);
  uStack_20 = *(int *)(param_1 + 0xac) + uVar5;
  iStack_1c = param_1;
  if (uVar5 != uStack_20) {
    do {
      piStack_24 = (int *)(*(int *)(*(int *)(iStack_1c + 0xa0) +
                                   (uVar5 >> 1 & *(int *)(iStack_1c + 0xa4) - 1U) * 4) +
                          (uVar5 & 1) * 8);
      uStack_8 = 1;
      func_0x00469da0(*piStack_24 + 0x10,uVar2);
      uStack_18 = 2;
      puVar4 = param_3;
      if (0xf < (uint)param_3[5]) {
        puVar4 = (undefined4 *)*param_3;
      }
      pppuVar3 = appuStack_3c;
      if (0xf < uStack_28) {
        pppuVar3 = (undefined4 ***)appuStack_3c[0];
      }
      cStack_11 = func_0x0046cf20(pppuVar3,uStack_2c,puVar4,param_3[4]);
      uStack_18 = 0;
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < uStack_28) {
        func_0x0046b1f0(appuStack_3c,appuStack_3c[0],uStack_28);
      }
      uStack_2c = 0;
      uStack_28 = 0xf;
      appuStack_3c[0] = (undefined4 **)((uint)appuStack_3c[0] & 0xffffff00);
      if (cStack_11 != '\0') {
        *param_2 = 0;
        param_2[1] = 0;
        if (piStack_24[1] != 0) {
          LOCK();
          piVar1 = (int *)(piStack_24[1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        *param_2 = *piStack_24;
        param_2[1] = piStack_24[1];
        goto LAB_00858ecf;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uStack_20);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_00858ecf:
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 * __thiscall FUN_00858f20(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37b2e;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar3 = FUN_0077f980(param_3);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar9 = *(int *)(param_1 + 0xac) + *(uint *)(param_1 + 0xa8);
    uVar4 = uVar9;
    for (; uVar4 = uVar4 - 1, uVar9 != *(uint *)(param_1 + 0xa8); uVar9 = uVar9 - 1) {
      if (*(int **)(param_1 + 0x9c) == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = **(int **)(param_1 + 0x9c);
      }
      iVar7 = *(int *)(*(int *)(iVar7 + 4) + (uVar4 >> 1 & *(int *)(iVar7 + 8) - 1U) * 4);
      iVar6 = *(int *)(iVar7 + (uVar4 & 1) * 8);
      puVar2 = (undefined4 *)(iVar7 + (uVar4 & 1) * 8);
      if (*(char *)(iVar6 + 0x6a) != '\0') {
        iVar7 = *(int *)(iVar6 + 0x40);
        iVar8 = *(int *)(iVar6 + 0x48);
        iVar5 = iVar8;
        if (iVar7 + -1 <= iVar8) {
          iVar5 = iVar7;
          iVar7 = iVar8;
        }
        if ((iVar5 <= *param_3) && (*param_3 <= iVar7)) {
          iVar7 = *(int *)(iVar6 + 0x44);
          iVar6 = *(int *)(iVar6 + 0x4c);
          iVar8 = iVar7;
          if (iVar7 + -1 <= iVar6) {
            iVar8 = iVar6;
          }
          if (iVar7 + -1 <= iVar6) {
            iVar6 = iVar7;
          }
          if ((iVar6 <= param_3[1]) && (param_3[1] <= iVar8)) {
            *param_2 = 0;
            param_2[1] = 0;
            if (puVar2[1] != 0) {
              LOCK();
              piVar1 = (int *)(puVar2[1] + 4);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            *param_2 = *puVar2;
            param_2[1] = puVar2[1];
            goto LAB_00859060;
          }
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
LAB_00859060:
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00859090(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  if (param_3 < 1) {
    iVar4 = *(int *)(param_1 + 0xac);
  }
  else {
    iVar4 = -1;
  }
  uVar5 = iVar4 + param_3;
  if (((int)uVar5 < 0) || (*(uint *)(param_1 + 0xac) <= uVar5)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar5 = *(int *)(param_1 + 0xa8) + uVar5;
    puVar2 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 0xa0) + (uVar5 >> 1 & *(int *)(param_1 + 0xa4) - 1U) * 4)
             + (uVar5 & 1) * 8);
    *param_2 = 0;
    param_2[1] = 0;
    if (puVar2[1] != 0) {
      LOCK();
      piVar1 = (int *)(puVar2[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
  }
  *unaff_FS_OFFSET = iVar3;
  return;
}



int * __thiscall FUN_00859160(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_38 [4];
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f37b7e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  piStack_30 = param_2;
  uStack_1c = 0;
  piStack_24 = param_2;
  uStack_20 = param_3;
  param_2[0] = 0;
  param_2[1] = 0;
  iStack_2c = param_1;
  FUN_00858dc0(param_2,param_3);
  iStack_8 = 0;
  uStack_1c = 1;
  if (*param_2 == 0) {
    iVar7 = *(int *)(param_1 + 0xa8);
    iStack_28 = *(int *)(param_1 + 0xac) + iVar7;
    if (iVar7 != iStack_28) {
      do {
        piVar6 = (int *)FUN_00859160(auStack_38,uStack_20);
        iVar2 = *piVar6;
        iVar3 = piVar6[1];
        *piVar6 = 0;
        piVar6[1] = 0;
        iStack_18 = *param_2;
        *param_2 = iVar2;
        piVar6 = (int *)param_2[1];
        param_2[1] = iVar3;
        iStack_8._1_3_ = 0;
        iStack_8._0_1_ = 1;
        piStack_14 = piVar6;
        if (piVar6 != (int *)0x0) {
          LOCK();
          iVar2 = piVar6[1] + -1;
          piVar6[1] = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar4 = *(code **)*piVar6;
            _guard_check_icall(uVar5);
            (*pcVar4)();
            LOCK();
            iVar2 = piVar6[2] + -1;
            piVar6[2] = iVar2;
            UNLOCK();
            if (iVar2 == 0) {
              pcVar4 = *(code **)(*piVar6 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
        piVar6 = piStack_34;
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        if (piStack_34 != (int *)0x0) {
          LOCK();
          iVar2 = piStack_34[1] + -1;
          piStack_34[1] = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar4 = *(code **)*piStack_34;
            _guard_check_icall(uVar5);
            (*pcVar4)();
            LOCK();
            piVar1 = piVar6 + 2;
            iVar2 = *piVar1 + -1;
            *piVar1 = iVar2;
            UNLOCK();
            if (iVar2 == 0) {
              pcVar4 = *(code **)(*piVar6 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
        param_2 = piStack_24;
      } while ((*piStack_24 == 0) && (iVar7 = iVar7 + 1, iVar7 != iStack_28));
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00859310(int param_1,int *param_2,int *param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int *piVar12;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37bc6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar12 = param_2;
  uStack_14 = uVar7;
  cVar6 = FUN_0077f980(param_3);
  if (cVar6 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x71) == '\0') ||
       (cVar6 = func_0x0085dc00(param_3,uVar7), cVar6 == '\0')) {
      piVar3 = *(int **)(param_1 + 0x9c);
      uVar8 = *(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8);
      uVar7 = uVar8;
      for (; uVar7 = uVar7 - 1, uVar8 != *(uint *)(param_1 + 0xa8); uVar8 = uVar8 - 1) {
        if (piVar3 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *piVar3;
        }
        iVar11 = *(int *)(*(int *)(iVar11 + 4) + (uVar7 >> 1 & *(int *)(iVar11 + 8) - 1U) * 4);
        iVar4 = *(int *)(iVar11 + (uVar7 & 1) * 8);
        piVar2 = (int *)(iVar11 + (uVar7 & 1) * 8);
        if (*(char *)(iVar4 + 0x6a) != '\0') {
          iVar11 = *(int *)(iVar4 + 0x40);
          iVar10 = *(int *)(iVar4 + 0x48);
          iVar9 = iVar10;
          if (iVar11 + -1 <= iVar10) {
            iVar9 = iVar11;
            iVar11 = iVar10;
          }
          if ((iVar9 <= *param_3) && (*param_3 <= iVar11)) {
            iVar11 = *(int *)(iVar4 + 0x44);
            iVar4 = *(int *)(iVar4 + 0x4c);
            iVar10 = iVar4;
            if (iVar11 + -1 <= iVar4) {
              iVar10 = iVar11;
              iVar11 = iVar4;
            }
            if ((iVar10 <= param_3[1]) && (param_3[1] <= iVar11)) {
              uStack_1c = 0;
              FUN_00859310(&uStack_1c,param_3,param_4);
              uStack_8 = 1;
              if ((int)uStack_1c != 0) {
                *param_2 = (int)uStack_1c;
                param_2[1] = 0;
                param_2[1] = (int)uStack_1c._4_4_;
                uStack_1c = 0;
                uStack_8 = 0;
                goto LAB_008595ca;
              }
              if (param_4 != '\0') {
LAB_00859514:
                *param_2 = 0;
                param_2[1] = 0;
                if (piVar2[1] != 0) {
                  LOCK();
                  piVar3 = (int *)(piVar2[1] + 4);
                  *piVar3 = *piVar3 + 1;
                  UNLOCK();
                }
                *param_2 = *piVar2;
                param_2[1] = piVar2[1];
                uStack_8 = uStack_8 & 0xffffff00;
                piVar3 = uStack_1c._4_4_;
                if (uStack_1c._4_4_ != (int *)0x0) {
                  LOCK();
                  iVar11 = uStack_1c._4_4_[1] + -1;
                  uStack_1c._4_4_[1] = iVar11;
                  UNLOCK();
                  if (iVar11 == 0) {
                    pcVar5 = *(code **)*uStack_1c._4_4_;
                    _guard_check_icall();
                    (*pcVar5)();
                    LOCK();
                    piVar2 = piVar3 + 2;
                    iVar11 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar11 == 1) {
                      pcVar5 = *(code **)(*piVar3 + 4);
                      _guard_check_icall();
                      (*pcVar5)();
                    }
                  }
                }
                goto LAB_008595ca;
              }
              iVar11 = *piVar2;
              if (*(char *)(iVar11 + 0x6d) == '\0') {
                if (*(char *)(iVar11 + 0x71) == '\0') goto LAB_00859514;
                iVar4 = *(int *)(iVar11 + 0x260);
                if (iVar4 != 0) {
                  if (*(int *)(iVar4 + 0x60) == *(int *)(iVar4 + 0x5c)) {
                    func_0x0062bc50(iVar11 + 0x268);
                  }
                  if (*(char *)(*(int *)(*(int *)(iVar11 + 0x260) + 0x20) *
                                (param_3[1] - *(int *)(iVar11 + 0x44)) +
                                (*param_3 - *(int *)(iVar11 + 0x40)) +
                               *(int *)(*(int *)(iVar11 + 0x260) + 0x5c)) != '\x01')
                  goto LAB_00859514;
                }
              }
              uStack_8 = uStack_8 & 0xffffff00;
              piVar2 = uStack_1c._4_4_;
              if (uStack_1c._4_4_ != (int *)0x0) {
                LOCK();
                iVar11 = uStack_1c._4_4_[1] + -1;
                uStack_1c._4_4_[1] = iVar11;
                UNLOCK();
                if (iVar11 == 0) {
                  pcVar5 = *(code **)*uStack_1c._4_4_;
                  _guard_check_icall();
                  (*pcVar5)();
                  LOCK();
                  piVar1 = piVar2 + 2;
                  iVar11 = *piVar1 + -1;
                  *piVar1 = iVar11;
                  UNLOCK();
                  if (iVar11 == 0) {
                    pcVar5 = *(code **)(*piVar2 + 4);
                    _guard_check_icall();
                    (*pcVar5)();
                  }
                }
              }
            }
          }
        }
      }
    }
    param_2[1] = 0;
    *param_2 = 0;
  }
  uStack_8 = 0;
LAB_008595ca:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(piVar12);
  return;
}



void FUN_008595f0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f37c16;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puStack_40 = param_1;
  uStack_34 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar2 = (undefined4 *)func_0x008ab47d(8,uStack_14);
  puVar2[1] = 0;
  *param_1 = puVar2;
  *puVar2 = param_1;
  uStack_8 = 0;
  uStack_34 = 1;
  uVar3 = *(uint *)(iStack_2c + 0xa8);
  uStack_3c = *(int *)(iStack_2c + 0xac) + uVar3;
  if (uVar3 != uStack_3c) {
    do {
      iStack_18 = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      iStack_1c = 0;
      iStack_38 = *(int *)(*(int *)(iStack_2c + 0xa0) +
                          (uVar3 >> 1 & *(int *)(iStack_2c + 0xa4) - 1U) * 4) + (uVar3 & 1) * 8;
      FUN_008595f0(&uStack_28);
      uStack_8 = 1;
      if (iStack_18 != 0) {
        func_0x0085eb10(auStack_4c,*param_1,0,param_1[4] + param_1[3],uStack_28,0,iStack_1c,
                        uStack_28,0,iStack_1c + iStack_18);
      }
      func_0x00470370(iStack_38);
      uStack_8 = uStack_8 & 0xffffff00;
      func_0x00792a10();
      uVar1 = uStack_28;
      uStack_28 = 0;
      func_0x008ab812(uVar1,8);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uStack_3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_008597b0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [12];
  undefined4 *puStack_50;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37c66;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_50 = param_1;
  uStack_34 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puStack_38 = param_1;
  piStack_30 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = (undefined4 *)func_0x008ab47d(8,uStack_14);
  iVar6 = iStack_44;
  puVar3[1] = 0;
  *param_1 = puVar3;
  *puVar3 = param_1;
  uStack_8 = 0;
  uStack_34 = 1;
  cVar2 = FUN_0077f980(param_2);
  if (cVar2 != '\0') {
    piStack_4c = *(int **)(iVar6 + 0x9c);
    uStack_3c = *(int *)(iVar6 + 0xac) + *(int *)(iVar6 + 0xa8);
    uStack_40 = uStack_3c;
    for (; puVar3 = puStack_38, uStack_40 = uStack_40 - 1, uStack_3c != *(uint *)(iVar6 + 0xa8);
        uStack_3c = uStack_3c - 1) {
      if (piStack_4c == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piStack_4c;
      }
      iStack_48 = *(int *)(*(int *)(iVar6 + 4) + (uStack_40 >> 1 & *(int *)(iVar6 + 8) - 1U) * 4);
      iVar6 = *(int *)(iStack_48 + (uStack_40 & 1) * 8);
      iStack_48 = iStack_48 + (uStack_40 & 1) * 8;
      if (*(char *)(iVar6 + 0x6a) != '\0') {
        iStack_2c = *(int *)(iVar6 + 0x40);
        iVar5 = *(int *)(iVar6 + 0x48);
        iVar4 = iVar5;
        if (iStack_2c + -1 <= iVar5) {
          iVar4 = iStack_2c;
          iStack_2c = iVar5;
        }
        if ((iVar4 <= *piStack_30) && (*piStack_30 <= iStack_2c)) {
          iStack_2c = *(int *)(iVar6 + 0x44);
          iVar6 = *(int *)(iVar6 + 0x4c);
          iVar5 = iVar6;
          if (iStack_2c + -1 <= iVar6) {
            iVar5 = iStack_2c;
            iStack_2c = iVar6;
          }
          if ((iVar5 <= piStack_30[1]) && (piStack_30[1] <= iStack_2c)) {
            iStack_18 = 0;
            uStack_28 = 0;
            uStack_24 = 0;
            uStack_20 = 0;
            iStack_1c = 0;
            FUN_008597b0(&uStack_28,piStack_30);
            uStack_8 = 1;
            if (iStack_18 != 0) {
              func_0x0085eb10(auStack_5c,*puVar3,0,puVar3[4] + puVar3[3],uStack_28,0,iStack_1c,
                              uStack_28,0,iStack_1c + iStack_18);
            }
            func_0x00470370(iStack_48);
            uStack_8 = uStack_8 & 0xffffff00;
            func_0x00792a10();
            uVar1 = uStack_28;
            uStack_28 = 0;
            func_0x008ab812(uVar1,8);
          }
        }
      }
      iVar6 = iStack_44;
    }
  }
  uStack_34 = 0;
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00859a10(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [12];
  undefined4 *puStack_58;
  int *piStack_54;
  undefined4 *puStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int *piStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f37cb6;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_58 = param_1;
  uStack_30 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puStack_50 = param_1;
  piStack_3c = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar4 = (undefined4 *)func_0x008ab47d(8,uStack_14);
  iVar7 = iStack_4c;
  puVar4[1] = 0;
  *param_1 = puVar4;
  *puVar4 = param_1;
  uStack_8 = 0;
  uStack_30 = 1;
  cVar3 = FUN_0077f980(param_2);
  if (cVar3 != '\0') {
    piStack_54 = *(int **)(iVar7 + 0x9c);
    uStack_44 = *(int *)(iVar7 + 0xac) + *(int *)(iVar7 + 0xa8);
    uStack_48 = uStack_44;
    for (; puVar4 = puStack_50, uStack_48 = uStack_48 - 1, uStack_44 != *(uint *)(iVar7 + 0xa8);
        uStack_44 = uStack_44 - 1) {
      if (piStack_54 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piStack_54;
      }
      piVar1 = (int *)(*(int *)(*(int *)(iVar7 + 4) +
                               (uStack_48 >> 1 & *(int *)(iVar7 + 8) - 1U) * 4) +
                      (uStack_48 & 1) * 8);
      iVar7 = *piVar1;
      piStack_40 = piVar1;
      if (*(char *)(iVar7 + 0x6a) != '\0') {
        iVar5 = *(int *)(iVar7 + 0x1e8) + *(int *)(iVar7 + 0x48);
        iStack_2c = *(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x1f0);
        iStack_38 = *(int *)(iVar7 + 0x44) - *(int *)(iVar7 + 0x1e4);
        iVar6 = *(int *)(iVar7 + 0x1ec) + *(int *)(*piVar1 + 0x4c);
        iVar7 = iVar5;
        if (iStack_2c + -1 <= iVar5) {
          iVar7 = iStack_2c;
          iStack_2c = iVar5;
        }
        iStack_34 = *piStack_3c;
        if ((iVar7 <= iStack_34) && (iStack_34 <= iStack_2c)) {
          iVar5 = iVar6;
          iVar7 = iStack_38;
          if (iStack_38 + -1 <= iVar6) {
            iVar5 = iStack_38;
            iVar7 = iVar6;
          }
          if ((iVar5 <= piStack_3c[1]) && (piStack_3c[1] <= iVar7)) {
            iStack_18 = 0;
            uStack_28 = 0;
            uStack_24 = 0;
            uStack_20 = 0;
            iStack_1c = 0;
            FUN_00859a10(&uStack_28,piStack_3c);
            uStack_8 = 1;
            if (iStack_18 != 0) {
              func_0x0085eb10(auStack_64,*puVar4,0,puVar4[4] + puVar4[3],uStack_28,0,iStack_1c,
                              uStack_28,0,iStack_1c + iStack_18);
            }
            func_0x00470370(piVar1);
            uStack_8 = uStack_8 & 0xffffff00;
            func_0x00792a10();
            uVar2 = uStack_28;
            uStack_28 = 0;
            func_0x008ab812(uVar2,8);
          }
        }
      }
      iVar7 = iStack_4c;
    }
  }
  uStack_30 = 0;
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00859c90(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [8];
  int *piStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f37d1f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_24 = param_2;
  uStack_20 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  uStack_14 = uVar4;
  FUN_00858dc0(param_2,param_3);
  uStack_8 = 0;
  uStack_20 = 1;
  if (*param_2 == 0) {
    uStack_8 = 1;
    if (*(int *)(param_1 + 0x80) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(param_1 + 0x80) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x80);
    uStack_1c = *(undefined8 *)(param_1 + 0x7c);
    uStack_20 = 3;
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar5 = FUN_00859c90(auStack_2c,param_3);
      uStack_8._0_1_ = 2;
      func_0x0046ffa0(uVar5,uVar4);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      FUN_00468340();
    }
    uStack_20 = 1;
    uStack_8 = uStack_8 & 0xffffff00;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar2)();
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
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0085b8a0(int param_1,undefined4 param_2,undefined4 ***param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 **ppuVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 **ppuStack_80;
  char *pcStack_7c;
  undefined4 uStack_78;
  undefined4 **ppuStack_74;
  undefined4 **ppuStack_70;
  undefined4 **ppuStack_6c;
  int *piStack_68;
  undefined4 **ppuStack_64;
  undefined4 *puStack_60;
  undefined1 *puStack_5c;
  uint uStack_58;
  undefined1 auStack_4c [8];
  undefined1 *puStack_44;
  undefined4 **ppuStack_3c;
  int iStack_38;
  undefined4 **ppuStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f382bd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_58 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  ppuStack_3c = param_3;
  iStack_38 = param_1;
  uStack_14 = uStack_58;
  if (*(char *)(param_1 + 0x6f) == '\0') {
    puStack_5c = (undefined1 *)0x2;
    uStack_24 = 0;
    puStack_60 = (undefined4 *)&DAT_0113fde4;
    ppuStack_34 = (undefined4 ***)0x0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    ppuStack_64 = (undefined4 **)0x85b905;
    func_0x0046bc40();
    uStack_8 = 0;
    ppuStack_64 = &ppuStack_34;
    piStack_68 = &iStack_1c;
    ppuStack_6c = (undefined4 **)0x85b91b;
    func_0x0080f520();
    uStack_8._0_1_ = 2;
    if (0xf < uStack_20) {
      ppuStack_6c = (undefined4 **)uStack_20;
      ppuStack_70 = ppuStack_34;
      ppuStack_74 = &ppuStack_34;
      uStack_78 = 0x85b934;
      func_0x0046b1f0();
    }
    uStack_24 = 0;
    uStack_20 = 0xf;
    ppuStack_34 = (undefined4 **)((uint)ppuStack_34 & 0xffffff00);
    if (iStack_1c != 0) {
      ppuStack_6c = (undefined4 **)0x0;
      ppuStack_70 = &ppuStack_34;
      ppuStack_74 = (undefined4 ***)0x85b95b;
      ppuStack_6c = (undefined4 **)func_0x005ba8a0();
      uStack_8._0_1_ = 3;
      ppuStack_70 = (undefined4 ***)0x85b967;
      FUN_00857350();
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      if (0xf < uStack_20) {
        ppuStack_6c = (undefined4 **)uStack_20;
        ppuStack_70 = ppuStack_34;
        ppuStack_74 = &ppuStack_34;
        uStack_78 = 0x85b980;
        func_0x0046b1f0();
      }
      ppuStack_34 = (undefined4 **)((uint)ppuStack_34 & 0xffffff00);
    }
    piVar5 = piStack_18;
    uStack_20 = 0xf;
    uStack_24 = 0;
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_18[1] + -1;
      piStack_18[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_18;
        ppuStack_6c = (undefined4 **)0x85b9b9;
        _guard_check_icall();
        ppuStack_6c = (undefined4 **)0x85b9bd;
        (*pcVar2)();
        LOCK();
        piVar1 = piVar5 + 2;
        iVar3 = *piVar1 + -1;
        *piVar1 = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piVar5 + 4);
          ppuStack_6c = (undefined4 **)0x85b9d4;
          _guard_check_icall();
          ppuStack_6c = (undefined4 **)0x85b9d8;
          (*pcVar2)();
        }
      }
    }
    ppuVar4 = ppuStack_3c;
    ppuStack_6c = ppuStack_3c;
    ppuStack_70 = (undefined4 **)0x85b9e6;
    func_0x00862d00();
    ppuStack_70 = ppuVar4;
    ppuStack_74 = (undefined4 **)0x85b9ee;
    func_0x008681a0();
    ppuStack_74 = ppuVar4;
    uStack_78 = 0x85b9f6;
    func_0x0086a620();
    uStack_78 = 10;
    uStack_24 = 0;
    pcStack_7c = "merge-otui";
    ppuStack_34 = (undefined4 **)0x0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    ppuStack_80 = (undefined4 **)0x85ba1c;
    func_0x0046bc40();
    uStack_8 = 4;
    ppuStack_80 = &ppuStack_34;
    piStack_84 = &iStack_1c;
    uStack_88 = 0x85ba32;
    func_0x0080f520();
    uStack_8._0_1_ = 6;
    if (0xf < uStack_20) {
      puStack_5c = (undefined1 *)uStack_20;
      puStack_60 = ppuStack_34;
      ppuStack_64 = &ppuStack_34;
      piStack_68 = (int *)0x85ba4b;
      func_0x0046b1f0();
    }
    uStack_24 = 0;
    uStack_20 = 0xf;
    ppuStack_34 = (undefined4 **)((uint)ppuStack_34 & 0xffffff00);
    if (iStack_1c != 0) {
      puStack_5c = auStack_4c;
      puStack_60 = (undefined4 *)0x85ba75;
      piVar5 = (int *)func_0x0046b930();
      uStack_8._0_1_ = 7;
      ppuStack_64 = &ppuStack_34;
      puStack_60 = (undefined4 **)0x0;
      piStack_68 = (int *)0x85ba8b;
      iStack_38 = func_0x005ba8a0();
      uStack_8._0_1_ = 8;
      ppuStack_3c = &ppuStack_80;
      puStack_44 = auStack_98;
      piStack_68 = piVar5;
      func_0x005f0030(auStack_98);
      uStack_8._0_1_ = 8;
      func_0x0083be90();
      uStack_8._0_1_ = 8;
      uStack_88 = 0x85bacd;
      func_0x00848ca0();
      uStack_8._0_1_ = 7;
      if (0xf < uStack_20) {
        puStack_5c = (undefined1 *)uStack_20;
        puStack_60 = ppuStack_34;
        ppuStack_64 = &ppuStack_34;
        piStack_68 = (int *)0x85bae6;
        func_0x0046b1f0();
      }
      uStack_24 = 0;
      uStack_20 = 0xf;
      ppuStack_34 = (undefined4 **)((uint)ppuStack_34 & 0xffffff00);
      uStack_8 = CONCAT31(uStack_8._1_3_,6);
      puStack_5c = (undefined1 *)0x85bb07;
      FUN_00468340();
    }
    uStack_8 = 0xffffffff;
    if (piStack_18 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_18[1] + -1;
      piStack_18[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_18;
        puStack_5c = (undefined1 *)0x85bb2b;
        _guard_check_icall();
        puStack_5c = (undefined1 *)0x85bb2f;
        (*pcVar2)();
        LOCK();
        iVar3 = piStack_18[2] + -1;
        piStack_18[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piStack_18 + 4);
          puStack_5c = (undefined1 *)0x85bb46;
          _guard_check_icall();
          puStack_5c = (undefined1 *)0x85bb4a;
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0085bb70(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eb574d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_30 = param_2;
  piStack_24 = param_3;
  piStack_28 = param_1;
  puVar2 = &stack0xfffffffc;
  if ((char)param_1[0xcd] != '\0') {
    if ((param_3[2] - *param_3 != param_2[2] - *param_2) ||
       (puVar2 = &stack0xfffffffc, param_3[3] - param_3[1] != param_2[3] - param_2[1])) {
      pcVar1 = *(code **)(*param_1 + 0x68);
      _guard_check_icall(uVar4);
      (*pcVar1)();
      puVar2 = puStack_20;
    }
  }
  puStack_20 = puVar2;
  uVar4 = param_1[0x2a];
  uStack_2c = param_1[0x2b] + uVar4;
  if (uVar4 != uStack_2c) {
    do {
      piStack_28 = (int *)(*(int *)(param_1[0x28] + (uVar4 >> 1 & param_1[0x29] - 1U) * 4) +
                          (uVar4 & 1) * 8);
      cVar3 = func_0x00858250();
      if ((cVar3 == '\0') && ((~(byte)(*(uint *)(*piStack_28 + 0x108) >> 0xc) & 1) != 0)) {
        FUN_00856880();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uStack_2c);
  }
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("onGeometryChange",0x10);
  uStack_14 = 0;
  uVar4 = func_0x0085fef0(&uStack_48,piStack_30,piStack_24);
  if (0 < (int)uVar4) {
    func_0x00d66d90(DAT_0145e9f0,~uVar4);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_34) {
    func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void FUN_0085bd00(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onLayoutUpdate",0xe,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x00470bf0(&uStack_28);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0085bdc0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00eadb2d;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  func_0x0046bc40("onFocusChange",0xd,uVar1);
  uStack_14 = 0;
  uVar1 = func_0x00860250(&uStack_38,&stack0x00000004,&stack0x00000008);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(&uStack_38,uStack_38,uStack_24);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void FUN_0085bea0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onChildFocusChange",0x12,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x008605c0(&uStack_28,param_1,param_2,&stack0x0000000c);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0085bf60(int param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x25c) != '\0') {
    if (param_2 != '\0') {
      cVar1 = FUN_007752f0(uVar2);
      if (cVar1 == '\0') {
        FUN_00774cc0(param_1 + 0x244);
        goto LAB_0085bfc9;
      }
    }
    FUN_00774f10(param_1 + 0x244);
  }
LAB_0085bfc9:
  if (((*(uint *)(param_1 + 0x108) >> 4 & 1) != 0) && (param_2 == '\0')) {
    cVar1 = FUN_007752f0(uVar2);
    if (cVar1 != '\0') {
      FUN_00774f10(param_1 + 0x244);
    }
  }
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onHoverChange",0xd);
  uStack_8 = 0;
  uVar2 = func_0x004b11b0(&uStack_28,&param_2);
  if (0 < (int)uVar2) {
    func_0x00d66d90(DAT_0145e9f0,~uVar2);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0085c090(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onTextHoverChange",0x11,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x00860920(&uStack_28,param_1,&stack0x00000008);
  if (0 < (int)uVar1) {
    func_0x00d66d90(DAT_0145e9f0,~uVar1);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0085c150(void)

{
  char cVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar1 = func_0x00858250(uVar2);
  if (cVar1 == '\0') {
    FUN_00856880();
  }
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  func_0x0046bc40("onVisibilityChange",0x12);
  uStack_8 = 0;
  uVar2 = func_0x004b11b0(&uStack_28,&stack0x00000004);
  if (0 < (int)uVar2) {
    func_0x00d66d90(DAT_0145e9f0,~uVar2);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(&uStack_28,uStack_28,uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined1 FUN_0085c220(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f382fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  func_0x0046bc40("onDragEnter",0xb,uVar1);
  uStack_8 = 0;
  iVar2 = func_0x00860c80(&uStack_2c,param_1);
  if (iVar2 < 1) {
    uStack_11 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_11 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085c300(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint auStack_2c [6];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f38335;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  auStack_2c[4] = 0;
  auStack_2c[0] = 0;
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  auStack_2c[5] = 0;
  func_0x0046bc40("onDragLeave",0xb,uVar4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar5 = func_0x00860fd0(auStack_2c,&param_1,param_3);
  if (iVar5 < 1) {
    uStack_11 = 0;
  }
  else {
    iVar5 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_11 = iVar5 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_2c[5]) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
  }
  piVar3 = param_2;
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (param_2 != (int *)0x0) {
    LOCK();
    iVar5 = param_2[1] + -1;
    param_2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*param_2;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085c420(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f382fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  func_0x0046bc40("onDragMove",10,uVar1);
  uStack_8 = 0;
  iVar2 = func_0x00861310(&uStack_2c,param_1,param_2);
  if (iVar2 < 1) {
    uStack_11 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_11 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085c500(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint auStack_2c [6];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f38335;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  auStack_2c[4] = 0;
  auStack_2c[0] = 0;
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  auStack_2c[5] = 0;
  func_0x0046bc40("onDrop",6,uVar4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar5 = func_0x00860fd0(auStack_2c,&param_1,param_3);
  if (iVar5 < 1) {
    uStack_11 = 0;
  }
  else {
    iVar5 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_11 = iVar5 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_2c[5]) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],auStack_2c[5]);
  }
  piVar3 = param_2;
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (param_2 != (int *)0x0) {
    LOCK();
    iVar5 = param_2[1] + -1;
    param_2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*param_2;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1 + -1;
      *piVar1 = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085c620(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f382fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  func_0x0046bc40("onKeyText",9,uVar1);
  uStack_8 = 0;
  iVar2 = func_0x0085f580(&uStack_2c,param_1);
  if (iVar2 < 1) {
    uStack_11 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_11 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085c700(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f382fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  func_0x0046bc40("onKeyDown",9,uVar1);
  uStack_8 = 0;
  iVar2 = func_0x00861670(&uStack_2c,&stack0x00000004,&stack0x00000008);
  if (iVar2 < 1) {
    uStack_11 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_11 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085c7e0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f382fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  func_0x0046bc40("onKeyPress",10,uVar1);
  uStack_8 = 0;
  iVar2 = func_0x004b0730(&uStack_2c,&stack0x00000004,&stack0x00000008,&stack0x0000000c);
  if (iVar2 < 1) {
    uStack_11 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_11 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085c8c0(void)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f382fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_18 = 0;
