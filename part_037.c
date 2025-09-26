          iVar7 = (*pcVar1)();
          if (iVar7 == 1) {
            return 1;
          }
          *(undefined1 *)(piVar8 + 0xf) = 1;
        }
      }
      *(undefined1 *)((int)piVar6 + 0x16) = 0;
      pcVar1 = *(code **)(*param_1 + 0x98);
      puVar9 = auStack_44;
      _guard_check_icall(puVar9);
      piVar8 = (int *)(*pcVar1)();
      if ((int *)param_1[0x10] != (int *)0x0) {
        pcVar1 = *(code **)(*(int *)param_1[0x10] + 0xc);
        _guard_check_icall(puVar9);
        cVar2 = (*pcVar1)();
        if (cVar2 != '\0') {
          pcVar1 = *(code **)(*piVar8 + 0x28);
          _guard_check_icall(uStack_4,auStack_48,param_1[0x10]);
          iVar7 = (*pcVar1)();
          if (iVar7 == 1) {
            return 1;
          }
          *(undefined1 *)(param_1 + 0xf) = 1;
        }
      }
      *(undefined1 *)((int)piVar8 + 0x16) = 0;
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x9c);
      _guard_check_icall(uStack_4,piVar8,unaff_EBP,auStack_38,param_2,param_5,param_6,param_7);
      iVar7 = (*pcVar1)();
      if (iVar7 == 1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piStack_64);
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  uStack_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  iStack_c = param_6[3];
  uStack_8 = param_6[4];
  uStack_4 = param_6[5];
  if (param_1[0x10] != 0) {
    pcVar1 = *(code **)(*param_1 + 0x98);
    _guard_check_icall(auStack_60);
    piVar8 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piVar8 + 0x24);
    _guard_check_icall(unaff_retaddr,param_1[0x10],&piStack_64,&uStack_1c);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
    *(undefined1 *)((int)piVar8 + 0x16) = 0;
  }
  return 0;
}



undefined4 __thiscall
FUN_00a42680(int *param_1,int **param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int **param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 unaff_EBP;
  int unaff_ESI;
  int **unaff_retaddr;
  undefined4 uStack_64;
  int **ppiStack_60;
  undefined4 *puStack_5c;
  int **ppiStack_58;
  int *piStack_54;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [5];
  int iStack_14;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  puStack_5c = &piStack_38;
  piStack_54 = (int *)0xffffffff;
  ppiStack_58 = *(int ***)(param_3 + 4);
  ppiStack_60 = (int **)0xa426a0;
  piStack_3c = param_1;
  func_0x00967910();
  if (*(int *)(param_3 + 4) < 0x10) {
    piStack_54 = *(int **)(param_1[*(int *)(param_3 + 4) + 0x16] + 0x10);
  }
  else {
    piStack_54 = (int *)0x0;
  }
  ppiStack_58 = (int **)0xa426bc;
  iVar4 = func_0x00946ea0();
  if (*(int *)(iVar4 + 0x58) != 0x8c40) {
    piStack_54 = (int *)&piStack_38;
    ppiStack_58 = (int **)0xa426dd;
    cVar3 = func_0x00a41000();
    if (cVar3 != '\0') {
      piStack_40 = (int *)CONCAT22(piStack_40._2_2_,1);
      piStack_54 = piStack_40;
      ppiStack_58 = param_2;
      puStack_5c = (undefined4 *)0xa426fa;
      iVar4 = func_0x00a44460();
      if (iVar4 == 1) {
        return 1;
      }
      puStack_5c = *(undefined4 **)(param_3 + 4);
      ppiStack_60 = param_2;
      uStack_64 = 0xa4270e;
      iVar4 = func_0x00a4adf0();
      if (iVar4 != 1) {
        if (*(int *)(param_3 + 4) < 0x10) {
          uStack_64 = *(undefined4 *)(param_1[*(int *)(param_3 + 4) + 0x16] + 0x10);
        }
        else {
          uStack_64 = 0;
        }
        iVar4 = func_0x00946ea0();
        uVar1 = *(undefined4 *)(param_3 + 4);
        pcVar2 = *(code **)(*(int *)param_1[0xe] + 0x6c);
        uStack_64 = 0xa4274a;
        uVar5 = func_0x00967be0();
        uStack_64 = param_5;
        _guard_check_icall(uStack_c,param_6,unaff_retaddr,4,param_2,*(undefined4 *)(iVar4 + 0x4c),
                           *(undefined4 *)(iVar4 + 0x50),uStack_4,*(undefined4 *)(unaff_ESI + 0x40),
                           uVar5,uVar1,param_3,param_4);
        iVar4 = (*pcVar2)();
        if (iVar4 != 1) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
  }
  piStack_54 = (int *)0xffffffff;
  ppiStack_58 = (int **)param_5;
  puStack_5c = auStack_28;
  ppiStack_60 = (int **)0xa427bb;
  func_0x00967910();
  piVar7 = *(int **)(param_10 + 0x140);
  pcVar2 = *(code **)(*piVar7 + 0x98);
  piStack_54 = auStack_28;
  ppiStack_58 = (int **)0xa427e0;
  _guard_check_icall();
  ppiStack_58 = (int **)0xa427e4;
  piVar6 = (int *)(*pcVar2)();
  piStack_40 = (int *)piVar7[0x10];
  if (piStack_40 != (int *)0x0) {
    pcVar2 = *(code **)(*piStack_40 + 0xc);
    ppiStack_58 = (int **)0xa42802;
    _guard_check_icall();
    ppiStack_58 = (int **)0xa42808;
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      ppiStack_58 = (int **)piVar7[0x10];
      pcVar2 = *(code **)(*piVar6 + 0x28);
      puStack_5c = &uStack_2c;
      uStack_64 = 0xa42826;
      ppiStack_60 = unaff_retaddr;
      _guard_check_icall();
      uStack_64 = 0xa4282a;
      iVar4 = (*pcVar2)();
      if (iVar4 == 1) {
        return 1;
      }
      *(undefined1 *)(piVar7 + 0xf) = 1;
    }
  }
  *(undefined1 *)((int)piVar6 + 0x16) = 0;
  pcVar2 = *(code **)(*param_1 + 0x98);
  ppiStack_58 = &piStack_3c;
  puStack_5c = (undefined4 *)0xa42850;
  _guard_check_icall();
  puStack_5c = (undefined4 *)0xa42854;
  piVar7 = (int *)(*pcVar2)();
  if ((int *)param_1[0x10] != (int *)0x0) {
    pcVar2 = *(code **)(*(int *)param_1[0x10] + 0xc);
    puStack_5c = (undefined4 *)0xa4286f;
    _guard_check_icall();
    puStack_5c = (undefined4 *)0xa42873;
    cVar3 = (*pcVar2)();
    if (cVar3 != '\0') {
      puStack_5c = (undefined4 *)param_1[0x10];
      pcVar2 = *(code **)(*piVar7 + 0x28);
      ppiStack_60 = &piStack_40;
      uStack_64 = uStack_4;
      _guard_check_icall();
      iVar4 = (*pcVar2)();
      if (iVar4 == 1) {
        return 1;
      }
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  puStack_5c = (undefined4 *)param_7;
  ppiStack_60 = param_6;
  *(undefined1 *)((int)piVar7 + 0x16) = 0;
  uStack_64 = param_5;
  pcVar2 = *(code **)(*(int *)param_1[0xe] + 0x9c);
  _guard_check_icall(uStack_4,piVar7,unaff_EBP,param_4,param_2);
  iVar4 = (*pcVar2)();
  if (iVar4 == 1) {
    return 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  piStack_40 = *param_2;
  piStack_3c = param_2[1];
  piStack_38 = param_2[2];
  uStack_34 = *(undefined4 *)(iStack_14 + 0xc);
  uStack_30 = *(undefined4 *)(iStack_14 + 0x10);
  uStack_2c = *(undefined4 *)(iStack_14 + 0x14);
  if (param_1[0x10] != 0) {
    pcVar2 = *(code **)(*param_1 + 0x98);
    _guard_check_icall(&ppiStack_60);
    piVar7 = (int *)(*pcVar2)();
    pcVar2 = *(code **)(*piVar7 + 0x24);
    _guard_check_icall(auStack_28[0],param_1[0x10],&uStack_64,&stack0xffffffbc);
    iVar4 = (*pcVar2)();
    if (iVar4 == 1) {
      return 1;
    }
    *(undefined1 *)((int)piVar7 + 0x16) = 0;
  }
  return 0;
}



undefined4 __thiscall
FUN_00a42980(int *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 unaff_EBP;
  int unaff_ESI;
  int iVar8;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  int in_stack_00000024;
  int *piStack_4c;
  undefined4 *puStack_48;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puStack_48 = (undefined4 *)0xa42998;
  piStack_2c = param_1;
  iStack_34 = FUN_004b5b20();
  iVar8 = iStack_34 * 0x10;
  if (*(int *)(param_3 + 4) < 0x10) {
    puStack_48 = *(undefined4 **)(param_1[iVar8 + *(int *)(param_3 + 4) + 0x16] + 0x10);
  }
  else {
    puStack_48 = (undefined4 *)0x0;
  }
  piStack_4c = (int *)0xa429bd;
  iVar3 = func_0x00946ea0();
  if (*(int *)(iVar3 + 0x58) != 0x8c40) {
    puStack_48 = (undefined4 *)param_3;
    piStack_4c = (int *)0xa429da;
    cVar2 = func_0x00a41000();
    if (cVar2 != '\0') {
      piStack_30 = (int *)CONCAT22(piStack_30._2_2_,1);
      puStack_48 = piStack_30;
      piStack_4c = param_2;
      iVar3 = func_0x00a44460();
      if (iVar3 == 1) {
        return 1;
      }
      iVar3 = func_0x00a4aac0(param_2,unaff_EBP,*(undefined4 *)(param_3 + 4));
      if (iVar3 != 1) {
        if (*(int *)(param_3 + 4) < 0x10) {
          uVar4 = *(undefined4 *)(param_1[*(int *)(param_3 + 4) + iVar8 + 0x16] + 0x10);
        }
        else {
          uVar4 = 0;
        }
        iVar8 = func_0x00946ea0(uVar4);
        uVar4 = *(undefined4 *)(iStack_c + 4);
        pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x6c);
        uVar5 = func_0x00967be0();
        _guard_check_icall(uStack_10,param_5,uStack_4,0,unaff_retaddr,*(undefined4 *)(iVar8 + 0x4c),
                           *(undefined4 *)(iVar8 + 0x50),uStack_8,*(undefined4 *)(unaff_ESI + 0x40),
                           uVar5,uVar4,param_2,param_3,param_4);
        iVar8 = (*pcVar1)();
        if (iVar8 != 1) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
  }
  puStack_48 = (undefined4 *)param_5;
  piStack_4c = &iStack_28;
  func_0x00967750();
  piVar7 = *(int **)(in_stack_00000024 + 0x140);
  pcVar1 = *(code **)(*piVar7 + 0x98);
  puStack_48 = &iStack_28;
  piStack_4c = (int *)0xa42ad8;
  _guard_check_icall();
  piStack_4c = (int *)0xa42adc;
  piVar6 = (int *)(*pcVar1)();
  piStack_30 = (int *)piVar7[0x10];
  if (piStack_30 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_30 + 0xc);
    piStack_4c = (int *)0xa42af8;
    _guard_check_icall();
    piStack_4c = (int *)0xa42afe;
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      piStack_4c = (int *)piVar7[0x10];
      pcVar1 = *(code **)(*piVar6 + 0x28);
      _guard_check_icall(unaff_retaddr,&piStack_2c);
      iVar8 = (*pcVar1)();
      if (iVar8 == 1) {
        return 1;
      }
      *(undefined1 *)(piVar7 + 0xf) = 1;
    }
  }
  *(undefined1 *)((int)piVar6 + 0x16) = 0;
  piStack_4c = &iStack_34;
  iStack_34 = 0;
  iVar8 = func_0x00a44e50(unaff_retaddr,param_3);
  if (iVar8 != 1) {
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x9c);
    _guard_check_icall(iStack_c,unaff_ESI,unaff_EDI,param_2,uStack_4,param_3,param_4,param_5);
    iVar8 = (*pcVar1)();
    if (iVar8 != 1) {
      *(undefined1 *)(param_1 + 0xf) = 1;
      iStack_34 = 1;
      puStack_48 = (undefined4 *)*puStack_24;
      if (param_1[0x10] != 0) {
        pcVar1 = *(code **)(*param_1 + 0x98);
        _guard_check_icall(param_3);
        piVar7 = (int *)(*pcVar1)();
        pcVar1 = *(code **)(*piVar7 + 0x24);
        _guard_check_icall(piStack_30,param_1[0x10],param_3,&piStack_4c);
        iVar8 = (*pcVar1)();
        if (iVar8 == 1) {
          return 1;
        }
        *(undefined1 *)((int)piVar7 + 0x16) = 0;
      }
      return 0;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a42c30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_ESI;
  int unaff_retaddr;
  int in_stack_00000024;
  undefined4 uVar8;
  undefined1 *puStack_8c;
  int *piStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  uStack_78 = param_5;
  uStack_7c = param_4;
  uStack_64 = CONCAT31(uStack_64._1_3_,*(undefined1 *)(in_stack_00000024 + 0x6c));
  uStack_80 = 0xa42c5a;
  uStack_60 = func_0x00946bf0();
  uVar8 = uStack_64;
  uStack_78 = param_6;
  uStack_7c = uStack_64;
  uStack_80 = 0xa42c72;
  uStack_7c = func_0x0093d180();
  uStack_7c = uStack_7c & 0xff;
  uStack_80 = 0xa42c80;
  uVar3 = func_0x008df840();
  uStack_80 = param_4;
  piStack_84 = (int *)uVar8;
  piStack_88 = (int *)0xa42c8f;
  uVar4 = func_0x0093d180();
  piStack_84 = (int *)(uVar4 & 0xff);
  piStack_88 = (int *)0xa42c9d;
  func_0x008dff30();
  puStack_8c = &stack0xffffff98;
  piStack_88 = (int *)0x0;
  uStack_60 = 1;
  iVar6 = *(int *)(iStack_8 + 4);
  uVar8 = uStack_c;
  uStack_64 = uVar3;
  iVar5 = func_0x00a46ea0(uStack_c,iVar6,*(undefined4 *)(unaff_ESI + 8));
  if (iVar5 == 1) {
    return 1;
  }
  uStack_48 = uStack_7c;
  uStack_44 = uStack_78;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 1;
  if (*(int *)(iStack_8 + 4) < 0x10) {
    uVar3 = *(undefined4 *)(param_1[*(int *)(iStack_8 + 4) + 0x17] + 0x10);
  }
  else {
    uVar3 = 0;
  }
  iVar5 = func_0x00946ea0(uVar3);
  if ((*(int *)(iVar5 + 0x58) == 0x8c40) || (cVar2 = func_0x00a41000(iStack_8), cVar2 == '\0')) {
    func_0x00967750(&uStack_64,uStack_10);
    piStack_88 = *(int **)(unaff_retaddr + 0x140);
    pcVar1 = *(code **)(*piStack_88 + 0x98);
    _guard_check_icall(&uStack_64);
    piStack_88 = (int *)(*pcVar1)();
    piStack_84 = *(int **)(puStack_8c + 0x40);
    if (piStack_84 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_84 + 0xc);
      _guard_check_icall();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        pcVar1 = *(code **)(*piStack_88 + 0x28);
        _guard_check_icall(uStack_c,&stack0xffffff98,*(undefined4 *)(puStack_8c + 0x40));
        iVar5 = (*pcVar1)();
        if (iVar5 == 1) {
          return 1;
        }
        puStack_8c[0x3c] = 1;
      }
    }
    puStack_8c = (undefined1 *)0x0;
    *(undefined1 *)((int)piStack_88 + 0x16) = 0;
    iVar5 = func_0x00a44e50(uStack_c,iStack_8,&puStack_8c);
    if (iVar5 != 1) {
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x9c);
      _guard_check_icall(uStack_30,uVar8,iVar6,&uStack_64,&uStack_80,uStack_1c,uStack_18,uStack_14);
      iVar6 = (*pcVar1)();
      if (iVar6 != 1) {
        *(undefined1 *)(param_1 + 0xf) = 1;
        if (param_1[0x10] != 0) {
          pcVar1 = *(code **)(*param_1 + 0x98);
          _guard_check_icall(iStack_8);
          piVar7 = (int *)(*pcVar1)();
          pcVar1 = *(code **)(*piVar7 + 0x24);
          _guard_check_icall(uStack_54,param_1[0x10],iStack_8,&stack0xffffff90);
          iVar6 = (*pcVar1)();
          if (iVar6 == 1) {
            return 1;
          }
          *(undefined1 *)((int)piVar7 + 0x16) = 0;
        }
        return 0;
      }
    }
    return 1;
  }
  piStack_88 = (int *)CONCAT22(piStack_88._2_2_,1);
  iVar5 = func_0x00a44460(uStack_c,piStack_88);
  if (iVar5 == 1) {
    return 1;
  }
  iVar5 = func_0x00a4abb0(uStack_c,*(undefined4 *)(iStack_8 + 4));
  if (iVar5 != 1) {
    uVar8 = *(undefined4 *)(iStack_2c + 4);
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x6c);
    uVar3 = func_0x00967be0();
    _guard_check_icall(uStack_30,uStack_10,uStack_20,0,&uStack_64,*(undefined4 *)(iVar6 + 0x4c),
                       *(undefined4 *)(iVar6 + 0x50),&uStack_80,param_1[0x10],uVar3,uVar8,uStack_1c,
                       uStack_18,uStack_14);
    iVar6 = (*pcVar1)();
    if (iVar6 != 1) {
      return 0;
    }
    return 1;
  }
  return 1;
}



undefined4 __thiscall
FUN_00a42fb0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int in_stack_00000024;
  undefined4 *puVar13;
  int **ppiVar14;
  int *piStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  int iStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_90 [4];
  int *apiStack_8c [2];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_8;
  
  uStack_a8 = param_5;
  piStack_ac = (int *)param_4;
  apiStack_8c[0] = (int *)CONCAT31(apiStack_8c[0]._1_3_,*(undefined1 *)(in_stack_00000024 + 0x6c));
  uStack_b0 = 0xa42fdd;
  func_0x00946bf0();
  piVar11 = apiStack_8c[0];
  uStack_a8 = param_6;
  piStack_ac = apiStack_8c[0];
  uStack_b0 = 0xa42ff5;
  uVar5 = func_0x0093d180();
  piStack_ac = (int *)(uVar5 & 0xff);
  uStack_b0 = 0xa43003;
  uVar6 = func_0x008df680();
  uStack_b0 = param_4;
  piStack_b4 = piVar11;
  iStack_b8 = 0xa43016;
  uVar5 = func_0x0093d180();
  piStack_b4 = (int *)(uVar5 & 0xff);
  iStack_b8 = 0xa43024;
  uVar7 = func_0x008df840();
  iStack_b8 = param_2;
  piStack_bc = piVar11;
  piStack_c0 = (int *)0xa43037;
  uVar5 = func_0x0093d180();
  piStack_bc = (int *)(uVar5 & 0xff);
  piStack_c0 = (int *)0xa4304a;
  iStack_78 = func_0x008dff30();
  iVar9 = iStack_14;
  piStack_c0 = (int *)0x0;
  piStack_c4 = &iStack_78;
  iVar12 = iStack_14;
  uStack_74 = uVar7;
  uStack_70 = uVar6;
  iVar8 = func_0x00a47070(iStack_14,*(undefined4 *)(iStack_10 + 4),
                          *(undefined4 *)((int)piStack_ac + 8));
  piVar3 = apiStack_8c[0];
  piVar11 = piStack_bc;
  if (iVar8 == 1) {
    return 1;
  }
  uStack_a8 = 0;
  piStack_b4 = (int *)0x0;
  uStack_b0 = 0;
  piStack_ac = (int *)0x0;
  func_0x00967810(auStack_3c,*(undefined4 *)(iStack_10 + 4),0,uVar6);
  iVar8 = *(int *)(iStack_10 + 4);
  if ((iVar8 < 0x10) && (0 < param_1[iVar8 + 0x16])) {
    uVar7 = *(undefined4 *)(*(int *)param_1[iVar8 + 0x26] + 0x10);
  }
  else {
    uVar7 = 0;
  }
  iVar8 = func_0x00946ea0(uVar7);
  if (*(int *)(iVar8 + 0x58) != 0x8c40) {
    uVar7 = func_0x00967810(auStack_4c,*(undefined4 *)(iStack_10 + 4),0,uVar6);
    cVar4 = func_0x00a41000(uVar7);
    if (cVar4 != '\0') {
      iStack_b8 = CONCAT22(iStack_b8._2_2_,1);
      iVar8 = func_0x00a44460(iVar9,iStack_b8);
      if (iVar8 == 1) {
        return 1;
      }
      iVar9 = func_0x00a4ac90(iVar9,*(undefined4 *)(iStack_10 + 4));
      if (iVar9 != 1) {
        uVar6 = *(undefined4 *)(iStack_10 + 4);
        pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x6c);
        uVar7 = func_0x00967be0();
        _guard_check_icall(uStack_38,uStack_18,iStack_28,1,&iStack_b8,*(undefined4 *)(iVar12 + 0x4c)
                           ,*(undefined4 *)(iVar12 + 0x50),&piStack_c4,param_1[0x10],uVar7,uVar6,
                           iStack_24,uStack_20,uStack_1c);
        iVar9 = (*pcVar1)();
        if (iVar9 != 1) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
  }
  iVar8 = 0;
  iVar12 = iStack_10;
  if (0 < iStack_b8) {
    do {
      func_0x009677b0(auStack_4c,uStack_18,iVar8);
      func_0x009677b0(apiStack_8c,*(undefined4 *)(iVar12 + 4),iVar8);
      piVar2 = *(int **)(iStack_8 + 0x140);
      pcVar1 = *(code **)(*param_1 + 0x98);
      ppiVar14 = apiStack_8c;
      _guard_check_icall(ppiVar14);
      piStack_c0 = (int *)(*pcVar1)();
      piStack_c4 = (int *)param_1[0x10];
      if (piStack_c4 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_c4 + 0xc);
        _guard_check_icall(ppiVar14);
        cVar4 = (*pcVar1)();
        if (cVar4 != '\0') {
          pcVar1 = *(code **)(*piStack_c0 + 0x28);
          _guard_check_icall(uStack_2c,auStack_90,param_1[0x10]);
          iVar9 = (*pcVar1)();
          if (iVar9 == 1) {
            return 1;
          }
          *(undefined1 *)(param_1 + 0xf) = 1;
        }
      }
      *(undefined1 *)((int)piStack_c0 + 0x16) = 0;
      pcVar1 = *(code **)(*piVar2 + 0x98);
      puVar13 = &uStack_50;
      _guard_check_icall(puVar13);
      piVar10 = (int *)(*pcVar1)();
      piVar11 = (int *)piVar2[0x10];
      if (piVar11 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar11 + 0xc);
        _guard_check_icall(puVar13);
        cVar4 = (*pcVar1)();
        if (cVar4 != '\0') {
          pcVar1 = *(code **)(*piVar10 + 0x28);
          _guard_check_icall(uStack_30,&piStack_54,piVar2[0x10]);
          iVar9 = (*pcVar1)();
          if (iVar9 == 1) {
            return 1;
          }
          *(undefined1 *)(piVar2 + 0xf) = 1;
        }
      }
      *(undefined1 *)((int)piVar10 + 0x16) = 0;
      uStack_84 = uStack_b0;
      uStack_80 = piStack_ac;
      uStack_7c = 0;
      uStack_70 = 1;
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x9c);
      iStack_78 = 0;
      uStack_74 = 0;
      _guard_check_icall(uStack_30,piStack_c4,piVar10,&uStack_84,&piStack_bc,uStack_1c,uStack_18,
                         iStack_14);
      iVar9 = (*pcVar1)();
      if (iVar9 == 1) {
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar12 = iStack_24;
      iVar9 = iStack_28;
    } while (iVar8 < iStack_b8);
  }
  uStack_64 = piStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = piStack_ac;
  *(undefined1 *)(param_1 + 0xf) = 1;
  if (param_1[0x10] != 0) {
    pcVar1 = *(code **)(*param_1 + 0x98);
    piStack_58 = piVar3;
    piStack_54 = piVar11;
    uStack_50 = uVar6;
    _guard_check_icall(auStack_3c);
    piVar11 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piVar11 + 0x24);
    _guard_check_icall(iVar9,param_1[0x10],auStack_40,auStack_68);
    iVar9 = (*pcVar1)();
    if (iVar9 == 1) {
      return 1;
    }
    *(undefined1 *)((int)piVar11 + 0x16) = 0;
  }
  return 0;
}



undefined4 __thiscall
FUN_00a43460(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int in_stack_00000024;
  undefined1 *puVar8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  int *piStack_a4;
  uint uStack_a0;
  int *piStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  int iStack_8c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_8c = param_5;
  uStack_90 = param_4;
  uStack_74 = CONCAT31(uStack_74._1_3_,*(undefined1 *)(in_stack_00000024 + 0x6c));
  uStack_94 = 0xa4348a;
  uStack_78 = func_0x00946bf0();
  uVar2 = uStack_74;
  iStack_8c = param_6;
  uStack_90 = uStack_74;
  uStack_94 = 0xa434a2;
  uStack_90 = func_0x0093d180();
  uStack_90 = uStack_90 & 0xff;
  uStack_94 = 0xa434b0;
  uVar4 = func_0x008df680();
  uStack_94 = param_4;
  uStack_98 = uVar2;
  piStack_9c = (int *)0xa434bf;
  uStack_98 = func_0x0093d180();
  uStack_98 = uStack_98 & 0xff;
  piStack_9c = (int *)0xa434cd;
  uVar5 = func_0x008df840();
  piStack_9c = (int *)param_2;
  uStack_a0 = uVar2;
  piStack_a4 = (int *)0xa434dc;
  uStack_a0 = func_0x0093d180();
  uStack_a0 = uStack_a0 & 0xff;
  piStack_a4 = (int *)0xa434f1;
  func_0x008dff30();
  piStack_a4 = (int *)0x0;
  puStack_a8 = &stack0xffffff80;
  uStack_ac = *(undefined4 *)(uStack_90 + 8);
  uStack_b0 = *(undefined4 *)(iStack_10 + 4);
  uStack_78 = uVar4;
  iVar6 = func_0x00a473c0();
  if (iVar6 == 1) {
    return 1;
  }
  uStack_50 = uStack_94;
  uStack_4c = uStack_90;
  iStack_48 = iStack_8c;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x00967910(&stack0xffffff84,*(undefined4 *)(iStack_10 + 4),0xffffffff);
  if (*(int *)(iStack_10 + 4) < 0x10) {
    uVar4 = *(undefined4 *)(param_1[*(int *)(iStack_10 + 4) + 0x16] + 0x10);
  }
  else {
    uVar4 = 0;
  }
  iVar6 = func_0x00946ea0(uVar4);
  if ((*(int *)(iVar6 + 0x58) == 0x8c40) ||
     (cVar3 = func_0x00a41000(&stack0xffffff84), cVar3 == '\0')) {
    func_0x00967910(&uStack_6c,uStack_18,0xffffffff);
    piStack_9c = *(int **)(param_6 + 0x140);
    piStack_a4 = (int *)0x0;
    pcVar1 = *(code **)(*param_1 + 0x98);
    puVar8 = &stack0xffffff84;
    _guard_check_icall(puVar8);
    piVar7 = (int *)(*pcVar1)();
    piStack_a4 = (int *)param_1[0x10];
    piStack_9c = piVar7;
    if (piStack_a4 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_a4 + 0xc);
      _guard_check_icall(puVar8);
      cVar3 = (*pcVar1)();
      if (cVar3 != '\0') {
        pcVar1 = *(code **)(*piVar7 + 0x28);
        _guard_check_icall(iStack_14,&stack0xffffff80,param_1[0x10]);
        iVar6 = (*pcVar1)();
        if (iVar6 == 1) {
          return 1;
        }
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
    }
    *(undefined1 *)((int)piVar7 + 0x16) = 0;
    iVar6 = func_0x00a44e50(iStack_14,&uStack_70,&puStack_a8);
    if (iVar6 != 1) {
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x9c);
      _guard_check_icall(iStack_14,puStack_a8,iStack_14,&uStack_6c,&uStack_98,uStack_24,uStack_20,
                         uStack_1c);
      iVar6 = (*pcVar1)();
      if (iVar6 != 1) {
        uStack_68 = 0;
        *(undefined1 *)(param_1 + 0xf) = 1;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_60 = uStack_78;
        if (param_1[0x10] != 0) {
          pcVar1 = *(code **)(*param_1 + 0x98);
          uStack_64 = uVar5;
          _guard_check_icall(&uStack_ac);
          piVar7 = (int *)(*pcVar1)();
          pcVar1 = *(code **)(*piVar7 + 0x24);
          _guard_check_icall(iStack_14,param_1[0x10],&uStack_b0,&uStack_78);
          iVar6 = (*pcVar1)();
          if (iVar6 == 1) {
            return 1;
          }
          *(undefined1 *)((int)piVar7 + 0x16) = 0;
        }
        return 0;
      }
    }
    return 1;
  }
  uStack_a0 = CONCAT22(uStack_a0._2_2_,1);
  iVar6 = func_0x00a44460(iStack_14,uStack_a0);
  if (iVar6 == 1) {
    return 1;
  }
  iVar6 = func_0x00a4adf0(iStack_14,*(undefined4 *)(iStack_10 + 4));
  if (iVar6 != 1) {
    uVar4 = *(undefined4 *)(iStack_10 + 4);
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x6c);
    uVar5 = func_0x00967be0();
    _guard_check_icall(uStack_38,uStack_18,uStack_28,4,&uStack_6c,*(undefined4 *)(iStack_14 + 0x4c),
                       *(undefined4 *)(iStack_14 + 0x50),&uStack_98,param_1[0x10],uVar5,uVar4,
                       uStack_24,uStack_20,uStack_1c);
    iVar6 = (*pcVar1)();
    if (iVar6 != 1) {
      return 0;
    }
    return 1;
  }
  return 1;
}



