  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x210);
  }
  return param_1;
}



undefined4 FUN_008df3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  cVar1 = func_0x00967c80();
  if (cVar1 != '\0') {
    cVar1 = func_0x008e03c0();
    if (cVar1 == '\0') {
      func_0x0094a110(param_1);
      return param_1;
    }
  }
  iVar2 = func_0x008df8a0(param_3);
  func_0x00940020(iVar2 + 0xc);
  return unaff_ESI;
}



undefined4 __fastcall FUN_008df420(int param_1)

{
  return *(undefined4 *)(param_1 + 0x128);
}



undefined4 __thiscall FUN_008df430(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = func_0x00967c80();
  if (cVar1 != '\0') {
    return 0;
  }
  iVar4 = *(int *)(param_2 + 4);
  uVar2 = func_0x00967be0();
  cVar1 = func_0x0093d080(uVar2);
  if (cVar1 != '\0') {
    iVar3 = func_0x0093cef0(uVar2);
    iVar4 = iVar3 + iVar4 * 6;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x10 + iVar4 * 0x1c);
}



undefined8 * FUN_008df4a0(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_retaddr;
  
  cVar2 = func_0x00967c80();
  if (cVar2 != '\0') {
    cVar2 = func_0x008e03c0();
    if (cVar2 == '\0') {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      return param_1;
    }
  }
  puVar3 = (undefined8 *)func_0x008df8a0(param_2);
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *unaff_retaddr = *puVar3;
  *(undefined4 *)(unaff_retaddr + 1) = uVar1;
  return unaff_retaddr;
}



undefined4 __fastcall FUN_008df5c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}



undefined4 __fastcall FUN_008df890(int param_1)

{
  return *(undefined4 *)(param_1 + -8);
}



int __fastcall FUN_008dfa10(int param_1)

{
  return param_1 + 0xbc;
}



undefined4 __fastcall FUN_008dfa90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



float10 __fastcall FUN_008dfaa0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x14);
}



float10 __fastcall FUN_008dfad0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x1c);
}



float10 __fastcall FUN_008dfc10(int param_1)

{
  return (float10)*(float *)(param_1 + 0x18);
}



int __fastcall FUN_008dfde0(int param_1)

{
  return param_1 + 0x80;
}



undefined4 __fastcall FUN_008dfe70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



undefined1 __fastcall FUN_008e02a0(int param_1)

{
  return *(undefined1 *)(param_1 + 200);
}



undefined4 __thiscall FUN_008e02b0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = func_0x00967c80();
  if (cVar1 == '\0') {
    iVar4 = func_0x008df8a0(param_3);
    return *(undefined4 *)(iVar4 + 0x18);
  }
  iVar4 = *(int *)(param_3 + 4);
  cVar1 = '\a';
  while( true ) {
    cVar2 = func_0x0093d080(cVar1);
    iVar3 = iVar4;
    if (cVar2 != '\0') {
      iVar3 = func_0x0093cef0(cVar1);
      iVar3 = iVar3 + iVar4 * 6;
    }
    if (*(int *)(*(int *)(param_1 + 0xcc) + 0x18 + iVar3 * 0x1c) == 0) break;
    cVar1 = cVar1 + '\x01';
    if (cVar1 == '\r') {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_008e04d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_4;
  
  iStack_4 = param_1;
  cVar2 = func_0x009235e0();
  if (cVar2 != '\0') {
    uVar3 = FUN_009236b0(param_2,param_3,param_4);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    return 1;
  }
  cVar2 = func_0x00967c80();
  if (cVar2 != '\0') {
    cVar2 = func_0x008e03c0();
    if (cVar2 == '\0') {
      func_0x0094a110(&iStack_4);
      goto LAB_008e0546;
    }
  }
  iVar4 = func_0x008df8a0(param_4);
  func_0x00940020(iVar4 + 0xc);
LAB_008e0546:
  pcVar1 = *(code **)(iStack_4 + 100);
  _guard_check_icall(param_2 + 0x1c,param_2 + 0x1278);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_008e07a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + -0x14) = *(int *)(param_1 + -0x14) + 1;
  if (*(int *)(param_1 + 0x19c) == *(int *)(param_1 + 0x1a0)) {
    func_0x008defd0(*(int *)(param_1 + 0x19c) + 1);
  }
  iVar1 = *(int *)(param_1 + 0x19c);
  iVar2 = *(int *)(param_1 + 0x198);
  *(undefined4 *)(iVar2 + iVar1 * 8) = param_3;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_4;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | 0x200000;
    *(undefined1 *)(param_1 + 0xbe) = 1;
  }
  return;
}



void __thiscall FUN_008e0840(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  int aiStack_28 [3];
  undefined4 uStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3de01;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    func_0x0092fef0(aiStack_28,param_2,0x3084,uVar5);
    uStack_8 = 0;
    if ((aiStack_28[0] != 0x3000) && (cVar4 = func_0x00952a70(3), cVar4 != '\0')) {
      iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\Texture.cpp"
                              ,"gl::Texture::onDestroy",0x301,3);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      uStack_14 = 1;
      uVar7 = func_0x0046b6e0(iVar6 + 0x10,"Unhandled internal error: ",aiStack_28);
      func_0x00920000(uVar7);
      func_0x00952760();
    }
    uStack_8 = 0xffffffff;
    func_0x008a4620();
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  if (*(int *)(param_1 + 0x168) != 0) {
    func_0x00924340();
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  uStack_1c = 0;
  piStack_18 = (int *)0x0;
  uStack_8 = 2;
  func_0x00923a10(param_2,&uStack_1c);
  piVar2 = *(int **)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x108) = 0;
  uStack_8._0_1_ = 3;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(param_2);
      (*pcVar3)();
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(1);
      (*pcVar3)();
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (*(int **)(param_1 + 0x140) != (int *)0x0) {
    pcVar3 = *(code **)(**(int **)(param_1 + 0x140) + 0xc);
    _guard_check_icall(param_2);
    (*pcVar3)();
  }
  piVar2 = piStack_18;
  uStack_8 = 4;
  if (piStack_18 != (int *)0x0) {
    piVar1 = piStack_18 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)*piStack_18;
      _guard_check_icall(uStack_1c);
      (*pcVar3)();
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(1);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e0a20(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar7 = *(int *)(param_1 + 0x19c) - 1;
  if (uVar7 != 0) {
    iVar3 = *(int *)(param_1 + 0x198);
    do {
      iVar4 = *(int *)(iVar3 + uVar8 * 8);
      puVar2 = (undefined4 *)(iVar3 + uVar8 * 8);
      if (((iVar4 != 0 || puVar2[1] != 0) && (iVar4 == param_3)) && (puVar2[1] == param_4)) {
        uVar5 = *(undefined4 *)(iVar3 + 4 + uVar7 * 8);
        *puVar2 = *(undefined4 *)(iVar3 + uVar7 * 8);
        puVar2[1] = uVar5;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  piVar1 = (int *)(param_1 + -0x14);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    pcVar6 = (code *)**(undefined4 **)(param_1 + -0x18);
    _guard_check_icall(param_2);
    (*pcVar6)();
    pcVar6 = *(code **)(*(int *)(param_1 + -0x18) + 4);
    _guard_check_icall(1);
    (*pcVar6)();
  }
  return;
}



void __thiscall FUN_008e0ac0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_EDI;
  int unaff_retaddr;
  uint uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  switch(param_3) {
  case 1:
    if (param_2 != 2) {
      uStack_2c = 1;
      uStack_30 = 0x8e0af7;
      func_0x008e28b0();
      return;
    }
    break;
  case 2:
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 0x800000;
    uStack_2c = 2;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    uStack_30 = 0x8e0b24;
    func_0x00953460();
    if (unaff_retaddr == 0) {
      uStack_30 = param_3;
      uStack_34 = 0x8e0b38;
      func_0x00923920();
      return;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 0x800000;
    uStack_2c = 2;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    uStack_30 = 0x8e0b75;
    func_0x00953460();
    uStack_30 = 1;
    uStack_34 = 0x8e0b7f;
    func_0x00953460();
    if (param_1 == 0x30) {
      uStack_34 = param_3;
      func_0x00923920();
      return;
    }
    if (param_1 == 0x32) {
      uStack_34 = 0xee;
      uVar2 = func_0x00953ea0();
      uStack_34 = 0;
      uVar3 = func_0x008df930(0xf);
      func_0x008dd340(uVar3);
      uStack_34 = uVar2 / *(uint *)(unaff_EDI + 0x2c);
      func_0x008e1950(0xf,0,&uStack_34);
      return;
    }
    break;
  case 6:
    *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) | 0x800000;
    uStack_2c = 2;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    uStack_30 = 0x8e0c73;
    func_0x00953460();
    break;
  case 0xd:
    if (param_2 == 0) {
      uStack_2c = 0xd;
      uStack_30 = 0x8e0c02;
      func_0x00953460();
      return;
    }
    break;
  case 0xe:
    piVar1 = *(int **)(param_1 + 0xa0);
    for (piVar4 = *(int **)(param_1 + 0x9c); piVar4 != piVar1; piVar4 = piVar4 + 7) {
      if (piVar4[2] * piVar4[1] * *piVar4 != 0) {
        piVar4[6] = 1;
      }
    }
    *(undefined4 *)(param_1 + 0xcc) = 1;
    return;
  }
  return;
}



void FUN_008e1ce0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined4 uStack_c;
  
  cVar2 = func_0x00967c80();
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 4);
    uStack_20 = CONCAT71(uStack_20._1_7_,7);
    do {
      uVar5 = param_3;
      uVar3 = func_0x00967a10((int)&uStack_20 + 4,(undefined4)uStack_20,uVar1,param_3);
      FUN_008e1ce0(param_1,uVar3,uVar5);
      cVar2 = (char)uStack_20 + '\x01';
      uStack_20 = CONCAT71(uStack_20._1_7_,cVar2);
    } while (cVar2 != '\r');
    return;
  }
  puVar4 = (undefined8 *)func_0x008df8a0(param_2);
  uStack_20 = *puVar4;
  uStack_18 = *(undefined4 *)(puVar4 + 1);
  func_0x00940020((int)puVar4 + 0xc);
  uStack_14 = *(undefined4 *)(puVar4 + 2);
  uStack_10 = *(undefined1 *)((int)puVar4 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 4);
  uStack_c = param_1;
  uVar5 = func_0x00967be0();
  func_0x008e1950(uVar5,uVar1,&stack0xffffffdc);
  return;
}



void __thiscall FUN_008e1da0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  if ((undefined4 *)(param_1 + 0xbc) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0xd8) + 0x70);
  _guard_check_icall(param_2);
  (*pcVar2)();
  return;
}



undefined4 * __thiscall FUN_008e2d20(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -6;
  *puVar5 = gl::TransformFeedback::vftable;
  *param_1 = gl::TransformFeedback::vftable;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0xe];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0xe] = 0;
  func_0x008e2eb0();
  uVar2 = param_1[6];
  if (0xf < uVar2) {
    iVar3 = param_1[1];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x58);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_008e2d30(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *param_1 = gl::TransformFeedback::vftable;
  param_1[6] = gl::TransformFeedback::vftable;
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x14];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x14] = 0;
  func_0x008e2eb0();
  uVar2 = param_1[0xc];
  if (0xf < uVar2) {
    iVar3 = param_1[7];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[6] = gl::LabeledObject::vftable;
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



void __thiscall FUN_008e36c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e000;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar5 != 0) {
    piVar2 = (int *)(iVar5 + 0x160);
    *piVar2 = *piVar2 + -1;
    if ((*piVar2 == 0) && (*(char *)(iVar5 + 0x15c) != '\0')) {
      func_0x00980970(param_2,uVar4);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x44);
  uStack_14 = 0;
  if (*(int *)(param_1 + 0x48) - iVar5 >> 4 != 0) {
    iStack_18 = 0;
    do {
      piVar2 = *(int **)(iStack_18 + 4 + iVar5);
      *(undefined4 *)(iStack_18 + 4 + iVar5) = 0;
      uStack_8 = 0;
      if (piVar2 != (int *)0x0) {
        piVar1 = piVar2 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          pcVar3 = *(code **)*piVar2;
          _guard_check_icall(param_2);
          (*pcVar3)();
          pcVar3 = *(code **)(*piVar2 + 4);
          _guard_check_icall(1);
          (*pcVar3)();
        }
      }
      *(undefined4 *)(iStack_18 + 8 + iVar5) = 0;
      uStack_14 = uStack_14 + 1;
      *(undefined4 *)(iStack_18 + 0xc + iVar5) = 0;
      iStack_18 = iStack_18 + 0x10;
      iVar5 = *(int *)(param_1 + 0x44);
      uStack_8 = 0xffffffff;
    } while (uStack_14 < (uint)(*(int *)(param_1 + 0x48) - iVar5 >> 4));
  }
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    pcVar3 = *(code **)(**(int **)(param_1 + 0x50) + 4);
    _guard_check_icall(param_2);
    (*pcVar3)();
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_008e38e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 4) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x38) + 0x1c);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



void __fastcall FUN_008e4320(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar4 = param_1[2] - iVar1 & 0xffffffe0;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



undefined4 * __thiscall FUN_008e4560(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -2;
  *param_1 = angle::ObserverBindingBase::vftable;
  *puVar1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x14);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_008e4570(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -1;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = gl::VertexArray::vftable;
  *param_1 = gl::VertexArray::vftable;
  param_1[1] = gl::VertexArray::vftable;
  func_0x008c2760(uVar1);
  func_0x008e4410();
  func_0x00953210();
  *param_1 = gl::LabeledObject::vftable;
  func_0x00953200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x16c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_008e4580(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -2;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = gl::VertexArray::vftable;
  param_1[-1] = gl::VertexArray::vftable;
  *param_1 = gl::VertexArray::vftable;
  func_0x008c2760(uVar1);
  func_0x008e4410();
  func_0x00953210();
  param_1[-1] = gl::LabeledObject::vftable;
  func_0x00953200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x16c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_008e4590(undefined4 *param_1,byte param_2)

{
  param_1[2] = angle::ObserverBindingBase::vftable;
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008e45c0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::ObserverBindingBase::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008e45f0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = gl::VertexArray::vftable;
  param_1[1] = gl::VertexArray::vftable;
  param_1[2] = gl::VertexArray::vftable;
  func_0x008c2760(uVar1);
  func_0x008e4410();
  func_0x00953210();
  param_1[1] = gl::LabeledObject::vftable;
  func_0x00953200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x16c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __fastcall FUN_008e4ed0(int param_1)

{
  return param_1 + 0x38;
}



void __thiscall FUN_008e5540(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  
  switch(param_3) {
  case 0:
    if (param_2 == 0x10) {
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 0x10 + param_2 * 0x18);
    if (((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x9c))) &&
       (*(int *)(iVar1 + 0x9c) != *(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0xa0))) {
      *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 1 << (param_2 & 0x1f);
      return;
    }
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & ~(1 << (param_2 & 0x1f));
    return;
  default:
    goto LAB_008e57bb;
  case 3:
    if ((param_2 != 0x10) && (*(char *)(param_1 + 0x164) != '\0')) {
      iVar1 = *(int *)(param_1 + 0x74);
      uVar7 = *(uint *)(iVar1 + 0x14 + param_2 * 0x18);
      if (uVar7 != 0) {
        do {
          uVar3 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          func_0x009947c0(iVar1 + param_2 * 0x18);
          uVar7 = uVar7 & ~(1 << (uVar3 & 0x1f));
        } while (uVar7 != 0);
        goto LAB_008e57ad;
      }
    }
    break;
  case 4:
    if (param_2 == 0x10) goto LAB_008e56d2;
    iVar1 = *(int *)(param_1 + 0x74) + param_2 * 0x18;
    iVar2 = *(int *)(iVar1 + 0x10);
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x80) == '\0')) {
      bVar4 = false;
      if (iVar2 != 0) goto LAB_008e5653;
LAB_008e5663:
      bVar6 = false;
      if (iVar2 != 0) goto LAB_008e566c;
LAB_008e5676:
      bVar5 = false;
    }
    else {
      bVar4 = true;
LAB_008e5653:
      if (*(char *)(iVar2 + 0xa4) == '\0') goto LAB_008e5663;
      bVar6 = true;
LAB_008e566c:
      if ((*(byte *)(iVar2 + 0x78) & 0x40) == 0) goto LAB_008e5676;
      bVar5 = true;
    }
    if (bVar4) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | *(uint *)(iVar1 + 0x14);
    }
    else {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & ~*(uint *)(iVar1 + 0x14) & 0xffff;
    }
    if ((bVar6) && (bVar5)) {
      *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & ~*(uint *)(iVar1 + 0x14) & 0xffff;
    }
    else {
      *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | *(uint *)(iVar1 + 0x14);
    }
    *(uint *)(param_1 + 0x9c) =
         *(uint *)(param_1 + 0x80) & *(uint *)(param_1 + 0x98) & *(uint *)(param_1 + 0x94);
LAB_008e56d2:
    func_0x00953460(4);
    return;
  case 5:
    func_0x008e57e0(1,param_2);
    if (param_2 == 0x10) goto LAB_008e579b;
    iVar1 = *(int *)(param_1 + 0x74) + param_2 * 0x18;
    iVar2 = *(int *)(iVar1 + 0x10);
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x80) == '\0')) {
      bVar4 = false;
      if (iVar2 != 0) goto LAB_008e571c;
LAB_008e572c:
      bVar6 = false;
      if (iVar2 != 0) goto LAB_008e5735;
LAB_008e573f:
      bVar5 = false;
    }
    else {
      bVar4 = true;
LAB_008e571c:
      if (*(char *)(iVar2 + 0xa4) == '\0') goto LAB_008e572c;
      bVar6 = true;
LAB_008e5735:
      if ((*(byte *)(iVar2 + 0x78) & 0x40) == 0) goto LAB_008e573f;
      bVar5 = true;
    }
    if (bVar4) {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | *(uint *)(iVar1 + 0x14);
    }
    else {
      *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & ~*(uint *)(iVar1 + 0x14) & 0xffff;
    }
    if ((bVar6) && (bVar5)) {
      *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & ~*(uint *)(iVar1 + 0x14) & 0xffff;
    }
    else {
      *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | *(uint *)(iVar1 + 0x14);
    }
    *(uint *)(param_1 + 0x9c) =
         *(uint *)(param_1 + 0x80) & *(uint *)(param_1 + 0x94) & *(uint *)(param_1 + 0x98);
