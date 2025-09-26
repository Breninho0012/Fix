  func_0x00a3b550(param_1);
  func_0x00b4e830(*(undefined4 *)(unaff_retaddr + 0x1d14));
  return;
}



void __thiscall FUN_00b4e180(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f65b94;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = (int *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x1d14);
  if (**(int **)(*piVar1 + 8) != 0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x18) + 0x1fd0);
    if (*(char *)(param_1 + 4) == '\x04') {
      pcVar4 = *(code **)(*piVar3 + 0x70);
      _guard_check_icall(piVar3,**(undefined4 **)(*piVar1 + 0x28),uVar6);
      (*pcVar4)();
    }
    pcVar4 = *(code **)(*piVar3 + 0x70);
    _guard_check_icall(piVar3,**(undefined4 **)(*piVar1 + 8),uVar6);
    (*pcVar4)();
    func_0x00b4e6f0(piVar1);
    iVar7 = func_0x008ab47d(0x38);
    uStack_8 = 0;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = func_0x00b4de40();
    }
    iVar5 = *piVar1;
    uStack_8 = 0xffffffff;
    *piVar1 = iVar7;
    if (iVar5 != 0) {
      func_0x009de050();
      func_0x009de050();
      func_0x009de050();
      func_0x008ab812(iVar5,0x38);
    }
  }
  func_0x00b4e290(uVar2,0);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 __thiscall FUN_00b4e400(int param_1,int param_2)

{
  int iVar1;
  undefined4 *unaff_retaddr;
  
  iVar1 = func_0x00b4e290(*(undefined4 *)(param_2 + 0x1d14),1);
  if (iVar1 == 1) {
    return 1;
  }
  *unaff_retaddr = *(undefined4 *)(param_1 + 0x10);
  return 0;
}



undefined4 __thiscall FUN_00b4e430(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  iVar2 = func_0x00b4e290(*(undefined4 *)(param_2 + 0x1d14),1);
  if (iVar2 == 1) {
    return 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *unaff_retaddr = *(undefined4 *)(param_1 + 0x10);
  unaff_retaddr[1] = uVar1;
  return 0;
}



undefined4 __thiscall FUN_00b4e470(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  uint uStack_1c;
  int iStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f65bc0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  bVar6 = *(int *)(param_1 + 0x30) == 0;
  uVar2 = *(undefined4 *)(param_2 + 0x1d14);
  if (!bVar6) {
    while( true ) {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) +
                               (*(uint *)(param_1 + 0x2c) >> 2 & *(int *)(param_1 + 0x28) - 1U) * 4)
                      + (*(uint *)(param_1 + 0x2c) & 3) * 4);
      iVar5 = func_0x00b4e980(uVar2,iVar3,uVar4);
      if (iVar5 == 1) {
        *unaff_FS_OFFSET = iStack_10;
        return 1;
      }
      if (*(char *)(iVar3 + 0x34) == '\0') break;
      uStack_1c = *(uint *)(param_1 + 8);
      iStack_18 = *(int *)(param_1 + 0xc);
      switch(*(undefined1 *)(param_1 + 4)) {
      case 0:
      case 1:
        if (((*(int *)(param_1 + 0x10) != 1) || (*(int *)(param_1 + 0x14) != 0)) &&
           ((uStack_1c != 1 || (iStack_18 != 0)))) goto LAB_00b4e524;
        uStack_1c = 1;
        iStack_18 = 0;
        break;
      case 2:
      case 5:
        break;
      default:
LAB_00b4e524:
        uStack_1c = 0;
        iStack_18 = 0;
        break;
      case 4:
      case 6:
        bVar6 = CARRY4(uStack_1c,*(uint *)(param_1 + 0x10));
        uStack_1c = uStack_1c + *(uint *)(param_1 + 0x10);
        iStack_18 = iStack_18 + *(int *)(param_1 + 0x14) + (uint)bVar6;
      }
      *(uint *)(param_1 + 0x10) = uStack_1c;
      *(int *)(param_1 + 0x14) = iStack_18;
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) +
                               (*(uint *)(param_1 + 0x2c) >> 2 & *(int *)(param_1 + 0x28) - 1U) * 4)
                      + (*(uint *)(param_1 + 0x2c) & 3) * 4);
      if (iVar3 != 0) {
        func_0x009de050();
        func_0x009de050();
        func_0x009de050();
        func_0x008ab812(iVar3,0x38);
      }
      piVar1 = (int *)(param_1 + 0x30);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        break;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    bVar6 = *(int *)(param_1 + 0x30) == 0;
  }
  *(bool *)param_3 = bVar6;
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __fastcall FUN_00b4e780(int param_1)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f65c3c;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iStack_14 = param_1;
  iStack_14 = func_0x008ab47d(0x38,uVar2);
  uStack_8 = 0;
  if (iStack_14 == 0) {
    iStack_14 = 0;
  }
  else {
    iStack_14 = func_0x00b4de40();
  }
  uStack_8 = 1;
  func_0x00b4e6f0(&iStack_14);
  iVar1 = iStack_14;
  if (iStack_14 != 0) {
    func_0x009de050();
    func_0x009de050();
    func_0x009de050();
    func_0x008ab812(iVar1,0x38);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 * __thiscall FUN_00b4ef90(undefined4 *param_1,byte param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *param_1 = rx::TransformFeedback11::vftable;
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    uVar5 = param_1[9] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) goto LAB_00b4f04b;
    }
    func_0x008ab812(iVar3,uVar5);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    uVar5 = param_1[6] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
LAB_00b4f04b:
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined4 *)(*pcVar2)();
        return puVar4;
      }
    }
    func_0x008ab812(iVar3,uVar5);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = rx::TransformFeedbackImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b4f060(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::TransformFeedbackImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 __fastcall FUN_00b4f090(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2 != 0) {
    do {
      iVar1 = func_0x008e3590(uVar2);
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar2 * 4) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar2 * 4) = *(undefined4 *)(iVar1 + 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2));
  }
  func_0x00a3b4f0();
  return 0;
}



undefined4 __thiscall FUN_00b4f0f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 4) = *(undefined4 *)(param_4 + 8);
  func_0x00a3b4f0();
  return 0;
}



undefined4 __fastcall FUN_00b4f120(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  func_0x00a3b4f0();
  iVar3 = func_0x009dbe40();
  if (*(char *)(iVar3 + 0xa8) != '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x1fd0);
    pcVar2 = *(code **)(*piVar1 + 0x1bc);
    _guard_check_icall(piVar1);
    (*pcVar2)();
  }
  return 0;
}



undefined4 FUN_00b4f2a0(void)

{
  func_0x00a3b4f0();
  return 0;
}



undefined4 * __thiscall FUN_00b4f530(undefined4 *param_1,byte param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *param_1 = rx::VertexArray11::vftable;
  func_0x009eaf00();
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    uVar5 = param_1[5] - iVar1 & 0xfffffffc;
    iVar3 = iVar1;
    if (0xfff < uVar5) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar5 = uVar5 + 0x23;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined4 *)(*pcVar2)();
        return puVar4;
      }
    }
    func_0x008ab812(iVar3,uVar5);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  *param_1 = rx::VertexArrayImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x88);
  }
  return param_1;
}



void __thiscall
FUN_00b4f5f0(int param_1,int param_2,undefined4 param_3,byte *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  byte *pbStack_58;
  int iStack_54;
  char cStack_4d;
  uint uStack_38;
  uint uStack_30;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f65cf0;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pbStack_58 = param_4;
  puStack_5c = param_5;
  iStack_6c = param_2;
  iStack_60 = *(int *)(*(int *)(param_2 + 0x1d14) + 0x2c) + 0x1680;
  iStack_54 = param_1;
  puVar2 = (undefined4 *)func_0x009dbe00(auStack_68,uStack_14);
  cStack_4d = '\0';
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x30) = *puVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar6 = 0;
  func_0x008c2250(param_3,0);
  func_0x008c2250(param_3,2);
  if (uStack_1c != uStack_38) {
    do {
      switch(uStack_18 + uStack_30 * 0x20) {
      case 0:
      case 1:
        *(undefined1 *)(iStack_54 + 0x3c) = 0;
        *(undefined1 *)(iStack_54 + 0x44) = 0;
        *(undefined1 *)(iStack_54 + 0x4c) = 0;
        *(undefined1 *)(iStack_54 + 0x54) = 0;
        break;
      case 2:
        puVar3 = (uint *)func_0x008e4e00(auStack_a4,0);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        *puStack_5c = 0;
        break;
      case 3:
        puVar3 = (uint *)func_0x008e4e00(auStack_a8,1);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[1] = 0;
        break;
      case 4:
        puVar3 = (uint *)func_0x008e4e00(auStack_ac,2);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[2] = 0;
        break;
      case 5:
        puVar3 = (uint *)func_0x008e4e00(auStack_b0,3);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[3] = 0;
        break;
      case 6:
        puVar3 = (uint *)func_0x008e4e00(auStack_b4,4);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[4] = 0;
        break;
      case 7:
        puVar3 = (uint *)func_0x008e4e00(auStack_b8,5);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[5] = 0;
        break;
      case 8:
        puVar3 = (uint *)func_0x008e4e00(auStack_bc,6);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[6] = 0;
        break;
      case 9:
        puVar3 = (uint *)func_0x008e4e00(auStack_c0,7);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[7] = 0;
        break;
      case 10:
        puVar3 = (uint *)func_0x008e4e00(auStack_c4,8);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[8] = 0;
        break;
      case 0xb:
        puVar3 = (uint *)func_0x008e4e00(auStack_c8,9);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[9] = 0;
        break;
      case 0xc:
        puVar3 = (uint *)func_0x008e4e00(auStack_cc,10);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[10] = 0;
        break;
      case 0xd:
        puVar3 = (uint *)func_0x008e4e00(auStack_d0,0xb);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[0xb] = 0;
        break;
      case 0xe:
        puVar3 = (uint *)func_0x008e4e00(auStack_d4,0xc);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[0xc] = 0;
        break;
      case 0xf:
        puVar3 = (uint *)func_0x008e4e00(auStack_d8,0xd);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[0xd] = 0;
        break;
      case 0x10:
        puVar3 = (uint *)func_0x008e4e00(auStack_dc,0xe);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[0xe] = 0;
        break;
      case 0x11:
        puVar3 = (uint *)func_0x008e4e00(auStack_e0,0xf);
        cStack_4d = '\x01';
        uVar6 = uVar6 | *puVar3;
        puStack_5c[0xf] = 0;
        break;
      case 0x12:
        if (**(int **)(iStack_54 + 0xc) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 1;
          cStack_4d = '\x01';
        }
        break;
      case 0x13:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 4) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 2;
          cStack_4d = '\x01';
        }
        break;
      case 0x14:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 8) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 4;
          cStack_4d = '\x01';
        }
        break;
      case 0x15:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0xc) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 8;
          cStack_4d = '\x01';
        }
        break;
      case 0x16:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x10) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x10;
          cStack_4d = '\x01';
        }
        break;
      case 0x17:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x14) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x20;
          cStack_4d = '\x01';
        }
        break;
      case 0x18:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x18) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x40;
          cStack_4d = '\x01';
        }
        break;
      case 0x19:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x1c) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x80;
          cStack_4d = '\x01';
        }
        break;
      case 0x1a:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x20) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x100;
          cStack_4d = '\x01';
        }
        break;
      case 0x1b:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x24) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x200;
          cStack_4d = '\x01';
        }
        break;
      case 0x1c:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x28) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x400;
          cStack_4d = '\x01';
        }
        break;
      case 0x1d:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x2c) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x800;
          cStack_4d = '\x01';
        }
        break;
      case 0x1e:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x30) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x1000;
          cStack_4d = '\x01';
        }
        break;
      case 0x1f:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x34) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x2000;
          cStack_4d = '\x01';
        }
        break;
      case 0x20:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x38) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x4000;
          cStack_4d = '\x01';
        }
        break;
      case 0x21:
        if (*(int *)(*(int *)(iStack_54 + 0xc) + 0x3c) == 1) {
          *(uint *)(iStack_54 + 0x28) = *(uint *)(iStack_54 + 0x28) | 0x8000;
          cStack_4d = '\x01';
        }
        break;
      case 0x22:
        if ((*pbStack_58 & 2) == 0) {
          uVar6 = uVar6 | 1;
          cStack_4d = '\x01';
          pbStack_58[0] = 0;
          pbStack_58[1] = 0;
          pbStack_58[2] = 0;
          pbStack_58[3] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_e4,0);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0] = 0;
          pbStack_58[1] = 0;
          pbStack_58[2] = 0;
          pbStack_58[3] = 0;
        }
        break;
      case 0x23:
        if ((pbStack_58[4] & 2) == 0) {
          uVar6 = uVar6 | 2;
          cStack_4d = '\x01';
          pbStack_58[4] = 0;
          pbStack_58[5] = 0;
          pbStack_58[6] = 0;
          pbStack_58[7] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_70,1);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[4] = 0;
          pbStack_58[5] = 0;
          pbStack_58[6] = 0;
          pbStack_58[7] = 0;
        }
        break;
      case 0x24:
        if ((pbStack_58[8] & 2) == 0) {
          uVar6 = uVar6 | 4;
          cStack_4d = '\x01';
          pbStack_58[8] = 0;
          pbStack_58[9] = 0;
          pbStack_58[10] = 0;
          pbStack_58[0xb] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_74,2);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[8] = 0;
          pbStack_58[9] = 0;
          pbStack_58[10] = 0;
          pbStack_58[0xb] = 0;
        }
        break;
      case 0x25:
        if ((pbStack_58[0xc] & 2) == 0) {
          uVar6 = uVar6 | 8;
          cStack_4d = '\x01';
          pbStack_58[0xc] = 0;
          pbStack_58[0xd] = 0;
          pbStack_58[0xe] = 0;
          pbStack_58[0xf] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_78,3);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0xc] = 0;
          pbStack_58[0xd] = 0;
          pbStack_58[0xe] = 0;
          pbStack_58[0xf] = 0;
        }
        break;
      case 0x26:
        if ((pbStack_58[0x10] & 2) == 0) {
          uVar6 = uVar6 | 0x10;
          cStack_4d = '\x01';
          pbStack_58[0x10] = 0;
          pbStack_58[0x11] = 0;
          pbStack_58[0x12] = 0;
          pbStack_58[0x13] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_7c,4);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x10] = 0;
          pbStack_58[0x11] = 0;
          pbStack_58[0x12] = 0;
          pbStack_58[0x13] = 0;
        }
        break;
      case 0x27:
        if ((pbStack_58[0x14] & 2) == 0) {
          uVar6 = uVar6 | 0x20;
          cStack_4d = '\x01';
          pbStack_58[0x14] = 0;
          pbStack_58[0x15] = 0;
          pbStack_58[0x16] = 0;
          pbStack_58[0x17] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_80,5);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x14] = 0;
          pbStack_58[0x15] = 0;
          pbStack_58[0x16] = 0;
          pbStack_58[0x17] = 0;
        }
        break;
      case 0x28:
        if ((pbStack_58[0x18] & 2) == 0) {
          uVar6 = uVar6 | 0x40;
          cStack_4d = '\x01';
          pbStack_58[0x18] = 0;
          pbStack_58[0x19] = 0;
          pbStack_58[0x1a] = 0;
          pbStack_58[0x1b] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_84,6);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x18] = 0;
          pbStack_58[0x19] = 0;
          pbStack_58[0x1a] = 0;
          pbStack_58[0x1b] = 0;
        }
        break;
      case 0x29:
        if ((pbStack_58[0x1c] & 2) == 0) {
          uVar6 = uVar6 | 0x80;
          cStack_4d = '\x01';
          pbStack_58[0x1c] = 0;
          pbStack_58[0x1d] = 0;
          pbStack_58[0x1e] = 0;
          pbStack_58[0x1f] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_88,7);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x1c] = 0;
          pbStack_58[0x1d] = 0;
          pbStack_58[0x1e] = 0;
          pbStack_58[0x1f] = 0;
        }
        break;
      case 0x2a:
        if ((pbStack_58[0x20] & 2) == 0) {
          uVar6 = uVar6 | 0x100;
          cStack_4d = '\x01';
          pbStack_58[0x20] = 0;
          pbStack_58[0x21] = 0;
          pbStack_58[0x22] = 0;
          pbStack_58[0x23] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_8c,8);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x20] = 0;
          pbStack_58[0x21] = 0;
          pbStack_58[0x22] = 0;
          pbStack_58[0x23] = 0;
        }
        break;
      case 0x2b:
        if ((pbStack_58[0x24] & 2) == 0) {
          uVar6 = uVar6 | 0x200;
          cStack_4d = '\x01';
          pbStack_58[0x24] = 0;
          pbStack_58[0x25] = 0;
          pbStack_58[0x26] = 0;
          pbStack_58[0x27] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_90,9);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x24] = 0;
          pbStack_58[0x25] = 0;
          pbStack_58[0x26] = 0;
          pbStack_58[0x27] = 0;
        }
        break;
      case 0x2c:
        if ((pbStack_58[0x28] & 2) == 0) {
          uVar6 = uVar6 | 0x400;
          cStack_4d = '\x01';
          pbStack_58[0x28] = 0;
          pbStack_58[0x29] = 0;
          pbStack_58[0x2a] = 0;
          pbStack_58[0x2b] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_94,10);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x28] = 0;
          pbStack_58[0x29] = 0;
          pbStack_58[0x2a] = 0;
          pbStack_58[0x2b] = 0;
        }
        break;
      case 0x2d:
        if ((pbStack_58[0x2c] & 2) == 0) {
          uVar6 = uVar6 | 0x800;
          cStack_4d = '\x01';
          pbStack_58[0x2c] = 0;
          pbStack_58[0x2d] = 0;
          pbStack_58[0x2e] = 0;
          pbStack_58[0x2f] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_98,0xb);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x2c] = 0;
          pbStack_58[0x2d] = 0;
          pbStack_58[0x2e] = 0;
          pbStack_58[0x2f] = 0;
        }
        break;
      case 0x2e:
        if ((pbStack_58[0x30] & 2) == 0) {
          uVar6 = uVar6 | 0x1000;
          cStack_4d = '\x01';
          pbStack_58[0x30] = 0;
          pbStack_58[0x31] = 0;
          pbStack_58[0x32] = 0;
          pbStack_58[0x33] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_9c,0xc);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x30] = 0;
          pbStack_58[0x31] = 0;
          pbStack_58[0x32] = 0;
          pbStack_58[0x33] = 0;
        }
        break;
      case 0x2f:
        if ((pbStack_58[0x34] & 2) == 0) {
          uVar6 = uVar6 | 0x2000;
          cStack_4d = '\x01';
          pbStack_58[0x34] = 0;
          pbStack_58[0x35] = 0;
          pbStack_58[0x36] = 0;
          pbStack_58[0x37] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_e8,0xd);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x34] = 0;
          pbStack_58[0x35] = 0;
          pbStack_58[0x36] = 0;
          pbStack_58[0x37] = 0;
        }
        break;
      case 0x30:
        if ((pbStack_58[0x38] & 2) == 0) {
          uVar6 = uVar6 | 0x4000;
          cStack_4d = '\x01';
          pbStack_58[0x38] = 0;
          pbStack_58[0x39] = 0;
          pbStack_58[0x3a] = 0;
          pbStack_58[0x3b] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_ec,0xe);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x38] = 0;
          pbStack_58[0x39] = 0;
          pbStack_58[0x3a] = 0;
          pbStack_58[0x3b] = 0;
        }
        break;
      case 0x31:
        if ((pbStack_58[0x3c] & 2) == 0) {
          uVar6 = uVar6 | 0x8000;
          cStack_4d = '\x01';
          pbStack_58[0x3c] = 0;
          pbStack_58[0x3d] = 0;
          pbStack_58[0x3e] = 0;
          pbStack_58[0x3f] = 0;
        }
        else {
          puVar3 = (uint *)func_0x008e4e00(auStack_a0,0xf);
          cStack_4d = '\x01';
          uVar6 = uVar6 | *puVar3;
          pbStack_58[0x3c] = 0;
          pbStack_58[0x3d] = 0;
          pbStack_58[0x3e] = 0;
          pbStack_58[0x3f] = 0;
        }
      }
      uStack_1c = uStack_1c & ~(1 << (uStack_18 & 0x1f));
      if (uStack_1c == 0) {
        uStack_18 = 0;
      }
      else {
        uStack_64 = 0;
        uStack_18 = 0;
        if (uStack_1c != 0) {
          for (; (uStack_1c >> uStack_18 & 1) == 0; uStack_18 = uStack_18 + 1) {
          }
        }
      }
      while ((uStack_1c == 0 && (uStack_30 = uStack_30 + 1, uStack_30 < 2))) {
        uStack_1c = *(uint *)(iStack_20 + uStack_30 * 4);
        uStack_18 = 0;
        if ((uStack_1c != 0) && (uStack_18 = 0, uStack_1c != 0)) {
          for (; (uStack_1c >> uStack_18 & 1) == 0; uStack_18 = uStack_18 + 1) {
          }
        }
      }
    } while (uStack_1c != uStack_38);
  }
  for (; uVar6 != 0; uVar6 = uVar6 & ~(1 << ((uint)puVar2 & 0x1f))) {
    puStack_5c = (undefined4 *)0x0;
    if (uVar6 != 0) {
      for (; (uVar6 >> (int)puStack_5c & 1) == 0; puStack_5c = (undefined4 *)((int)puStack_5c + 1))
      {
      }
    }
    iVar5 = *(int *)(*(int *)(iStack_54 + 4) + 0x18) + (int)puStack_5c * 0x20;
    uStack_64 = 0;
    pbStack_58 = (byte *)func_0x00a77430(iStack_6c,iVar5,
                                         *(int *)(*(int *)(iStack_54 + 4) + 0x38) +
                                         *(int *)(iVar5 + 0x14) * 0x18);
    puVar2 = puStack_5c;
    if (pbStack_58 == (byte *)0x2) {
      uVar4 = *(uint *)(iStack_54 + 0x28) & ~(1 << ((uint)puStack_5c & 0x1f));
    }
    else {
      uVar4 = *(uint *)(iStack_54 + 0x28) | 1 << ((uint)puStack_5c & 0x1f);
    }
    *(uint *)(iStack_54 + 0x28) = uVar4;
    if (*(byte **)(*(int *)(iStack_54 + 0xc) + (int)puStack_5c * 4) != pbStack_58) {
      *(byte **)(*(int *)(iStack_54 + 0xc) + (int)puStack_5c * 4) = pbStack_58;
      if (pbStack_58 == (byte *)0x2) {
        *(uint *)(iStack_54 + 0x24) = *(uint *)(iStack_54 + 0x24) | 1 << ((uint)puStack_5c & 0x1f);
      }
      else {
        *(uint *)(iStack_54 + 0x24) =
             *(uint *)(iStack_54 + 0x24) & ~(1 << ((uint)puStack_5c & 0x1f));
        if (pbStack_58 == &DAT_00000004) {
          func_0x00a3b460(puStack_5c);
        }
      }
    }
  }
  if (cStack_4d != '\0') {
    func_0x00a3b500();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_00b504d0(void)

{
  return 1;
}



undefined4 FUN_00b504e0(void)

{
  return 1;
}



undefined4 FUN_00b504f0(void)

{
  return 1;
}



undefined4 FUN_00b50500(void)

{
  return 1;
}



void __thiscall
FUN_00b50510(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0xc);
  _guard_check_icall(param_2,param_3,param_5,param_6,param_7);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00b50570(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::CompilerImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b505a0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::CompilerImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b50610(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  *param_1 = rx::RenderbufferD3D::vftable;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)param_1[0xe];
    _guard_check_icall(1);
    (*pcVar1)();
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = rx::FramebufferAttachmentObjectImpl::vftable;
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b50670(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000014;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = func_0x009f45e0(param_2,in_stack_00000014);
    return uVar1;
  }
  *in_stack_00000014 = *(undefined4 *)(param_1 + 0x38);
  return 0;
}



void __thiscall FUN_00b506a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_4;
  
  puVar2 = &uStack_4;
  uStack_4 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uStack_4 = *(undefined4 *)(param_1 + 0x38);
    func_0x009dc090(param_2,uStack_4);
    return;
  }
  iVar1 = func_0x009f45e0(param_2,&uStack_4);
  if (iVar1 == 1) {
    return;
  }
  func_0x009dc090(uStack_4,puVar2);
  return;
}



void __fastcall FUN_00b50700(int param_1)

{
  code *pcVar1;
  
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x38);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



void __thiscall
FUN_00b50730(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x14);
  _guard_check_icall(param_2,0,param_3,param_4,param_5,0);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00b50760(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_004b3350();
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x38);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



undefined4 __thiscall
FUN_00b507a0(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  if ((param_4 == 0x81a5) || (iVar3 = param_4, param_4 == 0x8d48)) {
    iVar3 = 0x88f0;
  }
  func_0x009dbfe0();
  func_0x00957a20(iVar3);
  uVar2 = func_0x00957a60();
  if (uVar2 < param_2) {
    func_0x0098f180(0x505,"Failed to allocate host memory",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\RenderbufferD3D.cpp"
                    ,"rx::RenderbufferD3D::setStorageMultisample",0x48);
    return 1;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x34) + 0x74);
  _guard_check_icall(unaff_retaddr,param_4,param_5,iVar3,param_2,&stack0xfffffff8);
  iVar3 = (*pcVar1)();
  if (iVar3 == 1) {
    return 1;
  }
  if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(param_1 + 0x38);
    _guard_check_icall(1);
    (*pcVar1)();
  }
  *(uint *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 0;
}



undefined4 * __thiscall FUN_00b509a0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::FenceNV11::vftable;
  piVar1 = (int *)param_1[2];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[2] = 0;
  }
  *param_1 = rx::FenceNVImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00b50a30(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::Sync11::vftable;
  piVar1 = (int *)param_1[2];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[2] = 0;
  }
  *param_1 = rx::SyncImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00b50ac0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SyncImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00b50af0(int param_1,int param_2,byte param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_EBX;
  uint uVar10;
  int unaff_EBP;
  uint uVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  int *piVar15;
  undefined4 uVar16;
  LARGE_INTEGER LStack_1c;
  int *piStack_14;
  undefined4 *puStack_10;
  uint uStack_8;
  uint uStack_4;
  
  *param_6 = 0x911d;
  iVar9 = *(int *)(param_2 + 0x1d14);
  piVar15 = *(int **)(*(int *)(param_1 + 4) + 0x1fd0);
  pcVar1 = *(code **)(*piVar15 + 0x74);
  piVar5 = (int *)((byte)~param_3 & 1);
  uVar16 = 0;
  piStack_14 = piVar5;
  _guard_check_icall(piVar15,*(undefined4 *)(param_1 + 8),0,0);
  iVar6 = (*pcVar1)();
  uVar11 = uStack_8;
  if (iVar6 < 0) {
    pcVar1 = *(code **)(*(int *)(iVar9 + 0x24) + 4);
    _guard_check_icall(iVar6,"Failed to get query data",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Fence11.cpp"
                       ,"rx::FenceTestHelper",0x37);
    (*pcVar1)();
    return 1;
  }
  uVar16 = CONCAT13(iVar6 == 0,(int3)uVar16);
  if (iVar6 == 0) {
    *param_6 = 0x911a;
    return 0;
  }
  if (uStack_8 == 0 && uStack_4 == 0) {
    *param_6 = 0x911b;
    return 0;
  }
  LStack_1c.QuadPart = 0.0;
  QueryPerformanceCounter(&LStack_1c);
  uVar7 = (uint)((ulonglong)uStack_4 * 0x12e0be82);
  uVar2 = (ulonglong)uStack_4 * 0x6d694b2f + ((ulonglong)uVar11 * 0x6d694b2f >> 0x20);
  uVar10 = (uint)(uVar2 >> 0x20);
  uVar11 = (uint)((ulonglong)uVar11 * 0x12e0be82 + (uVar2 & 0xffffffff) >> 0x20);
  lVar3 = (ulonglong)uStack_4 * 0x12e0be82 +
          (ulonglong)CONCAT14(CARRY4(uVar10,uVar11),uVar10 + uVar11);
  uVar11 = (uStack_4 - (int)((ulonglong)lVar3 >> 0x20)) - (uint)(uStack_8 < (uint)lVar3);
  lVar3 = lVar3 + CONCAT44(uVar11 >> 1,uStack_8 - (uint)lVar3 >> 1 | uVar11 * -0x80000000);
  uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar12 = func_0x00e87d70((uint)lVar3 >> 0x1d | uVar11 * 8,uVar11 >> 0x1d,piVar5[4],piVar5[5]);
  uVar11 = (uint)uVar12 + uVar7;
  iVar9 = (int)((ulonglong)uVar12 >> 0x20) + unaff_EBX + (uint)CARRY4((uint)uVar12,uVar7);
  if ((iVar9 <= unaff_EBX) && ((iVar9 < unaff_EBX || (uVar11 < uVar7)))) {
    uVar11 = 0xffffffff;
    iVar9 = 0x7fffffff;
  }
  uVar10 = 0;
  while( true ) {
    if ((iVar9 < unaff_EBX) || ((iVar9 <= unaff_EBX && (uVar11 <= uVar7)))) {
      *puStack_10 = 0x911b;
      return 0;
    }
    if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
      *puStack_10 = 0x911c;
      return 0;
    }
    uVar10 = uVar10 + 1;
    func_0x0093ea60();
    QueryPerformanceCounter((LARGE_INTEGER *)&stack0xffffffd4);
    *puStack_10 = 0x911d;
    iVar6 = *(int *)(param_1 + 0x1d14);
    pcVar1 = *(code **)(**(int **)(piVar5[1] + 0x1fd0) + 0x74);
    _guard_check_icall(*(int **)(piVar5[1] + 0x1fd0),piVar5[2],0,0,uVar16);
    iVar8 = (*pcVar1)();
    if (iVar8 < 0) break;
    unaff_EBP = (uint)(iVar8 == 0) << 0x18;
    if (uVar10 == (uVar10 / 10) * 10) {
      pcVar1 = *(code **)(*(int *)piVar5[1] + 0xd4);
      _guard_check_icall();
      cVar4 = (*pcVar1)();
      piVar5 = piVar15;
      if (cVar4 != '\0') {
        uVar16 = 0xc5;
        pcVar14 = "rx::Sync11::clientWait";
        pcVar13 = "Device was lost while querying result of an event query.";
        *puStack_10 = 0x911d;
        iVar6 = *(int *)(param_1 + 0x1d14);
        iVar8 = -0x7785ffe0;
LAB_00b50d77:
        pcVar1 = *(code **)(*(int *)(iVar6 + 0x24) + 4);
        _guard_check_icall(iVar8,pcVar13,
                           "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Fence11.cpp"
                           ,pcVar14,uVar16);
        (*pcVar1)();
        return 1;
      }
    }
  }
  uVar16 = 0x37;
  pcVar14 = "rx::FenceTestHelper";
  pcVar13 = "Failed to get query data";
  goto LAB_00b50d77;
}