undefined4 __thiscall
FUN_00a43810(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int unaff_EBP;
  int unaff_ESI;
  int in_stack_00000024;
  int iStack_90;
  int *piStack_8c;
  int *piStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_64;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_c;
  int iStack_4;
  
  uStack_78 = (uint)*(byte *)(in_stack_00000024 + 0x6c);
  uStack_7c = 0xa4382a;
  uVar2 = func_0x0093d180();
  uStack_64 = CONCAT31(uStack_64._1_3_,uVar2);
  uStack_78 = 0xa4383f;
  FUN_004b5b20();
  uStack_78 = param_5;
  uStack_7c = param_4;
  uStack_80 = 0xa43856;
  func_0x00946bf0();
  uStack_78 = param_6;
  uStack_7c = uStack_64;
  uStack_80 = 0xa43870;
  func_0x008df840();
  uStack_80 = param_4;
  uStack_84 = uStack_64;
  piStack_88 = (int *)0xa43886;
  func_0x008dff30();
  piStack_88 = (int *)0x0;
  piStack_8c = (int *)&stack0xffffff98;
  iStack_90 = *(int *)(unaff_ESI + 8);
  iVar8 = iStack_c;
  iVar6 = unaff_EBP;
  iVar4 = func_0x00a47570(iStack_c,unaff_EBP,*(undefined4 *)(param_3 + 4));
  if (iVar4 == 1) {
    return 1;
  }
  if (*(int *)(param_3 + 4) < 0x10) {
    uVar5 = *(undefined4 *)(param_1[unaff_EBP * 0x10 + *(int *)(param_3 + 4) + 0x16] + 0x10);
  }
  else {
    uVar5 = 0;
  }
  iVar4 = func_0x00946ea0(uVar5);
  if ((*(int *)(iVar4 + 0x58) == 0x8c40) || (cVar3 = func_0x00a41000(param_3), cVar3 == '\0')) {
    func_0x00967750(&stack0xffffff98,uStack_14);
    piStack_8c = *(int **)(iStack_4 + 0x140);
    pcVar1 = *(code **)(*piStack_8c + 0x98);
    _guard_check_icall(&stack0xffffff98);
    piStack_8c = (int *)(*pcVar1)();
    piStack_88 = *(int **)(iStack_90 + 0x40);
    if (piStack_88 != (int *)0x0) {
      pcVar1 = *(code **)(*piStack_88 + 0xc);
      _guard_check_icall();
      cVar3 = (*pcVar1)();
      if (cVar3 != '\0') {
        pcVar1 = *(code **)(*piStack_8c + 0x28);
        _guard_check_icall(iStack_c,&stack0xffffff94,*(undefined4 *)(iStack_90 + 0x40));
        iVar4 = (*pcVar1)();
        if (iVar4 == 1) {
          return 1;
        }
        *(undefined1 *)(iStack_90 + 0x3c) = 1;
      }
    }
    iStack_90 = 0;
    *(undefined1 *)((int)piStack_8c + 0x16) = 0;
    iVar4 = func_0x00a44e50(iStack_c,param_3,&iStack_90);
    if (iVar4 != 1) {
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x9c);
      _guard_check_icall(iStack_34,iVar8,iVar6,&stack0xffffff98,&uStack_84,uStack_20,uStack_1c,
                         uStack_18);
      iVar8 = (*pcVar1)();
      if (iVar8 != 1) {
        *(undefined1 *)(param_1 + 0xf) = 1;
        if (param_1[0x10] != 0) {
          pcVar1 = *(code **)(*param_1 + 0x98);
          _guard_check_icall(param_3);
          piVar9 = (int *)(*pcVar1)();
          pcVar1 = *(code **)(*piVar9 + 0x24);
          _guard_check_icall(0,param_1[0x10],param_3,&stack0xffffff8c);
          iVar8 = (*pcVar1)();
          if (iVar8 == 1) {
            return 1;
          }
          *(undefined1 *)((int)piVar9 + 0x16) = 0;
        }
        return 0;
      }
    }
    return 1;
  }
  uStack_84 = CONCAT22(uStack_84._2_2_,1);
  iVar6 = func_0x00a44460(iStack_c,uStack_84);
  if (iVar6 == 1) {
    return 1;
  }
  iVar6 = func_0x00a4aac0(iStack_c,unaff_EBP,*(undefined4 *)(param_3 + 4));
  if (iVar6 != 1) {
    uVar5 = *(undefined4 *)(iStack_34 + 4);
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x6c);
    uVar7 = func_0x00967be0();
    _guard_check_icall(uStack_38,uStack_18,uStack_28,0,&stack0xffffff94,
                       *(undefined4 *)(iVar8 + 0x4c),*(undefined4 *)(iVar8 + 0x50),&piStack_88,
                       param_1[0x10],uVar7,uVar5,uStack_24,uStack_20,uStack_1c);
    iVar8 = (*pcVar1)();
    if (iVar8 != 1) {
      return 0;
    }
    return 1;
  }
  return 1;
}



undefined4 __thiscall
FUN_00a43ba0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fa50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_14 = param_1;
  uVar5 = func_0x00a45150(uVar5);
  uStack_24 = uVar5;
  uStack_20 = func_0x00a450f0();
  if ((uint)param_1[0x15] < 0x10) {
    pcVar1 = *(code **)(*param_1 + 0x98);
    pcVar2 = *(code **)(*param_1 + 0xa8);
    _guard_check_icall(auStack_38,param_1[0x15],0);
    uVar6 = (*pcVar2)();
    _guard_check_icall(uVar6);
    param_1 = piStack_14;
    iVar7 = (*pcVar1)();
    if (iVar7 != 0) {
      uStack_28 = *(undefined4 *)(iVar7 + 0x10);
      goto LAB_00a43c2e;
    }
  }
  uStack_28 = 0;
LAB_00a43c2e:
  uVar10 = uStack_20;
  if ((int *)param_1[0x10] == (int *)0x0) {
    if ((((((uVar5 & uVar5 - 1) == 0) && (uVar5 != 0)) && ((uStack_20 & uStack_20 - 1) == 0)) &&
        (uStack_20 != 0)) || (iVar7 = func_0x009dbef0(), *(char *)(iVar7 + 0x8f) != '\0')) {
      uVar9 = uVar5;
      if ((int)uVar5 < (int)uVar10) {
        uVar9 = uVar10;
      }
      iVar7 = 0;
      uVar10 = uVar9;
      if ((int)uVar9 < 1) {
        uVar9 = 1;
        uVar10 = uVar9;
      }
      while (1 < (int)uVar9) {
        iVar7 = iVar7 + 1;
        uVar9 = (int)uVar10 >> ((byte)iVar7 & 0x1f);
      }
      iVar7 = iVar7 + 1;
    }
    else {
      iVar7 = 1;
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x1c);
    _guard_check_icall();
    iVar7 = (*pcVar1)();
    param_1 = piStack_14;
  }
  uStack_18 = uStack_18 & 0xffffff00;
  iStack_1c = iVar7;
  iVar8 = func_0x009dbe40();
  if (*(char *)(iVar8 + 0x48) != '\0') {
    iVar8 = 1;
    cVar4 = '\x01';
    uStack_18 = CONCAT31(uStack_18._1_3_,1);
    uVar5 = uStack_24;
    if (1 < iVar7) {
      do {
        uVar5 = uStack_24;
        if (cVar4 == '\0') break;
        pcVar1 = *(code **)(*(int *)param_1[iVar8 + 0x17] + 4);
        _guard_check_icall();
        cVar4 = (*pcVar1)();
        param_1 = piStack_14;
        if ((cVar4 == '\0') || (cVar4 = func_0x00a46710(iVar8), cVar4 == '\0')) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = '\0';
        }
        iVar8 = iVar8 + 1;
        uStack_18 = CONCAT31(uStack_18._1_3_,cVar4);
        uVar5 = uStack_24;
      } while (iVar8 < iStack_1c);
    }
  }
  pcVar1 = *(code **)(*(int *)param_1[0xe] + 0xa0);
  _guard_check_icall(uStack_28,param_3,uVar5,uStack_20,iStack_1c,piStack_14[0xc] + 0xb8,uStack_18);
  uVar6 = (*pcVar1)();
  uStack_8 = 0;
  piVar3 = (int *)param_4[1];
  param_4[1] = uVar6;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    _guard_check_icall(*param_4);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar3;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_4 = param_2;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a43da0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fa70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = func_0x00a45150(uVar4);
  uStack_14 = func_0x00a450f0();
  iVar7 = param_1[0x15];
  pcVar1 = *(code **)(*param_1 + 0x9c);
  _guard_check_icall(iVar7);
  uStack_20 = (*pcVar1)();
  if ((uint)param_1[0x15] < 0x10) {
    pcVar1 = *(code **)(*param_1 + 0x98);
    pcVar2 = *(code **)(*param_1 + 0xa8);
    _guard_check_icall(auStack_30,param_1[0x15],0);
    uVar5 = (*pcVar2)();
    _guard_check_icall(uVar5);
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      uStack_1c = *(undefined4 *)(iVar6 + 0x10);
      goto LAB_00a43e3f;
    }
  }
  uStack_1c = 0;
LAB_00a43e3f:
  uVar8 = uStack_14;
  uVar4 = uStack_18;
  if ((int *)param_1[0x10] == (int *)0x0) {
    if ((((((uStack_18 & uStack_18 - 1) == 0) && (uStack_18 != 0)) &&
         ((uStack_14 & uStack_14 - 1) == 0)) && (uStack_14 != 0)) ||
       (iVar7 = func_0x009dbef0(), *(char *)(iVar7 + 0x8f) != '\0')) {
      if ((int)uVar4 < (int)uVar8) {
        uVar4 = uVar8;
      }
      iVar7 = 0;
      uVar8 = uVar4;
      if ((int)uVar4 < 1) {
        uVar4 = 1;
        uVar8 = uVar4;
      }
      while (1 < (int)uVar4) {
        iVar7 = iVar7 + 1;
        uVar4 = (int)uVar8 >> ((byte)iVar7 & 0x1f);
      }
      iVar7 = iVar7 + 1;
    }
    else {
      iVar7 = 1;
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x1c);
    _guard_check_icall(iVar7);
    iVar7 = (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)param_1[0xe] + 0xbc);
  _guard_check_icall(uStack_1c,param_3,uStack_18,uStack_14,uStack_20,iVar7,param_1[0xc] + 0xb8);
  uVar5 = (*pcVar1)();
  uStack_8 = 0;
  piVar3 = (int *)param_4[1];
  param_4[1] = uVar5;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    _guard_check_icall(*param_4);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar3;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_4 = param_2;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a43f40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f4fa90;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 2;
  piVar1 = (int *)param_4[1];
  param_4[1] = *(undefined4 *)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(*param_4,uVar3);
    (*pcVar2)();
    pcVar2 = *(code **)*piVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  *param_4 = param_2;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00a43fd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fa70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = func_0x00a45150(uVar4);
  uStack_18 = func_0x00a450f0();
  pcVar1 = *(code **)(*param_1 + 0xb0);
  _guard_check_icall();
  uStack_14 = (*pcVar1)();
  if ((uint)param_1[0x15] < 0x10) {
    pcVar1 = *(code **)(*param_1 + 0x98);
    pcVar2 = *(code **)(*param_1 + 0xa8);
    _guard_check_icall(auStack_30,param_1[0x15],0);
    uVar5 = (*pcVar2)();
    _guard_check_icall(uVar5);
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      uStack_20 = *(undefined4 *)(iVar6 + 0x10);
      goto LAB_00a4406c;
    }
  }
  uStack_20 = 0;
LAB_00a4406c:
  if ((int *)param_1[0x10] == (int *)0x0) {
    uVar5 = func_0x00a44380(uStack_1c,uStack_18,uStack_14);
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x1c);
    _guard_check_icall();
    uVar5 = (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)param_1[0xe] + 0xb8);
  _guard_check_icall(uStack_20,param_3,uStack_1c,uStack_18,uStack_14,uVar5,param_1[0xc] + 0xb8);
  uVar5 = (*pcVar1)();
  uStack_8 = 0;
  piVar3 = (int *)param_4[1];
  param_4[1] = uVar5;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    _guard_check_icall(*param_4);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar3;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_4 = param_2;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 FUN_00a44130(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::createCompleteStorage",0x11b1);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a44180(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_38 [16];
  uint uStack_28;
  int *piStack_24;
  code *pcStack_20;
  int *piStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fa50;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_24 = param_1;
  uVar5 = func_0x00a45150(uVar5);
  uStack_28 = uVar5;
  if ((int *)param_1[0x10] == (int *)0x0) {
    if ((((uVar5 & uVar5 - 1) == 0) && (uVar5 != 0)) ||
       (iVar6 = func_0x009dbef0(), *(char *)(iVar6 + 0x8f) != '\0')) {
      iVar6 = 0;
      uVar9 = uVar5;
      if ((int)uVar5 < 1) {
        uVar5 = 1;
        uVar9 = uVar5;
      }
      while (1 < (int)uVar5) {
        iVar6 = iVar6 + 1;
        uVar5 = (int)uVar9 >> ((byte)iVar6 & 0x1f);
      }
      iVar6 = iVar6 + 1;
    }
    else {
      iVar6 = 1;
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x1c);
    _guard_check_icall();
    iVar6 = (*pcVar1)();
  }
  uStack_14 = uStack_14 & 0xffffff00;
  iStack_18 = iVar6;
  iVar7 = func_0x009dbe40();
  if (*(char *)(iVar7 + 0x48) != '\0') {
    cVar4 = '\x01';
    pcStack_20 = (code *)(param_1 + 0x16);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    piStack_1c = (int *)0x0;
    do {
      param_1 = piStack_24;
      if (cVar4 == '\0') break;
      iVar7 = 1;
      if (1 < iVar6) {
        do {
          if (cVar4 == '\0') break;
          pcVar1 = *(code **)(**(int **)((int)pcStack_20 + iVar7 * 4) + 4);
          _guard_check_icall();
          cVar4 = (*pcVar1)();
          if ((cVar4 == '\0') || (cVar4 = func_0x00a46630(piStack_1c,iVar7), cVar4 == '\0')) {
            cVar4 = '\x01';
          }
          else {
            cVar4 = '\0';
          }
          iVar7 = iVar7 + 1;
          uStack_14 = CONCAT31(uStack_14._1_3_,cVar4);
          iVar6 = iStack_18;
        } while (iVar7 < iStack_18);
      }
      piStack_1c = (int *)((int)piStack_1c + 1);
      pcStack_20 = (code *)((int)pcStack_20 + 0x40);
      param_1 = piStack_24;
    } while ((int)piStack_1c < 6);
  }
  piStack_1c = (int *)param_1[0xe];
  pcStack_20 = *(code **)(*piStack_1c + 0xb4);
  piStack_24 = (int *)(param_1[0xc] + 0xb8);
  if ((uint)param_1[0x15] < 0x10) {
    pcVar1 = *(code **)(*param_1 + 0xa8);
    pcVar2 = *(code **)(*param_1 + 0x98);
    _guard_check_icall(auStack_38,param_1[0x15],0);
    uVar8 = (*pcVar1)();
    _guard_check_icall(uVar8);
    iVar6 = (*pcVar2)();
    if (iVar6 != 0) {
      uVar8 = *(undefined4 *)(iVar6 + 0x10);
      goto LAB_00a44302;
    }
  }
  uVar8 = 0;
LAB_00a44302:
  pcVar1 = pcStack_20;
  _guard_check_icall(uVar8,param_3,uStack_28,iStack_18,uStack_14,piStack_24);
  uVar8 = (*pcVar1)();
  uStack_8 = 0;
  piVar3 = (int *)param_4[1];
  param_4[1] = uVar8;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    _guard_check_icall(*param_4);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar3;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_4 = param_2;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a447e0(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 uVar4;
  
  func_0x008df6e0();
  func_0x008dfc40();
  if ((param_1[0x10] != 0) && (iVar3 = func_0x009dbe40(), *(char *)(iVar3 + 0x48) != '\0')) {
    pcVar1 = *(code **)(*param_1 + 200);
    _guard_check_icall(param_2,0);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
    if (param_1[0x10] != 0) {
      pcVar1 = *(code **)(*param_1 + 0xcc);
      _guard_check_icall(param_2);
      iVar3 = (*pcVar1)();
      if (iVar3 == 1) {
        return 1;
      }
    }
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x34);
    _guard_check_icall(param_2,0);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
  }
  pcVar1 = *(code **)(*param_1 + 0xb4);
  uVar4 = param_2;
  _guard_check_icall(param_2);
  iVar3 = (*pcVar1)();
  if (iVar3 == 1) {
    return 1;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x18);
    _guard_check_icall(uVar4);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*param_1 + 0xcc);
      _guard_check_icall(param_2);
      iVar3 = (*pcVar1)();
      if (iVar3 == 1) {
        return 1;
      }
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 0x98);
      _guard_check_icall(param_2,param_1[0x10],param_1[0xc]);
      iVar3 = (*pcVar1)();
      goto LAB_00a448f7;
    }
  }
  iVar3 = func_0x00a44920(param_2,unaff_EBX);
LAB_00a448f7:
  if (iVar3 == 1) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall
FUN_00a44ce0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  pcVar1 = *(code **)(*param_1 + 0xa0);
  _guard_check_icall(param_2,param_4,param_5,&uStack_4);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return 1;
  }
  *param_2 = param_5;
  return 0;
}



undefined4 __thiscall FUN_00a44dc0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x5c + *(int *)(param_2 + 4) * 4);
}



undefined4 __thiscall FUN_00a44dd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x98 + *(int *)(param_2 + 4) * 4);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + *(int *)(param_2 + 8) * 4);
  }
  return 0;
}



undefined4 __thiscall FUN_00a44df0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x98 + param_2 * 4);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + param_3 * 4);
  }
  return 0;
}



undefined4 __thiscall FUN_00a44e10(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x58 + *(int *)(param_2 + 4) * 4);
}



undefined4 __thiscall FUN_00a44e20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b5b20();
  return *(undefined4 *)(iVar1 * 0x40 + param_1 + 0x58 + *(int *)(param_2 + 4) * 4);
}



undefined4 FUN_00a44ed0(undefined4 param_1,undefined4 param_2)

{
  func_0x00967750(param_1,param_2);
  return param_1;
}



undefined4 FUN_00a44ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x009677b0(param_1,param_2,param_3);
  return param_1;
}



undefined4 FUN_00a44f10(undefined4 param_1)

{
  func_0x00967830(param_1);
  return param_1;
}



undefined4 FUN_00a44f30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00967890(param_1,param_3);
  return param_1;
}



undefined4 FUN_00a44f50(undefined4 param_1,undefined4 param_2)

{
  func_0x00967910(param_1,param_2,0xffffffff);
  return param_1;
}



undefined4 FUN_00a44f70(undefined4 param_1)

{
  func_0x00967970(param_1);
  return param_1;
}



undefined4 FUN_00a44f90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = func_0x0093cee0(param_3,param_2);
  func_0x00967a10(param_1,uVar1);
  return param_1;
}



undefined4 FUN_00a44ff0(void)

{
  return 1;
}



undefined4 __thiscall FUN_00a45000(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x58 + param_2 * 4);
}



undefined4 __fastcall FUN_00a45010(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



undefined4 FUN_00a45020(void)

{
  return 6;
}



undefined4 __fastcall FUN_00a45030(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_10 [16];
  
  if ((uint)param_1[0x15] < 0x10) {
    iVar3 = *param_1;
    pcVar1 = *(code **)(iVar3 + 0xa8);
    _guard_check_icall(auStack_10,param_1[0x15],0);
    uVar2 = (*pcVar1)();
    pcVar1 = *(code **)(iVar3 + 0x98);
    _guard_check_icall(uVar2);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      return *(undefined4 *)(iVar3 + 0xc);
    }
  }
  return 0;
}



int __fastcall FUN_00a45090(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_10 [16];
  
  uVar4 = param_1[0x15];
  if (uVar4 < 0x10) {
    iVar3 = *param_1;
    pcVar1 = *(code **)(iVar3 + 0xa8);
    _guard_check_icall(auStack_10,uVar4,0);
    uVar2 = (*pcVar1)();
    pcVar1 = *(code **)(iVar3 + 0x98);
    _guard_check_icall(uVar2);
    iVar3 = (*pcVar1)();
    uVar4 = param_1[0x15];
    if (iVar3 != 0) {
      return *(int *)(iVar3 + 0xc) << ((byte)uVar4 & 0x1f);
    }
  }
  return 0 << ((byte)uVar4 & 0x1f);
}