LAB_008e579b:
    func_0x00953460(5);
    return;
  case 6:
LAB_008e57ad:
  }
  func_0x008e57e0(0,param_2);
LAB_008e57bb:
  return;
}



undefined4 __thiscall FUN_008e5830(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 0x38) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x130) + 0xc);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



void __thiscall FUN_008e6cd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x1798);
    *(int *)(param_1 + 0x1798) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x1798);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x1798) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e6dd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17a0);
    *(int *)(param_1 + 0x17a0) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17a0);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17a0) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e6ed0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 0x150c);
  piVar3 = *(int **)(iVar2 + 100);
  if (piVar3 != (int *)0x0) {
    uVar6 = 0;
    uVar7 = piVar3[0x12] - 1;
    if (uVar7 != 0) {
      iVar4 = piVar3[0x11];
      do {
        if (*(uint *)(uVar6 * 4 + iVar4) == (-(uint)(iVar2 != -0x60) & iVar2 + 0x68U)) {
          *(undefined4 *)(uVar6 * 4 + iVar4) = *(undefined4 *)(iVar4 + uVar7 * 4);
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    piVar3[0x12] = piVar3[0x12] + -1;
    func_0x009688e0(*(undefined4 *)(param_1 + 0x150c),0x10);
    if (*(char *)(param_2 + 0x1345) != '\0') {
      piVar3[0x26] = piVar3[0x26] + -1;
    }
    piVar1 = piVar3 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar5 = *(code **)*piVar3;
      _guard_check_icall(param_2);
      (*pcVar5)();
      pcVar5 = *(code **)(*piVar3 + 4);
      _guard_check_icall(1);
      (*pcVar5)();
    }
  }
  *(int *)(*(int *)(param_1 + 0x150c) + 100) = param_3;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x150c);
    if (*(int *)(param_3 + 0x48) == *(int *)(param_3 + 0x4c)) {
      func_0x008e4d70(*(int *)(param_3 + 0x48) + 1);
    }
    *(uint *)(*(int *)(param_3 + 0x44) + *(int *)(param_3 + 0x48) * 4) =
         -(uint)(iVar2 != -0x60) & iVar2 + 0x68U;
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
    func_0x009680e0(*(undefined4 *)(param_1 + 0x150c),0x10);
    if (*(char *)(param_1 + 0x1345) != '\0') {
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  *(uint *)(*(int *)(param_1 + 0x150c) + 0xa0) = *(uint *)(*(int *)(param_1 + 0x150c) + 0xa0) | 1;
  *(undefined4 *)(*(int *)(param_1 + 0x150c) + 0x14c) = 3;
  *(uint *)(param_1 + 0x1c8c) = *(uint *)(param_1 + 0x1c8c) | 0x80;
  return;
}



void __thiscall FUN_008e7010(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17d8);
    *(int *)(param_1 + 0x17d8) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17d8);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17d8) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e7110(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x1788);
    *(int *)(param_1 + 0x1788) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x1788);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x1788) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e7210(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3da60;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) != '\0') {
    func_0x008e6000(param_2,param_1 + 0x17dc,0,param_3);
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  piVar2 = *(int **)(param_1 + 0x17e0);
  *(int *)(param_1 + 0x17e0) = param_3;
  uStack_8 = 0;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)*piVar2;
      _guard_check_icall(param_2,uVar4);
      (*pcVar3)();
      pcVar3 = *(code **)(*piVar2 + 4);
      _guard_check_icall(1);
      (*pcVar3)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e72d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x1790);
    *(int *)(param_1 + 0x1790) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x1790);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x1790) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
  }
  *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x400000;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e73d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17a8);
    *(int *)(param_1 + 0x17a8) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17a8);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17a8) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
  }
  *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x2000;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e74d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17b0);
    *(int *)(param_1 + 0x17b0) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17b0);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17b0) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
  }
  *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x1000;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e75d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17c0);
    *(int *)(param_1 + 0x17c0) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17c0);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17c0) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
  }
  *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x100;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e76d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17c8);
    *(int *)(param_1 + 0x17c8) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17c8);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17c8) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
  }
  *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x40;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e77d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17d0);
    *(int *)(param_1 + 0x17d0) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17d0);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17d0) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
  }
  *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x200000;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008e78d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e1a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(char *)(param_2 + 0x1345) == '\0') {
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
    piVar2 = *(int **)(param_1 + 0x17e8);
    *(int *)(param_1 + 0x17e8) = param_3;
    uStack_8 = 0;
    if (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x17e8);
    if (piVar2 != (int *)0x0) {
      piVar2[0x26] = piVar2[0x26] + -1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar3 = *(code **)*piVar2;
        _guard_check_icall(param_2,uVar4);
        (*pcVar3)();
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall(1);
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x17e8) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
      *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
    }
  }
  *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x100000;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __fastcall FUN_008e79d0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = gl::BindingPointer<>::vftable;
  return param_1;
}



void __fastcall FUN_008e8830(undefined4 *param_1)

{
  *param_1 = angle::BindingPointer<>::vftable;
  return;
}



void __fastcall FUN_008e8a80(int *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)*param_1;
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[1];
    for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
      pcVar2 = *(code **)*puVar6;
      _guard_check_icall(0);
      (*pcVar2)();
    }
    iVar3 = *param_1;
    uVar5 = param_1[2] - iVar3 & 0xfffffff8;
    iVar4 = iVar3;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void FUN_008e8b00(void)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 * __thiscall FUN_008e8d20(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008e8d50(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008e8d80(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008e8db0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008e8de0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8e10(undefined4 param_1,byte param_2)

{
  func_0x008f2d20();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8e30(undefined4 param_1,byte param_2)

{
  func_0x008f2d90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8e50(undefined4 param_1,byte param_2)

{
  func_0x008f2e00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8e70(undefined4 param_1,byte param_2)

{
  func_0x008f2e70();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8e90(undefined4 param_1,byte param_2)

{
  func_0x008f2ee0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8eb0(undefined4 param_1,byte param_2)

{
  func_0x008f2f50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8ed0(undefined4 param_1,byte param_2)

{
  func_0x008f2fc0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8ef0(undefined4 param_1,byte param_2)

{
  func_0x008f3030();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8f10(undefined4 param_1,byte param_2)

{
  func_0x008f30a0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8f30(undefined4 param_1,byte param_2)

{
  func_0x008f3110();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8f50(undefined4 param_1,byte param_2)

{
  func_0x008f3180();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8f70(undefined4 param_1,byte param_2)

{
  func_0x008f3200();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8f90(undefined4 param_1,byte param_2)

{
  func_0x008f3270();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



undefined4 __thiscall FUN_008e8fb0(undefined4 param_1,byte param_2)

{
  func_0x008f32e0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



void __thiscall FUN_008f1250(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_50;
  int *piStack_4c;
  int *piStack_48;
  int iStack_44;
  int iStack_2c;
  int iStack_28;
  int iStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_50;
  uStack_50 = param_2;
  piVar7 = (int *)(param_1 + 0x1c94);
  piVar5 = (int *)(param_1 + 0x1ca0);
  piVar3 = piVar7;
  while( true ) {
    piStack_4c = piVar7;
    piStack_48 = piVar5;
    if (piVar3 == piVar5) goto LAB_008f136d;
    if (*piVar3 != 0) break;
    piVar3 = piVar3 + 1;
  }
  func_0x008c22f0(piVar7,0);
  func_0x008c22f0(piVar7,3);
  uVar1 = uStack_50;
  if (iStack_2c != iStack_c) {
    do {
      iVar6 = iStack_44 * 0x20 + iStack_28;
      if (*(int *)(param_1 + 0x14f8) != 0) {
        cVar2 = *(char *)(*(int *)(param_1 + 0x14f8) + 0x1d4 + iVar6);
        uStack_50 = CONCAT31(uStack_50._1_3_,cVar2);
        if (((cVar2 == '\v') || (iVar4 = func_0x008ecab0(uStack_50,iVar6), iVar4 == 0)) ||
           (cVar2 = func_0x008e0570(uVar1,*(undefined4 *)
                                           (*(int *)(param_1 + 0x1734) + 4 + iVar6 * 8)),
           cVar2 == '\0')) {
          if (*(int *)(param_1 + 0x159c + iVar6 * 4) != 0) {
            *(undefined4 *)(param_1 + 0x159c + iVar6 * 4) = 0;
          }
        }
        else {
          *(int *)(param_1 + 0x159c + iVar6 * 4) = iVar4;
        }
        *(uint *)(param_1 + 0x1c84) = *(uint *)(param_1 + 0x1c84) | 0x20000;
      }
      func_0x008c2db0();
      piVar5 = piStack_48;
      piVar7 = piStack_4c;
    } while (iStack_2c != iStack_c);
  }
  do {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  } while (piVar7 != piVar5);
LAB_008f136d:
  FUN_008ab370();
  return;
}



void FUN_008f1480(undefined4 param_1)

{
  func_0x0098cb10(param_1);
  return;
}



void FUN_008f14a0(int param_1)

{
  func_0x0098ee30(*(char *)(param_1 + 0x18ac) == '\0');
  func_0x0098ee50(param_1,0x8ca9,param_1);
  return;
}



void __thiscall FUN_008f14e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_44 [6];
  int iStack_2c;
  int iStack_28;
  int iStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)aiStack_44;
  piVar3 = (int *)(param_1 + 0x1cb8);
  piVar1 = piVar3;
  while( true ) {
    if (piVar1 == (int *)(param_1 + 0x1cc4)) goto LAB_008f159d;
    if (*piVar1 != 0) break;
    piVar1 = piVar1 + 1;
  }
  func_0x008c22f0(piVar3,0);
  func_0x008c22f0(piVar3,3);
  if (iStack_2c != iStack_c) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1740) + 4 + (aiStack_44[0] * 0x20 + iStack_28) * 0x1c);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x13c) != 0)) &&
         (iVar2 = func_0x008e2910(param_2,0x10), iVar2 == 1)) {
        FUN_008ab370();
        return;
      }
      func_0x008c2db0();
    } while (iStack_2c != iStack_c);
  }
  do {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  } while (piVar3 != (int *)(param_1 + 0x1cc4));
LAB_008f159d:
  FUN_008ab370();
  return;
}



void __thiscall FUN_008f15d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_44 [8];
  int iStack_3c;
  int iStack_38;
  int iStack_1c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_44;
  iVar1 = *(int *)(param_1 + 0x14f8) + 0x300;
  func_0x008c22f0(iVar1);
  func_0x008c22f0(iVar1,3);
  if (iStack_3c != iStack_1c) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x1740) + 4 + iStack_38 * 0x1c) != 0) {
        iVar1 = func_0x008dee80(param_2);
        if (iVar1 == 1) {
          FUN_008ab370();
          return;
        }
      }
      func_0x008c2db0();
    } while (iStack_3c != iStack_1c);
  }
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_008f1690(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14ec) != 0) {
    uVar1 = func_0x00987a80(param_2);
    return uVar1;
  }
  return 0;
}



undefined4 __thiscall FUN_008f16b0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14f4) != 0) {
    func_0x008d92a0(param_2);
  }
  return 0;
}



void FUN_008f16d0(undefined4 param_1)

{
  func_0x0098cbd0(param_1);
  return;
}



void FUN_008f16f0(undefined4 param_1,undefined4 param_2)

{
  func_0x0098ee50(param_1,0x8ca8,param_2);
  return;
}



void __thiscall FUN_008f1710(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_44 [6];
  int iStack_2c;
  int iStack_28;
  int iStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)aiStack_44;
  piVar3 = (int *)(param_1 + 0x1cac);
  piVar1 = piVar3;
  while( true ) {
    if (piVar1 == (int *)(param_1 + 0x1cb8)) goto LAB_008f17bd;
    if (*piVar1 != 0) break;
    piVar1 = piVar1 + 1;
  }
  func_0x008c22f0(piVar3,0);
  func_0x008c22f0(piVar3,3);
  if (iStack_2c != iStack_c) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1734) + 4 + (aiStack_44[0] * 0x20 + iStack_28) * 8);
      if (((iVar2 != 0) && (*(char *)(iVar2 + 0x90) != '\0')) &&
         (iVar2 = func_0x009944e0(param_2), iVar2 == 1)) {
        FUN_008ab370();
        return;
      }
      func_0x008c2db0();
    } while (iStack_2c != iStack_c);
  }
  do {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  } while (piVar3 != (int *)(param_1 + 0x1cb8));
LAB_008f17bd:
  FUN_008ab370();
  return;
}



void __thiscall FUN_008f17f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int aiStack_44 [6];
  int iStack_2c;
  int iStack_28;
  int iStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)aiStack_44;
  piVar3 = (int *)(param_1 + 0x1ca0);
  piVar1 = piVar3;
  while( true ) {
    if (piVar1 == (int *)(param_1 + 0x1cac)) goto LAB_008f189d;
    if (*piVar1 != 0) break;
    piVar1 = piVar1 + 1;
  }
  func_0x008c22f0(piVar3,0);
  func_0x008c22f0(piVar3,3);
  if (iStack_2c != iStack_c) {
    do {
      iVar2 = *(int *)(param_1 + 0x159c + (aiStack_44[0] * 0x20 + iStack_28) * 4);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x13c) != 0)) &&
         (iVar2 = func_0x008e2910(param_2,0x10), iVar2 == 1)) {
        FUN_008ab370();
        return;
      }
      func_0x008c2db0();
    } while (iStack_2c != iStack_c);
  }
  do {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  } while (piVar3 != (int *)(param_1 + 0x1cac));
LAB_008f189d:
  FUN_008ab370();
  return;
}



void __thiscall FUN_008f18d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int aiStack_44 [6];
  int iStack_2c;
  int iStack_28;
  int iStack_c;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)aiStack_44;
  if (*(int *)(param_1 + 0x14ec) != 0) {
    iVar1 = *(int *)(param_1 + 0x14f8) + 0x48;
    func_0x008c22f0(iVar1,0);
    func_0x008c22f0(iVar1,3);
    if (iStack_2c != iStack_c) {
      do {
        if (*(int *)(param_1 + 0x159c + (aiStack_44[0] * 0x20 + iStack_28) * 4) != 0) {
          iVar1 = func_0x008dee80(param_2);
          if (iVar1 == 1) {
            FUN_008ab370();
            return;
          }
        }
        func_0x008c2db0();
      } while (iStack_2c != iStack_c);
    }
  }
  FUN_008ab370();
  return;
}



void FUN_008f1990(undefined4 param_1)

{
  func_0x008e5f40(param_1);
  return;
}



void __fastcall FUN_008f1ca0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar4 = param_1[2] - iVar1 & 0xfffffff8;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



undefined4 * __thiscall FUN_008f3350(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e8f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = gl::MemoryObjectManager::vftable;
  func_0x008ab37e(param_1[0xc],uVar1);
  func_0x008c25a0();
  *param_1 = gl::ResourceManagerBase::vftable;
  func_0x008f1d00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_008f33d0(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::ResourceManagerBase::vftable;
  func_0x008f1d00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_008f3400(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e8f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = gl::SemaphoreManager::vftable;
  func_0x008ab37e(param_1[0xc],uVar1);
  func_0x008c25a0();
  *param_1 = gl::ResourceManagerBase::vftable;
  func_0x008f1d00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_008f3480(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3e910;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = gl::ShaderProgramManager::vftable;
  func_0x008ab37e(param_1[0x16],uVar1);
  func_0x008c25a0();
  func_0x008ab37e(param_1[0xc]);
  func_0x008c25a0();
  *param_1 = gl::ResourceManagerBase::vftable;
  func_0x008f1d00();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x7c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_008f4570(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_retaddr;
  undefined4 *puStack_24;
  uint *puStack_1c;
  uint uStack_18;
  uint *puStack_14;
  int *piStack_c;
  char cStack_8;
  
  func_0x008f23a0();
  func_0x008c3c40(&uStack_18);
  uVar2 = *(uint *)(param_1 + 0x2c);
  puVar3 = *(uint **)(param_1 + 0x38);
  piVar7 = piStack_c;
  puVar8 = puStack_14;
  uVar10 = uStack_18;
  do {
    if ((uVar10 == uVar2) && (puVar8 == puVar3)) {
      memset((void *)puStack_24[1],-1,0x80);
      *puStack_24 = 0x20;
      func_0x00888840();
      return;
    }
    if (piVar7 != (int *)0x0) {
      piVar1 = piVar7 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar4 = *(code **)*piVar7;
        _guard_check_icall(unaff_retaddr);
        (*pcVar4)();
        pcVar4 = *(code **)(*piVar7 + 4);
        _guard_check_icall(1);
        (*pcVar4)();
      }
    }
    uVar5 = *puStack_1c;
    if (uVar10 < uVar5) {
      uVar9 = uVar10 + 1;
      uVar10 = uVar5;
      if (uVar9 < uVar5) {
        do {
          iVar6 = *(int *)(puStack_1c[1] + uVar9 * 4);
          if (((iVar6 != 0) || (cStack_8 == '\0')) && (uVar10 = uVar9, iVar6 != -1)) break;
          uVar9 = uVar9 + 1;
          uVar10 = uVar5;
        } while (uVar9 < uVar5);
      }
    }
    else {
      puVar8 = (uint *)*puVar8;
    }
    if (uVar10 < uVar5) {
      piVar7 = *(int **)(puStack_1c[1] + uVar10 * 4);
    }
    else if (puVar8 != (uint *)puStack_1c[3]) {
      piVar7 = (int *)puVar8[3];
    }
  } while( true );
}



void __fastcall FUN_008f4680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  int iStack_18;
  int iStack_14;
  int iStack_c;
  
  func_0x008f23a0();
  func_0x008c3c40(&iStack_18);
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x38);
  while ((iVar3 = iStack_c, iStack_18 != iVar1 || (iStack_14 != iVar2))) {
    if (iStack_c != 0) {
      func_0x0098de60(unaff_retaddr);
      func_0x0098ab30();
      func_0x008ab812(iVar3,0x400);
    }
    func_0x008c2e00();
  }
  memset(*(void **)(param_1 + 0x30),-1,0x80);
  *(int *)(param_1 + 0x2c) = 0x20;
  func_0x00888840();
  return;
}



void __fastcall FUN_008f4710(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 unaff_retaddr;
  undefined4 *puStack_20;
  int iStack_18;
  int iStack_14;
  int *piStack_c;
  
  func_0x008f23a0();
  func_0x008c3c40(&iStack_18);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x38);
  while ((piVar5 = piStack_c, iStack_18 != iVar2 || (iStack_14 != iVar3))) {
    if (piStack_c != (int *)0x0) {
      piVar1 = piStack_c + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pcVar4 = *(code **)*piStack_c;
        _guard_check_icall(unaff_retaddr);
        (*pcVar4)();
        pcVar4 = *(code **)(*piVar5 + 4);
        _guard_check_icall(1);
        (*pcVar4)();
      }
    }
    func_0x008c2e00();
  }
  memset((void *)puStack_20[1],-1,0x80);
  *puStack_20 = 0x20;
  func_0x00888840();
  return;
}



