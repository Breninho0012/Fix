  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  func_0x0046bc40("onKeyUp",7,uVar1);
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



undefined1 __thiscall FUN_0085c9a0(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f38375;
  iStack_1c = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (param_3 == 1) {
    uStack_30._0_4_ = (uint)DAT_0145db28;
    uVar4 = (uint)uStack_30;
    uStack_30._4_4_ = (int)((ulonglong)DAT_0145db28 >> 0x20);
    iVar8 = uStack_30._4_4_;
    if ((char)param_1[0x3a] == '\0') {
      uStack_30 = DAT_0145db28;
      uVar2 = (uint)(uVar4 < (uint)param_1[0x38]);
      uVar3 = iVar8 - param_1[0x39];
      bVar9 = -1 < (int)(uVar3 - uVar2);
      if ((uVar3 != uVar2 && bVar9) || ((bVar9 && (200 < uVar4 - param_1[0x38]))))
      goto LAB_0085ca48;
      pcVar1 = *(code **)(*param_1 + 0x60);
      puStack_20 = &stack0xfffffffc;
      _guard_check_icall(param_2);
      cVar6 = (*pcVar1)();
      if (cVar6 != '\0') {
        uStack_21 = 1;
        goto LAB_0085cb88;
      }
      *(undefined1 *)(param_1 + 0x3a) = 1;
    }
    else {
LAB_0085ca48:
      uStack_30 = DAT_0145db28;
      param_1[0x38] = uVar4;
      param_1[0x39] = iVar8;
      *(undefined1 *)(param_1 + 0x3a) = 0;
      puStack_20 = &stack0xfffffffc;
    }
    param_1[0x84] = *param_2;
    param_1[0x85] = param_2[1];
    puVar5 = puStack_20;
LAB_0085ca94:
    puStack_20 = puVar5;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    func_0x0046bc40("onMousePress",0xc,uVar7);
    uStack_14 = 3;
    uStack_21 = func_0x0085eb60(&uStack_48,param_2,&param_3);
  }
  else {
    if (((param_3 != 4) && (param_3 != 5)) && (puVar5 = &stack0xfffffffc, param_3 != 6))
    goto LAB_0085ca94;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    func_0x0046bc40("onTouchPress",0xc,uVar7);
    uStack_14 = 0;
    iVar8 = func_0x008619c0(&uStack_48,param_2,&param_3);
    if (iVar8 < 1) {
      uStack_21 = 0;
    }
    else {
      iVar8 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
      uStack_21 = iVar8 != 0;
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
  }
  if (0xf < uStack_34) {
    uStack_14 = 0xffffffff;
    func_0x0046b1f0(&uStack_48,uStack_48,uStack_34);
  }
LAB_0085cb88:
  *unaff_FS_OFFSET = iStack_1c;
  return uStack_21;
}



undefined1 FUN_0085cba0(undefined4 param_1,int param_2)

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
  puStack_c = &DAT_00f383b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((param_2 == 4) || (param_2 == 5)) || (param_2 == 6)) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    func_0x0046bc40("onTouchRelease",0xe,uVar1);
    uStack_8 = 0;
    iVar2 = func_0x008619c0(&uStack_2c,param_1,&param_2);
    if (iVar2 < 1) {
      uStack_11 = 0;
    }
    else {
      iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
      uStack_11 = iVar2 != 0;
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
  }
  else {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    func_0x0046bc40("onMouseRelease",0xe,uVar1);
    uStack_8 = 3;
    uStack_11 = func_0x0085eb60(&uStack_2c,param_1,&param_2);
  }
  if (0xf < uStack_18) {
    uStack_8 = 0xffffffff;
    func_0x0046b1f0(&uStack_2c,uStack_2c,uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uStack_11;
}



undefined1 FUN_0085cce0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f383ed;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("onMouseMove",0xb,uVar1);
  uStack_14 = 0;
  iVar2 = func_0x00861310(&uStack_3c,param_1,param_2);
  if (iVar2 < 1) {
    uStack_21 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_21 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_28) {
    func_0x0046b1f0(&uStack_3c,uStack_3c,uStack_28);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return uStack_21;
}



undefined1 FUN_0085cdd0(undefined4 param_1)

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
  func_0x0046bc40("onMouseWheel",0xc,uVar1);
  uStack_8 = 0;
  iVar2 = func_0x00861d20(&uStack_2c,param_1,&stack0x00000008);
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



void __thiscall FUN_0085ced0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  uint auStack_48 [6];
  undefined1 uStack_2d;
  uint auStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3842d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar1;
  if ((*(byte *)(param_1 + 0xf8) & 1) != 0) {
    FUN_0085dc60(auStack_2c,param_2);
    uStack_8 = 0;
    if (iStack_1c != 0) {
      auStack_48[4] = 0;
      auStack_48[5] = 0;
      auStack_48[0] = 0;
      auStack_48[1] = 0;
      auStack_48[2] = 0;
      auStack_48[3] = 0;
      func_0x0046bc40("onTextClick",0xb,uVar1);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      uVar2 = func_0x00862070(auStack_48,auStack_2c,param_2);
      if (0 < (int)uVar2) {
        func_0x00d66d90(DAT_0145e9f0,~uVar2);
      }
      uStack_8 = uStack_8 & 0xffffff00;
      if (0xf < auStack_48[5]) {
        func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
      }
      auStack_48[4] = 0;
      auStack_48[5] = 0xf;
      auStack_48[0] = auStack_48[0] & 0xffffff00;
    }
    uStack_8 = 0xffffffff;
    if (0xf < uStack_18) {
      func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
    }
    iStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  auStack_48[4] = 0;
  auStack_48[5] = 0;
  auStack_48[0] = 0;
  auStack_48[1] = 0;
  auStack_48[2] = 0;
  auStack_48[3] = 0;
  func_0x0046bc40("onClick",7,uVar1);
  uStack_8 = 2;
  iVar3 = func_0x00860c80(auStack_48,param_2);
  if (iVar3 < 1) {
    uStack_2d = 0;
  }
  else {
    iVar3 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_2d = iVar3 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_8 = 0xffffffff;
  if (0xf < auStack_48[5]) {
    func_0x0046b1f0(auStack_48,auStack_48[0],auStack_48[5]);
  }
  auStack_48[4] = 0;
  auStack_48[5] = 0xf;
  auStack_48[0] = auStack_48[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined1 FUN_0085d090(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f383ed;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("onDoubleClick",0xd,uVar1);
  uStack_14 = 0;
  iVar2 = func_0x00860c80(&uStack_3c,param_1);
  if (iVar2 < 1) {
    uStack_21 = 0;
  }
  else {
    iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
    uStack_21 = iVar2 != 0;
    func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
  }
  uStack_14 = 0xffffffff;
  if (0xf < uStack_28) {
    func_0x0046b1f0(&uStack_3c,uStack_3c,uStack_28);
  }
  *unaff_FS_OFFSET = iStack_1c;
  return uStack_21;
}



void __thiscall FUN_0085db50(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x244);
  piVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    piVar3 = (int *)*param_2;
  }
  piVar4 = piVar1;
  if (0xf < *(uint *)(param_1 + 600)) {
    piVar4 = (int *)*piVar1;
  }
  cVar2 = func_0x0046cf20(piVar4,*(undefined4 *)(param_1 + 0x254),piVar3,param_2[4]);
  if (cVar2 == '\0') {
    piVar3 = param_2 + 4;
    if (*piVar3 == 0) {
      func_0x0046a660(&DAT_0112e1b4,0);
      *(undefined1 *)(param_1 + 0x25c) = 0;
      return;
    }
    if (piVar1 != param_2) {
      if (0xf < (uint)param_2[5]) {
        param_2 = (int *)*param_2;
      }
      func_0x0046a660(param_2,*piVar3);
    }
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



void __thiscall FUN_0085dbe0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x71) != param_2) {
    *(char *)(param_1 + 0x71) = param_2;
  }
  return;
}



undefined4 * __thiscall FUN_0085dc60(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb037e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar4 = *(int **)(param_1 + 0x380);
  do {
    if (piVar4 == *(int **)(param_1 + 900)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      func_0x0046bc40(&DAT_0112e1b4,0);
      *unaff_FS_OFFSET = iStack_10;
      return param_2;
    }
    iVar1 = *piVar4;
    iVar2 = piVar4[2];
    iVar5 = iVar2;
    if (iVar1 + -1 <= iVar2) {
      iVar5 = iVar1;
      iVar1 = iVar2;
    }
    if ((iVar5 <= *param_3) && (*param_3 <= iVar1)) {
      iVar1 = piVar4[1];
      iVar2 = piVar4[3];
      iVar5 = iVar2;
      if (iVar1 + -1 <= iVar2) {
        iVar5 = iVar1;
        iVar1 = iVar2;
      }
      if ((iVar5 <= param_3[1]) && (param_3[1] <= iVar1)) {
        func_0x00469da0(piVar4 + 4,uVar3);
        *unaff_FS_OFFSET = iStack_10;
        return param_2;
      }
    }
    piVar4 = piVar4 + 10;
  } while( true );
}



void __thiscall FUN_0085dd70(int param_1,uint param_2)

{
  if (((param_2 & *(uint *)(param_1 + 0xf8)) == 0) &&
     (((*(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | param_2, param_2 == 1 ||
       (param_2 == 2)) && (*(int *)(param_1 + 0x380) == *(int *)(param_1 + 900))))) {
    func_0x0085de10();
  }
  return;
}



void __thiscall FUN_0085ddb0(int param_1,uint param_2)

{
  if (((param_2 & *(uint *)(param_1 + 0xf8)) != 0) &&
     (((*(uint *)(param_1 + 0xf8) = ~param_2 & *(uint *)(param_1 + 0xf8), param_2 == 1 ||
       (param_2 == 2)) && (*(int *)(param_1 + 0x380) != *(int *)(param_1 + 900))))) {
    func_0x0085ebb0(*(int *)(param_1 + 0x380));
    *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_1 + 0x380);
  }
  return;
}



void __thiscall FUN_0085e1f0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 1) {
    if (param_3 != '\0') {
      uStack_1c = 0;
      FUN_0077fac0(&uStack_1c);
      if ((int)uStack_1c != 0) {
        iVar1 = *(int *)((int)uStack_1c + 0x200);
        iVar2 = *(int *)((int)uStack_1c + 0x48);
        iVar3 = *(int *)((int)uStack_1c + 0x40);
        iVar4 = *(int *)((int)uStack_1c + 0x1f8);
        *(int *)(param_1 + 0x50) = param_2;
        param_2 = (int)((double)(((iVar2 - iVar4) - (iVar1 + iVar3)) + 1) * (double)param_2 * 0.01);
      }
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
    FUN_0077f6b0(param_2,(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0085e2d0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb26ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1) {
    if (param_3 != '\0') {
      uStack_1c = 0;
      FUN_0077fac0(&uStack_1c);
      if ((int)uStack_1c != 0) {
        iVar1 = *(int *)((int)uStack_1c + 500);
        iVar2 = *(int *)((int)uStack_1c + 0x4c);
        iVar3 = *(int *)((int)uStack_1c + 0x44);
        iVar4 = *(int *)((int)uStack_1c + 0x1fc);
        *(int *)(param_1 + 0x54) = param_2;
        param_2 = (int)((double)(((iVar2 - iVar4) - (iVar1 + iVar3)) + 1) * (double)param_2 * 0.01);
      }
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
    FUN_0077f6b0((*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 1,param_2);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



TypeDescriptor * FUN_008623c0(void)

{
  return &`private:_void___thiscall_UIWidget::updateStyle(void)'::__l7::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_008623d0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int **ppiVar3;
  int ***pppiVar4;
  int iVar5;
  int ***pppiVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *****pppppiVar9;
  undefined1 *puVar10;
  int ******ppppppiVar11;
  void *_Dst;
  uint uVar12;
  int ****ppppiVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  size_t _Size;
  int ****ppppiStack_160;
  int ****ppppiStack_15c;
  int ****ppppiStack_158;
  int ****ppppiStack_154;
  uint auStack_148 [4];
  undefined4 uStack_138;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined1 auStack_100 [4];
  int *****pppppiStack_fc;
  undefined4 *puStack_f8;
  uint auStack_f4 [5];
  int ***pppiStack_e0;
  int *****pppppiStack_dc;
  int **ppiStack_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int **ppiStack_cc;
  uint uStack_c8;
  undefined ***pppuStack_c4;
  int ***pppiStack_c0;
  int iStack_bc;
  int *****pppppiStack_b8;
  int ***pppiStack_b4;
  int ***pppiStack_b0;
  char cStack_a9;
  uint uStack_a8;
  char cStack_a1;
  undefined **ppuStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  uint auStack_90 [4];
  undefined4 uStack_80;
  undefined ***pppuStack_7c;
  int ***pppiStack_74;
  int ***pppiStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int *****pppppiStack_50;
  int **ppiStack_4c;
  int **ppiStack_48;
  int **ppiStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  int iStack_28;
  int ****ppppiStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xfe) = 0;
  iVar5 = *(int *)(param_1 + 4);
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f3823d;
  iStack_1c = *unaff_FS_OFFSET;
  ppppiStack_154 = (int ****)(DAT_0128fd40 ^ (uint)&stack0xfffffff0);
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uVar14 = 0;
  uStack_a8 = 0;
  iStack_bc = iVar5;
  ppppiStack_24 = ppppiStack_154;
  puVar10 = &stack0xfffffffc;
  if (*(char *)(iVar5 + 0x6f) == '\0') {
    if ((*(char *)(iVar5 + 0xfd) == '\0') || (*(char *)(iVar5 + 0xfe) != '\0')) {
      puVar10 = &stack0xfffffffc;
      if (*(int *)(iVar5 + 0xd4) != 0) {
        pppuStack_c4 = (undefined ***)&stack0xfffffe94;
        uStack_68 = 0;
        ppppiStack_160 = (int ****)0x0;
        ppppiStack_15c = (int ****)0x0;
        ppppiStack_158 = (int ****)0x0;
        func_0x0046bc40(&DAT_0112e1b4,0);
        iStack_14 = 0xffffffff;
        func_0x0080f400();
        iStack_14._0_1_ = 9;
        iStack_14._1_3_ = 0;
        pppuStack_c4 = (undefined ***)(iVar5 + 0x100);
        if (*pppuStack_c4 != (undefined **)0x0) {
          ppppiStack_160 = (int ****)&uStack_30;
          func_0x0080ff70();
          iStack_14 = (uint)iStack_14._1_3_ << 8;
          pppiStack_b4 = (int ***)(int ****)uStack_30;
          pppiStack_b0 = (int ***)uStack_30._4_4_;
          if ((int ****)uStack_30 != uStack_30._4_4_) {
            do {
              if (((int ****)pppiStack_b4)[1] != (int ***)0x0) {
                LOCK();
                pppiVar4 = ((int ****)pppiStack_b4)[1] + 1;
                *pppiVar4 = (int **)((int)*pppiVar4 + 1);
                UNLOCK();
              }
              pppiStack_c0 = ((int ****)pppiStack_b4)[1];
              uStack_38 = *(undefined8 *)pppiStack_b4;
              iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
              uStack_60 = 0;
              iStack_14._0_1_ = 0xc;
              ppppiStack_160 = (int ****)(*pppiStack_b4 + 0xb);
              func_0x00469da0();
              uStack_a8 = uVar14 | 0x10;
              func_0x0080f520();
              uStack_a8 = uVar14 & 0xffffffef;
              iStack_14._0_1_ = 0xe;
              if ((int ****)0xf < pppiStack_e0) {
                ppppiStack_160 = (int ****)pppiStack_e0;
                func_0x0046b1f0();
              }
              auStack_f4[4] = 0;
              pppiStack_e0 = (int ***)0xf;
              auStack_f4[0] = auStack_f4[0] & 0xffffff00;
              if ((int)uStack_60 != 0) {
                ppppiStack_160 = (int ****)&uStack_58;
                func_0x008100a0();
                iStack_14._0_1_ = 0xf;
                func_0x0080f7b0();
                iStack_14._0_1_ = 0xe;
                piVar8 = (int *)uStack_58._4_4_;
                if (uStack_58._4_4_ != (int ****)0x0) {
                  LOCK();
                  iVar5 = ((int *)uStack_58._4_4_)[1] + -1;
                  ((int *)uStack_58._4_4_)[1] = iVar5;
                  UNLOCK();
                  if (iVar5 == 0) {
                    pcVar2 = (code *)**uStack_58._4_4_;
                    ppppiStack_160 = (int ****)0x85b05e;
                    _guard_check_icall();
                    ppppiStack_160 = (int ****)0x85b062;
                    (*pcVar2)();
                    LOCK();
                    piVar1 = piVar8 + 2;
                    iVar5 = *piVar1 + -1;
                    *piVar1 = iVar5;
                    UNLOCK();
                    if (iVar5 == 0) {
                      pcVar2 = *(code **)(*piVar8 + 4);
                      ppppiStack_160 = (int ****)0x85b079;
                      _guard_check_icall();
                      ppppiStack_160 = (int ****)0x85b07d;
                      (*pcVar2)();
                    }
                  }
                }
              }
              iStack_14._0_1_ = 0xb;
              piVar8 = (int *)uStack_60._4_4_;
              if (uStack_60._4_4_ != (int ****)0x0) {
                LOCK();
                iVar5 = ((int *)uStack_60._4_4_)[1] + -1;
                ((int *)uStack_60._4_4_)[1] = iVar5;
                UNLOCK();
                if (iVar5 == 0) {
                  pcVar2 = (code *)**uStack_60._4_4_;
                  ppppiStack_160 = (int ****)0x85b09e;
                  _guard_check_icall();
                  ppppiStack_160 = (int ****)0x85b0a2;
                  (*pcVar2)();
                  LOCK();
                  piVar1 = piVar8 + 2;
                  iVar5 = *piVar1 + -1;
                  *piVar1 = iVar5;
                  UNLOCK();
                  if (iVar5 == 0) {
                    pcVar2 = *(code **)(*piVar8 + 4);
                    ppppiStack_160 = (int ****)0x85b0b9;
                    _guard_check_icall();
                    ppppiStack_160 = (int ****)0x85b0bd;
                    (*pcVar2)();
                  }
                }
              }
              pppiVar4 = pppiStack_c0;
              iStack_14 = CONCAT31(iStack_14._1_3_,10);
              if ((int ****)pppiStack_c0 != (int ****)0x0) {
                LOCK();
                pppiVar6 = (int ***)((int)pppiStack_c0[1] + -1);
                pppiStack_c0[1] = (int **)pppiVar6;
                UNLOCK();
                if (pppiVar6 == (int ***)0x0) {
                  ppiVar3 = (int **)**pppiStack_c0;
                  ppppiStack_160 = (int ****)0x85b0e1;
                  _guard_check_icall();
                  ppppiStack_160 = (int ****)0x85b0e5;
                  (*(code *)ppiVar3)();
                  LOCK();
                  ppppiVar13 = (int ****)(pppiVar4 + 2);
                  pppiVar6 = (int ***)((int)*ppppiVar13 + -1);
                  *ppppiVar13 = pppiVar6;
                  UNLOCK();
                  if (pppiVar6 == (int ***)0x0) {
                    ppiVar3 = (int **)(*pppiVar4)[1];
                    ppppiStack_160 = (int ****)0x85b0fc;
                    _guard_check_icall();
                    ppppiStack_160 = (int ****)0x85b100;
                    (*(code *)ppiVar3)();
                  }
                }
              }
              pppiStack_b4 = pppiStack_b4 + 2;
              uVar14 = uStack_a8;
            } while (pppiStack_b4 != pppiStack_b0);
          }
          iStack_14._0_1_ = 9;
          if ((int ****)uStack_30 != (int ****)0x0) {
            ppppiStack_160 = (int ****)uStack_30;
            func_0x00485920();
            ppppiStack_160 = (int ****)(iStack_28 - (int)(int ****)uStack_30 >> 3);
            func_0x0046e710();
            uStack_30 = 0;
            iStack_28 = 0;
          }
        }
        ppppiStack_160 = &pppiStack_74;
        func_0x0080ff70();
        iStack_14._0_1_ = 0x10;
        pppiStack_b4 = pppiStack_74;
        uStack_60 = CONCAT44(pppiStack_70,(int)uStack_60);
        ppppiVar13 = (int ****)pppiStack_74;
        if (pppiStack_74 != pppiStack_70) {
          do {
            uStack_108 = 0;
            uStack_104 = 0;
            uStack_118 = 0;
            uStack_114 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            pppiStack_b4 = (int ***)ppppiVar13;
            func_0x0046bc40();
            iStack_14._0_1_ = 0x12;
            func_0x00469da0();
            uStack_a8 = uVar14 | 1;
            cStack_a1 = func_0x0083d540(pppuStack_c4);
            uVar12 = uVar14 & 0xfffffffe;
            iStack_14._0_1_ = 0x11;
            uStack_a8 = uVar12;
            if (0xf < uStack_11c) {
              func_0x0046b1f0();
            }
            uStack_120 = 0;
            uStack_11c = 0xf;
            uStack_130 = uStack_130 & 0xffffff00;
            iStack_14._0_1_ = 0x10;
            if (0xf < uStack_104) {
              func_0x0046b1f0();
            }
            uStack_108 = 0;
            uStack_104 = 0xf;
            uStack_118 = uStack_118 & 0xffffff00;
            if (cStack_a1 != '\0') {
              iStack_14._0_1_ = 0x13;
              func_0x00469da0();
              uStack_a8 = uVar12 | 8;
              func_0x00482f60(auStack_90);
              uStack_a8 = uVar14 & 0xfffffff6;
              iStack_14._0_1_ = 0x15;
              if (0xf < uStack_134) {
                func_0x0046b1f0(auStack_148,auStack_148[0],uStack_134);
              }
              uStack_138 = 0;
              uStack_134 = 0xf;
              auStack_148[0] = auStack_148[0] & 0xffffff00;
              uStack_30 = 0;
              iStack_28 = 0;
              auStack_f4[0] = 0;
              auStack_f4[1] = 0;
              auStack_f4[2] = 0;
              auStack_f4[3] = 0;
              auStack_f4[4] = 0;
              pppiStack_e0 = (int ***)0x0;
              func_0x0046bc40(&DAT_0113c2f0,1);
              iStack_14._0_1_ = 0x16;
              func_0x0083cbe0(auStack_f4);
              iStack_14._0_1_ = 0x18;
              if (0xf < pppiStack_e0) {
                func_0x0046b1f0();
              }
              auStack_f4[4] = 0;
              pppiStack_e0 = (int ***)0xf;
              auStack_f4[0] = auStack_f4[0] & 0xffffff00;
              cStack_a1 = '\x01';
              pppiStack_c0 = (int ***)(int ****)uStack_30;
              uStack_58 = CONCAT44(uStack_30._4_4_,(undefined4)uStack_58);
              if ((int ****)uStack_30 == uStack_30._4_4_) {
LAB_0085b72c:
                func_0x0080fd90();
              }
              else {
                do {
                  pppiVar4 = ((int ****)pppiStack_c0)[4];
                  pppppiStack_50 = (int *****)0x0;
                  ppiStack_4c = (int **)0x0;
                  ppiStack_48 = (int **)0x0;
                  ppiStack_44 = (int **)0x0;
                  uStack_40._0_4_ = (int ***)0x0;
                  uStack_40._4_4_ = 0;
                  pppiStack_b0 = pppiStack_c0;
                  if ((int ***)0xf < ((int ****)pppiStack_c0)[5]) {
                    pppiStack_b0 = (int ***)*pppiStack_c0;
                  }
                  pppppiVar9 = (int *****)puStack_f8;
                  if ((int ***)0x7fffffff < pppiVar4) {
LAB_0085b889:
                    puStack_f8 = pppppiVar9;
                    func_0x00463570();
LAB_0085b88e:
                    func_0x00484870();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (pppiVar4 < (int ***)0x10) {
                    uVar14 = 0xf;
                    uStack_40._0_4_ = pppiVar4;
                    uStack_40._4_4_ = 0xf;
                    pppppiStack_b8 = (int *****)*pppiStack_b0;
                    pppppiStack_50 = pppppiStack_b8;
                    ppiStack_4c = (int **)((int ****)pppiStack_b0)[1];
                    ppiStack_48 = (int **)((int ****)pppiStack_b0)[2];
                    ppiStack_44 = (int **)((int ****)pppiStack_b0)[3];
                  }
                  else {
                    uVar14 = (uint)pppiVar4 | 0xf;
                    if (uVar14 < 0x80000000) {
                      if (uVar14 < 0x16) {
                        uVar14 = 0x16;
                      }
                    }
                    else {
                      uVar14 = 0x7fffffff;
                    }
                    pppppiStack_b8 = (int *****)func_0x0046c950();
                    pppppiStack_50 = pppppiStack_b8;
                    uStack_40._0_4_ = pppiVar4;
                    uStack_40._4_4_ = uVar14;
                    memcpy(pppppiStack_b8,pppiStack_b0,(int)pppiVar4 + 1);
                  }
                  if (pppiVar4 == (int ***)0x0) {
                    iStack_14._0_1_ = 0x18;
                    if (0xf < uVar14) {
                      func_0x0046b1f0();
                    }
                  }
                  else {
                    ppppppiVar11 = &pppppiStack_50;
                    if (0xf < uVar14) {
                      ppppppiVar11 = (int ******)pppppiStack_b8;
                    }
                    cStack_a9 = *(char *)ppppppiVar11;
                    if (cStack_a9 == '!') {
                      iStack_14._0_1_ = 0x1a;
                      ppiStack_cc = (int **)0x0;
                      uStack_c8 = 0;
                      pppppiStack_dc = (int *****)0x0;
                      ppiStack_d8 = (int **)0x0;
                      ppiStack_d4 = (int **)0x0;
                      ppiStack_d0 = (int **)0x0;
                      if (pppiVar4 == (int ***)0x0) goto LAB_0085b88e;
                      func_0x0046bc40();
                      uVar14 = uStack_a8;
                      uStack_a8 = uStack_a8 | 2;
                      if (0xf < uStack_40._4_4_) {
                        if ((0xfff < uStack_40._4_4_ + 1) &&
                           (0x1f < (uint)((int)pppppiStack_50 + (-4 - (int)pppppiStack_50[-1]))))
                        goto LAB_0085b883;
                        ppppiStack_154 = (int ****)0x85b554;
                        func_0x008ab812();
                      }
                      pppppiStack_b8 = pppppiStack_dc;
                      uStack_a8 = uVar14 & 0xfffffffd;
                      pppppiStack_50 = pppppiStack_dc;
                      ppiStack_4c = ppiStack_d8;
                      ppiStack_48 = ppiStack_d4;
                      ppiStack_44 = ppiStack_d0;
                      uStack_40._0_4_ = (int ***)ppiStack_cc;
                      uStack_40._4_4_ = uStack_c8;
                      ppiStack_cc = (int **)0x0;
                      uStack_c8 = 0xf;
                      pppppiStack_dc = (int *****)((uint)pppppiStack_dc & 0xffffff00);
                      uVar14 = uStack_40._4_4_;
                    }
                    pppiVar4 = (int ***)uStack_40;
                    iStack_14._0_1_ = 0x19;
                    puStack_f8 = &ppppiStack_160;
                    uStack_38 = CONCAT44(&ppppiStack_160,(undefined4)uStack_38);
                    pppppiStack_fc = (int *****)&pppppiStack_50;
                    if (0xf < uVar14) {
                      pppppiStack_fc = pppppiStack_b8;
                    }
                    ppppiStack_160 = (int ****)0x0;
                    ppppiStack_15c = (int ****)0x0;
                    ppppiStack_158 = (int ****)0x0;
                    ppppiStack_154 = (int ****)0x0;
                    pppppiVar9 = &ppppiStack_160;
                    if ((int ***)0x7fffffff < (int ***)uStack_40) goto LAB_0085b889;
                    if ((int ***)uStack_40 < (int ***)0x10) {
                      ppppiStack_160 = *pppppiStack_fc;
                      ppppiStack_15c = (int ****)((int ******)pppppiStack_fc)[1];
                      ppppiStack_158 = (int ****)((int ******)pppppiStack_fc)[2];
                      ppppiStack_154 = (int ****)((int ******)pppppiStack_fc)[3];
                      puStack_f8 = &ppppiStack_160;
                    }
                    else {
                      pppiStack_b0 = (int ***)((uint)(int ***)uStack_40 | 0xf);
                      if (pppiStack_b0 < (int ****)0x80000000) {
                        if (pppiStack_b0 < (int ****)0x16) {
                          pppiStack_b0 = (int ***)0x16;
                        }
                      }
                      else {
                        pppiStack_b0 = (int ***)0x7fffffff;
                      }
                      _Dst = (void *)func_0x0046c950();
                      puVar7 = puStack_f8;
                      puStack_f8[5] = pppiStack_b0;
                      _Size = (int)pppiVar4 + 1;
                      ppppppiVar11 = (int ******)pppppiStack_fc;
                      *puVar7 = _Dst;
                      puVar7[4] = pppiVar4;
                      memcpy(_Dst,ppppppiVar11,_Size);
                    }
                    iStack_14._0_1_ = 0x19;
                    uVar12 = func_0x0084fdc0();
                    if (uVar12 == 0xffffffff) {
                      bVar15 = false;
                    }
                    else {
                      bVar15 = (*(uint *)(iStack_bc + 0x108) & uVar12) != 0;
                    }
                    if (cStack_a9 == '!') {
                      if (bVar15) goto LAB_0085b6b4;
                    }
                    else if (!bVar15) {
LAB_0085b6b4:
                      cStack_a1 = '\0';
                    }
                    iStack_14._0_1_ = 0x18;
                    if (0xf < uVar14) {
                      if ((0xfff < uVar14 + 1) &&
                         (0x1f < (uint)((int)pppppiStack_b8 + (-4 - (int)pppppiStack_b8[-1])))) {
LAB_0085b883:
                    // WARNING: Subroutine does not return
                        _invalid_parameter_noinfo_noreturn();
                      }
                      func_0x008ab812();
                    }
                  }
                  pppiStack_c0 = pppiStack_c0 + 6;
                  pppppiStack_50 = (int *****)((uint)pppppiStack_50 & 0xffffff00);
                  uStack_40 = 0xf00000000;
                } while ((int ****)pppiStack_c0 != uStack_58._4_4_);
                ppppiVar13 = (int ****)pppiStack_b4;
                if (cStack_a1 != '\0') goto LAB_0085b72c;
              }
              iStack_14._0_1_ = 0x15;
              if ((int ****)uStack_30 != (int ****)0x0) {
                func_0x004e7c10();
                func_0x004c7ff0();
                uStack_30 = 0;
                iStack_28 = 0;
              }
              iStack_14._0_1_ = 0x10;
              if (&DAT_0000000f < pppuStack_7c) {
                func_0x0046b1f0();
              }
              uStack_80 = 0;
              pppuStack_7c = (undefined ***)&DAT_0000000f;
              auStack_90[0] = auStack_90[0] & 0xffffff00;
              uVar12 = uStack_a8;
            }
            ppppiVar13 = ppppiVar13 + 2;
            uVar14 = uVar12;
            pppiStack_b4 = (int ***)ppppiVar13;
          } while (ppppiVar13 != uStack_60._4_4_);
        }
        iStack_14 = CONCAT31(iStack_14._1_3_,9);
        if ((int ****)pppiStack_74 != (int ****)0x0) {
          func_0x00485920();
          func_0x0046e710();
          pppiStack_74 = (int ***)0x0;
          pppiStack_70 = (int ***)0x0;
          uStack_6c = 0;
        }
        FUN_00854f40();
        func_0x004683d0();
        iStack_14 = 0xffffffff;
        piVar8 = uStack_68._4_4_;
        puVar10 = puStack_20;
        if (uStack_68._4_4_ != (int *)0x0) {
          LOCK();
          iVar5 = uStack_68._4_4_[1] + -1;
          uStack_68._4_4_[1] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar2 = *(code **)*uStack_68._4_4_;
            ppppiStack_158 = (int ****)0x85b846;
            _guard_check_icall();
            ppppiStack_158 = (int ****)0x85b84a;
            (*pcVar2)();
            LOCK();
            piVar1 = piVar8 + 2;
            iVar5 = *piVar1 + -1;
            *piVar1 = iVar5;
            UNLOCK();
            puVar10 = puStack_20;
            if (iVar5 == 0) {
              pcVar2 = *(code **)(*piVar8 + 4);
              ppppiStack_158 = (int ****)0x85b861;
              _guard_check_icall();
              ppppiStack_158 = (int ****)0x85b865;
              (*pcVar2)();
              puVar10 = puStack_20;
            }
          }
        }
      }
    }
    else {
      ppppiStack_158 = (int ****)&uStack_58;
      uStack_58 = 0;
      ppppiStack_15c = (int ****)0x85ad66;
      puStack_20 = &stack0xfffffffc;
      func_0x0046b930();
      if (uStack_58._4_4_ != (int ****)0x0) {
        LOCK();
        *(int *)((int)uStack_58._4_4_ + 4) = *(int *)((int)uStack_58._4_4_ + 4) + 1;
        UNLOCK();
      }
      uStack_9c = (undefined4)uStack_58;
      pppuStack_c4 = &ppuStack_a0;
      uStack_60 = CONCAT44(&uStack_9c,(int)uStack_60);
      ppuStack_a0 = std::_Func_impl_no_alloc<>::vftable;
      iStack_98 = (int)uStack_58._4_4_;
      uStack_38 = 0;
      iStack_14._1_3_ = 0;
      pppuStack_7c = &ppuStack_a0;
      iStack_14._0_1_ = 6;
      ppppiStack_15c = (int ****)0x15;
      ppppiStack_160 = (int ****)0x11a13f4;
      ppiStack_cc = (int **)0x0;
      pppppiStack_dc = (int *****)0x0;
      ppiStack_d8 = (int **)0x0;
      ppiStack_d4 = (int **)0x0;
      ppiStack_d0 = (int **)0x0;
      uStack_c8 = 0;
      func_0x0046bc40();
      iStack_14._0_1_ = 7;
      FUN_005e5070(auStack_100);
      FUN_00468340();
      iStack_14._0_1_ = 6;
      if (0xf < uStack_c8) {
        func_0x0046b1f0();
      }
      ppiStack_cc = (int **)0x0;
      uStack_c8 = 0xf;
      pppppiStack_dc = (int *****)((uint)pppppiStack_dc & 0xffffff00);
      iStack_14._0_1_ = 2;
      func_0x00464b40();
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      func_0x00467f30();
      *(undefined1 *)(iVar5 + 0xfe) = 1;
      iStack_14 = 0xffffffff;
      ppppiStack_158 = (int ****)0x85aeca;
      FUN_00468340();
      puVar10 = puStack_20;
    }
  }
  puStack_20 = puVar10;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void __thiscall FUN_008623f0(int param_1,undefined4 *param_2)

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
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_00862470(int param_1,undefined4 *param_2)

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
  *unaff_FS_OFFSET = iVar2;
  return;
}



int __thiscall FUN_008625b0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ead568;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = param_1 + 4;
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 1;
    iVar2 = *piVar1;
    iVar6 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
      }
    }
  }
  if (param_2 != '\0') {
    iVar6 = func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



TypeDescriptor * FUN_00862660(void)

{
  return &`public:_bool___thiscall_UIWidget::setRect(class_TRect<int>_const&)'::__l7::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_00862670(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xfc) = 0;
  piVar1 = *(int **)(param_1 + 4);
  iStack_10 = piVar1[0x11];
  iStack_c = piVar1[0x12];
  if ((((*(int *)(param_1 + 0xc) != piVar1[0x10]) || (*(int *)(param_1 + 0x10) != iStack_10)) ||
      (*(int *)(param_1 + 0x14) != iStack_c)) || (*(int *)(param_1 + 0x18) != piVar1[0x13])) {
    pcVar2 = *(code **)(*piVar1 + 0x14);
    iStack_14 = piVar1[0x10];
    iStack_8 = piVar1[0x13];
    _guard_check_icall((int *)(param_1 + 0xc),&iStack_14);
    (*pcVar2)();
  }
  return;
}



undefined4 * __fastcall FUN_008626e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f38760;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x1c,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 8) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[1] = *(undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)(param_1 + 8);
  puVar3[3] = *(undefined4 *)(param_1 + 0xc);
  puVar3[4] = *(undefined4 *)(param_1 + 0x10);
  puVar3[5] = *(undefined4 *)(param_1 + 0x14);
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



int __thiscall FUN_00867710(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uVar7;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f395b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2[4] == 0) {
    uStack_18 = 0;
    piStack_14 = (int *)0x0;
    uStack_8 = 0;
    func_0x0046ffa0(&uStack_18);
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      iVar6 = piStack_14[1] + -1;
      piStack_14[1] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)*piStack_14;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_14 + 2;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          pcVar2 = *(code **)(*piStack_14 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    uVar7 = 0;
    param_2 = (undefined4 *)&DAT_0112e1b4;
  }
  else {
    uVar7 = func_0x0062b230(auStack_20,param_2,uVar5);
    uStack_8 = 1;
    iVar6 = func_0x0046ffa0(uVar7);
    uStack_8 = 0xffffffff;
    piStack_14 = piStack_1c;
    if (piStack_1c != (int *)0x0) {
      LOCK();
      piVar1 = piStack_1c + 1;
      iVar3 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar3 + -1;
      UNLOCK();
      if (iVar3 + -1 == 0) {
        pcVar2 = *(code **)*piStack_1c;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_14 + 2;
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          pcVar2 = *(code **)(*piStack_14 + 4);
          _guard_check_icall();
          iVar6 = (*pcVar2)();
        }
      }
    }
    if ((undefined4 *)(param_1 + 0x174) == param_2) goto LAB_00867859;
    uVar7 = param_2[4];
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
  }
  iVar6 = func_0x0046a660(param_2,uVar7);
LAB_00867859:
  iVar3 = *(int *)(param_1 + 0x13c);
  if ((iVar3 != 0) &&
     ((*(int *)(param_1 + 0x16c) < *(int *)(param_1 + 0x164) ||
      (iVar6 = *(int *)(param_1 + 0x168), *(int *)(param_1 + 0x170) < iVar6)))) {
    iVar4 = *(int *)(iVar3 + 0x20);
    iVar6 = *(int *)(iVar3 + 0x24) + -1;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(int *)(param_1 + 0x16c) = iVar4 + -1;
    *(int *)(param_1 + 0x170) = iVar6;
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



int __thiscall FUN_00868110(int param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f39748;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x30);
  if (0xf < *(uint *)(param_1 + 0x44)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 0x44),uVar2);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  func_0x0084a970();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00869c40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  int *piStack_28;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f39b85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uVar6 = func_0x006216c0(param_3,uVar5);
  iStack_8 = 1;
  puVar7 = (undefined8 *)func_0x008ab47d(0x78);
  iStack_8._0_1_ = 2;
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined4 *)((int)puVar7 + 4) = 1;
  *(undefined4 *)(puVar7 + 1) = 1;
  *(undefined ***)puVar7 = std::_Ref_count_obj2<>::vftable;
  func_0x00629ee0(uVar6);
  iStack_8._0_1_ = 1;
  uStack_1c = 0;
  uStack_14 = 1;
  func_0x00584fa0(puVar7 + 2,puVar7);
  func_0x0046ffa0(&uStack_1c);
  uStack_14 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piVar2 = uStack_1c._4_4_;
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
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1 + -1;
      *piVar1 = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  if (piStack_28 != (int *)0x0) {
    LOCK();
    iVar4 = piStack_28[1] + -1;
    piStack_28[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar3 = *(code **)*piStack_28;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar2 = piStack_28 + 2;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piStack_28 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x260) + 0x52) = 0;
  iVar4 = *(int *)(param_1 + 0x260);
  if (iVar4 != 0) {
    if (((*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40)) ||
        (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x44))) || (*(char *)(param_1 + 699) != '\0')
       ) {
      iVar9 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 1;
      iVar8 = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1;
      if ((iVar9 < 1) || (*(char *)(param_1 + 699) != '\0')) {
        iVar9 = *(int *)(iVar4 + 0x20);
      }
      if ((iVar8 < 1) || (*(char *)(param_1 + 699) != '\0')) {
        iVar8 = *(int *)(iVar4 + 0x24);
      }
      FUN_0077f6b0(iVar9,iVar8);
    }
  }
  *(undefined1 *)(param_1 + 0x240) = 1;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00869e20(int param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f395b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2[4] == 0) {
    uStack_18 = 0;
    piStack_14 = (int *)0x0;
    uStack_8 = 0;
    func_0x0046ffa0(&uStack_18);
  }
  else {
    uVar6 = func_0x0062b230(auStack_20,param_2,uVar5);
    uStack_8 = 1;
    func_0x0046ffa0(uVar6);
    piStack_14 = piStack_1c;
  }
  uStack_8 = 0xffffffff;
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_14[1] + -1;
    piStack_14[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_14 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_14 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x260);
  if ((iVar3 != 0) &&
     (((*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40) ||
       (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x44))) || (*(char *)(param_1 + 699) != '\0'))
     )) {
    iVar9 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 1;
    iVar7 = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1;
    if ((iVar9 < 1) || (*(char *)(param_1 + 699) != '\0')) {
      iVar9 = *(int *)(iVar3 + 0x20);
    }
    if ((iVar7 < 1) || (*(char *)(param_1 + 699) != '\0')) {
      iVar7 = *(int *)(iVar3 + 0x24);
    }
    FUN_0077f6b0(iVar9,iVar7);
  }
  piVar1 = (int *)(param_1 + 0x268);
  piStack_14 = (int *)param_2[4];
  piVar8 = param_2;
  if (0xf < (uint)param_2[5]) {
    piVar8 = (int *)*param_2;
  }
  piVar10 = piVar1;
  if (0xf < *(uint *)(param_1 + 0x27c)) {
    piVar10 = (int *)*piVar1;
  }
  cVar4 = func_0x0046cf20(piVar10,*(undefined4 *)(param_1 + 0x278),piVar8,piStack_14);
  if ((cVar4 == '\0') && (piVar1 != param_2)) {
    if (0xf < (uint)param_2[5]) {
      param_2 = (int *)*param_2;
    }
    func_0x0046a660(param_2,piStack_14);
  }
  *(undefined1 *)(param_1 + 0x240) = 1;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00869fc0(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *****pppppuVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  uint auStack_fc [7];
  int *piStack_e0;
  undefined1 auStack_dc [176];
  undefined4 ****appppuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f39be9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((*(uint *)(param_2 + 0x10) & 3) == 0) && (*(uint *)(param_2 + 0x10) != 0)) {
    memset(auStack_dc,0,0xb0);
    func_0x004687a0(1);
    uStack_8 = 1;
    func_0x0086e440(appppuStack_2c,param_2);
    uStack_8._0_1_ = 2;
    pppppuVar3 = appppuStack_2c;
    if (0xf < uStack_18) {
      pppppuVar3 = (undefined4 *****)appppuStack_2c[0];
    }
    func_0x00607620(pppppuVar3,uStack_1c,0);
    auStack_fc[4] = 0;
    auStack_fc[5] = 0;
    auStack_fc[0] = 0;
    auStack_fc[1] = 0;
    auStack_fc[2] = 0;
    auStack_fc[3] = 0;
    func_0x0046bc40("base64",6);
    uStack_8._0_1_ = 3;
    uVar4 = func_0x0062b650(auStack_fc + 6,auStack_dc,auStack_fc);
    uStack_8._0_1_ = 4;
    func_0x0046ffa0(uVar4);
    uStack_8._0_1_ = 3;
    FUN_00468340();
    uStack_8 = CONCAT31(uStack_8._1_3_,2);
    if (0xf < auStack_fc[5]) {
      func_0x0046b1f0(auStack_fc,auStack_fc[0],auStack_fc[5]);
    }
    iVar1 = *(int *)(param_1 + 0x260);
    auStack_fc[4] = 0;
    auStack_fc[5] = 0xf;
    auStack_fc[0] = auStack_fc[0] & 0xffffff00;
    if (iVar1 != 0) {
      if (((*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40)) ||
          (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x44))) ||
         (*(char *)(param_1 + 699) != '\0')) {
        iVar6 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 1;
        iVar5 = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1;
        if ((iVar6 < 1) || (*(char *)(param_1 + 699) != '\0')) {
          iVar6 = *(int *)(iVar1 + 0x20);
        }
        if ((iVar5 < 1) || (*(char *)(param_1 + 699) != '\0')) {
          iVar5 = *(int *)(iVar1 + 0x24);
        }
        FUN_0077f6b0(iVar6,iVar5);
      }
    }
    *(undefined1 *)(param_1 + 0x240) = 1;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < uStack_18) {
      func_0x0046b1f0(appppuStack_2c,appppuStack_2c[0],uStack_18);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    appppuStack_2c[0] = (undefined4 ****)((uint)appppuStack_2c[0] & 0xffffff00);
    uStack_8 = 0xffffffff;
    func_0x004673c0();
  }
  else {
    auStack_fc[6] = 0;
    piStack_e0 = (int *)0x0;
    uStack_8 = 0;
    func_0x0046ffa0(auStack_fc + 6,uStack_14);
    uStack_8 = 0xffffffff;
    if (piStack_e0 != (int *)0x0) {
      LOCK();
      iVar1 = piStack_e0[1] + -1;
      piStack_e0[1] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar2 = *(code **)*piStack_e0;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar1 = piStack_e0[2] + -1;
        piStack_e0[2] = iVar1;
        UNLOCK();
        if (iVar1 == 0) {
          pcVar2 = *(code **)(*piStack_e0 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x240) = 1;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0086a260(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [24];
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  char *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f39c85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (((*(byte *)(param_1 + 0xf8) & 3) != 0) &&
     (*(int *)(param_1 + 0x374) == *(int *)(param_1 + 0x378))) {
    func_0x0086c030(uVar3);
  }
  if (((*(char *)(param_1 + 0x334) == '\0') ||
      (iVar6 = *(int *)(param_1 + 0x40), *(int *)(param_1 + 0x48) < iVar6)) ||
     (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x44))) {
    uVar1 = *(ushort *)(param_1 + 0x35a);
    if ((uVar1 == 0) || (*(uint *)(param_1 + 0x308) <= (uint)uVar1)) {
      piVar5 = (int *)(param_1 + 0x2f8);
      if ((int *)(param_1 + 0x310) != piVar5) {
        if (0xf < *(uint *)(param_1 + 0x30c)) {
          piVar5 = (int *)*piVar5;
        }
        func_0x0046a660(piVar5,*(undefined4 *)(param_1 + 0x308));
      }
    }
    else {
      uVar4 = func_0x00482f60(auStack_50,0,(uint)uVar1 - *(int *)(param_1 + 0x36c));
      iStack_8 = 4;
      uVar4 = func_0x00471920(auStack_38,uVar4,param_1 + 0x35c);
      iStack_8._0_1_ = 5;
      func_0x00469bd0(uVar4);
      iStack_8 = CONCAT31(iStack_8._1_3_,4);
      if (0xf < uStack_24) {
        func_0x0046b1f0(auStack_38,auStack_38[0],uStack_24);
      }
      uStack_28 = 0;
      uStack_24 = 0xf;
      auStack_38[0] = auStack_38[0] & 0xffffff00;
      iStack_8 = 0xffffffff;
      if (0xf < uStack_3c) {
        func_0x0046b1f0(auStack_50,auStack_50[0],uStack_3c);
      }
      uStack_40 = 0;
      uStack_3c = 0xf;
      auStack_50[0] = auStack_50[0] & 0xffffff00;
    }
    if ((int *)(param_1 + 0x34c) != (int *)(param_1 + 0x340)) {
      iVar6 = *(int *)(param_1 + 0x340);
      func_0x0084f020(iVar6,(*(int *)(param_1 + 0x344) - iVar6 >> 2) * -0x33333333);
    }
  }
  else {
    if ((int *)(param_1 + 0x34c) != (int *)(param_1 + 0x340)) {
      iVar6 = *(int *)(param_1 + 0x340);
      func_0x0084f020(iVar6,(*(int *)(param_1 + 0x344) - iVar6 >> 2) * -0x33333333);
      iVar6 = *(int *)(param_1 + 0x40);
    }
    uVar1 = *(ushort *)(param_1 + 0x35a);
    if ((uVar1 == 0) || (*(uint *)(param_1 + 0x308) <= (uint)uVar1)) {
      uVar4 = func_0x00618000(auStack_38,param_1 + 0x2f8,
                              ((*(int *)(param_1 + 0x48) - iVar6) - *(int *)(param_1 + 0x32c)) + 1,
                              param_1 + 0x34c);
      iStack_8 = 3;
      func_0x00469bd0(uVar4);
      iStack_8 = 0xffffffff;
      if (0xf < uStack_24) {
        func_0x0046b1f0(auStack_38,auStack_38[0],uStack_24);
      }
      uStack_28 = 0;
      uStack_24 = 0xf;
      auStack_38[0] = auStack_38[0] & 0xffffff00;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x48);
      iVar2 = *(int *)(param_1 + 0x32c);
      uVar4 = func_0x00482f60(auStack_68,0,(uint)uVar1 - *(int *)(param_1 + 0x36c));
      iStack_8 = 0;
      uVar4 = func_0x00471920(auStack_38,uVar4,param_1 + 0x35c);
      iStack_8._0_1_ = 1;
      uVar4 = func_0x00618000(auStack_50,uVar4,((iVar7 - iVar6) - iVar2) + 1,param_1 + 0x34c);
      iStack_8._0_1_ = 2;
      func_0x00469bd0(uVar4);
      iStack_8._0_1_ = 1;
      FUN_00469ba0();
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FUN_00469ba0();
      iStack_8 = 0xffffffff;
      FUN_00469ba0();
    }
  }
  if ((((*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x40)) ||
       (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x44))) ||
      (*(char *)(param_1 + 0x336) != '\0')) || (*(char *)(param_1 + 0x335) != '\0')) {
    pcStack_14 = (char *)(param_1 + 0x336);
    iStack_20 = -1;
    iStack_1c = -1;
    func_0x00617c40(param_1 + 0x310,5,&iStack_20);
    iStack_18 = *(int *)(param_1 + 0x32c) +
                *(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x1f8) + iStack_20;
    iVar7 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40)) + 1;
    iStack_1c = iStack_1c +
                *(int *)(param_1 + 0x330) + *(int *)(param_1 + 0x1fc) + *(int *)(param_1 + 500);
    iVar6 = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + 1;
    if ((iVar7 < 1) || ((*pcStack_14 != '\0' && (*(char *)(param_1 + 0x334) == '\0')))) {
      iVar7 = iStack_18;
    }
    if ((iVar6 < 1) || (*(char *)(param_1 + 0x335) != '\0')) {
      iVar6 = iStack_1c;
    }
    FUN_0077f6b0(iVar7,iVar6);
  }
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0086b3a0(undefined4 param_1,undefined4 param_2)

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
  func_0x0046bc40("onTextChange",0xc,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x0086cc60(&uStack_28,param_1,param_2);
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



void FUN_0086b460(undefined4 param_1)

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
  func_0x0046bc40("onFontChange",0xc,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x0085f580(&uStack_28,param_1);
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



void __thiscall FUN_0086b520(int *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  char in_stack_0000001c;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f39f05;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(char *)((int)param_1 + 0x337) != '\0') {
    func_0x0083ca30(uStack_14);
  }
  if (param_1[0xd0] != param_1[0xd1]) {
    param_1[0xd1] = param_1[0xd0];
  }
  if (param_1[0xd3] != param_1[0xd4]) {
    param_1[0xd4] = param_1[0xd3];
  }
  if (param_1[0xdd] != param_1[0xde]) {
    func_0x0085efb0(param_1[0xdd]);
    param_1[0xde] = param_1[0xdd];
  }
  piVar4 = param_1 + 0xbe;
  piVar3 = (int *)&param_2;
  if (0xf < in_stack_00000018) {
    piVar3 = param_2;
  }
  piVar5 = piVar4;
  if (0xf < (uint)param_1[0xc3]) {
    piVar5 = (int *)*piVar4;
  }
  cVar2 = func_0x0046cf20(piVar5,param_1[0xc2],piVar3,in_stack_00000014);
  if (cVar2 == '\0') {
    func_0x00469da0(piVar4);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if ((int **)piVar4 != &param_2) {
      piVar4 = (int *)&param_2;
      if (0xf < in_stack_00000018) {
        piVar4 = param_2;
      }
      func_0x0046a660(piVar4,in_stack_00000014);
    }
    pcVar1 = *(code **)(*param_1 + 0x68);
    _guard_check_icall();
    (*pcVar1)();
    if (in_stack_0000001c == '\0') {
      pcVar1 = *(code **)(*param_1 + 0x6c);
      _guard_check_icall(&param_2,auStack_2c);
      (*pcVar1)();
    }
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < uStack_18) {
      func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  uStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (int *)((uint)param_2 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0086b6c0(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  char cVar9;
  void **ppvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  byte ****ppppbVar14;
  byte bVar15;
  uint uVar16;
  byte *pbVar17;
  void *pvVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  byte ****ppppbVar22;
  int *unaff_FS_OFFSET;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  undefined4 *puStack_188;
  undefined4 *puStack_184;
  uint auStack_17c [4];
  undefined4 uStack_16c;
  uint uStack_168;
  uint uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined4 *puStack_148;
  int *piStack_144;
  int iStack_140;
  byte ***pppbStack_13c;
  int iStack_138;
  undefined4 *puStack_134;
  int *piStack_130;
  char cStack_129;
  undefined1 auStack_128 [84];
  undefined4 *puStack_d4;
  uint uStack_c8;
  uint auStack_a8 [4];
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 *puStack_90;
  undefined1 uStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined1 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  byte ***pppbStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  void *pvStack_2c;
  void *pvStack_28;
  void *pvStack_24;
  void *pvStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f39fec;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_144 = param_2;
  if (param_1[0xd0] != param_1[0xd1]) {
    param_1[0xd1] = param_1[0xd0];
  }
  if (param_1[0xd3] != param_1[0xd4]) {
    param_1[0xd4] = param_1[0xd3];
  }
  piStack_130 = param_1;
  if (param_1[0xdd] != param_1[0xde]) {
    func_0x0085efb0(param_1[0xdd],uStack_14);
    piStack_130[0xde] = piStack_130[0xdd];
  }
  iStack_34 = 0;
  uStack_30 = 0;
  pppbStack_44 = (byte ***)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  func_0x0046bc40(&DAT_0112e1b4,0);
  uStack_8 = 0;
  iStack_140 = 0;
  iVar19 = *param_2;
  uStack_14c = 0;
  if ((param_2[1] - iVar19 >> 3) * -0x55555555 != 1) {
    iStack_138 = 0;
    do {
      iVar6 = DAT_012bc278;
      iVar5 = DAT_012bc274;
      iVar4 = DAT_012bc270;
      iVar3 = DAT_012bc26c;
      puStack_134 = (undefined4 *)(iVar19 + 0x18 + iStack_138);
      uStack_1c = 0;
      pvStack_2c = (void *)0x0;
      pvStack_28 = (void *)0x0;
      pvStack_24 = (void *)0x0;
      pvStack_20 = (void *)0x0;
      uVar16 = puStack_134[4];
      if (0xf < (uint)puStack_134[5]) {
        puStack_134 = (undefined4 *)*puStack_134;
      }
      if (0x7fffffff < uVar16) {
        func_0x00463570();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar16 < 0x10) {
        uStack_1c = CONCAT44(0xf,uVar16);
        pvStack_2c = (void *)*puStack_134;
        pvStack_28 = (void *)puStack_134[1];
        pvStack_24 = (void *)puStack_134[2];
        pvStack_20 = (void *)puStack_134[3];
      }
      else {
        uVar20 = uVar16 | 0xf;
        if (uVar20 < 0x80000000) {
          if (uVar20 < 0x16) {
            uVar20 = 0x16;
          }
        }
        else {
          uVar20 = 0x7fffffff;
        }
        pvStack_2c = (void *)func_0x0046c950(uVar20 + 1);
        uStack_1c = CONCAT44(uVar20,uVar16);
        memcpy(pvStack_2c,puStack_134,uVar16 + 1);
      }
      uStack_8._0_1_ = 1;
      uStack_154 = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x0046bc40("$var-",5);
      uStack_8._0_1_ = 2;
      cStack_129 = func_0x0083d540(pppbStack_13c);
      uStack_8._0_1_ = 1;
      if (0xf < uStack_150) {
        func_0x0046b1f0(&uStack_164,uStack_164,uStack_150);
      }
      uStack_154 = 0;
      uStack_150 = 0xf;
      uStack_164 = uStack_164 & 0xffffff00;
      if (cStack_129 != '\0') {
        ppvVar10 = (void **)FUN_0077d2c0(auStack_17c,&pvStack_2c);
        uStack_8._0_1_ = 3;
        uVar7 = (undefined1)uStack_8;
        uStack_8._0_1_ = 3;
        if (&pvStack_2c != ppvVar10) {
          if (0xf < uStack_1c._4_4_) {
            uVar16 = uStack_1c._4_4_ + 1;
            pvVar18 = pvStack_2c;
            if (0xfff < uVar16) {
              pvVar18 = *(void **)((int)pvStack_2c + -4);
              uVar16 = uStack_1c._4_4_ + 0x24;
              if (0x1f < (uint)((int)pvStack_2c + (-4 - (int)pvVar18))) {
                uStack_8._0_1_ = uVar7;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            func_0x008ab812(pvVar18,uVar16);
          }
          pvStack_2c = *ppvVar10;
          pvStack_28 = ppvVar10[1];
          pvStack_24 = ppvVar10[2];
          pvStack_20 = ppvVar10[3];
          uStack_1c = *(undefined8 *)(ppvVar10 + 4);
          ppvVar10[4] = (void *)0x0;
          ppvVar10[5] = (void *)0xf;
          *(undefined1 *)ppvVar10 = 0;
        }
        uStack_8._0_1_ = 1;
        if (0xf < uStack_168) {
          func_0x0046b1f0(auStack_17c,auStack_17c[0],uStack_168);
        }
        uStack_16c = 0;
        uStack_168 = 0xf;
        auStack_17c[0] = auStack_17c[0] & 0xffffff00;
      }
      func_0x0086d6e0(&pvStack_2c);
      func_0x006189d0();
      iVar19 = iStack_138;
      piVar1 = piStack_144;
      puVar11 = (undefined4 *)(*piStack_144 + iStack_138);
      puVar21 = puVar11 + 4;
      if (0xf < (uint)puVar11[5]) {
        puVar11 = (undefined4 *)*puVar11;
      }
      func_0x0046a880(puVar11,*puVar21);
      piStack_48 = (int *)0x0;
      puStack_184 = &uStack_54;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      iStack_58 = 0;
      piStack_48 = (int *)func_0x00e70415(1);
      uStack_8._0_1_ = 4;
      uStack_54 = func_0x00609420(&uStack_4c);
      uStack_50 = func_0x0046b3b0(&uStack_4c);
      uStack_8._0_1_ = 6;
      func_0x00609070("\\[text-event\\](.*?)\\[/text-event\\]","",1);
      uStack_8._0_1_ = 7;
      memset(&puStack_90,0,0x38);
      puStack_90 = (undefined4 *)0x0;
      uStack_8c = 0;
      iStack_88 = 0;
      iStack_84 = 0;
      iStack_80 = 0;
      puStack_7c = (undefined4 *)0x0;
      puStack_78 = (undefined4 *)0x0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_8._0_1_ = 9;
      puVar21 = (undefined4 *)(*piVar1 + iVar19);
      if ((uint)puVar21[5] < 0x10) {
        puVar11 = (undefined4 *)(puVar21[4] + (int)puVar21);
        puStack_148 = puVar21;
        if (0xf < (uint)puVar21[5]) goto LAB_0086bb11;
      }
      else {
        puVar11 = (undefined4 *)(puVar21[4] + (int)*puVar21);
        puStack_148 = (undefined4 *)*puVar21;
LAB_0086bb11:
        puVar21 = (undefined4 *)*puVar21;
      }
      if (iStack_58 != 0) {
        memset(auStack_128,0,0x80);
        func_0x0060b080(puVar21,puVar11,&uStack_54,iStack_58,*(undefined4 *)(iStack_58 + 0x1c),
                        *(undefined4 *)(iStack_58 + 0x14));
        uStack_8 = CONCAT31(uStack_8._1_3_,10);
        cVar9 = func_0x0060beb0(&puStack_90,0);
        if (cVar9 == '\0') {
          if (puVar21 != puVar11) {
            uStack_c8 = uStack_c8 & 0xffffdfff | 0x100;
            puVar12 = (undefined4 *)func_0x0060bc30(&pppbStack_13c,(int)puVar21 + 1,puVar11,0);
            puVar8 = (undefined4 *)*puVar12;
            puVar12 = puStack_134;
            while (puStack_134 = puVar8, puStack_134 != puVar11) {
              puStack_d4 = puStack_134;
              cVar9 = func_0x0060beb0(&puStack_90,0);
              if (cVar9 != '\0') goto LAB_0086bc25;
              puVar12 = (undefined4 *)func_0x0060bc30(&pppbStack_13c,(int)puStack_134 + 1,puVar11,0)
              ;
              puVar12 = (undefined4 *)*puVar12;
              puVar8 = puVar12;
            }
            puStack_134 = puVar12;
            puStack_d4 = puVar11;
            cVar9 = func_0x0060beb0(&puStack_90,0);
            if (cVar9 != '\0') goto LAB_0086bc25;
          }
        }
        else {
LAB_0086bc25:
          uStack_74 = puVar21 != puStack_78;
          puStack_90 = puStack_148;
          puStack_7c = puVar21;
        }
        uStack_8._0_1_ = 9;
        func_0x0060ae30();
      }
      pbVar13 = (byte *)(*piStack_144 + iStack_138);
      pbVar17 = pbVar13;
      if (0xf < *(uint *)(pbVar13 + 0x14)) {
        pbVar17 = *(byte **)pbVar13;
      }
      pbVar13 = pbVar17 + *(int *)(pbVar13 + 0x10);
      for (; pbVar17 != pbVar13; pbVar17 = pbVar17 + 1) {
        iVar19 = iStack_140 + 1;
        if (*pbVar17 < 0x20) {
          iVar19 = iStack_140;
        }
        iStack_140 = iVar19;
      }
      iStack_198 = iVar3;
      iStack_194 = iVar4;
      iStack_190 = iVar5;
      iStack_18c = iVar6;
      iStack_19c = iStack_140 + -0x19;
      if ((iStack_84 - iStack_88 >> 2) * -0x55555555 == 0) {
        iStack_19c = iStack_140;
      }
      piVar1 = (int *)piStack_130[0xd1];
      iStack_140 = iStack_19c;
      if (piVar1 == (int *)piStack_130[0xd2]) {
        func_0x00618aa0(piVar1,&iStack_19c);
      }
      else {
        *piVar1 = iStack_19c;
        piVar1[1] = iVar3;
        piVar1[2] = iVar4;
        piVar1[3] = iVar5;
        piVar1[4] = iVar6;
        piStack_130[0xd1] = piStack_130[0xd1] + 0x14;
      }
      uStack_8._0_1_ = 7;
      if (iStack_88 != 0) {
        func_0x004aaee0(iStack_88,(iStack_80 - iStack_88 >> 2) * -0x55555555);
        iStack_88 = 0;
        iStack_84 = 0;
        iStack_80 = 0;
      }
      uStack_8._0_1_ = 0xc;
      func_0x00607c50();
      puStack_188 = &uStack_54;
      uStack_8._0_1_ = 1;
      if (piStack_48 != (int *)0x0) {
        pcVar2 = *(code **)(*piStack_48 + 8);
        _guard_check_icall();
        puVar21 = (undefined4 *)(*pcVar2)();
        if (puVar21 != (undefined4 *)0x0) {
          pcVar2 = *(code **)*puVar21;
          _guard_check_icall(1);
          (*pcVar2)();
        }
      }
      uStack_8 = (uint)uStack_8._1_3_ << 8;
      if (0xf < uStack_1c._4_4_) {
        func_0x0046b1f0(&pvStack_2c,pvStack_2c,uStack_1c._4_4_);
      }
      uStack_14c = uStack_14c + 2;
      iStack_138 = iStack_138 + 0x30;
      iVar19 = *piStack_144;
      uStack_1c = 0xf00000000;
      pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
    } while (uStack_14c < (piStack_144[1] - iVar19 >> 3) * -0x55555555 - 1U);
  }
  piVar1 = piStack_130;
  if (*(char *)((int)piStack_130 + 0x337) != '\0') {
    pppbStack_13c = (byte ***)&pppbStack_44;
    if (0xf < uStack_30) {
      pppbStack_13c = pppbStack_44;
    }
    ppppbVar14 = &pppbStack_44;
    if (0xf < uStack_30) {
      ppppbVar14 = (byte ****)pppbStack_44;
    }
    ppppbVar14 = (byte ****)((int)ppppbVar14 + iStack_34);
    ppppbVar22 = &pppbStack_44;
    if (0xf < uStack_30) {
      ppppbVar22 = (byte ****)pppbStack_44;
    }
    if (ppppbVar22 != ppppbVar14) {
      iVar19 = (int)pppbStack_13c - (int)ppppbVar22;
      do {
        bVar15 = *(byte *)ppppbVar22;
        if ((('`' < (char)bVar15) && ((char)bVar15 < '{')) || (0xdf < bVar15)) {
          bVar15 = bVar15 - 0x20;
        }
        *(byte *)((int)ppppbVar22 + iVar19) = bVar15;
        ppppbVar22 = (byte ****)((int)ppppbVar22 + 1);
      } while (ppppbVar22 != ppppbVar14);
    }
  }
  ppppbVar14 = (byte ****)(piStack_130 + 0xbe);
  func_0x00469da0(ppppbVar14);
  uStack_8 = CONCAT31(uStack_8._1_3_,0xf);
  if (ppppbVar14 != &pppbStack_44) {
    ppppbVar14 = &pppbStack_44;
    if (0xf < uStack_30) {
      ppppbVar14 = (byte ****)pppbStack_44;
    }
    func_0x0046a660(ppppbVar14,iStack_34);
  }
  pcVar2 = *(code **)(*piVar1 + 0x68);
  _guard_check_icall();
  (*pcVar2)();
  if (param_3 == '\0') {
    pcVar2 = *(code **)(*piVar1 + 0x6c);
    _guard_check_icall(&pppbStack_44,auStack_a8);
    (*pcVar2)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < uStack_94) {
    func_0x0046b1f0(auStack_a8,auStack_a8[0],uStack_94);
  }
  uStack_98 = 0;
  uStack_94 = 0xf;
  auStack_a8[0] = auStack_a8[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  if (0xf < uStack_30) {
    func_0x0046b1f0(&pppbStack_44,pppbStack_44,uStack_30);
  }
  iStack_34 = 0;
  uStack_30 = 0xf;
  pppbStack_44 = (byte ***)((uint)pppbStack_44 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0086bf60(int *param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eae5dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_14 = param_1;
  uVar5 = func_0x0061cc30(auStack_1c,param_2,uVar4);
  uStack_8 = 0;
  func_0x0046ffa0(uVar5);
  uStack_8 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_18[1] + -1;
    piStack_18[1] = iVar3;
    UNLOCK();
    param_1 = piStack_14;
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      param_1 = piStack_14;
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar2)();
        param_1 = piStack_14;
      }
    }
  }
  pcVar2 = *(code **)(*param_1 + 0x68);
  _guard_check_icall();
  (*pcVar2)();
  pcVar2 = *(code **)(*param_1 + 0x70);
  _guard_check_icall(param_2);
  (*pcVar2)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __cdecl _vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  int iVar1;
  
                    // 0x46dbb0  105  _vsprintf_l
  iVar1 = _vsnprintf_l(_DstBuf,0xffffffff,_Format,param_3,_ArgList);
  return iVar1;
}



int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    // 0x46dbd0  145  sprintf
  iVar1 = _vsnprintf_l(_Dest,0xffffffff,_Format,(_locale_t)0x0,&stack0x0000000c);
  return iVar1;
}



void FUN_0086e7c0(char *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_ac [136];
  byte abStack_24 [16];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3a4f9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar2;
  memset(auStack_ac,0,0x88);
  func_0x0086e920(uVar2);
  func_0x0086fe90(abStack_24);
  uStack_8 = 1;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  puVar3 = (undefined4 *)func_0x0046c950(0x30);
  *(undefined4 **)param_1 = puVar3;
  param_1[0x10] = '$';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '/';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(char **)param_1;
  }
  uVar2 = 0;
  do {
    bVar1 = abStack_24[uVar2];
    *param_1 = "0123456789abcdef-"[bVar1 >> 4];
    param_1[1] = "0123456789abcdef-"[bVar1 & 0xf];
    pcVar4 = param_1 + 2;
    if ((((uVar2 == 3) || (uVar2 == 5)) || (uVar2 == 7)) || (uVar2 == 9)) {
      *pcVar4 = '-';
      pcVar4 = param_1 + 3;
    }
    uVar2 = uVar2 + 1;
    param_1 = pcVar4;
  } while (uVar2 < 0x10);
  uStack_8 = 0;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0086e990(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint auStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f3a545;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  if (in_stack_00000014 != 0) {
    uVar1 = func_0x0086f250(auStack_2c,&param_2,0,uStack_14);
    iStack_8._0_1_ = 1;
    func_0x00469bd0(uVar1);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_18) {
      func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
    if (in_stack_00000014 == 0x10) {
      puVar2 = &param_2;
      if (0xf < in_stack_00000018) {
        puVar2 = param_2;
      }
      func_0x008ab0e6(param_1,puVar2,0x10);
    }
  }
  iStack_8 = 0xffffffff;
  if (0xf < in_stack_00000018) {
    func_0x0046b1f0(&param_2,param_2,in_stack_00000018);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0086eaa0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  uint auStack_b4 [6];
  undefined1 auStack_9c [136];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3a5a2;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  cVar3 = func_0x0086dbf0(uStack_14);
  uVar5 = extraout_ECX;
  if (cVar3 != '\0') {
    memset(auStack_9c,0,0x88);
    func_0x0086e920();
    puVar4 = (undefined4 *)func_0x0086fe90(auStack_b4 + 2);
    uVar5 = puVar4[1];
    uVar1 = puVar4[2];
    uVar2 = puVar4[3];
    *param_1 = *puVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    uVar5 = extraout_ECX_00;
  }
  auStack_b4[4] = 0;
  auStack_b4[5] = 0;
  auStack_b4[0] = 0;
  auStack_b4[1] = 0;
  auStack_b4[2] = 0;
  auStack_b4[3] = 0;
  if (param_1 == param_1 + 4) {
    auStack_b4[4] = 0;
    auStack_b4[5] = 0xf;
    auStack_b4[0] = 0;
  }
  else {
    func_0x005e73c0(param_1,uVar5,0x10);
  }
  uStack_8 = 1;
  func_0x0086f080(param_2,auStack_b4,0);
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_b4[5]) {
    uVar6 = auStack_b4[5] + 1;
    uVar7 = auStack_b4[0];
    if (0xfff < uVar6) {
      uVar7 = *(uint *)(auStack_b4[0] - 4);
      uVar6 = auStack_b4[5] + 0x24;
      if (0x1f < (auStack_b4[0] - uVar7) - 4) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(uVar7,uVar6);
  }
  auStack_b4[4] = 0;
  auStack_b4[5] = 0xf;
  auStack_b4[0] = auStack_b4[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0086f530(char *param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a4 [92];
  char acStack_48 [36];
  byte abStack_24 [16];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3a787;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00bb4130(auStack_a4,uStack_14);
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_00bb4190(auStack_a4,param_2,*puVar1);
  func_0x00bb4010(abStack_24,auStack_a4);
  pcVar5 = acStack_48;
  iVar4 = 0;
  do {
    sprintf(pcVar5,"%.2X",(uint)abStack_24[iVar4]);
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 2;
  } while (iVar4 < 0x10);
  pcVar5 = acStack_48;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  func_0x0046bc40(acStack_48,(int)pcVar5 - (int)(acStack_48 + 1));
  uStack_8 = 0;
  if (param_3 == '\0') {
    piVar2 = (int *)(param_1 + 0x10);
    if (0xf < *(uint *)(param_1 + 0x14)) {
      param_1 = *(char **)param_1;
    }
    pcVar5 = param_1 + *piVar2;
    for (; param_1 != pcVar5; param_1 = param_1 + 1) {
      iVar4 = tolower((int)*param_1);
      *param_1 = (char)iVar4;
    }
  }
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0086f6c0(char *param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [96];
  char acStack_54 [44];
  byte abStack_28 [20];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3a7e7;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00bb7240(auStack_b4,uStack_14);
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_00bb72a0(auStack_b4,param_2,*puVar1);
  func_0x00bb7100(abStack_28,auStack_b4);
  pcVar5 = acStack_54;
  iVar4 = 0;
  do {
    sprintf(pcVar5,"%.2X",(uint)abStack_28[iVar4]);
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 2;
  } while (iVar4 < 0x14);
  pcVar5 = acStack_54;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  func_0x0046bc40(acStack_54,(int)pcVar5 - (int)(acStack_54 + 1));
  uStack_8 = 0;
  if (param_3 == '\0') {
    piVar2 = (int *)(param_1 + 0x10);
    if (0xf < *(uint *)(param_1 + 0x14)) {
      param_1 = *(char **)param_1;
    }
    pcVar5 = param_1 + *piVar2;
    for (; param_1 != pcVar5; param_1 = param_1 + 1) {
      iVar4 = tolower((int)*param_1);
      *param_1 = (char)iVar4;
    }
  }
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



char * FUN_0086f850(char *param_1,undefined4 *param_2,char param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3a83e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uVar3 = func_0x00e6ac60(0,0,0,uVar2);
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  func_0x00e6ac60(uVar3,param_2,*puVar1,uVar2);
  func_0x0083c260();
  uStack_8 = 0;
  if (param_3 == '\0') {
    pcVar6 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pcVar6 = *(char **)param_1;
    }
    pcVar5 = pcVar6 + *(int *)(param_1 + 0x10);
    if (pcVar6 != pcVar5) {
      do {
        iVar4 = tolower((int)*pcVar6);
        *pcVar6 = (char)iVar4;
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 != pcVar5);
      *unaff_FS_OFFSET = iStack_10;
      return param_1;
    }
  }
  else {
    pcVar6 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pcVar6 = *(char **)param_1;
    }
    pcVar5 = pcVar6 + *(int *)(param_1 + 0x10);
    if (pcVar6 != pcVar5) {
      do {
        iVar4 = toupper((int)*pcVar6);
        *pcVar6 = (char)iVar4;
        pcVar6 = pcVar6 + 1;
      } while (pcVar6 != pcVar5);
      *unaff_FS_OFFSET = iStack_10;
      return param_1;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0086f990(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  uStack_10 = 0;
  uStack_c = 0;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  func_0x00bb9360(&uStack_10,param_2);
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  func_0x00bb9360(&uStack_c,param_3);
  func_0x00bb64c0(*(undefined4 *)(param_1 + 0x10),uStack_10,uStack_c,0);
  FUN_008ab370();
  return;
}



void __thiscall
FUN_0086fa10(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  func_0x00bb9360(&uStack_14,param_2);
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  func_0x00bb9360(&uStack_10,param_3);
  if (0xf < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  func_0x00bb9360(&uStack_c,param_4);
  func_0x00bb64c0(*(undefined4 *)(param_1 + 0x10),0,0,uStack_c);
  func_0x00bb6450(*(undefined4 *)(param_1 + 0x10),uStack_14,uStack_10);
  FUN_008ab370();
  return;
}



void __fastcall FUN_0086fac0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char ***pppcVar6;
  int iVar7;
  char ***_Dest;
  int *unaff_FS_OFFSET;
  char **appcStack_68 [4];
  size_t sStack_58;
  uint uStack_54;
  char **ppcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3a886;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_34 = 0;
  iVar1 = func_0x00bb96d0(*(undefined4 *)(param_1 + 0x10),uStack_14);
  if (iVar1 == 0) {
    func_0x00bb8800(2,0,0);
    uVar2 = func_0x00ba6770(0);
    uVar2 = func_0x00ba6740(uVar2);
    uStack_40 = 0;
    uStack_3c = 0;
    ppcStack_50 = (char **)0x0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x0046bc40("RSA check failed - %s",0x15);
    uStack_8 = 1;
    pppcVar6 = &ppcStack_50;
    if (0xf < uStack_3c) {
      pppcVar6 = (char ***)ppcStack_50;
    }
    iVar1 = _snprintf((char *)0x0,0,(char *)pppcVar6,uVar2);
    iVar7 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      iVar7 = -1;
    }
    func_0x00469c80(iVar7,0);
    pppcVar6 = &ppcStack_50;
    if (0xf < uStack_3c) {
      pppcVar6 = (char ***)ppcStack_50;
    }
    _Dest = appcStack_68;
    if (0xf < uStack_54) {
      _Dest = (char ***)appcStack_68[0];
    }
    uStack_34 = 1;
    iVar1 = _snprintf((char *)_Dest,sStack_58,(char *)pppcVar6,uVar2);
    func_0x004698c0(iVar1,0);
    FUN_005ee340(3,appcStack_68);
    uStack_34 = 0;
    uStack_8 = uStack_8 & 0xffffff00;
    if (0xf < uStack_54) {
      func_0x0046b1f0(appcStack_68,appcStack_68[0],uStack_54);
    }
    sStack_58 = 0;
    uStack_54 = 0xf;
    appcStack_68[0] = (char **)((uint)appcStack_68[0] & 0xffffff00);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_3c) {
      func_0x0046b1f0(&ppcStack_50,ppcStack_50,uStack_3c);
    }
    uStack_40 = 0;
    uStack_3c = 0xf;
    ppcStack_50 = (char **)((uint)ppcStack_50 & 0xffffff00);
  }
  else {
    uVar2 = func_0x00bb5930();
    uStack_30 = uVar2;
    func_0x00bb59e0(uVar2);
    uVar3 = func_0x00bb57f0(uVar2);
    uVar2 = func_0x00bb57f0(uVar2);
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    func_0x00bb61a0(*(undefined4 *)(param_1 + 0x10),0,0,&uStack_18);
    func_0x00bb6170(*(undefined4 *)(param_1 + 0x10),&uStack_28,&uStack_2c);
    func_0x00bb6110(*(undefined4 *)(param_1 + 0x10),&uStack_1c,&uStack_20,&uStack_24);
    uStack_38 = func_0x00bba340(uStack_1c);
    uVar4 = func_0x00bba340(uStack_20);
    uVar5 = func_0x00bba340(uStack_24);
    func_0x00bb77c0(0,uStack_38,uStack_18,uVar3,uStack_30);
    func_0x00bb77c0(0,uVar4,uStack_18,uVar2,uStack_30);
    func_0x00bb4d80(uVar5,uStack_2c,uStack_28,uStack_30);
    func_0x00bb63b0(*(undefined4 *)(param_1 + 0x10),uStack_38,uVar4,uVar5);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0086fd50(int param_1)

{
  func_0x00bb77a0(*(undefined4 *)(param_1 + 0x10));
  return;
}



undefined4 * __fastcall FUN_00873b80(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3ac46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = func_0x008ab47d(0x48,uVar1);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  param_1[1] = iVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_8 = 1;
  param_1[6] = 7;
  param_1[7] = 8;
  *param_1 = 0x3f800000;
  func_0x0046abc0(0x10,param_1[1]);
  uStack_8 = 3;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar2 = func_0x008ab47d(0xc);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  param_1[8] = iVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00873cf0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3ad86;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0xc,uVar4);
    puVar1 = puVar2;
  }
  func_0x008ab812(*(undefined4 *)(param_1 + 0x20),0xc,uVar4);
  uStack_8 = 3;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    func_0x0046ac90(iVar3,*(int *)(param_1 + 0x14) - iVar3 >> 2);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x008769d0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall
FUN_00874130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,char param_5)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 ***pppuVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int *unaff_FS_OFFSET;
  bool bVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auStack_194 [16];
  undefined1 auStack_184 [16];
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [16];
  undefined4 *puStack_154;
  undefined1 auStack_150 [12];
  uint uStack_144;
  undefined1 auStack_140 [12];
  undefined4 uStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  int iStack_118;
  int iStack_114;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  int iStack_100;
  int iStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [160];
  undefined4 **appuStack_40 [4];
  int iStack_30;
  uint uStack_2c;
  undefined8 uStack_28;
  undefined4 *puStack_20;
  uint *puStack_1c;
  undefined4 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3af47;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_154 = param_2;
  puStack_18 = param_3;
  puStack_120 = param_2;
  iStack_118 = param_4;
  uStack_f4 = 0;
  puStack_20 = param_1;
  uStack_14 = uVar5;
  if (&DAT_00000006 < param_3) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0,uVar5);
    iStack_8 = 0;
    uStack_f4 = 1;
    goto LAB_008748c7;
  }
  puVar11 = param_1 + 0x60;
  puStack_11c = puVar11;
  iVar6 = func_0x00e7307f(puVar11);
  if (iVar6 != 0) {
    iVar6 = func_0x00e7304a(5);
LAB_008748ed:
    param_1[0x6b] = iVar6 + -1;
    func_0x00e7304a(6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = param_1[0x6b];
  if (iVar6 == 0x7fffffff) goto LAB_008748ed;
  iStack_8 = 1;
  uStack_28 = 0;
  iVar6 = func_0x008ab47d(0x20);
  *(int *)iVar6 = iVar6;
  *(int *)(iVar6 + 4) = iVar6;
  *(int *)(iVar6 + 8) = iVar6;
  *(undefined2 *)(iVar6 + 0xc) = 0x101;
  uStack_28 = CONCAT44(uStack_28._4_4_,iVar6);
  iStack_8 = CONCAT31(iStack_8._1_3_,3);
  uStack_108 = 0;
  puStack_20 = puStack_20 + (int)puStack_18 * 0xc;
  uVar8 = puStack_20[0xc];
  iStack_fc = puStack_20[0xd];
  lVar15 = FUN_0083f570();
  lVar15 = lVar15 - CONCAT44(iStack_fc,uVar8);
  puStack_1c = *(uint **)puStack_20[3];
  if (puStack_1c == (uint *)puStack_20[3]) {
LAB_00874860:
    iStack_fc = (int)((ulonglong)lVar15 >> 0x20);
    iStack_114 = (int)lVar15;
    *puStack_120 = 0;
    puStack_120[1] = 0;
    puStack_120[2] = 0;
    puStack_120[3] = 0;
    puStack_120[4] = 0;
    puStack_120[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0,uVar5);
    uStack_f4 = 1;
  }
  else {
    iStack_100 = uStack_108._4_4_;
    uStack_f8 = (uint)uStack_108;
    puVar7 = puStack_1c;
    do {
      iStack_fc = (int)((ulonglong)lVar15 >> 0x20);
      iStack_114 = (int)lVar15;
      puStack_1c = puVar7;
      func_0x00876f20((int)&uStack_108 + 4,puVar7 + 10,&puStack_1c);
      puVar11 = puStack_11c;
      lVar15 = CONCAT44(iStack_fc,iStack_114);
      bVar14 = CARRY4(uStack_f8,puVar7[10]);
      uStack_f8 = uStack_f8 + puVar7[10];
      puStack_1c = (uint *)*puVar7;
      iStack_100 = iStack_100 + puVar7[0xb] + (uint)bVar14;
      puVar7 = puStack_1c;
    } while (puStack_1c != (uint *)puStack_20[3]);
    if ((uStack_f8 == 0 && iStack_100 == 0) || (iStack_114 == 0 && iStack_fc == 0))
    goto LAB_00874860;
    memset(auStack_f0,0,0xb0);
    func_0x004687a0(1);
    iStack_8 = CONCAT31(iStack_8._1_3_,5);
    if (param_5 == '\0') {
      func_0x0046b6e0(auStack_e0,"Stats|");
      uVar8 = func_0x00482d80(puStack_18,&DAT_01141f68);
      func_0x0046b6e0(uVar8);
      uVar8 = func_0x00482d80(iStack_118,&DAT_01141f68);
      func_0x0046b6e0(uVar8);
      uVar16 = FUN_0083f570();
      uVar8 = func_0x00805e50(uVar16,&DAT_01141f68);
      func_0x0046b6e0(uVar8);
      uVar8 = func_0x0083cd60(uStack_f8,iStack_100,&DAT_01141f68);
      func_0x0046b6e0(uVar8);
      uVar8 = func_0x0083cd60(iStack_114,iStack_fc,&DAT_0113d23c);
    }
    else {
      uVar8 = func_0x0046b6e0(auStack_e0,"Function");
      uVar9 = func_0x00e73e96(auStack_110,0x2a,0);
      uVar8 = func_0x005a8ba0(uVar8,uVar9,"Calls");
      uVar8 = func_0x0046b6e0(uVar8);
      uVar9 = func_0x00e73e96(auStack_140,10,0);
      uVar8 = func_0x005a8ba0(uVar8,uVar9,"Time (ms)");
      uVar8 = func_0x0046b6e0(uVar8);
      uVar9 = func_0x00e73e96(auStack_150,10,0);
      uVar8 = func_0x005a8ba0(uVar8,uVar9,"Time (%)");
      uVar8 = func_0x0046b6e0(uVar8);
      uVar9 = func_0x00e73e96(auStack_164,10,0);
      uVar8 = func_0x005a8ba0(uVar8,uVar9,"Cpu (%)",&DAT_0113d23c);
      uVar8 = func_0x0046b6e0(uVar8);
    }
    func_0x0046b6e0(uVar8);
    puStack_20 = (undefined4 *)uStack_28;
    if ((undefined4 *)uStack_28 != (undefined4 *)*(undefined4 *)uStack_28) {
      iVar6 = 0;
      do {
        puVar4 = puStack_20;
        puVar11 = puStack_11c;
        if (iStack_118 < iVar6) break;
        puStack_18 = puStack_20;
        func_0x00876a50();
        if (param_5 == '\0') {
          iVar1 = puStack_18[6];
          puVar11 = (undefined4 *)(iVar1 + 8);
          if (0xf < *(uint *)(iVar1 + 0x1c)) {
            puVar11 = (undefined4 *)*puVar11;
          }
          uVar8 = func_0x0046cb10(auStack_e0,puVar11,*(undefined4 *)(iVar1 + 0x18));
          uVar8 = func_0x0046b6e0(uVar8,&DAT_01141f68);
          uStack_108 = CONCAT44(uVar8,(uint)uStack_108);
          puStack_18 = puVar4;
          func_0x00876a50();
          uVar8 = func_0x005b0d50(*(undefined4 *)(puStack_18[6] + 0x20),&DAT_01141f68);
          uVar8 = func_0x0046b6e0(uVar8);
          uStack_108 = CONCAT44(uVar8,(uint)uStack_108);
          puStack_18 = puVar4;
          func_0x00876a50();
          uVar8 = func_0x0083cd60(*(undefined4 *)(puStack_18[6] + 0x28),
                                  *(undefined4 *)(puStack_18[6] + 0x2c),&DAT_0113d23c);
          func_0x0046b6e0(uVar8);
        }
        else {
          func_0x00482f60(appuStack_40,0,0x2d);
          iStack_8._0_1_ = 6;
          pppuVar10 = appuStack_40;
          if (0xf < uStack_2c) {
            pppuVar10 = (undefined4 ***)appuStack_40[0];
          }
          puStack_18 = (undefined4 *)func_0x0046cb10(auStack_e0,pppuVar10,iStack_30);
          uVar8 = func_0x00e73e96(auStack_164,0x32 - iStack_30,0);
          puStack_1c = (uint *)func_0x005a8ba0(puStack_18,uVar8);
          puStack_18 = puVar4;
          func_0x00876a50();
          puStack_18 = (undefined4 *)func_0x005b0d50(*(undefined4 *)(puStack_18[6] + 0x20));
          uVar8 = func_0x00e73e96(auStack_174,10,0);
          uVar8 = func_0x005a8ba0(puStack_18,uVar8);
          uStack_108 = CONCAT44(uVar8,(uint)uStack_108);
          puStack_18 = puVar4;
          func_0x00876a50();
          uVar5 = *(uint *)(puStack_18[6] + 0x28);
          puStack_18 = *(undefined4 **)(puStack_18[6] + 0x2c);
          uStack_124 = (uint)((ulonglong)uVar5 * 0x1a9fbe77 >> 0x20);
          iStack_12c = (int)((ulonglong)uVar5 * 0x624dd2f >> 0x20);
          uStack_144 = (uint)((ulonglong)uVar5 * 0x624dd2f);
          uStack_128 = (undefined4)(ZEXT48(puStack_18) * 0x1a9fbe77 >> 0x20);
          lVar15 = ZEXT48(puStack_18) * 0x624dd2f;
          uStack_134 = (undefined4)((ulonglong)lVar15 >> 0x20);
          uStack_130 = (undefined4)lVar15;
          lVar3 = ZEXT48(puStack_18) * 0x1a9fbe77 + (ulonglong)uStack_124;
          uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar12 = iStack_12c + (uint)CARRY4(uStack_144,(uint)lVar3);
          lVar15 = lVar15 + (ulonglong)CONCAT14(CARRY4(uVar13,uVar12),uVar13 + uVar12);
          uVar12 = ((int)puStack_18 - (int)((ulonglong)lVar15 >> 0x20)) -
                   (uint)(uVar5 < (uint)lVar15);
          lVar15 = lVar15 + CONCAT44(uVar12 >> 1,uVar5 - (uint)lVar15 >> 1 | uVar12 * -0x80000000);
          puStack_1c = (uint *)lVar15;
          uVar5 = (uint)((ulonglong)lVar15 >> 0x20);
          uVar8 = func_0x0083cd60((uint)puStack_1c >> 9 | uVar5 * 0x800000,uVar5 >> 9);
          uStack_108._4_4_ = uVar8;
          uVar8 = func_0x00e73e96(auStack_184,10,0);
          uStack_134 = func_0x005a8ba0(uStack_108._4_4_,uVar8);
          puStack_18 = puVar4;
          func_0x00876a50();
          iVar1 = *(int *)(puStack_18[6] + 0x2c) * 100;
          uStack_108 = CONCAT44(iVar1,(uint)uStack_108);
          lVar15 = (ulonglong)*(uint *)(puStack_18[6] + 0x28) * 100;
          uVar16 = func_0x00e87db0((int)lVar15,iVar1 + (int)((ulonglong)lVar15 >> 0x20),uStack_f8,
                                   iStack_100);
          uVar8 = func_0x0083cd60(uVar16);
          uStack_108._4_4_ = uVar8;
          uVar8 = func_0x00e73e96(auStack_194,10,0);
          uVar8 = func_0x005a8ba0(uStack_108._4_4_,uVar8);
          uStack_108 = CONCAT44(uVar8,(uint)uStack_108);
          puStack_18 = puVar4;
          func_0x00876a50();
          lVar15 = (ulonglong)*(uint *)(puStack_18[6] + 0x28) * 100;
          uVar16 = func_0x00e87db0((int)lVar15,
                                   *(int *)(puStack_18[6] + 0x2c) * 100 +
                                   (int)((ulonglong)lVar15 >> 0x20),iStack_114,iStack_fc);
          uVar8 = func_0x0083cd60(uVar16,&DAT_0113d23c);
          func_0x0046b6e0(uVar8);
          iStack_8 = CONCAT31(iStack_8._1_3_,5);
          if (0xf < uStack_2c) {
            func_0x0046b1f0(appuStack_40,appuStack_40[0],uStack_2c);
          }
          iStack_30 = 0;
          uStack_2c = 0xf;
          appuStack_40[0] = (undefined4 **)((uint)appuStack_40[0] & 0xffffff00);
        }
        func_0x00876a50();
        puVar11 = puStack_11c;
        iVar6 = iVar6 + 1;
      } while (puStack_20 != (undefined4 *)*(undefined4 *)uStack_28);
    }
    iStack_8 = CONCAT31(iStack_8._1_3_,7);
    func_0x0046a470(puStack_120);
    uStack_f4 = 1;
    iStack_8 = 3;
    func_0x004673c0();
  }
  iStack_8._0_1_ = 1;
  func_0x00499750();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x00e730b2(puVar11);
LAB_008748c7:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00874900(int param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined8 uVar4;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f1f2ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (6 < param_2) {
LAB_00874984:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar3 = func_0x00e7307f(param_1 + 0x180,uVar2);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x1ac);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = 0;
      uVar4 = FUN_0083f570();
      *(int *)(param_2 * 0x30 + 0x30 + param_1) = (int)uVar4;
      *(int *)(param_2 * 0x30 + 0x34 + param_1) = (int)((ulonglong)uVar4 >> 0x20);
      func_0x00876900();
      uStack_8 = 0xffffffff;
      func_0x00e730b2(param_1 + 0x180);
      goto LAB_00874984;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x1ac) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_008749b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int iStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3af8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = func_0x00e7307f(param_1 + 0x60,uVar4);
  if (iVar5 == 0) {
    iVar5 = param_1[0x6b];
    if (iVar5 != 0x7fffffff) {
      uStack_8 = 0;
      puVar6 = param_1 + 6;
      iStack_18 = 7;
      do {
        puStack_14 = puVar6;
        if (puVar6[-2] != 0) {
          puVar1 = (undefined4 *)puVar6[-3];
          if ((uint)puVar6[-2] < (uint)puVar6[3] >> 3) {
            func_0x00876ac0(*puVar1,puVar1);
          }
          else {
            *(undefined4 *)puVar1[1] = 0;
            puVar1 = (undefined4 *)*puVar1;
            while (puVar1 != (undefined4 *)0x0) {
              puVar2 = (undefined4 *)*puVar1;
              puStack_14 = puVar6;
              func_0x00877890();
              func_0x008ab812(puVar1,0x48);
              puVar1 = puVar2;
              puVar6 = puStack_14;
            }
            *(undefined4 *)puVar6[-3] = puVar6[-3];
            *(undefined4 *)(puVar6[-3] + 4) = puVar6[-3];
            puVar6[-2] = 0;
            puStack_14 = (undefined4 *)puVar6[-3];
            func_0x0046c050(&puStack_14);
          }
        }
        puVar1 = (undefined4 *)puVar6[4];
        *(undefined4 *)puVar1[1] = 0;
        puVar1 = (undefined4 *)*puVar1;
        while (puVar1 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar1;
          func_0x008ab812(puVar1,0xc);
          puVar1 = puVar2;
        }
        *(undefined4 *)puVar6[4] = puVar6[4];
        *(undefined4 *)(puVar6[4] + 4) = puVar6[4];
        puVar6[5] = 0;
        puVar6 = puVar6 + 0xc;
        iStack_18 = iStack_18 + -1;
      } while (iStack_18 != 0);
      *param_1 = 0;
      param_1[1] = 0;
      uStack_8 = 0xffffffff;
      puStack_14 = puVar6;
      func_0x00e730b2(param_1 + 0x60);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  param_1[0x6b] = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __thiscall
FUN_00874b30(uint param_1,undefined4 *param_2,int *param_3,int param_4,uint param_5,char param_6)

{
  uint *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 ***pppuVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *unaff_FS_OFFSET;
  undefined8 uVar16;
  undefined1 auStack_154 [16];
  undefined1 auStack_144 [16];
  undefined4 *puStack_134;
  undefined1 auStack_130 [12];
  undefined4 uStack_124;
  undefined1 auStack_120 [12];
  uint uStack_114;
  undefined4 *puStack_110;
  int iStack_10c;
  undefined4 *puStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  uint uStack_f4;
  int iStack_f0;
  int *piStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [16];
  undefined1 auStack_cc [160];
  undefined4 **appuStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3b017;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_f0 = param_4;
  puStack_134 = param_2;
  piStack_ec = param_3;
  puStack_110 = param_2;
  uStack_e4 = param_5;
  uStack_e0 = 0;
  uStack_e8 = param_1;
  if (&DAT_00000006 < param_3) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    func_0x0046bc40(&DAT_0112e1b4,0,uStack_14);
    iStack_8 = 0;
    uStack_e0 = 1;
LAB_00875025:
    *unaff_FS_OFFSET = iStack_10;
    FUN_008ab370();
    return;
  }
  iVar15 = param_1 + 0x180;
  iStack_10c = iVar15;
  iVar5 = func_0x00e7307f(iVar15);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x1ac);
    if (iVar5 != 0x7fffffff) {
      iStack_8 = 1;
      memset(auStack_dc,0,0xb0);
      func_0x004687a0(1);
      iStack_8 = CONCAT31(iStack_8._1_3_,2);
      if (param_6 == '\0') {
        func_0x0046b6e0(auStack_cc,"Slow|");
        uVar6 = func_0x00482d80(param_3,&DAT_01141f68);
        func_0x0046b6e0(uVar6);
        uVar6 = func_0x00482d80(iStack_f0,&DAT_01141f68);
        func_0x0046b6e0(uVar6);
        uVar6 = func_0x005b0d50(uStack_e4,&DAT_01141f68);
        func_0x0046b6e0(uVar6);
        uVar16 = FUN_0083f570();
        uVar6 = func_0x00805e50(uVar16,&DAT_0113d23c);
      }
      else {
        uVar6 = func_0x0046b6e0(auStack_cc,"Function");
        uVar7 = func_0x00e73e96(auStack_130,0x2a,0);
        uVar6 = func_0x005a8ba0(uVar6,uVar7,"Time (ms)");
        uVar6 = func_0x0046b6e0(uVar6);
        uVar7 = func_0x00e73e96(auStack_120,0x14,0);
        uVar6 = func_0x005a8ba0(uVar6,uVar7,"Extra description",&DAT_0113d23c);
        uVar6 = func_0x0046b6e0(uVar6);
      }
      func_0x0046b6e0(uVar6);
      uVar12 = uStack_e4 * 1000;
      puStack_108 = (undefined4 *)((int)piStack_ec * 0x30 + uStack_e8 + 0x28);
      piVar8 = (int *)*puStack_108;
      uStack_f4 = uVar12;
      if (piVar8 != (int *)*piVar8) {
        iVar5 = 0;
        do {
          piVar8 = piVar8 + 1;
          puVar1 = *(uint **)(*piVar8 + 8);
          piStack_ec = piVar8;
          if ((puVar1[1] != 0) || (iVar14 = iVar5, uVar12 <= *puVar1)) {
            iVar14 = iVar5 + 1;
            iVar15 = iStack_10c;
            if (iStack_f0 < iVar5) break;
            if (param_6 == '\0') {
              puVar10 = puVar1 + 2;
              if (0xf < puVar1[7]) {
                puVar10 = (uint *)*puVar10;
              }
              uVar6 = func_0x0046cb10(auStack_cc,puVar10,puVar1[6]);
              func_0x0046b6e0(uVar6,&DAT_01141f68);
              uVar6 = func_0x0083cd60(**(undefined4 **)(*piVar8 + 8),
                                      (*(undefined4 **)(*piVar8 + 8))[1],&DAT_01141f68);
              uVar6 = func_0x0046b6e0(uVar6);
              iVar15 = *(int *)(*piVar8 + 8);
              puVar11 = (undefined4 *)(iVar15 + 0x20);
              if (0xf < *(uint *)(iVar15 + 0x34)) {
                puVar11 = (undefined4 *)*puVar11;
              }
              uVar6 = func_0x0046cb10(uVar6,puVar11,*(undefined4 *)(iVar15 + 0x30));
              func_0x0046b6e0(uVar6,&DAT_0113d23c);
              uVar12 = uStack_f4;
            }
            else {
              func_0x00482f60(appuStack_2c,0,0x2d);
              iStack_8._0_1_ = 3;
              pppuVar9 = appuStack_2c;
              if (0xf < uStack_18) {
                pppuVar9 = (undefined4 ***)appuStack_2c[0];
              }
              uVar6 = func_0x0046cb10(auStack_cc,pppuVar9,iStack_1c);
              uVar7 = func_0x00e73e96(auStack_144,0x32 - iStack_1c,0);
              uStack_104 = func_0x005a8ba0(uVar6,uVar7);
              uStack_e8 = (*(uint **)(*piStack_ec + 8))[1];
              uStack_e4 = **(uint **)(*piStack_ec + 8);
              iStack_fc = (int)((ulonglong)uStack_e4 * 0x624dd2f >> 0x20);
              uStack_114 = (uint)((ulonglong)uStack_e4 * 0x624dd2f);
              uStack_f8 = (undefined4)((ulonglong)uStack_e8 * 0x1a9fbe77 >> 0x20);
              lVar3 = (ulonglong)uStack_e8 * 0x624dd2f;
              uStack_124 = (undefined4)((ulonglong)lVar3 >> 0x20);
              uStack_100 = (undefined4)lVar3;
              lVar4 = (ulonglong)uStack_e8 * 0x1a9fbe77 +
                      ((ulonglong)uStack_e4 * 0x1a9fbe77 >> 0x20);
              uVar13 = (uint)((ulonglong)lVar4 >> 0x20);
              uVar12 = iStack_fc + (uint)CARRY4(uStack_114,(uint)lVar4);
              lVar3 = lVar3 + (ulonglong)CONCAT14(CARRY4(uVar13,uVar12),uVar13 + uVar12);
              uVar12 = (uStack_e8 - (int)((ulonglong)lVar3 >> 0x20)) -
                       (uint)(uStack_e4 < (uint)lVar3);
              lVar3 = lVar3 + CONCAT44(uVar12 >> 1,
                                       uStack_e4 - (uint)lVar3 >> 1 | uVar12 * -0x80000000);
              uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
              uVar6 = func_0x0083cd60((uint)lVar3 >> 9 | uVar12 * 0x800000,uVar12 >> 9);
              uVar7 = func_0x00e73e96(auStack_154,0x14,0);
              uVar6 = func_0x005a8ba0(uVar6,uVar7);
              piVar8 = piStack_ec;
              iVar15 = *(int *)(*piStack_ec + 8);
              puVar11 = (undefined4 *)(iVar15 + 0x20);
              if (0xf < *(uint *)(iVar15 + 0x34)) {
                puVar11 = (undefined4 *)*puVar11;
              }
              uVar6 = func_0x0046cb10(uVar6,puVar11,*(undefined4 *)(iVar15 + 0x30));
              func_0x0046b6e0(uVar6,&DAT_0113d23c);
              iStack_8 = CONCAT31(iStack_8._1_3_,2);
              if (0xf < uStack_18) {
                func_0x0046b1f0(appuStack_2c,appuStack_2c[0],uStack_18);
              }
              iStack_1c = 0;
              uStack_18 = 0xf;
              appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
              uVar12 = uStack_f4;
            }
          }
          piVar8 = (int *)*piVar8;
          iVar5 = iVar14;
          iVar15 = iStack_10c;
        } while (piVar8 != *(int **)*puStack_108);
      }
      iStack_8 = CONCAT31(iStack_8._1_3_,4);
      func_0x0046a470(puStack_110);
      uStack_e0 = 1;
      iStack_8._0_1_ = 1;
      iStack_8._1_3_ = 0;
      func_0x004673c0();
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x00e730b2(iVar15);
      goto LAB_00875025;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x1ac) = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void __thiscall FUN_00875060(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec45ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (6 < param_2) {
LAB_00875142:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  iVar5 = func_0x00e7307f(param_1 + 0x180,uVar4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x1ac);
    if (iVar5 != 0x7fffffff) {
      uStack_8 = 0;
      iVar5 = param_1 + param_2 * 0x30;
      puVar1 = *(undefined4 **)(iVar5 + 0x28);
      for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        if (puVar2[2] != 0) {
          func_0x00874080(puVar2[2]);
        }
      }
      puVar1 = *(undefined4 **)(iVar5 + 0x28);
      *(undefined4 *)puVar1[1] = 0;
      puVar1 = (undefined4 *)*puVar1;
      while (puVar1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)*puVar1;
        func_0x008ab812(puVar1,0xc);
        puVar1 = puVar2;
      }
      *(undefined4 *)*(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
      *(int *)(*(int *)(iVar5 + 0x28) + 4) = *(int *)(iVar5 + 0x28);
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      uStack_8 = 0xffffffff;
      func_0x00e730b2(param_1 + 0x180);
      goto LAB_00875142;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x1ac) = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __thiscall FUN_00875740(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int iVar12;
  undefined *puVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  undefined4 *puVar16;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined4 uStack_170;
  uint auStack_16c [4];
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *piStack_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  uint uStack_128;
  uint auStack_124 [3];
  undefined4 uStack_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 *puStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [160];
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3b399;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_170 = param_2;
  uStack_104 = 0;
  uStack_134 = param_2;
  puStack_18 = (undefined4 *)0x0;
  piVar6 = (int *)**(int **)((int)param_1 + 0x158);
  cVar4 = *(char *)((int)piVar6 + 0xd);
  while (cVar4 == '\0') {
    *(undefined1 *)(piVar6[4] + 0x218) = 0;
    piVar8 = (int *)piVar6[2];
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar4 = *(char *)(*piVar8 + 0xd);
      piVar6 = piVar8;
      piVar8 = (int *)*piVar8;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*piVar8 + 0xd);
        piVar6 = piVar8;
        piVar8 = (int *)*piVar8;
      }
    }
    else {
      cVar4 = *(char *)(piVar6[1] + 0xd);
      piVar3 = (int *)piVar6[1];
      piVar8 = piVar6;
      while ((piVar6 = piVar3, cVar4 == '\0' && (piVar8 == (int *)piVar6[2]))) {
        cVar4 = *(char *)(piVar6[1] + 0xd);
        piVar3 = (int *)piVar6[1];
        piVar8 = piVar6;
      }
    }
    cVar4 = *(char *)((int)piVar6 + 0xd);
  }
  puStack_1c = param_1;
  uStack_14 = uVar5;
  FUN_00472ad0(auStack_50);
  iStack_8 = 1;
  uStack_48 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  iStack_44 = func_0x008ab47d(0x1c,uVar5);
  *(int *)iStack_44 = iStack_44;
  *(int *)(iStack_44 + 4) = iStack_44;
  iStack_8 = 2;
  func_0x00875270();
  uStack_34 = 0;
  iVar7 = func_0x008ab47d(0x30);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  uStack_34 = CONCAT44(uStack_34._4_4_,iVar7);
  iStack_8._0_1_ = 4;
  uStack_3c = 0;
  func_0x00876590();
  iStack_8._0_1_ = 5;
  piVar6 = (int *)**(int **)((int)param_1 + 0x158);
  cVar4 = *(char *)((int)piVar6 + 0xd);
  while (cVar4 == '\0') {
    if (*(char *)(piVar6[4] + 0x218) == '\0') {
      puStack_18 = (undefined4 *)((int)puStack_18 + 1);
      uStack_14c = 0;
      uStack_148 = 0;
      iStack_8._0_1_ = 6;
      func_0x00469da0(piVar6[4] + 0x28);
      uStack_104 = 0x80;
      piVar8 = (int *)func_0x00877030(auStack_178,auStack_16c,&uStack_14c);
      iVar7 = *piVar8;
      uStack_104 = 0;
      iStack_8._0_1_ = 5;
      if (0xf < uStack_158) {
        func_0x0046b1f0(auStack_16c,auStack_16c[0],uStack_158);
      }
      uStack_15c = 0;
      uStack_158 = 0xf;
      auStack_16c[0] = auStack_16c[0] & 0xffffff00;
      *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
      piStack_108 = (int *)(piVar6[4] + 4);
      iStack_8._0_1_ = 7;
      uVar2 = (undefined1)iStack_8;
      iStack_8._0_1_ = 7;
      iStack_13c = 0;
      iStack_138 = 0;
      if ((*(int *)(piVar6[4] + 8) == 0) ||
         (cVar4 = func_0x00463f80(), uVar2 = (undefined1)iStack_8, cVar4 == '\0'))
      goto LAB_0087645b;
      iStack_13c = *piStack_108;
      iStack_138 = piStack_108[1];
      if (iStack_138 == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iStack_138 + 4);
      }
      uStack_104 = 0;
      *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + -1 + iVar12;
      iStack_8._0_1_ = 5;
      if (iStack_138 != 0) {
        func_0x00463fb0();
      }
    }
    uStack_154 = 0;
    uStack_150 = 0;
    iStack_8._0_1_ = 8;
    func_0x00469da0(piVar6[4] + 0x28);
    uStack_104 = 0x10;
    piVar8 = (int *)func_0x00877030(auStack_180,auStack_124,&uStack_154);
    iVar7 = *piVar8;
    uStack_104 = 0;
    iStack_8._0_1_ = 5;
    iStack_130 = iVar7;
    if (0xf < uStack_110) {
      func_0x0046b1f0(auStack_124,auStack_124[0],uStack_110);
    }
    uStack_114 = 0;
    uStack_110 = 0xf;
    auStack_124[0] = auStack_124[0] & 0xffffff00;
    *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
    iVar7 = piVar6[4];
    puStack_10c = (undefined4 *)(iVar7 + 4);
    iStack_8._0_1_ = 9;
    iStack_12c = *(int *)(iVar7 + 8);
    uStack_144 = 0;
    piStack_140 = (int *)0x0;
    uVar2 = (undefined1)iStack_8;
    if (iStack_12c == 0) {
LAB_0087645b:
      iStack_8._0_1_ = uVar2;
      func_0x00463ee0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    piStack_108 = *(int **)(iStack_12c + 4);
    do {
      if (piStack_108 == (int *)0x0) goto LAB_0087645b;
      LOCK();
      piVar8 = *(int **)(iStack_12c + 4);
      if (piStack_108 == piVar8) {
        *(int *)(iStack_12c + 4) = (int)piStack_108 + 1;
        piVar8 = piStack_108;
      }
      UNLOCK();
      bVar15 = piVar8 != piStack_108;
      piStack_108 = piVar8;
    } while (bVar15);
    uStack_144 = *puStack_10c;
    piStack_140 = *(int **)(iVar7 + 8);
    if (piStack_140 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = piStack_140[1];
    }
    uStack_104 = 0;
    *(int *)(iStack_130 + 0x2c) = *(int *)(iStack_130 + 0x2c) + -1 + iVar7;
    iStack_8._0_1_ = 5;
    piStack_108 = piStack_140;
    if (piStack_140 != (int *)0x0) {
      LOCK();
      iVar7 = piStack_140[1] + -1;
      piStack_140[1] = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar1 = *(code **)*piStack_140;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar7 = piStack_108[2] + -1;
        piStack_108[2] = iVar7;
        UNLOCK();
        if (iVar7 == 0) {
          pcVar1 = *(code **)(*piStack_108 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    piVar8 = (int *)piVar6[2];
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar4 = *(char *)(*piVar8 + 0xd);
      piVar6 = piVar8;
      piVar8 = (int *)*piVar8;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*piVar8 + 0xd);
        piVar6 = piVar8;
        piVar8 = (int *)*piVar8;
      }
    }
    else {
      cVar4 = *(char *)(piVar6[1] + 0xd);
      piVar3 = (int *)piVar6[1];
      piVar8 = piVar6;
      while ((piVar6 = piVar3, cVar4 == '\0' && (piVar8 == (int *)piVar6[2]))) {
        cVar4 = *(char *)(piVar6[1] + 0xd);
        piVar3 = (int *)piVar6[1];
        piVar8 = piVar6;
      }
    }
    param_1 = puStack_1c;
    cVar4 = *(char *)((int)piVar6 + 0xd);
  }
  memset(auStack_100,0,0xb0);
  func_0x004687a0(1);
  iStack_8 = CONCAT31(iStack_8._1_3_,10);
  if ((char)param_4 == '\0') {
    uVar9 = func_0x00482d80(*(int *)((int)param_1 + 0x160) - *(int *)((int)param_1 + 0x164),
                            &DAT_01141f68);
    func_0x0046b6e0(uVar9);
    puVar16 = &DAT_01141f68;
    uVar9 = func_0x00482d80(*(undefined4 *)((int)param_1 + 0x164),&DAT_01141f68);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)param_1 + 0x160);
    puVar13 = &DAT_0113d23c;
    puVar14 = &DAT_01141f68;
  }
  else {
    func_0x0046b6e0(auStack_f0,"Widgets: ");
    uVar9 = func_0x00482d80(*(int *)((int)param_1 + 0x160) - *(int *)((int)param_1 + 0x164),
                            &DAT_0112e454);
    func_0x0046b6e0(uVar9);
    puVar16 = (undefined4 *)&DAT_0113c2ec;
    uVar9 = func_0x00482d80(*(undefined4 *)((int)param_1 + 0x164),&DAT_0113c2ec);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)param_1 + 0x160);
    puVar13 = &DAT_011a2310;
    puVar14 = (undefined4 *)&DAT_0113c2ec;
  }
  uVar9 = func_0x00482d80(uVar9,puVar16);
  func_0x0046b6e0(uVar9,puVar14);
  uVar9 = func_0x00482d80(puStack_18);
  func_0x0046b6e0(uVar9,puVar13);
  puVar14 = puStack_1c;
  piVar6 = (int *)((int)puStack_1c + 0x168);
  if ((char)param_4 == '\0') {
    puVar16 = &DAT_01141f68;
    uVar9 = func_0x00482d80(*piVar6 - *(int *)((int)puStack_1c + 0x16c),&DAT_01141f68);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)puVar14 + 0x16c);
    puVar13 = &DAT_0113d23c;
    puStack_18 = &DAT_01141f68;
  }
  else {
    func_0x0046b6e0(auStack_f0,"Textures: ");
    puVar16 = (undefined4 *)&DAT_0112e454;
    uVar9 = func_0x00482d80(*piVar6 - *(int *)((int)puVar14 + 0x16c),&DAT_0112e454);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)puVar14 + 0x16c);
    puVar13 = &DAT_011a2310;
    puStack_18 = (undefined4 *)&DAT_0113c2ec;
  }
  uVar9 = func_0x00482d80(uVar9,puVar16);
  func_0x0046b6e0(uVar9,puStack_18);
  uVar9 = func_0x00482d80(*piVar6);
  func_0x0046b6e0(uVar9,puVar13);
  puVar14 = puStack_1c;
  piVar6 = (int *)((int)puStack_1c + 0x178);
  if ((char)param_4 == '\0') {
    puVar16 = &DAT_01141f68;
    uVar9 = func_0x00482d80(*piVar6 - *(int *)((int)puStack_1c + 0x17c),&DAT_01141f68);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)puVar14 + 0x17c);
    puVar13 = &DAT_0113d23c;
    puStack_18 = &DAT_01141f68;
  }
  else {
    func_0x0046b6e0(auStack_f0,"Creatures: ");
    puVar16 = (undefined4 *)&DAT_0112e454;
    uVar9 = func_0x00482d80(*piVar6 - *(int *)((int)puVar14 + 0x17c),&DAT_0112e454);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)puVar14 + 0x17c);
    puVar13 = &DAT_011a2310;
    puStack_18 = (undefined4 *)&DAT_0113c2ec;
  }
  uVar9 = func_0x00482d80(uVar9,puVar16);
  func_0x0046b6e0(uVar9,puStack_18);
  uVar9 = func_0x00482d80(*piVar6);
  func_0x0046b6e0(uVar9,puVar13);
  puVar14 = puStack_1c;
  piVar6 = (int *)((int)puStack_1c + 0x170);
  if ((char)param_4 == '\0') {
    puVar16 = &DAT_01141f68;
    uVar9 = func_0x00482d80(*piVar6 - *(int *)((int)puStack_1c + 0x174),&DAT_01141f68);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)puVar14 + 0x174);
    puVar13 = &DAT_0113d23c;
    puStack_18 = &DAT_01141f68;
  }
  else {
    func_0x0046b6e0(auStack_f0,"Things: ");
    puVar16 = (undefined4 *)&DAT_0112e454;
    uVar9 = func_0x00482d80(*piVar6 - *(int *)((int)puVar14 + 0x174),&DAT_0112e454);
    func_0x0046b6e0(uVar9);
    uVar9 = *(undefined4 *)((int)puVar14 + 0x174);
    puVar13 = &DAT_011a2310;
    puStack_18 = (undefined4 *)&DAT_0113c2ec;
  }
  uVar9 = func_0x00482d80(uVar9,puVar16);
  func_0x0046b6e0(uVar9,puStack_18);
  uVar9 = func_0x00482d80(*piVar6);
  func_0x0046b6e0(uVar9,puVar13);
  uVar9 = func_0x0046b6e0(auStack_f0,"Active widgets (Widget|Childerns)",&DAT_0113d23c);
  func_0x0046b6e0(uVar9);
  func_0x008755c0(0,param_3,param_4);
  puVar10 = auStack_f0;
  if ((char)param_4 == '\0') {
    puVar13 = &DAT_0113d23c;
    pcVar11 = "AllWidgets|Source|Widgets|UseCount";
  }
  else {
    puVar13 = &DAT_0114074c;
    puVar10 = (undefined1 *)func_0x0046b6e0(puVar10,&DAT_0114074c);
    pcVar11 = "All Widgets (Source|Widgets|UseCount)";
  }
  uVar9 = func_0x0046b6e0(puVar10,pcVar11);
  func_0x0046b6e0(uVar9,puVar13);
  uStack_2c = 0;
  iVar7 = func_0x008ab47d(0x30);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  uStack_2c = CONCAT44(uStack_2c._4_4_,iVar7);
  iStack_8._0_1_ = 0xc;
  piVar6 = (int *)*(int *)uStack_3c;
  cVar4 = *(char *)((int)piVar6 + 0xd);
  while (cVar4 == '\0') {
    if (0x14 < piVar6[10]) {
      iStack_8._0_1_ = 0xd;
      func_0x00469da0(piVar6 + 4);
      uStack_110 = piVar6[0xb];
      iStack_8._0_1_ = 0xd;
      uStack_104 = 8;
      func_0x00877060(&puStack_10c,piVar6 + 10,&uStack_128);
      uStack_104 = 0;
      iStack_8._0_1_ = 0xc;
      if (0xf < uStack_114) {
        func_0x0046b1f0(&uStack_128,uStack_128,uStack_114);
      }
      uStack_118 = 0;
      uStack_114 = 0xf;
      uStack_128 = uStack_128 & 0xffffff00;
    }
    piVar8 = (int *)piVar6[2];
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar4 = *(char *)(*piVar8 + 0xd);
      piVar6 = piVar8;
      piVar8 = (int *)*piVar8;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*piVar8 + 0xd);
        piVar6 = piVar8;
        piVar8 = (int *)*piVar8;
      }
    }
    else {
      cVar4 = *(char *)(piVar6[1] + 0xd);
      piVar3 = (int *)piVar6[1];
      piVar8 = piVar6;
      while ((piVar6 = piVar3, cVar4 == '\0' && (piVar8 == (int *)piVar6[2]))) {
        cVar4 = *(char *)(piVar6[1] + 0xd);
        piVar3 = (int *)piVar6[1];
        piVar8 = piVar6;
      }
    }
    cVar4 = *(char *)((int)piVar6 + 0xd);
  }
  piStack_108 = (int *)0x0;
  puStack_1c = (undefined4 *)uStack_2c;
  if ((undefined4 *)uStack_2c != (undefined4 *)*(undefined4 *)uStack_2c) {
    do {
      puVar16 = puStack_1c;
      puStack_18 = puStack_1c;
      func_0x00876a50();
      puVar14 = puStack_18 + 5;
      if (0xf < (uint)puStack_18[10]) {
        puVar14 = (undefined4 *)*puVar14;
      }
      uVar9 = func_0x0046cb10(auStack_f0,puVar14,puStack_18[9]);
      func_0x0046b6e0(uVar9,&DAT_01141f68);
      puStack_18 = puVar16;
      func_0x00876a50();
      uVar9 = func_0x00482d80(puStack_18[4],&DAT_01141f68);
      func_0x0046b6e0(uVar9);
      puStack_18 = puVar16;
      func_0x00876a50();
      uVar9 = func_0x00482d80(puStack_18[0xb],&DAT_0113d23c);
      func_0x0046b6e0(uVar9);
      piStack_108 = (int *)((int)piStack_108 + 1);
      if (param_3 <= (int)piStack_108) break;
      func_0x00876a50();
    } while (puStack_1c != (undefined4 *)*(undefined4 *)uStack_2c);
  }
  puVar10 = auStack_f0;
  if ((char)param_4 == '\0') {
    puVar13 = &DAT_0113d23c;
    pcVar11 = "UnusedWidgets|Source|Widgets|UseCount";
  }
  else {
    puVar13 = &DAT_0114074c;
    puVar10 = (undefined1 *)func_0x0046b6e0(puVar10,&DAT_0114074c);
    pcVar11 = "Unused Widgets (Source|Widgets|UseCount)";
  }
  uVar9 = func_0x0046b6e0(puVar10,pcVar11);
  func_0x0046b6e0(uVar9,puVar13);
  uStack_24 = 0;
  iVar7 = func_0x008ab47d(0x30);
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar7;
  *(int *)(iVar7 + 8) = iVar7;
  *(undefined2 *)(iVar7 + 0xc) = 0x101;
  uStack_24 = CONCAT44(uStack_24._4_4_,iVar7);
  iStack_8._0_1_ = 0x11;
  piVar6 = (int *)*(int *)uStack_34;
  cVar4 = *(char *)((int)piVar6 + 0xd);
  while (cVar4 == '\0') {
    iStack_8._0_1_ = 0x12;
    func_0x00469da0(piVar6 + 4);
    uStack_110 = piVar6[0xb];
    iStack_8._0_1_ = 0x12;
    uStack_104 = 4;
    func_0x00877060(&puStack_10c,piVar6 + 10,&uStack_128);
    uStack_104 = 0;
    iStack_8._0_1_ = 0x11;
    if (0xf < uStack_114) {
      func_0x0046b1f0(&uStack_128,uStack_128,uStack_114);
    }
    piVar8 = (int *)piVar6[2];
    uStack_118 = 0;
    uStack_114 = 0xf;
    uStack_128 = uStack_128 & 0xffffff00;
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar4 = *(char *)(*piVar8 + 0xd);
      piVar6 = piVar8;
      piVar8 = (int *)*piVar8;
      while (cVar4 == '\0') {
        cVar4 = *(char *)(*piVar8 + 0xd);
        piVar6 = piVar8;
        piVar8 = (int *)*piVar8;
      }
    }
    else {
      cVar4 = *(char *)(piVar6[1] + 0xd);
      piVar3 = (int *)piVar6[1];
      piVar8 = piVar6;
      while ((piVar6 = piVar3, cVar4 == '\0' && (piVar8 == (int *)piVar6[2]))) {
        cVar4 = *(char *)(piVar6[1] + 0xd);
        piVar3 = (int *)piVar6[1];
        piVar8 = piVar6;
      }
    }
    cVar4 = *(char *)((int)piVar6 + 0xd);
  }
  piStack_108 = (int *)0x0;
  puStack_1c = (undefined4 *)uStack_24;
  if ((undefined4 *)uStack_24 != (undefined4 *)*(undefined4 *)uStack_24) {
    do {
      puVar16 = puStack_1c;
      puStack_18 = puStack_1c;
      func_0x00876a50();
      puVar14 = puStack_18 + 5;
      if (0xf < (uint)puStack_18[10]) {
        puVar14 = (undefined4 *)*puVar14;
      }
      uVar9 = func_0x0046cb10(auStack_f0,puVar14,puStack_18[9]);
      func_0x0046b6e0(uVar9,&DAT_01141f68);
      puStack_18 = puVar16;
      func_0x00876a50();
      uVar9 = func_0x00482d80(puStack_18[4],&DAT_01141f68);
      func_0x0046b6e0(uVar9);
      puStack_18 = puVar16;
      func_0x00876a50();
      uVar9 = func_0x00482d80(puStack_18[0xb],&DAT_0113d23c);
      func_0x0046b6e0(uVar9);
      piStack_108 = (int *)((int)piStack_108 + 1);
      if (param_3 <= (int)piStack_108) break;
      func_0x00876a50();
    } while (puStack_1c != (undefined4 *)*(undefined4 *)uStack_24);
  }
  iStack_8 = CONCAT31(iStack_8._1_3_,0x15);
  func_0x0046a470(uStack_134);
  uStack_104 = 1;
  iStack_8._0_1_ = 0xc;
  iStack_8._1_3_ = 0;
  func_0x00877720(&uStack_24,*(undefined4 *)((int)(undefined4 *)uStack_24 + 4));
  func_0x008ab812((undefined4 *)uStack_24,0x30);
  iStack_8._0_1_ = 10;
  func_0x00877720(&uStack_2c,*(undefined4 *)((int)(undefined4 *)uStack_2c + 4));
  func_0x008ab812((undefined4 *)uStack_2c,0x30);
  iStack_8._0_1_ = 5;
  func_0x004673c0();
  iStack_8._0_1_ = 4;
  func_0x008777e0(&uStack_3c,*(undefined4 *)((int)(int *)uStack_3c + 4));
  func_0x008ab812((int *)uStack_3c,0x30);
  iStack_8._0_1_ = 2;
  func_0x008777e0(&uStack_34,*(undefined4 *)((int)(int *)uStack_34 + 4));
  func_0x008ab812((int *)uStack_34,0x30);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x00875530();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __cdecl _vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x477a90  67  _vfprintf_l
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,_Locale,_ArgList);
  iVar2 = __stdio_common_vfprintf(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl fprintf(FILE *_File,char *_Format,...)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x477ac0  132  fprintf
  puVar1 = (undefined4 *)func_0x00462fc0(_File,_Format,0,&stack0x0000000c);
  iVar2 = __stdio_common_vfprintf(*puVar1,puVar1[1]);
  return iVar2;
}