undefined4 __thiscall FUN_00a45220(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  
  iVar2 = func_0x00a44460(param_2,1);
  if (iVar2 != 1) {
    iVar2 = func_0x00a4abb0(param_2,*(undefined4 *)(unaff_retaddr + 4));
    if (iVar2 != 1) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x24);
      _guard_check_icall(param_2,unaff_retaddr,1,unaff_retaddr);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00a45290(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  
  iVar2 = func_0x00a44460(param_2,1);
  if (iVar2 != 1) {
    iVar2 = func_0x00a4ac90(param_2,*(undefined4 *)(unaff_retaddr + 4));
    if (iVar2 != 1) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x24);
      _guard_check_icall(param_2,unaff_retaddr,1,unaff_retaddr);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00a45300(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
  iVar2 = func_0x00a44460(param_2,1);
  if (iVar2 == 1) {
    return 1;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x24);
  _guard_check_icall(1,unaff_retaddr,param_2,param_3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



undefined4 __thiscall FUN_00a45360(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  
  iVar3 = func_0x00a44460(param_2,1);
  if (iVar3 != 1) {
    cVar2 = func_0x00967c60();
    if (cVar2 == '\0') {
      iVar3 = func_0x00a4adf0(param_2,*(undefined4 *)(unaff_retaddr + 4));
    }
    else {
      pcVar1 = *(code **)(*param_1 + 0xcc);
      _guard_check_icall(param_2);
      iVar3 = (*pcVar1)();
    }
    if (iVar3 != 1) {
      pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x24);
      _guard_check_icall(param_2,unaff_retaddr,unaff_retaddr,param_2);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return 1;
}



undefined4 FUN_00a453f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::getRenderTarget",0x11e9);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a45440(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  int unaff_retaddr;
  
  iVar2 = func_0x00a44460(param_2,1);
  if (iVar2 != 1) {
    uVar4 = *(undefined4 *)(unaff_retaddr + 4);
    uVar3 = FUN_004b5b20();
    iVar2 = func_0x00a4aac0(param_2,uVar3,uVar4);
    if (iVar2 != 1) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x24);
      _guard_check_icall(param_2,unaff_retaddr,unaff_EBX,1);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00a45520(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  func_0x00967770(param_2,0,uVar2);
  return param_2;
}



undefined4 __thiscall FUN_00a45550(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall(param_1 + 0x58);
  uVar2 = (*pcVar1)();
  func_0x009677d0(param_2,0,uVar2);
  return param_2;
}



undefined4 FUN_00a45590(undefined4 param_1)

{
  func_0x00967850(param_1);
  return param_1;
}



undefined4 __thiscall FUN_00a455b0(int param_1,undefined4 param_2)

{
  func_0x009678b0(param_2,param_1 + 0x58);
  return param_2;
}



undefined4 __thiscall FUN_00a455d0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall(0xffffffff,0xffffffff);
  uVar2 = (*pcVar1)();
  func_0x00967930(param_2,0,uVar2);
  return param_2;
}



undefined4 FUN_00a45610(undefined4 param_1)

{
  func_0x00967990(param_1);
  return param_1;
}



undefined4 __thiscall FUN_00a45630(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  func_0x009679d0(param_2,0,uVar2);
  return param_2;
}



bool __thiscall FUN_00a45660(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar2 = func_0x008df6e0();
  uVar3 = func_0x008dfc40();
  do {
    uVar2 = uVar2 + 1;
    if (uVar3 < uVar2) {
      pcVar1 = *(code **)(*param_1 + 200);
      _guard_check_icall(param_2,1);
      iVar5 = (*pcVar1)();
      return iVar5 == 1;
    }
    uVar7 = param_1[0x15];
    if (uVar7 < 0x10) {
      iVar5 = *param_1;
      pcVar1 = *(code **)(iVar5 + 0xa8);
      _guard_check_icall(auStack_30,uVar7,0);
      uVar4 = (*pcVar1)();
      pcVar1 = *(code **)(iVar5 + 0x98);
      _guard_check_icall(uVar4);
      iVar5 = (*pcVar1)();
      uVar7 = param_1[0x15];
      if (iVar5 == 0) goto LAB_00a456db;
      iVar5 = *(int *)(iVar5 + 8);
    }
    else {
LAB_00a456db:
      iVar5 = 0;
    }
    iVar5 = (iVar5 << ((byte)uVar7 & 0x1f)) >> ((byte)uVar2 & 0x1f);
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    if (uVar7 < 0x10) {
      iVar6 = *param_1;
      pcVar1 = *(code **)(iVar6 + 0xa8);
      _guard_check_icall(auStack_20,uVar7,0);
      uVar4 = (*pcVar1)();
      pcVar1 = *(code **)(iVar6 + 0x98);
      _guard_check_icall(uVar4);
      iVar6 = (*pcVar1)();
      uVar7 = param_1[0x15];
      if (iVar6 == 0) goto LAB_00a45735;
      iVar6 = *(int *)(iVar6 + 4);
    }
    else {
LAB_00a45735:
      iVar6 = 0;
    }
    iStack_3c = (iVar6 << ((byte)uVar7 & 0x1f)) >> ((byte)uVar2 & 0x1f);
    uStack_34 = 1;
    if (iStack_3c < 1) {
      iStack_3c = 1;
    }
    iStack_38 = iVar5;
    if (uVar7 < 0x10) {
      iVar5 = *param_1;
      pcVar1 = *(code **)(iVar5 + 0xa8);
      _guard_check_icall(auStack_10,uVar7,0);
      uVar4 = (*pcVar1)();
      pcVar1 = *(code **)(iVar5 + 0x98);
      _guard_check_icall(uVar4);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) goto LAB_00a45796;
      uVar4 = *(undefined4 *)(iVar5 + 0x10);
    }
    else {
LAB_00a45796:
      uVar4 = 0;
    }
    iVar5 = func_0x00a46ea0(param_2,uVar2,uVar4,&iStack_3c,0);
    if (iVar5 == 1) {
      return true;
    }
  } while( true );
}



bool __fastcall FUN_00a45810(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  int *piStack_4;
  
  piStack_4 = param_1;
  uStack_c = func_0x008df6e0();
  uStack_8 = func_0x008dfc40();
  iStack_18 = func_0x00a45150();
  piStack_14 = (int *)func_0x00a450f0();
  pcVar1 = *(code **)(*param_1 + 0x9c);
  _guard_check_icall(param_1[0x15]);
  piStack_14 = (int *)(*pcVar1)();
  if ((uint)param_1[0x15] < 0x10) {
    iVar3 = *param_1;
    pcVar1 = *(code **)(iVar3 + 0xa8);
    _guard_check_icall(&stack0xffffffd4,param_1[0x15],0);
    uVar2 = (*pcVar1)();
    pcVar1 = *(code **)(iVar3 + 0x98);
    _guard_check_icall(uVar2);
    param_1 = piStack_14;
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      uStack_8 = *(undefined4 *)(iVar3 + 0x10);
      goto LAB_00a458b6;
    }
  }
  uStack_8 = 0;
LAB_00a458b6:
  uVar4 = iStack_10 + 1;
  if (uVar4 <= uStack_c) {
    piStack_20 = piStack_14;
    do {
      iStack_28 = iStack_1c >> ((byte)uVar4 & 0x1f);
      iStack_24 = iStack_18 >> ((byte)uVar4 & 0x1f);
      if (iStack_28 < 1) {
        iStack_28 = 1;
      }
      if (iStack_24 < 1) {
        iStack_24 = 1;
      }
      iVar3 = func_0x00a47070(unaff_retaddr,uVar4,uStack_8,&iStack_28,0);
      if (iVar3 == 1) {
        return true;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= uStack_c);
  }
  iStack_1c = CONCAT22(iStack_1c._2_2_,1);
  pcVar1 = *(code **)(*param_1 + 200);
  _guard_check_icall(unaff_retaddr,iStack_1c);
  iVar3 = (*pcVar1)();
  return iVar3 == 1;
}



bool __thiscall FUN_00a45960(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  uVar2 = func_0x008df6e0();
  uVar3 = func_0x008dfc40();
  do {
    uVar2 = uVar2 + 1;
    if (uVar3 < uVar2) {
      pcVar1 = *(code **)(*param_1 + 200);
      _guard_check_icall(param_2,1);
      iVar4 = (*pcVar1)();
      return iVar4 == 1;
    }
    pcVar1 = *(code **)(*param_1 + 0xb0);
    _guard_check_icall();
    iVar4 = (*pcVar1)();
    uVar9 = param_1[0x15];
    bVar8 = (byte)uVar2;
    iVar4 = iVar4 >> (bVar8 & 0x1f);
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (uVar9 < 0x10) {
      iVar6 = *param_1;
      pcVar1 = *(code **)(iVar6 + 0xa8);
      _guard_check_icall(auStack_30,uVar9,0);
      uVar5 = (*pcVar1)();
      pcVar1 = *(code **)(iVar6 + 0x98);
      _guard_check_icall(uVar5);
      iVar6 = (*pcVar1)();
      uVar9 = param_1[0x15];
      if (iVar6 == 0) goto LAB_00a459f8;
      iVar6 = *(int *)(iVar6 + 8);
    }
    else {
LAB_00a459f8:
      iVar6 = 0;
    }
    iVar6 = (iVar6 << ((byte)uVar9 & 0x1f)) >> (bVar8 & 0x1f);
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    if (uVar9 < 0x10) {
      iVar7 = *param_1;
      pcVar1 = *(code **)(iVar7 + 0xa8);
      _guard_check_icall(auStack_20,uVar9,0);
      uVar5 = (*pcVar1)();
      pcVar1 = *(code **)(iVar7 + 0x98);
      _guard_check_icall(uVar5);
      iVar7 = (*pcVar1)();
      uVar9 = param_1[0x15];
      if (iVar7 == 0) goto LAB_00a45a50;
      iVar7 = *(int *)(iVar7 + 4);
    }
    else {
LAB_00a45a50:
      iVar7 = 0;
    }
    iStack_3c = (iVar7 << ((byte)uVar9 & 0x1f)) >> (bVar8 & 0x1f);
    if (iStack_3c < 1) {
      iStack_3c = 1;
    }
    iStack_38 = iVar6;
    iStack_34 = iVar4;
    if (uVar9 < 0x10) {
      iVar4 = *param_1;
      pcVar1 = *(code **)(iVar4 + 0xa8);
      _guard_check_icall(auStack_10,uVar9,0);
      uVar5 = (*pcVar1)();
      pcVar1 = *(code **)(iVar4 + 0x98);
      _guard_check_icall(uVar5);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) goto LAB_00a45ab5;
      uVar5 = *(undefined4 *)(iVar4 + 0x10);
    }
    else {
LAB_00a45ab5:
      uVar5 = 0;
    }
    iVar4 = func_0x00a473c0(param_2,uVar2,uVar5,&iStack_3c,0);
    if (iVar4 == 1) {
      return true;
    }
  } while( true );
}



undefined4 FUN_00a45b30(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::initMipmapImages",0x119e);
  (*pcVar1)();
  return 1;
}



bool __thiscall FUN_00a45b80(int *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008df6e0();
  uVar4 = func_0x008dfc40();
  uVar1 = iVar3 + 1;
  piVar5 = param_1 + iVar3 + 0x16;
  iVar3 = 0;
  do {
    if (uVar1 <= uVar4) {
      bVar8 = 1;
      uVar7 = uVar1;
      do {
        iStack_c = *(int *)(*piVar5 + 4) >> (bVar8 & 0x1f);
        uStack_4 = 1;
        if (iStack_c < 1) {
          iStack_c = 1;
        }
        iStack_8 = iStack_c;
        iVar6 = func_0x00a47570(param_2,iVar3,uVar7,*(undefined4 *)(*piVar5 + 0x10),&iStack_c,0);
        if (iVar6 == 1) {
          return true;
        }
        uVar7 = uVar7 + 1;
        bVar8 = bVar8 + 1;
      } while (uVar7 <= uVar4);
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 0x10;
    if (5 < iVar3) {
      pcVar2 = *(code **)(*param_1 + 200);
      uStack_10 = CONCAT22((short)(uVar1 >> 0x10),1);
      _guard_check_icall(param_2,uStack_10);
      iVar3 = (*pcVar2)();
      return iVar3 == 1;
    }
  } while( true );
}



undefined4 FUN_00a45c70(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_External::initMipmapImages",0x1008);
  (*pcVar1)();
  return 1;
}



void __thiscall FUN_00a45cc0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined4 uStack_d0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined1 auStack_9c [20];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_4c [18];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_bc;
  uStack_d0 = param_4;
  iStack_ac = *(int *)(param_2 + 0x1d14);
  iStack_b8 = param_2;
  func_0x009676a0();
  if ((char)iStack_ac == '\x04') {
    uVar3 = func_0x00967910(auStack_9c,iStack_a8,0xffffffff);
    func_0x009676a0(uVar3);
  }
  else {
    if ((char)iStack_ac == '\x01') {
      cVar2 = func_0x00967c60();
      iVar5 = iStack_a8;
      if (cVar2 == '\0') {
        pcVar1 = *(code **)(*param_1 + 0x9c);
        _guard_check_icall(iStack_a8);
        uVar3 = (*pcVar1)();
        auStack_4c[iVar5] = uVar3;
        func_0x009677d0(auStack_88,iVar5,iVar5 + 1,auStack_4c);
        cVar2 = func_0x00967c70();
        while (cVar2 != '\0') {
          pcVar1 = *(code **)(*param_1 + 8);
          uVar3 = func_0x00967ce0(&iStack_ac);
          _guard_check_icall(param_2,0,uVar3);
          iVar5 = (*pcVar1)();
          if (iVar5 == 1) break;
          cVar2 = func_0x00967c70();
        }
        goto LAB_00a45f9f;
      }
    }
    if (((char)iStack_ac == '\x03') && (cVar2 = func_0x00967c60(), cVar2 == '\0')) {
      pcVar1 = *(code **)(*param_1 + 0x9c);
      _guard_check_icall(0);
      auStack_4c[0] = (*pcVar1)();
      func_0x009678b0(auStack_88,auStack_4c);
      cVar2 = func_0x00967c70();
      while (cVar2 != '\0') {
        pcVar1 = *(code **)(*param_1 + 8);
        uVar3 = func_0x00967ce0(&iStack_ac);
        _guard_check_icall(param_2,0,uVar3);
        iVar5 = (*pcVar1)();
        if (iVar5 == 1) break;
        cVar2 = func_0x00967c70();
      }
      goto LAB_00a45f9f;
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x98);
  piVar6 = &iStack_ac;
  _guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  if (piVar4 != (int *)0x0) {
    *(undefined1 *)((int)piVar4 + 0x16) = 0;
  }
  iVar5 = func_0x009dbe40();
  piVar11 = &iStack_b0;
  cVar2 = func_0x00a41000(piVar11);
  if (((cVar2 == '\0') || (*(char *)(iVar5 + 0x48) != '\0')) ||
     ((piVar4 != (int *)0x0 && (*(char *)(iVar5 + 0x1e0) == '\0')))) {
    iVar5 = func_0x00946ea0(piVar4[4]);
    puVar10 = &stack0xffffff40;
    iVar9 = 0;
    cVar2 = func_0x0094abf0(*(undefined4 *)(iVar5 + 0x50),piVar4[1],1,0,puVar10);
    if (cVar2 == '\0') {
      uVar8 = 0x35d;
      pcVar7 = "Integer overflow.";
      uVar3 = 0x502;
    }
    else {
      uStack_68 = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_7c = 1;
      iVar5 = piVar4[2] * piVar4[3] * (int)piVar6;
      uStack_d0 = 0;
      cVar2 = func_0x008d1880(iVar5,&uStack_d0);
      if (cVar2 != '\0') {
        cVar2 = func_0x00a4a4d0(piVar4);
        if (cVar2 == '\0') {
          iStack_b0 = piVar4[1];
          iStack_ac = piVar4[2];
          iStack_a8 = piVar4[3];
          uStack_bc = 0;
          iStack_b8 = 0;
          pcVar1 = *(code **)(*piVar4 + 0xc);
          uStack_b4 = 0;
          _guard_check_icall(piVar11,&uStack_bc,auStack_80,*(undefined4 *)(iVar9 + 0x50),
                             *(undefined4 *)(iVar5 + 4),0);
          iVar5 = (*pcVar1)();
          if (iVar5 != 1) {
            if (param_1[0x10] == 0) {
              *(undefined1 *)(param_1 + 0xf) = 1;
            }
            else {
              pcVar1 = *(code **)(*param_1 + 0x98);
              _guard_check_icall(&uStack_bc);
              piVar6 = (int *)(*pcVar1)();
              pcVar1 = *(code **)(*piVar6 + 0x24);
              _guard_check_icall(piVar11,param_1[0x10],&stack0xffffff40,&iStack_b0);
              iVar5 = (*pcVar1)();
              if (iVar5 != 1) {
                *(undefined1 *)((int)piVar6 + 0x16) = 0;
                *(undefined1 *)((int)piVar4 + 0x16) = 0;
              }
            }
          }
        }
        else {
          pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x30);
          _guard_check_icall(puVar10,&stack0xffffff34,piVar4,0,*(undefined4 *)(iVar9 + 0x50),
                             auStack_80,*(undefined4 *)(iVar5 + 4));
          (*pcVar1)();
        }
        goto LAB_00a45f9f;
      }
      uVar8 = 0x364;
      pcVar7 = "Failed to allocate host memory";
      uVar3 = 0x505;
    }
    func_0x0098f180(uVar3,pcVar7,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                    ,"rx::TextureD3D::initializeContents",uVar8);
  }
  else {
    iVar5 = func_0x00a44460(unaff_EBP,1);
    if (iVar5 != 1) {
      uStack_d0 = 0;
      pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x24);
      _guard_check_icall(unaff_EDI,&uStack_bc,0,&uStack_d0);
      iVar5 = (*pcVar1)();
      if (((iVar5 != 1) && (iVar5 = func_0x009dc090(unaff_EDI,uStack_d0), iVar5 != 1)) &&
         (piVar4 != (int *)0x0)) {
        *(undefined1 *)((int)piVar4 + 0x16) = 0;
      }
    }
  }
LAB_00a45f9f:
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a46140(int *param_1,undefined4 param_2,byte param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4faed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1[0x10] != 0) {
LAB_00a46265:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  cVar3 = func_0x00a46710(param_1[0x15],uVar4);
  if (cVar3 == '\0') goto LAB_00a46265;
  uStack_18 = 0;
  piStack_14 = (int *)0x0;
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xbc);
  _guard_check_icall(param_2,param_3 | *(int *)(param_1[0xc] + 0x70) == 0x93a3,&uStack_18);
  iVar5 = (*pcVar1)();
  if (iVar5 != 1) {
    pcVar1 = *(code **)(*param_1 + 0xc0);
    _guard_check_icall(param_2,piStack_14);
    iVar5 = (*pcVar1)();
    if (iVar5 != 1) {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0xcc);
      _guard_check_icall(param_2);
      iVar5 = (*pcVar1)();
      if (iVar5 != 1) {
        uVar6 = 0;
        goto LAB_00a4621b;
      }
    }
  }
  uVar6 = 1;
LAB_00a4621b:
  piVar2 = piStack_14;
  uStack_8 = 4;
  if (piStack_14 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_14 + 4);
    _guard_check_icall(uStack_18);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar2;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



undefined4 __thiscall FUN_00a46280(int *param_1,undefined4 param_2,byte param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4faed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1[0x10] != 0) {
LAB_00a463a5:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  cVar3 = func_0x00a467a0(param_1[0x15],uVar4);
  if (cVar3 == '\0') goto LAB_00a463a5;
  uStack_18 = 0;
  piStack_14 = (int *)0x0;
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xbc);
  _guard_check_icall(param_2,param_3 | *(int *)(param_1[0xc] + 0x70) == 0x93a3,&uStack_18);
  iVar5 = (*pcVar1)();
  if (iVar5 != 1) {
    pcVar1 = *(code **)(*param_1 + 0xc0);
    _guard_check_icall(param_2,piStack_14);
    iVar5 = (*pcVar1)();
    if (iVar5 != 1) {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0xcc);
      _guard_check_icall(param_2);
      iVar5 = (*pcVar1)();
      if (iVar5 != 1) {
        uVar6 = 0;
        goto LAB_00a4635b;
      }
    }
  }
  uVar6 = 1;
LAB_00a4635b:
  piVar2 = piStack_14;
  uStack_8 = 4;
  if (piStack_14 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_14 + 4);
    _guard_check_icall(uStack_18);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar2;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



undefined4 __thiscall FUN_00a463c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4faed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1[0x10] != 0) {
LAB_00a464d5:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  cVar3 = func_0x00a46890(param_1[0x15],uVar4);
  if (cVar3 == '\0') goto LAB_00a464d5;
  uStack_18 = 0;
  piStack_14 = (int *)0x0;
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xbc);
  _guard_check_icall(param_2,param_3,&uStack_18);
  iVar5 = (*pcVar1)();
  if (iVar5 != 1) {
    pcVar1 = *(code **)(*param_1 + 0xc0);
    _guard_check_icall(param_2,piStack_14);
    iVar5 = (*pcVar1)();
    if (iVar5 != 1) {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0xcc);
      _guard_check_icall(param_2);
      iVar5 = (*pcVar1)();
      if (iVar5 != 1) {
        uVar6 = 0;
        goto LAB_00a4648b;
      }
    }
  }
  uVar6 = 1;
LAB_00a4648b:
  piVar2 = piStack_14;
  uStack_8 = 4;
  if (piStack_14 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_14 + 4);
    _guard_check_icall(uStack_18);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar2;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



undefined4 __thiscall FUN_00a464f0(int *param_1,undefined4 param_2,byte param_3)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4faed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1[0x10] != 0) {
LAB_00a46617:
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  cVar3 = func_0x00a46630(0,param_1[0x15],uVar4);
  if (cVar3 == '\0') goto LAB_00a46617;
  uStack_18 = 0;
  piStack_14 = (int *)0x0;
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xbc);
  _guard_check_icall(param_2,param_3 | *(int *)(param_1[0xc] + 0x70) == 0x93a3,&uStack_18);
  iVar5 = (*pcVar1)();
  if (iVar5 != 1) {
    pcVar1 = *(code **)(*param_1 + 0xc0);
    _guard_check_icall(param_2,piStack_14);
    iVar5 = (*pcVar1)();
    if (iVar5 != 1) {
      piStack_14 = (int *)0x0;
      pcVar1 = *(code **)(*param_1 + 0xcc);
      _guard_check_icall(param_2);
      iVar5 = (*pcVar1)();
      if (iVar5 != 1) {
        uVar6 = 0;
        goto LAB_00a465cd;
      }
    }
  }
  uVar6 = 1;
LAB_00a465cd:
  piVar2 = piStack_14;
  uStack_8 = 4;
  if (piStack_14 != (int *)0x0) {
    pcVar1 = *(code **)(*piStack_14 + 4);
    _guard_check_icall(uStack_18);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar2;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



void FUN_00a466a0(int param_1)

{
  func_0x00a46710(*(undefined4 *)(param_1 + 4));
  return;
}



void FUN_00a466b0(int param_1)

{
  func_0x00a467a0(*(undefined4 *)(param_1 + 4));
  return;
}



void FUN_00a466c0(int param_1)

{
  func_0x00a46890(*(undefined4 *)(param_1 + 4));
  return;
}



uint __thiscall FUN_00a466d0(int param_1,uint param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    return (uint)(*(int *)(param_1 + 0x40) != 0);
  }
  return param_2 & 0xffffff00;
}



void FUN_00a466f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_004b5b20();
  func_0x00a46630(uVar2,uVar1);
  return;
}



undefined4 __thiscall FUN_00a46990(int param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((*(int **)(param_1 + 0x40) != (int *)0x0) && (*param_2 == '\0')) &&
     (-1 < *(int *)(param_2 + 4))) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    if (*(int *)(param_2 + 4) < iVar2) {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a469d0(int param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  
  if (((*(int **)(param_1 + 0x40) != (int *)0x0) && (*param_2 == '\x01')) &&
     (-1 < *(int *)(param_2 + 4))) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    if (*(int *)(param_2 + 4) < iVar3) {
      cVar2 = func_0x00967c60();
      if ((cVar2 == '\0') ||
         ((-1 < *(int *)(param_2 + 8) &&
          (*(int *)(param_2 + 8) < *(int *)(param_1 + 0x58 + *(int *)(param_2 + 4) * 4))))) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a46a30(int param_1,char *param_2)

{
  if (((*(int *)(param_1 + 0x40) != 0) && (*param_2 == '\x02')) && (*(int *)(param_2 + 4) == 0)) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00a46a50(int param_1,char *param_2)

{
  if (((*(int *)(param_1 + 0x40) != 0) && (*param_2 == '\x03')) && (*(int *)(param_2 + 4) == 0)) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00a46a70(int param_1,char *param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((*(int **)(param_1 + 0x40) != (int *)0x0) && (*param_2 == '\x04')) &&
     (-1 < *(int *)(param_2 + 4))) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    if (*(int *)(param_2 + 4) < iVar2) {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a46ab0(int param_1,char *param_2)

{
  if (((*(int *)(param_1 + 0x40) != 0) && (*param_2 == '\n')) && (*(int *)(param_2 + 4) == 0)) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00a46ad0(int param_1,char *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x40) != 0) && (*param_2 == '\a')) {
    uVar2 = func_0x00967be0();
    cVar3 = func_0x0093d080(uVar2);
    if ((cVar3 != '\0') && (-1 < *(int *)(param_2 + 4))) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
      _guard_check_icall();
      iVar4 = (*pcVar1)();
      if (*(int *)(param_2 + 4) < iVar4) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a46b30(int param_1,char *param_2)

{
  if (((*(int *)(param_1 + 0x40) != 0) && (*param_2 == '\x05')) && (*(int *)(param_2 + 4) == 0)) {
    return 1;
  }
  return 0;
}



void __fastcall FUN_00a46b90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x5c);
  iVar3 = 0x10;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    *(undefined1 *)(iVar1 + 0x16) = 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



void __fastcall FUN_00a46bc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0x10;
  piVar3 = (int *)(param_1 + 0x58);
  do {
    iVar2 = 0;
    if (0 < *piVar3) {
      do {
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *(undefined1 *)(*(int *)(piVar3[0x10] + iVar1) + 0x16) = 1;
      } while (iVar2 < *piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



void __fastcall FUN_00a46c00(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x58);
  iVar3 = 0x10;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    *(undefined1 *)(iVar1 + 0x16) = 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



void __fastcall FUN_00a46c30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0x10;
  piVar1 = (int *)(param_1 + 0x98);
  do {
    *(undefined1 *)(piVar1[-0x10] + 0x16) = 1;
    *(undefined1 *)(*piVar1 + 0x16) = 1;
    *(undefined1 *)(piVar1[0x10] + 0x16) = 1;
    *(undefined1 *)(piVar1[0x20] + 0x16) = 1;
    *(undefined1 *)(piVar1[0x30] + 0x16) = 1;
    *(undefined1 *)(piVar1[0x40] + 0x16) = 1;
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



void FUN_00a46c80(undefined4 param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = 0;
  func_0x00a47910(param_1,&uStack_4);
  return;
}



void __thiscall FUN_00a46ca0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int iStack_4;
  
  iStack_4 = param_1;
  for (piVar3 = (int *)(param_1 + 0x5c); piVar3 != (int *)(param_1 + 0x9c); piVar3 = piVar3 + 1) {
    puVar1 = (undefined4 *)*piVar3;
    *piVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar1;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  iStack_4 = 0;
  func_0x00a47910(param_2,&iStack_4);
  return;
}



void FUN_00a46d10(undefined4 param_1)

{
  undefined4 uStack_4;
  
  func_0x00a443f0();
  uStack_4 = 0;
  func_0x00a47910(param_1,&uStack_4);
  return;
}



void __thiscall FUN_00a46d40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int iStack_4;
  
  iStack_4 = param_1;
  for (piVar3 = (int *)(param_1 + 0x58); piVar3 != (int *)(param_1 + 0x98); piVar3 = piVar3 + 1) {
    puVar1 = (undefined4 *)*piVar3;
    *piVar3 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      pcVar2 = *(code **)*puVar1;
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  iStack_4 = 0;
  func_0x00a47910(param_2,&iStack_4);
  return;
}



void __thiscall FUN_00a46db0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int iStack_4;
  
  piVar5 = (int *)(param_1 + 0x58);
  piVar4 = (int *)(param_1 + 0x1d8);
  piStack_8 = piVar4;
  iStack_4 = param_1;
  if (piVar5 != piVar4) {
    do {
      piVar1 = piVar5 + 0x10;
      for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
        puVar2 = (undefined4 *)*piVar5;
        *piVar5 = 0;
        if (puVar2 != (undefined4 *)0x0) {
          pcVar3 = *(code **)*puVar2;
          _guard_check_icall(1);
          (*pcVar3)();
        }
        piVar4 = piStack_8;
      }
      piVar5 = piVar1;
    } while (piVar1 != piVar4);
  }
  piStack_8 = (int *)0x0;
  func_0x00a47910(param_2,&piStack_8);
  return;
}



undefined4 __fastcall FUN_00a46e40(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x30);
    piVar4 = (int *)(iVar2 + 0xb8);
    if (piVar1 + 0xd != piVar4) {
      if (0xf < *(uint *)(iVar2 + 0xcc)) {
        piVar4 = (int *)*piVar4;
      }
      func_0x0046a660(piVar4,*(undefined4 *)(iVar2 + 200));
    }
    pcVar3 = *(code **)(*piVar1 + 0x48);
    _guard_check_icall();
    (*pcVar3)();
  }
  return 0;
}



void FUN_00a46e90(undefined4 param_1,undefined4 param_2)

{
  func_0x00953460(param_2);
  return;
}



undefined4 FUN_00a47700(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::releaseTexImage",0xfd4);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a47750(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uStack_10 = 0;
    iVar1 = func_0x00a47910(param_2,&uStack_10);
    if (iVar1 == 1) {
      return 1;
    }
  }
  iVar1 = 0;
  do {
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 1;
    iVar2 = func_0x00a46ea0(param_2,iVar1,0,&uStack_c,1);
    if (iVar2 == 1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return 0;
}



undefined4 FUN_00a477d0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_2DArray::releaseTexImage",0xe26);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a47820(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_3D::releaseTexImage",0xb3d);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a47870(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::releaseTexImage",0x1193);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a478c0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Cube::releaseTexImage",0x87d);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a47b60(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [36];
  
  iVar3 = func_0x00a45150();
  iStack_48 = 1;
  if (1 < iVar3) {
    iStack_48 = iVar3;
  }
  iVar3 = func_0x00a450f0();
  iStack_40 = 1;
  if (1 < iVar3) {
    iStack_40 = iVar3;
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  iStack_38 = 1;
  if (1 < iVar3) {
    iStack_38 = iVar3;
  }
  if ((uint)param_1[0x15] < 0x10) {
    iVar3 = *param_1;
    pcVar1 = *(code **)(iVar3 + 0xa8);
    _guard_check_icall(auStack_34,param_1[0x15],0);
    uVar4 = (*pcVar1)();
    pcVar1 = *(code **)(iVar3 + 0x98);
    _guard_check_icall(uVar4);
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) goto LAB_00a47bf3;
    iVar3 = *(int *)(iVar3 + 0x10);
  }
  else {
LAB_00a47bf3:
    iVar3 = 0;
  }
  param_1[0x15] = param_3;
  iVar5 = func_0x00a45150();
  iStack_4c = 1;
  if (1 < iVar5) {
    iStack_4c = iVar5;
  }
  iVar5 = func_0x00a450f0();
  iStack_44 = 1;
  if (1 < iVar5) {
    iStack_44 = iVar5;
  }
  pcVar1 = *(code **)(*param_1 + 0xb0);
  _guard_check_icall();
  iVar5 = (*pcVar1)();
  iStack_3c = 1;
  if (1 < iVar5) {
    iStack_3c = iVar5;
  }
  if ((uint)param_1[0x15] < 0x10) {
    iVar5 = *param_1;
    pcVar1 = *(code **)(iVar5 + 0xa8);
    _guard_check_icall(auStack_34,param_1[0x15],0);
    uVar4 = (*pcVar1)();
    pcVar1 = *(code **)(iVar5 + 0x98);
    _guard_check_icall(uVar4);
    iVar5 = (*pcVar1)();
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 0x10);
      goto LAB_00a47c8a;
    }
  }
  iVar5 = 0;
LAB_00a47c8a:
  if ((param_1[0x10] != 0) &&
     ((((iStack_4c != iStack_48 || (iStack_44 != iStack_40)) || (iStack_3c != iStack_38)) ||
      (iVar5 != iVar3)))) {
    pcVar1 = *(code **)(*param_1 + 0xc4);
    _guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0xc);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*param_1 + 0xa4);
      _guard_check_icall(auStack_24);
      (*pcVar1)();
      cVar2 = func_0x00967c70();
      while (cVar2 != '\0') {
        puVar7 = auStack_34;
        func_0x00967ce0();
        if ((int *)param_1[0x10] == (int *)0x0) {
          uVar4 = 0;
        }
        else {
          pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x44);
          _guard_check_icall();
          uVar4 = (*pcVar1)();
        }
        pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x20);
        _guard_check_icall(param_2,&iStack_38,uVar4,&stack0xffffffb0);
        iVar3 = (*pcVar1)();
        if (iVar3 == 1) {
          return 1;
        }
        if (puVar7 != (undefined1 *)0x0) {
          pcVar1 = *(code **)(*param_1 + 0x98);
          _guard_check_icall(&iStack_48);
          piVar6 = (int *)(*pcVar1)();
          pcVar1 = *(code **)(*piVar6 + 0x28);
          _guard_check_icall(param_2,&iStack_4c,param_1[0x10]);
          iVar3 = (*pcVar1)();
          if (iVar3 == 1) {
            return 1;
          }
        }
        cVar2 = func_0x00967c70();
      }
    }
    iStack_38 = 0;
    iVar3 = func_0x00a47910(param_2,&iStack_38);
    if (iVar3 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00a47e00(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D::setBuffer",0xbf);
  (*pcVar1)();
  return 1;
}



bool __thiscall FUN_00a47e50(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f4fb1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  pcVar1 = *(code **)(*(int *)param_1[0xe] + 0xac);
  _guard_check_icall(param_1[0xc] + 0x98,param_3,param_1[0xc] + 0xb8,uVar2);
  piVar3 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0xc0);
  uStack_8 = uStack_8 & 0xffffff00;
  _guard_check_icall(param_2,piVar3);
  iVar4 = (*pcVar1)();
  if (iVar4 != 1) {
    param_1[0x16] = param_3;
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
    piVar3 = (int *)0x0;
  }
  uStack_8 = 3;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    _guard_check_icall(0);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar3;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4 == 1;
}



undefined4 __thiscall FUN_00a47f40(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_ESI;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_4;
  
  if (param_3 != (int *)0x0) {
    pcVar1 = *(code **)(*param_3 + 0x14);
    iStack_4 = param_1;
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      iVar5 = 0;
      pcVar1 = *(code **)(*param_3 + 0x1c);
      _guard_check_icall();
      iVar3 = (*pcVar1)();
      if (0 < iVar3) {
        puVar6 = (undefined4 *)(param_1 + 0x5c);
        do {
          pcVar1 = *(code **)(*(int *)*puVar6 + 0x14);
          uVar7 = param_2;
          piVar8 = param_3;
          iVar3 = iVar5;
          _guard_check_icall(param_2,param_3,iVar5);
          iVar4 = (*pcVar1)();
          if (iVar4 == 1) {
            return 1;
          }
          iVar5 = iVar5 + 1;
          puVar6 = unaff_ESI + 1;
          pcVar1 = *(code **)(*param_3 + 0x1c);
          _guard_check_icall(uVar7,piVar8,iVar3);
          iVar3 = (*pcVar1)();
          param_1 = iStack_4;
          unaff_ESI = puVar6;
        } while (iVar5 < iVar3);
      }
    }
  }
  iStack_4 = 0xffff;
  iVar3 = func_0x00a47910(param_2,&iStack_4);
  if (iVar3 == 1) {
    return 1;
  }
  *(int **)(param_1 + 0x40) = param_3;
  func_0x009533f0(param_3);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return 0;
}



undefined4 __thiscall FUN_00a48020(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  undefined4 uStack_4;
  
  uStack_4 = 0xffff;
  iVar1 = func_0x00a47910(param_2,&uStack_4);
  if (iVar1 == 1) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x40) = unaff_retaddr;
  func_0x009533f0(unaff_retaddr);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return 0;
}



undefined4 __thiscall FUN_00a48060(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x40) = param_3;
  func_0x009533f0(param_3);
  return 0;
}



