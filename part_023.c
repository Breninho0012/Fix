  *unaff_FS_OFFSET = iStack_10;
  return puVar3;
}



TypeDescriptor * FUN_007edd20(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_ScheduledEvent::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007edd30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007edd50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007edd60(int param_1,undefined4 *param_2)

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
  func_0x007d71d0();
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



undefined4 * __fastcall FUN_007edec0(int param_1)

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



TypeDescriptor * FUN_007edf70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_ScheduledEvent::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007edf80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007edfa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007edfb0(int param_1,undefined4 *param_2)

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
  func_0x007d7080();
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



undefined4 * __fastcall FUN_007ee110(int param_1)

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



TypeDescriptor * FUN_007ee1c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Event::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ee1d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ee1f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ee200(int param_1,undefined4 *param_2)

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
  func_0x007d7080();
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



undefined4 * __fastcall FUN_007ee350(int param_1)

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



TypeDescriptor * FUN_007ee400(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Event::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ee410(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ee430(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ee440(int param_1,undefined4 *param_2)

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
  func_0x007d6fb0();
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



undefined4 * __fastcall FUN_007ee5a0(int param_1)

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



TypeDescriptor * FUN_007ee650(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Module::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ee660(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ee680(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ee690(undefined4 *param_1)

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
  func_0x007d6fb0();
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



undefined4 * __fastcall FUN_007ee810(int param_1)

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



TypeDescriptor * FUN_007ee8c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_Module::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ee8d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ee8f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ee900(int param_1,undefined4 *param_2)

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
  func_0x007d6fb0();
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



undefined4 * __fastcall FUN_007eea50(int param_1)

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



TypeDescriptor * FUN_007eeb00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Module::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007eeb10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007eeb30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007eeb40(int param_1,undefined4 *param_2)

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
  func_0x007d6fb0();
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



undefined4 * __fastcall FUN_007eeca0(int param_1)

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



TypeDescriptor * FUN_007eed50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Module::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007eed60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007eed80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007eed90(int param_1,undefined4 *param_2)

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
  func_0x007d69d0();
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



undefined4 * __fastcall FUN_007eeee0(int param_1)

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



TypeDescriptor * FUN_007eef90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Config::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007eefa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007eefc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007eefd0(undefined4 *param_1)

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
  func_0x007d69d0();
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



undefined4 * __fastcall FUN_007ef150(int param_1)

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



TypeDescriptor * FUN_007ef200(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_Config::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ef210(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ef230(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ef240(undefined4 *param_1)

{
  func_0x007b4850(*param_1);
  return;
}



undefined4 * __fastcall FUN_007ef260(int param_1)

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



TypeDescriptor * FUN_007ef310(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Config::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ef320(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ef340(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ef350(undefined4 *param_1)

{
  func_0x007b4470(*param_1);
  return;
}



undefined4 * __fastcall FUN_007ef370(int param_1)

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



TypeDescriptor * FUN_007ef420(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_Config::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ef430(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ef450(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ef460(undefined4 *param_1)

{
  func_0x007b3ee0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007ef480(int param_1)

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



TypeDescriptor * FUN_007ef530(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Config::*)(class_std::basic_string<>_const&,class_std::shared_ptr<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ef540(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ef560(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ef570(undefined4 *param_1)

{
  func_0x007b3b50(*param_1);
  return;
}



undefined4 * __fastcall FUN_007ef590(int param_1)

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



TypeDescriptor * FUN_007ef640(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Config::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ef650(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ef670(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ef680(undefined4 *param_1)

{
  func_0x007b37a0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007ef6a0(int param_1)

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



TypeDescriptor * FUN_007ef750(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Config::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ef760(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ef780(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ef790(undefined4 *param_1)

{
  func_0x007b33b0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007ef7b0(int param_1)

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



TypeDescriptor * FUN_007ef860(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::vector<>_(__thiscall_Config::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_007ef870(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

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
  
  puStack_c = &DAT_00f2699a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 2;
  if (*param_3 != 0) {
    uStack_8 = 5;
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(param_2,param_4);
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



void __thiscall FUN_007ef980(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ef9a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007ef9b0(undefined4 *param_1)

{
  func_0x007b2fe0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007ef9d0(int param_1)

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



TypeDescriptor * FUN_007efa80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_Config::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007efa90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007efab0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007efac0(undefined4 *param_1)

{
  func_0x007b2ba0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007efae0(int param_1)

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



TypeDescriptor * FUN_007efb90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Config::*)(class_std::basic_string<>_const&,class_std::vector<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007efba0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007efbc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007efbd0(undefined4 *param_1)

{
  func_0x007b27a0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007efbf0(int param_1)

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



TypeDescriptor * FUN_007efca0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Config::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007efcb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007efcd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007efce0(int param_1,undefined4 *param_2)

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
  func_0x007d69d0();
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



undefined4 * __fastcall FUN_007efe40(int param_1)

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



TypeDescriptor * FUN_007efef0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Config::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007eff00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007eff20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<class_std::map<>,class_std::function<class_std::map<class_std::basic_string<>,class_std::basic_string<>,struct_std::less<>,class_std::allocator<struct_std::pair<class_std::basic_string<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007eff30(undefined4 *param_1)

{
  func_0x007b21f0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007eff50(int param_1)

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
            _Func_impl_no_alloc<class_`class_std::function<>___cdecl_luabinder::bind_fun_specializer<class_std::map<>,class_std::function<>
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



TypeDescriptor * FUN_007f0000(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<class_std::map<class_std::basic_string<>,class_std::basic_string<>,struct_std::less<>,class_st...sic_string<>),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_007f0010(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 auStack_30 [5];
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26a52;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_40 = param_3;
  uStack_44 = 0x7f0052;
  func_0x00469da0();
  uStack_8 = 5;
  puStack_18 = auStack_58;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_30);
  uStack_8 = 5;
  _guard_check_icall(param_2);
  (*pcVar1)();
  uStack_14 = 4;
  uStack_8 = 2;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(auStack_30,auStack_30[0],uStack_1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f0130(int param_1,undefined4 *param_2)

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



TypeDescriptor * FUN_007f0150(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>_const&)'::__l2::
          <lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f0160(undefined4 *param_1)

{
  func_0x007b1e40(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f0180(int param_1)

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
  *puVar3 = std::_Func_impl_no_alloc<>_>_const&)>_const&)'::`2'::<lambda_1>,int,class_LuaInterface*>
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



TypeDescriptor * FUN_007f0230(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>_>_>_const&),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0240(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0260(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ResourceManager::*)(class_std::basic_string<>),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0270(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0290(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f02a0(undefined4 *param_1)

{
  func_0x007b1a10(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f02c0(int param_1)

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



TypeDescriptor * FUN_007f0370(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ResourceManager::*)(class_std::set<>_const&,bool),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0380(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f03a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f03b0(undefined4 *param_1)

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
  puStack_c = &DAT_00f26a85;
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
  func_0x007f3a10(&uStack_1c);
  uStack_8 = 0;
  func_0x007f53a0();
  uStack_8 = 0xffffffff;
  func_0x00533600(&uStack_1c,*(undefined4 *)((int)uStack_1c + 4));
  func_0x008ab812((int)uStack_1c,0x40);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f04a0(int param_1)

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



TypeDescriptor * FUN_007f0550(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::map<>_(__thiscall_ResourceManager::*)(void),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0560(int param_1,undefined4 *param_2)

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



TypeDescriptor * FUN_007f0580(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_ResourceManager::*)(void),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0590(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f05b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_ResourceManager::*)(class_std::basic_string<>),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_007f05c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_58 [20];
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 auStack_30 [5];
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26b42;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_3c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_40 = param_3;
  uStack_44 = 0x7f0602;
  func_0x00469da0();
  uStack_8 = 5;
  puStack_18 = auStack_58;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_30);
  uStack_8 = 5;
  _guard_check_icall(param_2);
  (*pcVar1)();
  uStack_14 = 4;
  uStack_8 = 2;
  if (0xf < uStack_1c) {
    func_0x0046b1f0(auStack_30,auStack_30[0],uStack_1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f06e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0700(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_ResourceManager::*)(class_std::basic_string<>),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0710(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0730(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f0740(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [24];
  undefined1 auStack_44 [24];
  undefined4 **appuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26b75;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar1;
  iVar2 = func_0x00d661e0(*param_1,uVar1);
  while (iVar2 != 2) {
    iVar2 = func_0x00d661e0(*param_1,uVar1);
    if (iVar2 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_1);
  }
  func_0x00531a60();
  iStack_8 = 0;
  func_0x007d68f0();
  func_0x007f8020(appuStack_2c,auStack_44,auStack_5c);
  iStack_8._0_1_ = 1;
  pppuVar3 = appuStack_2c;
  if (0xf < uStack_18) {
    pppuVar3 = (undefined4 ***)appuStack_2c[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar3,uStack_1c);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < uStack_18) {
    func_0x0046b1f0(appuStack_2c,appuStack_2c[0],uStack_18);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
  iStack_8 = 0xffffffff;
  func_0x0052c670();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f0870(int param_1)

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



TypeDescriptor * FUN_007f0920(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_ResourceManager::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f0930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  _guard_check_icall(param_2,param_3,param_4,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f09f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0a10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_ResourceManager::*)(class_std::basic_string<>_const&),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0a20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0a40(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0a50(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_44 [24];
  undefined1 auStack_2c [24];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26bad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar3;
  iVar4 = func_0x00d661e0(*param_2,uVar3);
  while (iVar4 != 2) {
    iVar4 = func_0x00d661e0(*param_2,uVar3);
    if (iVar4 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar4 = func_0x00d661e0(*param_2);
  }
  func_0x00531a60();
  uStack_8 = 0;
  func_0x007d68f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,auStack_44);
  uVar2 = (*pcVar1)();
  func_0x00d66630(DAT_0145e9f0,uVar2);
  uStack_8 = 0xffffffff;
  func_0x0052c670();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f0b50(int param_1)

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



TypeDescriptor * FUN_007f0c00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_ResourceManager::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0c10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0c30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f0c40(undefined4 *param_1)

{
  func_0x007b0f40(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f0c60(int param_1)

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



TypeDescriptor * FUN_007f0d10(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::list<>_(__thiscall_ResourceManager::*)(class_std::basic_string<>_const&,bool,bool),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f0d20(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26c62;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3,*param_4,*param_5,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f0e10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0e30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_ResourceManager::*)(void),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0e40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0e60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_ResourceManager::*)(class_std::basic_string<>_const&),class_ResourceManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f0e70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f0e90(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f0ea0(undefined4 *param_1)

{
  func_0x007b0900(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f0ec0(int param_1)

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



TypeDescriptor * FUN_007f0f70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_EventDispatcher::*)(class_std::basic_string<>_const&,class_std::function<>_const&,int),class_EventDispatcher*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f0f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

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
  _guard_check_icall(param_2,param_3,param_4,*param_5,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f1060(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1080(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f1090(undefined4 *param_1)

{
  func_0x007b03a0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f10b0(int param_1)

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



TypeDescriptor * FUN_007f1160(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_EventDispatcher::*)(class_std::basic_string<>_const&,class_std::function<>_const&,bool),class_EventDispatcher*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f1170(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26d02;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3,param_4,*param_5,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f1250(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1270(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f1280(undefined4 *param_1)

{
  func_0x007b0010(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f12a0(int param_1)

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



TypeDescriptor * FUN_007f1350(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::deque<>_(__thiscall_ModuleManager::*)(void),class_ModuleManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_007f1360(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26da2;
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



void __thiscall FUN_007f1420(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1440(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ModuleManager::*)(class_std::basic_string<>_const&),class_ModuleManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1450(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1470(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_007f1480(int param_1)

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



TypeDescriptor * FUN_007f1530(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_ModuleManager::*)(class_std::basic_string<>_const&),class_ModuleManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1540(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1560(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ModuleManager::*)(int),class_ModuleManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1570(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1590(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ModuleManager::*)(void),class_ModuleManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f15a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f15c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Atlas::*)(void),class_Atlas*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f15d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f15f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::vector<>_(__thiscall_Extras::*)(void),class_Extras*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1600(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1620(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Extras::*)(class_std::basic_string<>_const&),class_Extras*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1630(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1650(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Extras::*)(class_std::basic_string<>_const&),class_Extras*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1660(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1680(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1690(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_30 [4];
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
  auStack_30[0] = 0;
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = 0;
  uStack_8 = 2;
  func_0x007d6840();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,auStack_30);
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



undefined4 * __fastcall FUN_007f1800(int param_1)

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



TypeDescriptor * FUN_007f18b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Extras::*)(class_std::basic_string<>_const&,bool),class_Extras*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f18c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f18e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f18f0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26dcd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar1;
  iVar2 = func_0x00d661e0(*param_1,uVar1);
  while (iVar2 != 2) {
    iVar2 = func_0x00d661e0(*param_1,uVar1);
    if (iVar2 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_1);
  }
  iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
  func_0x00d66d90(*param_1,0xfffffffe);
  auStack_1c[0] = iVar2 != 0;
  uStack_18 = func_0x00530eb0();
  func_0x007f8020(appuStack_34,&uStack_18,auStack_1c);
  uStack_8 = 2;
  pppuVar3 = appuStack_34;
  if (0xf < uStack_20) {
    pppuVar3 = (undefined4 ***)appuStack_34[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar3,uStack_24);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_20) {
    func_0x0046b1f0(appuStack_34,appuStack_34[0],uStack_20);
  }
  uStack_24 = 0;
  uStack_20 = 0xf;
  appuStack_34[0] = (undefined4 **)((uint)appuStack_34[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f1a30(int param_1)

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



TypeDescriptor * FUN_007f1ae0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Stats::*)(int,bool),class_Stats*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f1af0(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26e82;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f1bd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1bf0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(__int64_(__thiscall_Stats::*)(void),class_Stats*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1c00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1c20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f1c30(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26ead;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar1;
  iVar2 = func_0x00d661e0(*param_1,uVar1);
  while (iVar2 != 4) {
    iVar2 = func_0x00d661e0(*param_1,uVar1);
    if (iVar2 < 4) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_1);
  }
  iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
  func_0x00d66d90(*param_1,0xfffffffe);
  auStack_24[0] = iVar2 != 0;
  uStack_20 = func_0x00530a70();
  uStack_1c = func_0x00530eb0();
  uStack_18 = func_0x00530eb0();
  func_0x007fa740(appuStack_3c,&uStack_18,&uStack_1c,&uStack_20,auStack_24);
  uStack_8 = 2;
  pppuVar3 = appuStack_3c;
  if (0xf < uStack_28) {
    pppuVar3 = (undefined4 ***)appuStack_3c[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar3,uStack_2c);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_28) {
    func_0x0046b1f0(appuStack_3c,appuStack_3c[0],uStack_28);
  }
  uStack_2c = 0;
  uStack_28 = 0xf;
  appuStack_3c[0] = (undefined4 **)((uint)appuStack_3c[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f1d90(int param_1)

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



TypeDescriptor * FUN_007f1e40(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Stats::*)(int,int,unsigned_int,bool),class_Stats*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f1e50(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined1 *param_6)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26f62;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4,*param_5,*param_6,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f1f40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1f60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Stats::*)(void),class_Stats*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1f70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1f90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Stats::*)(int),class_Stats*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f1fa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f1fc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f1fd0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26f8d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar1;
  iVar2 = func_0x00d661e0(*param_1,uVar1);
  while (iVar2 != 3) {
    iVar2 = func_0x00d661e0(*param_1,uVar1);
    if (iVar2 < 3) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar2 = func_0x00d661e0(*param_1);
  }
  iVar2 = func_0x00d66e90(DAT_0145e9f0,0xffffffff);
  func_0x00d66d90(*param_1,0xfffffffe);
  auStack_20[0] = iVar2 != 0;
  uStack_1c = func_0x00530eb0();
  uStack_18 = func_0x00530eb0();
  func_0x007f9830(appuStack_38,&uStack_18,&uStack_1c,auStack_20);
  uStack_8 = 2;
  pppuVar3 = appuStack_38;
  if (0xf < uStack_24) {
    pppuVar3 = (undefined4 ***)appuStack_38[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar3,uStack_28);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_24) {
    func_0x0046b1f0(appuStack_38,appuStack_38[0],uStack_24);
  }
  uStack_28 = 0;
  uStack_24 = 0xf;
  appuStack_38[0] = (undefined4 **)((uint)appuStack_38[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f2120(int param_1)

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



TypeDescriptor * FUN_007f21d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Stats::*)(int,int,bool),class_Stats*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f21e0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined1 *param_5)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26e82;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4,*param_5,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f22c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f22e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_Stats::*)(void),class_Stats*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f22f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2310(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Logger::*)(void),class_Logger*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2320(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2340(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f2350(undefined4 *param_1)

{
  func_0x007aee00(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f2370(int param_1)

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



TypeDescriptor * FUN_007f2420(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Logger::*)(class_std::function<>_const&),class_Logger*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2430(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2450(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Logger::*)(class_std::basic_string<>_const&),class_Logger*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2460(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2480(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Logger::*)(void),class_Logger*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2490(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f24b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f24c0(undefined4 *param_1)

{
  func_0x007ae8a0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f24e0(int param_1)

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



TypeDescriptor * FUN_007f2590(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Logger::*)(enum_Fw::LogLevel,class_std::basic_string<>_const&),class_Logger*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f25a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f25c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_ConfigManager::*)(class_std::basic_string<>_const&),class_ConfigManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f25d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f25f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_ConfigManager::*)(class_std::basic_string<>),class_ConfigManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2600(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2620(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f2630(undefined4 *param_1)

{
  func_0x007ae390(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f2650(int param_1)

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



TypeDescriptor * FUN_007f2700(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_ConfigManager::*)(class_std::basic_string<>_const&),class_ConfigManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2710(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2730(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_007f2740(int param_1)

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



TypeDescriptor * FUN_007f27f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_ConfigManager::*)(void),class_ConfigManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2800(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2820(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(float_(__thiscall_Clock::*)(void),class_Clock*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2830(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2850(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(__int64_(__thiscall_Clock::*)(void),class_Clock*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2860(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2880(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_Crypt::*)(void),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2890(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f28b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Crypt::*)(void),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f28c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f28e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f28f0(undefined4 *param_1)

{
  func_0x007adbe0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f2910(int param_1)

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



TypeDescriptor * FUN_007f29c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Crypt::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&,class_std::basic_string<>_const&),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f29d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f29f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2a00(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_44 [24];
  undefined1 auStack_2c [24];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26bad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
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
  func_0x00531a60();
  uStack_8 = 0;
  func_0x007d68f0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,auStack_44);
  (*pcVar1)();
  uStack_8 = 0xffffffff;
  func_0x0052c670();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f2af0(int param_1)

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



TypeDescriptor * FUN_007f2ba0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Crypt::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2bb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2bd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Crypt::*)(int,int),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2be0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2c00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f2c10(undefined4 *param_1)

{
  func_0x007ad640(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f2c30(int param_1)

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



TypeDescriptor * FUN_007f2ce0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Crypt::*)(class_std::basic_string<>_const&,bool),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007f2cf0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26e82;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 4;
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3,*param_4,uVar2);
  (*pcVar1)();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007f2dd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2df0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f2e00(undefined4 *param_1)

{
  func_0x007ad250(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f2e20(int param_1)

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



TypeDescriptor * FUN_007f2ed0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Crypt::*)(class_std::basic_string<>_const&),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2ee0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2f00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Crypt::*)(class_std::basic_string<>),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2f10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2f30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Crypt::*)(void),class_Crypt*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2f40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2f60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Application::*)(void),class_Application*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2f70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2f90(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Application::*)(void),class_Application*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2fa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f2fc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f2fd0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  int *unaff_FS_OFFSET;
  undefined4 **appuStack_2c [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26fcd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 0) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 0) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall();
  uVar4 = (*pcVar1)();
  func_0x00469da0(uVar4);
  uStack_8 = 0;
  pppuVar5 = appuStack_2c;
  if (0xf < uStack_18) {
    pppuVar5 = (undefined4 ***)appuStack_2c[0];
  }
  func_0x00d66780(DAT_0145e9f0,pppuVar5,uStack_1c);
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(appuStack_2c,appuStack_2c[0],uStack_18);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  appuStack_2c[0] = (undefined4 **)((uint)appuStack_2c[0] & 0xffffff00);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f30f0(int param_1)

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



TypeDescriptor * FUN_007f31a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_const&_(__thiscall_Application::*)(void),class_Application*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f31b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f31d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Application::*)(void),class_Application*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f31e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f3200(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Application::*)(class_std::basic_string<>_const&),class_Application*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f3210(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f3230(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::vector<>_(__thiscall_Platform::*)(void),class_Platform*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f3240(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f3260(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f3270(undefined4 *param_1)

{
  func_0x007ac9d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f3290(int param_1)

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



TypeDescriptor * FUN_007f3340(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(__int64_(__thiscall_Platform::*)(class_std::basic_string<>),class_Platform*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined8 __thiscall FUN_007f3350(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined8 uVar2;
  undefined1 auStack_54 [20];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 auStack_2c [5];
  uint uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebf565;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_3c = param_2;
  uStack_40 = 0x7f3384;
  func_0x00469da0();
  uStack_8 = 0;
  puStack_14 = auStack_54;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_2c);
  uStack_8 = uStack_8 & 0xffffff00;
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __thiscall FUN_007f3410(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f3430(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __fastcall FUN_007f3440(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
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
  fVar4 = (float10)(*pcVar1)();
  func_0x00d667f0(DAT_0145e9f0,(double)fVar4);
  return 1;
}



undefined4 * __fastcall FUN_007f34f0(int param_1)

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



TypeDescriptor * FUN_007f35a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(double_(__thiscall_Platform::*)(void),class_Platform*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f35b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f35d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f35e0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_30 [4];
  uint auStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebed9d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  auStack_2c[6] = uVar3;
  iVar4 = func_0x00d661e0(*param_2,uVar3);
  while (iVar4 != 2) {
    iVar4 = func_0x00d661e0(*param_2,uVar3);
    if (iVar4 < 2) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar4 = func_0x00d661e0(*param_2);
  }
  auStack_2c[1] = 0;
  auStack_2c[2] = 0;
  auStack_2c[3] = 0;
  auStack_30[0] = 0;
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = 0;
  uStack_8 = 2;
  func_0x007d6840();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,auStack_30);
  uVar2 = (*pcVar1)();
  func_0x00d66630(DAT_0145e9f0,uVar2);
  uStack_8 = 0xffffffff;
  if (0xf < auStack_2c[5]) {
    uVar5 = auStack_2c[5] + 1;
    uVar3 = auStack_2c[0];
    if (0xfff < uVar5) {
      uVar3 = *(uint *)(auStack_2c[0] - 4);
      uVar5 = auStack_2c[5] + 0x24;
      if (0x1f < (auStack_2c[0] - uVar3) - 4) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(uVar3,uVar5);
  }
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007f3760(int param_1)

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



TypeDescriptor * FUN_007f3810(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Platform::*)(class_std::basic_string<>,bool),class_Platform*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined1 __thiscall FUN_007f3820(int param_1,undefined4 param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int *unaff_FS_OFFSET;
  undefined4 auStack_2c [5];
  uint uStack_18;
  undefined1 uStack_14;
  undefined3 uStack_13;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f264bd;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _uStack_14 = CONCAT31(uStack_13,*param_3);
  func_0x00469da0();
  uStack_8 = 1;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_2c);
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),1);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __thiscall FUN_007f38e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f3900(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::basic_string<>_(__thiscall_Platform::*)(void),class_Platform*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f3910(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f3930(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Platform::*)(class_std::basic_string<>_const&),class_Platform*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f3940(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f3960(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_Platform::*)(void),class_Platform*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007f3970(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007f4cf0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007f4d00(undefined4 *param_1)

{
  func_0x007d8360(*param_1);
  return;
}



undefined4 * __fastcall FUN_007f4d20(int param_1)

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



TypeDescriptor * FUN_007faca0(void)

{
  return &`bool___cdecl_luavalue_cast<>(int,class_std::function<>&)'::__l5::<lambda_1>::
          RTTI_Type_Descriptor;
}



void FUN_007facb0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  func_0x007f4f00(*param_1,param_2,*param_3,param_3[1]);
  return;
}



void __thiscall FUN_007face0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007fad60(void)

{
  return &`bool___cdecl_luavalue_cast<>(int,class_std::function<>&)'::__l5::<lambda_1>::
          RTTI_Type_Descriptor;
}



void __fastcall FUN_007fad70(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  uint auStack_34 [6];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f273c5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar6 = *(undefined4 *)(param_1 + 4);
  func_0x00d66960(DAT_0145e9f0,0xffffd8f0,DAT_0145e9f4,uStack_14);
  func_0x00d66960(DAT_0145e9f0,0xffffffff,uVar6);
  func_0x00d66a80(DAT_0145e9f0,0xfffffffe);
  uStack_1c = 0;
  func_0x005f2ad0();
  uStack_8 = 0;
  iVar4 = func_0x00d67010(DAT_0145e9f0,0xffffffff);
  if (iVar4 == 6) {
    uVar5 = func_0x00778fc0(0,0xffffffff,&uStack_1c);
    iVar4 = (int)uStack_1c;
    if (*(int *)((int)uStack_1c + 0x10) == 0) {
      if (0 < (int)uVar5) {
        func_0x00d66d90(DAT_0145e9f0,~uVar5);
      }
      goto LAB_007f83ed;
    }
    auStack_34[4] = 0;
    auStack_34[5] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    func_0x0046bc40("lua function callback failed: %s",0x20);
    uStack_8._0_1_ = 1;
    uVar6 = func_0x00484eb0(iVar4);
    uStack_8._0_1_ = 2;
    FUN_005ee340(3,uVar6);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    if (0xf < uStack_38) {
      func_0x0046b1f0(auStack_4c,auStack_4c[0],uStack_38);
    }
    uStack_3c = 0;
    uStack_38 = 0xf;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
  }
  else {
    auStack_34[4] = 0;
    auStack_34[5] = 0;
    auStack_34[0] = 0;
    auStack_34[1] = 0;
    auStack_34[2] = 0;
    auStack_34[3] = 0;
    func_0x0046bc40("attempt to call an expired lua function from C++, did you forget to hold a reference for that function?"
                    ,0x67);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    FUN_005ee340(3,auStack_34);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  if (0xf < auStack_34[5]) {
    func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
  }
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  auStack_34[5] = 0xf;
  auStack_34[4] = 0;
LAB_007f83ed:
  uStack_8 = 0xffffffff;
  piVar3 = uStack_1c._4_4_;
  if (uStack_1c._4_4_ != (int *)0x0) {
    LOCK();
    iVar4 = uStack_1c._4_4_[1] + -1;
    uStack_1c._4_4_[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      pcVar2 = *(code **)*uStack_1c._4_4_;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar4 = *piVar1 + -1;
      *piVar1 = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
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



void __thiscall FUN_007fad80(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void FUN_007fada0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fadaa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fadb0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fadba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fadc0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fadca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fadd0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fadda. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fade0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fadea. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fadf0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fadfa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fae00(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fae0a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fae10(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fae1a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fae20(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fae2a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fae30(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fae3a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fae40(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fae4a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_007fae50(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)func_0x00eab840();
                    // WARNING: Could not recover jumptable at 0x007fae5a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined4 * __thiscall FUN_007fb090(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eab9f5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::bad_cast::vftable;
  *param_1 = boost::asio::ip::bad_address_cast::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



char * FUN_007fb170(void)

{
  return "bad address cast";
}



undefined4 * __thiscall FUN_007fb180(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eab975;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::asio::ip::bad_address_cast::vftable;
  uStack_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1,uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_007fb370(undefined4 param_1,byte param_2)

{
  func_0x007fb420();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x250);
  }
  return param_1;
}



int FUN_007fcd80(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f27f3d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0064b0a0();
  if (((DAT_012bbee8 != 0x257edfd1) || (DAT_012bbeec != -0x4d54ee86)) &&
     ((DAT_012bbee8 != 0x257edfd0 || (DAT_012bbeec != -0x4d54ee86)))) {
    pcVar3 = *(code **)(PTR_vftable_012bbee0 + 0x18);
    _guard_check_icall();
    (*pcVar3)();
  }
  iVar5 = func_0x0062cb40();
  if ((char)iVar5 == '\0') {
    if (((param_1[2] & 1U) == 0) || ((param_1[2] == 1 && (*param_1 == 0)))) {
      func_0x006568f0(&param_2);
      uStack_8 = uStack_8 & 0xffffff00;
      iVar5 = func_0x007fbed0();
    }
    else {
      iVar5 = func_0x007fd530();
    }
  }
  piVar4 = param_3;
  uStack_8 = 0xffffffff;
  if (param_3 != (int *)0x0) {
    LOCK();
    piVar1 = param_3 + 1;
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*param_3;
      _guard_check_icall();
      iVar5 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar5 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



void __thiscall FUN_007fcec0(int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_2c [12];
  undefined8 uStack_20;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  func_0x0064b0a0();
  uVar4 = FUN_0083f570();
  *(undefined8 *)(param_1 + 0x248) = uVar4;
  if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
     ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
    _guard_check_icall(0x3e3);
    uVar3 = (*pcVar1)();
  }
  iStack_18 = (uVar3 & 0xff) + 2;
  uStack_20 = 0x12bbee0000003e3;
  cVar2 = func_0x0062cb40();
  if (cVar2 == '\0') {
    if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
      *(undefined1 *)(param_1 + 0x238) = 1;
      uStack_10 = 1;
      func_0x007fe1e0(&uStack_10);
      iStack_18 = 0;
      uStack_14 = 0x80000;
      uStack_20 = 0;
      func_0x007fe280(auStack_2c,&uStack_14,&uStack_20);
      uStack_14 = 0x80000;
      func_0x007fe350(auStack_2c,&uStack_14,&uStack_20);
      if (*(int **)(param_1 + 0x34) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(param_1 + 0x34) + 8);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
    else {
      func_0x007fd530(param_2);
    }
    *(undefined1 *)(param_1 + 0x239) = 0;
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_007fd020(int param_1)

{
  code *pcVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    func_0x006364a0(*(int *)(param_1 + 0x118) + 0x14,param_1 + 300,0xffffffff);
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  if (((DAT_012bbee8 != 0x257edfd1) || (DAT_012bbeec != -0x4d54ee86)) &&
     ((DAT_012bbee8 != 0x257edfd0 || (DAT_012bbeec != -0x4d54ee86)))) {
    pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
    _guard_check_icall(0x3e3);
    (*pcVar1)();
  }
  cVar2 = func_0x0062cb40();
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x238) != '\0')) {
    func_0x007fc620();
  }
  return;
}



undefined4 * __thiscall
FUN_007fd0f0(int param_1,int *param_2,undefined4 param_3,int param_4,int *param_5)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f27f85;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  func_0x0064b0a0(uVar4);
  if (((DAT_012bbee8 != 0x257edfd1) || (DAT_012bbeec != -0x4d54ee86)) &&
     ((DAT_012bbee8 != 0x257edfd0 || (DAT_012bbeec != -0x4d54ee86)))) {
    pcVar3 = *(code **)(PTR_vftable_012bbee0 + 0x18);
    _guard_check_icall(0x3e3);
    (*pcVar3)();
  }
  puVar5 = (undefined4 *)func_0x0062cb40();
  if ((char)puVar5 == '\0') {
    func_0x007fd7f0(**(int **)(param_4 + 0x20) - **(int **)(param_4 + 0x1c));
    iVar2 = DAT_0145dcb8;
    if (DAT_0145dcbc == 0xfffffff) {
      func_0x00e701fa("list too long");
      pcVar3 = (code *)swi(3);
      puVar5 = (undefined4 *)(*pcVar3)();
      return puVar5;
    }
    iStack_8._0_1_ = 1;
    piVar6 = (int *)func_0x008ab47d(0x10);
    piVar6[2] = 0;
    piVar6[3] = 0;
    if (param_5 != (int *)0x0) {
      LOCK();
      param_5[1] = param_5[1] + 1;
      UNLOCK();
    }
    piVar6[2] = param_4;
    piVar6[3] = (int)param_5;
    DAT_0145dcbc = DAT_0145dcbc + 1;
    puVar5 = *(undefined4 **)(iVar2 + 4);
    *piVar6 = iVar2;
    piVar6[1] = (int)puVar5;
    *(int **)(iVar2 + 4) = piVar6;
    *puVar5 = piVar6;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (((*(char *)(param_1 + 0x238) != '\0') &&
        (puVar5 = (undefined4 *)param_2[2], ((uint)puVar5 & 1) != 0)) &&
       ((puVar5 != (undefined4 *)0x1 || (*param_2 != 0)))) {
      puVar5 = (undefined4 *)func_0x007fd530(param_2);
    }
  }
  iStack_8 = 0xffffffff;
  if (param_5 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(param_5 + 1);
    uVar4 = *puVar1;
    puVar5 = (undefined4 *)*puVar1;
    *puVar1 = uVar4 - 1;
    UNLOCK();
    if (uVar4 - 1 == 0) {
      pcVar3 = *(code **)*param_5;
      _guard_check_icall();
      puVar5 = (undefined4 *)(*pcVar3)();
      LOCK();
      piVar6 = param_5 + 2;
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*param_5 + 4);
        _guard_check_icall();
        puVar5 = (undefined4 *)(*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



void __thiscall FUN_007fd2c0(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&piStack_24;
  if (*(char *)(param_1 + 0x98) != '\0') {
    func_0x006364a0(*(int *)(param_1 + 0x88) + 0x14,param_1 + 0x9c,0xffffffff);
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  uVar4 = FUN_0083f570();
  *(undefined8 *)(param_1 + 0x248) = uVar4;
  if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
     ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
    uVar3 = 1;
  }
  else {
    pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
    _guard_check_icall(0x3e3);
    uVar3 = (*pcVar1)();
  }
  iStack_18 = (uVar3 & 0xff) + 2;
  uStack_20 = 0x3e3;
  ppuStack_1c = &PTR_vftable_012bbee0;
  cVar2 = func_0x0062cb40();
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x238) != '\0') {
      if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
        piStack_24 = *(int **)(param_1 + 0x84);
        if (piStack_24 != (int *)0x0) {
          uStack_10 = param_3;
          uStack_14 = **(undefined4 **)(param_1 + 0x20c);
          pcVar1 = *(code **)(*piStack_24 + 8);
          _guard_check_icall(&uStack_14,&uStack_10);
          (*pcVar1)();
        }
      }
      else {
        func_0x007fd530(param_2);
      }
    }
    if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
      func_0x007fd7f0(param_3);
    }
  }
  FUN_008ab370();
  return;
}



void FUN_007fd430(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uStack_14;
  undefined **ppuStack_10;
  int iStack_c;
  
  if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
     ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
    uVar5 = 1;
  }
  else {
    pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
    _guard_check_icall(0x3e3);
    uVar5 = (*pcVar1)();
  }
  iVar3 = DAT_012bbeec;
  iVar2 = DAT_012bbee8;
  iStack_c = (uVar5 & 0xff) + 2;
  uStack_14 = 0x3e3;
  ppuStack_10 = &PTR_vftable_012bbee0;
  cVar4 = func_0x0062cb40();
  if (cVar4 == '\0') {
    if (((iVar2 == 0x257edfd1) && (iVar3 == -0x4d54ee86)) ||
       ((iVar2 == 0x257edfd0 && (iVar3 == -0x4d54ee86)))) {
      uVar5 = 1;
    }
    else {
      pcVar1 = *(code **)(PTR_vftable_012bbee0 + 0x18);
      _guard_check_icall(0x274c);
      uVar5 = (*pcVar1)();
    }
    iStack_c = (uVar5 & 0xff) + 2;
    uStack_14 = 0x274c;
    ppuStack_10 = &PTR_vftable_012bbee0;
    func_0x007fd530(&uStack_14);
  }
  return;
}



void __fastcall FUN_007fd610(int param_1)

{
  code *pcVar1;
  int *piVar2;
  u_long hostlong;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [28];
  undefined1 auStack_48 [28];
  uint auStack_2c [3];
  ulonglong uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f27fc5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_18 = 0;
  uStack_20 = 0;
  func_0x007fde20(auStack_48,param_1 + 0x18c,&uStack_20,uStack_14);
  if (((uStack_18 & 1) == 0) || ((uStack_18 == 1 && ((int)uStack_20 == 0)))) {
    piVar2 = (int *)func_0x007fd950(auStack_64);
    if (*piVar2 != 0) {
      func_0x007fb020();
      uStack_8 = 0;
      func_0x007fe020();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    hostlong = ntohl(piVar2[1]);
    htonl(hostlong);
  }
  else {
    uStack_18 = 0;
    auStack_2c[0] = 0;
    auStack_2c[1] = 0;
    auStack_2c[2] = 0;
    uStack_20 = 0;
    func_0x0046bc40("Getting remote ip",0x11);
    uStack_8 = 1;
    FUN_005ee340(3,auStack_2c);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_18) {
      func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
    }
    uStack_20 = uStack_20 & 0xffffffff;
    uStack_18 = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



int __thiscall FUN_007fd740(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == -1) {
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x20);
  if (iVar1 == **(int **)(param_1 + 0x30) + iVar1) {
    uVar2 = iVar1 - **(int **)(param_1 + 0x1c);
    if ((*(uint *)(param_1 + 0x38) <= uVar2) ||
       (uVar2 = *(uint *)(param_1 + 0x38) - uVar2, 0x7f < uVar2)) {
      uVar2 = 0x80;
    }
    func_0x007fdd10(uVar2);
  }
  *(char *)**(undefined4 **)(param_1 + 0x20) = (char)param_2;
  **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + -1;
  **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + 1;
  return param_2;
}



uint __fastcall FUN_007fd7b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = **(uint **)(param_1 + 0x1c);
  uVar2 = **(uint **)(param_1 + 0x20);
  if (uVar1 < uVar2) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x3c);
    **(uint **)(param_1 + 0x1c) = uVar1;
    **(int **)(param_1 + 0x2c) = uVar2 - uVar1;
    return (uint)*(byte *)**(undefined4 **)(param_1 + 0x1c);
  }
  return 0xffffffff;
}



int __thiscall FUN_007fdc80(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f276e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    func_0x0046aa00(iVar1,*(int *)(param_1 + 0x44) - iVar1,uVar2);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  uStack_8 = 0xffffffff;
  func_0x004693d0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined1 * Catch_007fe0c1(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  uVar2 = func_0x0046b6e0(&DAT_0145c370,"CAST ERROR: ");
  pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x20) + 4);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  uVar2 = func_0x0046b6e0(uVar2,uVar3);
  func_0x004849e0(uVar2);
  FUN_00469c30(unaff_EBP + 8);
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 1;
  return &LAB_007fe10f;
}



void __fastcall FUN_007fe450(undefined4 *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f281de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[4] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[5] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[5] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[5] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  param_1[1] = boost::asio::ip::bad_address_cast::vftable;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  *param_1 = boost::exception_detail::clone_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_007fe510(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f28233;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = std::bad_cast::vftable;
  *puVar1 = boost::asio::ip::bad_address_cast::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),3);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_007fe5d0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00f281de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[4] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[5] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[5] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[5] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  param_1[1] = boost::asio::ip::bad_address_cast::vftable;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  iStack_8 = 0xffffffff;
  *param_1 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_007fe780(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_007fe510(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288c38);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_007fe7b0(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edd68c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab47d(0x28,uVar1);
  uStack_8 = 0;
  uVar2 = FUN_007fe510(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



undefined4 * __thiscall FUN_007fe930(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x54);
  }
  return param_1;
}



void FUN_007ffa90(int param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined8 uStack_80;
  undefined1 auStack_78 [44];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f2886e;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uVar3 = uStack_28;
  uStack_80 = uStack_30;
  puVar2 = &stack0xfffffffc;
  if (param_1 != 0) {
    if (*(char *)(param_2 + 0x3c) == '\0') {
      uStack_80 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = *(uint *)(param_2 + 0x28);
      puVar2 = &stack0xfffffffc;
    }
    else {
      func_0x0063f640(uStack_24);
      uVar3 = uStack_28;
      uStack_80 = uStack_30;
      puVar2 = puStack_20;
    }
  }
  puStack_20 = puVar2;
  uStack_34 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_3c = 0;
  func_0x0064b5b0(param_2 + 0x58);
  iStack_14._0_1_ = 4;
  if ((uVar3 != 0) && (uVar3 != 1)) {
    uVar3 = uVar3 & 1 | 0x119bcb8;
  }
  uStack_30 = uStack_80;
  uStack_28 = uVar3;
  func_0x008006a0(param_2 + 0x40,&uStack_30);
  iStack_14._0_1_ = 5;
  func_0x007ff980();
  if (param_1 != 0) {
    iStack_14._0_1_ = 6;
    func_0x00800750(auStack_78,extraout_ECX);
  }
  iStack_14._0_1_ = 4;
  func_0x0052b260();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x007ff980();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_007ffd40(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [40];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f28988;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_14 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  puStack_34 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x48,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x008006a0(param_2 + 0x30,param_2 + 0x20);
  iStack_14._0_1_ = 5;
  func_0x007ffc30();
  if (param_1 != 0) {
    iStack_14._0_1_ = 6;
    func_0x00800750(auStack_68,extraout_ECX);
  }
  iStack_14._0_1_ = 4;
  func_0x0052b260();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_30 != 0) {
    pcVar1 = (code *)*puStack_34;
    _guard_check_icall(&uStack_40);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x007ffc30();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_007fffd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  uint3 uVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  undefined4 ****ppppuVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_100 [24];
  uint auStack_e8 [4];
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 ***apppuStack_b4 [4];
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined1 uStack_99;
  undefined4 ***apppuStack_98 [3];
  undefined1 *puStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 auStack_58 [6];
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f28bc7;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_78 = 0;
  puStack_7c = param_2;
  puStack_bc = param_2;
  puStack_c0 = param_2 + 0x22;
  puStack_b8 = param_2;
  iStack_14 = 0;
  if ((param_1 == 0) || (param_1 == param_2[0x21])) {
    puStack_7c = &uStack_74;
    uStack_5c = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    puStack_68 = (undefined4 *)0x0;
    uStack_64 = 0;
    func_0x0064b5b0(param_2 + 0x28,uStack_24);
    iStack_14._0_1_ = 6;
    memset(auStack_58,0,0x30);
    puStack_8c = (undefined1 *)0x0;
    puStack_88 = (undefined4 *)0x0;
    piStack_84 = (int *)0x0;
    iStack_14._0_1_ = 9;
    func_0x007ff7c0(param_2 + 0x22);
    uStack_38 = param_2[10];
    uStack_40 = *(undefined8 *)(param_2 + 8);
    puStack_80 = &uStack_34;
    uStack_34 = 0;
    piStack_30 = (int *)0x0;
    uStack_2c = 0;
    iStack_14._0_1_ = 0xf;
    puStack_c0 = auStack_58;
    if (param_2[0x2f] != 0) {
      iStack_14._0_1_ = 0x12;
      func_0x00469da0(param_2 + 0x1b);
      uStack_78 = 1;
      iStack_14._0_1_ = 0x13;
      func_0x00469da0(param_2 + 0x15);
      uStack_78 = 3;
      puStack_7c = (undefined4 *)func_0x00656570(apppuStack_b4,auStack_e8);
      uVar6 = iStack_14._1_3_;
      piVar5 = piStack_30;
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      if (&uStack_34 != puStack_7c) {
        uVar1 = *puStack_7c;
        piVar2 = (int *)puStack_7c[1];
        *puStack_7c = 0;
        puStack_7c[1] = 0;
        piStack_84 = piStack_30;
        puStack_88 = (undefined4 *)uStack_34;
        iStack_14 = CONCAT31(uVar6,0x14);
        uStack_34 = uVar1;
        if (piStack_30 != (int *)0x0) {
          LOCK();
          iVar4 = piStack_30[1] + -1;
          piStack_30[1] = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar3 = *(code **)*piStack_30;
            piStack_30 = piVar2;
            _guard_check_icall();
            (*pcVar3)();
            LOCK();
            piVar2 = piVar5 + 2;
            iVar4 = *piVar2 + -1;
            *piVar2 = iVar4;
            UNLOCK();
            piVar2 = piStack_30;
            if (iVar4 == 0) {
              pcVar3 = *(code **)(*piVar5 + 4);
              _guard_check_icall();
              (*pcVar3)();
              piVar2 = piStack_30;
            }
          }
        }
        piStack_30 = piVar2;
        uStack_2c = puStack_7c[2];
        puStack_7c[2] = 0;
      }
      iStack_14._0_1_ = 0x13;
      func_0x00656440();
      uStack_78 = 1;
      iStack_14._0_1_ = 0x12;
      if (0xf < uStack_a0) {
        func_0x0046b1f0(apppuStack_b4,apppuStack_b4[0],uStack_a0);
      }
      uStack_a4 = 0;
      uStack_a0 = 0xf;
      apppuStack_b4[0] = (undefined4 ***)((uint)apppuStack_b4[0] & 0xffffff00);
      uStack_78 = 0;
      iStack_14._0_1_ = 0xf;
      if (0xf < uStack_d4) {
        func_0x0046b1f0(auStack_e8,auStack_e8[0],uStack_d4);
      }
      uStack_d8 = 0;
      uStack_d4 = 0xf;
      auStack_e8[0] = auStack_e8[0] & 0xffffff00;
    }
    func_0x007ffe70();
    if (param_1 != 0) {
      iStack_14._0_1_ = 0x16;
      if ((int)uStack_64 == 0) {
        func_0x008008f0();
      }
      else {
        pcVar3 = *(code **)(uStack_64._4_4_ + 0xc);
        if (pcVar3 == (code *)0x0) {
          pcVar3 = *(code **)(uStack_64._4_4_ + 8);
          func_0x00800a00(auStack_58);
          iStack_14._0_1_ = 0x17;
          puStack_8c = &uStack_99;
          if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
            func_0x008abb44();
          }
          puVar7 = (undefined4 *)func_0x0065c120(puStack_80,8);
          piStack_84 = (int *)0x0;
          iStack_14._0_1_ = 0x18;
          puStack_88 = puVar7;
          puStack_80 = puVar7;
          func_0x00800a00(auStack_100);
          *puVar7 = FUN_00801840;
          puStack_88 = (undefined4 *)0x0;
          iStack_14._0_1_ = 0x17;
          puStack_7c = puVar7;
          func_0x00800ea0();
          iStack_14._0_1_ = 0x16;
          func_0x008005f0();
          iStack_14._0_1_ = 0x1a;
          _guard_check_icall(&uStack_74,&puStack_7c);
          (*pcVar3)();
          iStack_14._0_1_ = 0x16;
          if (puStack_7c != (undefined4 *)0x0) {
            pcVar3 = (code *)*puStack_7c;
            _guard_check_icall(puStack_7c,0);
            (*pcVar3)();
          }
        }
        else {
          _guard_check_icall(&uStack_74,FUN_00801290,auStack_58);
          (*pcVar3)();
        }
      }
    }
    piVar5 = piStack_30;
    puStack_80 = &uStack_34;
    iStack_14._0_1_ = 0x1c;
    if (piStack_30 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_30[1] + -1;
      piStack_30[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piStack_30;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piVar5 + 2;
        iVar4 = *piVar2 + -1;
        *piVar2 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar3 = *(code **)(*piVar5 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
    puStack_80 = auStack_58;
    iStack_14._0_1_ = 6;
    puStack_7c = puStack_80;
    func_0x0052b260();
    piStack_84 = &uStack_74;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if ((int)uStack_64 != 0) {
      pcVar3 = (code *)*puStack_68;
      _guard_check_icall(&uStack_74);
      (*pcVar3)();
    }
  }
  else {
    iStack_14._0_1_ = 1;
    iStack_14._1_3_ = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x00469da0(param_2 + 0x1b);
    uStack_78 = 4;
    ppppuVar9 = apppuStack_b4;
    if (0xf < uStack_a0) {
      ppppuVar9 = (undefined4 ****)apppuStack_b4[0];
    }
    iStack_14._0_1_ = 2;
    func_0x00469da0(puStack_7c + 0x15);
    uStack_78 = 0xc;
    ppppuVar8 = apppuStack_98;
    if (0xf < piStack_84) {
      ppppuVar8 = (undefined4 ****)apppuStack_98[0];
    }
    func_0x006403a0(ppppuVar8,ppppuVar9,param_2 + 0xd,puStack_7c + 0x2f,puStack_7c + 8);
    uStack_78 = 4;
    iStack_14._0_1_ = 1;
    if (0xf < piStack_84) {
      func_0x0046b1f0(apppuStack_98,apppuStack_98[0],piStack_84);
    }
    puStack_88 = (undefined4 *)0x0;
    piStack_84 = (int *)&DAT_0000000f;
    apppuStack_98[0] = (undefined4 ***)((uint)apppuStack_98[0] & 0xffffff00);
    uStack_78 = 0;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < uStack_a0) {
      func_0x0046b1f0(apppuStack_b4,apppuStack_b4[0],uStack_a0);
    }
    uStack_a4 = 0;
    uStack_a0 = 0xf;
    apppuStack_b4[0] = (undefined4 ***)((uint)apppuStack_b4[0] & 0xffffff00);
    func_0x0062e4b0(puStack_7c);
    puStack_b8 = (undefined4 *)0x0;
    puStack_bc = (undefined4 *)0x0;
  }
  iStack_14 = 0xffffffff;
  func_0x007ffe70();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00801260(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)*param_1;
  _guard_check_icall(param_1 + 6);
  (*pcVar1)();
  return;
}



void FUN_00801290(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee2d25;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar2 = (code *)*param_1;
  if (param_1[10] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[10] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_8 = 0xffffffff;
  _guard_check_icall(param_1 + 6);
  (*pcVar2)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_008014f0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f29111;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x68,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_30,param_4);
  uStack_58 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_58 = uStack_28 & 1 | 0x119bce8;
  }
  memset(auStack_90,0,0x40);
  uStack_88 = *(undefined8 *)(param_2 + 0x40);
  uStack_8c = *(undefined4 *)(param_2 + 0x3c);
  uStack_80 = *(undefined4 *)(param_2 + 0x48);
  uStack_7c = *(undefined4 *)(param_2 + 0x4c);
  func_0x007ff7c0(param_2 + 0x50);
  uStack_60 = uStack_30;
  uStack_54 = param_4;
  iStack_14._0_1_ = 7;
  func_0x008013b0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,8);
    if ((int)uStack_3c == 0) {
      func_0x007ff860(uStack_60,uStack_58,uStack_54,0);
    }
    else {
      func_0x008019c0(auStack_90);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x0052b260();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x008013b0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00801780(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  code *pcStack_40;
  undefined1 auStack_28 [20];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f291c0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00800ab0(param_1 + 8,uStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00800f60();
  if (param_2 != '\0') {
    _guard_check_icall(auStack_28);
    (*pcStack_40)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x00800f60();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00801840(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_48 [52];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f29205;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_48,0,0x30);
  func_0x00800a00(param_1 + 8,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00800ea0();
  if (param_2 != '\0') {
    func_0x008008f0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x008005f0();
  uStack_8 = 0xffffffff;
  func_0x00800ea0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_008018f0(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  code *pcStack_40;
  undefined1 auStack_28 [20];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f29270;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00800ab0(param_1 + 8,uStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x008012c0();
  if (param_2 != '\0') {
    _guard_check_icall(auStack_28);
    (*pcStack_40)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x008012c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_008020a0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 uStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00f295a6;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  puStack_40 = (undefined4 *)0x0;
  func_0x0064b5b0(param_2 + 0x78,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fdd0();
  uStack_58 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_58 = uStack_28 & 1 | 0x119bc88;
  }
  memset(auStack_a8,0,0x58);
  uStack_a0 = *(undefined8 *)(param_2 + 0x38);
  uStack_a4 = *(undefined4 *)(param_2 + 0x34);
  uStack_98 = *(undefined4 *)(param_2 + 0x40);
  uStack_94 = *(undefined4 *)(param_2 + 0x44);
  uStack_90 = *(undefined4 *)(param_2 + 0x48);
  uStack_8c = *(undefined4 *)(param_2 + 0x4c);
  func_0x007ff680(param_2 + 0x58);
  uStack_60 = uStack_30;
  uStack_54 = param_4;
  iStack_14._0_1_ = 8;
  func_0x00801f50();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,9);
    if ((int)uStack_3c == 0) {
      func_0x00800dc0(uStack_60,uStack_58,uStack_54,0);
    }
    else {
      func_0x00802470(auStack_a8);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x007fcab0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x00801f50();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00802360(int param_1)

{
  func_0x007ff860(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                  *(undefined4 *)(param_1 + 0x3c),0);
  return;
}



void FUN_00802390(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_58 [48];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f2966b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x40);
  func_0x00801b80(param_1 + 8,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00801e60();
  if (param_2 != '\0') {
    func_0x007ff860(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x00801e60();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00802810(int param_1)

{
  func_0x00800dc0(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x54),0);
  return;
}



void FUN_00802840(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00f2982c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_70,0,0x58);
  func_0x00802650(param_1 + 8,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00802710();
  if (param_2 != '\0') {
    func_0x00800dc0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x007fcab0();
  uStack_8 = 0xffffffff;
  func_0x00802710();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00802930(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -1;
  puStack_c = &DAT_00f281de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1[3] = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[4] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[4] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[4] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  *param_1 = boost::asio::ip::bad_address_cast::vftable;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



undefined4 * __thiscall FUN_00802940(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puVar5 = param_1 + -4;
  puStack_c = &DAT_00f281de;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception::vftable;
  iStack_8._1_3_ = 0;
  uVar2 = iStack_8._1_3_;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[1] + 0x10);
    _guard_check_icall(uVar4);
    cVar3 = (*pcVar1)();
    uVar2 = iStack_8._1_3_;
    if (cVar3 != '\0') {
      param_1[1] = 0;
    }
  }
  iStack_8._1_3_ = uVar2;
  param_1[-3] = boost::asio::ip::bad_address_cast::vftable;
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[-3] = std::exception::vftable;
  __std_exception_destroy(param_1 + -2);
  iStack_8 = 0xffffffff;
  *puVar5 = boost::exception_detail::clone_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(puVar5,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return puVar5;
}



undefined4 __thiscall FUN_00802950(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ec9ffd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0077c3f0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x5001c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_008029b0(int param_1,undefined4 *param_2)

{
  size_t _Size;
  
  _Size = param_2[4];
  func_0x00802d70(_Size + 0xc);
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  memcpy((void *)(param_1 + 0x28),param_2,_Size);
  *(size_t *)(param_1 + 0x18) = _Size;
  *(undefined4 *)(param_1 + 0x14) = 0xc;
  *(undefined4 *)(param_1 + 0x10) = 0xc;
  return;
}



undefined1 __fastcall FUN_00802a00(int param_1)

{
  undefined1 uVar1;
  
  func_0x00802ce0(1);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x1c + param_1);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return uVar1;
}



undefined2 __fastcall FUN_00802a20(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  func_0x00802ce0(2);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar1 = *(undefined1 *)(iVar3 + 0x1d + param_1);
  uVar2 = *(undefined1 *)(iVar3 + 0x1c + param_1);
  *(int *)(param_1 + 0x14) = iVar3 + 2;
  return CONCAT11(uVar1,uVar2);
}



undefined4 __fastcall FUN_00802a50(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  func_0x00802ce0(4);
  iVar5 = *(int *)(param_1 + 0x14);
  uVar1 = *(undefined1 *)(iVar5 + 0x1f + param_1);
  uVar2 = *(undefined1 *)(iVar5 + 0x1e + param_1);
  uVar3 = *(undefined1 *)(iVar5 + 0x1d + param_1);
  uVar4 = *(undefined1 *)(iVar5 + 0x1c + param_1);
  *(int *)(param_1 + 0x14) = iVar5 + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
}



void __fastcall FUN_00802a90(int param_1)

{
  int iVar1;
  
  func_0x00802ce0(8);
  iVar1 = *(int *)(param_1 + 0x14);
  func_0x005e0f40();
  *(int *)(param_1 + 0x14) = iVar1 + 8;
  return;
}



undefined4 * __thiscall FUN_00802ac0(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f298b1;
  iStack_1c = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  func_0x00802ce0(2,uVar4);
  iVar3 = *(int *)(param_1 + 0x14);
  uVar1 = *(undefined1 *)(iVar3 + 0x1d + param_1);
  uVar2 = *(undefined1 *)(iVar3 + 0x1c + param_1);
  *(int *)(param_1 + 0x14) = iVar3 + 2;
  uVar4 = (uint)CONCAT11(uVar1,uVar2);
  func_0x00802ce0(uVar4);
  iVar3 = *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x14) = iVar3 + uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  func_0x0046bc40(param_1 + 0x1c + iVar3,uVar4);
  *unaff_FS_OFFSET = iStack_1c;
  return param_2;
}



undefined4 __thiscall FUN_00802c40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  func_0x00802ce0(param_2);
  iVar3 = *(int *)(param_1 + 0x14) + 0x1c + param_1;
  iVar2 = func_0x00bb77a0(DAT_0145efb8);
  if (param_2 == iVar2) {
    func_0x00bb7520(param_2,iVar3,iVar3,DAT_0145efb8,3);
  }
  func_0x00802ce0(1);
  cVar1 = *(char *)(*(int *)(param_1 + 0x14) + 0x1c + param_1);
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),cVar1 == '\0');
}



void __fastcall FUN_00802e70(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xc;
  *(undefined4 *)(param_1 + 0x10) = 0xc;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void __thiscall FUN_00802e90(int param_1,undefined4 *param_2)

{
  size_t _Size;
  
  _Size = param_2[4];
  *(undefined4 *)(param_1 + 0x14) = 0xc;
  *(undefined4 *)(param_1 + 0x10) = 0xc;
  *(undefined4 *)(param_1 + 0x18) = 0;
  func_0x00803290(_Size);
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  memcpy((void *)(*(int *)(param_1 + 0x14) + 0x1c + param_1),param_2,_Size);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + _Size;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + _Size;
  return;
}



void __thiscall FUN_00802ef0(int param_1,undefined1 param_2)

{
  func_0x00803290(1);
  *(undefined1 *)(param_1 + 0x1c + *(int *)(param_1 + 0x14)) = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}



void __thiscall FUN_00802f20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  func_0x00803290(2);
  iVar1 = *(int *)(param_1 + 0x14);
  *(char *)(iVar1 + 0x1d + param_1) = (char)((uint)param_2 >> 8);
  *(char *)(iVar1 + 0x1c + param_1) = (char)param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 2;
  return;
}



void __thiscall FUN_00802f50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  func_0x00803290(4);
  iVar1 = *(int *)(param_1 + 0x14) + param_1;
  *(char *)(iVar1 + 0x1f) = (char)((uint)param_2 >> 0x18);
  *(char *)(iVar1 + 0x1e) = (char)((uint)param_2 >> 0x10);
  *(char *)(iVar1 + 0x1d) = (char)((uint)param_2 >> 8);
  *(char *)(iVar1 + 0x1c) = (char)param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
  return;
}



void __thiscall FUN_00802fa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  func_0x00803290(8);
  iVar1 = *(int *)(param_1 + 0x14) + param_1;
  *(char *)(iVar1 + 0x23) = (char)((uint)param_3 >> 0x18);
  *(char *)(iVar1 + 0x22) = (char)((uint)param_3 >> 0x10);
  *(char *)(iVar1 + 0x20) = (char)param_3;
  *(char *)(iVar1 + 0x21) = (char)((uint)param_3 >> 8);
  *(char *)(iVar1 + 0x1e) = (char)((uint)param_2 >> 0x10);
  *(char *)(iVar1 + 0x1f) = (char)((uint)param_2 >> 0x18);
  *(char *)(iVar1 + 0x1d) = (char)((uint)param_2 >> 8);
  *(char *)(iVar1 + 0x1c) = (char)param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 8;
  return;
}



void __thiscall FUN_00803010(int param_1,undefined4 *param_2)

{
  size_t _Size;
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_6c [84];
  undefined4 auStack_18 [2];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f29915;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Size = param_2[4];
  if ((int)_Size < 0x10001) {
    func_0x00803290(_Size + 2);
    func_0x00803290(2);
    iVar4 = *(int *)(param_1 + 0x14);
    *(char *)(iVar4 + 0x1d + param_1) = (char)(_Size >> 8);
    *(char *)(iVar4 + 0x1c + param_1) = (char)_Size;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 2;
    iVar4 = *(int *)(param_1 + 0x14) + 2;
    *(int *)(param_1 + 0x14) = iVar4;
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    memcpy((void *)(param_1 + 0x1c + iVar4),param_2,_Size);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + _Size;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + _Size;
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  auStack_18[0] = 0x10000;
  func_0x00469d30("string length > %d",uVar2);
  uStack_8 = 0;
  uVar3 = func_0x00485670(auStack_18);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0047d7f0(uVar3);
  func_0x00e87d2e(auStack_6c,&DAT_01288694);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00803100(int param_1,size_t param_2,byte param_3)

{
  if (0 < (int)param_2) {
    func_0x00803290(param_2);
    memset((void *)(*(int *)(param_1 + 0x14) + 0x1c + param_1),(uint)param_3,param_2);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
  }
  return;
}



void __fastcall FUN_00803140(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_4c [36];
  undefined1 auStack_28 [24];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f29955;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar3 = func_0x00bb77a0(DAT_0145efb8,uVar2);
  if (*(uint *)(param_1 + 0x18) < uVar3) {
    func_0x00469d30("insufficient bytes in buffer to encrypt");
    uStack_8 = 0;
    func_0x0047d7f0(auStack_28);
    func_0x00e87d2e(auStack_4c,&DAT_01288694);
  }
  else {
    iVar4 = param_1 + 0x1c + (*(int *)(param_1 + 0x14) - uVar3);
    uVar2 = func_0x00bb77a0(DAT_0145efb8,uVar2);
    if (uVar3 == uVar2) {
      iVar4 = func_0x00bb7550(uVar3,iVar4,iVar4,DAT_0145efb8,3);
      if (iVar4 != -1) {
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
    }
  }
  func_0x00469d30("rsa encryption failed");
  uStack_8 = 1;
  func_0x0047d7f0(auStack_28);
  func_0x00e87d2e(auStack_4c,&DAT_01288694);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00803490(undefined4 param_1,byte param_2)

{
  func_0x00803310();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd8);
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0080417e)
// WARNING: Removing unreachable block (ram,0x008042b2)

void __fastcall FUN_008040c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  longlong lVar9;
  undefined **appuStack_78 [2];
  code *pcStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined ***pppuStack_54;
  uint auStack_50 [7];
  undefined8 uStack_34;
  uint uStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f29cb0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar7 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  lVar9 = 1;
  if (*(int *)(param_1 + 0x48) != 0) {
    while( true ) {
      uStack_20 = DAT_0145db28;
      puStack_14 = *(uint **)(*(int *)(param_1 + 0x3c) +
                             (*(int *)(param_1 + 0x40) - 1U & *(uint *)(param_1 + 0x44)) * 4);
      func_0x008abfd0(uVar7);
      lVar9 = func_0x008abcb0();
      uStack_18 = (undefined4)lVar9;
      uStack_34 = DAT_0145db28;
      uVar6 = uStack_34;
      uStack_34._0_4_ = (uint)DAT_0145db28;
      uStack_34._4_4_ = (int)((ulonglong)DAT_0145db28 >> 0x20);
      uStack_20 = CONCAT44((int)((ulonglong)lVar9 >> 0x20),(undefined4)uStack_20);
      uVar2 = *puStack_14;
      uVar3 = puStack_14[1];
      *(uint *)(param_1 + 0x18) = (uint)uStack_34 - *puStack_14;
      *(uint *)(param_1 + 0x1c) = (uStack_34._4_4_ - uVar3) - (uint)((uint)uStack_34 < uVar2);
      uVar2 = puStack_14[1];
      *(uint *)(param_1 + 0x10) = *puStack_14;
      *(uint *)(param_1 + 0x14) = uVar2;
      uStack_34 = uVar6;
      if (1 < lVar9) break;
      if (puStack_14[3] != 0) {
        LOCK();
        piVar1 = (int *)(puStack_14[3] + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      uStack_2c = puStack_14[2];
      piStack_28 = (int *)puStack_14[3];
      uStack_8 = 0;
      puStack_14 = *(uint **)(param_1 + 0xac);
      if (puStack_14 == (uint *)0x0) goto LAB_00804453;
      pcVar4 = *(code **)(*puStack_14 + 8);
      _guard_check_icall(&uStack_2c);
      (*pcVar4)();
      uStack_8 = 0xffffffff;
      puStack_14 = (uint *)piStack_28;
      if (piStack_28 != (int *)0x0) {
        LOCK();
        iVar5 = piStack_28[1] + -1;
        piStack_28[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar4 = *(code **)*piStack_28;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar5 = puStack_14[2] + -1;
          puStack_14[2] = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar4 = *(code **)(*puStack_14 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
      iStack_24 = *(int *)(*(int *)(param_1 + 0x3c) +
                          (*(int *)(param_1 + 0x40) - 1U & *(uint *)(param_1 + 0x44)) * 4);
      uStack_8 = 0xffffffff;
      puStack_14 = *(uint **)(iStack_24 + 0xc);
      if (puStack_14 != (uint *)0x0) {
        LOCK();
        uVar2 = puStack_14[1] - 1;
        puStack_14[1] = uVar2;
        UNLOCK();
        if (uVar2 == 0) {
          pcVar4 = *(code **)*puStack_14;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          uVar2 = puStack_14[2] - 1;
          puStack_14[2] = uVar2;
          UNLOCK();
          if (uVar2 == 0) {
            pcVar4 = *(code **)(*puStack_14 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
      piVar1 = (int *)(param_1 + 0x48);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        lVar9 = CONCAT44(uStack_20._4_4_,uStack_18);
        *(undefined4 *)(param_1 + 0x44) = 0;
        break;
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
  }
  if ((*(int *)(param_1 + 0x48) == 0) || (lVar9 < 2)) {
    if (((DAT_012bbe68 == 0x257edfd1) && (DAT_012bbe6c == -0x4d54ee86)) ||
       ((DAT_012bbe68 == 0x257edfd0 && (DAT_012bbe6c == -0x4d54ee86)))) {
      uVar7 = 1;
    }
    else {
      pcVar4 = *(code **)(PTR_vftable_012bbe60 + 0x18);
      _guard_check_icall(2);
      uVar7 = (*pcVar4)();
    }
    auStack_50[6] = 2;
    piVar1 = *(int **)(param_1 + 0xd4);
    uStack_34 = CONCAT44((uVar7 & 0xff) + 2,&PTR_vftable_012bbe60);
    uStack_20 = CONCAT44(piVar1,(undefined4)uStack_20);
    if (piVar1 == (int *)0x0) {
LAB_00804453:
      func_0x00e701bd();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = *(code **)(*piVar1 + 8);
    _guard_check_icall(auStack_50 + 6);
    (*pcVar4)();
    func_0x00803fe0();
  }
  else {
    pppuStack_54 = appuStack_78;
    appuStack_78[0] = std::_Func_impl_no_alloc<>::vftable;
    pcStack_70 = FUN_008040c0;
    uStack_6c = 0;
    uStack_8 = 3;
    auStack_50[4] = 0;
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    auStack_50[3] = 0;
    auStack_50[5] = 0;
    iStack_68 = param_1;
    func_0x0046bc40("PacketPlayer::process",0x15);
    uStack_8._0_1_ = 4;
    uVar8 = FUN_005e4dd0(&uStack_34,auStack_50,appuStack_78,(int)lVar9);
    uStack_8._0_1_ = 5;
    func_0x0046ffa0(uVar8);
    uStack_8._0_1_ = 4;
    FUN_00468340();
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    if (0xf < auStack_50[5]) {
      func_0x0046b1f0(auStack_50,auStack_50[0],auStack_50[5]);
    }
    auStack_50[4] = 0;
    auStack_50[5] = 0xf;
    auStack_50[0] = auStack_50[0] & 0xffffff00;
    uStack_8 = 0xffffffff;
    if (pppuStack_54 != (undefined ***)0x0) {
      pcVar4 = (code *)(*pppuStack_54)[4];
      _guard_check_icall(pppuStack_54 != appuStack_78);
      (*pcVar4)();
      *unaff_FS_OFFSET = iStack_10;
      return;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_008053a0(undefined4 param_1,char param_2)

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
    func_0x008ab812(param_1,0x18,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



TypeDescriptor * FUN_008053f0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}



void __fastcall FUN_00805400(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 8);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



void __thiscall FUN_00805420(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = uVar1;
  param_2[4] = *(undefined4 *)(param_1 + 0x10);
  return;
}



undefined4 * __thiscall FUN_00805a00(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f29f78;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = PacketRecorder::vftable;
  uStack_8 = 0;
  func_0x0058f620(uVar1);
  uStack_8 = 0xffffffff;
  func_0x0077c3f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_00805f88(void)

{
  func_0x0046a610(4,1);
  return &DAT_00805fa4;
}



undefined4 __thiscall FUN_008065d0(undefined4 param_1,byte param_2)

{
  func_0x00806600();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x98);
  }
  return param_1;
}



void __thiscall FUN_008067c0(int **param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_1b8 [36];
  undefined4 uStack_194;
  code **ppcStack_190;
  int aiStack_18c [2];
  undefined4 uStack_184;
  undefined4 uStack_180;
  int *piStack_17c;
  undefined4 uStack_178;
  int *piStack_174;
  code **ppcStack_170;
  int *piStack_16c;
  code **ppcStack_168;
  int *piStack_164;
  int **ppiStack_160;
  uint uStack_15c;
  int aiStack_14c [9];
  int *piStack_128;
  int aiStack_124 [9];
  int *piStack_100;
  int iStack_fc;
  int *piStack_f8;
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  undefined4 *puStack_ec;
  undefined1 *puStack_e8;
  code **ppcStack_e4;
  undefined1 *puStack_e0;
  int aiStack_dc [9];
  int *piStack_b8;
  int **ppiStack_b4;
  code **ppcStack_b0;
  code *pcStack_ac;
  undefined4 uStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  code *pcStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined4 uStack_88;
  int *piStack_84;
  int iStack_78;
  code **ppcStack_74;
  int **ppiStack_70;
  code *pcStack_6c;
  undefined4 uStack_68;
  code *pcStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  int *piStack_58;
  code **ppcStack_50;
  code **ppcStack_4c;
  int **ppiStack_48;
  code **ppcStack_44;
  uint uStack_40;
  int aiStack_3c [9];
  int *piStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2a3dc;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_15c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_40 = 0;
  ppiStack_70 = (int **)param_2;
  iVar1 = param_2[4];
  piStack_16c = param_2;
  if (0xf < (uint)param_2[5]) {
    piStack_16c = (int *)*param_2;
  }
  ppiStack_160 = (int **)0x5;
  piStack_164 = (int *)0x119be4c;
  ppcStack_170 = (code **)0x80681b;
  ppcStack_168 = (code **)iVar1;
  ppiStack_48 = param_1;
  uStack_14 = uStack_15c;
  cVar4 = func_0x0046cf20();
  if (cVar4 == '\0') {
    piStack_16c = param_2;
    if (0xf < (uint)param_2[5]) {
      piStack_16c = (int *)*param_2;
    }
    ppiStack_160 = (int **)0x7;
    piStack_164 = (int *)0x119be54;
    ppcStack_170 = (code **)0x80683e;
    ppcStack_168 = (code **)iVar1;
    cVar4 = func_0x0046cf20();
    if (cVar4 == '\0') {
      if (0xf < (uint)param_2[5]) {
        param_2 = (int *)*param_2;
      }
      ppiStack_160 = (int **)0x9;
      piStack_164 = (int *)0x119be5c;
      ppcStack_170 = (code **)0x806861;
      piStack_16c = param_2;
      ppcStack_168 = (code **)iVar1;
      cVar4 = func_0x0046cf20();
      if ((cVar4 == '\0') || (DAT_0145ebf4 == 0)) {
        ppiStack_160 = (int **)0x80687d;
        ppiStack_160 = (int **)func_0x00808e30();
        iStack_8 = 0x1b;
        piStack_164 = (int *)0x80688d;
        func_0x0046ffa0();
        iStack_8 = 0xffffffff;
        piStack_164 = (int *)0x80689c;
        FUN_00468340();
        piVar2 = param_1[0x11];
        piStack_164 = &iStack_78;
        ppcStack_168 = (code **)0x8068aa;
        puVar5 = (undefined4 *)func_0x004ab7f0();
        ppcStack_44 = &pcStack_6c;
        ppcStack_4c = &pcStack_64;
        ppcStack_50 = (code **)&uStack_60;
        pcStack_6c = FUN_0056f580;
        uStack_68 = 0;
        uStack_60 = *puVar5;
        piStack_5c = (int *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        iStack_8._1_3_ = 0;
        uStack_40 = 4;
        piStack_128 = (int *)0x0;
        iStack_8._0_1_ = 0x23;
        ppcStack_168 = &pcStack_6c;
        piStack_16c = (int *)0x806925;
        piStack_128 = (int *)func_0x0080a030();
        piStack_b8 = (int *)0x0;
        iStack_8._0_1_ = 0x25;
        if (piStack_128 != (int *)0x0) {
          pcVar3 = *(code **)*piStack_128;
          piStack_16c = aiStack_dc;
          ppcStack_170 = (code **)0x80695d;
          _guard_check_icall();
          ppcStack_170 = (code **)0x806961;
          piStack_b8 = (int *)(*pcVar3)();
        }
        if ((piStack_b8 == aiStack_dc) || (piVar7 = (int *)piVar2[0x17], piVar7 == piVar2 + 0xe)) {
          piStack_18 = (int *)0x0;
          iStack_8._0_1_ = 0x27;
          piStack_16c = aiStack_dc;
          ppcStack_170 = (code **)0x8069a7;
          func_0x005ed990();
          piStack_174 = (int *)0x8069b3;
          ppcStack_170 = (code **)(piVar2 + 0xe);
          func_0x005ed990();
          piStack_174 = aiStack_3c;
          uStack_178 = 0x8069be;
          func_0x005ed990();
          iStack_8._0_1_ = 0x26;
          if (piStack_18 != (int *)0x0) {
            pcVar3 = *(code **)(*piStack_18 + 0x10);
            piStack_16c = (int *)CONCAT31((int3)((uint)aiStack_3c >> 8),piStack_18 != aiStack_3c);
            ppcStack_170 = (code **)0x8069df;
            _guard_check_icall();
            ppcStack_170 = (code **)0x8069e3;
            (*pcVar3)();
            piStack_18 = (int *)0x0;
          }
        }
        else {
          piVar2[0x17] = (int)piStack_b8;
          piStack_b8 = piVar7;
        }
        iStack_8._0_1_ = 0x24;
        if (piStack_b8 != (int *)0x0) {
          pcVar3 = *(code **)(*piStack_b8 + 0x10);
          piStack_16c = (int *)CONCAT31((int3)((uint)aiStack_dc >> 8),piStack_b8 != aiStack_dc);
          ppcStack_170 = (code **)0x806a11;
          _guard_check_icall();
          ppcStack_170 = (code **)0x806a15;
          (*pcVar3)();
          piStack_b8 = (int *)0x0;
        }
        iStack_8._0_1_ = 0x1d;
        if (piStack_128 != (int *)0x0) {
          pcVar3 = *(code **)(*piStack_128 + 0x10);
          piStack_16c = (int *)CONCAT31((int3)((uint)aiStack_14c >> 8),piStack_128 != aiStack_14c);
          ppcStack_170 = (code **)0x806a46;
          _guard_check_icall();
          ppcStack_170 = (code **)0x806a4a;
          (*pcVar3)();
          piStack_128 = (int *)0x0;
        }
        uStack_40 = 0;
        ppcStack_50 = &pcStack_6c;
        ppcStack_4c = &pcStack_64;
        iStack_8 = CONCAT31(iStack_8._1_3_,0x1c);
        ppcStack_44 = (code **)piStack_5c;
        if (piStack_5c != (int *)0x0) {
          LOCK();
          iVar1 = piStack_5c[1] + -1;
          piStack_5c[1] = iVar1;
          UNLOCK();
          if (iVar1 == 0) {
            pcVar3 = *(code **)*piStack_5c;
            piStack_16c = (int *)0x806aa6;
            _guard_check_icall();
            piStack_16c = (int *)0x806aab;
            (*pcVar3)();
            LOCK();
            iVar1 = (int)ppcStack_44[2] + -1;
            ppcStack_44[2] = (code *)iVar1;
            UNLOCK();
            if (iVar1 == 0) {
              pcVar3 = *(code **)((int)*ppcStack_44 + 4);
              piStack_16c = (int *)0x806ac4;
              _guard_check_icall();
              piStack_16c = (int *)0x806ac9;
              (*pcVar3)();
            }
          }
        }
        iStack_8 = 0xffffffff;
        piStack_16c = (int *)0x806ad8;
        FUN_00468340();
        piStack_16c = &iStack_78;
        ppcStack_170 = (code **)0x806ae9;
        puVar5 = (undefined4 *)func_0x004ab7f0();
        ppcStack_50 = &pcStack_64;
        ppcStack_4c = (code **)&piStack_5c;
        pcStack_64 = FUN_0056f600;
        uStack_60 = 0;
        piStack_5c = (int *)*puVar5;
        piStack_58 = (int *)puVar5[1];
        *puVar5 = 0;
        puVar5[1] = 0;
        iStack_8._1_3_ = 0;
        uStack_40 = 8;
        piStack_100 = (int *)0x0;
        iStack_8._0_1_ = 0x35;
        ppcStack_170 = &pcStack_64;
        piStack_174 = (int *)0x806b60;
        ppiStack_48 = (int **)ppcStack_4c;
        piStack_100 = (int *)func_0x0080a0d0();
        iStack_8._0_1_ = 0x36;
        piStack_174 = aiStack_124;
        uStack_178 = param_3;
        piStack_17c = (int *)ppiStack_70;
        uStack_180 = 0x806b7e;
        func_0x007fb9e0();
        iStack_8._0_1_ = 0x2f;
        if (piStack_100 != (int *)0x0) {
          pcVar3 = *(code **)(*piStack_100 + 0x10);
          uStack_180 = CONCAT31((int3)((uint)aiStack_124 >> 8),piStack_100 != aiStack_124);
          uStack_184 = 0x806ba5;
          _guard_check_icall();
          uStack_184 = 0x806bad;
          (*pcVar3)();
          piStack_100 = (int *)0x0;
        }
        piVar2 = piStack_58;
        uStack_40 = 0;
        ppcStack_50 = &pcStack_64;
        ppiStack_70 = &piStack_5c;
        iStack_8 = CONCAT31(iStack_8._1_3_,0x2e);
        ppcStack_4c = (code **)ppiStack_70;
        if (piStack_58 != (int *)0x0) {
          LOCK();
          iVar1 = piStack_58[1] + -1;
          piStack_58[1] = iVar1;
          UNLOCK();
          if (iVar1 == 0) {
            pcVar3 = *(code **)*piStack_58;
            uStack_180 = 0x806bf8;
            _guard_check_icall();
            uStack_180 = 0x806bfc;
            (*pcVar3)();
            LOCK();
            piVar7 = piVar2 + 2;
            iVar1 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              pcVar3 = *(code **)(*piVar2 + 4);
              uStack_180 = 0x806c11;
              _guard_check_icall();
              uStack_180 = 0x806c15;
              (*pcVar3)();
            }
          }
        }
        iStack_8 = 0xffffffff;
        uStack_180 = 0x806c24;
        FUN_00468340();
        goto LAB_00806f31;
      }
    }
  }
  ppiStack_160 = &piStack_5c;
  *(undefined1 *)(param_1 + 4) = 0;
  piStack_164 = (int *)0x806c38;
  puVar5 = (undefined4 *)func_0x004ab7f0();
  iStack_8 = 0;
  piStack_164 = &iStack_fc;
  ppcStack_168 = (code **)0x806c4f;
  puVar6 = (undefined4 *)func_0x004ab7f0();
  ppcStack_50 = &pcStack_ac;
  ppcStack_4c = (code **)&piStack_a4;
  ppiStack_70 = &piStack_a0;
  pcStack_ac = FUN_00808bc0;
  uStack_a8 = 0;
  piStack_a0 = (int *)*puVar5;
  piStack_9c = (int *)puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  puStack_e0 = (undefined1 *)aiStack_18c;
  ppcStack_44 = (code **)aiStack_18c;
  uStack_40 = 1;
  ppcStack_168 = (code **)0x0;
  iStack_8._0_1_ = 8;
  ppcStack_190 = &pcStack_ac;
  uStack_194 = 0x806cec;
  ppcStack_168 = (code **)func_0x00809f90();
  ppcStack_e4 = &pcStack_94;
  puStack_e8 = auStack_8c;
  puStack_ec = &uStack_88;
  pcStack_94 = FUN_00808990;
  uStack_90 = 0;
  uStack_88 = *puVar6;
  piStack_84 = (int *)puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  puStack_f0 = auStack_1b8;
  puStack_f4 = auStack_1b8;
  uStack_40 = 3;
  uStack_194 = 0;
  iStack_8._0_1_ = 0x10;
  uStack_194 = func_0x00809ef0(&pcStack_94);
  iStack_8._0_1_ = 0x12;
  piVar7 = (int *)func_0x00820010(param_3);
  piVar2 = piStack_84;
  ppiStack_48[5] = piVar7;
  uStack_40 = 1;
  ppcStack_b0 = &pcStack_94;
  ppiStack_b4 = (int **)auStack_8c;
  ppcStack_74 = (code **)&uStack_88;
  iStack_8._0_1_ = 2;
  uVar8 = 0;
  if (piStack_84 != (int *)0x0) {
    LOCK();
    iVar1 = piStack_84[1] + -1;
    piStack_84[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piStack_84;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar7 = piVar2 + 2;
      iVar1 = *piVar7 + -1;
      *piVar7 = iVar1;
      UNLOCK();
      uVar8 = uStack_40;
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
        uVar8 = uStack_40;
      }
    }
  }
  piVar2 = piStack_9c;
  uStack_40 = uVar8 & 0xfffffffe;
  ppcStack_74 = &pcStack_ac;
  ppiStack_b4 = &piStack_a4;
  ppcStack_b0 = (code **)&piStack_a0;
  iStack_8._0_1_ = 1;
  if (piStack_9c != (int *)0x0) {
    LOCK();
    iVar1 = piStack_9c[1] + -1;
    piStack_9c[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piStack_9c;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar7 = piVar2 + 2;
      iVar1 = *piVar7 + -1;
      *piVar7 = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (piStack_f8 != (int *)0x0) {
    LOCK();
    iVar1 = piStack_f8[1] + -1;
    piStack_f8[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piStack_f8;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      iVar1 = piStack_f8[2] + -1;
      piStack_f8[2] = iVar1;
      UNLOCK();
      if (iVar1 == 0) {
        pcVar3 = *(code **)(*piStack_f8 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = piStack_58;
  iStack_8 = 0xffffffff;
  if (piStack_58 != (int *)0x0) {
    LOCK();
    iVar1 = piStack_58[1] + -1;
    piStack_58[1] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      pcVar3 = *(code **)*piStack_58;
      _guard_check_icall();
      (*pcVar3)();
      LOCK();
      piVar7 = piVar2 + 2;
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  pcVar3 = (code *)(*ppiStack_48)[3];
  _guard_check_icall();
  (*pcVar3)();
LAB_00806f31:
  *unaff_FS_OFFSET = iStack_10;
  ppcStack_170 = (code **)0x806f49;
  FUN_008ab370();
  return;
}



int __fastcall FUN_00806ff0(int param_1)

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
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac9ed;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar6 = func_0x00803fe0();
    *unaff_FS_OFFSET = iStack_10;
    return iVar6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar6 = func_0x008201f0(*(int *)(param_1 + 0x14));
    *unaff_FS_OFFSET = iStack_10;
    return iVar6;
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x007fb7a0(uVar5);
    iVar6 = *(int *)(param_1 + 0x44);
    piVar3 = *(int **)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    uStack_8 = 0xffffffff;
    if (piVar3 != (int *)0x0) {
      LOCK();
      piVar1 = piVar3 + 1;
      iVar2 = *piVar1;
      iVar6 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar4 = *(code **)*piVar3;
        _guard_check_icall();
        iVar6 = (*pcVar4)();
        LOCK();
        piVar1 = piVar3 + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar4 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          iVar6 = (*pcVar4)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar6;
}



bool __fastcall FUN_008074b0(int param_1)

{
  if ((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    if (*(int *)(param_1 + 0x44) != 0) {
      return *(char *)(*(int *)(param_1 + 0x44) + 0x238) != '\0';
    }
    return false;
  }
  return *(char *)(param_1 + 0x10) == '\0';
}



uint __fastcall FUN_008074e0(int param_1)

{
  uint in_EAX;
  
  if (((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0x14) == 0)) &&
     (in_EAX = *(uint *)(param_1 + 0x44), in_EAX != 0)) {
    return CONCAT31((int3)(in_EAX >> 8),*(char *)(in_EAX + 0x239) != '\0');
  }
  return in_EAX & 0xffffff00;
}



// WARNING: Removing unreachable block (ram,0x008077f5)

void __thiscall FUN_00807510(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  size_t _Size;
  uint uVar11;
  int *unaff_FS_OFFSET;
  int iStack_2c;
  uint uStack_28;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2a5e5;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      func_0x00805c60();
    }
    if (param_3 == '\0') {
      if (*(char *)(param_1 + 0x3e) != '\0') {
        func_0x00803220();
        iVar6 = *param_2;
        uVar7 = *(uint *)(iVar6 + 0x18);
        if ((uVar7 & 7) != 0) {
          _Size = 8 - (uVar7 & 7);
          if (0 < (int)_Size) {
            func_0x00803290();
            memset((void *)(*(int *)(iVar6 + 0x14) + iVar6 + 0x1c),0,_Size);
            *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + _Size;
            *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + _Size;
            iVar6 = *param_2;
          }
          uVar7 = uVar7 + _Size;
        }
        iVar6 = iVar6 - ((uint)(*(char *)(param_1 + 0x3f) != '\0') * 2 + 2);
        uStack_28 = 0;
        if (uVar7 >> 2 != 0) {
          do {
            uVar10 = *(uint *)(iVar6 + 0x28 + uStack_28 * 4);
            uVar8 = 0;
            uVar11 = *(uint *)(iVar6 + 0x2c + uStack_28 * 4);
            iStack_2c = 0x20;
            do {
              uVar4 = *(int *)(param_1 + 0x18 + (uVar8 & 3) * 4) + uVar8;
              uVar8 = uVar8 + 0x9e3779b9;
              uVar10 = uVar10 + ((uVar11 >> 5 ^ uVar11 << 4) + uVar11 ^ uVar4);
              uVar11 = uVar11 + ((uVar10 >> 5 ^ uVar10 * 0x10) + uVar10 ^
                                *(int *)(param_1 + 0x18 + (uVar8 >> 0xb & 3) * 4) + uVar8);
              iStack_2c = iStack_2c + -1;
            } while (iStack_2c != 0);
            *(uint *)(iVar6 + 0x28 + uStack_28 * 4) = uVar10;
            *(uint *)(iVar6 + 0x2c + uStack_28 * 4) = uVar11;
            uStack_28 = uStack_28 + 2;
          } while (uStack_28 < uVar7 >> 2);
        }
      }
      if (*(char *)(param_1 + 0x3d) == '\0') {
        if (*(char *)(param_1 + 0x3c) != '\0') {
          iVar3 = *param_2;
          iVar6 = *(int *)(iVar3 + 0x10);
          uVar5 = func_0x0083ba40();
          iVar6 = iVar6 + -4;
          *(int *)(iVar3 + 0x10) = iVar6;
          iVar6 = iVar3 + iVar6;
          *(char *)(iVar6 + 0x1c) = (char)uVar5;
          *(char *)(iVar6 + 0x1e) = (char)((uint)uVar5 >> 0x10);
          *(char *)(iVar6 + 0x1f) = (char)((uint)uVar5 >> 0x18);
          *(char *)(iVar6 + 0x1d) = (char)((uint)uVar5 >> 8);
          *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 4;
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x28);
        iVar3 = *param_2;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + -4;
        iVar9 = *(int *)(iVar3 + 0x10) + iVar3;
        *(char *)(iVar9 + 0x1f) = (char)((uint)iVar6 >> 0x18);
        *(char *)(iVar9 + 0x1e) = (char)((uint)iVar6 >> 0x10);
        *(char *)(iVar9 + 0x1d) = (char)((uint)iVar6 >> 8);
        *(char *)(iVar9 + 0x1c) = (char)iVar6;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 4;
      }
      func_0x00803220();
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      if (*(int *)(param_1 + 0x44) != 0) {
        func_0x007fc290();
      }
      iVar6 = *param_2;
      *(undefined4 *)(iVar6 + 0x14) = 0xc;
      *(undefined4 *)(iVar6 + 0x10) = 0xc;
      *(undefined4 *)(iVar6 + 0x18) = 0;
    }
    else {
      func_0x00608b70();
      uStack_8 = 0;
      func_0x00820440(*(undefined4 *)(param_1 + 0x14));
      iVar6 = *param_2;
      *(undefined4 *)(iVar6 + 0x14) = 0xc;
      *(undefined4 *)(iVar6 + 0x10) = 0xc;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      uStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  else if (*(char *)(*param_2 + 0x28) == '\x14') {
    if (((DAT_012bbe68 != 0x257edfd1) || (DAT_012bbe6c != -0x4d54ee86)) &&
       ((DAT_012bbe68 != 0x257edfd0 || (DAT_012bbe6c != -0x4d54ee86)))) {
      pcVar2 = *(code **)(PTR_vftable_012bbe60 + 0x18);
      _guard_check_icall();
      (*pcVar2)();
    }
    piVar1 = *(int **)(iVar6 + 0xd4);
    if (piVar1 == (int *)0x0) {
      func_0x00e701bd();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall();
    (*pcVar2)();
    func_0x00803fe0();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00807890(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_64 [36];
  undefined4 uStack_40;
  undefined1 auStack_3c [24];
  undefined1 auStack_24 [8];
  code *pcStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2a648;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    iVar3 = *(int *)(param_1 + 0x4c);
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0xc;
    *(undefined4 *)(iVar3 + 0x10) = 0xc;
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar3 = (uint)(*(char *)(param_1 + 0x3f) != '\0') * 2;
    iVar5 = iVar3 + 2;
    iVar3 = iVar3 + 6;
    if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar3 = iVar5;
    }
    iVar5 = iVar5 + iVar3;
    if (*(char *)(param_1 + 0x3e) == '\0') {
      iVar5 = iVar3;
    }
    *(int *)(iVar1 + 0x10) = 0xc - iVar5;
    *(int *)(iVar1 + 0x14) = 0xc - iVar5;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar4 = func_0x004ab7f0(auStack_24,uVar2);
      iStack_8 = 0;
      pcStack_1c = FUN_008079d0;
      uStack_18 = 0;
      uVar4 = func_0x007fe140(uVar4);
      iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
      uStack_40 = 0;
      iStack_8._0_1_ = 2;
      uStack_40 = func_0x0080a170(uVar4);
      iStack_8._0_1_ = 3;
      func_0x007fcb50((*(char *)(param_1 + 0x3f) != '\0') * '\x02' + '\x02',auStack_64);
      iStack_8._0_1_ = 1;
      func_0x00464b40();
      puStack_14 = auStack_3c;
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      func_0x0052b260();
      iStack_8 = 0xffffffff;
      FUN_00468340();
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __thiscall FUN_008079d0(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int aiStack_60 [9];
  int *piStack_3c;
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [4];
  int *piStack_1c;
  code *pcStack_18;
  undefined1 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2a6b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar5 = *(int *)(param_1 + 0x4c);
  func_0x00802d70(*(int *)(iVar5 + 0x14) + param_3,uVar4);
  memcpy((void *)(*(int *)(iVar5 + 0x14) + 0x1c + iVar5),param_2,param_3);
  *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + param_3;
  iVar5 = func_0x00806310(*(undefined1 *)(param_1 + 0x3f));
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar6 = func_0x004ab7f0(auStack_20);
    iStack_8 = 0;
    pcStack_18 = FUN_00807b40;
    puStack_14 = (undefined1 *)0x0;
    uVar6 = func_0x007fe140(uVar6);
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    piStack_3c = (int *)0x0;
    iStack_8._0_1_ = 2;
    piStack_3c = (int *)func_0x0080a170(uVar6);
    iStack_8._0_1_ = 3;
    func_0x007fcb50(iVar5,aiStack_60);
    iStack_8._0_1_ = 1;
    if (piStack_3c != (int *)0x0) {
      pcVar3 = *(code **)(*piStack_3c + 0x10);
      _guard_check_icall(CONCAT31((int3)((uint)aiStack_60 >> 8),piStack_3c != aiStack_60));
      (*pcVar3)();
      piStack_3c = (int *)0x0;
    }
    puStack_14 = auStack_38;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    iVar5 = func_0x0052b260();
    iStack_8 = 0xffffffff;
    if (piStack_1c != (int *)0x0) {
      LOCK();
      piVar1 = piStack_1c + 1;
      iVar2 = *piVar1;
      iVar5 = *piVar1;
      *piVar1 = iVar2 + -1;
      UNLOCK();
      if (iVar2 + -1 == 0) {
        pcVar3 = *(code **)*piStack_1c;
        _guard_check_icall();
        iVar5 = (*pcVar3)();
        LOCK();
        piVar1 = piStack_1c + 2;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          pcVar3 = *(code **)(*piStack_1c + 4);
          _guard_check_icall();
          iVar5 = (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar5;
}



// WARNING: Type propagation algorithm not settling

void __thiscall FUN_00807b40(int *param_1,void *param_2,size_t param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  int aiStack_90 [5];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int *piStack_2c;
  int *piStack_28;
  char cStack_21;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f2a735;
  iStack_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  piStack_28 = param_1;
  if ((param_1[0xb] == 0) && (param_1[5] == 0)) {
    if ((param_1[0x11] == 0) || (*(char *)(param_1[0x11] + 0x238) == '\0')) goto LAB_00807b9d;
LAB_00807c62:
    iVar8 = param_1[0x13];
    piStack_2c = param_1 + 0x13;
    func_0x00802d70();
    aiStack_90[4] = 0x807c8b;
    memcpy((void *)(*(int *)(iVar8 + 0x14) + 0x1c + iVar8),param_2,param_3);
    piVar11 = piStack_28;
    *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + param_3;
    cStack_21 = '\0';
    if (*(char *)((int)piStack_28 + 0x3d) != '\0') {
      iVar8 = *piStack_2c;
      func_0x00802ce0();
      iVar5 = *(int *)(iVar8 + 0x14);
      cStack_21 = 0xbfffffff <
                  CONCAT22(CONCAT11(*(undefined1 *)(iVar5 + 0x1f + iVar8),
                                    *(undefined1 *)(iVar5 + 0x1e + iVar8)),
                           CONCAT11(*(undefined1 *)(iVar5 + 0x1d + iVar8),
                                    *(undefined1 *)(iVar5 + 0x1c + iVar8)));
      *(int *)(iVar8 + 0x14) = iVar5 + 4;
      piVar10 = piStack_2c;
      piVar11 = piStack_28;
LAB_00807e05:
      if ((*(char *)((int)piVar11 + 0x3e) == '\0') || (cVar7 = func_0x008081b0(), cVar7 != '\0')) {
        if ((cStack_21 != '\0') || ((char)piVar11[0x10] != '\0')) {
          iVar8 = *piVar10;
          if (*(int *)(iVar8 + 0x18) + 4U < 0x50001) {
            *(undefined1 *)(*(int *)(iVar8 + 0x10) + *(int *)(iVar8 + 0x18) + 0x1c + iVar8) = 0;
            *(undefined1 *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x10) + 0x1d + iVar8) = 0;
            *(undefined1 *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x10) + 0x1e + iVar8) = 0xff;
            *(undefined1 *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x10) + 0x1f + iVar8) = 0xff;
            *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 4;
          }
          iVar8 = *piVar10;
          piVar11[0x18] = piVar11[0x23];
          piVar11[0x15] = iVar8 + 0x28;
          piVar11[0x16] = (*(int *)(iVar8 + 0x18) - *(int *)(iVar8 + 0x14)) + *(int *)(iVar8 + 0x10)
          ;
          piVar11[0x19] = piVar11[0x24] - piVar11[0x23];
          iVar8 = func_0x00e68f80();
          if (iVar8 != 0) {
            uStack_34 = 0;
            uStack_30 = 0;
            uStack_44 = 0;
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            func_0x0046bc40();
            uStack_14 = 7;
            piStack_2c = aiStack_90;
            aiStack_90[0] = 0;
            aiStack_90[1] = 0;
            aiStack_90[2] = 0;
            aiStack_90[3] = 0;
            aiStack_90[4] = 0;
            func_0x0046bc40("?internalRecvData@Protocol@@AAEXPAEI@Z",0x26);
            uStack_14 = CONCAT31((int3)(uStack_14 >> 8),7);
            goto LAB_00807bfe;
          }
          piStack_2c = (int *)((piVar11[0x24] - piVar11[0x23]) - piVar11[0x19]);
          if (piStack_2c == (int *)0x0) {
            piStack_2c = (int *)0x0;
            uStack_34 = 0;
            uStack_44 = 0;
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            uStack_30 = 0;
            func_0x0046bc40();
            uStack_14 = 9;
            aiStack_90[4] = 0x807fc5;
            uVar9 = func_0x00485670();
            uStack_14._0_1_ = 10;
            piStack_28 = aiStack_90;
            aiStack_90[0] = 0;
            aiStack_90[1] = 0;
            aiStack_90[2] = 0;
            aiStack_90[3] = 0;
            aiStack_90[4] = 0;
            func_0x0046bc40("?internalRecvData@Protocol@@AAEXPAEI@Z",0x26);
            uStack_14._0_1_ = 10;
            func_0x005eea60(3,uVar9);
            uStack_14 = CONCAT31(uStack_14._1_3_,9);
            FUN_00469ba0();
            goto LAB_00807c03;
          }
          func_0x00802ca0();
          *(int *)(piVar11[0x13] + 0x18) = (int)piStack_2c + (0xc - *(int *)(piVar11[0x13] + 0x10));
        }
        if (piVar11[0xd] != 0) {
          func_0x00805a80();
        }
        pcVar6 = *(code **)(*piVar11 + 0x10);
        _guard_check_icall();
        (*pcVar6)();
        goto LAB_00807c34;
      }
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      func_0x0046bc40();
      uStack_14 = 5;
      piStack_2c = aiStack_90;
      aiStack_90[0] = 0;
      aiStack_90[1] = 0;
      aiStack_90[2] = 0;
      aiStack_90[3] = 0;
      aiStack_90[4] = 0;
      func_0x0046bc40("?internalRecvData@Protocol@@AAEXPAEI@Z",0x26);
      uStack_14 = CONCAT31((int3)(uStack_14 >> 8),5);
      goto LAB_00807bfe;
    }
    piVar10 = piStack_28 + 0x13;
    if ((char)piStack_28[0xf] == '\0') goto LAB_00807e05;
    iVar8 = FUN_00781f10();
    piStack_28 = (int *)*piVar10;
    if (iVar8 == 0) {
      FUN_00802a50();
      cStack_21 = '\x01';
      goto LAB_00807e05;
    }
    func_0x00802ce0();
    iVar8 = piStack_28[5];
    uVar1 = *(undefined1 *)((int)piStack_28 + iVar8 + 0x1f);
    uVar2 = *(undefined1 *)((int)piStack_28 + iVar8 + 0x1e);
    uVar3 = *(undefined1 *)((int)piStack_28 + iVar8 + 0x1d);
    uVar4 = *(undefined1 *)((int)piStack_28 + iVar8 + 0x1c);
    piStack_28[5] = iVar8 + 4;
    iVar8 = func_0x0083ba40();
    if (CONCAT22(CONCAT11(uVar1,uVar2),CONCAT11(uVar3,uVar4)) == iVar8) {
      piVar10 = piVar11 + 0x13;
      goto LAB_00807e05;
    }
    piStack_2c = *(int **)(*piStack_2c + 0x18);
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    func_0x0046bc40();
    uStack_14 = 2;
    aiStack_90[4] = 0x807db3;
    uVar9 = func_0x00485670();
    uStack_14._0_1_ = 3;
    piStack_28 = aiStack_90;
    aiStack_90[0] = 0;
    aiStack_90[1] = 0;
    aiStack_90[2] = 0;
    aiStack_90[3] = 0;
    aiStack_90[4] = 0;
    func_0x0046bc40("?internalRecvData@Protocol@@AAEXPAEI@Z",0x26);
    uStack_14._0_1_ = 3;
    func_0x005eea60(3,uVar9);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    FUN_00469ba0();
  }
  else {
    if ((char)param_1[4] == '\0') goto LAB_00807c62;
LAB_00807b9d:
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x0046bc40();
    uStack_14 = 0;
    piStack_2c = aiStack_90 + 1;
    aiStack_90[0] = 0x26;
    aiStack_90[1] = 0;
    aiStack_90[2] = 0;
    aiStack_90[3] = 0;
    aiStack_90[4] = 0;
    func_0x0046bc40("?internalRecvData@Protocol@@AAEXPAEI@Z");
    uStack_14 = uStack_14 & 0xffffff00;
LAB_00807bfe:
    func_0x005eea60(3,&uStack_44);
  }
LAB_00807c03:
  uStack_14 = 0xffffffff;
  if (0xf < uStack_30) {
    func_0x0046b1f0(&uStack_44,uStack_44,uStack_30);
  }
LAB_00807c34:
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void FUN_00808060(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  __time64_t _Var2;
  
  func_0x00e87f70();
  _Var2 = _time64((__time64_t *)0x0);
  func_0x00808dc0((int)_Var2);
  uVar1 = func_0x0080a220();
  *(undefined4 *)(extraout_ECX + 0x18) = uVar1;
  uVar1 = func_0x0080a220();
  *(undefined4 *)(extraout_ECX + 0x1c) = uVar1;
  uVar1 = func_0x0080a220();
  *(undefined4 *)(extraout_ECX + 0x20) = uVar1;
  uVar1 = func_0x0080a220();
  *(undefined4 *)(extraout_ECX + 0x24) = uVar1;
  FUN_008ab370();
  return;
}



void __thiscall
FUN_008080e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  return;
}



int * __thiscall FUN_00808100(int param_1,int *param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f2a77e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uStack_8 = 0;
  func_0x00808fd0(4,&uStack_11,uVar1);
  *(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(*param_2 + 4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(*param_2 + 8) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*param_2 + 0xc) = *(undefined4 *)(param_1 + 0x24);
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_008084b0(void)

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
  func_0x0046bc40("onConnect",9,uVar1);
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



void FUN_00808570(undefined4 param_1)

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
  func_0x0046bc40("onRecv",6,uVar1);
  uStack_8 = 0;
  uVar1 = func_0x00809170(&uStack_28,param_1);
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



void FUN_00808630(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  uint auStack_44 [4];