int __cdecl
_vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
              va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x477af0  98  _vsnprintf_s_l
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,_ArgList);
  iVar2 = __stdio_common_vsnprintf_s(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __cdecl
_vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  undefined4 *puVar1;
  int iVar2;
  
                    // 0x477b30  97  _vsnprintf_s
  puVar1 = (undefined4 *)func_0x00462fc0(_DstBuf,_SizeInBytes,_MaxCount,_Format,0,_ArgList);
  iVar2 = __stdio_common_vsnprintf_s(*puVar1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



void _vsscanf_s_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
                    // 0x477b70  110  _vsscanf_s_l
  puVar1 = (uint *)func_0x00877a80(param_1,0xffffffff,param_2,param_3,param_4);
  __stdio_common_vsscanf(*puVar1 | 1,puVar1[1]);
  return;
}



void vsscanf_s(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  
                    // 0x477ba0  170  vsscanf_s
  puVar1 = (uint *)func_0x00877a80(param_1,0xffffffff,param_2,0,param_3);
  __stdio_common_vsscanf(*puVar1 | 1,puVar1[1]);
  return;
}



int __cdecl sscanf_s(char *_Src,char *_Format,...)

{
  uint *puVar1;
  int iVar2;
  
                    // 0x477bd0  148  sscanf_s
  puVar1 = (uint *)func_0x00877a80(_Src,0xffffffff,_Format,0,&stack0x0000000c);
  iVar2 = __stdio_common_vsscanf(*puVar1 | 1,puVar1[1]);
  return iVar2;
}



undefined4 * __thiscall FUN_00877c10(undefined4 *param_1,byte param_2)

{
  *param_1 = TiXmlBase::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



void FUN_00877d40(undefined4 param_1)

{
  func_0x00879860(param_1);
  return;
}



undefined4 __thiscall FUN_00877d60(undefined4 param_1,byte param_2)

{
  func_0x00877d90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x4c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00877ea0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b82d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = TiXmlComment::vftable;
  uStack_8 = 0xffffffff;
  func_0x008789c0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00877fc0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b82d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = TiXmlText::vftable;
  uStack_8 = 0xffffffff;
  func_0x008789c0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_008780d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x48);
  _guard_check_icall(param_2,param_3,0);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00878100(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f3b92e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = TiXmlDeclaration::vftable;
  iStack_8 = 2;
  puVar1 = param_1 + 0x1c;
  if (0xf < (uint)param_1[0x21]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x21],uVar2);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._0_1_ = 1;
  puVar1 = param_1 + 0x16;
  if (0xf < (uint)param_1[0x1b]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x1b],uVar2);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  puVar1 = param_1 + 0x10;
  if (0xf < (uint)param_1[0x15]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x15],uVar2);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  func_0x008789c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x88);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00878250(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3b82d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = TiXmlUnknown::vftable;
  uStack_8 = 0xffffffff;
  func_0x008789c0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00878990(undefined4 param_1,byte param_2)

{
  func_0x008789c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00878c80(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f3ba30;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = TiXmlElement::vftable;
  uStack_8 = 1;
  func_0x00878d10(uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00877d90();
  uStack_8 = 0xffffffff;
  func_0x008789c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x8c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00878f00(int param_1,FILE *param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_3;
  if (0 < param_3) {
    do {
      fprintf(param_2,"    ");
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = param_1 + 0x20;
  if (0xf < *(uint *)(param_1 + 0x34)) {
    iVar3 = *(int *)(param_1 + 0x20);
  }
  fprintf(param_2,"<%s",iVar3);
  piVar4 = *(int **)(param_1 + 0x88);
  if (piVar4 != (int *)(param_1 + 0x40)) {
    do {
      if (piVar4 == (int *)0x0) break;
      fprintf(param_2," ");
      pcVar1 = *(code **)(*piVar4 + 4);
      _guard_check_icall(param_2,param_3);
      (*pcVar1)();
      piVar4 = (int *)piVar4[0x12];
    } while ((piVar4[0xf] != 0) || (piVar4[9] != 0));
  }
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 == (int *)0x0) {
    fprintf(param_2," />");
    return;
  }
  if (piVar4 == *(int **)(param_1 + 0x1c)) {
    pcVar1 = *(code **)(*piVar4 + 0x2c);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      fprintf(param_2,">");
      pcVar1 = *(code **)(**(int **)(param_1 + 0x18) + 4);
      _guard_check_icall(param_2,param_3 + 1);
      (*pcVar1)();
      goto LAB_00879087;
    }
  }
  fprintf(param_2,">");
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != (int *)0x0) {
    do {
      pcVar1 = *(code **)(*piVar4 + 0x2c);
      _guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        fprintf(param_2,"\n");
      }
      pcVar1 = *(code **)(*piVar4 + 4);
      _guard_check_icall(param_2,param_3 + 1);
      (*pcVar1)();
      piVar4 = (int *)piVar4[0xf];
    } while (piVar4 != (int *)0x0);
  }
  fprintf(param_2,"\n");
  if (0 < param_3) {
    do {
      fprintf(param_2,"    ");
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
LAB_00879087:
  puVar2 = (undefined4 *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  fprintf(param_2,"</%s>",puVar2);
  return;
}



void __thiscall FUN_00879300(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x88);
  pcVar1 = *(code **)(*param_2 + 4);
  if (iVar4 == param_1 + 0x40) {
    iVar4 = 0;
  }
  _guard_check_icall(param_1,iVar4);
  cVar3 = (*pcVar1)();
  if (cVar3 != '\0') {
    for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xf]) {
      pcVar1 = *(code **)(*piVar2 + 0x40);
      _guard_check_icall(param_2);
      cVar3 = (*pcVar1)();
      if (cVar3 == '\0') break;
    }
  }
  pcVar1 = *(code **)(*param_2 + 0xc);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00879380(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *_Dst;
  undefined4 ***pppuVar3;
  char *pcVar4;
  char *pcVar5;
  int extraout_EDX;
  int *unaff_FS_OFFSET;
  undefined4 **ppuStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 *puStack_1c;
  char *pcStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3bb2b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  _Dst = (undefined4 *)func_0x008ab47d(0x8c,uVar2);
  uStack_8 = 0;
  puStack_1c = _Dst;
  memset(_Dst,0,0x8c);
  pcVar5 = (char *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    pcVar5 = *(char **)pcVar5;
  }
  uStack_24 = 0;
  uStack_20 = 0;
  ppuStack_34 = (undefined4 ***)0x0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  pcStack_18 = pcVar5 + 1;
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar5,(int)pcVar4 - (int)pcStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uStack_14 = 1;
  func_0x008788e0(1);
  uStack_8 = 2;
  pcStack_18 = (char *)(_Dst + 0x10);
  *_Dst = TiXmlElement::vftable;
  func_0x00877c80();
  *(int *)(extraout_EDX + 0x48) = extraout_EDX;
  *(int *)(extraout_EDX + 0x44) = extraout_EDX;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),4);
  _Dst[7] = 0;
  _Dst[6] = 0;
  if ((undefined4 ***)(_Dst + 8) != &ppuStack_34) {
    pppuVar3 = &ppuStack_34;
    if (0xf < uStack_20) {
      pppuVar3 = (undefined4 ***)ppuStack_34;
    }
    func_0x0046a660(pppuVar3,uStack_24);
  }
  uStack_8 = 0xffffffff;
  uStack_14 = 0;
  if (0xf < uStack_20) {
    func_0x0046b1f0(&ppuStack_34,ppuStack_34,uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  ppuStack_34 = (undefined4 **)((uint)ppuStack_34 & 0xffffff00);
  func_0x008790b0(_Dst);
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



int FUN_00879710(void)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3bba4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (void *)func_0x008ab47d(0x70,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,0x70);
  iVar2 = func_0x008794e0();
  uStack_8 = 0xffffffff;
  if (iVar2 == 0) {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  func_0x00879660(iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return iVar2;
}



void __thiscall FUN_008797a0(int param_1,FILE *param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  
  for (piVar1 = *(int **)(param_1 + 0x18); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xf]) {
    pcVar2 = *(code **)(*piVar1 + 4);
    _guard_check_icall(param_2,param_3);
    (*pcVar2)();
    fprintf(param_2,"\n");
  }
  return;
}



void __thiscall FUN_008797f0(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  
  pcVar1 = *(code **)(*param_2 + 8);
  _guard_check_icall(param_1);
  cVar3 = (*pcVar1)();
  if (cVar3 != '\0') {
    for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xf]) {
      pcVar1 = *(code **)(*piVar2 + 0x40);
      _guard_check_icall(param_2);
      cVar3 = (*pcVar1)();
      if (cVar3 == '\0') break;
    }
  }
  pcVar1 = *(code **)(*param_2 + 0x10);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00879a30(int param_1,FILE *param_2,int param_3)

{
  int *piVar1;
  
  if (0 < param_3) {
    do {
      fprintf(param_2,"    ");
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    piVar1 = (int *)*piVar1;
  }
  fprintf(param_2,"<!--%s-->",piVar1);
  return;
}



void __thiscall FUN_00879a80(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x18);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00879aa0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *_Dst;
  char *pcVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3bc2c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x40,uVar3);
  uStack_8 = 0;
  memset(_Dst,0,0x40);
  func_0x008788e0(2);
  *_Dst = TiXmlComment::vftable;
  uStack_8 = 0xffffffff;
  pcVar5 = (char *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    pcVar5 = *(char **)pcVar5;
  }
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046a660(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  _Dst[3] = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  _Dst[1] = *(undefined4 *)(param_1 + 4);
  _Dst[2] = uVar2;
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



void __thiscall FUN_00879b50(int param_1,FILE *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 ****ppppuVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined4 ***pppuStack_2c;
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
  puStack_c = &DAT_00ebf81d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_1 + 0x40) == '\0') {
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0xf;
    pppuStack_2c = (undefined4 ****)0x0;
    uStack_8 = 0;
    func_0x008782b0(uStack_14);
    ppppuVar2 = &pppuStack_2c;
    if (0xf < uStack_18) {
      ppppuVar2 = (undefined4 ****)pppuStack_2c;
    }
    fprintf(param_2,"%s",ppppuVar2);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_18) {
      uVar3 = uStack_18 + 1;
      ppppuVar2 = (undefined4 ****)pppuStack_2c;
      if (0xfff < uVar3) {
        ppppuVar2 = (undefined4 ****)pppuStack_2c[-1];
        uVar3 = uStack_18 + 0x24;
        if (0x1f < (uint)((int)pppuStack_2c + (-4 - (int)ppppuVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      func_0x008ab812(ppppuVar2,uVar3);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
  }
  else {
    fprintf(param_2,"\n");
    if (0 < param_3) {
      do {
        fprintf(param_2,"    ");
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    puVar1 = (undefined4 *)(param_1 + 0x20);
    if (0xf < *(uint *)(param_1 + 0x34)) {
      puVar1 = (undefined4 *)*puVar1;
    }
    fprintf(param_2,"<![CDATA[%s]]>\n",puVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00879ca0(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x1c);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00879cc0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *_Dst;
  char *pcVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3bc6c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x44,uVar3);
  uStack_8 = 0;
  memset(_Dst,0,0x44);
  func_0x008788e0(4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  *_Dst = TiXmlText::vftable;
  func_0x0046a660(&DAT_0112e1b4,0);
  *(undefined1 *)(_Dst + 0x10) = 0;
  uStack_8 = 0xffffffff;
  pcVar5 = (char *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    pcVar5 = *(char **)pcVar5;
  }
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046a660(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  _Dst[3] = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  _Dst[1] = *(undefined4 *)(param_1 + 4);
  _Dst[2] = uVar2;
  *(undefined1 *)(_Dst + 0x10) = *(undefined1 *)(param_1 + 0x40);
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



void __thiscall FUN_00879e70(int param_1,FILE *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != (FILE *)0x0) {
    fprintf(param_2,"<?xml ");
  }
  if (param_4 != 0) {
    func_0x0046a880("<?xml ",6);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    if (param_2 != (FILE *)0x0) {
      iVar3 = param_1 + 0x40;
      if (0xf < *(uint *)(param_1 + 0x54)) {
        iVar3 = *(int *)(param_1 + 0x40);
      }
      fprintf(param_2,"version=\"%s\" ",iVar3);
    }
    if (param_4 != 0) {
      func_0x0046a880("version=\"",9);
      piVar1 = (int *)(param_1 + 0x40);
      if (0xf < *(uint *)(param_1 + 0x54)) {
        piVar1 = (int *)*piVar1;
      }
      func_0x0046a880(piVar1,*(undefined4 *)(param_1 + 0x50));
      func_0x0046a880(&DAT_011a23f8,2);
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    if (param_2 != (FILE *)0x0) {
      iVar3 = param_1 + 0x58;
      if (0xf < *(uint *)(param_1 + 0x6c)) {
        iVar3 = *(int *)(param_1 + 0x58);
      }
      fprintf(param_2,"encoding=\"%s\" ",iVar3);
    }
    if (param_4 != 0) {
      func_0x0046a880("encoding=\"",10);
      piVar1 = (int *)(param_1 + 0x58);
      if (0xf < *(uint *)(param_1 + 0x6c)) {
        piVar1 = (int *)*piVar1;
      }
      func_0x0046a880(piVar1,*(undefined4 *)(param_1 + 0x68));
      func_0x0046a880(&DAT_011a23f8,2);
    }
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x70);
    if (param_2 != (FILE *)0x0) {
      puVar2 = puVar4;
      if (0xf < *(uint *)(param_1 + 0x84)) {
        puVar2 = (undefined4 *)*puVar4;
      }
      fprintf(param_2,"standalone=\"%s\" ",puVar2);
    }
    if (param_4 != 0) {
      func_0x0046a880("standalone=\"",0xc);
      if (0xf < *(uint *)(param_1 + 0x84)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      func_0x0046a880(puVar4,*(undefined4 *)(param_1 + 0x80));
      func_0x0046a880(&DAT_011a23f8,2);
    }
  }
  if (param_2 != (FILE *)0x0) {
    fprintf(param_2,"?>");
  }
  if (param_4 != 0) {
    func_0x0046a880(&DAT_011a2408,2);
  }
  return;
}



void __thiscall FUN_0087a090(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x20);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



int FUN_0087a0b0(void)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3bcf7;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (void *)func_0x008ab47d(0x88,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,0x88);
  iVar2 = func_0x00878020();
  uStack_8 = 0xffffffff;
  if (iVar2 == 0) {
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
  func_0x00879ff0(iVar2);
  *unaff_FS_OFFSET = iStack_10;
  return iVar2;
}



void __thiscall FUN_0087a140(int param_1,FILE *param_2,int param_3)

{
  int *piVar1;
  
  if (0 < param_3) {
    do {
      fprintf(param_2,"    ");
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    piVar1 = (int *)*piVar1;
  }
  fprintf(param_2,"<%s>",piVar1);
  return;
}



// Library Function - Multiple Matches With Same Base Name
//  protected: void __thiscall Concurrency::ISource<unsigned int>::_Invoke_unlink_source(class
// Concurrency::ITarget<unsigned int> *)
//  protected: void __thiscall Concurrency::ISource<enum
// Concurrency::agent_status>::_Invoke_unlink_source(class Concurrency::ITarget<enum
// Concurrency::agent_status> *)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall Invoke_unlink_source(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_2 + 0x14);
  _guard_check_icall(param_1);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_0087a1b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *_Dst;
  char *pcVar4;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3bc2c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x40,uVar3);
  uStack_8 = 0;
  memset(_Dst,0,0x40);
  func_0x008788e0(3);
  *_Dst = TiXmlUnknown::vftable;
  uStack_8 = 0xffffffff;
  pcVar5 = (char *)(param_1 + 0x20);
  if (0xf < *(uint *)(param_1 + 0x34)) {
    pcVar5 = *(char **)pcVar5;
  }
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046a660(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  _Dst[3] = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  _Dst[1] = *(undefined4 *)(param_1 + 4);
  _Dst[2] = uVar2;
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



void __thiscall FUN_0087aea0(int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *unaff_ESI;
  char *pcVar9;
  
  iVar4 = *(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2);
  while (iVar4 == 0) {
    iVar4 = func_0x0087d680();
    if (iVar4 == 0x3c) {
      iVar4 = *param_2;
      if (*(int *)(*(int *)(iVar4 + 4) + 0xc + (int)param_2) != 0) goto LAB_0087b066;
      goto LAB_0087af50;
    }
    if (iVar4 < 1) break;
    func_0x005d2d90();
    func_0x00469a20(iVar4);
    iVar4 = *(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  pcVar8 = "Error: empty tag.";
  pcVar7 = "Error: empty tag.";
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 7;
  pcVar9 = "rror: empty tag.";
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  goto LAB_0087af19;
LAB_0087af50:
  do {
    iVar2 = param_3[4];
    iVar4 = *(int *)(*(int *)(iVar4 + 4) + 0xc + (int)param_2);
    while( true ) {
      if ((iVar4 != 0) || (iVar4 = func_0x0087d680(), iVar4 == 0x3e)) goto LAB_0087afd7;
      iVar4 = func_0x005d2d90();
      if (iVar4 < 1) break;
      func_0x00469a20(iVar4);
      iVar4 = *(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2);
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined4 *)(param_1 + 0x44) = 0xd;
      pcVar9 = "Error null (0) or unexpected EOF found in input stream.";
      do {
        pcVar7 = pcVar9;
        pcVar9 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      func_0x0046a660("Error null (0) or unexpected EOF found in input stream.",pcVar7 + -0x11a25f4)
      ;
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
      *(undefined4 *)(param_1 + 100) = 0xffffffff;
    }
LAB_0087afd7:
    if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) == 0) {
      puVar5 = param_3;
      if (0xf < (uint)param_3[5]) {
        puVar5 = (undefined4 *)*param_3;
      }
      piVar6 = (int *)func_0x0087b390((int)puVar5 + iVar2,0);
      if (piVar6 == (int *)0x0) {
        if (*(char *)(param_1 + 0x40) != '\0') {
          return;
        }
        pcVar8 = "Error";
        pcVar7 = "Error";
        *(undefined1 *)(param_1 + 0x40) = 1;
        *(undefined4 *)(param_1 + 0x44) = 1;
        pcVar9 = "rror";
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        goto LAB_0087af19;
      }
      pcVar3 = *(code **)(*piVar6 + 0x44);
      _guard_check_icall(param_2,param_3);
      (*pcVar3)();
      pcVar3 = *(code **)(*piVar6 + 0x14);
      _guard_check_icall();
      iVar4 = (*pcVar3)();
      pcVar3 = *(code **)*unaff_ESI;
      _guard_check_icall(1);
      (*pcVar3)();
      if (iVar4 != 0) {
        return;
      }
    }
    iVar4 = *param_2;
  } while (*(int *)(*(int *)(iVar4 + 4) + 0xc + (int)param_2) == 0);
LAB_0087b066:
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  pcVar8 = "Error";
  pcVar7 = "Error";
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  pcVar9 = "rror";
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
LAB_0087af19:
  func_0x0046a660(pcVar8,(int)pcVar7 - (int)pcVar9);
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  return;
}



void __thiscall FUN_0087b0c0(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcStack_3c;
  char *pcStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&pcStack_2c;
  pcStack_3c = (char *)0x0;
  param_1[0x40] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  pcStack_28 = param_1;
  func_0x0046a660();
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if (param_1[0x40] != '\0') goto LAB_0087b37b;
    pcVar7 = "Error document empty.";
    param_1[0x40] = '\x01';
    param_1[0x44] = '\f';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
LAB_0087b35f:
    pcVar7 = pcVar7 + -0x11a262d;
  }
  else {
    param_1[8] = -1;
    param_1[9] = -1;
    param_1[10] = -1;
    param_1[0xb] = -1;
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    if (param_3 == (undefined4 *)0x0) {
      uVar3 = 0;
      uStack_24 = 0;
    }
    else {
      uStack_24 = *param_3;
      *(undefined4 *)(param_1 + 4) = uStack_24;
      uVar3 = param_3[1];
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
    uStack_18 = *(undefined4 *)(param_1 + 0x60);
    uStack_20 = *(undefined4 *)(param_1 + 8);
    pcStack_1c = param_2;
    *(undefined4 *)(param_1 + 4) = uStack_24;
    *(undefined4 *)(param_1 + 8) = uStack_20;
    if (((((param_4 == 0) && (*param_2 != '\0')) && (*param_2 == -0x11)) &&
        ((param_2[1] != '\0' && (param_2[1] == -0x45)))) &&
       ((param_2[2] != '\0' && (param_2[2] == -0x41)))) {
      param_4 = 1;
      param_1[0x6c] = '\x01';
    }
    pcStack_2c = (char *)func_0x0087a620();
    if (pcStack_2c != (char *)0x0) {
      do {
        if ((*pcStack_2c == '\0') ||
           (piVar4 = (int *)func_0x0087b390(pcStack_2c,param_4), piVar4 == (int *)0x0)) break;
        pcVar2 = *(code **)(*piVar4 + 8);
        _guard_check_icall(pcStack_2c,&uStack_24,param_4);
        (*pcVar2)();
        func_0x00878ac0(piVar4);
        param_1 = pcStack_3c;
        if (param_4 == 0) {
          pcVar2 = *(code **)(*piVar4 + 0x34);
          _guard_check_icall();
          iVar5 = (*pcVar2)();
          if (iVar5 != 0) {
            pcVar2 = *(code **)(*piVar4 + 0x34);
            _guard_check_icall();
            iVar5 = (*pcVar2)();
            pcVar7 = (char *)(iVar5 + 0x58);
            if (0xf < *(uint *)(iVar5 + 0x6c)) {
              pcVar7 = *(char **)pcVar7;
            }
            if (*pcVar7 != '\0') {
              pcVar8 = "UTF-8";
              pcStack_3c = pcVar7 + -0x113c560;
              do {
                if (*pcVar8 == '\0') goto LAB_0087b2eb;
                iVar5 = tolower((int)pcStack_3c[(int)pcVar8]);
                iVar6 = tolower((int)*pcVar8);
              } while ((iVar5 == iVar6) && (pcVar8 = pcVar8 + 1, pcStack_3c[(int)pcVar8] != '\0'));
              if (*pcVar8 != '\0') {
                pcVar8 = "UTF8";
                if (*pcVar7 != '\0') {
                  do {
                    if (*pcVar8 == '\0') goto LAB_0087b2eb;
                    iVar5 = tolower((int)(pcVar7 + -0x11a2654)[(int)pcVar8]);
                    iVar6 = tolower((int)*pcVar8);
                  } while ((iVar5 == iVar6) &&
                          (pcVar8 = pcVar8 + 1, (pcVar7 + -0x11a2654)[(int)pcVar8] != '\0'));
                  if (*pcVar8 == '\0') goto LAB_0087b2eb;
                }
                param_4 = 2;
                goto LAB_0087b2f0;
              }
            }
LAB_0087b2eb:
            param_4 = 1;
          }
LAB_0087b2f0:
          param_1 = "";
        }
        pcStack_2c = (char *)func_0x0087a620();
      } while (pcStack_2c != (char *)0x0);
      if ((*(int *)(param_1 + 0x18) != 0) || (param_1[0x40] != '\0')) goto LAB_0087b37b;
      pcVar7 = "Error document empty.";
      param_1[0x40] = '\x01';
      param_1[0x44] = '\f';
      param_1[0x45] = '\0';
      param_1[0x46] = '\0';
      param_1[0x47] = '\0';
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      goto LAB_0087b35f;
    }
    if (param_1[0x40] != '\0') goto LAB_0087b37b;
    param_1[0x40] = '\x01';
    param_1[0x44] = '\f';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    pcVar8 = "Error document empty.";
    do {
      pcVar7 = pcVar8;
      pcVar8 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar7 + -0x11a262c;
  }
  func_0x0046a660("Error document empty.",pcVar7);
  param_1[100] = -1;
  param_1[0x65] = -1;
  param_1[0x66] = -1;
  param_1[0x67] = -1;
  param_1[0x68] = -1;
  param_1[0x69] = -1;
  param_1[0x6a] = -1;
  param_1[0x6b] = -1;
LAB_0087b37b:
  FUN_008ab370();
  return;
}



void __thiscall FUN_0087b6c0(int *param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  undefined **appuStack_58 [16];
  undefined1 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3be4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar7 = *(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2);
  uStack_14 = uVar6;
  while (iVar7 == 0) {
    iVar7 = func_0x005d2d90(uVar6);
    if (iVar7 < 1) {
      if (param_1 != (int *)0x0) goto LAB_0087b830;
      goto LAB_0087b84c;
    }
    func_0x00469a20(iVar7);
    if (iVar7 == 0x3e) break;
    iVar7 = *(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2);
  }
  uVar6 = param_3[4];
  if (2 < uVar6) {
    if (uVar6 <= uVar6 - 1) {
LAB_0087bafc:
      func_0x00484870();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = param_3[5];
    puVar11 = param_3;
    if (0xf < uVar9) {
      puVar11 = (undefined4 *)*param_3;
    }
    if (*(char *)((int)puVar11 + (uVar6 - 1)) == '>') {
      if (uVar6 <= uVar6 - 2) goto LAB_0087bafc;
      puVar11 = param_3;
      if (0xf < uVar9) {
        puVar11 = (undefined4 *)*param_3;
      }
      if (*(char *)((uVar6 - 2) + (int)puVar11) == '/') goto LAB_0087b84c;
    }
    puVar11 = param_3;
    if (0xf < uVar9) {
      puVar11 = (undefined4 *)*param_3;
    }
    if (*(char *)((uVar6 - 1) + (int)puVar11) == '>') {
      do {
        while ((func_0x0087a6d0(), *(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) == 0 &&
               (iVar7 = func_0x0087d680(), iVar7 != 0x3c))) {
          memset(appuStack_58,0,0x44);
          func_0x008788e0(4);
          uStack_8 = 0;
          appuStack_58[0] = TiXmlText::vftable;
          func_0x0046a660(&DAT_0112e1b4,0);
          uStack_18 = 0;
          uStack_8 = 1;
          FUN_0087cd50(param_2,param_3);
          appuStack_58[0] = TiXmlText::vftable;
          uStack_8 = 0xffffffff;
          func_0x008789c0();
        }
        if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) != 0) break;
        iVar7 = param_3[4];
        bVar5 = false;
        bVar4 = false;
        while( true ) {
          if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) != 0) goto LAB_0087b84c;
          uVar6 = func_0x0087d680();
          if ((int)uVar6 < 1) {
            if (param_1 != (int *)0x0) goto LAB_0087ba94;
            goto LAB_0087b84c;
          }
          if (uVar6 == 0x3e) break;
          func_0x00469a20(uVar6);
          func_0x005d2d90();
          if ((uVar6 == 0x5b) && (8 < (uint)param_3[4])) {
            puVar11 = param_3;
            if (0xf < (uint)param_3[5]) {
              puVar11 = (undefined4 *)*param_3;
            }
            pbVar8 = &DAT_011a2468;
            pbVar13 = (byte *)((param_3[4] - 9) + (int)puVar11);
            do {
              bVar1 = *pbVar13;
              bVar15 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_0087b960:
                uVar9 = -(uint)bVar15 | 1;
                goto LAB_0087b965;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar13[1];
              bVar15 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_0087b960;
              pbVar13 = pbVar13 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            uVar9 = 0;
LAB_0087b965:
            if (uVar9 == 0) break;
          }
          if ((!bVar4) && (uVar6 != 0x3c)) {
            if ((int)uVar6 < 0x100) {
              iVar10 = isspace(uVar6 & 0xff);
              if (((iVar10 == 0) && ((char)uVar6 != '\n')) && ((char)uVar6 != '\r')) {
                bVar15 = false;
              }
              else {
                bVar15 = true;
              }
              if ((!bVar15) && (bVar4 = true, uVar6 == 0x2f)) {
                bVar5 = true;
              }
            }
            else {
              bVar4 = true;
            }
          }
        }
        if (bVar5) {
          if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) == 0) {
            iVar7 = func_0x005d2d90();
            if (iVar7 < 1) {
              iVar7 = func_0x00877c40();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 0x40) == '\0')) {
                pcVar14 = "Error null (0) or unexpected EOF found in input stream.";
                *(undefined1 *)(iVar7 + 0x40) = 1;
                *(undefined4 *)(iVar7 + 0x44) = 0xd;
                do {
                  cVar2 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                } while (cVar2 != '\0');
                goto LAB_0087b8a7;
              }
            }
            else {
              func_0x00469a20(iVar7);
            }
          }
          break;
        }
        puVar11 = param_3;
        if (0xf < (uint)param_3[5]) {
          puVar11 = (undefined4 *)*param_3;
        }
        piVar12 = (int *)func_0x0087b390((int)puVar11 + iVar7,0);
        if (piVar12 == (int *)0x0) break;
        pcVar3 = *(code **)(*piVar12 + 0x44);
        _guard_check_icall(param_2,param_3);
        (*pcVar3)();
        pcVar3 = *(code **)*piVar12;
        _guard_check_icall(1);
        (*pcVar3)();
      } while( true );
    }
  }
  goto LAB_0087b84c;
LAB_0087b830:
  pcVar3 = *(code **)(*param_1 + 0x10);
  _guard_check_icall();
  iVar7 = (*pcVar3)();
  if (iVar7 == 0) goto code_r0x0087b845;
  pcVar3 = *(code **)(*param_1 + 0x10);
  _guard_check_icall();
  iVar7 = (*pcVar3)();
  if ((iVar7 != 0) && (*(char *)(iVar7 + 0x40) == '\0')) {
    pcVar14 = "Error null (0) or unexpected EOF found in input stream.";
    *(undefined1 *)(iVar7 + 0x40) = 1;
    *(undefined4 *)(iVar7 + 0x44) = 0xd;
    do {
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    goto LAB_0087b8a7;
  }
  goto LAB_0087b84c;
code_r0x0087b845:
  param_1 = (int *)param_1[4];
  if (param_1 == (int *)0x0) goto LAB_0087b84c;
  goto LAB_0087b830;
  while (param_1 = (int *)param_1[4], param_1 != (int *)0x0) {
LAB_0087ba94:
    pcVar3 = *(code **)(*param_1 + 0x10);
    _guard_check_icall();
    iVar7 = (*pcVar3)();
    if (iVar7 != 0) {
      pcVar3 = *(code **)(*param_1 + 0x10);
      _guard_check_icall();
      iVar7 = (*pcVar3)();
      if ((iVar7 != 0) && (*(char *)(iVar7 + 0x40) == '\0')) {
        pcVar14 = "Error null (0) or unexpected EOF found in input stream.";
        *(undefined1 *)(iVar7 + 0x40) = 1;
        *(undefined4 *)(iVar7 + 0x44) = 0xd;
        do {
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
LAB_0087b8a7:
        func_0x0046a660("Error null (0) or unexpected EOF found in input stream.",
                        pcVar14 + -0x11a25f5);
        *(undefined4 *)(iVar7 + 0x68) = 0xffffffff;
        *(undefined4 *)(iVar7 + 100) = 0xffffffff;
      }
      break;
    }
  }
LAB_0087b84c:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Type propagation algorithm not settling

void __thiscall FUN_0087bb10(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  void *_Dst;
  int *piVar6;
  int iVar7;
  char *******pppppppcVar8;
  char *pcVar9;
  char *pcVar10;
  int *unaff_FS_OFFSET;
  char *pcStack_34;
  char *pcStack_30;
  char *******pppppppcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3be9c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar3;
  pcVar4 = (char *)func_0x0087a620(uVar3);
  piVar6 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      pcVar2 = *(code **)(*piVar6 + 0x10);
      _guard_check_icall();
      iVar5 = (*pcVar2)();
      if (iVar5 != 0) {
        pcVar2 = *(code **)(*piVar6 + 0x10);
        _guard_check_icall();
        iVar5 = (*pcVar2)();
        goto LAB_0087bb82;
      }
      piVar6 = (int *)piVar6[4];
    } while (piVar6 != (int *)0x0);
  }
  iVar5 = 0;
LAB_0087bb82:
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0x40) == '\0')) {
      *(undefined1 *)(iVar5 + 0x40) = 1;
      *(undefined4 *)(iVar5 + 0x44) = 3;
      pcVar4 = "Error parsing Element.";
      do {
        pcVar9 = pcVar4;
        pcVar4 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      func_0x0046a660("Error parsing Element.",pcVar9 + -0x11a2474);
      *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
      *(undefined4 *)(iVar5 + 100) = 0xffffffff;
    }
    goto LAB_0087c178;
  }
  if (param_3 != (int *)0x0) {
    func_0x0087a430(pcVar4,param_4);
    iVar7 = param_3[1];
    param_1[1] = *param_3;
    param_1[2] = iVar7;
  }
  if (*pcVar4 == '<') {
    pcVar4 = (char *)func_0x0087a620(uVar3);
    pcStack_34 = (char *)func_0x0087a760(pcVar4);
    if ((pcStack_34 != (char *)0x0) && (*pcStack_34 != '\0')) {
      uStack_1c = 0;
      uStack_18 = 0;
      pppppppcStack_2c = (char *******)0x0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      func_0x0046bc40(&DAT_011a23fc,2);
      iStack_8 = 0;
      piVar6 = param_1 + 8;
      if (0xf < (uint)param_1[0xd]) {
        piVar6 = (int *)*piVar6;
      }
      func_0x0046a880(piVar6,param_1[0xc]);
LAB_0087bcb6:
      if (*pcStack_34 != '\0') {
        pcStack_30 = (char *)func_0x0087a620();
        if ((pcStack_30 == (char *)0x0) || (cVar1 = *pcStack_30, cVar1 == '\0')) {
          if ((iVar5 != 0) && (*(char *)(iVar5 + 0x40) == '\0')) {
            *(undefined1 *)(iVar5 + 0x40) = 1;
            *(undefined4 *)(iVar5 + 0x44) = 6;
            pcVar4 = "Error reading Attributes.";
            do {
              pcVar9 = pcVar4;
              pcVar4 = pcVar9 + 1;
            } while (*pcVar9 != '\0');
            func_0x0046a660("Error reading Attributes.",pcVar9 + -0x11a24c0);
            *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
            *(undefined4 *)(iVar5 + 100) = 0xffffffff;
            pcStack_30 = pcStack_34;
            goto joined_r0x0087c068;
          }
        }
        else if (cVar1 == '/') {
          pcStack_30 = pcStack_30 + 1;
          if (((*pcStack_30 != '>') && (iVar5 != 0)) && (*(char *)(iVar5 + 0x40) == '\0')) {
            *(undefined1 *)(iVar5 + 0x40) = 1;
            *(undefined4 *)(iVar5 + 0x44) = 7;
            pcVar4 = "Error: empty tag.";
            do {
              pcVar9 = pcVar4;
              pcVar4 = pcVar9 + 1;
            } while (*pcVar9 != '\0');
            func_0x0046a660("Error: empty tag.",pcVar9 + -0x11a24ac);
            *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
            *(undefined4 *)(iVar5 + 100) = 0xffffffff;
            goto joined_r0x0087c06f;
          }
        }
        else {
          if (cVar1 != '>') {
            _Dst = (void *)func_0x008ab47d(0x4c);
            iStack_8._0_1_ = 1;
            memset(_Dst,0,0x4c);
            piVar6 = (int *)func_0x00877c80();
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            if (piVar6 != (int *)0x0) {
              piVar6[4] = iVar5;
              pcVar2 = *(code **)(*piVar6 + 8);
              _guard_check_icall(pcStack_30,param_3,param_4);
              pcStack_34 = (char *)(*pcVar2)();
              if ((pcStack_34 == (char *)0x0) || (*pcStack_34 == '\0')) {
                if ((iVar5 != 0) && (*(char *)(iVar5 + 0x40) == '\0')) {
                  pcVar4 = "Error parsing Element.";
                  *(undefined1 *)(iVar5 + 0x40) = 1;
                  *(undefined4 *)(iVar5 + 0x44) = 3;
                  do {
                    cVar1 = *pcVar4;
                    pcVar4 = pcVar4 + 1;
                  } while (cVar1 != '\0');
LAB_0087bdb7:
                  func_0x0046a660("Error parsing Element.",pcVar4 + -0x11a2475);
                  *(undefined4 *)(iVar5 + 100) = 0xffffffff;
                  *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
                  if (param_3 != (int *)0x0) {
                    func_0x0087a430(pcStack_30,param_4);
                    iVar7 = param_3[1];
                    *(int *)(iVar5 + 100) = *param_3;
                    *(int *)(iVar5 + 0x68) = iVar7;
                  }
                }
              }
              else {
                iVar7 = func_0x0087a2b0(piVar6 + 5);
                if (iVar7 == 0) goto code_r0x0087bd6d;
                if ((iVar5 != 0) && (*(char *)(iVar5 + 0x40) == '\0')) {
                  pcVar4 = "Error parsing Element.";
                  *(undefined1 *)(iVar5 + 0x40) = 1;
                  *(undefined4 *)(iVar5 + 0x44) = 3;
                  do {
                    cVar1 = *pcVar4;
                    pcVar4 = pcVar4 + 1;
                  } while (cVar1 != '\0');
                  goto LAB_0087bdb7;
                }
              }
              pcVar2 = *(code **)*piVar6;
              _guard_check_icall(1);
              (*pcVar2)();
            }
            goto LAB_0087c08c;
          }
          pcStack_30 = (char *)func_0x0087c1a0(pcStack_30 + 1,param_3,param_4);
          if ((pcStack_30 != (char *)0x0) && (*pcStack_30 != '\0')) {
            pppppppcVar8 = (char *******)&pppppppcStack_2c;
            if (0xf < uStack_18) {
              pppppppcVar8 = pppppppcStack_2c;
            }
            iVar7 = (int)pcStack_30 - (int)pppppppcVar8;
            goto LAB_0087be80;
          }
          if ((iVar5 != 0) && (*(char *)(iVar5 + 0x40) == '\0')) {
            *(undefined1 *)(iVar5 + 0x40) = 1;
            *(undefined4 *)(iVar5 + 0x44) = 8;
            pcVar4 = "Error reading end tag.";
            do {
              pcVar9 = pcVar4;
              pcVar4 = pcVar9 + 1;
            } while (*pcVar9 != '\0');
            goto LAB_0087bf51;
          }
        }
      }
      goto LAB_0087c08c;
    }
    if ((iVar5 == 0) || (*(char *)(iVar5 + 0x40) != '\0')) goto LAB_0087c178;
    *(undefined1 *)(iVar5 + 0x40) = 1;
    *(undefined4 *)(iVar5 + 0x44) = 4;
    pcVar9 = "Failed to read Element name";
    do {
      pcVar10 = pcVar9;
      pcVar9 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    func_0x0046a660("Failed to read Element name",pcVar10 + -0x11a24fc);
    *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar5 + 100) = 0xffffffff;
    if (pcVar4 == (char *)0x0) goto LAB_0087c178;
  }
  else {
    if ((iVar5 == 0) || (*(char *)(iVar5 + 0x40) != '\0')) goto LAB_0087c178;
    *(undefined1 *)(iVar5 + 0x40) = 1;
    *(undefined4 *)(iVar5 + 0x44) = 3;
    pcVar9 = "Error parsing Element.";
    do {
      pcVar10 = pcVar9;
      pcVar9 = pcVar10 + 1;
    } while (*pcVar10 != '\0');
    func_0x0046a660("Error parsing Element.",pcVar10 + -0x11a2474);
    *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar5 + 100) = 0xffffffff;
  }
  if (param_3 != (int *)0x0) {
    func_0x0087a430(pcVar4,param_4);
    iVar7 = param_3[1];
    *(int *)(iVar5 + 100) = *param_3;
    *(int *)(iVar5 + 0x68) = iVar7;
  }
  goto LAB_0087c178;
code_r0x0087bd6d:
  piVar6[0x12] = (int)(param_1 + 0x10);
  piVar6[0x11] = param_1[0x21];
  *(int **)(param_1[0x21] + 0x48) = piVar6;
  param_1[0x21] = (int)piVar6;
  goto LAB_0087bcb6;
  while ((*(char *)((int)pppppppcVar8 + iVar7) == *(char *)pppppppcVar8 &&
         (pppppppcVar8 = (char *******)((int)pppppppcVar8 + 1),
         *(char *)((int)pppppppcVar8 + iVar7) != '\0'))) {
LAB_0087be80:
    if (*(char *)pppppppcVar8 == '\0') goto LAB_0087bef4;
  }
  if (*(char *)pppppppcVar8 == '\0') {
LAB_0087bef4:
    pcStack_30 = (char *)func_0x0087a620();
    if ((((pcStack_30 == (char *)0x0) || (*pcStack_30 == '\0')) || (*pcStack_30 != '>')) &&
       ((iVar5 != 0 && (*(char *)(iVar5 + 0x40) == '\0')))) {
      *(undefined1 *)(iVar5 + 0x40) = 1;
      *(undefined4 *)(iVar5 + 0x44) = 8;
      pcVar4 = "Error reading end tag.";
      do {
        pcVar9 = pcVar4;
        pcVar4 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
LAB_0087bf51:
      func_0x0046a660("Error reading end tag.",pcVar9 + -0x11a2564);
      *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
      *(undefined4 *)(iVar5 + 100) = 0xffffffff;
joined_r0x0087c068:
      if (pcStack_30 != (char *)0x0) goto joined_r0x0087c06f;
    }
  }
  else if ((iVar5 != 0) && (*(char *)(iVar5 + 0x40) == '\0')) {
    *(undefined1 *)(iVar5 + 0x40) = 1;
    *(undefined4 *)(iVar5 + 0x44) = 8;
    pcVar4 = "Error reading end tag.";
    do {
      pcVar9 = pcVar4;
      pcVar4 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    func_0x0046a660("Error reading end tag.",pcVar9 + -0x11a2564);
    *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar5 + 100) = 0xffffffff;
joined_r0x0087c06f:
    if (param_3 != (int *)0x0) {
      func_0x0087a430(pcStack_30,param_4);
      iVar7 = *param_3;
      *(int *)(iVar5 + 0x68) = param_3[1];
      *(int *)(iVar5 + 100) = iVar7;
    }
  }
LAB_0087c08c:
  iStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(&pppppppcStack_2c,pppppppcStack_2c,uStack_18);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  pppppppcStack_2c = (char *******)((uint)pppppppcStack_2c & 0xffffff00);
LAB_0087c178:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0087c3f0(int *param_1,int *param_2)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) == 0) {
    while (iVar3 = func_0x005d2d90(), 0 < iVar3) {
      func_0x00469a20(iVar3);
      if (iVar3 == 0x3e) {
        return;
      }
      if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) != 0) {
        return;
      }
    }
    if (param_1 != (int *)0x0) {
      while( true ) {
        pcVar1 = *(code **)(*param_1 + 0x10);
        _guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 != 0) break;
        param_1 = (int *)param_1[4];
        if (param_1 == (int *)0x0) {
          return;
        }
      }
      pcVar1 = *(code **)(*param_1 + 0x10);
      _guard_check_icall();
      iVar3 = (*pcVar1)();
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x40) == '\0')) {
        *(undefined1 *)(iVar3 + 0x40) = 1;
        *(undefined4 *)(iVar3 + 0x44) = 0xd;
        pcVar2 = "Error null (0) or unexpected EOF found in input stream.";
        do {
          pcVar4 = pcVar2;
          pcVar2 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        func_0x0046a660("Error null (0) or unexpected EOF found in input stream.",
                        pcVar4 + -0x11a25f4);
        *(undefined4 *)(iVar3 + 0x68) = 0xffffffff;
        *(undefined4 *)(iVar3 + 100) = 0xffffffff;
      }
    }
  }
  return;
}