undefined4 __thiscall FUN_00a48080(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [24];
  undefined1 auStack_24 [36];
  
  if ((int *)param_1[0x10] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0xc);
    _guard_check_icall();
    cVar3 = (*pcVar1)();
    if (cVar3 != '\0') {
      func_0x00a44d30();
      pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x1c);
      _guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*param_1 + 0xa4);
      _guard_check_icall(auStack_24);
      (*pcVar1)();
      cVar3 = func_0x00967c70();
      while (cVar3 != '\0') {
        func_0x00967ce0(auStack_54);
        pcVar1 = *(code **)(*param_1 + 0x98);
        _guard_check_icall(auStack_58);
        iVar4 = (*pcVar1)();
        if ((uint)param_1[0x15] < 0x10) {
          iVar2 = *param_1;
          pcVar1 = *(code **)(iVar2 + 0xa8);
          _guard_check_icall(auStack_4c,param_1[0x15],0);
          uVar5 = (*pcVar1)();
          pcVar1 = *(code **)(iVar2 + 0x98);
          _guard_check_icall(uVar5);
          (*pcVar1)();
          if ((uint)param_1[0x15] < 0x10) {
            iVar2 = *param_1;
            pcVar1 = *(code **)(iVar2 + 0xa8);
            _guard_check_icall(auStack_3c,param_1[0x15],0);
            uVar5 = (*pcVar1)();
            pcVar1 = *(code **)(iVar2 + 0x98);
            _guard_check_icall(uVar5);
            (*pcVar1)();
          }
        }
        if (iVar4 != 0) {
          pcVar1 = *(code **)(*param_1 + 0xb8);
          _guard_check_icall(auStack_5c);
          (*pcVar1)();
        }
        cVar3 = func_0x00967c70();
      }
    }
    func_0x00953460(0xd);
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 4);
    _guard_check_icall(unaff_retaddr);
    iVar4 = (*pcVar1)();
    if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
      pcVar1 = (code *)**(undefined4 **)param_1[0x10];
      _guard_check_icall(1);
      (*pcVar1)();
    }
    param_1[0x10] = 0;
    if (iVar4 == 1) {
      return 1;
    }
  }
  param_1[0x10] = param_3;
  func_0x009533f0(param_3);
  *(undefined1 *)(param_1 + 0xf) = 1;
  return 0;
}



undefined4 __thiscall FUN_00a48230(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EBP;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_4;
  
  if (param_3 != (int *)0x0) {
    pcVar1 = *(code **)(*param_3 + 0x14);
    iStack_4 = param_1;
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      puStack_c = (undefined4 *)(param_1 + 0x58);
      iStack_10 = 0;
      do {
        iVar6 = 0;
        pcVar1 = *(code **)(*param_3 + 0x1c);
        _guard_check_icall();
        iVar3 = (*pcVar1)();
        puVar5 = puStack_c;
        if (0 < iVar3) {
          do {
            pcVar1 = *(code **)(*(int *)*puVar5 + 0x18);
            uVar7 = param_2;
            piVar8 = param_3;
            iVar3 = iStack_10;
            iVar9 = iVar6;
            _guard_check_icall(param_2,param_3,iStack_10,iVar6);
            iVar4 = (*pcVar1)();
            if (iVar4 == 1) {
              return 1;
            }
            iVar6 = iVar6 + 1;
            unaff_EBP = unaff_EBP + 1;
            pcVar1 = *(code **)(*param_3 + 0x1c);
            _guard_check_icall(uVar7,piVar8,iVar3,iVar9);
            iVar3 = (*pcVar1)();
            puVar5 = unaff_EBP;
          } while (iVar6 < iVar3);
        }
        puStack_c = puStack_c + 0x10;
        iStack_10 = iStack_10 + 1;
        param_1 = iStack_4;
      } while (iStack_10 < 6);
    }
  }
  iStack_4 = 0xffff;
  iVar3 = func_0x00a47910(param_2,&iStack_4);
  if (iVar3 == 1) {
    return 1;
  }
  *(int **)(param_1 + 0x40) = param_3;
  func_0x009533f0(param_3);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return 0;
}



undefined4 FUN_00a48340(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::setCompressedImage",0xfa7);
  (*pcVar1)();
  return 1;
}



void FUN_00a48390(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = func_0x00a46ea0(param_1,*(undefined4 *)(param_2 + 4),param_3,param_4,0);
  if (iVar1 == 1) {
    return;
  }
  func_0x00a485c0(param_4,param_2,unaff_retaddr,param_2,0);
  return;
}



undefined4 __thiscall
FUN_00a483e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int iVar3;
  int unaff_EDI;
  int iVar4;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0;
  puStack_30 = param_5;
  puStack_34 = param_4;
  uStack_38 = *(undefined4 *)(param_3 + 4);
  uStack_3c = param_2;
  puStack_40 = (undefined4 *)0xa48412;
  iVar2 = func_0x00a47070();
  if (iVar2 != 1) {
    puStack_40 = param_4;
    func_0x00946ea0();
    uStack_2c = 0;
    puStack_40 = &uStack_2c;
    iVar2 = 0;
    cVar1 = func_0x0094a950(0x1401,*param_5,param_5[1],1,0,0);
    if (cVar1 != '\0') {
      iVar4 = 0;
      if (0 < (int)param_5[2]) {
        do {
          iVar3 = iVar4 * iVar2;
          func_0x009677b0(&puStack_40,*(undefined4 *)(unaff_EDI + 4),iVar4);
          iVar3 = func_0x00a485c0(param_2,&puStack_40,unaff_EBX,param_1,iVar3);
          if (iVar3 == 1) {
            return 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_5[2]);
      }
      return 0;
    }
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                    ,"rx::TextureD3D_2DArray::setCompressedImage",0xd01);
  }
  return 1;
}



void FUN_00a484d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = func_0x00a473c0(param_1,*(undefined4 *)(param_2 + 4),param_3,param_4,0);
  if (iVar1 == 1) {
    return;
  }
  func_0x00a485c0(param_4,param_2,unaff_retaddr,param_2,0);
  return;
}



undefined4 FUN_00a48520(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::setCompressedImage",0x1167);
  (*pcVar1)();
  return 1;
}



void FUN_00a48570(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = FUN_004b5b20();
  iVar3 = func_0x00a47570(param_1,uVar2,uVar1,param_3,param_4,0);
  if (iVar3 == 1) {
    return;
  }
  func_0x00a485c0(param_1,param_2,unaff_EBX,param_1,0);
  return;
}



undefined4 FUN_00a486d0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::setCompressedSubImage",0xfb3);
  (*pcVar1)();
  return 1;
}



void FUN_00a48720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = func_0x00a4a6b0(param_1,param_2,param_3,param_4,param_5,param_7,0);
  if (iVar1 == 1) {
    return;
  }
  func_0x00a410b0(param_3,param_4,param_5);
  return;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall
FUN_00a48770(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_retaddr;
  int *piVar5;
  int aiStack_48 [2];
  undefined4 *puStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_40 = (undefined4 *)param_5;
  aiStack_48[1] = 0xa4878b;
  func_0x00946ea0();
  puStack_40 = &uStack_30;
  uStack_30 = 0;
  aiStack_48[1] = 0;
  aiStack_48[0] = 0;
  piVar5 = (int *)0x1;
  cVar2 = func_0x0094a950(0x1401,*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0x10),1);
  if (cVar2 == '\0') {
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                    ,"rx::TextureD3D_2DArray::setCompressedSubImage",0xd1e);
    return 1;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_4 + 0x14)) {
    do {
      iVar4 = iVar3 * (int)piVar5;
      uStack_30 = *(undefined4 *)(param_4 + 4);
      uStack_28 = *(undefined4 *)(param_4 + 0xc);
      uStack_24 = *(undefined4 *)(param_4 + 0x10);
      uStack_2c = 0;
      uStack_20 = 1;
      func_0x009677b0(aiStack_48 + 1,*(undefined4 *)(iStack_14 + 4),*(int *)(param_4 + 8) + iVar3);
      iVar4 = func_0x00a4a6b0(uStack_18,aiStack_48 + 1,&stack0xffffffcc,uStack_c,uStack_8,
                              unaff_retaddr,iVar4);
      if (iVar4 == 1) {
        return 1;
      }
      if (param_1[0x10] != 0) {
        pcVar1 = *(code **)(*param_1 + 0x98);
        _guard_check_icall(aiStack_48 + 1);
        piVar5 = (int *)(*pcVar1)();
        pcVar1 = *(code **)(*piVar5 + 0x24);
        _guard_check_icall(uStack_1c,param_1[0x10],aiStack_48,&stack0xffffffc8);
        iVar4 = (*pcVar1)();
        if (iVar4 == 1) {
          return 1;
        }
        *(undefined1 *)(aiStack_48[0] + 0x16) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_4 + 0x14));
  }
  return 0;
}



undefined4 FUN_00a488f0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::setCompressedSubImage",0x1173);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a48940(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_38 = 0xa48954;
  uStack_1c = FUN_004b3350();
  uStack_38 = 0xa4895f;
  piVar2 = (int *)func_0x00923100();
  uStack_38 = 0xa48968;
  uVar3 = FUN_004b4ca0();
  uStack_38 = 0xa48971;
  uStack_18 = FUN_00472ac0();
  puStack_3c = &uStack_18;
  uStack_38 = 1;
  uStack_10 = 1;
  uStack_40 = *(undefined4 *)(*piVar2 + 8);
  uVar5 = param_2;
  uStack_14 = uVar3;
  iVar4 = func_0x00a46ea0(param_2,0);
  if (iVar4 != 1) {
    uVar6 = 1;
    do {
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 1;
      iVar4 = func_0x00a46ea0(param_2,uVar6,0,&uStack_20,1);
      if (iVar4 == 1) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    iVar4 = func_0x00a47910(param_2,&stack0xffffffcc);
    uVar3 = uStack_38;
    if (iVar4 != 1) {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x16) = 0;
      uStack_40 = 0;
      iVar4 = func_0x009f45e0(param_2,&uStack_40);
      if (iVar4 != 1) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0x38) + 0xa8);
        _guard_check_icall(uVar3,uVar5,*(int *)(param_1 + 0x30) + 0xb8);
        uVar5 = (*pcVar1)();
        *(undefined4 *)(param_1 + 0x40) = uVar5;
        *(undefined1 *)(param_1 + 0x58) = 1;
        return 0;
      }
    }
  }
  return 1;
}



undefined4 FUN_00a48a70(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_2DArray::setEGLImageTarget",0xca4);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a48ac0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_2DMultisample::setEGLImageTarget",0x1072);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a48b10(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_2DMultisampleArray::setEGLImageTarget",0x10ea);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a48b60(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_3D::setEGLImageTarget",0x9fd);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a48bb0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::setEGLImageTarget",0x11e0);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a48c00(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Cube::setEGLImageTarget",0x70d);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a48c50(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_8 [2];
  
  uVar2 = FUN_004b3350();
  puVar4 = auStack_8;
  auStack_8[0] = 0;
  iVar3 = func_0x009f45e0(param_2,puVar4);
  if (iVar3 != 1) {
    iVar3 = func_0x00a47910(param_2,&stack0xfffffff4);
    if (iVar3 != 1) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x38) + 0xa8);
      _guard_check_icall(uVar2,puVar4,*(int *)(param_1 + 0x30) + 0xb8);
      uVar2 = (*pcVar1)();
      *(undefined4 *)(param_1 + 0x40) = uVar2;
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00a48ce0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::setImage",0xf8e);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a48d30(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 uVar7;
  undefined4 uStack_3c;
  undefined4 uStack_20;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_4;
  
  uStack_3c = param_7;
  iVar4 = func_0x00946bf0(param_4);
  uStack_3c = 0;
  iVar6 = *(int *)(param_3 + 4);
  uVar7 = param_2;
  iVar4 = func_0x00a46ea0(param_2,iVar6,*(undefined4 *)(iVar4 + 8),param_5);
  if (iVar4 != 1) {
    if ((int *)param_1[0x10] != (int *)0x0) {
      pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x3c);
      _guard_check_icall(*(undefined4 *)(param_3 + 4));
      iVar4 = (*pcVar1)();
      if (iVar4 == 1) {
        return 1;
      }
    }
    iVar4 = param_3;
    if ((((param_4 != 0) && (*(int *)(param_3 + 8) == 0)) && (*(int *)(param_3 + 0xc) == 0)) &&
       ((*(int *)(param_3 + 0x10) == 0 && (*(int *)(param_3 + 0x14) == 0)))) {
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 200);
      _guard_check_icall(*(undefined4 *)(unaff_EDI + 8));
      cVar3 = (*pcVar1)();
      iVar4 = iStack_c;
      if ((cVar3 != '\0') && (cVar3 = func_0x00a46710(*(undefined4 *)(iStack_c + 4)), cVar3 != '\0')
         ) {
        uStack_3c = 0;
        pcVar1 = *(code **)(*param_1 + 0xa0);
        if ((int *)param_1[0x10] == (int *)0x0) {
          uVar5 = 0;
        }
        else {
          pcVar2 = *(code **)(*(int *)param_1[0x10] + 0x44);
          _guard_check_icall();
          uVar5 = (*pcVar2)();
        }
        _guard_check_icall(uStack_10,iStack_c,uVar5,&uStack_3c);
        iVar4 = (*pcVar1)();
        if (iVar4 == 1) {
          return 1;
        }
        uStack_3c = 0;
        iVar6 = func_0x00a44730(uStack_20,param_3,uStack_4,unaff_retaddr,&uStack_3c,
                                *(undefined4 *)(iVar6 + 8),iStack_c,uVar7);
        if (iVar6 == 1) {
          return 1;
        }
        *(undefined1 *)(param_1[*(int *)(iStack_c + 4) + 0x17] + 0x16) = 0;
        return 0;
      }
    }
    iVar6 = func_0x00a493b0(uStack_10,iVar4,param_2,param_3,param_4,param_5,0);
    if (iVar6 != 1) {
      return 0;
    }
  }
  return 1;
}



undefined4
FUN_00a48f30(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  undefined4 unaff_EDI;
  int iVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_30 = param_6;
  puStack_34 = (undefined4 *)param_3;
  uStack_38 = 0xa48f4b;
  iVar2 = func_0x00946bf0();
  uStack_30 = 0;
  puStack_34 = param_4;
  uStack_38 = *(undefined4 *)(iVar2 + 8);
  uStack_3c = param_2[1];
  uStack_40 = param_1;
  iVar3 = func_0x00a47070();
  if (iVar3 != 1) {
    uStack_30 = 0;
    iVar3 = param_2[1];
    cVar1 = func_0x0094a950(param_6,*param_4,param_4[1],*param_2,iVar3,param_2[4],&uStack_30);
    if (cVar1 != '\0') {
      iVar5 = 0;
      if (0 < (int)param_4[2]) {
        do {
          iVar4 = iVar5 * iVar3;
          func_0x009677b0(&uStack_40,*(undefined4 *)(unaff_ESI + 4),iVar5);
          iVar4 = func_0x00a493b0(unaff_EDI,&uStack_40,iVar2,param_2,uStack_10,uStack_c,iVar4);
          if (iVar4 == 1) {
            return 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_4[2]);
      }
      return 0;
    }
    func_0x0098f180(0x502,"Integer overflow.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                    ,"rx::TextureD3D_2DArray::setImage",0xcbe);
  }
  return 1;
}



undefined4 __thiscall
FUN_00a49040(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,code *param_7)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 uVar6;
  code *pcStack_3c;
  undefined4 uStack_10;
  int iStack_c;
  int *piStack_4;
  
  pcStack_3c = param_7;
  iVar3 = func_0x00946bf0(param_4);
  pcStack_3c = (code *)0x0;
  iVar3 = *(int *)(iVar3 + 8);
  uVar6 = *(undefined4 *)(param_3 + 4);
  iVar4 = func_0x00a473c0(param_2,uVar6,iVar3,param_5);
  if (iVar4 != 1) {
    iVar4 = param_3;
    if ((((param_4 != 0) && (*(int *)(param_3 + 8) == 0)) && (*(int *)(param_3 + 0xc) == 0)) &&
       ((*(int *)(param_3 + 0x10) == 0 && (*(int *)(param_3 + 0x14) == 0)))) {
      pcVar1 = *(code **)(*(int *)param_1[0xe] + 200);
      _guard_check_icall(*(undefined4 *)(unaff_ESI + 8));
      cVar2 = (*pcVar1)();
      iVar4 = iStack_c;
      if ((cVar2 != '\0') &&
         ((piStack_4[2] * piStack_4[1] * *piStack_4 != 0 &&
          (cVar2 = func_0x00a46890(*(undefined4 *)(iStack_c + 4)), cVar2 != '\0')))) {
        pcStack_3c = *(code **)(*param_1 + 0xa0);
        if ((int *)param_1[0x10] == (int *)0x0) {
          uVar5 = 0;
        }
        else {
          pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x44);
          _guard_check_icall();
          uVar5 = (*pcVar1)();
        }
        _guard_check_icall(uStack_10,iStack_c,uVar5,&stack0xffffffc8);
        iVar4 = (*pcStack_3c)();
        if (iVar4 == 1) {
          return 1;
        }
        pcStack_3c = (code *)0x0;
        iVar3 = func_0x00a44730(uStack_10,param_3,piStack_4,unaff_retaddr,&pcStack_3c,
                                *(undefined4 *)(iVar3 + 8),iStack_c,uVar6);
        if (iVar3 == 1) {
          return 1;
        }
        *(undefined1 *)(param_1[*(int *)(iStack_c + 4) + 0x16] + 0x16) = 0;
        return 0;
      }
    }
    iVar3 = func_0x00a493b0(uStack_10,iVar4,param_2,param_3,param_4,param_5,0);
    if (iVar3 != 1) {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00a49240(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::setImage",0x114e);
  (*pcVar1)();
  return 1;
}



void FUN_00a49290(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  
  iVar3 = func_0x00946bf0(param_3,param_6);
  uVar1 = *(undefined4 *)(iVar3 + 8);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar4 = FUN_004b5b20();
  iVar3 = func_0x00a47570(param_1,uVar4,uVar2,uVar1,param_4,0);
  if (iVar3 == 1) {
    return;
  }
  func_0x00a493b0(param_1,param_2,unaff_retaddr,param_1,param_2,param_3,0);
  return;
}



undefined4 FUN_00a49300(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D::setImageExternal",0x1be);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall FUN_00a49350(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar2 = func_0x00a47910(param_2,&uStack_4);
  if (iVar2 == 1) {
    return 1;
  }
  if (param_2 != 0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x38) + 0xb0);
    _guard_check_icall(param_2,param_3,*(int *)(param_1 + 0x30) + 0xb8);
    uVar3 = (*pcVar1)();
    *(undefined4 *)(param_1 + 0x40) = uVar3;
  }
  return 0;
}



undefined4 FUN_00a49510(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D::setStorage",0xae);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a49560(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            int *param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fb4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar7 = 0;
  uVar6 = param_4;
  if (param_4 == 0) {
LAB_00a495f2:
    do {
      iStack_1c = 0;
      iStack_18 = 0;
      piStack_14 = (int *)0x1;
      iVar3 = func_0x00a46ea0(param_2,uVar6,0,&iStack_1c,1,uVar2);
      if (iVar3 == 1) {
LAB_00a49712:
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
  }
  else {
    do {
      piStack_14 = (int *)0x1;
      iVar3 = param_6[1] >> ((byte)uVar7 & 0x1f);
      iStack_18 = 1;
      if (1 < iVar3) {
        iStack_18 = iVar3;
      }
      iVar3 = *param_6 >> ((byte)uVar7 & 0x1f);
      iStack_1c = 1;
      if (1 < iVar3) {
        iStack_1c = iVar3;
      }
      iVar3 = func_0x00a46ea0(param_2,uVar7,param_5,&iStack_1c,1,uVar2);
      if (iVar3 == 1) goto LAB_00a49712;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
    if (param_4 < 0x10) goto LAB_00a495f2;
  }
  pcVar1 = *(code **)(*(int *)param_1[0xe] + 0xa0);
  _guard_check_icall(param_5,*(int *)(param_1[0xc] + 0x70) == 0x93a3,*param_6,param_6[1],param_4,
                     param_1[0xc] + 0xb8,0);
  piVar4 = (int *)(*pcVar1)();
  iStack_18 = param_2;
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xc0);
  piStack_14 = piVar4;
  _guard_check_icall(param_2,piVar4);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    piStack_14 = (int *)0x0;
    pcVar1 = *(code **)(*param_1 + 0xcc);
    _guard_check_icall(param_2);
    iVar3 = (*pcVar1)();
    if (iVar3 != 1) {
      *(undefined1 *)((int)param_1 + 0x3d) = 1;
      uVar5 = 0;
      piVar4 = (int *)0x0;
      goto LAB_00a496cb;
    }
    piVar4 = (int *)0x0;
  }
  uVar5 = 1;
LAB_00a496cb:
  uStack_8 = 3;
  if (piVar4 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar4 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar4;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar5;
}



undefined4 __thiscall
FUN_00a49730(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            int *param_6)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint *puVar7;
  int *unaff_FS_OFFSET;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fb7d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_20 = param_1;
  func_0x00a443f0(uVar3);
  puVar7 = (uint *)(param_1 + 0x16);
  piStack_18 = (int *)0x0;
  do {
    uStack_24 = 1;
    iVar4 = param_6[1] >> ((byte)piStack_18 & 0x1f);
    iStack_28 = 1;
    if (1 < iVar4) {
      iStack_28 = iVar4;
    }
    iVar4 = *param_6 >> ((byte)piStack_18 & 0x1f);
    iStack_2c = 1;
    if (1 < iVar4) {
      iStack_2c = iVar4;
    }
    if (piStack_18 < param_4) {
      uVar3 = param_6[2];
      *puVar7 = uVar3;
      if (0 < (int)uVar3) {
        uVar5 = (undefined4)((ulonglong)uVar3 * 4);
        if ((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) {
          uVar5 = 0xffffffff;
        }
        uVar3 = func_0x008ab843(uVar5);
        puVar7[0x10] = uVar3;
        iStack_14 = 0;
        if (0 < (int)*puVar7) {
          do {
            pcVar1 = *(code **)(*(int *)piStack_20[0xe] + 0x8c);
            _guard_check_icall();
            uVar5 = (*pcVar1)();
            *(undefined4 *)(puVar7[0x10] + iStack_14 * 4) = uVar5;
            pcVar1 = *(code **)(**(int **)(puVar7[0x10] + iStack_14 * 4) + 8);
            _guard_check_icall(1,param_5,&iStack_2c,1);
            (*pcVar1)();
            iStack_14 = iStack_14 + 1;
          } while (iStack_14 < (int)*puVar7);
        }
      }
    }
    else {
      *puVar7 = 0;
    }
    piStack_18 = (int *)((int)piStack_18 + 1);
    puVar7 = puVar7 + 1;
  } while (piStack_18 < 0x10);
  pcVar1 = *(code **)(*(int *)piStack_20[0xe] + 0xbc);
  _guard_check_icall(param_5,*(int *)(piStack_20[0xc] + 0x70) == 0x93a3,*param_6,param_6[1],
                     param_6[2],param_4,piStack_20[0xc] + 0xb8);
  piVar6 = (int *)(*pcVar1)();
  piVar2 = piStack_20;
  uStack_1c = param_2;
  uStack_8 = 0;
  pcVar1 = *(code **)(*piStack_20 + 0xc0);
  piStack_18 = piVar6;
  _guard_check_icall(param_2,piVar6);
  iVar4 = (*pcVar1)();
  if (iVar4 != 1) {
    piStack_18 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 0xcc);
    _guard_check_icall(param_2);
    iVar4 = (*pcVar1)();
    if (iVar4 != 1) {
      *(undefined1 *)((int)piVar2 + 0x3d) = 1;
      uVar5 = 0;
      piVar6 = (int *)0x0;
      goto LAB_00a498fc;
    }
    piVar6 = (int *)0x0;
  }
  uVar5 = 1;
LAB_00a498fc:
  uStack_8 = 3;
  if (piVar6 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar6 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar6;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar5;
}



undefined4 __thiscall
FUN_00a49950(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            int *param_6)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fbad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_18 = (int *)0x0;
  uVar7 = param_4;
  piStack_14 = param_1;
  if (param_4 == 0) {
LAB_00a49a10:
    do {
      iStack_28 = 0;
      iStack_24 = 0;
      iStack_20 = 0;
      pcVar1 = *(code **)(*(int *)piStack_14[uVar7 + 0x16] + 8);
      _guard_check_icall(4,0,&iStack_28,1,uVar3);
      (*pcVar1)();
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x10);
  }
  else {
    do {
      bVar6 = (byte)piStack_18;
      iVar4 = param_6[2] >> (bVar6 & 0x1f);
      iStack_20 = 1;
      if (1 < iVar4) {
        iStack_20 = iVar4;
      }
      iVar4 = param_6[1] >> (bVar6 & 0x1f);
      iStack_24 = 1;
      if (1 < iVar4) {
        iStack_24 = iVar4;
      }
      iVar4 = *param_6 >> (bVar6 & 0x1f);
      iStack_28 = 1;
      if (1 < iVar4) {
        iStack_28 = iVar4;
      }
      pcVar1 = *(code **)(*(int *)param_1[(int)piStack_18 + 0x16] + 8);
      _guard_check_icall(4,param_5,&iStack_28,1,uVar3);
      (*pcVar1)();
      piStack_18 = (int *)((int)piStack_18 + 1);
    } while (piStack_18 < param_4);
    if (param_4 < 0x10) goto LAB_00a49a10;
  }
  piVar2 = piStack_14;
  pcVar1 = *(code **)(*(int *)piStack_14[0xe] + 0xb8);
  _guard_check_icall(param_5,*(int *)(piStack_14[0xc] + 0x70) == 0x93a3,*param_6,param_6[1],
                     param_6[2],param_4,piStack_14[0xc] + 0xb8);
  piVar5 = (int *)(*pcVar1)();
  uStack_1c = param_2;
  uStack_8 = 0;
  pcVar1 = *(code **)(*piVar2 + 0xc0);
  piStack_18 = piVar5;
  _guard_check_icall(param_2,piVar5);
  iVar4 = (*pcVar1)();
  if (iVar4 != 1) {
    piStack_18 = (int *)0x0;
    pcVar1 = *(code **)(*piVar2 + 0xcc);
    _guard_check_icall(param_2);
    iVar4 = (*pcVar1)();
    if (iVar4 != 1) {
      *(undefined1 *)((int)piVar2 + 0x3d) = 1;
      uVar8 = 0;
      piVar5 = (int *)0x0;
      goto LAB_00a49af4;
    }
    piVar5 = (int *)0x0;
  }
  uVar8 = 1;
LAB_00a49af4:
  uStack_8 = 3;
  if (piVar5 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar5 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar5;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar8;
}



undefined4 __thiscall
FUN_00a49b40(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fbdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_1c = (int *)0x0;
  piStack_14 = param_1;
  if (param_4 != (int *)0x0) {
    param_1 = param_1 + 0x16;
    do {
      iStack_18 = 6;
      iVar3 = *param_6 >> ((byte)piStack_1c & 0x1f);
      piStack_24 = (int *)1;
      piStack_20 = param_1;
      if (1 < iVar3) {
        piStack_24 = (int *)iVar3;
      }
      do {
        uStack_2c = 1;
        pcVar1 = *(code **)(*(int *)*param_1 + 8);
        iStack_34 = (int)piStack_24;
        iStack_30 = (int)piStack_24;
        _guard_check_icall(7,param_5,&iStack_34,1,uVar2);
        (*pcVar1)();
        iStack_18 = iStack_18 + -1;
        param_1 = param_1 + 0x10;
      } while (iStack_18 != 0);
      piStack_1c = (int *)((int)piStack_1c + 1);
      param_1 = piStack_20 + 1;
    } while (piStack_1c < param_4);
    iStack_18 = 0;
    piStack_20 = param_1;
  }
  if (param_4 < &DAT_00000010) {
    piVar4 = piStack_14 + (int)((int)param_4 + 0x16);
    iStack_18 = 0x10 - (int)param_4;
    do {
      piStack_20 = (int *)0x6;
      piStack_1c = piVar4;
      do {
        iStack_34 = 0;
        iStack_30 = 0;
        uStack_2c = 0;
        pcVar1 = *(code **)(*(int *)*piVar4 + 8);
        _guard_check_icall(7,0,&iStack_34,1,uVar2);
        (*pcVar1)();
        piStack_20 = (int *)((int)piStack_20 + -1);
        piVar4 = piVar4 + 0x10;
      } while (piStack_20 != (int *)0x0);
      piVar4 = piStack_1c + 1;
      iStack_18 = iStack_18 + -1;
      piStack_20 = (int *)0x0;
      piStack_1c = piVar4;
    } while (iStack_18 != 0);
  }
  pcVar1 = *(code **)(*(int *)piStack_14[0xe] + 0xb4);
  _guard_check_icall(param_5,*(int *)(piStack_14[0xc] + 0x70) == 0x93a3,*param_6,param_4,0,
                     piStack_14[0xc] + 0xb8);
  piVar5 = (int *)(*pcVar1)();
  uStack_28 = param_2;
  uStack_8 = 0;
  pcVar1 = *(code **)(*piStack_14 + 0xc0);
  piStack_24 = piVar5;
  _guard_check_icall(param_2,piVar5);
  iVar3 = (*pcVar1)();
  piVar4 = piStack_14;
  if (iVar3 != 1) {
    piStack_24 = (int *)0x0;
    pcVar1 = *(code **)(*piStack_14 + 0xcc);
    _guard_check_icall(param_2);
    iVar3 = (*pcVar1)();
    if (iVar3 != 1) {
      *(undefined1 *)((int)piVar4 + 0x3d) = 1;
      uVar6 = 0;
      piVar5 = (int *)0x0;
      goto LAB_00a49d11;
    }
    piVar5 = (int *)0x0;
  }
  uVar6 = 1;
LAB_00a49d11:
  uStack_8 = 3;
  if (piVar5 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar5 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar5;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar6;
}



undefined4 FUN_00a49d60(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D::setStorageExternalMemory",0xce);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00a49db0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D::setStorageMultisample",0xb9);
  (*pcVar1)();
  return 1;
}



bool __thiscall
FUN_00a49e00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fc0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)param_1[0xe] + 0xc0);
  _guard_check_icall(param_5,*param_6,param_6[1],0,param_4,param_7,param_1[0xc] + 0xb8,uVar2);
  piVar3 = (int *)(*pcVar1)();
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xc0);
  _guard_check_icall(param_2,piVar3);
  iVar4 = (*pcVar1)();
  if (iVar4 != 1) {
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    piVar3 = (int *)0x0;
  }
  uStack_8 = 1;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar3;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4 == 1;
}