void __thiscall FUN_008f47c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_18 [24];
  
  while( true ) {
    iVar1 = func_0x008c3c40(auStack_18);
    if ((*(int *)(iVar1 + 4) == *(int *)(param_1 + 0x2c)) &&
       (*(int *)(iVar1 + 8) == *(int *)(param_1 + 0x38))) break;
    iVar1 = func_0x008c3c40(&stack0xffffffe4);
    func_0x008f3f80(param_2,*(undefined4 *)(iVar1 + 0xc));
  }
  memset(*(void **)(param_1 + 0x30),-1,0x80);
  *(undefined4 *)(param_1 + 0x2c) = 0x20;
  func_0x00888840();
  return;
}



void __thiscall FUN_008f4840(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_18 [24];
  
  piVar1 = (int *)(param_1 + 0x54);
  while( true ) {
    iVar2 = func_0x008c3c40(auStack_18);
    if ((*(int *)(iVar2 + 4) == *piVar1) && (*(int *)(iVar2 + 8) == *(int *)(param_1 + 0x60)))
    break;
    iVar2 = func_0x008c3c40(&stack0xffffffe4);
    func_0x008f2620(param_2,piVar1,*(undefined4 *)(iVar2 + 0xc));
  }
  memset(*(void **)(param_1 + 0x58),-1,0x80);
  *piVar1 = 0x20;
  func_0x00888840();
  piVar1 = (int *)(param_1 + 0x2c);
  while( true ) {
    iVar2 = func_0x008c3c40(&stack0xffffffe4);
    if ((*(int *)(iVar2 + 4) == *piVar1) && (*(int *)(iVar2 + 8) == *(int *)(param_1 + 0x38)))
    break;
    iVar2 = func_0x008c3c40(&stack0xffffffe0);
    func_0x008f27c0(param_2,piVar1,*(undefined4 *)(iVar2 + 0xc));
  }
  memset(*(void **)(param_1 + 0x30),-1,0x80);
  *piVar1 = 0x20;
  func_0x00888840();
  return;
}



int * __thiscall FUN_008f5440(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = param_2[1] - *param_2 >> 2;
  if (iVar1 != 0) {
    func_0x0057d2f0(iVar1);
    iVar1 = *param_1;
    iVar2 = param_2[1] - *param_2;
    func_0x008ab0e6(iVar1,*param_2,iVar2);
    param_1[1] = iVar1 + (iVar2 >> 2) * 4;
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



undefined4 __fastcall FUN_00921200(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



undefined4 * __thiscall FUN_00922d60(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar3 = param_1 + -0xc;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar3 = egl::ExternalImageSibling::vftable;
  *param_1 = egl::ExternalImageSibling::vftable;
  FUN_00953180(uVar2);
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[8];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *puVar3 = egl::ImageSibling::vftable;
  *param_1 = egl::ImageSibling::vftable;
  param_1[6] = angle::BindingPointer<>::vftable;
  param_1[4] = 0;
  if ((undefined4 *)param_1[3] != param_1 + 1) {
    func_0x008ab37e((undefined4 *)param_1[3]);
  }
  func_0x00968ba0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar3,100);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



undefined4 * __thiscall FUN_00922d70(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + -2;
  *puVar2 = egl::Image::vftable;
  *param_1 = egl::Image::vftable;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x24];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  if ((undefined4 *)param_1[0x21] != param_1 + 0x1f) {
    func_0x008ab37e((undefined4 *)param_1[0x21]);
  }
  *param_1 = egl::LabeledObject::vftable;
  *puVar2 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0xa0);
  }
  return puVar2;
}



undefined4 * __thiscall FUN_00922d80(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -0xc;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = egl::ImageSibling::vftable;
  *param_1 = egl::ImageSibling::vftable;
  param_1[6] = angle::BindingPointer<>::vftable;
  param_1[4] = 0;
  if ((undefined4 *)param_1[3] != param_1 + 1) {
    func_0x008ab37e((undefined4 *)param_1[3],uVar1);
  }
  func_0x00968ba0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 * __thiscall FUN_00922d90(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::BindingPointer<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00922dc0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00922df0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = egl::ExternalImageSibling::vftable;
  param_1[0xc] = egl::ExternalImageSibling::vftable;
  FUN_00953180(uVar2);
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x14];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_1 = egl::ImageSibling::vftable;
  param_1[0xc] = egl::ImageSibling::vftable;
  param_1[0x12] = angle::BindingPointer<>::vftable;
  param_1[0x10] = 0;
  if ((undefined4 *)param_1[0xf] != param_1 + 0xd) {
    func_0x008ab37e((undefined4 *)param_1[0xf]);
  }
  func_0x00968ba0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,100);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00922eb0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = egl::Image::vftable;
  param_1[2] = egl::Image::vftable;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x26];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  if ((undefined4 *)param_1[0x23] != param_1 + 0x21) {
    func_0x008ab37e((undefined4 *)param_1[0x23]);
  }
  param_1[2] = egl::LabeledObject::vftable;
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00922f30(undefined4 *param_1,byte param_2)

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
  *param_1 = egl::ImageSibling::vftable;
  param_1[0xc] = egl::ImageSibling::vftable;
  param_1[0x12] = angle::BindingPointer<>::vftable;
  param_1[0x10] = 0;
  if ((undefined4 *)param_1[0xf] != param_1 + 0xd) {
    func_0x008ab37e((undefined4 *)param_1[0xf],uVar1);
  }
  func_0x00968ba0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00923080(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x14);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return unaff_retaddr;
}



void __fastcall FUN_009230b0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x30);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_009230d0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x2c);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return unaff_retaddr;
}



void __fastcall FUN_00923110(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x28);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



int __fastcall FUN_00923130(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x50) != '\0')) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



undefined4 FUN_00923150(void)

{
  return 1;
}



int __fastcall FUN_009235c0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) == 0x3140)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



void __thiscall FUN_009235f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x18);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



uint __thiscall FUN_009236b0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  cVar2 = func_0x0093e670(*(undefined4 *)(iVar1 + 0x48));
  if (cVar2 == '\0') {
    cVar2 = func_0x0093e530(*(undefined4 *)(iVar1 + 0x48));
    if (cVar2 == '\0') {
      uVar3 = func_0x0093e260(*(undefined4 *)(iVar1 + 0x48));
      if ((char)uVar3 != '\0') {
        pcVar5 = *(code **)(**(int **)(iVar1 + 0x28) + 0x10);
        uVar4 = func_0x009676c0();
        _guard_check_icall(param_2,0,uVar4);
        uVar3 = (*pcVar5)();
        return uVar3;
      }
      return uVar3 & 0xffffff00;
    }
    pcVar5 = *(code **)(*(int *)(iVar1 + 0x2c) + 0x68);
  }
  else {
    pcVar5 = *(code **)(*(int *)(iVar1 + 0x2c) + 100);
  }
  _guard_check_icall(param_2 + 0x1c,param_2 + 0x1278);
  uVar3 = (*pcVar5)();
  return uVar3;
}



void __fastcall FUN_009237e0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x50) + 0x20);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



int __fastcall FUN_00923800(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x30) != '\0')) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



void __thiscall FUN_00923960(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_retaddr;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x98) + 4);
  _guard_check_icall(param_2);
  (*pcVar1)();
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    uVar6 = 0;
    uVar7 = *(int *)(iVar2 + 0x40) - 1;
    if (uVar7 != 0) {
      iVar3 = *(int *)(iVar2 + 0x3c);
      do {
        if (*(int *)(iVar3 + uVar6 * 4) == param_1) {
          *(undefined4 *)(iVar3 + uVar6 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + -1;
    cVar5 = func_0x0093e260(*(undefined4 *)(param_1 + 0x48));
    if (cVar5 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      pcVar1 = *(code **)(*(int *)puVar4[0x14] + 0x10);
      _guard_check_icall(unaff_retaddr);
      (*pcVar1)();
      pcVar1 = *(code **)*puVar4;
      _guard_check_icall(1);
      (*pcVar1)();
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



void FUN_00923a00(undefined4 param_1,undefined4 param_2)

{
  func_0x00953460(param_2);
  return;
}



void __thiscall FUN_00923be0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



undefined4 * __thiscall FUN_00923f20(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = egl::Stream::vftable;
  uStack_8 = 0;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[3];
    _guard_check_icall(1,uVar2);
    (*pcVar1)();
  }
  param_1[3] = 0;
  for (puVar3 = param_1 + 0xd; puVar3 != param_1 + 0x13; puVar3 = puVar3 + 2) {
    if (puVar3[1] != 0) {
      func_0x008e0d70();
    }
  }
  *param_1 = egl::LabeledObject::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00926b50(int param_1,byte param_2)

{
  func_0x00925f90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -4,0x600);
  }
  return param_1 + -4;
}



undefined4 * __thiscall FUN_00926b60(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::DebugAnnotator::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall FUN_00926b90(undefined4 param_1,byte param_2)

{
  func_0x00925f90();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x600);
  }
  return param_1;
}



undefined4 __thiscall FUN_00926bc0(undefined4 param_1,byte param_2)

{
  func_0x0092e110();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00952b1b)
// WARNING: Removing unreachable block (ram,0x00952af5)
// WARNING: Removing unreachable block (ram,0x00952afa)

void FUN_00926e00(undefined4 param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 ****ppppuVar3;
  FILE *_File;
  char *pcVar4;
  uint uVar5;
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
  
  param_1 = 3;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3d85d;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_18 = 0;
  pppuStack_2c = (undefined4 ****)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(param_2,(int)pcVar4 - (int)(param_2 + 1),uStack_14);
  ppppuVar3 = &pppuStack_2c;
  if (0xf < uStack_18) {
    ppppuVar3 = (undefined4 ****)pppuStack_2c;
  }
  _File = (FILE *)func_0x00e8798f(2);
  fprintf(_File,"%s: %s\n",&UNK_00face14,ppppuVar3);
  if (0xf < uStack_18) {
    uVar5 = uStack_18 + 1;
    ppppuVar3 = (undefined4 ****)pppuStack_2c;
    if (0xfff < uVar5) {
      ppppuVar3 = (undefined4 ****)pppuStack_2c[-1];
      uVar5 = uStack_18 + 0x24;
      if (0x1f < (uint)((int)pppuStack_2c + (-4 - (int)ppppuVar3))) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(ppppuVar3,uVar5);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x00952b1b)
// WARNING: Removing unreachable block (ram,0x00952abe)
// WARNING: Removing unreachable block (ram,0x00952ad8)
// WARNING: Removing unreachable block (ram,0x00952adf)
// WARNING: Removing unreachable block (ram,0x00952af0)
// WARNING: Removing unreachable block (ram,0x00952af5)
// WARNING: Removing unreachable block (ram,0x00952aff)
// WARNING: Removing unreachable block (ram,0x00952b06)
// WARNING: Removing unreachable block (ram,0x00952b0a)
// WARNING: Removing unreachable block (ram,0x00952b12)
// WARNING: Removing unreachable block (ram,0x00952b20)
// WARNING: Removing unreachable block (ram,0x00952afa)
// WARNING: Removing unreachable block (ram,0x00952b41)
// WARNING: Removing unreachable block (ram,0x00952b49)
// WARNING: Removing unreachable block (ram,0x00952b57)
// WARNING: Removing unreachable block (ram,0x00952b8c)
// WARNING: Removing unreachable block (ram,0x00952b67)

void FUN_00926e10(void)

{
  int *unaff_FS_OFFSET;
  undefined4 uStack00000004;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3d85d;
  uStack00000004 = 2;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0092bf50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    func_0x008d7090();
  }
  return;
}



int __fastcall FUN_0092df60(int param_1)

{
  return param_1 + 0x18;
}



int __thiscall FUN_0092e150(int param_1,byte param_2)

{
  func_0x0092e110();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -8,0x20);
  }
  return param_1 + -8;
}



undefined4 * __thiscall FUN_0092e160(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



void __thiscall FUN_0092e290(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 4);
  _guard_check_icall(param_2);
  (*pcVar1)();
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    pcVar1 = *(code **)*puVar2;
    _guard_check_icall(1);
    (*pcVar1)();
  }
  return;
}



undefined4 * __thiscall FUN_0092ec30(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -1;
  *puVar1 = egl::PbufferSurface::vftable;
  *param_1 = egl::PbufferSurface::vftable;
  param_1[0xc] = egl::PbufferSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x118);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_0092ec40(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -0xd;
  *puVar1 = egl::PbufferSurface::vftable;
  param_1[-0xc] = egl::PbufferSurface::vftable;
  *param_1 = egl::PbufferSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x118);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_0092ec50(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -1;
  *puVar1 = egl::PixmapSurface::vftable;
  *param_1 = egl::PixmapSurface::vftable;
  param_1[0xc] = egl::PixmapSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x118);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_0092ec60(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -0xd;
  *puVar1 = egl::PixmapSurface::vftable;
  param_1[-0xc] = egl::PixmapSurface::vftable;
  *param_1 = egl::PixmapSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x118);
  }
  return puVar1;
}



int __thiscall FUN_0092ec70(int param_1,byte param_2)

{
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -4,0x118);
  }
  return param_1 + -4;
}



int __thiscall FUN_0092ec80(int param_1,byte param_2)

{
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -0x34,0x118);
  }
  return param_1 + -0x34;
}



undefined4 * __thiscall FUN_0092ec90(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -1;
  *puVar1 = egl::WindowSurface::vftable;
  *param_1 = egl::WindowSurface::vftable;
  param_1[0xc] = egl::WindowSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x118);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_0092eca0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -0xd;
  *puVar1 = egl::WindowSurface::vftable;
  param_1[-0xc] = egl::WindowSurface::vftable;
  *param_1 = egl::WindowSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x118);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_0092ecb0(undefined4 *param_1,byte param_2)

{
  *param_1 = egl::PbufferSurface::vftable;
  param_1[1] = egl::PbufferSurface::vftable;
  param_1[0xd] = egl::PbufferSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x118);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0092ecf0(undefined4 *param_1,byte param_2)

{
  *param_1 = egl::PixmapSurface::vftable;
  param_1[1] = egl::PixmapSurface::vftable;
  param_1[0xd] = egl::PixmapSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x118);
  }
  return param_1;
}



undefined4 __thiscall FUN_0092ed30(undefined4 param_1,byte param_2)

{
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x118);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0092ed60(undefined4 *param_1,byte param_2)

{
  *param_1 = egl::WindowSurface::vftable;
  param_1[1] = egl::WindowSurface::vftable;
  param_1[0xd] = egl::WindowSurface::vftable;
  func_0x0092ea50();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x118);
  }
  return param_1;
}



undefined4 __thiscall FUN_0092ef50(int param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_retaddr;
  
  func_0x00940020((uint)(param_3 != 0x405) * 4 + 0xd8 + param_1);
  return unaff_retaddr;
}



undefined4 __fastcall FUN_0092ef80(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x74);
}



void __thiscall FUN_0092ef90(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x7c) + 0x58);
    _guard_check_icall();
    uVar2 = (*pcVar1)();
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xbc);
  }
  if (*(char *)(param_1 + 0xb4) == '\0') {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x7c) + 0x54);
    _guard_check_icall();
    uVar3 = (*pcVar1)();
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xb8);
  }
  param_2[1] = uVar2;
  *param_2 = uVar3;
  param_2[2] = 1;
  return;
}



bool FUN_0092f4b0(void)

{
  int iVar1;
  
  iVar1 = func_0x008acb20(0x32c0,0);
  return iVar1 == 1;
}



undefined4 __thiscall FUN_0092f4d0(int param_1,int param_2)

