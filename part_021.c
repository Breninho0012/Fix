  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_21>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 FUN_007dad40(undefined4 *param_1)

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
  return 0;
}



void __thiscall FUN_007dada0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007dadc0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_22>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dadd0(undefined4 *param_1)

{
  func_0x007d4170(*param_1);
  return;
}



void __thiscall FUN_007dadf0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007dae10(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_23>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dae20(undefined4 *param_1)

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
  func_0x00791f60(&uStack_1c);
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



void __thiscall FUN_007daf30(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007daf50(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_24>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 FUN_007daf60(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f262ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
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
  puStack_14 = &uStack_20;
  uStack_20 = 0;
  uStack_8 = 2;
  func_0x007d77e0();
  uVar6 = func_0x007f4770(&uStack_20);
  puStack_18 = &uStack_20;
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
  return uVar6;
}



void __thiscall FUN_007db090(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007db0b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_25>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 FUN_007db0c0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f262ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
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
  puStack_14 = &uStack_20;
  uStack_20 = 0;
  uStack_8 = 2;
  func_0x007d77e0();
  uVar6 = func_0x007f4600(&uStack_20);
  puStack_18 = &uStack_20;
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
  return uVar6;
}



void __thiscall FUN_007db1f0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007db210(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_26>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 FUN_007db220(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f262ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
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
  puStack_14 = &uStack_20;
  uStack_20 = 0;
  uStack_8 = 2;
  func_0x007d77e0();
  uVar6 = func_0x007f4490(&uStack_20);
  puStack_18 = &uStack_20;
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
  return uVar6;
}



void __thiscall FUN_007db350(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007db370(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_27>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 FUN_007db380(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f262ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
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
  puStack_14 = &uStack_20;
  uStack_20 = 0;
  uStack_8 = 2;
  func_0x007d77e0();
  uVar6 = func_0x007f4320(&uStack_20);
  puStack_18 = &uStack_20;
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
  return uVar6;
}



void __thiscall FUN_007db4b0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007db4d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_28>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 FUN_007db4e0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  undefined8 *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f262ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
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
  puStack_14 = &uStack_20;
  uStack_20 = 0;
  uStack_8 = 2;
  func_0x007d77e0();
  uVar6 = func_0x007f41b0(&uStack_20);
  puStack_18 = &uStack_20;
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
  return uVar6;
}



void __thiscall FUN_007db610(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007db630(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_29>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007db640(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
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
  func_0x00792650(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
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



void __thiscall FUN_007db7d0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007db7f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_30>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007db800(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
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
  func_0x007926b0(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
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



void __thiscall FUN_007db990(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007db9b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_31>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007db9c0(undefined4 *param_1)

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
  func_0x00792710(&uStack_1c);
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



void __thiscall FUN_007dbad0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007dbaf0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_`protected:_void___thiscall_Application::registerLuaFunctions(void)'::`2'::<lambda_32>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dbb00(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int iStack_24;
  int *piStack_20;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00ebdc85;
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
  func_0x00792770(&uStack_1c);
  iStack_8 = 0;
  if ((int)uStack_1c == 0) {
    func_0x00d667d0(DAT_0145e9f0);
  }
  else {
    piVar3 = uStack_1c._4_4_;
    if (uStack_1c._4_4_ != (int *)0x0) {
      LOCK();
      uStack_1c._4_4_[1] = uStack_1c._4_4_[1] + 1;
      UNLOCK();
    }
    iStack_24 = (int)uStack_1c;
    piStack_20 = uStack_1c._4_4_;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    func_0x0077aec0(&iStack_24);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = piVar3[1] + -1;
      piVar3[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar2 = *(code **)*piVar3;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        iVar5 = piVar3[2] + -1;
        piVar3[2] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar2 = *(code **)(*piVar3 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
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



void __thiscall FUN_007dbc90(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 4);
  return;
}



TypeDescriptor * FUN_007dbcb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dbcc0(int param_1,undefined4 *param_2)

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
  func_0x007d8b10();
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



undefined4 * __fastcall FUN_007dbe20(int param_1)

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



TypeDescriptor * FUN_007dbed0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_SoundChannel::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dbee0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dbf00(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dbf10(int param_1,undefined4 *param_2)

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
  func_0x007d8b10();
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



undefined4 * __fastcall FUN_007dc070(int param_1)

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



TypeDescriptor * FUN_007dc120(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_SoundChannel::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dc130(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dc150(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dc160(undefined4 *param_1)

{
  func_0x007d3b00(*param_1);
  return;
}



undefined4 * __fastcall FUN_007dc180(int param_1)

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



TypeDescriptor * FUN_007dc230(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_SoundChannel::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dc240(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dc260(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dc270(int param_1,undefined4 *param_2)

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
  func_0x007d8b10();
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



undefined4 * __fastcall FUN_007dc3d0(int param_1)

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



TypeDescriptor * FUN_007dc480(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(float_(__thiscall_SoundChannel::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dc490(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dc4b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dc4c0(int param_1,undefined4 *param_2)

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
  func_0x007d8b10();
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



undefined4 * __fastcall FUN_007dc610(int param_1)

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



TypeDescriptor * FUN_007dc6c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_SoundChannel::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dc6d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dc6f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dc700(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f262dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_2 = (undefined4 *)*param_2;
  uStack_14 = uVar2;
  iVar3 = func_0x00d661e0(*param_2,uVar2);
  while (iVar3 != 4) {
    iVar3 = func_0x00d661e0(*param_2,uVar2);
    if (iVar3 < 4) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar3 = func_0x00d661e0(*param_2);
  }
  func_0x007d8970();
  uStack_8 = 0;
  func_0x007d8a10();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_1c,auStack_34,auStack_38,auStack_3c);
  (*pcVar1)();
  uStack_8 = 0xffffffff;
  func_0x007d5b80();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007dc800(int param_1)

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



TypeDescriptor * FUN_007dc8b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_SoundChannel::*)(class_std::basic_string<>_const&,float,float))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_007dc8c0(int param_1,int *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5)

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
    _guard_check_icall(param_3,*param_4,*param_5);
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



void __thiscall FUN_007dc970(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dc990(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dc9a0(undefined4 *param_1)

{
  func_0x007d3250(*param_1);
  return;
}



undefined4 * __fastcall FUN_007dc9c0(int param_1)

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



TypeDescriptor * FUN_007dca70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_SoundChannel::*)(float))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dca80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dcaa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dcab0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [24];
  undefined1 auStack_24 [8];
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f26325;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  param_1 = (undefined4 *)*param_1;
  uStack_14 = uVar4;
  iVar5 = func_0x00d661e0(*param_1,uVar4);
  while (iVar5 != 4) {
    iVar5 = func_0x00d661e0(*param_1,uVar4);
    if (iVar5 < 4) {
      func_0x00d667d0(DAT_0145e9f0);
    }
    else {
      func_0x00d66d90(DAT_0145e9f0,0xfffffffe);
    }
    iVar5 = func_0x00d661e0(*param_1);
  }
  func_0x007d8970();
  iStack_8 = 0;
  func_0x007d8a10();
  uStack_1c = 0;
  func_0x0056ed30(&uStack_1c,auStack_24,auStack_3c,auStack_40,auStack_44);
  iStack_8._0_1_ = 1;
  func_0x005635a0(&uStack_1c);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
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
  iStack_8 = 0xffffffff;
  func_0x007d5b80();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007dcbf0(int param_1)

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



TypeDescriptor * FUN_007dcca0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_SoundChannel::*)(class_std::basic_string<>_const&,float,float))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007dccb0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6)

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



void __thiscall FUN_007dcde0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dce00(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_SoundManager::*)(void),class_SoundManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dce10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dce30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_SoundManager::*)(bool),class_SoundManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dce40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dce60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_SoundManager::*)(void),class_SoundManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dce70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dce90(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dcea0(undefined4 *param_1)

{
  func_0x007d2bd0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007dcec0(int param_1)

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



TypeDescriptor * FUN_007dcf70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_SoundManager::*)(int),class_SoundManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dcf80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dcfa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dcfb0(undefined4 *param_1)

{
  func_0x007d2800(*param_1);
  return;
}



undefined4 * __fastcall FUN_007dcfd0(int param_1)

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



TypeDescriptor * FUN_007dd080(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::shared_ptr<>_(__thiscall_SoundManager::*)(class_std::basic_string<>,float,float),class_SoundManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall
FUN_007dd090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined4 auStack_34 [5];
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f263ea;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_18 = *param_5;
  uStack_1c = *param_4;
  func_0x00469da0();
  uStack_8 = 6;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_34);
  uStack_8 = 6;
  _guard_check_icall(param_2);
  (*pcVar1)();
  uStack_14 = 4;
  uStack_8 = 3;
  if (0xf < uStack_20) {
    func_0x0046b1f0(auStack_34,auStack_34[0],uStack_20);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_007dd1e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dd200(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_SoundManager::*)(class_std::basic_string<>),class_SoundManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dd210(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
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
  uStack_40 = 0x7dd244;
  func_0x00469da0();
  uStack_8 = 0;
  puStack_14 = auStack_54;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_2c);
  uStack_8 = uStack_8 & 0xffffff00;
  _guard_check_icall();
  (*pcVar1)();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_007dd2c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dd2e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_Http::*)(class_std::basic_string<>_const&),class_Http*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dd2f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dd310(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dd320(int param_1,undefined4 *param_2)

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
  uStack_c = func_0x00530eb0();
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



undefined4 * __fastcall FUN_007dd3e0(int param_1)

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



TypeDescriptor * FUN_007dd490(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Http::*)(int),class_Http*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dd4a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dd4c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dd4d0(undefined4 *param_1)

{
  func_0x007d2150(*param_1);
  return;
}



undefined4 * __fastcall FUN_007dd4f0(int param_1)

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



TypeDescriptor * FUN_007dd5a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(bool_(__thiscall_Http::*)(int,class_std::basic_string<>),class_Http*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined1 __thiscall FUN_007dd5b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 auStack_28 [5];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2642d;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = *param_2;
  func_0x00469da0();
  uStack_8 = 1;
  pcVar2 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_28);
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),1);
  _guard_check_icall(uVar1);
  uVar3 = (*pcVar2)();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_14) {
    func_0x0046b1f0(auStack_28,auStack_28[0],uStack_14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar3;
}



void __thiscall FUN_007dd670(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dd690(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dd6a0(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  uint auStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [24];
  undefined1 auStack_2c [24];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2646d;
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
  func_0x007d88d0();
  iStack_8 = 0;
  uStack_48 = func_0x00530eb0();
  uVar4 = func_0x005307a0(auStack_60);
  iStack_8._0_1_ = 1;
  func_0x00469bd0(uVar4);
  iStack_8._0_1_ = 0;
  if (0xf < uStack_4c) {
    func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
  }
  uStack_50 = 0;
  uStack_4c = 0xf;
  auStack_60[0] = auStack_60[0] & 0xffffff00;
  uVar4 = func_0x005307a0(auStack_60);
  iStack_8._0_1_ = 2;
  func_0x00469bd0(uVar4);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < uStack_4c) {
    func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
  }
  uStack_50 = 0;
  uStack_4c = 0xf;
  auStack_60[0] = auStack_60[0] & 0xffffff00;
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  _guard_check_icall(auStack_2c,auStack_44,&uStack_48);
  uVar4 = (*pcVar1)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  iStack_8 = 0xffffffff;
  func_0x0048b790();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007dd830(int param_1)

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



TypeDescriptor * FUN_007dd8e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_Http::*)(class_std::basic_string<>_const&,class_std::basic_string<>,int),class_Http*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_007dd8f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined4 auStack_2c [5];
  uint uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f264bd;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = param_2;
  func_0x00469da0();
  uStack_8 = 1;
  pcVar1 = *(code **)(param_1 + 4);
  func_0x00469da0(auStack_2c);
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),1);
  _guard_check_icall(uStack_14);
  uVar2 = (*pcVar1)();
  uStack_8 = 0xffffffff;
  if (0xf < uStack_18) {
    func_0x0046b1f0(auStack_2c,auStack_2c[0],uStack_18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __thiscall FUN_007dd9b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dd9d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dd9e0(undefined4 *param_1)

{
  func_0x007d1c10(*param_1);
  return;
}



undefined4 * __fastcall FUN_007dda00(int param_1)

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



TypeDescriptor * FUN_007ddab0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_Http::*)(class_std::basic_string<>_const&,class_std::basic_string<>_const&,int,bool),class_Http*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_007ddac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 *param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,param_3,*param_4,*param_5);
  (*pcVar1)();
  return;
}



void __thiscall FUN_007ddb10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007ddb30(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ddb40(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  uVar4 = (*pcVar1)();
  func_0x00d66720(DAT_0145e9f0,uVar4);
  uStack_8 = 0xffffffff;
  if (0xf < auStack_2c[5]) {
    uVar5 = auStack_2c[5] + 1;
    uVar2 = auStack_2c[0];
    if (0xfff < uVar5) {
      uVar2 = *(uint *)(auStack_2c[0] - 4);
      uVar5 = auStack_2c[5] + 0x24;
      if (0x1f < (auStack_2c[0] - uVar2) - 4) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    func_0x008ab812(uVar2,uVar5);
  }
  auStack_2c[4] = 0;
  auStack_2c[5] = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007ddcc0(int param_1)

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



TypeDescriptor * FUN_007ddd70(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_Http::*)(class_std::basic_string<>_const&,int),class_Http*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ddd80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007ddda0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(int_(__thiscall_ProxyManager::*)(void),class_ProxyManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dddb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007dddd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::map<>_(__thiscall_ProxyManager::*)(void),class_ProxyManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_007ddde0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26562;
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



void __thiscall FUN_007ddea0(int param_1,undefined4 *param_2)

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



TypeDescriptor * FUN_007ddec0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dded0(undefined4 *param_1)

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
  puStack_c = &DAT_00f26595;
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
  func_0x007f3990(&uStack_1c);
  uStack_8 = 0;
  func_0x007f7be0();
  uStack_8 = 0xffffffff;
  func_0x00775520(&uStack_1c,*(undefined4 *)((int)uStack_1c + 4));
  func_0x008ab812((int)uStack_1c,0x2c);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __fastcall FUN_007ddfc0(int param_1)

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



TypeDescriptor * FUN_007de070(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(class_std::map<>_(__thiscall_ProxyManager::*)(void),class_ProxyManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 __thiscall FUN_007de080(int param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f26642;
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



void __thiscall FUN_007de140(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007de160(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ProxyManager::*)(int),class_ProxyManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de170(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007de190(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ProxyManager::*)(void),class_ProxyManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de1a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007de1c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007de1d0(undefined4 *param_1)

{
  func_0x007d1320(*param_1);
  return;
}



undefined4 * __fastcall FUN_007de1f0(int param_1)

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



TypeDescriptor * FUN_007de2a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ProxyManager::*)(class_std::basic_string<>_const&,unsigned_short),class_ProxyManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de2b0(int param_1,undefined4 param_2,undefined2 *param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_007de2e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007de300(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007de310(undefined4 *param_1)

{
  func_0x007d0f90(*param_1);
  return;
}



undefined4 * __fastcall FUN_007de330(int param_1)

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



TypeDescriptor * FUN_007de3e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func_singleton<>(void_(__thiscall_ProxyManager::*)(class_std::basic_string<>_const&,unsigned_short,int),class_ProxyManager*)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de3f0(int param_1,undefined4 param_2,undefined2 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 4);
  _guard_check_icall(param_2,*param_3,*param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_007de420(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  return;
}



TypeDescriptor * FUN_007de440(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de450(int param_1,undefined4 *param_2)

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
  func_0x007d8780();
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



undefined4 * __fastcall FUN_007de5a0(int param_1)

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



TypeDescriptor * FUN_007de650(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_OutputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de660(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007de680(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007de690(undefined4 *param_1)

{
  func_0x007d0a50(*param_1);
  return;
}



undefined4 * __fastcall FUN_007de6b0(int param_1)

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



TypeDescriptor * FUN_007de760(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_OutputMessage::*)(int,unsigned_char))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de770(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007de790(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de7a0(int param_1,undefined4 *param_2)

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
  func_0x007d8820();
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



undefined4 * __fastcall FUN_007de8f0(int param_1)

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



TypeDescriptor * FUN_007de9a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_OutputMessage::*)(unsigned___int64))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007de9b0(int param_1,int *param_2,undefined4 *param_3)

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
    _guard_check_icall(*param_3,param_3[1]);
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



void __thiscall FUN_007dea40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dea60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dea70(undefined4 *param_1)

{
  func_0x007d0520(*param_1);
  return;
}



undefined4 * __fastcall FUN_007dea90(int param_1)

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



TypeDescriptor * FUN_007deb40(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_OutputMessage::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007deb50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007deb70(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007deb80(undefined4 *param_1)

{
  func_0x007d01b0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007deba0(int param_1)

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



TypeDescriptor * FUN_007dec50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_OutputMessage::*)(unsigned_short))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dec60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dec80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007dec90(undefined4 *param_1)

{
  func_0x007cfe40(*param_1);
  return;
}



undefined4 * __fastcall FUN_007decb0(int param_1)

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



TypeDescriptor * FUN_007ded60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_OutputMessage::*)(unsigned_char))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007ded70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007ded90(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007deda0(int param_1,undefined4 *param_2)

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
  func_0x007d8780();
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



undefined4 * __fastcall FUN_007deef0(int param_1)

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



TypeDescriptor * FUN_007defa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_OutputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007defb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007defd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007defe0(undefined4 *param_1)

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
  func_0x007d8780();
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



undefined4 * __fastcall FUN_007df160(int param_1)

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



TypeDescriptor * FUN_007df210(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_OutputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007df220(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007df240(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007df250(undefined4 *param_1)

{
  func_0x007cf630(*param_1);
  return;
}



undefined4 * __fastcall FUN_007df270(int param_1)

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



TypeDescriptor * FUN_007df320(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_OutputMessage::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007df330(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007df350(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007df360(int param_1,undefined4 *param_2)

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
  func_0x007d86e0();
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



undefined4 * __fastcall FUN_007df4c0(int param_1)

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



TypeDescriptor * FUN_007df570(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_InputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007df580(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007df5a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007df5b0(int param_1,undefined4 *param_2)

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
  func_0x007d86e0();
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



undefined4 * __fastcall FUN_007df710(int param_1)

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



TypeDescriptor * FUN_007df7c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_InputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007df7d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007df7f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007df800(undefined4 *param_1)

{
  func_0x007cef30(*param_1);
  return;
}



undefined4 * __fastcall FUN_007df820(int param_1)

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



TypeDescriptor * FUN_007df8d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_InputMessage::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007df8e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007df900(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007df910(undefined4 *param_1)

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
  func_0x007d86e0();
  func_0x007f4150(&uStack_1c);
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



undefined4 * __fastcall FUN_007dfa40(int param_1)

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



TypeDescriptor * FUN_007dfaf0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned___int64_(__thiscall_InputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dfb00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dfb20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dfb30(int param_1,undefined4 *param_2)

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
  func_0x007d86e0();
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



undefined4 * __fastcall FUN_007dfc80(int param_1)

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



TypeDescriptor * FUN_007dfd30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_InputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dfd40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dfd60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dfd70(int param_1,undefined4 *param_2)

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
  func_0x007d86e0();
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



undefined4 * __fastcall FUN_007dfed0(int param_1)

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



TypeDescriptor * FUN_007dff80(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_short_(__thiscall_InputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dff90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007dffb0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007dffc0(int param_1,undefined4 *param_2)

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
  func_0x007d86e0();
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



undefined4 * __fastcall FUN_007e0120(int param_1)

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



TypeDescriptor * FUN_007e01d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_char_(__thiscall_InputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e01e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0200(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e0210(undefined4 *param_1)

{
  func_0x007ce4c0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e0230(int param_1)

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



TypeDescriptor * FUN_007e02e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_InputMessage::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e02f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0310(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e0320(undefined4 *param_1)

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
  func_0x007d86e0();
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



undefined4 * __fastcall FUN_007e04a0(int param_1)

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



TypeDescriptor * FUN_007e0550(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_InputMessage::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0560(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0580(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e0590(undefined4 *param_1)

{
  func_0x007cde70(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e05b0(int param_1)

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



TypeDescriptor * FUN_007e0660(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_InputMessage::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0670(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0690(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e06a0(void)

{
  func_0x007f4b70();
  return;
}



undefined4 * __fastcall FUN_007e06c0(int param_1)

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



TypeDescriptor * FUN_007e0770(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::vector<>_(__thiscall_Protocol::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0780(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e07a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e07b0(undefined4 *param_1)

{
  func_0x007cd900(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e07d0(int param_1)

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



TypeDescriptor * FUN_007e0880(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Protocol::*)(unsigned_int,unsigned_int,unsigned_int,unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall
FUN_007e0890(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

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
    _guard_check_icall(*param_3,*param_4,*param_5,*param_6);
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



void __thiscall FUN_007e0930(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0950(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e0960(undefined4 *param_1)

{
  func_0x007cd4b0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e0980(int param_1)

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



TypeDescriptor * FUN_007e0a30(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Protocol::*)(class_std::shared_ptr<>_const&,bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0a40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0a60(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e0a70(undefined4 *param_1)

{
  func_0x007cd010(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e0a90(int param_1)

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



TypeDescriptor * FUN_007e0b40(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Protocol::*)(class_std::shared_ptr<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0b50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0b70(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e0b80(undefined4 *param_1)

{
  func_0x007cccc0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e0ba0(int param_1)

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



TypeDescriptor * FUN_007e0c50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::shared_ptr<>_(__thiscall_Protocol::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0c60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0c80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0c90(int param_1,undefined4 *param_2)

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
  func_0x007d8640();
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



undefined4 * __fastcall FUN_007e0df0(int param_1)

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



TypeDescriptor * FUN_007e0ea0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Protocol::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0eb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e0ed0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e0ee0(int param_1,undefined4 *param_2)

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
  func_0x007d8640();
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



undefined4 * __fastcall FUN_007e1030(int param_1)

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



TypeDescriptor * FUN_007e10e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Protocol::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e10f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e1110(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e1120(undefined4 *param_1)

{
  func_0x007cc500(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e1140(int param_1)

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



TypeDescriptor * FUN_007e11f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Protocol::*)(class_std::basic_string<>_const&,unsigned_short))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1200(int param_1,int *param_2,undefined4 param_3,undefined2 *param_4)

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



void __thiscall FUN_007e12a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e12c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e12d0(undefined4 *param_1)

{
  func_0x007cc130(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e12f0(int param_1)

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



TypeDescriptor * FUN_007e13a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_Connection::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e13b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e13d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e13e0(int param_1,undefined4 *param_2)

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
  func_0x007d84f0();
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



undefined4 * __fastcall FUN_007e1540(int param_1)

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



TypeDescriptor * FUN_007e15f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_Server::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1600(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e1620(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1630(int param_1,undefined4 *param_2)

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
  func_0x007d84f0();
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



undefined4 * __fastcall FUN_007e1780(int param_1)

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



TypeDescriptor * FUN_007e1830(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_Server::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1840(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e1860(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e1870(undefined4 *param_1)

{
  func_0x007cb860(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e1890(int param_1)

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



TypeDescriptor * FUN_007e1940(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_PainterShaderProgram::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1950(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e1970(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e1980(undefined4 *param_1)

{
  func_0x007cb4f0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e19a0(int param_1)

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



TypeDescriptor * FUN_007e1a50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(enum_Fw::AlignmentFlag))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1a60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e1a80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1a90(int param_1,undefined4 *param_2)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e1bf0(int param_1)

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



TypeDescriptor * FUN_007e1ca0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1cb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e1cd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1ce0(int param_1,undefined4 *param_2)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e1e40(int param_1)

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



TypeDescriptor * FUN_007e1ef0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_Color_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1f00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e1f20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e1f30(int param_1,undefined4 *param_2)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e2080(int param_1)

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



TypeDescriptor * FUN_007e2130(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(unsigned_int_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2140(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e2160(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2170(int param_1,undefined4 *param_2)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e22d0(int param_1)

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



TypeDescriptor * FUN_007e2380(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2390(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e23b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e23c0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
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
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x007d80c0();
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    func_0x00e701bd();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
  puVar8 = &uStack_24;
  puVar7 = &uStack_1c;
  _guard_check_icall(puVar7,puVar8);
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
      _guard_check_icall(puVar7,puVar8);
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



undefined4 * __fastcall FUN_007e2530(int param_1)

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



TypeDescriptor * FUN_007e25e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_UITextEdit::*)(class_TPoint<int>))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e25f0(int param_1,int *param_2,undefined4 *param_3)

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
  puStack_c = &DAT_00f2666d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*param_2 != 0) {
    pcVar1 = *(code **)(param_1 + 8);
    _guard_check_icall(*param_3,param_3[1]);
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



void __thiscall FUN_007e2690(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e26b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e26c0(undefined4 *param_1)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e2840(int param_1)

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



TypeDescriptor * FUN_007e28f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_std::basic_string<>_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2900(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e2920(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2930(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e2950(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2960(int param_1,undefined4 *param_2)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e2ab0(int param_1)

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



TypeDescriptor * FUN_007e2b60(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2b70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e2b90(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2ba0(int param_1,undefined4 *param_2)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e2d00(int param_1)

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



TypeDescriptor * FUN_007e2db0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TSize<int>_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2dc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e2de0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e2df0(int param_1,undefined4 *param_2)

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
  func_0x007d8180();
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



undefined4 * __fastcall FUN_007e2f50(int param_1)

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



TypeDescriptor * FUN_007e3000(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(class_TPoint<int>_(__thiscall_UITextEdit::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3010(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3030(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3040(int param_1,undefined4 *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
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
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_8 = 2;
  func_0x007d80c0();
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



undefined4 * __fastcall FUN_007e31a0(int param_1)

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



TypeDescriptor * FUN_007e3250(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(class_TPoint<int>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3260(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3280(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e3290(undefined4 *param_1)

{
  func_0x007c9f80(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e32b0(int param_1)

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



TypeDescriptor * FUN_007e3360(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(unsigned_int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3370(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3390(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e33a0(int param_1,undefined4 *param_2)

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
  func_0x007d8000();
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



undefined4 * __fastcall FUN_007e3500(int param_1)

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



TypeDescriptor * FUN_007e35b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(class_Color_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e35c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e35e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e35f0(undefined4 *param_1)

{
  func_0x007c9930(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e3610(int param_1)

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



TypeDescriptor * FUN_007e36c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(class_std::basic_string<>))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e36d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e36f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e3700(undefined4 *param_1)

{
  func_0x007c95b0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e3720(int param_1)

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



TypeDescriptor * FUN_007e37d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e37e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3800(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e3810(undefined4 *param_1)

{
  func_0x007c9230(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e3830(int param_1)

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



TypeDescriptor * FUN_007e38e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(int,int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e38f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3910(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e3920(undefined4 *param_1)

{
  func_0x007c8ec0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e3940(int param_1)

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



TypeDescriptor * FUN_007e39f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UITextEdit::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3a00(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3a20(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3a30(int param_1,undefined4 *param_2)

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
  func_0x007d7f60();
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



undefined4 * __fastcall FUN_007e3b90(int param_1)

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



TypeDescriptor * FUN_007e3c40(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(enum_AlignItems_(__thiscall_UIFlexBox::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3c50(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3c70(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e3c80(undefined4 *param_1)

{
  func_0x007c8900(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e3ca0(int param_1)

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



TypeDescriptor * FUN_007e3d50(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIFlexBox::*)(enum_AlignItems))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3d60(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3d80(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3d90(int param_1,undefined4 *param_2)

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
  func_0x007d7f60();
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



undefined4 * __fastcall FUN_007e3ef0(int param_1)

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



TypeDescriptor * FUN_007e3fa0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(bool_(__thiscall_UIFlexBox::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e3fb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e3fd0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e3fe0(undefined4 *param_1)

{
  func_0x007c83c0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e4000(int param_1)

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



TypeDescriptor * FUN_007e40b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIFlexBox::*)(bool))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e40c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e40e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_007e40f0(int param_1)

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



TypeDescriptor * FUN_007e41a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(int_(__thiscall_UIFlexBox::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e41b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e41d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e41e0(undefined4 *param_1)

{
  func_0x007c7e90(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e4200(int param_1)

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



TypeDescriptor * FUN_007e42b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIFlexBox::*)(int))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e42c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e42e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



undefined4 * __fastcall FUN_007e42f0(int param_1)

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



TypeDescriptor * FUN_007e43a0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(enum_FlexDirection_(__thiscall_UIFlexBox::*)(void))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e43b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e43d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e43e0(undefined4 *param_1)

{
  func_0x007c78d0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e4400(int param_1)

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



TypeDescriptor * FUN_007e44b0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIFlexBox::*)(enum_FlexDirection))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e44c0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e44e0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e44f0(undefined4 *param_1)

{
  func_0x007c7350(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e4510(int param_1)

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



TypeDescriptor * FUN_007e45c0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIAnchorLayout::*)(class_std::shared_ptr<>_const&,class_std::basic_string<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e45d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e45f0(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void FUN_007e4600(undefined4 *param_1)

{
  func_0x007c6eb0(*param_1);
  return;
}



undefined4 * __fastcall FUN_007e4620(int param_1)

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



TypeDescriptor * FUN_007e46d0(void)

{
  return &`class_std::function<>___cdecl_luabinder::make_mem_func<>(void_(__thiscall_UIAnchorLayout::*)(class_std::shared_ptr<>_const&))'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e46e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 8);
  param_2[3] = uVar1;
  return;
}



TypeDescriptor * FUN_007e4700(void)

{
  return &`class_std::function<>___cdecl_luabinder::bind_fun_specializer<>(class_std::function<>_const&)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



void __thiscall FUN_007e4710(int param_1,undefined4 *param_2)

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
  func_0x007d7ec0();
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
