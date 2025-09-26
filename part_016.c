
{
  uint uVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede5fa;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x44,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,0x44);
  *_Dst = boost::asio::execution_context::service::vftable;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = param_1;
  _Dst[4] = 0;
  *_Dst = boost::asio::detail::execution_context_service_base<>::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  _Dst[5] = param_1;
  uVar2 = func_0x00638840();
  _Dst[6] = uVar2;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  func_0x0062d090();
  _Dst[0x10] = 0;
  *_Dst = boost::asio::detail::win_iocp_socket_service<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



void FUN_0063cbd0(uint *param_1,int param_2)

{
  *param_1 = *(uint *)(param_2 + 4) & 0xfffffffc;
  return;
}



undefined4 FUN_0063cbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_EDX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ede63e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0063d630(param_1,param_2,param_3,0,uVar1,0);
  *unaff_FS_OFFSET = iStack_10;
  return extraout_EDX;
}



void FUN_0063cc50(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)func_0x008ab47d(4);
  *piVar1 = (*(uint *)(param_2 + 4) & 1) * 2;
  *param_1 = piVar1;
  return;
}



undefined4 __thiscall FUN_0063cc80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede69f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063ae00(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063abf0();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_0063cd10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede69f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063d7f0(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063abf0();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_0063cda0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008ab47d(4);
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}



undefined4 __thiscall FUN_0063cdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [12];
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede6ff;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  puStack_18 = auStack_28;
  func_0x0063d890(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063d940();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 FUN_0063ce50(undefined4 param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede69f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  uStack_24 = *(undefined4 *)(param_2 + 4);
  uStack_8 = 1;
  func_0x0063abf0();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0063cee0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)func_0x008ab47d(4,param_1);
  *puVar1 = (uint)((*(uint *)(param_3 + 4) & 2) != 0);
  *param_2 = puVar1;
  return;
}



undefined4 __thiscall FUN_0063cf10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede69f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063d9f0(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063abf0();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_0063cfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede69f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063da90(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063abf0();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_0063d030(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede735;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0063c570(uVar1);
  if (param_1 != 0) {
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x006334d0();
  }
  uStack_8 = 0xffffffff;
  func_0x0063c570(uVar1);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0063d0d0(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  uint auStack_34 [8];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ede798;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  auStack_34[0] = 0;
  auStack_34[1] = 0;
  auStack_34[2] = 0;
  auStack_34[3] = 0;
  auStack_34[4] = 0;
  auStack_34[5] = 0;
  auStack_34[6] = 0;
  func_0x0063c3c0(param_2 + 0x20,uStack_14);
  iStack_8._0_1_ = 2;
  func_0x0063c600();
  if (param_1 != 0) {
    iStack_8._0_1_ = 3;
    func_0x0063c1c0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < auStack_34[5]) {
    func_0x0046b1f0(auStack_34,auStack_34[0],auStack_34[5]);
  }
  auStack_34[4] = 0;
  auStack_34[5] = 0xf;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  func_0x0063c600();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0063d1b0(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  uint auStack_3c [10];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ede7fd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  auStack_3c[8] = 0;
  auStack_3c[0] = 0;
  auStack_3c[1] = 0;
  auStack_3c[2] = 0;
  auStack_3c[3] = 0;
  auStack_3c[4] = 0;
  auStack_3c[5] = 0;
  auStack_3c[6] = 0;
  auStack_3c[7] = 0;
  func_0x00469da0(param_2 + 0x20,uStack_14);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  auStack_3c[6] = *(undefined4 *)(param_2 + 0x38);
  auStack_3c[7] = *(undefined4 *)(param_2 + 0x3c);
  auStack_3c[8] = *(undefined4 *)(param_2 + 0x40);
  iStack_8._0_1_ = 3;
  func_0x0063c700();
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x006329c0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < auStack_3c[5]) {
    func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
  }
  auStack_3c[4] = 0;
  auStack_3c[5] = 0xf;
  auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  func_0x0063c700();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0063d2b0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [64];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ede85d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_54,0,0x3c);
  func_0x0063c450(param_2 + 0x20,uVar1);
  iStack_8._0_1_ = 2;
  func_0x0063c800();
  if (param_1 != 0) {
    iStack_8._0_1_ = 3;
    func_0x00631dd0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x004ea6a0();
  iStack_8 = 0xffffffff;
  func_0x0063c800();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0063d370(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ede8d0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x40);
  func_0x00469da0(param_2 + 0x20,uVar1);
  iStack_8._0_1_ = 1;
  func_0x00469da0(param_2 + 0x38);
  uStack_28 = *(undefined4 *)(param_2 + 0x50);
  uStack_24 = *(undefined1 *)(param_2 + 0x54);
  uStack_20 = *(undefined4 *)(param_2 + 0x58);
  uStack_1c = *(undefined4 *)(param_2 + 0x5c);
  iStack_8._0_1_ = 4;
  func_0x0063c8d0();
  if (param_1 != 0) {
    iStack_8._0_1_ = 5;
    func_0x00631620();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x004ea6a0();
  iStack_8 = 0xffffffff;
  func_0x0063c8d0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0063d460(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  uint auStack_3c [10];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ede7fd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  auStack_3c[8] = 0;
  auStack_3c[0] = 0;
  auStack_3c[1] = 0;
  auStack_3c[2] = 0;
  auStack_3c[3] = 0;
  auStack_3c[4] = 0;
  auStack_3c[5] = 0;
  auStack_3c[6] = 0;
  auStack_3c[7] = 0;
  func_0x00469da0(param_2 + 0x20,uStack_14);
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  auStack_3c[6] = *(undefined4 *)(param_2 + 0x38);
  auStack_3c[7] = *(undefined4 *)(param_2 + 0x3c);
  auStack_3c[8] = *(undefined4 *)(param_2 + 0x40);
  iStack_8._0_1_ = 3;
  func_0x0063c700();
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x00630d80();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (0xf < auStack_3c[5]) {
    func_0x0046b1f0(auStack_3c,auStack_3c[0],auStack_3c[5]);
  }
  auStack_3c[4] = 0;
  auStack_3c[5] = 0xf;
  auStack_3c[0] = auStack_3c[0] & 0xffffff00;
  iStack_8 = 0xffffffff;
  func_0x0063c700();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_0063d560(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede92b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



TypeDescriptor * FUN_0063d6a0(void)

{
  return &boost::asio::io_context::basic_executor_type<>::RTTI_Type_Descriptor;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0063d6b0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(param_1 + 0x14);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    iVar2 = __std_type_info_compare(iVar2 + 4,0x12f9da4);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      goto LAB_0063d6eb;
    }
  }
  iVar2 = 0;
LAB_0063d6eb:
  if (*(int *)(param_2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(param_2 + 0x14);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    iVar3 = __std_type_info_compare(iVar3 + 4,0x12f9da4);
    if (iVar3 == 0) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 4) >> 8),
                      *(int *)(iVar2 + 4) == *(int *)(*(int *)(param_2 + 0x10) + 4));
    }
  }
  return CONCAT31((int3)((uint)*(int *)(iVar2 + 4) >> 8),*(int *)(iVar2 + 4) == _DAT_00000004);
}



void FUN_0063d740(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(param_1 + 0x14);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    iVar2 = __std_type_info_compare(iVar2 + 4,0x12f9da4);
    if (iVar2 == 0) {
      func_0x0063db30(param_2);
      return;
    }
  }
  func_0x0063db30(param_2);
  return;
}



undefined * Catch_0063dbf8(void)

{
  func_0x0062e2c0();
  return &DAT_0063dc0f;
}



void FUN_0063dd30(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(int *)(param_1 + 0x10) = param_1;
  return;
}



undefined4 FUN_0063dd50(undefined4 param_1)

{
  return param_1;
}



void FUN_0063de40(int param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edebcd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar1 = *(undefined4 **)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  iStack_8._0_1_ = 1;
  iStack_8._1_3_ = 0;
  func_0x0063dd70(uVar3);
  puVar4 = puVar1;
  if ((param_1 != 0) && (iStack_8._0_1_ = 2, puVar1 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)0x0;
    pcVar2 = (code *)*puVar1;
    _guard_check_icall(puVar1,1);
    (*pcVar2)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  if (puVar4 != (undefined4 *)0x0) {
    pcVar2 = (code *)*puVar4;
    _guard_check_icall(puVar4,0);
    (*pcVar2)();
  }
  iStack_8 = 0xffffffff;
  func_0x0063dd70(uVar3);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_0063df10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede6ff;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063e390(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063d940();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_0063dfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede6ff;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063e420(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063d940();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void FUN_0063e030(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x008ab47d(4);
  *puVar1 = 1;
  *param_1 = puVar1;
  return;
}



undefined4 FUN_0063e050(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [4];
  uint uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede6ff;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  uStack_24 = *(uint *)(param_2 + 4);
  if ((uStack_24 & 0xfffffffc) != 0) {
    LOCK();
    piVar1 = (int *)(*(int *)((uStack_24 & 0xfffffffc) + 8) + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_8 = 1;
  func_0x0063d940();
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_0063e0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede69f;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063e4e0(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063abf0();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_0063e180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede6ff;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063e580(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063d940();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_0063e210(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ede6ff;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_1c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 1;
  uStack_20 = 0;
  puStack_18 = auStack_28;
  func_0x0063e640(auStack_28,param_3,param_1);
  uStack_8 = 1;
  func_0x0063d940();
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



TypeDescriptor * FUN_0063e2a0(void)

{
  return &boost::asio::io_context::basic_executor_type<>::RTTI_Type_Descriptor;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0063e2b0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(param_1 + 0x14);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    iVar2 = __std_type_info_compare(iVar2 + 4,0x12f9ba4);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      goto LAB_0063e2eb;
    }
  }
  iVar2 = 0;
LAB_0063e2eb:
  if (*(int *)(param_2 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(param_2 + 0x14);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    iVar3 = __std_type_info_compare(iVar3 + 4,0x12f9ba4);
    if (iVar3 == 0) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 4) >> 8),
                      *(int *)(iVar2 + 4) == *(int *)(*(int *)(param_2 + 0x10) + 4));
    }
  }
  return CONCAT31((int3)((uint)*(int *)(iVar2 + 4) >> 8),*(int *)(iVar2 + 4) == _DAT_00000004);
}



void FUN_0063e340(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)**(undefined4 **)(param_1 + 0x14);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    iVar2 = __std_type_info_compare(iVar2 + 4,0x12f9ba4);
    if (iVar2 == 0) {
      func_0x0063db30(param_2);
      return;
    }
  }
  func_0x0063db30(param_2);
  return;
}



uint FUN_0063e700(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  BOOL BVar6;
  DWORD DVar7;
  uint uVar8;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  uint uStack_10;
  uint uStack_c;
  
  uVar8 = *(uint *)(param_1 + 4);
  if ((uVar8 & 0xfffffffc) != 0) {
    iVar4 = *(int *)((uVar8 & 0xfffffffc) + 8);
    LOCK();
    puVar1 = (uint *)(iVar4 + 0x18);
    uVar3 = *puVar1;
    uVar8 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      uStack_c = DAT_0128fd40 ^ (uint)auStack_2c;
      LOCK();
      iVar2 = *(int *)(iVar4 + 0x1c);
      *(int *)(iVar4 + 0x1c) = 1;
      UNLOCK();
      if (iVar2 == 0) {
        LOCK();
        iVar2 = *(int *)(iVar4 + 0x20);
        *(int *)(iVar4 + 0x20) = 1;
        UNLOCK();
        if (iVar2 == 0) {
          BVar6 = PostQueuedCompletionStatus(*(HANDLE *)(iVar4 + 0x14),0,0,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            DVar7 = GetLastError();
            func_0x004657d0(DVar7,&PTR_vftable_012bbee0);
            pcStack_28 = 
            "C:\\Git\\otcv8_source\\vcpkg_installed\\x86-windows-static\\x86-windows-static\\include\\boost\\asio\\detail\\impl\\win_iocp_io_context.ipp"
            ;
            pcStack_24 = "void __thiscall boost::asio::detail::win_iocp_io_context::stop(void)";
            uStack_20 = 0x11f;
            uStack_1c = 0x1e;
            if (((uStack_10 & 1) != 0) && ((uStack_10 != 1 || (iStack_18 != 0)))) {
              func_0x00466380(&pcStack_28);
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return uVar8;
            }
          }
        }
      }
      uVar8 = FUN_008ab370();
      return uVar8;
    }
  }
  return uVar8;
}



void FUN_0063e730(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 4) = uVar1;
  if ((uVar1 & 0xfffffffc) != 0) {
    piVar2 = (int *)(*(int *)((uVar1 & 0xfffffffc) + 8) + 0x18);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(int *)(param_1 + 0x10) = param_1;
  return;
}



uint FUN_0063e760(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  BOOL BVar6;
  DWORD DVar7;
  uint uVar8;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  uint uStack_10;
  uint uStack_c;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  *(int *)(param_1 + 0x10) = param_1;
  uVar8 = *(uint *)(param_2 + 4);
  if ((uVar8 & 0xfffffffc) != 0) {
    iVar4 = *(int *)((uVar8 & 0xfffffffc) + 8);
    LOCK();
    puVar1 = (uint *)(iVar4 + 0x18);
    uVar3 = *puVar1;
    uVar8 = *puVar1;
    *puVar1 = uVar3 - 1;
    UNLOCK();
    if (uVar3 - 1 == 0) {
      uStack_c = DAT_0128fd40 ^ (uint)auStack_2c;
      LOCK();
      iVar2 = *(int *)(iVar4 + 0x1c);
      *(int *)(iVar4 + 0x1c) = 1;
      UNLOCK();
      if (iVar2 == 0) {
        LOCK();
        iVar2 = *(int *)(iVar4 + 0x20);
        *(int *)(iVar4 + 0x20) = 1;
        UNLOCK();
        if (iVar2 == 0) {
          BVar6 = PostQueuedCompletionStatus(*(HANDLE *)(iVar4 + 0x14),0,0,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            DVar7 = GetLastError();
            func_0x004657d0(DVar7,&PTR_vftable_012bbee0);
            pcStack_28 = 
            "C:\\Git\\otcv8_source\\vcpkg_installed\\x86-windows-static\\x86-windows-static\\include\\boost\\asio\\detail\\impl\\win_iocp_io_context.ipp"
            ;
            pcStack_24 = "void __thiscall boost::asio::detail::win_iocp_io_context::stop(void)";
            uStack_20 = 0x11f;
            uStack_1c = 0x1e;
            if (((uStack_10 & 1) != 0) && ((uStack_10 != 1 || (iStack_18 != 0)))) {
              func_0x00466380(&pcStack_28);
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return uVar8;
            }
          }
        }
      }
      uVar8 = FUN_008ab370();
      return uVar8;
    }
  }
  return uVar8;
}



undefined4 * __thiscall FUN_0063e7a0(undefined4 *param_1,byte param_2)

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
  puStack_c = &DAT_00edd406;
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



undefined4 * __thiscall FUN_0063e7b0(undefined4 *param_1,byte param_2)

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
  puStack_c = &DAT_00edd4fe;
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



undefined4 * __thiscall FUN_0063e7c0(undefined4 *param_1,byte param_2)

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
  puStack_c = &DAT_00edd406;
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



undefined4 * __thiscall FUN_0063e7d0(undefined4 *param_1,byte param_2)

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
  puStack_c = &DAT_00edd4fe;
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



undefined4 * __fastcall FUN_0063f260(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0x400;
  param_1[2] = 0xffffffff;
  puVar1 = (undefined4 *)func_0x008ab47d(0x1004);
  *param_1 = puVar1;
  *puVar1 = 0;
  return param_1;
}



void __fastcall FUN_0063f290(undefined4 *param_1)

{
  free((void *)*param_1);
  return;
}



void __thiscall FUN_00640ff0(undefined4 *param_1,byte param_2)

{
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00edeea9;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::asio::detail::select_reactor::vftable;
  uStack_8 = 4;
  FUN_00641180(uStack_14);
  uStack_8._0_1_ = 3;
  func_0x008ab4ad(param_1 + 0x2a,0xc,3,FUN_0063f290);
  uStack_8._0_1_ = 2;
  func_0x008ab4ad(param_1 + 0xe,0x1c,4,FUN_00641100);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  uStack_20 = 0;
  uStack_18 = 0;
  if (param_1[0xc] != -1) {
    func_0x0062f0c0(1,&uStack_20);
  }
  if (param_1[0xd] != -1) {
    func_0x0062f0c0(1,&uStack_20);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x100);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00641100(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edeef3;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 2;
  func_0x008ab37e(*(undefined4 *)(param_1 + 0x14),uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0064c000();
  uStack_8 = 0xffffffff;
  func_0x0064c000();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_00641180(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int iStack_38;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 uStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edef4d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = uVar4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uStack_8 = 0;
  *(undefined1 *)(param_1 + 0xfc) = 1;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  if (*(int *)(param_1 + 0xd4) != 0) {
    uStack_1d = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    func_0x0062f260(1,extraout_ECX,&uStack_2c,uVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*(int *)(param_1 + 0xd4) != 0) {
    func_0x004665b0();
    iVar5 = *(int *)(param_1 + 0xd4);
    if (iVar5 != 0) {
      CloseHandle(*(HANDLE *)(iVar5 + 4));
      func_0x008ab812(iVar5,0xc);
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  uStack_1c = 0;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  piVar10 = (int *)(param_1 + 0x4c);
  iStack_38 = 4;
  do {
    piVar8 = (int *)piVar10[-4];
    piVar9 = (int *)*piVar8;
    if ((int *)*piVar8 != piVar8) {
      do {
        uVar4 = piVar9[3];
        piVar1 = (int *)*piVar9;
        if (uVar4 != 0) {
          if (uStack_1c._4_4_ == 0) {
            uStack_1c = (ulonglong)uVar4;
          }
          else {
            *(uint *)(uStack_1c._4_4_ + 0x14) = uVar4;
          }
          uStack_1c = CONCAT44(piVar9[4],(int)uStack_1c);
          piVar9[3] = 0;
          piVar9[4] = 0;
          piVar8 = (int *)piVar10[-4];
        }
        iVar5 = ((uint)piVar9[2] % (uint)piVar10[1]) * 8;
        piVar6 = (int *)(iVar5 + *piVar10);
        piVar2 = (int *)piVar6[1];
        if ((piVar9 == (int *)*piVar6) && (piVar9 == piVar2)) {
          piVar6[1] = (int)piVar8;
          puVar7 = (undefined4 *)(iVar5 + *piVar10);
          *puVar7 = puVar7[1];
        }
        else if (piVar9 == (int *)*piVar6) {
          *piVar6 = *(int *)*piVar6;
        }
        else if (piVar9 == piVar2) {
          piVar6[1] = piVar2[1];
        }
        uStack_2c = 0;
        uStack_24 = 0;
        piVar9[2] = 0;
        uStack_8 = CONCAT31((int3)(uStack_8 >> 8),1);
        func_0x00634f30(*(undefined4 *)piVar10[-2],piVar10 + -4,piVar9);
        piVar10[-5] = piVar10[-5] + -1;
        piVar8 = (int *)piVar10[-4];
        piVar9 = piVar1;
      } while (piVar1 != piVar8);
    }
    piVar10 = piVar10 + 7;
    iStack_38 = iStack_38 + -1;
  } while (iStack_38 != 0);
  for (piVar10 = *(int **)(param_1 + 0xcc); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
    pcVar3 = *(code **)(*piVar10 + 0x14);
    _guard_check_icall(&uStack_1c);
    (*pcVar3)();
  }
  if ((int)uStack_1c != 0) {
    piVar10 = (int *)(*(int *)(param_1 + 0x14) + 0x18);
    iVar5 = (int)uStack_1c;
    do {
      if (*(int *)(iVar5 + 0x14) == 0) {
        uStack_1c._4_4_ = 0;
      }
      uStack_1c = CONCAT44(uStack_1c._4_4_,*(int *)(iVar5 + 0x14));
      *(undefined4 *)(iVar5 + 0x14) = 0;
      LOCK();
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      pcVar3 = *(code **)(iVar5 + 0x18);
      uStack_24 = 0;
      uStack_2c = 0;
      _guard_check_icall(0,iVar5,&uStack_2c,0);
      (*pcVar3)();
      iVar5 = (int)uStack_1c;
    } while ((int)uStack_1c != 0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  iVar5 = (int)uStack_1c;
  while (iVar5 != 0) {
    uStack_1c._4_4_ = (int)(uStack_1c >> 0x20);
    if (*(int *)(iVar5 + 0x14) == 0) {
      uStack_1c._4_4_ = 0;
    }
    uStack_2c = 0;
    uStack_1c = CONCAT44(uStack_1c._4_4_,*(int *)(iVar5 + 0x14));
    *(undefined4 *)(iVar5 + 0x14) = 0;
    pcVar3 = *(code **)(iVar5 + 0x18);
    uStack_24 = 0;
    _guard_check_icall(0,iVar5,&uStack_2c,0);
    (*pcVar3)();
    iVar5 = (int)uStack_1c;
  }
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00641e50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edf07c;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    if (*(int *)(iVar1 + 0xd4) != 0) {
      func_0x004665b0(uStack_14);
      iVar2 = *(int *)(iVar1 + 0xd4);
      if (iVar2 != 0) {
        CloseHandle(*(HANDLE *)(iVar2 + 4));
        func_0x008ab812(iVar2,0xc);
      }
      *(undefined4 *)(iVar1 + 0xd4) = 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x18));
    uStack_8 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    if (*(int *)(iVar1 + 0x30) != -1) {
      func_0x0062f0c0(1,&uStack_20);
    }
    if (*(int *)(iVar1 + 0x34) != -1) {
      func_0x0062f0c0(1,&uStack_20);
    }
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
    func_0x006404d0();
    *(undefined1 *)(iVar1 + 0xd0) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x18));
    puVar3 = (undefined8 *)func_0x008ab47d(0xc);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = 0;
    uVar4 = func_0x0064c8d0(iVar1);
    *(undefined4 *)(iVar1 + 0xd4) = uVar4;
  }
  uStack_8 = 0xffffffff;
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00641fa0(int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 uStack_224;
  fd_set fStack_220;
  fd_set fStack_11c;
  int iStack_18;
  timeval tStack_14;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  fStack_220.fd_count = 1;
  fStack_220.fd_array[0] = *(SOCKET *)(param_1 + 0x38);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  fStack_11c.fd_count = 1;
  tStack_14.tv_sec = 0;
  tStack_14.tv_usec = 0;
  fStack_11c.fd_array[0] = fStack_220.fd_array[0];
  iVar3 = select(fStack_220.fd_array[0] + 1,(fd_set *)0x0,&fStack_220,&fStack_11c,&tStack_14);
  if (iVar3 != 0) {
    iStack_c = 0;
    uStack_224 = 4;
    iVar4 = func_0x00640030(extraout_ECX,0x1007,&iStack_c,&uStack_224,puVar1);
    iVar3 = iStack_c;
    if (iVar4 == 0) {
      if (iStack_c == 0) {
        *puVar1 = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        if (((DAT_012bbee8 == 0x257edfd1) && (DAT_012bbeec == -0x4d54ee86)) ||
           ((DAT_012bbee8 == 0x257edfd0 && (DAT_012bbeec == -0x4d54ee86)))) {
          uVar5 = (uint)(iStack_c != 0);
        }
        else {
          pcVar2 = *(code **)(PTR_vftable_012bbee0 + 0x18);
          _guard_check_icall(iStack_c);
          uVar5 = (*pcVar2)();
        }
        iStack_18 = iVar3;
        tStack_14.tv_sec = (long)&PTR_vftable_012bbee0;
        *puVar1 = CONCAT44(&PTR_vftable_012bbee0,iVar3);
        *(uint *)(param_1 + 0x28) = (uVar5 & 0xff) + 2;
      }
    }
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



void FUN_006420f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_2 + 0x24) + 0x18);
  _guard_check_icall(param_1,*(int *)(param_2 + 0x24),param_3,param_4);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00642990(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eabb2d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1,uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



// Library Function - Single Match
//  public: virtual void * __thiscall MemMapReadOnly::`scalar deleting destructor'(unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 __thiscall ___GMemMapReadOnly__UAEPAXI_Z(undefined4 param_1,byte param_2)

{
  func_0x00642f10();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



void __fastcall FUN_00642fb0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 4);
  _guard_check_icall();
  (*pcVar1)();
  return;
}



void __thiscall FUN_00642fd0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 8);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00643000(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0xc);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00643030(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x10);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00643060(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x14);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return;
}



// Library Function - Single Match
//  public: virtual void * __thiscall std::_Facet_base::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2019 Release

undefined4 * __thiscall ___G_Facet_base_std__UAEPAXI_Z(undefined4 *param_1,byte param_2)

{
  *param_1 = boost::asio::ssl::detail::verify_callback_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



void FUN_00647cb0(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  if (param_2 != 0) {
    uVar2 = func_0x00d04970();
    iVar3 = func_0x00baf1d0(param_2,uVar2);
    if (iVar3 != 0) {
      iVar4 = func_0x00d00780(iVar3,0);
      if (iVar4 != 0) {
        piVar5 = (int *)func_0x00d00780(iVar3,0);
        iStack_c = param_2;
        pcVar1 = *(code **)(*piVar5 + 4);
        _guard_check_icall(param_1 != 0,&iStack_c);
        (*pcVar1)();
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



void __fastcall FUN_006480e0(undefined4 *param_1)

{
  func_0x00d00010(*param_1);
  return;
}



void __fastcall FUN_006480f0(undefined4 *param_1)

{
  func_0x00d00210(*param_1);
  return;
}



void __fastcall FUN_00648100(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x00d011f0(*param_1);
  if (iVar1 == 0) {
    func_0x00d011f0(*param_1);
  }
  return;
}



void __thiscall FUN_00648120(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_3 < 0x7fffffff) {
    uVar1 = param_3;
  }
  func_0x00d00a70(*param_1,param_2,uVar1);
  return;
}



void __thiscall FUN_00648150(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_3 < 0x7fffffff) {
    uVar1 = param_3;
  }
  func_0x00d013a0(*param_1,param_2,uVar1);
  return;
}



undefined * Catch_006486fb(void)

{
  return &DAT_00648701;
}



void __thiscall FUN_00648dd0(int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_88 [4];
  int *piStack_84;
  undefined4 *puStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  uint auStack_60 [3];
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  code **ppcStack_48;
  undefined4 *puStack_44;
  uint auStack_40 [2];
  code *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00edf815;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28 = 0;
  iStack_8 = 0;
  if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
    puVar6 = (undefined4 *)(param_5 * 0x4c + *param_3);
    uStack_7c = *puVar6;
    uStack_78 = puVar6[1];
    uStack_74 = puVar6[2];
    uStack_70 = puVar6[3];
    uStack_64 = puVar6[6];
    uStack_6c = *(undefined8 *)(puVar6 + 4);
    htons(*(u_short *)(param_1 + 0x3c));
    puVar6 = (undefined4 *)func_0x0064af20(auStack_88);
    iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
    puStack_44 = &uStack_34;
    ppcStack_48 = (code **)&uStack_30;
    pcStack_38 = FUN_006490b0;
    uStack_30 = *puVar6;
    piStack_2c = (int *)puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    iStack_8._0_1_ = 4;
    uStack_28 = 1;
    uStack_18 = 0;
    puVar6 = (undefined4 *)(param_5 * 0x4c + *param_3);
    uStack_7c = *puVar6;
    uStack_78 = puVar6[1];
    uStack_74 = puVar6[2];
    uStack_70 = puVar6[3];
    uStack_6c = *(undefined8 *)(puVar6 + 4);
    uStack_64 = puVar6[6];
    uStack_20 = 0;
    if (*(int *)(param_1 + 0x44) == -1) {
      iStack_24 = 0x17;
      if ((short)uStack_7c == 2) {
        iStack_24 = 2;
      }
      func_0x0064e930(auStack_54,param_1 + 0x44,&iStack_24,&uStack_20);
    }
    iStack_24 = param_1 + 0x40;
    func_0x00650c30(&pcStack_38,&uStack_7c,&uStack_20);
    piVar2 = piStack_2c;
    uStack_28 = 0;
    ppcStack_48 = &pcStack_38;
    puStack_44 = &uStack_34;
    puStack_80 = &uStack_30;
    iStack_8._0_1_ = 3;
    if (piStack_2c != (int *)0x0) {
      LOCK();
      iVar4 = piStack_2c[1] + -1;
      piStack_2c[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piStack_2c;
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
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (piStack_84 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_84[1] + -1;
      piStack_84[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar3 = *(code **)*piStack_84;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar2 = piStack_84 + 2;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar3 = *(code **)(*piStack_84 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  else {
    uVar5 = func_0x00465870(auStack_60,uStack_14);
    iStack_8._0_1_ = 1;
    uStack_30 = 0;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    pcStack_38 = (code *)0x0;
    uStack_34 = 0;
    piStack_2c = (int *)0x0;
    func_0x0046bc40("resolve error",0xd);
    iStack_8._0_1_ = 2;
    func_0x0064acd0(auStack_40,uVar5);
    iStack_8._0_1_ = 1;
    if (0xf < piStack_2c) {
      func_0x0046b1f0(auStack_40,auStack_40[0],piStack_2c);
    }
    uStack_30 = 0;
    piStack_2c = (int *)&DAT_0000000f;
    auStack_40[0] = auStack_40[0] & 0xffffff00;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < uStack_4c) {
      func_0x0046b1f0(auStack_60,auStack_60[0],uStack_4c);
    }
    uStack_50 = 0;
    uStack_4c = 0xf;
    auStack_60[0] = auStack_60[0] & 0xffffff00;
  }
  iStack_8 = 0xffffffff;
  func_0x00467f30();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_006490b0(uint *param_1,int *param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_FS_OFFSET;
  char *pcVar8;
  undefined4 uVar9;
  undefined **appuStack_138 [13];
  uint uStack_104;
  uint *puStack_fc;
  uint *puStack_f8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint *puStack_cc;
  uint *puStack_c8;
  undefined4 uStack_c4;
  undefined **appuStack_bc [5];
  uint uStack_a8;
  uint *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint auStack_90 [3];
  undefined **ppuStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  uint auStack_78 [5];
  uint *puStack_64;
  undefined8 uStack_60;
  undefined ***pppuStack_58;
  undefined4 uStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  code *pcStack_48;
  uint auStack_44 [3];
  undefined4 uStack_38;
  uint uStack_34;
  uint *puStack_30;
  uint auStack_2c [5];
  uint *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00edf971;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_54 = 0;
  puStack_4c = param_1;
  uStack_14 = uVar3;
  if (((param_2[2] & 1U) != 0) && ((param_2[2] != 1 || (*param_2 != 0)))) {
    uVar4 = func_0x00465870(auStack_44);
    iStack_8 = 0;
    auStack_2c[4] = 0;
    auStack_2c[0] = 0;
    auStack_2c[1] = 0;
    auStack_2c[2] = 0;
    auStack_2c[3] = 0;
    puStack_18 = (uint *)0x0;
    func_0x0046bc40("connection error",0x10);
    iStack_8._0_1_ = 1;
    func_0x0064acd0(auStack_2c,uVar4);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < puStack_18) {
      func_0x0046b1f0(auStack_2c,auStack_2c[0],puStack_18);
    }
    auStack_2c[4] = 0;
    puStack_18 = (uint *)&DAT_0000000f;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (&DAT_0000000f < puStack_30) {
      func_0x0046b1f0(auStack_44,auStack_44[0],puStack_30);
    }
    uStack_34 = 0;
    puStack_30 = (uint *)&DAT_0000000f;
    auStack_44[0] = auStack_44[0] & 0xffffff00;
    goto LAB_0064979f;
  }
  pcStack_48 = (code *)(param_1 + 3);
  puStack_50 = (uint *)pcStack_48;
  if (0xf < param_1[8]) {
    puStack_50 = *(uint **)pcStack_48;
  }
  if (((param_1[7] < 5) ||
      (puVar6 = (uint *)(param_1[7] + (int)puStack_50),
      puVar5 = (uint *)func_0x00e727d0(puStack_50,puVar6,&DAT_011489ac,5,uVar3), puVar5 == puVar6))
     || (puVar5 != puStack_50)) {
    puVar6 = param_1 + 3;
    if (0xf < param_1[8]) {
      puVar6 = (uint *)*puVar6;
      pcStack_48 = (code *)puVar6;
    }
    if (((4 < param_1[7]) &&
        (puVar5 = (uint *)(param_1[7] + (int)puVar6),
        puVar6 = (uint *)func_0x00e727d0(puVar6,puVar5,"HTTPS",5,uVar3), puVar6 != puVar5)) &&
       ((code *)puVar6 == pcStack_48)) goto LAB_00649223;
    uVar4 = func_0x0064af20(auStack_2c + 4);
    iStack_8 = 0x12;
    pcStack_48 = FUN_00649a50;
    uVar4 = func_0x0064cf90(uVar4,extraout_ECX_00);
    iStack_8._0_1_ = 0x13;
    puVar6 = puStack_4c + 0x10;
    func_0x006528f0(uVar4,puStack_4c + 0x21);
    iStack_8._0_1_ = 0x14;
    appuStack_bc[0] = boost::beast::http::detail::write_msg_op<>::vftable;
    puStack_80 = puVar6;
    puVar5 = (uint *)func_0x006527c0();
    puVar6 = puStack_80;
    pppuStack_58 = appuStack_138;
    *(undefined1 *)(puVar5 + 0x33) = 0;
    puStack_7c = puVar5;
    func_0x0065b360(appuStack_bc);
    puStack_fc = puStack_80;
    appuStack_138[0] = boost::beast::http::detail::write_msg_op<>::vftable;
    puStack_f8 = puStack_7c;
    iStack_8._0_1_ = 0x16;
    func_0x006571c0();
    uStack_d4 = 1;
    iStack_8._0_1_ = 0x18;
    uStack_34 = uStack_104;
    uStack_38 = 0;
    uStack_d0 = 0;
    puStack_cc = puVar6;
    uStack_c4 = 0;
    puStack_c8 = puVar5;
    func_0x0065ac70((ulonglong)uStack_104 << 0x20,1);
    func_0x006593b0(0,0,0);
    iStack_8._0_1_ = 0x14;
    func_0x006577f0();
    appuStack_bc[0] = boost::beast::stable_async_base<>::vftable;
    iStack_8._0_1_ = 0x1b;
    func_0x00643330();
    iStack_8._0_1_ = 0x13;
    func_0x00650860();
    puStack_50 = auStack_78 + 2;
    iStack_8 = CONCAT31(iStack_8._1_3_,0x12);
    func_0x0052b260();
  }
  else {
LAB_00649223:
    pcStack_48 = (code *)0x10;
    uVar4 = func_0x0064d050();
    iStack_8 = 2;
    func_0x0046ffa0(uVar4);
    iStack_8 = 0xffffffff;
    FUN_00468340();
    uVar3 = param_1[0x5a];
    iStack_8 = 3;
    puStack_50 = (uint *)func_0x008ab47d(0xe0);
    iStack_8._0_1_ = 4;
    pppuVar1 = (undefined ***)(puStack_50 + 4);
    puStack_50[0] = 0;
    puStack_50[1] = 0;
    puStack_50[2] = 0;
    puStack_50[1] = 1;
    puStack_50[2] = 1;
    *puStack_50 = (uint)std::_Ref_count_obj2<>::vftable;
    puStack_50[5] = (uint)(puStack_4c + 0x10);
    pppuStack_58 = pppuVar1;
    func_0x00651c30(*(undefined4 *)(uVar3 + 4),puStack_4c + 0x21);
    puVar6 = puStack_4c;
    uStack_54 = 1;
    uStack_60 = 0;
    auStack_78[4] = puStack_4c[0x58];
    puStack_4c[0x58] = (uint)pppuVar1;
    puStack_64 = (uint *)puStack_4c[0x59];
    puStack_4c[0x59] = (uint)puStack_50;
    iStack_8 = CONCAT31(iStack_8._1_3_,3);
    puVar5 = puStack_50;
    puStack_4c = puStack_64;
    if (puStack_64 != (uint *)0x0) {
      LOCK();
      uVar3 = puStack_64[1] - 1;
      puStack_64[1] = uVar3;
      UNLOCK();
      if (uVar3 == 0) {
        pcVar2 = *(code **)*puStack_64;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        uVar3 = puStack_4c[2] - 1;
        puStack_4c[2] = uVar3;
        UNLOCK();
        puVar5 = puStack_4c;
        if (uVar3 == 0) {
          pcVar2 = *(code **)(*puStack_4c + 4);
          _guard_check_icall();
          (*pcVar2)();
          puVar5 = extraout_ECX;
        }
      }
    }
    uStack_54 = 0;
    iStack_8 = 0xffffffff;
    func_0x0064ae40(puVar5);
    pcStack_48 = (code *)((uint)pcStack_48 & 0xffffff00);
    func_0x0064d110(pcStack_48);
    puVar5 = puVar6 + 0x52;
    if (0xf < puVar6[0x57]) {
      puVar5 = (uint *)*puVar5;
    }
    iVar7 = func_0x00d002a0(*(undefined4 *)(puVar6[0x58] + 8),0x37,0,puVar5);
    if (iVar7 == 0) {
      uVar4 = func_0x00ba6770();
      func_0x004657d0(uVar4,&PTR_vftable_012bbe90);
      uVar4 = func_0x00465870(auStack_90);
      iStack_8 = 7;
      uVar9 = 0xb;
      auStack_78[4] = 0;
      auStack_78[0] = 0;
      auStack_78[1] = 0;
      auStack_78[2] = 0;
      auStack_78[3] = 0;
      puStack_64 = (uint *)0x0;
      pcVar8 = "HTTPS error";
      func_0x0046bc40();
      iStack_8._0_1_ = 8;
      func_0x0064acd0(auStack_78,uVar4,pcVar8,uVar9);
      iStack_8 = CONCAT31(iStack_8._1_3_,7);
      if (0xf < puStack_64) {
        func_0x0046b1f0(auStack_78,auStack_78[0],puStack_64);
      }
      auStack_78[4] = 0;
      puStack_64 = (uint *)&DAT_0000000f;
      auStack_78[0] = auStack_78[0] & 0xffffff00;
      iStack_8 = 0xffffffff;
      if (&DAT_0000000f < puStack_7c) {
        func_0x0046b1f0(auStack_90,auStack_90[0],puStack_7c);
      }
      puStack_80 = (uint *)0x0;
      puStack_7c = (uint *)&DAT_0000000f;
      auStack_90[0] = auStack_90[0] & 0xffffff00;
      goto LAB_0064979f;
    }
    uStack_34 = 0;
    puStack_30 = (uint *)0x0;
    func_0x0064af20();
    puStack_50 = (uint *)puVar6[0x58];
    if (puStack_30 != (uint *)0x0) {
      LOCK();
      puStack_30[1] = puStack_30[1] + 1;
      UNLOCK();
    }
    pcStack_48 = (code *)puStack_30;
    puStack_18 = puVar6;
    puStack_a4 = puStack_50 + 2;
    uStack_a8 = puStack_50[1];
    pppuStack_58 = (undefined ***)(auStack_90 + 3);
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    auStack_90[0] = 0;
    auStack_90[1] = 0;
    auStack_90[2] = 0;
    ppuStack_84 = (undefined **)uStack_34;
    puStack_80 = puStack_30;
    auStack_2c[3] = 0;
    auStack_2c[4] = 0;
    iStack_8._1_3_ = 0;
    puStack_7c = puVar6;
    iStack_8._0_1_ = 0xe;
    func_0x00652e50(0,0,0,1);
    puVar6 = puStack_80;
    pcStack_48 = (code *)(auStack_90 + 3);
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if (puStack_80 != (uint *)0x0) {
      LOCK();
      uVar3 = puStack_80[1] - 1;
      puStack_80[1] = uVar3;
      UNLOCK();
      if (uVar3 == 0) {
        pcVar2 = *(code **)*puStack_80;
        _guard_check_icall();
        (*pcVar2)();
        LOCK();
        puVar5 = puVar6 + 2;
        uVar3 = *puVar5;
        *puVar5 = *puVar5 - 1;
        UNLOCK();
        if (uVar3 == 1) {
          pcVar2 = *(code **)(*puVar6 + 4);
          _guard_check_icall();
          (*pcVar2)();
        }
      }
    }
  }
  iStack_8 = 0xffffffff;
  FUN_00468340();
LAB_0064979f:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00649a50(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  uint auStack_70 [12];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint *puStack_2c;
  code *pcStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00edfacb;
  iStack_1c = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  if (((param_2[2] & 1U) == 0) || ((param_2[2] == 1 && (*param_2 == 0)))) {
    if (*(char *)(*(int *)(param_1 + 0xf0) + 0x2e) == '\0') {
      uStack_40 = CONCAT31(uStack_40._1_3_,1);
      uStack_38 = 0x20000000;
      uStack_34 = 0;
      *(undefined4 *)(param_1 + 0x1d8) = uStack_40;
      *(undefined4 *)(param_1 + 0x1dc) = uStack_3c;
      *(undefined4 *)(param_1 + 0x1e0) = 0x20000000;
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      *(undefined4 *)(param_1 + 0x204) = 0x400000;
      if (*(int *)(param_1 + 0x160) == 0) {
        uVar2 = func_0x0064af20(&uStack_38,uVar1);
        iStack_14 = 8;
        pcStack_24 = FUN_00649d20;
        func_0x0064cf90(uVar2);
        iStack_14._0_1_ = 9;
        auStack_70[4] = param_1 + 0x1d0;
        *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) & 0xfffffffd;
        auStack_70[2] = param_1 + 0x40;
        auStack_70[3] = param_1 + 0x170;
        auStack_70[1] = 0;
        auStack_70[5] = 0;
        func_0x0064d360(auStack_70[2]);
        iStack_14 = CONCAT31(iStack_14._1_3_,8);
      }
      else {
        puStack_20 = &stack0xfffffffc;
        uVar2 = func_0x0064af20(&uStack_38,uVar1);
        iStack_14 = 4;
        pcStack_24 = FUN_00649d20;
        func_0x0064cf90(uVar2);
        iStack_14._0_1_ = 5;
        auStack_70[4] = param_1 + 0x1d0;
        auStack_70[2] = *(int *)(param_1 + 0x160);
        auStack_70[3] = param_1 + 0x170;
        *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) & 0xfffffffd;
        auStack_70[1] = 0;
        auStack_70[5] = 0;
        func_0x0064d1f0(auStack_70[2]);
        iStack_14 = CONCAT31(iStack_14._1_3_,4);
      }
      puStack_2c = auStack_70 + 8;
      func_0x0052b260();
      iStack_14 = 0xffffffff;
      FUN_00468340();
      goto LAB_00649cfe;
    }
    auStack_70[10] = 0;
    auStack_70[0xb] = 0;
    auStack_70[6] = 0;
    auStack_70[7] = 0;
    auStack_70[8] = 0;
    auStack_70[9] = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x0046bc40(&DAT_0112e1b4,0);
    iStack_14 = 2;
    auStack_70[4] = 0;
    auStack_70[0] = 0;
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[3] = 0;
    auStack_70[5] = 0;
    func_0x0046bc40("canceled",8);
    iStack_14._0_1_ = 3;
    func_0x0064acd0(auStack_70,auStack_70 + 6);
    iStack_14 = CONCAT31(iStack_14._1_3_,2);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    uVar2 = func_0x00465870(auStack_70 + 6);
    iStack_14 = 0;
    auStack_70[4] = 0;
    auStack_70[0] = 0;
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[3] = 0;
    auStack_70[5] = 0;
    func_0x0046bc40("request sending error",0x15);
    iStack_14._0_1_ = 1;
    func_0x0064acd0(auStack_70,uVar2);
    iStack_14 = (uint)iStack_14._1_3_ << 8;
  }
  if (0xf < auStack_70[5]) {
    func_0x0046b1f0(auStack_70,auStack_70[0],auStack_70[5]);
  }
  auStack_70[4] = 0;
  auStack_70[5] = 0xf;
  auStack_70[0] = auStack_70[0] & 0xffffff00;
  iStack_14 = 0xffffffff;
  if (0xf < auStack_70[0xb]) {
    func_0x0046b1f0(auStack_70 + 6,auStack_70[6],auStack_70[0xb]);
  }
LAB_00649cfe:
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall FUN_00649d20(int param_1,code *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char ****_Str;
  int iVar4;
  int *unaff_FS_OFFSET;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  code *pcStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_94;
  undefined4 *puStack_90;
  undefined4 uStack_8c;
  undefined4 ***pppuStack_88;
  undefined4 ***pppuStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 ***pppuStack_64;
  undefined4 ***pppuStack_60;
  undefined4 ***pppuStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_44;
  char ***pppcStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  iStack_14 = 0xffffffff;
  puStack_18 = &DAT_00edfbdb;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  pcStack_9c = param_2;
  if (((*(uint *)(param_2 + 8) & 1) == 0) ||
     ((*(uint *)(param_2 + 8) == 1 && (*(int *)param_2 == 0)))) {
    if (*(char *)(*(int *)(param_1 + 0xf0) + 0x2e) == '\0') {
      puStack_94 = &uStack_98;
      uStack_2c = CONCAT44(puStack_94,(undefined4)uStack_2c);
      uStack_70 = 0;
      uStack_68 = 0;
      pppuStack_64 = (undefined4 ***)0x0;
      pppuStack_60 = (undefined4 ***)0x0;
      pppuStack_5c = (undefined4 ***)0x0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_98 = 0;
      uStack_8c = 0;
      iStack_14 = 6;
      _pppuStack_88 = CONCAT44(&pppuStack_88,&pppuStack_88);
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_90 = puStack_94;
      func_0x0064f350(param_1 + 0x218,uStack_24);
      uStack_70 = *(undefined8 *)(param_1 + 0x240);
      iStack_14 = 8;
      uStack_44 = CONCAT44(&uStack_68,(undefined4)uStack_44);
      uStack_68 = *(undefined4 *)(param_1 + 0x248);
      pppuStack_64 = &pppuStack_64;
      uStack_58 = 0;
      uStack_50 = 0;
      pppuStack_60 = pppuStack_64;
      pppuStack_5c = pppuStack_64;
      func_0x0064f290((undefined4 *)(param_1 + 0x248));
      iStack_14 = 0xb;
      piVar1 = (int *)(param_1 + 0xf0);
      *(int *)(*piVar1 + 0x1c) = uStack_70._4_4_;
      puVar3 = (undefined4 *)func_0x0064cad0(&uStack_44,"Content-Length",0xe);
      pppcStack_3c = (char ***)0x0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      func_0x0046bc40(*puVar3,puVar3[1]);
      iStack_14._0_1_ = 0xc;
      _Str = &pppcStack_3c;
      if (0xf < uStack_2c._4_4_) {
        _Str = (char ****)pppcStack_3c;
      }
      iVar4 = atoi((char *)_Str);
      *(int *)(*piVar1 + 0x20) = iVar4;
      iStack_14._0_1_ = 0xb;
      if (0xf < uStack_2c._4_4_) {
        func_0x0046b1f0(&pppcStack_3c,pppcStack_3c,uStack_2c._4_4_);
      }
      uVar5 = 0;
      uVar2 = 0;
      uVar6 = 0;
      uVar7 = 0;
      pppcStack_3c = (char ***)((uint)pppcStack_3c & 0xffffff00);
      uStack_2c = 0;
      func_0x0064cad0(&uStack_2c,"Location",8);
      if (uStack_2c._4_4_ == 0) {
        if (uStack_70._4_4_ - 200U < 100) {
          if (*(int *)(param_1 + 0x20c) == 10) {
            FUN_0064a480(pcStack_9c,0);
            goto LAB_0064a15c;
          }
          if (*(int *)(param_1 + 0x160) == 0) {
            uVar2 = func_0x0064af20(&uStack_44);
            iStack_14._0_1_ = 0x18;
            pcStack_9c = FUN_0064a480;
            uVar2 = func_0x0064cf90(uVar2);
            iStack_14._0_1_ = 0x19;
            func_0x0064a3d0(param_1 + 0x1d0,uVar2);
            iStack_14._0_1_ = 0x18;
          }
          else {
            uVar2 = func_0x0064af20(&uStack_44);
            iStack_14._0_1_ = 0x16;
            pcStack_9c = FUN_0064a480;
            uVar2 = func_0x0064cf90(uVar2);
            iStack_14._0_1_ = 0x17;
            func_0x0064a320(param_1 + 0x1d0,uVar2);
            iStack_14._0_1_ = 0x16;
          }
          func_0x00648d30();
          iStack_14 = CONCAT31(iStack_14._1_3_,0xb);
          FUN_00468340();
        }
        else {
          uVar2 = func_0x0063e850(&pppcStack_3c,uStack_70._4_4_);
          iStack_14._0_1_ = 0x10;
          uStack_a4 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          func_0x0046bc40("Invalid http status code",0x18);
          iStack_14._0_1_ = 0x11;
          func_0x0064acd0(&uStack_b4,uVar2);
          iStack_14._0_1_ = 0x10;
          if (0xf < uStack_a0) {
            func_0x0046b1f0(&uStack_b4,uStack_b4,uStack_a0);
          }
          uStack_a4 = 0;
          uStack_a0 = 0xf;
          uStack_b4 = uStack_b4 & 0xffffff00;
          iStack_14 = CONCAT31(iStack_14._1_3_,0xb);
          FUN_00469ba0();
        }
        iStack_14 = 0xffffffff;
        func_0x006305d0();
      }
      else {
        uStack_44 = CONCAT44(uVar2,uVar5);
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_b4 = uVar5;
        uStack_b0 = uVar2;
        uStack_ac = uVar6;
        uStack_a8 = uVar7;
        func_0x0046bc40((undefined4)uStack_2c,uStack_2c._4_4_);
        iStack_14._0_1_ = 0xd;
        func_0x0064d4d0(&uStack_b4,param_1 + 0x24,param_1 + 0x140,param_1 + 0x144,piVar1,
                        param_1 + 200);
        iStack_14._0_1_ = 0xf;
        if (0xf < uStack_a0) {
          func_0x0046b1f0(&uStack_b4,uStack_b4,uStack_a0);
        }
        uStack_a4 = 0;
        uStack_a0 = 0xf;
        uStack_b4 = uStack_b4 & 0xffffff00;
        func_0x00648260();
        func_0x0064a9c0();
        iStack_14 = CONCAT31(iStack_14._1_3_,0xb);
        FUN_00468340();
LAB_0064a15c:
        uStack_44 = CONCAT44(&uStack_68,(undefined4)uStack_44);
        iStack_14 = 0x12;
        func_0x00638430(&pppuStack_64);
        iStack_14 = 0xffffffff;
        func_0x006352d0();
      }
      goto LAB_0064a2fe;
    }
    puStack_20 = &stack0xfffffffc;
    uVar2 = func_0x00465870(&uStack_b4);
    iStack_14 = 2;
    pppcStack_3c = (char ***)0x0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("canceled",8);
    iStack_14._0_1_ = 3;
    func_0x0064acd0(&pppcStack_3c,uVar2);
    iStack_14 = CONCAT31(iStack_14._1_3_,2);
  }
  else {
    puStack_20 = &stack0xfffffffc;
    uVar2 = func_0x00465870(&uStack_b4);
    iStack_14 = 0;
    pppcStack_3c = (char ***)0x0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    func_0x0046bc40("read header error",0x11);
    iStack_14._0_1_ = 1;
    func_0x0064acd0(&pppcStack_3c,uVar2);
    iStack_14 = (uint)iStack_14._1_3_ << 8;
  }
  if (0xf < uStack_2c._4_4_) {
    func_0x0046b1f0(&pppcStack_3c,pppcStack_3c,uStack_2c._4_4_);
  }
  uStack_2c = 0xf00000000;
  pppcStack_3c = (char ***)((uint)pppcStack_3c & 0xffffff00);
  iStack_14 = 0xffffffff;
  if (0xf < uStack_a0) {
    func_0x0046b1f0(&uStack_b4,uStack_b4,uStack_a0);
  }
  uStack_a4 = 0;
  uStack_a0 = 0xf;
  uStack_b4 = uStack_b4 & 0xffffff00;
LAB_0064a2fe:
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0064a680)

void __thiscall FUN_0064a480(undefined1 *param_1,code *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  ulonglong *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  int *unaff_FS_OFFSET;
  undefined8 uVar11;
  longlong lVar12;
  code *pcStack_a4;
  uint *puStack_a0;
  code *pcStack_9c;
  char *pcStack_98;
  undefined8 *puStack_94;
  uint *puStack_90;
  uint uStack_8c;
  uint auStack_7c [3];
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_64;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [12];
  undefined8 *puStack_3c;
  uint auStack_2c [2];
  code *pcStack_24;
  code *pcStack_20;
  uint uStack_1c;
  code *pcStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00edfcc5;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_8c = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)(param_1 + 0xf0);
  pcStack_50 = param_2;
  uStack_60._4_4_ = (code **)param_1;
  uStack_14 = uStack_8c;
  if (*(char *)(*(int *)(param_1 + 0xf0) + 0x2e) == '\0') {
    if (((*(uint *)(param_2 + 8) & 1) != 0) &&
       ((*(uint *)(param_2 + 8) != 1 || (*(int *)param_2 != 0)))) {
      puStack_90 = (uint *)0x64a59a;
      puVar6 = (ulonglong *)func_0x0062fd60();
      uStack_70 = *puVar6;
      pcStack_68 = *(code **)(puVar6 + 1);
      puStack_90 = (uint *)0x64a5b4;
      cVar4 = func_0x0062cb40();
      if (cVar4 == '\0') {
        puStack_90 = auStack_7c;
        puStack_94 = (undefined8 *)0x64a5c4;
        puVar5 = (undefined1 *)func_0x00465870();
        iStack_8 = 2;
        puStack_94 = (undefined8 *)&DAT_0000000a;
        pcStack_98 = "read error";
        uStack_1c = 0;
        auStack_2c[0] = 0;
        auStack_2c[1] = 0;
        pcStack_24 = (code *)0x0;
        pcStack_20 = (code *)0x0;
        pcStack_18 = (code *)0x0;
        pcStack_9c = (code *)0x64a5f1;
        func_0x0046bc40();
        iStack_8._0_1_ = 3;
        puStack_a0 = auStack_2c;
        pcStack_a4 = (code *)0x64a601;
        pcStack_9c = (code *)puVar5;
        func_0x0064acd0();
        iStack_8 = CONCAT31(iStack_8._1_3_,2);
        goto LAB_0064a518;
      }
    }
    puStack_90 = (uint *)0x64a617;
    puVar6 = (ulonglong *)func_0x0062fd60();
    uStack_70 = *puVar6;
    pcStack_68 = *(code **)(puVar6 + 1);
    puStack_90 = (uint *)0x64a631;
    cVar4 = func_0x0062cb40();
    if ((cVar4 == '\0') && (*(int *)(param_1 + 0x20c) != 10)) {
      pcStack_58 = (code *)*piVar1;
      pcStack_64 = *(code **)((int)pcStack_58 + 0x20);
      if (0 < (int)pcStack_64) {
        puStack_90 = (uint *)0x0;
        puStack_94 = (undefined8 *)0x64;
        pcStack_98 = (undefined1 *)0x0;
        pcStack_9c = *(code **)(param_1 + 600);
        puStack_a0 = (uint *)0x64a666;
        uVar11 = func_0x00e87d70();
        puStack_a0 = (uint *)((int)pcStack_64 >> 0x1f);
        pcStack_a4 = pcStack_64;
        lVar12 = func_0x00e87ec0(uVar11);
        pcStack_50 = (code *)lVar12;
        if (99 < lVar12) {
          pcStack_50 = (code *)0x64;
        }
        if ((*(char *)((int)pcStack_58 + 0x2d) == '\0') &&
           (pcStack_50 != *(code **)((int)pcStack_58 + 0x24))) {
          uStack_60._4_4_ = (code **)&puStack_94;
          pcStack_98 = param_1 + 0xf0;
          pcStack_9c = (code *)0x64a6af;
          func_0x00468490();
          iStack_8 = 0xffffffff;
          pcStack_9c = (code *)0x64a6c8;
          func_0x0064ae70();
        }
        *(code **)(*(int *)(param_1 + 0xf0) + 0x24) = pcStack_50;
      }
      uStack_60 = (longlong)*(int *)(param_1 + 0x140) * 1000000000;
      puStack_90 = (uint *)&uStack_60;
      puStack_94 = (undefined8 *)0x64a6f6;
      func_0x0064b020();
      puStack_94 = &uStack_60;
      if (*(int *)(param_1 + 0x160) == 0) {
        pcStack_98 = (char *)0x64a76c;
        puStack_a0 = (uint *)func_0x0064af20();
        iStack_8 = 10;
        pcStack_58 = FUN_0064a480;
        pcStack_a4 = (code *)0x64a789;
        pcStack_a4 = (code *)func_0x0064cf90();
        iStack_8._0_1_ = 0xb;
        func_0x0064a3d0(param_1 + 0x1d0);
        iStack_8 = CONCAT31(iStack_8._1_3_,10);
      }
      else {
        pcStack_98 = (char *)0x64a70a;
        puStack_a0 = (uint *)func_0x0064af20();
        iStack_8 = 8;
        pcStack_58 = FUN_0064a480;
        pcStack_a4 = (code *)0x64a727;
        pcStack_a4 = (code *)func_0x0064cf90();
        iStack_8._0_1_ = 9;
        func_0x0064a320(param_1 + 0x1d0);
        iStack_8 = CONCAT31(iStack_8._1_3_,8);
      }
      pcStack_98 = (char *)0x64a753;
      func_0x00648d30();
      iStack_8 = 0xffffffff;
      pcStack_a4 = (code *)0x64a762;
      FUN_00468340();
    }
    else {
      if (*(char *)(*piVar1 + 0x2d) == '\0') {
        *(undefined1 *)(*piVar1 + 0x2d) = 1;
        *(undefined4 *)(*piVar1 + 0x24) = 100;
        puStack_90 = (uint *)(param_1 + 0x248);
        puStack_94 = (undefined8 *)0x64a7d4;
        func_0x0064ca60();
        puVar3 = puStack_3c;
        iStack_8 = 4;
        iVar2 = *piVar1;
        piVar9 = (int *)(iVar2 + 0x48);
        if ((undefined8 *)(*(int *)(iVar2 + 0x50) - *piVar9) < puStack_3c) {
          if ((undefined8 *)0x7fffffff < puStack_3c) {
            puStack_94 = (undefined8 *)0x64a9b2;
            func_0x0046e700();
LAB_0064a9b2:
            puStack_94 = (undefined8 *)0x64a9b7;
            func_0x00463420();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pcStack_58 = (code *)(*(int *)(iVar2 + 0x4c) - *piVar9);
          if (puStack_3c == (undefined8 *)0x0) {
            pcStack_9c = (code *)0x0;
          }
          else if (puStack_3c < (undefined8 *)0x1000) {
            puStack_94 = puStack_3c;
            pcStack_98 = (char *)0x64a847;
            pcStack_9c = (code *)func_0x008ab47d();
          }
          else {
            puStack_94 = (undefined8 *)((int)puStack_3c + 0x23);
            if (puStack_94 <= puStack_3c) goto LAB_0064a9b2;
            pcStack_98 = (char *)0x64a827;
            iVar7 = func_0x008ab47d();
            if (iVar7 == 0) {
                    // WARNING: Subroutine does not return
              puStack_94 = (undefined8 *)0x64a841;
              _invalid_parameter_noinfo_noreturn();
            }
            pcStack_9c = (code *)(iVar7 + 0x23U & 0xffffffe0);
            *(int *)(pcStack_9c + -4) = iVar7;
          }
          uStack_70 = CONCAT44(pcStack_9c,piVar9);
          pcStack_68 = (code *)puVar3;
          iStack_8 = CONCAT31(iStack_8._1_3_,5);
          pcStack_98 = (char *)*piVar9;
          puStack_94 = (undefined8 *)(*(int *)(iVar2 + 0x4c) - (int)pcStack_98);
          puStack_a0 = (uint *)0x64a869;
          pcStack_50 = pcStack_9c;
          func_0x008ab0e6();
          pcStack_98 = (char *)*piVar9;
          uStack_70 = uStack_70 & 0xffffffff;
          if (pcStack_98 != (char *)0x0) {
            puStack_94 = (undefined8 *)(*(int *)(iVar2 + 0x50) - (int)pcStack_98);
            pcStack_9c = (code *)0x64a887;
            func_0x0046aa00();
          }
          *piVar9 = (int)pcStack_50;
          *(code **)(iVar2 + 0x4c) = pcStack_58 + (int)pcStack_50;
          *(code **)(iVar2 + 0x50) = pcStack_50 + (int)puVar3;
          iStack_8 = CONCAT31(iStack_8._1_3_,4);
        }
        pcStack_98 = (undefined1 *)0x0;
        pcStack_9c = (code *)auStack_4c;
        pcStack_18 = (code *)0x0;
        auStack_2c[1] = 0;
        pcStack_24 = (code *)0x0;
        pcStack_20 = (code *)0x0;
        uStack_1c = 0;
        puStack_a0 = (uint *)0x64a8be;
        puStack_94 = puStack_3c;
        func_0x0063a9c0();
        pcStack_58 = pcStack_20;
        for (pcVar10 = pcStack_24; pcVar10 != pcStack_58; pcVar10 = *(code **)pcVar10) {
          pcStack_64 = pcVar10 + 0xc;
          puStack_a0 = (uint *)pcStack_18;
          if (pcVar10 != *(code **)(pcStack_20 + 4)) {
            puStack_a0 = *(uint **)(pcVar10 + 8);
          }
          pcStack_a4 = pcStack_64;
          if (pcVar10 == pcStack_24) {
            uVar8 = uStack_1c;
            if (puStack_a0 <= uStack_1c) {
              uVar8 = (uint)puStack_a0;
            }
            pcStack_a4 = pcStack_64 + uVar8;
            puStack_a0 = (uint *)((int)puStack_a0 - uVar8);
          }
          pcStack_50 = pcStack_a4;
          func_0x0064f770(*(undefined4 *)(*piVar1 + 0x4c));
        }
        if (*(int *)((int)uStack_60._4_4_ + 0xf4) != 0) {
          LOCK();
          piVar1 = (int *)(*(int *)((int)uStack_60._4_4_ + 0xf4) + 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        pcStack_a4 = *(code **)((int)uStack_60._4_4_ + 0xf0);
        puStack_a0 = *(uint **)((int)uStack_60._4_4_ + 0xf4);
        iStack_8 = CONCAT31((int3)((uint)iStack_8 >> 8),4);
        uStack_60._4_4_ = &pcStack_a4;
        func_0x0064ae70();
        iStack_8 = 0xffffffff;
        func_0x00638430(auStack_48);
      }
      puStack_90 = (uint *)0x64a990;
      func_0x0064a9c0();
    }
  }
  else {
    puStack_90 = auStack_7c;
    puStack_94 = (undefined8 *)0x64a4d7;
    puVar5 = (undefined1 *)func_0x00465870();
    iStack_8 = 0;
    puStack_94 = (undefined8 *)&DAT_00000008;
    pcStack_98 = "canceled";
    uStack_1c = 0;
    auStack_2c[0] = 0;
    auStack_2c[1] = 0;
    pcStack_24 = (code *)0x0;
    pcStack_20 = (code *)0x0;
    pcStack_18 = (code *)0x0;
    pcStack_9c = (code *)0x64a504;
    func_0x0046bc40();
    iStack_8._0_1_ = 1;
    puStack_a0 = auStack_2c;
    pcStack_a4 = (code *)0x64a514;
    pcStack_9c = (code *)puVar5;
    func_0x0064acd0();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
LAB_0064a518:
    if (&DAT_0000000f < pcStack_18) {
      pcStack_a4 = pcStack_18;
      func_0x0046b1f0(auStack_2c,auStack_2c[0]);
    }
    uStack_1c = 0;
    pcStack_18 = (code *)0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (&DAT_0000000f < pcStack_68) {
      pcStack_a4 = pcStack_68;
      func_0x0046b1f0(auStack_7c,auStack_7c[0]);
    }
    uStack_70 = uStack_70 & 0xffffffff;
    pcStack_68 = (code *)&DAT_0000000f;
    auStack_7c[0] = auStack_7c[0] & 0xffffff00;
  }
  *unaff_FS_OFFSET = iStack_10;
  pcStack_98 = (char *)0x64a9a7;
  FUN_008ab370();
  return;
}



void FUN_0064abb0(int *param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint auStack_28 [7];
  undefined *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &DAT_00edfd85;
  auStack_28[6] = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_28 + 6);
  if (((param_1[2] & 1U) == 0) || ((param_1[2] == 1 && (*param_1 == 0)))) {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    func_0x0046bc40(&DAT_0112e1b4,0,uVar1);
    iStack_8 = 0;
    auStack_28[4] = 0;
    auStack_28[0] = 0;
    auStack_28[1] = 0;
    auStack_28[2] = 0;
    auStack_28[3] = 0;
    auStack_28[5] = 0;
    func_0x0046bc40("timeout",7);
    iStack_8._0_1_ = 1;
    func_0x0064acd0(auStack_28,&uStack_40);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    if (0xf < auStack_28[5]) {
      func_0x0046b1f0(auStack_28,auStack_28[0],auStack_28[5]);
    }
    auStack_28[4] = 0;
    auStack_28[5] = 0xf;
    auStack_28[0] = auStack_28[0] & 0xffffff00;
    iStack_8 = 0xffffffff;
    if (0xf < uStack_2c) {
      func_0x0046b1f0(&uStack_40,uStack_40,uStack_2c);
    }
  }
  *unaff_FS_OFFSET = auStack_28[6];
  return;
}



void __thiscall FUN_0064b0e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int extraout_EDX;
  undefined1 auStack_1c [16];
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)auStack_1c;
  if ((*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10)) &&
     (func_0x0064b9e0(), *(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10))) {
    do {
      cVar4 = func_0x0064bcc0();
      if (cVar4 != '\0') break;
      piVar1 = *(int **)(extraout_EDX + 8);
      iVar2 = *piVar1;
      while (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x14);
        *piVar1 = iVar3;
        if (iVar3 == 0) {
          piVar1[1] = 0;
        }
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined8 *)(iVar2 + 0x20) = 0;
        *(undefined4 *)(iVar2 + 0x28) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        if (param_2[1] == 0) {
          *param_2 = iVar2;
        }
        else {
          *(int *)(param_2[1] + 0x14) = iVar2;
        }
        param_2[1] = iVar2;
        iVar2 = *piVar1;
      }
      func_0x0064b7b0(piVar1);
    } while (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10));
  }
  FUN_008ab370();
  return;
}



uint __thiscall FUN_0064b1a0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 auStack_18 [20];
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return param_2;
  }
  func_0x0064b9e0();
  puVar3 = (uint *)func_0x00642dc0(auStack_18);
  uVar1 = puVar3[1];
  uVar2 = *puVar3;
  if (((int)uVar1 < 1) && (((int)uVar1 < 0 || (uVar2 == 0)))) {
    return 0;
  }
  if (((int)uVar1 < (int)param_2 >> 0x1f) ||
     (((int)uVar1 <= (int)param_2 >> 0x1f && (uVar2 <= param_2)))) {
    param_2 = uVar2;
  }
  return param_2;
}



uint __thiscall FUN_0064b220(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_18 [20];
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return param_2;
  }
  func_0x0064b9e0();
  piVar1 = (int *)func_0x00642dc0(auStack_18);
  iVar2 = piVar1[1];
  if ((iVar2 < 1) && ((iVar2 < 0 || (*piVar1 == 0)))) {
    return 0;
  }
  lVar3 = func_0x00e87ec0(*piVar1,iVar2,1000,0);
  iVar2 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 == 0) {
    return 1;
  }
  if ((iVar2 < (int)param_2 >> 0x1f) ||
     ((iVar2 <= (int)param_2 >> 0x1f && ((uint)lVar3 <= param_2)))) {
    param_2 = (uint)lVar3;
  }
  return param_2;
}



undefined4 * __fastcall FUN_0064b490(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edfee3;
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
  uStack_8 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar2 = func_0x008ab47d(0x14);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  param_1[3] = iVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0064b670(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00edff90;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::asio::detail::deadline_timer_service<>::vftable;
  uStack_8 = 1;
  func_0x0062ecf0(param_1 + 5,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00642f10();
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::execution_context::service::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0064da30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edd45b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  puVar1 = param_1 + 1;
  *puVar1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 2) = 0;
  __std_exception_copy(param_2 + 8,param_1 + 2,uVar2);
  *puVar1 = std::runtime_error::vftable;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  FUN_0046c0d0(param_2 + 0x10);
  *puVar1 = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_0064dae0(undefined4 *param_1)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee0586;
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
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_1[1] = std::exception::vftable;
  __std_exception_destroy(param_1 + 2);
  *param_1 = boost::exception_detail::clone_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0064db90(undefined4 *param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee05d3;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  FUN_0064dc20(param_2 + 4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FUN_0046c0d0(param_2 + 0x10);
  param_1[1] = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0064dc20(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee060d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::out_of_range::vftable;
  *param_1 = boost::gregorian::bad_day_of_month::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0064dd90(undefined4 *param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee05d3;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  FUN_0064de20(param_2 + 4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FUN_0046c0d0(param_2 + 0x10);
  param_1[1] = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0064de20(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee060d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::out_of_range::vftable;
  *param_1 = boost::gregorian::bad_month::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_0064deb0(undefined4 *param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee05d3;
  iStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::exception_detail::clone_base::vftable;
  uStack_8 = 0;
  FUN_0064df40(param_2 + 4);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FUN_0046c0d0(param_2 + 0x10);
  param_1[1] = boost::wrapexcept<>::vftable;
  param_1[4] = boost::wrapexcept<>::vftable;
  *param_1 = boost::wrapexcept<>::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_0064df40(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee060d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = std::exception::vftable;
  *(undefined8 *)(param_1 + 1) = 0;
  __std_exception_copy(param_2 + 4,param_1 + 1,uVar1);
  *param_1 = std::logic_error::vftable;
  *param_1 = std::out_of_range::vftable;
  *param_1 = boost::gregorian::bad_year::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_0064dfd0(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee0586;
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



void __fastcall FUN_0064e180(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_0064deb0(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288ab4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0064e1b0(undefined4 param_1)

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
  uVar2 = FUN_0064deb0(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_0064e300(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_0064dd90(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288a88);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0064e330(undefined4 param_1)

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
  uVar2 = FUN_0064dd90(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_0064e480(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee07b0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x00648180(uVar1,param_1 + 0x10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



int __fastcall FUN_0064e4d0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee07e8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar6 = (undefined4 *)func_0x00cff7c0(*(int *)(param_1 + 0x10),uVar5);
    if (puVar6 != (undefined4 *)0x0) {
      pcVar3 = *(code **)*puVar6;
      _guard_check_icall(1);
      (*pcVar3)();
      func_0x00cfff60(*(undefined4 *)(param_1 + 0x10),0);
    }
    iVar7 = func_0x00cff7d0(*(undefined4 *)(param_1 + 0x10),0);
    if (iVar7 != 0) {
      puVar6 = (undefined4 *)func_0x00cff7d0(*(undefined4 *)(param_1 + 0x10),0);
      if (puVar6 != (undefined4 *)0x0) {
        pcVar3 = *(code **)*puVar6;
        _guard_check_icall(1);
        (*pcVar3)();
      }
      func_0x00cfff70(*(undefined4 *)(param_1 + 0x10),0,0);
    }
    func_0x00cff320(*(undefined4 *)(param_1 + 0x10));
  }
  iVar7 = param_1 + 0x14;
  uStack_8 = 0xffffffff;
  piVar4 = *(int **)(param_1 + 0x18);
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar1 = piVar4 + 1;
    iVar2 = *piVar1;
    iVar7 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      pcVar3 = *(code **)*piVar4;
      _guard_check_icall();
      iVar7 = (*pcVar3)();
      LOCK();
      piVar1 = piVar4 + 2;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcVar3 = *(code **)(*piVar4 + 4);
        _guard_check_icall();
        iVar7 = (*pcVar3)();
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



void __fastcall FUN_0064e5f0(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_0064db90(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288b34);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0064e620(undefined4 param_1)

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
  uVar2 = FUN_0064db90(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_0064e770(undefined4 param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [44];
  
  FUN_0064da30(param_1);
  func_0x00e87d2e(auStack_30,&DAT_01288a78);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 __fastcall FUN_0064e7a0(undefined4 param_1)

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
  uVar2 = FUN_0064da30(param_1);
  uStack_8 = 1;
  func_0x00465fa0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar2;
}



void __fastcall FUN_0064e920(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  code *pcVar2;
  int iVar3;
  LPOVERLAPPED lpOverlapped;
  uint uVar4;
  BOOL BVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  char cVar7;
  int *unaff_FS_OFFSET;
  undefined8 uStack_48;
  undefined4 uStack_40;
  LPCRITICAL_SECTION p_Stack_3c;
  undefined1 uStack_38;
  LPCRITICAL_SECTION p_Stack_34;
  undefined1 uStack_30;
  int iStack_2c;
  LPCRITICAL_SECTION p_Stack_28;
  undefined4 uStack_24;
  char cStack_1d;
  undefined8 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edf02d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar3 + 0x18);
  p_Stack_34 = lpCriticalSection;
  iStack_2c = iVar3;
  p_Stack_28 = lpCriticalSection;
  uStack_14 = uVar4;
  EnterCriticalSection(lpCriticalSection);
  cVar7 = '\x01';
  cStack_1d = '\x01';
  uStack_30 = 1;
  uStack_8 = 0;
  cVar1 = *(char *)(iVar3 + 0xd0);
  uVar6 = extraout_ECX;
  while (cVar1 == '\0') {
    if (cVar7 != '\0') {
      LeaveCriticalSection(lpCriticalSection);
      cVar7 = '\0';
      cStack_1d = '\0';
      uStack_30 = 0;
      uVar6 = extraout_ECX_00;
    }
    uStack_1c = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    func_0x00641710(uVar6,&uStack_1c,uVar4);
    iVar3 = *(int *)(iVar3 + 0x14);
    uVar6 = extraout_ECX_01;
    lpOverlapped = (LPOVERLAPPED)uStack_1c;
    lpCriticalSection = p_Stack_28;
    while (p_Stack_28 = lpCriticalSection, lpOverlapped != (LPOVERLAPPED)0x0) {
      uStack_1c._4_4_ = (undefined4)((ulonglong)uStack_1c >> 0x20);
      uStack_24 = 0;
      if (lpOverlapped[1].Internal == 0) {
        uStack_1c._4_4_ = 0;
      }
      uStack_1c = CONCAT44(uStack_1c._4_4_,lpOverlapped[1].Internal);
      lpOverlapped[1].Internal = 0;
      lpOverlapped[1].u.s.Offset = 1;
      BVar5 = PostQueuedCompletionStatus(*(HANDLE *)(iVar3 + 0x14),0,0,lpOverlapped);
      uVar6 = extraout_ECX_02;
      if (BVar5 == 0) {
        p_Stack_3c = (LPCRITICAL_SECTION)(iVar3 + 0x38);
        EnterCriticalSection(p_Stack_3c);
        uStack_38 = 1;
        lpOverlapped[1].Internal = 0;
        if (*(int *)(iVar3 + 0x58) == 0) {
          *(LPOVERLAPPED *)(iVar3 + 0x54) = lpOverlapped;
        }
        else {
          *(LPOVERLAPPED *)(*(int *)(iVar3 + 0x58) + 0x14) = lpOverlapped;
        }
        *(LPOVERLAPPED *)(iVar3 + 0x58) = lpOverlapped;
        if ((LPOVERLAPPED)uStack_1c != (LPOVERLAPPED)0x0) {
          if (lpOverlapped == (LPOVERLAPPED)0x0) {
            *(LPOVERLAPPED *)(iVar3 + 0x54) = (LPOVERLAPPED)uStack_1c;
          }
          else {
            lpOverlapped[1].Internal = (ULONG_PTR)(LPOVERLAPPED)uStack_1c;
          }
          *(undefined4 *)(iVar3 + 0x58) = uStack_1c._4_4_;
          uStack_1c = 0;
        }
        LOCK();
        *(undefined4 *)(iVar3 + 0x34) = 1;
        UNLOCK();
        uStack_8 = CONCAT31((int3)(uStack_8 >> 8),1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x38));
        uVar6 = extraout_ECX_03;
      }
      cVar7 = cStack_1d;
      lpCriticalSection = p_Stack_28;
      lpOverlapped = (LPOVERLAPPED)uStack_1c;
    }
    if (cVar7 == '\0') {
      EnterCriticalSection(lpCriticalSection);
      cVar7 = '\x01';
      cStack_1d = '\x01';
      uStack_30 = 1;
      uVar6 = extraout_ECX_04;
    }
    uStack_8 = uStack_8 & 0xffffff00;
    iVar3 = (int)(LPOVERLAPPED)uStack_1c;
    while (iVar3 != 0) {
      uStack_1c._4_4_ = (undefined4)((ulonglong)uStack_1c >> 0x20);
      uStack_24 = 0;
      if (*(int *)(iVar3 + 0x14) == 0) {
        uStack_1c._4_4_ = 0;
      }
      uStack_1c = CONCAT44(uStack_1c._4_4_,*(int *)(iVar3 + 0x14));
      *(undefined4 *)(iVar3 + 0x14) = 0;
      pcVar2 = *(code **)(iVar3 + 0x18);
      uStack_48 = 0;
      uStack_40 = 0;
      _guard_check_icall(0,iVar3,&uStack_48,0);
      (*pcVar2)();
      uVar6 = extraout_ECX_05;
      iVar3 = (int)(LPOVERLAPPED)uStack_1c;
    }
    iVar3 = iStack_2c;
    cVar1 = *(char *)(iStack_2c + 0xd0);
  }
  uStack_8 = 0xffffffff;
  if (cVar7 != '\0') {
    LeaveCriticalSection(lpCriticalSection);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_0064eb40(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xe0);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0064eb70(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  return param_1;
}



undefined4 * __thiscall FUN_0064eba0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x20);
  }
  return param_1;
}



void Catch_0064f977(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x3c);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x30);
  uVar1 = *(undefined4 *)(unaff_EBP + -0x38);
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x2c);
  func_0x004ab200(*(undefined4 *)(unaff_EBP + -0x40),*puVar2,*(undefined4 *)(unaff_EBP + -0x30),
                  *(undefined4 *)(unaff_EBP + -0x3c));
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *puVar2 = uVar1;
  func_0x00e87d2e(0,0);
  func_0x0046e700();
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x3c);
  iVar3 = *(int *)(unaff_EBP + -0x30);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x38);
  iVar4 = *(int *)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x18) = iVar4 + iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x004ab200(iVar4 + iVar3,iVar3 + iVar4 * 2,iVar3,*(undefined4 *)(unaff_EBP + -0x3c));
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x2c);
  func_0x00650580(iVar3 + iVar4 * 2,*puVar2,iVar4 + iVar3);
  *puVar2 = *(undefined4 *)(unaff_EBP + -0x38);
  func_0x00e87d2e(0,0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}



void Catch_0064f9ba(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x3c);
  iVar1 = *(int *)(unaff_EBP + -0x30);
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x38);
  iVar2 = *(int *)(unaff_EBP + -0x40);
  *(int *)(unaff_EBP + -0x18) = iVar2 + iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  func_0x004ab200(iVar2 + iVar1,iVar1 + iVar2 * 2,iVar1,*(undefined4 *)(unaff_EBP + -0x3c));
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  puVar3 = *(undefined4 **)(unaff_EBP + -0x2c);
  func_0x00650580(iVar1 + iVar2 * 2,*puVar3,iVar2 + iVar1);
  *puVar3 = *(undefined4 *)(unaff_EBP + -0x38);
  func_0x00e87d2e(0,0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



undefined1 FUN_0064fc80(void)

{
  return 1;
}



undefined4 * __thiscall FUN_0064fdd0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0b1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  *param_1 = boost::asio::ssl::detail::verify_callback_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8,uVar1);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * FUN_006503e0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee0caa;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x100,uVar1);
  uStack_8 = 0;
  memset(_Dst,0,0x100);
  *_Dst = boost::asio::execution_context::service::vftable;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = param_1;
  _Dst[4] = 0;
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  *_Dst = boost::asio::detail::execution_context_service_base<>::vftable;
  uStack_8._0_1_ = 2;
  *_Dst = boost::asio::detail::select_reactor::vftable;
  uVar2 = func_0x00638840();
  _Dst[5] = uVar2;
  func_0x0062d090();
  uStack_8._0_1_ = 3;
  func_0x006404d0();
  uStack_8._0_1_ = 4;
  func_0x008ab84c(_Dst + 0xe,0x1c,4,FUN_0064b490,FUN_00641100);
  uStack_8._0_1_ = 5;
  func_0x008ab84c(_Dst + 0x2a,0xc,3,FUN_0063f260,FUN_0063f290);
  uStack_8._0_1_ = 6;
  _Dst[0x33] = 0;
  *(undefined1 *)(_Dst + 0x34) = 0;
  _Dst[0x35] = 0;
  _Dst[0x3b] = 0;
  _Dst[0x3c] = FUN_00641e50;
  _Dst[0x36] = 0;
  _Dst[0x37] = 0;
  _Dst[0x38] = 0;
  _Dst[0x39] = 0;
  _Dst[0x3a] = 0;
  _Dst[0x3d] = 0;
  _Dst[0x3e] = _Dst;
  *(undefined1 *)(_Dst + 0x3f) = 0;
  puVar3 = (undefined8 *)func_0x008ab47d(0xc);
  uStack_8 = CONCAT31(uStack_8._1_3_,7);
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  uVar2 = func_0x0064c8d0(_Dst);
  _Dst[0x35] = uVar2;
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



void __fastcall FUN_00650680(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  piVar1 = *(int **)(param_1 + 0x38);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    pcVar3 = *(code **)(iVar2 + 4);
    _guard_check_icall();
    (*pcVar3)();
    *(int **)(param_1 + 0x38) = piVar1;
  }
  return;
}



undefined4 * __thiscall FUN_006507e0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0d1d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 0;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x00650860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00651a10(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee0ce5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = boost::beast::stable_async_base<>::vftable;
  uStack_8 = 1;
  func_0x00643330(uVar1);
  uStack_8 = 0xffffffff;
  func_0x00650860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined * Catch_00651ee3(void)

{
  func_0x0062e2c0();
  return &DAT_00651efa;
}



undefined * Catch_00652103(void)

{
  func_0x0062e2c0();
  return &DAT_0065211a;
}



void __fastcall FUN_00652a50(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1860;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006535c0(uVar1);
  func_0x008ab812(param_1,0xd8);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_006534f0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee1930;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006535c0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xd8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void FUN_00653800(int param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined8 uStack_70;
  undefined1 auStack_68 [28];
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
  puStack_18 = &DAT_00ee1b38;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_30 = *param_3;
  uStack_28 = *(uint *)(param_3 + 1);
  iStack_14 = 0;
  uVar3 = uStack_28;
  uStack_70 = uStack_30;
  puVar2 = &stack0xfffffffc;
  if (param_1 != 0) {
    if (*(char *)(param_2 + 0x3c) == '\0') {
      uStack_70 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = *(uint *)(param_2 + 0x28);
      puVar2 = &stack0xfffffffc;
    }
    else {
      func_0x0063f640(uStack_24);
      uVar3 = uStack_28;
      uStack_70 = uStack_30;
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
  func_0x0064b5b0(param_2 + 0x50);
  iStack_14._0_1_ = 4;
  if ((uVar3 != 0) && (uVar3 != 1)) {
    uVar3 = uVar3 & 1 | 0x115be64;
  }
  uStack_30 = uStack_70;
  uStack_28 = uVar3;
  func_0x00653e80(param_2 + 0x40,&uStack_30);
  iStack_14._0_1_ = 5;
  func_0x006536f0();
  if (param_1 != 0) {
    iStack_14._0_1_ = 6;
    func_0x00655540(auStack_68,extraout_ECX);
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
  func_0x006536f0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00653ab0(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [28];
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
  puStack_18 = &DAT_00ee1c48;
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
  func_0x0064b5b0(param_2 + 0x40,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x00653e80(param_2 + 0x30,param_2 + 0x20);
  iStack_14._0_1_ = 5;
  func_0x006539a0();
  if (param_1 != 0) {
    iStack_14._0_1_ = 6;
    func_0x00655540(auStack_5c,extraout_ECX);
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
  func_0x006539a0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00655730(undefined4 param_1,byte param_2)

{
  func_0x00650860();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



void FUN_00655930(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee238d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  func_0x00653be0(uVar5);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x00653230();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piStack_18 = (int *)((ulonglong)uVar4 >> 0x20);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_18[1] + -1;
    piStack_18[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x00653be0(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00655a40(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int *piStack_18;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee238d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  iStack_8._0_1_ = 3;
  iStack_8._1_3_ = 0;
  func_0x00653be0(uVar5);
  if (param_1 != 0) {
    iStack_8._0_1_ = 4;
    func_0x006532e0();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  piStack_18 = (int *)((ulonglong)uVar4 >> 0x20);
  if (piStack_18 != (int *)0x0) {
    LOCK();
    iVar3 = piStack_18[1] + -1;
    piStack_18[1] = iVar3;
    UNLOCK();
    if (iVar3 == 0) {
      pcVar2 = *(code **)*piStack_18;
      _guard_check_icall();
      (*pcVar2)();
      LOCK();
      piVar1 = piStack_18 + 2;
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        pcVar2 = *(code **)(*piStack_18 + 4);
        _guard_check_icall();
        (*pcVar2)();
      }
    }
  }
  iStack_8 = 0xffffffff;
  func_0x00653be0(uVar5);
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00655d90(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint3 uVar5;
  int *piVar6;
  undefined4 ****ppppuVar7;
  undefined4 ****ppppuVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [16];
  undefined4 ***apppuStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  undefined4 ***apppuStack_a0 [4];
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 *puStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined1 uStack_79;
  int iStack_78;
  int *piStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  int aiStack_68 [3];
  undefined4 *puStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  int *piStack_40;
  undefined8 uStack_3c;
  int iStack_34;
  int iStack_30;
  undefined8 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  int iStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ee2622;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_6c = 0;
  piStack_70 = param_2;
  piStack_a8 = param_2;
  piStack_ac = param_2 + 0x22;
  piStack_a4 = param_2;
  iStack_14 = 0;
  if ((param_1 == 0) || (param_1 == param_2[0x21])) {
    piStack_70 = aiStack_68;
    uStack_50 = 0;
    aiStack_68[0] = 0;
    aiStack_68[1] = 0;
    aiStack_68[2] = 0;
    puStack_5c = (undefined4 *)0x0;
    uStack_58 = 0;
    func_0x0064b5b0(param_2 + 0x26,uStack_24);
    puStack_88 = (undefined1 *)0x0;
    piStack_84 = (int *)0x0;
    uStack_80 = 0;
    iStack_4c = param_2[0x22];
    uStack_48 = (uint)*(ushort *)(param_2 + 0x23);
    iStack_44 = param_2[0x24];
    piStack_40 = (int *)param_2[0x25];
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    iStack_34 = param_2[10];
    uStack_3c = *(undefined8 *)(param_2 + 8);
    piStack_74 = &iStack_30;
    iStack_30 = 0;
    iStack_14._1_3_ = (uint3)((uint)iStack_14 >> 8);
    uStack_2c = 0;
    iStack_14._0_1_ = 0x13;
    piStack_ac = &iStack_4c;
    if (param_2[0x2d] != 0) {
      iStack_14._0_1_ = 0x16;
      func_0x00469da0(param_2 + 0x1b);
      uStack_6c = 1;
      iStack_14._0_1_ = 0x17;
      func_0x00469da0(param_2 + 0x15);
      uStack_6c = 3;
      piStack_70 = (int *)func_0x00656570(apppuStack_c8,apppuStack_a0);
      uVar5 = iStack_14._1_3_;
      iStack_14 = (uint)iStack_14._1_3_ << 8;
      if (&iStack_30 != piStack_70) {
        iVar2 = *piStack_70;
        iVar3 = piStack_70[1];
        *piStack_70 = 0;
        piStack_70[1] = 0;
        piVar6 = (int *)uStack_2c;
        piStack_74 = (int *)uStack_2c;
        iStack_78 = iStack_30;
        uStack_2c = CONCAT44(uStack_2c._4_4_,iVar3);
        iStack_14 = CONCAT31(uVar5,0x18);
        iStack_30 = iVar2;
        if (piVar6 != (int *)0x0) {
          LOCK();
          iVar2 = piVar6[1] + -1;
          piVar6[1] = iVar2;
          UNLOCK();
          if (iVar2 == 0) {
            pcVar4 = *(code **)*piVar6;
            _guard_check_icall();
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
        uStack_2c = CONCAT44(piStack_70[2],(int *)uStack_2c);
        piStack_70[2] = 0;
      }
      iStack_14._0_1_ = 0x17;
      func_0x00656440();
      uStack_6c = 1;
      iStack_14._0_1_ = 0x16;
      if (0xf < uStack_b4) {
        func_0x0046b1f0(apppuStack_c8,apppuStack_c8[0],uStack_b4);
      }
      uStack_b8 = 0;
      uStack_b4 = 0xf;
      apppuStack_c8[0] = (undefined4 ***)((uint)apppuStack_c8[0] & 0xffffff00);
      uStack_6c = 0;
      iStack_14._0_1_ = 0x13;
      if (0xf < uStack_8c) {
        func_0x0046b1f0(apppuStack_a0,apppuStack_a0[0],uStack_8c);
      }
      uStack_90 = 0;
      uStack_8c = 0xf;
      apppuStack_a0[0] = (undefined4 ***)((uint)apppuStack_a0[0] & 0xffffff00);
    }
    func_0x00655c30();
    if (param_1 != 0) {
      iStack_14._0_1_ = 0x1a;
      if ((int)uStack_58 == 0) {
        func_0x006578b0();
      }
      else {
        pcVar4 = *(code **)(uStack_58._4_4_ + 0xc);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = *(code **)(uStack_58._4_4_ + 8);
          func_0x0065b270(&iStack_4c);
          iStack_14._0_1_ = 0x1b;
          puStack_88 = &uStack_79;
          if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
            func_0x008abb44();
          }
          piVar6 = (int *)func_0x0065c120(piStack_74,4);
          uStack_80 = 0;
          iStack_14._0_1_ = 0x1c;
          piStack_84 = piVar6;
          piStack_74 = piVar6;
          func_0x0065b270(auStack_d8);
          *piVar6 = (int)FUN_0065f9a0;
          piStack_84 = (int *)0x0;
          iStack_14._0_1_ = 0x1b;
          piStack_70 = piVar6;
          func_0x0065c5c0();
          iStack_14._0_1_ = 0x1a;
          func_0x006564c0();
          iStack_14._0_1_ = 0x1e;
          _guard_check_icall(aiStack_68,&piStack_70);
          (*pcVar4)();
          iStack_14._0_1_ = 0x1a;
          if (piStack_70 != (int *)0x0) {
            pcVar4 = (code *)*piStack_70;
            _guard_check_icall(piStack_70,0);
            (*pcVar4)();
          }
        }
        else {
          _guard_check_icall(aiStack_68,FUN_0065ded0,&iStack_4c);
          (*pcVar4)();
        }
      }
    }
    piStack_74 = &iStack_30;
    iStack_14._0_1_ = 0x20;
    piVar6 = (int *)uStack_2c;
    if ((int *)uStack_2c != (int *)0x0) {
      LOCK();
      iVar2 = ((int *)uStack_2c)[1] + -1;
      ((int *)uStack_2c)[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar4 = *(code **)*(int *)uStack_2c;
        _guard_check_icall();
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
    piVar6 = piStack_40;
    piStack_74 = &iStack_4c;
    iStack_14._0_1_ = 6;
    if (piStack_40 != (int *)0x0) {
      LOCK();
      iVar2 = piStack_40[1] + -1;
      piStack_40[1] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar4 = *(code **)*piStack_40;
        _guard_check_icall();
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
    piStack_74 = aiStack_68;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if ((int)uStack_58 != 0) {
      pcVar4 = (code *)*puStack_5c;
      _guard_check_icall(aiStack_68);
      (*pcVar4)();
    }
  }
  else {
    iStack_14._0_1_ = 1;
    iStack_14._1_3_ = 0;
    puStack_20 = &stack0xfffffffc;
    func_0x00469da0(param_2 + 0x1b);
    uStack_6c = 4;
    ppppuVar8 = apppuStack_c8;
    if (0xf < uStack_b4) {
      ppppuVar8 = (undefined4 ****)apppuStack_c8[0];
    }
    iStack_14._0_1_ = 2;
    func_0x00469da0(piStack_70 + 0x15);
    uStack_6c = 0xc;
    ppppuVar7 = apppuStack_a0;
    if (0xf < uStack_8c) {
      ppppuVar7 = (undefined4 ****)apppuStack_a0[0];
    }
    func_0x006403a0(ppppuVar7,ppppuVar8,param_2 + 0xd,piStack_70 + 0x2d,piStack_70 + 8);
    uStack_6c = 4;
    iStack_14._0_1_ = 1;
    if (0xf < uStack_8c) {
      func_0x0046b1f0(apppuStack_a0,apppuStack_a0[0],uStack_8c);
    }
    uStack_90 = 0;
    uStack_8c = 0xf;
    apppuStack_a0[0] = (undefined4 ***)((uint)apppuStack_a0[0] & 0xffffff00);
    uStack_6c = 0;
    iStack_14 = (uint)iStack_14._1_3_ << 8;
    if (0xf < uStack_b4) {
      func_0x0046b1f0(apppuStack_c8,apppuStack_c8[0],uStack_b4);
    }
    uStack_b8 = 0;
    uStack_b4 = 0xf;
    apppuStack_c8[0] = (undefined4 ***)((uint)apppuStack_c8[0] & 0xffffff00);
    func_0x0062e4b0(piStack_70);
    piStack_a4 = (int *)0x0;
    piStack_a8 = (int *)0x0;
  }
  iStack_14 = 0xffffffff;
  func_0x00655c30();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined1 * __fastcall Catch_00657155(undefined4 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int unaff_EBP;
  
  func_0x00635550(7,param_1);
  uVar2 = *(uint *)(unaff_EBP + -0x1c);
  if ((uVar2 != 0) && (uVar2 != 1)) {
    uVar2 = uVar2 & 1 | 0x115c51c;
  }
  puVar1 = *(undefined8 **)(unaff_EBP + -0x2c);
  *puVar1 = *(undefined8 *)(unaff_EBP + -0x24);
  *(uint *)(puVar1 + 1) = uVar2;
  return &LAB_0065718a;
}



undefined4 * FUN_00658550(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *_Dst;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ee2fe5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  _Dst = (undefined4 *)func_0x008ab47d(0x38,uVar2);
  uStack_8 = 0;
  memset(_Dst,0,0x38);
  *_Dst = boost::asio::execution_context::service::vftable;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = param_1;
  _Dst[4] = 0;
  *_Dst = boost::asio::detail::execution_context_service_base<>::vftable;
  puVar1 = _Dst + 5;
  *_Dst = boost::asio::detail::deadline_timer_service<>::vftable;
  *puVar1 = boost::asio::detail::timer_queue_base::vftable;
  _Dst[6] = 0;
  *puVar1 = boost::asio::detail::timer_queue<>::vftable;
  _Dst[7] = boost::asio::detail::timer_queue_base::vftable;
  _Dst[8] = 0;
  _Dst[7] = boost::asio::detail::timer_queue<>::vftable;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0;
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),7);
  uVar3 = func_0x00638840();
  _Dst[0xd] = uVar3;
  func_0x0062eb10(puVar1);
  *unaff_FS_OFFSET = iStack_10;
  return _Dst;
}



undefined4 __thiscall FUN_006588d0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee30ad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x006577f0(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __fastcall FUN_00658fd0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x00659920(*(int *)(param_1 + 0xc));
  }
  return;
}



undefined4 __thiscall FUN_0065b120(undefined4 param_1,byte param_2)

{
  func_0x006577f0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x6c);
  }
  return param_1;
}



void FUN_0065c070(undefined4 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)*param_1;
  _guard_check_icall(param_1 + 4);
  (*pcVar1)();
  return;
}



void FUN_0065c860(int param_1,int param_2)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [48];
  undefined8 uStack_4c;
  undefined4 uStack_44;
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
  puStack_18 = &DAT_00ee3fed;
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
  func_0x0064b5b0(param_2 + 0x60,uStack_24);
  iStack_14._0_1_ = 4;
  memset(auStack_7c,0,0x3c);
  func_0x0065d0b0(param_2 + 0x30);
  uStack_4c = *(undefined8 *)(param_2 + 0x20);
  uStack_44 = *(undefined4 *)(param_2 + 0x28);
  iStack_14._0_1_ = 6;
  func_0x0065c770();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_30 == 0) {
      func_0x00652e50(uStack_4c,uStack_44,0xffffffff,0);
    }
    else {
      func_0x00660fb0(auStack_7c);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x006529c0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_30 != 0) {
    pcVar1 = (code *)*puStack_34;
    _guard_check_icall(&uStack_40);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0065c770();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0065caf0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [48];
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
  puStack_18 = &DAT_00ee410c;
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
  func_0x0064b5b0(param_2 + 100,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_30,param_4);
  uStack_58 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_58 = uStack_28 & 1 | 0x115bdd4;
  }
  memset(auStack_90,0,0x40);
  func_0x0065d0b0(param_2 + 0x34);
  uStack_60 = uStack_30;
  uStack_54 = param_4;
  iStack_14._0_1_ = 6;
  func_0x0065c9d0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_3c == 0) {
      func_0x00652e50(uStack_60,uStack_58,uStack_54,0);
    }
    else {
      func_0x00661190(auStack_90);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x006529c0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0065c9d0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0065ccc0(int param_1,int param_2)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [48];
  undefined8 uStack_4c;
  undefined4 uStack_44;
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
  puStack_18 = &DAT_00ee3fed;
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
  func_0x0064b5b0(param_2 + 0x60,uStack_24);
  iStack_14._0_1_ = 4;
  memset(auStack_7c,0,0x3c);
  func_0x0065d000(param_2 + 0x30);
  uStack_4c = *(undefined8 *)(param_2 + 0x20);
  uStack_44 = *(undefined4 *)(param_2 + 0x28);
  iStack_14._0_1_ = 6;
  func_0x0065c770();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_30 == 0) {
      func_0x00652ab0(uStack_4c,uStack_44,0xffffffff,0);
    }
    else {
      func_0x00661370(auStack_7c);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x006529c0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_30 != 0) {
    pcVar1 = (code *)*puStack_34;
    _guard_check_icall(&uStack_40);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0065c770();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0065ce30(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_90 [48];
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
  puStack_18 = &DAT_00ee410c;
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
  func_0x0064b5b0(param_2 + 100,uStack_24);
  iStack_14._0_1_ = 4;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_30,param_4);
  uStack_58 = uStack_28;
  if ((uStack_28 != 0) && (uStack_28 != 1)) {
    uStack_58 = uStack_28 & 1 | 0x115c50c;
  }
  memset(auStack_90,0,0x40);
  func_0x0065d000(param_2 + 0x34);
  uStack_60 = uStack_30;
  uStack_54 = param_4;
  iStack_14._0_1_ = 6;
  func_0x0065c9d0();
  if (param_1 != 0) {
    iStack_14 = CONCAT31(iStack_14._1_3_,7);
    if ((int)uStack_3c == 0) {
      func_0x00652ab0(uStack_60,uStack_58,uStack_54,0);
    }
    else {
      func_0x00661550(auStack_90);
    }
  }
  iStack_14._0_1_ = 4;
  func_0x006529c0();
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x0065c9d0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_0065de10(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  code *pcStack_34;
  undefined1 auStack_24 [16];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee4450;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00659880(param_1 + 4,uStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0065b450();
  if (param_2 != '\0') {
    _guard_check_icall(auStack_24);
    (*pcStack_34)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0065b450();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0065ded0(undefined4 *param_1)

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
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uStack_8 = 0xffffffff;
  _guard_check_icall(param_1 + 4);
  (*pcVar2)();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_0065e0f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  uVar2 = param_1[3];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar2;
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void __thiscall FUN_0065e150(int param_1,byte param_2)

{
  if ((param_2 & 7) != 0) {
    func_0x0065fc30(*(int *)(param_1 + 4) + 0x14,*(undefined4 *)(param_1 + 8),(int *)(param_1 + 4));
  }
  return;
}



void __thiscall FUN_0065e180(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  uVar2 = param_1[0xb];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar2;
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_0065e7a0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee47b8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x7c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x98);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115c62c;
  }
  func_0x00658460(param_2 + 0x34);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x0065e6a0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00660130();
    }
    else {
      func_0x00663b10(auStack_b0);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x00651b30();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0065e6a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0065f8e0(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  code *pcStack_34;
  undefined1 auStack_24 [16];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee4c50;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x00659880(param_1 + 4,uStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0065c680();
  if (param_2 != '\0') {
    _guard_check_icall(auStack_24);
    (*pcStack_34)();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0065c680();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0065f9a0(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee4c95;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0065b270(param_1 + 4,uStack_14,&uStack_15,param_1,param_1,0,0,0,0,0,0,0,0,0);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0065c5c0();
  if (param_2 != '\0') {
    func_0x006578b0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006564c0();
  uStack_8 = 0xffffffff;
  func_0x0065c5c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_0065ffa0(undefined4 param_1,byte param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee4dbd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x0065e050(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00660050(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ee4e58;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = param_1[6];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar1;
  uStack_8 = 0;
  func_0x0063eba0(uVar2);
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_006600e0(int param_1,uint param_2)

{
  code *pcVar1;
  
  if (((*(uint *)(param_1 + 0x14) & param_2) != 0) && ((*(uint *)(param_1 + 0x10) & param_2) != 0))
  {
    param_2 = param_2 & 1;
    *(uint *)(param_1 + 8) = param_2;
    if ((param_2 != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
      pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
      _guard_check_icall(param_2);
      (*pcVar1)();
    }
  }
  return;
}



void FUN_00660f90(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [68];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee5986;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x0065df30(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00664a30(auStack_5c);
  uStack_14 = 0;
  puStack_18 = auStack_5c;
  uStack_8 = 0xffffffff;
  func_0x00651a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00660fa0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_5c [68];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee5986;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x0065df30(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00664880(auStack_5c);
  uStack_14 = 0;
  puStack_18 = auStack_5c;
  uStack_8 = 0xffffffff;
  func_0x00651a90();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_006630c0(undefined4 param_1,byte param_2)

{
  func_0x0065e050();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa8);
  }
  return param_1;
}



void FUN_00663880(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_78 [68];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee5b58;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_78,0,0x60);
  func_0x0065df30(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x48);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x00660710();
  if (param_2 != '\0') {
    func_0x00663180();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x00651a90();
  iStack_8 = 0xffffffff;
  func_0x00660710();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00663a10(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_78 [68];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee5b58;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_78,0,0x60);
  func_0x0065df30(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x48);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x00660710();
  if (param_2 != '\0') {
    func_0x006630f0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x00651a90();
  iStack_8 = 0xffffffff;
  func_0x00660710();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00665420(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_9c [132];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee63ff;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x00662ee0(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x006675e0(auStack_9c);
  uStack_14 = 0;
  puStack_18 = auStack_9c;
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00665430(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_9c [132];
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee63ff;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  func_0x00662fd0(param_1,uVar1);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00667420(auStack_9c);
  uStack_14 = 0;
  puStack_18 = auStack_9c;
  uStack_8 = 0xffffffff;
  func_0x006577f0();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00665440(int param_1)

{
  func_0x00652e50(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),0xffffffff,0);
  return;
}



void FUN_00665470(int param_1)

{
  func_0x00652e50(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                  *(undefined4 *)(param_1 + 0x3c),0);
  return;
}



void FUN_006654a0(int param_1)

{
  func_0x00652ab0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),0xffffffff,0);
  return;
}



void FUN_006654d0(int param_1)

{
  func_0x00652ab0(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),
                  *(undefined4 *)(param_1 + 0x3c),0);
  return;
}



void FUN_00666140(int param_1,int param_2,ulonglong *param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_120 [92];
  undefined4 *puStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined1 uStack_ad;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong uStack_60;
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
  puStack_18 = &DAT_00ee6666;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_c0 = param_2;
  iStack_bc = param_2;
  uStack_30 = *param_3;
  uStack_28 = (uint)param_3[1];
  puStack_c4 = (undefined4 *)(param_2 + 0x30);
  iStack_14 = 0;
  puStack_ac = &uStack_4c;
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
    uStack_58 = uStack_28 & 1 | 0x115c2f8;
  }
  memset(&uStack_a8,0,0x58);
  uStack_a0 = *(undefined8 *)(param_2 + 0x38);
  puStack_ac = &uStack_a8;
  uStack_a4 = *(undefined4 *)(param_2 + 0x34);
  uStack_98 = *(undefined4 *)(param_2 + 0x40);
  uStack_94 = *(undefined4 *)(param_2 + 0x44);
  func_0x0065d000(param_2 + 0x48);
  uStack_60 = uStack_30;
  uStack_54 = param_4;
  iStack_14._0_1_ = 7;
  puStack_c4 = &uStack_a8;
  func_0x00666010();
  if (param_1 != 0) {
    iStack_14._0_1_ = 8;
    if ((int)uStack_3c == 0) {
      func_0x0065c4d0(uStack_60,uStack_58,uStack_54,0);
    }
    else {
      pcVar1 = *(code **)(uStack_3c._4_4_ + 0xc);
      if (pcVar1 == (code *)0x0) {
        pcVar1 = *(code **)(uStack_3c._4_4_ + 8);
        func_0x0066c6b0(&uStack_a8);
        iStack_14._0_1_ = 9;
        uStack_30 = CONCAT44(uStack_30._4_4_,&uStack_ad);
        if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
          func_0x008abb44();
        }
        puVar2 = (undefined4 *)func_0x0065c120(puStack_ac,4);
        uStack_30 = CONCAT44(puVar2,(undefined4)uStack_30);
        uStack_28 = 0;
        iStack_14._0_1_ = 10;
        puStack_b4 = puVar2;
        func_0x0066c6b0(auStack_120);
        *puVar2 = FUN_00675530;
        uStack_30 = uStack_30 & 0xffffffff;
        iStack_14._0_1_ = 9;
        puStack_ac = puVar2;
        func_0x0066e910();
        puStack_b8 = (undefined4 *)auStack_120;
        iStack_14._0_1_ = 8;
        func_0x006529c0();
        iStack_14._0_1_ = 0xe;
        _guard_check_icall();
        (*pcVar1)();
        iStack_14._0_1_ = 8;
        if (puStack_ac != (undefined4 *)0x0) {
          pcVar1 = (code *)*puStack_ac;
          _guard_check_icall(puStack_ac,0);
          (*pcVar1)();
        }
      }
      else {
        _guard_check_icall(&uStack_4c,FUN_006703d0,&uStack_a8);
        (*pcVar1)();
      }
    }
  }
  puStack_b8 = &uStack_a8;
  iStack_14._0_1_ = 4;
  func_0x006529c0();
  puStack_b4 = &uStack_4c;
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x00666010();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00666480(int param_1,int param_2,ulonglong *param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_120 [92];
  undefined4 *puStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined1 uStack_ad;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong uStack_60;
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
  puStack_18 = &DAT_00ee6666;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  iStack_c0 = param_2;
  iStack_bc = param_2;
  uStack_30 = *param_3;
  uStack_28 = (uint)param_3[1];
  puStack_c4 = (undefined4 *)(param_2 + 0x30);
  iStack_14 = 0;
  puStack_ac = &uStack_4c;
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
    uStack_58 = uStack_28 & 1 | 0x115c4fc;
  }
  memset(&uStack_a8,0,0x58);
  uStack_a0 = *(undefined8 *)(param_2 + 0x38);
  puStack_ac = &uStack_a8;
  uStack_a4 = *(undefined4 *)(param_2 + 0x34);
  uStack_98 = *(undefined4 *)(param_2 + 0x40);
  uStack_94 = *(undefined4 *)(param_2 + 0x44);
  func_0x0065d0b0(param_2 + 0x48);
  uStack_60 = uStack_30;
  uStack_54 = param_4;
  iStack_14._0_1_ = 7;
  puStack_c4 = &uStack_a8;
  func_0x00666010();
  if (param_1 != 0) {
    iStack_14._0_1_ = 8;
    if ((int)uStack_3c == 0) {
      func_0x0065c3c0(uStack_60,uStack_58,uStack_54,0);
    }
    else {
      pcVar1 = *(code **)(uStack_3c._4_4_ + 0xc);
      if (pcVar1 == (code *)0x0) {
        pcVar1 = *(code **)(uStack_3c._4_4_ + 8);
        func_0x0066c610(&uStack_a8);
        iStack_14._0_1_ = 9;
        uStack_30 = CONCAT44(uStack_30._4_4_,&uStack_ad);
        if (*(char *)(*(int *)unaff_FS_OFFSET[0xb] + 0x18) == '\0') {
          func_0x008abb44();
        }
        puVar2 = (undefined4 *)func_0x0065c120(puStack_ac,4);
        uStack_30 = CONCAT44(puVar2,(undefined4)uStack_30);
        uStack_28 = 0;
        iStack_14._0_1_ = 10;
        puStack_b4 = puVar2;
        func_0x0066c610(auStack_120);
        *puVar2 = FUN_00675600;
        uStack_30 = uStack_30 & 0xffffffff;
        iStack_14._0_1_ = 9;
        puStack_ac = puVar2;
        func_0x0066e910();
        puStack_b8 = (undefined4 *)auStack_120;
        iStack_14._0_1_ = 8;
        func_0x006529c0();
        iStack_14._0_1_ = 0xe;
        _guard_check_icall();
        (*pcVar1)();
        iStack_14._0_1_ = 8;
        if (puStack_ac != (undefined4 *)0x0) {
          pcVar1 = (code *)*puStack_ac;
          _guard_check_icall(puStack_ac,0);
          (*pcVar1)();
        }
      }
      else {
        _guard_check_icall(&uStack_4c,FUN_00670400,&uStack_a8);
        (*pcVar1)();
      }
    }
  }
  puStack_b8 = &uStack_a8;
  iStack_14._0_1_ = 4;
  func_0x006529c0();
  puStack_b4 = &uStack_4c;
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  if ((int)uStack_3c != 0) {
    pcVar1 = (code *)*puStack_40;
    _guard_check_icall(&uStack_4c);
    (*pcVar1)();
  }
  iStack_14 = 0xffffffff;
  func_0x00666010();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00666dd0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [72];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee6b76;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_74;
  func_0x00658460(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0x48);
  uStack_24 = *(undefined4 *)(param_1 + 0x50);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00669a90(auStack_74);
  uStack_14 = 0;
  puStack_20 = auStack_74;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x00651b30();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00666de0(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_74 [72];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee6b76;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_74;
  func_0x00658460(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0x48);
  uStack_24 = *(undefined4 *)(param_1 + 0x50);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x00669890(auStack_74);
  uStack_14 = 0;
  puStack_20 = auStack_74;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x00651b30();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00666df0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [128];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee695d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_b4,0,0x9c);
  func_0x00662ee0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x84);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x00664e40();
  if (param_2 != '\0') {
    func_0x00665ca0();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006577f0();
  iStack_8 = 0xffffffff;
  func_0x00664e40();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00666f10(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [128];
  undefined1 auStack_34 [12];
  undefined4 *puStack_28;
  int iStack_24;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee695d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar2;
  memset(auStack_b4,0,0x9c);
  func_0x00662fd0(param_1 + 4,uVar2);
  iStack_8._0_1_ = 1;
  func_0x0064b5b0(param_1 + 0x84);
  iStack_8 = CONCAT31(iStack_8._1_3_,4);
  func_0x00664e40();
  if (param_2 != '\0') {
    func_0x00665c00();
  }
  iStack_8._1_3_ = (uint3)((uint)iStack_8 >> 8);
  iStack_8._0_1_ = 5;
  if (iStack_24 != 0) {
    pcVar1 = (code *)*puStack_28;
    _guard_check_icall(auStack_34);
    (*pcVar1)();
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x006577f0();
  iStack_8 = 0xffffffff;
  func_0x00664e40();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00667030(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [48];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee69b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_54,0,0x3c);
  func_0x0065d0b0(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x34);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00664d70();
  if (param_2 != '\0') {
    func_0x00652e50(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x00664d70();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00667110(int param_1,char param_2)

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
  
  puStack_c = &DAT_00ee6a05;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x40);
  func_0x0065d0b0(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x3c);
  uStack_28 = *(undefined8 *)(param_1 + 0x34);
  uStack_1c = *(undefined4 *)(param_1 + 0x40);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00664ca0();
  if (param_2 != '\0') {
    func_0x00652e50(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x00664ca0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006671f0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_54 [48];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee69b5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_54,0,0x3c);
  func_0x0065d000(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x34);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00664d70();
  if (param_2 != '\0') {
    func_0x00652ab0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x00664d70();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006672d0(int param_1,char param_2)

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
  
  puStack_c = &DAT_00ee6a05;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x40);
  func_0x0065d000(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x3c);
  uStack_28 = *(undefined8 *)(param_1 + 0x34);
  uStack_1c = *(undefined4 *)(param_1 + 0x40);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00664ca0();
  if (param_2 != '\0') {
    func_0x00652ab0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x00664ca0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006673b0(int param_1)

{
  if (*(int *)(param_1 + 0x44) != -1) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  func_0x0063ec80();
  func_0x00654b60(param_1,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x54));
  return;
}



void __fastcall FUN_00667400(undefined4 param_1)

{
  func_0x00652700(param_1);
  return;
}



void __fastcall FUN_00667410(undefined4 param_1)

{
  func_0x006526b0(param_1);
  return;
}



void FUN_00667de0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c8 [112];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee6d46;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0xa0,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xbc);
  iStack_8._0_1_ = 7;
  memset(auStack_c8,0,0x7c);
  func_0x00668360(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00667cf0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x0065e1f0(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x0066d9c0(auStack_c8);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x00651b30();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00667cf0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00668170(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [112];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee6ee6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xa4,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xc0);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115bd84;
  }
  memset(auStack_d8,0,0x80);
  func_0x00668360(param_2 + 0x34);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x00667f80();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0065e1f0(uStack_68,uStack_60,uStack_5c,0);
    }
    else {
      func_0x0066dbc0(auStack_d8);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x00651b30();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00667f80();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00669420(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee7394;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_88,0,0x70);
  func_0x00658460(param_1 + 4,uVar1);
  uStack_8._1_3_ = (undefined3)(uStack_8 >> 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x4c);
  uStack_38 = *(undefined4 *)(param_1 + 0x54);
  uStack_8._0_1_ = 2;
  func_0x0064b5b0(param_1 + 0x58);
  uStack_8 = CONCAT31(uStack_8._1_3_,5);
  func_0x00665f50();
  if (param_2 != '\0') {
    func_0x00667ae0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00662e50();
  uStack_8 = 0xffffffff;
  func_0x00665f50();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00669520(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee7394;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_88,0,0x70);
  func_0x00658460(param_1 + 4,uVar1);
  uStack_8._1_3_ = (undefined3)(uStack_8 >> 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x4c);
  uStack_38 = *(undefined4 *)(param_1 + 0x54);
  uStack_8._0_1_ = 2;
  func_0x0064b5b0(param_1 + 0x58);
  uStack_8 = CONCAT31(uStack_8._1_3_,5);
  func_0x00665f50();
  if (param_2 != '\0') {
    func_0x00667a20();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00662e50();
  uStack_8 = 0xffffffff;
  func_0x00665f50();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00669620(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_80 [68];
  int iStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ee73ed;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  func_0x00658460(param_1 + 4,uStack_24);
  uStack_30 = *(undefined4 *)(param_1 + 0x54);
  uStack_38 = *(undefined8 *)(param_1 + 0x4c);
  uStack_2c = *(undefined4 *)(param_1 + 0x58);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),2);
  func_0x00665e70();
  if (param_2 != '\0') {
    if (iStack_3c != -1) {
      iStack_3c = iStack_3c + 1;
    }
    func_0x0063ec80();
    func_0x00654b60(auStack_80,uStack_38,uStack_30,uStack_2c);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x00651b30();
  uStack_14 = 0xffffffff;
  func_0x00665e70();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00669730(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_5c [71];
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee744d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = &uStack_15;
  uStack_8 = 0;
  iVar2 = param_1 + 4;
  iVar4 = param_1;
  uStack_14 = uVar1;
  func_0x0065df30(iVar2,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x00665d90();
  if (param_2 != '\0') {
    func_0x00652700();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00651a90(iVar2,uVar1,auStack_5c,puVar3,param_1,iVar4);
  uStack_8 = 0xffffffff;
  func_0x00665d90();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006697e0(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_5c [71];
  undefined1 uStack_15;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee744d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  puVar3 = &uStack_15;
  uStack_8 = 0;
  iVar2 = param_1 + 4;
  iVar4 = param_1;
  uStack_14 = uVar1;
  func_0x0065df30(iVar2,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x00665d90();
  if (param_2 != '\0') {
    func_0x006526b0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00651a90(iVar2,uVar1,auStack_5c,puVar3,param_1,iVar4);
  uStack_8 = 0xffffffff;
  func_0x00665d90();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0066aa80(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [124];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee7918;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xb0,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xcc);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115be84;
  }
  func_0x00663980(param_2 + 0x34);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x0066a970();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0066c4f0();
    }
    else {
      func_0x00670650(auStack_e4);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065c300();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0066a970();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_0066b860(undefined4 param_1)

{
  func_0x006593b0(0,0,0,param_1);
  return;
}



void __fastcall FUN_0066b890(undefined4 param_1)

{
  func_0x00658ff0(0,0,0,param_1);
  return;
}



void FUN_0066d580(int param_1,char param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [4];
  undefined **ppuStack_94;
  char cStack_80;
  undefined1 auStack_7c [12];
  undefined4 *puStack_70;
  int iStack_6c;
  char cStack_50;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  int iStack_3c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee83fb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar3;
  memset(auStack_98,0,0x80);
  func_0x00662fd0(param_1 + 4,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0066a890();
  if (param_2 != '\0') {
    func_0x006593b0(0,0,0);
  }
  uVar3 = uStack_8;
  uStack_8 = uStack_8 & 0xffffff00;
  if (cStack_50 != '\0') {
    uStack_8._1_3_ = SUB43(uVar3,1);
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    if (iStack_3c != 0) {
      pcVar1 = (code *)*puStack_40;
      _guard_check_icall(auStack_4c);
      (*pcVar1)();
    }
    cStack_50 = '\0';
  }
  uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
  ppuStack_94 = boost::beast::stable_async_base<>::vftable;
  uStack_8._0_1_ = 0xc;
  func_0x00643330();
  uVar2 = uStack_8._1_3_;
  uStack_8 = (uint)uStack_8._1_3_ << 8;
  if (cStack_80 != '\0') {
    uStack_8 = CONCAT31(uVar2,0xd);
    if (iStack_6c != 0) {
      pcVar1 = (code *)*puStack_70;
      _guard_check_icall(auStack_7c);
      (*pcVar1)();
    }
    cStack_80 = '\0';
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0066a890();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0066d750(int param_1,char param_2)

{
  code *pcVar1;
  uint3 uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [4];
  undefined **ppuStack_94;
  char cStack_80;
  undefined1 auStack_7c [12];
  undefined4 *puStack_70;
  int iStack_6c;
  char cStack_50;
  undefined1 auStack_4c [12];
  undefined4 *puStack_40;
  int iStack_3c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00ee83fb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar3;
  memset(auStack_98,0,0x80);
  func_0x00662ee0(param_1 + 4,uVar3);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x0066a890();
  if (param_2 != '\0') {
    func_0x00658ff0(0,0,0);
  }
  uVar3 = uStack_8;
  uStack_8 = uStack_8 & 0xffffff00;
  if (cStack_50 != '\0') {
    uStack_8._1_3_ = SUB43(uVar3,1);
    uStack_8 = CONCAT31(uStack_8._1_3_,5);
    if (iStack_3c != 0) {
      pcVar1 = (code *)*puStack_40;
      _guard_check_icall(auStack_4c);
      (*pcVar1)();
    }
    cStack_50 = '\0';
  }
  uStack_8._1_3_ = (uint3)(uStack_8 >> 8);
  ppuStack_94 = boost::beast::stable_async_base<>::vftable;
  uStack_8._0_1_ = 0xc;
  func_0x00643330();
  uVar2 = uStack_8._1_3_;
  uStack_8 = (uint)uStack_8._1_3_ << 8;
  if (cStack_80 != '\0') {
    uStack_8 = CONCAT31(uVar2,0xd);
    if (iStack_6c != 0) {
      pcVar1 = (code *)*puStack_70;
      _guard_check_icall(auStack_7c);
      (*pcVar1)();
    }
    cStack_80 = '\0';
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0052b260();
  uStack_8 = 0xffffffff;
  func_0x0066a890();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0066d920(int param_1)

{
  if (*(int *)(param_1 + 0x44) != -1) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  func_0x0063ec80();
  func_0x00654b60(param_1,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),0);
  return;
}



void FUN_0066d970(int param_1)

{
  if (*(int *)(param_1 + 0x44) != -1) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  func_0x0063ec80();
  func_0x006544a0(param_1,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),0);
  return;
}



void FUN_006703d0(int param_1)

{
  func_0x0065c4d0(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x54),0);
  return;
}



void FUN_00670400(int param_1)

{
  func_0x0065c3c0(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x54),0);
  return;
}



void FUN_00670430(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [68];
  int iStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ee8cfd;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  func_0x00658460(param_1 + 4,uStack_24);
  uStack_34 = *(undefined8 *)(param_1 + 0x4c);
  uStack_2c = *(undefined4 *)(param_1 + 0x54);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x0066c7f0();
  if (param_2 != '\0') {
    if (iStack_38 != -1) {
      iStack_38 = iStack_38 + 1;
    }
    func_0x0063ec80();
    func_0x00654b60(auStack_7c,uStack_34,uStack_2c,0);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x00651b30();
  uStack_14 = 0xffffffff;
  func_0x0066c7f0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00670540(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_7c [68];
  int iStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00ee8cfd;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  func_0x00658460(param_1 + 4,uStack_24);
  uStack_34 = *(undefined8 *)(param_1 + 0x4c);
  uStack_2c = *(undefined4 *)(param_1 + 0x54);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x0066c7f0();
  if (param_2 != '\0') {
    if (iStack_38 != -1) {
      iStack_38 = iStack_38 + 1;
    }
    func_0x0063ec80();
    func_0x006544a0(auStack_7c,uStack_34,uStack_2c,0);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x00651b30();
  uStack_14 = 0xffffffff;
  func_0x0066c7f0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_006739c0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c52c;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00673b80(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c46c;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00673d40(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c3ec;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00673f00(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c4ac;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006740c0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c2b8;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00674280(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115be24;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00674440(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c45c;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006746d0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_11c [176];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00ee91c8;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xdc,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf8);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c48c;
  }
  memset(auStack_11c,0,0xc0);
  func_0x006645a0(param_2 + 0x2c);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x006738b0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067aa70(uStack_6c,uStack_64,uStack_60);
    }
    else {
      func_0x0067e1e0(auStack_11c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x006738b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00675530(int param_1,char param_2)

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
  
  puStack_c = &DAT_00ee9468;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_70,0,0x58);
  func_0x0066c6b0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0066e910();
  if (param_2 != '\0') {
    func_0x0065c4d0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x0066e910();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00675600(int param_1,char param_2)

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
  
  puStack_c = &DAT_00ee9468;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_70,0,0x58);
  func_0x0066c610(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0066e910();
  if (param_2 != '\0') {
    func_0x0065c3c0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x006529c0();
  uStack_8 = 0xffffffff;
  func_0x0066e910();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006756d0(int param_1)

{
  func_0x0065e1f0(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78),0xffffffff,0);
  return;
}



void FUN_00675700(int param_1)

{
  func_0x0065e1f0(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78),
                  *(undefined4 *)(param_1 + 0x7c),0);
  return;
}



void FUN_0067a850(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f0 [4];
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eeab12;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xb8,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xd4);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115bd74;
  }
  memset(auStack_f0,0,0x98);
  uStack_e8 = *(undefined8 *)(param_2 + 0x38);
  uStack_ec = *(undefined4 *)(param_2 + 0x34);
  uStack_e0 = *(undefined4 *)(param_2 + 0x40);
  uStack_dc = *(undefined4 *)(param_2 + 0x44);
  func_0x00668360(param_2 + 0x48);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 10;
  func_0x0067a730();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00667800(uStack_68,uStack_60,uStack_5c,0);
    }
    else {
      func_0x0067ee00(auStack_f0);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x00651b30();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0067a730();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067b050(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a8 [124];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeae2f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_a8;
  func_0x00663980(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0x7c);
  uStack_24 = *(undefined4 *)(param_1 + 0x84);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0067e9a0(auStack_a8);
  uStack_14 = 0;
  puStack_20 = auStack_a8;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x0065c300();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0067b060(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_a8 [124];
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeae2f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_a8;
  func_0x00663980(param_1,uVar1);
  uStack_2c = *(undefined8 *)(param_1 + 0x7c);
  uStack_24 = *(undefined4 *)(param_1 + 0x84);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0067e7a0(auStack_a8);
  uStack_14 = 0;
  puStack_20 = auStack_a8;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x0065c300();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0067b070(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [176];
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeadbf;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_e4;
  func_0x006645a0(param_1,uVar1);
  uStack_34 = *(undefined4 *)(param_1 + 0xb0);
  uStack_30 = *(undefined8 *)(param_1 + 0xb4);
  uStack_28 = *(undefined4 *)(param_1 + 0xbc);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0067e5b0(auStack_e4);
  uStack_14 = 0;
  puStack_20 = auStack_e4;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x0065e050();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0067b080(int param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_e4 [176];
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeadbf;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  uStack_8 = 0;
  puStack_18 = auStack_e4;
  func_0x006647b0(param_1,uVar1);
  uStack_34 = *(undefined4 *)(param_1 + 0xb0);
  uStack_30 = *(undefined8 *)(param_1 + 0xb4);
  uStack_28 = *(undefined4 *)(param_1 + 0xbc);
  uStack_8 = uStack_8 & 0xffffff00;
  uStack_14 = 1;
  func_0x0067e3c0(auStack_e4);
  uStack_14 = 0;
  puStack_20 = auStack_e4;
  uStack_8 = 0xffffffff;
  puStack_1c = puStack_20;
  func_0x0065e050();
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0067b090(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_94 [112];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeac3a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_94,0,0x7c);
  func_0x00668360(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0x74);
  uStack_1c = *(undefined4 *)(param_1 + 0x7c);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006737b0();
  if (param_2 != '\0') {
    func_0x0065e1f0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00651b30();
  uStack_8 = 0xffffffff;
  func_0x006737b0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067b1a0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_98 [112];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeacba;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_98,0,0x80);
  func_0x00668360(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0x7c);
  uStack_28 = *(undefined8 *)(param_1 + 0x74);
  uStack_1c = *(undefined4 *)(param_1 + 0x80);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x006736c0();
  if (param_2 != '\0') {
    func_0x0065e1f0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00651b30();
  uStack_8 = 0xffffffff;
  func_0x006736c0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067b2c0(int param_1)

{
  if (*(int *)(param_1 + 0x78) != -1) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  func_0x0063ec80();
  func_0x0065f230(param_1,*(undefined8 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x84),
                  *(undefined4 *)(param_1 + 0x88));
  return;
}



void __thiscall FUN_0067bb50(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)auStack_10;
  uVar2 = param_1[0xc];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar2;
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_0067c350(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_fc [164];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eeafb6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0xd4,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf0);
  iStack_8._0_1_ = 7;
  memset(auStack_fc,0,0xb0);
  func_0x0067c8d0(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x0067c260();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x00669ea0(uStack_58,uStack_50,0xffffffff,0);
    }
    else {
      func_0x00680c50(auStack_fc);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065c300();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0067c260();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067c6e0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_10c [164];
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eeb0d6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xd8,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0xf4);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115bd24;
  }
  memset(auStack_10c,0,0xb4);
  func_0x0067c8d0(param_2 + 0x34);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 9;
  func_0x0067c4f0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00669ea0(uStack_68,uStack_60,uStack_5c,0);
    }
    else {
      func_0x00680e40(auStack_10c);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065c300();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x0067c4f0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067dac0(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [168];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeb60b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_bc,0,0xa4);
  func_0x00673330(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0067a660();
  if (param_2 != '\0') {
    func_0x0067c060();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0066e680();
  uStack_8 = 0xffffffff;
  func_0x0067a660();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067db90(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [168];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeb60b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_bc,0,0xa4);
  func_0x00673330(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0067a660();
  if (param_2 != '\0') {
    func_0x0067bf90();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0066e680();
  uStack_8 = 0xffffffff;
  func_0x0067a660();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067dc60(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [224];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeb65b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_f4,0,0xdc);
  func_0x00673290(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0067a590();
  if (param_2 != '\0') {
    func_0x0067beb0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0066e710();
  uStack_8 = 0xffffffff;
  func_0x0067a590();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067dd30(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f4 [224];
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eeb65b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_f4,0,0xdc);
  func_0x006731f0(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x0067a590();
  if (param_2 != '\0') {
    func_0x0067bdd0();
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0066e710();
  uStack_8 = 0xffffffff;
  func_0x0067a590();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_0067de00(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_b4 [120];
  int iStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00eeb6cc;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  func_0x00663980(param_1 + 4,uStack_24);
  uStack_30 = *(undefined4 *)(param_1 + 0x88);
  uStack_38 = *(undefined8 *)(param_1 + 0x80);
  uStack_2c = *(undefined4 *)(param_1 + 0x8c);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),2);
  func_0x0067a4b0();
  if (param_2 != '\0') {
    if (iStack_3c != -1) {
      iStack_3c = iStack_3c + 1;
    }
    func_0x0063ec80();
    func_0x0065f230(auStack_b4,uStack_38,uStack_30,uStack_2c);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x0065c300();
  uStack_14 = 0xffffffff;
  func_0x0067a4b0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_0067eba0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00eeb8e0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar1 = param_1[5];
  *param_1 = boost::asio::detail::cancellation_handler<>::vftable;
  *param_2 = param_1;
  param_2[1] = uVar1;
  uStack_8 = 0;
  func_0x0063eba0(uVar2);
  *param_1 = boost::asio::detail::cancellation_handler_base::vftable;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_0067ec20(int param_1,uint param_2)

{
  code *pcVar1;
  
  if ((*(uint *)(param_1 + 0x10) & param_2) != 0) {
    param_2 = param_2 & 1;
    *(uint *)(param_1 + 8) = param_2;
    if ((param_2 != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
      pcVar1 = *(code **)**(undefined4 **)(param_1 + 4);
      _guard_check_icall(param_2);
      (*pcVar1)();
    }
  }
  return;
}



void FUN_00680b20(int param_1)

{
  func_0x0067aa70(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8),
                  *(undefined4 *)(param_1 + 0xbc));
  return;
}



void FUN_00680b50(int param_1)

{
  func_0x0067a3e0(*(undefined8 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xbc),
                  *(undefined4 *)(param_1 + 0xb0));
  return;
}



void FUN_00680b80(int param_1)

{
  func_0x0067aa70(*(undefined8 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xbc),
                  *(undefined4 *)(param_1 + 0xb0));
  return;
}



void FUN_00680bb0(int param_1)

{
  if (*(int *)(param_1 + 0x78) != -1) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  func_0x0063ec80();
  func_0x0065f230(param_1,*(undefined8 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x84),0);
  return;
}



void FUN_00680c00(int param_1)

{
  if (*(int *)(param_1 + 0x78) != -1) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  }
  func_0x0063ec80();
  func_0x0065eac0(param_1,*(undefined8 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x84),0);
  return;
}



void FUN_00681fb0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x00672d90(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x00685170(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00682340(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c268;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00672d90(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x00685360(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00682530(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x00672940(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x00685550(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006826d0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c5dc;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00672940(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x00685740(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006828c0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006724f0(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x00685930(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00682a60(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c278;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006724f0(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x00685b20(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00682c50(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006720a0(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x00685d10(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00682df0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115bff8;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006720a0(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x00685f00(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00682fe0(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x00671c50(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x006860f0(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00683180(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c298;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00671c50(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x006862e0(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00683370(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x00671800(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x006864d0(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00683510(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c61c;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00671800(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x006866c0(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00683700(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x006713b0(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x006868b0(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006838a0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c058;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x006713b0(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x00686aa0(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00683a90(int param_1,int param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_134 [216];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_4c [16];
  int iStack_3c;
  int iStack_20;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec0f6;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_4c,0,0x38);
  func_0x0064b5b0(param_2 + 0x108,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x124);
  iStack_8._0_1_ = 7;
  memset(auStack_134,0,0xe4);
  func_0x00683e20(param_2 + 0x30);
  uStack_5c = *(undefined8 *)(param_2 + 0x20);
  uStack_54 = *(undefined4 *)(param_2 + 0x28);
  iStack_8._0_1_ = 9;
  func_0x00681ec0();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_3c == 0) && (iStack_20 == 0)) {
      func_0x00670f60(uStack_5c,uStack_54,0xffffffff,0);
    }
    else {
      func_0x00686c90(auStack_134);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00681ec0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00683c30(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_144 [216];
  undefined8 uStack_6c;
  uint uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec216;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0x10c,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x128);
  iStack_8._0_1_ = 7;
  func_0x0063fb90(*(int *)(param_2 + 0x30) == 0,&uStack_20,param_4);
  uStack_64 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_64 = uStack_18 & 1 | 0x115c0e8;
  }
  memset(auStack_144,0,0xe8);
  func_0x00683e20(param_2 + 0x34);
  uStack_6c = uStack_20;
  uStack_60 = param_4;
  iStack_8._0_1_ = 9;
  func_0x00682150();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,10);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x00670f60(uStack_6c,uStack_64,uStack_60,0);
    }
    else {
      func_0x00686e80(auStack_144);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065e050();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00682150();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00683f10(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [176];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eec2ec;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_d8,0,0xc0);
  func_0x006645a0(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xbc);
  uStack_28 = *(undefined8 *)(param_1 + 0xb4);
  uStack_1c = *(undefined4 *)(param_1 + 0xc0);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x0067f290();
  if (param_2 != '\0') {
    func_0x0067aa70(uStack_28,uStack_20,uStack_1c);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0067f290();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00684030(int param_1)

{
  func_0x00667800(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),
                  *(undefined4 *)(param_1 + 0x94),0);
  return;
}



void FUN_00684060(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [176];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eec372;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_d8,0,0xc0);
  func_0x006647b0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0xb4);
  uStack_24 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1c = *(undefined4 *)(param_1 + 0xc0);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0067f1a0();
  if (param_2 != '\0') {
    func_0x0067a3e0(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0067f1a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00684190(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d8 [176];
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eec372;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_d8,0,0xc0);
  func_0x006645a0(param_1 + 4,uVar1);
  uStack_28 = *(undefined4 *)(param_1 + 0xb4);
  uStack_24 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1c = *(undefined4 *)(param_1 + 0xc0);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),3);
  func_0x0067f1a0();
  if (param_2 != '\0') {
    func_0x0067aa70(uStack_24,uStack_1c,uStack_28);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065e050();
  uStack_8 = 0xffffffff;
  func_0x0067f1a0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_006842c0(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_b0 [120];
  int iStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00eec3f2;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  func_0x00663980(param_1 + 4,uStack_24);
  uStack_34 = *(undefined8 *)(param_1 + 0x80);
  uStack_2c = *(undefined4 *)(param_1 + 0x88);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x0067f0b0();
  if (param_2 != '\0') {
    if (iStack_38 != -1) {
      iStack_38 = iStack_38 + 1;
    }
    func_0x0063ec80();
    func_0x0065f230(auStack_b0,uStack_34,uStack_2c,0);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x0065c300();
  uStack_14 = 0xffffffff;
  func_0x0067f0b0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00684410(int param_1,char param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 auStack_b0 [120];
  int iStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  uint uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  uint uStack_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_00eec3f2;
  iStack_1c = *unaff_FS_OFFSET;
  uStack_24 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  uStack_14 = 0;
  func_0x00663980(param_1 + 4,uStack_24);
  uStack_34 = *(undefined8 *)(param_1 + 0x80);
  uStack_2c = *(undefined4 *)(param_1 + 0x88);
  uStack_14 = CONCAT31((int3)(uStack_14 >> 8),3);
  func_0x0067f0b0();
  if (param_2 != '\0') {
    if (iStack_38 != -1) {
      iStack_38 = iStack_38 + 1;
    }
    func_0x0063ec80();
    func_0x0065eac0(auStack_b0,uStack_34,uStack_2c,0);
  }
  uStack_14 = uStack_14 & 0xffffff00;
  func_0x0065c300();
  uStack_14 = 0xffffffff;
  func_0x0067f0b0();
  *unaff_FS_OFFSET = iStack_1c;
  FUN_008ab370();
  return;
}



void FUN_00684760(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_b0 [136];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eec4bd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_b0,0,0x98);
  func_0x0067f000(param_1 + 4,uVar1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  func_0x00681dc0();
  if (param_2 != '\0') {
    func_0x00667800(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x00651b30();
  uStack_8 = 0xffffffff;
  func_0x00681dc0();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00684870(int param_1)

{
  func_0x00669ea0(*(undefined8 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xac),0xffffffff,0);
  return;
}



void FUN_006848a0(int param_1)

{
  func_0x00669ea0(*(undefined8 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xac),
                  *(undefined4 *)(param_1 + 0xb0),0);
  return;
}



void FUN_00684c90(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_124 [4];
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_2c;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  puStack_c = &DAT_00eec732;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_20 = *param_3;
  uStack_18 = *(uint *)(param_3 + 1);
  iStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_58,0,0x38);
  func_0x0064b5b0(param_2 + 0xec,uVar1);
  iStack_8._0_1_ = 3;
  func_0x0064b5b0(param_2 + 0x108);
  iStack_8._0_1_ = 7;
  func_0x0063fdd0();
  uStack_60 = uStack_18;
  if ((uStack_18 != 0) && (uStack_18 != 1)) {
    uStack_60 = uStack_18 & 1 | 0x115bdb4;
  }
  memset(auStack_124,0,0xcc);
  uStack_11c = *(undefined8 *)(param_2 + 0x38);
  uStack_120 = *(undefined4 *)(param_2 + 0x34);
  uStack_114 = *(undefined4 *)(param_2 + 0x40);
  uStack_110 = *(undefined4 *)(param_2 + 0x44);
  func_0x0067c8d0(param_2 + 0x48);
  uStack_68 = uStack_20;
  uStack_5c = param_4;
  iStack_8._0_1_ = 10;
  func_0x00684b70();
  if (param_1 != 0) {
    iStack_8 = CONCAT31(iStack_8._1_3_,0xb);
    if ((iStack_48 == 0) && (iStack_2c == 0)) {
      func_0x0067bbb0(uStack_68,uStack_60,uStack_5c,0);
    }
    else {
      func_0x006882a0(auStack_124);
    }
  }
  iStack_8._0_1_ = 7;
  func_0x0065c300();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  func_0x0065e600();
  iStack_8 = 0xffffffff;
  func_0x00684b70();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00684f20(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_c8 [164];
  undefined8 uStack_24;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eec7fa;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_c8,0,0xb0);
  func_0x0067c8d0(param_1 + 4,uVar1);
  uStack_24 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1c = *(undefined4 *)(param_1 + 0xb0);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00684670();
  if (param_2 != '\0') {
    func_0x00669ea0(uStack_24,uStack_1c,0xffffffff,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065c300();
  uStack_8 = 0xffffffff;
  func_0x00684670();
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00685040(int param_1,char param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_cc [164];
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  uint uStack_8;
  
  puStack_c = &DAT_00eec87a;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  uStack_14 = uVar1;
  memset(auStack_cc,0,0xb4);
  func_0x0067c8d0(param_1 + 4,uVar1);
  uStack_20 = *(undefined4 *)(param_1 + 0xb0);
  uStack_28 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1c = *(undefined4 *)(param_1 + 0xb4);
  uStack_8 = CONCAT31((int3)(uStack_8 >> 8),2);
  func_0x00684580();
  if (param_2 != '\0') {
    func_0x00669ea0(uStack_28,uStack_20,uStack_1c,0);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  func_0x0065c300();
  uStack_8 = 0xffffffff;
  func_0x00684580();
  *unaff_FS_OFFSET = iStack_10;