{
  if (param_2 == 0x405) {
    return *(undefined4 *)(param_1 + 0xfc);
  }
  if ((param_2 != 0x1801) && (param_2 != 0x1802)) {
    return 1;
  }
  return *(undefined4 *)(param_1 + 0x100);
}



void FUN_0092fbc0(undefined4 param_1,int param_2)

{
  if (param_2 == 3) {
    func_0x00953460(1);
  }
  else {
    if (param_2 == 7) {
      func_0x00953460(7);
      return;
    }
    if (param_2 == 8) {
      func_0x00953460(8);
      return;
    }
  }
  return;
}



void __thiscall FUN_00930190(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x405) {
    *(undefined4 *)(param_1 + 0xfc) = param_4;
  }
  else if ((param_2 == 0x1801) || (param_2 == 0x1802)) {
    *(undefined4 *)(param_1 + 0x100) = param_4;
    return;
  }
  return;
}



void __thiscall FUN_009301d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ANGLEGetDisplayPlatform_20
               (undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
               undefined4 *param_5)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 unaff_EDI;
  uint uVar9;
  bool bVar10;
  byte *pbStack_c8;
  int iStack_c4;
  uint uStack_c0;
  undefined4 *puStack_bc;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
                    // 0x53d440  4  _ANGLEGetDisplayPlatform@20
  uStack_4 = DAT_0128fd40 ^ (uint)&pbStack_c8;
  puStack_bc = param_5;
  uStack_c0 = 0;
  if (param_3 < 0x12) {
    uVar9 = 0;
    if (param_3 != 0) {
      iStack_c4 = (int)&PTR_s_currentTime_00fac478 - (int)param_2;
      do {
        pbVar2 = *(byte **)(iStack_c4 + (int)param_2);
        pbStack_c8 = (byte *)*param_2;
        uStack_10 = 0x63616c70;
        uStack_c = 0x6c6f6865;
        uStack_8 = 0x726564;
        iVar4 = func_0x008ab040(pbVar2,&uStack_10,0xb);
        pbVar6 = pbVar2;
        pbVar8 = pbStack_c8;
        if (iVar4 != 0) {
          do {
            bVar1 = *pbVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_0093d568:
              uVar7 = -(uint)bVar10 | 1;
              goto LAB_0093d56d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_0093d568;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0093d56d:
          if (uVar7 != 0) {
            cVar3 = func_0x00952a70(3);
            uVar9 = uStack_c0;
            if (cVar3 != '\0') {
              iVar4 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\Platform.cpp"
                                      ,"ANGLEGetDisplayPlatform",0x3c,3);
              uVar5 = func_0x0046b6e0(iVar4 + 0x10,"Invalid platform method name: ",unaff_EDI,
                                      ", expected ",pbVar2,&DAT_0113c6d8);
              uVar5 = func_0x0046b6e0(uVar5);
              uVar5 = func_0x0046b6e0(uVar5);
              uVar5 = func_0x0046b6e0(uVar5);
              func_0x0046b6e0(uVar5);
              uVar9 = 2;
            }
            uVar9 = uVar9 & 2;
            goto LAB_0093d5fc;
          }
        }
        uVar9 = uVar9 + 1;
        param_2 = param_2 + 1;
      } while (uVar9 < param_3);
    }
    _DAT_0128fdb0 = param_4;
    *puStack_bc = &DAT_0128fdb0;
  }
  else {
    cVar3 = func_0x00952a70(3);
    if (cVar3 != '\0') {
      iVar4 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\Platform.cpp"
                              ,"ANGLEGetDisplayPlatform",0x2a,3);
      func_0x0046b6e0(iVar4 + 0x10,"Invalid platform method count: ");
      uVar5 = func_0x005b0d50(param_3,", expected ");
      func_0x0046b6e0(uVar5);
      uVar5 = func_0x005b0d50(0x11,&DAT_0113c6d8);
      func_0x0046b6e0(uVar5);
    }
    uVar9 = (uint)(cVar3 != '\0');
LAB_0093d5fc:
    if (uVar9 != 0) {
      func_0x00952760();
    }
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ANGLEResetDisplayPlatform_4(void)

{
  undefined4 *puVar1;
  
                    // 0x53d640  5  _ANGLEResetDisplayPlatform@4
  puVar1 = (undefined4 *)__0PlatformMethods_angle__QAE_XZ();
  _DAT_0128fdb0 = *puVar1;
  uRam0128fdb4 = puVar1[1];
  uRam0128fdb8 = puVar1[2];
  uRam0128fdbc = puVar1[3];
  PTR__guard_check_icall_0128fdc0 = (undefined *)puVar1[4];
  PTR__guard_check_icall_0128fdc4 = (undefined *)puVar1[5];
  PTR_FUN_0128fdc8 = (undefined *)puVar1[6];
  PTR_FUN_0128fdcc = (undefined *)puVar1[7];
  PTR__guard_check_icall_0128fdd0 = (undefined *)puVar1[8];
  PTR__guard_check_icall_0128fdd4 = (undefined *)puVar1[9];
  PTR__guard_check_icall_0128fdd8 = (undefined *)puVar1[10];
  PTR__guard_check_icall_0128fddc = (undefined *)puVar1[0xb];
  PTR__guard_check_icall_0128fde0 = (undefined *)puVar1[0xc];
  PTR__guard_check_icall_0128fde4 = (undefined *)puVar1[0xd];
  PTR__guard_check_icall_0128fde8 = (undefined *)puVar1[0xe];
  PTR__guard_check_icall_0128fdec = (undefined *)puVar1[0xf];
  _PTR__guard_check_icall_0128fdf0 = *(undefined8 *)(puVar1 + 0x10);
  return;
}



undefined4 FUN_0093f750(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 10) == '\0'))))))
  {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f780(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0x10) == '\0'))))
     )) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f7b0(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0x11) == '\0'))))
     )) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f7e0(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0x12) == '\0'))))
     )) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f810(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0x13) == '\0'))))
     )) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f840(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0x14) == '\0'))))
     )) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f870(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0x15) == '\0'))))
     )) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f8a0(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0xb) == '\0')))))
     ) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f8d0(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0xc) == '\0')))))
     ) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f900(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa7) == '\0') &&
     ((*(char *)(param_2 + 0xcd) != '\0' || ((*param_1 < 3 && (*(char *)(param_2 + 0xd) == '\0')))))
     ) {
    return 0;
  }
  return 1;
}



bool FUN_0093f930(int *param_1)

{
  return *param_1 != 0;
}



bool FUN_0093f940(uint *param_1)

{
  return 1 < *param_1;
}



undefined4 FUN_0093f950(uint *param_1)

{
  if ((2 < *param_1) && ((3 < *param_1 || (param_1[1] != 0)))) {
    return 1;
  }
  return 0;
}



bool FUN_0093f970(uint *param_1)

{
  return 2 < *param_1;
}



undefined4 FUN_0093f980(int *param_1,int param_2)

{
  if ((*param_1 == 0) && (*(char *)(param_2 + 0x94) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f9a0(uint *param_1,int param_2)

{
  if ((*param_1 < 2) && (*(char *)(param_2 + 0xd0) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f9c0(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x1c) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093f9e0(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x1e) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fa00(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x1f) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fa20(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x4d) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fa40(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x5b) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fa60(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x6f) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fa80(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x90) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093faa0(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && (*(char *)(param_2 + 0x95) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fac0(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && ((*(char *)(param_2 + 0x95) == '\0' || (*(char *)(param_2 + 0x97) == '\0')))
     ) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093faf0(uint *param_1,int param_2)

{
  if (((*param_1 < 3) && (*(char *)(param_2 + 0x1f) == '\0')) && (*(char *)(param_2 + 0x20) == '\0')
     ) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fb10(uint *param_1,int param_2)

{
  if (((*param_1 < 3) && (*(char *)(param_2 + 0x1f) == '\0')) && (*(char *)(param_2 + 0x4d) == '\0')
     ) {
    return 0;
  }
  return 1;
}



undefined1 FUN_0093fb30(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 8);
}



undefined1 FUN_0093fb40(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 9);
}



undefined1 FUN_0093fb50(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x4d);
}



undefined1 FUN_0093fb60(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x6f);
}



undefined1 FUN_0093fb70(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x7a);
}



undefined1 FUN_0093fb80(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x7c);
}



undefined1 FUN_0093fb90(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x7e);
}



undefined1 FUN_0093fba0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x7f);
}



undefined1 FUN_0093fbb0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x80);
}



undefined1 FUN_0093fbc0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x82);
}



undefined1 FUN_0093fbd0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x84);
}



undefined1 FUN_0093fbe0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x88);
}



undefined1 FUN_0093fbf0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x89);
}



undefined1 FUN_0093fc00(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x8a);
}



undefined1 FUN_0093fc10(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x8c);
}



undefined1 FUN_0093fc20(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x8d);
}



undefined1 FUN_0093fc30(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x8e);
}



undefined1 FUN_0093fc40(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x90);
}



undefined1 FUN_0093fc50(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x92);
}



undefined1 FUN_0093fc60(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x93);
}



undefined1 FUN_0093fc70(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x95);
}



undefined1 FUN_0093fc80(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0x97);
}



undefined1 FUN_0093fc90(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0xa5);
}



undefined1 FUN_0093fca0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0xb2);
}



undefined1 FUN_0093fcb0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0xc6);
}



undefined1 FUN_0093fcc0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 199);
}



undefined1 FUN_0093fcd0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0xce);
}



undefined1 FUN_0093fce0(undefined4 param_1,int param_2)

{
  return *(undefined1 *)(param_2 + 0xf);
}



undefined4 FUN_0093fcf0(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x4d) != '\0') && (*(char *)(param_2 + 0x1f) != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0093fd10(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x80) != '\0') && (*(char *)(param_2 + 0x56) != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0093fd30(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x88) != '\0') && (*(char *)(param_2 + 0x90) != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0093fd50(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x8c) != '\0') && (*(char *)(param_2 + 0x90) != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0093fd70(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x95) != '\0') && (*(char *)(param_2 + 0x88) != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0093fd90(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x95) != '\0') && (*(char *)(param_2 + 0x8c) != '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0093fdb0(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x1f) == '\0') && (*(char *)(param_2 + 0x20) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0093fdd0(undefined4 param_1,int param_2)

{
  if (((*(char *)(param_2 + 0x1f) == '\0') && (*(char *)(param_2 + 0x20) == '\0')) &&
     (*(char *)(param_2 + 0x1d) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00946910(undefined4 param_1,int param_2)

{
  if (((*(char *)(param_2 + 0xa6) != '\0') || (*(char *)(param_2 + 8) != '\0')) &&
     (*(char *)(param_2 + 0x36) != '\0')) {
    return 1;
  }
  return 0;
}



bool FUN_0094a1e0(int *param_1)

{
  return *param_1 == 1;
}



undefined4 FUN_0094a210(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xa6) == '\0') && (*(char *)(param_2 + 8) == '\0')) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0094a230(uint *param_1,int param_2)

{
  if ((*param_1 < 3) &&
     (((*(char *)(param_2 + 0x95) == '\0' || (*(char *)(param_2 + 0x88) == '\0')) &&
      (*(char *)(param_2 + 0xa6) == '\0')))) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0094a260(uint *param_1,int param_2)

{
  if ((*param_1 < 3) &&
     (((*(char *)(param_2 + 0x95) == '\0' || (*(char *)(param_2 + 0x88) == '\0')) &&
      (*(char *)(param_2 + 0xa5) == '\0')))) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0094a290(uint *param_1,int param_2)

{
  if ((*param_1 < 3) &&
     (((*(char *)(param_2 + 0x95) == '\0' || (*(char *)(param_2 + 0x88) == '\0')) ||
      (*(char *)(param_2 + 0x90) == '\0')))) {
    return 0;
  }
  return 1;
}



undefined1 FUN_0094a2c0(uint *param_1,int param_2)

{
  if (2 < *param_1) {
    return 1;
  }
  return *(undefined1 *)(param_2 + 0x8d);
}



undefined4 FUN_0094a2e0(uint *param_1,int param_2)

{
  if (((2 < *param_1) || (*(char *)(param_2 + 0x8c) != '\0')) &&
     ((*(char *)(param_2 + 8) != '\0' || (*(char *)(param_2 + 9) != '\0')))) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0094a310(uint *param_1,int param_2)

{
  char cVar1;
  
  if (*param_1 < 3) {
    if (*(char *)(param_2 + 0x95) == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0x8c) == '\0') {
      return 0;
    }
    cVar1 = *(char *)(param_2 + 9);
  }
  else {
    if (*(char *)(param_2 + 8) != '\0') {
      return 1;
    }
    if (*(char *)(param_2 + 0xcd) == '\0') {
      return 0;
    }
    cVar1 = *(char *)(param_2 + 9);
  }
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



undefined4 FUN_0094a350(uint *param_1,int param_2)

{
  if ((*(char *)(param_2 + 0xcd) == '\0') &&
     (((2 < *param_1 || (*(char *)(param_2 + 0x8c) != '\0')) && (*(char *)(param_2 + 9) != '\0'))))
  {
    return 1;
  }
  return 0;
}



undefined4 FUN_0094a380(uint *param_1,int param_2)

{
  if (*param_1 < 3) {
    if (((*(char *)(param_2 + 0x95) != '\0') && (*(char *)(param_2 + 0x8c) != '\0')) &&
       (*(char *)(param_2 + 9) != '\0')) {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 9) != '\0') && (*(char *)(param_2 + 0xcd) == '\0')) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0094a3c0(uint *param_1,int param_2)

{
  if (((2 < *param_1) ||
      ((*(char *)(param_2 + 0x8c) != '\0' && (*(char *)(param_2 + 0x90) != '\0')))) &&
     ((*(char *)(param_2 + 8) != '\0' || (*(char *)(param_2 + 9) != '\0')))) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0094a400(uint *param_1,int param_2)

{
  if ((*param_1 < 3) &&
     (((*(char *)(param_2 + 0x95) == '\0' || (*(char *)(param_2 + 0x8c) == '\0')) ||
      (*(char *)(param_2 + 0x90) == '\0')))) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0094a430(uint *param_1,int param_2)

{
  char cVar1;
  
  if (*param_1 < 3) {
    if (*(char *)(param_2 + 0x95) == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0x8c) == '\0') {
      return 0;
    }
    if (*(char *)(param_2 + 0x90) == '\0') {
      return 0;
    }
    cVar1 = *(char *)(param_2 + 9);
  }
  else {
    if (*(char *)(param_2 + 8) != '\0') {
      return 1;
    }
    if (*(char *)(param_2 + 0xcd) == '\0') {
      return 0;
    }
    cVar1 = *(char *)(param_2 + 9);
  }
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}



undefined4 FUN_0094a480(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && ((*(char *)(param_2 + 0x95) == '\0' || (*(char *)(param_2 + 0x8c) == '\0')))
     ) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0094a4b0(uint *param_1,int param_2)

{
  if ((*param_1 < 3) && ((*(char *)(param_2 + 0x95) == '\0' || (*(char *)(param_2 + 0x90) == '\0')))
     ) {
    return 0;
  }
  return 1;
}



undefined4 * __thiscall FUN_0094b150(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -6;
  *puVar5 = gl::Renderbuffer::vftable;
  *param_1 = gl::Renderbuffer::vftable;
  param_1[0xc] = gl::Renderbuffer::vftable;
  param_1[0x14] = gl::Renderbuffer::vftable;
  FUN_00953180();
  uVar1 = param_1[0x22];
  if (0xf < uVar1) {
    iVar2 = param_1[0x1d];
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
  param_1[0x21] = 0;
  param_1[0x22] = 0xf;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    pcVar3 = (code *)**(undefined4 **)param_1[0x1c];
    _guard_check_icall(1);
    (*pcVar3)();
  }
  param_1[0x14] = gl::LabeledObject::vftable;
  func_0x00922c20();
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0xb8);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_0094b160(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -0x12;
  *puVar5 = gl::Renderbuffer::vftable;
  param_1[-0xc] = gl::Renderbuffer::vftable;
  *param_1 = gl::Renderbuffer::vftable;
  param_1[8] = gl::Renderbuffer::vftable;
  FUN_00953180();
  uVar1 = param_1[0x16];
  if (0xf < uVar1) {
    iVar2 = param_1[0x11];
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
  param_1[0x15] = 0;
  param_1[0x16] = 0xf;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    pcVar3 = (code *)**(undefined4 **)param_1[0x10];
    _guard_check_icall(1);
    (*pcVar3)();
  }
  param_1[8] = gl::LabeledObject::vftable;
  func_0x00922c20();
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0xb8);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_0094b170(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -0x1a;
  *puVar5 = gl::Renderbuffer::vftable;
  param_1[-0x14] = gl::Renderbuffer::vftable;
  param_1[-8] = gl::Renderbuffer::vftable;
  *param_1 = gl::Renderbuffer::vftable;
  FUN_00953180();
  uVar1 = param_1[0xe];
  if (0xf < uVar1) {
    iVar2 = param_1[9];
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
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    pcVar3 = (code *)**(undefined4 **)param_1[8];
    _guard_check_icall(1);
    (*pcVar3)();
  }
  *param_1 = gl::LabeledObject::vftable;
  func_0x00922c20();
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0xb8);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_0094b180(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *param_1 = gl::Renderbuffer::vftable;
  param_1[6] = gl::Renderbuffer::vftable;
  param_1[0x12] = gl::Renderbuffer::vftable;
  param_1[0x1a] = gl::Renderbuffer::vftable;
  FUN_00953180();
  uVar1 = param_1[0x28];
  if (0xf < uVar1) {
    iVar2 = param_1[0x23];
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
  param_1[0x27] = 0;
  param_1[0x28] = 0xf;
  *(undefined1 *)(param_1 + 0x23) = 0;
  if ((undefined4 *)param_1[0x22] != (undefined4 *)0x0) {
    pcVar3 = (code *)**(undefined4 **)param_1[0x22];
    _guard_check_icall(1);
    (*pcVar3)();
  }
  param_1[0x1a] = gl::LabeledObject::vftable;
  func_0x00922c20();
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb8);
  }
  return param_1;
}



undefined4 __fastcall FUN_0094b330(int param_1)

{
  undefined4 unaff_retaddr;
  
  func_0x00940020(param_1 + 0x5c);
  return unaff_retaddr;
}



undefined4 __fastcall FUN_0094b350(int param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    return *(undefined4 *)(param_1 + 0x60);
  }
  return 0;
}



void __thiscall FUN_0094b370(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  *param_2 = *(undefined4 *)(param_1 + 0x54);
  param_2[1] = uVar1;
  param_2[2] = 1;
  return;
}



int __fastcall FUN_0094b420(int param_1)

{
  return param_1 + 0x24;
}



undefined4 __fastcall FUN_0094b560(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = func_0x009235e0();
  if (cVar1 != '\0') {
    uVar2 = func_0x00923d40();
    return uVar2;
  }
  return *(undefined4 *)(param_1 + 0x6c);
}



void __thiscall FUN_0094b580(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = func_0x009235e0();
  if (cVar2 != '\0') {
    FUN_009236b0(param_2,param_3,param_4);
    return;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 0x5c) + 0x68);
  _guard_check_icall(param_2 + 0x1c,param_2 + 0x1278);
  (*pcVar1)();
  return;
}



void __fastcall FUN_0094b5d0(int param_1)

{
  *(int *)(param_1 + -0x14) = *(int *)(param_1 + -0x14) + 1;
  return;
}



void __thiscall FUN_0094b5e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_1c;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f413cd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  piStack_18 = (int *)0x0;
  uStack_8 = 0;
  func_0x00923a10(param_2,&uStack_1c,uVar4);
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x88) + 0xc);
    _guard_check_icall(param_2);
    (*pcVar2)();
  }
  piVar3 = piStack_18;
  uStack_8 = 1;
  if (piStack_18 != (int *)0x0) {
    piVar1 = piStack_18 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall(uStack_1c);
      (*pcVar2)();
      pcVar2 = *(code **)(*piVar3 + 4);
      _guard_check_icall(1);
      (*pcVar2)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0094b6a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)(param_1 + -0x14);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    pcVar2 = (code *)**(undefined4 **)(param_1 + -0x18);
    _guard_check_icall(param_2);
    (*pcVar2)();
    pcVar2 = *(code **)(*(int *)(param_1 + -0x18) + 4);
    _guard_check_icall(1);
    (*pcVar2)();
  }
  return;
}