undefined4 __thiscall FUN_00b50de0(int param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cStack_1;
  
  uVar4 = 0;
  do {
    uVar4 = uVar4 + 1;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    iVar5 = *(int *)(param_2 + 0x1d14);
    uVar8 = *(undefined4 *)(param_1 + 8);
    piVar9 = *(int **)(*(int *)(param_1 + 4) + 0x1fd0);
    pcVar1 = *(code **)(*piVar9 + 0x74);
    _guard_check_icall(piVar9,uVar8,0,0,0);
    iVar3 = (*pcVar1)();
    if (iVar3 < 0) {
      uVar8 = 0x37;
      pcVar7 = "rx::FenceTestHelper";
      pcVar6 = "Failed to get query data";
LAB_00b50ea0:
      pcVar1 = *(code **)(*(int *)(iVar5 + 0x24) + 4);
      _guard_check_icall(iVar3,pcVar6,
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Fence11.cpp"
                         ,pcVar7,uVar8);
      (*pcVar1)();
      return 1;
    }
    if (uVar4 == (uVar4 / 10) * 10) {
      pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0xd4);
      _guard_check_icall(piVar9,uVar8,uVar10,uVar11,CONCAT13(iVar3 == 0,(int3)uVar12));
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
        uVar8 = 0x61;
        pcVar7 = "rx::FenceNV11::finish";
        iVar5 = *(int *)(unaff_ESI + 0x1d14);
        pcVar6 = "Device was lost while querying result of an event query.";
        iVar3 = -0x7785ffe0;
        goto LAB_00b50ea0;
      }
    }
    func_0x0093ea60();
    cStack_1 = (char)((uint)param_1 >> 0x18);
    if (cStack_1 == '\x01') {
      return 0;
    }
  } while( true );
}



undefined4 __thiscall FUN_00b50ec0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  *param_3 = 0x9119;
  iVar1 = *(int *)(param_2 + 0x1d14);
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x1fd0);
  pcVar3 = *(code **)(*piVar2 + 0x74);
  _guard_check_icall(piVar2,*(undefined4 *)(param_1 + 8),0,0,1);
  iVar4 = (*pcVar3)();
  if (iVar4 < 0) {
    pcVar3 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
    _guard_check_icall(iVar4,"Failed to get query data",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Fence11.cpp"
                       ,"rx::FenceTestHelper",0x37);
    (*pcVar3)();
    return 1;
  }
  *param_3 = (iVar4 == 0) + 0x9118;
  return 0;
}



undefined4 __thiscall FUN_00b50f50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 8) == 0) {
    uStack_8 = 0;
    uStack_4 = 0;
    iVar1 = *(int *)(param_2 + 0x1d14);
    piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x1f90);
    pcVar3 = *(code **)(*piVar2 + 0x60);
    _guard_check_icall(piVar2,&uStack_8,(undefined4 *)(param_1 + 8));
    iVar4 = (*pcVar3)();
    if (iVar4 < 0) {
      pcVar3 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
      _guard_check_icall(iVar4,"Failed to create event query",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Fence11.cpp"
                         ,"rx::FenceSetHelper",0x23);
      (*pcVar3)();
      return 1;
    }
  }
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x1fd0);
  pcVar3 = *(code **)(*piVar2 + 0x70);
  _guard_check_icall(piVar2,*(undefined4 *)(param_1 + 8));
  (*pcVar3)();
  return 0;
}



undefined4 __thiscall FUN_00b51000(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 8) == 0) {
    uStack_8 = 0;
    uStack_4 = 0;
    iVar1 = *(int *)(param_2 + 0x1d14);
    piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x1f90);
    pcVar3 = *(code **)(*piVar2 + 0x60);
    _guard_check_icall(piVar2,&uStack_8,(undefined4 *)(param_1 + 8));
    iVar4 = (*pcVar3)();
    if (iVar4 < 0) {
      pcVar3 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
      _guard_check_icall(iVar4,"Failed to create event query",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d11\\Fence11.cpp"
                         ,"rx::FenceSetHelper",0x23);
      (*pcVar3)();
      return 1;
    }
  }
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x1fd0);
  pcVar3 = *(code **)(*piVar2 + 0x70);
  _guard_check_icall(piVar2,*(undefined4 *)(param_1 + 8));
  (*pcVar3)();
  return 0;
}



void __thiscall FUN_00b510b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00b50880(param_2,param_1,1,param_3);
  return;
}



undefined4 * __thiscall FUN_00b51100(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Program11::vftable;
  func_0x00a1e820();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x530);
  }
  return param_1;
}



undefined4 FUN_00b51130(void)

{
  func_0x00a3b4a0();
  return 0;
}



undefined4 * __thiscall FUN_00b51180(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::ProgramPipelineImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b51210(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FramebufferAttachmentRenderTarget::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b51240(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FramebufferAttachmentRenderTarget::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b51320(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::SwapChainD3D::vftable;
  piVar1 = (int *)param_1[4];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[4] = 0;
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00b51500(undefined4 *param_1,byte param_2)

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
  puStack_c = &DAT_00f45930;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = (int *)param_1[2];
  *param_1 = rx::VertexBufferInterface::vftable;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x18);
      _guard_check_icall(1,uVar4);
      (*pcVar3)();
    }
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00b51590(undefined4 *param_1,byte param_2)

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
  puStack_c = &DAT_00f45930;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = (int *)param_1[2];
  *param_1 = rx::VertexBufferInterface::vftable;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x18);
      _guard_check_icall(1,uVar4);
      (*pcVar3)();
    }
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00b51620(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::VertexBuffer::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b51650(undefined4 *param_1,byte param_2)

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
  puStack_c = &DAT_00f45930;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = (int *)param_1[2];
  *param_1 = rx::VertexBufferInterface::vftable;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x18);
      _guard_check_icall(1,uVar4);
      (*pcVar3)();
    }
    param_1[2] = 0;
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00b51e30(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::NativeWindowD3D::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b51ea0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::Buffer9::vftable;
  param_1[0x19] = 0;
  func_0x00952cf0();
  func_0x00b45a30();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00b51ee0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,size_t param_6)

{
  code *pcVar1;
  
  memcpy((void *)(param_1[0x18] + param_5),(void *)(*(int *)(param_3 + 0x60) + param_4),param_6);
  pcVar1 = *(code **)(*param_1 + 0x4c);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return 0;
}



undefined4 __thiscall FUN_00b51f20(int param_1,undefined4 param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = *(undefined4 *)(param_1 + 0x60);
  return 0;
}



undefined4 FUN_00b51f40(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Buffer9.cpp"
                     ,"rx::Buffer9::map",0x73);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00b51f80(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Buffer9.cpp"
                     ,"rx::Buffer9::mapRange",0x7d);
  (*pcVar1)();
  return 1;
}



undefined4 FUN_00b51fc0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Buffer9.cpp"
                     ,"rx::Buffer9::markTransformFeedbackUsage",0x89);
  (*pcVar1)();
  return 1;
}



undefined4 __thiscall
FUN_00b52010(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4,uint param_5,
            undefined4 param_6)

{
  code *pcVar1;
  char cVar2;
  
  if ((uint)param_1[0x17] < param_5) {
    cVar2 = func_0x00952f70(param_5);
    if (cVar2 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Buffer9.cpp"
                      ,"rx::Buffer9::setData",0x2c);
      return 1;
    }
  }
  param_1[0x19] = param_5;
  if ((param_4 != (void *)0x0) && (param_5 != 0)) {
    memcpy((void *)param_1[0x18],param_4,param_5);
  }
  func_0x00b45f10(param_2,param_6);
  pcVar1 = *(code **)(*param_1 + 0x4c);
  _guard_check_icall(param_2);
  (*pcVar1)();
  return 0;
}



undefined4 __thiscall
FUN_00b520a0(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4,size_t param_5,
            int param_6)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  
  uVar1 = param_5 + param_6;
  if ((uint)param_1[0x17] < uVar1) {
    cVar3 = func_0x00952f70(uVar1);
    if (cVar3 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Buffer9.cpp"
                      ,"rx::Buffer9::setSubData",0x51);
      return 1;
    }
  }
  uVar4 = param_1[0x19];
  if ((uint)param_1[0x19] < uVar1) {
    uVar4 = uVar1;
  }
  param_1[0x19] = uVar4;
  if ((param_4 != (void *)0x0) && (param_5 != 0)) {
    memcpy((void *)(param_1[0x18] + param_6),param_4,param_5);
  }
  pcVar2 = *(code **)(*param_1 + 0x4c);
  _guard_check_icall(param_2);
  (*pcVar2)();
  return 0;
}



undefined4 FUN_00b52140(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Buffer9.cpp"
                     ,"rx::Buffer9::unmap",0x83);
  (*pcVar1)();
  return 1;
}



undefined4 * __thiscall FUN_00b521b0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::FenceNV9::vftable;
  piVar1 = (int *)param_1[2];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[2] = 0;
  }
  *param_1 = rx::FenceNVImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00b52240(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  do {
    iVar1 = *(int *)(param_2 + 0x1d14);
    pcVar2 = *(code **)(**(int **)(param_1 + 8) + 0x1c);
    _guard_check_icall(*(int **)(param_1 + 8),0,0,1);
    iVar3 = (*pcVar2)();
    if (iVar3 < 0) {
      pcVar2 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
      _guard_check_icall(iVar3,"Failed to get query data",
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Fence9.cpp"
                         ,"rx::FenceNV9::testHelper",0x43);
      (*pcVar2)();
      return 1;
    }
    Sleep(0);
  } while (iVar3 != 0);
  return 0;
}



undefined4 __thiscall FUN_00b522c0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = func_0x009eb810(param_2,piVar1);
    if (iVar4 == 1) {
      return 1;
    }
  }
  pcVar2 = *(code **)(*(int *)*piVar1 + 0x18);
  _guard_check_icall((int *)*piVar1,1);
  iVar4 = (*pcVar2)();
  if (iVar4 < 0) {
    piVar3 = (int *)*piVar1;
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 8);
      _guard_check_icall(piVar3);
      (*pcVar2)();
      *piVar1 = 0;
    }
    pcVar2 = *(code **)(*(int *)(*(int *)(param_2 + 0x1d14) + 0x24) + 4);
    _guard_check_icall(iVar4,"Failed to end event query",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Fence9.cpp"
                       ,"rx::FenceNV9::set",0x26);
    (*pcVar2)();
    return 1;
  }
  return 0;
}



void FUN_00b52360(int param_1,undefined4 param_2)

{
  func_0x00b52380(*(undefined4 *)(param_1 + 0x1d14),1,param_2);
  return;
}



undefined4 * __thiscall FUN_00b52430(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  pcStack_c = FUN_00f3e140;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::Query9::vftable;
  piVar1 = (int *)param_1[8];
  uStack_8 = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 8);
    _guard_check_icall(piVar1,uVar3);
    (*pcVar2)();
    param_1[8] = 0;
  }
  *param_1 = rx::QueryImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x28);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00b524c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)(param_2 + 0x1d14);
  iVar5 = func_0x00a7e120(*(undefined1 *)(param_1 + 4));
  piVar1 = (int *)(param_1 + 0x20);
  if (*piVar1 == 0) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0x159c);
    pcVar4 = *(code **)(*piVar3 + 0x1d8);
    _guard_check_icall(piVar3,iVar5,piVar1);
    iVar6 = (*pcVar4)();
    if (iVar6 < 0) {
      uVar8 = 0x2a;
      pcVar7 = "Internal query creation failed";
      goto LAB_00b5251a;
    }
  }
  if (iVar5 != 8) {
    pcVar4 = *(code **)(*(int *)*piVar1 + 0x18);
    _guard_check_icall((int *)*piVar1,2);
    iVar6 = (*pcVar4)();
    if (iVar6 < 0) {
      uVar8 = 0x31;
      pcVar7 = "Failed to begin internal query";
LAB_00b5251a:
      pcVar4 = *(code **)(*(int *)(iVar2 + 0x24) + 4);
      _guard_check_icall(iVar6,pcVar7,
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Query9.cpp"
                         ,"rx::Query9::begin",uVar8);
      (*pcVar4)();
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_00b52580(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x1d14);
  pcVar2 = *(code **)(**(int **)(param_1 + 0x20) + 0x18);
  _guard_check_icall(*(int **)(param_1 + 0x20),1);
  iVar3 = (*pcVar2)();
  if (iVar3 < 0) {
    pcVar2 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
    _guard_check_icall(iVar3,"Failed to end internal query",
                       "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Query9.cpp"
                       ,"rx::Query9::end",0x3e);
    (*pcVar2)();
    return 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}



undefined4 __thiscall FUN_00b52600(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 0x1d14);
  cVar1 = *(char *)(param_1 + 0x18);
  while (cVar1 == '\0') {
    iVar3 = func_0x00b52840(uVar2);
    if (iVar3 == 1) {
      return 1;
    }
    if (*(char *)(param_1 + 0x18) != '\0') break;
    Sleep(0);
    cVar1 = *(char *)(param_1 + 0x18);
  }
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}



undefined4 __thiscall FUN_00b52650(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *(undefined4 *)(param_2 + 0x1d14);
  cVar1 = *(char *)(param_1 + 0x18);
  while (cVar1 == '\0') {
    iVar3 = func_0x00b52840(uVar2);
    if (iVar3 == 1) {
      return 1;
    }
    if (*(char *)(param_1 + 0x18) != '\0') break;
    Sleep(0);
    cVar1 = *(char *)(param_1 + 0x18);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  param_3[1] = uVar2;
  return 0;
}



undefined4 __thiscall FUN_00b526b0(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iStack_4;
  
  iVar1 = *(int *)(param_2 + 0x1d14);
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_00b527e3;
  cVar3 = *(char *)(param_1 + 4);
  iVar5 = 0;
  if ((cVar3 == '\0') || (cVar3 == '\x01')) {
    iStack_4 = 0;
    pcVar2 = *(code **)(**(int **)(param_1 + 0x20) + 0x1c);
    _guard_check_icall(*(int **)(param_1 + 0x20),&iStack_4,4,1);
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) {
      *(uint *)(param_1 + 0x10) = (uint)(iStack_4 != 0);
LAB_00b52745:
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  else {
    iStack_4 = param_1;
    if (cVar3 == '\x02') {
      iStack_4 = 0;
      pcVar2 = *(code **)(**(int **)(param_1 + 0x20) + 0x1c);
      _guard_check_icall(*(int **)(param_1 + 0x20),&iStack_4,4,1);
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        *(uint *)(param_1 + 0x10) = (uint)(iStack_4 == 1);
        goto LAB_00b52745;
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (iVar5 < 0) {
      uVar7 = 0xa0;
      pcVar6 = "Failed to test get query result";
LAB_00b527c3:
      pcVar2 = *(code **)(*(int *)(iVar1 + 0x24) + 4);
      _guard_check_icall(iVar5,pcVar6,
                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Query9.cpp"
                         ,"rx::Query9::testQuery",uVar7);
      (*pcVar2)();
      return 1;
    }
    uVar4 = *(int *)(param_1 + 8) + 1;
    *(uint *)(param_1 + 8) = uVar4;
    if (uVar4 == (uVar4 / 10) * 10) {
      pcVar2 = *(code **)(**(int **)(param_1 + 0x1c) + 0xd4);
      _guard_check_icall();
      cVar3 = (*pcVar2)();
      if (cVar3 != '\0') {
        uVar7 = 0xa8;
        pcVar6 = "Failed to test get query result, device is lost";
        iVar5 = -0x7789f798;
        goto LAB_00b527c3;
      }
    }
  }
LAB_00b527e3:
  *param_3 = *(undefined1 *)(param_1 + 0x18);
  return 0;
}



undefined4 FUN_00b52800(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x1d14) + 0x24) + 4);
  _guard_check_icall(0x80004005,"Unreachble code reached.",
                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\d3d\\d3d9\\Query9.cpp"
                     ,"rx::Query9::queryCounter",0x47);
  (*pcVar1)();
  return 1;
}



undefined4 * __thiscall FUN_00b52ad0(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::BufferGL::vftable;
  func_0x00952cf0(uVar1);
  *param_1 = rx::BufferImpl::vftable;
  func_0x00953210();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00b52b40(int param_1,size_t param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  size_t sVar7;
  int iVar8;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1d14);
  iVar3 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar4 = func_0x00a01ed0(param_2);
  iVar8 = *(int *)(param_1 + 0x4c);
  func_0x00ab6980(0);
  func_0x00ab6980(2,*(undefined4 *)(unaff_retaddr + 0x4c));
  pcVar2 = *(code **)(iVar3 + 0x494);
  uVar5 = func_0x008baa30(0);
  uVar6 = func_0x008baa30(2);
  sVar7 = param_2;
  _guard_check_icall(uVar6,uVar5,uVar1,unaff_retaddr);
  (*pcVar2)();
  if ((*(char *)(iVar4 + 0x618) != '\0') && (0 < (int)param_2)) {
    memcpy((void *)(*(int *)(sVar7 + 0x44) + unaff_ESI),(void *)(*(int *)(iVar8 + 0x44) + unaff_EDI)
           ,param_2);
  }
  func_0x00ab5330();
  return 0;
}



void __thiscall FUN_00b52c10(int param_1,undefined4 param_2)

{
  func_0x00a02140(param_2);
  func_0x00ab6e30(*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



undefined4 __thiscall
FUN_00b52c40(int param_1,undefined4 param_2,int param_3,int param_4,undefined8 *param_5,
            undefined4 param_6,undefined8 *param_7)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  undefined1 auStack_c [12];
  
  iVar2 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar3 = func_0x00a01ed0(param_2);
  if (*(char *)(iVar3 + 0x618) != '\0') {
    puVar4 = (undefined8 *)
             func_0x0093de00(auStack_c,param_3,*(int *)(param_1 + 0x44) + param_4,param_5,param_6);
    *param_7 = *puVar4;
    *(undefined4 *)(param_7 + 1) = *(undefined4 *)(puVar4 + 1);
    func_0x00ab5330();
    return 0;
  }
  func_0x00ab6980(0,*(undefined4 *)(param_1 + 0x4c));
  uVar5 = func_0x008baa30(0,param_2,(1 << ((byte)unaff_retaddr & 0x1f)) * param_3,1);
  iVar3 = func_0x00a03aa0(iVar2,uVar5);
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)func_0x0093de00(&stack0xffffffec,unaff_retaddr,iVar3,param_3,param_4);
    *param_5 = *puVar4;
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar4 + 1);
    pcVar1 = *(code **)(iVar2 + 0x1b4);
    uVar5 = func_0x008baa30(0);
    _guard_check_icall(uVar5);
    (*pcVar1)();
    func_0x00ab5330();
    return 0;
  }
  *(undefined4 *)param_5 = 0;
  *(undefined4 *)((int)param_5 + 4) = 0;
  *(undefined4 *)(param_5 + 1) = 1;
  func_0x00ab5330();
  return 0;
}



undefined4 __thiscall FUN_00b52d80(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_retaddr;
  
  puVar1 = *(undefined4 **)(param_2 + 0x1d14);
  iVar3 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar4 = func_0x00a01ed0(param_2);
  if (*(char *)(iVar4 + 0x618) == '\0') {
    func_0x00ab6980(0,*(undefined4 *)(param_1 + 0x4c));
    pcVar2 = *(code **)(iVar3 + 0x1b0);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = *(code **)(iVar3 + 0x408);
      uVar5 = *(undefined4 *)(param_1 + 0x48);
      uVar6 = func_0x008baa30(0);
      _guard_check_icall(uVar6,0,uVar5,2);
      uVar5 = (*pcVar2)();
    }
    else {
      uVar5 = func_0x008baa30(0,unaff_retaddr);
      _guard_check_icall(uVar5);
      uVar5 = (*pcVar2)();
    }
    *puVar1 = uVar5;
    func_0x00ab6980(0,0);
  }
  else {
    *param_4 = *(undefined4 *)(param_1 + 0x44);
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x48);
  func_0x00ab5330();
  return 0;
}



undefined4 __thiscall
FUN_00b52e50(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int *param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int unaff_retaddr;
  
  puVar1 = *(undefined4 **)(param_2 + 0x1d14);
  func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar3 = func_0x00a01ed0(param_2);
  if (*(char *)(iVar3 + 0x618) == '\0') {
    func_0x00ab6980(0,*(undefined4 *)(param_1 + 0x4c));
    pcVar2 = *(code **)(unaff_EBP + 0x408);
    uVar4 = func_0x008baa30(0,unaff_retaddr,param_4,param_3);
    _guard_check_icall(uVar4);
    uVar4 = (*pcVar2)();
    *puVar1 = uVar4;
    func_0x00ab6980(0,0);
    param_3 = unaff_retaddr;
  }
  else {
    *param_6 = *(int *)(param_1 + 0x44) + param_3;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(int *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  func_0x00ab5330();
  return 0;
}



undefined4 __thiscall FUN_00b52f10(int param_1,undefined4 param_2,size_t param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *unaff_EBX;
  int iVar7;
  
  iVar3 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar4 = func_0x00a01ed0(param_2);
  iVar7 = 0;
  func_0x00ab6980(0,*(undefined4 *)(param_1 + 0x4c));
  pcVar1 = *(code **)(iVar3 + 0x174);
  uVar5 = func_0x008baad0(param_4);
  uVar6 = func_0x008baa30(0);
  _guard_check_icall(uVar6,param_3,param_2,uVar5);
  (*pcVar1)();
  if (*(char *)(iVar4 + 0x618) != '\0') {
    cVar2 = func_0x00952f70(param_3);
    if (cVar2 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\BufferGL.cpp"
                      ,"rx::BufferGL::setData",0x49);
      return 1;
    }
    if ((param_3 != 0) && (unaff_EBX != (void *)0x0)) {
      memcpy(*(void **)(iVar7 + 0x44),unaff_EBX,param_3);
    }
  }
  *(size_t *)(iVar7 + 0x48) = param_3;
  func_0x00ab5330();
  return 0;
}



undefined4 __thiscall FUN_00b53000(int param_1,int param_2,size_t param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *unaff_EBP;
  
  iVar1 = *(int *)(param_2 + 0x1d14);
  iVar3 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar4 = func_0x00a01ed0(param_2);
  func_0x00ab6980(0,*(undefined4 *)(param_1 + 0x4c));
  pcVar2 = *(code **)(iVar3 + 0x178);
  uVar5 = func_0x008baa30(0,param_4,param_3,param_2);
  _guard_check_icall(uVar5);
  (*pcVar2)();
  if ((*(char *)(iVar4 + 0x618) != '\0') && (param_3 != 0)) {
    memcpy((void *)(*(int *)(param_1 + 0x44) + iVar1),unaff_EBP,param_3);
  }
  func_0x00ab5330();
  return 0;
}



undefined4 __thiscall FUN_00b530a0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *unaff_EBP;
  int iVar7;
  
  iVar3 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar4 = func_0x00a01ed0(param_2);
  iVar7 = 0;
  if (*(char *)(iVar4 + 0x618) == '\0') {
    func_0x00ab6980(0,*(undefined4 *)(param_1 + 0x4c));
    pcVar1 = *(code **)(iVar3 + 0x1b4);
    uVar6 = func_0x008baa30(0);
    _guard_check_icall(uVar6);
    uVar2 = (*pcVar1)();
  }
  else {
    func_0x00ab6980(0,*(undefined4 *)(param_1 + 0x4c));
    pcVar1 = *(code **)(iVar3 + 0x178);
    iVar3 = *(int *)(param_1 + 0x38);
    iVar4 = *(int *)(param_1 + 0x44);
    uVar6 = *(undefined4 *)(unaff_EBP + 0x3c);
    uVar5 = func_0x008baa30(0);
    _guard_check_icall(uVar5,iVar3,uVar6,iVar4 + iVar3);
    param_1 = iVar7;
    (*pcVar1)();
    uVar2 = 1;
  }
  *unaff_EBP = uVar2;
  *(undefined1 *)(param_1 + 0x34) = 0;
  func_0x00ab5330();
  return 0;
}



undefined4 * __thiscall FUN_00b53220(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::FramebufferImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  return param_1;
}



int FUN_00b54030(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar11;
  undefined4 unaff_retaddr;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  int *piStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piStack_14 = *(int **)(param_1 + 0x1d14);
  uStack_30 = func_0x00a01ee0(param_1);
  iVar7 = func_0x00a02140(param_1);
  uStack_18 = func_0x00a01ed0(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14e8);
  iStack_2c = func_0x0098d9d0();
  if (iStack_2c == 0) {
LAB_00b540f4:
    uVar11 = 0;
    iVar8 = func_0x0098d590();
    if (iVar8 != 0) {
      do {
        iVar8 = func_0x0098d520(uVar11);
        if ((iVar8 != 0) && (iVar8 = func_0x00969060(), iVar8 == 0x8c40)) {
          uStack_30 = 4;
          iStack_2c = 1;
          func_0x009f6490(&uStack_30);
          break;
        }
        uVar11 = uVar11 + 1;
        uVar9 = func_0x0098d590();
      } while (uVar11 < uVar9);
    }
  }
  else {
    pcVar2 = *(code **)(**(int **)(iStack_2c + 0x18) + 0xc);
    _guard_check_icall(iStack_2c + 8);
    (*pcVar2)();
    iVar8 = func_0x00969060();
    if (iVar8 != 0x8c40) goto LAB_00b540f4;
    iStack_2c = 4;
    iStack_28 = 3;
    cVar6 = func_0x009f6490(&iStack_2c);
    if (cVar6 == '\0') goto LAB_00b540f4;
  }
  uVar11 = param_1;
  if (*(char *)(iStack_1c + 0xc) == '\0') {
    func_0x00ab8b10(param_1,1,iStack_1c);
    if ((char)((uint)unaff_ESI >> 0x18) == '\0') goto LAB_00b541df;
  }
  else {
    func_0x00ab8b10(param_1,1,iStack_1c);
  }
  if (((param_1 & 0x4000) != 0) && (unaff_EBP < 2)) {
    func_0x00a01ec0(param_1);
    iVar8 = func_0x00acfe80(param_1,unaff_EBX,uVar1,uStack_4,unaff_retaddr,param_2,
                            *(char *)(iStack_1c + 0xc) == '\0');
    if (iVar8 == 1) {
      return 1;
    }
    uVar11 = param_1 & 0xffffbfff;
  }
LAB_00b541df:
  if (uVar11 != 0) {
    func_0x00ab6ac0(0x8ca8,*(undefined4 *)(*(int *)(unaff_EBX + 0x338) + 8));
    func_0x00ab6ac0(0x8ca9,*(undefined4 *)(iStack_1c + 8));
    iStack_2c = *piStack_14;
    iStack_28 = piStack_14[1];
    iStack_24 = piStack_14[2];
    iStack_20 = piStack_14[3];
    iVar8 = *piStack_10;
    iVar3 = piStack_10[1];
    iVar4 = piStack_10[2];
    iVar5 = piStack_10[3];
    if ((*(char *)(iVar7 + 0x3d8) != '\0') &&
       (iVar10 = func_0x00b53ad0(param_1,&iStack_2c,&stack0xffffffb8,&iStack_2c,&stack0xffffffb8),
       iVar10 != 0)) {
      return iVar10;
    }
    if ((*(char *)(iVar7 + 0x3f0) != '\0') &&
       (iVar7 = func_0x00b549d0(param_1,&iStack_2c,&stack0xffffffb8,&iStack_2c,&stack0xffffffb8),
       iVar7 != 0)) {
      return iVar7;
    }
    pcVar2 = *(code **)(unaff_ESI + 0x364);
    _guard_check_icall(iStack_2c,iStack_28,iStack_24 + iStack_2c,iStack_20 + iStack_28,iVar8,iVar3,
                       iVar4 + iVar8,iVar5 + iVar3,uVar11,uStack_8);
    (*pcVar2)();
    func_0x00ab5330();
  }
  return 0;
}