char * __thiscall FUN_0087c4e0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar8 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      pcVar2 = *(code **)(*piVar8 + 0x10);
      _guard_check_icall();
      iVar4 = (*pcVar2)();
      if (iVar4 != 0) {
        pcVar2 = *(code **)(*piVar8 + 0x10);
        _guard_check_icall();
        iVar4 = (*pcVar2)();
        goto LAB_0087c510;
      }
      piVar8 = (int *)piVar8[4];
    } while (piVar8 != (int *)0x0);
  }
  iVar4 = 0;
LAB_0087c510:
  pcVar5 = (char *)func_0x0087a620();
  if (param_3 != (int *)0x0) {
    func_0x0087a430(pcVar5,param_4);
    iVar3 = param_3[1];
    param_1[1] = *param_3;
    param_1[2] = iVar3;
  }
  if (((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) || (*pcVar5 != '<')) {
    if ((iVar4 != 0) && (*(char *)(iVar4 + 0x40) == '\0')) {
      *(undefined1 *)(iVar4 + 0x40) = 1;
      *(undefined4 *)(iVar4 + 0x44) = 9;
      pcVar6 = "Error parsing Unknown.";
      do {
        pcVar7 = pcVar6;
        pcVar6 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      func_0x0046a660("Error parsing Unknown.",pcVar7 + -0x11a254c);
      *(undefined4 *)(iVar4 + 0x68) = 0xffffffff;
      *(undefined4 *)(iVar4 + 100) = 0xffffffff;
      if ((pcVar5 != (char *)0x0) && (param_3 != (int *)0x0)) {
        func_0x0087a430(pcVar5,param_4);
        iVar3 = param_3[1];
        *(int *)(iVar4 + 100) = *param_3;
        *(int *)(iVar4 + 0x68) = iVar3;
      }
    }
    return (char *)0x0;
  }
  func_0x0046a660(&DAT_0112e1b4,0);
  while( true ) {
    pcVar6 = pcVar5 + 1;
    if (pcVar6 == (char *)0x0) {
      if ((iVar4 != 0) && (*(char *)(iVar4 + 0x40) == '\0')) {
        *(undefined1 *)(iVar4 + 0x40) = 1;
        *(undefined4 *)(iVar4 + 0x44) = 9;
        pcVar5 = "Error parsing Unknown.";
        do {
          pcVar6 = pcVar5;
          pcVar5 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        func_0x0046a660("Error parsing Unknown.",pcVar6 + -0x11a254c);
        *(undefined4 *)(iVar4 + 0x68) = 0xffffffff;
        *(undefined4 *)(iVar4 + 100) = 0xffffffff;
      }
      return (char *)0x0;
    }
    cVar1 = *pcVar6;
    if ((cVar1 == '\0') || (cVar1 == '>')) break;
    func_0x00469a20(cVar1);
    pcVar5 = pcVar6;
  }
  if (*pcVar6 != '>') {
    return pcVar6;
  }
  return pcVar5 + 2;
}



void __thiscall FUN_0087c670(int *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) == 0) {
    while (iVar4 = func_0x005d2d90(), 0 < iVar4) {
      func_0x00469a20(iVar4);
      if (iVar4 == 0x3e) {
        uVar1 = param_3[4];
        if (uVar1 <= uVar1 - 2) {
LAB_0087c78a:
          func_0x00484870();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar5 = param_3;
        if (0xf < (uint)param_3[5]) {
          puVar5 = (undefined4 *)*param_3;
        }
        if (*(char *)((int)puVar5 + (uVar1 - 2)) == '-') {
          if (uVar1 <= uVar1 - 3) goto LAB_0087c78a;
          puVar5 = param_3;
          if (0xf < (uint)param_3[5]) {
            puVar5 = (undefined4 *)*param_3;
          }
          if (*(char *)((int)puVar5 + (uVar1 - 3)) == '-') {
            return;
          }
        }
      }
      if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) != 0) {
        return;
      }
    }
    if (param_1 != (int *)0x0) {
      while( true ) {
        pcVar2 = *(code **)(*param_1 + 0x10);
        _guard_check_icall();
        iVar4 = (*pcVar2)();
        if (iVar4 != 0) break;
        param_1 = (int *)param_1[4];
        if (param_1 == (int *)0x0) {
          return;
        }
      }
      pcVar2 = *(code **)(*param_1 + 0x10);
      _guard_check_icall();
      iVar4 = (*pcVar2)();
      if ((iVar4 != 0) && (*(char *)(iVar4 + 0x40) == '\0')) {
        *(undefined1 *)(iVar4 + 0x40) = 1;
        *(undefined4 *)(iVar4 + 0x44) = 0xd;
        pcVar3 = "Error null (0) or unexpected EOF found in input stream.";
        do {
          pcVar6 = pcVar3;
          pcVar3 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        func_0x0046a660("Error null (0) or unexpected EOF found in input stream.",
                        pcVar6 + -0x11a25f4);
        *(undefined4 *)(iVar4 + 0x68) = 0xffffffff;
        *(undefined4 *)(iVar4 + 100) = 0xffffffff;
      }
    }
  }
  return;
}