bool __thiscall
FUN_00a49ee0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f4fc0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[0x16] = param_6[2];
  pcVar1 = *(code **)(*(int *)param_1[0xe] + 0xc4);
  _guard_check_icall(param_5,*param_6,param_6[1],param_6[2],0,param_4,param_7,param_1[0xc] + 0xb8,
                     uVar2);
  piVar3 = (int *)(*pcVar1)();
  uStack_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0xc0);
  _guard_check_icall(param_2,piVar3);
  iVar4 = (*pcVar1)();
  if (iVar4 != 1) {
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    piVar3 = (int *)0x0;
  }
  uStack_8 = 1;
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
    pcVar1 = *(code **)*piVar3;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar4 == 1;
}



undefined4 FUN_00a49fe0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3DImmutableBase::setSubImage",0xf9b);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00a4a030(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,undefined4 param_9)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_c;
  undefined4 uStack_8;
  code *pcStack_4;
  
  iVar3 = *(int *)(param_3 + 4);
  if (iVar3 < 0x10) {
    uStack_c = *(undefined4 *)(param_1[iVar3 + 0x17] + 0x10);
  }
  else {
    uStack_c = 0;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x3c);
    _guard_check_icall(iVar3);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
  }
  if ((((param_8 != 0) && (*(int *)(param_7 + 8) == 0)) && (*(int *)(param_7 + 0xc) == 0)) &&
     ((*(int *)(param_7 + 0x10) == 0 && (*(int *)(param_7 + 0x14) == 0)))) {
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 200);
    _guard_check_icall(uStack_c);
    cVar2 = (*pcVar1)();
    if ((cVar2 != '\0') && (cVar2 = func_0x00a46710(*(undefined4 *)(param_3 + 4)), cVar2 != '\0')) {
      uStack_8 = 0;
      pcStack_4 = *(code **)(*param_1 + 0xa0);
      if ((int *)param_1[0x10] == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        pcVar1 = *(code **)(*(int *)param_1[0x10] + 0x44);
        _guard_check_icall();
        uVar4 = (*pcVar1)();
      }
      pcVar1 = pcStack_4;
      _guard_check_icall(param_2,param_3,uVar4,&uStack_8);
      iVar3 = (*pcVar1)();
      if (iVar3 == 1) {
        return 1;
      }
      uVar4 = func_0x00a44730(param_2,param_7,param_4,param_5,pcStack_4,unaff_EDI,param_2,unaff_ESI)
      ;
      return uVar4;
    }
  }
  uVar4 = func_0x00a4a550(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return uVar4;
}



undefined4 __thiscall
FUN_00a4a1b0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int iVar4;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar4 = *(int *)(param_3 + 4);
  if ((iVar4 < 0x10) && (0 < *(int *)(param_1 + 0x58 + iVar4 * 4))) {
    uStack_44 = *(undefined4 *)(**(int **)(param_1 + 0x98 + iVar4 * 4) + 0x10);
  }
  else {
    uStack_44 = 0;
  }
  puStack_40 = (undefined4 *)param_6;
  func_0x00946bf0();
  puStack_40 = &uStack_2c;
  uStack_2c = 0;
  uStack_44 = param_7[4];
  iVar4 = param_7[1];
  cVar1 = func_0x0094a950(param_6,*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0x10),
                          *param_7,iVar4);
  if (cVar1 != '\0') {
    iVar3 = 0;
    if (0 < *(int *)(param_4 + 0x14)) {
      do {
        iVar2 = iVar3 * iVar4;
        uStack_28 = *(undefined4 *)(param_4 + 0xc);
        uStack_24 = *(undefined4 *)(param_4 + 0x10);
        uStack_2c = 0;
        uStack_20 = 1;
        func_0x009677b0(&uStack_44,*(undefined4 *)(iStack_14 + 4),*(int *)(param_4 + 8) + iVar3);
        iVar2 = func_0x00a4a550(uStack_18,&uStack_44,&stack0xffffffcc,uStack_c,uStack_8,uStack_4,
                                unaff_retaddr,param_2,iVar2);
        if (iVar2 == 1) {
          return 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_4 + 0x14));
    }
    return 0;
  }
  func_0x0098f180(0x502,"Integer overflow.",
                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                  ,"rx::TextureD3D_2DArray::setSubImage",0xcdc);
  return 1;
}



void __thiscall
FUN_00a4a300(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,undefined4 param_9)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  code *pcStack_4;
  
  if (*(int *)(param_3 + 4) < 0x10) {
    uStack_c = *(undefined4 *)(param_1[*(int *)(param_3 + 4) + 0x16] + 0x10);
  }
  else {
    uStack_c = 0;
  }
  if ((((param_8 != 0) && (*(int *)(param_7 + 8) == 0)) && (*(int *)(param_7 + 0xc) == 0)) &&
     ((*(int *)(param_7 + 0x10) == 0 && (*(int *)(param_7 + 0x14) == 0)))) {
    pcVar1 = *(code **)(*(int *)param_1[0xe] + 200);
    _guard_check_icall(uStack_c);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') {
      cVar2 = func_0x00a46890(*(undefined4 *)(param_3 + 4));
      if (cVar2 != '\0') {
        uStack_10 = 0;
        pcStack_4 = *(code **)(*param_1 + 0xa0);
        piStack_8 = (int *)param_1[0x10];
        if (piStack_8 == (int *)0x0) {
          uVar3 = 0;
        }
        else {
          pcVar1 = *(code **)(*piStack_8 + 0x44);
          _guard_check_icall();
          uVar3 = (*pcVar1)();
        }
        pcVar1 = pcStack_4;
        _guard_check_icall(param_2,param_3,uVar3,&uStack_10);
        iVar4 = (*pcVar1)();
        if (iVar4 == 1) {
          return;
        }
        func_0x00a44730(param_2,param_7,param_4,param_5,pcStack_4,unaff_ESI,param_2,unaff_EDI);
        return;
      }
    }
  }
  func_0x00a4a550(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  return;
}



undefined4 FUN_00a4a450(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\TextureD3D.cpp"
                     ,"rx::TextureD3D_Buffer::setSubImage",0x115b);
  (*pcVar1)();
  return 1;
}



void FUN_00a4a4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  func_0x00a4a550(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  return;
}



undefined4 __thiscall FUN_00a4a780(int *param_1,undefined4 param_2,uint *param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (((*param_3 >> 0x17 & 1) != 0) && (*(int *)(param_1[0xc] + 0x9c) != 0)) {
    pcVar1 = *(code **)(*param_1 + 0x5c);
    _guard_check_icall(param_2,param_1[0x16]);
    iVar2 = (*pcVar1)();
    if (iVar2 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00a4a7d0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return 0;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  iVar6 = 0;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(param_1 + 0x5c);
    do {
      pcVar1 = *(code **)(*(int *)*puVar4 + 4);
      _guard_check_icall();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        cVar2 = func_0x00a46710(iVar6);
        if (cVar2 != '\0') {
          iVar5 = func_0x00a4abb0(param_2,iVar6);
          if (iVar5 == 1) {
            return 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < iVar3);
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return 0;
}



undefined4 __thiscall FUN_00a4a880(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return 0;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      cVar2 = func_0x00a467a0(iVar5);
      if ((cVar2 != '\0') && (iVar4 = func_0x00a4ac90(param_2,iVar5), iVar4 == 1)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return 0;
}



undefined4 __thiscall FUN_00a4a8f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return 0;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  iVar6 = 0;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(param_1 + 0x58);
    do {
      pcVar1 = *(code **)(*(int *)*puVar4 + 4);
      _guard_check_icall();
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        cVar2 = func_0x00a46890(iVar6);
        if (cVar2 != '\0') {
          iVar5 = func_0x00a4adf0(param_2,iVar6);
          if (iVar5 == 1) {
            return 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < iVar3);
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return 0;
}



undefined4 __thiscall FUN_00a4a9a0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iStack_10;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return 0;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x40) + 0x1c);
  _guard_check_icall();
  iVar4 = (*pcVar1)();
  piVar9 = (int *)(param_1 + 0x58);
  iStack_10 = 0;
  do {
    iVar10 = 0;
    piVar5 = piVar9;
    if (0 < iVar4) {
      do {
        pcVar1 = *(code **)(*(int *)*piVar5 + 4);
        _guard_check_icall();
        cVar3 = (*pcVar1)();
        if ((cVar3 != '\0') && (*(uint *)(param_1 + 0x54) < 0x10)) {
          if (*(char *)(param_1 + 0x3d) == '\0') {
            iVar6 = func_0x00a45150();
            if (0 < iVar6) {
              iVar2 = *piVar5;
              iVar8 = *(int *)(iVar2 + 0x10);
              iVar7 = func_0x00a44d30();
              if (iVar8 == iVar7) {
                iVar6 = iVar6 >> ((byte)iVar10 & 0x1f);
                iVar8 = 1;
                if (1 < iVar6) {
                  iVar8 = iVar6;
                }
                if (*(int *)(iVar2 + 4) == iVar8) goto LAB_00a4aa4f;
              }
            }
          }
          else {
LAB_00a4aa4f:
            iVar6 = func_0x00a4aac0(param_2,iStack_10,iVar10);
            if (iVar6 == 1) {
              return 1;
            }
          }
        }
        iVar10 = iVar10 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar10 < iVar4);
    }
    iStack_10 = iStack_10 + 1;
    piVar9 = piVar9 + 0x10;
    if (5 < iStack_10) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      return 0;
    }
  } while( true );
}



void FUN_00a4aed0(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_stack_00000018;
  int in_stack_0000002c;
  undefined2 *in_stack_00000034;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0xc);
    do {
      iVar3 = 0;
      puVar4 = in_stack_00000034;
      if (0 < iVar2) {
        do {
          uVar1 = func_0x008abcb0();
          iVar3 = iVar3 + 1;
          *puVar4 = uVar1;
          iVar2 = *(int *)(param_2 + 0xc);
          puVar4 = (undefined2 *)((int)puVar4 + in_stack_0000002c);
        } while (iVar3 < iVar2);
      }
      uStack_4 = uStack_4 + 1;
      in_stack_00000034 = (undefined2 *)((int)in_stack_00000034 + in_stack_00000018);
    } while (uStack_4 < *(int *)(param_2 + 0x10));
  }
  return;
}



void FUN_00a4af60(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_stack_00000018;
  int in_stack_0000002c;
  undefined2 *in_stack_00000034;
  int iStack_8;
  undefined1 uStack_2;
  
  iStack_8 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0xc);
    do {
      iVar3 = 0;
      puVar4 = in_stack_00000034;
      if (0 < iVar2) {
        do {
          uVar1 = func_0x008abe00();
          iVar3 = iVar3 + 1;
          *puVar4 = (short)uVar1;
          uStack_2 = (undefined1)((uint)uVar1 >> 0x10);
          *(undefined1 *)(puVar4 + 1) = uStack_2;
          iVar2 = *(int *)(param_2 + 0xc);
          puVar4 = (undefined2 *)((int)puVar4 + in_stack_0000002c);
        } while (iVar3 < iVar2);
      }
      iStack_8 = iStack_8 + 1;
      in_stack_00000034 = (undefined2 *)((int)in_stack_00000034 + in_stack_00000018);
    } while (iStack_8 < *(int *)(param_2 + 0x10));
  }
  return;
}



void FUN_00a4b000(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int in_stack_00000018;
  int in_stack_0000002c;
  undefined2 *in_stack_00000034;
  int iStack_8;
  undefined1 uStack_2;
  
  iStack_8 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar3 = *(int *)(param_2 + 0xc);
    do {
      iVar4 = 0;
      puVar5 = in_stack_00000034;
      if (0 < iVar3) {
        do {
          uVar2 = func_0x008abe00();
          *puVar5 = (short)uVar2;
          uStack_2 = (undefined1)((uint)uVar2 >> 0x10);
          *(undefined1 *)(puVar5 + 1) = uStack_2;
          uVar1 = func_0x008abcb0();
          iVar4 = iVar4 + 1;
          *(undefined1 *)((int)puVar5 + 3) = uVar1;
          iVar3 = *(int *)(param_2 + 0xc);
          puVar5 = (undefined2 *)((int)puVar5 + in_stack_0000002c);
        } while (iVar4 < iVar3);
      }
      iStack_8 = iStack_8 + 1;
      in_stack_00000034 = (undefined2 *)((int)in_stack_00000034 + in_stack_00000018);
    } while (iStack_8 < *(int *)(param_2 + 0x10));
  }
  return;
}



void FUN_00a4b0b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0xc);
    do {
      iVar5 = 0;
      puVar1 = in_stack_00000030;
      puVar3 = in_stack_00000034;
      if (0 < iVar2) {
        do {
          iVar5 = iVar5 + 1;
          *puVar3 = *puVar1;
          iVar2 = *(int *)(param_2 + 0xc);
          puVar1 = (undefined4 *)((int)puVar1 + in_stack_00000028);
          puVar3 = (undefined4 *)((int)puVar3 + in_stack_0000002c);
        } while (iVar5 < iVar2);
      }
      in_stack_00000034 = (undefined4 *)((int)in_stack_00000034 + param_6);
      iVar4 = iVar4 + 1;
      in_stack_00000030 = (undefined4 *)((int)in_stack_00000030 + param_5);
    } while (iVar4 < *(int *)(param_2 + 0x10));
  }
  return;
}



void FUN_00a4b110(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  int iStack_4;
  
  iStack_4 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0xc);
    do {
      iVar3 = 0;
      puVar4 = in_stack_00000034;
      puVar5 = in_stack_00000030;
      if (0 < iVar2) {
        do {
          *puVar4 = *puVar5;
          uVar1 = func_0x008abcb0();
          iVar3 = iVar3 + 1;
          *(undefined1 *)(puVar4 + 1) = uVar1;
          iVar2 = *(int *)(param_2 + 0xc);
          puVar4 = (undefined4 *)((int)puVar4 + in_stack_0000002c);
          puVar5 = (undefined4 *)((int)puVar5 + in_stack_00000028);
        } while (iVar3 < iVar2);
      }
      iStack_4 = iStack_4 + 1;
      in_stack_00000030 = (undefined4 *)((int)in_stack_00000030 + param_5);
      in_stack_00000034 = (undefined4 *)((int)in_stack_00000034 + param_6);
    } while (iStack_4 < *(int *)(param_2 + 0x10));
  }
  return;
}



void FUN_00a4b190(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int in_stack_00000018;
  int in_stack_0000002c;
  undefined2 *in_stack_00000034;
  int iStack_c;
  
  iStack_c = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0xc);
    do {
      iVar4 = 0;
      puVar3 = in_stack_00000034;
      if (0 < iVar2) {
        do {
          *puVar3 = 0;
          *(undefined1 *)(puVar3 + 1) = 0;
          uVar1 = func_0x008abcb0();
          iVar4 = iVar4 + 1;
          *(undefined1 *)((int)puVar3 + 3) = uVar1;
          iVar2 = *(int *)(param_2 + 0xc);
          puVar3 = (undefined2 *)((int)puVar3 + in_stack_0000002c);
        } while (iVar4 < iVar2);
      }
      in_stack_00000034 = (undefined2 *)((int)in_stack_00000034 + in_stack_00000018);
      iStack_c = iStack_c + 1;
    } while (iStack_c < *(int *)(param_2 + 0x10));
  }
  return;
}



void __fastcall FUN_00a4b990(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  *param_1 = rx::d3d11::LazyResource<7>::vftable;
  pcStack_c = FUN_00f48980;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)param_1[2];
  param_1[1] = rx::Resource11Base<>::vftable;
  param_1[2] = 0;
  if (piVar1 != (int *)0x0) {
    uStack_8 = 0;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar3);
      }
      pcVar2 = *(code **)(*(int *)*piVar1 + 8);
      _guard_check_icall((int *)*piVar1);
      (*pcVar2)();
    }
    uStack_8 = 0xffffffff;
    func_0x008ab812(piVar1,8);
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    uStack_8 = 1;
    if (*piVar1 != 0) {
      if (piVar1[1] != 0) {
        func_0x00a32410(7,*piVar1,uVar3);
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



undefined4 * __thiscall FUN_00a4bb70(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<5>::vftable;
  func_0x009dde90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a4bba0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<7>::vftable;
  func_0x009ddf70();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a4bbd0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<16>::vftable;
  func_0x009de550();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a4bc00(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<5>::vftable;
  func_0x009dde90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a4bc30(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<7>::vftable;
  func_0x009ddf70();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a4bc60(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::d3d11::LazyResource<16>::vftable;
  func_0x009de550();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



void FUN_00a4bc90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000028;
  int in_stack_0000002c;
  uint *in_stack_00000030;
  float *in_stack_00000034;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar1 = *(int *)(param_2 + 0xc);
    do {
      iVar5 = 0;
      pfVar2 = in_stack_00000034;
      puVar3 = in_stack_00000030;
      if (0 < iVar1) {
        do {
          iVar5 = iVar5 + 1;
          *pfVar2 = ((float)(*puVar3 & 0xffffff) + 0.0) * 5.960465e-08;
          iVar1 = *(int *)(param_2 + 0xc);
          pfVar2 = (float *)((int)pfVar2 + in_stack_0000002c);
          puVar3 = (uint *)((int)puVar3 + in_stack_00000028);
        } while (iVar5 < iVar1);
      }
      in_stack_00000034 = (float *)((int)in_stack_00000034 + param_6);
      iVar4 = iVar4 + 1;
      in_stack_00000030 = (uint *)((int)in_stack_00000030 + param_5);
    } while (iVar4 < *(int *)(param_2 + 0x10));
  }
  return;
}



void FUN_00a4bd20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar1 = *(int *)(param_2 + 0xc);
    do {
      iVar5 = 0;
      puVar2 = in_stack_00000034;
      puVar3 = in_stack_00000030;
      if (0 < iVar1) {
        do {
          iVar5 = iVar5 + 1;
          *puVar2 = *puVar3;
          iVar1 = *(int *)(param_2 + 0xc);
          puVar2 = (undefined4 *)((int)puVar2 + in_stack_0000002c);
          puVar3 = (undefined4 *)((int)puVar3 + in_stack_00000028);
        } while (iVar5 < iVar1);
      }
      in_stack_00000034 = (undefined4 *)((int)in_stack_00000034 + param_6);
      iVar4 = iVar4 + 1;
      in_stack_00000030 = (undefined4 *)((int)in_stack_00000030 + param_5);
    } while (iVar4 < *(int *)(param_2 + 0x10));
  }
  return;
}



void FUN_00a4bdd0(int *param_1,int *param_2,undefined4 param_3,int *param_4,int param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  void *_Dst;
  int iVar6;
  size_t _Size;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iStack_50 = *param_2;
  iStack_4c = param_2[1];
  iStack_48 = param_2[3];
  iStack_44 = param_2[4];
  cVar3 = func_0x00953b30(&iStack_50,param_3,&iStack_50);
  if (cVar3 != '\0') {
    if ((((param_1[3] == iStack_48) && (iVar1 = *param_1, -1 < iVar1)) &&
        (param_1[3] + iVar1 <= *param_4)) && ((param_9 == param_10 && (param_9 == param_11)))) {
      sVar5 = iStack_48 * param_10;
      iVar2 = param_1[4];
      if (iStack_4c < iStack_44 + iStack_4c) {
        _Dst = (void *)(param_6 * iStack_4c + iStack_50 * param_10 + param_13);
        iVar6 = iStack_4c;
        do {
          func_0x00e879cb((double)(((float)(iVar6 - param_2[1]) / (float)(param_2[4] + -1)) *
                                   (float)(iVar2 + -1) + 0.5));
          _Size = sVar5;
          iVar4 = func_0x008abcb0();
          memcpy(_Dst,(void *)(iVar4 * param_5 + iVar1 * param_10 + param_12),_Size);
          iVar6 = iVar6 + 1;
          _Dst = (void *)((int)_Dst + param_6);
        } while (iVar6 < iStack_44 + iStack_4c);
        return;
      }
    }
    else {
      func_0x00a4bf90(param_1,param_2,&iStack_50,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
    }
  }
  return;
}



void FUN_00a4c160(int *param_1,int *param_2,int *param_3,int *param_4,int param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = param_4[1];
  fVar8 = (float)*param_3 / (float)*param_4;
  fVar3 = (float)(param_3[3] + *param_3) / (float)*param_4;
  fVar9 = (fVar8 + fVar8) - 1.0;
  fVar4 = (fVar3 + fVar3) - 1.0;
  fVar3 = (float)(iVar1 - param_3[1]) / (float)iVar1;
  fVar8 = (float)((iVar1 - param_3[4]) - param_3[1]) / (float)iVar1;
  fVar3 = (fVar3 + fVar3) - 1.0;
  fVar7 = (fVar8 + fVar8) - 1.0;
  fVar5 = (float)param_1[1] / (float)param_2[1];
  fVar2 = (float)*param_1 / (float)*param_2;
  fVar6 = (float)(param_1[3] + *param_1) / (float)*param_2;
  fVar8 = (float)(param_1[4] + param_1[1]) / (float)param_2[1];
  func_0x00a2fd80(param_5,fVar9,fVar7,fVar2,fVar8);
  func_0x00a2fd80(param_5 + 0x10,fVar9,fVar3,fVar2,fVar5);
  func_0x00a2fd80(param_5 + 0x20,fVar4,fVar7,fVar6,fVar8);
  func_0x00a2fd80(param_5 + 0x30,fVar4,fVar3,fVar6,fVar5);
  *param_6 = 0x10;
  *param_7 = 4;
  *param_8 = 5;
  return;
}



void FUN_00a4c360(int *param_1,int *param_2,int *param_3,int *param_4,int param_5,
                 undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = param_4[1];
  iVar2 = 0;
  fVar4 = (float)*param_3 / (float)*param_4;
  fVar7 = (float)(param_3[3] + *param_3) / (float)*param_4;
  fVar5 = (fVar4 + fVar4) - 1.0;
  fVar8 = (fVar7 + fVar7) - 1.0;
  fVar4 = (float)(iVar1 - param_3[1]) / (float)iVar1;
  fVar7 = (float)((iVar1 - param_3[4]) - param_3[1]) / (float)iVar1;
  fVar4 = (fVar4 + fVar4) - 1.0;
  fVar6 = (fVar7 + fVar7) - 1.0;
  fVar9 = (float)param_1[1] / (float)param_2[1];
  iVar1 = param_4[2];
  fVar10 = (float)(param_1[3] + *param_1) / (float)*param_2;
  fVar7 = (float)*param_1 / (float)*param_2;
  fVar11 = (float)(param_1[4] + param_1[1]) / (float)param_2[1];
  if (0 < iVar1) {
    param_5 = param_5 + 0x30;
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      fVar3 = (float)iVar2 / (float)iVar1;
      func_0x00a2fd30(param_5 + -0x30,fVar5,fVar6,iVar2,fVar7,fVar11,fVar3);
      func_0x00a2fd30(param_5 + -0x18,fVar5,fVar4,iVar2,fVar7,fVar9,fVar3);
      func_0x00a2fd30(param_5,fVar8,fVar6,iVar2,fVar10,fVar11,fVar3);
      func_0x00a2fd30(param_5 + 0x18,fVar5,fVar4,iVar2,fVar7,fVar9,fVar3);
      func_0x00a2fd30(param_5 + 0x30,fVar8,fVar4,iVar2,fVar10,fVar9,fVar3);
      func_0x00a2fd30(param_5 + 0x48,fVar8,fVar6,iVar2,fVar10,fVar11,fVar3);
      iVar1 = param_4[2];
      iVar2 = iVar2 + 1;
      param_5 = param_5 + 0x90;
    } while (iVar2 < iVar1);
  }
  *param_6 = 0x18;
  *param_7 = param_4[2] * 6;
  *param_8 = 4;
  return;
}



void __thiscall FUN_00a4fd50(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a30010(param_2,param_3,param_1 + 0x14,0,*(undefined4 *)(param_1 + 0x1c));
  return;
}



void __thiscall FUN_00a4fd70(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a30070(param_2,param_3,param_1 + 0x14,0,*(undefined4 *)(param_1 + 0x1c));
  return;
}



void __thiscall FUN_00a4fd90(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00a300d0(param_2,param_3,param_1 + 0x14,0,*(undefined4 *)(param_1 + 0x1c));
  return;
}



undefined1 FUN_00a50810(int param_1,int param_2)

{
  return *(undefined1 *)(param_1 + param_2);
}



undefined2 FUN_00a50820(int param_1,int param_2)

{
  return *(undefined2 *)(param_1 + param_2 * 2);
}



undefined4 FUN_00a50830(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}



undefined4 * __thiscall FUN_00a51030(undefined4 *param_1,byte param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f41cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::Buffer11::vftable;
  for (piVar5 = param_1 + 0x1a; piVar5 != param_1 + 0x26; piVar5 = piVar5 + 1) {
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      pcVar2 = (code *)**(undefined4 **)*piVar5;
      _guard_check_icall(1,uVar4);
      (*pcVar2)();
    }
    *piVar5 = 0;
  }
  iVar3 = *(int *)param_1[0x3f];
  cVar1 = *(char *)(iVar3 + 0xd);
  while (cVar1 == '\0') {
    if (*(undefined4 **)(iVar3 + 0x14) != (undefined4 *)0x0) {
      pcVar2 = *(code **)**(undefined4 **)(iVar3 + 0x14);
      _guard_check_icall(1,uVar4);
      (*pcVar2)();
    }
    *(undefined4 *)(iVar3 + 0x14) = 0;
    func_0x00499be0();
    cVar1 = *(char *)(iVar3 + 0xd);
  }
  iVar3 = *(int *)param_1[0x43];
  cVar1 = *(char *)(iVar3 + 0xd);
  while (cVar1 == '\0') {
    if (*(undefined4 **)(iVar3 + 0x18) != (undefined4 *)0x0) {
      pcVar2 = *(code **)**(undefined4 **)(iVar3 + 0x18);
      _guard_check_icall(1,uVar4);
      (*pcVar2)();
    }
    *(undefined4 *)(iVar3 + 0x18) = 0;
    func_0x00499be0();
    cVar1 = *(char *)(iVar3 + 0xd);
  }
  func_0x009e86b0(param_1);
  func_0x009ce9c0();
  FUN_00993470();
  func_0x00b45a30();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x11c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a51190(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Buffer11::BufferStorage::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a511c0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Buffer11::EmulatedIndexedStorage::vftable;
  func_0x00952cf0();
  func_0x00952cf0();
  FUN_00a31c20();
  *param_1 = rx::Buffer11::BufferStorage::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a51200(undefined4 param_1,byte param_2)

{
  func_0x00a50d60();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a51220(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Buffer11::PackStorage::vftable;
  if (param_1[0x11] != 0) {
    func_0x008ab812(param_1[0x11],0x28);
  }
  func_0x00952cf0();
  func_0x00a2c410();
  *param_1 = rx::Buffer11::BufferStorage::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a51270(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = rx::Buffer11::StructuredBufferStorage::vftable;
  func_0x00a4fca0(uVar1);
  func_0x009de210();
  func_0x00a50d60();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00a512f0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Buffer11::SystemMemoryStorage::vftable;
  func_0x00952cf0();
  *param_1 = rx::Buffer11::BufferStorage::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00a51700(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  int unaff_retaddr;
  undefined4 *puVar3;
  void *_Src;
  size_t *psVar4;
  size_t sStack_4;
  
  sStack_4 = 0;
  pcVar1 = *(code **)(*param_3 + 0x14);
  psVar4 = &sStack_4;
  _Src = (void *)0x1;
  puVar3 = param_2;
  _guard_check_icall(param_2,param_4,param_5,1,psVar4);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return 1;
  }
  memcpy((void *)(*(int *)(param_1 + 0x28) + unaff_retaddr),_Src,sStack_4);
  pcVar1 = *(code **)(*param_3 + 0x18);
  _guard_check_icall(puVar3,param_4,param_5,_Src,psVar4);
  (*pcVar1)();
  *param_2 = 0;
  return 0;
}



void __thiscall
FUN_00a51780(int *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5,int param_6,
            undefined4 *param_7)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  int aiStack_1c [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_2c;
  uStack_28 = param_2;
  uStack_2c = CONCAT31(uStack_2c._1_3_,param_6 != 0);
  piStack_20 = param_3;
  puStack_24 = param_7;
  if ((*(int *)param_1[6] == 0) || ((uint)param_1[4] < param_5 + param_6)) {
    pcVar1 = *(code **)(*param_1 + 0x10);
    _guard_check_icall(param_2,param_5 + param_6,uStack_2c);
    iVar4 = (*pcVar1)();
    if (iVar4 == 1) goto LAB_00a51911;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  piVar2 = piStack_20;
  *puStack_24 = uVar3;
  if ((param_1[3] == 7) && ((uint)(param_1[4] - param_6) < param_5)) {
    param_5 = param_1[4] - param_6;
  }
  if (param_5 != 0) {
    if ((piStack_20[3] == 6) || (piStack_20[3] == 0)) {
      uStack_2c = 0;
      pcVar1 = *(code **)(*piStack_20 + 0x14);
      _guard_check_icall(uStack_28,param_4,param_5,1,&uStack_2c);
      iVar4 = (*pcVar1)();
      if (iVar4 != 1) {
        func_0x00a53cc0(uStack_28,uStack_2c,param_6,param_5);
        pcVar1 = *(code **)(*piVar2 + 0x18);
        _guard_check_icall();
        (*pcVar1)();
        FUN_008ab370();
        return;
      }
LAB_00a51911:
      FUN_008ab370();
      return;
    }
    aiStack_1c[0] = param_4;
    aiStack_1c[3] = param_4 + param_5;
    aiStack_1c[1] = 0;
    uStack_c = 1;
    aiStack_1c[2] = 0;
    uStack_8 = 1;
    pcVar1 = *(code **)(**(int **)(param_1[1] + 0x1fd0) + 0xb8);
    _guard_check_icall(*(int **)(param_1[1] + 0x1fd0),*(undefined4 *)param_1[6],0,param_6,0,0,
                       *(undefined4 *)piStack_20[6],0,aiStack_1c);
    (*pcVar1)();
  }
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_00a51930(size_t param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  int unaff_retaddr;
  undefined4 *puVar3;
  void *_Src;
  size_t *psVar4;
  size_t sStack_4;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    sStack_4 = param_1;
    iVar2 = func_0x009e87d0(param_2,param_1 + 0x14,*(int *)(param_1 + 0x44),
                            *(undefined4 *)(param_1 + 0x40));
    if (iVar2 == 1) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (iVar2 != 0) {
      func_0x008ab812(iVar2,0x28);
    }
  }
  sStack_4 = 0;
  pcVar1 = *(code **)(*param_3 + 0x14);
  psVar4 = &sStack_4;
  _Src = (void *)0x1;
  puVar3 = param_2;
  _guard_check_icall(param_2,param_4,param_5,1,psVar4);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return 1;
  }
  memcpy((void *)(*(int *)(param_1 + 0x40) + unaff_retaddr),_Src,sStack_4);
  pcVar1 = *(code **)(*param_3 + 0x18);
  _guard_check_icall(puVar3,param_4,param_5,_Src,psVar4);
  (*pcVar1)();
  *param_2 = 1;
  return 0;
}



undefined4 __thiscall
FUN_00a519f0(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  int unaff_retaddr;
  undefined4 *puVar3;
  void *_Src;
  size_t *psVar4;
  size_t sStack_4;
  
  sStack_4 = 0;
  pcVar1 = *(code **)(*param_3 + 0x14);
  psVar4 = &sStack_4;
  _Src = (void *)0x1;
  puVar3 = param_2;
  _guard_check_icall(param_2,param_4,param_5,1,psVar4);
  iVar2 = (*pcVar1)();
  if (iVar2 == 1) {
    return 1;
  }
  memcpy((void *)(*(int *)(param_1 + 0x18) + unaff_retaddr),_Src,sStack_4);
  pcVar1 = *(code **)(*param_3 + 0x18);
  _guard_check_icall(puVar3,param_4,param_5,_Src,psVar4);
  (*pcVar1)();
  *param_2 = 0;
  return 0;
}



undefined4 __thiscall FUN_00a51a70(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_EBP;
  int *unaff_ESI;
  int *piVar6;
  int *piVar7;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  int *piStack_c;
  int *apiStack_8 [2];
  
  piVar5 = (int *)param_1[0x26];
  if ((piVar5 != (int *)0x0) && ((uint)piVar5[4] < (uint)param_1[0x18])) {
    pcVar1 = *(code **)(*piVar5 + 0x10);
    _guard_check_icall(param_2,param_1[0x18],1);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
  }
  apiStack_8[0] = (int *)param_1[0x26];
  if ((apiStack_8[0] == (int *)0x0) && (iVar3 = func_0x00a50970(param_2,1,apiStack_8), iVar3 == 1))
  {
    return 1;
  }
  piVar5 = apiStack_8[0];
  piStack_c = *(int **)(param_3 + 0x98);
  if ((piStack_c != (int *)0x0) && ((uint)piStack_c[4] < *(uint *)(param_3 + 0x60))) {
    pcVar1 = *(code **)(*piStack_c + 0x10);
    _guard_check_icall(param_2,*(uint *)(param_3 + 0x60),1);
    iVar3 = (*pcVar1)();
    if (iVar3 == 1) {
      return 1;
    }
  }
  piStack_c = *(int **)(param_3 + 0x98);
  if ((piStack_c == (int *)0x0) && (iVar3 = func_0x00a50970(param_2,1,&piStack_c), iVar3 == 1)) {
    return 1;
  }
  piVar7 = piStack_c;
  pcVar1 = *(code **)(*piVar5 + 8);
  _guard_check_icall();
  cVar2 = (*pcVar1)();
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(*piVar7 + 4);
    _guard_check_icall(1);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\0') goto LAB_00a51b93;
    iVar3 = func_0x00a50970(param_2,1,&piStack_c);
    piVar7 = unaff_ESI;
    piVar6 = param_2;
  }
  else {
LAB_00a51b93:
    pcVar1 = *(code **)(*piVar7 + 8);
    _guard_check_icall();
    cVar2 = (*pcVar1)();
    piVar6 = apiStack_8[0];
    if (cVar2 != '\0') goto LAB_00a51be1;
    pcVar1 = *(code **)(*piVar5 + 4);
    _guard_check_icall(2);
    cVar2 = (*pcVar1)();
    piVar6 = apiStack_8[0];
    if (cVar2 != '\0') goto LAB_00a51be1;
    iVar3 = func_0x00a50970(apiStack_8[0],1,&stack0xffffffec);
    piVar5 = unaff_EBP;
  }
  if (iVar3 == 1) {
    return 1;
  }
LAB_00a51be1:
  if (piVar7 == piVar5) {
    if (piVar7[3] == 1) {
      uVar8 = 2;
    }
    else {
      uVar8 = 1;
    }
    iVar3 = func_0x00a50970(piVar6,uVar8,&stack0xffffffe8);
    piVar7 = unaff_ESI;
    if (iVar3 == 1) {
      return 1;
    }
  }
  piVar6 = apiStack_8[0];
  pcVar1 = *(code **)(*piVar5 + 0xc);
  _guard_check_icall(apiStack_8[0],piVar7,unaff_retaddr,param_3,param_2,&stack0xfffffff0);
  iVar3 = (*pcVar1)();
  if (iVar3 == 1) {
    return 1;
  }
  piVar5[2] = piVar5[2] + 1;
  param_1[0x26] = (int)piVar5;
  uVar4 = param_1[0x18];
  if ((uint)param_1[0x18] < (int)unaff_EBP + 1U) {
    uVar4 = (int)unaff_EBP + 1U;
  }
  param_1[0x18] = uVar4;
  pcVar1 = *(code **)(*param_1 + 0x4c);
  _guard_check_icall(piVar6);
  (*pcVar1)();
  return 0;
}



undefined4 __thiscall FUN_00a52450(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    piVar2 = *(int **)(param_1 + 0x68);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)func_0x00a51320(0);
      *(int **)(param_1 + 0x68) = piVar2;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
    if ((uint)piVar2[4] < *(uint *)(param_1 + 0x60)) {
      pcVar1 = *(code **)(*piVar2 + 0x10);
      _guard_check_icall(param_2,*(uint *)(param_1 + 0x60),1);
      iVar3 = (*pcVar1)();
      if (iVar3 == 1) {
        return 1;
      }
    }
    puVar4 = *(undefined4 **)(param_1 + 0x60);
    iVar3 = func_0x00a53f40(param_2,*(undefined4 *)(param_1 + 0x68),0);
    if ((iVar3 != 1) && (iVar3 = func_0x00a51680(param_2,1), iVar3 != 1)) {
      *puVar4 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x18);
      return 0;
    }
  }
  return 1;
}



void FUN_00a530c0(undefined4 param_1)

{
  FUN_00b45d40(param_1);
  func_0x00953460(3);
  return;
}



void FUN_00a530e0(undefined4 param_1)

{
  FUN_00b45e30(param_1);
  func_0x00953460(3);
  return;
}



int __thiscall FUN_00a53100(int param_1,byte param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((param_2 & 1) != 0) {
    return CONCAT31(uVar2,iVar1 == 1);
  }
  if (((iVar1 != 1) && (iVar1 != 7)) && (iVar1 != 8)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}



void __thiscall FUN_00a53130(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x1c);
  _guard_check_icall(param_2,0,param_1[0x18],2,param_4);
  (*pcVar1)();
  return;
}



undefined4 __thiscall
FUN_00a53160(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int *param_6)

{
  *param_6 = *(int *)(param_1 + 0x28) + param_3;
  return 0;
}



undefined4 __thiscall
FUN_00a53180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int iVar3;
  undefined1 auStack_c [8];
  int *piStack_4;
  
  if ((param_5 & 1) == 0) {
    if ((param_5 >> 1 & 1) != 0) {
      if ((*(int *)(param_1 + 0xc) == 7) || (*(int *)(param_1 + 0xc) == 8)) {
        uVar2 = 4;
      }
      else {
        uVar2 = 2;
      }
      goto LAB_00a531c4;
    }
  }
  else if ((param_5 >> 1 & 1) != 0) {
    uVar2 = 3;
    goto LAB_00a531c4;
  }
  uVar2 = 1;
LAB_00a531c4:
  iVar3 = **(int **)(param_1 + 0x18);
  iVar1 = func_0x009e8470(param_2,iVar3,0,uVar2,(param_5 & 0x20) << 0xf,auStack_c);
  if (iVar1 == 1) {
    return 1;
  }
  *piStack_4 = unaff_ESI + iVar3;
  return 0;
}