undefined8 * __thiscall FUN_00b542e0(int param_1,undefined8 *param_2,undefined4 param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined8 uVar9;
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  int iStack_20;
  uint uStack_1c;
  int *piStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f65dd1;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_1c = 0;
  iVar6 = func_0x00a01ee0(param_3,uVar5);
  func_0x00a02140(param_3);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(param_1 + 8));
  pcVar2 = *(code **)(iVar6 + 0x368);
  _guard_check_icall(0x8d40);
  iStack_20 = (*pcVar2)();
  if (iStack_20 == 0x8cd5) {
    uVar9 = func_0x0098b270();
  }
  else {
    cVar4 = func_0x00952a70(2);
    if (cVar4 != '\0') {
      iVar6 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\FramebufferGL.cpp"
                              ,"rx::FramebufferGL::checkStatus",0x4dc,2);
      uStack_8 = 0;
      uStack_1c = 1;
      piVar7 = (int *)func_0x0046b6e0(iVar6 + 0x10,"GL framebuffer returned incomplete: ");
      piStack_18 = piVar7;
      func_0x0046b6e0(piVar7,&DAT_00f9ad64);
      iVar6 = *(int *)(*piVar7 + 4);
      uStack_24 = *(undefined4 *)(iVar6 + 0x24 + (int)piVar7);
      uVar5 = *(uint *)(iVar6 + 0x14 + (int)piVar7);
      uVar3 = *(undefined4 *)(iVar6 + 0x20 + (int)piVar7);
      uStack_11 = *(undefined1 *)(iVar6 + 0x40 + (int)piVar7);
      *(uint *)(iVar6 + 0x14 + (int)piVar7) = uVar5 & 0xfffff9ff | 0x800;
      puVar1 = (uint *)(*(int *)(*piVar7 + 4) + 0x14 + (int)piVar7);
      *puVar1 = *puVar1 | 4;
      puVar8 = (undefined4 *)func_0x00e73e96(auStack_34,8,0);
      pcVar2 = (code *)*puVar8;
      _guard_check_icall(*(int *)(*piStack_18 + 4) + (int)piStack_18,puVar8[2],puVar8[3]);
      (*pcVar2)();
      piVar7 = piStack_18;
      *(undefined1 *)(*(int *)(*piStack_18 + 4) + 0x40 + (int)piStack_18) = 0x30;
      func_0x005b0d50(iStack_20);
      *(uint *)(*(int *)(*piVar7 + 4) + 0x14 + (int)piVar7) = uVar5 & 0xffff;
      iVar6 = *(int *)(*piVar7 + 4);
      *(undefined4 *)(iVar6 + 0x24 + (int)piVar7) = uStack_24;
      *(undefined4 *)(iVar6 + 0x20 + (int)piVar7) = uVar3;
      *(undefined1 *)(*(int *)(*piVar7 + 4) + 0x40 + (int)piVar7) = uStack_11;
    }
    uStack_8 = 0xffffffff;
    if ((uStack_1c & 1) != 0) {
      func_0x00952760();
    }
    uVar9 = func_0x0098b280(0x8cdd,
                            "Framebuffer is incomplete: Driver does not support this framebuffer configuration."
                           );
  }
  *param_2 = uVar9;
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



undefined4 __thiscall FUN_00b544b0(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iStack_14;
  
  func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  func_0x00a02140(param_2);
  iVar4 = func_0x00a01ed0(param_2);
  if (((*(char *)(iVar4 + 0x78) == '\0') || ((param_3 & 0x4000) == 0)) ||
     (cVar2 = func_0x0098ddb0(), cVar2 != '\0')) {
    bVar3 = func_0x0098ddb0();
    bVar3 = bVar3 ^ 1;
  }
  else {
    piVar5 = (int *)(*(int *)(param_1 + 4) + 0x28);
    piVar6 = piVar5 + *(int *)(*(int *)(param_1 + 4) + 0x188) * 0xb;
    for (; piVar5 != piVar6; piVar5 = piVar5 + 0xb) {
      if ((*piVar5 != 0) && (iVar4 = func_0x00969060(), iVar4 == 0x8c40)) {
        bVar3 = 1;
        goto LAB_00b54561;
      }
    }
    bVar3 = 0;
  }
LAB_00b54561:
  iStack_14 = CONCAT31(iStack_14._1_3_,bVar3);
  func_0x00ab8ab0(param_2,iStack_14);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(param_1 + 8));
  cVar2 = func_0x00b53980(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_2 + 0x13bc));
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(iStack_14 + 8);
    _guard_check_icall(param_3);
    (*pcVar1)();
    func_0x00ab5330();
    return 0;
  }
  func_0x00a01f00(param_2);
  func_0x00ad4780(*(undefined4 *)(param_1 + 4),param_2 + 0x13c0,0,param_3,0,0,0,0,0);
  func_0x00ab5330();
  return 0;
}



undefined4 FUN_00b54600(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d14);
  func_0x00a01ee0(param_1);
  func_0x00a02140(param_1);
  iVar4 = param_3;
  func_0x00b55a10(param_1,param_2);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(unaff_ESI + 8));
  cVar3 = func_0x00b53980(*(undefined4 *)(iVar4 + 4),*(undefined1 *)(param_1 + 0x13bc));
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(unaff_EDI + 0x370);
    _guard_check_icall(param_2,param_3,uVar1,unaff_retaddr);
    (*pcVar2)();
    func_0x00ab5330();
    return 0;
  }
  func_0x00a01f00(param_1);
  func_0x00ad4780(*(undefined4 *)(iVar4 + 4),param_1 + 0x13c0,4,0,param_2,param_3,0,uVar1,
                  unaff_retaddr);
  func_0x00ab5330();
  return 0;
}



undefined4 FUN_00b54700(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int unaff_ESI;
  int unaff_EDI;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d14);
  func_0x00a01ee0(param_1);
  func_0x00a02140(param_1);
  iVar4 = param_3;
  func_0x00b55a10(param_1,param_2);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(unaff_ESI + 8));
  cVar3 = func_0x00b53980(*(undefined4 *)(iVar4 + 4),*(undefined1 *)(param_1 + 0x13bc));
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(unaff_EDI + 0x374);
    _guard_check_icall(param_2,param_3,uVar1);
    (*pcVar2)();
    func_0x00ab5330();
    return 0;
  }
  func_0x00a01f00(param_1);
  func_0x00ad4780(*(undefined4 *)(iVar4 + 4),param_1 + 0x13c0,1,0,param_2,param_3,uVar1,0,0);
  func_0x00ab5330();
  return 0;
}



undefined4 FUN_00b547f0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int unaff_ESI;
  int unaff_EDI;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d14);
  func_0x00a01ee0(param_1);
  func_0x00a02140(param_1);
  iVar4 = param_3;
  func_0x00b55a10(param_1,param_2);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(unaff_ESI + 8));
  cVar3 = func_0x00b53980(*(undefined4 *)(iVar4 + 4),*(undefined1 *)(param_1 + 0x13bc));
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(unaff_EDI + 0x378);
    _guard_check_icall(param_2,param_3,uVar1);
    (*pcVar2)();
    func_0x00ab5330();
    return 0;
  }
  func_0x00a01f00(param_1);
  func_0x00ad4780(*(undefined4 *)(iVar4 + 4),param_1 + 0x13c0,3,0,param_2,param_3,uVar1,0,0);
  func_0x00ab5330();
  return 0;
}



undefined4 FUN_00b548e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int unaff_ESI;
  int unaff_EDI;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1d14);
  func_0x00a01ee0(param_1);
  func_0x00a02140(param_1);
  iVar4 = param_3;
  func_0x00b55a10(param_1,param_2);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(unaff_ESI + 8));
  cVar3 = func_0x00b53980(*(undefined4 *)(iVar4 + 4),*(undefined1 *)(param_1 + 0x13bc));
  if (cVar3 == '\0') {
    pcVar2 = *(code **)(unaff_EDI + 0x37c);
    _guard_check_icall(param_2,param_3,uVar1);
    (*pcVar2)();
    func_0x00ab5330();
    return 0;
  }
  func_0x00a01f00(param_1);
  func_0x00ad4780(*(undefined4 *)(iVar4 + 4),param_1 + 0x13c0,2,0,param_2,param_3,uVar1,0,0);
  func_0x00ab5330();
  return 0;
}



void __thiscall FUN_00b54d00(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00a02140(param_2);
    func_0x00ab6ff0(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



void __thiscall FUN_00b54d30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0xc);
  _guard_check_icall(param_2,param_3,param_4);
  (*pcVar1)();
  return;
}



undefined4 __thiscall FUN_00b54db0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  iVar2 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(param_1 + 8));
  pcVar1 = *(code **)(iVar2 + 0x4ec);
  _guard_check_icall(0x8e50,unaff_retaddr,param_2);
  (*pcVar1)();
  return 0;
}



undefined4 FUN_00b54e00(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *unaff_FS_OFFSET;
  int aiStack_20 [4];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f65e0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_20[0] = 0;
  aiStack_20[1] = 0;
  aiStack_20[2] = 0;
  uStack_8 = 0;
  cVar1 = func_0x00b55030(param_2,param_3,aiStack_20,uVar2);
  if (cVar1 != '\0') {
    param_3 = aiStack_20[0];
  }
  iVar3 = func_0x00a01ee0(param_1);
  func_0x00a02140(param_1);
  if (*(int *)(iVar3 + 0x82c) == 0) {
    if (*(int *)(iVar3 + 0xa70) == 0) goto LAB_00b54ecd;
    func_0x00ab6ac0(0x8d40,*(undefined4 *)(aiStack_20[3] + 8));
    pcVar5 = *(code **)(iVar3 + 0xa70);
  }
  else {
    func_0x00ab6ac0(0x8d40,*(undefined4 *)(aiStack_20[3] + 8));
    pcVar5 = *(code **)(iVar3 + 0x82c);
  }
  _guard_check_icall(0x8d40,param_2,param_3);
  (*pcVar5)();
LAB_00b54ecd:
  if (aiStack_20[0] != 0) {
    uVar2 = aiStack_20[2] - aiStack_20[0] & 0xfffffffc;
    iVar3 = aiStack_20[0];
    if (0xfff < uVar2) {
      iVar3 = *(int *)(aiStack_20[0] + -4);
      uVar2 = uVar2 + 0x23;
      if (0x1f < (aiStack_20[0] - iVar3) - 4U) {
        func_0x008aaf66();
        pcVar5 = (code *)swi(3);
        uVar4 = (*pcVar5)();
        return uVar4;
      }
    }
    func_0x008ab812(iVar3,uVar2);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



undefined4 __thiscall
FUN_00b54f20(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  int aiStack_20 [4];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f65e0d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_20[0] = 0;
  aiStack_20[1] = 0;
  aiStack_20[2] = 0;
  uStack_8 = 0;
  cVar2 = func_0x00b55030(param_3,param_4,aiStack_20,uVar3);
  if (cVar2 != '\0') {
    param_4 = aiStack_20[0];
  }
  aiStack_20[3] = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar5 = aiStack_20[3];
  if (*(int *)(aiStack_20[3] + 0x830) != 0) {
    func_0x00ab6ac0(0x8d40,*(undefined4 *)(param_1 + 8));
    pcVar1 = *(code **)(iVar5 + 0x830);
    _guard_check_icall(0x8d40,param_3,param_4,*param_5,param_5[1],param_5[2],param_5[3]);
    (*pcVar1)();
  }
  if (aiStack_20[0] != 0) {
    uVar3 = aiStack_20[2] - aiStack_20[0] & 0xfffffffc;
    iVar5 = aiStack_20[0];
    if (0xfff < uVar3) {
      iVar5 = *(int *)(aiStack_20[0] + -4);
      uVar3 = uVar3 + 0x23;
      if (0x1f < (aiStack_20[0] - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    func_0x008ab812(iVar5,uVar3);
  }
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4
FUN_00b55140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_EBP;
  int unaff_EDI;
  undefined8 uVar12;
  int unaff_retaddr;
  char *pcVar13;
  int iVar14;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int aiStack_4c [8];
  int iStack_2c;
  undefined4 uStack_1c;
  int iStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  int iStack_4;
  
  iStack_74 = *(int *)(param_1 + 0x1d14);
  iStack_70 = func_0x00a01ee0(param_1);
  uStack_5c = func_0x00a02140(param_1);
  uVar6 = func_0x00a01ed0(param_1);
  uStack_1c = *param_5;
  iStack_18 = param_5[1];
  piStack_14 = (int *)param_5[2];
  uStack_10 = param_5[3];
  uStack_c = *(undefined8 *)(param_5 + 4);
  iStack_4 = param_5[6];
  uStack_64 = uVar6;
  iStack_6c = func_0x0098da40(param_3);
  iVar7 = iStack_6c + 8;
  pcVar1 = *(code **)(**(int **)(iStack_6c + 0x18) + 4);
  _guard_check_icall(aiStack_4c,iVar7);
  (*pcVar1)();
  aiStack_4c[7] = iStack_54;
  iStack_2c = iStack_50;
  aiStack_4c[5] = 0;
  aiStack_4c[6] = 0;
  aiStack_4c[1] = 0;
  aiStack_4c[2] = 0;
  aiStack_4c[3] = 0;
  aiStack_4c[4] = 0;
  cVar3 = func_0x00953b30(iStack_4,aiStack_4c + 5,aiStack_4c + 1);
  if (cVar3 == '\0') {
    return 0;
  }
  pcVar1 = *(code **)(**(int **)(iStack_74 + 0x18) + 8);
  _guard_check_icall(&iStack_74,*(undefined4 *)(iStack_74 + 4),iStack_74 + 8);
  (*pcVar1)();
  uVar8 = func_0x0094ae30(param_1 + 0x1278);
  uVar12 = func_0x00acf130(param_3,uVar6,uVar8,uStack_10,(undefined4)uStack_c);
  iVar11 = (int)((ulonglong)uVar12 >> 0x20);
  iVar9 = (int)uVar12;
  if ((((*(char *)(unaff_EBP + 0x4b0) != '\0') && (iVar11 == 0x1403)) && (iVar9 != 0x1903)) &&
     (((iVar9 != 0x8227 && (iVar9 != 0x1908)) &&
      ((iVar9 != 0x1902 || (*(char *)(param_1 + 0x12cf) == '\0')))))) {
    uVar6 = 0x2b4;
    pcVar13 = 
    "glReadPixels: GL_IMPLEMENTATION_COLOR_READ_FORMAT advertised by the driver is not handled by RGBA16 readPixels workaround."
    ;
LAB_00b552d4:
    func_0x0098f180(0x502,pcVar13,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\FramebufferGL.cpp"
                    ,"rx::FramebufferGL::readPixels",uVar6);
    return 1;
  }
  uVar6 = 0x8d40;
  if (*(char *)(iStack_78 + 0x16e2) != '\0') {
    uVar6 = 0x8ca8;
  }
  iVar14 = iVar11;
  func_0x00ab6ac0(uVar6,*(undefined4 *)(unaff_EDI + 8));
  if (((*(char *)(unaff_EBP + 0x108) == '\0') || (iStack_4 == 0)) ||
     ((aiStack_4c[6] == 0 || (cVar3 = '\x01', iStack_50 <= aiStack_4c[6])))) {
    cVar3 = '\0';
  }
  iStack_74 = iStack_58 - *piStack_14;
  if ((iStack_74 != 0) || (iStack_54 != piStack_14[1])) {
    iVar10 = func_0x00946bf0(uVar12);
    cVar4 = func_0x0094abf0(iVar11,piStack_14[2],aiStack_4c[5],aiStack_4c[6],&stack0xffffff7c);
    if (cVar4 == '\0') {
      uVar6 = 0x2ca;
      pcVar13 = "Integer overflow.";
      goto LAB_00b552d4;
    }
    unaff_retaddr = *(int *)(iVar10 + 0x2c) * iStack_74 + unaff_retaddr;
  }
  if ((aiStack_4c[6] != 0) ||
     ((iVar11 = piStack_14[2], iStack_50 != iVar11 && (aiStack_4c[6] = iVar11, iVar11 != 0)))) {
    pcVar1 = *(code **)(**(int **)(iStack_18 + 0x1d14) + 0xf0);
    _guard_check_icall();
    iVar11 = (*pcVar1)();
    if (*(char *)(iVar11 + 0x4f) == '\0') {
      bVar2 = true;
      goto LAB_00b5541f;
    }
  }
  bVar2 = false;
LAB_00b5541f:
  if ((*(char *)(unaff_EBP + 0x5b8) == '\0') || ((aiStack_4c[7] == 0 && (iStack_2c == 0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((!bVar2) && (cVar3 == '\0')) && (!bVar5)) {
    if (*(char *)(unaff_EBP + 0x180) != '\0') {
      iStack_70 = iStack_50;
      iStack_6c = aiStack_4c[0];
      uStack_68 = 1;
      iVar7 = func_0x00a03d90(iVar7,&iStack_70,aiStack_4c + 5,iStack_4,iVar9,iVar14,0,unaff_retaddr,
                              &stack0xffffff84);
      if (iVar7 == 1) {
        return 1;
      }
    }
    uVar6 = func_0x00b55520(iStack_18,&iStack_58,uStack_10,iVar9,iVar14,aiStack_4c + 5,unaff_retaddr
                            ,0);
    return uVar6;
  }
  uVar6 = func_0x00b557b0(iStack_18,&iStack_58,uStack_10,iVar9,iVar14,aiStack_4c + 5,unaff_retaddr);
  return uVar6;
}



undefined4 __thiscall FUN_00b55ac0(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_EBX;
  undefined4 unaff_EBP;
  uint uVar9;
  int unaff_ESI;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piStack_10;
  undefined4 uStack_8;
  
  cVar3 = func_0x0098ddb0();
  if (cVar3 != '\0') {
    return 0;
  }
  func_0x00a01ee0(param_2);
  iVar5 = func_0x00a02140(param_2);
  func_0x00ab6ac0(0x8d40,*(undefined4 *)(param_1 + 8));
  piVar11 = (int *)0x0;
  uVar9 = *param_2;
  iVar10 = param_1;
  if (uVar9 != 0) {
    do {
      uVar2 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      switch(uVar2) {
      case 8:
        piStack_10 = (int *)func_0x0098d490();
        uVar8 = func_0x00a01ed0(iVar5);
        uVar12 = 0x8d00;
        goto LAB_00b55b57;
      case 9:
        piStack_10 = (int *)func_0x0098db90();
        uVar8 = func_0x00a01ed0(iVar5);
        uVar12 = 0x8d20;
LAB_00b55b57:
        func_0x00b53250(unaff_EBX,uVar12,piStack_10,uVar8);
        if (piStack_10 != (int *)0x0) {
          piVar11 = piStack_10;
        }
        goto LAB_00b55be3;
      default:
        if (uVar2 < 8) {
          piVar7 = (int *)func_0x0098d420(uVar2);
          uVar8 = func_0x00a01ed0(uStack_8);
          func_0x00b53250(unaff_EBP,uVar2 + 0x8ce0,piVar7,uVar8);
          if (piVar7 != (int *)0x0) {
            piVar11 = piVar7;
          }
          iVar10 = unaff_ESI;
          if (uVar2 == 0) {
            if ((piVar11 == (int *)0x0) || (*piVar11 != 0x1702)) {
              *(undefined1 *)(unaff_ESI + 0xc) = 0;
            }
            else {
              func_0x00969240();
              uVar4 = func_0x00b5ebe0(piVar11 + 2);
              *(undefined1 *)(unaff_ESI + 0xc) = uVar4;
            }
          }
        }
        goto LAB_00b55be3;
      case 0x14:
        pcVar1 = *(code **)(unaff_EBX + 0x1e0);
        _guard_check_icall(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x208),
                           *(int *)(iVar10 + 4) + 0x1e8);
        (*pcVar1)();
        *(undefined1 *)(unaff_ESI + 0xd) = *(undefined1 *)(*(int *)(unaff_ESI + 4) + 0x210);
        iVar10 = unaff_ESI;
        goto LAB_00b55be3;
      case 0x15:
        pcVar1 = *(code **)(unaff_EBX + 0x90);
        _guard_check_icall(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x20c));
        (*pcVar1)();
        iVar10 = unaff_ESI;
        goto LAB_00b55be3;
      case 0x16:
        uVar6 = *(uint *)(*(int *)(iVar10 + 4) + 0x218);
        uVar8 = 0x9310;
        break;
      case 0x17:
        uVar6 = *(uint *)(*(int *)(iVar10 + 4) + 0x21c);
        uVar8 = 0x9311;
        break;
      case 0x18:
        uVar6 = *(uint *)(*(int *)(iVar10 + 4) + 0x220);
        uVar8 = 0x9313;
        break;
      case 0x19:
        uVar6 = (uint)*(byte *)(*(int *)(iVar10 + 4) + 0x224);
        uVar8 = 0x9314;
        break;
      case 0x1a:
        uVar6 = *(uint *)(*(int *)(iVar10 + 4) + 0x228);
        uVar8 = 0x9312;
        break;
      case 0x1c:
        uVar6 = (uint)*(byte *)(*(int *)(iVar10 + 4) + 0x22c);
        uVar8 = 0x8bbb;
      }
      pcVar1 = *(code **)(unaff_EBX + 0x7f0);
      _guard_check_icall(0x8d40,uVar8,uVar6);
      (*pcVar1)();
      iVar10 = unaff_ESI;
LAB_00b55be3:
      uVar9 = uVar9 & ~(1 << (uVar2 & 0x1f));
    } while (uVar9 != 0);
    if ((((piVar11 != (int *)0x0) &&
         (**(int **)(iVar10 + 4) == *(int *)(*(int *)(iVar5 + 0x14e8) + 0x38))) &&
        (*(char *)(param_1 + 0x16ec) != '\0')) &&
       ((iVar5 = *(int *)(iVar5 + 0x14f4), iVar5 != 0 && (*(int *)(iVar5 + 0xac) != -1)))) {
      func_0x00abaeb0(iVar5,*(int **)(iVar10 + 4));
    }
  }
  return 0;
}



undefined4 * __thiscall FUN_00b55df0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::MemoryObjectImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b55e20(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::MemoryObjectImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00b55e50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00a01ee0(param_2);
  pcVar1 = *(code **)(iVar2 + 0xabc);
  uVar3 = func_0x008babe0(param_5);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),param_3,param_4,uVar3,param_6);
  (*pcVar1)();
  return 0;
}



void __thiscall FUN_00b55e90(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = func_0x00a01ee0(param_2);
  pcVar1 = *(code **)(iVar2 + 0xa80);
  _guard_check_icall(1,(undefined4 *)(param_1 + 4));
  (*pcVar1)();
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



undefined4 __thiscall FUN_00b55ed0(uint param_1,undefined4 param_2,byte param_3)

{
  code *pcVar1;
  int iVar2;
  uint uStack_4;
  
  uStack_4 = param_1;
  iVar2 = func_0x00a01ee0(param_2);
  uStack_4 = (uint)param_3;
  pcVar1 = *(code **)(iVar2 + 0xa94);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),0x9581,&uStack_4);
  (*pcVar1)();
  return 0;
}



void __fastcall FUN_00b56570(int param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  char *pcStack_18;
  char *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f65fd9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de994) {
    func_0x008ab40d(&DAT_013de994,uVar4);
    if (DAT_013de994 == -1) {
      uStack_8 = 0;
      uVar5 = func_0x0093d430("gpu.angle");
      DAT_013de990 = (char *)func_0x009b9170(uVar5);
      func_0x008ab3bc(&DAT_013de994);
    }
  }
  pcVar2 = DAT_013de990;
  puStack_20 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de990 != '\0') {
    uVar5 = func_0x0093d430();
    func_0x009b90e0(uVar5,0x42,pcVar2,"ProgramGL::LinkTask::run",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de990;
    uStack_1c = func_0x0093d430();
    puStack_20 = &uStack_1c;
    pcStack_18 = pcVar2;
    pcStack_14 = "ProgramGL::LinkTask::run";
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
    _guard_check_icall(param_1 + 0x34);
    uVar3 = (*pcVar1)();
    *(undefined1 *)(param_1 + 0x30) = uVar3;
    uStack_8 = 2;
    if ((puStack_20 != (undefined4 *)0x0) && (*(char *)puStack_20[1] != '\0')) {
      func_0x009b90e0(*puStack_20,0x45,(char *)puStack_20[1],puStack_20[2],0,0,0,0,0,0,0);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00b566d0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x60);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b56700(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar2 = (int *)param_1[0xf];
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(piVar2 != param_1 + 6);
    (*pcVar3)();
    param_1[0xf] = 0;
  }
  piVar2 = (int *)param_1[4];
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
  piVar2 = (int *)param_1[2];
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
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  *param_1 = rx::LinkEvent::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b567d0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != param_1 + 2);
    (*pcVar2)();
    param_1[0xb] = 0;
  }
  *param_1 = rx::LinkEvent::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



int __thiscall FUN_00b56830(int param_1,byte param_2)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (0xf < uVar1) {
    iVar5 = *(int *)(param_1 + 0x34);
    uVar6 = uVar1 + 1;
    iVar4 = iVar5;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar5 + -4);
      uVar6 = uVar1 + 0x24;
      if (0x1f < (iVar5 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(piVar2 != (int *)(param_1 + 8));
    (*pcVar3)();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x50);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b568d0(undefined4 param_1,byte param_2)

{
  func_0x00b56250();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x44);
  }
  return param_1;
}



void __thiscall FUN_00b568f0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b56910(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b56930(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b56950(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b56970(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b56990(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 4);
  param_2[3] = *(undefined4 *)(param_1 + 0xc);
  return;
}



void __thiscall FUN_00b569b0(undefined4 param_1,char param_2)

{
  if (param_2 != '\0') {
    func_0x008ab812(param_1,0x10);
  }
  return;
}



void __fastcall FUN_00b569d0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x44);
    uVar6 = uVar1 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      uVar6 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar5) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar5,uVar6);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xf;
  *(undefined1 *)(param_1 + 0x44) = 0;
  piVar3 = *(int **)(param_1 + 0x3c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x18));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



void __thiscall FUN_00b56a50(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 unaff_EDI;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [32];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_30;
  iVar1 = *(int *)(param_1 + 4);
  param_4 = (undefined4 *)*param_4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x810);
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34));
  iVar3 = (*pcVar2)();
  if (iVar3 == -1) {
    *param_4 = 0xffffffff;
    param_4[1] = 0xffffffff;
    param_4[2] = 0xffffffff;
    param_4[3] = 0;
    param_4[4] = 0xffffffff;
    FUN_008ab370();
    return;
  }
  uStack_30 = 0x92ff;
  uStack_2c = 0x92fc;
  uStack_28 = 0x930d;
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x820);
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34),0x92e5,iVar3,5,&stack0xffffffc8,5,
                     &stack0xffffffc4,auStack_24);
  (*pcVar2)();
  param_4[1] = 0x92e5;
  *(bool *)(param_4 + 3) = param_3 != (undefined4 *)0x0;
  param_4[2] = unaff_EDI;
  *param_4 = 0x92fe;
  param_4[4] = 0x9300;
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_00b56b60(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 **ppuStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 **ppuStack_20;
  undefined1 *puStack_1c;
  undefined1 auStack_c [8];
  undefined4 *puStack_4;
  
  iVar1 = *(int *)(param_1 + 4);
  param_4 = (undefined4 *)*param_4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  puStack_1c = auStack_c;
  ppuStack_20 = &puStack_4;
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x4b4);
  uStack_24 = 1;
  uStack_28 = *(undefined4 *)(iVar1 + 0x34);
  puStack_2c = (undefined4 *)0xb56b9f;
  puStack_4 = param_3;
  _guard_check_icall();
  puStack_2c = (undefined4 *)0xb56ba1;
  (*pcVar2)();
  if (puStack_1c == (undefined1 *)0xffffffff) {
    *param_4 = 0xffffffff;
    param_4[1] = 0xffffffff;
    param_4[2] = 0xffffffff;
    param_4[3] = 0;
    param_4[4] = 0xffffffff;
    return 0;
  }
  ppuStack_34 = &puStack_1c;
  uStack_30 = 0x8a3b;
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x4ac);
  uStack_38 = 1;
  uStack_3c = *(undefined4 *)(iVar1 + 0x34);
  puStack_40 = (undefined4 *)0xb56be6;
  puStack_2c = param_4;
  _guard_check_icall();
  puStack_40 = (undefined4 *)0xb56be8;
  (*pcVar2)();
  puStack_40 = param_4 + 1;
  uStack_44 = 0x8a3c;
  puStack_48 = &uStack_30;
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x4ac);
  uStack_4c = 1;
  uStack_50 = *(undefined4 *)(iVar1 + 0x34);
  puStack_54 = (undefined4 *)0xb56c0c;
  _guard_check_icall();
  puStack_54 = (undefined4 *)0xb56c0e;
  (*pcVar2)();
  puStack_54 = param_4 + 2;
  uStack_58 = 0x8a3d;
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x4ac);
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34),1,&uStack_44);
  (*pcVar2)();
  puStack_54 = (undefined4 *)0x0;
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x4ac);
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34),1,&uStack_58,0x8a3e);
  (*pcVar2)();
  *(bool *)(param_4 + 3) = &stack0x00000000 != (undefined1 *)0x54;
  return 1;
}



undefined4 __thiscall
FUN_00b56c80(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)*param_4;
  pcVar3 = *(code **)(*(int *)(iVar1 + 8) + 0x4b0);
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34),param_3);
  iVar4 = (*pcVar3)();
  if (iVar4 == -1) {
    *piVar2 = 0;
    return 0xffffff00;
  }
  pcVar3 = *(code **)(*(int *)(iVar1 + 8) + 0x4a4);
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34),iVar4,0x8a40);
  (*pcVar3)();
  *piVar2 = (int)&stack0xfffffff4;
  return CONCAT31((int3)((uint)&stack0xfffffff4 >> 8),1);
}