char * __thiscall FUN_0087c790(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  void *_Src;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  void *_Dst;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  
  piVar11 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      pcVar1 = *(code **)(*piVar11 + 0x10);
      _guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*piVar11 + 0x10);
        _guard_check_icall();
        iVar4 = (*pcVar1)();
        goto LAB_0087c7d8;
      }
      piVar11 = (int *)piVar11[4];
    } while (piVar11 != (int *)0x0);
  }
  iVar4 = 0;
LAB_0087c7d8:
  piVar11 = param_1 + 8;
  func_0x0046a660(&DAT_0112e1b4,0);
  pcVar5 = (char *)func_0x0087a620();
  if (param_3 != (int *)0x0) {
    func_0x0087a430(pcVar5,param_4);
    iVar2 = param_3[1];
    param_1[1] = *param_3;
    param_1[2] = iVar2;
  }
  pcVar8 = "<!--";
  if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5, *pcVar5 != '\0')) {
    do {
      if (*pcVar8 == '\0') goto LAB_0087c84b;
      if (*pcVar6 != *pcVar8) break;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar6 != '\0');
    if (*pcVar8 == '\0') {
LAB_0087c84b:
      func_0x0046a660(&DAT_0112e1b4,0);
      pcVar5 = pcVar5 + 4;
      if (pcVar5 != (char *)0x0) {
        while (*pcVar5 != '\0') {
          pcVar6 = "-->";
          pcVar8 = pcVar5;
          do {
            if (*pcVar6 == '\0') goto LAB_0087c9a2;
            if (*pcVar8 != *pcVar6) break;
            pcVar8 = pcVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (*pcVar8 != '\0');
          if (*pcVar6 == '\0') {
LAB_0087c9a2:
            return pcVar5 + 3;
          }
          uVar3 = param_1[0xd];
          _Size = param_1[0xc];
          if (uVar3 == _Size) {
            if (_Size == 0x7fffffff) {
              func_0x00463570();
              pcVar1 = (code *)swi(3);
              pcVar5 = (char *)(*pcVar1)();
              return pcVar5;
            }
            uVar10 = _Size + 1 | 0xf;
            if (uVar10 < 0x80000000) {
              if (0x7fffffff - (uVar3 >> 1) < uVar3) {
                uVar10 = 0x7fffffff;
              }
              else {
                uVar7 = (uVar3 >> 1) + uVar3;
                if (uVar10 < uVar7) {
                  uVar10 = uVar7;
                }
              }
            }
            else {
              uVar10 = 0x7fffffff;
            }
            _Dst = (void *)func_0x0046c950(uVar10 + 1);
            param_1[0xc] = _Size + 1;
            param_1[0xd] = uVar10;
            pcVar8 = (char *)((int)_Dst + _Size);
            if (uVar3 < 0x10) {
              memcpy(_Dst,piVar11,_Size);
              *pcVar8 = *pcVar5;
              pcVar8[1] = '\0';
            }
            else {
              _Src = (void *)*piVar11;
              memcpy(_Dst,_Src,_Size);
              *pcVar8 = *pcVar5;
              pcVar8[1] = '\0';
              func_0x0046b1f0(piVar11,_Src,uVar3);
            }
            *piVar11 = (int)_Dst;
          }
          else {
            param_1[0xc] = _Size + 1;
            piVar9 = piVar11;
            if (0xf < uVar3) {
              piVar9 = (int *)*piVar11;
            }
            *(char *)((int)piVar9 + _Size) = *pcVar5;
            *(undefined1 *)((int)piVar9 + _Size + 1) = 0;
          }
          pcVar5 = pcVar5 + 1;
          if (pcVar5 == (char *)0x0) {
            return (char *)0x0;
          }
        }
      }
      return pcVar5;
    }
  }
  if ((iVar4 != 0) && (*(char *)(iVar4 + 0x40) == '\0')) {
    *(undefined1 *)(iVar4 + 0x40) = 1;
    *(undefined4 *)(iVar4 + 0x44) = 10;
    pcVar8 = "Error parsing Comment.";
    do {
      pcVar6 = pcVar8;
      pcVar8 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    func_0x0046a660("Error parsing Comment.",pcVar6 + -0x11a2534);
    *(undefined4 *)(iVar4 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar4 + 100) = 0xffffffff;
    if ((pcVar5 != (char *)0x0) && (param_3 != (int *)0x0)) {
      func_0x0087a430(pcVar5,param_4);
      iVar2 = param_3[1];
      *(int *)(iVar4 + 100) = *param_3;
      *(int *)(iVar4 + 0x68) = iVar2;
    }
  }
  return (char *)0x0;
}



byte * __thiscall
FUN_0087ca30(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  char *pcVar7;
  undefined *puVar8;
  
  pcVar2 = (char *)func_0x0087a620();
  if (pcVar2 == (char *)0x0) {
    return (byte *)0x0;
  }
  if (*pcVar2 == '\0') {
    return (byte *)0x0;
  }
  uVar6 = extraout_ECX;
  if (param_3 != (undefined4 *)0x0) {
    func_0x0087a430(pcVar2,param_4);
    uVar6 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar6;
  }
  pcVar3 = (char *)func_0x0087a760(uVar6);
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 == 0) {
      return (byte *)0x0;
    }
    if (*(char *)(iVar5 + 0x40) != '\0') {
      return (byte *)0x0;
    }
    *(undefined1 *)(iVar5 + 0x40) = 1;
    *(undefined4 *)(iVar5 + 0x44) = 6;
    pcVar3 = "Error reading Attributes.";
    do {
      pcVar7 = pcVar3;
      pcVar3 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    func_0x0046a660("Error reading Attributes.",pcVar7 + -0x11a24c0);
    *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar5 + 100) = 0xffffffff;
  }
  else {
    pcVar2 = (char *)func_0x0087a620();
    if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (*pcVar2 == '=')) {
      pbVar4 = (byte *)func_0x0087a620();
      if ((pbVar4 == (byte *)0x0) || (bVar1 = *pbVar4, bVar1 == 0)) {
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          return (byte *)0x0;
        }
        if (*(char *)(iVar5 + 0x40) != '\0') {
          return (byte *)0x0;
        }
        *(undefined1 *)(iVar5 + 0x40) = 1;
        *(undefined4 *)(iVar5 + 0x44) = 6;
        pcVar2 = "Error reading Attributes.";
        do {
          pcVar3 = pcVar2;
          pcVar2 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        func_0x0046a660("Error reading Attributes.",pcVar3 + -0x11a24c0);
        *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
        *(undefined4 *)(iVar5 + 100) = 0xffffffff;
        if (pbVar4 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if (param_3 == (undefined4 *)0x0) {
          return (byte *)0x0;
        }
        func_0x0087a430(pbVar4,param_4);
        uVar6 = param_3[1];
        *(undefined4 *)(iVar5 + 100) = *param_3;
        *(undefined4 *)(iVar5 + 0x68) = uVar6;
        return (byte *)0x0;
      }
      if (bVar1 == 0x27) {
        puVar8 = &DAT_0112e4e8;
      }
      else {
        if (bVar1 != 0x22) {
          func_0x0046a660(&DAT_0112e1b4,0);
          while( true ) {
            bVar1 = *pbVar4;
            if (bVar1 == 0) {
              return pbVar4;
            }
            iVar5 = isspace((uint)bVar1);
            if (iVar5 != 0) {
              return pbVar4;
            }
            if (bVar1 == 10) {
              return pbVar4;
            }
            if (bVar1 == 0xd) {
              return pbVar4;
            }
            bVar1 = *pbVar4;
            if (bVar1 == 0x2f) {
              return pbVar4;
            }
            if (bVar1 == 0x3e) {
              return pbVar4;
            }
            if ((bVar1 == 0x27) || (bVar1 == 0x22)) break;
            func_0x00469a20(bVar1);
            pbVar4 = pbVar4 + 1;
            if (pbVar4 == (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          iVar5 = *(int *)(param_1 + 0x10);
          if (iVar5 == 0) {
            return (byte *)0x0;
          }
          if (*(char *)(iVar5 + 0x40) != '\0') {
            return (byte *)0x0;
          }
          *(undefined1 *)(iVar5 + 0x40) = 1;
          *(undefined4 *)(iVar5 + 0x44) = 6;
          pcVar2 = "Error reading Attributes.";
          do {
            pcVar3 = pcVar2;
            pcVar2 = pcVar3 + 1;
          } while (*pcVar3 != '\0');
          func_0x0046a660("Error reading Attributes.",pcVar3 + -0x11a24c0);
          *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
          *(undefined4 *)(iVar5 + 100) = 0xffffffff;
          if (param_3 == (undefined4 *)0x0) {
            return (byte *)0x0;
          }
          func_0x0087a430(pbVar4,param_4);
          uVar6 = param_3[1];
          *(undefined4 *)(iVar5 + 100) = *param_3;
          *(undefined4 *)(iVar5 + 0x68) = uVar6;
          return (byte *)0x0;
        }
        puVar8 = &DAT_01141644;
      }
      pbVar4 = (byte *)func_0x0087aba0(0,puVar8,param_4,param_4);
      return pbVar4;
    }
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 == 0) {
      return (byte *)0x0;
    }
    if (*(char *)(iVar5 + 0x40) != '\0') {
      return (byte *)0x0;
    }
    *(undefined1 *)(iVar5 + 0x40) = 1;
    *(undefined4 *)(iVar5 + 0x44) = 6;
    pcVar3 = "Error reading Attributes.";
    do {
      pcVar7 = pcVar3;
      pcVar3 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    func_0x0046a660("Error reading Attributes.",pcVar7 + -0x11a24c0);
    *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar5 + 100) = 0xffffffff;
    if (pcVar2 == (char *)0x0) {
      return (byte *)0x0;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    func_0x0087a430(pcVar2,param_4);
    uVar6 = *param_3;
    *(undefined4 *)(iVar5 + 0x68) = param_3[1];
    *(undefined4 *)(iVar5 + 100) = uVar6;
  }
  return (byte *)0x0;
}



void __thiscall FUN_0087cd50(int *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) == 0) {
    while ((iVar4 = func_0x0087d680(), (char)param_1[0x10] != '\0' || (iVar4 != 0x3c))) {
      if (iVar4 < 1) {
        while( true ) {
          pcVar2 = *(code **)(*param_1 + 0x10);
          _guard_check_icall();
          iVar4 = (*pcVar2)();
          if (iVar4 != 0) break;
          param_1 = (int *)param_1[4];
          if (param_1 == (int *)0x0) {
            return;
          }
        }
        pcVar2 = *(code **)(*param_1 + 0x10);
        _guard_check_icall();
        iVar4 = (*pcVar2)();
        if (iVar4 == 0) {
          return;
        }
        if (*(char *)(iVar4 + 0x40) != '\0') {
          return;
        }
        *(undefined1 *)(iVar4 + 0x40) = 1;
        *(undefined4 *)(iVar4 + 0x44) = 0xd;
        pcVar3 = "Error null (0) or unexpected EOF found in input stream.";
        do {
          pcVar6 = pcVar3;
          pcVar3 = pcVar6 + 1;
        } while (*pcVar6 != '\0');
        func_0x0046a660("Error null (0) or unexpected EOF found in input stream.",
                        pcVar6 + -0x11a25f4);
        *(undefined4 *)(iVar4 + 0x68) = 0xffffffff;
        *(undefined4 *)(iVar4 + 100) = 0xffffffff;
        return;
      }
      func_0x00469a20(iVar4);
      func_0x005d2d90();
      if ((((char)param_1[0x10] != '\0') && (iVar4 == 0x3e)) && (uVar1 = param_3[4], 2 < uVar1)) {
        puVar5 = param_3;
        if (0xf < (uint)param_3[5]) {
          puVar5 = (undefined4 *)*param_3;
        }
        if (*(char *)((int)puVar5 + (uVar1 - 2)) == ']') {
          puVar5 = param_3;
          if (0xf < (uint)param_3[5]) {
            puVar5 = (undefined4 *)*param_3;
          }
          if (*(char *)((int)puVar5 + (uVar1 - 3)) == ']') {
            return;
          }
        }
      }
      if (*(int *)(*(int *)(*param_2 + 4) + 0xc + (int)param_2) != 0) {
        return;
      }
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0087d082)
// WARNING: Removing unreachable block (ram,0x0087d090)
// WARNING: Removing unreachable block (ram,0x0087d0a0)
// WARNING: Removing unreachable block (ram,0x0087d0a6)

void __thiscall FUN_0087ce80(int *param_1,char *param_2,int *param_3,undefined4 param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  char *extraout_ECX;
  int *unaff_FS_OFFSET;
  int *piStack_34;
  int *piStack_30;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2617d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_30 = param_3;
  func_0x0046a660(&DAT_0112e1b4,0,uVar4);
  piStack_34 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      pcVar2 = *(code **)(*piStack_34 + 0x10);
      _guard_check_icall();
      iVar5 = (*pcVar2)();
      if (iVar5 != 0) {
        pcVar2 = *(code **)(*piStack_34 + 0x10);
        _guard_check_icall();
        iVar5 = (*pcVar2)();
        goto LAB_0087cf05;
      }
      piStack_34 = (int *)piStack_34[4];
    } while (piStack_34 != (int *)0x0);
  }
  iVar5 = 0;
LAB_0087cf05:
  if (param_3 != (int *)0x0) {
    func_0x0087a430(param_2,param_4);
    iVar3 = param_3[1];
    param_1[1] = *param_3;
    param_1[2] = iVar3;
  }
  if ((char)param_1[0x10] == '\0') {
    pcVar8 = "<![CDATA[";
    if ((param_2 != (char *)0x0) && (pcVar6 = param_2, *param_2 != '\0')) {
      do {
        if (*pcVar8 == '\0') goto LAB_0087cfa8;
        if (*pcVar6 != *pcVar8) break;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar6 != '\0');
      if (*pcVar8 == '\0') goto LAB_0087cfa8;
    }
    func_0x0087aba0(1,&DAT_011a0cbc,pcVar8,param_4);
  }
  else {
LAB_0087cfa8:
    *(undefined1 *)(param_1 + 0x10) = 1;
    pcVar8 = "<![CDATA[";
    if ((param_2 != (char *)0x0) && (pcVar6 = param_2, *param_2 != '\0')) {
      do {
        if (*pcVar8 == '\0') goto LAB_0087cfde;
        if (*pcVar6 != *pcVar8) break;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar6 != '\0');
      if (*pcVar8 == '\0') {
LAB_0087cfde:
        pcVar6 = param_2 + 9;
        if (pcVar6 != (char *)0x0) {
          param_2 = param_2 + -0x11a245b;
          while (*pcVar6 != '\0') {
            pbVar7 = &DAT_011a2464;
            do {
              bVar1 = *pbVar7;
              pcVar8 = (char *)(uint)bVar1;
              if (bVar1 == 0) goto LAB_0087d02b;
            } while ((param_2[(int)pbVar7] == bVar1) &&
                    (pbVar7 = pbVar7 + 1, param_2[(int)pbVar7] != '\0'));
            if (*pbVar7 == 0) break;
            piStack_30 = (int *)CONCAT31(piStack_30._1_3_,*pcVar6);
            func_0x00469a20(piStack_30);
            param_2 = param_2 + 1;
            pcVar6 = pcVar6 + 1;
            pcVar8 = extraout_ECX;
            if (pcVar6 == (char *)0x0) break;
          }
        }
LAB_0087d02b:
        uStack_8 = 0;
        func_0x0087aba0(0,&DAT_011a2464,pcVar8,param_4);
        uStack_8 = 0xffffffff;
        goto LAB_0087d137;
      }
    }
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0x40) == '\0')) {
      *(undefined1 *)(iVar5 + 0x40) = 1;
      *(undefined4 *)(iVar5 + 0x44) = 0xe;
      pcVar8 = "Error parsing CDATA.";
      do {
        pcVar6 = pcVar8;
        pcVar8 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      func_0x0046a660("Error parsing CDATA.",pcVar6 + -0x11a25dc);
      *(undefined4 *)(iVar5 + 0x68) = 0xffffffff;
      *(undefined4 *)(iVar5 + 100) = 0xffffffff;
      if ((param_2 != (char *)0x0) && (param_3 != (int *)0x0)) {
        func_0x0087a430(param_2,param_4);
        iVar3 = param_3[1];
        *(int *)(iVar5 + 100) = *param_3;
        *(int *)(iVar5 + 0x68) = iVar3;
      }
    }
  }