undefined4 __thiscall
FUN_00a53210(int param_1,undefined4 param_2,int param_3,undefined4 param_4,byte param_5,int *param_6
            )

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = func_0x009e87d0(param_2,param_1 + 0x14,*(int *)(param_1 + 0x44),
                            *(undefined4 *)(param_1 + 0x40));
    if (iVar1 == 1) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (iVar1 != 0) {
      func_0x008ab812(iVar1,0x28);
    }
  }
  if ((*(char *)(param_1 + 0x70) == '\0') && ((param_5 & 2) == 0)) {
    *(undefined1 *)(param_1 + 0x70) = 0;
    *param_6 = *(int *)(param_1 + 0x40) + param_3;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  *param_6 = *(int *)(param_1 + 0x40) + param_3;
  return 0;
}



undefined4 __thiscall
FUN_00a532a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int *param_6)

{
  *param_6 = *(int *)(param_1 + 0x18) + param_3;
  return 0;
}



undefined4 __thiscall
FUN_00a532c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *unaff_retaddr;
  int **ppiVar4;
  int *piStack_4;
  
  piVar1 = (int *)param_1[0x26];
  piStack_4 = param_1;
  if ((piVar1 != (int *)0x0) && ((uint)piVar1[4] < (uint)param_1[0x18])) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(param_2,param_1[0x18],1);
    iVar3 = (*pcVar2)();
    if (iVar3 == 1) {
      return 1;
    }
  }
  iVar3 = param_1[0x26];
  if ((iVar3 == 0) || ((*(int *)(iVar3 + 0xc) != 6 && (*(int *)(iVar3 + 0xc) != 1)))) {
    iVar3 = func_0x00a50970(param_2,1,param_1 + 0x19);
    if (iVar3 == 1) {
      return 1;
    }
  }
  else {
    param_1[0x19] = iVar3;
  }
  iVar3 = param_1[0x19];
  if (iVar3 == 0) {
    func_0x0098f180(0x505,"Failed to allocate host memory",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Buffer11.cpp"
                    ,"rx::Buffer11::mapRange",0x23b);
  }
  else {
    if ((param_5 & 2) != 0) {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      param_1[0x26] = iVar3;
      pcVar2 = *(code **)(*param_1 + 0x4c);
      _guard_check_icall(param_2);
      (*pcVar2)();
    }
    piStack_4 = (int *)0x0;
    pcVar2 = *(code **)(*(int *)param_1[0x19] + 0x14);
    ppiVar4 = &piStack_4;
    _guard_check_icall(param_2,param_3,param_4,param_5);
    iVar3 = (*pcVar2)();
    if (iVar3 != 1) {
      *unaff_retaddr = (int)ppiVar4;
      return 0;
    }
  }
  return 1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 __thiscall FUN_00a53430(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iVar2 = func_0x00a50970(param_2,2);
  if (iVar2 != 1) {
    if (&stack0x00000000 != &DAT_00000004) {
      param_1[0x26] = (int)&uStack_4;
    }
    pcVar1 = *(code **)(*param_1 + 0x4c);
    _guard_check_icall(param_2);
    (*pcVar1)();
    return 0;
  }
  return 1;
}



undefined4 __thiscall FUN_00a53850(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  
  if (*(uint *)(param_1 + 0x24) < param_3) {
    cVar1 = func_0x00952f70(param_3);
    if (cVar1 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Buffer11.cpp"
                      ,"rx::Buffer11::EmulatedIndexedStorage::resize",0x693);
      return 1;
    }
    *(uint *)(param_1 + 0x10) = param_3;
  }
  return 0;
}



void __thiscall FUN_00a538b0(int param_1,int param_2,uint param_3,char param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_54;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  char *pcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint auStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f5024d;
  iStack_10 = *unaff_FS_OFFSET;
  auStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_3 == 0) {
    func_0x00a3b970();
    *(undefined4 *)(param_1 + 0x10) = 0;
    goto LAB_00a53b69;
  }
  auStack_2c[0] = param_3;
  auStack_2c[4] = 0;
  auStack_2c[5] = 0;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    auStack_2c[1] = 3;
    auStack_2c[2] = 0;
    auStack_2c[3] = 0x30000;
    goto LAB_00a539ef;
  case 2:
    auStack_2c[1] = 0;
    auStack_2c[2] = 1;
    cVar4 = func_0x009e7bd0();
    if (cVar4 != '\0') {
      auStack_2c[2] = auStack_2c[2] | 0x10;
    }
    goto code_r0x00a539e8;
  case 3:
    auStack_2c[2] = 2;
    break;
  case 4:
    auStack_2c[4] = 0x10;
    auStack_2c[2] = 0;
    break;
  case 5:
    auStack_2c[2] = 8;
    break;
  default:
    goto LAB_00a539ef;
  case 7:
    auStack_2c[1] = 2;
    auStack_2c[0] = param_3 + 0xf & 0xfffffff0;
    auStack_2c[2] = 4;
    auStack_2c[3] = 0x10000;
    if (*(char *)(*(int *)(param_1 + 4) + 0x1f9e) == '\0') {
      iVar5 = func_0x009dbea0(auStack_2c[6]);
      if (*(uint *)(iVar5 + 0x260) < auStack_2c[0]) {
        auStack_2c[0] = *(uint *)(iVar5 + 0x260);
      }
    }
    goto LAB_00a539ef;
  case 10:
    auStack_2c[4] = 0x20;
    auStack_2c[2] = 0x80;
    break;
  case 0xb:
    auStack_2c[2] = 0x88;
  }
  auStack_2c[1] = 0;
code_r0x00a539e8:
  auStack_2c[3] = 0;
LAB_00a539ef:
  ppuStack_54 = rx::Resource11Base<>::vftable;
  puStack_50 = (undefined4 *)func_0x008ab47d(8);
  if (puStack_50 == (undefined4 *)0x0) {
    puStack_50 = (undefined4 *)0x0;
  }
  else {
    *puStack_50 = 0;
    puStack_50[1] = 0;
  }
  uStack_4c = 0;
  pcStack_48 = (char *)0x0;
  ppuStack_54 = rx::Resource11<>::vftable;
  uStack_8 = 2;
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x1d14);
  }
  iVar5 = func_0x00a306d0(-(uint)(iVar5 != 0) & iVar5 + 0x24U,*(undefined4 *)(param_1 + 4),
                          auStack_2c,0,&ppuStack_54);
  if (iVar5 != 1) {
    pcStack_48 = "Buffer11::NativeStorage";
    func_0x00a2fa40(*puStack_50,"Buffer11::NativeStorage",uStack_4c);
    if ((**(int **)(param_1 + 0x18) != 0) && (param_4 != '\0')) {
      uStack_38 = *(undefined4 *)(param_1 + 0x10);
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_34 = 1;
      uStack_3c = 0;
      uStack_30 = 1;
      piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1fd0);
      pcVar2 = *(code **)(*piVar1 + 0xb8);
      _guard_check_icall(piVar1,*puStack_50,0,0,0,0,**(int **)(param_1 + 0x18),0,&uStack_44);
      (*pcVar2)();
    }
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    iVar5 = *(int *)(param_1 + 0x28);
    *(undefined4 **)(param_1 + 0x18) = puStack_50;
    *(uint *)(param_1 + 0x10) = auStack_2c[0];
    puStack_50 = puVar3;
    func_0x00a508c0(param_1 + 0x28,*(undefined4 *)(iVar5 + 4));
    *(int *)(iVar5 + 4) = iVar5;
    *(int *)iVar5 = iVar5;
    *(int *)(iVar5 + 8) = iVar5;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar5 = *(int *)(param_1 + 0x30);
    func_0x00a50870((int *)(param_1 + 0x30),*(undefined4 *)(iVar5 + 4));
    *(int *)(iVar5 + 4) = iVar5;
    *(int *)iVar5 = iVar5;
    *(int *)(iVar5 + 8) = iVar5;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      func_0x00953460(3);
    }
  }
  FUN_00a31c20();
LAB_00a53b69:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00a53bc0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  if (param_3 != *(int *)(param_1 + 0x10)) {
    cVar1 = func_0x00952f70(param_3);
    if (cVar1 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Buffer11.cpp"
                      ,"rx::Buffer11::PackStorage::resize",0x6cd);
      return 1;
    }
    *(int *)(param_1 + 0x10) = param_3;
  }
  return 0;
}



undefined4 __thiscall FUN_00a53c20(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  
  if (*(uint *)(param_1 + 0x14) < param_3) {
    cVar1 = func_0x00952f70(param_3);
    if (cVar1 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Buffer11.cpp"
                      ,"rx::Buffer11::SystemMemoryStorage::resize",0x74a);
      return 1;
    }
    *(uint *)(param_1 + 0x10) = param_3;
  }
  return 0;
}



void __thiscall
FUN_00a53c80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_retaddr;
  
  func_0x00b45f10(param_2,param_6);
  pcVar1 = *(code **)(*param_1 + 0x10);
  _guard_check_icall(unaff_EBX,unaff_retaddr,param_2,param_3,0);
  (*pcVar1)();
  return;
}



undefined4 __thiscall
FUN_00a53d40(int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint unaff_EBP;
  int *unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 uVar6;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = param_5 + param_6;
  if ((param_4 == 0) || (param_5 == 0)) goto LAB_00a53e97;
  uStack_8 = 0;
  if ((char)param_3 == '\f') {
    if ((((param_6 == 0) && ((uint)param_1[0x18] <= param_5)) &&
        (iVar4 = func_0x009dbea0(), param_5 <= *(uint *)(iVar4 + 0x260))) &&
       (iVar4 = func_0x009dbe40(), *(char *)(iVar4 + 0x168) == '\0')) {
      piVar1 = (int *)param_1[0x26];
      if ((piVar1 != (int *)0x0) && ((uint)piVar1[4] < (uint)param_1[0x18])) {
        pcVar2 = *(code **)(*piVar1 + 0x10);
        _guard_check_icall(param_2,param_1[0x18],1);
        iVar4 = (*pcVar2)();
        if (iVar4 == 1) {
          return 1;
        }
      }
      if ((param_1[0x26] == 0) || (*(int *)(param_1[0x26] + 0xc) != 8)) {
        uVar6 = 7;
      }
      else {
        uVar6 = 8;
      }
    }
    else {
LAB_00a53e28:
      uVar6 = 0;
    }
  }
  else {
    pcVar2 = *(code **)(*param_1 + 0x3c);
    _guard_check_icall();
    cVar3 = (*pcVar2)();
    if (cVar3 == '\0') goto LAB_00a53e28;
    uVar6 = 1;
  }
  iVar4 = func_0x00a50970(param_2,uVar6,&uStack_8);
  if (iVar4 != 1) {
    if ((uint)unaff_ESI[4] < unaff_EBP) {
      pcVar2 = *(code **)(*unaff_ESI + 0x10);
      _guard_check_icall(param_2,unaff_EBP,param_3 != 0);
      iVar4 = (*pcVar2)();
      if (iVar4 == 1) {
        return 1;
      }
    }
    iVar4 = func_0x00a53cc0(param_2,unaff_retaddr,param_3,param_2);
    if (iVar4 != 1) {
      unaff_ESI[2] = unaff_ESI[2] + 1;
      param_1[0x26] = (int)unaff_ESI;
LAB_00a53e97:
      uVar5 = param_1[0x18];
      if ((uint)param_1[0x18] < uStack_4) {
        uVar5 = uStack_4;
      }
      param_1[0x18] = uVar5;
      pcVar2 = *(code **)(*param_1 + 0x4c);
      _guard_check_icall(param_2);
      (*pcVar2)();
      return 0;
    }
  }
  return 1;
}



bool __fastcall FUN_00a53ed0(int param_1)

{
  return *(int *)(param_1 + 0x58) == 0;
}



undefined4 __thiscall FUN_00a53ee0(int param_1,undefined4 param_2,undefined1 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 100) + 0x18);
  _guard_check_icall();
  (*pcVar1)();
  *(undefined4 *)(param_1 + 100) = 0;
  *param_3 = 1;
  return 0;
}



void __fastcall FUN_00a53f10(int param_1)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x1fd0);
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  _guard_check_icall(piVar1,**(undefined4 **)(param_1 + 0x18),0);
  (*pcVar2)();
  return;
}



