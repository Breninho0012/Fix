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



TypeDescriptor * FUN_0054eb00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_House::*)(class_std::shared_ptr<class_Item>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054eb10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054eb30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054eb40(int param_1,undefined4 *param_2)

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
  func_0x0052d250();
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



undefined4 * __fastcall FUN_0054eca0(int param_1)

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



TypeDescriptor * FUN_0054ed50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_House::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ed60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054ed80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ed90(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebe1ed;
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
  uStack_28 = 0xffff;
  uStack_20 = 0xff;
  uStack_24 = 0xffff;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052e060();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_28;
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



undefined4 * __fastcall FUN_0054eef0(int param_1)

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



TypeDescriptor * FUN_0054efa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_House::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054efb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054efd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054efe0(undefined4 *param_1)

{
  func_0x00504350(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054f000(int param_1)

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



TypeDescriptor * FUN_0054f0b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Tile>_(__thiscall_House::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f0c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f0e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054f0f0(undefined4 *param_1)

{
  func_0x00503eb0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054f110(int param_1)

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



TypeDescriptor * FUN_0054f1c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_House::*)(class_std::shared_ptr<class_Tile>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f1d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f1f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054f200(undefined4 *param_1)

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
  func_0x0052d250();
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



undefined4 * __fastcall FUN_0054f380(int param_1)

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



TypeDescriptor * FUN_0054f430(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_House::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f440(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f460(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054f470(undefined4 *param_1)

{
  func_0x00503860(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054f490(int param_1)

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



TypeDescriptor * FUN_0054f540(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_House::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f550(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f570(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f580(int param_1,undefined4 *param_2)

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
  func_0x0052d250();
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



undefined4 * __fastcall FUN_0054f6d0(int param_1)

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



TypeDescriptor * FUN_0054f780(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_House::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f790(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f7b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054f7c0(undefined4 *param_1)

{
  func_0x00503330(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054f7e0(int param_1)

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



TypeDescriptor * FUN_0054f890(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_House::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f8a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f8c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Thing::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f8d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f8f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054f900(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054f920(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054f930(undefined4 *param_1)

{
  func_0x00502ee0(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054f950(int param_1)

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



TypeDescriptor * FUN_0054fa00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054fa10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054fa30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054fa40(undefined4 *param_1)

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
  func_0x0052d390();
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



undefined4 * __fastcall FUN_0054fbb0(int param_1)

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



TypeDescriptor * FUN_0054fc60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(struct_MarketData_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054fc70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054fc90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054fca0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054fcc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054fcd0(undefined4 *param_1)

{
  func_0x00502810(*param_1);
  return;
}



undefined4 * __fastcall FUN_0054fcf0(int param_1)

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



TypeDescriptor * FUN_0054fda0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Thing::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054fdb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054fdd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_0054fde0(undefined4 *param_1)

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
  func_0x0052d390();
  func_0x00562e60(&uStack_1c);
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



undefined4 * __fastcall FUN_0054ff10(int param_1)

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



TypeDescriptor * FUN_0054ffc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Tile>_const&_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_0054ffd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_0054fff0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550000(int param_1,undefined4 *param_2)

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
  func_0x0052d390();
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



undefined4 * __fastcall FUN_00550160(int param_1)

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



TypeDescriptor * FUN_00550210(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550220(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00550240(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550250(int param_1,undefined4 *param_2)

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
  func_0x0052d390();
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



undefined4 * __fastcall FUN_005503b0(int param_1)

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



TypeDescriptor * FUN_00550460(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550470(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00550490(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005504a0(int param_1,undefined4 *param_2)

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
  func_0x0052d390();
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



undefined4 * __fastcall FUN_005505f0(int param_1)

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



TypeDescriptor * FUN_005506a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_Thing::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005506b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005506d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005506e0(undefined4 *param_1)

{
  func_0x00501d80(*param_1);
  return;
}



undefined4 * __fastcall FUN_00550700(int param_1)

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



TypeDescriptor * FUN_005507b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Thing::*)(class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005507c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005507e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005507f0(undefined4 *param_1)

{
  func_0x00501a10(*param_1);
  return;
}



undefined4 * __fastcall FUN_00550810(int param_1)

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



TypeDescriptor * FUN_005508c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Thing::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005508d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005508f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550900(int param_1,undefined4 *param_2)

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
  func_0x0052d640();
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



undefined4 * __fastcall FUN_00550a60(int param_1)

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



TypeDescriptor * FUN_00550b10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Container::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550b20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00550b40(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00550b50(undefined4 *param_1)

{
  func_0x00501500(*param_1);
  return;
}



undefined4 * __fastcall FUN_00550b70(int param_1)

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



TypeDescriptor * FUN_00550c20(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Item>_(__thiscall_Container::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550c30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00550c50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00550c60(undefined4 *param_1)

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
  func_0x0052d640();
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



undefined4 * __fastcall FUN_00550de0(int param_1)

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



TypeDescriptor * FUN_00550e90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_Container::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550ea0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00550ec0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00550ee0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
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
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052dfb0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_20;
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



undefined4 * __fastcall FUN_00551040(int param_1)

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



TypeDescriptor * FUN_005510f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_Container::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00551100(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

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



void __thiscall FUN_005511a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005511c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005511d0(int param_1,undefined4 *param_2)

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
  func_0x0052d640();
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



undefined4 * __fastcall FUN_00551330(int param_1)

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



TypeDescriptor * FUN_005513e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Container::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005513f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551410(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00551420(undefined4 *param_1)

{
  func_0x00500bb0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00551440(int param_1)

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



TypeDescriptor * FUN_005514f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::deque<>_(__thiscall_Container::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00551500(int param_1,undefined4 param_2,int *param_3)

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
  
  puStack_c = &DAT_00ebec2a;
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



void __thiscall FUN_00551610(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551630(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00551640(undefined4 *param_1)

{
  func_0x00500850(*param_1);
  return;
}



undefined4 * __fastcall FUN_00551660(int param_1)

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



TypeDescriptor * FUN_00551710(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Item>_(__thiscall_Container::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00551720(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551740(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00551750(undefined4 *param_1)

{
  func_0x005004d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00551770(int param_1)

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



TypeDescriptor * FUN_00551820(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Position_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00551830(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551850(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00551860(undefined4 *param_1)

{
  func_0x00500030(*param_1);
  return;
}



undefined4 * __fastcall FUN_00551880(int param_1)

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



TypeDescriptor * FUN_00551930(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<class_Item>_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&,int,bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_00551940(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 *param_5,
            undefined1 *param_6)

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
  
  puStack_c = &DAT_00ebe41a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2,param_4,*param_5,*param_6);
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



void __thiscall FUN_00551a60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551a80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00551a90(undefined4 *param_1)

{
  func_0x004ffbc0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00551ab0(int param_1)

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



TypeDescriptor * FUN_00551b60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_00551b70(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

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
  
  puStack_c = &DAT_00ebe41a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2,param_4,*param_5);
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



void __thiscall FUN_00551c90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551cb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00551cc0(undefined4 *param_1)

{
  func_0x004ff810(*param_1);
  return;
}



undefined4 * __fastcall FUN_00551ce0(int param_1)

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



TypeDescriptor * FUN_00551d90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00551da0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551dc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00551dd0(undefined4 *param_1)

{
  func_0x004ff390(*param_1);
  return;
}



undefined4 * __fastcall FUN_00551df0(int param_1)

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



TypeDescriptor * FUN_00551ea0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Outfit_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&,bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_00551eb0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined1 *param_5)

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
  
  puStack_c = &DAT_00ebe59a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2,param_4,*param_5);
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



void __thiscall FUN_00551fd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00551ff0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00552000(undefined4 *param_1)

{
  func_0x004fef20(*param_1);
  return;
}



undefined4 * __fastcall FUN_00552020(int param_1)

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



TypeDescriptor * FUN_005520d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&,class_Position))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005520e0(int param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

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
    _guard_check_icall(param_3,*param_4,*(undefined4 *)(param_4 + 1));
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



void __thiscall FUN_00552190(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005521b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005521c0(undefined4 *param_1)

{
  func_0x004fea70(*param_1);
  return;
}



undefined4 * __fastcall FUN_005521e0(int param_1)

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



TypeDescriptor * FUN_00552290(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&,int,int,int,int,int,int,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_005522a0(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10)

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
    _guard_check_icall(param_3,*param_4,*param_5,*param_6,*param_7,*param_8,*param_9,*param_10);
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



void __thiscall FUN_00552350(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00552370(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00552380(undefined4 *param_1)

{
  func_0x004fe600(*param_1);
  return;
}



undefined4 * __fastcall FUN_005523a0(int param_1)

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



TypeDescriptor * FUN_00552450(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&,int,int,int,int,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00552460(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

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
    _guard_check_icall(param_3,*param_4,*param_5,*param_6,*param_7,*param_8);
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



void __thiscall FUN_00552510(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00552530(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00552540(undefined4 *param_1)

{
  func_0x004fe1a0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00552560(int param_1)

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



TypeDescriptor * FUN_00552610(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_ProtocolGame::*)(class_std::shared_ptr<>_const&,class_Position_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00552620(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_00552640(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00552650(undefined4 *param_1)

{
  func_0x004fdcf0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00552670(int param_1)

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



TypeDescriptor * FUN_00552720(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_ProtocolGame::*)(unsigned_char,class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00552730(int param_1,int *param_2,undefined1 *param_3,undefined4 param_4)

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
    _guard_check_icall(*param_3,param_4);
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



void __thiscall FUN_005527d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005527f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<void,class_std::function<>,class_std::tuple<class_std::shared_ptr<>,class_std::basic_string<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00552800(undefined4 *param_1)

{
  func_0x004fd770(*param_1);
  return;
}



undefined4 * __fastcall FUN_00552820(int param_1)

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
  *puVar3 = std::
            _Func_impl_no_alloc<class_`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>
            ::vftable;
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



TypeDescriptor * FUN_005528d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<void,class_ProtocolGame,class_std::basic_string<>_const&,class_std::basic_string<char,struct_std::char_traits<char>,class_std::alloca...t&,class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_005528e0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined2 *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

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
    _guard_check_icall(param_3,param_4,param_5,*param_6,param_7,param_8,param_9,param_10);
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



void __thiscall FUN_00552990(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<class_`class_std::function<>___cdecl_luabinder::make_mem_func<void,class_ProtocolGame,class_std::basic_string<>_const&,class_std::basic_string<>
             ::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_005529b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005529c0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
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
  _guard_check_icall(&uStack_c);
  uVar3 = (*pcVar1)();
  func_0x00d66720(DAT_0145e9f0,uVar3);
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00552a80(int param_1)

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



void __thiscall FUN_00552b30(undefined4 param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab8a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0xc,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_00552b80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_HealthBars::*)(int),class_HealthBars*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00552b90(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00552bc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00552be0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00552bf0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_14 [8];
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
  _guard_check_icall(auStack_14,&uStack_c);
  (*pcVar1)();
  func_0x0077dad0();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00552ca0(int param_1)

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



TypeDescriptor * FUN_00552d50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_TPoint<int>_(__thiscall_HealthBars::*)(int),class_HealthBars*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00552d60(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3);
  (*pcVar1)();
  return param_2;
}



void __thiscall FUN_00552d90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00552db0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00552dc0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_30 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebec5d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar1;
  iVar2 = func_0x00d661e0(*param_1,uVar1);
  while (iVar2 != 1) {
    iVar2 = func_0x00d661e0(*param_1,uVar1);
    if (iVar2 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_1);
  }
  uStack_18 = func_0x00530eb0();
  func_0x00564c60(appuStack_30,&uStack_18);
  uStack_8 = 0;
  pppuVar3 = appuStack_30;
  if (0xf < uStack_1c) {
    pppuVar3 = (undefined4 ***)appuStack_30[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar3,uStack_20);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(appuStack_30,appuStack_30[0],uStack_1c);
  }
  uStack_20 = 0;
  uStack_1c = 0xf;
  appuStack_30[0] = (undefined4 **)((uint)appuStack_30[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00552ed0(int param_1)

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



TypeDescriptor * FUN_00552f80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_HealthBars::*)(int),class_HealthBars*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00552f90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebed12;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00553060(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553080(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00553090(undefined4 *param_1)

{
  func_0x004fceb0(*param_1);
  return;
}



undefined4 * __fastcall FUN_005530b0(int param_1)

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



TypeDescriptor * FUN_00553160(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_HealthBars::*)(class_std::basic_string<>_const&,int,int,int,int,int),class_HealthBars*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00553170(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4,*param_5,*param_6,*param_7);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005531c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005531e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(unsigned_int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005531f0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553220(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553240(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(unsigned_int_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00553250(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553270(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553290(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(float),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005532a0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005532d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005532f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(float_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00553300(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553320(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553340(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __fastcall FUN_00553350(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_XMM0_Qa;
  
  iVar2 = func_0x00d661e0();
  while (iVar2 != 0) {
    iVar2 = func_0x00d661e0();
    if (iVar2 < 0) {
      func_0x00d667d0();
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0();
  }
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall();
  (*pcVar1)();
  func_0x008abf00();
  func_0x00d667f0(DAT_0145e9f0,in_XMM0_Qa);
  return 1;
}



undefined4 * __fastcall FUN_00553400(int param_1)

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



TypeDescriptor * FUN_005534b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(__int64_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005534c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005534e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005534f0(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined8 uVar8;
  undefined1 auStack_94 [84];
  undefined1 auStack_40 [24];
  int iStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebed45;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar3;
  iVar4 = func_0x00d661e0(*param_1,uVar3);
  while (iVar4 != 1) {
    iVar4 = func_0x00d661e0(*param_1,uVar3);
    if (iVar4 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar4 = func_0x00d661e0(*param_1);
  }
  fVar7 = (float10)func_0x00d66f90(DAT_0145e9f0,0xffffffff);
  uStack_24 = (double)fVar7;
  if (((uStack_24 == 0.0) && (iVar4 = func_0x00d662f0(DAT_0145e9f0,0xffffffff), iVar4 == 0)) &&
     (iVar4 = func_0x00d67010(DAT_0145e9f0,0xffffffff), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar8 = func_0x008abe00();
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_24._4_4_ = uVar5;
  if (bVar2) {
    func_0x00d66d90(*param_1,0xfffffffe);
    uStack_18 = uStack_24._4_4_;
    uStack_1c = (int)uVar8;
    if (*(int **)(iStack_28 + 0x2c) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(iStack_28 + 0x2c) + 8);
      _guard_check_icall(&uStack_1c);
      (*pcVar1)();
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  else {
    uVar5 = func_0x00567a80();
    uStack_8 = 0;
    uVar6 = func_0x0077a990(0xffffffff);
    func_0x00469d30(uVar6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x00776a70(auStack_40,uVar5);
    func_0x00e87d2e(auStack_94,&DAT_012886ec);
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00553680(int param_1)

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



TypeDescriptor * FUN_00553730(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(__int64),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00553740(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,param_2[1]);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553770(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553790(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005537a0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 uStack_9;
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
  uStack_9 = func_0x00531f30();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_9);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00553850(int param_1)

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



TypeDescriptor * FUN_00553900(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(unsigned_char),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00553910(int param_1,undefined1 *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553940(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553960(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00553970(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  undefined1 auStack_c [4];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 3) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 3) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
  func_0x00d66d90(*param_2,0xfffffffe);
  auStack_14[0] = iVar2 != 0;
  uStack_10 = func_0x00530a70();
  auStack_c[0] = func_0x00531f30();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_c,&uStack_10,auStack_14);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00553a50(int param_1)

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



TypeDescriptor * FUN_00553b00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(unsigned_char,unsigned_int,bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00553b10(int param_1,undefined1 *param_2,undefined4 *param_3,undefined1 *param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,*param_3,*param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553b40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553b60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00553b70(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 3) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 3) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  uStack_14 = func_0x00530eb0();
  uStack_10 = func_0x00530eb0();
  uStack_c = func_0x00530eb0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_c,&uStack_10,&uStack_14);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00553c40(int param_1)

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



TypeDescriptor * FUN_00553cf0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(int,int,int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00553d00(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,*param_3,*param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553d30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553d50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00553d60(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_30;
  uint auStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebed9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  auStack_2c[6] = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 2) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  uStack_30 = 0;
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = 0;
  uStack_8 = 2;
  func_0x0052da40();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,&uStack_30);
  (*pcVar1)();
  uStack_8 = 0xffffffff;
  if (0xf < auStack_2c[5]) {
    uVar4 = auStack_2c[5] + 1;
    uVar2 = auStack_2c[0];
    if (0xfff < uVar4) {
      uVar2 = *(uint *)(auStack_2c[0] - 4);
      uVar4 = auStack_2c[5] + 0x24;
      if (0x1f < (auStack_2c[0] - uVar2) - 4) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(uVar2,uVar4);
  }
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00553ed0(int param_1)

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



TypeDescriptor * FUN_00553f80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::basic_string<>_const&,int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00553f90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00553fc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00553fe0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00553ff0(undefined4 *param_1)

{
  func_0x004fbe60(*param_1);
  return;
}



undefined4 * __fastcall FUN_00554010(int param_1)

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



TypeDescriptor * FUN_005540c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(int,int,class_std::basic_string<>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005540d0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,*param_3,param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00554100(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00554120(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00554130(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 0) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
    _guard_check_icall();
    uVar3 = (*pcVar1)();
    func_0x00d66720(DAT_0145e9f0,uVar3);
    return 1;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}



undefined4 * __fastcall FUN_005541d0(int param_1)

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



TypeDescriptor * FUN_00554280(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(enum_Otc::Direction_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00554290(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005542b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_Position_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005542c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005542e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00554300(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00554310(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 3) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 3) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  uStack_14 = func_0x00530eb0();
  uStack_10 = func_0x00530eb0();
  uStack_c = func_0x00530a70();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_c,&uStack_10,&uStack_14);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_005543e0(int param_1)

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



TypeDescriptor * FUN_00554490(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(unsigned_int,int,int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005544a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005544c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005544d0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
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
  uStack_c = func_0x00531e60();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_c);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00554580(int param_1)

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



TypeDescriptor * FUN_00554630(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(enum_Otc::GameFeature),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00554640(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00554660(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00554670(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_14;
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
  iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
  func_0x00d66d90(*param_2,0xfffffffe);
  auStack_14[0] = iVar2 != 0;
  uStack_10 = func_0x00531e60();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_10,auStack_14);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00554750(int param_1)

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



TypeDescriptor * FUN_00554800(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(enum_Otc::GameFeature,bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00554810(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,*param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00554840(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00554860(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00554870(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  param_2 = (undefined4 *)*param_2;
  iVar3 = func_0x00d661e0(*param_2);
  while (iVar3 != 1) {
    iVar3 = func_0x00d661e0(*param_2);
    if (iVar3 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  uStack_c = func_0x00531e60();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_c);
  uVar2 = (*pcVar1)();
  func_0x00d66630(DAT_0145e9f0,uVar2);
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00554930(int param_1)

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



TypeDescriptor * FUN_005549e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Game::*)(enum_Otc::GameFeature),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005549f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00554a10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00554a20(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebeddd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar1;
  iVar2 = func_0x00d661e0(*param_1,uVar1);
  while (iVar2 != 0) {
    iVar2 = func_0x00d661e0(*param_1,uVar1);
    if (iVar2 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_1);
  }
  iStack_18 = 0;
  uStack_20 = 0;
  func_0x00562990(&uStack_20);
  uStack_8 = 0;
  func_0x004a1230(&uStack_20);
  uStack_8 = 0xffffffff;
  if ((int)uStack_20 != 0) {
    func_0x0046aa00((int)uStack_20,iStack_18 - (int)uStack_20);
    uStack_20 = 0;
    iStack_18 = 0;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00554b20(int param_1)

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



TypeDescriptor * FUN_00554bd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::vector<>_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00554be0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebee92;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00554ca0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00554cc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00554cd0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebef32;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00554d90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00554db0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00554dc0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x00562a10(&uStack_1c);
  uStack_8 = 0;
  func_0x005635a0(&uStack_1c);
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



undefined4 * __fastcall FUN_00554ed0(int param_1)

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



TypeDescriptor * FUN_00554f80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00554f90(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebefd2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00555050(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00555070(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00555080(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x00562a10(&uStack_1c);
  uStack_8 = 0;
  func_0x004719c0();
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



undefined4 * __fastcall FUN_00555190(int param_1)

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



TypeDescriptor * FUN_00555240(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00555250(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00555270(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00555280(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 0) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x00562a10(&uStack_1c);
  uStack_8 = 0;
  func_0x00471a90();
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



undefined4 * __fastcall FUN_00555390(int param_1)

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



TypeDescriptor * FUN_00555440(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00555450(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00555470(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00555480(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf005;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar1;
  iVar2 = func_0x00d661e0(*param_1,uVar1);
  while (iVar2 != 0) {
    iVar2 = func_0x00d661e0(*param_1,uVar1);
    if (iVar2 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_1);
  }
  uStack_1c = 0;
  func_0x00562a90(&uStack_1c);
  uStack_8 = 0;
  func_0x00567780();
  uStack_8 = 0xffffffff;
  func_0x0049a570(&uStack_1c,*(undefined4 *)((int)uStack_1c + 4));
  func_0x008ab812((int)uStack_1c,0x50);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00555570(int param_1)

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



TypeDescriptor * FUN_00555620(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::map<>_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00555630(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebf0b2;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_005556f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<class_`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<class_std::map<>
             ::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00555710(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00555720(undefined4 *param_1)

{
  int iVar1;
  
  param_1 = (undefined4 *)*param_1;
  iVar1 = func_0x00d661e0(*param_1);
  while (iVar1 != 0) {
    iVar1 = func_0x00d661e0(*param_1);
    if (iVar1 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar1 = func_0x00d661e0(*param_1);
  }
  func_0x00531cd0();
  return;
}



undefined4 * __fastcall FUN_00555790(int param_1)

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



TypeDescriptor * FUN_00555840(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::map<>_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00555850(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebf152;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00555910(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00555930(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00555940(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf17d;
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
  uStack_18 = func_0x00530eb0();
  uStack_20 = 0;
  func_0x00564ce0(&uStack_20,&uStack_18);
  uStack_8 = 0;
  func_0x004719c0();
  uStack_8 = 0xffffffff;
  piVar3 = uStack_20._4_4_;
  if (uStack_20._4_4_ != (int *)0x0) {
    LOCK();
    iVar5 = uStack_20._4_4_[1] + -1;
    uStack_20._4_4_[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar2 = *(code **)*uStack_20._4_4_;
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



undefined4 * __fastcall FUN_00555a60(int param_1)

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



TypeDescriptor * FUN_00555b10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_Game::*)(int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_00555b20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebf232;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00555bf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00555c10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00555c20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_20;
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
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x0052d990();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar7 = &uStack_20;
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



undefined4 * __fastcall FUN_00555d70(int param_1)

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



TypeDescriptor * FUN_00555e20(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::shared_ptr<class_Item>_const&,int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00555e30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00555e50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00555e60(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_28;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 6) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 6) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  uStack_24 = func_0x00530eb0();
  uStack_20 = func_0x00530eb0();
  uStack_1c = func_0x00530eb0();
  uStack_18 = func_0x00530eb0();
  uStack_14 = func_0x00530eb0();
  uStack_10 = func_0x00530eb0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_10,&uStack_14,&uStack_18,&uStack_1c,&uStack_20,&uStack_24);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00555f70(int param_1)

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



TypeDescriptor * FUN_00556020(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(int,int,int,int,int,int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00556030(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,*param_3,*param_4,*param_5,*param_6,*param_7);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00556080(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005560a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005560b0(undefined4 *param_1)

{
  func_0x004fa110(*param_1);
  return;
}



undefined4 * __fastcall FUN_005560d0(int param_1)

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



TypeDescriptor * FUN_00556180(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(unsigned_int,int,class_std::basic_string<>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556190(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005561b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005561c0(undefined4 *param_1)

{
  func_0x004f9d20(*param_1);
  return;
}



undefined4 * __fastcall FUN_005561e0(int param_1)

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



TypeDescriptor * FUN_00556290(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(unsigned_int,class_std::basic_string<>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005562a0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005562d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005562f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00556300(undefined4 *param_1)

{
  func_0x004f9920(*param_1);
  return;
}



undefined4 * __fastcall FUN_00556320(int param_1)

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



TypeDescriptor * FUN_005563d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&,class_std::basic_string<>_const&,class_std::basic_string<>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_005563e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3,param_4,param_5);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00556410(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556430(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00556440(undefined4 *param_1)

{
  func_0x004f9470(*param_1);
  return;
}



undefined4 * __fastcall FUN_00556460(int param_1)

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



TypeDescriptor * FUN_00556510(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::basic_string<>_const&,int,int,class_std::basic_string<>_const&,class_std::basic_string<>_const&,int,bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00556520(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined1 *param_8)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4,param_5,param_6,*param_7,*param_8);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00556570(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556590(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005565a0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined1 auStack_10 [4];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_14;
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
  uStack_14 = func_0x00530eb0();
  iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
  func_0x00d66d90(*param_2,0xfffffffe);
  auStack_10[0] = iVar2 != 0;
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_10,&uStack_14);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00556680(int param_1)

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



TypeDescriptor * FUN_00556730(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(bool,int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556740(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,*param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00556770(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556790(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005567a0(undefined4 *param_1)

{
  func_0x004f8e10(*param_1);
  return;
}



undefined4 * __fastcall FUN_005567c0(int param_1)

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



TypeDescriptor * FUN_00556870(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::shared_ptr<class_Item>_const&,class_std::shared_ptr<>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556880(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005568b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005568d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005568e0(undefined4 *param_1)

{
  func_0x004f8a80(*param_1);
  return;
}



undefined4 * __fastcall FUN_00556900(int param_1)

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



TypeDescriptor * FUN_005569b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::shared_ptr<class_Item>_const&,int,bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005569c0(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_005569f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556a10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00556a20(undefined4 *param_1)

{
  func_0x004f86c0(*param_1);
  return;
}



undefined4 * __fastcall FUN_00556a40(int param_1)

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



TypeDescriptor * FUN_00556af0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::shared_ptr<class_Item>_const&,int,bool,bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00556b00(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4,*param_5);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00556b40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556b60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556b70(int param_1,undefined4 *param_2)

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
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
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
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00556cc0(int param_1)

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



TypeDescriptor * FUN_00556d70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::shared_ptr<class_Item>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556d80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556da0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556db0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556dd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556de0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556e00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00556e10(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  param_2 = (undefined4 *)*param_2;
  iVar2 = func_0x00d661e0(*param_2);
  while (iVar2 != 0) {
    iVar2 = func_0x00d661e0(*param_2);
    if (iVar2 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_2);
  }
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_10);
  (*pcVar1)();
  func_0x004a1420(auStack_10);
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00556eb0(int param_1)

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



TypeDescriptor * FUN_00556f60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(struct_UnjustifiedPoints_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __thiscall FUN_00556f70(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_b [7];
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(auStack_b);
  puVar2 = (undefined4 *)(*pcVar1)();
  *param_2 = *puVar2;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar2 + 1);
  *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)puVar2 + 6);
  return param_2;
}



void __thiscall FUN_00556fb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00556fd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_00556fe0(int param_1)

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



TypeDescriptor * FUN_00557090(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(enum_Otc::PVPModes_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005570a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005570c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_005570d0(int param_1)

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



TypeDescriptor * FUN_00557180(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(enum_Otc::FightModes_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557190(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005571b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_005571c0(int param_1)

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



TypeDescriptor * FUN_00557270(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(enum_Otc::ChaseModes_(__thiscall_Game::*)(void),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557280(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005572a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005572b0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [84];
  undefined1 auStack_30 [24];
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf265;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 1) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  iVar3 = func_0x00d66eb0(DAT_0145e9f0,0xffffffff);
  if (((iVar3 == 0) && (iVar4 = func_0x00d662f0(DAT_0145e9f0,0xffffffff), iVar4 == 0)) &&
     (iVar4 = func_0x00d67010(DAT_0145e9f0,0xffffffff), iVar4 != 0)) {
    uVar5 = func_0x005673b0();
    uStack_8 = 0;
    uVar6 = func_0x0077a990(0xffffffff);
    func_0x00469d30(uVar6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x00776a70(auStack_30,uVar5);
    func_0x00e87d2e(auStack_84,&DAT_012886ec);
  }
  else {
    func_0x00d66d90(*param_2,0xfffffffe);
    iStack_18 = iVar3;
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
      _guard_check_icall(&iStack_18);
      (*pcVar1)();
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00557400(int param_1)

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



TypeDescriptor * FUN_005574b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(enum_Otc::PVPModes),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005574c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005574e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005574f0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [84];
  undefined1 auStack_30 [24];
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf265;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 1) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  iVar3 = func_0x00d66eb0(DAT_0145e9f0,0xffffffff);
  if (((iVar3 == 0) && (iVar4 = func_0x00d662f0(DAT_0145e9f0,0xffffffff), iVar4 == 0)) &&
     (iVar4 = func_0x00d67010(DAT_0145e9f0,0xffffffff), iVar4 != 0)) {
    uVar5 = func_0x00567300();
    uStack_8 = 0;
    uVar6 = func_0x0077a990(0xffffffff);
    func_0x00469d30(uVar6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x00776a70(auStack_30,uVar5);
    func_0x00e87d2e(auStack_84,&DAT_012886ec);
  }
  else {
    func_0x00d66d90(*param_2,0xfffffffe);
    iStack_18 = iVar3;
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
      _guard_check_icall(&iStack_18);
      (*pcVar1)();
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00557640(int param_1)

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



TypeDescriptor * FUN_005576f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(enum_Otc::FightModes),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557700(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00557720(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557730(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_84 [84];
  undefined1 auStack_30 [24];
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf265;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 1) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  iVar3 = func_0x00d66eb0(DAT_0145e9f0,0xffffffff);
  if (((iVar3 == 0) && (iVar4 = func_0x00d662f0(DAT_0145e9f0,0xffffffff), iVar4 == 0)) &&
     (iVar4 = func_0x00d67010(DAT_0145e9f0,0xffffffff), iVar4 != 0)) {
    uVar5 = func_0x00567250();
    uStack_8 = 0;
    uVar6 = func_0x0077a990(0xffffffff);
    func_0x00469d30(uVar6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x00776a70(auStack_30,uVar5);
    func_0x00e87d2e(auStack_84,&DAT_012886ec);
  }
  else {
    func_0x00d66d90(*param_2,0xfffffffe);
    iStack_18 = iVar3;
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
      _guard_check_icall(&iStack_18);
      (*pcVar1)();
      *unaff_FS_OFFSET = iStack_10;
      FUN_008ab370();
      return;
    }
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __fastcall FUN_00557880(int param_1)

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



TypeDescriptor * FUN_00557930(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(enum_Otc::ChaseModes),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557940(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00557960(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_00557970(undefined4 *param_1)

{
  func_0x004f7430(*param_1);
  return;
}



undefined4 * __fastcall FUN_00557990(int param_1)

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



TypeDescriptor * FUN_00557a40(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(int,class_std::basic_string<>_const&,int,bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_00557a50(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 *param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,param_3,*param_4,*param_5);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00557a90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00557ab0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557ac0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [52];
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined1 auStack_64 [52];
  uint auStack_30 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf2de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 1) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 1) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  puStack_68 = auStack_64;
  func_0x0058ac20();
  uStack_8 = 2;
  uVar4 = func_0x00531b00(auStack_bc);
  uStack_8._0_1_ = 3;
  func_0x00530450(uVar4);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  if (0xf < uStack_74) {
    func_0x0046b1f0(auStack_88,auStack_88[0],uStack_74);
  }
  uStack_78 = 0;
  uStack_74 = 0xf;
  auStack_88[0] = auStack_88[0] & 0xffffff00;
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_64);
  (*pcVar1)();
  puStack_6c = auStack_64;
  uStack_8 = 0xffffffff;
  puStack_68 = puStack_6c;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(auStack_30,auStack_30[0],uStack_1c);
  }
  uStack_20 = 0;
  uStack_1c = 0xf;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00557c30(int param_1)

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



TypeDescriptor * FUN_00557ce0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_Outfit_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557cf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00557d10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557d20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00557d40(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557d50(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
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
  _guard_check_icall(&uStack_c);
  (*pcVar1)();
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00557e00(int param_1)

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



TypeDescriptor * FUN_00557eb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(int),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557ec0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00557ee0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00557ef0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf33d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 3) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 3) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  func_0x00531a60();
  uStack_18 = 0;
  uStack_8 = 1;
  uVar4 = func_0x005307a0(auStack_60);
  uStack_8._0_1_ = 2;
  func_0x00469bd0(uVar4);
  uStack_8._0_1_ = 1;
  if (0xf < uStack_4c) {
    func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
  }
  uStack_50 = 0;
  uStack_4c = 0xf;
  auStack_60[0] = auStack_60[0] & 0xffffff00;
  uVar4 = func_0x005307a0(auStack_60);
  uStack_8._0_1_ = 3;
  func_0x00469bd0(uVar4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (0xf < uStack_4c) {
    func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
  }
  uStack_50 = 0;
  uStack_4c = 0xf;
  auStack_60[0] = auStack_60[0] & 0xffffff00;
  uStack_18 = func_0x00563920();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(&uStack_18,auStack_30,auStack_48);
  (*pcVar1)();
  uStack_8 = 0xffffffff;
  func_0x0052c670();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00558080(int param_1)

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



TypeDescriptor * FUN_00558130(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(enum_Otc::MessageMode,class_std::basic_string<>_const&,class_std::basic_string<>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00558140(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(*param_2,param_3,param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00558170(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00558190(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_005581a0(undefined4 *param_1)

{
  func_0x004f6a90(*param_1);
  return;
}



undefined4 * __fastcall FUN_005581c0(int param_1)

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



TypeDescriptor * FUN_00558270(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(enum_Otc::MessageMode,int,class_std::basic_string<>_const&),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00558280(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005582a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005582b0(int param_1,undefined4 *param_2)

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
  puVar6 = &uStack_1c;
  _guard_check_icall(puVar6);
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
      _guard_check_icall(puVar6);
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar2 = *(code **)(*piVar3 + 4);
        _guard_check_icall(puVar6);
        (*pcVar2)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_00558400(int param_1)

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



TypeDescriptor * FUN_005584b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::shared_ptr<>),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



int __thiscall FUN_005584c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebf385;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_2 + 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_2 + 4) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(param_2 + 4);
  piVar1 = piVar3 + 1;
  pcVar4 = *(code **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_8 = 0;
  _guard_check_icall();
  iVar5 = (*pcVar4)();
  uStack_8 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      iVar5 = (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



void __thiscall FUN_005585b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_005585d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_005585e0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_20 [4];
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
  func_0x0052d6e0();
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



undefined4 * __fastcall FUN_00558730(int param_1)

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



TypeDescriptor * FUN_005587e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Game::*)(class_std::shared_ptr<>,bool),class_Game*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



int __thiscall FUN_005587f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ebf3cd;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(param_2 + 4) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)(param_2 + 4) + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar3 = *(int **)(param_2 + 4);
  piVar1 = piVar3 + 1;
  pcVar4 = *(code **)(param_1 + 4);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_8 = 1;
  _guard_check_icall();
  iVar5 = (*pcVar4)();
  uStack_8 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      iVar5 = (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar4)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



void __thiscall FUN_005588f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_00558910(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00558920(int param_1,undefined4 *param_2)

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