LAB_0087d137:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0087d160(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char ******ppppppcVar9;
  char ******ppppppcVar10;
  int *piVar11;
  char *pcVar12;
  byte *pbVar13;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f8 [44];
  char *****apppppcStack_cc [5];
  uint uStack_b8;
  undefined1 auStack_ac [44];
  char *****apppppcStack_80 [5];
  uint uStack_6c;
  undefined1 auStack_60 [44];
  char *****apppppcStack_34 [5];
  uint uStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3bf33;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar5 = (char *)func_0x0087a620(uStack_14);
  piVar11 = param_1;
  if (param_1 != (int *)0x0) {
    do {
      pcVar4 = *(code **)(*piVar11 + 0x10);
      _guard_check_icall();
      iVar6 = (*pcVar4)();
      if (iVar6 != 0) {
        pcVar4 = *(code **)(*piVar11 + 0x10);
        _guard_check_icall();
        iVar6 = (*pcVar4)();
        goto LAB_0087d1de;
      }
      piVar1 = piVar11 + 4;
      piVar11 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  iVar6 = 0;
LAB_0087d1de:
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    pcVar12 = "<?xml";
    do {
      if (*pcVar12 == '\0') goto LAB_0087d25d;
      iVar7 = tolower((int)(pcVar5 + -0x11a2690)[(int)pcVar12]);
      if (param_4 == 1) {
        cVar2 = *pcVar12;
      }
      else {
        cVar2 = *pcVar12;
      }
      iVar8 = tolower((int)cVar2);
    } while ((iVar7 == iVar8) &&
            (pcVar12 = pcVar12 + 1, (pcVar5 + -0x11a2690)[(int)pcVar12] != '\0'));
    if (*pcVar12 == '\0') {
LAB_0087d25d:
      if (param_3 != (int *)0x0) {
        func_0x0087a430(pcVar5,param_4);
        iVar6 = param_3[1];
        param_1[1] = *param_3;
        param_1[2] = iVar6;
      }
      func_0x0046a660(&DAT_0112e1b4,0);
      func_0x0046a660(&DAT_0112e1b4,0);
      func_0x0046a660(&DAT_0112e1b4,0);
      pbVar13 = (byte *)(pcVar5 + 5);
joined_r0x0087d2d7:
      if (pbVar13 != (byte *)0x0) {
        do {
          if ((*pbVar13 == 0) || (*pbVar13 == 0x3e)) break;
          pbVar13 = (byte *)func_0x0087a620();
          pcVar5 = "version";
          if ((pbVar13 != (byte *)0x0) && (*pbVar13 != 0)) {
            do {
              if (*pcVar5 == '\0') goto LAB_0087d367;
              iVar6 = tolower((int)(char)(pbVar13 + -0x11425c0)[(int)pcVar5]);
              if (param_4 == 1) {
                cVar2 = *pcVar5;
              }
              else {
                cVar2 = *pcVar5;
              }
              iVar7 = tolower((int)cVar2);
            } while ((iVar6 == iVar7) &&
                    (pcVar5 = pcVar5 + 1, (pbVar13 + -0x11425c0)[(int)pcVar5] != 0));
            if (*pcVar5 != '\0') goto LAB_0087d3ef;
LAB_0087d367:
            memset(auStack_60,0,0x4c);
            func_0x00877c80();
            uStack_8 = 0;
            pbVar13 = (byte *)FUN_0087ca30(pbVar13,param_3,param_4);
            ppppppcVar10 = apppppcStack_34;
            if (0xf < uStack_20) {
              ppppppcVar10 = (char ******)apppppcStack_34[0];
            }
            ppppppcVar9 = ppppppcVar10;
            do {
              cVar2 = *(char *)ppppppcVar9;
              ppppppcVar9 = (char ******)((int)ppppppcVar9 + 1);
            } while (cVar2 != '\0');
            func_0x0046a660(ppppppcVar10,(int)ppppppcVar9 - (int)((int)ppppppcVar10 + 1));
            goto LAB_0087d3d0;
          }
          if (pbVar13 == (byte *)0x0) {
LAB_0087d4c8:
            if (pbVar13 == (byte *)0x0) break;
          }
          else {
LAB_0087d3ef:
            pcVar5 = "encoding";
            if (*pbVar13 == 0) goto LAB_0087d4c8;
            do {
              if (*pcVar5 == '\0') goto LAB_0087d450;
              iVar6 = tolower((int)pcVar5[(int)(pbVar13 + -0x11a2680)]);
              if (param_4 == 1) {
                cVar2 = *pcVar5;
              }
              else {
                cVar2 = *pcVar5;
              }
              iVar7 = tolower((int)cVar2);
            } while ((iVar6 == iVar7) &&
                    (pcVar5 = pcVar5 + 1, pcVar5[(int)(pbVar13 + -0x11a2680)] != '\0'));
            if (*pcVar5 == '\0') {
LAB_0087d450:
              memset(auStack_ac,0,0x4c);
              func_0x00877c80();
              uStack_8 = 1;
              pbVar13 = (byte *)FUN_0087ca30(pbVar13,param_3,param_4);
              ppppppcVar10 = apppppcStack_80;
              if (0xf < uStack_6c) {
                ppppppcVar10 = (char ******)apppppcStack_80[0];
              }
              ppppppcVar9 = ppppppcVar10;
              do {
                cVar2 = *(char *)ppppppcVar9;
                ppppppcVar9 = (char ******)((int)ppppppcVar9 + 1);
              } while (cVar2 != '\0');
              func_0x0046a660(ppppppcVar10,(int)ppppppcVar9 - (int)((int)ppppppcVar10 + 1));
              goto LAB_0087d3d0;
            }
          }
          pcVar5 = "standalone";
          if (*pbVar13 == 0) goto joined_r0x0087d5ba;
          do {
            if (*pcVar5 == '\0') goto LAB_0087d530;
            iVar6 = tolower((int)pcVar5[(int)(pbVar13 + -0x11a2674)]);
            if (param_4 == 1) {
              cVar2 = *pcVar5;
            }
            else {
              cVar2 = *pcVar5;
            }
            iVar7 = tolower((int)cVar2);
          } while ((iVar6 == iVar7) &&
                  (pcVar5 = pcVar5 + 1, pcVar5[(int)(pbVar13 + -0x11a2674)] != '\0'));
          if (*pcVar5 == '\0') goto LAB_0087d530;
          while (bVar3 = *pbVar13, bVar3 != 0) {
            if ((((bVar3 == 0x3e) || (iVar6 = isspace((uint)bVar3), iVar6 != 0)) || (bVar3 == 10))
               || (bVar3 == 0xd)) goto joined_r0x0087d2d7;
            pbVar13 = pbVar13 + 1;
joined_r0x0087d5ba:
            if (pbVar13 == (byte *)0x0) goto LAB_0087d655;
          }
        } while( true );
      }
      goto LAB_0087d655;
    }
  }
  if ((iVar6 != 0) && (*(char *)(iVar6 + 0x40) == '\0')) {
    *(undefined1 *)(iVar6 + 0x40) = 1;
    *(undefined4 *)(iVar6 + 0x44) = 0xb;
    pcVar5 = "Error parsing Declaration.";
    do {
      pcVar12 = pcVar5;
      pcVar5 = pcVar12 + 1;
    } while (*pcVar12 != '\0');
    func_0x0046a660("Error parsing Declaration.",pcVar12 + -0x11a2518);
    *(undefined4 *)(iVar6 + 0x68) = 0xffffffff;
    *(undefined4 *)(iVar6 + 100) = 0xffffffff;
  }
LAB_0087d655:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
LAB_0087d530:
  memset(auStack_f8,0,0x4c);
  func_0x00877c80();
  uStack_8 = 2;
  pbVar13 = (byte *)FUN_0087ca30(pbVar13,param_3,param_4);
  ppppppcVar10 = apppppcStack_cc;
  if (0xf < uStack_b8) {
    ppppppcVar10 = (char ******)apppppcStack_cc[0];
  }
  ppppppcVar9 = ppppppcVar10;
  do {
    cVar2 = *(char *)ppppppcVar9;
    ppppppcVar9 = (char ******)((int)ppppppcVar9 + 1);
  } while (cVar2 != '\0');
  func_0x0046a660(ppppppcVar10,(int)ppppppcVar9 - (int)((int)ppppppcVar10 + 1));
LAB_0087d3d0:
  uStack_8 = 0xffffffff;
  func_0x00877d90();
  goto joined_r0x0087d2d7;
}



undefined * Catch_0087d733(void)

{
  func_0x0046a610(4,1);
  return &DAT_0087d74c;
}



void FUN_0087ecc0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iVar2;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3149d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar2 = param_1;
  func_0x0087ead0(uVar1);
  func_0x00e744e0();
  uStack_8 = 0xffffffff;
  if (param_1 != 0) {
    func_0x008ab812(param_1,1);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(iVar2,uVar1);
  return;
}



undefined4 FUN_0087f230(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglBindAPI";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008ad5d0(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a8560(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_0087f2d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_0087f399;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_0087f38e;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglBindTexImage";
      uStack_c = uVar5;
      cVar2 = func_0x008ad610(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a8580(uVar5,param_1,param_2,param_3);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_0087f38e:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_0087f399:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_0087f3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_2;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglChooseConfig";
      cVar2 = func_0x008ad820(&uStack_38,param_1,auStack_2c,param_3,param_4,param_5);
      if (cVar2 != '\0') {
        func_0x008a86e0(uStack_40,param_1,auStack_2c,param_3,param_4,param_5);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4
FUN_0087f4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglClientWaitSync";
      uStack_c = uVar5;
      cVar2 = func_0x008ad910(&uStack_c,param_1,param_2,param_3,param_4,param_5);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a46b0(uVar5,param_1,param_2,param_3,param_4,param_5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_0087f580(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_0087f649;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_0087f63e;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglCopyBuffers";
      uStack_c = uVar5;
      cVar2 = func_0x008ae0a0(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a8790(uVar5,param_1,param_2,param_3);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_0087f63e:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_0087f649:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_0087f660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreateContext";
      cVar2 = func_0x008ae2f0(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8830(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087f750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_44;
  uStack_44 = param_4;
  uStack_3c = param_5;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreateImage";
      cVar2 = func_0x008af3d0(&uStack_38,param_1,param_2,param_3,uStack_44,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8970(uStack_40,param_1,param_2,param_3,uStack_44,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087f850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_44;
  uStack_44 = param_4;
  uStack_3c = param_5;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreatePbufferFromClientBuffer";
      cVar2 = func_0x008b0820(&uStack_38,param_1,param_2,param_3,uStack_44,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8a80(uStack_40,param_1,param_2,param_3,uStack_44,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087f950(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_3c;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      pcStack_34 = "eglCreatePbufferSurface";
      uStack_38 = uVar5;
      cVar2 = func_0x008b0fb0(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8b90(uVar5,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087fa30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreatePixmapSurface";
      cVar2 = func_0x008b1450(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8ca0(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087fb20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreatePlatformPixmapSurface";
      cVar2 = func_0x008b17a0(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8dc0(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087fc10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreatePlatformWindowSurface";
      cVar2 = func_0x008b18e0(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8ee0(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087fd00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_3c;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      pcStack_34 = "eglCreateSync";
      uStack_38 = uVar5;
      cVar2 = func_0x008b1cd0(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a8ff0(uVar5,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_0087fde0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreateWindowSurface";
      cVar2 = func_0x008b21a0(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a9120(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_0087fed0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDestroyContext";
      uStack_c = uVar5;
      cVar2 = func_0x008b26a0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9230(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_0087ff80(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDestroyImage";
      uStack_c = uVar5;
      cVar2 = func_0x008b2790(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9360(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880030(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_008800f1;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_008800e6;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDestroySurface";
      uStack_c = uVar5;
      cVar2 = func_0x008b2ab0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a9420(uVar5,param_1,param_2);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_008800e6:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_008800f1:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880100(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglDestroySync";
      uStack_c = uVar5;
      cVar2 = func_0x008ad910(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a5280(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008801b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetConfigAttrib";
      uStack_c = uVar5;
      cVar2 = func_0x008b3280(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9540(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetConfigs";
      uStack_c = uVar5;
      cVar2 = func_0x008b3380(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9570(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880330(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglGetCurrentContext";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = FUN_004673b0(&uStack_c);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9690(uVar5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008803d0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglGetCurrentDisplay";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = FUN_004673b0(&uStack_c);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a96c0(uVar5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880470(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglGetCurrentSurface";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b3460(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a96f0(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880510(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglGetDisplay";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = FUN_004673b0(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9730(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008805b0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglGetError";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = FUN_004673b0(&uStack_c);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a97a0(uVar5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_00880650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_3c;
  uStack_3c = param_3;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      pcStack_34 = "eglGetPlatformDisplay";
      uStack_30 = 0;
      uStack_38 = uVar5;
      cVar2 = func_0x008b3b30(&uStack_38,param_1,param_2,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a5c50(uVar5,param_1,param_2,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 FUN_00880730(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglGetProcAddress";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = FUN_004673b0(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a97c0(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008807d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglGetSyncAttrib";
      uStack_c = uVar5;
      cVar2 = func_0x008b46d0(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9890(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglInitialize";
      uStack_c = uVar5;
      cVar2 = func_0x008b49d0(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9960(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00880a25;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00880a1a;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglMakeCurrent";
      uStack_c = uVar5;
      cVar2 = func_0x008b50a0(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008a9a20(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00880a1a:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00880a25:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880a30(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglQueryAPI";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = FUN_004673b0(&uStack_c);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9d60(uVar5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryContext";
      uStack_c = uVar5;
      cVar2 = func_0x008b5c40(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9d80(uVar5,param_1,param_2,param_3,param_4);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880b90(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQueryString";
      uStack_c = uVar5;
      cVar2 = func_0x008b6670(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a9e50(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00880d15;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00880d0a;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglQuerySurface";
      uStack_c = uVar5;
      cVar2 = func_0x008b6b70(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008aa0e0(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00880d0a:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00880d15:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880d20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00880de9;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00880dde;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglReleaseTexImage";
      uStack_c = uVar5;
      cVar2 = func_0x008b7170(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008aa210(uVar5,param_1,param_2,param_3);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00880dde:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00880de9:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880e00(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglReleaseThread";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = FUN_004673b0(&uStack_c);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008aa360(uVar5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00880ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_00880f75;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00880f6a;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSurfaceAttrib";
      uStack_c = uVar5;
      cVar2 = func_0x008b8530(&uStack_c,param_1,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x008aa4a0(uVar5,param_1,param_2,param_3,param_4);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
LAB_00880f6a:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_00880f75:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



int FUN_00880f80(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008a6340(param_1,param_2);
  if (iVar3 != 1) {
    return iVar3;
  }
  iVar3 = func_0x008aaf40();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    if (*(int *)(iVar3 + 0x2c) == 0x7fffffff) {
      *(undefined4 *)(iVar3 + 0x2c) = 0x7ffffffe;
      goto LAB_0088105b;
    }
    unaff_EDI = func_0x008aaf20();
    iVar4 = func_0x00e7307f(unaff_EDI);
    if (iVar4 != 0) goto LAB_00881050;
    iVar4 = *(int *)(unaff_EDI + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSwapBuffers";
      uStack_c = uVar5;
      cVar2 = func_0x008b88e0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = func_0x008aa5c0(uVar5,param_1,param_2);
      }
      func_0x00e730b2(unaff_EDI);
      func_0x00e730b2(iVar3);
      return iVar4;
    }
  }
  else {
LAB_00881050:
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(unaff_EDI + 0x2c) = iVar4 + -1;
LAB_0088105b:
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}



undefined4 FUN_00881070(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglSwapInterval";
      uStack_c = uVar5;
      cVar2 = func_0x008b8d50(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008aa6f0(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00881120(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglTerminate";
      uStack_c = uVar5;
      cVar2 = func_0x008b49d0(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008aa7d0(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008811c0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglWaitClient";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b8fc0(&uStack_c);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008aa8f0(uVar5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00881260(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglWaitGL";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b8fc0(&uStack_c);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008aaa20(uVar5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00881300(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglWaitNative";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008b9070(&uStack_c,param_1);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008aab40(uVar5,param_1);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008813a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglWaitSync";
      uStack_c = uVar5;
      cVar2 = func_0x008b9140(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a83d0(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4
FUN_00881460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglClientWaitSyncKHR";
      uStack_c = uVar5;
      cVar2 = func_0x008ada00(&uStack_c,param_1,param_2,param_3,param_4,param_5);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a46b0(uVar5,param_1,param_2,param_3,param_4,param_5);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_00881530(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      uStack_4 = func_0x008ad130(param_1);
      pcStack_8 = "eglCopyMetalSharedEventANGLE";
      uStack_c = uVar5;
      cVar2 = func_0x008ae1b0(&uStack_c,param_1,param_2);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a47f0(uVar5,param_1,param_2);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



undefined4 FUN_008815e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      pcStack_8 = "eglCreateDeviceANGLE";
      uStack_4 = 0;
      uStack_c = uVar5;
      cVar2 = func_0x008af330(&uStack_c,param_1,param_2,param_3);
      if (cVar2 == '\0') {
        func_0x00e730b2(iVar3);
        return 0;
      }
      uVar5 = func_0x008a4910(uVar5,param_1,param_2,param_3);
      func_0x00e730b2(iVar3);
      return uVar5;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}



void FUN_008816a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_44;
  uStack_44 = param_4;
  uStack_3c = param_5;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreateImageKHR";
      cVar2 = func_0x008b03c0(&uStack_38,param_1,param_2,param_3,uStack_44,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a49d0(uStack_40,param_1,param_2,param_3,uStack_44,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_008817a0(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_38;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uVar5 = func_0x008aae70();
      func_0x008ac960(auStack_2c,param_1);
      pcStack_34 = "eglCreateNativeClientBufferANDROID";
      uStack_30 = 0;
      uStack_38 = uVar5;
      cVar2 = func_0x008b0630(&uStack_38,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a4b00(uVar5,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00881870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [40];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_40;
  uStack_3c = param_4;
  iVar3 = func_0x008aaf20();
  iVar4 = func_0x00e7307f(iVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x2c);
    if (iVar4 != 0x7fffffff) {
      uStack_40 = func_0x008aae70();
      func_0x008ac960(auStack_2c,uStack_3c);
      uStack_30 = func_0x008ad130(param_1);
      uStack_38 = uStack_40;
      pcStack_34 = "eglCreatePlatformPixmapSurfaceEXT";
      cVar2 = func_0x008b17b0(&uStack_38,param_1,param_2,param_3,auStack_2c);
      if (cVar2 != '\0') {
        func_0x008a4bb0(uStack_40,param_1,param_2,param_3,auStack_2c);
      }
      func_0x008ac870();
      func_0x00e730b2(iVar3);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar4 = func_0x00e7304a(5);
  }
  *(int *)(iVar3 + 0x2c) = iVar4 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00881960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