undefined4 * __thiscall FUN_00a55ee0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -9;
  *puVar1 = rx::Context11::vftable;
  *param_1 = rx::Context11::vftable;
  param_1[1] = rx::Context11::vftable;
  func_0x006336f0();
  func_0x0095c650();
  param_1[1] = rx::MultisampleTextureInitializer::vftable;
  *puVar1 = rx::ContextD3D::vftable;
  *param_1 = rx::d3d::Context::vftable;
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x1a8);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_00a55ef0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -10;
  *puVar1 = rx::Context11::vftable;
  param_1[-1] = rx::Context11::vftable;
  *param_1 = rx::Context11::vftable;
  func_0x006336f0();
  func_0x0095c650();
  *param_1 = rx::MultisampleTextureInitializer::vftable;
  *puVar1 = rx::ContextD3D::vftable;
  param_1[-1] = rx::d3d::Context::vftable;
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x1a8);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_00a55f00(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -9;
  *puVar1 = rx::ContextD3D::vftable;
  *param_1 = rx::d3d::Context::vftable;
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x28);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_00a55f10(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Context11::vftable;
  param_1[9] = rx::Context11::vftable;
  param_1[10] = rx::Context11::vftable;
  func_0x006336f0();
  func_0x0095c650();
  param_1[10] = rx::MultisampleTextureInitializer::vftable;
  *param_1 = rx::ContextD3D::vftable;
  param_1[9] = rx::d3d::Context::vftable;
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1a8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a55f70(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ContextD3D::vftable;
  param_1[9] = rx::d3d::Context::vftable;
  func_0x0098f0e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a55fa0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::MultisampleTextureInitializer::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a55fd0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::OverlayImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00a56000(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SamplerImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 __thiscall FUN_00a56030(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f505a7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x11c,uVar1);
  uStack_8 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = func_0x00a50a60(param_2,*(undefined4 *)(param_1 + 0x2c));
  }
  uStack_8 = 0xffffffff;
  func_0x009e85e0(uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return uVar3;
}



undefined4 __fastcall FUN_00a560b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f505f3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0x1f98) < 0x9301) {
    iVar2 = func_0x008ab47d(8,uVar1,param_1);
    uStack_8 = 0;
    if (iVar2 != 0) {
      uVar3 = func_0x00b50540(0x8b4a,uVar1,iVar2);
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  else {
    iVar2 = func_0x008ab47d(8,uVar1,param_1);
    uStack_8 = 1;
    if (iVar2 != 0) {
      uVar3 = func_0x00b50540(0x8b49,uVar1,iVar2);
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00a56160(int param_1)

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
    uVar3 = func_0x00b50900(*(undefined4 *)(param_1 + 0x2c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a561d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f48c47;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x80,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00a5c790(param_2,*(undefined4 *)(param_1 + 0x2c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __thiscall FUN_00a56250(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008ab47d(8,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = rx::OverlayImpl::vftable;
    puVar1[1] = param_2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



undefined4 __thiscall FUN_00a56280(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50667;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x530,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b510d0(param_2,*(undefined4 *)(param_1 + 0x2c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a56300(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3cb04;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(8,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b51150(param_2,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a56370(int param_1,undefined4 param_2)

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
    uVar3 = func_0x00b4dd30(*(undefined4 *)(param_1 + 0x2c),param_2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a563f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f506a4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x40,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b505d0(param_2,*(undefined4 *)(param_1 + 0x2c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __thiscall FUN_00a56470(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008ab47d(8,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = rx::SamplerD3D::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



undefined4 __thiscall FUN_00a564a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49cd4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x74,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b3a8f0(param_2,*(undefined4 *)(param_1 + 0x2c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00a56520(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f506e4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x18,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b50920(*(undefined4 *)(param_1 + 0x2c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a56590(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50799;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  switch(*param_2) {
  case 0:
  case 9:
    iVar2 = func_0x008ab47d(0x9c,uVar1);
    uStack_8 = 0;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40300(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 1:
    iVar2 = func_0x008ab47d(0xd8,uVar1);
    uStack_8 = 3;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40430(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 2:
    iVar2 = func_0x008ab47d(0x58,uVar1);
    uStack_8 = 5;
    if (iVar2 != 0) {
      uVar3 = func_0x00a404f0(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 3:
    iVar2 = func_0x008ab47d(0x5c,uVar1);
    uStack_8 = 6;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40520(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 4:
    iVar2 = func_0x008ab47d(0x98,uVar1);
    uStack_8 = 2;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40550(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 5:
    iVar2 = func_0x008ab47d(0x58,uVar1);
    uStack_8 = 4;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40840(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 7:
    iVar2 = func_0x008ab47d(0x1d8,uVar1);
    uStack_8 = 1;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40700(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
    break;
  case 10:
    iVar2 = func_0x008ab47d(0x5c,uVar1);
    uStack_8 = 7;
    if (iVar2 != 0) {
      uVar3 = func_0x00a40660(param_2,*(undefined4 *)(param_1 + 0x2c));
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a567f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f49d94;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x30,uVar1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b4ed60(param_2,*(undefined4 *)(param_1 + 0x2c));
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a56870(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f507d7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x88,uVar1,param_1);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x00b4f2c0(param_2,uVar1,iVar2);
    *unaff_FS_OFFSET = iStack_10;
    return uVar3;
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall FUN_00a568e0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined4 unaff_retaddr;
  uint uVar5;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = *(undefined4 *)(param_1 + 0x2c);
  iVar2 = *(int *)(*(int *)(param_2 + 0x14f4) + 0xe4);
  iVar4 = *(int *)(iVar2 + 0x414) - *(int *)(iVar2 + 0x410);
  iVar3 = iVar4 >> 0x1f;
  if (((iVar4 / 0x58 + iVar3 == iVar3) &&
      (iVar3 = *(int *)(iVar2 + 0x408) - *(int *)(iVar2 + 0x404), iVar2 = iVar3 >> 0x1f,
      iVar3 / 0x1c + iVar2 == iVar2)) || (iVar2 = func_0x009e84f0(param_2), iVar2 != 1)) {
    uVar5 = 0;
    uStack_8 = *(undefined4 *)(*(int *)(param_2 + 0x14f4) + 0xec);
    func_0x00a226b0(&iStack_10,5);
    iVar2 = iStack_10;
    for (; iStack_10 = iVar2, uVar5 < unaff_EDI; uVar5 = uVar5 + 1) {
      iVar2 = func_0x00a21e90(5,uVar5,0,param_2 + 0x28);
      if (*(char *)(*(int *)(*(int *)(param_2 + 0x1748) + 4 + iVar2 * 0x1c) + 0x6c) == '\n') {
        func_0x008df5b0();
        iVar2 = func_0x00a53490(param_2);
        if (iVar2 == 1) {
          return 1;
        }
      }
      iVar2 = iStack_10;
    }
    iVar3 = func_0x00a3fd70(param_2,uStack_4,unaff_retaddr,param_2);
    if (iVar3 != 1) {
      pcVar1 = *(code **)(**(int **)(iVar2 + 0x1fd0) + 0xa4);
      _guard_check_icall(*(int **)(iVar2 + 0x1fd0),unaff_ESI,iStack_10,uStack_c);
      (*pcVar1)();
      return 0;
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00a568f0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined4 *puStack_1c;
  undefined4 auStack_8 [2];
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_2[0x53d] + 0xe4);
  iVar6 = *(int *)(iVar4 + 0x414) - *(int *)(iVar4 + 0x410);
  iVar5 = iVar6 >> 0x1f;
  if ((iVar6 / 0x58 + iVar5 != iVar5) ||
     (iVar5 = *(int *)(iVar4 + 0x408) - *(int *)(iVar4 + 0x404), iVar4 = iVar5 >> 0x1f,
     iVar5 / 0x1c + iVar4 != iVar4)) {
    puStack_1c = param_2;
    iVar4 = func_0x009e84f0();
    if (iVar4 == 1) {
      return 1;
    }
  }
  auStack_8[0] = 0;
  pcVar1 = *(code **)(**(int **)(param_2[0x5ec] + 0xb0) + 0x44);
  puStack_1c = auStack_8;
  _guard_check_icall(param_2);
  iVar4 = (*pcVar1)();
  if (iVar4 != 1) {
    uVar7 = *(undefined4 *)(unaff_EBP + 4 + unaff_retaddr);
    iVar4 = func_0x00a3fd70(param_2,*(undefined4 *)(unaff_EBP + unaff_retaddr),uVar7,
                            *(undefined4 *)(unaff_EBP + 8 + unaff_retaddr));
    if (iVar4 != 1) {
      puStack_1c = (undefined4 *)0x0;
      iVar4 = func_0x00a51c90(param_2,4,&puStack_1c);
      if (iVar4 != 1) {
        piVar2 = *(int **)(iVar3 + 0x1fd0);
        pcVar1 = *(code **)(*piVar2 + 0xa8);
        _guard_check_icall(piVar2,uVar7,puStack_1c);
        (*pcVar1)();
        return 0;
      }
    }
  }
  return 1;
}



void FUN_00a56900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 3;
  iVar1 = func_0x00a3efa0(param_1,param_2,param_3,param_4,3,0,0,0,0,1);
  if (iVar1 == 1) {
    return;
  }
  func_0x009e3de0(param_3,param_4,uVar2,uVar3,0,0,0);
  return;
}



undefined4 __thiscall FUN_00a56960(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int unaff_ESI;
  undefined4 *puVar4;
  int unaff_retaddr;
  undefined4 uVar5;
  
  cVar2 = func_0x00b4f5b0(param_2);
  if ((((cVar2 == '\0') && ((char)param_2 != '\x02')) && ((char)param_2 != '\x06')) &&
     (cVar2 = func_0x009dbdd0(*(undefined4 *)(*(int *)(param_2 + 0x14f4) + 0xec),param_2),
     cVar2 == '\0')) {
    uVar5 = 0;
    iVar3 = func_0x00a3efa0(param_2,param_2,0,0,3,0,0,0,0,1);
    if (iVar3 == 1) {
      return 1;
    }
    uVar5 = func_0x009e4180(param_2,uVar5);
    return uVar5;
  }
  pcVar1 = *(code **)(**(int **)(*(int *)(param_2 + 0x17b8) + 0xb0) + 0x44);
  _guard_check_icall(param_2,&stack0xfffffff8);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    puVar4 = (undefined4 *)(unaff_ESI + unaff_retaddr);
    iVar3 = func_0x00a3efa0(param_2,param_1,puVar4[2],*puVar4,3,0,puVar4[1],0,0,1);
    if (iVar3 != 1) {
      uVar5 = func_0x009e3de0(param_2,param_1,puVar4[2],*puVar4,puVar4[1],puVar4[3],1);
      return uVar5;
    }
  }
  return 1;
}



void FUN_00a56a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 3;
  iVar1 = func_0x00a3efa0(param_1,param_2,param_3,param_4,3,0,param_5,0,0,1);
  if (iVar1 == 1) {
    return;
  }
  func_0x009e3de0(param_3,param_4,uVar2,uVar3,param_5,0,1);
  return;
}



void FUN_00a56ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 3;
  iVar1 = func_0x00a3efa0(param_1,param_2,param_3,param_4,3,0,param_5,0,param_6,1);
  if (iVar1 == 1) {
    return;
  }
  func_0x009e3de0(param_3,param_4,uVar2,uVar3,param_5,uVar4,1);
  return;
}



undefined4 __thiscall
FUN_00a56b40(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = CONCAT44(uStack_10._4_4_,param_1);
  cVar1 = func_0x00b4f5b0(param_2);
  if (cVar1 == '\0') {
    iVar2 = func_0x00a3efa0(param_2,param_2,0,param_3,param_4,param_5,0,0,0,1);
    if (iVar2 != 1) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,0,unaff_ESI,param_4,param_5,0,0,0,0);
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1514);
    uStack_10 = 0;
    uStack_8 = 0;
    if ((((*(int *)(iVar2 + 100) == 0) || (*(int *)(iVar2 + 0x14c) != param_4)) ||
        (*(int *)(iVar2 + 0x150) != param_3)) || (*(int *)(iVar2 + 0x154) != param_5)) {
      iVar2 = func_0x008e4e20(param_2,param_4,param_3,param_5,&uStack_10);
      if (iVar2 == 1) {
        return 1;
      }
    }
    else {
      uStack_10 = *(undefined8 *)(iVar2 + 0x158);
      uStack_8 = *(undefined4 *)(iVar2 + 0x160);
    }
    iVar2 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_10,0,&stack0xffffffe8);
    if ((iVar2 != 1) &&
       (iVar2 = param_4,
       iVar3 = func_0x00a3efa0(param_2,param_2,unaff_EBX,param_3,param_4,param_5,0,0,0,1),
       iVar3 != 1)) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,iVar2,param_3,param_4,param_5,0,0,0,0);
      return uVar4;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a56cd0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = CONCAT44(uStack_10._4_4_,param_1);
  cVar1 = func_0x00b4f5b0(param_2);
  if (cVar1 == '\0') {
    iVar2 = func_0x00a3efa0(param_2,param_2,0,param_3,param_4,param_5,0,param_6,0,1);
    if (iVar2 != 1) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,0,unaff_ESI,unaff_EBP,param_5,0,param_6,0,0);
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1514);
    uStack_10 = 0;
    uStack_8 = 0;
    if ((((*(int *)(iVar2 + 100) == 0) || (*(int *)(iVar2 + 0x14c) != param_4)) ||
        (*(int *)(iVar2 + 0x150) != param_3)) || (*(int *)(iVar2 + 0x154) != param_5)) {
      iVar2 = func_0x008e4e20(param_2,param_4,param_3,param_5,&uStack_10);
      if (iVar2 == 1) {
        return 1;
      }
    }
    else {
      uStack_10 = *(undefined8 *)(iVar2 + 0x158);
      uStack_8 = *(undefined4 *)(iVar2 + 0x160);
    }
    iVar2 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_10,param_6,&stack0xffffffe8);
    if ((iVar2 != 1) &&
       (iVar2 = param_4,
       iVar3 = func_0x00a3efa0(param_2,param_2,unaff_EBX,param_3,param_4,param_5,0,param_6,0,1),
       iVar3 != 1)) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,iVar2,param_3,param_4,param_5,0,uStack_14,0,0);
      return uVar4;
    }
  }
  return 1;
}



undefined4 FUN_00a56e70(int param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EDI;
  int unaff_retaddr;
  undefined4 *puVar6;
  int iStack_2c;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  _iStack_2c = CONCAT44(unaff_EDI,param_1);
  cVar2 = func_0x00b4f5b0();
  if ((((cVar2 == '\0') && ((char)param_1 != '\x02')) && ((char)param_1 != '\x06')) &&
     (cVar2 = func_0x009dbdd0(*(undefined4 *)(*(int *)(param_1 + 0x14f4) + 0xec),param_1),
     cVar2 == '\0')) {
    uStack_c = *(undefined4 *)(*(int *)(param_1 + 0x1514) + 100);
    cVar2 = func_0x00a2fdf0(*(undefined1 *)(param_1 + 0x186c),param_2);
    if ((param_2 == 2) || (iStack_10 = 1, cVar2 != '\0')) {
      iStack_10 = 2;
    }
    iVar3 = func_0x00a2c7e0(param_1 + 8,uStack_c,param_2,iStack_10,0);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        piStack_14 = (int *)FUN_007814b0();
        iVar3 = func_0x00a5f200();
        if ((iVar3 != 0) && (iVar3 = func_0x00a5f220(), iVar3 == iStack_10)) goto LAB_00a5701c;
      }
      else if (iVar3 == 2) {
LAB_00a5701c:
        iVar3 = func_0x00a3efa0(param_1,param_1,0,0,param_2,0,0,0,0,1);
        if (iVar3 == 1) {
          return 1;
        }
        uVar5 = func_0x009e4440(param_1,iStack_1c);
        return uVar5;
      }
    }
  }
  iStack_10 = 0;
  pcVar1 = *(code **)(**(int **)(*(int *)(param_1 + 0x17b8) + 0xb0) + 0x44);
  _guard_check_icall(unaff_retaddr,&iStack_10);
  iVar3 = (*pcVar1)();
  if (iVar3 != 1) {
    piStack_14 = (int *)(iStack_18 + param_1);
    iStack_1c = piStack_14[2] << ((byte)unaff_retaddr & 0x1f);
    iVar3 = *(int *)(iStack_8 + 0x1514);
    _iStack_2c = 0;
    if ((((*(int *)(iVar3 + 100) == 0) || (*(int *)(iVar3 + 0x14c) != unaff_retaddr)) ||
        (*(int *)(iVar3 + 0x150) != *piStack_14)) || (*(int *)(iVar3 + 0x154) != iStack_1c)) {
      iVar3 = func_0x008e4e20(iStack_8,unaff_retaddr,*piStack_14,iStack_1c,&iStack_2c);
      if (iVar3 == 1) {
        return 1;
      }
    }
    else {
      _iStack_2c = *(undefined8 *)(iVar3 + 0x158);
    }
    iVar3 = func_0x0095c8f0(*(undefined4 *)(iStack_8 + 0x1d14),&iStack_2c,piStack_14[3],&uStack_20);
    if (iVar3 != 1) {
      puVar6 = (undefined4 *)piStack_14[4];
      iVar3 = piStack_14[1];
      iVar4 = func_0x00a3efa0(iStack_8,uStack_4,uStack_20,*piStack_14,unaff_retaddr,iStack_1c,iVar3,
                              piStack_14[3],puVar6,1);
      if (iVar4 != 1) {
        uVar5 = func_0x009e4200(iStack_8,iStack_2c,uStack_20,*puVar6,unaff_retaddr,iVar3,puVar6[1],0
                                ,0,1);
        return uVar5;
      }
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a57120(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = CONCAT44(uStack_10._4_4_,param_1);
  cVar1 = func_0x00b4f5b0(param_2);
  if (cVar1 == '\0') {
    iVar2 = func_0x00a3efa0(param_2,param_2,0,param_3,param_4,param_5,param_6,0,0,1);
    if (iVar2 != 1) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,0,unaff_ESI,unaff_EBP,param_5,param_6,0,0,1);
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1514);
    uStack_10 = 0;
    uStack_8 = 0;
    if ((((*(int *)(iVar2 + 100) == 0) || (*(int *)(iVar2 + 0x14c) != param_4)) ||
        (*(int *)(iVar2 + 0x150) != param_3)) || (*(int *)(iVar2 + 0x154) != param_5)) {
      iVar2 = func_0x008e4e20(param_2,param_4,param_3,param_5,&uStack_10);
      if (iVar2 == 1) {
        return 1;
      }
    }
    else {
      uStack_10 = *(undefined8 *)(iVar2 + 0x158);
      uStack_8 = *(undefined4 *)(iVar2 + 0x160);
    }
    iVar2 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_10,0,&stack0xffffffe8);
    if ((iVar2 != 1) &&
       (iVar2 = param_4,
       iVar3 = func_0x00a3efa0(param_2,param_2,unaff_EBX,param_3,param_4,param_5,param_6,0,0,1),
       iVar3 != 1)) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,iVar2,param_3,param_4,param_5,uStack_14,0,0,1);
      return uVar4;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a572c0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = CONCAT44(uStack_10._4_4_,param_1);
  cVar1 = func_0x00b4f5b0(param_2);
  if (cVar1 == '\0') {
    iVar2 = func_0x00a3efa0(param_2,param_2,0,param_3,param_4,param_5,param_6,param_7,0,1);
    if (iVar2 != 1) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,0,unaff_ESI,unaff_EBP,unaff_EBX,param_6,param_7,0,1)
      ;
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1514);
    uStack_10 = 0;
    uStack_8 = 0;
    if ((((*(int *)(iVar2 + 100) == 0) || (*(int *)(iVar2 + 0x14c) != param_4)) ||
        (*(int *)(iVar2 + 0x150) != param_3)) || (*(int *)(iVar2 + 0x154) != param_5)) {
      iVar2 = func_0x008e4e20(param_2,param_4,param_3,param_5,&uStack_10);
      if (iVar2 == 1) {
        return 1;
      }
    }
    else {
      uStack_10 = *(undefined8 *)(iVar2 + 0x158);
      uStack_8 = *(undefined4 *)(iVar2 + 0x160);
    }
    iVar2 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_10,param_7,&stack0xffffffe8);
    if ((iVar2 != 1) &&
       (iVar2 = param_4,
       iVar3 = func_0x00a3efa0(param_2,param_2,unaff_EBX,param_3,param_4,param_5,param_6,param_7,0,1
                              ), iVar3 != 1)) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,iVar2,param_3,param_4,param_5,uStack_14,
                              (undefined4)uStack_10,0,1);
      return uVar4;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a57460(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = CONCAT44(uStack_10._4_4_,param_1);
  cVar1 = func_0x00b4f5b0(param_2);
  if (cVar1 == '\0') {
    iVar2 = func_0x00a3efa0(param_2,param_2,0,param_3,param_4,param_5,param_6,param_7,param_8,1);
    if (iVar2 != 1) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,0,unaff_ESI,unaff_EBP,unaff_EBX,uStack_14,param_7,
                              param_8,1);
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1514);
    uStack_10 = 0;
    uStack_8 = 0;
    if ((((*(int *)(iVar2 + 100) == 0) || (*(int *)(iVar2 + 0x14c) != param_4)) ||
        (*(int *)(iVar2 + 0x150) != param_3)) || (*(int *)(iVar2 + 0x154) != param_5)) {
      iVar2 = func_0x008e4e20(param_2,param_4,param_3,param_5,&uStack_10);
      if (iVar2 == 1) {
        return 1;
      }
    }
    else {
      uStack_10 = *(undefined8 *)(iVar2 + 0x158);
      uStack_8 = *(undefined4 *)(iVar2 + 0x160);
    }
    iVar2 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_10,param_7,&stack0xffffffe8);
    if ((iVar2 != 1) &&
       (iVar2 = param_4,
       iVar3 = func_0x00a3efa0(param_2,param_2,unaff_EBX,param_3,param_4,param_5,param_6,param_7,
                               param_8,1), iVar3 != 1)) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,iVar2,param_3,param_4,param_5,uStack_14,
                              (undefined4)uStack_10,uStack_10._4_4_,1);
      return uVar4;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a57610(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = CONCAT44(uStack_10._4_4_,param_1);
  cVar1 = func_0x00b4f5b0(param_2);
  if (cVar1 == '\0') {
    iVar2 = func_0x00a3efa0(param_2,param_2,0,param_5,param_6,param_7,0,0,0,1);
    if (iVar2 != 1) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,0,unaff_EBX,param_6,param_7,0,0,0,0);
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1514);
    uStack_10 = 0;
    uStack_8 = 0;
    if ((((*(int *)(iVar2 + 100) == 0) || (*(int *)(iVar2 + 0x14c) != param_6)) ||
        (*(int *)(iVar2 + 0x150) != param_5)) || (*(int *)(iVar2 + 0x154) != param_7)) {
      iVar2 = func_0x008e4e20(param_2,param_6,param_5,param_7,&uStack_10);
      if (iVar2 == 1) {
        return 1;
      }
    }
    else {
      uStack_10 = *(undefined8 *)(iVar2 + 0x158);
      uStack_8 = *(undefined4 *)(iVar2 + 0x160);
    }
    iVar2 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_10,0,&stack0xffffffe8);
    if ((iVar2 != 1) &&
       (iVar2 = param_6,
       iVar3 = func_0x00a3efa0(param_2,param_2,unaff_EBX,param_5,param_6,param_7,0,0,0,1),
       iVar3 != 1)) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,iVar2,param_5,param_6,param_7,0,0,0,0);
      return uVar4;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00a577a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  uStack_10 = CONCAT44(uStack_10._4_4_,param_1);
  cVar1 = func_0x00b4f5b0(param_2);
  if (cVar1 == '\0') {
    iVar2 = func_0x00a3efa0(param_2,param_2,0,param_5,param_6,param_7,0,param_8,0,1);
    if (iVar2 != 1) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,0,unaff_EBX,uStack_14,param_7,0,param_8,0,0);
      return uVar4;
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1514);
    uStack_10 = 0;
    uStack_8 = 0;
    if ((((*(int *)(iVar2 + 100) == 0) || (*(int *)(iVar2 + 0x14c) != param_6)) ||
        (*(int *)(iVar2 + 0x150) != param_5)) || (*(int *)(iVar2 + 0x154) != param_7)) {
      iVar2 = func_0x008e4e20(param_2,param_6,param_5,param_7,&uStack_10);
      if (iVar2 == 1) {
        return 1;
      }
    }
    else {
      uStack_10 = *(undefined8 *)(iVar2 + 0x158);
      uStack_8 = *(undefined4 *)(iVar2 + 0x160);
    }
    iVar2 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_10,param_8,&stack0xffffffe8);
    if ((iVar2 != 1) &&
       (iVar2 = param_6,
       iVar3 = func_0x00a3efa0(param_2,param_2,unaff_EBX,param_5,param_6,param_7,0,param_8,0,1),
       iVar3 != 1)) {
      uVar4 = func_0x009e4200(param_2,unaff_EDI,iVar2,param_5,param_6,param_7,0,uStack_10._4_4_,0,0)
      ;
      return uVar4;
    }
  }
  return 1;
}



undefined4 __fastcall FUN_00a57940(int param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iStack00000004;
  undefined4 uStack_8;
  int iStack_4;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  iStack00000004 = param_1;
  if (*(int *)piVar2[0x7db] == 0) {
    uStack_8 = 0;
    iStack_4 = 0;
    iVar4 = func_0x00a30e00(-(uint)(param_1 != 0) & param_1 + 0x24U,piVar2,&uStack_8,0,
                            piVar2 + 0x7da);
    if (iVar4 == 1) {
      return 1;
    }
  }
  pcVar1 = *(code **)(*(int *)piVar2[0x7f4] + 0x70);
  _guard_check_icall((int *)piVar2[0x7f4],*(undefined4 *)piVar2[0x7db]);
  (*pcVar1)();
  uVar5 = 0;
  do {
    bVar6 = uVar5 != (uVar5 / 100) * 100;
    uVar5 = uVar5 + 1;
    pcVar1 = *(code **)(*(int *)piVar2[0x7f4] + 0x74);
    _guard_check_icall((int *)piVar2[0x7f4],*(undefined4 *)piVar2[0x7db],0,0,bVar6);
    iVar4 = (*pcVar1)();
    if (iVar4 < 0) {
      pcVar1 = *(code **)(*(int *)(iStack_4 + 0x24) + 4);
      _guard_check_icall(iVar4,"Failed to get event query data",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Renderer11.cpp"
                         ,"rx::Renderer11::finish",0x57e);
      (*pcVar1)();
      return 1;
    }
    if (iVar4 == 1) {
      func_0x0093ea60();
    }
    if (uVar5 % 10 == 0) {
      pcVar1 = *(code **)(*piVar2 + 0xd4);
      _guard_check_icall();
      cVar3 = (*pcVar1)();
      if (cVar3 != '\0') {
        func_0x0092bf10();
        func_0x0098f180(0x505,"Device was lost while waiting for sync.",
                        "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Renderer11.cpp"
                        ,"rx::Renderer11::finish",0x58d);
        return 1;
      }
    }
  } while (iVar4 == 1);
  return 0;
}



undefined4 __fastcall FUN_00a57950(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iStack00000004;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 0x1fd0);
  pcVar2 = *(code **)(*piVar1 + 0x1bc);
  iStack00000004 = param_1;
  _guard_check_icall(piVar1);
  (*pcVar2)();
  return 0;
}



undefined1 __fastcall FUN_00a57960(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x157c);
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x157c) = 0;
  return uVar1;
}



int __thiscall FUN_00a579c0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = func_0x009dbea0();
  func_0x009551a0(uVar2);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x14);
  if ((2 < uVar1) &&
     (((3 < uVar1 || (*(int *)(*(int *)(param_1 + 0x10) + 0x18) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x2c) + 0x1f98) == 0xb000)))) {
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x27c);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x27c);
  }
  return param_2;
}



int * __fastcall FUN_00a57a10(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return piVar2 + 0x498;
}



int __fastcall FUN_00a57a20(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return (int)piVar2 + 0x1336;
}



bool __fastcall FUN_00a57a30(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return *(char *)((int)piVar2 + 0x1323) != '\0';
}



int * __fastcall FUN_00a57a40(int param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if (*(char *)((int)piVar2 + 9) == '\0') {
    pcVar1 = *(code **)(*piVar2 + 0x10c);
    _guard_check_icall(piVar2 + 4,piVar2 + 0xe0,piVar2 + 0x498,(int)piVar2 + 0x1336);
    (*pcVar1)();
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return piVar2 + 0xe0;
}



char __fastcall FUN_00a57a50(int param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if (*(char *)((int)piVar2 + 0x157d) != '\0') {
    pcVar1 = *(code **)(*piVar2 + 0xd8);
    _guard_check_icall();
    cVar3 = (*pcVar1)();
    return (-(cVar3 != '\0') & 0xfdU) + 3;
  }
  pcVar1 = *(code **)(*piVar2 + 0xd4);
  _guard_check_icall();
  cVar3 = (*pcVar1)();
  if (cVar3 != '\0') {
    *(undefined1 *)((int)piVar2 + 0x157d) = 1;
    func_0x0092bf10();
    return '\x03';
  }
  return '\0';
}



undefined8 FUN_00a57a60(void)

{
  return 0;
}



void __thiscall
FUN_00a57a70(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  int *extraout_ECX;
  char extraout_DH;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e8 [160];
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50818;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_34 = param_3;
  uStack_3c = param_4;
  uStack_38 = param_5;
  uStack_40 = func_0x009dbba0(param_2,uStack_14);
  func_0x004687a0(1);
  uStack_8 = 0;
  uVar3 = func_0x0046b6e0(auStack_e8,"Internal D3D11 error: ");
  piVar4 = (int *)func_0x009529d0(auStack_48,param_2);
  iStack_30 = piVar4[1];
  if (*piVar4 != 0) {
    func_0x0046b6e0(uVar3,*piVar4);
  }
  func_0x0091fdc0(uVar3,iStack_30,&DAT_00f9ad64,0x30);
  switch(param_2) {
  case (undefined4 *)0x887a0005:
  case (undefined4 *)0x887a0006:
  case (undefined4 *)0x887a0007:
  case (undefined4 *)0x887a0020:
  case (undefined4 *)0x887a0022:
    piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x1f90);
    pcVar2 = *(code **)(*piVar4 + 0x9c);
    _guard_check_icall(piVar4);
    uVar3 = (*pcVar2)();
    param_2 = (undefined4 *)func_0x0046b6e0(auStack_e8," (removal reason: ");
    piVar4 = (int *)func_0x009529d0(auStack_48,uVar3);
    iVar8 = piVar4[1];
    if (*piVar4 != 0) {
      func_0x0046b6e0(param_2,*piVar4);
    }
    uVar3 = func_0x0091fdc0(param_2,iVar8,&DAT_00f9ad64,0x30);
    func_0x0046b6e0(uVar3,&DAT_0112e458);
    func_0x009dc0e0();
  }
  uVar3 = func_0x0046b6e0(auStack_e8,&DAT_0112e170,uStack_34);
  func_0x0046b6e0(uVar3);
  puVar1 = *(undefined4 **)(param_1 + -0xc);
  puVar5 = (undefined4 *)func_0x00468740(aiStack_2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  func_0x008d1aa0(uStack_40,puVar5,uStack_3c,uStack_38,param_6);
  if (0xf < uStack_18) {
    uVar7 = uStack_18 + 1;
    iVar8 = aiStack_2c[0];
    if (0xfff < uVar7) {
      iVar8 = *(int *)(aiStack_2c[0] + -4);
      uVar7 = uStack_18 + 0x24;
      if (0x1f < (aiStack_2c[0] - iVar8) - 4U) {
        pcVar6 = (char *)func_0x008aaf66();
        *param_2 = *puVar1;
        *(char *)((int)extraout_ECX + 0xa57b) = *(char *)((int)extraout_ECX + 0xa57b) + extraout_DH;
        *pcVar6 = *pcVar6 + (char)pcVar6;
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *extraout_ECX = (int)(pcVar6 + *extraout_ECX);
        *(char *)extraout_ECX = (char)*extraout_ECX + (char)pcVar6;
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar8,uVar7);
  }
  func_0x004673c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00a57c90(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  piVar1 = *(int **)(param_3 + 0x140);
  func_0x00967830(&uStack_20);
  uStack_24 = 0;
  uVar3 = func_0x00a454c0();
  pcVar2 = *(code **)(*piVar1 + 0xa0);
  puVar5 = &uStack_24;
  _guard_check_icall(param_2,&uStack_20,uVar3,puVar5);
  iVar4 = (*pcVar2)();
  if (iVar4 == 1) {
    return;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0x3f800000;
  pcVar2 = *(code **)(**(int **)(param_1 + 4) + 0xe4);
  _guard_check_icall(uStack_c,puVar5,&uStack_20,0x3f800000,0);
  (*pcVar2)();
  return;
}



undefined4 FUN_00a57d40(undefined4 param_1,undefined4 param_2)

{
  func_0x009e5b10();
  func_0x00a2bb40(param_2);
  return 0;
}



void __thiscall
FUN_00a57db0(undefined4 param_1,int param_2,uint param_3,int param_4,int *param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  uint uVar5;
  uint unaff_ESI;
  uint uVar6;
  int iVar7;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_24;
  uint uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&iStack_68;
  iStack_64 = param_2;
  iStack_68 = param_4;
  piStack_5c = param_5;
  uStack_50 = param_1;
  if ((*(int *)(param_2 + 0x14f4) != 0) && (*(int *)(*(int *)(param_2 + 0x14f4) + 0x158) != 0)) {
    func_0x009862d0(param_2);
  }
  iStack_54 = *(int *)(param_2 + 0x14f4);
  if ((iStack_54 == 0) || (cVar1 = func_0x00983a10(), cVar1 == '\0')) {
    iStack_60 = 0;
    if (0 < param_6) {
      iStack_68 = iStack_68 - (int)param_5;
      do {
        iVar4 = iStack_60;
        if ((*(char *)(param_2 + 0x20dc) != '\0') &&
           (iVar3 = *param_5, *(int *)(&DAT_00feeba0 + (param_3 & 0xff) * 4) <= iVar3)) {
          iVar2 = func_0x00a3efa0(param_2,param_3,*(undefined4 *)((int)param_5 + iStack_68),iVar3,3,
                                  0,0,0,0,0);
          if ((iVar2 == 1) ||
             (iVar3 = func_0x009e3de0(param_2,uStack_24,*(undefined4 *)((int)param_5 + iVar3),
                                      *param_5,0,0,0), iVar3 == 1)) goto LAB_00a58279;
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*param_5,1);
          }
          uStack_58 = *(undefined4 *)(param_2 + 0x2010);
          iStack_54 = *(int *)(param_2 + 0x2014);
          func_0x008c2250(&uStack_58,0);
          func_0x008c2250(&iStack_60,2);
          while (uStack_4c != unaff_ESI) {
            iVar3 = func_0x008eb2c0(iStack_60 * 0x20 + iStack_48);
            if (*(int *)(iVar3 + 4) != 0) {
              func_0x00968810();
            }
            func_0x008c2d60();
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          iVar3 = iStack_38;
          uVar5 = uStack_c;
          param_2 = iStack_64;
          uVar6 = uStack_4c;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(iStack_64 + 0x1748) + 4 + (uVar6 * 0x20 + uStack_30) * 0x1c) !=
                  0) {
                func_0x00953460(1);
                iVar3 = iStack_38;
                uVar5 = uStack_c;
                uVar6 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                uStack_58 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar6 = uVar6 + 1, uStack_4c = uVar6, uVar6 < 3))) {
                uStack_34 = *(uint *)(iVar3 + uVar6 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              iVar4 = iStack_60;
              param_2 = iStack_64;
              param_5 = piStack_5c;
            } while (uStack_34 != uVar5);
          }
        }
        iStack_60 = iVar4 + 1;
        param_5 = param_5 + 1;
        piStack_5c = param_5;
      } while (iStack_60 < param_6);
    }
  }
  else {
    iStack_60 = 0;
    if (0 < param_6) {
      iStack_68 = iStack_68 - (int)param_5;
      iVar4 = param_2;
      do {
        iVar3 = iStack_60;
        if ((*(char *)(iVar4 + 0x20dc) != '\0') &&
           (*(int *)(&DAT_00feeba0 + (param_3 & 0xff) * 4) <= *param_5)) {
          func_0x00986d90(iStack_60);
          iVar7 = 3;
          iVar2 = func_0x00a3efa0(iVar4,param_2,*(undefined4 *)(unaff_EBX + (int)param_5),*param_5,3
                                  ,0,0,0,0,0);
          if ((iVar2 == 1) ||
             (iVar2 = func_0x009e3de0(iVar4,uStack_24,*(undefined4 *)(iVar7 + (int)param_5),*param_5
                                      ,0,0,0), iVar2 == 1)) {
LAB_00a58279:
            FUN_008ab370();
            return;
          }
          if (*(char *)(iVar4 + 0x200c) != '\0') {
            func_0x008e37f0(iVar4,*param_5,1);
          }
          uStack_58 = *(undefined4 *)(iVar4 + 0x2010);
          iStack_54 = *(int *)(iVar4 + 0x2014);
          func_0x008c2250(&uStack_58,0);
          func_0x008c2250(&iStack_60,2);
          while (uStack_4c != unaff_ESI) {
            iVar2 = func_0x008eb2c0(iStack_60 * 0x20 + iStack_48);
            if (*(int *)(iVar2 + 4) != 0) {
              func_0x00968810();
            }
            func_0x008c2d60();
          }
          func_0x008c22f0(iVar4 + 0x2018,0);
          func_0x008c22f0(iVar4 + 0x2018,3);
          iVar2 = iStack_38;
          uVar5 = uStack_c;
          iVar4 = iStack_64;
          uVar6 = uStack_4c;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(iStack_64 + 0x1748) + 4 + (uVar6 * 0x20 + uStack_30) * 0x1c) !=
                  0) {
                func_0x00953460(1);
                iVar2 = iStack_38;
                uVar5 = uStack_c;
                uVar6 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                uStack_58 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar6 = uVar6 + 1, uStack_4c = uVar6, uVar6 < 3))) {
                uStack_34 = *(uint *)(iVar2 + uVar6 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              iVar3 = iStack_60;
              iVar4 = iStack_64;
              param_5 = piStack_5c;
            } while (uStack_34 != uVar5);
          }
        }
        iStack_60 = iVar3 + 1;
        param_5 = param_5 + 1;
        piStack_5c = param_5;
      } while (iStack_60 < param_6);
    }
  }
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00a582a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  func_0x0095d620(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



void __thiscall
FUN_00a582c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
            undefined4 *param_6,int param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  uint unaff_EBP;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piStack_6c;
  undefined4 *puStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&piStack_6c;
  piStack_6c = param_5;
  iStack_58 = param_2;
  puStack_68 = param_6;
  uStack_5c = param_1;
  if ((*(int *)(param_2 + 0x14f4) != 0) && (*(int *)(*(int *)(param_2 + 0x14f4) + 0x158) != 0)) {
    func_0x009862d0(param_2);
  }
  iStack_50 = *(int *)(param_2 + 0x14f4);
  if ((iStack_50 == 0) || (cVar2 = func_0x00983a10(), cVar2 == '\0')) {
    iStack_60 = 0;
    if (0 < param_7) {
      iStack_64 = param_4 - (int)puStack_68;
      piStack_6c = (int *)((int)piStack_6c - (int)puStack_68);
      do {
        iVar8 = iStack_60;
        puVar7 = puStack_68;
        cVar2 = func_0x008d6750(param_3,*(undefined4 *)((int)puStack_68 + (int)piStack_6c),
                                *puStack_68);
        if (cVar2 == '\0') {
          iVar9 = 0;
          iVar4 = *(int *)((int)puVar7 + (int)piStack_6c);
          iVar3 = func_0x00a3efa0(param_2,param_3,*(undefined4 *)((int)puVar7 + iStack_64),iVar4,3,0
                                  ,*puVar7,0,0,0);
          if ((iVar3 == 1) ||
             (iVar3 = func_0x009e3de0(param_2,param_3,*(undefined4 *)((int)puVar7 + iVar9),
                                      *(undefined4 *)((int)puVar7 + iVar4),*puVar7,0,1), iVar3 == 1)
             ) goto LAB_00a58797;
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*(undefined4 *)((int)puVar7 + iVar4),*puVar7);
          }
          iStack_58 = *(int *)(param_2 + 0x2010);
          uStack_54 = *(undefined4 *)(param_2 + 0x2014);
          func_0x008c2250(&iStack_58,0);
          func_0x008c2250(&iStack_60,2);
          while (uStack_4c != unaff_EBP) {
            iVar4 = func_0x008eb2c0(iStack_60 * 0x20 + iStack_48);
            if (*(int *)(iVar4 + 4) != 0) {
              func_0x00968810();
            }
            func_0x008c2d60();
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          iVar4 = iStack_38;
          uVar5 = uStack_c;
          uVar6 = uStack_4c;
          puVar7 = puStack_68;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(iStack_58 + 0x1748) + 4 + (uVar6 * 0x20 + uStack_30) * 0x1c) !=
                  0) {
                func_0x00953460(1);
                iVar4 = iStack_38;
                uVar5 = uStack_c;
                uVar6 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                uStack_54 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar6 = uVar6 + 1, uStack_4c = uVar6, uVar6 < 3))) {
                uStack_34 = *(uint *)(iVar4 + uVar6 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              param_2 = iStack_58;
              puVar7 = puStack_68;
              iVar8 = iStack_60;
            } while (uStack_34 != uVar5);
          }
        }
        iStack_60 = iVar8 + 1;
        puStack_68 = puVar7 + 1;
      } while (iStack_60 < param_7);
    }
  }
  else {
    iStack_60 = 0;
    if (0 < param_7) {
      iStack_64 = param_4 - (int)puStack_68;
      piStack_6c = (int *)((int)piStack_6c - (int)puStack_68);
      do {
        iVar8 = iStack_60;
        cVar2 = func_0x008d6750(param_3,*(undefined4 *)((int)piStack_6c + (int)puStack_68),
                                *puStack_68);
        if (cVar2 == '\0') {
          func_0x00986d90(iVar8);
          piVar1 = piStack_6c;
          iVar4 = *piStack_6c;
          iVar9 = 3;
          iVar3 = func_0x00a3efa0(param_2,param_3,*(undefined4 *)((int)puStack_68 + (int)piStack_6c)
                                  ,*(undefined4 *)(unaff_EBX + (int)piStack_6c),3,0,iVar4,0,0,0);
          if ((iVar3 == 1) ||
             (iVar4 = func_0x009e3de0(param_2,param_3,*(undefined4 *)(iVar4 + (int)piVar1),
                                      *(undefined4 *)(iVar9 + (int)piVar1),*piVar1,0,1), iVar4 == 1)
             ) {
LAB_00a58797:
            FUN_008ab370();
            return;
          }
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*(undefined4 *)(iVar9 + (int)piVar1),*piVar1);
          }
          iStack_58 = *(int *)(param_2 + 0x2010);
          uStack_54 = *(undefined4 *)(param_2 + 0x2014);
          func_0x008c2250(&iStack_58,0);
          func_0x008c2250(&iStack_60,2);
          while (uStack_4c != unaff_EBP) {
            iVar4 = func_0x008eb2c0(iStack_60 * 0x20 + iStack_48);
            if (*(int *)(iVar4 + 4) != 0) {
              func_0x00968810();
            }
            func_0x008c2d60();
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          iVar4 = iStack_38;
          uVar5 = uStack_c;
          uVar6 = uStack_4c;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(iStack_58 + 0x1748) + 4 + (uVar6 * 0x20 + uStack_30) * 0x1c) !=
                  0) {
                func_0x00953460(1);
                iVar4 = iStack_38;
                uVar5 = uStack_c;
                uVar6 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                uStack_54 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar6 = uVar6 + 1, uStack_4c = uVar6, uVar6 < 3))) {
                uStack_34 = *(uint *)(iVar4 + uVar6 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              param_2 = iStack_58;
              iVar8 = iStack_60;
            } while (uStack_34 != uVar5);
          }
        }
        iStack_60 = iVar8 + 1;
        puStack_68 = puStack_68 + 1;
      } while (iStack_60 < param_7);
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00a587d0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5,
                 undefined4 *param_6,int param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_74;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  int iStack_58;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f50860;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_68 = param_5;
  puStack_64 = param_6;
  if ((*(int *)(param_1 + 0x14f4) != 0) && (*(int *)(*(int *)(param_1 + 0x14f4) + 0x158) != 0)) {
    func_0x009862d0(param_1,uStack_14);
  }
  iVar4 = *(int *)(param_1 + 0x14f4);
  if ((iVar4 == 0) || (cVar2 = func_0x00983a10(), cVar2 == '\0')) {
    bVar1 = false;
    if (iVar4 != 0) goto LAB_00a5885a;
  }
  else {
    bVar1 = true;
LAB_00a5885a:
    cVar2 = func_0x009839f0();
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_00a5886b;
    }
  }
  cVar2 = '\0';