void __fastcall FUN_00b56d00(int param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined4 uStack_30;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f66015;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  aiStack_2c[4] = 0;
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0;
  uStack_8 = 0;
  func_0x00a06060(*(undefined4 *)(*(int *)(param_1 + 4) + 0x38),aiStack_2c,aiStack_2c[6]);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  cVar2 = func_0x00a06370();
  if (cVar2 == '\0') {
    func_0x00a06320();
    if (0xf < (uint)aiStack_2c[5]) {
      uVar3 = aiStack_2c[5] + 1;
      iVar4 = aiStack_2c[0];
      if (0xfff < uVar3) {
        iVar4 = *(int *)(aiStack_2c[0] + -4);
        uVar3 = aiStack_2c[5] + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar4) - 4U) {
LAB_00b56e47:
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(iVar4,uVar3);
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x230);
    _guard_check_icall(*(undefined4 *)(*(int *)(param_1 + 4) + 0x34));
    (*pcVar1)();
    uStack_30 = 0;
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x1fc);
    _guard_check_icall(*(undefined4 *)(*(int *)(param_1 + 4) + 0x34),0x8b82,&uStack_30);
    (*pcVar1)();
    func_0x00a06320();
    if (0xf < (uint)aiStack_2c[5]) {
      uVar3 = aiStack_2c[5] + 1;
      iVar4 = aiStack_2c[0];
      if (0xfff < uVar3) {
        iVar4 = *(int *)(aiStack_2c[0] + -4);
        uVar3 = aiStack_2c[5] + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar4) - 4U) goto LAB_00b56e47;
      }
      func_0x008ab812(iVar4,uVar3);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall
FUN_00b56e50(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  param_4 = (undefined4 *)*param_4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x810);
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34),0x92e6,param_3);
  iVar3 = (*pcVar2)();
  if (iVar3 == -1) {
    *param_4 = 0;
    return 0;
  }
  uVar4 = 1;
  pcVar2 = *(code **)(*(int *)(iVar1 + 8) + 0x820);
  _guard_check_icall(*(undefined4 *)(iVar1 + 0x34),0x92e6,iVar3,1,&stack0xfffffff0,1,
                     &stack0xffffffec,&stack0xffffffe8);
  (*pcVar2)();
  *param_4 = uVar4;
  return 1;
}



undefined4 __thiscall FUN_00b56f00(int param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 *puVar10;
  int *unaff_FS_OFFSET;
  int iStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  cVar5 = *param_2;
  piVar9 = (int *)(param_1 + 4);
  puStack_c = &DAT_00f65fa0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar2 = *(int **)(param_1 + 8);
  iStack_8 = 0;
  if (*piVar2 == 0) {
    iVar7 = func_0x008ab47d(0xb0,uVar6);
    iStack_8._0_1_ = 1;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = func_0x004687a0(1);
    }
    piVar3 = (int *)*piVar2;
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    *piVar2 = iVar7;
    if (piVar3 != (int *)0x0) {
      pcVar4 = (code *)**(undefined4 **)(*(int *)(*piVar3 + 4) + (int)piVar3);
      _guard_check_icall(1);
      (*pcVar4)();
    }
  }
  puVar1 = param_3 + 4;
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  func_0x0046cb10(*piVar2 + 0x10,param_3,*puVar1);
  iStack_8 = 0xffffffff;
  func_0x008c2b20();
  if (cVar5 != '\0') {
    pcVar4 = *(code **)(*(int *)(*piVar9 + 8) + 0x230);
    _guard_check_icall(*(undefined4 *)(*piVar9 + 0x34));
    (*pcVar4)();
  }
  iVar7 = func_0x009817b0(5);
  if (iVar7 == 0) {
    puVar10 = &DAT_01024994;
    do {
      iVar7 = func_0x009817b0(*puVar10);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x104) != 0)) {
        pcVar4 = *(code **)(*(int *)(*piVar9 + 8) + 0x1d8);
        uVar8 = FUN_004b5b20();
        _guard_check_icall(*(undefined4 *)(*piVar9 + 0x34),uVar8);
        (*pcVar4)();
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != &UNK_01024999);
  }
  else {
    func_0x009817b0(5);
    pcVar4 = *(code **)(*(int *)(*piVar9 + 8) + 0x1d8);
    uVar8 = FUN_004b5b20();
    _guard_check_icall(*(undefined4 *)(*piVar9 + 0x34),uVar8);
    (*pcVar4)();
  }
  cVar5 = func_0x00b56f80(*(undefined4 *)(param_1 + 8));
  if (cVar5 == '\0') {
    *unaff_FS_OFFSET = iStack_10;
    return 2;
  }
  if (*(char *)(*(int *)(*piVar9 + 0xc) + 0xd8) != '\0') {
    func_0x00ab7550(*(undefined4 *)(*piVar9 + 0x34));
  }
  func_0x00b58480(*(undefined4 *)(param_1 + 0xc));
  func_0x00b589a0();
  *unaff_FS_OFFSET = iStack_10;
  return 0;
}



TypeDescriptor * FUN_00b56f20(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b56f30(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b56f40(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b56f50(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b56f60(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b56f70(void)

{
  return &<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00b57440(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x210);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                     *(undefined4 *)(*(int *)(param_1 + 0x14) + param_3 * 4),param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b57470(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x214);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                     *(undefined4 *)(*(int *)(param_1 + 0x14) + param_3 * 4),param_4);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b574a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x3ec);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                     *(undefined4 *)(*(int *)(param_1 + 0x14) + param_3 * 4),param_4);
  (*pcVar1)();
  return;
}



bool __fastcall FUN_00b574d0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar2 = 0x91b1;
  uStack_4 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x30) + 0x1fc);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0x91b1,&uStack_4);
  (*pcVar1)();
  return iVar2 == 0;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void __thiscall
FUN_00b57510(int param_1,code *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  code *pcVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  undefined4 uVar14;
  undefined4 *puStack_f8;
  undefined4 uStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int iStack_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  code *pcStack_d0;
  int iStack_cc;
  code *pcStack_c8;
  code *pcStack_c4;
  code *pcStack_c0;
  code *pcStack_bc;
  code *pcStack_b8;
  undefined4 *puStack_b4;
  code *pcStack_b0;
  uint uStack_ac;
  code *pcStack_a8;
  undefined **ppuStack_a4;
  int iStack_a0;
  undefined ***pppuStack_80;
  undefined **ppuStack_7c;
  int iStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined ***pppuStack_58;
  undefined **ppuStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined ***pppuStack_30;
  uint auStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66208;
  iStack_10 = *unaff_FS_OFFSET;
  auStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_b8 = param_2;
  pcStack_d0 = param_2;
  uStack_e8 = 0;
  puStack_b4 = param_3;
  iStack_cc = param_1;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de9ac) &&
     (func_0x008ab40d(&DAT_013de9ac,auStack_2c[6]), DAT_013de9ac == -1)) {
    uStack_8 = 0;
    uVar3 = func_0x0093d430("gpu.angle");
    DAT_013de9a8 = (char *)func_0x009b9170(uVar3);
    func_0x008ab3bc(&DAT_013de9ac);
  }
  pcVar10 = DAT_013de9a8;
  puStack_f8 = (undefined4 *)0x0;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  if (*DAT_013de9a8 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar10,"ProgramGL::link",0,0,0,0,0,0,0);
    pcVar10 = DAT_013de9a8;
    uStack_f4 = func_0x0093d430();
    puStack_f8 = &uStack_f4;
    pcStack_f0 = pcVar10;
    pcStack_ec = "ProgramGL::link";
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  iVar4 = func_0x009817b0(5);
  if (iVar4 == 0) {
    pcStack_c8 = (code *)0x0;
    pcStack_c4 = (code *)0x0;
    pcStack_c0 = (code *)0x0;
    uVar11 = *(uint *)(*(int *)(param_1 + 4) + 0x40);
    uStack_ac = *(uint *)(*(int *)(param_1 + 4) + 0x44);
    uStack_8._0_1_ = 2;
    if (uVar11 != uStack_ac) {
      do {
        pcStack_b0 = (code *)(CONCAT31(pcStack_b0._1_3_,
                                       -((*(byte *)(*(int *)(*(int *)(param_1 + 4) + 0xa4) + 0x34) &
                                         8) != 0)) & 0xffffff03);
        func_0x009817b0(pcStack_b0);
        func_0x0096eaa0(auStack_2c,puStack_b4,uVar11);
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        if (pcStack_c4 == pcStack_c0) {
          func_0x0056eba0(pcStack_c4,auStack_2c);
        }
        else {
          func_0x00469da0();
          pcStack_c4 = pcStack_c4 + 0x18;
        }
        uStack_8._0_1_ = 2;
        if (0xf < auStack_2c[5]) {
          uVar8 = auStack_2c[5] + 1;
          uVar9 = auStack_2c[0];
          if (0xfff < uVar8) {
            uVar9 = *(uint *)(auStack_2c[0] - 4);
            uVar8 = auStack_2c[5] + 0x24;
            if (0x1f < (auStack_2c[0] - uVar9) - 4) goto LAB_00b58468;
          }
          func_0x008ab812(uVar9,uVar8);
        }
        uVar11 = uVar11 + 0x18;
      } while (uVar11 != uStack_ac);
    }
    pcVar6 = pcStack_c4;
    if (pcStack_c8 != pcStack_c4) {
      iStack_dc = 0;
      puStack_d8 = (undefined4 *)0x0;
      puStack_d4 = (undefined4 *)0x0;
      uStack_8 = CONCAT31(uStack_8._1_3_,4);
      pcVar12 = pcStack_c8;
      do {
        pcStack_b0 = pcVar12;
        if (0xf < *(uint *)(pcVar12 + 0x14)) {
          pcStack_b0 = *(code **)pcVar12;
        }
        if (puStack_d8 == puStack_d4) {
          func_0x008c0640(puStack_d8,&pcStack_b0);
        }
        else {
          *puStack_d8 = pcStack_b0;
          puStack_d8 = puStack_d8 + 1;
        }
        pcVar12 = pcVar12 + 0x18;
      } while (pcVar12 != pcVar6);
      pcVar6 = *(code **)(*(int *)(iStack_cc + 8) + 0x41c);
      _guard_check_icall(*(undefined4 *)(iStack_cc + 0x34),
                         ((int)pcStack_c4 - (int)pcStack_c8) / 0x18,iStack_dc,
                         *(undefined4 *)(*(int *)(*(int *)(iStack_cc + 4) + 0xa4) + 0x3c0));
      (*pcVar6)();
      param_1 = iStack_cc;
      uStack_8._0_1_ = 2;
      *(undefined1 *)(iStack_cc + 0x2c) = 1;
      if (iStack_dc == 0) goto LAB_00b5789e;
      uVar11 = ((int)puStack_d4 - iStack_dc >> 2) * 4;
      iVar4 = iStack_dc;
      if (uVar11 < 0x1000) {
LAB_00b57894:
        func_0x008ab812(iVar4,uVar11);
        goto LAB_00b5789e;
      }
      iVar4 = *(int *)(iStack_dc + -4);
      uVar11 = uVar11 + 0x23;
      if ((iStack_dc - iVar4) - 4U < 0x20) goto LAB_00b57894;
LAB_00b58468:
      uStack_8._0_1_ = 2;
      func_0x008aaf66();
LAB_00b5846d:
      func_0x008aaf66();
      goto LAB_00b58472;
    }
    if (*(char *)(param_1 + 0x2c) != '\0') {
      pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x41c);
      _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0,0,
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xa4) + 0x3c0));
      (*pcVar6)();
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
LAB_00b5789e:
    pcStack_b0 = (code *)&DAT_01024994;
    do {
      uStack_ac = CONCAT31(uStack_ac._1_3_,*pcStack_b0);
      iVar4 = func_0x009817b0(uStack_ac);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x104) != 0)) {
        pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x1b8);
        uVar3 = FUN_004b5b20();
        _guard_check_icall(*(undefined4 *)(param_1 + 0x34),uVar3);
        (*pcVar6)();
      }
      pcStack_b0 = pcStack_b0 + 1;
    } while (pcStack_b0 != (code *)&UNK_01024999);
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0xa4);
    uVar11 = *(uint *)(iVar4 + 0x3a0);
    uVar9 = *(uint *)(iVar4 + 0x39c);
    pcStack_b0 = (code *)&UNK_01024999;
    uStack_ac = uVar11;
    if (uVar9 != uVar11) {
      do {
        if ((*(char *)(uVar9 + 0x45) != '\0') &&
           (cVar2 = func_0x009c4350(), uVar11 = uStack_ac, cVar2 == '\0')) {
          pcStack_b0 = *(code **)(*(int *)(param_1 + 8) + 0x1bc);
          piVar5 = (int *)(uVar9 + 0x20);
          if (0xf < *(uint *)(uVar9 + 0x34)) {
            piVar5 = (int *)*piVar5;
          }
          _guard_check_icall(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(uVar9 + 0x88),piVar5);
          (*pcStack_b0)();
          uVar11 = uStack_ac;
        }
        uVar9 = uVar9 + 0xb4;
      } while (uVar9 != uVar11);
    }
    puVar7 = puStack_b4;
    if (*(char *)((int)puStack_b4 + 0x127a) != '\0') {
      iVar4 = func_0x009817b0(4);
      if ((iVar4 == 0) || (iVar4 = func_0x0096e980(puVar7), iVar4 != 100)) {
        uStack_ac = 0;
        pcStack_b0 = *(code **)(*(int *)(param_1 + 4) + 0xa4);
        iVar4 = *(int *)(pcStack_b0 + 0x37c);
        iVar1 = *(int *)(pcStack_b0 + 0x380) - iVar4 >> 0x1f;
        if ((*(int *)(pcStack_b0 + 0x380) - iVar4) / 0xc + iVar1 != iVar1) {
          pcStack_a8 = (code *)0x0;
          do {
            if ((((*(int *)(pcStack_a8 + iVar4) == 0) && (*(int *)(pcStack_a8 + iVar4 + 4) != -1))
                && (pcStack_a8[iVar4 + 8] == (code)0x0)) &&
               ((iVar4 = *(int *)(pcStack_a8 + iVar4 + 4) * 0xb4 +
                         *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xa4) + 0x370),
                *(int *)(iVar4 + 0x88) == -1 || (*(int *)(iVar4 + 0xa0) == -1)))) {
              puVar7 = (undefined4 *)(iVar4 + 0x20);
              pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x510);
              if (0xf < *(uint *)(iVar4 + 0x34)) {
                puVar7 = (undefined4 *)*puVar7;
              }
              _guard_check_icall(*(undefined4 *)(param_1 + 0x34),uStack_ac,0,puVar7);
              (*pcVar6)();
            }
            uStack_ac = uStack_ac + 1;
            pcStack_a8 = pcStack_a8 + 0xc;
            iVar4 = *(int *)(pcStack_b0 + 0x37c);
          } while (uStack_ac < (uint)((*(int *)(pcStack_b0 + 0x380) - iVar4) / 0xc));
        }
        uStack_ac = 0;
        iVar4 = *(int *)(pcStack_b0 + 0x38c);
        iVar1 = *(int *)(pcStack_b0 + 0x390) - iVar4 >> 0x1f;
        if ((*(int *)(pcStack_b0 + 0x390) - iVar4) / 0xc + iVar1 != iVar1) {
          pcStack_a8 = (code *)0x0;
          do {
            if (((*(int *)(pcStack_a8 + iVar4) == 0) && (*(int *)(pcStack_a8 + iVar4 + 4) != -1)) &&
               ((pcStack_a8[iVar4 + 8] == (code)0x0 &&
                ((iVar4 = *(int *)(pcStack_a8 + iVar4 + 4) * 0xb4 +
                          *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xa4) + 0x370),
                 *(int *)(iVar4 + 0x88) == -1 || (*(int *)(iVar4 + 0xa0) == -1)))))) {
              puVar7 = (undefined4 *)(iVar4 + 0x20);
              pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x510);
              if (0xf < *(uint *)(iVar4 + 0x34)) {
                puVar7 = (undefined4 *)*puVar7;
              }
              _guard_check_icall(*(undefined4 *)(param_1 + 0x34),uStack_ac,1,puVar7);
              (*pcVar6)();
            }
            uStack_ac = uStack_ac + 1;
            pcStack_a8 = pcStack_a8 + 0xc;
            iVar4 = *(int *)(pcStack_b0 + 0x38c);
          } while (uStack_ac < (uint)((*(int *)(pcStack_b0 + 0x390) - iVar4) / 0xc));
        }
      }
      else {
        func_0x009817b0(4);
        puVar7 = (undefined4 *)func_0x0096e760(puVar7);
        pcStack_b8 = (code *)puVar7[1];
        pcStack_b0 = (code *)*puVar7;
        if (pcStack_b0 != pcStack_b8) {
          pcStack_a8 = pcStack_b0 + 8;
          do {
            pcStack_bc = *(code **)(pcStack_a8 + 0x14);
            uStack_ac = *(uint *)(pcStack_a8 + 0x10);
            pcVar6 = pcStack_a8;
            if (&DAT_0000000f < pcStack_bc) {
              pcVar6 = *(code **)pcStack_a8;
            }
            if (uStack_ac == 0x18) {
              pcVar10 = "gl_SecondaryFragColorEXT";
              uVar11 = 0x14;
              do {
                if (*(int *)pcVar6 != *(int *)pcVar10) {
                  bVar13 = (byte)*pcVar6 < (byte)*pcVar10;
                  if ((((*pcVar6 == (code)*pcVar10) &&
                       (bVar13 = (byte)pcVar6[1] < (byte)((code *)pcVar10)[1],
                       pcVar6[1] == ((code *)pcVar10)[1])) &&
                      (bVar13 = (byte)pcVar6[2] < (byte)((code *)pcVar10)[2],
                      pcVar6[2] == ((code *)pcVar10)[2])) &&
                     (bVar13 = (byte)pcVar6[3] < (byte)((code *)pcVar10)[3],
                     pcVar6[3] == ((code *)pcVar10)[3])) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = -(uint)bVar13 | 1;
                  }
                  goto LAB_00b57a5c;
                }
                pcVar6 = pcVar6 + 4;
                pcVar10 = (char *)((code *)pcVar10 + 4);
                bVar13 = 3 < uVar11;
                uVar11 = uVar11 - 4;
              } while (bVar13);
              uVar11 = 0;
LAB_00b57a5c:
              if (uVar11 != 0) goto LAB_00b57aa0;
              pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x510);
              _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0,0,"webgl_FragColor");
              (*pcVar6)();
              pcVar10 = "webgl_SecondaryFragColor";
LAB_00b57b2a:
              pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x510);
              _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0,1,pcVar10);
              (*pcVar6)();
            }
            else {
LAB_00b57aa0:
              pcVar6 = pcStack_a8;
              if (&DAT_0000000f < pcStack_bc) {
                pcVar6 = *(code **)pcStack_a8;
              }
              if (uStack_ac == 0x17) {
                pcVar10 = "gl_SecondaryFragDataEXT";
                uVar11 = 0x13;
                do {
                  if (*(int *)pcVar6 != *(int *)pcVar10) break;
                  pcVar6 = pcVar6 + 4;
                  pcVar10 = (char *)((code *)pcVar10 + 4);
                  bVar13 = 3 < uVar11;
                  uVar11 = uVar11 - 4;
                } while (bVar13);
                bVar13 = (byte)*pcVar6 < (byte)*pcVar10;
                if (((*pcVar6 == (code)*pcVar10) &&
                    (bVar13 = (byte)pcVar6[1] < (byte)((code *)pcVar10)[1],
                    pcVar6[1] == ((code *)pcVar10)[1])) &&
                   ((bVar13 = (byte)pcVar6[2] < (byte)((code *)pcVar10)[2],
                    pcVar6[2] == ((code *)pcVar10)[2] &&
                    ((uVar11 == 0xffffffff ||
                     (bVar13 = (byte)pcVar6[3] < (byte)((code *)pcVar10)[3],
                     pcVar6[3] == ((code *)pcVar10)[3])))))) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = -(uint)bVar13 | 1;
                }
                if (uVar11 == 0) {
                  pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x510);
                  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0,0,"webgl_FragData");
                  (*pcVar6)();
                  pcVar10 = "webgl_SecondaryFragData";
                  goto LAB_00b57b2a;
                }
              }
            }
            pcStack_a8 = pcStack_a8 + 0xb4;
            pcStack_b0 = pcStack_b0 + 0xb4;
          } while (pcStack_b0 != pcStack_b8);
        }
      }
    }
    uStack_8._0_1_ = 1;
    if (pcStack_c8 != (code *)0x0) {
      func_0x004e7c10(pcStack_c8,pcStack_c4,&pcStack_c8);
      uVar11 = (((int)pcStack_c0 - (int)pcStack_c8) / 0x18) * 0x18;
      pcVar6 = pcStack_c8;
      if (0xfff < uVar11) {
        pcVar6 = *(code **)(pcStack_c8 + -4);
        uVar11 = uVar11 + 0x23;
        if ((code *)0x1f < pcStack_c8 + (-4 - (int)pcVar6)) goto LAB_00b5846d;
      }
      func_0x008ab812(pcVar6,uVar11);
    }
  }
  else {
    func_0x009817b0(5);
    pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x1b8);
    uVar3 = FUN_004b5b20();
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),uVar3);
    (*pcVar6)();
  }
  func_0x008d05d0(&piStack_e4);
  uStack_8._0_1_ = 0xb;
  pcVar6 = (code *)func_0x008ab47d(0x60);
  pcStack_b8 = pcVar6;
  if (pcVar6 == (code *)0x0) {
    pcStack_a8 = (code *)0x0;
  }
  else {
    ppuStack_a4 = std::_Func_impl_no_alloc<>::vftable;
    *(undefined8 *)pcVar6 = 0;
    pppuStack_80 = &ppuStack_a4;
    *(undefined4 *)(pcVar6 + 8) = 0;
    *(undefined4 *)(pcVar6 + 4) = 1;
    *(undefined4 *)(pcVar6 + 8) = 1;
    *(undefined ***)pcVar6 = std::_Ref_count_obj2<>::vftable;
    pcStack_bc = pcVar6 + 0x18;
    *(undefined ***)(pcVar6 + 0x10) = rx::ProgramGL::LinkTask::vftable;
    *(undefined4 *)(pcVar6 + 0x3c) = 0;
    uStack_8._0_1_ = 0xe;
    pcStack_a8 = pcVar6;
    iStack_a0 = param_1;
    uVar3 = FUN_00b56950(pcStack_bc);
    *(undefined4 *)(pcVar6 + 0x3c) = uVar3;
    pcStack_a8[0x40] = (code)0x0;
    *(undefined4 *)(pcStack_a8 + 0x44) = 0;
    *(undefined4 *)(pcStack_a8 + 0x48) = 0;
    *(undefined4 *)(pcStack_a8 + 0x4c) = 0;
    *(undefined4 *)(pcStack_a8 + 0x50) = 0;
    *(undefined4 *)(pcStack_a8 + 0x54) = 0;
    *(undefined4 *)(pcStack_a8 + 0x58) = 0xf;
    pcStack_a8[0x44] = (code)0x0;
    if (pppuStack_80 != (undefined ***)0x0) {
      pcVar6 = (code *)(*pppuStack_80)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_a4 >> 8),pppuStack_80 != &ppuStack_a4));
      (*pcVar6)();
    }
  }
  uStack_ac = 2;
  pcStack_c4 = pcStack_a8 + 0x10;
  puStack_d8 = param_5;
  uStack_8._0_1_ = 0xf;
  puStack_d4 = param_4;
  iStack_dc = param_1;
  pcStack_c0 = pcStack_a8;
  cVar2 = func_0x00a06e20();
  if (cVar2 == '\0') {
    pcVar6 = *(code **)(*piStack_e4 + 8);
    _guard_check_icall();
    cVar2 = (*pcVar6)();
    iVar4 = iStack_cc;
    if ((cVar2 != '\0') &&
       ((*(char *)(*(int *)(iStack_cc + 0xc) + 0x300) == '\0' ||
        (*(char *)(iStack_cc + 0x40) == '\0')))) {
      *(undefined1 *)(iStack_cc + 0x40) = 1;
      pcStack_b8 = (code *)func_0x008ab47d(0x40);
      pcVar6 = pcStack_a8;
      if (pcStack_b8 == (code *)0x0) {
        puStack_b4 = (undefined4 *)0x0;
      }
      else {
        puStack_74 = param_5;
        puStack_70 = param_4;
        pppuStack_58 = &ppuStack_7c;
        ppuStack_7c = std::_Func_impl_no_alloc<>::vftable;
        iStack_78 = iVar4;
        uStack_ac = 0x22;
        uStack_e8 = 0x22;
        uStack_8._0_1_ = 0x17;
        if (pcStack_a8 != (code *)0x0) {
          LOCK();
          *(int *)(pcStack_a8 + 4) = *(int *)(pcStack_a8 + 4) + 1;
          UNLOCK();
        }
        if (piStack_e0 != (int *)0x0) {
          LOCK();
          piStack_e0[1] = piStack_e0[1] + 1;
          UNLOCK();
        }
        puStack_b4 = (undefined4 *)
                     func_0x00b55f20(piStack_e4,piStack_e0,pcStack_a8 + 0x10,pcStack_a8,&ppuStack_7c
                                    );
      }
      if (((uStack_ac & 0x20) != 0) && (pppuStack_58 != (undefined ***)0x0)) {
        pcVar12 = (code *)(*pppuStack_58)[4];
        _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_7c >> 8),pppuStack_58 != &ppuStack_7c));
        (*pcVar12)();
      }
      pcStack_b8 = (code *)0x0;
      *(undefined4 **)pcStack_d0 = puStack_b4;
      func_0x00b56180();
      if (pcVar6 != (code *)0x0) {
        LOCK();
        iVar4 = *(int *)(pcVar6 + 4) + -1;
        *(int *)(pcVar6 + 4) = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar12 = (code *)**(undefined4 **)pcVar6;
          _guard_check_icall();
          (*pcVar12)();
          LOCK();
          iVar4 = *(int *)(pcVar6 + 8) + -1;
          *(int *)(pcVar6 + 8) = iVar4;
          UNLOCK();
          if (iVar4 == 0) {
            pcVar6 = *(code **)(*(int *)pcVar6 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      if (piStack_e0 != (int *)0x0) {
        LOCK();
        iVar4 = piStack_e0[1] + -1;
        piStack_e0[1] = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar6 = *(code **)*piStack_e0;
          _guard_check_icall();
          (*pcVar6)();
          LOCK();
          piVar5 = piStack_e0 + 2;
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            pcVar6 = *(code **)(*piStack_e0 + 4);
            _guard_check_icall();
            (*pcVar6)();
          }
        }
      }
      uStack_8 = 0x19;
      goto LAB_00b5808e;
    }
    auStack_2c[4] = 0;
    auStack_2c[1] = 0;
    auStack_2c[2] = 0;
    auStack_2c[3] = 0;
    auStack_2c[5] = 0xf;
    auStack_2c[0] = 0;
    uStack_8._0_1_ = 0x1a;
    uVar3 = func_0x00b56390(1,auStack_2c);
    pcStack_b8 = (code *)func_0x008ab47d(8);
    if (pcStack_b8 == (code *)0x0) {
      pcVar6 = (code *)0x0;
    }
    else {
      *(undefined ***)pcStack_b8 = rx::LinkEventDone::vftable;
      *(undefined4 *)(pcStack_b8 + 4) = uVar3;
      pcVar6 = pcStack_b8;
    }
    uStack_8._0_1_ = 0xf;
    *(code **)pcStack_d0 = pcVar6;
    if (0xf < auStack_2c[5]) {
      uVar9 = auStack_2c[5] + 1;
      uVar11 = auStack_2c[0];
      if (0xfff < uVar9) {
        uVar11 = *(uint *)(auStack_2c[0] - 4);
        uVar9 = auStack_2c[5] + 0x24;
        if (0x1f < (auStack_2c[0] - uVar11) - 4) {
LAB_00b58472:
          func_0x008aaf66();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      func_0x008ab812(uVar11,uVar9);
    }
    pcVar6 = pcStack_a8;
    auStack_2c[4] = 0;
    auStack_2c[5] = 0xf;
    auStack_2c[0] = auStack_2c[0] & 0xffffff00;
    if (pcStack_a8 != (code *)0x0) {
      LOCK();
      iVar4 = *(int *)(pcStack_a8 + 4) + -1;
      *(int *)(pcStack_a8 + 4) = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar12 = (code *)**(undefined4 **)pcStack_a8;
        _guard_check_icall();
        (*pcVar12)();
        LOCK();
        pcVar12 = pcVar6 + 8;
        iVar4 = *(int *)pcVar12 + -1;
        *(int *)pcVar12 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar6 = *(code **)(*(int *)pcVar6 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
    if (piStack_e0 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_e0[1] + -1;
      piStack_e0[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar6 = *(code **)*piStack_e0;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        piVar5 = piStack_e0 + 2;
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar6 = *(code **)(*piStack_e0 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
    uStack_8 = 0x1b;
    if ((puStack_f8 == (undefined4 *)0x0) || (pcVar10 = (char *)puStack_f8[1], *pcVar10 == '\0'))
    goto LAB_00b583fd;
    uVar3 = puStack_f8[2];
    uVar14 = *puStack_f8;
  }
  else {
    pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x230);
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34));
    (*pcVar6)();
    puVar7 = (undefined4 *)func_0x008ab47d(0x38);
    puStack_b4 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      pcStack_bc = *(code **)(param_1 + 0x34);
      pcStack_b8 = *(code **)(param_1 + 8);
      puStack_4c = param_5;
      puStack_48 = param_4;
      pppuStack_30 = &ppuStack_54;
      ppuStack_54 = std::_Func_impl_no_alloc<>::vftable;
      uStack_ac = 6;
      uStack_e8 = 6;
      pcVar6 = (code *)(puVar7 + 2);
      *puVar7 = rx::ProgramGL::LinkEventNativeParallel::vftable;
      puVar7[0xb] = 0;
      uStack_8._0_1_ = 0x13;
      uStack_8._1_3_ = 0;
      pcStack_b0 = pcVar6;
      iStack_50 = param_1;
      if (pppuStack_30 != (undefined ***)0x0) {
        _guard_check_icall(pcVar6);
        uVar3 = FUN_00b56990(pcVar6);
        puVar7[0xb] = uVar3;
      }
      puStack_b4[0xc] = pcStack_b8;
      puStack_b4[0xd] = pcStack_bc;
      puVar7 = puStack_b4;
    }
    if (((uStack_ac & 4) != 0) && (pppuStack_30 != (undefined ***)0x0)) {
      pcVar6 = (code *)(*pppuStack_30)[4];
      _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_54 >> 8),pppuStack_30 != &ppuStack_54));
      (*pcVar6)();
    }
    pcVar6 = pcStack_a8;
    *(undefined4 **)pcStack_d0 = puVar7;
    if (pcStack_a8 != (code *)0x0) {
      LOCK();
      iVar4 = *(int *)(pcStack_a8 + 4) + -1;
      *(int *)(pcStack_a8 + 4) = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar12 = (code *)**(undefined4 **)pcStack_a8;
        _guard_check_icall();
        (*pcVar12)();
        LOCK();
        pcVar12 = pcVar6 + 8;
        iVar4 = *(int *)pcVar12 + -1;
        *(int *)pcVar12 = iVar4;
        UNLOCK();
        if (iVar4 == 0) {
          pcVar6 = *(code **)(*(int *)pcVar6 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
    if (piStack_e0 != (int *)0x0) {
      LOCK();
      iVar4 = piStack_e0[1] + -1;
      piStack_e0[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        pcVar6 = *(code **)*piStack_e0;
        _guard_check_icall();
        (*pcVar6)();
        LOCK();
        piVar5 = piStack_e0 + 2;
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          pcVar6 = *(code **)(*piStack_e0 + 4);
          _guard_check_icall();
          (*pcVar6)();
        }
      }
    }
    uStack_8 = 0x15;
LAB_00b5808e:
    if ((puStack_f8 == (undefined4 *)0x0) || (pcVar10 = (char *)puStack_f8[1], *pcVar10 == '\0'))
    goto LAB_00b583fd;
    uVar3 = puStack_f8[2];
    uVar14 = *puStack_f8;
  }
  func_0x009b90e0(uVar14,0x45,pcVar10,uVar3,0,0,0,0,0,0,0);
LAB_00b583fd:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall
FUN_00b58670(int param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4,
            undefined4 param_5)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  undefined4 *puStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f662b9;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de98c) &&
     (func_0x008ab40d(&DAT_013de98c,uVar5), DAT_013de98c == -1)) {
    uStack_8 = 0;
    uVar6 = func_0x0093d430("gpu.angle");
    DAT_013de988 = (char *)func_0x009b9170(uVar6);
    func_0x008ab3bc(&DAT_013de98c);
  }
  pcVar2 = DAT_013de988;
  puStack_34 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de988 != '\0') {
    uVar6 = func_0x0093d430();
    func_0x009b90e0(uVar6,0x42,pcVar2,"ProgramGL::load",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de988;
    uStack_30 = func_0x0093d430();
    puStack_34 = &uStack_30;
    pcStack_2c = pcVar2;
    pcStack_28 = "ProgramGL::load";
  }
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  puStack_18 = (undefined4 *)func_0x0096bd50();
  uStack_14 = 0;
  func_0x0096bcc0(&uStack_14);
  uVar3 = uStack_14;
  uVar8 = *(int *)(param_4 + 8) + *(int *)(param_4 + 4);
  uVar5 = *(int *)(param_4 + 4) + uStack_14;
  if ((uVar5 < uStack_14) || (*(uint *)(param_4 + 0xc) < uVar5)) {
    *param_4 = 1;
  }
  else {
    *(uint *)(param_4 + 4) = uVar5;
  }
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x67c);
  uStack_14 = uVar8;
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),puStack_18,uVar8,uVar3);
  (*pcVar1)();
  cVar4 = func_0x00b56f80(param_5);
  if (cVar4 == '\0') {
    puStack_18 = (undefined4 *)func_0x008ab47d(8);
    if (puStack_18 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puStack_18 = rx::LinkEventDone::vftable;
      puStack_18[1] = 2;
      puVar7 = puStack_18;
    }
    *param_2 = puVar7;
    uStack_8 = 2;
  }
  else {
    func_0x00b589a0();
    func_0x00b59080(param_3);
    puStack_18 = (undefined4 *)func_0x008ab47d(8);
    if (puStack_18 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      *puStack_18 = rx::LinkEventDone::vftable;
      puStack_18[1] = 0;
      puVar7 = puStack_18;
    }
    *param_2 = puVar7;
    uStack_8 = 3;
  }
  if ((puStack_34 != (undefined4 *)0x0) && (*(char *)puStack_34[1] != '\0')) {
    func_0x009b90e0(*puStack_34,0x45,(char *)puStack_34[1],puStack_34[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_2;
}



void __thiscall FUN_00b588b0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int *unaff_retaddr;
  
  iVar7 = 0;
  iVar1 = (param_2[1] - *param_2) / 0xc;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4) == -1) {
        puVar6 = (uint *)(*param_2 + iVar5);
        cVar2 = func_0x00983ab0(puVar6[1]);
        if (cVar2 == '\0') {
          cVar2 = func_0x00983a40(puVar6[1]);
          if (cVar2 != '\0') {
            iVar3 = func_0x00981da0(puVar6[1]);
            piVar4 = (int *)(*param_2 + 4 + iVar3 * 0x10);
            goto LAB_00b58942;
          }
        }
        else {
          iVar3 = func_0x00982c10();
          piVar4 = (int *)(iVar3 * 0x18 + 0xc + *unaff_retaddr);
LAB_00b58942:
          if (*puVar6 < (uint)(piVar4[1] - *piVar4 >> 2)) {
            func_0x00808e10(*puVar6);
          }
        }
        iVar3 = func_0x00981b20(iVar7);
        if (iVar3 == -1) {
          puVar6[1] = 0xffffffff;
        }
        else {
          *(undefined1 *)(puVar6 + 2) = 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar7 < iVar1);
  }
  return;
}



