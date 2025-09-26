

undefined4 * __fastcall FUN_00564680(int param_1)

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
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00564730(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00564740(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_30;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 2) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  puVar3 = (undefined4 *)func_0x00530d50(auStack_30);
  uStack_28 = *puVar3;
  uStack_24 = puVar3[1];
  uStack_20 = CONCAT22(uStack_20._2_2_,*(undefined2 *)(puVar3 + 2));
  puVar3 = (undefined4 *)func_0x00530d50(&stack0xffffffcc);
  uStack_20 = *puVar3;
  uStack_1c = puVar3[1];
  uStack_18 = *(undefined2 *)(puVar3 + 2);
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_20,auStack_2c);
  uVar4 = (*pcVar1)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00564850(int param_1)

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
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00564900(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00564910(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  double dStack_78;
  code *pcStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  uint uStack_44;
  
  uStack_44 = DAT_0128fd40 ^ (uint)&dStack_78;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 2) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  puVar3 = (undefined4 *)func_0x00530d50(auStack_68);
  uStack_60 = *puVar3;
  uStack_5c = puVar3[1];
  uStack_58 = CONCAT22(uStack_58._2_2_,*(undefined2 *)(puVar3 + 2));
  puVar3 = (undefined4 *)func_0x00530d50(auStack_6c);
  uStack_58 = *puVar3;
  uStack_54 = puVar3[1];
  uStack_50 = *(undefined2 *)(puVar3 + 2);
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcStack_70 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_58,auStack_64);
  fVar4 = (float10)(*pcStack_70)();
  dStack_78 = (double)fVar4;
  func_0x00d667f0(DAT_0145e9f0,dStack_78);
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00564a30(int param_1)

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
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00564ae0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00564af0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_1c [16];
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 1) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  uStack_c = func_0x00530eb0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_1c,&uStack_c);
  (*pcVar1)();
  func_0x005661a0(auStack_1c);
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00564bb0(int param_1)

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
  puStack_c = &DAT_00ebdd78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = (undefined4 *)func_0x008ab47d(0x30,uVar2);
  *puVar3 = std::_Func_impl_no_alloc<>::vftable;
  puVar3[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar3 + 2);
    uVar4 = (*pcVar1)();
    puVar3[0xb] = uVar4;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



undefined4 * __fastcall FUN_005650e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



