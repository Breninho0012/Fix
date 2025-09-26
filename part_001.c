  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71cd0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452340(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71d20);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004523b0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71d40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452490(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71d90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452500(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71db0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004525e0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71e00);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452650(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71e20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452730(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71e70);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004527a0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71e90);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452880(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71ee0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004528f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71f00);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004529d0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71f50);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452a40(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71f70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452b20(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f71fc0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452b90(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f71fe0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452c70(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72030);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452ce0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ece30f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_012bbf90 = func_0x008ab47d(0x10,uVar1);
  *(int *)DAT_012bbf90 = DAT_012bbf90;
  *(int *)(DAT_012bbf90 + 4) = DAT_012bbf90;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f72050);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452d40(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f720d0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00452db0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ece84f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f72130,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452e00(void)

{
  func_0x008ab7fd(FUN_00f72190);
  return;
}



void FUN_00452e10(void)

{
  func_0x008ab7fd(FUN_00f72180);
  return;
}



void FUN_00452e20(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f721a0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00452e90(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ecf539;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145dab0 = func_0x008ab47d(0x30,uVar1);
  *(int *)DAT_0145dab0 = DAT_0145dab0;
  *(int *)(DAT_0145dab0 + 4) = DAT_0145dab0;
  uStack_8 = 0;
  DAT_0145dab8 = 0;
  DAT_0145dabc = 0;
  DAT_0145dab8 = func_0x008ab47d(0x10);
  *(int *)DAT_0145dab8 = DAT_0145dab8;
  *(int *)(DAT_0145dab8 + 4) = DAT_0145dab8;
  _DAT_0145dacc = 0;
  uRam0145dad0 = 0;
  uRam0145dad4 = 0;
  uRam0145dad8 = 0;
  _DAT_0145dae4 = 0;
  _DAT_0145dadc = 0;
  _DAT_0145dac4 = 0;
  _DAT_0145dac8 = 0;
  _DAT_0145dae8 = 0xffffffff;
  _DAT_0145dac0 = 2;
  DAT_0145daec = 0;
  _DAT_0145daf0 = 0;
  _DAT_0145daf4 = 0;
  _DAT_0145daf8 = 0;
  uRam0145dafc = 0;
  uRam0145db00 = 0;
  uRam0145db04 = 0;
  DAT_0145db18 = 0;
  _DAT_0145db08 = 0;
  uRam0145db0c = 0;
  uRam0145db10 = 0;
  uRam0145db14 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f721c0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00452fc0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72240);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453030(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72260);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004530a0(void)

{
  undefined8 uStack_18;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&uStack_18;
  DAT_0145db20 = 0;
  LOCK();
  UNLOCK();
  DAT_0145db28 = 0;
  LOCK();
  uStack_18 = 1;
  UNLOCK();
  LOCK();
  DAT_0145db30 = 0;
  UNLOCK();
  FUN_008ab370();
  return;
}



void FUN_00453110(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72280);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453180(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f722a0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004531f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ecfbe9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  DAT_0145db40 = 0;
  _DAT_0145db44 = 0;
  DAT_0145db40 = func_0x008ab47d(0x10,uVar1);
  *(int *)DAT_0145db40 = DAT_0145db40;
  *(int *)(DAT_0145db40 + 4) = DAT_0145db40;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f722c0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00453270(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72360);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004532e0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72380);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453350(void)

{
  func_0x005e4000();
  func_0x008ab7fd(FUN_00f723a0);
  return;
}



void FUN_00453370(void)

{
  func_0x005e4000();
  func_0x008ab7fd(FUN_00f723b0);
  return;
}



void FUN_00453390(void)

{
  DAT_0145d748 = func_0x00bbb310();
  return;
}



void FUN_004533a0(void)

{
  DAT_0145d818 = func_0x00bbb310();
  return;
}



void FUN_004533b0(void)

{
  DAT_0145d128 = func_0x00bbb310();
  return;
}



void FUN_004533c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f723c0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453430(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f723e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004534a0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72400);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00453580(void)

{
  func_0x005e76e0();
  func_0x008ab7fd(FUN_00f72450);
  return;
}



void FUN_004535a0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72460);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00453610(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed1977;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145dce0 = func_0x008ab47d(0x28,uVar1);
  *(int *)DAT_0145dce0 = DAT_0145dce0;
  *(int *)(DAT_0145dce0 + 4) = DAT_0145dce0;
  DAT_0145dd0c = 0;
  DAT_0145dd10 = &UNK_01142540;
  _DAT_0145dd20 = &PTR_0112e74c;
  _DAT_0145dd90 = 0;
  _DAT_0145dd94 = 0;
  _DAT_0145dd98 = 0;
  _DAT_0145dd9c = 0;
  _DAT_0145dda0 = 0;
  _DAT_0145dda8 = 0;
  _DAT_0145ddb0 = 0;
  _DAT_0145ddb4 = 0;
  _DAT_0145ddb8 = 0;
  DAT_0145dd88 = std::basic_ios<>::vftable;
  _DAT_0145ddc0 = 0;
  _DAT_0145ddc4 = 0;
  DAT_0145ddc8 = 0;
  uStack_8 = 4;
  func_0x0046a380(&DAT_0145dd28,0);
  uStack_8 = 5;
  *(undefined ***)((int)&DAT_0145dd10 + *(int *)(DAT_0145dd10 + 4)) = std::basic_fstream<>::vftable;
  *(int *)((int)&DAT_0145dd0c + *(int *)(DAT_0145dd10 + 4)) = *(int *)(DAT_0145dd10 + 4) + -0x78;
  _DAT_0145dd28 = std::basic_streambuf<>::vftable;
  _DAT_0145dd2c = 0;
  _DAT_0145dd30 = 0;
  uRam0145dd34 = 0;
  uRam0145dd38 = 0;
  _DAT_0145dd3c = 0;
  uRam0145dd40 = 0;
  uRam0145dd44 = 0;
  uRam0145dd48 = 0;
  _DAT_0145dd4c = 0;
  uRam0145dd50 = 0;
  uRam0145dd54 = 0;
  uRam0145dd58 = 0;
  puVar2 = (undefined8 *)func_0x008ab47d(8);
  *puVar2 = 0;
  uVar3 = func_0x00e70415(1);
  *(undefined4 *)((int)puVar2 + 4) = uVar3;
  _DAT_0145dd5c = puVar2;
  func_0x0046adc0();
  uStack_8 = CONCAT31(uStack_8._1_3_,6);
  _DAT_0145dd28 = std::basic_filebuf<>::vftable;
  func_0x005a8420(0,0);
  uRam0145de04 = 0;
  uRam0145de08 = 0;
  uRam0145de0c = 0;
  _DAT_0145dddc = 0;
  uRam0145dde0 = 0;
  uRam0145dde4 = 0;
  uRam0145dde8 = 0;
  _DAT_0145ddf4 = 0;
  _DAT_0145ddec = 0;
  _DAT_0145ddd4 = 0;
  _DAT_0145ddd8 = 0;
  _DAT_0145ddf8 = 0xffffffff;
  _DAT_0145ddd0 = 0x102;
  DAT_0145ddfc = 0;
  _DAT_0145de10 = 0;
  DAT_0145de14 = 0xf;
  DAT_0145de00 = 0;
  DAT_0145de18 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f72480);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004538c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72580);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453930(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f725e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_004539a0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uVar2;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed2771;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uVar2 = 8;
  DAT_0145de20 = (undefined4 *)func_0x008ab47d(8,uVar1,param_1);
  DAT_0145de20[1] = 0;
  *DAT_0145de20 = &DAT_0145de20;
  uStack_8 = 0;
  DAT_0145de34 = 0;
  _DAT_0145de38 = 0;
  DAT_0145de34 = func_0x008ab47d(0x1c,uVar2,uVar1,&DAT_0145de34);
  *(int *)DAT_0145de34 = DAT_0145de34;
  *(int *)(DAT_0145de34 + 4) = DAT_0145de34;
  *(int *)(DAT_0145de34 + 8) = DAT_0145de34;
  *(undefined2 *)(DAT_0145de34 + 0xc) = 0x101;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f72600);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00453a40(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f726a0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453ab0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed387f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f726c0,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00453b00(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed38dd;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uRam012bbfb4 = 0;
  uRam012bbfb8 = 0;
  uRam012bbfbc = 0;
  _DAT_012bbfc0 = 0;
  DAT_012bbfc4 = 7;
  DAT_012bbfb0 = 0;
  _DAT_012bbfc8 = 0;
  _DAT_012bbfcc = 0;
  DAT_012bbfd0 = 0;
  uRam012bbfdc = 0;
  uRam012bbfe0 = 0;
  uRam012bbfe4 = 0;
  DAT_012bbfd4 = 0;
  _DAT_012bbfe8 = 0;
  DAT_012bbfec = 0xf;
  DAT_012bbfd8 = 0;
  _DAT_012bbff0 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f72710,uVar1,&DAT_012bbfb0,&DAT_012bbf98);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00453bf0(void)

{
  func_0x0046bc40("init.lua",8);
  func_0x008ab7fd(FUN_00f72870);
  return;
}



void FUN_00453c10(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f729c0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453c80(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f729e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00453cf0(void)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  memset(&uStack_40,0,0x30);
  _DAT_0145de60 = uStack_40;
  _DAT_0145de64 = uStack_3c;
  _DAT_0145de68 = uStack_38;
  _DAT_0145de6c = uStack_34;
  _DAT_0145de70 = uStack_30;
  _DAT_0145de74 = uStack_2c;
  uRam0145de78 = uStack_28;
  _DAT_0145de7c = uStack_24;
  _DAT_0145de80 = uStack_20;
  uRam0145de84 = uStack_1c;
  _DAT_0145de88 = uStack_18;
  uRam0145de8c = uStack_14;
  return;
}



void FUN_00453d50(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72a00);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453dc0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72a40);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453e30(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72a60);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453ea0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72a80);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00453f80(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72ad0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00453ff0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72af0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __fastcall FUN_004540d0(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed764f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab84c(&DAT_0145dec0,8,2,FUN_0046f300,FUN_00468340,uVar1,param_1);
  uStack_8 = 0;
  DAT_0145ded0 = 0;
  DAT_0145ded4 = 0;
  DAT_0145ded0 = func_0x008ab47d(0x20);
  *(int *)DAT_0145ded0 = DAT_0145ded0;
  *(int *)(DAT_0145ded0 + 4) = DAT_0145ded0;
  *(int *)(DAT_0145ded0 + 8) = DAT_0145ded0;
  *(undefined2 *)(DAT_0145ded0 + 0xc) = 0x101;
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x008ab84c(&DAT_0145ded8,8,0xe,FUN_00616a80,FUN_005dadd0);
  DAT_0145df4c = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f72b40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004541a0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72bc0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454210(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72be0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004542f0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72cb0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454360(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72cd0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00454440(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72d20);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004544b0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72d40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00454590(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72d90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454600(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72db0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004546e0(void)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8._0_1_ = 0xff;
  uStack_8._1_3_ = 0xffffff;
  puStack_c = &DAT_00ed7eeb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x008ab47d(0x80023,uVar1);
  if (iVar2 != 0) {
    pvVar3 = (void *)(iVar2 + 0x23U & 0xffffffe0);
    *(int *)((int)pvVar3 + -4) = iVar2;
    DAT_0145dfd8 = (int)pvVar3 + 0x80000;
    uStack_8 = 0;
    DAT_0145dfd0 = pvVar3;
    _DAT_0145dfd4 = pvVar3;
    memset(pvVar3,0,0x80000);
    _DAT_0145dfd4 = (void *)((int)pvVar3 + 0x80000);
    uStack_8._0_1_ = 1;
    uStack_8._1_3_ = 0;
    DAT_0145dfdc = (void *)0x0;
    _DAT_0145dfe0 = (void *)0x0;
    DAT_0145dfe4 = 0;
    iVar2 = func_0x008ab47d(0x80023);
    if (iVar2 != 0) {
      pvVar3 = (void *)(iVar2 + 0x23U & 0xffffffe0);
      *(int *)((int)pvVar3 + -4) = iVar2;
      DAT_0145dfe4 = (int)pvVar3 + 0x80000;
      uStack_8._0_1_ = 2;
      DAT_0145dfdc = pvVar3;
      _DAT_0145dfe0 = pvVar3;
      memset(pvVar3,0,0x80000);
      _DAT_0145dfe0 = (void *)((int)pvVar3 + 0x80000);
      uStack_8._0_1_ = 3;
      DAT_0145dfe8 = (void *)0x0;
      _DAT_0145dfec = (void *)0x0;
      DAT_0145dff0 = 0;
      iVar2 = func_0x008ab47d(0x100023);
      if (iVar2 != 0) {
        pvVar3 = (void *)(iVar2 + 0x23U & 0xffffffe0);
        *(int *)((int)pvVar3 + -4) = iVar2;
        DAT_0145dff0 = (int)pvVar3 + 0x100000;
        uStack_8 = CONCAT31(uStack_8._1_3_,4);
        DAT_0145dfe8 = pvVar3;
        _DAT_0145dfec = pvVar3;
        memset(pvVar3,0,0x100000);
        _DAT_0145dfec = (void *)((int)pvVar3 + 0x100000);
        DAT_0145dff4 = 0;
        DAT_0145dff8 = 0;
        uStack_8 = 0xffffffff;
        func_0x008ab7fd(FUN_00f72e00);
        *unaff_FS_OFFSET = iStack_10;
        return;
      }
    }
  }
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}



void FUN_004548c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f72f00);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454930(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f72f20);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00454a10(void)

{
  func_0x008ab7fd(FUN_00f72f70);
  return;
}



void FUN_00454a20(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73000);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454a90(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73020);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00454b70(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed8329;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145e04c = 0;
  DAT_0145e050 = (int *)0x0;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  puVar7 = (undefined4 *)func_0x0061cf40(uVar6);
  DAT_0145e04c = *puVar7;
  uVar3 = puVar7[1];
  *puVar7 = 0;
  puVar7[1] = 0;
  piVar2 = DAT_0145e050;
  uStack_8._0_1_ = 2;
  if (DAT_0145e050 != (int *)0x0) {
    LOCK();
    piVar1 = DAT_0145e050 + 1;
    iVar5 = *piVar1 + -1;
    DAT_0145e050 = (int *)uVar3;
    *piVar1 = iVar5;
    UNLOCK();
    uVar3 = DAT_0145e050;
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar2;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      iVar5 = piVar2[2] + -1;
      piVar2[2] = iVar5;
      UNLOCK();
      uVar3 = DAT_0145e050;
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar4)();
        uVar3 = DAT_0145e050;
      }
    }
  }
  DAT_0145e050 = (int *)uVar3;
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (piStack_1c != (int *)0x0) {
    LOCK();
    iVar5 = piStack_1c[1] + -1;
    piStack_1c[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piStack_1c;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      piVar2 = piStack_1c + 2;
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piStack_1c + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73070);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00454cb0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73150);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454d20(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73170);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00454e00(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f731c0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454e70(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed8b23;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145e0a8 = 0;
  DAT_0145e0ac = 0;
  DAT_0145e0b0 = 0;
  DAT_0145e0b4 = 0;
  DAT_0145e0b8 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f731e0,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00454f00(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73300);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00454f70(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73320);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00455050(void)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  int *unaff_FS_OFFSET;
  uint auStack_40 [13];
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed8d17;
  auStack_40[0xc] = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)(auStack_40 + 0xc);
  auStack_40[10] = 0;
  auStack_40[0xb] = 0;
  auStack_40[6] = 0;
  auStack_40[7] = 0;
  auStack_40[8] = 0;
  auStack_40[9] = 0;
  func_0x0046bc40("Total frame time",0x10,uVar1);
  uStack_8 = 0;
  func_0x0061f0d0(auStack_40 + 6,extraout_ECX);
  uStack_8._0_1_ = 2;
  if (0xf < auStack_40[0xb]) {
    func_0x0046b1f0(auStack_40 + 6,auStack_40[6],auStack_40[0xb]);
  }
  auStack_40[10] = 0;
  auStack_40[0xb] = 0xf;
  auStack_40[6] = auStack_40[6] & 0xffffff00;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  auStack_40[4] = 0;
  auStack_40[5] = 0;
  func_0x0046bc40("CPU render time",0xf);
  uStack_8._0_1_ = 3;
  func_0x0061f0d0(auStack_40,extraout_ECX_00);
  uStack_8._0_1_ = 5;
  if (0xf < auStack_40[5]) {
    func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
  }
  auStack_40[4] = 0;
  auStack_40[5] = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  auStack_40[6] = 0;
  auStack_40[7] = 0;
  auStack_40[8] = 0;
  auStack_40[9] = 0;
  auStack_40[10] = 0;
  auStack_40[0xb] = 0;
  func_0x0046bc40("GPU calls",9);
  uStack_8._0_1_ = 6;
  func_0x0061f0d0(auStack_40 + 6,extraout_ECX_01);
  uStack_8._0_1_ = 8;
  if (0xf < auStack_40[0xb]) {
    func_0x0046b1f0(auStack_40 + 6,auStack_40[6],auStack_40[0xb]);
  }
  auStack_40[10] = 0;
  auStack_40[0xb] = 0xf;
  auStack_40[6] = auStack_40[6] & 0xffffff00;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  auStack_40[4] = 0;
  auStack_40[5] = 0;
  func_0x0046bc40("GPU draws",9);
  uStack_8._0_1_ = 9;
  func_0x0061f0d0(auStack_40,extraout_ECX_02);
  uStack_8._0_1_ = 0xb;
  if (0xf < auStack_40[5]) {
    func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
  }
  auStack_40[4] = 0;
  auStack_40[5] = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  auStack_40[6] = 0;
  auStack_40[7] = 0;
  auStack_40[8] = 0;
  auStack_40[9] = 0;
  auStack_40[10] = 0;
  auStack_40[0xb] = 0;
  func_0x0046bc40("Processing poll time",0x14);
  uStack_8._0_1_ = 0xc;
  func_0x0061f0d0(auStack_40 + 6,extraout_ECX_03);
  uStack_8._0_1_ = 0xe;
  if (0xf < auStack_40[0xb]) {
    func_0x0046b1f0(auStack_40 + 6,auStack_40[6],auStack_40[0xb]);
  }
  auStack_40[10] = 0;
  auStack_40[0xb] = 0xf;
  auStack_40[6] = auStack_40[6] & 0xffffff00;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  auStack_40[4] = 0;
  auStack_40[5] = 0;
  func_0x0046bc40("Graphics poll time",0x12);
  uStack_8._0_1_ = 0xf;
  func_0x0061f0d0(auStack_40,extraout_ECX_04);
  uStack_8._0_1_ = 0x11;
  if (0xf < auStack_40[5]) {
    func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
  }
  auStack_40[4] = 0;
  auStack_40[5] = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  auStack_40[6] = 0;
  auStack_40[7] = 0;
  auStack_40[8] = 0;
  auStack_40[9] = 0;
  auStack_40[10] = 0;
  auStack_40[0xb] = 0;
  func_0x0046bc40("Dispatcher events",0x11);
  uStack_8._0_1_ = 0x12;
  func_0x0061f0d0(auStack_40 + 6,extraout_ECX_05);
  uStack_8._0_1_ = 0x14;
  if (0xf < auStack_40[0xb]) {
    func_0x0046b1f0(auStack_40 + 6,auStack_40[6],auStack_40[0xb]);
  }
  auStack_40[10] = 0;
  auStack_40[0xb] = 0xf;
  auStack_40[6] = auStack_40[6] & 0xffffff00;
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  auStack_40[2] = 0;
  auStack_40[3] = 0;
  auStack_40[4] = 0;
  auStack_40[5] = 0;
  func_0x0046bc40("Graphics events",0xf);
  uStack_8._0_1_ = 0x15;
  func_0x0061f0d0(auStack_40,extraout_ECX_06);
  uStack_8._0_1_ = 0x17;
  if (0xf < auStack_40[5]) {
    func_0x0046b1f0(auStack_40,auStack_40[0],auStack_40[5]);
  }
  auStack_40[4] = 0;
  auStack_40[5] = 0xf;
  auStack_40[0] = auStack_40[0] & 0xffffff00;
  auStack_40[6] = 0;
  auStack_40[7] = 0;
  auStack_40[8] = 0;
  auStack_40[9] = 0;
  auStack_40[10] = 0;
  auStack_40[0xb] = 0;
  func_0x0046bc40("Latency",7);
  uStack_8._0_1_ = 0x18;
  func_0x0061f0d0(auStack_40 + 6,extraout_ECX_07);
  uStack_8 = CONCAT31(uStack_8._1_3_,0x1a);
  if (0xf < auStack_40[0xb]) {
    func_0x0046b1f0(auStack_40 + 6,auStack_40[6],auStack_40[0xb]);
  }
  auStack_40[10] = 0;
  auStack_40[0xb] = 0xf;
  auStack_40[6] = auStack_40[6] & 0xffffff00;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73370);
  *unaff_FS_OFFSET = auStack_40[0xc];
  return;
}



void FUN_00455430(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f733d0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004554a0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f733f0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00455580(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00ed8fad;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uRam012bc01c = 0;
  uRam012bc020 = 0;
  uRam012bc024 = 0;
  _DAT_012bc028 = 0;
  DAT_012bc02c = 0xf;
  DAT_012bc018 = 0;
  uRam012bc034 = 0;
  uRam012bc038 = 0;
  uRam012bc03c = 0;
  _DAT_012bc040 = 0;
  DAT_012bc044 = 0xf;
  DAT_012bc030 = 0;
  uRam012bc04c = 0;
  uRam012bc050 = 0;
  uRam012bc054 = 0;
  _DAT_012bc058 = 0;
  DAT_012bc05c = 0xf;
  DAT_012bc048 = 0;
  DAT_012bc068 = 0;
  DAT_012bc060 = 0x800;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73440,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00455690(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73570);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00455700(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73590);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004557e0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f735e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00455850(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73600);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004558c0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73620);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004559a0(void)

{
  func_0x0046bc40("\n    attribute vec2 a_Vertex;\n    attribute vec2 a_TexCoord;\n    attribute vec4 a_Color;\n    \n    uniform mat3 u_ProjectionMatrix;\n    uniform mat3 u_TransformMatrix;\n    uniform mat3 u_TextureMatrix;\n    \n    varying vec2 v_TexCoord;\n    varying vec4 v_Color;\n    void main()\n    {\n        gl_Position = vec4((u_ProjectionMatrix * u_TransformMatrix * vec3(a_Vertex.xy, 1.0)).xy, 1.0, 1.0);\n        v_TexCoord = (u_TextureMatrix * vec3(a_TexCoord,1.0)).xy;\n        v_Color = a_Color;\n    }\n"
                  ,0x1ea);
  func_0x008ab7fd(FUN_00f73670);
  return;
}



void FUN_004559c0(void)

{
  func_0x0046bc40("\n    attribute vec2 a_TexCoord;\n    uniform mat3 u_TextureMatrix;\n    varying vec2 v_TexCoord;\n    attribute vec2 a_Vertex;\n    uniform mat3 u_TransformMatrix;\n    uniform mat3 u_ProjectionMatrix;\n    uniform float u_Depth;\n    uniform vec2 u_Offset;\n    void main()\n    {\n        gl_Position = vec4((u_ProjectionMatrix * u_TransformMatrix * vec3(a_Vertex.xy + u_Offset, 1.0)).xy, 1.0, 1.0);\n        v_TexCoord = (u_TextureMatrix * vec3(a_TexCoord,1.0)).xy;\n    }\n"
                  ,0x1d0);
  func_0x008ab7fd(FUN_00f736b0);
  return;
}



void FUN_004559e0(void)

{
  func_0x0046bc40("\n    attribute vec2 a_Vertex;\n    uniform mat3 u_TransformMatrix;\n    uniform mat3 u_ProjectionMatrix;\n    void main()\n    {\n        gl_Position = vec4((u_ProjectionMatrix * u_TransformMatrix * vec3(a_Vertex.xy, 1.0)).xy, 1.0, 1.0);\n    }\n"
                  ,0xef);
  func_0x008ab7fd(FUN_00f736f0);
  return;
}



void FUN_00455a00(void)

{
  func_0x0046bc40("\n    varying vec2 v_TexCoord;\n    varying vec4 v_Color;\n    uniform sampler2D u_Atlas;\n    void main()\n    {\n        if(v_TexCoord.x < 0.0) { gl_FragColor = v_Color; return; }\n        gl_FragColor = texture2D(u_Atlas, v_TexCoord) * v_Color;\n    }\n"
                  ,0xf7);
  func_0x008ab7fd(FUN_00f73730);
  return;
}



void FUN_00455a20(void)

{
  func_0x0046bc40("\n    varying vec2 v_TexCoord;\n    uniform vec4 u_Color;\n    uniform sampler2D u_Tex0;\n    void main()\n    {\n        gl_FragColor = texture2D(u_Tex0, v_TexCoord) * u_Color;\n    }\n"
                  ,0xb2);
  func_0x008ab7fd(FUN_00f73770);
  return;
}



void FUN_00455a40(void)

{
  func_0x0046bc40("\n    uniform vec4 u_Color;\n    void main()\n    {\n        gl_FragColor = u_Color;\n    }\n"
                  ,0x57);
  func_0x008ab7fd(FUN_00f737b0);
  return;
}



void FUN_00455a60(void)

{
  func_0x0046bc40("\n    vec4 calculatePosition();\n    void main() {\n        gl_Position = calculatePosition();\n    }\n"
                  ,0x62);
  func_0x008ab7fd(FUN_00f737f0);
  return;
}



void FUN_00455a80(void)

{
  func_0x0046bc40("\n    attribute vec2 a_TexCoord;\n    uniform mat3 u_TextureMatrix;\n    varying vec2 v_TexCoord;\n    vec4 calculatePosition();\n    void main()\n    {\n        gl_Position = calculatePosition();\n        v_TexCoord = (u_TextureMatrix * vec3(a_TexCoord,1.0)).xy;\n    }\n"
                  ,0x106);
  func_0x008ab7fd(FUN_00f73830);
  return;
}



void FUN_00455aa0(void)

{
  func_0x0046bc40("\n    attribute vec2 a_Vertex;\n    uniform mat3 u_TransformMatrix;\n    uniform mat3 u_ProjectionMatrix;\n    uniform float u_Depth;\n    vec4 calculatePosition() {\n        return vec4((u_ProjectionMatrix * u_TransformMatrix * vec3(a_Vertex.xy, 1.0)).xy, u_Depth / 16384.0, 1.0);\n    }\n"
                  ,0x11a);
  func_0x008ab7fd(FUN_00f73870);
  return;
}



void FUN_00455ac0(void)

{
  func_0x0046bc40("\n    uniform float u_Depth;\n    vec4 calculatePixel();\n    void main()\n    {\n        gl_FragColor = calculatePixel();\n        if(gl_FragColor.a < 0.01 && u_Depth > 0.0)\n\t        discard;\n    }\n"
                  ,0xc1);
  func_0x008ab7fd(FUN_00f738b0);
  return;
}



void FUN_00455ae0(void)

{
  func_0x0046bc40("\n    varying vec2 v_TexCoord;\n    uniform vec4 u_Color;\n    uniform sampler2D u_Tex0;\n    vec4 calculatePixel() {\n        return texture2D(u_Tex0, v_TexCoord) * u_Color;\n    }\n"
                  ,0xb0);
  func_0x008ab7fd(FUN_00f738f0);
  return;
}



void FUN_00455b00(void)

{
  func_0x0046bc40("\n    uniform vec4 u_Color;\n    vec4 calculatePixel() {\n        return u_Color;\n    }\n"
                  ,0x55);
  func_0x008ab7fd(FUN_00f73930);
  return;
}



void FUN_00455b20(void)

{
  func_0x0046bc40("\n    uniform vec4 u_Color;\n    varying vec2 v_TexCoord;\n    uniform sampler2D u_Tex0;\n    vec4 calculatePixel() {\n        if(texture2D(u_Tex0, v_TexCoord).a > 0.01)\n            return u_Color;\n        return vec4(0,0,0,0);\n    }\n"
                  ,0xe5);
  func_0x008ab7fd(FUN_00f73970);
  return;
}



void FUN_00455b40(void)

{
  func_0x0046bc40("\n    attribute vec2 a_TexCoord;\n    uniform mat3 u_TextureMatrix;\n    varying vec2 v_TexCoord;\n    varying vec2 v_TexCoord2;\n    attribute vec2 a_Vertex;\n    uniform mat3 u_TransformMatrix;\n    uniform mat3 u_ProjectionMatrix;\n    uniform float u_Depth;\n    uniform vec2 u_Offset;\n    void main()\n    {\n        gl_Position = vec4((u_ProjectionMatrix * u_TransformMatrix * vec3(a_Vertex.xy, 1.0)).xy, u_Depth / 16384.0, 1.0);\n        v_TexCoord = (u_TextureMatrix * vec3(a_TexCoord,1.0)).xy;\n        v_TexCoord2 = (u_TextureMatrix * vec3(a_TexCoord + u_Offset,1.0)).xy;\n    }\n"
                  ,0x23f);
  func_0x008ab7fd(FUN_00f739b0);
  return;
}



void FUN_00455b60(void)

{
  func_0x0046bc40("\n    uniform mat4 u_Color;\n    varying vec2 v_TexCoord;\n    varying vec2 v_TexCoord2;\n    uniform sampler2D u_Tex0;\n    void main()\n    {\n        gl_FragColor = texture2D(u_Tex0, v_TexCoord);\n        vec4 texcolor = texture2D(u_Tex0, v_TexCoord2);\n        if(texcolor.r > 0.9)\n            gl_FragColor *= texcolor.g > 0.9 ? u_Color[0] : u_Color[1];\n        else if(texcolor.g > 0.9)\n            gl_FragColor *= u_Color[2];\n        else if(texcolor.b > 0.9)\n            gl_FragColor *= u_Color[3];\n        if(gl_FragColor.a < 0.01) discard;\n    }\n"
                  ,0x222);
  func_0x008ab7fd(FUN_00f739f0);
  return;
}



void FUN_00455b80(void)

{
  func_0x0046bc40("\n    attribute vec2 a_TexCoord;\n    attribute vec2 a_Vertex;\n    uniform mat3 u_TextureMatrix;\n    varying vec2 v_TexCoord;\n    varying vec2 v_TexCoord2;\n    varying vec2 v_TexCoord3;\n    uniform mat3 u_TransformMatrix;\n    uniform mat3 u_ProjectionMatrix;\n    uniform vec2 u_Offset;\n    uniform vec2 u_Resolution;\n    uniform float u_Depth;\n    void main()\n    {\n        gl_Position = vec4((u_ProjectionMatrix * u_TransformMatrix * vec3(a_Vertex.xy, 1.0)).xy, u_Depth / 16384.0, 1.0);\n        v_TexCoord = (u_TextureMatrix * vec3(a_TexCoord,1.0)).xy;\n        v_TexCoord2 = (u_TextureMatrix * vec3(a_TexCoord + u_Offset,1.0)).xy;\n        v_TexCoord3 = (u_TextureMatrix * vec3(u_Resolution,1.0)).xy;\n    }\n"
                  ,0x2c1);
  func_0x008ab7fd(FUN_00f73a30);
  return;
}



void FUN_00455ba0(void)

{
  func_0x0046bc40("\n    uniform float u_Depth;\n    uniform mat4 u_Color;\n    varying vec2 v_TexCoord;\n    varying vec2 v_TexCoord2;\n    uniform sampler2D u_Tex0;\n    uniform sampler2D u_Tex1;\n    void main()\n    {\n        gl_FragColor = texture2D(u_Tex0, v_TexCoord);\n        if(texture2D(u_Tex0, v_TexCoord2).a > 0.01)\n            gl_FragColor *= vec4(1.0, 1.0, 0.0, 1.0);\n        if(gl_FragColor.a < 0.01) discard;\n    }\n"
                  ,0x194);
  func_0x008ab7fd(FUN_00f73a70);
  return;
}



void FUN_00455bc0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73ab0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00455c30(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73ad0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00455d10(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73b20);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00455d80(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73b40);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00455e60(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73b90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00455ed0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73bb0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00455fb0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00ed9b3d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145f1c4 = func_0x008ab47d(0x28,uVar1,&DAT_0145f1c0);
  *(int *)DAT_0145f1c4 = DAT_0145f1c4;
  *(int *)(DAT_0145f1c4 + 4) = DAT_0145f1c4;
  DAT_0145f1cc = 0;
  DAT_0145f1d0 = 0;
  DAT_0145f1d4 = 0;
  uStack_8 = 1;
  _DAT_0145f1d8 = 7;
  _DAT_0145f1dc = 8;
  _DAT_0145f1c0 = 0x3f800000;
  func_0x0046abc0(0x10,DAT_0145f1c4);
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73c00);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00456070(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73ca0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004560e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73cc0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004561c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73d10);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456230(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73d30);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00456310(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eda6c9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab84c(&DAT_0145e6f0,8,10,FUN_006299b0,FUN_00628aa0,uVar1);
  iVar3 = 10;
  puVar2 = &DAT_0145e744;
  do {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    puVar2[8] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[9] = 0xffffffff;
    puVar2[-1] = 2;
    puVar2[10] = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 0xc;
  } while (iVar3 != 0);
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73d80);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004563c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73dd0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456430(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73df0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00456510(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73e40);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456580(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73e60);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00456660(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00edad6b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145f1e4 = func_0x008ab47d(0x28,uVar1,&DAT_0145f1e0);
  *(int *)DAT_0145f1e4 = DAT_0145f1e4;
  *(int *)(DAT_0145f1e4 + 4) = DAT_0145f1e4;
  DAT_0145f1ec = 0;
  DAT_0145f1f0 = 0;
  DAT_0145f1f4 = 0;
  uStack_8 = 1;
  _DAT_0145f1f8 = 7;
  _DAT_0145f1fc = 8;
  _DAT_0145f1e0 = 0x3f800000;
  func_0x0046abc0(0x10,DAT_0145f1e4);
  DAT_0145f200 = 0;
  DAT_0145f204 = 0;
  DAT_0145f208 = 0;
  _DAT_0145f20c = 0;
  DAT_0145f210 = 0;
  uStack_8 = 5;
  DAT_0145f214 = 0;
  _DAT_0145f218 = 0;
  DAT_0145f214 = func_0x008ab47d(0xc);
  *(int *)DAT_0145f214 = DAT_0145f214;
  *(int *)(DAT_0145f214 + 4) = DAT_0145f214;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73eb0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00456780(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73ec0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004567f0(void)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00edc033;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_8 = 0;
  func_0x0062ee50(uVar1);
  uStack_8._0_1_ = 1;
  func_0x00635610(extraout_ECX);
  uStack_8._0_1_ = 2;
  puVar4 = &DAT_012bc0a0;
  DAT_012bc0a0 = 0;
  _DAT_012bc0a4 = 0;
  DAT_012bc0a0 = func_0x008ab47d(0x1c);
  *(int *)DAT_012bc0a0 = DAT_012bc0a0;
  *(int *)(DAT_012bc0a0 + 4) = DAT_012bc0a0;
  *(int *)(DAT_012bc0a0 + 8) = DAT_012bc0a0;
  *(undefined2 *)(DAT_012bc0a0 + 0xc) = 0x101;
  uStack_8._0_1_ = 4;
  puVar3 = &DAT_012bc0a8;
  DAT_012bc0a8 = 0;
  _DAT_012bc0ac = 0;
  DAT_012bc0a8 = func_0x008ab47d(0x1c);
  *(int *)DAT_012bc0a8 = DAT_012bc0a8;
  *(int *)(DAT_012bc0a8 + 4) = DAT_012bc0a8;
  *(int *)(DAT_012bc0a8 + 8) = DAT_012bc0a8;
  *(undefined2 *)(DAT_012bc0a8 + 0xc) = 0x101;
  uStack_8._0_1_ = 6;
  puVar2 = &DAT_012bc0b0;
  DAT_012bc0b0 = 0;
  _DAT_012bc0b4 = 0;
  DAT_012bc0b0 = func_0x008ab47d(0x30);
  *(int *)DAT_012bc0b0 = DAT_012bc0b0;
  *(int *)(DAT_012bc0b0 + 4) = DAT_012bc0b0;
  *(int *)(DAT_012bc0b0 + 8) = DAT_012bc0b0;
  *(undefined2 *)(DAT_012bc0b0 + 0xc) = 0x101;
  uStack_8 = CONCAT31(uStack_8._1_3_,8);
  DAT_012bc0c8 = 0;
  _DAT_012bc0b8 = 0;
  uRam012bc0bc = 0;
  uRam012bc0c0 = 0;
  uRam012bc0c4 = 0;
  DAT_012bc0cc = 0;
  func_0x0046bc40("Mozilla/5.0",0xb,uVar1,puVar2,puVar3,puVar4);
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73ee0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00456940(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73ef0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004569b0(void)

{
  func_0x008ab7fd(FUN_00f73f10);
  return;
}



void FUN_004569c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73f20);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456a30(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f73f40);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456aa0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f73f60);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00456b80(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f1edf1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145e980 = func_0x008ab47d(0x2c,uVar1,&DAT_0145e980);
  *(int *)DAT_0145e980 = DAT_0145e980;
  *(int *)(DAT_0145e980 + 4) = DAT_0145e980;
  *(int *)(DAT_0145e980 + 8) = DAT_0145e980;
  *(undefined2 *)(DAT_0145e980 + 0xc) = 0x101;
  uStack_8 = 1;
  DAT_0145e988 = (undefined4 *)0x0;
  _DAT_0145e98c = 0;
  _DAT_0145e990 = 0;
  _DAT_0145e994 = 0;
  _DAT_0145e998 = 0;
  DAT_0145e988 = (undefined4 *)func_0x008ab47d(8);
  DAT_0145e988[1] = 0;
  *DAT_0145e988 = &DAT_0145e988;
  _DAT_0145e9a8 = 0;
  uRam0145e9ac = 0;
  uRam0145e9b0 = 0;
  uRam0145e9b4 = 0;
  _DAT_0145e9c0 = 0;
  _DAT_0145e9b8 = 0;
  _DAT_0145e9a0 = 0;
  _DAT_0145e9a4 = 0;
  _DAT_0145e9c4 = 0xffffffff;
  _DAT_0145e99c = 2;
  _DAT_0145e9c8 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f73fb0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00456cc0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74050);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456d30(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74070);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456da0(void)

{
  func_0x008ab7fd(FUN_00f74090);
  return;
}



void FUN_00456db0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74140);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456e20(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f741b0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456e90(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f741d0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00456f00(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f741f0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00456fe0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74240);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457050(void)

{
  func_0x0062ee50();
  func_0x008ab7fd(FUN_00f74260);
  return;
}



void FUN_00457070(void)

{
  DAT_0145dcb8 = func_0x008ab47d(0x10);
  *(int *)DAT_0145dcb8 = DAT_0145dcb8;
  *(int *)(DAT_0145dcb8 + 4) = DAT_0145dcb8;
  func_0x008ab7fd(FUN_00f74270);
  return;
}



void FUN_00457090(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74290);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457100(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f742b0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004571e0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74300);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457250(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74320);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004572c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74340);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457330(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74360);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004573a0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74380);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457410(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f743a0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457480(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f743c0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004574f0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f743e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457560(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74400);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004575d0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74420);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457640(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74440);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004576b0(void)

{
  func_0x00819e40();
  func_0x008ab7fd(FUN_00f74460);
  return;
}



void FUN_004576d0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f744f0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457740(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74510);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004577b0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f745f0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457820(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74610);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00457890(undefined4 param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2dc37;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x0062ee50(uVar1,param_1);
  uStack_8 = 0;
  func_0x00635610(extraout_ECX);
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  DAT_0145ebe0 = 0;
  _DAT_0145ebe4 = 0;
  uStack_8._0_1_ = 2;
  DAT_0145ebec = 2;
  DAT_0145ebf0 = 0;
  DAT_0145ebf4 = 0;
  DAT_0145ebf0 = func_0x008ab47d(0x10);
  *(int *)DAT_0145ebf0 = DAT_0145ebf0;
  *(int *)(DAT_0145ebf0 + 4) = DAT_0145ebf0;
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  DAT_0145ebf8 = 0;
  DAT_0145ebfc = 0;
  DAT_0145ebf8 = func_0x008ab47d(0x10);
  *(int *)DAT_0145ebf8 = DAT_0145ebf8;
  *(int *)(DAT_0145ebf8 + 4) = DAT_0145ebf8;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f74630);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00457970(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74700);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004579e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2e61f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145e054 = func_0x008ab47d(0x1c,uVar1);
  *(int *)DAT_0145e054 = DAT_0145e054;
  *(int *)(DAT_0145e054 + 4) = DAT_0145e054;
  *(int *)(DAT_0145e054 + 8) = DAT_0145e054;
  *(undefined2 *)(DAT_0145e054 + 0xc) = 0x101;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f74720);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00457a40(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f2e64f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145de98 = func_0x008ab47d(0x18,uVar1);
  *(int *)DAT_0145de98 = DAT_0145de98;
  *(int *)(DAT_0145de98 + 4) = DAT_0145de98;
  *(int *)(DAT_0145de98 + 8) = DAT_0145de98;
  *(undefined2 *)(DAT_0145de98 + 0xc) = 0x101;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f74780);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00457aa0(void)

{
  undefined4 *puVar1;
  undefined1 auStack_10 [12];
  
  puVar1 = (undefined4 *)func_0x0046ede0(auStack_10);
  DAT_0145db48 = *puVar1;
  return;
}



void FUN_00457ac0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f747e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00457b30(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f74800);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00457c10(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f308c1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_012bc114 = 0;
  DAT_012bc118 = 0;
  DAT_012bc11c = 0;
  DAT_012bc120 = 0;
  DAT_012bc124 = 0;
  DAT_012bc128 = 0;
  DAT_012bc12c = 0;
  DAT_012bc130 = 0;
  DAT_012bc134 = 0;
  DAT_012bc138 = 0;
  DAT_012bc13c = 0;
  DAT_012bc140 = 0;
  uRam012bc148 = 0;
  uRam012bc14c = 0;
  uRam012bc150 = 0;
  DAT_012bc154 = 0;
  DAT_012bc158 = 0xf;
  DAT_012bc144 = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f74850,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00457d20(void)

{
  func_0x008ab7fd(FUN_00f74860);
  return;
}



void FUN_00457d30(void)

{
  func_0x0046bc40("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,-_/\\;:|()[]{}*!@#$%^&+=<>?~"
                  ,0x5c);
  func_0x008ab7fd(FUN_00f74870);
  return;
}



void FUN_00457d50(void)

{
  func_0x0046bc40("zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA9876543210~@#$%^&*!?+=<>}{][)(|:;\\/_,-."
                  ,0x5b);
  func_0x008ab7fd(FUN_00f748b0);
  return;
}



void FUN_00457d70(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [3];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f31640;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  func_0x0046bc40("vmtoolsd",8,uVar1);
  uStack_8 = 0;
  uStack_274 = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  func_0x0046bc40("vmwareuser",10);
  uStack_8._0_1_ = 1;
  uStack_25c = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  func_0x0046bc40("vmwaretray",10);
  uStack_8._0_1_ = 2;
  uStack_244 = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  func_0x0046bc40("vmwareservice",0xd);
  uStack_8._0_1_ = 3;
  uStack_22c = 0;
  uStack_23c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  func_0x0046bc40("vmacthlp",8);
  uStack_8._0_1_ = 4;
  uStack_214 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  func_0x0046bc40("vmupgrade",9);
  uStack_8._0_1_ = 5;
  uStack_1fc = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  func_0x0046bc40("vmnat",5);
  uStack_8._0_1_ = 6;
  uStack_1e4 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  func_0x0046bc40("vmnetdhcp",9);
  uStack_8._0_1_ = 7;
  uStack_1cc = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  func_0x0046bc40("vmware-vmx",10);
  uStack_8._0_1_ = 8;
  uStack_1b4 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  func_0x0046bc40("vmware",6);
  uStack_8._0_1_ = 9;
  uStack_19c = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  func_0x0046bc40("vboxservice",0xb);
  uStack_8._0_1_ = 10;
  uStack_184 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x0046bc40("vboxtray",8);
  uStack_8._0_1_ = 0xb;
  uStack_16c = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  func_0x0046bc40("vboxcontrol",0xb);
  uStack_8._0_1_ = 0xc;
  uStack_154 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  func_0x0046bc40("vboxclient",10);
  uStack_8._0_1_ = 0xd;
  uStack_13c = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  func_0x0046bc40("virtualbox",10);
  uStack_8._0_1_ = 0xe;
  uStack_124 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  func_0x0046bc40(&DAT_0119fff0,4);
  uStack_8._0_1_ = 0xf;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  func_0x0046bc40("vboxmanage",10);
  uStack_8._0_1_ = 0x10;
  uStack_f4 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x0046bc40("vboxheadless",0xc);
  uStack_8._0_1_ = 0x11;
  uStack_dc = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0046bc40("vboxsdl",7);
  uStack_8._0_1_ = 0x12;
  uStack_c4 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x0046bc40("qemu-ga",7);
  uStack_8._0_1_ = 0x13;
  uStack_ac = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0046bc40("qemu-system",0xb);
  uStack_8._0_1_ = 0x14;
  uStack_94 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x0046bc40("qemu-img",8);
  uStack_8._0_1_ = 0x15;
  uStack_7c = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0046bc40(&DAT_011a0024,4);
  uStack_8._0_1_ = 0x16;
  uStack_64 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x0046bc40("parallels",9);
  uStack_8._0_1_ = 0x17;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  func_0x0046bc40("prlsrvctl",9);
  uStack_8._0_1_ = 0x18;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40("prl_tools",9);
  uStack_8 = CONCAT31(uStack_8._1_3_,0x19);
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("prl_cc",6);
  uStack_8 = 0x1a;
  func_0x005b96e0(&uStack_29c,auStack_14,&uStack_11);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_29c,0x18,0x1b,FUN_00469ba0);
  func_0x008ab7fd(FUN_00f748f0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00458340(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [3];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f316eb;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  func_0x0046bc40("SOFTWARE\\VMware, Inc.\\VMware Tools",0x22,uVar1);
  uStack_8 = 0;
  uStack_10c = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x0046bc40("SOFTWARE\\VMware, Inc.\\VMware Player",0x23);
  uStack_8._0_1_ = 1;
  uStack_f4 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x0046bc40("SOFTWARE\\VMware, Inc.\\VMware Workstation",0x28);
  uStack_8._0_1_ = 2;
  uStack_dc = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0046bc40("HARDWARE\\DEVICEMAP\\Scsi\\Scsi Port 0\\Scsi Bus 0\\Target Id 0\\Logical Unit Id 0"
                  ,0x4c);
  uStack_8._0_1_ = 3;
  uStack_c4 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x0046bc40("SYSTEM\\ControlSet001\\Services\\vmci",0x22);
  uStack_8._0_1_ = 4;
  uStack_ac = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0046bc40("SYSTEM\\ControlSet001\\Services\\vmhgfs",0x24);
  uStack_8._0_1_ = 5;
  uStack_94 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x0046bc40("SOFTWARE\\Oracle\\VirtualBox Guest Additions",0x2a);
  uStack_8._0_1_ = 6;
  uStack_7c = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0046bc40("HARDWARE\\DESCRIPTION\\System",0x1b);
  uStack_8._0_1_ = 7;
  uStack_64 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x0046bc40("SYSTEM\\ControlSet001\\Services\\VBoxGuest",0x27);
  uStack_8._0_1_ = 8;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0046bc40("SYSTEM\\ControlSet001\\Services\\VBoxSF",0x24);
  uStack_8._0_1_ = 9;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40("SOFTWARE\\Parallels",0x12);
  uStack_8 = CONCAT31(uStack_8._1_3_,10);
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("SYSTEM\\ControlSet001\\Services\\xenservice",0x28);
  uStack_8 = 0xb;
  func_0x005b96e0(&uStack_134,auStack_14,&uStack_11);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_134,0x18,0xc,FUN_00469ba0);
  func_0x008ab7fd(FUN_00f74950);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00458600(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [3];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f31790;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  func_0x0046bc40("vmhgfs.sys",10,uVar1);
  uStack_8 = 0;
  uStack_f4 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x0046bc40("vmci.sys",8);
  uStack_8._0_1_ = 1;
  uStack_dc = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0046bc40("vmmouse.sys",0xb);
  uStack_8._0_1_ = 2;
  uStack_c4 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x0046bc40("vmrawdsk.sys",0xc);
  uStack_8._0_1_ = 3;
  uStack_ac = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0046bc40("vboxguest.sys",0xd);
  uStack_8._0_1_ = 4;
  uStack_94 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x0046bc40("vboxsf.sys",10);
  uStack_8._0_1_ = 5;
  uStack_7c = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0046bc40("vboxvideo.sys",0xd);
  uStack_8._0_1_ = 6;
  uStack_64 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x0046bc40("vboxmouse.sys",0xd);
  uStack_8._0_1_ = 7;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0046bc40("vmbus.sys",9);
  uStack_8._0_1_ = 8;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40("hyperkbd.sys",0xc);
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("hyperv.sys",10);
  uStack_8 = 10;
  func_0x005b96e0(&uStack_11c,auStack_14,&uStack_11);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_11c,0x18,0xb,FUN_00469ba0);
  func_0x008ab7fd(FUN_00f749b0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00458890(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [3];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3189e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1fc = 0;
  uStack_1f8 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  func_0x0046bc40("vmware",6,uVar1);
  uStack_8 = 0;
  uStack_1e4 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  func_0x0046bc40("virtual",7);
  uStack_8._0_1_ = 1;
  uStack_1cc = 0;
  uStack_1dc = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  func_0x0046bc40(&DAT_011a0188,3);
  uStack_8._0_1_ = 2;
  uStack_1b4 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  func_0x0046bc40(&DAT_011a0024,4);
  uStack_8._0_1_ = 3;
  uStack_19c = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  func_0x0046bc40(&DAT_011a01a0,3);
  uStack_8._0_1_ = 4;
  uStack_184 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x0046bc40("bochs",5);
  uStack_8._0_1_ = 5;
  uStack_16c = 0;
  uStack_17c = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  func_0x0046bc40("microsoft corporation",0x15);
  uStack_8._0_1_ = 6;
  uStack_154 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  func_0x0046bc40("parallels",9);
  uStack_8._0_1_ = 7;
  uStack_13c = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  func_0x0046bc40("innotek gmbh",0xc);
  uStack_8._0_1_ = 8;
  uStack_124 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  func_0x0046bc40("vmware virtual platform",0x17);
  uStack_8._0_1_ = 9;
  uStack_10c = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x0046bc40("virtualbox",10);
  uStack_8._0_1_ = 10;
  uStack_f4 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  func_0x0046bc40("bochs",5);
  uStack_8._0_1_ = 0xb;
  uStack_dc = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0046bc40(&DAT_011a0188,3);
  uStack_8._0_1_ = 0xc;
  uStack_c4 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x0046bc40(&DAT_011a0024,4);
  uStack_8._0_1_ = 0xd;
  uStack_ac = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0046bc40("microsoft virtual machine",0x19);
  uStack_8._0_1_ = 0xe;
  uStack_94 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x0046bc40("parallels",9);
  uStack_8._0_1_ = 0xf;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  func_0x0046bc40("vmware virtual ide",0x12);
  uStack_8._0_1_ = 0x10;
  uStack_64 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x0046bc40("vbox harddisk",0xd);
  uStack_8._0_1_ = 0x11;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0046bc40("qemu harddisk",0xd);
  uStack_8._0_1_ = 0x12;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40("vmware virtual s",0x10);
  uStack_8 = CONCAT31(uStack_8._1_3_,0x13);
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("virtual hd",10);
  uStack_8 = 0x14;
  func_0x005b96e0(&uStack_20c,auStack_14,&uStack_11);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_20c,0x18,0x15,FUN_00469ba0);
  func_0x008ab7fd(FUN_00f74a10);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00458d20(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [3];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3191f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  func_0x0046bc40("vmtools",7,uVar1);
  uStack_8 = 0;
  uStack_ac = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0046bc40("vmhgfs",6);
  uStack_8._0_1_ = 1;
  uStack_94 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x0046bc40(&DAT_011a00ac,4);
  uStack_8._0_1_ = 2;
  uStack_7c = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0046bc40("vmx86",5);
  uStack_8._0_1_ = 3;
  uStack_64 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x0046bc40("vboxguest",9);
  uStack_8._0_1_ = 4;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0046bc40("vboxservice",0xb);
  uStack_8._0_1_ = 5;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40("qemu-ga",7);
  uStack_8 = CONCAT31(uStack_8._1_3_,6);
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("virtio",6);
  uStack_8 = 7;
  func_0x005b96e0(&uStack_d4,auStack_14,&uStack_11);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_d4,0x18,8,FUN_00469ba0);
  func_0x008ab7fd(FUN_00f74a70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00458f10(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [3];
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3191f;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  func_0x0046bc40("00:05:69",8,uVar1);
  uStack_8 = 0;
  uStack_ac = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x0046bc40("00:0c:29",8);
  uStack_8._0_1_ = 1;
  uStack_94 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  func_0x0046bc40("00:1c:14",8);
  uStack_8._0_1_ = 2;
  uStack_7c = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0046bc40("00:50:56",8);
  uStack_8._0_1_ = 3;
  uStack_64 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x0046bc40("08:00:27",8);
  uStack_8._0_1_ = 4;
  uStack_4c = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0046bc40("00:15:5d",8);
  uStack_8._0_1_ = 5;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x0046bc40("00:1c:42",8);
  uStack_8 = CONCAT31(uStack_8._1_3_,6);
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("52:54:00",8);
  uStack_8 = 7;
  func_0x005b96e0(&uStack_d4,auStack_14,&uStack_11);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_d4,0x18,8,FUN_00469ba0);
  func_0x008ab7fd(FUN_00f74ad0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00459100(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74b30);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459170(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74b50);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004591e0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74b70);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459250(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74b90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004592c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74bb0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459330(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74bd0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004593a0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f326b1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  DAT_0145eca8 = func_0x008ab47d(0x20,uVar1);
  *(int *)DAT_0145eca8 = DAT_0145eca8;
  *(int *)(DAT_0145eca8 + 4) = DAT_0145eca8;
  *(int *)(DAT_0145eca8 + 8) = DAT_0145eca8;
  *(undefined2 *)(DAT_0145eca8 + 0xc) = 0x101;
  uStack_8 = 1;
  _DAT_0145ecb0 = 0;
  DAT_0145ecb4 = 0;
  _DAT_0145ecb8 = 0;
  DAT_0145ecb4 = func_0x008ab47d(0x28);
  *(int *)DAT_0145ecb4 = DAT_0145ecb4;
  *(int *)(DAT_0145ecb4 + 4) = DAT_0145ecb4;
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  DAT_0145ecbc = 0;
  _DAT_0145ecc0 = 0;
  DAT_0145ecc4 = 0;
  uStack_8._0_1_ = 3;
  _DAT_0145ecc8 = 7;
  _DAT_0145eccc = 8;
  _DAT_0145ecb0 = 0x3f800000;
  func_0x0046abc0(0x10,DAT_0145ecb4);
  DAT_0145ecd0 = 0;
  DAT_0145ecd4 = 0;
  DAT_0145ecd8 = 0;
  uStack_8._0_1_ = 6;
  DAT_0145ecdc = 1;
  _DAT_0145ece0 = 0;
  DAT_0145ece4 = 0;
  _DAT_0145ece8 = 0;
  DAT_0145ece4 = func_0x008ab47d(0x14);
  *(int *)DAT_0145ece4 = DAT_0145ece4;
  *(int *)(DAT_0145ece4 + 4) = DAT_0145ece4;
  _DAT_0145ecec = 0;
  _DAT_0145ecf0 = 0;
  _DAT_0145ecf4 = 0;
  uStack_8 = CONCAT31(uStack_8._1_3_,8);
  _DAT_0145ecf8 = 7;
  _DAT_0145ecfc = 8;
  _DAT_0145ece0 = 0x3f800000;
  func_0x0046abc0(0x10,DAT_0145ece4);
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f74bf0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00459560(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74d30);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004595d0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74d50);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459640(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74d90);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004596b0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74db0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459720(void)

{
  func_0x0046ede0(&DAT_0145e648);
  return;
}



void FUN_00459730(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74de0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004597a0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f74e00);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00459880(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74e50);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_004598f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f74e70);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_004599d0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74ec0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459a40(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f74ee0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00459b20(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74f30);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459b90(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f74f50);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00459c70(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f74fa0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459ce0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f74fc0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00459dc0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75010);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459e30(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f75030);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_00459f10(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75080);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_00459f80(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f750a0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045a060(void)

{
  func_0x00843df0();
  func_0x008ab7fd(FUN_00f750f0);
  return;
}



void FUN_0045a080(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75100);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a0f0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f75120);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045a1d0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75170);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a240(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f75190);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045a320(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f751e0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a390(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f75200);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045a470(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75250);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a4e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f75270);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045a5c0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f752c0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a630(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f752e0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045a710(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75330);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a780(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f75350);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045a860(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f753a0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a8d0(void)

{
  func_0x0046bc40("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",0x40);
  func_0x008ab7fd(FUN_00f753c0);
  return;
}



void FUN_0045a8f0(void)

{
  DAT_0145efb8 = func_0x00bb6340();
  func_0x008ab7fd(FUN_00f75400);
  return;
}



void FUN_0045a910(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75410);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045a980(void)

{
  func_0x008700e0();
  func_0x008ab7fd(FUN_00f75430);
  return;
}



void FUN_0045a9a0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f754b0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045aa10(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f754d0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045aa80(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00eac610;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  func_0x0046bc40("text-click",10,uVar1);
  uStack_30 = 1;
  uStack_8 = 1;
  uStack_1c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x0046bc40("text-hover",10);
  uStack_14 = 2;
  uStack_8 = 3;
  func_0x004684c0(&uStack_48,&iStack_10);
  uStack_8 = 0xffffffff;
  func_0x008ab4ad(&uStack_48,0x1c,2,FUN_00466d70);
  func_0x008ab7fd(FUN_00f754f0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0045ab60(undefined4 param_1)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f3ac9b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x008ab84c(&DAT_0145eff8,0x30,7,FUN_00873b80,FUN_00873cf0,uVar1,param_1);
  uStack_8 = 0;
  DAT_0145f148 = 0;
  DAT_0145f14c = 0;
  DAT_0145f148 = func_0x008ab47d(0x14);
  *(int *)DAT_0145f148 = DAT_0145f148;
  *(int *)(DAT_0145f148 + 4) = DAT_0145f148;
  *(int *)(DAT_0145f148 + 8) = DAT_0145f148;
  *(undefined2 *)(DAT_0145f148 + 0xc) = 0x101;
  _DAT_0145f150 = 0;
  _DAT_0145f154 = 0;
  _DAT_0145f158 = 0;
  _DAT_0145f15c = 0;
  _DAT_0145f160 = 0;
  _DAT_0145f164 = 0;
  _DAT_0145f168 = 0;
  _DAT_0145f16c = 0;
  _DAT_0145f17c = 0;
  uRam0145f180 = 0;
  uRam0145f184 = 0;
  uRam0145f188 = 0;
  _DAT_0145f194 = 0;
  _DAT_0145f18c = 0;
  _DAT_0145f174 = 0;
  _DAT_0145f178 = 0;
  _DAT_0145f198 = 0xffffffff;
  _DAT_0145f170 = 2;
  DAT_0145f19c = 0;
  uStack_8 = 0xffffffff;
  func_0x008ab7fd(FUN_00f75540);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void FUN_0045ac90(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f755b0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045ad00(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f755d0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045ad70(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f755f0);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045ade0(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75610);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



void FUN_0045ae50(void)

{
  int iVar1;
  bool bVar2;
  WSADATA WStack_1a0;
  uint uStack_c;
  
  uStack_c = DAT_0128fd40 ^ (uint)&WStack_1a0;
  func_0x008ab7fd(FUN_00f75630);
  LOCK();
  iVar1 = DAT_0145ca7c + 1;
  UNLOCK();
  bVar2 = DAT_0145ca7c == 0;
  DAT_0145ca7c = iVar1;
  if (bVar2) {
    DAT_0145ca80 = WSAStartup(0x202,&WStack_1a0);
    LOCK();
    UNLOCK();
  }
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045aed6)

void FUN_0045aec0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd820 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045af26)

void FUN_0045af10(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd821 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045af76)

void FUN_0045af60(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd822 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045afc6)

void FUN_0045afb0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd823 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b016)

void FUN_0045b000(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd824 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b066)

void FUN_0045b050(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd825 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b0b6)

void FUN_0045b0a0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd826 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b106)

void FUN_0045b0f0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd827 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b156)

void FUN_0045b140(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd828 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b1a6)

void FUN_0045b190(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd834 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b1f6)

void FUN_0045b1e0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013dd840 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0045b230(void)

{
  _DAT_0128e004 = _ANGLEGetDisplayPlatform_20;
  _DAT_0128e00c = _ANGLEResetDisplayPlatform_4;
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b266)

void FUN_0045b250(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbb8 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b2b6)

void FUN_0045b2a0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbb9 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b306)

void FUN_0045b2f0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbbc = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b356)

void FUN_0045b340(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbc4 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b3a6)

void FUN_0045b390(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbc5 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b3f6)

void FUN_0045b3e0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbc6 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b446)

void FUN_0045b430(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbc7 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b496)

void FUN_0045b480(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbd0 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b4e6)

void FUN_0045b4d0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbd1 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b536)

void FUN_0045b520(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbd2 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



void FUN_0045b570(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 auStack_6c [4];
  code *pcStack_68;
  undefined1 uStack_64;
  code *pcStack_60;
  undefined1 uStack_5c;
  code *pcStack_58;
  undefined1 uStack_54;
  code *pcStack_50;
  undefined1 uStack_4c;
  code *pcStack_48;
  undefined1 uStack_44;
  code *pcStack_40;
  undefined1 uStack_3c;
  code *pcStack_38;
  undefined1 uStack_34;
  code *pcStack_30;
  undefined1 uStack_2c;
  code *pcStack_28;
  undefined1 uStack_24;
  code *pcStack_20;
  undefined1 uStack_1c;
  code *pcStack_18;
  undefined1 uStack_14;
  code *pcStack_10;
  undefined1 uStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  puVar3 = (uint *)auStack_6c;
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_6c;
  auStack_6c[0] = 0;
  pcStack_68 = FUN_008e7110;
  uStack_64 = 1;
  pcStack_60 = FUN_008e72d0;
  uStack_5c = 2;
  pcStack_58 = FUN_008e6cd0;
  uStack_54 = 3;
  pcStack_50 = FUN_008e6dd0;
  uStack_4c = 4;
  pcStack_48 = FUN_008e73d0;
  uStack_44 = 5;
  pcStack_40 = FUN_008e74d0;
  uStack_3c = 6;
  pcStack_38 = FUN_008e6ed0;
  uStack_34 = 7;
  pcStack_30 = FUN_008e75d0;
  uStack_2c = 8;
  pcStack_28 = FUN_008e76d0;
  uStack_24 = 9;
  pcStack_20 = FUN_008e77d0;
  uStack_1c = 10;
  pcStack_18 = FUN_008e7010;
  uStack_14 = 0xb;
  pcStack_10 = FUN_008e7210;
  uStack_c = 0xc;
  pcStack_8 = FUN_008e78d0;
  if ((uint *)auStack_6c != &uStack_4) {
    do {
      uVar2 = *puVar3;
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 2;
      *(uint *)(&DAT_013ddbd8 + (uint)(byte)uVar2 * 4) = *puVar1;
    } while (puVar3 != &uStack_4);
  }
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b676)

void FUN_0045b660(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddbd4 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b6c6)

void FUN_0045b6b0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc0c = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b716)

void FUN_0045b700(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc0d = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b766)

void FUN_0045b750(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc0e = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b7b6)

void FUN_0045b7a0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc84 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b806)

void FUN_0045b7f0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc85 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b856)

void FUN_0045b840(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc86 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b8a6)

void FUN_0045b890(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc87 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b8f6)

void FUN_0045b8e0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc88 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b946)

void FUN_0045b930(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc89 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b996)

void FUN_0045b980(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc8a = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045b9e6)

void FUN_0045b9d0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc8b = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045ba36)

void FUN_0045ba20(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc8c = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045ba86)

void FUN_0045ba70(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc94 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bad6)

void FUN_0045bac0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddc95 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bb26)

void FUN_0045bb10(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddf24 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bb76)

void FUN_0045bb60(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddf34 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bbc6)

void FUN_0045bbb0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddf38 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bc16)

void FUN_0045bc00(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddf60 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bc66)

void FUN_0045bc50(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddf61 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bcb6)

void FUN_0045bca0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddf62 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bd06)

void FUN_0045bcf0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013ddf63 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bd56)

void FUN_0045bd40(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de230 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bda6)

void FUN_0045bd90(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de238 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bdf6)

void FUN_0045bde0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de239 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045be46)

void FUN_0045be30(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de23a = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045be96)

void FUN_0045be80(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de23b = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bee6)

void FUN_0045bed0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de248 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bf36)

void FUN_0045bf20(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de249 = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bf86)

void FUN_0045bf70(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de24a = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045bfd6)

void FUN_0045bfc0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de24b = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045c026)

void FUN_0045c010(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de24c = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045c076)

void FUN_0045c060(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de25c = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045c0c6)

void FUN_0045c0b0(void)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_14;
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uStack_14 = *puVar1;
  uStack_10 = puVar1[1];
  uStack_8 = puVar1[2];
  uStack_c = puVar1[3];
  DAT_013de25d = (byte)(uStack_c >> 0x17) & 1;
  FUN_008ab370();
  return;
}



// WARNING: Removing unreachable block (ram,0x0045c116)

void FUN_0045c100(void)

{
  undefined4 *puVar1;