LAB_00a5886b:
  func_0x0095c5d0(iVar4,0,cVar2);
  uStack_8 = 0;
  if (bVar1) {
    if (cVar2 == '\0') {
      iStack_74 = 0;
      if (0 < param_7) {
        param_4 = param_4 - (int)param_5;
        do {
          cVar2 = func_0x008d6750(param_2,*(undefined4 *)(param_4 + (int)puStack_68),*puStack_68);
          if (cVar2 == '\0') {
            func_0x00986d90(iStack_74);
            puVar6 = (undefined4 *)((int)puStack_68 + (param_3 - (int)param_5));
            iVar4 = func_0x00a3efa0(param_1,param_2,*puVar6,
                                    *(undefined4 *)(param_4 + (int)puStack_68),3,0,*puStack_68,0,
                                    *(undefined4 *)((int)puVar6 + ((int)param_6 - param_3)),0);
            if ((iVar4 == 1) ||
               (iVar4 = func_0x009e3de0(param_1,param_2,*puVar6,
                                        *(undefined4 *)(param_4 + (int)puStack_68),*puStack_68,
                                        *(undefined4 *)((int)puVar6 + ((int)param_6 - param_3)),1),
               iVar4 == 1)) break;
            if (*(char *)(param_1 + 0x200c) != '\0') {
              func_0x008e37f0(param_1,*(undefined4 *)(param_4 + (int)puStack_68),*puStack_68);
            }
            uStack_1c = *(undefined4 *)(param_1 + 0x2010);
            uStack_18 = *(undefined4 *)(param_1 + 0x2014);
            func_0x008c2250(&uStack_1c,0);
            func_0x008c2250(&uStack_1c,2);
            while (uStack_44 != uStack_24) {
              iVar4 = func_0x008eb2c0(iStack_58 * 0x20 + iStack_40);
              if (*(int *)(iVar4 + 4) != 0) {
                func_0x00968810();
              }
              func_0x008c2d60();
            }
            func_0x008c22f0(param_1 + 0x2018,0);
            func_0x008c22f0(param_1 + 0x2018,3);
            uVar5 = uStack_3c;
            while (uStack_24 != uStack_44) {
              if (*(int *)(*(int *)(param_1 + 0x1748) + 4 + (uVar5 * 0x20 + uStack_20) * 0x1c) != 0)
              {
                func_0x00953460(1);
                uVar5 = uStack_3c;
              }
              uStack_24 = uStack_24 & ~(1 << (uStack_20 & 0x1f));
              if (uStack_24 == 0) {
                uStack_20 = 0;
              }
              else {
                uStack_20 = 0;
                if (uStack_24 != 0) {
                  for (; (uStack_24 >> uStack_20 & 1) == 0; uStack_20 = uStack_20 + 1) {
                  }
                }
              }
              while ((uStack_24 == 0 && (uVar5 = uVar5 + 1, uStack_3c = uVar5, uVar5 < 3))) {
                uStack_24 = *(uint *)(iStack_28 + uVar5 * 4);
                uStack_20 = 0;
                if ((uStack_24 != 0) && (uStack_20 = 0, uStack_24 != 0)) {
                  for (; (uStack_24 >> uStack_20 & 1) == 0; uStack_20 = uStack_20 + 1) {
                  }
                }
              }
            }
          }
          iStack_74 = iStack_74 + 1;
          puStack_68 = puStack_68 + 1;
        } while (iStack_74 < param_7);
      }
    }
    else {
      iStack_74 = 0;
      if (0 < param_7) {
        iVar4 = (int)param_5 - (int)param_6;
        param_4 = param_4 - (int)param_6;
        do {
          cVar2 = func_0x008d6750(param_2,*(undefined4 *)(param_4 + (int)puStack_64),
                                  *(undefined4 *)(iVar4 + (int)puStack_64));
          if (cVar2 == '\0') {
            func_0x00986d90(iStack_74);
            func_0x00986cd0(*puStack_64);
            iVar3 = func_0x00a3efa0(param_1,param_2,
                                    *(undefined4 *)((param_3 - (int)param_6) + (int)puStack_64),
                                    *(undefined4 *)(param_4 + (int)puStack_64),3,0,
                                    *(undefined4 *)(iVar4 + (int)puStack_64),0,*puStack_64,0);
            if ((iVar3 == 1) ||
               (iVar3 = func_0x009e3de0(param_1,param_2,
                                        *(undefined4 *)((param_3 - (int)param_6) + (int)puStack_64),
                                        *(undefined4 *)(param_4 + (int)puStack_64),
                                        *(undefined4 *)(iVar4 + (int)puStack_64),*puStack_64,1),
               iVar3 == 1)) break;
            if (*(char *)(param_1 + 0x200c) != '\0') {
              func_0x008e37f0(param_1,*(undefined4 *)(param_4 + (int)puStack_64),
                              *(undefined4 *)(iVar4 + (int)puStack_64));
            }
            uStack_1c = *(undefined4 *)(param_1 + 0x2010);
            uStack_18 = *(undefined4 *)(param_1 + 0x2014);
            func_0x008c2250(&uStack_1c,0);
            func_0x008c2250(&uStack_1c,2);
            while (uStack_44 != uStack_24) {
              iVar3 = func_0x008eb2c0(iStack_58 * 0x20 + iStack_40);
              if (*(int *)(iVar3 + 4) != 0) {
                func_0x00968810();
              }
              func_0x008c2d60();
            }
            func_0x008c22f0(param_1 + 0x2018,0);
            func_0x008c22f0(param_1 + 0x2018,3);
            uVar5 = uStack_3c;
            while (uStack_24 != uStack_44) {
              if (*(int *)(*(int *)(param_1 + 0x1748) + 4 + (uVar5 * 0x20 + uStack_20) * 0x1c) != 0)
              {
                func_0x00953460(1);
                uVar5 = uStack_3c;
              }
              uStack_24 = uStack_24 & ~(1 << (uStack_20 & 0x1f));
              if (uStack_24 == 0) {
                uStack_20 = 0;
              }
              else {
                uStack_20 = 0;
                if (uStack_24 != 0) {
                  for (; (uStack_24 >> uStack_20 & 1) == 0; uStack_20 = uStack_20 + 1) {
                  }
                }
              }
              while ((uStack_24 == 0 && (uVar5 = uVar5 + 1, uStack_3c = uVar5, uVar5 < 3))) {
                uStack_24 = *(uint *)(iStack_28 + uVar5 * 4);
                uStack_20 = 0;
                if ((uStack_24 != 0) && (uStack_20 = 0, uStack_24 != 0)) {
                  for (; (uStack_24 >> uStack_20 & 1) == 0; uStack_20 = uStack_20 + 1) {
                  }
                }
              }
            }
          }
          iStack_74 = iStack_74 + 1;
          puStack_64 = puStack_64 + 1;
        } while (iStack_74 < param_7);
      }
    }
  }
  else if (cVar2 == '\0') {
    iVar4 = 0;
    if (0 < param_7) {
      param_4 = param_4 - (int)param_5;
      do {
        cVar2 = func_0x008d6750(param_2,*(undefined4 *)((int)puStack_68 + param_4),*puStack_68);
        if (cVar2 == '\0') {
          puVar6 = (undefined4 *)((int)puStack_68 + (param_3 - (int)param_5));
          iVar3 = func_0x00a3efa0(param_1,param_2,*puVar6,*(undefined4 *)((int)puStack_68 + param_4)
                                  ,3,0,*puStack_68,0,
                                  *(undefined4 *)((int)puVar6 + ((int)param_6 - param_3)),0);
          if ((iVar3 == 1) ||
             (iVar3 = func_0x009e3de0(param_1,param_2,*puVar6,
                                      *(undefined4 *)((int)puStack_68 + param_4),*puStack_68,
                                      *(undefined4 *)((int)puVar6 + ((int)param_6 - param_3)),1),
             iVar3 == 1)) break;
          if (*(char *)(param_1 + 0x200c) != '\0') {
            func_0x008e37f0(param_1,*(undefined4 *)((int)puStack_68 + param_4),*puStack_68);
          }
          uStack_1c = *(undefined4 *)(param_1 + 0x2010);
          uStack_18 = *(undefined4 *)(param_1 + 0x2014);
          func_0x008c2250(&uStack_1c,0);
          func_0x008c2250(&uStack_1c,2);
          while (uStack_44 != uStack_24) {
            iVar3 = func_0x008eb2c0(iStack_58 * 0x20 + iStack_40);
            if (*(int *)(iVar3 + 4) != 0) {
              func_0x00968810();
            }
            func_0x008c2d60();
          }
          func_0x008c22f0(param_1 + 0x2018,0);
          func_0x008c22f0(param_1 + 0x2018,3);
          while (uStack_24 != uStack_44) {
            if (*(int *)(*(int *)(param_1 + 0x1748) + 4 + (uStack_3c * 0x20 + uStack_20) * 0x1c) !=
                0) {
              func_0x00953460(1);
            }
            func_0x008c2db0();
          }
        }
        iVar4 = iVar4 + 1;
        puStack_68 = puStack_68 + 1;
      } while (iVar4 < param_7);
    }
  }
  else {
    iStack_74 = 0;
    if (0 < param_7) {
      iVar4 = (int)param_5 - (int)param_6;
      param_4 = param_4 - (int)param_6;
      do {
        cVar2 = func_0x008d6750(param_2,*(undefined4 *)((int)puStack_64 + param_4),
                                *(undefined4 *)((int)puStack_64 + iVar4));
        if (cVar2 == '\0') {
          func_0x00986cd0(*puStack_64);
          iVar3 = func_0x00a3efa0(param_1,param_2,
                                  *(undefined4 *)((int)puStack_64 + (param_3 - (int)param_6)),
                                  *(undefined4 *)((int)puStack_64 + param_4),3,0,
                                  *(undefined4 *)((int)puStack_64 + iVar4),0,*puStack_64,0);
          if ((iVar3 == 1) ||
             (iVar3 = func_0x009e3de0(param_1,param_2,
                                      *(undefined4 *)((int)puStack_64 + (param_3 - (int)param_6)),
                                      *(undefined4 *)((int)puStack_64 + param_4),
                                      *(undefined4 *)((int)puStack_64 + iVar4),*puStack_64,1),
             iVar3 == 1)) break;
          if (*(char *)(param_1 + 0x200c) != '\0') {
            func_0x008e37f0(param_1,*(undefined4 *)((int)puStack_64 + param_4),
                            *(undefined4 *)((int)puStack_64 + iVar4));
          }
          uStack_1c = *(undefined4 *)(param_1 + 0x2010);
          uStack_18 = *(undefined4 *)(param_1 + 0x2014);
          func_0x008c2250(&uStack_1c,0);
          func_0x008c2250(&uStack_1c,2);
          while (uStack_44 != uStack_24) {
            iVar3 = func_0x008eb2c0(iStack_58 * 0x20 + iStack_40);
            if (*(int *)(iVar3 + 4) != 0) {
              func_0x00968810();
            }
            func_0x008c2d60();
          }
          func_0x008c22f0(param_1 + 0x2018,0);
          func_0x008c22f0(param_1 + 0x2018,3);
          uVar5 = uStack_3c;
          while (uStack_24 != uStack_44) {
            if (*(int *)(*(int *)(param_1 + 0x1748) + 4 + (uVar5 * 0x20 + uStack_20) * 0x1c) != 0) {
              func_0x00953460(1);
              uVar5 = uStack_3c;
            }
            uStack_24 = uStack_24 & ~(1 << (uStack_20 & 0x1f));
            if (uStack_24 == 0) {
              uStack_20 = 0;
            }
            else {
              uStack_20 = 0;
              if (uStack_24 != 0) {
                for (; (uStack_24 >> uStack_20 & 1) == 0; uStack_20 = uStack_20 + 1) {
                }
              }
            }
            while ((uStack_24 == 0 && (uVar5 = uVar5 + 1, uStack_3c = uVar5, uVar5 < 3))) {
              uStack_24 = *(uint *)(iStack_28 + uVar5 * 4);
              uStack_20 = 0;
              if ((uStack_24 != 0) && (uStack_20 = 0, uStack_24 != 0)) {
                for (; (uStack_24 >> uStack_20 & 1) == 0; uStack_20 = uStack_20 + 1) {
                }
              }
            }
          }
        }
        iStack_74 = iStack_74 + 1;
        puStack_64 = puStack_64 + 1;
      } while (iStack_74 < param_7);
    }
  }
  func_0x0095c6a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00a590a0(undefined4 param_1,int param_2,uint param_3,int *param_4,undefined4 param_5,int param_6
            ,int param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_EBX;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  undefined4 uStack_78;
  int *piStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_28;
  int iStack_24;
  uint uStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_78;
  uStack_68._4_4_ = param_2;
  iStack_6c = param_6;
  piStack_74 = param_4;
  uStack_78 = param_1;
  if ((*(int *)(param_2 + 0x14f4) != 0) && (*(int *)(*(int *)(param_2 + 0x14f4) + 0x158) != 0)) {
    func_0x009862d0(param_2);
  }
  uStack_68 = CONCAT44(uStack_68._4_4_,*(int *)(param_2 + 0x14f4));
  if ((*(int *)(param_2 + 0x14f4) == 0) || (cVar2 = func_0x00983a10(), cVar2 == '\0')) {
    iStack_70 = 0;
    if (0 < param_7) {
      iStack_6c = iStack_6c - (int)param_4;
      do {
        if ((*(char *)(param_2 + 0x20dc) != '\0') &&
           (iVar4 = *param_4, *(int *)(&DAT_00feeba0 + (param_3 & 0xff) * 4) <= iVar4)) {
          iVar1 = *(int *)((int)param_4 + iStack_6c);
          cVar2 = func_0x00b4f5b0(param_2);
          if (cVar2 == '\0') {
            iVar3 = func_0x00a3efa0(param_2,unaff_retaddr,0,iVar4,param_3,iVar1,0,0,0,0);
            if (iVar3 == 1) goto LAB_00a5975c;
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(param_2 + 0x1514);
            uStack_68 = 0;
            uStack_60 = 0;
            if ((((*(int *)(iVar3 + 100) == 0) || (*(uint *)(iVar3 + 0x14c) != param_3)) ||
                (*(int *)(iVar3 + 0x150) != iVar4)) || (*(int *)(iVar3 + 0x154) != iVar1)) {
              iVar3 = func_0x008e4e20(param_2,param_3,iVar4,iVar1,&uStack_68);
              if (iVar3 == 1) {
LAB_00a5975c:
                FUN_008ab370();
                return;
              }
            }
            else {
              uStack_68 = *(undefined8 *)(iVar3 + 0x158);
              uStack_60 = *(undefined4 *)(iVar3 + 0x160);
            }
            iVar3 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_68,0,&iStack_70);
            if ((iVar3 == 1) ||
               (iVar5 = func_0x00a3efa0(param_2,unaff_retaddr,iStack_70,iVar4,param_3,iVar1,0,0,0,0)
               , iVar3 = iStack_70, iVar5 == 1)) goto LAB_00a5975c;
          }
          iVar4 = func_0x009e4200(param_2,unaff_retaddr,iVar3,iVar4,param_3,iVar1,0,0,0,0);
          if (iVar4 == 1) goto LAB_00a5975c;
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*unaff_EBX,1);
          }
          uStack_34 = *(uint *)(param_2 + 0x2010);
          uStack_30 = *(uint *)(param_2 + 0x2014);
          func_0x008c2250(&uStack_34,0);
          func_0x008c2250(&iStack_3c,2);
          if (iStack_28 != iStack_50) {
            do {
              iVar4 = func_0x008eb2c0(iStack_3c * 0x20 + iStack_24);
              if (*(int *)(iVar4 + 4) != 0) {
                func_0x00968810();
              }
              func_0x008c2d60();
            } while (iStack_28 != iStack_50);
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          iVar4 = iStack_38;
          uVar6 = uStack_c;
          uVar7 = uStack_4c;
          param_4 = unaff_EBX;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(uStack_68._4_4_ + 0x1748) + 4 +
                          (uVar7 * 0x20 + uStack_30) * 0x1c) != 0) {
                func_0x00953460(1);
                iVar4 = iStack_38;
                uVar6 = uStack_c;
                uVar7 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                uStack_54 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar7 = uVar7 + 1, uStack_4c = uVar7, uVar7 < 3))) {
                uStack_34 = *(uint *)(iVar4 + uVar7 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
            } while (uStack_34 != uVar6);
            param_2 = uStack_68._4_4_;
            param_4 = piStack_74;
          }
        }
        iStack_70 = iStack_70 + 1;
        param_4 = param_4 + 1;
        piStack_74 = param_4;
      } while (iStack_70 < param_7);
    }
  }
  else {
    iStack_70 = 0;
    if (0 < param_7) {
      iStack_6c = iStack_6c - (int)param_4;
      do {
        if ((*(char *)(param_2 + 0x20dc) != '\0') &&
           (*(int *)(&DAT_00feeba0 + (param_3 & 0xff) * 4) <= *param_4)) {
          func_0x00986d90(iStack_70);
          iVar4 = *(int *)(iStack_70 + (int)param_4);
          iVar1 = *param_4;
          cVar2 = func_0x00b4f5b0(param_2);
          if (cVar2 == '\0') {
            iVar3 = func_0x00a3efa0(param_2,unaff_retaddr,0,iVar1,param_3,iVar4,0,0,0,0);
            if (iVar3 == 1) goto LAB_00a5975c;
            uVar8 = 0;
          }
          else {
            iVar3 = *(int *)(param_2 + 0x1514);
            uStack_68 = 0;
            uStack_60 = 0;
            if ((((*(int *)(iVar3 + 100) == 0) || (*(uint *)(iVar3 + 0x14c) != param_3)) ||
                (*(int *)(iVar3 + 0x150) != iVar1)) || (*(int *)(iVar3 + 0x154) != iVar4)) {
              iVar3 = func_0x008e4e20(param_2,param_3,iVar1,iVar4,&uStack_68);
              if (iVar3 == 1) goto LAB_00a5975c;
            }
            else {
              uStack_68 = *(undefined8 *)(iVar3 + 0x158);
              uStack_60 = *(undefined4 *)(iVar3 + 0x160);
            }
            iVar3 = func_0x0095c8f0(*(undefined4 *)(param_2 + 0x1d14),&uStack_68,0,&uStack_58);
            if ((iVar3 == 1) ||
               (iVar3 = func_0x00a3efa0(param_2,unaff_retaddr,uStack_58,iVar1,param_3,iVar4,0,0,0,0)
               , uVar8 = uStack_58, iVar3 == 1)) goto LAB_00a5975c;
          }
          iVar4 = func_0x009e4200(param_2,unaff_retaddr,uVar8,iVar1,param_3,iVar4,0,0,0,0);
          if (iVar4 == 1) goto LAB_00a5975c;
          if (*(char *)(param_2 + 0x200c) != '\0') {
            func_0x008e37f0(param_2,*unaff_EBX,1);
          }
          uStack_34 = *(uint *)(param_2 + 0x2010);
          uStack_30 = *(uint *)(param_2 + 0x2014);
          func_0x008c2250(&uStack_34,0);
          func_0x008c2250(&iStack_3c,2);
          if (iStack_28 != iStack_50) {
            do {
              iVar4 = func_0x008eb2c0(iStack_3c * 0x20 + iStack_24);
              if (*(int *)(iVar4 + 4) != 0) {
                func_0x00968810();
              }
              func_0x008c2d60();
            } while (iStack_28 != iStack_50);
          }
          func_0x008c22f0(param_2 + 0x2018,0);
          func_0x008c22f0(param_2 + 0x2018,3);
          iVar4 = iStack_38;
          uVar6 = uStack_c;
          uVar7 = uStack_4c;
          param_4 = unaff_EBX;
          if (uStack_34 != uStack_c) {
            do {
              if (*(int *)(*(int *)(uStack_68._4_4_ + 0x1748) + 4 +
                          (uVar7 * 0x20 + uStack_30) * 0x1c) != 0) {
                func_0x00953460(1);
                iVar4 = iStack_38;
                uVar6 = uStack_c;
                uVar7 = uStack_4c;
              }
              uStack_34 = uStack_34 & ~(1 << (uStack_30 & 0x1f));
              if (uStack_34 == 0) {
                uStack_30 = 0;
              }
              else {
                uStack_54 = 0;
                uStack_30 = 0;
                if (uStack_34 != 0) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
              while ((uStack_34 == 0 && (uVar7 = uVar7 + 1, uStack_4c = uVar7, uVar7 < 3))) {
                uStack_34 = *(uint *)(iVar4 + uVar7 * 4);
                uStack_30 = 0;
                if ((uStack_34 != 0) && (uStack_30 = 0, uStack_34 != 0)) {
                  for (; (uStack_34 >> uStack_30 & 1) == 0; uStack_30 = uStack_30 + 1) {
                  }
                }
              }
            } while (uStack_34 != uVar6);
            param_2 = uStack_68._4_4_;
            param_4 = piStack_74;
          }
        }
        iStack_70 = iStack_70 + 1;
        param_4 = param_4 + 1;
        piStack_74 = param_4;
      } while (iStack_70 < param_7);
    }
  }
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00a59780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  func_0x0095e8f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