void __thiscall FUN_00b59130(int param_1,undefined4 param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  void *pvVar7;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6639d;
  iStack_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_14 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x1fc);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0x8741,&uStack_14,uVar2);
  (*pcVar1)();
  uVar2 = uStack_14;
  if ((int)uStack_14 < 1) {
    uVar2 = 1;
  }
  _Dst = (void *)0x0;
  iVar5 = 0;
  if (uVar2 == 0) {
LAB_00b59202:
    uStack_20 = 0;
    pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x664);
    uStack_8 = 0;
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),uStack_14,&uStack_14,&uStack_20,_Dst);
    (*pcVar1)();
    uStack_2c = uStack_20;
    func_0x0096a850(param_3[1],&uStack_2c,4);
    uStack_2c = uStack_14;
    func_0x0096a850(param_3[1],&uStack_2c,4);
    uStack_24 = uStack_14;
    uStack_18 = *param_3;
    uVar2 = param_3[1];
    if (uStack_14 != 0) {
      if (param_3[2] - uVar2 < uStack_14) {
        iVar6 = uVar2 - uStack_18;
        if (0x7fffffffU - iVar6 < uStack_14) goto LAB_00b593ac;
        uStack_28 = iVar6 + uStack_14;
        uStack_2c = param_3[2] - uStack_18;
        if (0x7fffffff - (uStack_2c >> 1) < uStack_2c) {
          uStack_2c = 0x7fffffff;
        }
        else {
          uStack_2c = uStack_2c + (uStack_2c >> 1);
          if (uStack_2c < uStack_28) {
            uStack_2c = uStack_28;
          }
        }
        uStack_1c = uStack_2c;
        uStack_1c = func_0x004a0e00(param_3,&uStack_1c);
        func_0x008ab0e6(iVar6 + uStack_1c,_Dst,uStack_24);
        func_0x008ab0e6(uStack_1c,uStack_18,iVar6);
        uVar2 = *param_3;
        if (uVar2 != 0) {
          uVar4 = param_3[2] - uVar2;
          uVar3 = uVar2;
          if (0xfff < uVar4) {
            uVar3 = *(uint *)(uVar2 - 4);
            uVar4 = uVar4 + 0x23;
            if (0x1f < (uVar2 - uVar3) - 4) goto LAB_00b593b1;
          }
          func_0x008ab812(uVar3,uVar4);
        }
        *param_3 = uStack_1c;
        param_3[1] = uStack_28 + uStack_1c;
        param_3[2] = uStack_2c + uStack_1c;
      }
      else {
        param_3[1] = uVar2 + uStack_14;
        func_0x008ab0e6(uVar2,_Dst,uStack_14);
      }
    }
    func_0x00b59080(param_2);
    if (_Dst != (void *)0x0) {
      uVar2 = iVar5 - (int)_Dst;
      pvVar7 = _Dst;
      if (0xfff < uVar2) {
        pvVar7 = *(void **)((int)_Dst + -4);
        uVar2 = uVar2 + 0x23;
        if (0x1f < (uint)((int)_Dst + (-4 - (int)pvVar7))) goto LAB_00b593b1;
      }
      func_0x008ab812(pvVar7,uVar2);
    }
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  if (uVar2 < 0x80000000) {
    if (uVar2 < 0x1000) {
      _Dst = (void *)func_0x008ab47d(uVar2);
    }
    else {
      if (uVar2 + 0x23 <= uVar2) goto LAB_00b593a7;
      iVar5 = func_0x008ab47d(uVar2 + 0x23);
      if (iVar5 == 0) goto LAB_00b593b1;
      _Dst = (void *)(iVar5 + 0x23U & 0xffffffe0);
      *(int *)((int)_Dst - 4) = iVar5;
    }
    iVar5 = (int)_Dst + uVar2;
    memset(_Dst,0,uVar2);
    goto LAB_00b59202;
  }
  func_0x0046e700();
LAB_00b593a7:
  func_0x00463420();
LAB_00b593ac:
  func_0x0046e700();
LAB_00b593b1:
  func_0x008aaf66();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b593c0(int param_1,undefined1 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x680);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0x8257,param_2);
    (*pcVar1)();
  }
  return;
}



void __thiscall FUN_00b593f0(int param_1,undefined1 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x680);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0x8258,param_2);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59420(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x690);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x248);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59490(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x698);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x250);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59500(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6a0);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x424);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59570(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6b0);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 600);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b595e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6b8);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x260);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59650(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6c0);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x42c);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b596c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6d0);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x268);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59730(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6d8);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x270);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b597a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6e0);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x434);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59810(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6f0);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x278);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b59880(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x6f8);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x280);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b598f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x700);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x43c);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3);
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b59c80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x708);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x284);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b59d00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x710);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x32c);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b59d80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x718);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x330);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b59e00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x720);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x288);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b59e80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x728);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x334);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b59f00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x730);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x338);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b59f80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x738);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x28c);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b5a000(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x740);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x33c);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall
FUN_00b5a080(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x748);
  if (pcVar1 != (code *)0x0) {
    _guard_check_icall(*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_3,param_4,
                       param_5);
    (*pcVar1)();
    return;
  }
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x34));
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x340);
  _guard_check_icall(*(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14)),param_2,param_3,param_4
                    );
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b5a100(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 unaff_retaddr;
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_30;
  int iStack_1c;
  int iStack_18;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)auStack_3c;
  func_0x008c2250(param_3,0);
  func_0x008c2250(unaff_retaddr,2);
  if (iStack_1c != iStack_38) {
    do {
      iVar1 = iStack_30 * 0x20 + iStack_18;
      func_0x00b59960(iVar1,*(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0xa4) + 0x3f0) + 8 +
                             iVar1 * 0x58));
      func_0x008c2d60();
    } while (iStack_1c != iStack_38);
  }
  FUN_008ab370();
  return;
}



undefined4 __fastcall FUN_00b5a1a0(int param_1)

{
  code *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  undefined1 auStack_14 [4];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66419;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de9a4) {
    func_0x008ab40d(&DAT_013de9a4,uVar3);
    if (DAT_013de9a4 == -1) {
      uStack_8 = 0;
      uVar4 = func_0x0093d430("gpu.angle");
      DAT_013de9a0 = (char *)func_0x009b9170(uVar4);
      func_0x008ab3bc(&DAT_013de9a4);
    }
  }
  pcVar2 = DAT_013de9a0;
  puStack_24 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de9a0 != '\0') {
    uVar4 = func_0x0093d430();
    func_0x009b90e0(uVar4,0x42,pcVar2,"ProgramGL::LinkEventGL::wait",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de9a0;
    uStack_20 = func_0x0093d430();
    puStack_24 = &uStack_20;
    pcStack_1c = pcVar2;
    pcStack_18 = "ProgramGL::LinkEventGL::wait";
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0xc) + 4);
  _guard_check_icall();
  (*pcVar1)();
  auStack_14[0] = *(undefined1 *)(*(int *)(param_1 + 4) + 0x30);
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 8);
    _guard_check_icall(auStack_14,*(int *)(param_1 + 4) + 0x34);
    uVar4 = (*pcVar1)();
    uStack_8 = 2;
    if ((puStack_24 != (undefined4 *)0x0) && (*(char *)puStack_24[1] != '\0')) {
      func_0x009b90e0(*puStack_24,0x45,(char *)puStack_24[1],puStack_24[2],0,0,0,0,0,0,0);
    }
    *unaff_FS_OFFSET = iStack_10;
    return uVar4;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}



void __fastcall FUN_00b5a320(int param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66461;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de99c) &&
     (func_0x008ab40d(&DAT_013de99c,aiStack_2c[6]), DAT_013de99c == -1)) {
    uStack_8 = 0;
    uVar3 = func_0x0093d430("gpu.angle");
    DAT_013de998 = (char *)func_0x009b9170(uVar3);
    func_0x008ab3bc(&DAT_013de99c);
  }
  pcVar2 = DAT_013de998;
  puStack_44 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de998 != '\0') {
    uVar3 = func_0x0093d430();
    func_0x009b90e0(uVar3,0x42,pcVar2,"ProgramGL::LinkEventNativeParallel::wait",0,0,0,0,0,0,0);
    pcVar2 = DAT_013de998;
    uStack_40 = func_0x0093d430();
    puStack_44 = &uStack_40;
    pcStack_3c = pcVar2;
    pcStack_38 = "ProgramGL::LinkEventNativeParallel::wait";
  }
  iStack_34 = 0;
  pcVar1 = *(code **)(*(int *)(param_1 + 0x30) + 0x1fc);
  _guard_check_icall(*(undefined4 *)(param_1 + 0x34),0x8b82,&iStack_34);
  (*pcVar1)();
  if (iStack_34 == 1) {
    aiStack_2c[4] = 0;
    aiStack_2c[1] = 0;
    aiStack_2c[2] = 0;
    aiStack_2c[3] = 0;
    aiStack_2c[5] = 0xf;
    aiStack_2c[0] = 0;
    uStack_8._0_1_ = 2;
    auStack_30[0] = 0;
    if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
      func_0x00e701bd();
LAB_00b5a51d:
      func_0x008aaf66();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 0x2c) + 8);
    _guard_check_icall(auStack_30,aiStack_2c);
    (*pcVar1)();
    uStack_8._0_1_ = 1;
    if (0xf < (uint)aiStack_2c[5]) {
      uVar4 = aiStack_2c[5] + 1;
      iVar5 = aiStack_2c[0];
      if (0xfff < uVar4) {
        iVar5 = *(int *)(aiStack_2c[0] + -4);
        uVar4 = aiStack_2c[5] + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar5) - 4U) goto LAB_00b5a51d;
      }
      func_0x008ab812(iVar5,uVar4);
    }
  }
  uStack_8 = 4;
  if ((puStack_44 != (undefined4 *)0x0) && (*(char *)puStack_44[1] != '\0')) {
    func_0x009b90e0(*puStack_44,0x45,(char *)puStack_44[1],puStack_44[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 * __thiscall FUN_00b5a5b0(undefined4 *param_1,byte param_2)

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
  uStack_8 = 0;
  *param_1 = rx::ProgramPipelineGL::vftable;
  if (param_1[3] != 0) {
    pcVar1 = *(code **)(param_1[2] + 0x648);
    _guard_check_icall(1,param_1 + 3,uVar2);
    (*pcVar1)();
    param_1[3] = 0;
  }
  *param_1 = rx::ProgramPipelineImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x10);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 * __thiscall FUN_00b5a670(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::FramebufferAttachmentObjectImpl::vftable;
  func_0x00953210(uVar1);
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x3c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00b5a6d0(int param_1,undefined4 param_2)

{
  func_0x00a01ec0(param_2);
  func_0x00ad0960(param_2,param_1,*(undefined4 *)(param_1 + 0x38));
  return;
}



void __thiscall FUN_00b5a700(int param_1,undefined4 param_2)

{
  func_0x00a02140(param_2);
  func_0x00ab7170(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



undefined4 __thiscall FUN_00b5a730(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  int iVar4;
  
  iVar2 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar3 = func_0x00a01ed0(param_2);
  iVar4 = 0x8d41;
  func_0x00ab6c70(0x8d41,*(undefined4 *)(param_1 + 0x34));
  uVar3 = func_0x00acf1c0(iVar2,uVar3,unaff_retaddr);
  func_0x009f7d30(param_2,
                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RenderbufferGL.cpp"
                  ,"rx::RenderbufferGL::setStorage",0x39);
  pcVar1 = *(code **)(iVar2 + 0x40c);
  _guard_check_icall(0x8d41,uVar3,param_2,param_3);
  (*pcVar1)();
  iVar2 = func_0x009f7360(param_2,
                          "functions->renderbufferStorage(GL_RENDERBUFFER, renderbufferFormat.internalFormat, width, height)"
                          ,
                          "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RenderbufferGL.cpp"
                          ,"rx::RenderbufferGL::setStorage",0x39);
  if (iVar2 == 1) {
    return 1;
  }
  *(undefined4 *)(iVar4 + 0x38) = uVar3;
  return 0;
}



void __thiscall FUN_00b5a7f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_004b3350();
  pcVar1 = *(code **)(*piVar2 + 0x18);
  _guard_check_icall(param_2,param_1,param_1 + 0x38);
  (*pcVar1)();
  return;
}



undefined4 __thiscall
FUN_00b5a820(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  char *pcVar4;
  undefined4 uVar5;
  
  iVar2 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar3 = func_0x00a01ed0(param_2);
  func_0x00ab6c70(0x8d41,*(undefined4 *)(param_1 + 0x34));
  uVar3 = func_0x00acf1c0(iVar2,uVar3,param_2);
  if (param_5 == 0) {
    func_0x009f7d30(param_2,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RenderbufferGL.cpp"
                    ,"rx::RenderbufferGL::setStorageMultisample",0x53);
    pcVar1 = *(code **)(iVar2 + 0x410);
    _guard_check_icall(0x8d41,unaff_retaddr,uVar3,param_3);
    (*pcVar1)();
    uVar5 = 0x53;
    pcVar4 = 
    "functions->renderbufferStorageMultisample( GL_RENDERBUFFER, samples, renderbufferFormat.internalFormat, width, height)"
    ;
  }
  else {
    if (*(int *)(iVar2 + 0xacc) == 0) {
      func_0x009f7d30(param_2,
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RenderbufferGL.cpp"
                      ,"rx::RenderbufferGL::setStorageMultisample",0x66);
      pcVar1 = *(code **)(iVar2 + 0xb08);
      _guard_check_icall(0x8d41,unaff_retaddr,uVar3,param_3);
      (*pcVar1)();
      iVar2 = func_0x009f7360(param_2,
                              "functions->renderbufferStorageMultisampleIMG( GL_RENDERBUFFER, samples, renderbufferFormat.internalFormat, width, height)"
                              ,
                              "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RenderbufferGL.cpp"
                              ,"rx::RenderbufferGL::setStorageMultisample",0x66);
      goto joined_r0x00b5a984;
    }
    func_0x009f7d30(param_2,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RenderbufferGL.cpp"
                    ,"rx::RenderbufferGL::setStorageMultisample",0x5e);
    pcVar1 = *(code **)(iVar2 + 0xacc);
    _guard_check_icall(0x8d41,unaff_retaddr,uVar3,param_3);
    (*pcVar1)();
    uVar5 = 0x5e;
    pcVar4 = 
    "functions->renderbufferStorageMultisampleEXT( GL_RENDERBUFFER, samples, renderbufferFormat.internalFormat, width, height)"
    ;
  }
  iVar2 = func_0x009f7360(param_2,pcVar4,
                          "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\RenderbufferGL.cpp"
                          ,"rx::RenderbufferGL::setStorageMultisample",uVar5);
joined_r0x00b5a984:
  if (iVar2 != 1) {
    *(undefined4 *)(param_4 + 0x38) = uVar3;
    return 0;
  }
  return 1;
}



undefined4 * __thiscall FUN_00b5ab90(undefined4 *param_1,byte param_2)

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
  uStack_8 = 0;
  *param_1 = rx::SamplerGL::vftable;
  func_0x00ab71d0(param_1[0x15],uVar1);
  param_1[0x15] = 0;
  *param_1 = rx::SamplerImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00b5ac10(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  int unaff_ESI;
  code *pcVar6;
  
  if (param_3 == '\0') {
    return 0;
  }
  iVar1 = param_1 + 0x10;
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x2801,FUN_005beae0,FUN_00954f40);
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x2800,FUN_004b5b10,FUN_00954eb0);
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x2802,FUN_004b5b20,FUN_00954fe0);
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x2803,FUN_005db210,FUN_00955010);
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x8072,FUN_00472c50,FUN_00954fc0);
  func_0x00b5aa40(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x84fe,FUN_008dfaa0,FUN_00954ee0);
  func_0x00b5aa40(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x813a,FUN_008dfc10,FUN_00954f70);
  func_0x00b5aa40(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x813b,FUN_008dfad0,FUN_00954f10);
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x884c,FUN_00781ed0,FUN_009547a0);
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x884d,FUN_004b24a0,FUN_00954780);
  func_0x00b5a9a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x54),
                  *(undefined4 *)(param_1 + 4),iVar1,0x8a48,FUN_004b24b0,FUN_00954fa0);
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 8);
  pfVar2 = (float *)(iVar1 + 0x2c);
  cVar3 = *(char *)(param_1 + 0x4c);
  if (cVar3 != *(char *)(iVar1 + 0x3c)) goto LAB_00b5add2;
  if ((cVar3 == '\0') || ((cVar3 != '\x01' && (cVar3 != '\x02')))) {
    if ((*(float *)(param_1 + 0x3c) == *pfVar2) &&
       (((*(float *)(param_1 + 0x40) == *(float *)(iVar1 + 0x30) &&
         (*(float *)(param_1 + 0x44) == *(float *)(iVar1 + 0x34))) &&
        (*(float *)(param_1 + 0x48) == *(float *)(iVar1 + 0x38))))) goto LAB_00b5ae35;
LAB_00b5adc8:
    bVar5 = false;
  }
  else {
    if (((*(float *)(param_1 + 0x3c) != *pfVar2) ||
        (*(int *)(param_1 + 0x40) != *(int *)(iVar1 + 0x30))) ||
       ((*(int *)(param_1 + 0x44) != *(int *)(iVar1 + 0x34) ||
        (*(int *)(param_1 + 0x48) != *(int *)(iVar1 + 0x38))))) goto LAB_00b5adc8;
LAB_00b5ae35:
    bVar5 = true;
  }
  if (bVar5) {
    return 0;
  }
LAB_00b5add2:
  func_0x00954620(pfVar2);
  cVar3 = *(char *)(iVar1 + 0x3c);
  if (cVar3 == '\0') {
    pcVar6 = *(code **)(unaff_ESI + 0x550);
  }
  else if (cVar3 == '\x01') {
    pcVar6 = *(code **)(unaff_ESI + 0x544);
  }
  else {
    if (cVar3 != '\x02') {
      return 0;
    }
    pcVar6 = *(code **)(unaff_ESI + 0x548);
  }
  _guard_check_icall(uVar4,0x1004,pfVar2);
  (*pcVar6)();
  return 0;
}



undefined4 * __thiscall FUN_00b5aed0(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SemaphoreImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b5af00(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SemaphoreImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00b5b0b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00a01ee0(param_2);
  pcVar1 = *(code **)(iVar2 + 0xaec);
  uVar3 = func_0x008babe0(param_3);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),uVar3,param_4);
  (*pcVar1)();
  return 0;
}



void __thiscall FUN_00b5b0f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = func_0x00a01ee0(param_2);
  pcVar1 = *(code **)(iVar2 + 0xad0);
  _guard_check_icall(1,(undefined4 *)(param_1 + 4));
  (*pcVar1)();
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void __thiscall FUN_00b5b130(int param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f8 [64];
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_ac [64];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [64];
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66543;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x00a01ee0(param_2,uStack_14);
  func_0x008c12e0(*(undefined4 *)(param_3 + 0x44));
  uStack_8 = 0;
  func_0x00b5af30(param_3,auStack_ac);
  func_0x008c12e0(*(undefined4 *)(param_4 + 0x84));
  uStack_8._0_1_ = 1;
  func_0x008c12e0(*(undefined4 *)(param_4 + 0x84));
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x00b5af90(param_4,auStack_60,auStack_f8);
  pcVar1 = *(code **)(iVar2 + 0xae4);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),uStack_68,puStack_6c,uStack_1c,puStack_20,
                     puStack_b8);
  (*pcVar1)();
  uStack_b4 = 0;
  if (puStack_b8 != auStack_f8) {
    func_0x008ab37e(puStack_b8);
  }
  uStack_1c = 0;
  if (puStack_20 != auStack_60) {
    func_0x008ab37e(puStack_20);
  }
  uStack_68 = 0;
  if (puStack_6c != auStack_ac) {
    func_0x008ab37e(puStack_6c);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b5b280(int param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 auStack_f8 [64];
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_ac [64];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [64];
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66543;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar2 = func_0x00a01ee0(param_2,uStack_14);
  func_0x008c12e0(*(undefined4 *)(param_3 + 0x44));
  uStack_8 = 0;
  func_0x00b5af30(param_3,auStack_ac);
  func_0x008c12e0(*(undefined4 *)(param_4 + 0x84));
  uStack_8._0_1_ = 1;
  func_0x008c12e0(*(undefined4 *)(param_4 + 0x84));
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  func_0x00b5af90(param_4,auStack_60,auStack_f8);
  pcVar1 = *(code **)(iVar2 + 0xae8);
  _guard_check_icall(*(undefined4 *)(param_1 + 4),uStack_68,puStack_6c,uStack_1c,puStack_20,
                     puStack_b8);
  (*pcVar1)();
  uStack_b4 = 0;
  if (puStack_b8 != auStack_f8) {
    func_0x008ab37e(puStack_b8);
  }
  uStack_1c = 0;
  if (puStack_20 != auStack_60) {
    func_0x008ab37e(puStack_20);
  }
  uStack_68 = 0;
  if (puStack_6c != auStack_ac) {
    func_0x008ab37e(puStack_6c);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00b5bb00(int param_1)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  char *pcStack_28;
  int aiStack_24 [2];
  undefined4 *puStack_1c;
  char *pcStack_18;
  undefined1 uStack_11;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66669;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x14) < DAT_013de9bc) &&
     (func_0x008ab40d(&DAT_013de9bc,uVar5), DAT_013de9bc == -1)) {
    uStack_8 = 0;
    uVar6 = func_0x0093d430("gpu.angle");
    DAT_013de9b8 = (char *)func_0x009b9170(uVar6);
    func_0x008ab3bc(&DAT_013de9bc);
  }
  pcVar2 = DAT_013de9b8;
  puStack_34 = (undefined4 *)0x0;
  uStack_8 = 1;
  if (*DAT_013de9b8 != '\0') {
    uVar6 = func_0x0093d430();
    aiStack_24[0] = param_1 + 0x28;
    pcStack_18 = "source";
    if (0xf < *(uint *)(param_1 + 0x3c)) {
      aiStack_24[0] = *(int *)aiStack_24[0];
    }
    uStack_11 = 7;
    func_0x009b90e0(uVar6,0x42,pcVar2,"TranslateTaskGL::run",0,0,1,&pcStack_18,&uStack_11,aiStack_24
                    ,0);
    pcVar2 = DAT_013de9b8;
    uStack_30 = func_0x0093d430();
    puStack_34 = &uStack_30;
    pcStack_2c = pcVar2;
    pcStack_28 = "TranslateTaskGL::run";
  }
  puStack_1c = (undefined4 *)(param_1 + 0x28);
  if (0xf < *(uint *)(param_1 + 0x3c)) {
    puStack_1c = (undefined4 *)*puStack_1c;
  }
  cVar3 = func_0x009c5f50(*(undefined4 *)(param_1 + 4),&puStack_1c,1,param_1 + 8);
  *(char *)(param_1 + 0x68) = cVar3;
  if (cVar3 != '\0') {
    pcStack_18 = (char *)func_0x009c6390(*(undefined4 *)(param_1 + 4));
    if (0xf < *(uint *)(pcStack_18 + 0x14)) {
      pcStack_18 = *(char **)pcStack_18;
    }
    if (*(int **)(param_1 + 100) == (int *)0x0) {
      func_0x00e701bd();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcVar1 = *(code **)(**(int **)(param_1 + 100) + 8);
    _guard_check_icall(&pcStack_18);
    uVar4 = (*pcVar1)();
    *(undefined1 *)(param_1 + 0x69) = uVar4;
  }
  uStack_8 = 2;
  if ((puStack_34 != (undefined4 *)0x0) && (*(char *)puStack_34[1] != '\0')) {
    func_0x009b90e0(*puStack_34,0x45,(char *)puStack_34[1],puStack_34[2],0,0,0,0,0,0,0);
  }
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 * __thiscall FUN_00b5bcd0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b5bd00(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b5bd30(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xb8);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b5bd60(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x90);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b5bd90(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int iStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00f3f7f0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = rx::ShaderGL::vftable;
  uVar1 = param_1[0xc];
  if (0xf < uVar1) {
    iVar2 = param_1[7];
    uVar8 = uVar1 + 1;
    iVar6 = iVar2;
    if (0xfff < uVar8) {
      iVar6 = *(int *)(iVar2 + -4);
      uVar8 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar6) - 4U) {
        func_0x008aaf66(uVar5);
        pcVar4 = (code *)swi(3);
        puVar7 = (undefined4 *)(*pcVar4)();
        return puVar7;
      }
    }
    func_0x008ab812(iVar6,uVar8);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  piVar3 = (int *)param_1[5];
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar2 = piVar3[1] + -1;
    piVar3[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall();
      (*pcVar4)();
      LOCK();
      iVar2 = piVar3[2] + -1;
      piVar3[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  *param_1 = rx::ShaderImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



int __thiscall FUN_00b5be80(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(param_1 + 0x40));
    (*pcVar2)();
    *(undefined4 *)(param_1 + 100) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x3c);
  if (0xf < uVar3) {
    iVar5 = *(int *)(param_1 + 0x28);
    uVar6 = uVar3 + 1;
    iVar4 = iVar5;
    if (0xfff < uVar6) {
      iVar4 = *(int *)(iVar5 + -4);
      uVar6 = uVar3 + 0x24;
      if (0x1f < (iVar5 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    func_0x008ab812(iVar4,uVar6);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x70);
  }
  return param_1;
}



int __thiscall FUN_00b5bf20(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(param_1 + 0x28));
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  func_0x009c6fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x58);
  }
  return param_1;
}



int __thiscall FUN_00b5bf90(int param_1,byte param_2)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(param_1 + 0xa4);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(param_1 + 0x80));
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x7c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(param_1 + 0x58));
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x10);
    _guard_check_icall(piVar1 != (int *)(param_1 + 0x28));
    (*pcVar2)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  func_0x009c6fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa8);
  }
  return param_1;
}