void FUN_0056f530(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f53a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f540(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f54a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f550(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f55a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f560(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f56a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f570(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f57d. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f580(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f58a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f590(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f59a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f5a0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f5aa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f5b0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f5ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f5c0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f5cd. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f5d0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f5da. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f5e0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f5ea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f5f0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f5fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f600(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f60a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f610(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f61a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0056f620(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x0056f62a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void __fastcall FUN_00570980(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec11dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0057a6b0(param_1,*(undefined4 *)(*param_1 + 4),uVar2);
  iVar1 = *(int *)(*param_1 + -4);
  if (0x1f < (*param_1 - iVar1) - 4U) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  func_0x008ab812(iVar1,0x2037);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00570e20(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_14 = param_1;
  func_0x00570fd0(uVar6);
  iVar7 = 0x10;
  do {
    iVar2 = *param_1;
    func_0x0057a6b0(param_1,*(undefined4 *)(iVar2 + 4));
    piVar4 = piStack_14;
    *(int *)(iVar2 + 4) = iVar2;
    *(int *)iVar2 = iVar2;
    *(int *)(iVar2 + 8) = iVar2;
    param_1[1] = 0;
    param_1 = param_1 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (piStack_14[0x5d] != 0) {
    func_0x0057a780();
    *(int *)piVar4[0x5c] = piVar4[0x5c];
    *(int *)(piVar4[0x5c] + 4) = piVar4[0x5c];
    piVar4[0x5d] = 0;
    piStack_14 = (int *)piVar4[0x5c];
    func_0x0046c050(&piStack_14);
  }
  func_0x004a5fa0();
  uStack_18 = 0;
  piStack_14 = (int *)0x0;
  *(int *)DAT_0145d970 = DAT_0145d970;
  *(int *)(DAT_0145d970 + 4) = DAT_0145d970;
  _DAT_0145d974 = 0;
  uStack_8 = 0;
  func_0x0046ffa0(&uStack_18);
  piVar5 = piStack_14;
  uStack_8 = 0xffffffff;
  if (piStack_14 != (int *)0x0) {
    LOCK();
    iVar7 = piStack_14[1] + -1;
    piStack_14[1] = iVar7;
    UNLOCK();
    if (iVar7 == 0) {
      pcVar3 = *(code **)*piStack_14;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar1 = piVar5 + 2;
      iVar7 = *piVar1 + -1;
      *piVar1 = iVar7;
      UNLOCK();
      if (iVar7 == 0) {
        pcVar3 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  func_0x004a5fa0();
  *(int *)DAT_0145d168 = DAT_0145d168;
  *(int *)(DAT_0145d168 + 4) = DAT_0145d168;
  _DAT_0145d16c = 0;
  FUN_004805d0();
  piVar4[0x6e] = 0xfffe;
  piVar4[0x6f] = 0xfffe;
  piVar4[0x70] = 0xfffd;
  piVar4[0x71] = 0xfffd;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_00571430(int param_1)

{
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x14c)) {
    func_0x00485920(*(int *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x148);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_1 + 0x158)) {
    func_0x00485920(*(int *)(param_1 + 0x154));
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x154);
  }
  return;
}



void __thiscall FUN_00571480(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined3 uVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  int *unaff_FS_OFFSET;
  bool bVar17;
  float fVar18;
  uint auStack_b0 [6];
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  int iStack_8c;
  uint auStack_88 [3];
  undefined8 uStack_7c;
  uint uStack_74;
  uint auStack_70 [5];
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  uint uStack_4c;
  char cStack_45;
  int *piStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec14db;
  iStack_1c = *unaff_FS_OFFSET;
  uVar10 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_50 = param_3;
  uStack_4c = 0;
  piStack_54 = (int *)*param_2;
  piStack_44 = param_2;
  iStack_8c = param_1;
  uStack_24 = uVar10;
  puVar6 = &stack0xfffffffc;
  if (piStack_54 == (int *)0x0) goto LAB_00571f2d;
  pcVar3 = *(code **)(*piStack_54 + 0x14);
  _guard_check_icall(uVar10);
  cVar8 = (*pcVar3)();
  if (cVar8 == '\0') {
    pcVar3 = *(code **)(*(int *)*param_2 + 0x20);
    _guard_check_icall(uVar10);
    cVar8 = (*pcVar3)();
    param_2 = piStack_44;
    if (cVar8 != '\0') goto LAB_00571eed;
    pcVar3 = *(code **)(*(int *)*piStack_44 + 0x18);
    _guard_check_icall(uVar10);
    cVar8 = (*pcVar3)();
    param_2 = piStack_44;
    if (cVar8 != '\0') goto LAB_00571eed;
    pcVar3 = *(code **)(*(int *)*piStack_44 + 0x1c);
    _guard_check_icall();
    cVar8 = (*pcVar3)();
    piVar15 = piStack_50;
    if (cVar8 == '\0') {
      pcVar3 = *(code **)(*(int *)*piStack_44 + 0x34);
      _guard_check_icall();
      cVar8 = (*pcVar3)();
      piStack_58 = (int *)*piStack_44;
      if (cVar8 == '\0') {
        pcVar3 = *(code **)(*piStack_58 + 0x38);
        _guard_check_icall();
        cVar8 = (*pcVar3)();
        piVar15 = piStack_50;
        if (cVar8 != '\0') {
          uStack_38 = 0;
          func_0x0046b930(&uStack_38);
          uStack_14 = 5;
          piStack_90 = (int *)(iStack_8c + 0x154);
          piStack_54 = (int *)*piStack_90;
          piStack_98 = *(int **)(iStack_8c + 0x158);
          if (piStack_54 != piStack_98) {
            do {
              if (piStack_54[1] != 0) {
                LOCK();
                piVar15 = (int *)(piStack_54[1] + 4);
                *piVar15 = *piVar15 + 1;
                UNLOCK();
              }
              piStack_58 = (int *)*piStack_54;
              piStack_94 = (int *)piStack_54[1];
              uStack_30 = *(undefined8 *)piStack_54;
              uStack_14._0_1_ = 6;
              uStack_74 = piStack_58[6];
              uStack_7c = *(ulonglong *)(piStack_58 + 4);
              bVar17 = *piStack_50 == (int)uStack_7c;
              if (((bVar17) &&
                  (uStack_7c._4_4_ = (int)(uStack_7c >> 0x20),
                  bVar17 = piStack_50[1] == uStack_7c._4_4_, bVar17)) &&
                 ((short)piStack_50[2] == (short)uStack_74)) {
                uVar12 = func_0x00570400(auStack_70 + 3);
                uStack_14 = CONCAT31(uStack_14._1_3_,7);
                uStack_4c = uStack_4c | 1;
                uVar14 = *(undefined4 *)((int)uStack_38 + 0x60);
                uVar13 = func_0x005703a0(auStack_b0);
                uStack_14 = 8;
                uStack_4c = uStack_4c | 2;
                cVar8 = FUN_005b8490(uVar13,uVar14,uVar12);
                cStack_45 = '\x01';
                if (cVar8 == '\0') goto LAB_005719f0;
              }
              else {
LAB_005719f0:
                cStack_45 = '\0';
              }
              uStack_14 = 7;
              if ((uStack_4c & 2) != 0) {
                uStack_4c = uStack_4c & 0xfffffffd;
                if (0xf < auStack_b0[5]) {
                  func_0x0046b1f0(auStack_b0,auStack_b0[0],auStack_b0[5]);
                }
                auStack_b0[4] = 0;
                auStack_b0[5] = 0xf;
                auStack_b0[0] = auStack_b0[0] & 0xffffff00;
              }
              uStack_14 = 6;
              if (((uStack_4c & 1) != 0) && (uStack_4c = uStack_4c & 0xfffffffe, auStack_70[3] != 0)
                 ) {
                func_0x004e7c10(auStack_70[3],auStack_70[4],auStack_70 + 3);
                func_0x004c7ff0(auStack_70[3],
                                ((int)((int)piStack_5c - auStack_70[3]) >> 3) * -0x55555555);
                auStack_70[3] = 0;
                auStack_70[4] = 0;
                piStack_5c = (int *)0x0;
              }
              piVar15 = piStack_94;
              if (cStack_45 != '\0') {
                uStack_14 = CONCAT31(uStack_14._1_3_,5);
                if (piStack_94 != (int *)0x0) {
                  LOCK();
                  iVar2 = piStack_94[1] + -1;
                  piStack_94[1] = iVar2;
                  UNLOCK();
                  if (iVar2 == 0) {
                    pcVar3 = *(code **)*piStack_94;
                    _guard_check_icall();
                    (*pcVar3)();
                    LOCK();
                    piVar1 = piVar15 + 2;
                    iVar2 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar2 == 1) {
                      pcVar3 = *(code **)(*piVar15 + 4);
                      _guard_check_icall();
                      (*pcVar3)();
                    }
                  }
                }
                uStack_14 = 0xffffffff;
                FUN_00468340();
                puVar6 = puStack_20;
                goto LAB_00571f2d;
              }
              uStack_14 = CONCAT31(uStack_14._1_3_,5);
              if (piStack_94 != (int *)0x0) {
                LOCK();
                iVar2 = piStack_94[1] + -1;
                piStack_94[1] = iVar2;
                UNLOCK();
                if (iVar2 == 0) {
                  pcVar3 = *(code **)*piStack_94;
                  _guard_check_icall();
                  (*pcVar3)();
                  LOCK();
                  iVar2 = piVar15[2] + -1;
                  piVar15[2] = iVar2;
                  UNLOCK();
                  if (iVar2 == 0) {
                    pcVar3 = *(code **)(*piVar15 + 4);
                    _guard_check_icall();
                    (*pcVar3)();
                  }
                }
              }
              piStack_54 = piStack_54 + 2;
            } while (piStack_54 != piStack_98);
          }
          puVar4 = (undefined4 *)piStack_90[1];
          if (puVar4 == (undefined4 *)piStack_90[2]) {
            func_0x00488a10(puVar4,&uStack_38);
          }
          else {
            *puVar4 = 0;
            puVar4[1] = 0;
            if (uStack_38._4_4_ != (int *)0x0) {
              LOCK();
              *(int *)((int)uStack_38._4_4_ + 4) = *(int *)((int)uStack_38._4_4_ + 4) + 1;
              UNLOCK();
            }
            *puVar4 = (int)uStack_38;
            puVar4[1] = uStack_38._4_4_;
            piStack_90[1] = piStack_90[1] + 8;
          }
          uStack_14 = 0xffffffff;
          FUN_00468340();
          piVar15 = piStack_50;
        }
      }
      else {
        uStack_40 = 0;
        func_0x0046b930(&uStack_40);
        uStack_38 = 0;
        uStack_14._1_3_ = 0;
        uVar7 = uStack_14._1_3_;
        uStack_14._0_1_ = 2;
        uStack_14._1_3_ = 0;
        piStack_54 = (int *)(iStack_8c + 0x148);
        piStack_94 = (int *)*piStack_54;
        piStack_58 = *(int **)(iStack_8c + 0x14c);
        if (piStack_94 != piStack_58) {
          do {
            if (piStack_94[1] != 0) {
              LOCK();
              piVar15 = (int *)(piStack_94[1] + 4);
              *piVar15 = *piVar15 + 1;
              UNLOCK();
            }
            piStack_98 = (int *)*piStack_94;
            piVar15 = (int *)piStack_94[1];
            uVar5 = *(undefined8 *)piStack_94;
            uStack_30 = *(undefined8 *)piStack_94;
            uStack_74 = piStack_98[6];
            uStack_7c = *(ulonglong *)(piStack_98 + 4);
            bVar17 = *piStack_50 == (int)uStack_7c;
            if (((bVar17) &&
                (uStack_7c._4_4_ = (int)(uStack_7c >> 0x20),
                bVar17 = piStack_50[1] == uStack_7c._4_4_, bVar17)) &&
               ((short)piStack_50[2] == (short)uStack_74)) {
              if (piVar15 != (int *)0x0) {
                LOCK();
                piVar15[1] = piVar15[1] + 1;
                UNLOCK();
              }
              auStack_70[4] = (int)uStack_38;
              piStack_90 = uStack_38._4_4_;
              piStack_5c = uStack_38._4_4_;
              uStack_14._0_1_ = 3;
              if (uStack_38._4_4_ != (int *)0x0) {
                LOCK();
                iVar2 = uStack_38._4_4_[1] + -1;
                uStack_38._4_4_[1] = iVar2;
                UNLOCK();
                if (iVar2 == 0) {
                  pcVar3 = *(code **)*uStack_38._4_4_;
                  uStack_38 = uVar5;
                  _guard_check_icall();
                  (*pcVar3)();
                  LOCK();
                  iVar2 = piStack_90[2] + -1;
                  piStack_90[2] = iVar2;
                  UNLOCK();
                  uVar5 = uStack_38;
                  if (iVar2 == 0) {
                    pcVar3 = *(code **)(*piStack_90 + 4);
                    _guard_check_icall();
                    (*pcVar3)();
                    uVar5 = uStack_38;
                  }
                }
              }
              uStack_38 = uVar5;
              if (((DAT_0145d0cc & 0x10000000) == 0) &&
                 (cVar8 = func_0x00468060(&uStack_40), cVar8 != '\0')) {
                uStack_14._0_1_ = 2;
                if (piVar15 != (int *)0x0) {
                  LOCK();
                  iVar2 = piVar15[1] + -1;
                  piVar15[1] = iVar2;
                  UNLOCK();
                  if (iVar2 == 0) {
                    pcVar3 = *(code **)*piVar15;
                    _guard_check_icall();
                    (*pcVar3)();
                    LOCK();
                    piVar1 = piVar15 + 2;
                    iVar2 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar2 == 1) {
                      pcVar3 = *(code **)(*piVar15 + 4);
                      _guard_check_icall();
                      (*pcVar3)();
                    }
                  }
                }
                goto LAB_005718c5;
              }
            }
            uStack_14._0_1_ = 2;
            if (piVar15 != (int *)0x0) {
              LOCK();
              iVar2 = piVar15[1] + -1;
              piVar15[1] = iVar2;
              UNLOCK();
              if (iVar2 == 0) {
                pcVar3 = *(code **)*piVar15;
                _guard_check_icall();
                (*pcVar3)();
                LOCK();
                iVar2 = piVar15[2] + -1;
                piVar15[2] = iVar2;
                UNLOCK();
                if (iVar2 == 0) {
                  pcVar3 = *(code **)(*piVar15 + 4);
                  _guard_check_icall();
                  (*pcVar3)();
                }
              }
            }
            piStack_94 = piStack_94 + 2;
          } while (piStack_94 != piStack_58);
          uVar7 = uStack_14._1_3_;
          if ((int)uStack_38 != 0) {
            uVar14 = *(undefined4 *)((int)uStack_38 + 0x9c);
            iVar2 = *(int *)((int)uStack_38 + 0xa0);
            uStack_30 = CONCAT44(DAT_0145db28._4_4_,(float)DAT_0145db28);
            fVar18 = (float)DAT_0145db28;
            func_0x008abfd0();
            iVar2 = (iVar2 - (int)(fVar18 * 0.048)) + 0xc;
            iVar16 = 0;
            if (0 < iVar2) {
              iVar16 = iVar2;
            }
            if (0x18 < iVar16) {
              iVar16 = 0x18;
            }
            *(undefined4 *)((int)uStack_40 + 0x9c) = uVar14;
            *(int *)((int)uStack_40 + 0xa0) = iVar16;
            uVar7 = uStack_14._1_3_;
          }
        }
        uStack_14._1_3_ = uVar7;
        puVar4 = (undefined4 *)piStack_54[1];
        if (puVar4 == (undefined4 *)piStack_54[2]) {
          func_0x00488a10(puVar4,&uStack_40);
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
          if (uStack_40._4_4_ != 0) {
            LOCK();
            *(int *)(uStack_40._4_4_ + 4) = *(int *)(uStack_40._4_4_ + 4) + 1;
            UNLOCK();
          }
          *puVar4 = (int)uStack_40;
          puVar4[1] = uStack_40._4_4_;
          piStack_54[1] = piStack_54[1] + 8;
        }
LAB_005718c5:
        uStack_14 = CONCAT31(uStack_14._1_3_,1);
        FUN_00468340();
        uStack_14 = 0xffffffff;
        FUN_00468340();
        piVar15 = piStack_50;
      }
    }
    else {
      iVar2 = iStack_8c + (short)piStack_50[2] * 0xc;
      puVar11 = (undefined4 *)func_0x0046b930(&uStack_30);
      uStack_14 = 0;
      puVar4 = *(undefined4 **)(iVar2 + 0x8c);
      if (puVar4 == *(undefined4 **)(iVar2 + 0x90)) {
        func_0x0057c5a0(puVar4,puVar11);
        uStack_14 = 0xffffffff;
        FUN_00468340();
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        *puVar4 = *puVar11;
        puVar4[1] = puVar11[1];
        *puVar11 = 0;
        puVar11[1] = 0;
        *(int *)(iVar2 + 0x8c) = *(int *)(iVar2 + 0x8c) + 8;
        uStack_14 = 0xffffffff;
        FUN_00468340();
      }
    }
    piVar1 = piStack_44;
    FUN_005b9e30(piVar15);
    pcVar3 = *(code **)(*(int *)*piVar1 + 0x60);
    _guard_check_icall();
    (*pcVar3)();
    pcVar3 = *(code **)(*(int *)*piStack_44 + 0x1c);
    _guard_check_icall();
    cVar8 = (*pcVar3)();
    if (cVar8 == '\0') {
      pcVar3 = *(code **)(*(int *)*piStack_44 + 0x34);
      _guard_check_icall();
      cVar8 = (*pcVar3)();
      piVar15 = piStack_44;
      piStack_58 = (int *)*piStack_44;
      if (cVar8 == '\0') {
        pcVar3 = *(code **)(*piStack_58 + 0x38);
        _guard_check_icall();
        cVar8 = (*pcVar3)();
        if (cVar8 != '\0') {
          uStack_30 = 0;
          func_0x0046b930(&uStack_30);
          uStack_14 = 0xf;
          uVar14 = FUN_00472a00(auStack_b0);
          uStack_14._0_1_ = 0x10;
          auStack_70[4] = 0;
          auStack_70[0] = 0;
          auStack_70[1] = 0;
          auStack_70[2] = 0;
          auStack_70[3] = 0;
          piStack_5c = (int *)0x0;
          func_0x0046bc40("onStaticText",0xc);
          uStack_14._0_1_ = 0x11;
          auStack_88[0] = 0;
          auStack_88[1] = 0;
          auStack_88[2] = 0;
          uStack_7c = 0;
          uStack_74 = 0;
          func_0x0046bc40("g_map",5);
          uStack_14._0_1_ = 0x12;
          func_0x00579c70(auStack_88,auStack_70,piVar15,uVar14);
          uStack_14._0_1_ = 0x11;
          if (0xf < uStack_74) {
            func_0x0046b1f0(auStack_88,auStack_88[0],uStack_74);
          }
          uStack_7c = uStack_7c & 0xffffffff;
          uStack_74 = 0xf;
          auStack_88[0] = auStack_88[0] & 0xffffff00;
          uStack_14._0_1_ = 0x10;
          if (0xf < piStack_5c) {
            func_0x0046b1f0(auStack_70,auStack_70[0],piStack_5c);
          }
          auStack_70[4] = 0;
          piStack_5c = (int *)&DAT_0000000f;
          auStack_70[0] = auStack_70[0] & 0xffffff00;
          uStack_14 = CONCAT31(uStack_14._1_3_,0xf);
          FUN_00469ba0();
          uStack_14 = 0xffffffff;
          FUN_00468340();
        }
      }
      else {
        uStack_30 = 0;
        func_0x0046b930(&uStack_30);
        uStack_14 = 0xb;
        uVar14 = FUN_004b3940(auStack_b0);
        uStack_14._0_1_ = 0xc;
        auStack_70[4] = 0;
        auStack_70[0] = 0;
        auStack_70[1] = 0;
        auStack_70[2] = 0;
        auStack_70[3] = 0;
        piStack_5c = (int *)0x0;
        func_0x0046bc40("onAnimatedText",0xe);
        uStack_14._0_1_ = 0xd;
        auStack_88[0] = 0;
        auStack_88[1] = 0;
        auStack_88[2] = 0;
        uStack_7c = 0;
        uStack_74 = 0;
        func_0x0046bc40("g_map",5);
        uStack_14._0_1_ = 0xe;
        func_0x00579c70(auStack_88,auStack_70,piVar15,uVar14);
        uStack_14._0_1_ = 0xd;
        if (0xf < uStack_74) {
          func_0x0046b1f0(auStack_88,auStack_88[0],uStack_74);
        }
        uStack_7c = uStack_7c & 0xffffffff;
        uStack_74 = 0xf;
        auStack_88[0] = auStack_88[0] & 0xffffff00;
        uStack_14._0_1_ = 0xc;
        if (0xf < piStack_5c) {
          func_0x0046b1f0(auStack_70,auStack_70[0],piStack_5c);
        }
        auStack_70[4] = 0;
        piStack_5c = (int *)&DAT_0000000f;
        auStack_70[0] = auStack_70[0] & 0xffffff00;
        uStack_14 = CONCAT31(uStack_14._1_3_,0xb);
        FUN_00469ba0();
        uStack_14 = 0xffffffff;
        FUN_00468340();
      }
    }
    else {
      uStack_74 = 0;
      auStack_88[0] = 0;
      auStack_88[1] = 0;
      auStack_88[2] = 0;
      uStack_7c = 0;
      func_0x0046bc40("onMissle",8);
      uStack_14 = 9;
      auStack_b0[4] = 0;
      auStack_b0[0] = 0;
      auStack_b0[1] = 0;
      auStack_b0[2] = 0;
      auStack_b0[3] = 0;
      auStack_b0[5] = 0;
      func_0x0046bc40("g_map",5);
      uStack_14 = CONCAT31(uStack_14._1_3_,10);
      uVar10 = func_0x0057b960(auStack_b0,auStack_88,piStack_44);
      if (0 < (int)uVar10) {
        func_0x00d66d90(DAT_0145e9f0,~uVar10);
      }
      uStack_14 = CONCAT31(uStack_14._1_3_,9);
      FUN_00469ba0();
      uStack_14 = 0xffffffff;
      FUN_00469ba0();
    }
  }
  else {
LAB_00571eed:
    piVar15 = (int *)FUN_005729b0(piStack_50);
    if (*piVar15 != 0) {
      FUN_005c6120(param_2,param_4);
    }
  }
  pcVar3 = *(code **)(*(int *)*piStack_44 + 0x14);
  _guard_check_icall();
  uVar9 = (*pcVar3)();
  func_0x00570d80(piStack_50,uVar9);
  puVar6 = puStack_20;
LAB_00571f2d:
  puStack_20 = puVar6;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00571f50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb2566;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar5 = (int *)FUN_00572b50(param_2);
  if (piVar5[1] != 0) {
    LOCK();
    piVar1 = (int *)(piVar5[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)piVar5[1];
  uStack_8 = 1;
  if (*piVar5 == 0) {
    uStack_8 = 0;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piVar1;
        _guard_check_icall(uVar4);
        (*pcVar2)();
        LOCK();
        piVar5 = piVar1 + 2;
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piVar1 + 4);
          _guard_check_icall(uVar4);
          (*pcVar2)();
        }
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    uStack_8 = 0;
  }
  else {
    FUN_005c6a00(param_1,param_3);
    uStack_8 = uStack_8 & 0xffffff00;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piVar1;
        _guard_check_icall(uVar4);
        (*pcVar2)();
        LOCK();
        piVar5 = piVar1 + 2;
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piVar1 + 4);
          _guard_check_icall(uVar4);
          (*pcVar2)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_005720b0(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int **ppiStack_5c;
  int *piStack_58;
  undefined8 *puStack_54;
  uint uStack_50;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  undefined1 uStack_21;
  undefined8 uStack_20;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec1535;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_50 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_30 = param_2;
  piStack_28 = (int *)*param_2;
  piStack_2c = param_1;
  uStack_18 = uStack_50;
  if (piStack_28 == (int *)0x0) {
    piStack_28 = (int *)0x0;
  }
  else {
    uStack_21 = 0;
    pcVar1 = *(code **)(*piStack_28 + 0x1c);
    puStack_54 = (undefined8 *)0x572107;
    _guard_check_icall();
    puStack_54 = (undefined8 *)0x57210c;
    cVar4 = (*pcVar1)();
    piStack_28 = (int *)*param_2;
    if (cVar4 == '\0') {
      pcVar1 = *(code **)(*piStack_28 + 0x34);
      puStack_54 = (undefined8 *)0x5721fb;
      _guard_check_icall();
      puStack_54 = (undefined8 *)0x572200;
      cVar4 = (*pcVar1)();
      piStack_28 = (int *)*param_2;
      if (cVar4 == '\0') {
        pcVar1 = *(code **)(*piStack_28 + 0x38);
        puStack_54 = (undefined8 *)0x5722db;
        _guard_check_icall();
        puStack_54 = (undefined8 *)0x5722e0;
        cVar4 = (*pcVar1)();
        piStack_2c = (int *)*param_2;
        if (cVar4 == '\0') {
          pcVar1 = *(code **)(*piStack_2c + 0x10);
          puStack_54 = (undefined8 *)0x572362;
          _guard_check_icall();
          puStack_54 = (undefined8 *)0x572367;
          piVar5 = (int *)(*pcVar1)();
          if (*piVar5 != 0) {
            piStack_2c = (int *)&ppiStack_5c;
            func_0x00468490(param_2);
            uStack_8 = 0xffffffff;
            uStack_21 = FUN_005c66e0();
          }
        }
        else {
          puStack_54 = &uStack_20;
          uStack_20 = 0;
          piStack_58 = (int *)0x5722fa;
          func_0x0046b930();
          uStack_8 = 2;
          piStack_58 = (int *)param_1[0x55];
          if (piStack_58 == (int *)param_1[0x56]) {
LAB_00572344:
            uStack_8 = 0xffffffff;
            piStack_58 = (int *)0x572353;
            FUN_00468340();
          }
          else {
            do {
              if (*piStack_58 == (int)uStack_20) {
                ppiStack_5c = &piStack_2c;
                func_0x005793c0();
                uStack_21 = 1;
                goto LAB_00572344;
              }
              piStack_58 = piStack_58 + 2;
            } while (piStack_58 != (int *)param_1[0x56]);
            uStack_8 = 0xffffffff;
            piStack_58 = (int *)0x57232e;
            FUN_00468340();
          }
        }
      }
      else {
        puStack_54 = &uStack_20;
        uStack_20 = 0;
        piStack_58 = (int *)0x57221e;
        func_0x0046b930();
        uStack_8 = 1;
        if ((int *)param_1[0x52] == (int *)param_1[0x53]) {
LAB_005722ba:
          uStack_8 = 0xffffffff;
          piStack_58 = (int *)0x5722c9;
          FUN_00468340();
        }
        else {
          piStack_58 = (int *)param_1[0x52];
          do {
            piVar5 = piStack_58 + 2;
            if (*piStack_58 == (int)uStack_20) {
              ppiStack_5c = (int **)0x572267;
              func_0x0057a5b0();
              piVar5 = *(int **)(param_1[0x53] + -4);
              if (piVar5 != (int *)0x0) {
                LOCK();
                iVar3 = piVar5[1] + -1;
                piVar5[1] = iVar3;
                UNLOCK();
                if (iVar3 == 0) {
                  pcVar1 = *(code **)*piVar5;
                  piStack_58 = (int *)0x57228f;
                  _guard_check_icall();
                  piStack_58 = (int *)0x572293;
                  (*pcVar1)();
                  LOCK();
                  piVar2 = piVar5 + 2;
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    pcVar1 = *(code **)(*piVar5 + 4);
                    piStack_58 = (int *)0x5722a8;
                    _guard_check_icall();
                    piStack_58 = (int *)0x5722ac;
                    (*pcVar1)();
                  }
                }
              }
              uStack_21 = 1;
              piStack_2c[0x53] = piStack_2c[0x53] + -8;
              goto LAB_005722ba;
            }
            piStack_58 = piVar5;
          } while (piVar5 != (int *)param_1[0x53]);
          uStack_8 = 0xffffffff;
          piStack_58 = (int *)0x57225c;
          FUN_00468340();
        }
      }
    }
    else {
      puStack_54 = &uStack_20;
      uStack_20 = 0;
      piStack_58 = (int *)0x57212a;
      func_0x0046b930();
      uStack_8 = 0;
      uStack_34 = *(undefined4 *)((int)uStack_20 + 0x18);
      uStack_3c = *(undefined8 *)((int)uStack_20 + 0x10);
      piVar5 = param_1 + (short)uStack_34 * 3 + 0x23;
      piStack_58 = (int *)param_1[(short)uStack_34 * 3 + 0x22];
      piStack_28 = piVar5;
      if ((int *)param_1[(short)uStack_34 * 3 + 0x22] == (int *)*piVar5) {
LAB_005721da:
        uStack_8 = 0xffffffff;
        piStack_58 = (int *)0x5721e9;
        FUN_00468340();
      }
      else {
        do {
          piVar2 = piStack_58 + 2;
          if (*piStack_58 == (int)uStack_20) {
            ppiStack_5c = (int **)0x57218c;
            func_0x0057a5b0();
            piVar2 = *(int **)(*piVar5 + -4);
            if (piVar2 != (int *)0x0) {
              LOCK();
              iVar3 = piVar2[1] + -1;
              piVar2[1] = iVar3;
              UNLOCK();
              piVar5 = piStack_28;
              if (iVar3 == 0) {
                pcVar1 = *(code **)*piVar2;
                piStack_58 = (int *)0x5721b0;
                _guard_check_icall();
                piStack_58 = (int *)0x5721b4;
                (*pcVar1)();
                LOCK();
                piVar5 = piVar2 + 2;
                iVar3 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                piVar5 = piStack_28;
                if (iVar3 == 1) {
                  pcVar1 = *(code **)(*piVar2 + 4);
                  piStack_58 = (int *)0x5721c9;
                  _guard_check_icall();
                  piStack_58 = (int *)0x5721cd;
                  (*pcVar1)();
                  piVar5 = piStack_28;
                }
              }
            }
            *piVar5 = *piVar5 + -8;
            uStack_21 = 1;
            goto LAB_005721da;
          }
          piStack_58 = piVar2;
        } while (piVar2 != (int *)*piVar5);
        uStack_8 = 0xffffffff;
        piStack_58 = (int *)0x572181;
        FUN_00468340();
      }
    }
    pcVar1 = *(code **)(*(int *)*piStack_30 + 0x14);
    piStack_58 = (int *)0x5723a5;
    _guard_check_icall();
    piStack_58 = (int *)0x5723a9;
    piStack_58 = (int *)(*pcVar1)();
    ppiStack_5c = (int **)&uStack_3c;
    uStack_3c = *(undefined8 *)(*piStack_30 + 0x10);
    uStack_34 = *(undefined4 *)(*piStack_30 + 0x18);
    func_0x00570d80();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005723f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [4];
  int *piStack_28;
  int *piStack_24;
  undefined1 uStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec1575;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_14 = uVar4;
  piVar5 = (int *)FUN_00572b50(param_1);
  if (piVar5[1] != 0) {
    LOCK();
    piVar1 = (int *)(piVar5[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)piVar5[1];
  uStack_1c = *(undefined8 *)piVar5;
  iStack_8 = 0;
  if (*piVar5 == 0) {
    iStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piVar1;
        _guard_check_icall(uVar4);
        (*pcVar2)();
        LOCK();
        piVar5 = piVar1 + 2;
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar2 = *(code **)(*piVar1 + 4);
          _guard_check_icall(uVar4);
          (*pcVar2)();
        }
      }
    }
  }
  else {
    uVar6 = FUN_005c6a00(auStack_2c,param_2);
    iStack_8._0_1_ = 1;
    uStack_1d = FUN_005720b0(uVar6);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    piStack_24 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_28[1] + -1;
      piStack_28[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piStack_28;
        _guard_check_icall(uVar4);
        (*pcVar2)();
        LOCK();
        iVar3 = piStack_24[2] + -1;
        piStack_24[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar2 = *(code **)(*piStack_24 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    iStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)*piVar1;
        _guard_check_icall(uVar4);
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
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00572570(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec15bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar4;
  if ((int *)*param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)*param_1 + 0x14);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      pcVar1 = *(code **)(*(int *)*param_1 + 0x20);
      _guard_check_icall(uVar4);
      cVar3 = (*pcVar1)();
      if (cVar3 != '\0') {
        pcVar1 = *(code **)(*(int *)*param_1 + 0x10);
        _guard_check_icall(uVar4);
        (*pcVar1)();
        FUN_005c6ba0(auStack_1c);
        uStack_8 = 1;
        piVar5 = (int *)func_0x0046b930(auStack_24);
        iVar2 = *piVar5;
        *(undefined4 *)(iVar2 + 0x47) = *param_2;
        *(undefined4 *)(iVar2 + 0x4b) = param_2[1];
        *(undefined4 *)(iVar2 + 0x4f) = param_2[2];
        *(undefined4 *)(iVar2 + 0x53) = param_2[3];
        uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),1);
        FUN_00468340();
        uStack_8 = 0xffffffff;
        FUN_00468340();
      }
    }
    else {
      piVar5 = (int *)func_0x0046b930(auStack_1c);
      iVar2 = *piVar5;
      *(undefined4 *)(iVar2 + 0x47) = *param_2;
      *(undefined4 *)(iVar2 + 0x4b) = param_2[1];
      *(undefined4 *)(iVar2 + 0x4f) = param_2[2];
      *(undefined4 *)(iVar2 + 0x53) = param_2[3];
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_005726a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec160d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = uVar4;
  if ((int *)*param_1 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)*param_1 + 0x14);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    if (cVar3 == '\0') {
      pcVar1 = *(code **)(*(int *)*param_1 + 0x20);
      _guard_check_icall(uVar4);
      cVar3 = (*pcVar1)();
      if (cVar3 != '\0') {
        pcVar1 = *(code **)(*(int *)*param_1 + 0x10);
        _guard_check_icall(uVar4);
        (*pcVar1)();
        FUN_005c6ba0(auStack_20);
        uStack_8 = 1;
        piVar5 = (int *)func_0x0046b930(auStack_28);
        iVar2 = *piVar5;
        *(undefined4 *)(iVar2 + 0x47) = DAT_0145f21c;
        *(undefined4 *)(iVar2 + 0x4b) = DAT_0145f220;
        *(undefined4 *)(iVar2 + 0x4f) = DAT_0145f224;
        *(undefined4 *)(iVar2 + 0x53) = DAT_0145f228;
        uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),1);
        FUN_00468340();
        uStack_8 = 0xffffffff;
        FUN_00468340();
      }
    }
    else {
      piVar5 = (int *)func_0x0046b930(auStack_20);
      iVar2 = *piVar5;
      *(undefined4 *)(iVar2 + 0x47) = DAT_0145f21c;
      *(undefined4 *)(iVar2 + 0x4b) = DAT_0145f220;
      *(undefined4 *)(iVar2 + 0x4f) = DAT_0145f224;
      *(undefined4 *)(iVar2 + 0x53) = DAT_0145f228;
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined * __thiscall FUN_00572810(int param_1,uint *param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int iStack_18;
  undefined *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb38ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar6 = *param_2;
  if ((((-1 < (int)uVar6) && (-1 < (int)param_2[1])) && (-1 < (short)param_2[2])) &&
     ((((int)uVar6 < 0xffff && ((int)param_2[1] < 0xffff)) && ((short)param_2[2] < 0x10)))) {
    if ((int)uVar6 < *(int *)(param_1 + 0x1b8)) {
      *(uint *)(param_1 + 0x1b8) = uVar6;
    }
    if ((int)param_2[1] < *(int *)(param_1 + 0x1bc)) {
      *(uint *)(param_1 + 0x1bc) = param_2[1];
    }
    if (*(int *)(param_1 + 0x1c0) < (int)*param_2) {
      *(uint *)(param_1 + 0x1c0) = *param_2;
    }
    if (*(int *)(param_1 + 0x1c4) < (int)param_2[1]) {
      *(uint *)(param_1 + 0x1c4) = param_2[1];
    }
    iStack_18 = ((int)(((int)param_2[1] >> 0x1f & 0x1fU) + param_2[1]) >> 5) * 0x800 +
                ((int)(*param_2 + ((int)*param_2 >> 0x1f & 0x1fU)) >> 5);
    iVar4 = func_0x00579440(&iStack_18,uVar3);
    uVar6 = param_2[1] & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    uVar3 = *param_2 & 0x8000001f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
    }
    puStack_14 = (undefined *)(iVar4 + (uVar6 * 0x20 + uVar3) * 8);
    uVar5 = func_0x005799e0();
    uStack_8 = 0;
    func_0x0046ffa0(uVar5);
    uStack_8 = 0xffffffff;
    if (piStack_1c != (int *)0x0) {
      LOCK();
      iVar4 = piStack_1c[1] + -1;
      piStack_1c[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar2 = *(code **)*piStack_1c;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        piVar1 = piStack_1c + 2;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar2 = *(code **)(*piStack_1c + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return puStack_14;
  }
  *unaff_FS_OFFSET = iStack_10;
  return &DAT_0145ea08;
}



undefined * __thiscall FUN_005729b0(int param_1,uint *param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int iStack_18;
  undefined *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb38ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar6 = *param_2;
  if ((((-1 < (int)uVar6) && (-1 < (int)param_2[1])) && (-1 < (short)param_2[2])) &&
     ((((int)uVar6 < 0xffff && ((int)param_2[1] < 0xffff)) && ((short)param_2[2] < 0x10)))) {
    if ((int)uVar6 < *(int *)(param_1 + 0x1b8)) {
      *(uint *)(param_1 + 0x1b8) = uVar6;
    }
    if ((int)param_2[1] < *(int *)(param_1 + 0x1bc)) {
      *(uint *)(param_1 + 0x1bc) = param_2[1];
    }
    if (*(int *)(param_1 + 0x1c0) < (int)*param_2) {
      *(uint *)(param_1 + 0x1c0) = *param_2;
    }
    if (*(int *)(param_1 + 0x1c4) < (int)param_2[1]) {
      *(uint *)(param_1 + 0x1c4) = param_2[1];
    }
    iStack_18 = ((int)(((int)param_2[1] >> 0x1f & 0x1fU) + param_2[1]) >> 5) * 0x800 +
                ((int)(*param_2 + ((int)*param_2 >> 0x1f & 0x1fU)) >> 5);
    iVar4 = func_0x00579440(&iStack_18,uVar3);
    uVar6 = param_2[1] & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    uVar3 = *param_2 & 0x8000001f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
    }
    iVar7 = uVar6 * 0x20 + uVar3;
    puVar8 = (undefined *)(iVar4 + iVar7 * 8);
    if (*(int *)(iVar4 + iVar7 * 8) == 0) {
      puStack_14 = puVar8;
      uVar5 = func_0x005799e0();
      uStack_8 = 0;
      func_0x0046ffa0(uVar5);
      uStack_8 = 0xffffffff;
      if (piStack_1c != (int *)0x0) {
        LOCK();
        iVar4 = piStack_1c[1] + -1;
        piStack_1c[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar2 = *(code **)*piStack_1c;
          _guard_check_icall();
          (*pcVar2)();
          LOCK();
          piVar1 = piStack_1c + 2;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar8 = puStack_14;
          if (iVar4 == 1) {
            pcVar2 = *(code **)(*piStack_1c + 4);
            _guard_check_icall();
            (*pcVar2)();
            puVar8 = puStack_14;
          }
        }
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return puVar8;
  }
  *unaff_FS_OFFSET = iStack_10;
  return &DAT_0145ea08;
}



undefined * __thiscall FUN_00572b50(int param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_18 [8];
  int iStack_10;
  uint uStack_c;
  int *piStack_8;
  
  uVar4 = *param_2;
  if (((((-1 < (int)uVar4) && (uVar3 = param_2[1], -1 < (int)uVar3)) &&
       (sVar1 = (short)param_2[2], -1 < sVar1)) && (((int)uVar4 < 0xffff && ((int)uVar3 < 0xffff))))
     && (sVar1 < 0x10)) {
    piStack_8 = (int *)(param_1 + sVar1 * 8);
    uVar2 = ((int)(((int)uVar3 >> 0x1f & 0x1fU) + uVar3) >> 5) * 0x800 +
            ((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5);
    uStack_c = uVar2;
    func_0x004a0ce0(auStack_18,&uStack_c);
    if (((*(char *)(iStack_10 + 0xd) == '\0') && (*(uint *)(iStack_10 + 0x10) <= uVar2)) &&
       (iStack_10 != *piStack_8)) {
      uVar3 = uVar3 & 0x8000001f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
      }
      uVar4 = uVar4 & 0x8000001f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
      }
      return (undefined *)(iStack_10 + (uVar3 * 0x20 + uVar4) * 8 + 0x14);
    }
  }
  return &DAT_0145ea08;
}



// WARNING: Removing unreachable block (ram,0x00572e5b)
// WARNING: Removing unreachable block (ram,0x00572e62)
// WARNING: Removing unreachable block (ram,0x00572e6c)
// WARNING: Removing unreachable block (ram,0x00572e86)
// WARNING: Removing unreachable block (ram,0x00572e97)
// WARNING: Removing unreachable block (ram,0x00572d4b)
// WARNING: Removing unreachable block (ram,0x00572d52)
// WARNING: Removing unreachable block (ram,0x00572d5c)
// WARNING: Removing unreachable block (ram,0x00572d76)
// WARNING: Removing unreachable block (ram,0x00572d87)
// WARNING: Removing unreachable block (ram,0x00572ea5)
// WARNING: Removing unreachable block (ram,0x00572d95)

void __thiscall FUN_00572c30(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int *piStack_28;
  byte bStack_1d;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec167e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2[0] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar6 = func_0x008ab47d(0x10,uVar5);
  *(int *)iVar6 = iVar6;
  *(int *)(iVar6 + 4) = iVar6;
  *param_2 = iVar6;
  uStack_8 = 0;
  if (param_3 < 0x10) {
    if (param_3 < 0) {
      bStack_1d = 0;
      do {
        iVar6 = **(int **)(param_1 + (uint)bStack_1d * 8);
        cVar1 = *(char *)(iVar6 + 0xd);
        while (cVar1 == '\0') {
          piVar8 = piStack_28;
          for (piVar7 = (int *)(iVar6 + 0x14); piStack_28 = piVar8,
              piVar7 != (int *)(iVar6 + 0x2014); piVar7 = piVar7 + 2) {
            if (*piVar7 != 0) {
              iVar2 = *param_2;
              if (param_2[1] == 0xfffffff) goto LAB_00572f01;
              func_0x0057c490(param_2,piVar7);
              param_2[1] = param_2[1] + 1;
              puVar3 = *(undefined4 **)(iVar2 + 4);
              *piVar8 = iVar2;
              piVar8[1] = (int)puVar3;
              piStack_28 = (int *)0x0;
              *(int **)(iVar2 + 4) = piVar8;
              *puVar3 = piVar8;
              uStack_8 = 0;
            }
            piVar8 = piStack_28;
          }
          func_0x00499be0();
          cVar1 = *(char *)(iVar6 + 0xd);
        }
        bStack_1d = bStack_1d + 1;
      } while (bStack_1d < 0x10);
    }
    else {
      iVar6 = **(int **)(param_1 + param_3 * 8);
      cVar1 = *(char *)(iVar6 + 0xd);
      piVar7 = piStack_28;
      while (cVar1 == '\0') {
        for (piVar8 = (int *)(iVar6 + 0x14); piVar8 != (int *)(iVar6 + 0x2014); piVar8 = piVar8 + 2)
        {
          piStack_28 = piVar7;
          if (*piVar8 != 0) {
            iVar2 = *param_2;
            if (param_2[1] == 0xfffffff) {
LAB_00572f01:
              func_0x00e701fa("list too long");
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            func_0x0057c490(param_2,piVar8);
            param_2[1] = param_2[1] + 1;
            puVar3 = *(undefined4 **)(iVar2 + 4);
            *piVar7 = iVar2;
            piVar7[1] = (int)puVar3;
            piStack_28 = (int *)0x0;
            *(int **)(iVar2 + 4) = piVar7;
            *puVar3 = piVar7;
            uStack_8 = 0;
          }
          piVar7 = piStack_28;
        }
        func_0x00499be0();
        cVar1 = *(char *)(iVar6 + 0xd);
      }
    }
  }
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00572f10(int param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uStack_1c;
  int iStack_14;
  uint uStack_10;
  int *apiStack_c [2];
  
  if (((((-1 < (int)*param_2) && (uVar7 = param_2[1], -1 < (int)uVar7)) &&
       (sVar1 = (short)param_2[2], -1 < sVar1)) &&
      (((int)*param_2 < 0xffff && ((int)uVar7 < 0xffff)))) && (sVar1 < 0x10)) {
    apiStack_c[0] = (int *)(param_1 + sVar1 * 8);
    uStack_10 = ((int)(*param_2 + ((int)*param_2 >> 0x1f & 0x1fU)) >> 5) +
                ((int)(((int)uVar7 >> 0x1f & 0x1fU) + uVar7) >> 5) * 0x800;
    func_0x004a0ce0(&uStack_1c,&uStack_10);
    if (((*(char *)(iStack_14 + 0xd) == '\0') && (*(uint *)(iStack_14 + 0x10) <= uStack_10)) &&
       (iStack_14 != *apiStack_c[0])) {
      apiStack_c[0] = (int *)(iStack_14 + 0x14);
      uVar7 = uVar7 & 0x8000001f;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
      }
      uVar3 = *param_2 & 0x8000001f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
      }
      piVar5 = apiStack_c[0] + (uVar7 * 0x20 + uVar3) * 2;
      if (*piVar5 != 0) {
        FUN_005c5f90();
        iVar2 = *piVar5;
        if ((((*(int *)(iVar2 + 0x10) == *(int *)(iVar2 + 0x14)) &&
             (*(int *)(iVar2 + 0x1c) == *(int *)(iVar2 + 0x20))) &&
            (*(int *)(iVar2 + 0x28) == *(int *)(iVar2 + 0x2c))) &&
           ((*(int *)(iVar2 + 0x44) == 0 && (*(char *)(iVar2 + 0x41) == '\0')))) {
          func_0x00570470(param_2);
        }
        func_0x00570d80(param_2,0);
      }
    }
    piVar5 = *(int **)(param_1 + 0x154);
    if (piVar5 != *(int **)(param_1 + 0x158)) {
      do {
        iVar2 = *piVar5;
        iStack_14 = *(int *)(iVar2 + 0x18);
        uStack_1c = *(undefined8 *)(iVar2 + 0x10);
        if (((*param_2 == (uint)uStack_1c) &&
            (uStack_1c._4_4_ = (uint)((ulonglong)uStack_1c >> 0x20), param_2[1] == uStack_1c._4_4_))
           && (((short)param_2[2] == (short)iStack_14 && (*(int *)(iVar2 + 0x60) == 0)))) {
          puVar4 = (undefined4 *)func_0x005793c0(apiStack_c,piVar5);
          piVar5 = (int *)*puVar4;
        }
        else {
          piVar5 = piVar5 + 2;
        }
      } while (piVar5 != *(int **)(param_1 + 0x158));
    }
    if (((DAT_0145d0c8 & 0x20000) == 0) || (*(short *)(param_1 + 0x1b4) == (short)param_2[2])) {
      uVar6 = FUN_00572b50(param_2);
      func_0x00587790(param_2,uVar6);
    }
  }
  return;
}



void __thiscall FUN_005730c0(int param_1,uint param_2,char param_3)

{
  if (param_3 != '\0') {
    *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) | param_2;
    return;
  }
  *(uint *)(param_1 + 400) = ~param_2 & *(uint *)(param_1 + 400);
  return;
}



void __thiscall FUN_005730f0(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 400) = 0;
    return;
  }
  if (*(int *)(param_1 + 400) == 0) {
    *(undefined4 *)(param_1 + 400) = 0x41;
  }
  return;
}



void __thiscall FUN_00573120(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uStack_8;
  
  if ((*(uint *)(param_1 + 400) & param_2) == param_2) {
    uStack_8 = param_2;
    puVar1 = (undefined4 *)func_0x005791f0(&uStack_8);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
  }
  return;
}



undefined4 * __thiscall FUN_00573170(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_14 [8];
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = param_3;
  func_0x004a0ce0(auStack_14,&uStack_8);
  uVar3 = DAT_0145f228;
  uVar2 = DAT_0145f224;
  uVar1 = DAT_0145f220;
  if (((*(char *)(iStack_c + 0xd) == '\0') && (*(uint *)(iStack_c + 0x10) <= param_3)) &&
     (iStack_c != *(int *)(param_1 + 0x194))) {
    uVar1 = *(undefined4 *)(iStack_c + 0x18);
    uVar2 = *(undefined4 *)(iStack_c + 0x1c);
    uVar3 = *(undefined4 *)(iStack_c + 0x20);
    *param_2 = *(undefined4 *)(iStack_c + 0x14);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    return param_2;
  }
  *param_2 = DAT_0145f21c;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return param_2;
}



void FUN_005731d0(void)

{
  return;
}



byte __fastcall FUN_005731e0(int param_1)

{
  return *(byte *)(param_1 + 0x18c) & 1;
}



void __thiscall FUN_005731f0(int param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x18c);
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x18c) = bVar1 & 0xfe;
  }
  else if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 0x18c) = bVar1 | 1;
    return;
  }
  return;
}



void __thiscall FUN_00573220(undefined4 *param_1,int *param_2,ushort param_3,uint param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [8];
  int *piStack_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ec1707;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  piStack_60 = param_2;
  uStack_2c = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  piStack_40 = param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = param_1;
  iVar4 = func_0x008ab47d(0x24,uStack_18);
  *(int *)iVar4 = iVar4;
  *(int *)(iVar4 + 4) = iVar4;
  *(int *)(iVar4 + 8) = iVar4;
  *(undefined2 *)(iVar4 + 0xc) = 0x101;
  *param_2 = iVar4;
  uStack_8 = 0;
  uStack_2c = 1;
  uStack_34 = 0;
  iStack_3c = 0x10;
  do {
    iStack_28 = *(int *)*param_1;
    cVar1 = *(char *)(iStack_28 + 0xd);
    while (cVar1 == '\0') {
      piVar6 = (int *)(iStack_28 + 0x14);
      piVar8 = (int *)(iStack_28 + 0x2014);
      piStack_48 = piVar8;
      piStack_30 = piVar6;
      if (piVar6 != piVar8) {
        do {
          iVar4 = *piVar6;
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x2c) != *(int *)(iVar4 + 0x28))) {
            piStack_30 = piVar6;
            FUN_005c6d50(&puStack_24);
            uStack_8 = 2;
            puStack_44 = puStack_20;
            puVar7 = puStack_24;
            if (puStack_24 != puStack_20) {
              do {
                pcVar2 = *(code **)(*(int *)*puVar7 + 0xc);
                _guard_check_icall();
                uVar5 = (*pcVar2)();
                uVar3 = uStack_2c;
                if (uVar5 == param_3) {
                  uStack_8._1_3_ = (undefined3)(uStack_8 >> 8);
                  uStack_5c = *(undefined8 *)(*piStack_30 + 0x34);
                  uStack_54 = *(undefined4 *)(*piStack_30 + 0x3c);
                  if (puVar7[1] != 0) {
                    LOCK();
                    piVar6 = (int *)(puVar7[1] + 4);
                    *piVar6 = *piVar6 + 1;
                    UNLOCK();
                  }
                  uStack_50 = *puVar7;
                  piStack_4c = (int *)puVar7[1];
                  uStack_8._0_1_ = 3;
                  uStack_2c = uStack_2c | 2;
                  func_0x0057bf00(auStack_68,&uStack_5c);
                  piVar6 = piStack_4c;
                  uStack_2c = uVar3 & 0xfffffffd;
                  uStack_8 = CONCAT31(uStack_8._1_3_,2);
                  if (piStack_4c != (int *)0x0) {
                    LOCK();
                    iVar4 = piStack_4c[1] + -1;
                    piStack_4c[1] = iVar4;
                    UNLOCK();
                    if (iVar4 == 0) {
                      pcVar2 = *(code **)*piStack_4c;
                      _guard_check_icall();
                      (*pcVar2)();
                      LOCK();
                      piVar8 = piVar6 + 2;
                      iVar4 = *piVar8 + -1;
                      *piVar8 = iVar4;
                      UNLOCK();
                      if (iVar4 == 0) {
                        pcVar2 = *(code **)(*piVar6 + 4);
                        _guard_check_icall();
                        (*pcVar2)();
                      }
                    }
                  }
                  uStack_34 = uStack_34 + 1;
                  piVar6 = piStack_30;
                  piVar8 = piStack_48;
                  if (param_4 <= uStack_34) break;
                }
                puVar7 = puVar7 + 2;
                piVar6 = piStack_30;
                piVar8 = piStack_48;
              } while (puVar7 != puStack_44);
            }
            uStack_8 = uStack_8 & 0xffffff00;
            if (puStack_24 != (undefined4 *)0x0) {
              func_0x00485920(puStack_24);
              func_0x0046e710(puStack_24,iStack_1c - (int)puStack_24 >> 3);
              puStack_24 = (undefined4 *)0x0;
              puStack_20 = (undefined4 *)0x0;
              iStack_1c = 0;
            }
          }
          piVar6 = piVar6 + 2;
          piStack_30 = piVar6;
        } while (piVar6 != piVar8);
      }
      func_0x00499be0();
      param_1 = puStack_38;
      cVar1 = *(char *)(iStack_28 + 0xd);
    }
    param_1 = param_1 + 2;
    iStack_3c = iStack_3c + -1;
    puStack_38 = param_1;
    if (iStack_3c == 0) {
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  } while( true );
}



undefined4 * __thiscall FUN_005735c0(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb18be;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_18 = param_2;
  uStack_14 = 0;
  func_0x004a0ce0(auStack_24,&param_3,uVar2);
  if (((*(char *)(iStack_1c + 0xd) == '\0') && (*(uint *)(iStack_1c + 0x10) <= param_3)) &&
     (iStack_1c != *(int *)(param_1 + 0x80))) {
    *param_2 = 0;
    param_2[1] = 0;
    if (*(int *)(iStack_1c + 0x18) != 0) {
      LOCK();
      piVar1 = (int *)(*(int *)(iStack_1c + 0x18) + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *param_2 = *(undefined4 *)(iStack_1c + 0x14);
    param_2[1] = *(undefined4 *)(iStack_1c + 0x18);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00573680(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_10 [8];
  int iStack_8;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    func_0x004a0ce0(auStack_10,&param_2);
    if (((*(char *)(iStack_8 + 0xd) == '\0') && (*(uint *)(iStack_8 + 0x10) <= uVar1)) &&
       (iStack_8 != *(int *)(param_1 + 0x80))) {
      func_0x0057b590(iStack_8);
      func_0x0057c770();
    }
  }
  return;
}



void __thiscall FUN_00573a20(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined **ppuStack_70;
  int iStack_6c;
  undefined ***pppuStack_4c;
  uint auStack_44 [6];
  undefined1 auStack_2c [4];
  int *piStack_28;
  int *piStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec17f5;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (((*param_2 != *(int *)(param_1 + 0x1ac)) || (param_2[1] != *(int *)(param_1 + 0x1b0))) ||
     ((short)param_2[2] != *(short *)(param_1 + 0x1b4))) {
    *(int *)(param_1 + 0x1ac) = *param_2;
    *(int *)(param_1 + 0x1b0) = param_2[1];
    *(short *)(param_1 + 0x1b4) = (short)param_2[2];
    func_0x005736d0(uVar4);
    pppuStack_4c = &ppuStack_70;
    ppuStack_70 = std::_Func_impl_no_alloc<>::vftable;
    uStack_14 = 1;
    auStack_44[4] = 0;
    auStack_44[0] = 0;
    auStack_44[1] = 0;
    auStack_44[2] = 0;
    auStack_44[3] = 0;
    auStack_44[5] = 0;
    iStack_6c = param_1;
    func_0x0046bc40("Map::setCentralPosition",0x17);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    FUN_005e5070(auStack_2c,auStack_44,&ppuStack_70,0);
    piStack_24 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      LOCK();
      iVar3 = piStack_28[1] + -1;
      piStack_28[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar1 = *(code **)*piStack_28;
        _guard_check_icall();
        (*pcVar1)();
        LOCK();
        iVar3 = piStack_24[2] + -1;
        piStack_24[2] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar1 = *(code **)(*piStack_24 + 4);
          _guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    if (0xf < auStack_44[5]) {
      func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
    }
    auStack_44[4] = 0;
    auStack_44[5] = 0xf;
    auStack_44[0] = auStack_44[0] & 0xffffff00;
    uStack_14 = 0xffffffff;
    if (pppuStack_4c != (undefined ***)0x0) {
      pcVar1 = (code *)(*pppuStack_4c)[4];
      _guard_check_icall(pppuStack_4c != &ppuStack_70);
      (*pcVar1)();
    }
    piVar2 = *(int **)(param_1 + 0x164);
    for (piVar5 = *(int **)(param_1 + 0x160); piVar5 != piVar2; piVar5 = piVar5 + 2) {
      *(undefined1 *)(*piVar5 + 0x80) = 1;
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



undefined4 __thiscall
FUN_00573f10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec189e;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_00574000(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x1dc),
               *(undefined4 *)(param_1 + 0x1d4),*(undefined4 *)(param_1 + 0x1d0),
               *(undefined4 *)(param_1 + 0x1d8));
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4
FUN_00573f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec189e;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_00574000(param_1,param_2,param_3,param_4,param_4,param_5,param_5);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall
FUN_00574000(int param_1,undefined8 *param_2,int *param_3,char param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 *puStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  int iStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ec18ee;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_18 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puStack_40 = param_2;
  *param_2 = 0;
  iStack_3c = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  iStack_8 = 0;
  iStack_34 = 0;
  if (param_4 != '\0') {
    sVar2 = *(short *)(param_1 + 0x1b4);
    if (sVar2 < 8) {
      iStack_34 = 0;
      iStack_3c = 7;
    }
    else {
      iStack_3c = sVar2 + 2;
      iStack_34 = sVar2 + -2;
      if (0xf < iStack_3c) {
        iStack_3c = 0xf;
      }
    }
    iStack_3c = iStack_3c - (short)param_3[2];
    iStack_34 = iStack_34 - (short)param_3[2];
  }
  iStack_38 = param_1;
  if (iStack_34 <= iStack_3c) {
    param_7 = -param_7;
    iVar7 = iStack_3c;
    do {
      iStack_30 = param_7;
      if (param_7 <= param_8) {
        iVar4 = -param_5;
        iVar8 = param_7;
        iVar7 = iStack_3c;
        iVar5 = iStack_34;
        do {
          for (; iStack_3c = iVar7, iVar4 <= param_6; iVar4 = iVar4 + 1) {
            uStack_2c = 0;
            uStack_44._0_2_ = (short)param_3[2];
            uStack_44 = CONCAT22((short)((uint)param_3[2] >> 0x10),
                                 (short)uStack_44 + (short)iStack_34);
            iStack_4c = *param_3 + iVar4;
            iStack_48 = param_3[1] + iVar8;
            iStack_34 = iVar5;
            piVar6 = (int *)FUN_00572b50(&iStack_4c);
            if (piVar6[1] != 0) {
              LOCK();
              piVar1 = (int *)(piVar6[1] + 4);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            piVar1 = (int *)piVar6[1];
            uStack_2c = *(undefined8 *)piVar6;
            iStack_8._0_1_ = 1;
            iStack_8._1_3_ = 0;
            if (*piVar6 != 0) {
              iStack_1c = 0;
              uStack_24 = 0;
              FUN_005c6f60(&uStack_24);
              iStack_8._0_1_ = 2;
              func_0x0057bf30(*(undefined4 *)((int)puStack_40 + 4),uStack_24._4_4_,
                              uStack_24._4_4_ - (int)uStack_24 >> 3);
              iStack_8._0_1_ = 1;
              if ((int)uStack_24 != 0) {
                func_0x00485920((int)uStack_24);
                func_0x0046e710((int)uStack_24,iStack_1c - (int)uStack_24 >> 3);
                uStack_24 = 0;
                iStack_1c = 0;
              }
            }
            iStack_8 = (uint)iStack_8._1_3_ << 8;
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
                iVar8 = iStack_30;
                if (iVar7 == 0) {
                  pcVar3 = *(code **)(*piVar1 + 4);
                  _guard_check_icall();
                  (*pcVar3)();
                  iVar8 = iStack_30;
                }
              }
            }
            iVar7 = iStack_3c;
            iVar5 = iStack_34;
          }
          iStack_30 = iVar8 + 1;
          iVar4 = -param_5;
          iVar8 = iStack_30;
        } while (iStack_30 <= param_8);
      }
      iStack_34 = iStack_34 + 1;
    } while (iStack_34 <= iVar7);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(param_2);
  return;
}



void FUN_00574250(undefined8 *param_1,int *param_2,uint *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char ****ppppcVar9;
  int iVar10;
  char ****_Dest;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  int *unaff_FS_OFFSET;
  undefined1 uStack_8d;
  uint *puStack_8c;
  char ***pppcStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  char *pcStack_6c;
  undefined8 *puStack_68;
  uint *puStack_64;
  uint uStack_60;
  uint *puStack_5c;
  uint *puStack_58;
  undefined8 uStack_54;
  char ***apppcStack_4c [3];
  undefined8 uStack_40;
  uint uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec19ea;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_70 = 1;
  uVar7 = param_3[4];
  puStack_5c = param_3;
  puStack_68 = param_1;
  iStack_34 = 0;
  uStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  puStack_58 = (uint *)0x0;
  func_0x0057a810(uVar7 + 0x1f >> 5,&puStack_58,&uStack_8d,uStack_24);
  uStack_28 = 0;
  uStack_14 = 1;
  func_0x00579830(uVar7);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uStack_14 = 3;
  uStack_70 = 1;
  pcStack_6c = (char *)0x0;
  uStack_60 = 0;
  if (puStack_5c[5] < 0x10) {
    puStack_58 = puStack_5c;
    puStack_64 = puStack_5c;
  }
  else {
    puStack_58 = (uint *)*puStack_5c;
    puStack_64 = (uint *)*puStack_5c;
  }
  puStack_8c = (uint *)(puStack_5c[4] + (int)puStack_58);
  uVar7 = 0;
  pcVar15 = (char *)0x0;
  if (puStack_64 == puStack_8c) {
    pcVar15 = (char *)0x0;
  }
  else {
    do {
      cVar3 = (char)*puStack_64;
      pcVar16 = pcVar15 + 1;
      if ((cVar3 == '0') || (cVar3 == '-')) {
        uVar14 = uVar7 + 1;
      }
      else {
        bVar5 = (byte)uVar7;
        if ((cVar3 == '1') || (cVar3 == '+')) {
          uVar14 = uVar7 + 1;
          puVar2 = (uint *)(iStack_34 + (uVar7 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << (bVar5 & 0x1f);
        }
        else if ((cVar3 == 'N') || (cVar3 == 'n')) {
          uVar14 = uVar7 + 1;
          puVar2 = (uint *)(iStack_34 + (uVar7 >> 5) * 4);
          uVar7 = 1 << (bVar5 & 0x1f);
          if (param_4 == 0) {
            *puVar2 = uVar7 | *puVar2;
          }
          else {
            *puVar2 = ~uVar7 & *puVar2;
          }
        }
        else if ((cVar3 == 'E') || (cVar3 == 'e')) {
          uVar14 = uVar7 + 1;
          puStack_58 = (uint *)(iStack_34 + (uVar7 >> 5) * 4);
          uVar13 = 1 << (bVar5 & 0x1f);
          uVar12 = *puStack_58;
          if (param_4 == 1) {
            *puStack_58 = uVar12 | uVar13;
          }
          else {
LAB_00574421:
            uVar14 = uVar7 + 1;
            *puStack_58 = ~uVar13 & uVar12;
          }
        }
        else if ((cVar3 == 'W') || (cVar3 == 'w')) {
          uVar14 = uVar7 + 1;
          puStack_58 = (uint *)(iStack_34 + (uVar7 >> 5) * 4);
          uVar13 = 1 << (bVar5 & 0x1f);
          uVar12 = *puStack_58;
          if (param_4 != 3) goto LAB_00574421;
          *puStack_58 = uVar12 | uVar13;
        }
        else if ((cVar3 == 'S') || (cVar3 == 's')) {
          uVar14 = uVar7 + 1;
          puStack_58 = (uint *)(iStack_34 + (uVar7 >> 5) * 4);
          uVar13 = 1 << (bVar5 & 0x1f);
          uVar12 = *puStack_58;
          if (param_4 != 2) goto LAB_00574421;
          *puStack_58 = uVar12 | uVar13;
        }
        else {
          uVar14 = uVar7;
          pcVar16 = pcVar15;
          if (1 < (int)pcVar15) {
            if (pcStack_6c == (char *)0x0) {
              uStack_60 = uStack_60 + 1;
              pcVar16 = (char *)0x0;
              pcStack_6c = pcVar15;
            }
            else {
              if (pcStack_6c != pcVar15) {
                uStack_78 = 0;
                uStack_74 = 0;
                pppcStack_88 = (char ***)0x0;
                uStack_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                func_0x0046bc40("Invalid pattern for getSpectatorsByPattern: %s",0x2e);
                uStack_14 = 4;
                uVar6 = func_0x00484eb0(puStack_5c);
                uStack_14._0_1_ = 5;
                FUN_005ee340(3,uVar6);
                uStack_14._0_1_ = 4;
                FUN_00469ba0();
                uStack_14 = CONCAT31(uStack_14._1_3_,3);
                FUN_00469ba0();
                uStack_70 = 0;
                uStack_14 = 0xffffffff;
                if (iStack_34 == 0) goto LAB_00574997;
                iVar11 = iStack_2c - iStack_34;
                goto LAB_0057497a;
              }
              uStack_60 = uStack_60 + 1;
              pcVar16 = (char *)0x0;
            }
          }
        }
      }
      puStack_64 = (uint *)((int)puStack_64 + 1);
      uVar7 = uVar14;
      pcVar15 = pcVar16;
    } while (puStack_64 != puStack_8c);
    pcVar15 = pcStack_6c;
    if (0 < (int)pcVar16) {
      pcVar15 = pcVar16;
      if (pcStack_6c != (char *)0x0) {
        pcVar15 = pcStack_6c;
      }
      if (pcVar15 != pcVar16) {
        uStack_78 = 0;
        uStack_74 = 0;
        pppcStack_88 = (char ***)0x0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        func_0x0046bc40("Invalid pattern for getSpectatorsByPattern: %s",0x2e);
        uStack_14 = 8;
        uVar6 = func_0x00484eb0(puStack_5c);
        uStack_14._0_1_ = 9;
        FUN_005ee340(3,uVar6);
        uStack_14._0_1_ = 8;
        if (0xf < uStack_38) {
          func_0x0046b1f0(apppcStack_4c,apppcStack_4c[0],uStack_38);
        }
        uStack_40 = (ulonglong)(uint)uStack_40;
        uStack_38 = 0xf;
        apppcStack_4c[0] = (char ***)((uint)apppcStack_4c[0] & 0xffffff00);
        uStack_14 = CONCAT31(uStack_14._1_3_,3);
        if (0xf < uStack_74) {
          func_0x0046b1f0(&pppcStack_88,pppcStack_88,uStack_74);
        }
        uStack_78 = 0;
        uStack_74 = 0xf;
        pppcStack_88 = (char ***)((uint)pppcStack_88 & 0xffffff00);
        goto LAB_00574962;
      }
      uStack_60 = uStack_60 + 1;
    }
    uVar7 = (uint)pcVar15 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if ((uVar7 == 1) && (puStack_8c = (uint *)((int)uStack_60 / 2), (int)uStack_60 % 2 == 1)) {
      uVar7 = 0;
      puStack_5c = (uint *)(param_2[1] - (int)puStack_8c);
      pcStack_6c = (char *)(param_2[1] + (int)puStack_8c);
      if ((int)puStack_5c <= (int)pcStack_6c) {
        puStack_8c = (uint *)((int)pcVar15 / 2);
        do {
          puStack_64 = (uint *)(*param_2 - (int)puStack_8c);
          puStack_58 = (uint *)(*param_2 + (int)puStack_8c);
          if ((int)puStack_64 <= (int)puStack_58) {
            do {
              uStack_60 = uVar7 + 1;
              uVar14 = uVar7 >> 5;
              bVar5 = (byte)uVar7;
              uVar7 = uStack_60;
              if ((1 << (bVar5 & 0x1f) & *(uint *)(iStack_34 + uVar14 * 4)) != 0) {
                uStack_54 = 0;
                uStack_7c = (uint)puStack_64 & 0xffff;
                uStack_78 = (uint)puStack_5c & 0xffff;
                uStack_74 = CONCAT22(uStack_74._2_2_,(ushort)*(byte *)(param_2 + 2));
                piVar8 = (int *)FUN_00572b50(&uStack_7c);
                if (piVar8[1] != 0) {
                  LOCK();
                  piVar1 = (int *)(piVar8[1] + 4);
                  *piVar1 = *piVar1 + 1;
                  UNLOCK();
                }
                piVar1 = (int *)piVar8[1];
                uStack_54 = *(undefined8 *)piVar8;
                uStack_14._0_1_ = 0x10;
                uStack_14._1_3_ = 0;
                if (*piVar8 != 0) {
                  uStack_38 = 0;
                  uStack_40 = 0;
                  FUN_005c6f60(&uStack_40);
                  uStack_14._0_1_ = 0x11;
                  func_0x0057bf30(*(undefined4 *)((int)puStack_68 + 4),uStack_40._4_4_,
                                  (int)(uStack_40._4_4_ - (uint)uStack_40) >> 3);
                  uStack_14._0_1_ = 0x10;
                  if ((uint)uStack_40 != 0) {
                    func_0x00485920((uint)uStack_40);
                    func_0x0046e710((uint)uStack_40,(int)(uStack_38 - (uint)uStack_40) >> 3);
                    uStack_40 = 0;
                    uStack_38 = 0;
                  }
                }
                uStack_14 = CONCAT31(uStack_14._1_3_,3);
                if (piVar1 != (int *)0x0) {
                  LOCK();
                  iVar11 = piVar1[1] + -1;
                  piVar1[1] = iVar11;
                  UNLOCK();
                  if (iVar11 == 0) {
                    pcVar4 = *(code **)*piVar1;
                    _guard_check_icall();
                    (*pcVar4)();
                    LOCK();
                    iVar11 = piVar1[2] + -1;
                    piVar1[2] = iVar11;
                    UNLOCK();
                    uVar7 = uStack_60;
                    if (iVar11 == 0) {
                      pcVar4 = *(code **)(*piVar1 + 4);
                      _guard_check_icall();
                      (*pcVar4)();
                      uVar7 = uStack_60;
                    }
                  }
                }
              }
              puStack_64 = (uint *)((int)puStack_64 + 1);
            } while ((int)puStack_64 <= (int)puStack_58);
          }
          puStack_5c = (uint *)((int)puStack_5c + 1);
        } while ((int)puStack_5c <= (int)pcStack_6c);
      }
      goto LAB_00574962;
    }
  }
  uStack_78 = 0;
  uStack_74 = 0;
  pppcStack_88 = (char ***)0x0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  func_0x0046bc40("Invalid pattern for getSpectatorsByPattern, width and height should be odd (height: %i width: %i)"
                  ,0x61);
  uVar7 = uStack_60;
  uStack_14 = 0xd;
  ppppcVar9 = &pppcStack_88;
  if (0xf < uStack_74) {
    ppppcVar9 = (char ****)pppcStack_88;
  }
  iVar11 = _snprintf((char *)0x0,0,(char *)ppppcVar9,uStack_60,pcVar15);
  iVar10 = iVar11 + 1;
  if (SCARRY4(iVar11,1)) {
    iVar10 = -1;
  }
  func_0x00469c80(iVar10,0);
  ppppcVar9 = &pppcStack_88;
  if (0xf < uStack_74) {
    ppppcVar9 = (char ****)pppcStack_88;
  }
  _Dest = apppcStack_4c;
  if (0xf < uStack_38) {
    _Dest = (char ****)apppcStack_4c[0];
  }
  uStack_70 = 3;
  iVar11 = _snprintf((char *)_Dest,uStack_40._4_4_,(char *)ppppcVar9,uVar7,pcVar15);
  func_0x004698c0(iVar11,0);
  FUN_005ee340(3,apppcStack_4c);
  uStack_70 = 1;
  uStack_14._0_1_ = 0xc;
  if (0xf < uStack_38) {
    func_0x0046b1f0(apppcStack_4c,apppcStack_4c[0],uStack_38);
  }
  uStack_40 = (ulonglong)(uint)uStack_40;
  uStack_38 = 0xf;
  apppcStack_4c[0] = (char ***)((uint)apppcStack_4c[0] & 0xffffff00);
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  if (0xf < uStack_74) {
    func_0x0046b1f0(&pppcStack_88,pppcStack_88,uStack_74);
  }
  uStack_78 = 0;
  uStack_74 = 0xf;
  pppcStack_88 = (char ***)((uint)pppcStack_88 & 0xffffff00);
LAB_00574962:
  uStack_70 = 0;
  uStack_14 = 0xffffffff;
  if (iStack_34 != 0) {
    iVar11 = iStack_2c - iStack_34;
LAB_0057497a:
    uStack_14 = 0xffffffff;
    uStack_70 = 0;
    func_0x0046ac90(iStack_34,iVar11 >> 2);
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_34 = 0;
  }
LAB_00574997:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_005749c0(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined8 uVar6;
  uint uVar7;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb259d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar7 = uVar4;
  piVar5 = (int *)FUN_00572b50(param_1);
  if (piVar5[1] != 0) {
    LOCK();
    piVar1 = (int *)(piVar5[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)piVar5[1];
  uVar6 = *(undefined8 *)piVar5;
  uStack_8 = 0;
  if (*piVar5 != 0) {
    FUN_005c9a20(uVar4);
  }
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
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(uVar6,uVar7);
  return;
}



void __thiscall FUN_00574aa0(undefined4 param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eb514d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar2 = *param_2;
  uStack_20 = *(undefined4 *)(param_2 + 1);
  uStack_28._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
  iVar10 = (int)(short)uStack_20;
  uStack_28._0_4_ = (uint)uVar2;
  uVar8 = (uint)uStack_28;
  uVar11 = uStack_28._4_4_;
  uStack_28 = uVar2;
  uStack_14 = uVar7;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar11 = uVar11 + 1;
    if (((0xffff < uVar8) || (0xffff < uVar11)) || (0xf < iVar10 - 1U)) goto LAB_00574c15;
    sVar5 = (short)(iVar10 - 1U);
    uStack_20 = CONCAT22(uStack_20._2_2_,sVar5);
    iVar10 = (int)sVar5;
    uStack_28 = CONCAT44(uVar11,uVar8);
    if (iVar10 < param_3) goto LAB_00574c15;
    uStack_1c = 0;
    piVar9 = (int *)FUN_00572b50(&uStack_28);
    if (piVar9[1] != 0) {
      LOCK();
      piVar1 = (int *)(piVar9[1] + 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = (int *)piVar9[1];
    uStack_1c = *(undefined8 *)piVar9;
    uStack_8 = 0;
    if ((*piVar9 != 0) && (cVar6 = FUN_005c9860(uVar7), cVar6 != '\0')) break;
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
        iVar4 = piVar1[2] + -1;
        piVar1[2] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  uStack_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar10 = piVar1[1] + -1;
    piVar1[1] = iVar10;
    UNLOCK();
    if (iVar10 == 0) {
      pcVar3 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar9 = piVar1 + 2;
      iVar10 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        pcVar3 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
LAB_00574c15:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370(param_1);
  return;
}



uint FUN_00574c40(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iStack_3c;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined4 uStack_c;
  
  piVar8 = (int *)FUN_00572b50(param_1);
  uStack_18 = *(undefined4 *)(param_1 + 1);
  uStack_1c = (uint)((ulonglong)*param_1 >> 0x20);
  iVar12 = (int)(short)uStack_18;
  uStack_20 = (uint)*param_1;
  while( true ) {
    uStack_20 = uStack_20 + 1;
    uVar10 = iVar12 - 1;
    uStack_1c = uStack_1c + 1;
    uVar9 = uVar10;
    if (((0xffff < uStack_20) || (0xffff < uStack_1c)) || (0xf < uVar10)) break;
    uVar9 = uVar10 & 0xffff;
    iVar12 = (int)(short)uVar10;
    uStack_18 = CONCAT22(uStack_18._2_2_,(short)uVar10);
    if (iVar12 < param_2) break;
    uVar10 = uVar10 & 0xff00;
    bVar6 = false;
    bVar4 = true;
    bVar5 = true;
    bVar7 = false;
    iStack_3c = 0;
    do {
      if (bVar6) break;
      iVar13 = 0;
LAB_00574cf0:
      do {
        if (bVar6) break;
        uStack_c = uStack_18;
        uStack_14 = CONCAT44(uStack_1c - iVar13,uStack_20 - iStack_3c);
        piVar11 = (int *)FUN_00572b50(&uStack_14);
        if ((*piVar11 == 0) || (piVar11 = (int *)FUN_005c9940(), (char)piVar11 == '\0')) {
          uVar10 = CONCAT31((int3)((uint)piVar11 >> 8),1);
          bVar4 = false;
          bVar6 = true;
        }
        else {
          bVar4 = bVar5;
          bVar6 = bVar7;
          if ((iStack_3c == 0) && (iVar13 == 0)) {
            iVar1 = *piVar8;
            if (iVar1 != 0) {
              piVar11 = *(int **)(iVar1 + 0x10);
              if (piVar11 != *(int **)(iVar1 + 0x14)) goto LAB_00574df7;
              piVar2 = *(int **)(iVar1 + 0x2c);
              piVar11 = piVar2;
              for (piVar14 = *(int **)(iVar1 + 0x28); piVar14 != piVar2; piVar14 = piVar14 + 2) {
                pcVar3 = *(code **)(*(int *)*piVar14 + 0x40);
                _guard_check_icall();
                piVar11 = (int *)(*pcVar3)();
                if (piVar11[10] != 1) {
LAB_00574dcb:
                  uVar10 = (uint)piVar11 & 0xffffff00;
                  iVar13 = 1;
                  goto LAB_00574cf0;
                }
                pcVar3 = *(code **)(*(int *)*piVar14 + 0x40);
                _guard_check_icall();
                piVar11 = (int *)(*pcVar3)();
                if (piVar11[9] != 1) goto LAB_00574dcb;
              }
            }
            uVar10 = CONCAT31((int3)((uint)piVar11 >> 8),1);
            iVar13 = 1;
            bVar7 = true;
            bVar6 = true;
            goto LAB_00574cf0;
          }
LAB_00574df7:
          uVar10 = (uint)piVar11 & 0xffffff00;
        }
        iVar13 = iVar13 + 1;
        bVar5 = bVar4;
        bVar7 = bVar6;
      } while (iVar13 < 2);
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < 2);
    if (bVar4) {
      return CONCAT31((int3)(uVar10 >> 8),1);
    }
  }
  return uVar9 & 0xffffff00;
}



void __thiscall
FUN_00575160(uint param_1,undefined4 *param_2,float *param_3,float *param_4,int param_5,uint param_6
            )

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  float fVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  int *unaff_FS_OFFSET;
  float *pfVar15;
  float fVar16;
  undefined1 auStack_b0 [12];
  undefined4 *puStack_a4;
  float *pfStack_a0;
  float fStack_9c;
  undefined4 *puStack_98;
  uint uStack_94;
  float *pfStack_90;
  undefined4 uStack_8c;
  float *pfStack_88;
  undefined4 *puStack_84;
  int iStack_80;
  float *pfStack_7c;
  int iStack_78;
  float *pfStack_74;
  float *pfStack_70;
  char cStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  undefined4 uStack_68;
  undefined4 *puStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  float *pfStack_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec1ac0;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  puStack_98 = param_2 + 1;
  puStack_a4 = param_2;
  *param_2 = 0;
  puStack_84 = param_2;
  pfStack_70 = param_3;
  pfStack_7c = param_4;
  *puStack_98 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uStack_14 = 2;
  *param_2 = 4;
  uStack_8c = 1;
  uStack_94 = param_1;
  if (((*param_4 == *param_3) && (param_4[1] == param_3[1])) &&
     (param_1 = (uint)*(ushort *)(param_4 + 2), *(ushort *)(param_4 + 2) == *(ushort *)(param_3 + 2)
     )) {
    *param_2 = 1;
  }
  else {
    if (*(short *)(param_3 + 2) == *(short *)(param_4 + 2)) {
      cVar3 = func_0x00574e50(param_4,param_1,uStack_24);
      if (cVar3 == '\0') {
        pbVar6 = (byte *)func_0x005878f0(param_4);
        if ((*pbVar6 & 4) != 0) {
          uStack_8c = 0;
          goto LAB_005758c3;
        }
      }
      else {
        uStack_48 = 0;
        piVar4 = (int *)FUN_00572b50(param_4);
        if (piVar4[1] != 0) {
          LOCK();
          piVar1 = (int *)(piVar4[1] + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        piVar1 = (int *)piVar4[1];
        uStack_48 = *(undefined8 *)piVar4;
        uStack_14 = 7;
        if ((*piVar4 == 0) || (cVar3 = FUN_005c9620((byte)(param_6 >> 4) & 1), cVar3 == '\0')) {
          uStack_8c = 0;
          uStack_14 = CONCAT31(uStack_14._1_3_,2);
          if (piVar1 != (int *)0x0) {
            LOCK();
            iVar8 = piVar1[1] + -1;
            piVar1[1] = iVar8;
            UNLOCK();
            if (iVar8 == 0) {
              pcVar2 = *(code **)*piVar1;
              _guard_check_icall();
              (*pcVar2)();
              LOCK();
              piVar4 = piVar1 + 2;
              iVar8 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                pcVar2 = *(code **)(*piVar1 + 4);
                _guard_check_icall();
                (*pcVar2)();
              }
            }
          }
          goto LAB_005758c3;
        }
        uStack_14 = CONCAT31(uStack_14._1_3_,2);
        param_4 = pfStack_7c;
        if (piVar1 != (int *)0x0) {
          LOCK();
          iVar8 = piVar1[1] + -1;
          piVar1[1] = iVar8;
          UNLOCK();
          if (iVar8 == 0) {
            pcVar2 = *(code **)*piVar1;
            _guard_check_icall();
            (*pcVar2)();
            LOCK();
            piVar4 = piVar1 + 2;
            iVar8 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            param_3 = pfStack_70;
            param_4 = pfStack_7c;
            if (iVar8 == 1) {
              pcVar2 = *(code **)(*piVar1 + 4);
              _guard_check_icall();
              (*pcVar2)();
              param_3 = pfStack_70;
              param_4 = pfStack_7c;
            }
          }
        }
      }
      pfStack_70 = (float *)0x0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_68 = 0;
      puStack_64 = (undefined4 *)0x0;
      iStack_60 = 0;
      puStack_64 = (undefined4 *)func_0x008ab47d(0x18);
      *puStack_64 = puStack_64;
      puStack_64[1] = puStack_64;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_14 = 0xd;
      uStack_50 = 7;
      uStack_4c = 8;
      uStack_68 = 0x3f800000;
      func_0x00579900(0x10,puStack_64);
      puStack_40 = (undefined4 *)0x0;
      puStack_3c = (undefined4 *)0x0;
      puStack_38 = (undefined4 *)0x0;
      uStack_34 = 0;
      uStack_14._1_3_ = 0;
      uStack_14._0_1_ = 0x11;
      pfStack_88 = (float *)func_0x008ab47d(0x1c);
      uStack_14._0_1_ = 0x12;
      pfStack_90 = (float *)func_0x005758f0(param_3);
      uStack_14 = CONCAT31(uStack_14._1_3_,0x11);
      pfStack_90[2] = *param_3;
      pfStack_90[3] = param_3[1];
      *(undefined2 *)(pfStack_90 + 4) = *(undefined2 *)(param_3 + 2);
      puVar5 = (undefined4 *)func_0x005791a0(param_3);
      pfStack_88 = (float *)0x0;
      *puVar5 = pfStack_90;
      pfVar13 = pfStack_90;
      if (pfStack_90 != (float *)0x0) {
        do {
          if (param_5 < iStack_60) {
            *puStack_84 = 3;
            break;
          }
          pfVar11 = pfVar13 + 2;
          pfVar15 = pfStack_88;
          pfStack_74 = pfVar11;
          if (((((*param_4 == *pfVar11) && (param_4[1] == pfVar13[3])) &&
               ((*(short *)(param_4 + 2) == *(short *)(pfVar13 + 4) &&
                ((pfVar15 = pfVar13, pfStack_88 != (float *)0x0 &&
                 (*pfStack_88 < *pfVar13 || *pfStack_88 == *pfVar13)))))) ||
              (pfStack_88 = pfVar15, pfStack_88 != (float *)0x0)) &&
             (puVar12 = puStack_98, puVar5 = puStack_84, *pfStack_88 <= pfVar13[1]))
          goto LAB_00575810;
          iStack_78 = -1;
          do {
            iStack_80 = -1;
            iVar8 = iStack_78;
            do {
              iVar14 = iStack_80;
              if ((iVar8 != 0) || (iStack_80 != 0)) {
                fStack_28 = pfVar11[2];
                pfVar13 = (float *)((int)*pfVar11 + iVar8);
                cStack_6c = '\0';
                bStack_6a = 1;
                pfStack_70 = (float *)0x64;
                fStack_2c = (float)((int)pfVar11[1] + iStack_80);
                pfStack_30 = pfVar13;
                if ((-1 < (int)pfVar13) && (-1 < (int)fStack_2c)) {
                  cVar3 = func_0x00574e50(&pfStack_30,iVar8);
                  if (cVar3 == '\0') {
                    pbVar6 = (byte *)func_0x005878f0(&pfStack_30);
                    bVar10 = *pbVar6;
                    bStack_69 = bVar10 & 1;
                    bVar9 = bVar10 >> 1 & 1;
                    bVar10 = bVar10 >> 2 & 1;
                    if ((bVar10 != 0) || (bVar9 != 0)) {
                      bStack_69 = 1;
                    }
                    pfStack_70 = (float *)((uint)pbVar6[2] * 10);
                    pfVar13 = pfStack_30;
                  }
                  else {
                    bStack_69 = 1;
                    piVar4 = (int *)FUN_00572b50(&pfStack_30);
                    iVar14 = iStack_80;
                    bVar9 = bStack_6a;
                    bVar10 = bStack_6a;
                    if (*piVar4 != 0) {
                      cVar3 = FUN_005c9bb0();
                      if ((cVar3 == '\0') || (cStack_6c = '\x01', (param_6 & 0x10) != 0)) {
                        cStack_6c = '\0';
                      }
                      bStack_6b = FUN_005c9620((byte)(param_6 >> 4) & 1);
                      bStack_6b = bStack_6b ^ 1;
                      bStack_6a = FUN_005c9800();
                      bStack_6a = bStack_6a ^ 1;
                      pfStack_70 = (float *)func_0x005c72d0();
                      pfVar13 = pfStack_30;
                      iVar14 = iStack_80;
                      bVar9 = bStack_6a;
                      bVar10 = bStack_6b;
                    }
                  }
                  iVar8 = iStack_78;
                  pfVar11 = pfStack_74;
                  if ((((float *)*pfStack_7c == pfVar13) &&
                      (iVar14 = iStack_80, pfStack_7c[1] == fStack_2c)) &&
                     (*(short *)(pfStack_7c + 2) == fStack_28._0_2_)) {
                    if ((param_6 & 1) == 0) {
                      if (bStack_69 == 0) goto LAB_005757a9;
LAB_00575642:
                      if (((param_6 & 8) == 0) && (bVar10 != 0)) goto LAB_005757a9;
                    }
                    else if (bStack_69 != 0) goto LAB_00575642;
LAB_0057564e:
                    fVar7 = (float)FUN_00471cd0(pfStack_74,&pfStack_30);
                    if ((int)fVar7 < 4) {
                      fVar16 = 0.01;
                    }
                    else {
                      fVar16 = 0.03;
                    }
                    pfVar15 = (float *)((float)(int)pfStack_70 * fVar16 + *pfStack_90);
                    pfStack_70 = pfVar15;
                    iVar8 = func_0x0048ca40(auStack_b0,&pfStack_30,
                                            ((int)pfVar13 * 0x2000 + (int)fStack_2c) * 0x10 +
                                            (int)fStack_28._0_2_);
                    puVar5 = puStack_64;
                    if (*(undefined4 **)(iVar8 + 4) != (undefined4 *)0x0) {
                      puVar5 = *(undefined4 **)(iVar8 + 4);
                    }
                    if (puVar5 == puStack_64) {
                      pfVar13 = (float *)func_0x008ab47d(0x1c);
                      uStack_48 = CONCAT44(pfVar13,(undefined4)uStack_48);
                      *pfVar13 = 0.0;
                      pfVar13[1] = 0.0;
                      pfVar13[2] = (float)pfStack_30;
                      pfVar13[3] = fStack_2c;
                      pfVar13[4] = fStack_28;
                      pfVar13[5] = 0.0;
                      pfVar13[6] = 1.12104e-44;
                      uStack_14 = CONCAT31((int3)((uint)uStack_14 >> 8),0x11);
                      pfVar15 = pfStack_30;
                      puVar5 = (undefined4 *)func_0x005791a0(&pfStack_30);
                      *puVar5 = pfVar13;
                    }
                    else {
                      puVar5 = (undefined4 *)func_0x005791a0(&pfStack_30);
                      pfVar13 = (float *)*puVar5;
                      iVar8 = iStack_78;
                      pfVar11 = pfStack_74;
                      iVar14 = iStack_80;
                      if (*pfVar13 <= (float)pfStack_70) goto LAB_005757a9;
                    }
                    pfVar13[5] = (float)pfStack_90;
                    *pfVar13 = (float)pfStack_70;
                    pfVar11 = pfStack_70;
                    func_0x00570100(pfStack_7c);
                    fStack_9c = (float)pfVar15 + (float)pfVar11;
                    pfVar13[6] = fVar7;
                    pfVar13[1] = fStack_9c;
                    pfStack_a0 = pfVar13;
                    if (puStack_3c == puStack_38) {
                      func_0x0057cbf0(puStack_3c,&pfStack_a0);
                    }
                    else {
                      *puStack_3c = pfVar13;
                      puStack_3c[1] = fStack_9c;
                      puStack_3c = puStack_3c + 2;
                    }
                    func_0x0057a370(puStack_40,puStack_3c,uStack_34);
                    iVar8 = iStack_78;
                    pfVar11 = pfStack_74;
                    iVar14 = iStack_80;
                  }
                  else {
                    if ((param_6 & 1) == 0) {
                      if (bStack_69 == 0) goto LAB_005757a9;
                    }
                    else if (bStack_69 == 0) goto LAB_0057564e;
                    if ((((param_6 & 2) != 0) || (cStack_6c == '\0')) &&
                       (((param_6 & 4) != 0 || (bVar9 == 0)))) goto LAB_00575642;
                  }
                }
              }
LAB_005757a9:
              iStack_80 = iVar14 + 1;
            } while (iStack_80 < 2);
            iStack_78 = iVar8 + 1;
          } while (iStack_78 < 2);
          if (puStack_40 == puStack_3c) break;
          pfVar13 = (float *)*puStack_40;
          pfStack_90 = pfVar13;
          func_0x0057c310(uStack_34);
          puStack_3c = puStack_3c + -2;
          param_4 = pfStack_7c;
        } while (pfVar13 != (float *)0x0);
        puVar12 = puStack_98;
        puVar5 = puStack_84;
        if (pfStack_88 != (float *)0x0) {
LAB_00575810:
          do {
            pfVar13 = (float *)puVar12[1];
            if (pfVar13 == (float *)puVar12[2]) {
              func_0x0047c520(pfVar13,pfStack_88 + 6);
              puVar12 = puStack_98;
            }
            else {
              *pfVar13 = pfStack_88[6];
              puVar12[1] = puVar12[1] + 4;
            }
            pfStack_88 = (float *)pfStack_88[5];
          } while (pfStack_88 != (float *)0x0);
          puVar12[1] = puVar12[1] + -4;
          func_0x00e72640(*puVar12,puVar12[1]);
          *puVar5 = 0;
        }
      }
      puVar12 = puStack_64;
      for (puVar5 = (undefined4 *)*puStack_64; puVar5 != puVar12; puVar5 = (undefined4 *)*puVar5) {
        func_0x008ab812(puVar5[5],0x1c);
      }
      uStack_8c = 0;
      uStack_14._1_3_ = (undefined3)((uint)uStack_14 >> 8);
      uStack_14 = CONCAT31(uStack_14._1_3_,0xf);
      if (puStack_40 != (undefined4 *)0x0) {
        func_0x0046e710(puStack_40,(int)puStack_38 - (int)puStack_40 >> 3);
        puStack_40 = (undefined4 *)0x0;
        puStack_3c = (undefined4 *)0x0;
        puStack_38 = (undefined4 *)0x0;
      }
      uStack_14 = 2;
      func_0x005759f0();
      goto LAB_005758c3;
    }
    *param_2 = 2;
  }
  uStack_8c = 0;
  puStack_20 = &stack0xfffffffc;
LAB_005758c3:
  uStack_14 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



char FUN_00575ab0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_var;
  
  piVar2 = (int *)FUN_00572b50(param_1);
  if (*piVar2 != 0) {
    cVar1 = func_0x005c73d0(extraout_var);
    if (cVar1 != '\0') {
      return cVar1;
    }
  }
  iVar3 = func_0x005878f0(param_1);
  return *(char *)(iVar3 + 1);
}



uint FUN_00575ae0(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_00572b50(param_1);
  if (*piVar1 != 0) {
    uVar2 = FUN_005c9800();
    return uVar2;
  }
  pbVar3 = (byte *)func_0x005878f0(param_1,extraout_var);
  return CONCAT31((int3)((uint)pbVar3 >> 8),~(*pbVar3 >> 1)) & 0xffffff01;
}



uint FUN_00575b20(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  
  piVar1 = (int *)FUN_00572b50(param_1);
  if (*piVar1 != 0) {
    uVar2 = FUN_005c9620(param_2);
    return uVar2;
  }
  pbVar3 = (byte *)func_0x005878f0(param_1);
  return CONCAT31((int3)((uint)pbVar3 >> 8),~(*pbVar3 >> 1)) & 0xffffff01;
}



void __thiscall FUN_00575b60(undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  uint uStack_6c;
  uint uStack_68;
  ushort uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined8 uStack_2c;
  int iStack_24;
  char cStack_1e;
  char cStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec1ba5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_5c = param_1;
  uStack_14 = uVar7;
  if (((*param_3 != *param_2) || (param_3[1] != param_2[1])) ||
     ((short)param_3[2] != (short)param_2[2])) {
    piVar9 = param_3;
    if ((short)param_3[2] < (short)param_2[2]) {
      piVar9 = param_2;
      param_2 = param_3;
    }
    uVar2 = *(undefined8 *)param_2;
    iStack_60 = param_2[2];
    uVar3 = *(undefined8 *)piVar9;
    iStack_38 = piVar9[2];
    uStack_2c._0_4_ = (uint)uVar2;
    uStack_40._0_4_ = (uint)uVar3;
    if ((int)(uint)uStack_2c < (int)(uint)uStack_40) {
      cStack_1d = '\x01';
    }
    else {
      cStack_1d = ((uint)uStack_2c == (uint)uStack_40) + -1;
    }
    uStack_40._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
    uStack_2c._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
    if ((int)uStack_2c._4_4_ < (int)uStack_40._4_4_) {
      cStack_1e = '\x01';
    }
    else {
      cStack_1e = (uStack_2c._4_4_ == uStack_40._4_4_) + -1;
    }
    iStack_54 = (uint)uStack_2c - (uint)uStack_40;
    iStack_58 = uStack_40._4_4_ - uStack_2c._4_4_;
    iStack_30 = iStack_54 * uStack_40._4_4_ + iStack_58 * (uint)uStack_40;
    uVar10 = (uint)uStack_40;
    uVar8 = (uint)uStack_2c;
    uVar12 = uStack_2c._4_4_;
    uStack_40 = uVar3;
    uStack_2c = uVar2;
    iStack_24 = iStack_60;
    while( true ) {
      if ((uVar8 == uVar10) && (uVar12 == uStack_40._4_4_)) {
        if ((short)iStack_24 == (short)iStack_38) goto LAB_00575f12;
        uStack_4c = (uint)(ushort)uStack_2c;
        uStack_34 = (uint)uStack_2c._4_2_;
        goto LAB_00575dc0;
      }
      uStack_50 = (int)cStack_1d + uVar8;
      uVar8 = (iStack_54 * uVar12 - iStack_30) + uStack_50 * iStack_58;
      uVar10 = (int)uVar8 >> 0x1f;
      iStack_44 = (uVar8 ^ uVar10) - uVar10;
      uStack_4c = (int)cStack_1e + uVar12;
      uVar8 = (uint)uStack_2c;
      uVar10 = (iStack_58 * (uint)uStack_2c - iStack_30) + uStack_4c * iStack_54;
      uVar11 = (int)uVar10 >> 0x1f;
      iStack_48 = (uVar10 ^ uVar11) - uVar11;
      uVar10 = uStack_50 * iStack_58 + (uStack_4c * iStack_54 - iStack_30);
      uStack_34 = (int)uVar10 >> 0x1f;
      uStack_34 = (uVar10 ^ uStack_34) - uStack_34;
      if ((uVar12 != uStack_40._4_4_) &&
         ((((uint)uStack_2c == (uint)uStack_40 || (iStack_48 < iStack_44)) ||
          ((int)uStack_34 < iStack_44)))) {
        uStack_2c = CONCAT44(uStack_4c,(uint)uStack_2c);
        uVar12 = uStack_4c;
      }
      if ((uVar8 != (uint)uStack_40) &&
         (((uVar12 == uStack_40._4_4_ || (iStack_44 < iStack_48)) || ((int)uStack_34 < iStack_48))))
      {
        uStack_2c = CONCAT44(uStack_2c._4_4_,uStack_50);
        uVar8 = uStack_50;
      }
      uStack_6c = (uint)(ushort)uStack_2c;
      uStack_68 = (uint)uStack_2c._4_2_;
      uStack_64 = (ushort)(byte)iStack_24;
      uStack_1c = 0;
      piVar9 = (int *)FUN_00572b50(&uStack_6c);
      if (piVar9[1] != 0) {
        LOCK();
        piVar1 = (int *)(piVar9[1] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      piVar1 = (int *)piVar9[1];
      uStack_1c = *(undefined8 *)piVar9;
      uStack_8 = 0;
      if ((*piVar9 != 0) && (cVar6 = FUN_005c9a80(uVar7), cVar6 != '\0')) break;
      uStack_8 = 0xffffffff;
      if (piVar1 != (int *)0x0) {
        LOCK();
        iVar5 = piVar1[1] + -1;
        piVar1[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar4 = *(code **)*piVar1;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar5 = piVar1[2] + -1;
          piVar1[2] = iVar5;
          UNLOCK();
          uVar8 = (uint)uStack_2c;
          if (iVar5 == 0) {
            pcVar4 = *(code **)(*piVar1 + 4);
            _guard_check_icall();
            (*pcVar4)();
            uVar8 = (uint)uStack_2c;
          }
        }
      }
      uVar10 = (uint)uStack_40;
      uVar12 = uStack_2c._4_4_;
    }
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar5 = piVar1[1] + -1;
      piVar1[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        piVar9 = piVar1 + 2;
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          pcVar4 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar4)();
        }
      }
    }
  }
LAB_00575f12:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
LAB_00575dc0:
  uStack_64 = (ushort)(byte)iStack_24;
  uStack_1c = 0;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_34;
  piVar9 = (int *)FUN_00572b50(&uStack_6c);
  if (piVar9[1] != 0) {
    LOCK();
    piVar1 = (int *)(piVar9[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar5 = *piVar9;
  piVar1 = (int *)piVar9[1];
  uStack_1c = *(undefined8 *)piVar9;
  if ((iVar5 != 0) &&
     (0 < (*(int *)(iVar5 + 0x20) - *(int *)(iVar5 + 0x1c) >> 3) +
          (*(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28) >> 3))) {
    uStack_8 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar5 = piVar1[1] + -1;
      piVar1[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)*piVar1;
        _guard_check_icall();
        (*pcVar4)();
        LOCK();
        piVar9 = piVar1 + 2;
        iVar5 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          pcVar4 = *(code **)(*piVar1 + 4);
          _guard_check_icall();
          (*pcVar4)();
        }
      }
    }
    goto LAB_00575f12;
  }
  uStack_50 = iStack_60 + 1U & 0xffff;
  iStack_24 = CONCAT22(iStack_24._2_2_,(short)(iStack_60 + 1U));
  uStack_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar5 = piVar1[1] + -1;
    piVar1[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar1;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      iVar5 = piVar1[2] + -1;
      piVar1[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  if ((short)uStack_50 == (short)iStack_38) goto LAB_00575f12;
  iStack_60 = iStack_24;
  goto LAB_00575dc0;
}



undefined2 FUN_00575f30(int param_1,int param_2)

{
  char cVar1;
  
  if (*(short *)(param_1 + 8) != *(short *)(param_2 + 8)) {
    return 0;
  }
  cVar1 = FUN_00575f30(param_1,param_2);
  if ((cVar1 == '\0') && (cVar1 = FUN_00575f30(param_2,param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



void __thiscall
FUN_005772a0(undefined4 param_1,int *param_2,float *param_3,int param_4,uint *param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 *****pppppuVar13;
  int *piVar14;
  float *pfVar15;
  undefined4 *puVar16;
  uint uVar17;
  char *****pppppcVar18;
  ushort *puVar19;
  float *pfVar20;
  char *****_Dest;
  undefined4 extraout_ECX;
  char ****ppppcVar21;
  undefined4 extraout_EDX;
  undefined4 *puVar22;
  float fVar23;
  int *unaff_FS_OFFSET;
  float fVar24;
  undefined1 auStack_1d4 [8];
  undefined1 auStack_1cc [8];
  undefined1 auStack_1c4 [8];
  undefined1 auStack_1bc [8];
  undefined1 auStack_1b4 [24];
  undefined4 uStack_19c;
  int iStack_198;
  float fStack_194;
  char ***pppcStack_190;
  int *piStack_18c;
  uint auStack_188 [4];
  undefined4 uStack_178;
  uint uStack_174;
  uint auStack_170 [4];
  undefined4 uStack_160;
  uint uStack_15c;
  uint auStack_158 [4];
  undefined4 uStack_148;
  uint uStack_144;
  uint auStack_140 [4];
  undefined4 uStack_130;
  uint uStack_12c;
  char ***pppcStack_128;
  undefined4 uStack_124;
  char ***pppcStack_120;
  char ***pppcStack_11c;
  char ***pppcStack_118;
  char ***pppcStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_100;
  undefined4 **ppuStack_fc;
  undefined4 *puStack_f8;
  undefined4 uStack_f4;
  undefined4 *puStack_f0;
  int iStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  int *piStack_d8;
  char ****ppppcStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  size_t sStack_c4;
  uint uStack_c0;
  uint *puStack_bc;
  int iStack_b8;
  float *pfStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  char cStack_a3;
  char cStack_a2;
  char cStack_a1;
  char cStack_a0;
  char cStack_9f;
  char cStack_9e;
  char cStack_9d;
  char cStack_9c;
  char cStack_9b;
  char cStack_9a;
  byte bStack_99;
  float *pfStack_98;
  byte bStack_92;
  byte bStack_91;
  uint uStack_90;
  uint *puStack_8c;
  char cStack_85;
  float fStack_84;
  undefined4 *puStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  float *pfStack_64;
  float *pfStack_60;
  float *pfStack_5c;
  undefined4 uStack_58;
  char ****ppppcStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  uint uStack_40;
  undefined4 ****ppppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  float *pfStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec2225;
  iStack_1c = *unaff_FS_OFFSET;
  uVar8 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  piStack_18c = param_2;
  uStack_90 = 0;
  piStack_d8 = param_2;
  pfStack_98 = param_3;
  puStack_8c = param_5;
  uStack_124 = param_1;
  uStack_24 = uVar8;
  puVar5 = &stack0xfffffffc;
  if (DAT_0145efc5 != '\0') {
    uStack_40 = 0;
    ppppcStack_54 = (char ****)0x0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    func_0x0046bc40("findEveryPath: %i %i %i - %i",0x1c,uVar8);
    uStack_14._0_1_ = 2;
    uStack_14._1_3_ = 0;
    pppppcVar18 = &ppppcStack_54;
    if (0xf < uStack_40) {
      pppppcVar18 = (char *****)ppppcStack_54;
    }
    iVar9 = _snprintf((char *)0x0,0,(char *)pppppcVar18,*param_3,param_3[1],
                      (int)*(short *)(param_3 + 2),param_4);
    iVar10 = iVar9 + 1;
    if (SCARRY4(iVar9,1)) {
      iVar10 = -1;
    }
    func_0x00469c80(iVar10,0);
    pppppcVar18 = &ppppcStack_54;
    if (0xf < uStack_40) {
      pppppcVar18 = (char *****)ppppcStack_54;
    }
    _Dest = &ppppcStack_d4;
    if (0xf < uStack_c0) {
      _Dest = (char *****)ppppcStack_d4;
    }
    uStack_90 = 0x10;
    iVar9 = _snprintf((char *)_Dest,sStack_c4,(char *)pppppcVar18,*param_3,param_3[1],
                      (int)*(short *)(param_3 + 2),param_4);
    func_0x004698c0(iVar9,0);
    FUN_005ee340(1,&ppppcStack_d4);
    uStack_90 = 0;
    uStack_14._0_1_ = 1;
    FUN_00469ba0();
    uStack_14 = (uint)uStack_14._1_3_ << 8;
    if (0xf < uStack_40) {
      func_0x0046b1f0(&ppppcStack_54,ppppcStack_54,uStack_40);
    }
    piVar14 = *(int **)*param_5;
    cVar7 = *(char *)((int)piVar14 + 0xd);
    while (puVar5 = puStack_20, cVar7 == '\0') {
      uStack_40 = 0;
      ppppcStack_54 = (char ****)0x0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      func_0x0046bc40("%s - %s",7);
      uStack_14 = 3;
      uVar11 = func_0x00579f20(piVar14 + 4,piVar14 + 10);
      uStack_14._0_1_ = 4;
      FUN_005ee340(1,uVar11);
      uStack_14._0_1_ = 3;
      if (0xf < uStack_c0) {
        func_0x0046b1f0(&ppppcStack_d4,ppppcStack_d4,uStack_c0);
      }
      sStack_c4 = 0;
      uStack_c0 = 0xf;
      ppppcStack_d4 = (char ****)((uint)ppppcStack_d4 & 0xffffff00);
      uStack_14 = (uint)uStack_14._1_3_ << 8;
      if (0xf < uStack_40) {
        func_0x0046b1f0(&ppppcStack_54,ppppcStack_54,uStack_40);
      }
      piVar2 = (int *)piVar14[2];
      if (*(char *)((int)piVar2 + 0xd) == '\0') {
        cVar7 = *(char *)(*piVar2 + 0xd);
        piVar14 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar7 == '\0') {
          cVar7 = *(char *)(*piVar2 + 0xd);
          piVar14 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar7 = *(char *)(piVar14[1] + 0xd);
        piVar6 = (int *)piVar14[1];
        piVar2 = piVar14;
        while ((piVar14 = piVar6, cVar7 == '\0' && (piVar2 == (int *)piVar14[2]))) {
          cVar7 = *(char *)(piVar14[1] + 0xd);
          piVar6 = (int *)piVar14[1];
          piVar2 = piVar14;
        }
      }
      param_5 = puStack_8c;
      cVar7 = *(char *)((int)piVar14 + 0xd);
    }
  }
  puStack_20 = puVar5;
  uStack_40 = 0;
  ppppcStack_54 = (char ****)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  func_0x0046bc40("ignoreLastCreature",0x12,uVar8);
  uStack_14 = 5;
  puVar12 = (uint *)func_0x00578dc0(&puStack_bc,&ppppcStack_54);
  uVar8 = *puVar12;
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < uStack_40) {
    func_0x0046b1f0(&ppppcStack_54,ppppcStack_54,uStack_40);
  }
  uStack_48 = uStack_48 & 0xffffffff;
  uStack_40 = 0xf;
  ppppcStack_54 = (char ****)((uint)ppppcStack_54 & 0xffffff00);
  if (uVar8 == *param_5) {
LAB_00577619:
    cStack_a2 = '\0';
  }
  else {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 != '\0') goto LAB_00577619;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar22 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
    cStack_a2 = '\x01';
    if (cVar7 != '\0') goto LAB_00577619;
  }
  pfStack_28 = (float *)0x0;
  ppppuStack_3c = (undefined4 *****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("ignoreCreatures",0xf);
  uStack_14 = 6;
  func_0x0056eb10(&uStack_48,&ppppuStack_3c);
  uVar8 = uStack_40;
  if (*(char *)(uStack_40 + 0xd) == '\0') {
    piVar14 = (int *)(uStack_40 + 0x10);
    if (0xf < *(uint *)(uStack_40 + 0x24)) {
      piVar14 = (int *)*piVar14;
    }
    pppppuVar13 = &ppppuStack_3c;
    if (0xf < pfStack_28) {
      pppppuVar13 = (undefined4 *****)ppppuStack_3c;
    }
    iVar9 = func_0x004a6430(pppppuVar13,uStack_30._4_4_,piVar14,*(undefined4 *)(uStack_40 + 0x20));
    if (iVar9 < 0) goto LAB_0057768e;
  }
  else {
LAB_0057768e:
    uVar8 = *param_5;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 == *param_5) {
LAB_00577710:
    cStack_a1 = '\0';
  }
  else {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 != '\0') goto LAB_00577710;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar22 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
    cStack_a1 = '\x01';
    if (cVar7 != '\0') goto LAB_00577710;
  }
  pfStack_28 = (float *)0x0;
  ppppuStack_3c = (undefined4 *****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("ignoreNonPathable",0x11);
  uStack_14 = 7;
  func_0x0056eb10(&uStack_48,&ppppuStack_3c);
  uVar8 = uStack_40;
  if (*(char *)(uStack_40 + 0xd) == '\0') {
    piVar14 = (int *)(uStack_40 + 0x10);
    if (0xf < *(uint *)(uStack_40 + 0x24)) {
      piVar14 = (int *)*piVar14;
    }
    pppppuVar13 = &ppppuStack_3c;
    if (0xf < pfStack_28) {
      pppppuVar13 = (undefined4 *****)ppppuStack_3c;
    }
    iVar9 = func_0x004a6430(pppppuVar13,uStack_30._4_4_,piVar14,*(undefined4 *)(uStack_40 + 0x20));
    if (iVar9 < 0) goto LAB_00577785;
  }
  else {
LAB_00577785:
    uVar8 = *param_5;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 == *param_5) {
LAB_00577807:
    cStack_9e = '\0';
  }
  else {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 != '\0') goto LAB_00577807;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar22 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
    cStack_9e = '\x01';
    if (cVar7 != '\0') goto LAB_00577807;
  }
  pfStack_28 = (float *)0x0;
  ppppuStack_3c = (undefined4 *****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("ignoreNonWalkable",0x11);
  uStack_14 = 8;
  func_0x0056eb10(&uStack_48,&ppppuStack_3c);
  uVar8 = uStack_40;
  if (*(char *)(uStack_40 + 0xd) == '\0') {
    piVar14 = (int *)(uStack_40 + 0x10);
    if (0xf < *(uint *)(uStack_40 + 0x24)) {
      piVar14 = (int *)*piVar14;
    }
    pppppuVar13 = &ppppuStack_3c;
    if (0xf < pfStack_28) {
      pppppuVar13 = (undefined4 *****)ppppuStack_3c;
    }
    iVar9 = func_0x004a6430(pppppuVar13,uStack_30._4_4_,piVar14,*(undefined4 *)(uStack_40 + 0x20));
    if (iVar9 < 0) goto LAB_0057787c;
  }
  else {
LAB_0057787c:
    uVar8 = *param_5;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 == *param_5) {
LAB_005778fe:
    cStack_9f = '\0';
  }
  else {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 != '\0') goto LAB_005778fe;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar22 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
    cStack_9f = '\x01';
    if (cVar7 != '\0') goto LAB_005778fe;
  }
  pfStack_28 = (float *)0x0;
  ppppuStack_3c = (undefined4 *****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("ignoreStairs",0xc);
  uStack_14 = 9;
  func_0x0056eb10(&uStack_48,&ppppuStack_3c);
  uVar8 = uStack_40;
  if (*(char *)(uStack_40 + 0xd) == '\0') {
    piVar14 = (int *)(uStack_40 + 0x10);
    if (0xf < *(uint *)(uStack_40 + 0x24)) {
      piVar14 = (int *)*piVar14;
    }
    pppppuVar13 = &ppppuStack_3c;
    if (0xf < pfStack_28) {
      pppppuVar13 = (undefined4 *****)ppppuStack_3c;
    }
    iVar9 = func_0x004a6430(pppppuVar13,uStack_30._4_4_,piVar14,*(undefined4 *)(uStack_40 + 0x20));
    if (iVar9 < 0) goto LAB_00577973;
  }
  else {
LAB_00577973:
    uVar8 = *param_5;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 == *param_5) {
LAB_005779f5:
    cStack_9d = '\0';
  }
  else {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 != '\0') goto LAB_005779f5;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar22 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
    cStack_9d = '\x01';
    if (cVar7 != '\0') goto LAB_005779f5;
  }
  pfStack_28 = (float *)0x0;
  ppppuStack_3c = (undefined4 *****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("ignoreCost",10);
  uStack_14 = 10;
  func_0x0056eb10(&uStack_48,&ppppuStack_3c);
  uVar8 = uStack_40;
  if (*(char *)(uStack_40 + 0xd) == '\0') {
    piVar14 = (int *)(uStack_40 + 0x10);
    if (0xf < *(uint *)(uStack_40 + 0x24)) {
      piVar14 = (int *)*piVar14;
    }
    pppppuVar13 = &ppppuStack_3c;
    if (0xf < pfStack_28) {
      pppppuVar13 = (undefined4 *****)ppppuStack_3c;
    }
    iVar9 = func_0x004a6430(pppppuVar13,uStack_30._4_4_,piVar14,*(undefined4 *)(uStack_40 + 0x20));
    if (iVar9 < 0) goto LAB_00577a6a;
  }
  else {
LAB_00577a6a:
    uVar8 = *param_5;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 == *param_5) {
LAB_00577aec:
    cStack_a3 = '\0';
  }
  else {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 != '\0') goto LAB_00577aec;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar22 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
    cStack_a3 = '\x01';
    if (cVar7 != '\0') goto LAB_00577aec;
  }
  pfStack_28 = (float *)0x0;
  ppppuStack_3c = (undefined4 *****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("allowUnseen",0xb);
  uStack_14 = 0xb;
  func_0x0056eb10(&uStack_48,&ppppuStack_3c);
  uVar8 = uStack_40;
  if (*(char *)(uStack_40 + 0xd) == '\0') {
    piVar14 = (int *)(uStack_40 + 0x10);
    if (0xf < *(uint *)(uStack_40 + 0x24)) {
      piVar14 = (int *)*piVar14;
    }
    pppppuVar13 = &ppppuStack_3c;
    if (0xf < pfStack_28) {
      pppppuVar13 = (undefined4 *****)ppppuStack_3c;
    }
    iVar9 = func_0x004a6430(pppppuVar13,uStack_30._4_4_,piVar14,*(undefined4 *)(uStack_40 + 0x20));
    if (iVar9 < 0) goto LAB_00577b61;
  }
  else {
LAB_00577b61:
    uVar8 = *param_5;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 == *param_5) {
LAB_00577be3:
    cStack_9c = '\0';
  }
  else {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 != '\0') goto LAB_00577be3;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar22 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
    cStack_9c = '\x01';
    if (cVar7 != '\0') goto LAB_00577be3;
  }
  pfStack_28 = (float *)0x0;
  ppppuStack_3c = (undefined4 *****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  func_0x0046bc40("allowOnlyVisibleTiles",0x15);
  uStack_14 = 0xc;
  func_0x0056eb10(&uStack_48,&ppppuStack_3c);
  uVar8 = uStack_40;
  if (*(char *)(uStack_40 + 0xd) == '\0') {
    piVar14 = (int *)(uStack_40 + 0x10);
    if (0xf < *(uint *)(uStack_40 + 0x24)) {
      piVar14 = (int *)*piVar14;
    }
    pppppuVar13 = &ppppuStack_3c;
    if (0xf < pfStack_28) {
      pppppuVar13 = (undefined4 *****)ppppuStack_3c;
    }
    iVar9 = func_0x004a6430(pppppuVar13,uStack_30._4_4_,piVar14,*(undefined4 *)(uStack_40 + 0x20));
    if (iVar9 < 0) goto LAB_00577c58;
  }
  else {
LAB_00577c58:
    uVar8 = *param_5;
  }
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 != *param_5) {
    puStack_8c = *(uint **)(uVar8 + 0x38);
    puVar22 = (undefined4 *)(uVar8 + 0x28);
    puVar16 = puVar22;
    if (0xf < *(uint *)(uVar8 + 0x3c)) {
      puVar16 = (undefined4 *)*puVar22;
    }
    cVar7 = func_0x0046cf20(puVar16,puStack_8c,&DAT_0113ffdc,1);
    if (cVar7 == '\0') {
      if (0xf < *(uint *)(uVar8 + 0x3c)) {
        puVar22 = (undefined4 *)*puVar22;
      }
      cVar7 = func_0x0046cf20(puVar22,puStack_8c,&DAT_0112e1b4,0);
      cStack_9b = '\x01';
      if (cVar7 == '\0') goto LAB_00577ce1;
    }
  }
  cStack_9b = '\0';
LAB_00577ce1:
  uStack_40 = 0;
  ppppcStack_54 = (char ****)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  func_0x0046bc40("marginMin",9);
  uStack_14 = 0xd;
  piVar14 = (int *)func_0x00578dc0(&puStack_bc,&ppppcStack_54);
  puStack_8c = (uint *)*piVar14;
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < uStack_40) {
    func_0x0046b1f0(&ppppcStack_54,ppppcStack_54,uStack_40);
  }
  puStack_bc = (uint *)*param_5;
  uStack_48 = uStack_48 & 0xffffffff;
  uStack_40 = 0xf;
  ppppcStack_54 = (char ****)((uint)ppppcStack_54 & 0xffffff00);
  ppppuStack_3c = (undefined4 ****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  pfStack_28 = (float *)0x0;
  func_0x0046bc40("marginMax",9);
  uStack_14 = 0xe;
  puVar12 = (uint *)func_0x00578dc0(&uStack_e8,&ppppuStack_3c);
  uVar8 = *puVar12;
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)0xf;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if ((puStack_8c != puStack_bc) || (cStack_9a = '\0', uVar8 != *param_5)) {
    cStack_9a = '\x01';
  }
  uStack_e4 = 0xffff;
  uStack_e0 = 0xffff;
  uStack_dc = 0xff;
  ppppcStack_54 = (char ****)0x0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x0046bc40("destination",0xb);
  uStack_14 = 0xf;
  puVar12 = (uint *)func_0x00578dc0(&puStack_8c,&ppppcStack_54);
  uVar8 = *puVar12;
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < uStack_40) {
    func_0x0046b1f0(&ppppcStack_54,ppppcStack_54,uStack_40);
  }
  uStack_40 = 0;
  ppppcStack_54 = (char ****)((uint)ppppcStack_54 & 0xffffff00);
  if (uVar8 != *param_5) {
    uStack_40 = 0;
    uStack_48 = 0;
    ppppuStack_3c = (undefined4 ****)0x0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    pfStack_28 = (float *)0x0;
    func_0x0046bc40(&DAT_0113feb4,1);
    uStack_14 = 0x10;
    func_0x00579fe0(&ppppuStack_3c);
    uStack_14._0_1_ = 0x12;
    if (0xf < pfStack_28) {
      func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
    }
    uStack_30 = uStack_30 & 0xffffffff;
    pfStack_28 = (float *)0xf;
    ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
    if (uStack_48._4_4_ - (int)(ushort *)uStack_48 == 0xc) {
      uStack_e4 = (uint)*(ushort *)uStack_48;
      uStack_e0 = (uint)((ushort *)uStack_48)[2];
      uStack_dc = (uint)(byte)((ushort *)uStack_48)[4];
    }
    uStack_14 = (uint)uStack_14._1_3_ << 8;
    func_0x004afb10();
  }
  iStack_ec = 0;
  uStack_e8 = 0xffff;
  puStack_bc = (uint *)0xffff;
  uStack_48 = 0xffff0000ffff;
  puStack_8c = (uint *)0xff;
  uStack_40 = CONCAT22(uStack_40._2_2_,0xff);
  ppppuStack_3c = (undefined4 ****)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  pfStack_28 = (float *)0x0;
  func_0x0046bc40("maxDistanceFrom",0xf);
  uStack_14 = 0x13;
  puVar12 = (uint *)func_0x00578dc0(&uStack_a8,&ppppuStack_3c);
  uVar8 = *puVar12;
  uStack_14 = uStack_14 & 0xffffff00;
  if (0xf < pfStack_28) {
    func_0x0046b1f0(&ppppuStack_3c,ppppuStack_3c,pfStack_28);
  }
  uStack_30 = uStack_30 & 0xffffffff;
  pfStack_28 = (float *)&DAT_0000000f;
  ppppuStack_3c = (undefined4 ****)((uint)ppppuStack_3c & 0xffffff00);
  if (uVar8 != *param_5) {
    pfStack_28 = (float *)0x0;
    uStack_30 = 0;
    ppppcStack_d4 = (char ****)0x0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    sStack_c4 = 0;
    uStack_c0 = 0;
    func_0x0046bc40(&DAT_0113feb4,1);
    uStack_14 = 0x14;
    func_0x00579fe0(&ppppcStack_d4);
    uStack_14._0_1_ = 0x16;
    if (0xf < uStack_c0) {
      func_0x0046b1f0(&ppppcStack_d4,ppppcStack_d4,uStack_c0);
    }
    sStack_c4 = 0;
    uStack_c0 = 0xf;
    ppppcStack_d4 = (char ****)((uint)ppppcStack_d4 & 0xffffff00);
    if ((int)uStack_30._4_4_ - (int)(ushort *)uStack_30 == 0x10) {
      puStack_8c = (uint *)(uint)(byte)((ushort *)uStack_30)[4];
      puStack_bc = (uint *)(uint)((ushort *)uStack_30)[2];
      uStack_e8 = (uint)*(ushort *)uStack_30;
      uStack_40 = CONCAT22(uStack_40._2_2_,(ushort)(byte)((ushort *)uStack_30)[4]);
      iStack_ec = *(int *)((ushort *)uStack_30 + 6);
      uStack_48 = (ulonglong)CONCAT24(((ushort *)uStack_30)[2],uStack_e8);
    }
    uStack_14 = (uint)uStack_14._1_3_ << 8;
    if ((ushort *)uStack_30 != (ushort *)0x0) {
      func_0x0046ac90((ushort *)uStack_30,(int)pfStack_28 - (int)(ushort *)uStack_30 >> 2);
      uStack_30 = 0;
      pfStack_28 = (float *)0x0;
    }
  }
  piVar14 = piStack_d8;
  piStack_d8[0] = 0;
  piStack_d8[1] = 0;
  *piStack_d8 = 0;
  piStack_d8[1] = 0;
  iVar9 = func_0x008ab47d(0x4c);
  *(int *)iVar9 = iVar9;
  *(int *)(iVar9 + 4) = iVar9;
  *(int *)(iVar9 + 8) = iVar9;
  *(undefined2 *)(iVar9 + 0xc) = 0x101;
  *piVar14 = iVar9;
  uStack_14 = 0;
  uStack_90 = uStack_90 | 1;
  fStack_84 = 0.0;
  puStack_80 = (undefined4 *)0x0;
  iStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  iStack_68 = 0;
  func_0x00579050();
  pfStack_64 = (float *)0x0;
  pfStack_60 = (float *)0x0;
  pfStack_5c = (float *)0x0;
  uStack_58 = 0;
  uStack_14 = 0x1a;
  pfVar15 = (float *)func_0x008ab47d(0x20);
  pfVar20 = pfStack_98;
  *pfVar15 = 1.0;
  pfVar15[1] = 0.0;
  *(undefined8 *)(pfVar15 + 2) = *(undefined8 *)pfStack_98;
  pfVar15[4] = pfStack_98[2];
  pfVar15[5] = 0.0;
  pfVar15[6] = 0.0;
  pfVar15[7] = 0.0;
  pfStack_98 = pfVar15;
  puVar16 = (undefined4 *)func_0x00578f00(pfVar20);
  *puVar16 = pfVar15;
  func_0x00578d60(&pfStack_98);
  if (pfStack_64 != pfStack_60) {
    pppcStack_190 = (char ***)&pppcStack_120;
    do {
      fVar24 = *pfStack_64;
      if (7 < (int)((int)pfStack_60 - (int)pfStack_64 & 0xfffffffcU)) {
        pfStack_98 = (float *)pfStack_60[-1];
        pfStack_60[-1] = fVar24;
        uStack_ac = (int)(pfStack_60 + -1) - (int)pfStack_64 >> 2;
        uVar8 = 0;
        uStack_a8 = (int)(uStack_ac - 1) >> 1;
        uVar17 = uVar8;
        if (0 < (int)uStack_a8) {
          do {
            uVar8 = uVar17 * 2 + 1;
            if (*(float *)((int)pfStack_64[uVar17 * 2 + 2] + 4) <
                *(float *)((int)pfStack_64[uVar17 * 2 + 1] + 4) ||
                *(float *)((int)pfStack_64[uVar17 * 2 + 2] + 4) ==
                *(float *)((int)pfStack_64[uVar17 * 2 + 1] + 4)) {
              uVar8 = uVar17 * 2 + 2;
            }
            pfStack_64[uVar17] = pfStack_64[uVar8];
            uVar17 = uVar8;
          } while ((int)uVar8 < (int)uStack_a8);
        }
        if ((uVar8 == uStack_a8) && ((uStack_ac & 1) == 0)) {
          pfStack_64[uVar8] = pfStack_64[uStack_ac - 1];
          uVar8 = uStack_ac - 1;
        }
        if (0 < (int)uVar8) {
          fVar23 = pfStack_98[1];
          do {
            uVar17 = (int)(uVar8 - 1) >> 1;
            if (*(float *)((int)pfStack_64[uVar17] + 4) <= fVar23) break;
            pfStack_64[uVar8] = pfStack_64[uVar17];
            uVar8 = uVar17;
          } while (0 < (int)uVar17);
        }
        pfStack_64[uVar8] = (float)pfStack_98;
      }
      pfStack_60 = pfStack_60 + -1;
      fStack_b0 = fVar24;
      if (*(int *)((int)fVar24 + 0x14) == 0) {
        sStack_c4 = 0;
        uStack_c0 = 0;
        ppppcStack_d4 = (char ****)0x0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        func_0x0046bc40(&DAT_0112e1b4,0);
        pppppcVar18 = &ppppcStack_d4;
        uStack_14 = 0x1c;
        uStack_90 = uStack_90 | 4;
      }
      else {
        pppppcVar18 = (char *****)func_0x00570140(auStack_158);
        uStack_14 = CONCAT31(uStack_14._1_3_,0x1b);
        uStack_90 = uStack_90 | 2;
      }
      if (*(int *)((int)fVar24 + 0x14) == 0) {
        uStack_108 = 0xffffffff;
      }
      else {
        uStack_108 = FUN_00471cd0(*(int *)((int)fVar24 + 0x14) + 8,(int)fVar24 + 8);
      }
      uStack_14 = 0x1d;
      pppcStack_120 = (char ***)*pppppcVar18;
      pppcStack_11c = (char ***)pppppcVar18[1];
      pppcStack_118 = (char ***)pppppcVar18[2];
      pppcStack_114 = (char ***)pppppcVar18[3];
      uStack_110 = *(undefined8 *)(pppppcVar18 + 4);
      pppppcVar18[4] = (char ****)0x0;
      pppppcVar18[5] = (char ****)0xf;
      *(undefined1 *)pppppcVar18 = 0;
      uStack_104 = *(undefined4 *)((int)fVar24 + 0x18);
      uStack_14._1_3_ = (uint3)(uStack_14 >> 8);
      fStack_100 = *(float *)((int)fVar24 + 4);
      uStack_14._0_1_ = 0x1d;
      uStack_90 = uStack_90 | 8;
      uVar11 = func_0x00570140(auStack_140);
      uStack_14._0_1_ = 0x24;
      iVar9 = func_0x00578e30(uVar11);
      *(int *)(iVar9 + 0x20) = (int)fStack_100;
      *(undefined4 *)(iVar9 + 0x1c) = uStack_104;
      *(undefined4 *)(iVar9 + 0x18) = uStack_108;
      func_0x00469bd0(&pppcStack_120);
      uStack_14 = CONCAT31(uStack_14._1_3_,0x1d);
      if (0xf < uStack_12c) {
        func_0x0046b1f0(auStack_140,auStack_140[0],uStack_12c);
      }
      uStack_90 = uStack_90 & 0xfffffff7;
      uStack_130 = 0;
      uStack_12c = 0xf;
      auStack_140[0] = auStack_140[0] & 0xffffff00;
      pppcStack_128 = (char ***)&pppcStack_120;
      uStack_14 = 0x1c;
      if (0xf < uStack_110._4_4_) {
        uVar8 = uStack_110._4_4_ + 1;
        ppppcVar21 = (char ****)pppcStack_120;
        if (0xfff < uVar8) {
          ppppcVar21 = (char ****)pppcStack_120[-1];
          uVar8 = uStack_110._4_4_ + 0x24;
          if (0x1f < (uint)((int)pppcStack_120 + (-4 - (int)ppppcVar21))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        func_0x008ab812(ppppcVar21,uVar8);
      }
      uStack_110 = 0xf00000000;
      pppcStack_120 = (char ***)((uint)pppcStack_120 & 0xffffff00);
      uStack_14 = 0x1b;
      if ((uStack_90 & 4) != 0) {
        uStack_90 = uStack_90 & 0xfffffffb;
        if (0xf < uStack_c0) {
          func_0x0046b1f0(&ppppcStack_d4,ppppcStack_d4,uStack_c0);
        }
        sStack_c4 = 0;
        uStack_c0 = 0xf;
        ppppcStack_d4 = (char ****)((uint)ppppcStack_d4 & 0xffffff00);
      }
      uStack_14 = 0x1a;
      if ((uStack_90 & 2) != 0) {
        uStack_90 = uStack_90 & 0xfffffffd;
        if (0xf < uStack_144) {
          func_0x0046b1f0(auStack_158,auStack_158[0],uStack_144);
        }
        uStack_148 = 0;
        uStack_144 = 0xf;
        auStack_158[0] = auStack_158[0] & 0xffffff00;
      }
      iVar9 = param_4;
      if (((uStack_e4 == *(uint *)((int)fVar24 + 8)) && (uStack_e0 == *(uint *)((int)fVar24 + 0xc)))
         && ((short)uStack_dc == *(short *)((int)fVar24 + 0x10))) {
        if (cStack_9a == '\0') break;
        iVar9 = *(int *)((int)fVar24 + 0x18) + 4;
        if (param_4 < iVar9) {
          iVar9 = param_4;
        }
      }
      param_4 = iVar9;
      if (*(int *)((int)fVar24 + 0x18) < param_4) {
        pfVar20 = (float *)((int)fVar24 + 8);
        iStack_b8 = -1;
        pfStack_b4 = pfVar20;
        do {
          uStack_ac = 0xffffffff;
          iVar9 = iStack_b8;
          do {
            if ((iVar9 != 0) || (uStack_ac != 0)) {
              fVar24 = *pfVar20;
              pfStack_98 = (float *)pfVar20[2];
              uStack_a8 = iVar9 + (int)fVar24;
              iVar10 = (int)pfVar20[1] + uStack_ac;
              uStack_30 = CONCAT44(iVar10,uStack_a8);
              pfVar20 = pfStack_b4;
              iVar9 = iStack_b8;
              pfStack_28 = pfStack_98;
              if ((-1 < (int)uStack_a8) && (-1 < iVar10)) {
                pfStack_28._0_2_ = (short)pfStack_98;
                iVar9 = (int)(short)pfStack_28;
                iVar9 = func_0x0048ca40(auStack_1bc,&uStack_30,
                                        (uStack_a8 * 0x2000 + iVar10) * 0x10 + iVar9);
                puVar16 = puStack_80;
                if (*(undefined4 **)(iVar9 + 4) != (undefined4 *)0x0) {
                  puVar16 = *(undefined4 **)(iVar9 + 4);
                }
                fVar23 = fStack_b0;
                if (puVar16 == puStack_80) {
                  cStack_85 = '\0';
                  cStack_a0 = '\0';
                  bStack_99 = 1;
                  iVar9 = 1000;
                  bStack_91 = 1;
                  cVar7 = func_0x00574e50(&uStack_30,extraout_ECX);
                  if (cVar7 == '\0') {
                    if (cStack_9b == '\0') {
                      puVar19 = (ushort *)func_0x005878f0(&uStack_30);
                      cStack_85 = (char)(*puVar19 & 0xffffff01);
                      uVar8 = CONCAT31((int3)((*puVar19 & 0xffffff01) >> 8),(byte)*puVar19 >> 2) &
                              0xffffff01;
                      bStack_91 = (byte)*puVar19 >> 1 & 1;
                      bStack_99 = (byte)uVar8;
                      if ((bStack_99 != 0) || (bStack_91 != 0)) {
                        cStack_85 = '\x01';
                      }
                      uStack_a8 = (uint)(ushort *)uStack_30;
                      iVar9 = (uint)(byte)puVar19[1] * 10;
                      pfStack_98 = pfStack_28;
                      goto LAB_0057872b;
                    }
LAB_00578750:
                    bStack_92 = '\0';
                  }
                  else {
                    piVar14 = (int *)FUN_00572b50(&uStack_30);
                    if (*piVar14 == 0) goto LAB_00578750;
                    cStack_85 = '\x01';
                    cStack_a0 = FUN_005c9c00();
                    bStack_99 = FUN_005c9620(1);
                    bStack_99 = bStack_99 ^ 1;
                    bStack_91 = FUN_005c9800();
                    bStack_91 = bStack_91 ^ 1;
                    bStack_92 = func_0x005c73d0();
                    iVar9 = func_0x005c72d0();
                    uVar8 = (uint)bStack_92 << 8;
LAB_0057872b:
                    if ((bStack_91 == 0) || (3 < (uVar8 >> 8) - 0xd2)) goto LAB_00578750;
                    bStack_92 = '\x01';
                  }
                  uVar8 = uStack_a8;
                  if ((iStack_ec == 0) ||
                     ((((uStack_e8 == 0xffff && (puStack_bc == (uint *)0xffff)) &&
                       ((short)puStack_8c == 0xff)) ||
                      (func_0x00570100(&uStack_30), fVar24 <= (float)iStack_ec)))) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (((((cStack_85 == '\0') && (cStack_9c == '\0')) ||
                       (((bStack_92 != '\0' && (cStack_9d == '\0')) &&
                        (((uStack_e4 != uVar8 || ((float)uStack_e0 != uStack_30._4_4_)) ||
                         ((short)uStack_dc != (short)pfStack_28)))))) ||
                      (((bStack_91 != 0 && (cStack_9e == '\0')) &&
                       ((uStack_e4 != uVar8 ||
                        (((float)uStack_e0 != uStack_30._4_4_ ||
                         ((short)uStack_dc != (short)pfStack_28)))))))) ||
                     (((bStack_99 != 0 && (cStack_9f == '\0')) || (bVar4)))) {
                    iVar9 = (uStack_a8 * 0x2000 + (int)uStack_30._4_4_) * 0x10 +
                            (int)(short)pfStack_28;
                    func_0x0048ca40(&uStack_f4,&uStack_30,iVar9);
                    puVar16 = puStack_f0;
                    fVar23 = fStack_b0;
                    if (puStack_f0 == (undefined4 *)0x0) {
                      if (iStack_7c == 0xaaaaaaa) {
                        func_0x00e701fa("unordered_map/set too long");
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      ppuStack_fc = &puStack_80;
                      uStack_14._0_1_ = 0x2a;
                      puStack_f8 = puStack_f0;
                      puStack_f8 = (undefined4 *)func_0x008ab47d(0x18);
                      puVar1 = (ulonglong *)((int)puStack_f8 + 8);
                      *puVar1 = uStack_30;
                      *(float **)((int)puStack_f8 + 0x10) = pfStack_98;
                      *(undefined4 *)((int)puStack_f8 + 0x14) = 0;
                      uStack_14._0_1_ = 0x2b;
                      uStack_a8 = (uint)puStack_f8;
                      if (fStack_84 <
                          (float)((double)(iStack_7c + 1) +
                                 (double)(&DAT_011a2c10)[-(iStack_7c + 1 >> 0x1f)]) /
                          (float)((double)iStack_68 + (double)(&DAT_011a2c10)[-(iStack_68 >> 0x1f)])
                         ) {
                        func_0x0057ad00();
                        puVar16 = (undefined4 *)func_0x0048ca40(auStack_1c4,puVar1,iVar9);
                        uStack_f4 = *puVar16;
                        puStack_f0 = (undefined4 *)puVar16[1];
                      }
                      puStack_f8 = (undefined4 *)0x0;
                      puVar16 = (undefined4 *)func_0x0057ad80(iVar9,uStack_f4,uStack_a8);
                      uStack_14 = CONCAT31(uStack_14._1_3_,0x1a);
                      fVar23 = fStack_b0;
                    }
                  }
                  else if ((cStack_a0 == '\0') || (cStack_a1 != '\0')) {
                    pfVar20 = (float *)func_0x008ab47d(0x20);
                    fVar23 = fStack_b0;
                    pfVar20[1] = 1e+07;
                    pfVar20[5] = fStack_b0;
                    *pfVar20 = (float)iVar9;
                    pfVar20[2] = (float)(ushort *)uStack_30;
                    pfVar20[3] = uStack_30._4_4_;
                    pfVar20[4] = (float)pfStack_98;
                    pfVar20[6] = (float)(*(int *)((int)fStack_b0 + 0x18) + 1);
                    pfVar20[7] = (float)(uint)(cStack_85 == '\0');
                    pfStack_98 = pfVar20;
                    puVar16 = (undefined4 *)func_0x00579dc0(auStack_1cc,&uStack_30,&pfStack_98);
                    puVar16 = (undefined4 *)*puVar16;
                  }
                  else {
                    pfStack_98 = (float *)0x0;
                    puVar16 = (undefined4 *)func_0x00579dc0(auStack_1d4,&uStack_30,&pfStack_98);
                    pfVar20 = pfStack_b4;
                    puVar16 = (undefined4 *)*puVar16;
                    fVar23 = fStack_b0;
                    if (cStack_a2 != '\0') {
                      pfStack_98 = (float *)func_0x00570140(auStack_188);
                      uStack_14._0_1_ = 0x2d;
                      FUN_00471cd0(pfVar20,&uStack_30);
                      iVar9 = *(int *)((int)fStack_b0 + 0x18);
                      fVar24 = *(float *)((int)fStack_b0 + 4) + 100.0;
                      uStack_14._0_1_ = 0x2e;
                      func_0x0057d910(pppcStack_128,pfStack_98);
                      uStack_14._0_1_ = 0x2e;
                      uStack_90 = uStack_90 | 0x20;
                      uStack_19c = extraout_EDX;
                      iStack_198 = iVar9 + 1;
                      fStack_194 = fVar24;
                      uVar11 = func_0x00570140(auStack_170);
                      uStack_14._0_1_ = 0x33;
                      iVar9 = func_0x00578e30(uVar11);
                      *(int *)(iVar9 + 0x20) = (int)fStack_194;
                      *(int *)(iVar9 + 0x1c) = iStack_198;
                      *(undefined4 *)(iVar9 + 0x18) = uStack_19c;
                      func_0x00469bd0(auStack_1b4);
                      uStack_14._0_1_ = 0x2e;
                      if (0xf < uStack_15c) {
                        func_0x0046b1f0(auStack_170,auStack_170[0],uStack_15c);
                      }
                      uStack_90 = uStack_90 & 0xffffffdf;
                      uStack_160 = 0;
                      uStack_15c = 0xf;
                      auStack_170[0] = auStack_170[0] & 0xffffff00;
                      uStack_14._0_1_ = 0x2d;
                      func_0x0056b3b0();
                      uStack_14 = CONCAT31(uStack_14._1_3_,0x1a);
                      if (0xf < uStack_174) {
                        func_0x0046b1f0(auStack_188,auStack_188[0],uStack_174);
                      }
                      uStack_178 = 0;
                      uStack_174 = 0xf;
                      auStack_188[0] = auStack_188[0] & 0xffffff00;
                      fVar23 = fStack_b0;
                    }
                  }
                }
                pfVar15 = (float *)puVar16[5];
                pfVar20 = pfStack_b4;
                iVar9 = iStack_b8;
                if (pfVar15 != (float *)0x0) {
                  if ((iStack_b8 == 0) || (uStack_ac == 0)) {
                    fVar24 = 1.0;
                  }
                  else {
                    fVar24 = 3.0;
                  }
                  fVar24 = fVar24 * *pfVar15;
                  if (cStack_a3 != '\0') {
                    fVar24 = 1.0;
                  }
                  fVar24 = fVar24 + *(float *)((int)fVar23 + 4);
                  if (fVar24 < pfVar15[1]) {
                    pfVar15[1] = fVar24;
                    *(float *)(puVar16[5] + 0x14) = fVar23;
                    if (*(int *)(puVar16[5] + 0x1c) != 0) {
                      *(int *)(puVar16[5] + 0x1c) = *(int *)((int)fVar23 + 0x1c) + 1;
                    }
                    *(int *)(puVar16[5] + 0x18) = *(int *)((int)fVar23 + 0x18) + 1;
                    if (pfStack_60 == pfStack_5c) {
                      func_0x0057ca40(pfStack_60,puVar16 + 5);
                    }
                    else {
                      *pfStack_60 = (float)puVar16[5];
                      pfStack_60 = pfStack_60 + 1;
                    }
                    pfVar20 = pfStack_b4;
                    iVar9 = iStack_b8;
                    if (1 < (int)pfStack_60 - (int)pfStack_64 >> 2) {
                      pfStack_98 = (float *)pfStack_60[-1];
                      func_0x0057c2c0(pfStack_60,&pfStack_98,uStack_58);
                      pfVar20 = pfStack_b4;
                      iVar9 = iStack_b8;
                    }
                  }
                }
              }
            }
            uStack_ac = uStack_ac + 1;
          } while ((int)uStack_ac < 2);
          iStack_b8 = iVar9 + 1;
        } while (iStack_b8 < 2);
      }
    } while (pfStack_64 != pfStack_60);
  }
  puVar22 = puStack_80;
  for (puVar16 = (undefined4 *)*puStack_80; puVar16 != puVar22; puVar16 = (undefined4 *)*puVar16) {
    if (puVar16[5] != 0) {
      func_0x008ab812(puVar16[5],0x20);
    }
  }
  uStack_14._1_3_ = (uint3)(uStack_14 >> 8);
  uStack_14 = CONCAT31(uStack_14._1_3_,0x18);
  if (pfStack_64 != (float *)0x0) {
    func_0x0046ac90(pfStack_64,(int)pfStack_5c - (int)pfStack_64 >> 2);
    pfStack_64 = (float *)0x0;
    pfStack_60 = (float *)0x0;
    pfStack_5c = (float *)0x0;
  }
  uStack_14 = 0;
  func_0x00576890();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



uint * __fastcall FUN_00579560(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec23dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = func_0x008ab47d(0x2037,uVar1);
  if (iVar2 != 0) {
    uVar1 = iVar2 + 0x23U & 0xffffffe0;
    *(int *)(uVar1 - 4) = iVar2;
    *(uint *)uVar1 = uVar1;
    *(uint *)(uVar1 + 4) = uVar1;
    *(uint *)(uVar1 + 8) = uVar1;
    *(undefined2 *)(uVar1 + 0xc) = 0x101;
    *param_1 = uVar1;
    *unaff_FS_OFFSET = iStack_10;
    return param_1;
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



void __fastcall FUN_00579770(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec2455;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,param_1[2] - iVar1 >> 2,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0057abc0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    func_0x008ab812(puVar1,0xc,uVar3);
    puVar1 = puVar2;
  }
  func_0x008ab812(*(undefined4 *)(param_1 + 0xc),0xc,uVar3);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0057ac90(int param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec29b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x0046ac90(iVar1,*(int *)(param_1 + 0x18) - iVar1 >> 2,uVar2);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0057afc0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0057aff0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0057b020(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<class_Tile>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa0);
  }
  return param_1;
}



void Catch_0057c144(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x4c);
  uVar1 = *(undefined4 *)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x38);
  func_0x0048cac0(*(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x34));
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  func_0x00485920();
  *puVar2 = uVar1;
  func_0x00e87d2e(0,0);
  func_0x0046e700();
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
  iVar3 = *(int *)(unaff_EBP + -0x4c);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  uVar1 = *(undefined4 *)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  iVar4 = *(int *)(unaff_EBP + -0x48);
  *(int *)(unaff_EBP + -0x18) = iVar3 + iVar4 * 8;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x0048cac0(iVar3,*(undefined4 *)(unaff_EBP + -0x34));
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x38);
  func_0x0057a5b0(iVar3 + iVar4 * 8);
  func_0x00485920();
  *puVar2 = uVar1;
  func_0x00e87d2e(0,0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



void Catch_0057c194(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
  iVar1 = *(int *)(unaff_EBP + -0x4c);
  *(int *)(unaff_EBP + -0x20) = iVar1;
  uVar2 = *(undefined4 *)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  iVar3 = *(int *)(unaff_EBP + -0x48);
  *(int *)(unaff_EBP + -0x18) = iVar1 + iVar3 * 8;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x0048cac0(iVar1,*(undefined4 *)(unaff_EBP + -0x34));
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar4 = *(undefined4 **)(unaff_EBP + -0x38);
  func_0x0057a5b0(iVar1 + iVar3 * 8);
  func_0x00485920();
  *puVar4 = uVar2;
  func_0x00e87d2e(0,0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



void __thiscall FUN_0057ce90(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec2dc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00577150(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0057cef0(void)

{
  return &`public:_void___thiscall_Map::findPathAsync(class_Position_const&,class_Position_const&,class_std::function<>)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_0057cf00(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined3 uVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  int aiStack_b0 [9];
  int *piStack_8c;
  undefined1 auStack_88 [4];
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  undefined1 auStack_74 [36];
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  uint auStack_44 [6];
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec1ed8;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_bc = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_24 = &uStack_c4;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    LOCK();
    piVar5 = (int *)(*(int *)(param_1 + 0x24) + 4);
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  uStack_c4 = *(undefined4 *)(param_1 + 0x20);
  uStack_c0 = *(undefined4 *)(param_1 + 0x24);
  uStack_8 = 0xffffffff;
  uStack_14 = uStack_bc;
  func_0x00575f80(&uStack_1c,param_1 + 8,param_1 + 0x14);
  piStack_28 = (int *)auStack_74;
  uStack_50 = 0;
  uStack_8._1_3_ = 0;
  uVar4 = uStack_8._1_3_;
  uStack_8._0_1_ = 3;
  uStack_8._1_3_ = 0;
  piStack_24 = piStack_28;
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    pcVar2 = *(code **)**(undefined4 **)(param_1 + 0x4c);
    _guard_check_icall(auStack_74);
    uStack_50 = (*pcVar2)();
    uVar4 = uStack_8._1_3_;
  }
  uStack_8._1_3_ = uVar4;
  piStack_2c = &iStack_4c;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    *(int *)((int)uStack_1c._4_4_ + 4) = *(int *)((int)uStack_1c._4_4_ + 4) + 1;
    UNLOCK();
  }
  iStack_4c = (int)uStack_1c;
  iStack_48 = (int)uStack_1c._4_4_;
  uStack_20 = 1;
  piStack_8c = (int *)0x0;
  uStack_8._0_1_ = 10;
  piStack_28 = piStack_2c;
  piVar5 = (int *)func_0x008ab47d(0x38);
  uStack_8._0_1_ = 0xb;
  piStack_78 = piVar5 + 2;
  *piVar5 = (int)std::_Func_impl_no_alloc<>::vftable;
  piStack_2c = piVar5;
  piStack_28 = piStack_78;
  piStack_24 = piVar5;
  func_0x0057d860(auStack_74);
  piStack_80 = piVar5 + 0xc;
  *piStack_80 = 0;
  piVar5[0xd] = 0;
  *piStack_80 = iStack_4c;
  piVar5[0xd] = iStack_48;
  iStack_4c = 0;
  iStack_48 = 0;
  piStack_24 = (int *)0x0;
  uStack_8._0_1_ = 0x12;
  auStack_44[4] = 0;
  auStack_44[0] = 0;
  auStack_44[1] = 0;
  auStack_44[2] = 0;
  auStack_44[3] = 0;
  auStack_44[5] = 0;
  piStack_8c = piVar5;
  piStack_7c = piStack_80;
  func_0x0046bc40("Map::findPathAsync::<lambda_1>::operator ()",0x2b);
  uStack_8 = CONCAT31(uStack_8._1_3_,0x13);
  FUN_005e5070(auStack_88,auStack_44,aiStack_b0,0);
  if (piStack_84 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_84[1] + -1;
    piStack_84[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_84;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar3 = piStack_84[2] + -1;
      piStack_84[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piStack_84 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_8._0_1_ = 0x12;
  if (0xf < auStack_44[5]) {
    func_0x0046b1f0(auStack_44,auStack_44[0],auStack_44[5]);
  }
  auStack_44[4] = 0;
  auStack_44[5] = 0xf;
  auStack_44[0] = auStack_44[0] & 0xffffff00;
  uStack_8._0_1_ = 2;
  if (piStack_8c != (int *)0x0) {
    pcVar2 = *(code **)(*piStack_8c + 0x10);
    _guard_check_icall(CONCAT31((int3)((uint)aiStack_b0 >> 8),piStack_8c != aiStack_b0));
    (*pcVar2)();
    piStack_8c = (int *)0x0;
  }
  uStack_20 = 0;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00577210();
  uStack_8 = 0xffffffff;
  piVar5 = uStack_1c._4_4_;
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
      piVar1 = piVar5 + 2;
      iVar3 = *piVar1 + -1;
      *piVar1 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar2 = *(code **)(*piVar5 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0057cf10(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec2e16;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar4 = (undefined4 *)func_0x008ab47d(0x50,uVar3);
  *puVar4 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_1 + 8);
  puVar4[4] = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(puVar4 + 5) = *(undefined8 *)(param_1 + 0x14);
  puVar4[7] = *(undefined4 *)(param_1 + 0x1c);
  puVar4[8] = 0;
  puVar4[9] = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x24) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar4[8] = *(undefined4 *)(param_1 + 0x20);
  puVar4[9] = *(undefined4 *)(param_1 + 0x24);
  puVar4[0x13] = 0;
  uStack_8 = 2;
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    pcVar2 = *(code **)**(undefined4 **)(param_1 + 0x4c);
    _guard_check_icall(puVar4 + 10);
    uVar5 = (*pcVar2)();
    puVar4[0x13] = uVar5;
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar4;
}



void __thiscall FUN_0057d000(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec2e58;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00577210(uVar1);
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_0057d070(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



int __fastcall FUN_0057d080(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 *puVar7;
  undefined4 uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_1 + 0x34) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x34) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_18 = *(undefined4 *)(param_1 + 0x30);
  piStack_14 = *(int **)(param_1 + 0x34);
  uStack_8 = 0;
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    pcVar4 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
    puVar7 = &uStack_18;
    _guard_check_icall(puVar7);
    iVar6 = (*pcVar4)();
    piVar1 = piStack_14;
    uStack_8 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      LOCK();
      piVar2 = piStack_14 + 1;
      iVar3 = *piVar2;
      iVar6 = *piVar2;
      *piVar2 = iVar3 + -1;
      UNLOCK();
      if (iVar3 + -1 == 0) {
        pcVar4 = *(code **)*piStack_14;
        _guard_check_icall(puVar7);
        iVar6 = (*pcVar4)();
        LOCK();
        piVar2 = piVar1 + 2;
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar4 = *(code **)(*piVar1 + 4);
          _guard_check_icall(puVar7);
          iVar6 = (*pcVar4)();
        }
      }
    }
    *unaff_FS_OFFSET = iStack_10;
    return iVar6;
  }
  func_0x00e701bd(uVar5);
  pcVar4 = (code *)swi(3);
  iVar6 = (*pcVar4)();
  return iVar6;
}



undefined4 * __fastcall FUN_0057d150(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec2ecb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar4 = (undefined4 *)func_0x008ab47d(0x38,uVar3);
  *puVar4 = std::_Func_impl_no_alloc<>::vftable;
  puVar4[0xb] = 0;
  uStack_8 = 1;
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    pcVar2 = *(code **)**(undefined4 **)(param_1 + 0x2c);
    _guard_check_icall(puVar4 + 2);
    uVar5 = (*pcVar2)();
    puVar4[0xb] = uVar5;
  }
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_1 + 0x34) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar4[0xc] = *(undefined4 *)(param_1 + 0x30);
  puVar4[0xd] = *(undefined4 *)(param_1 + 0x34);
  *unaff_FS_OFFSET = iStack_10;
  return puVar4;
}



TypeDescriptor * FUN_0057d260(void)

{
  return &`public:_void___thiscall_Map::setCentralPosition(class_Position_const&)'::__l2::<lambda_1>
          ::RTTI_Type_Descriptor;
}



void __fastcall FUN_0057d270(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  int *unaff_FS_OFFSET;
  uint auStack_4c [3];
  undefined8 uStack_40;
  int *piStack_38;
  char cStack_31;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec1856;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  uStack_14 = uVar5;
  FUN_00472ad0(&uStack_1c);
  uStack_8 = 0;
  if ((int *)uStack_1c == (int *)0x0) goto LAB_00573eb2;
  iVar3 = *(int *)(param_1 + 4);
  piStack_38 = (int *)((int *)uStack_1c)[6];
  uStack_40 = *(ulonglong *)((int *)uStack_1c + 4);
  if (((*(int *)(iVar3 + 0x1ac) == (int)uStack_40) &&
      (uStack_40._4_4_ = (int)(uStack_40 >> 0x20), *(int *)(iVar3 + 0x1b0) == uStack_40._4_4_)) &&
     (*(short *)(iVar3 + 0x1b4) == (short)piStack_38)) goto LAB_00573eb2;
  uStack_24 = 0;
  pcVar4 = *(code **)(*(int *)uStack_1c + 0x10);
  _guard_check_icall(uVar5);
  piVar6 = (int *)(*pcVar4)();
  if (piVar6[1] != 0) {
    LOCK();
    piVar1 = (int *)(piVar6[1] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar3 = *piVar6;
  piVar1 = (int *)piVar6[1];
  uStack_24 = *(undefined8 *)piVar6;
  if (iVar3 == 0) {
    bVar7 = false;
  }
  else {
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    uStack_40 = CONCAT44((int *)uStack_1c,(int)uStack_40);
    piStack_38 = uStack_1c._4_4_;
    bVar7 = true;
    for (piVar6 = *(int **)(iVar3 + 0x28); piVar6 != *(int **)(iVar3 + 0x2c); piVar6 = piVar6 + 2) {
      if ((int *)*piVar6 == (int *)uStack_1c) {
        cStack_31 = '\x01';
        goto LAB_00573d2c;
      }
    }
  }
  cStack_31 = '\0';
LAB_00573d2c:
  piVar6 = piStack_38;
  uStack_8 = 1;
  if ((bVar7) && (piStack_38 != (int *)0x0)) {
    LOCK();
    iVar3 = piStack_38[1] + -1;
    piStack_38[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar4 = *(code **)*piStack_38;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      piVar2 = piVar6 + 2;
      iVar3 = *piVar2 + -1;
      *piVar2 = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar4 = *(code **)(*piVar6 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  if (cStack_31 == '\0') {
    piStack_38 = (int *)((int *)uStack_1c)[6];
    uStack_40 = *(ulonglong *)((int *)uStack_1c + 4);
    iVar3 = *(int *)(param_1 + 4);
    uStack_30 = *(undefined8 *)(iVar3 + 0x1ac);
    uStack_28 = *(undefined4 *)(iVar3 + 0x1b4);
    if ((int)uStack_30 == (int)uStack_40) {
      uStack_30._4_4_ = (int)((ulonglong)uStack_30 >> 0x20);
      uStack_40._4_4_ = (int)(uStack_40 >> 0x20);
      if (uStack_30._4_4_ == uStack_40._4_4_) {
        if ((short)uStack_28 == (short)piStack_38) goto LAB_00573e6f;
      }
    }
    if (*(char *)((int)(int *)uStack_1c + 0x126) == '\0') {
      pcVar4 = *(code **)(*(int *)uStack_1c + 100);
      _guard_check_icall();
      (*pcVar4)();
    }
    FUN_005b9e30(&uStack_30);
    pcVar4 = *(code **)(*(int *)uStack_1c + 0x60);
    _guard_check_icall();
    (*pcVar4)();
    piStack_38 = (int *)0x0;
    auStack_4c[0] = 0;
    auStack_4c[1] = 0;
    auStack_4c[2] = 0;
    uStack_40 = 0;
    func_0x0046bc40("forced player position update",0x1d);
    uStack_8._0_1_ = 3;
    FUN_005ee340(0,auStack_4c);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < piStack_38) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],piStack_38);
    }
    uStack_40 = uStack_40 & 0xffffffff;
    piStack_38 = (int *)&DAT_0000000f;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
  }
LAB_00573e6f:
  uStack_8 = uStack_8 & 0xffffff00;
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
      iVar3 = piVar1[2] + -1;
      piVar1[2] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        pcVar4 = *(code **)(*piVar1 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
LAB_00573eb2:
  uStack_8 = 0xffffffff;
  piVar6 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar3 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar4 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(uVar5);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar6 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar4 = *(code **)(*piVar6 + 4);
        _guard_check_icall(uVar5);
        (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_0057d280(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



undefined4 * FUN_0057d9d0(undefined4 *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac47e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  func_0x0046bc40(&DAT_0113c2ec,1,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_0057da50(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  short extraout_DX;
  uint uVar15;
  int *unaff_FS_OFFSET;
  uint uStack_250;
  undefined1 auStack_244 [8];
  undefined1 auStack_23c [8];
  undefined1 auStack_234 [8];
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  undefined1 auStack_1b4 [4];
  uint uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  int *piStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  uint uStack_190;
  int *piStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  uint uStack_180;
  ushort uStack_17c;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  ushort uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  int *piStack_130;
  int *piStack_12c;
  int *piStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  undefined1 auStack_114 [12];
  uint uStack_108;
  uint uStack_104;
  int iStack_fc;
  int iStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  int *piStack_e4;
  int *piStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined1 auStack_cc [16];
  int iStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  uint uStack_8c;
  uint uStack_88;
  ushort uStack_84;
  undefined1 auStack_80 [12];
  int *piStack_74;
  int *piStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined1 auStack_4c [24];
  int *piStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec32b1;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_250 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_250;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_188 = param_1;
  uStack_124 = 0;
  iStack_14 = 0;
  uStack_2c = uStack_250;
  if (DAT_0145d902 == '\0') {
    func_0x00469d30("OTB isn\'t loaded yet to load a map.");
    iStack_14._0_1_ = 1;
    func_0x0047d860();
LAB_0057e92c:
    func_0x00469d30("Unable to load map \'%s\'");
    iStack_14._0_1_ = 3;
    func_0x00484eb0(param_1);
    iStack_14._0_1_ = 4;
    func_0x0047d860();
LAB_0057e95a:
    func_0x00469d30("Could not read file identifier");
    iStack_14._0_1_ = 5;
    func_0x0047d860();
LAB_0057e973:
    func_0x00469d30("Invalid file identifier detected: %s");
    iStack_14._0_1_ = 6;
    func_0x0057ffe0(&uStack_68);
    iStack_14._0_1_ = 7;
    func_0x0047d860();
LAB_0057e9a4:
    func_0x00469d30("could not read root property!");
    iStack_14._0_1_ = 9;
    func_0x0047d860();
LAB_0057e9bd:
    func_0x00469d30("Unknown OTBM version detected: %u.");
    iStack_14._0_1_ = 10;
    func_0x00485670(&uStack_160);
    iStack_14._0_1_ = 0xb;
    func_0x0047d860();
LAB_0057e9f1:
    piStack_128 = (int *)func_0x0057d990();
    func_0x00469d30(
                   "This map was saved with different OTB version. read %d what it\'s supposed to be: %d"
                   );
    iStack_14._0_1_ = 0xc;
    func_0x004a5c10(&uStack_1b0,&piStack_128);
    iStack_14 = CONCAT31(iStack_14._1_3_,0xd);
    func_0x0047d860();
  }
  else {
    uStack_94 = 0;
    puStack_24 = &stack0xfffffffc;
    puStack_20 = (undefined1 *)&uStack_250;
    uVar3 = FUN_00467460(0x76);
    func_0x005fcfb0(&uStack_94,param_1,uVar3);
    iStack_14._0_1_ = 2;
    if ((int)uStack_94 == 0) goto LAB_0057e92c;
    iVar7 = func_0x005e6260(&uStack_68,1,4);
    if (iVar7 < 4) goto LAB_0057e95a;
    if (uStack_68 != 0x4d42544f) {
      if ((uStack_68 == 0) ||
         (((((char)uStack_68 == '\0' && (uStack_68._1_1_ == '\0')) && (uStack_68._2_1_ == '\0')) &&
          (uStack_68._3_1_ == '\0')))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_0057db52;
      goto LAB_0057e973;
    }
LAB_0057db52:
    uStack_5c = 0;
    func_0x005e6c80(&uStack_5c);
    iStack_14._0_1_ = 8;
    cVar4 = func_0x005e14f0();
    if (cVar4 != '\0') goto LAB_0057e9a4;
    uStack_160 = func_0x005e15e0();
    if (3 < uStack_160) goto LAB_0057e9bd;
    uVar6 = func_0x005e1560();
    uStack_30 = CONCAT22(uStack_30._2_2_,uVar6);
    func_0x004a92c0(0x81,&uStack_30);
    uVar6 = func_0x005e1560();
    piStack_34 = (int *)CONCAT22(piStack_34._2_2_,uVar6);
    func_0x004a92c0(0x82,&piStack_34);
    uStack_1b0 = func_0x005e14f0();
    uStack_1b0 = uStack_1b0 & 0xff;
    if (DAT_0145d908 < uStack_1b0) goto LAB_0057e9f1;
    func_0x005e1470(3);
    piStack_130 = (int *)func_0x005e15e0();
    if (DAT_0145d904 < piStack_130) {
      piStack_12c = DAT_0145d904;
      func_0x00469d30("This map needs an updated OTB. read %d what it\'s supposed to be: %d or less"
                     );
      iStack_14._0_1_ = 0xe;
      uVar8 = func_0x004a5c10(&piStack_130,&piStack_12c);
      iStack_14._0_1_ = 0xf;
      FUN_005ee340(2,uVar8);
      iStack_14._0_1_ = 0xe;
      FUN_00469ba0();
      iStack_14._0_1_ = 8;
      FUN_00469ba0();
    }
    uStack_ac = 0;
    puVar9 = (undefined4 *)func_0x005e12f0(&piStack_74);
    iStack_14._0_1_ = 0x10;
    func_0x00468490(*puVar9);
    iStack_14 = CONCAT31(iStack_14._1_3_,0x12);
    FUN_00482c00();
    iVar7 = (int)uStack_ac;
    cVar4 = func_0x005e14f0();
    if (cVar4 == '\x02') {
      while (func_0x005e11e0(), *(uint *)(iVar7 + 0x1c) < *(uint *)(iVar7 + 0x10)) {
        uVar3 = func_0x005e14f0();
        uStack_30 = CONCAT13(uVar3,(undefined3)uStack_30);
        func_0x005e1670(auStack_80,0);
        iStack_14._0_1_ = 0x14;
        uVar15 = uStack_30 >> 0x18;
        if (uVar15 == 1) {
          func_0x004a55c0(1,auStack_80);
          iStack_14 = CONCAT31(iStack_14._1_3_,0x12);
          FUN_00469ba0();
        }
        else if (uVar15 == 0xb) {
          iVar10 = func_0x0057fef0(0x2f,0xb);
          uVar8 = func_0x00482f60(auStack_114,0,iVar10 + 1);
          iStack_14._0_1_ = 0x15;
          uVar8 = func_0x00471920(auStack_cc,uVar8,auStack_80);
          iStack_14._0_1_ = 0x16;
          func_0x004a55c0(0xb,uVar8);
          iStack_14._0_1_ = 0x15;
          FUN_00469ba0();
          iStack_14._0_1_ = 0x14;
          FUN_00469ba0();
          iStack_14 = CONCAT31(iStack_14._1_3_,0x12);
          FUN_00469ba0();
        }
        else {
          if (uVar15 != 0xd) goto LAB_0057ea50;
          iVar10 = func_0x0057fef0(0x2f,0xd);
          uVar8 = func_0x00482f60(auStack_1f0,0,iVar10 + 1);
          iStack_14._0_1_ = 0x17;
          uVar8 = func_0x00471920(auStack_4c,uVar8,auStack_80);
          iStack_14._0_1_ = 0x18;
          func_0x004a55c0(0xd,uVar8);
          iStack_14._0_1_ = 0x17;
          FUN_00469ba0();
          iStack_14._0_1_ = 0x14;
          FUN_00469ba0();
          iStack_14 = CONCAT31(iStack_14._1_3_,0x12);
          FUN_00469ba0();
        }
      }
      func_0x005e12f0(&piStack_74);
      iStack_14._0_1_ = 0x1b;
      piStack_18c = piStack_74;
      piStack_12c = piStack_70;
      while( true ) {
        while( true ) {
          while( true ) {
            piStack_128 = piStack_18c;
            if (piStack_18c == piStack_12c) {
              iStack_14._0_1_ = 0x12;
              FUN_00482c00();
              func_0x005e6090();
              iStack_14._0_1_ = 8;
              FUN_00468340();
              iStack_14._0_1_ = 2;
              FUN_00468340();
              iStack_14 = (uint)iStack_14._1_3_ << 8;
              FUN_00468340();
              iStack_14 = 0xffffffff;
              *unaff_FS_OFFSET = iStack_1c;
              FUN_008ab370();
              return;
            }
            bVar5 = func_0x005e14f0();
            if (bVar5 != 4) break;
            uStack_15c = 0xffff;
            uStack_158 = 0xffff;
            uStack_154 = 0xff;
            uStack_15c = func_0x005e1560();
            uStack_15c = uStack_15c & 0xffff;
            uStack_158 = func_0x005e1560();
            uStack_158 = uStack_158 & 0xffff;
            uStack_154 = func_0x005e14f0();
            uStack_154 = uStack_154 & 0xff;
            func_0x005e12f0(&piStack_e4);
            iStack_14._0_1_ = 0x1c;
            piStack_130 = piStack_e0;
            piVar13 = piStack_e4;
            while (piStack_19c = piVar13, piStack_34 = piVar13, piVar13 != piStack_130) {
              bVar5 = func_0x005e14f0();
              uStack_30 = CONCAT13(bVar5,(undefined3)uStack_30);
              if ((bVar5 != 5) && (bVar5 != 0xe)) goto LAB_0057ea8a;
              uStack_64 = 0;
              iStack_14._0_1_ = 0x1f;
              uVar15 = 0;
              uStack_120 = 0;
              psVar11 = (short *)func_0x005e1760(auStack_234);
              uStack_8c = (uint)(ushort)(*psVar11 + (short)uStack_15c);
              uStack_88 = (uint)(ushort)(psVar11[2] + (short)uStack_158);
              uStack_84 = uStack_154 & 0xff;
              if (uStack_30._3_1_ == '\x0e') {
                uVar8 = func_0x005e15e0();
                uStack_b4 = 0;
                uStack_1ac = uVar8;
                uVar12 = FUN_005729b0(&uStack_8c);
                func_0x00468490(uVar12);
                iStack_14._0_1_ = 0x20;
                uVar8 = FUN_004a41a0(auStack_1b4,uVar8);
                iStack_14._0_1_ = 0x21;
                piVar13 = (int *)func_0x0046ffa0(uVar8);
                iVar7 = *piVar13;
                iStack_14._0_1_ = 0x20;
                FUN_00468340();
                if (iVar7 == 0) {
                  uVar8 = func_0x004a5dc0();
                  iStack_14._0_1_ = 0x22;
                  func_0x0046ffa0(uVar8);
                  iStack_14._0_1_ = 0x20;
                  FUN_00468340();
                  FUN_004a40e0(&uStack_64);
                }
                FUN_004a3150(&uStack_b4);
                iStack_14._0_1_ = 0x1f;
                FUN_00468340();
                piVar13 = piStack_34;
              }
              while (iVar7 = *piVar13, func_0x005e11e0(),
                    *(uint *)(iVar7 + 0x1c) < *(uint *)(iVar7 + 0x10)) {
                cVar4 = func_0x005e14f0();
                piVar13 = piStack_34;
                uStack_30 = CONCAT13(cVar4,(undefined3)uStack_30);
                if (cVar4 == '\x03') {
                  uVar14 = func_0x005e15e0();
                  if ((uVar14 & 1) == 0) {
                    if ((uVar14 & 4) == 0) {
                      if ((uVar14 & 0x10) != 0) {
                        uVar15 = uVar15 | 0x10;
                        uStack_120 = uVar15;
                      }
                    }
                    else {
                      uVar15 = uVar15 | 4;
                      uStack_120 = uVar15;
                    }
                  }
                  else {
                    uVar15 = uVar15 | 1;
                    uStack_120 = uVar15;
                  }
                  if ((uVar14 & 8) != 0) {
                    uVar15 = uVar15 | 8;
                    uStack_120 = uVar15;
                  }
                  if ((uVar14 & 0x20) != 0) {
                    uVar15 = uVar15 | 0x20;
                    uStack_120 = uVar15;
                  }
                }
                else {
                  if (cVar4 != '\t') goto LAB_0057eac7;
                  uVar6 = func_0x005e1560();
                  puVar9 = (undefined4 *)FUN_004a7740(auStack_1d0,uVar6);
                  uStack_150 = *puVar9;
                  uStack_14c = puVar9[1];
                  *puVar9 = 0;
                  puVar9[1] = 0;
                  iStack_14._0_1_ = 0x24;
                  FUN_00571480(&uStack_150,&uStack_8c,0xffffffff);
                  iStack_14._0_1_ = 0x23;
                  FUN_00468340();
                  iStack_14._0_1_ = 0x1f;
                  FUN_00468340();
                }
              }
              func_0x005e12f0(&uStack_f0);
              iStack_14._0_1_ = 0x28;
              uStack_134 = uStack_ec;
              for (uVar15 = uStack_f0; uStack_1a0 = uVar15, uStack_30 = uVar15, uVar15 != uStack_134
                  ; uVar15 = uVar15 + 8) {
                cVar4 = func_0x005e14f0();
                if (cVar4 != '\x06') goto LAB_0057eb1a;
                uStack_54 = 0;
                uVar6 = func_0x005e1560();
                FUN_004a7740(&uStack_54,uVar6);
                iStack_14._0_1_ = 0x2a;
                func_0x004a7fd0(uVar15);
                piVar13 = (int *)uStack_54;
                cVar4 = func_0x0057d9a0();
                if (cVar4 != '\0') {
                  func_0x005e12f0(&iStack_fc);
                  iVar7 = iStack_f8;
                  iStack_14._0_1_ = 0x2b;
                  for (iVar10 = iStack_fc; iStack_1a8 = iVar10, iVar10 != iVar7; iVar10 = iVar10 + 8
                      ) {
                    cVar4 = func_0x005e14f0();
                    if (cVar4 != '\x06') goto LAB_0057eb33;
                    uStack_a4 = 0;
                    uVar6 = func_0x005e1560();
                    FUN_004a7740(&uStack_a4,uVar6);
                    iStack_14._0_1_ = 0x2d;
                    func_0x004a7fd0(iVar10);
                    FUN_004b3770(&uStack_a4);
                    iStack_14._0_1_ = 0x2b;
                    FUN_00468340();
                  }
                  iStack_14._0_1_ = 0x2a;
                  FUN_00482c00();
                  piVar13 = (int *)uStack_54;
                  uVar15 = uStack_30;
                }
                if ((int)uStack_64 != 0) {
                  pcVar1 = *(code **)(*piVar13 + 0x40);
                  _guard_check_icall();
                  iVar7 = (*pcVar1)();
                  if (((uint)(*(int *)(iVar7 + 0x1c) - *(int *)(iVar7 + 0x18) >> 2) < 0xe) ||
                     (*(int *)(*(int *)(iVar7 + 0x18) + 0x34) == 0)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) {
                    uStack_11c = func_0x00484f70();
                    iStack_14._0_1_ = 0x2e;
                    pcVar1 = *(code **)(*(int *)uStack_54 + 0xc);
                    _guard_check_icall();
                    uStack_1a4 = (*pcVar1)();
                    func_0x00469d30("Moveable item found in house: %d at pos %s - escaping...");
                    iStack_14._0_1_ = 0x2f;
                    uVar8 = func_0x005800a0(&uStack_1a4,uStack_11c);
                    iStack_14._0_1_ = 0x30;
                    FUN_005ee340(2,uVar8);
                    iStack_14._0_1_ = 0x2f;
                    FUN_00469ba0();
                    iStack_14._0_1_ = 0x2e;
                    FUN_00469ba0();
                    iStack_14._0_1_ = 0x2a;
                    FUN_00469ba0();
                    func_0x0057fe40();
                    uVar15 = uStack_30;
                  }
                }
                func_0x00468490(&uStack_54);
                iStack_14._0_1_ = 0x31;
                FUN_00571480(extraout_ECX,&uStack_8c,0xffffffff);
                iStack_14._0_1_ = 0x2a;
                FUN_00468340();
                iStack_14._0_1_ = 0x28;
                FUN_00468340();
              }
              iStack_14._0_1_ = 0x1f;
              FUN_00482c00();
              piVar13 = (int *)FUN_00572b50(&uStack_8c);
              iVar7 = *piVar13;
              if (iVar7 != 0) {
                if ((int)uStack_64 != 0) {
                  *(uint *)(iVar7 + 0x44) = *(uint *)(iVar7 + 0x44) | 0x40;
                }
                *(uint *)(*piVar13 + 0x44) = *(uint *)(*piVar13 + 0x44) | uStack_120;
              }
              iStack_14._0_1_ = 0x1c;
              FUN_00468340();
              piVar13 = piStack_34 + 2;
            }
            iStack_14._0_1_ = 0x1b;
            FUN_00482c00();
            piStack_18c = piStack_128 + 2;
          }
          if (bVar5 != 0xc) break;
          uStack_9c = 0;
          iStack_14._0_1_ = 0x32;
          func_0x005e12f0(&uStack_d8);
          iStack_14._0_1_ = 0x33;
          uStack_11c = uStack_d4;
          for (uVar15 = uStack_d8; uStack_194 = uVar15, uVar15 != uStack_11c; uVar15 = uVar15 + 8) {
            cVar4 = func_0x005e14f0();
            if (cVar4 != '\r') goto LAB_0057eb4c;
            uVar8 = func_0x005e15e0();
            uStack_198 = uVar8;
            func_0x005e1670(auStack_4c,0);
            iStack_14._0_1_ = 0x35;
            uStack_184 = 0xffff;
            uStack_180 = 0xffff;
            uStack_17c = 0xff;
            uStack_184 = func_0x005e1560();
            uStack_184 = uStack_184 & 0xffff;
            uStack_180 = func_0x005e1560();
            uStack_180 = uStack_180 & 0xffff;
            uStack_17c = func_0x005e14f0();
            uStack_17c = uStack_17c & 0xff;
            uVar8 = FUN_005caae0(uVar8);
            piVar13 = (int *)func_0x004683d0(uVar8);
            if (*piVar13 == 0) {
              uVar8 = func_0x00580160(auStack_4c,&uStack_184);
              iStack_14._0_1_ = 0x36;
              FUN_005ca9a0(uVar8);
              iStack_14._0_1_ = 0x35;
              FUN_00468340();
            }
            iStack_14._0_1_ = 0x33;
            FUN_00469ba0();
          }
          iStack_14._0_1_ = 0x32;
          FUN_00482c00();
          FUN_005cac90();
          iStack_14._0_1_ = 0x1b;
          FUN_00468340();
          piStack_18c = piStack_128 + 2;
        }
        if ((bVar5 != 0xf) || (uStack_160 < 2)) break;
        func_0x005e12f0(&uStack_108);
        iStack_14._0_1_ = 0x37;
        uStack_11c = uStack_104;
        for (uVar15 = uStack_108; uStack_190 = uVar15, uVar15 != uStack_11c; uVar15 = uVar15 + 8) {
          cVar4 = func_0x005e14f0();
          if (cVar4 != '\x10') goto LAB_0057eb6b;
          func_0x005e1670(auStack_cc,0);
          iStack_14._0_1_ = 0x39;
          uStack_140 = 0xffff;
          uStack_13c = 0xffff;
          uStack_138._0_2_ = 0xff;
          uVar14 = func_0x005e1560();
          uStack_140 = uVar14 & 0xffff;
          uStack_13c = func_0x005e1560();
          uStack_13c = uStack_13c & 0xffff;
          uVar6 = func_0x005e14f0();
          uStack_138 = CONCAT22(uStack_138._2_2_,uVar6) & 0xffff00ff;
          cVar4 = func_0x00471de0();
          if ((cVar4 != '\0') && (iStack_bc != 0)) {
            piStack_34 = (int *)(uStack_118 + 0x16c);
            iVar7 = func_0x0048ca40(auStack_23c,&uStack_140,
                                    ((uVar14 & 0xffff) * 0x2000 + uStack_13c) * 0x10 +
                                    (int)extraout_DX);
            iStack_1c0 = *(int *)(iVar7 + 4);
            if (iStack_1c0 == 0) {
              iStack_1c0 = piStack_34[1];
            }
            iStack_1bc = *(int *)(uStack_118 + 0x170);
            if (iStack_1c0 == iStack_1bc) {
              iStack_14._0_1_ = 0x3a;
              uStack_22c = uStack_140;
              uStack_228 = uStack_13c;
              uStack_224 = uStack_138;
              func_0x00469da0(auStack_cc);
              iStack_14._0_1_ = 0x3a;
              uStack_124 = uStack_124 | 1;
              func_0x00580650(auStack_244,&uStack_22c);
              uStack_124 = uStack_124 & 0xfffffffe;
              iStack_14._0_1_ = 0x39;
              func_0x0057ebd0();
            }
          }
          iStack_14._0_1_ = 0x37;
          FUN_00469ba0();
        }
        iStack_14._0_1_ = 0x1b;
        FUN_00482c00();
        piStack_18c = piStack_128 + 2;
      }
      goto LAB_0057eb8a;
    }
  }
  func_0x00469d30("Could not read root data node");
  iStack_14._0_1_ = 0x13;
  func_0x0047d860();
  uVar15 = extraout_ECX_00;
LAB_0057ea50:
  uStack_118 = uVar15;
  func_0x00469d30("Invalid attribute \'%d\'");
  iStack_14._0_1_ = 0x19;
  func_0x00485670(&uStack_118);
  iStack_14._0_1_ = 0x1a;
  bVar5 = func_0x0047d860();
LAB_0057ea8a:
  uStack_134 = (uint)bVar5;
  func_0x00469d30("invalid node tile type %d");
  iStack_14._0_1_ = 0x1d;
  func_0x00485670(&uStack_134);
  iStack_14._0_1_ = 0x1e;
  func_0x0047d860();
LAB_0057eac7:
  uVar8 = func_0x00484f70();
  iStack_14._0_1_ = 0x25;
  uStack_11c = uStack_30 >> 0x18;
  func_0x00469d30("invalid tile attribute %d at pos %s");
  iStack_14._0_1_ = 0x26;
  func_0x005800a0(&uStack_11c,uVar8);
  iStack_14._0_1_ = 0x27;
  func_0x0047d860();
LAB_0057eb1a:
  func_0x00469d30("invalid item node");
  iStack_14._0_1_ = 0x29;
  func_0x0047d860();
LAB_0057eb33:
  func_0x00469d30("invalid container item node");
  iStack_14._0_1_ = 0x2c;
  func_0x0047d860();
LAB_0057eb4c:
  func_0x00469d30("invalid town node.");
  iStack_14._0_1_ = 0x34;
  func_0x0047d860();
LAB_0057eb6b:
  func_0x00469d30("invalid waypoint node.");
  iStack_14._0_1_ = 0x38;
  bVar5 = func_0x0047d860();
LAB_0057eb8a:
  uStack_144 = (uint)bVar5;
  func_0x00469d30("Unknown map data node %d");
  iStack_14._0_1_ = 0x3c;
  func_0x00485670(&uStack_144);
  iStack_14 = CONCAT31(iStack_14._1_3_,0x3d);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * Catch_0057e82f(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x1a8) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x134) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  func_0x0046bc40("Failed to load \'%s\': %s",0x17);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0x178),unaff_EBP + -0x134);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (0xf < *(uint *)(unaff_EBP + -0x5c)) {
    func_0x0046b1f0(unaff_EBP + -0x70,*(undefined4 *)(unaff_EBP + -0x70),
                    *(uint *)(unaff_EBP + -0x5c));
  }
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x70) = 0;
  return &DAT_0057e8e9;
}



void __thiscall FUN_0057ec40(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  byte bVar11;
  int extraout_EDX;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int *unaff_FS_OFFSET;
  uint uStack_140;
  int iStack_11c;
  int *piStack_108;
  undefined1 auStack_100 [16];
  int iStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [16];
  int iStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [12];
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  uint uStack_84;
  int iStack_80;
  undefined8 uStack_7c;
  undefined4 *puStack_74;
  int *piStack_70;
  undefined1 auStack_6c [12];
  undefined8 uStack_60;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  char acStack_38 [4];
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec33f9;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_140 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_140;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  bVar4 = false;
  iStack_14 = 0;
  uStack_7c = 0;
  uStack_2c = uStack_140;
  func_0x005fd270(&uStack_7c,param_2);
  iStack_14._0_1_ = 1;
  if ((int)uStack_7c == 0) {
    func_0x00469d30("failed to open file \'%s\' for write");
    iStack_14._0_1_ = 2;
    func_0x00484eb0(param_2);
    iStack_14 = CONCAT31(iStack_14._1_3_,3);
    func_0x0047d860();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0xf;
  uStack_e8 = 0;
  iStack_14._0_1_ = 4;
  iVar7 = func_0x00469870(0x2f,0xffffffff);
  if (iVar7 == -1) {
    uVar8 = FUN_0057d9d0(auStack_6c);
    iStack_14._0_1_ = 5;
  }
  else {
    uVar8 = func_0x00469870(0x2f,0xffffffff);
    uVar8 = func_0x00482f60(auStack_6c,0,uVar8);
    iStack_14._0_1_ = 6;
  }
  func_0x00469bd0(uVar8);
  iStack_14._0_1_ = 4;
  FUN_00469ba0();
  puStack_74 = DAT_0145d908;
  puStack_3c = (undefined4 *)(2 - (uint)(DAT_0145d908 < &DAT_0000000a));
  FUN_004b5800(auStack_d0);
  iStack_14._0_1_ = 7;
  FUN_004b5860(auStack_100);
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0xf;
  uStack_b8 = 0;
  iStack_14._0_1_ = 9;
  iVar7 = func_0x0057fef0(0x2e,extraout_ECX);
  uVar8 = extraout_ECX_00;
  if (iVar7 != -1) {
    func_0x00469d30(".otbm");
    iStack_14 = CONCAT31(iStack_14._1_3_,10);
    bVar4 = true;
    cVar6 = func_0x0083d4b0(param_2);
    acStack_38[0] = '\x01';
    uVar8 = extraout_ECX_01;
    if (cVar6 != '\0') goto LAB_0057ee17;
  }
  acStack_38[0] = '\0';
LAB_0057ee17:
  iStack_14 = 9;
  if (bVar4) {
    FUN_00469ba0();
    uVar8 = extraout_ECX_02;
  }
  if (acStack_38[0] != '\0') {
    uVar8 = func_0x00482f60(auStack_6c,0,iVar7);
    iStack_14._0_1_ = 0xb;
    func_0x00469bd0(uVar8);
    iStack_14 = CONCAT31(iStack_14._1_3_,9);
    FUN_00469ba0();
    uVar8 = extraout_ECX_03;
  }
  if (iStack_c0 == 0) {
    uVar8 = func_0x0057ff40(auStack_6c,&uStack_b8,"-houses.xml");
    iStack_14._0_1_ = 0xc;
    func_0x00469bd0(uVar8);
    iStack_14 = CONCAT31(iStack_14._1_3_,9);
    FUN_00469ba0();
    uVar8 = extraout_ECX_04;
  }
  if (iStack_f0 == 0) {
    uVar8 = func_0x0057ff40(auStack_6c,&uStack_b8,"-spawns.xml");
    iStack_14._0_1_ = 0xd;
    func_0x00469bd0(uVar8);
    iStack_14 = CONCAT31(iStack_14._1_3_,9);
    FUN_00469ba0();
    uVar8 = extraout_ECX_05;
  }
  iVar7 = func_0x0057fef0(0x2f,uVar8);
  uVar8 = extraout_ECX_06;
  if (iVar7 != -1) {
    uVar8 = func_0x00482f60(auStack_6c,iVar7 + 1,0xffffffff);
    iStack_14._0_1_ = 0xe;
    func_0x00469bd0(uVar8);
    iStack_14 = CONCAT31(iStack_14._1_3_,9);
    FUN_00469ba0();
    uVar8 = extraout_ECX_07;
  }
  iVar7 = func_0x0057fef0(0x2f,uVar8);
  if (iVar7 != -1) {
    uVar8 = func_0x00482f60(auStack_6c,iVar7 + 1,0xffffffff);
    iStack_14._0_1_ = 0xf;
    func_0x00469bd0(uVar8);
    iStack_14 = CONCAT31(iStack_14._1_3_,9);
    FUN_00469ba0();
  }
  func_0x005e7090(0);
  uStack_34 = 0;
  func_0x005802a0();
  iStack_14._0_1_ = 0x10;
  func_0x005e1860(puStack_3c);
  FUN_004b58c0((int)&uStack_94 + 4);
  func_0x005e1830(uStack_94._4_4_);
  func_0x005e1830(uStack_8c);
  func_0x005e1860(DAT_0145d908);
  func_0x005e1860(DAT_0145d904);
  func_0x005e19b0(2);
  acStack_38[0] = '\x01';
  func_0x005e19e0(acStack_38,1);
  uVar8 = func_0x004a54d0(auStack_6c,1);
  iStack_14._0_1_ = 0x11;
  func_0x005e18a0(uVar8);
  iStack_14 = CONCAT31(iStack_14._1_3_,0x10);
  FUN_00469ba0();
  auStack_40[0] = 0xb;
  func_0x005e19e0(auStack_40,1);
  func_0x005e18a0(auStack_100);
  auStack_44[0] = 0xd;
  func_0x005e19e0(auStack_44,1);
  func_0x005e18a0(auStack_d0);
  puVar12 = (undefined4 *)0xffffffff;
  puStack_3c = (undefined4 *)0xffffffff;
  iStack_11c = -1;
  bVar4 = true;
  bVar10 = 0;
  do {
    if (0xf < bVar10) {
      if (!bVar4) {
        func_0x005e6f10(0xff);
      }
      func_0x005e19b0(0xc);
      FUN_004b53b0(&puStack_88);
      puVar14 = puStack_88;
      iStack_14._0_1_ = 0x14;
      puVar12 = (undefined4 *)*puStack_88;
      piStack_70 = puStack_88;
      for (; puStack_3c = puVar12, puVar12 != puVar14; puVar12 = (undefined4 *)*puVar12) {
        func_0x005e19b0(0xd);
        func_0x005e1860(*(undefined4 *)(puVar12[2] + 0x10));
        piStack_70 = (undefined4 *)uStack_34;
        uVar8 = FUN_004b5480(auStack_a0);
        iStack_14._0_1_ = 0x15;
        func_0x005e18a0(uVar8);
        iStack_14._0_1_ = 0x14;
        FUN_00469ba0();
        uVar2 = *(undefined8 *)(puVar12[2] + 0x2c);
        uStack_60._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
        uVar8 = uStack_60._4_4_;
        uStack_60._0_4_ = (int)uVar2;
        uVar5 = (int)uStack_60;
        uStack_60 = uVar2;
        func_0x005e1940(uVar5,uVar8,*(undefined4 *)(puVar12[2] + 0x34));
        func_0x005e6f10(0xff);
      }
      iStack_14 = CONCAT31(iStack_14._1_3_,0x10);
      func_0x004a5130();
      func_0x005e6f10(0xff);
      if ((undefined4 *)0x9 < puStack_74) {
        func_0x005e19b0(0xf);
        puVar12 = *(undefined4 **)(param_1 + 0x170);
        puStack_74 = puVar12;
        for (puVar14 = (undefined4 *)*puVar12; puStack_3c = puVar14, puVar14 != puVar12;
            puVar14 = (undefined4 *)*puVar14) {
          func_0x005e19b0(0x10);
          func_0x005e18a0(puVar14 + 5);
          uVar2 = *(undefined8 *)(puVar14 + 2);
          uStack_94._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
          uVar8 = uStack_94._4_4_;
          uStack_94._0_4_ = (undefined4)uVar2;
          uVar5 = (undefined4)uStack_94;
          uStack_94 = uVar2;
          func_0x005e1940(uVar5,uVar8,puVar14[4]);
          func_0x005e6f10(0xff);
        }
        func_0x005e6f10(0xff);
      }
      func_0x005e6f10(0xff);
      func_0x005e6f10(0xff);
      func_0x005e6150();
      func_0x005e6090();
      iStack_14._0_1_ = 9;
      FUN_00468340();
      iStack_14._0_1_ = 8;
      FUN_00469ba0();
      iStack_14._0_1_ = 7;
      FUN_00469ba0();
      iStack_14._0_1_ = 4;
      FUN_00469ba0();
      iStack_14._0_1_ = 1;
      FUN_00469ba0();
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      FUN_00468340();
      iStack_14 = 0xffffffff;
      *unaff_FS_OFFSET = iStack_1c;
      FUN_008ab370();
      return;
    }
    iStack_80 = **(int **)(param_1 + (uint)bVar10 * 8);
LAB_0057f0b0:
    if (*(char *)(iStack_80 + 0xd) == '\0') {
      piStack_108 = (int *)(iStack_80 + 0x14);
      piStack_70 = (int *)(iStack_80 + 0x2014);
LAB_0057f0d0:
      do {
        if (piStack_108 == piStack_70) goto LAB_0057f371;
        iVar7 = *piStack_108;
        if ((iVar7 != 0) && (*(int *)(iVar7 + 0x2c) != *(int *)(iVar7 + 0x28))) {
          puVar1 = (uint *)(iVar7 + 0x34);
          cVar6 = func_0x00471de0();
          if (cVar6 == '\0') {
            piStack_108 = piStack_108 + 2;
            goto LAB_0057f0d0;
          }
          if (((((int)*puVar1 < extraout_EDX) || (extraout_EDX + 0x100 <= (int)*puVar1)) ||
              (*(int *)(iVar7 + 0x38) < (int)puVar12)) ||
             (((int)((int)puVar12 + 0x100U) <= *(int *)(iVar7 + 0x38) ||
              (*(short *)(iVar7 + 0x3c) != iStack_11c)))) {
            if (!bVar4) {
              func_0x005e6f10(0xff);
            }
            bVar4 = false;
            func_0x005e19b0(4);
            puStack_3c = (undefined4 *)(*(uint *)(iVar7 + 0x38) & 0xff00);
            iStack_11c = (int)*(short *)(iVar7 + 0x3c);
            func_0x005e1940(*puVar1 & 0xff00,puStack_3c,iStack_11c);
          }
          uVar8 = FUN_004b3ce0();
          uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),-((char)uVar8 != '\0')) & 0xffffff09;
          func_0x005e19b0(CONCAT31((int3)(uVar9 >> 8),(char)uVar9 + '\x05'));
          uStack_84 = *(uint *)(iVar7 + 0x38) & 0xff;
          puStack_88 = (undefined4 *)(*puVar1 & 0xff);
          auStack_48[0] = (undefined1)*puVar1;
          func_0x005e19e0(auStack_48,1);
          auStack_4c[0] = (undefined1)uStack_84;
          func_0x005e19e0(auStack_4c,1);
          iVar7 = *piStack_108;
          cVar6 = FUN_004b3ce0();
          if (cVar6 != '\0') {
            func_0x005e1860(*(undefined4 *)(iVar7 + 0x48));
          }
          if (*(int *)(*piStack_108 + 0x44) != 0) {
            auStack_50[0] = 3;
            func_0x005e19e0(auStack_50,1);
            func_0x005e1860(*(undefined4 *)(*piStack_108 + 0x44));
          }
          FUN_005c6d50(&uStack_60);
          iStack_14._0_1_ = 0x12;
          FUN_005c7150((int)&uStack_94 + 4);
          iStack_14 = CONCAT31(iStack_14._1_3_,0x13);
          iVar7 = uStack_94._4_4_;
          if (uStack_94._4_4_ != 0) {
            cVar6 = func_0x0057d9a0();
            if (cVar6 == '\0') {
              cVar6 = func_0x004a71e0();
              if (cVar6 == '\0') {
                for (bVar11 = 0; bVar11 < *(byte *)(iVar7 + 0x3a); bVar11 = bVar11 + 1) {
                  if (*(char *)(*(int *)(iVar7 + 0x36) + (uint)bVar11 * 6) == '\x0e')
                  goto LAB_0057f2e7;
                }
                for (bVar11 = 0; bVar11 < *(byte *)(iVar7 + 0x3a); bVar11 = bVar11 + 1) {
                  if (*(char *)(*(int *)(iVar7 + 0x36) + (uint)bVar11 * 6) == '\b')
                  goto LAB_0057f2e7;
                }
                auStack_54[0] = 9;
                func_0x005e19e0(auStack_54,1);
                func_0x005e1830(*(undefined2 *)(uStack_94._4_4_ + 0x32));
                goto LAB_0057f2f2;
              }
            }
LAB_0057f2e7:
            func_0x004a8320(&uStack_34);
          }
LAB_0057f2f2:
          iVar7 = uStack_60._4_4_;
          for (iVar13 = (int)uStack_60; iVar13 != iVar7; iVar13 = iVar13 + 8) {
            cVar6 = FUN_004a8930();
            if (cVar6 == '\0') {
              func_0x004a8320(&uStack_34);
            }
          }
          func_0x005e6f10(0xff);
          iStack_14._0_1_ = 0x12;
          FUN_00468340();
          iStack_14 = CONCAT31(iStack_14._1_3_,0x10);
          FUN_00482c00();
          puVar12 = puStack_3c;
        }
        piStack_108 = piStack_108 + 2;
      } while( true );
    }
    bVar10 = bVar10 + 1;
  } while( true );
LAB_0057f371:
  func_0x00499be0();
  goto LAB_0057f0b0;
}



undefined * Catch_0057f5ae(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x118) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -100) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  func_0x0046bc40("Failed to save \'%s\': %s",0x17);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uVar2 = func_0x004852c0(*(undefined4 *)(unaff_EBP + -0x110),unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (0xf < *(uint *)(unaff_EBP + -0x48)) {
    func_0x0046b1f0(unaff_EBP + -0x5c,*(undefined4 *)(unaff_EBP + -0x5c),
                    *(uint *)(unaff_EBP + -0x48));
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x5c) = 0;
  return &DAT_0057f662;
}



void FUN_0057f6c0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_90;
  int iStack_5c;
  undefined1 auStack_54 [12];
  uint uStack_48;
  uint uStack_44;
  ushort uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec347d;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_90 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_90;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_2c = uStack_90;
  uVar2 = FUN_00467460(0x76);
  func_0x005fcfb0(&uStack_34,param_1,uVar2);
  iStack_14._0_1_ = 1;
  if ((int)uStack_34 == 0) {
    func_0x00469d30("unable to open file");
    iStack_14._0_1_ = 2;
    func_0x0047d860();
  }
  else {
    iVar7 = func_0x005e6800();
    if (iVar7 == 0x4d43544f) {
      uVar4 = func_0x005e66e0();
      sVar5 = func_0x005e66e0();
      func_0x005e6800();
      if (sVar5 == 1) {
        func_0x005e6950(auStack_54);
        FUN_00469ba0();
        iVar7 = func_0x005e6800();
        func_0x005e66e0();
        func_0x005e6950(auStack_54);
        FUN_00469ba0();
        if (iVar7 != DAT_0145d90c) {
          func_0x00469d30("otcm map loaded was created with a different dat signature");
          iStack_14._0_1_ = 4;
          FUN_005ee340(2,auStack_54);
          iStack_14._0_1_ = 1;
          FUN_00469ba0();
        }
        func_0x005e64e0(uVar4);
        while( true ) {
          uStack_48 = 0xffff;
          uStack_44 = 0xffff;
          uStack_40 = 0xff;
          uStack_48 = func_0x005e66e0();
          uStack_48 = uStack_48 & 0xffff;
          uStack_44 = func_0x005e66e0();
          uStack_44 = uStack_44 & 0xffff;
          uStack_40 = func_0x005e65e0();
          uStack_40 = uStack_40 & 0xff;
          cVar3 = func_0x00471de0();
          if (cVar3 == '\0') break;
          FUN_00572810(&uStack_48);
          iStack_5c = 0;
          while( true ) {
            sVar5 = func_0x005e66e0();
            if (sVar5 == -1) break;
            uVar6 = func_0x005e65e0();
            uStack_3c = 0;
            FUN_004a76b0(&uStack_3c,sVar5,1);
            iStack_14._0_1_ = 6;
            *(ushort *)((int)uStack_3c + 0x34) = uVar6 & 0xff;
            cVar3 = func_0x004a7fa0();
            if (cVar3 != '\0') {
              func_0x00468490(&uStack_3c);
              iStack_14._0_1_ = 7;
              FUN_005c6120(extraout_ECX,iStack_5c);
              iStack_14._0_1_ = 6;
              FUN_00468340();
              iStack_5c = iStack_5c + 1;
            }
            iStack_14._0_1_ = 1;
            FUN_00468340();
          }
          func_0x00570d80(&uStack_48,0);
        }
        func_0x005e6090();
        iStack_14 = (uint)iStack_14._1_3_ << 8;
        FUN_00468340();
        *unaff_FS_OFFSET = iStack_1c;
        FUN_008ab370();
        return;
      }
      goto LAB_0057fa20;
    }
  }
  func_0x00469d30("invalid otcm file");
  iStack_14._0_1_ = 3;
  func_0x0047d860();
LAB_0057fa20:
  func_0x00469d30("otcm version not supported");
  iStack_14 = CONCAT31(iStack_14._1_3_,5);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * Catch_0057f91d(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x5c) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x48) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  func_0x0046bc40("failed to load OTCM map: %s",0x1b);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uVar2 = func_0x00485670(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (0xf < *(uint *)(unaff_EBP + -0x30)) {
    func_0x0046b1f0(unaff_EBP + -0x44,*(undefined4 *)(unaff_EBP + -0x44),
                    *(uint *)(unaff_EBP + -0x30));
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x44) = 0;
  return &DAT_0057f9c2;
}



void __thiscall FUN_0057fa40(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  uint uStack_a0;
  undefined1 auStack_7c [12];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_64;
  undefined4 *puStack_60;
  byte bStack_59;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined2 uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec34ed;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_a0 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_a0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  iStack_64 = param_1;
  uStack_2c = uStack_a0;
  uStack_40 = FUN_0083f570();
  uStack_34 = 0;
  func_0x005fd270(&uStack_34,param_2);
  uStack_14._0_1_ = 1;
  func_0x005e7090(0x4d43544f);
  func_0x005e6fa0(0);
  func_0x005e6fa0(1);
  func_0x005e7090(0);
  func_0x00469d30("OTCM 1.0");
  uStack_14._0_1_ = 2;
  func_0x005e7190(auStack_7c);
  uStack_14._0_1_ = 1;
  FUN_00469ba0();
  func_0x005e7090(DAT_0145d90c);
  func_0x005e6fa0((undefined2)DAT_0145d0fc);
  uVar7 = FUN_004b5040(auStack_7c);
  uStack_14._0_1_ = 3;
  func_0x005e7190(uVar7);
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  FUN_00469ba0();
  uVar7 = func_0x005e65c0();
  func_0x005e64e0(4);
  func_0x005e6fa0(uVar7);
  func_0x005e64e0(uVar7);
  for (bStack_59 = 0; bStack_59 < 0x10; bStack_59 = bStack_59 + 1) {
    iStack_38 = **(int **)(param_1 + (uint)bStack_59 * 8);
    while (*(char *)(iStack_38 + 0xd) == '\0') {
      piVar1 = (int *)(iStack_38 + 0x2014);
      for (piVar8 = (int *)(iStack_38 + 0x14); piVar8 != piVar1; piVar8 = piVar8 + 2) {
        iVar2 = *piVar8;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2c) != *(int *)(iVar2 + 0x28))) {
          uStack_70 = *(undefined4 *)(iVar2 + 0x34);
          uStack_6c = *(undefined4 *)(iVar2 + 0x38);
          uVar7 = *(undefined4 *)(iVar2 + 0x3c);
          func_0x005e6fa0(uStack_70);
          func_0x005e6fa0(uStack_6c);
          func_0x005e6f10(uVar7);
          FUN_004b39e0(&puStack_4c);
          puVar4 = puStack_48;
          uStack_14._0_1_ = 4;
          for (puStack_60 = puStack_4c; puStack_60 != puVar4; puStack_60 = puStack_60 + 2) {
            pcVar3 = *(code **)(*(int *)*puStack_60 + 0x14);
            _guard_check_icall();
            cVar5 = (*pcVar3)();
            if (cVar5 != '\0') {
              uStack_40 = 0;
              func_0x0046b930(&uStack_40);
              uStack_14._0_1_ = 5;
              pcVar3 = *(code **)(*(int *)uStack_40 + 0xc);
              _guard_check_icall();
              uVar6 = (*pcVar3)();
              func_0x005e6fa0(uVar6);
              func_0x005e6f10(*(undefined2 *)((int)(int *)uStack_40 + 0x34));
              uStack_14._0_1_ = 4;
              FUN_00468340();
            }
          }
          uStack_14 = CONCAT31(uStack_14._1_3_,1);
          FUN_00482c00();
          func_0x005e6fa0(0xffff);
        }
      }
      func_0x00499be0();
    }
    param_1 = iStack_64;
  }
  puStack_4c = (undefined4 *)0xffff;
  puStack_48 = (undefined4 *)0xffff;
  uStack_44 = 0xff;
  func_0x005e6fa0(0xffff);
  func_0x005e6fa0(0xffff);
  func_0x005e6f10(0xff);
  func_0x005e6150();
  func_0x005e6090();
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_00468340();
  uStack_14 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined * Catch_0057fd60(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x84) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  func_0x0046bc40("failed to save OTCM map: %s",0x1b);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uVar2 = func_0x00485670(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (0xf < *(uint *)(unaff_EBP + -0x58)) {
    func_0x0046b1f0(unaff_EBP + -0x6c,*(undefined4 *)(unaff_EBP + -0x6c),
                    *(uint *)(unaff_EBP + -0x58));
  }
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(undefined4 *)(unaff_EBP + -0x58) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x6c) = 0;
  return &DAT_0057fe08;
}



int * __fastcall FUN_005804a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec36a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  piVar3 = *(int **)(param_1 + 0x18);
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
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      piVar6 = (int *)*piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(uVar5);
        piVar6 = (int *)(*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
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
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



undefined4 * __thiscall FUN_00580550(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



undefined4 __thiscall FUN_00580bb0(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  return param_1;
}



undefined4 __thiscall FUN_00580f30(undefined4 param_1,byte param_2)

{
  func_0x00580f60();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x74);
  }
  return param_1;
}



undefined4 __thiscall FUN_00581350(undefined4 param_1,byte param_2)

{
  func_0x00581380();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x228);
  }
  return param_1;
}



void __fastcall FUN_00584580(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    iVar1 = param_1[1];
    piVar2 = param_1;
    for (; iVar3 != iVar1; iVar3 = iVar3 + 8) {
      func_0x0047aa40(piVar2);
      piVar2 = extraout_ECX;
    }
    func_0x0046e710(*param_1,param_1[2] - *param_1 >> 3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



undefined4 * __thiscall FUN_00584ad0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x78);
  }
  return param_1;
}



char * FUN_00585af0(void)

{
  return "generic";
}



undefined4 * FUN_00585b00(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eabc2e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar3 = (char *)func_0x00e70786(param_2,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  func_0x0046bc40(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00585b90(undefined4 *param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec4086;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_1c = 0;
  iStack_18 = func_0x00e732c2(param_2,&iStack_1c,uStack_14);
  uStack_8 = 1;
  if ((iStack_1c == 0) || (iStack_18 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0046bc40("unknown error",0xd);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0046bc40(iStack_1c,iStack_18);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00e73310(iStack_1c);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int * FUN_00585c70(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eaceb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    iVar2 = func_0x00e707ab(param_2,uVar1);
    if (iVar2 == 0) {
      *param_1 = param_2;
      param_1[1] = (int)&PTR_vftable_012bc290;
      goto LAB_00585cc3;
    }
    *param_1 = iVar2;
  }
  param_1[1] = (int)&PTR_vftable_012bc288;
LAB_00585cc3:
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int * __fastcall FUN_005862f0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x44);
  if (0xf < *(uint *)(param_1 + 0x58)) {
    piVar1 = (int *)*piVar1;
  }
  return piVar1;
}



undefined4 * __thiscall FUN_005864e0(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ec4396;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  puVar1 = param_1 + 0x11;
  if (0xf < (uint)param_1[0x16]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x16],uVar2);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  puVar1 = param_1 + 0xb;
  iStack_8._0_1_ = 1;
  if (7 < (uint)param_1[0x10]) {
    func_0x005895e0(puVar1,*puVar1,param_1[0x10]);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 7;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 5;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (7 < (uint)param_1[10]) {
    func_0x005895e0(puVar1,*puVar1,param_1[10]);
  }
  param_1[9] = 0;
  param_1[10] = 7;
  *(undefined2 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_005865f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ec4396;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 2;
  puVar1 = param_1 + 0x11;
  if (0xf < (uint)param_1[0x16]) {
    func_0x0046b1f0(puVar1,*puVar1,param_1[0x16],uVar2);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0xf;
  *(undefined1 *)puVar1 = 0;
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  puVar1 = param_1 + 0xb;
  iStack_8._0_1_ = 1;
  if (7 < (uint)param_1[0x10]) {
    func_0x005895e0(puVar1,*puVar1,param_1[0x10]);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 7;
  *(undefined2 *)puVar1 = 0;
  puVar1 = param_1 + 5;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (7 < (uint)param_1[10]) {
    func_0x005895e0(puVar1,*puVar1,param_1[10]);
  }
  param_1[9] = 0;
  param_1[10] = 7;
  *(undefined2 *)puVar1 = 0;
  iStack_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_005866e0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec43fe;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  FUN_00463b50(param_2);
  uStack_8 = 0;
  *param_1 = std::filesystem::filesystem_error::vftable;
  func_0x00589010(param_2 + 0x14,uVar1);
  uStack_8._0_1_ = 2;
  func_0x00589010(param_2 + 0x2c);
  uStack_8 = CONCAT31(uStack_8._1_3_,4);
  func_0x00469da0(param_2 + 0x44);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00586d00(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac78e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00585e70(param_1,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00586d60(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec453d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00586db0(uVar1,param_1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_00587130(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec45ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar3 = func_0x00e7307f(param_1 + 0x200,uVar2);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x22c);
    if (iVar3 != 0x7fffffff) {
      uStack_8 = 0;
      piVar4 = (int *)(param_1 + 4);
      iVar3 = 0x10;
      do {
        if (piVar4[1] != 0) {
          if ((uint)piVar4[1] < (uint)piVar4[6] >> 3) {
            func_0x00589200(*(undefined4 *)*piVar4,(undefined4 *)*piVar4);
          }
          else {
            func_0x00589d30();
            *(int *)*piVar4 = *piVar4;
            *(int *)(*piVar4 + 4) = *piVar4;
            piVar4[1] = 0;
            iStack_14 = *piVar4;
            func_0x0046c050(&iStack_14);
          }
        }
        piVar4 = piVar4 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uStack_8 = 0xffffffff;
      func_0x00e730b2(param_1 + 0x200);
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  else {
    iVar3 = func_0x00e7304a(5);
  }
  *(int *)(param_1 + 0x22c) = iVar3 + -1;
  func_0x00e7304a(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00587d10(undefined4 param_1,short *param_2,float param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  float fVar9;
  char *pcStack_158;
  undefined4 uStack_154;
  char *pcStack_150;
  undefined4 uStack_14c;
  char *pcStack_148;
  uint uStack_140;
  int iStack_12c;
  int iStack_128;
  uint uStack_124;
  uint uStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  uint uStack_104;
  uint uStack_100;
  ushort uStack_fc;
  int iStack_f8;
  int iStack_f4;
  uint *puStack_ec;
  undefined1 *puStack_e8;
  int iStack_e4;
  undefined1 *puStack_e0;
  int iStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  byte bStack_ba;
  byte bStack_b9;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [112];
  undefined1 auStack_40 [4];
  uint auStack_3c [4];
  uint auStack_2c [2];
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec47a4;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_140 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_140;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (param_3 <= 0.01) {
    param_3 = 1.0;
  }
  uStack_14 = 0;
  uStack_b8 = 0;
  puStack_e0 = (undefined1 *)&pcStack_158;
  auStack_2c[0] = uStack_140;
  func_0x00469da0(param_1);
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x00620af0();
  uStack_14._0_1_ = 2;
  pcStack_148 = "#3300cc";
  uStack_14c = 0x587dc7;
  uStack_14c = func_0x00469d30();
  uStack_14._0_1_ = 3;
  pcStack_150 = (char *)0x587dd7;
  func_0x0086d6e0();
  pcStack_150 = (char *)0x587de2;
  bStack_ba = func_0x00586960();
  uStack_14._0_1_ = 2;
  pcStack_150 = (char *)0x587df7;
  FUN_00469ba0();
  pcStack_150 = "#ffff00";
  uStack_154 = 0x587e07;
  uStack_154 = func_0x00469d30();
  uStack_14._0_1_ = 4;
  pcStack_158 = (char *)0x587e14;
  func_0x0086d6e0();
  uStack_14._0_1_ = 2;
  pcStack_158 = (char *)0x587e23;
  FUN_00469ba0();
  pcStack_158 = "#000000";
  uVar4 = func_0x00469d30();
  uStack_14._0_1_ = 5;
  func_0x0086d6e0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uVar4 = func_0x00469d30("#006600");
  uStack_14._0_1_ = 6;
  func_0x0086d6e0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uVar4 = func_0x00469d30("#ff3300");
  uStack_14._0_1_ = 7;
  func_0x0086d6e0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uVar4 = func_0x00469d30("#666666");
  uStack_14._0_1_ = 8;
  func_0x0086d6e0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uVar4 = func_0x00469d30("#ff6600");
  uStack_14._0_1_ = 9;
  func_0x0086d6e0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uVar4 = func_0x00469d30("#00ff00");
  uStack_14._0_1_ = 10;
  func_0x0086d6e0(uVar4);
  uStack_14._0_1_ = 2;
  FUN_00469ba0();
  uVar4 = func_0x00469d30("#ccffff");
  uStack_14._0_1_ = 0xb;
  func_0x0086d6e0(uVar4);
  uStack_14 = CONCAT31(uStack_14._1_3_,2);
  FUN_00469ba0();
  iStack_f8 = 0;
  iVar8 = (int)uStack_b8;
  do {
    iStack_dc = iStack_f8;
    if (*(int *)(iVar8 + 0x18) <= iStack_f8) {
      uStack_14 = uStack_14 & 0xffffff00;
      FUN_00468340();
      *unaff_FS_OFFSET = iStack_1c;
      FUN_008ab370();
      return;
    }
    for (iVar7 = 0; iStack_f4 = iVar7, iStack_e4 = iVar7, iVar7 < *(int *)(iVar8 + 0x14);
        iVar7 = iVar7 + 1) {
      func_0x005868f0(*(undefined4 *)
                       ((*(int *)(iVar8 + 0x14) * iStack_dc + iVar7) * *(int *)(iVar8 + 0x1c) +
                       *(int *)(iVar8 + 8)));
      fStack_cc = fStack_114 * param_3;
      fStack_c8 = fStack_110 * param_3;
      fStack_c4 = fStack_10c * param_3;
      fStack_c0 = fStack_108 * param_3;
      fVar9 = fStack_108;
      bStack_b9 = func_0x00586960();
      uVar6 = 0;
      uStack_d8 = 0;
      if ((bStack_b9 == bStack_ba) || (uVar2 = uStack_d8, (char)(int)(fVar9 * 255.0) == '\0')) {
        uVar6 = 4;
        uStack_d8 = 4;
        bStack_b9 = 0xff;
        puStack_e8 = auStack_b0;
        while ((uVar2 = uStack_d8, puStack_e8 != auStack_40 &&
               (cVar3 = func_0x00466c00(&fStack_114), uVar6 = extraout_EDX, uVar2 = extraout_EDX,
               cVar3 == '\0'))) {
          puStack_e8 = (undefined1 *)(extraout_ECX + 0x10);
        }
      }
      uStack_d8 = uVar2;
      if (uVar6 != 0) {
        puStack_ec = auStack_3c;
        while (puStack_ec != auStack_2c) {
          cVar3 = func_0x00466c00(&fStack_114);
          if (cVar3 != '\0') {
            uStack_d8 = extraout_EDX_00 | 2;
            break;
          }
          puStack_ec = (uint *)(extraout_ECX_00 + 0x10);
        }
      }
      if (bStack_b9 != 0xff) {
        uStack_104 = (uint)(ushort)(*param_2 + (short)iVar7);
        uStack_100 = (uint)(ushort)(param_2[2] + (short)iStack_dc);
        uStack_fc = (ushort)*(byte *)(param_2 + 4);
        puStack_e0 = (undefined1 *)func_0x00586ac0(&uStack_104);
        uVar2 = uStack_100;
        uVar6 = uStack_104;
        uStack_124 = uStack_104;
        uStack_120 = uStack_100;
        func_0x00586cc0(&iStack_12c,&uStack_124);
        puVar1 = puStack_e0;
        pbVar5 = (byte *)func_0x005869e0(uVar6 - iStack_12c,uVar2 - iStack_128);
        if ((*pbVar5 & 1) == 0) {
          pbVar5[1] = bStack_b9;
          *pbVar5 = (byte)uStack_d8;
          puVar1[0x3008] = 1;
        }
        iVar7 = iStack_e4;
        iVar8 = (int)uStack_b8;
      }
    }
    iStack_f8 = iStack_dc + 1;
  } while( true );
}



undefined * Catch_005881bf(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x120) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0xd0) = uVar2;
  *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  func_0x0046bc40("failed to load OTMM minimap: %s",0x1f);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar2 = func_0x00485670(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (0xf < *(uint *)(unaff_EBP + -0xb0)) {
    func_0x0046b1f0(unaff_EBP + -0xc4,*(undefined4 *)(unaff_EBP + -0xc4),
                    *(uint *)(unaff_EBP + -0xb0));
  }
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xc4) = 0;
  return &DAT_00588294;
}



void FUN_005882c0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  int *unaff_FS_OFFSET;
  uint uStack_98;
  undefined1 auStack_88 [12];
  uint uStack_7c;
  uint uStack_78;
  ushort uStack_74;
  undefined1 auStack_69 [13];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  int iStack_38;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec4815;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_98 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_98;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_2c = uStack_98;
  uVar2 = FUN_00467460(0x76);
  func_0x005fcfb0(&uStack_34,param_1,uVar2);
  iStack_14._0_1_ = 1;
  if ((int)uStack_34 == 0) {
    func_0x00469d30("unable to open file");
    iStack_14._0_1_ = 2;
    func_0x0047d860();
  }
  else {
    iVar6 = func_0x005e6800();
    if (iVar6 == 0x4d4d544f) {
      uVar4 = func_0x005e66e0();
      sVar5 = func_0x005e66e0();
      func_0x005e6800();
      if (sVar5 == 1) {
        func_0x005e6950(auStack_88);
        FUN_00469ba0();
        func_0x005e64e0(uVar4);
        uStack_44 = 0;
        uStack_3c = 0;
        uVar7 = func_0x00e68f60(0x3000);
        func_0x00588db0(uVar7,auStack_69);
        iStack_14._0_1_ = 5;
        uStack_5c = 0;
        uStack_54 = 0;
        func_0x00588db0(0x3000,auStack_69);
        iStack_14 = CONCAT31(iStack_14._1_3_,6);
        while( true ) {
          uStack_7c = 0xffff;
          uStack_78 = 0xffff;
          uStack_74 = 0xff;
          uStack_7c = func_0x005e66e0();
          uStack_7c = uStack_7c & 0xffff;
          uStack_78 = func_0x005e66e0();
          uStack_78 = uStack_78 & 0xffff;
          uStack_74 = func_0x005e65e0();
          uStack_74 = uStack_74 & 0xff;
          cVar3 = func_0x00471de0();
          if ((cVar3 == '\0') || (0xf < extraout_EDX)) break;
          iVar6 = func_0x00586ac0(extraout_ECX);
          uVar4 = func_0x005e66e0();
          iStack_38 = 0x3000;
          func_0x005e6260((undefined4)uStack_44,uVar4,1);
          iVar8 = func_0x00e68c40((void *)uStack_5c,&iStack_38,(undefined4)uStack_44,uVar4);
          if ((iVar8 != 0) || (iStack_38 != 0x3000)) break;
          memcpy((void *)(iVar6 + 8),(void *)uStack_5c,0x3000);
          *(undefined1 *)(iVar6 + 0x3008) = 1;
          *(undefined1 *)(iVar6 + 0x3009) = 1;
        }
        func_0x005e6090();
        iStack_14._0_1_ = 5;
        func_0x00499b80();
        iStack_14._0_1_ = 1;
        func_0x00499b80();
        iStack_14 = (uint)iStack_14._1_3_ << 8;
        FUN_00468340();
        *unaff_FS_OFFSET = iStack_1c;
        FUN_008ab370();
        return;
      }
      goto LAB_005885e8;
    }
  }
  func_0x00469d30("invalid OTMM file");
  iStack_14._0_1_ = 3;
  func_0x0047d860();
LAB_005885e8:
  func_0x00469d30("OTMM version not supported");
  iStack_14 = CONCAT31(iStack_14._1_3_,4);
  func_0x0047d860();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined * Catch_005884e5(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x7c) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x60) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  func_0x0046bc40("failed to load OTMM minimap: %s",0x1f);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uVar2 = func_0x00485670(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (0xf < *(uint *)(unaff_EBP + -0x2c)) {
    func_0x0046b1f0(unaff_EBP + -0x40,*(undefined4 *)(unaff_EBP + -0x40),
                    *(uint *)(unaff_EBP + -0x2c));
  }
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0x40) = 0;
  return &DAT_0058858a;
}



void __thiscall FUN_00588610(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 ***pppuVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  undefined8 uVar9;
  uint uStack_e8;
  undefined1 uStack_b1;
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  byte bStack_91;
  undefined4 **appuStack_90 [5];
  uint uStack_7c;
  undefined4 **appuStack_78 [5];
  uint uStack_64;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined8 uStack_34;
  uint uStack_2c;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_24 = &stack0xfffffffc;
  puStack_18 = &DAT_00ec48b4;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_e8 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  puStack_20 = (undefined1 *)&uStack_e8;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_98 = param_2;
  iStack_14 = 0;
  uStack_2c = uStack_e8;
  FUN_0083f570();
  func_0x00469da0(param_2);
  iStack_14._0_1_ = 1;
  func_0x0046a880(&DAT_011405a4,4);
  uStack_34 = 0;
  func_0x005fd270(&uStack_34,auStack_60);
  iStack_14._0_1_ = 2;
  func_0x005e7090(0x4d4d544f);
  func_0x005e6fa0(0);
  func_0x005e6fa0(1);
  func_0x005e7090(0);
  func_0x00469d30("OTMM 1.0");
  iStack_14._0_1_ = 3;
  func_0x005e7190(auStack_b0);
  iStack_14._0_1_ = 2;
  FUN_00469ba0();
  uVar4 = func_0x005e65c0();
  func_0x005e64e0(4);
  func_0x005e6fa0(uVar4);
  func_0x005e64e0(uVar4);
  uStack_48 = 0;
  uStack_40 = 0;
  uVar4 = func_0x00e68f60(0x3000);
  func_0x00588db0(uVar4,&uStack_b1);
  iStack_14._0_1_ = 4;
  for (bStack_91 = 0; bStack_91 < 0x10; bStack_91 = bStack_91 + 1) {
    piVar1 = *(int **)((uint)bStack_91 * 0x20 + param_1 + 4);
    piVar8 = (int *)*piVar1;
    piStack_38 = piVar1;
    while (bVar3 = bStack_91, piVar8 != piVar1) {
      iVar6 = piVar8[3];
      if (*(char *)(iVar6 + 0x3009) != '\0') {
        piStack_38 = (int *)(piVar8[2] / 0x400 << 6);
        func_0x005e6fa0((piVar8[2] % 0x400 & 0x3ffU) << 6);
        func_0x005e6fa0((uint)piStack_38 & 0xffff);
        func_0x005e6f10(bVar3);
        uStack_3c = 0x3000;
        func_0x00e68e70((undefined4)uStack_48,&uStack_3c,iVar6 + 8,0x3000,3);
        func_0x005e6fa0(uStack_3c);
        func_0x005e63d0((undefined4)uStack_48,uStack_3c);
      }
      piVar8 = (int *)*piVar8;
      piStack_38 = piVar8;
    }
  }
  uStack_a4 = 0xffff;
  uStack_a0 = 0xffff;
  uStack_9c = 0xff;
  func_0x005e6fa0(0xffff);
  func_0x005e6fa0(0xffff);
  func_0x005e6f10(0xff);
  func_0x005e6150();
  func_0x005e6090();
  uVar4 = FUN_00586d00(auStack_b0);
  iStack_14._0_1_ = 5;
  func_0x005899d0(uVar4,extraout_ECX);
  iStack_14._0_1_ = 7;
  FUN_00469ba0();
  uVar4 = FUN_00586d00(auStack_b0);
  iStack_14._0_1_ = 8;
  func_0x005899d0(uVar4,extraout_ECX_00);
  iStack_14 = CONCAT31(iStack_14._1_3_,10);
  FUN_00469ba0();
  func_0x00589a80(uStack_98);
  func_0x00589a80(auStack_60);
  uVar9 = func_0x00586890();
  if (((int)((ulonglong)uVar9 >> 0x20) != 0) || (0x400 < (uint)uVar9)) {
    pppuVar7 = appuStack_90;
    if (7 < uStack_7c) {
      pppuVar7 = (undefined4 ***)appuStack_90[0];
    }
    pppuVar5 = appuStack_78;
    if (7 < uStack_64) {
      pppuVar5 = (undefined4 ***)appuStack_78[0];
    }
    iVar6 = func_0x00e73d3d(pppuVar5,pppuVar7);
    if (iVar6 != 0) {
      func_0x00586800(appuStack_78,appuStack_90);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iStack_14._0_1_ = 7;
  func_0x00585fe0();
  iStack_14._0_1_ = 4;
  func_0x00585fe0();
  iStack_14._0_1_ = 2;
  func_0x00499b80();
  iStack_14._0_1_ = 1;
  FUN_00468340();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  FUN_00469ba0();
  iStack_14 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined * Catch_005889cc(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -200) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x88) = uVar2;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  *(undefined4 *)(unaff_EBP + -0x98) = 0;
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  func_0x0046bc40("failed to save OTMM minimap: %s",0x1f);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uVar2 = func_0x00485670(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
    func_0x0046b1f0(unaff_EBP + -0xa0,*(undefined4 *)(unaff_EBP + -0xa0),
                    *(uint *)(unaff_EBP + -0x8c));
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return &DAT_00588a9b;
}



undefined * Catch_00588aa3(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0xcc) + 4);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  *(undefined4 *)(unaff_EBP + -0x88) = uVar2;
  *(undefined4 *)(unaff_EBP + -0xa0) = 0;
  *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  *(undefined4 *)(unaff_EBP + -0x98) = 0;
  *(undefined4 *)(unaff_EBP + -0x94) = 0;
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  func_0x0046bc40("failed to save OTMM minimap: %s",0x1f);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  uVar2 = func_0x00485670(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_005ee340(3,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00469ba0();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (0xf < *(uint *)(unaff_EBP + -0x8c)) {
    func_0x0046b1f0(unaff_EBP + -0xa0,*(undefined4 *)(unaff_EBP + -0xa0),
                    *(uint *)(unaff_EBP + -0x8c));
  }
  *(undefined4 *)(unaff_EBP + -0x90) = 0;
  *(undefined4 *)(unaff_EBP + -0x8c) = 0xf;
  *(undefined1 *)(unaff_EBP + -0xa0) = 0;
  return &DAT_00588b72;
}



undefined4 * __fastcall FUN_00588c40(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec4903;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = func_0x008ab47d(0x14,uVar1);
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
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int * __fastcall FUN_00589ef0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec4c00;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  piVar6 = &iStack_10;
  *unaff_FS_OFFSET = (int)piVar6;
  uStack_8 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    piVar6 = (int *)func_0x0046aa00(iVar2,*(int *)(param_1 + 0x1c) - iVar2,uVar5);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  uStack_8 = 0xffffffff;
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)0x0) {
    LOCK();
    piVar1 = piVar3 + 2;
    iVar2 = *piVar1;
    piVar6 = (int *)*piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)(*piVar3 + 4);
      _guard_check_icall();
      piVar6 = (int *)(*pcVar4)();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return piVar6;
}



int * __fastcall FUN_00589f00(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
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
  piVar3 = *(int **)(param_1 + 0x10);
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



undefined4 * __thiscall FUN_00589f90(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x2c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00589fc0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3018);
  }
  return param_1;
}



void __thiscall FUN_0058a4a0(int *param_1,int *param_2,char param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  float fVar3;
  int iStack_18;
  float fStack_10;
  int iStack_c;
  
  if (((short)param_1[0x13] != 0) && (param_3 != '\0')) {
    iStack_18 = param_1[0x14];
    if (iStack_18 == 7) {
      iVar2 = 0;
      iStack_18 = iVar2;
    }
    else if (iStack_18 == 0) {
      iVar2 = 1;
    }
    else if (iStack_18 == 4) {
      iVar2 = 2;
      iStack_18 = 0;
    }
    else if (iStack_18 == 1) {
      iVar2 = 2;
    }
    else if (iStack_18 == 5) {
      iVar2 = 2;
      iStack_18 = iVar2;
    }
    else if (iStack_18 == 2) {
      iVar2 = 1;
    }
    else if (iStack_18 == 6) {
      iVar2 = 0;
      iStack_18 = 2;
    }
    else if (iStack_18 == 3) {
      iVar2 = 0;
      iStack_18 = 1;
    }
    else {
      iVar2 = 1;
      iStack_18 = iVar2;
    }
    fStack_10 = (float)DAT_0145db28;
    iStack_c = DAT_0145db28._4_4_;
    fVar3 = (float)DAT_0145db28;
    func_0x008abfd0();
    fStack_10 = fVar3 / (float)param_1[0x12];
    pcVar1 = *(code **)(*param_1 + 0x40);
    _guard_check_icall();
    (*pcVar1)();
    iStack_c = (int)((float)param_1[0x11] * fStack_10) + param_2[1];
    fStack_10 = (float)((int)((float)param_1[0x10] * fStack_10) + *param_2);
    func_0x005bcd30(&fStack_10,0,iVar2,iStack_18,0,0,DAT_012bc26c,DAT_012bc270,DAT_012bc274,
                    DAT_012bc278,param_4);
  }
  return;
}



void __thiscall FUN_0058a5f0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  float fVar8;
  undefined1 auStack_8c [4];
  int *piStack_88;
  undefined4 *puStack_84;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined ***pppuStack_5c;
  uint auStack_58 [8];
  undefined ***pppuStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00ec4cf9;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_34 = 0;
  *(int *)(param_1 + 0x54) = *param_2;
  *(int *)(param_1 + 0x58) = param_2[1];
  *(short *)(param_1 + 0x5c) = (short)param_2[2];
  *(int *)(param_1 + 0x60) = *param_3;
  *(int *)(param_1 + 100) = param_3[1];
  *(short *)(param_1 + 0x68) = (short)param_3[2];
  pppuStack_38 = (undefined ***)param_1;
  uVar5 = FUN_00471cd0(param_2,param_3,uStack_24);
  pppuVar3 = pppuStack_38;
  *(undefined4 *)((int)pppuStack_38 + 0x50) = uVar5;
  *(int *)((int)pppuStack_38 + 0x10) = *param_2;
  *(int *)((int)pppuStack_38 + 0x14) = param_2[1];
  *(short *)((int)pppuStack_38 + 0x18) = (short)param_2[2];
  iVar7 = *param_3 - *param_2;
  iVar6 = param_3[1] - param_2[1];
  *(int *)((int)pppuStack_38 + 0x44) = iVar6;
  *(int *)((int)pppuStack_38 + 0x40) = iVar7;
  *(float *)((int)pppuStack_38 + 0x48) = SQRT(SQRT((float)(iVar7 * iVar7 + iVar6 * iVar6))) * 150.0;
  fVar8 = (float)DAT_0145d7e0;
  *(int *)((int)pppuStack_38 + 0x40) = (int)((float)iVar7 * fVar8);
  *(int *)((int)pppuStack_38 + 0x44) = (int)((float)*(int *)((int)pppuStack_38 + 0x44) * fVar8);
  uStack_30._0_4_ = (undefined4)DAT_0145db28;
  uStack_30._4_4_ = (int *)((ulonglong)DAT_0145db28 >> 0x20);
  *(undefined4 *)((int)pppuStack_38 + 0x30) = (undefined4)uStack_30;
  *(int **)((int)pppuStack_38 + 0x34) = uStack_30._4_4_;
  *(undefined1 *)((int)pppuStack_38 + 0x38) = 0;
  uStack_30 = 0;
  uStack_14 = 0;
  func_0x0046b930(&uStack_30);
  uStack_34 = 1;
  fVar8 = *(float *)((int)pppuVar3 + 0x48);
  if (uStack_30._4_4_ != (int *)0x0) {
    LOCK();
    *(int *)((int)uStack_30._4_4_ + 4) = *(int *)((int)uStack_30._4_4_ + 4) + 1;
    UNLOCK();
  }
  pppuStack_38 = &ppuStack_80;
  puStack_84 = &uStack_7c;
  ppuStack_80 = std::_Func_impl_no_alloc<>::vftable;
  uStack_7c = (undefined4)uStack_30;
  iStack_78 = (int)uStack_30._4_4_;
  auStack_58[6] = 0;
  auStack_58[7] = 0;
  uStack_14._1_3_ = (undefined3)((uint)uStack_14 >> 8);
  pppuStack_5c = &ppuStack_80;
  uStack_14._0_1_ = 6;
  auStack_58[4] = 0;
  auStack_58[0] = 0;
  auStack_58[1] = 0;
  auStack_58[2] = 0;
  auStack_58[3] = 0;
  auStack_58[5] = 0;
  func_0x0046bc40("Missile::setPath",0x10);
  uStack_14 = CONCAT31(uStack_14._1_3_,7);
  FUN_005e4dd0(auStack_8c,auStack_58,&ppuStack_80,(int)fVar8);
  if (piStack_88 != (int *)0x0) {
    LOCK();
    iVar6 = piStack_88[1] + -1;
    piStack_88[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*piStack_88;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      iVar6 = piStack_88[2] + -1;
      piStack_88[2] = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*piStack_88 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  uStack_14._0_1_ = 6;
  if (0xf < auStack_58[5]) {
    func_0x0046b1f0(auStack_58,auStack_58[0],auStack_58[5]);
  }
  auStack_58[4] = 0;
  auStack_58[5] = 0xf;
  auStack_58[0] = auStack_58[0] & 0xffffff00;
  uStack_14 = CONCAT31(uStack_14._1_3_,2);
  if (pppuStack_5c != (undefined ***)0x0) {
    pcVar2 = (code *)(*pppuStack_5c)[4];
    _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_80 >> 8),pppuStack_5c != &ppuStack_80));
    (*pcVar2)();
    pppuStack_5c = (undefined ***)0x0;
  }
  uStack_34 = 0;
  uStack_14 = 0xffffffff;
  piVar4 = uStack_30._4_4_;
  if (uStack_30._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_30._4_4_[1] + -1;
    uStack_30._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_30._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar6 = *piVar1 + -1;
      *piVar1 = iVar6;
      UNLOCK();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0058a93f)

void __thiscall FUN_0058a900(int param_1,ushort param_2)

{
  if ((param_2 != 0) && ((uint)param_2 < (uint)(DAT_0145d8c8 - DAT_0145d8c4 >> 3))) {
    *(ushort *)(param_1 + 0x4c) = param_2;
    return;
  }
  *(undefined2 *)(param_1 + 0x4c) = 0;
  return;
}



void __fastcall FUN_0058a950(int param_1)

{
  FUN_005c37e0(*(undefined2 *)(param_1 + 0x4c),3);
  return;
}



undefined4 __fastcall FUN_0058a970(int param_1)

{
  return *(undefined4 *)(DAT_0145d8c4 + (uint)*(ushort *)(param_1 + 0x4c) * 8);
}



TypeDescriptor * FUN_0058a980(void)

{
  return &`public:_void___thiscall_Missile::setPath(class_Position_const&,class_Position_const&)'::
          __l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0058a990(int param_1,undefined4 *param_2)

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



void __thiscall FUN_0058aa10(int param_1,undefined4 *param_2)

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



int __thiscall FUN_0058aab0(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec4d70;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar3 = piVar1[1] + -1;
    piVar1[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piVar1;
      _guard_check_icall(uVar4);
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
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_0058ab50(int param_1,byte param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec4dbb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x50);
  if (0xf < *(uint *)(param_1 + 100)) {
    func_0x0046b1f0(puVar1,*puVar1,*(uint *)(param_1 + 100),uVar5);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0xf;
  *(undefined1 *)puVar1 = 0;
  uStack_8 = 0xffffffff;
  piVar2 = *(int **)(param_1 + 8);
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
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_0058c760(int param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  uint unaff_EBX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_ESI;
  int unaff_EDI;
  bool bVar11;
  longlong lVar12;
  char cStack_4d;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint *puStack_40;
  undefined1 *puStack_3c;
  undefined1 auStack_2c [3];
  undefined1 uStack_29;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_2c;
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 8);
  puStack_3c = (undefined1 *)0x58c78d;
  iStack_28 = param_1;
  _guard_check_icall();
  puStack_3c = (undefined1 *)0x58c791;
  (*pcVar1)();
  iStack_20 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x30)) + 1;
  puStack_3c = &uStack_29;
  uStack_29 = 0;
  puStack_40 = &uStack_24;
  uStack_24 = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c)) + 1;
  uStack_44 = 0x3ffff;
  uStack_48 = 0xffffffe5;
  lVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x14) * 0x1000 +
          (longlong)*(int *)(param_1 + 0x2c);
  uVar6 = (uint)lVar3;
  uVar10 = *(uint *)(iStack_28 + 0x30);
  uVar7 = uVar6 * 0x1000;
  uVar8 = uVar7 + uVar10;
  iVar4 = (int)uStack_24 >> 0x1f;
  uVar9 = uVar8 * 0x1000;
  bVar11 = CARRY4(uVar9,uStack_24);
  uVar9 = uVar9 + uStack_24;
  iVar2 = *(int *)(iStack_28 + 0x44);
  piVar5 = (int *)(iVar2 >> 0x1f);
  lVar12 = func_0x00e87d70();
  lVar12 = lVar12 + CONCAT44((((((int)((ulonglong)lVar3 >> 0x20) << 0xc | uVar6 >> 0x14) +
                                ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar7,uVar10)) * 0x1000 |
                              uVar8 >> 0x14) + iVar4 + (uint)bVar11) * 0x1000 | uVar9 >> 0x14,
                             uVar9 * 0x1000);
  uVar10 = (uint)lVar12;
  func_0x006161a0(&uStack_24,uVar10 + unaff_EBX,
                  (int)((ulonglong)lVar12 >> 0x20) + ((int)unaff_EBX >> 0x1f) +
                  (uint)CARRY4(uVar10,unaff_EBX));
  if (-1 < unaff_EDI) {
    cStack_4d = (char)((uint)iVar2 >> 0x18);
    if (cStack_4d != '\0') {
      func_0x00619c00();
      pcVar1 = *(code **)(*piVar5 + 4);
      _guard_check_icall(&stack0xffffffc8);
      (*pcVar1)();
    }
    if (DAT_0145dff8 + 6 < 0x10000) {
      puStack_40 = (uint *)((piVar5[0xd] - piVar5[0xb]) + unaff_EDI);
      puStack_3c = (undefined1 *)((unaff_ESI - piVar5[0xc]) + piVar5[0xe]);
      func_0x00619c90(piVar5 + 7,&uStack_48,piVar5 + 3);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_0058c8d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint auStack_60 [7];
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
  
  uStack_14 = DAT_0128fd40 ^ (uint)&iStack_78;
  iStack_78 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = 0;
    puVar3 = auStack_60;
    do {
      iVar2 = iVar4 + 1;
      uVar5 = -(uint)(iVar4 == 0);
      uVar6 = -(uint)(iVar4 == 1);
      uVar7 = -(uint)(iVar4 == 2);
      uVar8 = -(uint)(iVar4 == 3);
      *puVar3 = (uVar5 & 0x3f800000 | ~uVar5 & *puVar3) & uVar5;
      puVar3[1] = (uVar6 & 0x3f800000 | ~uVar6 & puVar3[1]) & uVar6;
      puVar3[2] = (uVar7 & 0x3f800000 | ~uVar7 & puVar3[2]) & uVar7;
      puVar3[3] = (uVar8 & 0x3f800000 | ~uVar8 & puVar3[3]) & uVar8;
      iVar4 = iVar2;
      puVar3 = puVar3 + 4;
    } while (iVar2 < 4);
    uStack_74 = *(undefined4 *)(param_1 + 0x44);
    iVar4 = 0;
    puVar3 = auStack_60 + 1;
    do {
      func_0x0086d800();
      iVar1 = iStack_78;
      iVar2 = DAT_0145ceb8;
      iVar4 = iVar4 + 8;
      puVar3[-1] = uStack_70;
      *puVar3 = uStack_6c;
      puVar3[1] = uStack_68;
      puVar3[2] = uStack_64;
      puVar3 = puVar3 + 4;
    } while (iVar4 < 0x20);
    iVar4 = *(int *)(DAT_0145ceb8 + 0x814);
    *(int *)(DAT_0145ceb8 + 0x780) = iVar4;
    *(uint *)(iVar2 + 0x798) = auStack_60[0];
    *(uint *)(iVar2 + 0x79c) = auStack_60[1];
    *(uint *)(iVar2 + 0x7a0) = auStack_60[2];
    *(uint *)(iVar2 + 0x7a4) = auStack_60[3];
    *(uint *)(iVar2 + 0x7a8) = auStack_60[4];
    *(uint *)(iVar2 + 0x7ac) = auStack_60[5];
    *(uint *)(iVar2 + 0x7b0) = auStack_60[6];
    *(undefined4 *)(iVar2 + 0x7b4) = uStack_44;
    *(undefined4 *)(iVar2 + 0x7b8) = uStack_40;
    *(undefined4 *)(iVar2 + 0x7bc) = uStack_3c;
    *(undefined4 *)(iVar2 + 0x7c0) = uStack_38;
    *(undefined4 *)(iVar2 + 0x7c4) = uStack_34;
    *(undefined4 *)(iVar2 + 0x7c8) = uStack_30;
    *(undefined4 *)(iVar2 + 0x7cc) = uStack_2c;
    *(undefined4 *)(iVar2 + 2000) = uStack_28;
    *(undefined4 *)(iVar2 + 0x7d4) = uStack_24;
    if (iVar4 != 0) {
      func_0x00624ed0(iStack_78 + 0x3c);
    }
    func_0x00623960(iVar1 + 0x1c,iVar1 + 4,iVar1 + 0x2c);
    *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
  }
  FUN_008ab370();
  return;
}



void __thiscall FUN_0058ca10(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [12];
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  uint auStack_60 [7];
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
  
  uStack_14 = DAT_0128fd40 ^ (uint)auStack_88;
  iStack_64 = param_1 + 4;
  iStack_7c = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = 0;
    puVar3 = auStack_60;
    do {
      iVar2 = iVar4 + 1;
      uVar5 = -(uint)(iVar4 == 0);
      uVar6 = -(uint)(iVar4 == 1);
      uVar7 = -(uint)(iVar4 == 2);
      uVar8 = -(uint)(iVar4 == 3);
      *puVar3 = (uVar5 & 0x3f800000 | ~uVar5 & *puVar3) & uVar5;
      puVar3[1] = (uVar6 & 0x3f800000 | ~uVar6 & puVar3[1]) & uVar6;
      puVar3[2] = (uVar7 & 0x3f800000 | ~uVar7 & puVar3[2]) & uVar7;
      puVar3[3] = (uVar8 & 0x3f800000 | ~uVar8 & puVar3[3]) & uVar8;
      iVar4 = iVar2;
      puVar3 = puVar3 + 4;
    } while (iVar2 < 4);
    uStack_68 = *(undefined4 *)(param_1 + 0x44);
    iVar4 = 0;
    puVar3 = auStack_60 + 1;
    do {
      func_0x0086d800();
      iVar1 = iStack_7c;
      iVar2 = DAT_0145ceb8;
      iVar4 = iVar4 + 8;
      puVar3[-1] = uStack_78;
      *puVar3 = uStack_74;
      puVar3[1] = uStack_70;
      puVar3[2] = uStack_6c;
      puVar3 = puVar3 + 4;
    } while (iVar4 < 0x20);
    iVar4 = *(int *)(DAT_0145ceb8 + 0x814);
    *(int *)(DAT_0145ceb8 + 0x780) = iVar4;
    *(uint *)(iVar2 + 0x798) = auStack_60[0];
    *(uint *)(iVar2 + 0x79c) = auStack_60[1];
    *(uint *)(iVar2 + 0x7a0) = auStack_60[2];
    *(uint *)(iVar2 + 0x7a4) = auStack_60[3];
    *(uint *)(iVar2 + 0x7a8) = auStack_60[4];
    *(uint *)(iVar2 + 0x7ac) = auStack_60[5];
    *(uint *)(iVar2 + 0x7b0) = auStack_60[6];
    *(undefined4 *)(iVar2 + 0x7b4) = uStack_44;
    *(undefined4 *)(iVar2 + 0x7b8) = uStack_40;
    *(undefined4 *)(iVar2 + 0x7bc) = uStack_3c;
    *(undefined4 *)(iVar2 + 0x7c0) = uStack_38;
    *(undefined4 *)(iVar2 + 0x7c4) = uStack_34;
    *(undefined4 *)(iVar2 + 0x7c8) = uStack_30;
    *(undefined4 *)(iVar2 + 0x7cc) = uStack_2c;
    *(undefined4 *)(iVar2 + 2000) = uStack_28;
    *(undefined4 *)(iVar2 + 0x7d4) = uStack_24;
    if (iVar4 != 0) {
      func_0x00624ed0(iStack_7c + 0x3c);
    }
    uStack_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = (*(int *)(iVar1 + 0x34) - *(int *)(iVar1 + 0x2c)) + uStack_78;
    uStack_6c = (*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x30)) + uStack_74;
    func_0x00623960(&uStack_78,iStack_64,(int *)(iVar1 + 0x2c));
    *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_0058cb70(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int *piStack_80;
  int iStack_7c;
  int *piStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  char cStack_5d;
  uint auStack_5c [16];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec50f5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_7c = param_1 + 4;
  iStack_74 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    uStack_1c = 0;
    func_0x00626120(&uStack_1c,param_1 + 0x50,uStack_14);
    iStack_8 = 0;
    iStack_6c = (int)(int *)uStack_1c;
    if ((int *)uStack_1c == (int *)0x0) {
      FUN_0061a470();
      iStack_8 = 0xffffffff;
      FUN_00468340();
    }
    else {
      piStack_80 = (int *)(param_1 + 0x1c);
      piStack_78 = (int *)(param_1 + 0x2c);
      iStack_64 = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x30)) + 1;
      iVar5 = (*(int *)(param_1 + 0x34) - *piStack_78) + 1;
      if ((iVar5 == (*(int *)(param_1 + 0x24) - *piStack_80) + 1) &&
         (iStack_64 == (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) + 1)) {
        cStack_5d = '\0';
      }
      else {
        cStack_5d = '\x01';
        iStack_68 = iVar5;
        func_0x0061d810(&iStack_68);
        uStack_70 = 0;
        iStack_6c = 0;
        iStack_8._0_1_ = 1;
        func_0x0061dc80(DAT_0145e0a0);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FUN_00468340();
        func_0x0087eee0(DAT_0145f21c,DAT_0145f220,DAT_0145f224,DAT_0145f228);
        func_0x0087eed0(0x4000);
        iStack_6c = (int)(int *)uStack_1c;
      }
      iVar5 = 0;
      puVar4 = auStack_5c;
      do {
        iVar3 = iVar5 + 1;
        uVar7 = -(uint)(iVar5 == 0);
        uVar8 = -(uint)(iVar5 == 1);
        uVar9 = -(uint)(iVar5 == 2);
        uVar10 = -(uint)(iVar5 == 3);
        *puVar4 = (uVar7 & 0x3f800000 | ~uVar7 & *puVar4) & uVar7;
        puVar4[1] = (uVar8 & 0x3f800000 | ~uVar8 & puVar4[1]) & uVar8;
        puVar4[2] = (uVar9 & 0x3f800000 | ~uVar9 & puVar4[2]) & uVar9;
        puVar4[3] = (uVar10 & 0x3f800000 | ~uVar10 & puVar4[3]) & uVar10;
        iVar5 = iVar3;
        puVar4 = puVar4 + 4;
      } while (iVar3 < 4);
      iStack_64 = *(undefined4 *)(param_1 + 0x4c);
      iVar5 = 0;
      puVar4 = auStack_5c + 1;
      do {
        func_0x0086d800();
        iVar5 = iVar5 + 8;
        puVar4[-1] = uStack_90;
        *puVar4 = uStack_8c;
        puVar4[1] = uStack_88;
        puVar4[2] = uStack_84;
        puVar4 = puVar4 + 4;
      } while (iVar5 < 0x20);
      *(int *)(DAT_0145ceb8 + 0x780) = iStack_6c;
      piVar6 = (int *)uStack_1c;
      if ((int *)uStack_1c != (int *)0x0) {
        func_0x00624ed0(iStack_74 + 0x3c);
        piVar6 = (int *)uStack_1c;
      }
      if (DAT_0145cebc != piVar6[0xb]) {
        if ((char)piVar6[10] == '\0') {
          pcVar2 = *(code **)(*piVar6 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
        func_0x0087f200(piVar6[0xb]);
        DAT_0145cebc = piVar6[0xb];
      }
      func_0x0087f1f0(piVar6[0x12],1,0,auStack_5c);
      func_0x00624f70(iStack_74 + 0x44);
      func_0x00625260();
      if (cStack_5d == '\0') {
        func_0x00623960(piStack_80,iStack_7c,piStack_78);
        *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
      }
      else {
        uStack_88 = piStack_78[2] - *piStack_78;
        uStack_84 = piStack_78[3] - piStack_78[1];
        uStack_90 = 0;
        uStack_8c = 0;
        func_0x00623960(&uStack_90,iStack_7c,piStack_78);
        *(undefined4 *)(DAT_0145ceb8 + 0x780) = 0;
        func_0x0061df80();
        iVar5 = DAT_0145ceb8;
        *(undefined4 *)(DAT_0145ceb8 + 0x788) = DAT_012bc26c;
        *(undefined4 *)(iVar5 + 0x78c) = DAT_012bc270;
        *(undefined4 *)(iVar5 + 0x790) = DAT_012bc274;
        *(undefined4 *)(iVar5 + 0x794) = DAT_012bc278;
        func_0x0061e260(piStack_80);
      }
      iStack_8 = 0xffffffff;
      piVar6 = uStack_1c._4_4_;
      if (uStack_1c._4_4_ != (int *)0x0) {
        LOCK();
        iVar5 = uStack_1c._4_4_[1] + -1;
        uStack_1c._4_4_[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)*uStack_1c._4_4_;
          _guard_check_icall();
          (*pcVar2)();
          LOCK();
          piVar1 = piVar6 + 2;
          iVar5 = *piVar1 + -1;
          *piVar1 = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar2 = *(code **)(*piVar6 + 4);
            _guard_check_icall();
            (*pcVar2)();
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __fastcall FUN_0058dc40(int param_1)

{
  return (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) + *(int *)(param_1 + 0x10);
}



undefined4 __fastcall FUN_0058dc50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



void __fastcall FUN_0058dc60(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



void __fastcall FUN_0058dc70(int param_1)

{
  *(undefined1 *)(param_1 + 0x3f) = 1;
  return;
}



void __thiscall
FUN_0058dc80(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
            undefined4 *param_9)

{
  undefined4 *puVar1;
  char cVar2;
  
  cVar2 = func_0x0082f330();
  if (cVar2 == '\0') {
    if ((undefined4 *)(param_1 + 0xa0) != param_2) {
      puVar1 = param_2 + 4;
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      func_0x0046a660(param_2,*puVar1);
    }
    if ((undefined4 *)(param_1 + 0xb8) != param_3) {
      puVar1 = param_3 + 4;
      if (0xf < (uint)param_3[5]) {
        param_3 = (undefined4 *)*param_3;
      }
      func_0x0046a660(param_3,*puVar1);
    }
    if ((undefined4 *)(param_1 + 0xd0) != param_7) {
      puVar1 = param_7 + 4;
      if (0xf < (uint)param_7[5]) {
        param_7 = (undefined4 *)*param_7;
      }
      func_0x0046a660(param_7,*puVar1);
    }
    if ((undefined4 *)(param_1 + 0xe8) != param_8) {
      puVar1 = param_8 + 4;
      if (0xf < (uint)param_8[5]) {
        param_8 = (undefined4 *)*param_8;
      }
      func_0x0046a660(param_8,*puVar1);
    }
    if ((undefined4 *)(param_1 + 0x100) != param_6) {
      puVar1 = param_6 + 4;
      if (0xf < (uint)param_6[5]) {
        param_6 = (undefined4 *)*param_6;
      }
      func_0x0046a660(param_6,*puVar1);
    }
    if ((undefined4 *)(param_1 + 0x118) != param_9) {
      puVar1 = param_9 + 4;
      if (0xf < (uint)param_9[5]) {
        param_9 = (undefined4 *)*param_9;
      }
      func_0x0046a660(param_9,*puVar1);
    }
    FUN_008067c0(param_4,param_5);
  }
  return;
}



void __fastcall FUN_0058dd70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  uint auStack_34 [7];
  int *piStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ec52c6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  *(undefined1 *)((int)param_1 + 0x9b) = 1;
  auStack_34[0] = 0;
  auStack_34[1] = 0;
  auStack_34[2] = 0;
  auStack_34[3] = 0;
