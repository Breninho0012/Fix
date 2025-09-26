  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_00544f70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Missile::*)(class_Position_const&,class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00544f80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00544fa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00544fb0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [12];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe06d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052eac0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_28;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00545110(int param_1)

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



TypeDescriptor * FUN_005451c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_Missile::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005451d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005451f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545200(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052eac0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x00471ec0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00545350(int param_1)

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



TypeDescriptor * FUN_00545400(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_Missile::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545410(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545430(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00545440(undefined4 *param_1)

{
  func_0x005133a0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00545460(int param_1)

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



TypeDescriptor * FUN_00545510(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Missile::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545520(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545540(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00545550(undefined4 *param_1)

{
  func_0x00512f80(*param_1);
  return;
}



undefined4 * __fastcall FUN_00545570(int param_1)

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



TypeDescriptor * FUN_00545620(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Effect::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545630(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545650(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00545660(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 auStack_20 [2];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe7ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  auStack_20[0] = 0;
  puVar7 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052ea10();
  func_0x00568f80(&uStack_1c,auStack_20);
  puVar6 = &uStack_1c;
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
  FUN_008ab370(puVar6,puVar7);
  return;
}



undefined4 * __fastcall FUN_005457a0(int param_1)

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



TypeDescriptor * FUN_00545850(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned___int64_(__thiscall_Item::*)(unsigned_short))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545860(int param_1,int *param_2,undefined2 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005458f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545910(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00545920(undefined4 *param_1)

{
  func_0x00512a40(*param_1);
  return;
}



undefined4 * __fastcall FUN_00545940(int param_1)

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



TypeDescriptor * FUN_005459f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(unsigned_short,unsigned___int64))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545a00(int param_1,int *param_2,undefined2 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,*param_4,param_4[1]);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00545aa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545ac0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00545ad0(undefined4 *param_1)

{
  func_0x005126d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00545af0(int param_1)

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



TypeDescriptor * FUN_00545ba0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545bb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545bd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545be0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545c00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00545c10(undefined4 *param_1)

{
  func_0x005122c0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00545c30(int param_1)

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



TypeDescriptor * FUN_00545ce0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545cf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545d10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545d20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [12];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe06d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d840();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_28;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00545e80(int param_1)

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



TypeDescriptor * FUN_00545f30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545f40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00545f60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00545f70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 auStack_20 [2];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe24d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  auStack_20[0] = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052ea10();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = auStack_20;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005460c0(int param_1)

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



TypeDescriptor * FUN_00546170(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(unsigned_short))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546180(int param_1,int *param_2,undefined2 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00546210(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546230(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00546240(undefined4 *param_1)

{
  func_0x00511ab0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00546260(int param_1)

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



TypeDescriptor * FUN_00546310(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(class_std::basic_string<>))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546320(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined *puStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  char *pcStack_78;
  uint uStack_74;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe835;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_74 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    puStack_14 = (undefined1 *)&uStack_8c;
    pcVar1 = *(code **)(param_1 + 8);
    func_0x00469da0(param_3);
    uStack_8 = 0xffffffff;
    _guard_check_icall();
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  pcStack_78 = "failed to call a member function because the passed object is nil";
  uStack_7c = 0x5463a2;
  func_0x00469d30();
  uStack_8 = 0;
  puStack_80 = auStack_2c;
  uStack_7c = 0xffffffff;
  puStack_84 = (undefined *)0x5463b7;
  func_0x007767b0();
  puStack_84 = &DAT_012886a4;
  puStack_88 = auStack_68;
  uStack_8c = 0x5463c5;
  func_0x00e87d2e();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005463d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005463f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00546400(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe2b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d840();
  func_0x00564c60(appuStack_34,&uStack_1c);
  uStack_8._0_1_ = 3;
  pppuVar6 = appuStack_34;
  if (0xf < uStack_20) {
    pppuVar6 = (undefined4 ***)appuStack_34[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar6,uStack_24);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_20) {
    func_0x0046b1f0(appuStack_34,appuStack_34[0],uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  appuStack_34[0] = (undefined4 **)((uint)appuStack_34[0] & 0xffffff00);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00546580(int param_1)

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



TypeDescriptor * FUN_00546630(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546640(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546660(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546670(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d840();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005467d0(int param_1)

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



TypeDescriptor * FUN_00546880(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_short_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546890(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005468b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005468c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d840();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x00471ec0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00546a10(int param_1)

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



TypeDescriptor * FUN_00546ac0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546ad0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546af0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546b00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d840();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00546c60(int param_1)

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



TypeDescriptor * FUN_00546d10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546d20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546d40(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546d50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546d70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546d80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546da0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00546db0(undefined4 *param_1)

{
  func_0x00510e70(*param_1);
  return;
}



undefined4 * __fastcall FUN_00546dd0(int param_1)

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



TypeDescriptor * FUN_00546e80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(class_std::shared_ptr<class_Item>_const&,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546e90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546eb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00546ec0(undefined4 *param_1)

{
  func_0x005109d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00546ee0(int param_1)

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



TypeDescriptor * FUN_00546f90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Item::*)(class_std::shared_ptr<class_Item>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00546fa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00546fc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00546fd0(undefined4 *param_1)

{
  func_0x00510670(*param_1);
  return;
}



undefined4 * __fastcall FUN_00546ff0(int param_1)

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



TypeDescriptor * FUN_005470a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Item>_(__thiscall_Item::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005470b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005470d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005470e0(undefined4 *param_1)

{
  func_0x00510320(*param_1);
  return;
}



undefined4 * __fastcall FUN_00547100(int param_1)

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



TypeDescriptor * FUN_005471b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::vector<>_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005471c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005471e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005471f0(undefined4 *param_1)

{
  func_0x0050ffd0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00547210(int param_1)

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



TypeDescriptor * FUN_005472c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Item>_(__thiscall_Item::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005472d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005472f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00547300(undefined4 *param_1)

{
  func_0x0050fc50(*param_1);
  return;
}



undefined4 * __fastcall FUN_00547320(int param_1)

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



TypeDescriptor * FUN_005473d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_ThingType::*)(enum_ThingAttr))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005473e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00547400(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00547410(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_28;
  int iStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe895;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  iStack_20 = 0;
  uStack_28 = 0;
  func_0x00564e60(&uStack_28,&uStack_1c);
  uStack_8._0_1_ = 3;
  func_0x004a1910();
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if ((int)uStack_28 != 0) {
    func_0x0046ac90((int)uStack_28,iStack_20 - (int)uStack_28 >> 2);
    uStack_28 = 0;
    iStack_20 = 0;
  }
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00547590(int param_1)

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



TypeDescriptor * FUN_00547640(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::vector<>_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00547650(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebe94a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 3;
  func_0x007767b0(auStack_2c,0xffffffff);
  func_0x00e87d2e(auStack_68,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_00547760(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00547780(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00547790(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe9ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  func_0x00564ee0(auStack_40,&uStack_1c);
  uStack_8._0_1_ = 3;
  func_0x00567f90(auStack_40);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_2c) {
    func_0x0046b1f0(auStack_40,auStack_40[0],uStack_2c);
  }
  uStack_30 = 0;
  uStack_2c = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00547900(int param_1)

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



TypeDescriptor * FUN_005479b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(struct_MarketData_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_005479c0(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebea6a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 3;
  func_0x007767b0(auStack_2c,0xffffffff);
  func_0x00e87d2e(auStack_68,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_00547ad0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00547af0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00547b00(undefined4 *param_1)

{
  func_0x0050f550(*param_1);
  return;
}



undefined4 * __fastcall FUN_00547b20(int param_1)

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



TypeDescriptor * FUN_00547bd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_ThingType::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00547be0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00547c00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00547c10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66630(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00547d70(int param_1)

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



TypeDescriptor * FUN_00547e20(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00547e30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00547e50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00547e60(undefined4 *param_1)

{
  func_0x0050f030(*param_1);
  return;
}



undefined4 * __fastcall FUN_00547e80(int param_1)

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



TypeDescriptor * FUN_00547f30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(struct_Light_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00547f40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00547f60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00547f70(undefined4 *param_1)

{
  func_0x0050ec70(*param_1);
  return;
}



undefined4 * __fastcall FUN_00547f90(int param_1)

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



TypeDescriptor * FUN_00548040(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_ThingType::*)(int,int,int,int,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00548050(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,*param_4,*param_5,*param_6,*param_7);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00548100(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00548120(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548130(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_24 [4];
  undefined8 *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  puStack_20 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_24;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  puStack_20 = (undefined8 *)func_0x0077dad0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00548290(int param_1)

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



TypeDescriptor * FUN_00548340(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TPoint<int>_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548350(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00548370(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548380(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005484e0(int param_1)

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



TypeDescriptor * FUN_00548590(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005485a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005485c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005485d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_24 [4];
  undefined8 *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  puStack_20 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_24;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  puStack_20 = (undefined8 *)func_0x0077db30();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00548730(int param_1)

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



TypeDescriptor * FUN_005487e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TSize<int>_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005487f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00548810(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548820(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00548980(int param_1)

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



TypeDescriptor * FUN_00548a30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(enum_ThingCategory_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548a40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00548a60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548a70(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e6f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00548bd0(int param_1)

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



TypeDescriptor * FUN_00548c80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_short_(__thiscall_ThingType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548c90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00548cb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548cc0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e5a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66630(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00548e20(int param_1)

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



TypeDescriptor * FUN_00548ed0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_ItemType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548ee0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00548f00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00548f10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e5a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00549070(int param_1)

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



TypeDescriptor * FUN_00549120(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_short_(__thiscall_ItemType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00549130(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549150(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00549160(undefined4 *param_1)

{
  func_0x0050dca0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00549180(int param_1)

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



TypeDescriptor * FUN_00549230(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(unsigned_int,bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00549240(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549260(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00549270(undefined4 *param_1)

{
  func_0x0050d8d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00549290(int param_1)

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



TypeDescriptor * FUN_00549340(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::list<>_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00549350(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [60];
  undefined1 auStack_2c [24];
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebeb1a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 3;
  func_0x007767b0(auStack_2c,0xffffffff);
  func_0x00e87d2e(auStack_68,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_00549460(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549480(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00549490(undefined4 *param_1)

{
  func_0x0050d430(*param_1);
  return;
}



undefined4 * __fastcall FUN_005494b0(int param_1)

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



TypeDescriptor * FUN_00549560(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_std::shared_ptr<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00549570(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549590(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005495a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_2c [16];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdd1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,&uStack_1c);
  (*pcVar2)();
  func_0x005661a0(auStack_2c);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00549700(int param_1)

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



TypeDescriptor * FUN_005497b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Color_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005497c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005497e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005497f0(undefined4 *param_1)

{
  func_0x0050cee0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00549810(int param_1)

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



TypeDescriptor * FUN_005498c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&,class_Color_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_005498d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_3,param_4,param_5);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00549970(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549990(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005499a0(undefined4 *param_1)

{
  func_0x0050cb40(*param_1);
  return;
}



undefined4 * __fastcall FUN_005499c0(int param_1)

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



TypeDescriptor * FUN_00549a70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_std::basic_string<>_const&,class_Color_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00549a80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549aa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00549ab0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_24 [4];
  undefined8 *puStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdebd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  puStack_20 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_24;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  puStack_20 = (undefined8 *)func_0x0077dad0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00549c10(int param_1)

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



TypeDescriptor * FUN_00549cc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TPoint<int>_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00549cd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549cf0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00549d00(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebeb6d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  auStack_20[0] = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d6e0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = auStack_20;
  puVar7 = &uStack_1c;
  puVar6 = auStack_2c;
  _guard_check_icall(puVar6,puVar7,puVar8);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7,puVar8);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00549e60(int param_1)

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



TypeDescriptor * FUN_00549f10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_Creature::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00549f20(int param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_3 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2,*param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return param_2;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



void __thiscall FUN_00549fc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00549fe0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00549ff0(undefined4 *param_1)

{
  func_0x0050c440(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054a010(int param_1)

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



TypeDescriptor * FUN_0054a0c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(int,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a0d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054a0f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054a100(undefined4 *param_1)

{
  func_0x0050c0c0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054a120(int param_1)

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



TypeDescriptor * FUN_0054a1d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Creature::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a1e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054a200(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a210(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66630(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054a370(int param_1)

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



TypeDescriptor * FUN_0054a420(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a430(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054a450(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a460(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054a480(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a490(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
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
  puStack_c = &DAT_00ebddfd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_2c = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e270();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_2c;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054a5f0(int param_1)

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



TypeDescriptor * FUN_0054a6a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_Color_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a6b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054a6d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054a6e0(undefined4 *param_1)

{
  func_0x0050b860(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054a700(int param_1)

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



TypeDescriptor * FUN_0054a7b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_std::basic_string<>_const&,bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a7c0(int param_1,int *param_2,undefined4 param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_3,*param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_0054a860(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054a880(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054a890(undefined4 *param_1)

{
  func_0x0050b4f0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054a8b0(int param_1)

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



TypeDescriptor * FUN_0054a960(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(enum_Otc::Direction))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a970(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054a990(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054a9a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054ab00(int param_1)

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



TypeDescriptor * FUN_0054abb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054abc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054abe0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054abf0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  puVar7 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  func_0x005638c0(&uStack_1c);
  puVar6 = &uStack_1c;
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
  FUN_008ab370(puVar6,puVar7);
  return;
}



undefined4 * __fastcall FUN_0054ad20(int param_1)

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



TypeDescriptor * FUN_0054add0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(__int64_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ade0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054ae00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ae10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x004b2400();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054af70(int param_1)

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



TypeDescriptor * FUN_0054b020(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(float_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b030(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054b050(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054b060(undefined4 *param_1)

{
  func_0x0050ac00(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054b080(int param_1)

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



TypeDescriptor * FUN_0054b130(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_short_(__thiscall_Creature::*)(bool,enum_Otc::Direction))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b140(int param_1,int *param_2,undefined1 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [60];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebddad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,*param_4);
    (*pcVar1)();
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00469d30("failed to call a member function because the passed object is nil",uVar2);
  uStack_8 = 0;
  func_0x007767b0(auStack_28,0xffffffff);
  func_0x00e87d2e(auStack_64,&DAT_012886a4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_0054b1e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054b200(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_0054b210(int param_1)

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



TypeDescriptor * FUN_0054b2c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(enum_Otc::Direction_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b2d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054b2f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054b300(void)

{
  func_0x00564030();
  return;
}



undefined4 * __fastcall FUN_0054b320(int param_1)

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



TypeDescriptor * FUN_0054b3d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_Color_const&,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b3e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054b400(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054b410(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [52];
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe4dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  func_0x00564d60(auStack_6c,&uStack_1c);
  uStack_8._0_1_ = 3;
  func_0x0056f630();
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_24) {
    func_0x0046b1f0(auStack_38,auStack_38[0],uStack_24);
  }
  uStack_28 = 0;
  uStack_24 = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054b580(int param_1)

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



TypeDescriptor * FUN_0054b630(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Outfit_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b640(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054b660(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054b670(undefined4 *param_1)

{
  func_0x0050a2b0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054b690(int param_1)

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



TypeDescriptor * FUN_0054b740(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_Outfit_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b750(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054b770(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b780(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdf1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 2) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_24 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e1c0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_24;
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6,puVar7);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054b8d0(int param_1)

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



TypeDescriptor * FUN_0054b980(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(double))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054b990(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054b9b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054b9c0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  puVar7 = &uStack_1c;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  func_0x00563860(&uStack_1c);
  puVar6 = &uStack_1c;
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
  FUN_008ab370(puVar6,puVar7);
  return;
}



undefined4 * __fastcall FUN_0054baf0(int param_1)

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



TypeDescriptor * FUN_0054bba0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(double_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054bbb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054bbd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054bbe0(undefined4 *param_1)

{
  func_0x00509bc0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054bc00(int param_1)

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



TypeDescriptor * FUN_0054bcb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(unsigned_short))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054bcc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054bce0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054bcf0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054be50(int param_1)

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



TypeDescriptor * FUN_0054bf00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_short_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054bf10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054bf30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054bf40(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar4 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054c0a0(int param_1)

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



TypeDescriptor * FUN_0054c150(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_char_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c160(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054c180(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054c190(undefined4 *param_1)

{
  func_0x005094d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054c1b0(int param_1)

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



TypeDescriptor * FUN_0054c260(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(unsigned_char))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c270(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054c290(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c2a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar5;
  iVar6 = func_0x00d661e0(*param_2,uVar5);
  while (iVar6 != 1) {
    iVar6 = func_0x00d661e0(*param_2,uVar5);
    if (iVar6 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar6 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  cVar4 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,(int)cVar4);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar6 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar6;
    UNLOCK();
    if (iVar6 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054c400(int param_1)

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



TypeDescriptor * FUN_0054c4b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(signed_char_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c4c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054c4e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054c4f0(undefined4 *param_1)

{
  func_0x00508f10(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054c510(int param_1)

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



TypeDescriptor * FUN_0054c5c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(signed_char))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c5d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054c5f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054c600(undefined4 *param_1)

{
  func_0x00508a80(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054c620(int param_1)

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



TypeDescriptor * FUN_0054c6d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Creature::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c6e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054c700(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054c710(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe2b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  func_0x00564c60(appuStack_34,&uStack_1c);
  uStack_8._0_1_ = 3;
  pppuVar6 = appuStack_34;
  if (0xf < uStack_20) {
    pppuVar6 = (undefined4 ***)appuStack_34[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar6,uStack_24);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_20) {
    func_0x0046b1f0(appuStack_34,appuStack_34[0],uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  appuStack_34[0] = (undefined4 **)((uint)appuStack_34[0] & 0xffffff00);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054c890(int param_1)

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



TypeDescriptor * FUN_0054c940(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c950(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054c970(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054c980(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d7a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x00471ec0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054cad0(int param_1)

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



TypeDescriptor * FUN_0054cb80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_Creature::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054cb90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054cbb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054cbc0(undefined4 *param_1)

{
  func_0x005083b0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054cbe0(int param_1)

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



TypeDescriptor * FUN_0054cc90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_CreatureType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054cca0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054ccc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ccd0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e120();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054ce30(int param_1)

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



TypeDescriptor * FUN_0054cee0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_CreatureType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054cef0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054cf10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054cf20(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [52];
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe4dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e120();
  func_0x00564d60(auStack_6c,&uStack_1c);
  uStack_8._0_1_ = 3;
  func_0x0056f630();
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_24) {
    func_0x0046b1f0(auStack_38,auStack_38[0],uStack_24);
  }
  uStack_28 = 0;
  uStack_24 = 0xf;
  auStack_38[0] = auStack_38[0] & 0xffffff00;
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054d090(int param_1)

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



TypeDescriptor * FUN_0054d140(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Outfit_(__thiscall_CreatureType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054d150(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054d170(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054d180(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe2b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e120();
  func_0x00564c60(appuStack_34,&uStack_1c);
  uStack_8._0_1_ = 3;
  pppuVar6 = appuStack_34;
  if (0xf < uStack_20) {
    pppuVar6 = (undefined4 ***)appuStack_34[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar6,uStack_24);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_20) {
    func_0x0046b1f0(appuStack_34,appuStack_34[0],uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  appuStack_34[0] = (undefined4 **)((uint)appuStack_34[0] & 0xffffff00);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054d300(int param_1)

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



TypeDescriptor * FUN_0054d3b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_CreatureType::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054d3c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054d3e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054d3f0(undefined4 *param_1)

{
  func_0x00507b00(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054d410(int param_1)

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



TypeDescriptor * FUN_0054d4c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_CreatureType::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054d4d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054d4f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054d500(undefined4 *param_1)

{
  func_0x005076f0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054d520(int param_1)

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



TypeDescriptor * FUN_0054d5d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_CreatureType::*)(class_Outfit_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054d5e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054d600(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054d610(undefined4 *param_1)

{
  func_0x00507260(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054d630(int param_1)

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



TypeDescriptor * FUN_0054d6e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_CreatureType::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054d6f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054d710(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054d720(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [12];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe06d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d2f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_28;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054d880(int param_1)

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



TypeDescriptor * FUN_0054d930(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_Town::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054d940(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054d960(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054d970(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 ***pppuVar6;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe2b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d2f0();
  func_0x00564c60(appuStack_34,&uStack_1c);
  uStack_8._0_1_ = 3;
  pppuVar6 = appuStack_34;
  if (0xf < uStack_20) {
    pppuVar6 = (undefined4 ***)appuStack_34[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar6,uStack_24);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_20) {
    func_0x0046b1f0(appuStack_34,appuStack_34[0],uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  appuStack_34[0] = (undefined4 **)((uint)appuStack_34[0] & 0xffffff00);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
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
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054daf0(int param_1)

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



TypeDescriptor * FUN_0054dba0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_Town::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054dbb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054dbd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054dbe0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdfdd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d2f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
  (*pcVar2)();
  func_0x00471ec0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054dd30(int param_1)

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



TypeDescriptor * FUN_0054dde0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_Town::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ddf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054de10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054de20(undefined4 *param_1)

{
  func_0x00506990(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054de40(int param_1)

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



TypeDescriptor * FUN_0054def0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Town::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054df00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054df20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054df30(undefined4 *param_1)

{
  func_0x00506500(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054df50(int param_1)

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



TypeDescriptor * FUN_0054e000(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Town::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e010(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054e030(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054e040(undefined4 *param_1)

{
  func_0x00506190(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054e060(int param_1)

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



TypeDescriptor * FUN_0054e110(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Town::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e120(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054e140(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054e150(undefined4 *param_1)

{
  func_0x00505e40(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054e170(int param_1)

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



TypeDescriptor * FUN_0054e220(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::vector<>_(__thiscall_Spawn::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e230(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054e250(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054e260(undefined4 *param_1)

{
  func_0x00505960(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054e280(int param_1)

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



TypeDescriptor * FUN_0054e330(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Spawn::*)(class_Position_const&,class_std::shared_ptr<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e340(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054e360(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e370(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_28 [12];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe06d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d5a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  puVar6 = auStack_28;
  _guard_check_icall(puVar6,puVar7);
  (*pcVar2)();
  func_0x0056fcf0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar6,puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054e4d0(int param_1)

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



TypeDescriptor * FUN_0054e580(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_Spawn::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e590(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054e5b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054e5c0(undefined4 *param_1)

{
  func_0x00505410(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054e5e0(int param_1)

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



TypeDescriptor * FUN_0054e690(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Spawn::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e6a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054e6c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e6d0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebde5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_2,uVar4);
  while (iVar5 != 1) {
    iVar5 = func_0x00d661e0(*param_2,uVar4);
    if (iVar5 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_2);
  }
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d5a0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7);
  uVar6 = (*pcVar2)();
  func_0x00d66720(DAT_0145e9f0,uVar6);
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall(puVar7);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_0054e830(int param_1)

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



TypeDescriptor * FUN_0054e8e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Spawn::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054e8f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054e910(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054e920(undefined4 *param_1)

{
  func_0x00504ee0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054e940(int param_1)

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



TypeDescriptor * FUN_0054e9f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Spawn::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ea00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054ea20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054ea30(undefined4 *param_1)

{
  func_0x00504a40(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054ea50(int param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