int __thiscall FUN_00b5c050(int param_1,byte param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x7c);
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
      piVar1 = piVar2 + 2;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        pcVar3 = *(code **)(*piVar2 + 4);
        _guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0x74);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(piVar2 != (int *)(param_1 + 0x50));
    (*pcVar3)();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  if (piVar2 != (int *)0x0) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    _guard_check_icall(piVar2 != (int *)(param_1 + 0x28));
    (*pcVar3)();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  func_0x009c6fd0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x80);
  }
  return param_1;
}



void __thiscall FUN_00b5c110(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void FUN_00b5c130(undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  return;
}



void __thiscall FUN_00b5c140(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b5c160(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b5c180(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __thiscall FUN_00b5c1a0(int param_1,undefined4 *param_2)

{
  *param_2 = std::_Func_impl_no_alloc<>::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return;
}



void __fastcall FUN_00b5c1c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  piVar3 = *(int **)(param_1 + 0x5c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x38));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = rx::WaitableCompileEvent::vftable;
  piVar3 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      iVar5 = piVar3[2] + -1;
      piVar3[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (0xf < uVar2) {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = uVar2 + 1;
    iVar6 = iVar5;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar7 = uVar2 + 0x24;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
        (*pcVar4)();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = angle::WaitableEvent::vftable;
  return;
}



void __fastcall FUN_00b5c200(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  piVar3 = *(int **)(param_1 + 0xb4);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x90));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x8c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x68));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x38));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = rx::WaitableCompileEvent::vftable;
  piVar3 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      iVar5 = piVar3[2] + -1;
      piVar3[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (0xf < uVar2) {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = uVar2 + 1;
    iVar6 = iVar5;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar7 = uVar2 + 0x24;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
        (*pcVar4)();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = angle::WaitableEvent::vftable;
  return;
}



void __fastcall FUN_00b5c2a0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  piVar3 = *(int **)(param_1 + 0x8c);
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
  piVar3 = *(int **)(param_1 + 0x84);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x60));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  if (piVar3 != (int *)0x0) {
    pcVar4 = *(code **)(*piVar3 + 0x10);
    _guard_check_icall(piVar3 != (int *)(param_1 + 0x38));
    (*pcVar4)();
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = rx::WaitableCompileEvent::vftable;
  piVar3 = *(int **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      iVar5 = piVar3[2] + -1;
      piVar3[2] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall();
        (*pcVar4)();
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (0xf < uVar2) {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar7 = uVar2 + 1;
    iVar6 = iVar5;
    if (0xfff < uVar7) {
      iVar6 = *(int *)(iVar5 + -4);
      uVar7 = uVar2 + 0x24;
      if (0x1f < (iVar5 - iVar6) - 4U) {
        func_0x008aaf66();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    func_0x008ab812(iVar6,uVar7);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    iVar5 = piVar3[1] + -1;
    piVar3[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      pcVar4 = *(code **)*piVar3;
      _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
      (*pcVar4)();
      LOCK();
      piVar1 = piVar3 + 2;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        pcVar4 = *(code **)(*piVar3 + 4);
        _guard_check_icall(unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
        (*pcVar4)();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = angle::WaitableEvent::vftable;
  return;
}



void __fastcall FUN_00b5c350(int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *_Dst;
  int *unaff_FS_OFFSET;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  iVar9 = *(int *)(param_1 + 4);
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66715;
  iStack_10 = *unaff_FS_OFFSET;
  uVar5 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar11 = (char *)0x0;
  piVar1 = (int *)(iVar9 + 0x18);
  bVar3 = false;
  iVar7 = *(int *)(*(int *)(iVar9 + 0x10) + 0x10);
  *piVar1 = 0;
  pcVar2 = *(code **)(iVar7 + 0x208);
  _guard_check_icall(*(undefined4 *)(iVar9 + 8),0x8b81,piVar1,uVar5);
  (*pcVar2)();
  if (*piVar1 != 0) goto LAB_00b5c844;
  uStack_14 = 0;
  pcVar2 = *(code **)(iVar7 + 0x208);
  _guard_check_icall(*(undefined4 *)(iVar9 + 8),0x8b84,&uStack_14);
  (*pcVar2)();
  uVar5 = uStack_14;
  if ((int)uStack_14 < 2) {
    cVar4 = func_0x00952a70(2);
    if (cVar4 != '\0') {
      iVar9 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\ShaderGL.cpp"
                              ,"rx::ShaderGL::checkShader",0xd3,2);
      uStack_8 = 2;
      pcVar11 = (char *)0x2;
      uVar8 = func_0x004849e0(iVar9 + 0x10);
      func_0x0046b6e0(uVar8,"Shader compilation failed with no info log.");
    }
    if (pcVar11 != (char *)0x0) {
      func_0x00952760();
    }
    goto LAB_00b5c844;
  }
  _Dst = (char *)0x0;
  if (uStack_14 != 0) {
    if (0x7fffffff < uStack_14) {
      func_0x0046e700();
LAB_00b5c85b:
      func_0x00463420();
      goto LAB_00b5c860;
    }
    if (uStack_14 < 0x1000) {
      _Dst = (char *)func_0x008ab47d(uStack_14);
    }
    else {
      if (uStack_14 + 0x23 <= uStack_14) goto LAB_00b5c85b;
      iVar6 = func_0x008ab47d(uStack_14 + 0x23);
      if (iVar6 == 0) goto LAB_00b5c860;
      _Dst = (char *)(iVar6 + 0x23U & 0xffffffe0);
      *(int *)(_Dst + -4) = iVar6;
    }
    pcVar11 = _Dst + uVar5;
    memset(_Dst,0,uVar5);
  }
  pcVar2 = *(code **)(iVar7 + 0x200);
  uStack_8 = 0;
  _guard_check_icall(*(undefined4 *)(iVar9 + 8),uStack_14,0,_Dst);
  (*pcVar2)();
  pcVar10 = _Dst;
  do {
    cVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar4 != '\0');
  puVar12 = (undefined4 *)(iVar9 + 0x1c);
  func_0x0046a880(_Dst,(int)pcVar10 - (int)(_Dst + 1));
  cVar4 = func_0x00952a70(2);
  if (cVar4 != '\0') {
    iVar7 = func_0x00952450("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\ShaderGL.cpp"
                            ,"rx::ShaderGL::checkShader",0xcf,2);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    bVar3 = true;
    uVar8 = func_0x004849e0(iVar7 + 0x10);
    if (0xf < *(uint *)(iVar9 + 0x30)) {
      puVar12 = (undefined4 *)*puVar12;
    }
    func_0x0046cb10(uVar8,puVar12,*(undefined4 *)(iVar9 + 0x2c));
  }
  if (bVar3) {
    func_0x00952760();
  }
  if (_Dst == (char *)0x0) {
LAB_00b5c844:
    *unaff_FS_OFFSET = iStack_10;
    return;
  }
  uVar5 = (int)pcVar11 - (int)_Dst;
  pcVar11 = _Dst;
  if (0xfff < uVar5) {
    pcVar11 = *(char **)(_Dst + -4);
    uVar5 = uVar5 + 0x23;
    if ((char *)0x1f < _Dst + (-4 - (int)pcVar11)) {
LAB_00b5c860:
      func_0x008aaf66();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  func_0x008ab812(pcVar11,uVar5);
  *unaff_FS_OFFSET = iStack_10;
  return;
}



void __thiscall FUN_00b5c360(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 uStack_34;
  int iStack_30;
  int aiStack_2c [7];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f666a5;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_2c[6] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iVar6 = *(int *)(param_1 + 4);
  aiStack_2c[1] = 0;
  aiStack_2c[2] = 0;
  aiStack_2c[3] = 0;
  uVar1 = *param_2;
  aiStack_2c[4] = 0;
  aiStack_2c[5] = 0xf;
  aiStack_2c[0] = 0;
  uStack_8 = 0;
  iStack_30 = iVar6;
  func_0x00a06060(*(undefined4 *)(iVar6 + 0x10),aiStack_2c,aiStack_2c[6]);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  cVar4 = func_0x00a06370();
  if (cVar4 == '\0') {
    func_0x00a06320();
    if (0xf < (uint)aiStack_2c[5]) {
      uVar5 = aiStack_2c[5] + 1;
      iVar6 = aiStack_2c[0];
      if (0xfff < uVar5) {
        iVar6 = *(int *)(aiStack_2c[0] + -4);
        uVar5 = aiStack_2c[5] + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar6) - 4U) goto LAB_00b5c4a9;
      }
      func_0x008ab812(iVar6,uVar5);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar6 + 0x10) + 0x10);
    pcVar3 = *(code **)(iVar2 + 0x234);
    uStack_34 = uVar1;
    _guard_check_icall(*(undefined4 *)(iVar6 + 8),1,&uStack_34,0);
    (*pcVar3)();
    pcVar3 = *(code **)(iVar2 + 0x1c4);
    _guard_check_icall(*(undefined4 *)(iStack_30 + 8));
    (*pcVar3)();
    func_0x00b5c5f0();
    func_0x00a06320();
    if (0xf < (uint)aiStack_2c[5]) {
      uVar5 = aiStack_2c[5] + 1;
      iVar6 = aiStack_2c[0];
      if (0xfff < uVar5) {
        iVar6 = *(int *)(aiStack_2c[0] + -4);
        uVar5 = aiStack_2c[5] + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar6) - 4U) {
LAB_00b5c4a9:
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar6,uVar5);
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



bool __fastcall FUN_00b5c4b0(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar2 = 0x91b1;
  uStack_4 = 0;
  pcVar1 = *(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x10) + 0x208);
  _guard_check_icall(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0x91b1,&uStack_4);
  (*pcVar1)();
  return iVar2 == 1;
}



void __thiscall FUN_00b5c4f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 4);
  uStack_4 = *param_2;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x10);
  pcVar3 = *(code **)(iVar2 + 0x234);
  _guard_check_icall(*(undefined4 *)(iVar1 + 8),1,&uStack_4,0);
  (*pcVar3)();
  pcVar3 = *(code **)(iVar2 + 0x1c4);
  _guard_check_icall(*(undefined4 *)(iVar1 + 8));
  (*pcVar3)();
  func_0x00b5c5f0();
  return;
}



undefined4 __thiscall FUN_00b5c550(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x18) == 0) {
    puVar2 = (undefined4 *)(iVar1 + 0x1c);
    if ((undefined4 *)*param_2 != puVar2) {
      if (0xf < *(uint *)(iVar1 + 0x30)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      func_0x0046a660(puVar2,*(undefined4 *)(iVar1 + 0x2c));
    }
    return 0;
  }
  return 1;
}



TypeDescriptor * FUN_00b5c590(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b5c5a0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b5c5b0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b5c5c0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b5c5d0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



TypeDescriptor * FUN_00b5c5e0(void)

{
  return &<>::RTTI_Type_Descriptor;
}



void __thiscall FUN_00b5c870(int *param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *unaff_FS_OFFSET;
  undefined1 auStack_bc [4];
  undefined8 *puStack_b8;
  int *piStack_b4;
  int *piStack_b0;
  int *piStack_ac;
  undefined1 auStack_a8 [4];
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  char cStack_8d;
  int iStack_8c;
  undefined *puStack_88;
  undefined4 uStack_84;
  undefined **appuStack_80 [9];
  undefined ***pppuStack_5c;
  undefined **ppuStack_58;
  int *piStack_54;
  undefined ***pppuStack_34;
  undefined **ppuStack_30;
  int *piStack_2c;
  undefined ***pppuStack_c;
  uint uStack_8;
  
  uStack_84 = 0xffffffff;
  puStack_88 = &DAT_00f667b7;
  iStack_8c = *unaff_FS_OFFSET;
  uStack_8 = DAT_0128fd40 ^ (uint)appuStack_80;
  *unaff_FS_OFFSET = (int)&iStack_8c;
  piStack_9c = param_2;
  piStack_a0 = param_2;
  piStack_94 = param_4;
  piVar11 = param_1 + 7;
  param_1[0xb] = 0;
  piStack_ac = param_3;
  if (0xf < (uint)param_1[0xc]) {
    piVar11 = (int *)*piVar11;
  }
  *(undefined1 *)piVar11 = 0;
  uVar7 = *param_5;
  uVar2 = param_5[1];
  *param_5 = uVar7 | 0x2000;
  param_5[1] = uVar2;
  cStack_8d = *(char *)((int)param_3 + 0x1345);
  piStack_a4 = param_1;
  if (cStack_8d != '\0') {
    if (*(char *)(param_1[1] + 0x18) != '\x05') {
      param_5[1] = uVar2;
      *param_5 = uVar7 | 0xa000;
    }
    cVar4 = func_0x008ea820(0x84f5,uStack_8);
    if (cVar4 == '\0') {
      param_5[1] = param_5[1] | 0x10000;
      *param_5 = *param_5;
    }
  }
  iVar5 = func_0x00a01ed0(param_3);
  if (*(char *)(iVar5 + 0x660) != '\0') {
    param_5[1] = param_5[1] | 0x1000000;
    *param_5 = *param_5;
  }
  if (*(char *)(iVar5 + 0x90) != '\0') {
    *param_5 = *param_5 | 0x40000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x138) != '\0') {
    *param_5 = *param_5 | 0x100;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x150) != '\0') {
    *param_5 = *param_5 | 0x800000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x198) != '\0') {
    *param_5 = *param_5 | 0x2000000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x1f8) != '\0') {
    *param_5 = *param_5 | 0x10000000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x1b0) != '\0') {
    *param_5 = *param_5 | 0x4000000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x1c8) != '\0') {
    *param_5 = *param_5 | 0x80;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x1e0) != '\0') {
    *param_5 = *param_5 | 0x8000000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x240) == '\0') {
    *param_5 = *param_5 | 0x20000000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 600) != '\0') {
    param_5[1] = param_5[1] | 1;
    *param_5 = *param_5;
  }
  if (*(char *)(iVar5 + 0x270) != '\0') {
    param_5[1] = param_5[1] | 4;
    *param_5 = *param_5;
  }
  if (*(char *)(iVar5 + 0x288) != '\0') {
    param_5[1] = param_5[1] | 0x10;
    *param_5 = *param_5;
  }
  if (*(char *)(iVar5 + 0x2a0) != '\0') {
    param_5[1] = param_5[1] | 0x20;
    *param_5 = *param_5;
  }
  if (param_1[3] == 0) {
    *param_5 = *param_5 | 0xc0000000;
    param_5[1] = param_5[1];
  }
  if ((*(char *)(iVar5 + 0x378) != '\0') || (cStack_8d != '\0')) {
    *param_5 = *param_5 | 0x400;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0xa8) != '\0') {
    param_5[1] = param_5[1] | 0x1000;
    *param_5 = *param_5;
  }
  if (*(char *)(iVar5 + 0x420) != '\0') {
    *param_5 = *param_5 | 0x4000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x468) != '\0') {
    param_5[1] = param_5[1] | 0x2000;
    *param_5 = *param_5;
  }
  if (*(char *)(iVar5 + 0x480) != '\0') {
    *param_5 = *param_5 | 0x400000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x498) != '\0') {
    *param_5 = *param_5 | 0x20000;
    param_5[1] = param_5[1];
  }
  if (*(char *)(iVar5 + 0x4e0) != '\0') {
    param_5[1] = param_5[1] | 0x20000;
    *param_5 = *param_5;
  }
  if (*(char *)(iVar5 + 0x780) != '\0') {
    param_5[1] = param_5[1] | 0x20000000;
    *param_5 = *param_5;
  }
  iVar6 = func_0x00a06c40();
  if (*(char *)(iVar6 + 0xc3) != '\0') {
    uVar7 = func_0x00a06ce0();
    param_5[5] = uVar7;
    iVar6 = func_0x00a06c40();
    if (*(char *)(iVar6 + 0xc4) != '\0') {
      uVar8 = func_0x00a01ee0(piStack_ac);
      func_0x00a01f70(uVar8);
      if ((param_5[5] == 4) || (param_5[5] == 3)) {
        param_5[6] = 1;
      }
      else if (*(char *)(iVar5 + 0x7b0) == '\0') {
        param_5[6] = (*(char *)(iVar5 + 0x7c8) == '\0') + 3;
      }
      else {
        param_5[6] = 2;
      }
    }
  }
  func_0x008d05d0(&piStack_b4);
  iVar5 = param_1[1];
  piVar11 = (int *)(iVar5 + 0x44);
  uStack_84 = 0;
  piStack_ac = param_1;
  piStack_9c = piVar11;
  cVar4 = func_0x00a06e20();
  if (cVar4 == '\0') {
    pcVar3 = *(code **)(*piStack_b4 + 8);
    _guard_check_icall();
    cVar4 = (*pcVar3)();
    if (cVar4 == '\0') {
      uVar8 = FUN_005beae0();
      piStack_ac = piStack_9c;
      if (0xf < (uint)piStack_9c[5]) {
        piStack_ac = (int *)*piStack_9c;
      }
      piStack_9c = (int *)func_0x009c5f50(uVar8,&piStack_ac,1,param_5);
      piVar11 = piStack_a4;
      if ((char)piStack_9c != '\0') {
        puVar10 = (undefined4 *)func_0x009c6390(uVar8);
        piVar11 = piStack_a4;
        if (0xf < (uint)puVar10[5]) {
          puVar10 = (undefined4 *)*puVar10;
        }
        func_0x00b5d120(puVar10);
      }
      puVar9 = (undefined8 *)func_0x008ab47d(0x68);
      uStack_84 = CONCAT31(uStack_84._1_3_,8);
      puStack_b8 = puVar9;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        ppuStack_58 = std::_Func_impl_no_alloc<>::vftable;
        *puVar9 = 0;
        pppuStack_34 = &ppuStack_58;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((int)puVar9 + 4) = 1;
        *(undefined4 *)(puVar9 + 1) = 1;
        *(undefined ***)puVar9 = std::_Ref_count_obj2<>::vftable;
        uStack_84 = CONCAT31(uStack_84._1_3_,9);
        piStack_54 = piVar11;
        func_0x00b5b890(pppuStack_34,piStack_9c);
        if (pppuStack_34 != (undefined ***)0x0) {
          pcVar3 = (code *)(*pppuStack_34)[4];
          _guard_check_icall(pppuStack_34 != &ppuStack_58);
          (*pcVar3)();
        }
      }
      piStack_94 = piStack_b0;
      piStack_a0[1] = 0;
      *piStack_a0 = (int)(puVar9 + 2);
      piStack_a0[1] = (int)puVar9;
      if (piStack_b0 != (int *)0x0) {
        LOCK();
        iVar5 = piStack_b0[1] + -1;
        piStack_b0[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar3 = *(code **)*piStack_b0;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar11 = piStack_94 + 2;
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            pcVar3 = *(code **)(*piStack_94 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
    }
    else {
      iVar5 = FUN_005beae0();
      piVar11 = (int *)func_0x008ab47d(0x80);
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11[0] = 0;
        piVar11[1] = 0;
        piVar11[2] = 0;
        piStack_2c = piStack_a4;
        pppuStack_c = &ppuStack_30;
        piVar11[1] = 1;
        piVar11[2] = 1;
        *piVar11 = (int)std::_Ref_count_obj2<>::vftable;
        ppuStack_30 = std::_Func_impl_no_alloc<>::vftable;
        uStack_84 = CONCAT31(uStack_84._1_3_,5);
        piVar11[4] = (int)rx::TranslateTaskGL::vftable;
        piVar11[5] = iVar5;
        piStack_94 = piVar11;
        func_0x009c5ec0(param_5);
        func_0x00469da0(piStack_9c);
        piVar11[0x1d] = 0;
        if (pppuStack_c != (undefined ***)0x0) {
          if (pppuStack_c == &ppuStack_30) {
            pcVar3 = (code *)(*pppuStack_c)[1];
            _guard_check_icall(piVar11 + 0x14);
            iVar5 = (*pcVar3)();
            piVar11[0x1d] = iVar5;
            piVar11 = piStack_94;
            if (pppuStack_c != (undefined ***)0x0) {
              pcVar3 = (code *)(*pppuStack_c)[4];
              _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_30 >> 8),
                                          pppuStack_c != &ppuStack_30));
              (*pcVar3)();
              pppuStack_c = (undefined ***)0x0;
              piVar11 = piStack_94;
            }
          }
          else {
            piVar11[0x1d] = (int)pppuStack_c;
            pppuStack_c = (undefined ***)0x0;
          }
        }
        *(undefined2 *)(piVar11 + 0x1e) = 0x100;
        if (pppuStack_c != (undefined ***)0x0) {
          pcVar3 = (code *)(*pppuStack_c)[4];
          _guard_check_icall(CONCAT31((int3)((uint)&ppuStack_30 >> 8),pppuStack_c != &ppuStack_30));
          (*pcVar3)();
          piVar11 = piStack_94;
        }
      }
      piStack_98 = piVar11 + 4;
      piStack_9c = piStack_a4;
      uStack_84._0_1_ = 6;
      pcVar3 = *(code **)(*piStack_b4 + 4);
      if (piVar11 != (int *)0x0) {
        LOCK();
        piVar11[1] = piVar11[1] + 1;
        UNLOCK();
      }
      piStack_94 = piVar11;
      _guard_check_icall(auStack_a8,piStack_98,piVar11);
      uVar8 = (*pcVar3)();
      uStack_84 = CONCAT31(uStack_84._1_3_,7);
      piVar11 = (int *)func_0x00b5b610(auStack_bc,uVar8,&piStack_9c,&piStack_ac,&piStack_98);
      *piStack_a0 = 0;
      piStack_a0[1] = 0;
      *piStack_a0 = *piVar11;
      piStack_a0[1] = piVar11[1];
      *piVar11 = 0;
      piVar11[1] = 0;
      FUN_00468340();
      FUN_00468340();
      piVar11 = piStack_94;
      if (piStack_94 != (int *)0x0) {
        LOCK();
        iVar5 = piStack_94[1] + -1;
        piStack_94[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar3 = *(code **)*piStack_94;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar1 = piVar11 + 2;
          iVar5 = *piVar1 + -1;
          *piVar1 = iVar5;
          UNLOCK();
          if (iVar5 == 0) {
            pcVar3 = *(code **)(*piVar11 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
      if (piStack_b0 != (int *)0x0) {
        LOCK();
        iVar5 = piStack_b0[1] + -1;
        piStack_b0[1] = iVar5;
        UNLOCK();
        if (iVar5 == 0) {
          pcVar3 = *(code **)*piStack_b0;
          _guard_check_icall();
          (*pcVar3)();
          LOCK();
          piVar11 = piStack_b0 + 2;
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            pcVar3 = *(code **)(*piStack_b0 + 4);
            _guard_check_icall();
            (*pcVar3)();
          }
        }
      }
    }
  }
  else {
    piStack_94 = (int *)FUN_005beae0();
    if (0xf < *(uint *)(iVar5 + 0x58)) {
      piVar11 = (int *)*piVar11;
    }
    piStack_9c = piVar11;
    cStack_8d = func_0x009c5f50(piStack_94,&piStack_9c,1,param_5);
    if (cStack_8d == '\0') {
      puVar9 = (undefined8 *)func_0x008ab47d(0x68);
      uStack_84 = CONCAT31(uStack_84._1_3_,2);
      puStack_b8 = puVar9;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        appuStack_80[0] = std::_Func_impl_no_alloc<>::vftable;
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((int)puVar9 + 4) = 1;
        *(undefined4 *)(puVar9 + 1) = 1;
        *(undefined ***)puVar9 = std::_Ref_count_obj2<>::vftable;
        uStack_84 = CONCAT31(uStack_84._1_3_,3);
        pppuStack_5c = appuStack_80;
        func_0x00b5b890(appuStack_80,0);
        if (pppuStack_5c != (undefined ***)0x0) {
          pcVar3 = (code *)(*pppuStack_5c)[4];
          _guard_check_icall(pppuStack_5c != appuStack_80);
          (*pcVar3)();
        }
      }
      piStack_a0[1] = 0;
      piStack_a0[1] = (int)puVar9;
    }
    else {
      piStack_94 = (int *)func_0x009c6390(piStack_94);
      piVar11 = piStack_a4;
      if (0xf < (uint)piStack_94[5]) {
        piStack_94 = (int *)*piStack_94;
      }
      iVar5 = *(int *)(param_1[4] + 0x10);
      pcVar3 = *(code **)(iVar5 + 0x234);
      _guard_check_icall(piStack_a4[2],1,&piStack_94,0);
      (*pcVar3)();
      pcVar3 = *(code **)(iVar5 + 0x1c4);
      _guard_check_icall(piVar11[2]);
      (*pcVar3)();
      piStack_94 = piVar11;
      piStack_a4 = piVar11;
      puVar9 = (undefined8 *)func_0x008ab47d(0xb8);
      uStack_84 = CONCAT31(uStack_84._1_3_,1);
      puStack_b8 = puVar9;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((int)puVar9 + 4) = 1;
        *(undefined4 *)(puVar9 + 1) = 1;
        *(undefined ***)puVar9 = std::_Ref_count_obj2<>::vftable;
        func_0x00b5b3d0(puVar9 + 2,&piStack_ac,&cStack_8d,&piStack_a4,&piStack_94);
      }
      piStack_a0[1] = 0;
      piStack_a0[1] = (int)puVar9;
    }
    *piStack_a0 = (int)(puVar9 + 2);
    piStack_a4 = piStack_b0;
    if (piStack_b0 != (int *)0x0) {
      LOCK();
      iVar5 = piStack_b0[1] + -1;
      piStack_b0[1] = iVar5;
      UNLOCK();
      if (iVar5 == 0) {
        pcVar3 = *(code **)*piStack_b0;
        _guard_check_icall();
        (*pcVar3)();
        LOCK();
        piVar11 = piStack_a4 + 2;
        iVar5 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          pcVar3 = *(code **)(*piStack_a4 + 4);
          _guard_check_icall();
          (*pcVar3)();
        }
      }
    }
  }
  *unaff_FS_OFFSET = iStack_8c;
  FUN_008ab370();
  return;
}



void __fastcall FUN_00b5d180(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x1d4);
  _guard_check_icall(*(undefined4 *)(param_1 + 8));
  (*pcVar1)();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



undefined4 __fastcall FUN_00b5d1b0(int param_1)

{
  undefined4 unaff_retaddr;
  
  func_0x00469da0(*(int *)(param_1 + 4) + 0x20,param_1);
  return unaff_retaddr;
}



undefined4 __fastcall FUN_00b5d1d0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x78) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x78) + 0x68));
}