void FUN_0094b6e0(void)

{
  func_0x00953460(1);
  return;
}



void __thiscall FUN_0094b6f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = func_0x009235e0();
  if (cVar1 != '\0') {
    func_0x00923bf0(param_4);
    return;
  }
  *(undefined4 *)(param_1 + 0x6c) = param_4;
  return;
}



undefined4 __thiscall FUN_0094b720(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 0x24) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x20) + 0x34);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



undefined4 * __thiscall FUN_0094c2e0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::base::MRUCacheBase<>::vftable;
  func_0x0094c190();
  func_0x0094c260();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 __fastcall FUN_0094d740(undefined4 param_1)

{
  func_0x0094d2a0(0x3f800000,0,0,0,0,0x3f800000,0,0,0,0,0x3f800000,0,0,0,0,0x3f800000);
  return param_1;
}



int __cdecl printf(char *_Format,...)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    // 0x54e200  140  printf
  uVar1 = func_0x00e8798f(1);
  puVar2 = (undefined4 *)func_0x00462fc0(uVar1,_Format,0,&stack0x00000008);
  iVar3 = func_0x008ab06a(*puVar2,puVar2[1]);
  return iVar3;
}



void __fastcall FUN_0094f310(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar4 = param_1[2] - iVar1 & 0xfffffff0;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = uVar4 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    func_0x008ab812(iVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



int __fastcall FUN_0094f8c0(int param_1)

{
  return param_1 + 0x44;
}



undefined4 * __fastcall FUN_00953120(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = angle::ObserverBinding::vftable;
  param_1[3] = 0;
  return param_1;
}



void __fastcall FUN_00953180(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  iVar2 = param_1[3];
  *param_1 = angle::ObserverBinding::vftable;
  if (iVar2 != 0) {
    uVar4 = 0;
    uVar5 = *(int *)(iVar2 + 0x28) - 1;
    if (uVar5 != 0) {
      iVar3 = *(int *)(iVar2 + 0x24);
      do {
        if (*(undefined4 **)(iVar3 + uVar4 * 4) == param_1) {
          *(undefined4 *)(iVar3 + uVar4 * 4) = *(undefined4 *)(iVar3 + uVar5 * 4);
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  }
  *param_1 = angle::ObserverBindingBase::vftable;
  param_1[3] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



undefined4 * __thiscall FUN_00953330(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f41cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = angle::Subject::vftable;
  puVar4 = (undefined4 *)param_1[9];
  uStack_8 = 0;
  puVar1 = puVar4 + param_1[10];
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    pcVar2 = *(code **)(*(int *)*puVar4 + 4);
    _guard_check_icall(uVar3);
    (*pcVar2)();
  }
  param_1[10] = 0;
  param_1[10] = 0;
  if ((undefined4 *)param_1[9] != param_1 + 1) {
    func_0x008ab37e((undefined4 *)param_1[9]);
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_009534b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



undefined4 __thiscall FUN_00954780(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x24) != param_2) {
    *(int *)(param_1 + 0x24) = param_2;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_009547a0(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    bVar1 = func_0x008ba8a0(*(undefined4 *)(param_1 + 0xc));
    *(byte *)(param_1 + 0x43) = (*(int *)(param_1 + 0x20) != 0) - 1U & 0x10 | bVar1;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00954eb0(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 4) != param_2) {
    *(int *)(param_1 + 4) = param_2;
    uVar1 = func_0x008ba050(param_2);
    *(undefined1 *)(param_1 + 0x41) = uVar1;
    return 1;
  }
  return 0;
}



undefined1 __thiscall FUN_00954ee0(int param_1,float param_2)

{
  if (*(float *)(param_1 + 0x14) != param_2) {
    *(float *)(param_1 + 0x14) = param_2;
    return 1;
  }
  return 0;
}



undefined1 __thiscall FUN_00954f10(int param_1,float param_2)

{
  if (*(float *)(param_1 + 0x1c) != param_2) {
    *(float *)(param_1 + 0x1c) = param_2;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00954f40(int *param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    uVar1 = func_0x008ba050(param_2);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
    return 1;
  }
  return 0;
}



undefined1 __thiscall FUN_00954f70(int param_1,float param_2)

{
  if (*(float *)(param_1 + 0x18) != param_2) {
    *(float *)(param_1 + 0x18) = param_2;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00954fa0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00954fc0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00954fe0(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 8) != param_2) {
    *(int *)(param_1 + 8) = param_2;
    uVar1 = func_0x008ba8a0(param_2);
    *(undefined1 *)(param_1 + 0x42) = uVar1;
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_00955010(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    bVar1 = func_0x008ba8a0(param_2);
    *(byte *)(param_1 + 0x43) = (*(int *)(param_1 + 0x20) != 0) - 1U & 0x10 | bVar1;
    return 1;
  }
  return 0;
}



undefined4 * __fastcall FUN_00956c70(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = func_0x008ab47d(0x14);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  param_1[2] = iVar1;
  return param_1;
}



void __fastcall FUN_00956e50(int param_1)

{
  func_0x008c07a0(param_1 + 8);
  return;
}



void FUN_0095c880(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void FUN_0095c8a0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return;
}



void FUN_0095c8b0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return;
}



void FUN_0095c8d0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return;
}



void FUN_009601e0(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[3];
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  return;
}



void FUN_00960f10(float *param_1)

{
  float fVar1;
  
  if (param_1[3] != 0.0) {
    fVar1 = 1.0 / param_1[3];
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  return;
}



void FUN_00960f60(undefined4 param_1,code *param_2,undefined4 param_3)

{
  _guard_check_icall(param_1,param_3);
  (*param_2)();
  return;
}



void FUN_00960f80(undefined4 param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 auStack_10 [4];
  
  iVar2 = 0;
  do {
    uVar1 = func_0x008abcb0();
    auStack_10[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  _guard_check_icall(auStack_10,param_3);
  (*param_2)();
  return;
}



undefined4 * __thiscall FUN_00967fa0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -6;
  param_1[2] = gl::Buffer::vftable;
  *puVar5 = gl::Buffer::vftable;
  *param_1 = gl::Buffer::vftable;
  param_1[1] = gl::Buffer::vftable;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x26];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x26] = 0;
  func_0x009c5bb0();
  param_1[0x3c] = 0;
  if ((undefined4 *)param_1[0x3b] != param_1 + 0x2b) {
    func_0x008ab37e((undefined4 *)param_1[0x3b]);
  }
  FUN_00953180();
  uVar2 = param_1[0x13];
  if (0xf < uVar2) {
    iVar3 = param_1[0xe];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  *(undefined1 *)(param_1 + 0xe) = 0;
  func_0x00953210();
  func_0x00953200();
  *param_1 = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x118);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_00967fb0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -7;
  param_1[1] = gl::Buffer::vftable;
  *puVar5 = gl::Buffer::vftable;
  param_1[-1] = gl::Buffer::vftable;
  *param_1 = gl::Buffer::vftable;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x25];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x25] = 0;
  func_0x009c5bb0();
  param_1[0x3b] = 0;
  if ((undefined4 *)param_1[0x3a] != param_1 + 0x2a) {
    func_0x008ab37e((undefined4 *)param_1[0x3a]);
  }
  FUN_00953180();
  uVar2 = param_1[0x12];
  if (0xf < uVar2) {
    iVar3 = param_1[0xd];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0xf;
  *(undefined1 *)(param_1 + 0xd) = 0;
  func_0x00953210();
  func_0x00953200();
  param_1[-1] = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x118);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_00967fc0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -8;
  *param_1 = gl::Buffer::vftable;
  *puVar5 = gl::Buffer::vftable;
  param_1[-2] = gl::Buffer::vftable;
  param_1[-1] = gl::Buffer::vftable;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x24];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x24] = 0;
  func_0x009c5bb0();
  param_1[0x3a] = 0;
  if ((undefined4 *)param_1[0x39] != param_1 + 0x29) {
    func_0x008ab37e((undefined4 *)param_1[0x39]);
  }
  FUN_00953180();
  uVar2 = param_1[0x11];
  if (0xf < uVar2) {
    iVar3 = param_1[0xc];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  func_0x00953210();
  func_0x00953200();
  param_1[-2] = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x118);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_00967fd0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  param_1[8] = gl::Buffer::vftable;
  *param_1 = gl::Buffer::vftable;
  param_1[6] = gl::Buffer::vftable;
  param_1[7] = gl::Buffer::vftable;
  if ((undefined4 *)param_1[0x2c] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x2c];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x2c] = 0;
  func_0x009c5bb0();
  param_1[0x42] = 0;
  if ((undefined4 *)param_1[0x41] != param_1 + 0x31) {
    func_0x008ab37e((undefined4 *)param_1[0x41]);
  }
  FUN_00953180();
  uVar2 = param_1[0x19];
  if (0xf < uVar2) {
    iVar3 = param_1[0x14];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  func_0x00953210();
  func_0x00953200();
  param_1[6] = gl::LabeledObject::vftable;
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x118);
  }
  return param_1;
}



void __thiscall FUN_00968860(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0xb0) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xb0) + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  return;
}



void FUN_00968890(undefined4 param_1,undefined4 param_2)

{
  func_0x00953460(param_2);
  return;
}



undefined4 __thiscall FUN_00968950(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 0x38) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0x98) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x98) + 0x2c);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



undefined4 * __fastcall FUN_00968b30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x009676c0();
  param_1[6] = 0;
  param_1[7] = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



undefined4 * __thiscall FUN_00968d20(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -0xc;
  *param_1 = gl::FramebufferAttachmentObject::vftable;
  *puVar1 = gl::FramebufferAttachmentObject::vftable;
  func_0x00953200();
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar1,0x34);
  }
  return puVar1;
}



undefined4 * __thiscall FUN_00968d30(undefined4 *param_1,byte param_2)

{
  param_1[0xc] = gl::FramebufferAttachmentObject::vftable;
  *param_1 = gl::FramebufferAttachmentObject::vftable;
  func_0x00953200();
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



undefined4 __fastcall FUN_00969550(undefined4 param_1)

{
  return param_1;
}



void __fastcall FUN_00969f30(int *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar3 = ((param_1[2] - iVar1) / 0xc) * 0xc;
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
  return;
}



undefined4 * __thiscall FUN_00969fc0(undefined4 *param_1,byte param_2)

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
  *param_1 = gl::Compiler::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 0x8d,0xc,6,FUN_00969f30,uVar2);
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[2];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x27c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0096a1a0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f42efd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = *(int *)(param_2 + 0x1fcc);
  iVar5 = func_0x00e7307f(iVar1 + 0x56c,uVar4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar1 + 0x598);
    if (iVar5 != 0x7fffffff) {
      uStack_8 = 0;
      for (puVar7 = (undefined4 *)(param_1 + 0x234); puVar7 != (undefined4 *)(param_1 + 0x27c);
          puVar7 = puVar7 + 3) {
        piVar2 = (int *)puVar7[1];
        for (piVar6 = (int *)*puVar7; piVar6 != piVar2; piVar6 = piVar6 + 3) {
          if (*piVar6 != 0) {
            func_0x009c6030(*piVar6);
            *piVar6 = 0;
          }
        }
      }
      DAT_013de264 = DAT_013de264 + -1;
      if (DAT_013de264 == 0) {
        func_0x009c60a0();
      }
      func_0x00e730b2(iVar1 + 0x56c);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    iVar5 = func_0x00e7304a(5);
  }
  *(int *)(iVar1 + 0x598) = iVar5 + -1;
  func_0x00e7304a(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __fastcall FUN_0096c360(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar4 = param_1[1];
    for (; iVar3 != iVar4; iVar3 = iVar3 + 0x6c) {
      func_0x009c3800();
    }
    iVar3 = *param_1;
    uVar2 = ((param_1[2] - iVar3) / 0x6c) * 0x6c;
    iVar4 = iVar3;
    if (0xfff < uVar2) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar2 = uVar2 + 0x23;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



void __fastcall FUN_0096c3e0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar4 = param_1[1];
    for (; iVar3 != iVar4; iVar3 = iVar3 + 0xb4) {
      FUN_009c38e0();
    }
    iVar3 = *param_1;
    uVar2 = ((param_1[2] - iVar3) / 0xb4) * 0xb4;
    iVar4 = iVar3;
    if (0xfff < uVar2) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar2 = uVar2 + 0x23;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



undefined4 * __thiscall FUN_0096ca00(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = gl::Shader::vftable;
  uVar1 = param_1[0x59];
  if (0xf < uVar1) {
    iVar2 = param_1[0x54];
    uVar7 = uVar1 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar7 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar5) - 4U) goto LAB_0096cb3c;
    }
    func_0x008ab812(iVar5,uVar7,uVar4);
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0xf;
  *(undefined1 *)(param_1 + 0x54) = 0;
  func_0x0096c300();
  param_1[0x51] = angle::BindingPointer<>::vftable;
  uVar1 = param_1[0x50];
  if (0xf < uVar1) {
    iVar2 = param_1[0x4b];
    uVar7 = uVar1 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar7) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar7 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar5) - 4U) {
LAB_0096cb3c:
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        puVar6 = (undefined4 *)(*pcVar3)();
        return puVar6;
      }
    }
    func_0x008ab812(iVar5,uVar7,uVar4);
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0xf;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  if ((undefined4 *)param_1[0x41] != (undefined4 *)0x0) {
    pcVar3 = (code *)**(undefined4 **)param_1[0x41];
    _guard_check_icall(1);
    (*pcVar3)();
  }
  func_0x0096c4d0();
  *param_1 = gl::LabeledObject::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x174);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



bool FUN_0096cb50(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = *param_2;
  if (iVar4 == iVar3) {
    uVar1 = func_0x009c4230();
    uVar2 = func_0x009c4230();
    return uVar2 < uVar1;
  }
  if (iVar4 == 0) {
    return false;
  }
  if (iVar3 == 0) {
    return true;
  }
  iVar3 = func_0x0093f3c0(iVar3);
  iVar4 = func_0x0093f3c0(iVar4);
  return iVar4 < iVar3;
}



void __thiscall FUN_0096d420(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __fastcall FUN_0096d440(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  
  func_0x0096a290(*(int *)(*(int *)(param_1 + 4) + 0x14c) + 8);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x14c);
  piVar3 = (int *)puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  func_0x0096f660(0);
  return;
}



TypeDescriptor * FUN_0096d4d0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00970a40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 4) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0x104) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x104) + 0x10);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



undefined4 __thiscall FUN_00974910(undefined4 param_1,byte param_2)

{
  func_0x009743b0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



undefined4 __thiscall FUN_00974930(undefined4 param_1,byte param_2)

{
  func_0x00974450();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5b0);
  }
  return param_1;
}



void FUN_00975380(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_00975390(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_009753a0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_009753b0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_009753c0(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void FUN_009753d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x3e4);
  *param_1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x3e0);
  param_1[1] = uVar1;
  return;
}



void FUN_00975400(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x420);
  *param_1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x41c);
  param_1[1] = uVar1;
  return;
}



void FUN_00975430(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x3dc);
  *param_1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x3d8);
  param_1[1] = uVar1;
  return;
}



void FUN_00975460(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x3ec);
  *param_1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 1000);
  param_1[1] = uVar1;
  return;
}



void FUN_00975490(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x3d4);
  *param_1 = *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x3d0);
  param_1[1] = uVar1;
  return;
}



TypeDescriptor * FUN_009754c0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_009754d0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_009754e0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_009754f0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00975500(void)

{
  return &<>::RTTI_Type_Descriptor;
}



undefined4 * __thiscall FUN_0097de20(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  puVar2 = param_1 + -1;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *puVar2 = gl::Program::vftable;
  *param_1 = gl::Program::vftable;
  if (param_1[0x55] != 0) {
    func_0x0097dd70(param_1[0x55],uVar1);
  }
  func_0x0097d960();
  func_0x0097d960();
  func_0x0097d8f0();
  func_0x0097dc10();
  func_0x00953210();
  *puVar2 = gl::LabeledObject::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar2,0x1a8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar2;
}



undefined4 __thiscall FUN_0097de30(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 __thiscall FUN_0097de50(undefined4 param_1,byte param_2)

{
  func_0x009c4c80();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0097de80(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = gl::Program::vftable;
  param_1[1] = gl::Program::vftable;
  if (param_1[0x56] != 0) {
    func_0x0097dd70(param_1[0x56],uVar1);
  }
  func_0x0097d960();
  func_0x0097d960();
  func_0x0097d8f0();
  func_0x0097dc10();
  func_0x00953210();
  *param_1 = gl::LabeledObject::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1a8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00980090(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    func_0x00974450();
    func_0x008ab812(iVar1,0x5b0);
  }
  return;
}



int __fastcall FUN_00982290(int param_1)

{
  return param_1 + 0x40;
}



undefined4 __thiscall FUN_00986dc0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 0x40) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0xec) + 0x88);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



undefined4 * __thiscall FUN_00988830(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1 + -6;
  *puVar3 = gl::ProgramPipeline::vftable;
  puVar1 = (undefined4 *)param_1[0xe];
  *param_1 = gl::ProgramPipeline::vftable;
  param_1[1] = gl::ProgramPipeline::vftable;
  param_1[2] = gl::ProgramPipeline::vftable;
  param_1[0xe] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  FUN_00953180();
  func_0x008c2760();
  func_0x00988670();
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    pcVar2 = (code *)**(undefined4 **)param_1[0xe];
    _guard_check_icall(1);
    (*pcVar2)();
  }
  func_0x00953210();
  func_0x00953200();
  *param_1 = gl::LabeledObject::vftable;
  *puVar3 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar3,0xb0);
  }
  return puVar3;
}



undefined4 * __thiscall FUN_00988840(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1 + -7;
  *puVar3 = gl::ProgramPipeline::vftable;
  puVar1 = (undefined4 *)param_1[0xd];
  param_1[-1] = gl::ProgramPipeline::vftable;
  *param_1 = gl::ProgramPipeline::vftable;
  param_1[1] = gl::ProgramPipeline::vftable;
  param_1[0xd] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  FUN_00953180();
  func_0x008c2760();
  func_0x00988670();
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    pcVar2 = (code *)**(undefined4 **)param_1[0xd];
    _guard_check_icall(1);
    (*pcVar2)();
  }
  func_0x00953210();
  func_0x00953200();
  param_1[-1] = gl::LabeledObject::vftable;
  *puVar3 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar3,0xb0);
  }
  return puVar3;
}



undefined4 * __thiscall FUN_00988850(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1 + -8;
  *puVar3 = gl::ProgramPipeline::vftable;
  puVar1 = (undefined4 *)param_1[0xc];
  param_1[-2] = gl::ProgramPipeline::vftable;
  param_1[-1] = gl::ProgramPipeline::vftable;
  *param_1 = gl::ProgramPipeline::vftable;
  param_1[0xc] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  FUN_00953180();
  func_0x008c2760();
  func_0x00988670();
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    pcVar2 = (code *)**(undefined4 **)param_1[0xc];
    _guard_check_icall(1);
    (*pcVar2)();
  }
  func_0x00953210();
  func_0x00953200();
  param_1[-2] = gl::LabeledObject::vftable;
  *puVar3 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar3,0xb0);
  }
  return puVar3;
}



undefined4 * __thiscall FUN_00988860(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  *param_1 = gl::ProgramPipeline::vftable;
  puVar1 = (undefined4 *)param_1[0x14];
  param_1[6] = gl::ProgramPipeline::vftable;
  param_1[7] = gl::ProgramPipeline::vftable;
  param_1[8] = gl::ProgramPipeline::vftable;
  param_1[0x14] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    _guard_check_icall(1);
    (*pcVar2)();
  }
  FUN_00953180();
  func_0x008c2760();
  func_0x00988670();
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    pcVar2 = (code *)**(undefined4 **)param_1[0x14];
    _guard_check_icall(1);
    (*pcVar2)();
  }
  func_0x00953210();
  func_0x00953200();
  param_1[6] = gl::LabeledObject::vftable;
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb0);
  }
  return param_1;
}



int __fastcall FUN_00988a90(int param_1)

{
  return param_1 + 0x3c;
}



void __thiscall FUN_009890a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  
  for (piVar4 = (int *)(param_1 + 0x70); piVar4 != (int *)(param_1 + 0x88); piVar4 = piVar4 + 1) {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x160);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (*(char *)(iVar2 + 0x15c) != '\0')) {
        func_0x00980970(param_2);
      }
    }
  }
  pcVar3 = *(code **)(**(int **)(param_1 + 0x50) + 4);
  _guard_check_icall(param_2);
  (*pcVar3)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00989213)
// WARNING: Removing unreachable block (ram,0x0098921c)
// WARNING: Removing unreachable block (ram,0x0098921e)

void __thiscall FUN_00989110(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  char unaff_SI;
  uint auStack_1c [3];
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  undefined4 uStack_4;
  
  iStack_10 = param_1;
  switch(param_3) {
  case 9:
    uStack_4 = 0;
    func_0x00981380(&uStack_4);
    func_0x00989730();
    return;
  case 10:
    *(undefined1 *)(param_1 + 0x74) = 0;
    func_0x00953460(10);
    return;
  case 0xb:
    func_0x00975770();
    uVar3 = func_0x009091f0(auStack_1c);
    uStack_8 = CONCAT31((int3)((uint)uVar3 >> 8),unaff_SI);
    if (unaff_SI != '\0') {
      while( true ) {
        uVar2 = auStack_1c[0];
        func_0x009758f0(*(int *)(param_1 + 0x54 + (auStack_1c[0] & 0xff) * 4) + 0x40);
        uStack_8 = uStack_8 & 0xff & ~(1 << (uVar2 & 0x1f));
        if ((char)uStack_8 == '\0') break;
        auStack_1c[0] = 0;
        if (uStack_8 != 0) {
          for (; (uStack_8 >> auStack_1c[0] & 1) == 0; auStack_1c[0] = auStack_1c[0] + 1) {
          }
        }
        auStack_1c[1] = 0;
      }
    }
    uStack_c = 0;
    iStack_10 = 0;
    memset((void *)(*(int *)(param_1 + 0x70) + 0x54),0,0x180);
    func_0x00989730();
    return;
  case 0xc:
    pcVar1 = *(code **)(**(int **)(param_1 + 0x34) + 0xc);
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  return;
}



undefined4 __thiscall FUN_00989270(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 0x3c) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x38) + 0x10);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



int __thiscall FUN_0098ad70(int param_1,byte param_2)

{
  func_0x0098ab30();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -4,0x400);
  }
  return param_1 + -4;
}



int __thiscall FUN_0098ad80(int param_1,byte param_2)

{
  func_0x0098ab30();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1 + -8,0x400);
  }
  return param_1 + -8;
}



void __thiscall FUN_0098e0a0(int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 == 3) {
    *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) | 1 << (param_2 & 0x1f);
    if (*(int *)(param_1 + 0x38) != 0) {
      *(undefined1 *)(param_1 + 0x33c) = 0;
    }
    func_0x00953460();
    if (param_2 == 8) {
      iVar4 = param_1 + 0x1c4;
    }
    else if (param_2 == 9) {
      iVar4 = param_1 + 0x1f0;
    }
    else {
      iVar4 = param_2 * 0x2c + 0x60 + param_1;
    }
    iVar2 = func_0x009692f0();
    if (iVar2 == 0) {
      uVar3 = *(uint *)(param_1 + 0x2f0) | 1 << (param_2 & 0x1f);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x2f0) & ~(1 << (param_2 & 0x1f));
    }
    *(uint *)(param_1 + 0x2f0) = uVar3;
    if (param_2 < 8) {
      pcVar1 = *(code **)(**(int **)(iVar4 + 0x18) + 8);
      _guard_check_icall(&stack0xfffffff8,*(undefined4 *)(iVar4 + 4),iVar4 + 8);
      (*pcVar1)();
      if (iRam00000052 == 0x1406) {
        *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) | (byte)(1 << (param_2 & 0x1f));
        return;
      }
      *(byte *)(param_1 + 0x3f0) = *(byte *)(param_1 + 0x3f0) & ~(byte)(1 << (param_2 & 0x1f));
    }
  }
  else {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) | 1 << (param_2 + 10 & 0x1f);
      func_0x00953460(2);
      return;
    }
    if (param_3 == 8) {
      if (param_2 < 8) {
        *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) | 1 << (param_2 + 10 & 0x1f);
        func_0x00953460(2);
        return;
      }
    }
    else {
      if (param_3 == 7) {
        func_0x00953460(7);
        return;
      }
      if (param_3 == 0xd) {
        *(uint *)(param_1 + 0x3ec) = *(uint *)(param_1 + 0x3ec) | 1 << (param_2 & 0x1f);
        func_0x0098dd50();
        return;
      }
    }
  }
  return;
}



undefined4 __thiscall FUN_0098eb00(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 0x44) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 0x334) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x334) + 0x44);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