void __fastcall FUN_00b5d1e0(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0xa4) + 8);
    _guard_check_icall();
    (*pcVar1)();
    return;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b5d210(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uStack_4;
  
  uStack_4 = param_2;
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x4c) + 8);
    _guard_check_icall(&uStack_4);
    (*pcVar1)();
    return;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __thiscall FUN_00b5d250(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puStack_4;
  
  if (*(char *)(param_1[0x1e] + 0x69) == '\0') {
    puStack_4 = param_1;
    puStack_4 = (undefined4 *)func_0x009c6390(*(undefined4 *)(param_1[0x1e] + 4));
    if (0xf < (uint)puStack_4[5]) {
      puStack_4 = (undefined4 *)*puStack_4;
    }
    if ((int *)param_1[0x13] == (int *)0x0) {
      func_0x00e701bd();
      goto LAB_00b5d2c4;
    }
    pcVar1 = *(code **)(*(int *)param_1[0x13] + 8);
    _guard_check_icall(&puStack_4);
    (*pcVar1)();
  }
  puStack_4 = param_2;
  if ((int *)param_1[0x1d] != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1[0x1d] + 8);
    _guard_check_icall(&puStack_4);
    (*pcVar1)();
    return;
  }
LAB_00b5d2c4:
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void __fastcall FUN_00b5d2d0(int param_1)

{
  code *pcVar1;
  
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x7c) + 8);
    _guard_check_icall();
    (*pcVar1)();
    return;
  }
  func_0x00e701bd();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



undefined4 * __thiscall FUN_00b5d350(undefined4 *param_1,byte param_2)

{
  *param_1 = rx::SyncImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xc);
  }
  return param_1;
}



undefined4 __thiscall
FUN_00b5d380(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x4c4);
  _guard_check_icall(*(undefined4 *)(param_1 + 8),param_3,param_4,param_5);
  uVar2 = (*pcVar1)();
  *param_2 = uVar2;
  return 0;
}



undefined4 __thiscall FUN_00b5d3b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x4f0);
  _guard_check_icall(*(undefined4 *)(param_1 + 8),0x9114,1,0,param_3);
  (*pcVar1)();
  return 0;
}



void __fastcall FUN_00b5d3e0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x4c8);
  _guard_check_icall(*(undefined4 *)(param_1 + 8));
  (*pcVar1)();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



undefined4 __thiscall
FUN_00b5d410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x50c);
  _guard_check_icall(*(undefined4 *)(param_1 + 8),param_3,param_4,param_5);
  (*pcVar1)();
  return 0;
}



undefined4 __thiscall
FUN_00b5d440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x4d8);
  _guard_check_icall(param_3,param_4);
  iVar2 = (*pcVar1)();
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    func_0x0098f180(0x505,"glFenceSync failed to create a GLsync object.",
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\SyncGL.cpp"
                    ,"rx::SyncGL::set",0x2a);
    return 1;
  }
  func_0x00ab5330();
  return 0;
}



undefined4 * __thiscall FUN_00b5d740(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::TextureGL::vftable;
  func_0x00a1e390(uVar1);
  func_0x00a5c060();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0xa8);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 __thiscall FUN_00b5d880(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int unaff_ESI;
  int unaff_retaddr;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_14;
  undefined2 uStack_13;
  undefined1 uStack_11;
  undefined4 uStack_10;
  undefined1 uStack_c;
  undefined4 uStack_4;
  
  iStack_20 = param_1;
  func_0x00a02140(param_2);
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  pcVar1 = *(code **)(**(int **)(unaff_retaddr + 0x80) + 0xa8);
  _guard_check_icall();
  uStack_c = (*pcVar1)();
  uStack_11 = (undefined1)((uint)unaff_ESI >> 0x18);
  iStack_20 = (*(undefined4 **)(unaff_retaddr + 0xdc))[0x13];
  uStack_1c = **(undefined4 **)(unaff_retaddr + 0xdc);
  uStack_13 = (undefined2)((uint)unaff_ESI >> 8);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  func_0x00b60280(uStack_4,**(undefined1 **)(unaff_ESI + 0x30),0,1,&iStack_20);
  return 0;
}



undefined4 __thiscall FUN_00b5d930(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  code *pcVar7;
  undefined4 **ppuVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int unaff_EBX;
  int *piVar17;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar18;
  int *unaff_EDI;
  uint uVar19;
  undefined4 unaff_retaddr;
  char *pcVar20;
  undefined4 **ppuVar21;
  undefined4 **ppuVar22;
  code *pcStack_8c;
  int *piStack_80;
  code *pcStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 **ppuStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 **ppuStack_20;
  undefined4 *puStack_10;
  int *piStack_8;
  
  uStack_38 = *(undefined4 *)(param_2 + 0x1d14);
  func_0x00a01ee0(param_2);
  iStack_68 = func_0x00a02140(param_2);
  uStack_70 = func_0x00a01ed0(param_2);
  uVar5 = func_0x00967be0();
  piStack_80 = (int *)CONCAT31(piStack_80._1_3_,uVar5);
  uVar19 = param_2;
  pcVar7 = (code *)func_0x0098d7f0();
  pcStack_78 = pcVar7;
  iStack_60 = func_0x00946bf0(param_4,pcVar7);
  ppuVar8 = (undefined4 **)func_0x00ace3f0(piStack_80,uStack_74,param_4,pcVar7);
  uVar9 = (uint)**(byte **)(param_1 + 0x30);
  func_0x00ab6cf0(uVar9,*(undefined4 *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_3 + 0x338);
  iVar10 = func_0x0098d900();
  iVar11 = iVar10 + 8;
  puVar18 = &uStack_40;
  pcVar7 = *(code **)(**(int **)(iVar10 + 0x18) + 4);
  _guard_check_icall(puVar18,iVar11);
  (*pcVar7)();
  piVar17 = piStack_8;
  if (((((*piStack_8 < 0) || (piStack_8[1] < 0)) || (iStack_48 < piStack_8[2] + *piStack_8)) ||
      (iStack_44 < piStack_8[3] + piStack_8[1])) &&
     ((*(char *)(param_2 + 0x18ad) != '\0' || (*(char *)(param_2 + 0x1345) != '\0')))) {
    uVar19 = CONCAT13(1,(int3)uVar19);
    iVar10 = func_0x00946bf0(ppuVar8,param_1);
    cVar6 = func_0x008d1880(piVar17[3] * *(int *)(iVar10 + 0x2c) * piVar17[2],&pcStack_78);
    if (cVar6 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                      ,"rx::TextureGL::copyImage",0x2c9);
      return 1;
    }
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    puStack_34 = (undefined4 *)0x0;
    iStack_44 = 1;
    iVar10 = func_0x00ab8e50(param_2,&iStack_44);
    if (iVar10 == 1) {
      return 1;
    }
    iVar10 = func_0x00ab8e00(param_2,0);
    if (iVar10 == 1) {
      return 1;
    }
    if ((param_1 == 0x8d61) && (uVar19 = 0x8d61, *(int *)(uVar9 + 0xb34) == 0)) {
      uVar19 = 0x140b;
    }
    func_0x009f7d30(param_2,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::copyImage",0x2db);
    pcStack_8c = *(code **)(uVar9 + 0xac);
    unaff_ESI = *(int *)(unaff_EBX + 4);
    uVar13 = func_0x00946f70(ppuVar8);
    iVar10 = piVar17[3];
    puVar2 = ppuStack_20[2];
    uVar14 = func_0x008bafc0(iVar11);
    _guard_check_icall(uVar14,puVar18,ppuVar8,puVar2,iVar10,0,uVar13,uVar19,unaff_ESI);
    (*pcStack_8c)();
    iVar10 = func_0x009f7360(uStack_4c,
                             "functions->texImage2D(ToGLenum(target), static_cast<GLint>(level), copyTexImageFormat.internalFormat, sourceArea.width, sourceArea.height, 0, gl::GetUnsizedFormat(copyTexImageFormat.internalFormat), type, zero->data())"
                             ,
                             "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                             ,"rx::TextureGL::copyImage",0x2db);
    param_2 = uStack_4c;
    if (iVar10 == 1) {
      return 1;
    }
  }
  else {
    uVar19 = uVar19 & 0xffffff;
  }
  piVar17 = piStack_8;
  puStack_6c = (undefined4 *)0x0;
  iStack_68 = 0;
  puStack_5c = (undefined4 *)0x0;
  ppuStack_58 = (undefined4 **)0x0;
  uStack_54 = 0;
  uStack_50 = 0;
  iStack_60 = iStack_44;
  iStack_64 = iStack_48;
  cVar6 = func_0x00953b30(piStack_8,&puStack_6c,&puStack_5c);
  if (cVar6 == '\0') goto LAB_00b5e0eb;
  pcStack_78 = (code *)func_0x0098d9d0();
  if ((pcStack_78 != (code *)0x0) && (*(int *)pcStack_78 == 0x1702)) {
    iVar10 = func_0x00969240();
    if ((*(int *)(iVar10 + 0x140) != 0) &&
       (*(int *)(*(int *)(iVar10 + 0x140) + 0xa4) == unaff_EDI[0x29])) {
      piStack_80 = (int *)FUN_005db210();
      piVar12 = (int *)func_0x008df6e0();
      if (piStack_80 != piVar12) {
        pcVar7 = *(code **)(*unaff_EDI + 100);
        _guard_check_icall(param_2,piStack_80);
        iVar10 = (*pcVar7)();
        if (iVar10 == 1) {
          return 1;
        }
        if (piStack_80 != (int *)unaff_EDI[0x28]) {
          iVar10 = func_0x00a01ee0(param_2);
          func_0x00a02140(param_2);
          unaff_EDI[0x28] = (int)piStack_80;
          unaff_EDI[0x10] = unaff_EDI[0x10] | 0x40000;
          func_0x00953460(2);
          func_0x00ab6cf0(**(undefined1 **)(uVar19 + 0x30),*(undefined4 *)(uVar19 + 0xa4));
          pcVar7 = *(code **)(iVar10 + 0xb8);
          piStack_80._1_3_ = (undefined3)((uint)piStack_80 >> 8);
          piStack_80 = (int *)CONCAT31(piStack_80._1_3_,**(undefined1 **)(uVar9 + 0x30));
          uVar13 = func_0x008bb080(piStack_80,0x813d,pcStack_8c);
          _guard_check_icall(uVar13);
          (*pcVar7)();
          piVar17 = piStack_8;
        }
      }
    }
  }
  cVar6 = (char)(uVar9 >> 0x18);
  func_0x00b5d7b0(&uStack_3c,iVar1,uStack_70,ppuVar8);
  puStack_6c = (undefined4 *)((int)puStack_5c - *piVar17);
  iStack_68 = (int)ppuStack_58 - piVar17[1];
  iStack_64 = 0;
  if ((char)uStack_30 == '\0') {
    ppuVar22 = (undefined4 **)0x8ca8;
    func_0x00ab6ac0(0x8ca8,*(undefined4 *)(pcStack_8c + 8));
    if (((pcStack_8c[0x570] != (code)0x0) && (piStack_80 != (int *)0x0)) && (*piStack_80 == 0x8d41))
    {
      func_0x00a01ec0(param_2);
      uStack_2c = uStack_74;
      uStack_28 = uStack_70;
      ppuVar21 = (undefined4 **)0x1;
      puStack_24 = puStack_5c;
      ppuStack_20 = ppuStack_58;
      iVar10 = func_0x00ad0370(param_2,piStack_8,unaff_EDI[0x29],unaff_EDI,uVar19,&iStack_64,
                               &uStack_2c,0x2600,1);
      puVar18 = puStack_34;
      goto joined_r0x00b5deac;
    }
    if (cVar6 == '\0') {
      if (pcStack_8c[0x558] == (code)0x0) {
        func_0x009f7d30(param_2,
                        "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                        ,"rx::TextureGL::copyImage",0x33e);
        iVar10 = piVar17[3];
        iVar11 = piVar17[2];
        pcStack_78 = *(code **)(unaff_ESI + 0xcc);
        uVar13 = puStack_10[1];
        uVar14 = *puStack_10;
        uVar15 = func_0x008bafc0(unaff_EDI);
        pcVar7 = pcStack_78;
        ppuVar21 = (undefined4 **)0x0;
        _guard_check_icall(uVar15,uVar19,ppuVar8,uVar14,uVar13,iVar11,iVar10,0);
        (*pcVar7)();
        uVar13 = 0x33e;
        pcVar20 = 
        "functions->copyTexImage2D( ToGLenum(target), static_cast<GLint>(level), copyTexImageFormat.internalFormat, sourceArea.x, sourceArea.y, sourceArea.width, sourceArea.height, 0)"
        ;
      }
      else {
        if ((unaff_EBX == 0x8d61) && (*(int *)(unaff_ESI + 0xb34) == 0)) {
          unaff_EBX = 0x140b;
        }
        func_0x009f7d30(param_2,
                        "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                        ,"rx::TextureGL::copyImage",0x331);
        pcVar7 = *(code **)(unaff_ESI + 0xac);
        uVar14 = func_0x00946f70(ppuVar8);
        iVar10 = piVar17[3];
        uVar13 = puStack_10[2];
        uVar15 = func_0x008bafc0(unaff_EDI);
        ppuVar21 = (undefined4 **)0x0;
        _guard_check_icall(uVar15,uVar19,ppuVar8,uVar13,iVar10,0,uVar14,unaff_EBX);
        (*pcVar7)();
        uVar13 = uStack_3c;
        iVar10 = func_0x009f7360(uStack_3c,
                                 "functions->texImage2D( ToGLenum(target), static_cast<GLint>(level), copyTexImageFormat.internalFormat, sourceArea.width, sourceArea.height, 0, gl::GetUnsizedFormat(copyTexImageFormat.internalFormat), type, nullptr)"
                                 ,
                                 "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                 ,"rx::TextureGL::copyImage",0x331);
        if (iVar10 == 1) {
          return 1;
        }
        func_0x009f7d30(uVar13,
                        "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                        ,"rx::TextureGL::copyImage",0x336);
        ppuVar8 = (undefined4 **)ppuVar21[0x35];
        uVar13 = puStack_34[3];
        uVar15 = puStack_34[2];
        uVar3 = puStack_34[1];
        uVar4 = *puStack_34;
        uVar16 = func_0x008bafc0(unaff_EBX);
        ppuVar22 = ppuVar8;
        _guard_check_icall(uVar16,uVar14,0,0,uVar4,uVar3,uVar15,uVar13);
        (*(code *)ppuVar8)();
        uVar13 = 0x336;
        pcVar20 = 
        "functions->copyTexSubImage2D(ToGLenum(target), static_cast<GLint>(level), 0, 0, sourceArea.x, sourceArea.y, sourceArea.width, sourceArea.height)"
        ;
      }
      puVar18 = puStack_5c;
      iVar10 = func_0x009f7360(puStack_5c,pcVar20,
                               "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                               ,"rx::TextureGL::copyImage",uVar13);
      goto joined_r0x00b5deac;
    }
    pcVar7 = *(code **)(unaff_ESI + 0xd4);
    ppuVar21 = ppuStack_58;
    uVar13 = func_0x008bafc0(unaff_EDI,uVar19,uStack_74,uStack_70,iStack_64,iStack_60,puStack_5c,
                             ppuStack_58);
    _guard_check_icall(uVar13);
    (*pcVar7)();
    puVar18 = puStack_34;
  }
  else {
    func_0x00a01ec0(param_2);
    uVar5 = *(undefined1 *)unaff_EDI[0xc];
    if ((char)(uVar19 >> 0x18) == '\0') {
      ppuVar21 = &puStack_5c;
      iVar10 = func_0x00ad0b50(param_2,unaff_EDI[0x29],uVar5,unaff_EBP,uStack_3c,unaff_ESI,ppuVar21,
                               ppuVar8,unaff_retaddr);
      ppuVar22 = ppuVar8;
      puVar18 = puStack_34;
    }
    else {
      ppuVar22 = &puStack_5c;
      ppuVar21 = &puStack_6c;
      iVar10 = func_0x00ad0cd0(param_2,unaff_EDI[0x29],
                               CONCAT31((int3)((uint)unaff_EDI[0xc] >> 8),uVar5),unaff_EBP,uStack_3c
                               ,unaff_ESI,ppuVar21,ppuVar22);
      puVar18 = puStack_34;
    }
joined_r0x00b5deac:
    if (iVar10 == 1) {
      return 1;
    }
  }
  func_0x00b601c0(puVar18,ppuVar22,ppuVar21,1,&iStack_60);
LAB_00b5e0eb:
  if (*(char *)(iVar1 + 0x4c8) != '\0') {
    func_0x00ab5810();
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_00b5e110(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *******pppppppuVar9;
  int *piVar10;
  int unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 *******pppppppuVar11;
  undefined4 *puVar12;
  undefined4 *******pppppppuStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  iVar4 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar5 = func_0x00a01ed0(param_2);
  func_0x00967be0();
  pppppppuVar11 = *(undefined4 ********)(param_3 + 4);
  iVar6 = func_0x0098d900();
  iVar7 = iVar6 + 8;
  puVar12 = &uStack_2c;
  pcVar2 = *(code **)(**(int **)(iVar6 + 0x18) + 4);
  _guard_check_icall();
  (*pcVar2)();
  uStack_10 = uStack_34;
  uStack_c = uStack_30;
  uStack_18 = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  cVar3 = func_0x00953b30(param_3,&uStack_18,&iStack_28);
  if (cVar3 == '\0') {
    return 0;
  }
  pppppppuStack_38 = *(undefined4 ********)(param_2 + 8);
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  uVar8 = 0x8d40;
  if (*(char *)(iVar4 + 0x16e2) != '\0') {
    uVar8 = 0x8ca8;
  }
  func_0x00ab6ac0(uVar8,*(undefined4 *)(unaff_EBX + 8));
  cVar3 = func_0x0093d080(unaff_EBP);
  pppppppuVar9 = pppppppuVar11;
  if (cVar3 != '\0') {
    iVar6 = func_0x0093cef0(unaff_EBP);
    pppppppuVar9 = (undefined4 *******)(iVar6 + (int)pppppppuVar11 * 6);
  }
  uVar8 = uStack_14;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x34) + (int)pppppppuVar9 * 0x18);
  if (*(char *)(*(int *)(param_1 + 0x34) + 0xc + (int)pppppppuVar9 * 0x18) == '\0') {
    cVar3 = func_0x00a04920(CONCAT31((int3)((uint)puVar1 >> 8),**(undefined1 **)(param_1 + 0x30)));
    if (cVar3 == '\0') {
      pcVar2 = (code *)puVar12[0x40];
      pppppppuVar9 = pppppppuStack_38;
      uVar5 = func_0x008bafc0(unaff_EBP,pppppppuVar11,unaff_EBX,iVar4,uVar5,pppppppuStack_38,
                              uStack_34,uStack_30,uStack_2c);
      _guard_check_icall(uVar5);
      (*pcVar2)();
      goto LAB_00b5e3d8;
    }
    if (((*(char *)(iVar7 + 0x570) == '\0') || (iVar6 = func_0x0098d9d0(), iVar6 == 0)) ||
       (piVar10 = (int *)func_0x0098d9d0(), uVar5 = uStack_14, *piVar10 != 0x8d41)) {
      pcVar2 = (code *)puVar12[0x35];
      pppppppuVar9 = pppppppuStack_38;
      uVar5 = func_0x008bafc0(unaff_EBP,pppppppuVar11,unaff_EBX,iVar4,pppppppuStack_38,uStack_34,
                              uStack_30,uStack_2c);
      _guard_check_icall(uVar5);
      (*pcVar2)();
      goto LAB_00b5e3d8;
    }
    func_0x00a01ec0(uStack_14);
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    pppppppuVar9 = &pppppppuStack_38;
    iStack_28 = unaff_EBX;
    iStack_24 = iVar4;
    iVar4 = func_0x00ad0370(uVar5,uStack_4,*(undefined4 *)(param_1 + 0xa4),unaff_EBP,pppppppuVar11,
                            pppppppuVar9,&iStack_28,0x2600,1);
  }
  else {
    func_0x00a01ec0(uStack_14);
    iVar4 = func_0x00ad0cd0(uVar8,*(undefined4 *)(param_1 + 0xa4),
                            CONCAT31((int3)((uint)*(undefined1 **)(param_1 + 0x30) >> 8),
                                     **(undefined1 **)(param_1 + 0x30)),unaff_EBP,*puVar1,
                            pppppppuVar11,&stack0xffffffb0,&pppppppuStack_38,uStack_4);
    pppppppuVar9 = pppppppuVar11;
  }
  if (iVar4 == 1) {
    return 1;
  }
LAB_00b5e3d8:
  if (*(char *)(pppppppuVar9 + 0x132) != '\0') {
    func_0x00ab5810();
  }
  return 0;
}



void FUN_00b5e400(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  undefined4 uStack_8;
  
  uVar2 = func_0x00967be0();
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar3 = func_0x008df930(uVar2,uVar1);
  uVar4 = func_0x00955050(&stack0xffffffe8,*(undefined4 *)(iVar3 + 0xc),param_4,param_5,param_6,
                          param_7);
  func_0x00b5e470(uStack_8,uVar2,uVar1,unaff_retaddr,param_1,uVar4);
  return;
}



void FUN_00b5e740(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int in_stack_00000024;
  int iStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_38 = 0xb5e754;
  func_0x00967be0();
  uVar1 = *(undefined4 *)(param_2 + 4);
  uStack_38 = (uint)*(byte *)(in_stack_00000024 + 0x6c);
  uStack_3c = 0xb5e776;
  uStack_3c = func_0x0093d180();
  uStack_38 = param_5;
  iStack_40 = 0xb5e785;
  puVar4 = (undefined4 *)func_0x008df930();
  iStack_40 = param_2;
  uVar2 = puVar4[1];
  uVar3 = *puVar4;
  uVar5 = func_0x00946f70(param_1);
  iVar6 = func_0x00b5f2c0(uStack_4,unaff_EBP,unaff_EBX,param_1,puVar4,uVar5);
  if (iVar6 == 1) {
    return;
  }
  uVar5 = func_0x00946bf0(param_1,0);
  iStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  func_0x00b5e470(uVar1,puVar4,unaff_EBX,&iStack_40,uVar3,&stack0xffffffcc,uVar5,uVar2,uStack_8,
                  uStack_4,in_stack_00000024);
  return;
}



undefined4 __thiscall FUN_00b5e840(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  uint uVar10;
  int iStack_30;
  int iStack_2c;
  undefined4 *puStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  
  func_0x00a01ee0(param_2);
  iVar4 = func_0x00a02140(param_2);
  iStack_2c = func_0x00a01ed0(param_2);
  func_0x008df6e0();
  piVar5 = (int *)func_0x008dfc40();
  iStack_30 = func_0x008df510();
  iVar9 = *(int *)(param_1 + 0xa4);
  puVar1 = *(undefined4 **)(iStack_30 + 0xc);
  puStack_28 = puVar1;
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30),iVar9);
  if (((puVar1[0x16] == 0x8c40) && (*(char *)(iVar4 + 0x540) != '\0')) &&
     (**(char **)(param_1 + 0x30) == '\0')) {
    puVar6 = (undefined8 *)
             func_0x00acf1e0(&iStack_20,unaff_EBX,iVar4,*puVar1,puVar1[0x13],puVar1[0x14]);
    iVar9 = (int)piVar5 - unaff_EBP;
    uVar10 = 1;
    uStack_14 = *puVar6;
    uVar8 = *(undefined4 *)(puVar6 + 1);
    uStack_24 = iVar9 + 1;
    if (1 < uStack_24) {
      do {
        iStack_20 = *piVar5 >> ((byte)uVar10 & 0x1f);
        iStack_1c = piVar5[1] >> ((byte)uVar10 & 0x1f);
        if (iStack_20 < 1) {
          iStack_20 = 1;
        }
        uStack_18 = 1;
        if (iStack_1c < 1) {
          iStack_1c = 1;
        }
        iStack_2c = unaff_EBP + uVar10;
        uVar7 = func_0x008df930(0,iStack_2c);
        func_0x00ab6980(8,0);
        cVar3 = func_0x00953b00(uVar7,&iStack_30);
        if ((cVar3 != '\0') || (cVar3 = func_0x009404d0(iStack_30), cVar3 != '\0')) {
          func_0x009f7d30(param_2,
                          "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                          ,"rx::TextureGL::generateMipmap",0x58b);
          pcVar2 = *(code **)(unaff_EBX + 0xac);
          puStack_28 = (undefined4 *)CONCAT31(puStack_28._1_3_,**(undefined1 **)(param_1 + 0x30));
          uVar7 = func_0x008bb080(puStack_28,iStack_2c,(undefined4)uStack_14,iStack_20,iStack_1c,0,
                                  uStack_14._4_4_,uVar8,0);
          _guard_check_icall(uVar7);
          (*pcVar2)();
          iVar4 = func_0x009f7360(param_2,
                                  "functions->texImage2D( ToGLenum(getType()), effectiveBaseLevel + levelIdx, texImageFormat.internalFormat, levelSize.width, levelSize.height, 0, texImageFormat.format, texImageFormat.type, nullptr)"
                                  ,
                                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                  ,"rx::TextureGL::generateMipmap",0x58b);
          if (iVar4 == 1) {
            return 1;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uStack_24);
    }
    func_0x00a01ec0(param_2);
    iVar4 = func_0x00ad1df0(param_2,param_1,unaff_EBP,iVar9 + 1,piVar5);
    if (iVar4 == 1) {
      return 1;
    }
  }
  else {
    func_0x009f7d30(param_2,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::generateMipmap",0x596);
    pcVar2 = *(code **)(unaff_EBX + 0x3c4);
    uStack_24 = CONCAT31(uStack_24._1_3_,**(undefined1 **)(param_1 + 0x30));
    piVar5 = (int *)func_0x008bb080(uStack_24);
    _guard_check_icall(piVar5);
    (*pcVar2)();
    iVar4 = func_0x009f7360(param_2,"functions->generateMipmap(ToGLenum(getType()))",
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::generateMipmap",0x596);
    if (iVar4 == 1) {
      return 1;
    }
    iVar9 = iVar9 - (int)piVar5;
  }
  uVar8 = func_0x00b5eaf0();
  func_0x00b60280(param_2,**(undefined1 **)(param_1 + 0x30),piVar5,iVar9,uVar8);
  return 0;
}



uint __thiscall FUN_00b5eb50(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar5 = (uint)**(byte **)(param_1 + 0x30);
  func_0x00ab6cf0(uVar5,*(undefined4 *)(param_1 + 0xa4));
  pcVar1 = *(code **)(iVar3 + 0x6c);
  uVar2 = func_0x0093d180(**(undefined1 **)(param_1 + 0x30),0x8d68,&stack0xfffffff0);
  uVar4 = func_0x008bafc0(uVar2);
  _guard_check_icall(uVar4);
  (*pcVar1)();
  return uVar5;
}



undefined4 __thiscall FUN_00b5ec30(int param_1,code *param_2,undefined4 param_3,code *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  code *pcStack_74;
  code *pcStack_70;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  code *pcStack_40;
  code *pcStack_3c;
  int aiStack_34 [2];
  int iStack_2c;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  pcStack_70 = param_2;
  uStack_50 = *(undefined4 *)(param_2 + 0x1d14);
  pcStack_74 = (code *)0xb5ec4d;
  iStack_58 = func_0x00a01ee0();
  pcStack_74 = param_2;
  uStack_4c = func_0x00a02140();
  iStack_54 = func_0x00a01ed0(param_2);
  cVar2 = func_0x00a046d0(**(undefined1 **)(param_1 + 0x30));
  iStack_44 = *(int *)(param_4 + 4);
  pcStack_70 = (code *)0xb5ec8d;
  uVar3 = func_0x00967be0();
  pcStack_40 = (code *)CONCAT31(pcStack_40._1_3_,uVar3);
  pcStack_70 = pcStack_40;
  pcStack_74 = (code *)0xb5ec9a;
  cVar4 = func_0x0093d080();
  iVar5 = iStack_44;
  if (cVar4 != '\0') {
    pcStack_70 = pcStack_40;
    pcStack_74 = (code *)0xb5ecaa;
    iVar5 = func_0x0093cef0();
    iVar5 = iVar5 + iStack_44 * 6;
  }
  pcStack_70 = *(code **)(*(int *)(param_1 + 0x34) + 4 + iVar5 * 0x18);
  pcStack_3c = pcStack_70;
  if ((*(char *)(iStack_54 + 0x360) != '\0') || (cVar2 == '\0')) {
    pcStack_74 = (code *)(uint)**(byte **)(param_1 + 0x30);
    cVar4 = func_0x00a042e0(iStack_58);
    if (cVar4 != '\0') {
      pcStack_70 = param_2;
      pcStack_74 = (code *)0xb5ecfd;
      func_0x00a01ec0();
      pcStack_70 = param_4;
      pcStack_74 = (code *)0xb5ed0b;
      iVar5 = func_0x008df8a0();
      pcStack_74 = (code *)&stack0xffffffa3;
      iVar5 = func_0x00ad04f0(param_2,param_1,pcStack_40,*(undefined4 *)(iVar5 + 8),param_4);
      if (iVar5 == 1) {
        return 1;
      }
      if (cVar2 != '\0') {
        return 0;
      }
    }
  }
  pcStack_70 = param_4;
  pcStack_74 = (code *)0xb5ed48;
  puVar6 = (undefined4 *)func_0x008df8a0();
  pcStack_74 = (code *)&uStack_1c;
  uStack_4c = puVar6[3];
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_1c = 1;
  puStack_48 = puVar6;
  iVar5 = func_0x00ab8e50(param_2);
  if (iVar5 == 1) {
    return 1;
  }
  iVar5 = 0;
  pcStack_40 = *(code **)(iStack_58 + 0x290);
  func_0x00ab6980(8);
  uVar15 = *(undefined4 *)(param_1 + 0xa4);
  uVar7 = (uint)**(byte **)(param_1 + 0x30);
  func_0x00ab6cf0(uVar7,uVar15);
  if (*(char *)(unaff_EBP + 0xd) == '\0') {
    uVar13 = func_0x00acf2e0(pcStack_74,pcStack_70,unaff_EBP[0x13],unaff_EBP[0x14]);
    uVar17 = (undefined4)((ulonglong)uVar13 >> 0x20);
    piVar19 = &iStack_58;
    iStack_58 = 0;
    iStack_54 = CONCAT31(iStack_54._1_3_,**(undefined1 **)(param_1 + 0x30));
    uVar11 = func_0x00a04950(iStack_54);
    uVar11 = uVar11 & 0xff;
    cVar2 = func_0x0094a9a0(uVar17,puVar6,aiStack_34);
    if (cVar2 == '\0') {
      func_0x0098f180(0x502,"Integer overflow.",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                      ,"rx::TextureGL::initializeContents",0x856);
      return 1;
    }
    cVar2 = func_0x008d1880(uVar17,&pcStack_74);
    if (cVar2 == '\0') {
      func_0x0098f180(0x505,"Failed to allocate host memory",
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                      ,"rx::TextureGL::initializeContents",0x859);
      return 1;
    }
    pcStack_70 = (code *)CONCAT31(pcStack_70._1_3_,**(undefined1 **)(param_1 + 0x30));
    cVar2 = func_0x00a04920(pcStack_70);
    if (cVar2 == '\0') {
      uVar17 = puVar6[2];
      uVar12 = puVar6[1];
      uVar14 = *puVar6;
      uVar18 = *(undefined4 *)(iVar5 + 4);
      pcStack_70 = *(code **)(iStack_2c + 4);
      uVar3 = func_0x00967be0();
      uVar10 = func_0x008bafc0(uVar3);
      param_2 = pcStack_74;
LAB_00b5f136:
      _guard_check_icall(uVar10,(int)uVar13,0,0,0,uVar14,uVar12,uVar17,unaff_EBP,param_2,uVar18);
      (*(code *)((ulonglong)uVar13 >> 0x20))();
      aiStack_34[0] = iStack_44;
    }
    else if ((char)piVar19[0x1c2] == '\0') {
      uVar17 = puVar6[1];
      uVar18 = *puVar6;
      uVar12 = *(undefined4 *)(iStack_2c + 4);
      pcStack_70 = *(code **)(uVar11 + 0xf4);
      uVar14 = *(undefined4 *)(iVar5 + 4);
      uVar3 = func_0x00967be0();
      uVar9 = func_0x008bafc0(uVar3);
      pcVar1 = pcStack_70;
      _guard_check_icall(uVar9,uVar12,0,0,uVar18,uVar17,param_2,uVar7,uVar14);
      (*pcVar1)();
      aiStack_34[0] = iStack_44;
    }
    else {
      uVar17 = *(undefined4 *)(iStack_2c + 4);
      iStack_58 = puVar6[1];
      uVar18 = *(undefined4 *)(iVar5 + 4);
      iStack_54 = 1;
      uVar12 = func_0x00967be0();
      iVar5 = func_0x00b61780(aiStack_34[0],uVar12,uVar17,&stack0xffffff98,param_2,uVar7,&uStack_50,
                              0,0x1dfff,uVar18);
      if (iVar5 == 1) {
        return 1;
      }
    }
LAB_00b5f145:
    iVar5 = func_0x00ab8e50(aiStack_34[0],aiStack_34[0] + 0x1838);
    if (iVar5 != 1) {
      func_0x00ab6980(8,uVar15);
      return 0;
    }
  }
  else {
    puVar8 = (undefined4 *)func_0x00ace3a0(pcStack_74,pcStack_70,*unaff_EBP);
    pcStack_70 = (code *)0x0;
    cVar2 = func_0x0094a640(puVar6,&pcStack_70);
    if (cVar2 == '\0') {
      uVar17 = 0x837;
      pcVar16 = "Integer overflow.";
      uVar15 = 0x502;
    }
    else {
      cVar2 = func_0x008d1880(param_2,&stack0xffffff9c);
      if (cVar2 != '\0') {
        cVar2 = func_0x00a04920(**(undefined1 **)(param_1 + 0x30));
        if (cVar2 == '\0') {
          pcStack_74 = *(code **)(iVar5 + 0x144);
          uVar17 = puVar6[2];
          uVar18 = unaff_EBP[1];
          uVar12 = unaff_ESI[1];
          uVar14 = *unaff_ESI;
          uVar9 = *(undefined4 *)(iStack_18 + 4);
          uVar3 = func_0x00967be0();
          uVar10 = func_0x008bafc0(uVar3);
          uVar13 = CONCAT44(pcStack_74,uVar9);
          unaff_EBP = puVar8;
          goto LAB_00b5f136;
        }
        pcVar1 = *(code **)(iVar5 + 0x140);
        uVar17 = puVar6[1];
        uVar18 = unaff_EBP[1];
        uVar12 = *unaff_ESI;
        uVar14 = *(undefined4 *)(iStack_18 + 4);
        uVar3 = func_0x00967be0();
        uVar9 = func_0x008bafc0(uVar3);
        _guard_check_icall(uVar9,uVar14,0,0,uVar12,uVar17,puVar8,param_2,uVar18);
        (*pcVar1)();
        aiStack_34[0] = iStack_44;
        goto LAB_00b5f145;
      }
      uVar17 = 0x83a;
      pcVar16 = "Failed to allocate host memory";
      uVar15 = 0x505;
    }
    func_0x0098f180(uVar15,pcVar16,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::initializeContents",uVar17);
  }
  return 1;
}



void __thiscall FUN_00b5f180(int param_1,undefined4 param_2)

{
  func_0x00ab5200();
  func_0x00a02140(param_2);
  func_0x00ab7250(*(undefined4 *)(param_1 + 0xa4));
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}



undefined4 __thiscall FUN_00b5f1c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  iVar4 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  piVar7 = (int *)(param_1 + 0xa4);
  iVar8 = *piVar7;
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30));
  func_0x00ab7250(*piVar7);
  pcVar1 = *(code **)(iVar4 + 0xe4);
  _guard_check_icall(1,piVar7);
  (*pcVar1)();
  func_0x00ab6cf0(**(undefined1 **)(iVar8 + 0x30),*piVar7);
  if (*(int *)(iVar8 + 0x34) != *(int *)(iVar8 + 0x38)) {
    *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x34);
  }
  if (**(char **)(iVar8 + 0x30) == '\x05') {
    uVar5 = 1;
  }
  else if (**(char **)(iVar8 + 0x30) == '\a') {
    uVar5 = 0x66;
  }
  else {
    uVar5 = 0x11;
  }
  func_0x00b5f600(uVar5);
  puVar6 = (undefined4 *)func_0x008dd3e0();
  uVar5 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  *(undefined4 *)(iVar8 + 0x48) = *puVar6;
  *(undefined4 *)(iVar8 + 0x4c) = uVar5;
  *(undefined4 *)(iVar8 + 0x50) = uVar2;
  *(undefined4 *)(iVar8 + 0x54) = uVar3;
  uVar5 = func_0x00953cc0(&stack0xffffff9c,**(undefined1 **)(iVar8 + 0x30));
  func_0x009537a0(uVar5);
  *(undefined4 *)(iVar8 + 0x9c) = 1000;
  *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar8 + 0x44);
  func_0x00953460(3);
  return 0;
}



undefined4 __thiscall FUN_00b5f690(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 != *(int *)(param_1 + 0x9c)) {
    iVar2 = func_0x00a01ee0(param_2);
    func_0x00a02140(param_2);
    *(int *)(param_1 + 0x9c) = param_3;
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x20000;
    func_0x00953460(2);
    func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
    pcVar1 = *(code **)(iVar2 + 0xb8);
    uVar3 = func_0x008bb080(**(undefined1 **)(param_1 + 0x30),0x813c,param_3);
    _guard_check_icall(uVar3);
    (*pcVar1)();
  }
  return 0;
}



undefined4 __thiscall FUN_00b5f720(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = func_0x00a01ee0(param_2);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(iVar1 + 0xa4);
  uVar3 = *(undefined4 *)(iVar1 + 0xa0);
  if (*(int *)(iVar1 + 0x9c) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_007814c0();
    if (iVar2 != 0) {
      pcVar4 = *(code **)(iVar5 + 0x858);
      uVar7 = func_0x00953ea0(iVar1 + 0x98);
      _guard_check_icall(0x8c2a,param_3,uVar6,uVar3,uVar7);
      (*pcVar4)();
      return 0;
    }
  }
  pcVar4 = *(code **)(iVar5 + 0x4bc);
  _guard_check_icall(0x8c2a,param_3,uVar6);
  (*pcVar4)();
  return 0;
}



undefined4 __thiscall FUN_00b5f7c0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 *unaff_retaddr;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_48;
  
  uStack_48 = param_2;
  uVar5 = func_0x00a01ee0();
  func_0x00a02140(param_2);
  uVar6 = func_0x00a01ed0(param_2);
  uStack_48 = 0xb5f7fb;
  func_0x00967be0();
  uVar1 = *(undefined4 *)(param_3 + 4);
  uStack_48 = param_4;
  func_0x00946ea0();
  uVar6 = func_0x00ace3a0(uVar5,uVar6,param_4);
  uStack_48 = *(undefined4 *)(param_1 + 0xa4);
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30));
  uVar5 = param_4;
  iVar7 = func_0x00ab8e50(param_2,param_4);
  if (iVar7 != 1) {
    cVar4 = func_0x00a04920(**(undefined1 **)(param_1 + 0x30));
    if (cVar4 == '\0') {
      func_0x009f7d30(param_2,
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                      ,"rx::TextureGL::setCompressedImage",0x263);
      pcVar2 = *(code **)(unaff_EDI + 0x138);
      uVar11 = unaff_retaddr[2];
      uVar3 = unaff_retaddr[1];
      uVar8 = *unaff_retaddr;
      uVar9 = func_0x008bafc0(unaff_ESI);
      uVar12 = 0;
      _guard_check_icall(uVar9,unaff_EBP,uVar6,uVar8,uVar3,uVar11,0,param_3,param_4);
      (*pcVar2)();
      uVar11 = 0x263;
      pcVar10 = 
      "functions->compressedTexImage3D(ToGLenum(target), static_cast<GLint>(level), compressedTexImageFormat.internalFormat, size.width, size.height, size.depth, 0, static_cast<GLsizei>(imageSize), pixels)"
      ;
    }
    else {
      func_0x009f7d30(param_2,
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                      ,"rx::TextureGL::setCompressedImage",0x259);
      uVar11 = unaff_retaddr[1];
      pcVar2 = *(code **)(unaff_EDI + 0x134);
      uVar3 = *unaff_retaddr;
      uVar8 = func_0x008bafc0(unaff_ESI);
      uVar12 = 0;
      _guard_check_icall(uVar8,unaff_EBP,uVar6,uVar3,uVar11,0,param_3,param_4);
      (*pcVar2)();
      uVar11 = 0x259;
      pcVar10 = 
      "functions->compressedTexImage2D(ToGLenum(target), static_cast<GLint>(level), compressedTexImageFormat.internalFormat, size.width, size.height, 0, static_cast<GLsizei>(imageSize), pixels)"
      ;
    }
    iVar7 = func_0x009f7360(uVar1,pcVar10,
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::setCompressedImage",uVar11);
    if (iVar7 != 1) {
      func_0x00b5d7b0(&uStack_48,param_4,uVar5,uVar6);
      func_0x00b601c0(uVar1,uVar12,unaff_EBP,1,&uStack_48);
      return 0;
    }
  }
  return 1;
}



undefined4 __thiscall
FUN_00b5f9a0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  
  iVar8 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar9 = func_0x00a01ed0(param_2);
  func_0x00967be0();
  func_0x00946ea0(param_5);
  uVar9 = func_0x00ace3a0(iVar8,uVar9,param_5);
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  cVar7 = func_0x00a04920(**(undefined1 **)(param_1 + 0x30));
  if (cVar7 != '\0') {
    pcVar1 = *(code **)(iVar8 + 0x140);
    uVar2 = param_2[4];
    uVar3 = param_2[3];
    uVar4 = param_2[1];
    uVar5 = *param_2;
    uVar10 = func_0x008bafc0(unaff_EBP);
    _guard_check_icall(uVar10,unaff_EBX,uVar5,uVar4,uVar3,uVar2,uVar9,param_5,param_6);
    (*pcVar1)();
    return 0;
  }
  pcVar1 = *(code **)(iVar8 + 0x144);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar4 = param_2[4];
  uVar5 = param_2[3];
  uVar10 = param_2[1];
  uVar6 = *param_2;
  uVar11 = func_0x008bafc0(unaff_EBP);
  _guard_check_icall(uVar11,unaff_EBX,uVar6,uVar10,uVar2,uVar5,uVar4,uVar3,uVar9,param_5,param_6);
  (*pcVar1)();
  return 0;
}



undefined4 __thiscall FUN_00b5faf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_8;
  
  uStack_1c = func_0x00a01ed0(param_2);
  piVar2 = (int *)FUN_004b3350();
  uStack_20 = 0;
  pcVar1 = *(code **)(*piVar2 + 0x14);
  _guard_check_icall(param_2,param_3,param_1,&uStack_20);
  iVar3 = (*pcVar1)();
  if (iVar3 == 1) {
    return 1;
  }
  puVar4 = (undefined4 *)func_0x00923100();
  uVar5 = func_0x00b5d7b0(&stack0xffffffd8,unaff_ESI,*puVar4,unaff_EDI);
  func_0x00b60280(param_2,uStack_8,0,1,uVar5);
  return 0;
}



uint __thiscall
FUN_00b5fb90(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5,undefined4 param_6,
            undefined4 param_7,int param_8,int param_9,undefined4 param_10)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iStack_1c = func_0x00a01ed0(param_2);
  uVar1 = func_0x00967be0();
  uVar4 = *(undefined4 *)(param_3 + 4);
  iStack_24 = CONCAT31(iStack_24._1_3_,uVar1);
  iStack_20 = uVar4;
  if ((((*(char *)(iStack_1c + 0xf0) == '\0') || (param_9 == 0)) || (*(int *)(param_8 + 4) == 0)) ||
     (*param_5 <= *(int *)(param_8 + 4))) {
    if (*(char *)(iStack_1c + 0x168) == '\0') {
LAB_00b5fd96:
      iVar2 = func_0x00b5feb0(param_2,iStack_24,iStack_20,param_4,param_5,param_6,param_7,param_10);
      return (uint)(iVar2 == 1);
    }
    uStack_28 = uStack_28 & 0xffffff;
    iStack_1c = CONCAT31(iStack_1c._1_3_,**(undefined1 **)(param_1 + 0x30));
    uVar4 = func_0x00a04950(iStack_1c);
    iVar2 = func_0x00a03d90(*(undefined4 *)(param_2 + 0x1d14),param_5,param_8,param_9,param_6,
                            param_7,uVar4,param_10,(int)&uStack_28 + 3);
    if (iVar2 != 1) {
      if (uStack_28._3_1_ == '\0') goto LAB_00b5fd96;
      uVar4 = param_7;
      iVar2 = func_0x00b5f2c0(param_2,iStack_24,iStack_20,param_4,param_5,param_6,param_7);
      if (iVar2 != 1) {
        uStack_28 = *param_5;
        if (uStack_28 == 0) {
          return 0;
        }
        iStack_24 = param_5[1];
        if (iStack_24 == 0) {
          return 0;
        }
        iStack_20 = param_5[2];
        if (iStack_20 == 0) {
          return 0;
        }
        uVar3 = func_0x00b613c0(param_2,param_6,uVar4,&stack0xffffffcc,uStack_8,param_7,
                                unaff_retaddr,param_2,param_3);
        return uVar3;
      }
    }
  }
  else {
    iVar2 = func_0x00b5f2c0(param_2,iStack_24,uVar4,param_4,param_5,param_6,param_7);
    if (iVar2 != 1) {
      uStack_28 = *param_5;
      if (((uStack_28 != 0) && (iStack_24 = param_5[1], iStack_24 != 0)) &&
         (iStack_20 = param_5[2], iStack_20 != 0)) {
        uVar3 = func_0x00b61780(param_2,param_6,uVar4,&stack0xffffffcc,uStack_8,uStack_4,
                                unaff_retaddr,param_2,0,param_3);
        return uVar3;
      }
      return 0;
    }
  }
  return 1;
}



undefined4
FUN_00b5fdd0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uStack_24;
  undefined1 auStack_18 [24];
  
  uVar3 = func_0x00a01ee0(param_1);
  uVar4 = func_0x00a01ed0(param_1);
  uVar2 = func_0x00967be0();
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar5 = func_0x00946bf0(param_3,param_6);
  puVar6 = (undefined8 *)func_0x00acf1e0(auStack_18,uVar3,uVar4,param_3,param_5,param_6);
  uStack_24 = (undefined4)*puVar6;
  uVar3 = func_0x00b5d7b0(auStack_18,uVar4,uVar5,uStack_24);
  func_0x00b601c0(param_1,uVar2,uVar1,1,uVar3);
  return 0;
}



undefined4 FUN_00b5fe80(void)

{
  func_0x0098f180(0x502,"Unreachable Code.",
                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                  ,"rx::TextureGL::setImageExternal",0x560);
  return 1;
}



undefined4 FUN_00b604d0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  byte bVar14;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_retaddr;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_4c;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_34 [20];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  
  iStack_5c = *(int *)(param_1 + 0x1d14);
  iVar5 = func_0x00a01ee0(param_1);
  iStack_60 = iVar5;
  iStack_64 = func_0x00a02140(param_1);
  iVar6 = func_0x00a01ed0(param_1);
  iStack_70 = iVar6;
  uVar7 = func_0x00946ea0(param_4);
  uStack_4c = CONCAT44(uStack_4c._4_4_,uVar7);
  uVar7 = func_0x00acf250(iVar5,iVar6,param_4);
  iVar6 = *(int *)(iStack_68 + 0xa4);
  uVar8 = (uint)**(byte **)(iStack_68 + 0x30);
  func_0x00ab6cf0(uVar8);
  uStack_58 = CONCAT71(uStack_58._1_7_,**(undefined1 **)(iStack_70 + 0x30));
  cVar3 = func_0x00a04920((code *)uStack_58);
  if (cVar3 == '\0') {
    iVar11 = func_0x00946ea0(param_4);
    uStack_58 = CONCAT44(uStack_58._4_4_,iVar11);
    if ((((char)unaff_retaddr == '\x04') && (*(char *)(iVar11 + 0x34) != '\0')) &&
       (*(char *)(unaff_EBP + 0x720) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((*(int *)(iVar5 + 0x7c4) == 0) || (bVar2)) {
      uVar17 = 0;
      func_0x00ab6980(8,0);
      iVar11 = 0;
      if (0 < (int)uStack_10) {
        do {
          iStack_5c = piStack_8[2];
          bVar14 = (byte)iVar11;
          if ((**(char **)(iVar6 + 0x30) == '\x04') &&
             (iStack_5c = iStack_5c >> (bVar14 & 0x1f), iStack_5c < 1)) {
            iStack_5c = 1;
          }
          iStack_64 = *piStack_8 >> (bVar14 & 0x1f);
          iStack_60 = piStack_8[1] >> (bVar14 & 0x1f);
          if (iStack_64 < 1) {
            iStack_64 = 1;
          }
          if (iStack_60 < 1) {
            iStack_60 = 1;
          }
          if (*(char *)(iStack_6c + 0x34) == '\0') {
            puVar12 = (undefined8 *)
                      func_0x00acf1e0(auStack_34,iVar5,uVar17,uStack_c,
                                      *(undefined4 *)(iStack_6c + 0x4c),
                                      *(undefined4 *)(iStack_6c + 0x50));
            uStack_4c = *puVar12;
            uVar16 = *(undefined4 *)(puVar12 + 1);
            func_0x009f7d30(param_1,
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::setStorage",0x4cc);
            pcVar1 = *(code **)(iVar5 + 0x108);
            uVar16 = func_0x008bb080(uStack_14,iVar11,(undefined4)uStack_4c,iStack_64,iStack_60,
                                     iStack_5c,0,uStack_4c._4_4_,uVar16,0);
            _guard_check_icall(uVar16);
            (*pcVar1)();
            param_1 = iStack_40;
            iVar13 = func_0x009f7360(iStack_40,
                                     "functions->texImage3D(ToGLenum(type), i, texImageFormat.internalFormat, levelSize.width, levelSize.height, levelSize.depth, 0, texImageFormat.format, texImageFormat.type, nullptr)"
                                     ,
                                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                     ,"rx::TextureGL::setStorage",0x4cc);
          }
          else {
            uVar16 = func_0x00ace3a0(iVar5,uVar17,uStack_c);
            iStack_70 = 0;
            cVar3 = func_0x0094a640(&iStack_64,&iStack_70);
            if (cVar3 == '\0') {
              func_0x0098f180(0x502,"Integer overflow.",
                              "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                              ,"rx::TextureGL::setStorage",0x4bb);
              return 1;
            }
            func_0x009f7d30(param_1,
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::setStorage",0x4c0);
            pcVar1 = *(code **)(iVar5 + 0x138);
            uVar9 = func_0x008bb080(uStack_1c);
            _guard_check_icall(uVar9,uVar8,uVar16,iStack_6c,iStack_68,iStack_64,0,unaff_EBP,0);
            (*pcVar1)();
            param_1 = iStack_44;
            iVar13 = func_0x009f7360(iStack_44,
                                     "functions->compressedTexImage3D( ToGLenum(type), i, compressedTexImageFormat.format, levelSize.width, levelSize.height, levelSize.depth, 0, static_cast<GLsizei>(dataSize), nullptr)"
                                     ,
                                     "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                     ,"rx::TextureGL::setStorage",0x4c0);
            iVar5 = unaff_ESI;
          }
          if (iVar13 == 1) {
            return 1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uStack_10);
      }
      goto LAB_00b60cb6;
    }
    func_0x009f7d30(param_1,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::setStorage",0x4a3);
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(iVar5 + 0x7c4));
    uVar17 = param_3[2];
    uVar16 = param_3[1];
    uVar9 = *param_3;
    uVar10 = func_0x008bb080(unaff_retaddr);
    pcVar1 = (code *)uStack_58;
    _guard_check_icall(uVar10,param_1,uVar7,uVar9,uVar16,uVar17);
    (*pcVar1)();
    uVar16 = 0x4a3;
    pcVar15 = 
    "functions->texStorage3D(ToGLenum(type), static_cast<GLsizei>(levels), texStorageFormat.internalFormat, size.width, size.height, size.depth)"
    ;
  }
  else {
    if (*(int *)(iVar5 + 0x7c0) == 0) {
      uVar17 = 0;
      uVar16 = 8;
      func_0x00ab6980(8,0);
      iStack_6c = func_0x00946ea0(param_4);
      uVar8 = 0;
      param_1 = iStack_18;
      if (uStack_10 != 0) {
        do {
          iStack_64 = *piStack_8 >> ((byte)uVar8 & 0x1f);
          iStack_60 = piStack_8[1] >> ((byte)uVar8 & 0x1f);
          if (iStack_64 < 1) {
            iStack_64 = 1;
          }
          iStack_5c = 1;
          if (iStack_60 < 1) {
            iStack_60 = 1;
          }
          if ((**(char **)(iVar6 + 0x30) == '\0') || (**(char **)(iVar6 + 0x30) == '\x06')) {
            if (*(char *)(iStack_6c + 0x34) == '\0') {
              puVar12 = (undefined8 *)
                        func_0x00acf1e0(auStack_34,iVar5,uVar17,param_4,
                                        *(undefined4 *)(iStack_6c + 0x4c),
                                        *(undefined4 *)(iStack_6c + 0x50));
              uStack_4c = *puVar12;
              uVar9 = *(undefined4 *)(puVar12 + 1);
              func_0x009f7d30(iStack_18,
                              "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                              ,"rx::TextureGL::setStorage",0x46b);
              pcVar1 = *(code **)(iVar5 + 0xac);
              uVar9 = func_0x008bb080(uStack_14,uVar8,(undefined4)uStack_4c,iStack_64,iStack_60,0,
                                      uStack_4c._4_4_,uVar9,0);
              _guard_check_icall(uVar9);
              (*pcVar1)();
              uVar9 = 0x46b;
              pcVar15 = 
              "functions->texImage2D(ToGLenum(type), static_cast<GLint>(level), texImageFormat.internalFormat, levelSize.width, levelSize.height, 0, texImageFormat.format, texImageFormat.type, nullptr)"
              ;
            }
            else {
              uVar9 = func_0x00ace3a0(iVar5,uVar17,param_4);
              iStack_70 = 0;
              cVar3 = func_0x0094a640(&iStack_64,&iStack_70);
              if (cVar3 == '\0') {
                func_0x0098f180(0x502,"Integer overflow.",
                                "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                ,"rx::TextureGL::setStorage",0x458);
                return 1;
              }
              func_0x009f7d30(uStack_20,
                              "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                              ,"rx::TextureGL::setStorage",0x45e);
              pcVar1 = *(code **)(iVar5 + 0x134);
              uVar10 = func_0x008bb080(uStack_1c);
              _guard_check_icall(uVar10,uVar16,uVar9,iStack_6c,iStack_68,0,unaff_EBP,0);
              (*pcVar1)();
              uVar9 = 0x45e;
              pcVar15 = 
              "functions->compressedTexImage2D( ToGLenum(type), static_cast<GLint>(level), compressedTexImageFormat.format, levelSize.width, levelSize.height, 0, static_cast<GLsizei>(dataSize), nullptr)"
              ;
            }
            param_1 = iStack_40;
            iVar5 = func_0x009f7360(iStack_40,pcVar15,
                                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                    ,"rx::TextureGL::setStorage",uVar9);
            if (iVar5 == 1) {
              return 1;
            }
          }
          else {
            cVar3 = '\a';
            do {
              if (*(char *)(iStack_6c + 0x34) == '\0') {
                puVar12 = (undefined8 *)
                          func_0x00acf1e0(&iStack_40,iVar5,uVar17,param_4,
                                          *(undefined4 *)(iStack_6c + 0x4c),
                                          *(undefined4 *)(iStack_6c + 0x50));
                uStack_58 = *puVar12;
                uVar9 = *(undefined4 *)(puVar12 + 1);
                func_0x009f7d30(iStack_18,
                                "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                ,"rx::TextureGL::setStorage",0x48f);
                pcVar1 = *(code **)(iVar5 + 0xac);
                uVar9 = func_0x008bafc0(cVar3,uVar8,(code *)uStack_58,iStack_64,iStack_60,0,
                                        uStack_58._4_4_,uVar9,0);
                _guard_check_icall(uVar9);
                (*pcVar1)();
                iVar11 = func_0x009f7360(uStack_3c,
                                         "functions->texImage2D( ToGLenum(face), static_cast<GLint>(level), texImageFormat.internalFormat, levelSize.width, levelSize.height, 0, texImageFormat.format, texImageFormat.type, nullptr)"
                                         ,
                                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                         ,"rx::TextureGL::setStorage",0x48f);
                param_1 = iStack_18;
                param_4 = uStack_c;
              }
              else {
                uVar9 = func_0x00ace3a0(iVar5,uVar17,param_4);
                cVar4 = func_0x0094a640(&iStack_64,&stack0xffffff8c);
                if (cVar4 == '\0') {
                  func_0x0098f180(0x502,"Integer overflow.",
                                  "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                  ,"rx::TextureGL::setStorage",0x47c);
                  return 1;
                }
                func_0x009f7d30(uStack_20,
                                "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                ,"rx::TextureGL::setStorage",0x482);
                pcVar1 = *(code **)(iVar5 + 0x134);
                uVar10 = func_0x008bafc0(uVar8);
                _guard_check_icall(uVar10,uVar16,uVar9,iStack_6c,iStack_68,0,unaff_ESI,0);
                (*pcVar1)();
                iVar11 = func_0x009f7360(iStack_40,
                                         "functions->compressedTexImage2D( ToGLenum(face), static_cast<GLint>(level), compressedTexImageFormat.format, levelSize.width, levelSize.height, 0, static_cast<GLsizei>(dataSize), nullptr)"
                                         ,
                                         "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                                         ,"rx::TextureGL::setStorage",0x482);
                iVar5 = unaff_ESI;
                param_1 = iStack_18;
                param_4 = uStack_c;
              }
              if (iVar11 == 1) {
                return 1;
              }
              cVar3 = cVar3 + '\x01';
              iStack_18 = param_1;
              uStack_c = param_4;
            } while (cVar3 != '\r');
          }
          uVar8 = uVar8 + 1;
          iVar5 = unaff_ESI;
          param_4 = uStack_c;
        } while (uVar8 < uStack_10);
      }
      goto LAB_00b60cb6;
    }
    func_0x009f7d30(param_1,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::setStorage",0x43b);
    pcVar1 = *(code **)(iVar5 + 0x7c0);
    uVar17 = param_3[1];
    uVar16 = *param_3;
    uVar9 = func_0x008bb080(unaff_retaddr);
    _guard_check_icall(uVar9,param_1,uVar7,uVar16,uVar17);
    (*pcVar1)();
    uVar16 = 0x43b;
    pcVar15 = 