undefined4 * __thiscall FUN_0098f0f0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::GLImplFactory::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0098f120(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::GLImplFactory::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



undefined4 FUN_0098f150(void)

{
  return 1;
}



undefined4 FUN_0098f160(void)

{
  return 1;
}



undefined * FUN_0098f170(void)

{
  return &DAT_013de288;
}



void FUN_0098f350(undefined4 *param_1)

{
  *param_1 = 0x3000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 * __thiscall FUN_0098f4c0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -6;
  *puVar5 = gl::Sync::vftable;
  *param_1 = gl::Sync::vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[1];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[1] = 0;
  uVar2 = param_1[7];
  if (0xf < uVar2) {
    iVar3 = param_1[2];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x40);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_0098f4d0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *param_1 = gl::Sync::vftable;
  param_1[6] = gl::Sync::vftable;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[7];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[7] = 0;
  uVar2 = param_1[0xd];
  if (0xf < uVar2) {
    iVar3 = param_1[8];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = gl::LabeledObject::vftable;
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  return param_1;
}



void __thiscall FUN_0098f640(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x1c) + 4);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_0098f730(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((undefined4 *)(param_1 + 8) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  return 0;
}



undefined4 * __thiscall FUN_0098f840(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = gl::MemoryObject::vftable;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[6];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



void __thiscall FUN_0098f930(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 0x18) + 4);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_0098fc10(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  func_0x009676c0();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



undefined4 * __thiscall FUN_0098fe50(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::PixelLocalStoragePlane::ClearCommands::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0098fe80(undefined4 *param_1,byte param_2)

{
  *param_1 = gl::PixelLocalStoragePlane::ClearCommands::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0098feb0(undefined4 *param_1,byte param_2)

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
  *param_1 = gl::PixelLocalStorage::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 2,0x54,8,FUN_008e8b00,uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2a8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0098ff30(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f45790;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1[0xb4];
  while (iVar1 != 0) {
    param_1[0xb4] = iVar1 + -1;
    param_1[iVar1 + 0xab] = 0;
    iVar1 = param_1[0xb4];
  }
  *param_1 = gl::PixelLocalStorage::vftable;
  uStack_8 = 1;
  func_0x008ab4ad(param_1 + 2,0x54,8,FUN_008e8b00,uVar2);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2f4);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0098ffd0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f45790;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar1 = param_1[0xb2];
  while (iVar1 != 0) {
    param_1[0xb2] = iVar1 + -1;
    param_1[iVar1 + 0xa9] = 0;
    iVar1 = param_1[0xb2];
  }
  *param_1 = gl::PixelLocalStorage::vftable;
  uStack_8 = 1;
  func_0x008ab4ad(param_1 + 2,0x54,8,FUN_008e8b00,uVar2);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2f0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00990070(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3e8f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  *param_1 = gl::_anon_5B9D88B5::PixelLocalStorageImageLoadStore::vftable;
  func_0x008e8980(uVar1);
  *param_1 = gl::PixelLocalStorage::vftable;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x008ab4ad(param_1 + 2,0x54,8,FUN_008e8b00);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c4);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00990530(undefined4 param_1,undefined4 param_2)

{
  func_0x008c4f30(0x1800,param_1,param_2);
  return;
}



void FUN_00990550(undefined4 param_1,undefined4 param_2)

{
  func_0x008c4fd0(0x1800,param_1,param_2);
  return;
}



void FUN_00990570(undefined4 param_1,undefined4 param_2)

{
  func_0x008c5070(0x1800,param_1,param_2);
  return;
}



void FUN_00990b80(void)

{
  func_0x008c9f50();
  return;
}



void FUN_00990b90(void)

{
  func_0x008d59c0(0x20);
  return;
}



void __thiscall FUN_00990ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *unaff_EDI;
  bool bVar5;
  undefined4 unaff_retaddr;
  int iVar6;
  
  iVar2 = func_0x0092a750();
  uVar4 = *(uint *)(param_1 + 0x2d0);
  iVar6 = param_1 + 0x2b0;
  uVar1 = *(uint *)(iVar2 + 0x20);
  bVar5 = uVar4 < uVar1;
  if (uVar1 < uVar4) {
    do {
      *(uint *)(param_1 + 0x2d0) = uVar4 - 1;
      *(undefined4 *)(iVar6 + (uVar4 - 1) * 4) = 0;
      uVar4 = *(uint *)(param_1 + 0x2d0);
      bVar5 = uVar4 < uVar1;
    } while (!bVar5 && uVar4 != uVar1);
  }
  if (bVar5) {
    do {
      *(undefined4 *)(iVar6 + uVar4 * 4) = 0;
      uVar4 = *(int *)(param_1 + 0x2d0) + 1;
      *(uint *)(param_1 + 0x2d0) = uVar4;
    } while (uVar4 < uVar1);
  }
  func_0x008ab0e6(iVar6,iVar2,*(int *)(iVar2 + 0x20) << 2);
  iVar6 = 0;
  func_0x008c86f0(0);
  uVar3 = func_0x0098d470();
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  uVar3 = func_0x0098d440();
  *(undefined4 *)(param_1 + 0x2ac) = uVar3;
  func_0x008c9fb0(0x8ca9,0x9310,param_3);
  func_0x008c9fb0(0x8ca9,0x9311,unaff_retaddr);
  func_0x008c9490(iVar6,param_1 + 8,unaff_EDI);
  memcpy((void *)(param_1 + 0x2d4),unaff_EDI,iVar6 * 4);
  return;
}



// WARNING: Removing unreachable block (ram,0x00990d71)
// WARNING: Removing unreachable block (ram,0x00990d75)
// WARNING: Removing unreachable block (ram,0x00990d7d)
// WARNING: Removing unreachable block (ram,0x00990d85)
// WARNING: Removing unreachable block (ram,0x00990d91)
// WARNING: Removing unreachable block (ram,0x00990db1)
// WARNING: Removing unreachable block (ram,0x00990dbb)
// WARNING: Removing unreachable block (ram,0x00990dbe)
// WARNING: Removing unreachable block (ram,0x00990dc2)

void __thiscall FUN_00990c90(int *param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  undefined **ppuStack_60;
  int iStack_5c;
  undefined4 *puStack_58;
  int iStack_54;
  char *pcStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  int *piStack_3c;
  byte bStack_37;
  char cStack_36;
  char cStack_35;
  int aiStack_34 [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f45845;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_44 = param_2;
  piStack_3c = param_1;
  piStack_40 = (int *)func_0x0092a750(uStack_14);
  piVar10 = param_1 + 0xaa;
  uVar2 = *(uint *)((int)piStack_40 + 0x20);
  uVar7 = param_1[0xb2];
  bVar13 = uVar7 < uVar2;
  if (uVar2 < uVar7) {
    do {
      param_1[0xb2] = uVar7 - 1;
      piVar10[uVar7 - 1] = 0;
      uVar7 = param_1[0xb2];
      bVar13 = uVar7 < uVar2;
    } while (!bVar13 && uVar7 != uVar2);
  }
  if (bVar13) {
    do {
      piVar10[uVar7] = 0;
      uVar7 = param_1[0xb2] + 1;
      param_1[0xb2] = uVar7;
    } while (uVar7 < uVar2);
  }
  func_0x008ab0e6(piVar10,piStack_40,*(int *)((int)piStack_40 + 0x20) << 2);
  iVar11 = *(int *)(param_2 + 0x360) - param_3;
  iVar8 = *(int *)((int)piStack_40 + 0x20);
  if (iVar11 < *(int *)((int)piStack_40 + 0x20)) {
    iVar8 = iVar11;
  }
  func_0x008ab0e6(aiStack_34,piStack_40,iVar8 * 4);
  piStack_40 = aiStack_34 + iVar11;
  memset(aiStack_34 + iVar8,0,(int)piStack_40 - (int)(aiStack_34 + iVar8));
  cStack_36 = '\0';
  *(undefined2 *)(piStack_3c + 0xb3) = 0;
  if ((*(char *)(iStack_44 + 0x129d) == '\0') && (*(char *)(iStack_44 + 0x129e) == '\0')) {
    cStack_35 = '\0';
    if ((*(byte *)(iStack_44 + 0x1439) & 1) != 0) {
      func_0x008c78b0(0xbe2);
      *(byte *)(piStack_3c + 0xb3) = *(byte *)(piStack_3c + 0xb3) | 1;
    }
    piVar10 = piStack_3c;
    pcVar12 = (char *)((int)piStack_3c + 0x2ce);
    func_0x009543b0(0,pcVar12,(int)piStack_3c + 0x2cf,piStack_3c + 0xb4,(int)piStack_3c + 0x2d1);
    iVar8 = iStack_44;
    if ((((*pcVar12 == '\0') || (*(char *)((int)piVar10 + 0x2cf) == '\0')) ||
        ((char)piVar10[0xb4] == '\0')) || (*(char *)((int)piVar10 + 0x2d1) == '\0')) {
      func_0x008c51e0(1,1,1,1);
      *(byte *)((int)piStack_3c + 0x2cd) = *(byte *)((int)piStack_3c + 0x2cd) | 1;
    }
  }
  else {
    cStack_35 = '\x01';
    iVar8 = iStack_44;
  }
  iStack_48 = 0;
  if (0 < param_3) {
    iStack_4c = 0;
    do {
      iVar11 = *(int *)(iVar8 + 0x360) - iStack_48;
      pcVar12 = (char *)(iVar11 + -1);
      iStack_5c = *(int *)(param_4 + iStack_48 * 4);
      pcStack_50 = pcVar12;
      if (iStack_5c == 0x96e5) {
        aiStack_34[(int)pcVar12] = 0;
      }
      else {
        puStack_58 = (undefined4 *)((int)piStack_3c + iStack_4c + 0x18);
        piStack_40 = (int *)((int)piStack_3c + iStack_4c + 0x24);
        cVar6 = func_0x00967db0();
        iVar8 = iStack_44;
        if (cVar6 == '\0') {
          uVar3 = *puStack_58;
          uVar4 = *(undefined4 *)(*piStack_40 + 0x10);
          uVar9 = func_0x00967be0();
          iVar8 = iStack_44;
          func_0x008ca110(0x8ca9,iVar11 + 0x8cdf,uVar9,uVar4,uVar3);
          pcVar12 = pcStack_50;
        }
        else {
          func_0x008ca490(0x8ca9,iVar11 + 0x8cdf,*(undefined4 *)(*piStack_40 + 0x10),*puStack_58,
                          *(undefined4 *)(iStack_4c + 0x1c + (int)piStack_3c));
        }
        aiStack_34[(int)pcVar12] = (int)(pcVar12 + 0x8ce0);
        if (cStack_35 != '\0') {
          pcStack_50 = (char *)(iVar8 + 0x13f8);
          bStack_37 = '\x01' << ((byte)pcVar12 & 0x1f);
          if ((*(byte *)(iVar8 + 0x1439) & bStack_37) != 0) {
            func_0x008c7930(0xbe2,pcVar12);
            *(byte *)(piStack_3c + 0xb3) = *(byte *)(piStack_3c + 0xb3) | bStack_37;
          }
          pcVar1 = (char *)((int)piStack_3c + (int)pcVar12 * 4 + 0x2ce);
          pcStack_50 = pcVar1 + 3;
          func_0x009543b0(pcVar12,pcVar1,pcVar1 + 1,pcVar1 + 2,pcStack_50);
          iVar8 = iStack_44;
          if (((*pcVar1 == '\0') || (pcVar1[1] == '\0')) ||
             ((pcVar1[2] == '\0' || (pcVar1[3] == '\0')))) {
            func_0x008c5230(pcVar12,1,1,1,1);
            *(byte *)((int)piStack_3c + 0x2cd) = *(byte *)((int)piStack_3c + 0x2cd) | bStack_37;
          }
        }
        if ((cStack_36 != '\0') || (cStack_36 = '\0', iStack_5c != 0x1e00)) {
          cStack_36 = '\x01';
        }
      }
      iStack_48 = iStack_48 + 1;
      iStack_4c = iStack_4c + 0x54;
    } while (iStack_48 < param_3);
  }
  func_0x008c86f0(*(undefined4 *)(iVar8 + 0x360),aiStack_34);
  if (cStack_36 != '\0') {
    pcStack_50 = (char *)(uint)*(byte *)(iVar8 + 0x13bc);
    iStack_54 = iVar8;
    if (pcStack_50 != (char *)0x0) {
      func_0x008c78b0(0xc11);
    }
    ppuStack_60 = gl::ClearBufferCommands::vftable;
    uStack_8 = 5;
    piStack_40 = (int *)0x0;
    iStack_5c = iVar8;
    if (0 < param_3) {
      iStack_48 = 0;
      do {
        iVar11 = *(int *)(param_4 + (int)piStack_40 * 4);
        if ((iVar11 != 0x96e5) && (iVar11 != 0x1e00)) {
          func_0x009909c0(&ppuStack_60,(*(int *)(iVar8 + 0x360) - (int)piStack_40) + -1,iVar11);
        }
        piStack_40 = (int *)((int)piStack_40 + 1);
        iStack_48 = iStack_48 + 0x54;
      } while ((int)piStack_40 < param_3);
    }
    ppuStack_60 = gl::PixelLocalStoragePlane::ClearCommands::vftable;
    uStack_8 = 6;
    if (pcStack_50 != (char *)0x0) {
      func_0x008c9b20(0xc11);
    }
    uStack_8 = 0xffffffff;
  }
  if (*(char *)(iVar8 + 0x133c) == '\0') {
    pcVar5 = *(code **)(*piStack_3c + 0x14);
    _guard_check_icall(iVar8);
    (*pcVar5)();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00991130(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined3 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  undefined1 *puVar14;
  int *unaff_FS_OFFSET;
  undefined8 uVar15;
  undefined **ppuStack_c4;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint *puStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int *piStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_98;
  uint *puStack_94;
  uint uStack_90;
  uint uStack_8c;
  int iStack_88;
  int aiStack_84 [8];
  uint uStack_64;
  int aiStack_60 [8];
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [32];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f458c4;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar10 = *(uint *)(param_1 + 700);
  puStack_94 = (uint *)(param_1 + 0x2b8);
  uVar13 = *puStack_94;
  iStack_88 = param_2;
  iStack_a8 = param_1;
  uStack_8c = uVar10;
  uStack_14 = uVar4;
  if (uVar13 != uVar10) {
    do {
      func_0x009539c0(uVar4);
      uVar13 = uVar13 + 0x1c;
    } while (uVar13 != uVar10);
    uStack_8c = *puStack_94;
    puStack_94[1] = uStack_8c;
  }
  iVar9 = iStack_88;
  puVar11 = puStack_94;
  uStack_90 = param_3;
  if ((uint)((int)(puStack_94[2] - *puStack_94) / 0x1c) < param_3) {
    if (0x9249249 < param_3) {
      func_0x0046e700();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uStack_a0 = (int)(uStack_8c - *puStack_94) / 0x1c;
    uVar13 = func_0x008e60c0(puStack_94,&uStack_90);
    uStack_8c = puVar11[1];
    uVar10 = *puVar11;
    uStack_8 = 1;
    uStack_b8 = uVar13;
    uStack_b4 = uVar13;
    puStack_b0 = puVar11;
    uStack_9c = uVar13;
    uStack_90 = uVar10;
    if (uVar10 != uStack_8c) {
      do {
        uStack_b4 = uVar13;
        func_0x009536c0(uVar10);
        uVar13 = uVar13 + 0x1c;
        uVar10 = uVar10 + 0x1c;
        puVar11 = puStack_94;
        iVar9 = iStack_88;
        uStack_b4 = uVar13;
      } while (uVar10 != uStack_8c);
    }
    func_0x008e9430(uStack_9c,uStack_a0,param_3);
    uStack_8 = 0xffffffff;
  }
  if (0 < (int)param_3) {
    uStack_90 = param_3;
    puStack_94 = (uint *)0x0;
    do {
      if (puVar11[1] == puVar11[2]) {
        func_0x0098f9d0(puVar11[1],*(int *)(iVar9 + 0x1748) + (int)puStack_94);
      }
      else {
        func_0x009536c0();
        puVar11[1] = puVar11[1] + 0x1c;
      }
      puStack_94 = puStack_94 + 7;
      uStack_90 = uStack_90 - 1;
    } while (uStack_90 != 0);
  }
  uVar5 = func_0x0098d470();
  *(undefined4 *)(iStack_a8 + 0x2b0) = uVar5;
  uVar5 = func_0x0098d440();
  iVar8 = iStack_a8;
  *(undefined4 *)(iStack_a8 + 0x2b4) = uVar5;
  func_0x008c9fb0(0x8ca9,0x9310,param_5);
  func_0x008c9fb0(0x8ca9,0x9311,param_6);
  uStack_90 = *(uint *)(iVar9 + 0x6c);
  iStack_bc = *(int *)(iVar9 + 0x14e8);
  piVar12 = (int *)(iVar8 + 0x2ac);
  uStack_8 = 2;
  uStack_b4 = iVar9;
  puStack_b0 = (uint *)iStack_bc;
  if (*piVar12 != 0) {
    func_0x008c40c0(0x8ca9,*piVar12);
    goto LAB_00991528;
  }
  func_0x008ca8e0(1,piVar12);
  func_0x008c40c0(0x8ca9,*piVar12);
  uStack_40 = uStack_90;
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  uStack_9c = (int)(uStack_90 * 4) >> 2;
  iVar8 = 0x8ce0;
  if (uStack_9c < 0x80000000) {
    uVar10 = 0;
    iVar9 = iStack_88;
    if (uStack_9c != 0) {
      if (0xf < uStack_9c) {
        uStack_8c = uStack_9c & 0x8000000f;
        if ((int)uStack_8c < 0) {
          uStack_8c = (uStack_8c - 1 | 0xfffffff0) + 1;
        }
        uStack_8c = uStack_9c - uStack_8c;
        puStack_94 = &uStack_40;
        uVar13 = uVar10;
        do {
          puStack_94[-8] = uVar13 + 0x8ce0;
          puStack_94[-7] = uVar13 + 0x8ce1;
          puStack_94[-6] = uVar13 + 0x8ce2;
          puStack_94[-5] = uVar13 + 0x8ce3;
          puStack_94[-4] = uVar13 + 0x8ce4;
          puStack_94[-3] = uVar13 + 0x8ce5;
          puStack_94[-2] = uVar13 + 0x8ce6;
          puStack_94[-1] = uVar13 + 0x8ce7;
          *puStack_94 = uVar13 + 0x8ce8;
          puStack_94[1] = uVar13 + 0x8ce9;
          puStack_94[2] = uVar13 + 0x8cea;
          puStack_94[3] = uVar13 + 0x8ceb;
          uVar10 = uVar13 + 0x10;
          puStack_94[4] = uVar13 + 0x8cec;
          puStack_94[5] = uVar13 + 0x8ced;
          puStack_94[6] = uVar13 + 0x8cee;
          puStack_94[7] = uVar13 + 0x8cef;
          puStack_94 = puStack_94 + 0x10;
          uVar13 = uVar10;
        } while (uVar10 != uStack_8c);
        if (uVar10 == uStack_9c) goto LAB_009914d5;
      }
      do {
        aiStack_60[uVar10] = uVar10 + 0x8ce0;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uStack_9c);
    }
  }
  else {
    for (piVar12 = aiStack_60; piVar12 != aiStack_60 + uStack_90; piVar12 = piVar12 + 1) {
      *piVar12 = iVar8;
      iVar8 = iVar8 + 1;
    }
  }
LAB_009914d5:
  func_0x008c86f0(uStack_40,aiStack_60);
  while (uStack_40 != 0) {
    uStack_40 = uStack_40 - 1;
    aiStack_60[uStack_40] = 0;
  }
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  uStack_40 = 0;
LAB_00991528:
  cVar1 = *(char *)(iVar9 + 0x13bc);
  if (cVar1 != '\0') {
    func_0x008c78b0(0xc11);
  }
  uStack_a0 = 0;
  uStack_8c = 0;
  if (0 < (int)param_3) {
    do {
      uVar10 = 0;
      uStack_9c = 0;
      uStack_64 = 0;
      uStack_8 = CONCAT31(uStack_8._1_3_,6);
      if (uStack_90 != 0) {
        puStack_94 = (uint *)(uStack_8c * 0x54);
        do {
          if ((int)param_3 <= (int)uStack_8c) break;
          piStack_ac = *(int **)(param_4 + uStack_8c * 4);
          if (piStack_ac != (int *)0x96e5) {
            piVar12 = (int *)(iStack_a8 + 8 + (int)puStack_94);
            iVar9 = *piVar12;
            if (*(char *)(iStack_a8 + 0x2a8) != '\0') {
              if ((iVar9 == 0x8058) || (iVar9 == 0x8d7c)) {
                iVar9 = 0x8236;
              }
              else if (iVar9 == 0x8d8e) {
                iVar9 = 0x8235;
              }
            }
            piStack_a4 = piVar12;
            func_0x008c4170(uStack_8c,*(undefined4 *)(piVar12[7] + 0x10),piVar12[4],0,piVar12[5],
                            0x88ba,iVar9);
            if ((piStack_ac == (int *)0x0) || (iVar9 = iStack_88, piStack_ac == (int *)0x96e4)) {
              iStack_98 = uVar10 + 0x8ce0;
              piStack_ac = piVar12 + 3;
              cVar3 = func_0x00967db0();
              iVar9 = iStack_88;
              if (cVar3 == '\0') {
                iVar8 = piVar12[4];
                uVar5 = *(undefined4 *)(piStack_a4[7] + 0x10);
                uVar6 = func_0x00967be0();
                iVar9 = iStack_88;
                func_0x008ca110(0x8ca9,iStack_98,uVar6,uVar5,iVar8);
              }
              else {
                func_0x008ca490(0x8ca9,uVar10 + 0x8ce0,*(undefined4 *)(piVar12[7] + 0x10),piVar12[4]
                                ,piVar12[5]);
                uStack_9c = uVar10;
              }
              aiStack_84[uStack_9c] = uStack_8c;
              uVar10 = uStack_64 + 1;
              uStack_64 = uVar10;
              uStack_9c = uVar10;
            }
          }
          puStack_94 = puStack_94 + 0x15;
          uStack_8c = uStack_8c + 1;
        } while (uVar10 < uStack_90);
      }
      iStack_3c = iVar9;
      uStack_38 = uVar10;
      if ((*(char *)(iVar9 + 0x129d) == '\0') && (*(char *)(iVar9 + 0x129e) == '\0')) {
        func_0x009543b0(0,auStack_34,auStack_34 + 1,auStack_34 + 2,auStack_34 + 3);
        uVar13 = func_0x008c51e0(1,1,1,1);
      }
      else {
        iStack_98 = 0;
        uVar13 = param_3;
        if (0 < (int)uVar10) {
          iVar8 = 0;
          piStack_a4 = (int *)(iVar9 + 0x13f8);
          puVar14 = auStack_34 + 2;
          do {
            func_0x009543b0(iVar8,puVar14 + -2,puVar14 + -1,puVar14,puVar14 + 1);
            uVar13 = func_0x008c5230(iVar8,1,1,1,1);
            iVar8 = iVar8 + 1;
            puVar14 = puVar14 + 4;
            uVar10 = uStack_9c;
            iVar9 = iStack_88;
          } while (iVar8 < (int)uStack_38);
        }
      }
      ppuStack_c4 = gl::ClearBufferCommands::vftable;
      uVar4 = 0;
      uStack_8._0_1_ = 0xc;
      iStack_c0 = iVar9;
      if (uVar10 != 0) {
        iStack_98 = iStack_a8 + 8;
        do {
          uVar13 = func_0x009909c0(&ppuStack_c4,uVar4,
                                   *(undefined4 *)(param_4 + aiStack_84[uVar4] * 4));
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar10);
      }
      ppuStack_c4 = gl::PixelLocalStoragePlane::ClearCommands::vftable;
      if (uStack_a0 < uVar10) {
        uStack_a0 = uVar10;
      }
      uVar15 = CONCAT44(uStack_a0,uVar13);
      uStack_8._0_1_ = 0xd;
      if ((*(char *)(iStack_3c + 0x129d) == '\0') && (*(char *)(iStack_3c + 0x129e) == '\0')) {
        func_0x008c51e0(CONCAT13(auStack_34[3],
                                 CONCAT12(auStack_34[2],CONCAT11(auStack_34[1],auStack_34[0]))),
                        CONCAT13(auStack_34[4],
                                 CONCAT12(auStack_34[3],CONCAT11(auStack_34[2],auStack_34[1]))),
                        CONCAT13(auStack_34[5],
                                 CONCAT12(auStack_34[4],CONCAT11(auStack_34[3],auStack_34[2]))),
                        CONCAT13(auStack_34[6],
                                 CONCAT12(auStack_34[5],CONCAT11(auStack_34[4],auStack_34[3]))));
      }
      else {
        iStack_98 = 0;
        if (0 < (int)uStack_38) {
          iVar9 = 0;
          puVar14 = auStack_34 + 2;
          do {
            uVar7 = (undefined3)((ulonglong)uVar15 >> 8);
            iStack_98 = CONCAT31(uVar7,puVar14[1]);
            piStack_a4 = (int *)CONCAT31(uVar7,puVar14[-2]);
            uVar15 = func_0x008c5230(iVar9,piStack_a4,puVar14[-1],*puVar14,iStack_98);
            iVar9 = iVar9 + 1;
            puVar14 = puVar14 + 4;
            uVar10 = uStack_9c;
          } while (iVar9 < (int)uStack_38);
        }
      }
      while (uVar10 != 0) {
        uStack_64 = uVar10 - 1;
        aiStack_84[uStack_64] = 0;
        uVar10 = uStack_64;
      }
      iVar9 = iStack_88;
    } while ((int)uStack_8c < (int)param_3);
  }
  uStack_8._0_1_ = 5;
  uVar10 = 0;
  if (uStack_a0 != 0) {
    do {
      func_0x008ca110(0x8ca9,uVar10 + 0x8ce0,0,0,0);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uStack_a0);
  }
  func_0x008d59c0(0x20);
  uStack_8 = CONCAT31(uStack_8._1_3_,0xf);
  if (cVar1 != '\0') {
    func_0x008c9b20(0xc11);
  }
  uStack_8 = 0x10;
  func_0x008c3f90(*(undefined4 *)(iStack_bc + 0x38));
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00991960(int param_1)

{
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  return;
}



void __fastcall FUN_00991970(int param_1)

{
  if (*(int *)(param_1 + 0x2ac) != 0) {
    func_0x008c6bd0(*(undefined4 *)(param_1 + 0x2ac));
    *(undefined4 *)(param_1 + 0x2ac) = 0;
  }
  return;
}



void __thiscall FUN_009919a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  func_0x008c9440(param_1 + 8,param_3);
  func_0x008c9fb0(0x8ca9,0x9310,*(undefined4 *)(param_1 + 0x2a8));
  func_0x008c9fb0(0x8ca9,0x9311,*(undefined4 *)(param_1 + 0x2ac));
  func_0x008c86f0(*(undefined4 *)(param_1 + 0x2d0),param_1 + 0x2b0);
  iVar1 = *(int *)(param_1 + 0x2d0);
  while (iVar1 != 0) {
    *(int *)(param_1 + 0x2d0) = iVar1 + -1;
    *(undefined4 *)(param_1 + 0x2b0 + (iVar1 + -1) * 4) = 0;
    iVar1 = *(int *)(param_1 + 0x2d0);
  }
  return;
}



void __thiscall FUN_00991a20(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int iStack_48;
  int aiStack_38 [8];
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f458fd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = 0;
  iStack_18 = 0;
  iVar1 = *(int *)(param_2 + 0x18c0);
  iVar5 = iVar1 + -1;
  uStack_8 = 0;
  uStack_14 = uVar4;
  if (-1 < iVar5) {
    iVar8 = iVar5 * 0x54;
    do {
      if ((*(char *)(param_1 + 0x58 + iVar8) != '\0') &&
         ((*(int *)(param_3 + iVar5 * 4) != 0x1e00 || (*(char *)(iVar8 + 0xc + param_1) != '\0'))))
      {
        aiStack_38[iVar6] = (*(int *)(param_2 + 0x360) - iVar5) + 0x8cdf;
        iVar6 = iStack_18 + 1;
        iStack_18 = iVar6;
      }
      iVar8 = iVar8 + -0x54;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    if (iVar6 != 0) {
      func_0x008c7960(0x8ca9,iVar6,aiStack_38,uVar4);
    }
  }
  if ((*(char *)(param_2 + 0x129d) == '\0') && (*(char *)(param_2 + 0x129e) == '\0')) {
    bVar3 = false;
    if ((*(byte *)(param_1 + 0x2cc) & 1) != 0) {
      func_0x008c9b20(0xbe2);
    }
    if ((*(byte *)(param_1 + 0x2cd) & 1) == 0) {
      bVar2 = false;
    }
    else {
      func_0x008c51e0(*(undefined1 *)(param_1 + 0x2ce),*(undefined1 *)(param_1 + 0x2cf),
                      *(undefined1 *)(param_1 + 0x2d0),*(undefined1 *)(param_1 + 0x2d1));
      bVar2 = false;
      bVar3 = false;
    }
  }
  else {
    bVar2 = true;
    bVar3 = true;
  }
  iStack_48 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = *(int *)(param_2 + 0x360) - iStack_48;
      iVar6 = iVar5 + -1;
      func_0x008ca110(0x8ca9,iVar5 + 0x8cdf,0,0,0);
      if (bVar2) {
        bVar7 = '\x01' << ((byte)iVar6 & 0x1f);
        if ((*(byte *)(param_1 + 0x2cc) & bVar7) != 0) {
          func_0x008c9b90(0xbe2,iVar6);
        }
        bVar2 = bVar3;
        if ((*(byte *)(param_1 + 0x2cd) & bVar7) != 0) {
          func_0x008c5230(iVar6,*(undefined1 *)(param_1 + 0x2ce + iVar6 * 4),
                          *(undefined1 *)(param_1 + 0x2cf + iVar6 * 4),
                          *(undefined1 *)(param_1 + 0x2d0 + iVar6 * 4),
                          *(undefined1 *)(param_1 + 0x2d1 + iVar6 * 4));
        }
      }
      iStack_48 = iStack_48 + 1;
    } while (iStack_48 < iVar1);
  }
  func_0x008c86f0(*(undefined4 *)(param_1 + 0x2c8),param_1 + 0x2a8);
  iVar5 = *(int *)(param_1 + 0x2c8);
  while (iVar5 != 0) {
    *(int *)(param_1 + 0x2c8) = iVar5 + -1;
    *(undefined4 *)(param_1 + 0x2a8 + (iVar5 + -1) * 4) = 0;
    iVar5 = *(int *)(param_1 + 0x2c8);
  }
  while (iStack_18 != 0) {
    iStack_18 = iStack_18 + -1;
    aiStack_38[iStack_18] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00991c50(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f3e610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar9 = *(int *)(param_1 + 700);
  iVar8 = *(int *)(param_1 + 0x2b8);
  uStack_14 = 0;
  iVar5 = iVar9 - iVar8 >> 0x1f;
  if ((iVar9 - iVar8) / 0x1c + iVar5 != iVar5) {
    iStack_18 = 0;
    do {
      uStack_8 = 0xffffffff;
      uVar2 = *(undefined4 *)(iStack_18 + 0x10 + iVar8);
      iVar9 = *(int *)(iStack_18 + 4 + iVar8);
      if (iVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(iVar9 + 0x10);
      }
      func_0x008c4170(uStack_14,uVar7,*(undefined4 *)(iStack_18 + 8 + iVar8),
                      CONCAT31((int3)((uint)uVar2 >> 8),*(undefined1 *)(iStack_18 + 0xc + iVar8)),
                      uVar2,*(undefined4 *)(iStack_18 + 0x14 + iVar8),
                      *(undefined4 *)(iStack_18 + 0x18 + iVar8),uVar6);
      piVar3 = *(int **)(iStack_18 + 4 + iVar8);
      *(undefined4 *)(iStack_18 + 4 + iVar8) = 0;
      uStack_8 = 0;
      if (piVar3 != (int *)0x0) {
        piVar1 = piVar3 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          pcVar4 = *(code **)*piVar3;
          _guard_check_icall(param_2);
          (*pcVar4)();
          pcVar4 = *(code **)(*piVar3 + 4);
          _guard_check_icall(1);
          (*pcVar4)();
        }
      }
      iVar9 = *(int *)(param_1 + 700);
      iStack_18 = iStack_18 + 0x1c;
      iVar8 = *(int *)(param_1 + 0x2b8);
      uStack_14 = uStack_14 + 1;
    } while (uStack_14 < (uint)((iVar9 - iVar8) / 0x1c));
  }
  uStack_8 = 0xffffffff;
  if (iVar8 != iVar9) {
    do {
      func_0x009539c0();
      iVar8 = iVar8 + 0x1c;
    } while (iVar8 != iVar9);
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 0x2b8);
  }
  func_0x008c9fb0(0x8ca9,0x9310,*(undefined4 *)(param_1 + 0x2b0));
  func_0x008c9fb0(0x8ca9,0x9311,*(undefined4 *)(param_1 + 0x2b4));
  func_0x008d59c0(0xffffffff);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00992000(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -6;
  *puVar5 = gl::Query::vftable;
  *param_1 = gl::Query::vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[1];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[1] = 0;
  uVar2 = param_1[7];
  if (0xf < uVar2) {
    iVar3 = param_1[2];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x38);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_00992010(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *param_1 = gl::Query::vftable;
  param_1[6] = gl::Query::vftable;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[7];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[7] = 0;
  uVar2 = param_1[0xd];
  if (0xf < uVar2) {
    iVar3 = param_1[8];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = gl::LabeledObject::vftable;
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 __thiscall FUN_009921f0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if ((undefined4 *)(param_1 + 8) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 4) + 0x28);
    _guard_check_icall(param_2);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return 0;
}



undefined4 * __thiscall FUN_009922d0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = gl::Semaphore::vftable;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[6];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



int * __fastcall FUN_00992950(int *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = func_0x008ab47d(0x1c);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  *param_1 = iVar1;
  return param_1;
}



int * __fastcall FUN_00993230(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f45ba9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = func_0x008ab47d(0x20,uVar1);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  *param_1 = iVar2;
  uStack_8 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar2 = func_0x008ab47d(0x20);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  param_1[2] = iVar2;
  uStack_8._0_1_ = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = func_0x008ab47d(0x14);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  param_1[4] = iVar2;
  uStack_8._0_1_ = 2;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar2 = func_0x008ab47d(0x14);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  param_1[6] = iVar2;
  uStack_8._0_1_ = 3;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar2 = func_0x008ab47d(0x14);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  param_1[8] = iVar2;
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar2 = func_0x008ab47d(0x14);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  param_1[10] = iVar2;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00993470(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)((int)*(int **)(*param_1 + 4) + 0xd);
  piVar3 = *(int **)(*param_1 + 4);
  while (cVar1 == '\0') {
    func_0x00992520(param_1,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x1c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*param_1,0x1c);
  return;
}



void __fastcall thunk_FUN_00993470(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)((int)*(int **)(*param_1 + 4) + 0xd);
  piVar3 = *(int **)(*param_1 + 4);
  while (cVar1 == '\0') {
    func_0x00992520(param_1,piVar3[2]);
    piVar2 = (int *)*piVar3;
    func_0x008ab812(piVar3,0x1c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  func_0x008ab812(*param_1,0x1c);
  return;
}



void __fastcall FUN_00993ed0(int *param_1)

{
  func_0x008acf70();
  func_0x008acf70();
  func_0x008acf70();
  func_0x008acf70();
  func_0x00992560(param_1 + 2,*(undefined4 *)(param_1[2] + 4));
  func_0x008ab812(param_1[2],0x20);
  func_0x00992560(param_1,*(undefined4 *)(*param_1 + 4));
  func_0x008ab812(*param_1,0x20);
  return;
}



undefined4 * __thiscall FUN_00994100(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -6;
  *puVar5 = gl::Sampler::vftable;
  *param_1 = gl::Sampler::vftable;
  param_1[1] = gl::Sampler::vftable;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x1f];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x1f] = 0;
  uVar2 = param_1[0x25];
  if (0xf < uVar2) {
    iVar3 = param_1[0x20];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  func_0x00953210();
  *param_1 = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0xb0);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_00994110(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  puVar5 = param_1 + -7;
  *puVar5 = gl::Sampler::vftable;
  param_1[-1] = gl::Sampler::vftable;
  *param_1 = gl::Sampler::vftable;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x1e];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x1e] = 0;
  uVar2 = param_1[0x24];
  if (0xf < uVar2) {
    iVar3 = param_1[0x1f];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0xf;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  func_0x00953210();
  param_1[-1] = gl::LabeledObject::vftable;
  *puVar5 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0xb0);
  }
  return puVar5;
}



undefined4 * __thiscall FUN_00994120(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  *param_1 = gl::Sampler::vftable;
  param_1[6] = gl::Sampler::vftable;
  param_1[7] = gl::Sampler::vftable;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0x25];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0x25] = 0;
  uVar2 = param_1[0x2b];
  if (0xf < uVar2) {
    iVar3 = param_1[0x26];
    uVar6 = uVar2 + 1;
    iVar4 = iVar3;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar3 + -4);
      uVar6 = uVar2 + 0x24;
      if (0x1f < (iVar3 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined4 *)(*pcVar1)();
        return puVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf;
  *(undefined1 *)(param_1 + 0x26) = 0;
  func_0x00953210();
  param_1[6] = gl::LabeledObject::vftable;
  *param_1 = angle::RefCountObject<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb0);
  }
  return param_1;
}



void __thiscall FUN_00994240(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x94) + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
  }
  return;
}



undefined4 __thiscall FUN_00994300(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((undefined4 *)(param_1 + 0x80) != param_3) {
    puVar1 = param_3 + 4;
    if (0xf < (uint)param_3[5]) {
      param_3 = (undefined4 *)*param_3;
    }
    func_0x0046a660(param_3,*puVar1);
  }
  return 0;
}



void FUN_00994b10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00994b72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00994bec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00994c10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00994c72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00994cec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00994d10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00994d72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00994dec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00994e10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00994e72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00994eec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00994f10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00994f72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00994fec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995010(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995072. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009950ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995110(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995172. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009951ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995210(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995272. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009952ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995310(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995372. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009953ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995410(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995472. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009954ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995510(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995572. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009955ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995610(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995672. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009956ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995710(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995772. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009957ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995810(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995872. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009958ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995910(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995972. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009959ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995a10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995a72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00995aec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995b10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995b72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00995bec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995c10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995c72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00995cec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995d10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995d72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00995dec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995e10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995e72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00995eec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00995f10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00995f72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00995fec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996010(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996072. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009960ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996110(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996172. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009961ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996210(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996272. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009962ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996310(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996372. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009963ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996410(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996472. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009964ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996510(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996572. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009965ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996610(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996672. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009966ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996710(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996772. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009967ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996810(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996872. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009968ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996910(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996972. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009969ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996a10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996a72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00996aec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996b10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996b72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00996bec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996c10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996c72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00996cec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996d10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996d72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00996dec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996e10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996e72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00996eec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00996f10(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00996f72. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_00996fec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997010(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00997072. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009970ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997110(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00997172. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009971ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997210(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00997272. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009972ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997310(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00997372. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009973ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997410(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00997472. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009974ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997510(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00997572. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009975ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997610(uint param_1,uint param_2,uint param_3)

{
                    // WARNING: Could not recover jumptable at 0x00997672. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(&PTR_LAB_009976ec)
            [(uint)(1 < param_1) | -(uint)(1 < param_2) & 2 | -(uint)(1 < param_3) & 4])();
  return;
}



void FUN_00997710(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d69a0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 2);
      in_stack_00000010 = in_stack_00000010 + 4;
      in_stack_00000028 = in_stack_00000028 + 2;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997740(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6a00(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 2);
      in_stack_00000010 = in_stack_00000010 + 4;
      in_stack_00000028 = in_stack_00000028 + 2;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997770(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6aa0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_009977a0(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6ad0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 2);
      in_stack_00000010 = in_stack_00000010 + 4;
      in_stack_00000028 = in_stack_00000028 + 2;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_009977d0(void)

{
  uint uVar1;
  int in_stack_00000010;
  uint in_stack_0000001c;
  int in_stack_00000028;
  
  uVar1 = 0;
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6b90(uVar1 + in_stack_00000028,in_stack_00000010,in_stack_00000010 + 1);
      uVar1 = uVar1 + 1;
      in_stack_00000010 = in_stack_00000010 + 2;
    } while (uVar1 < in_stack_0000001c);
  }
  return;
}



void FUN_00997810(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6bb0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997840(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6c70(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 2);
      in_stack_00000010 = in_stack_00000010 + 4;
      in_stack_00000028 = in_stack_00000028 + 2;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997870(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6cf0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_009978a0(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6d20(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_009978d0(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6d50(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997900(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6df0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 8);
      in_stack_00000010 = in_stack_00000010 + 0x10;
      in_stack_00000028 = in_stack_00000028 + 8;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997930(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6e30(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 2);
      in_stack_00000010 = in_stack_00000010 + 4;
      in_stack_00000028 = in_stack_00000028 + 2;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997960(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6e60(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997990(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d6f20(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_009979c0(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d7010(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_009979f0(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d70b0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997a20(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d71e0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 2);
      in_stack_00000010 = in_stack_00000010 + 4;
      in_stack_00000028 = in_stack_00000028 + 2;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997a50(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d7210(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 4);
      in_stack_00000010 = in_stack_00000010 + 8;
      in_stack_00000028 = in_stack_00000028 + 4;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997a80(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d7260(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 6);
      in_stack_00000010 = in_stack_00000010 + 0xc;
      in_stack_00000028 = in_stack_00000028 + 6;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997ab0(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d72c0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 8);
      in_stack_00000010 = in_stack_00000010 + 0x10;
      in_stack_00000028 = in_stack_00000028 + 8;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997ae0(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d7340(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 8);
      in_stack_00000010 = in_stack_00000010 + 0x10;
      in_stack_00000028 = in_stack_00000028 + 8;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997b10(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d7460(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 8);
      in_stack_00000010 = in_stack_00000010 + 0x10;
      in_stack_00000028 = in_stack_00000028 + 8;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997b40(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d74c0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 6);
      in_stack_00000010 = in_stack_00000010 + 0xc;
      in_stack_00000028 = in_stack_00000028 + 6;
      in_stack_0000001c = in_stack_0000001c + -1;
    } while (in_stack_0000001c != 0);
  }
  return;
}



void FUN_00997b70(void)

{
  int in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_00000028;
  
  if (in_stack_0000001c != 0) {
    do {
      func_0x009d75a0(in_stack_00000028,in_stack_00000010,in_stack_00000010 + 6);
      in_stack_00000010 = in_stack_00000010 + 0xc;
