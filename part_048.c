    in_stack_0000001c = in_stack_0000001c + iVar10;
    in_stack_00000018 = in_stack_00000018 + iVar10;
    *(uint *)(iVar5 + 0x20) = uVar11;
    uVar7 = uVar11;
    if (uVar11 == 0) {
      *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
    }
  }
  if (uVar6 != 0) {
    _Dst = (void *)(iVar5 + 0x30);
    memset(_Dst,0,0x40);
    func_0x0041d440(_Dst,_Dst,0x40,iVar5,iVar5 + 0x20);
    uVar7 = 0;
    if (uVar6 != 0) {
      do {
        pbVar3 = (byte *)(iVar5 + 0x30 + uVar7);
        pbVar9 = in_stack_00000018 + uVar7;
        uVar7 = uVar7 + 1;
        *pbVar9 = *pbVar3 ^ pbVar9[(int)in_stack_0000001c - (int)in_stack_00000018];
      } while (uVar7 < uVar6);
    }
    *(uint *)(iVar5 + 0x70) = uVar6;
  }
  return 1;
}



void FUN_00c3dc40(void)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint in_stack_00000010;
  int in_stack_00000018;
  int in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 in_stack_00000024;
  
  func_0x00e87f70();
  iVar7 = in_stack_0000001c;
  iVar6 = in_stack_00000018;
  in_stack_00000010 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar4 = *(int *)(in_stack_00000018 + 100);
  if ((in_stack_0000001c != 0) || (in_stack_00000020 != (void *)0x0)) {
    *(undefined4 *)(iVar4 + 0xa8) = 0;
    *(undefined4 *)(iVar4 + 0xac) = 0;
    *(undefined4 *)(iVar4 + 0xb0) = 0;
    *(undefined4 *)(iVar4 + 0xb4) = 0;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xbc) = 0;
    *(undefined4 *)(iVar4 + 200) = 0xffffffff;
    if (in_stack_00000020 == (void *)0x0) {
      iVar4 = *(int *)(in_stack_00000018 + 100);
      if (in_stack_0000001c != 0) {
        puVar8 = (undefined2 *)(in_stack_0000001c + 2);
        do {
          uVar5 = *puVar8;
          puVar1 = (undefined1 *)((int)puVar8 + -1);
          puVar2 = puVar8 + -1;
          uVar3 = (-2 - in_stack_0000001c) + (int)puVar8;
          puVar8 = puVar8 + 2;
          *(uint *)(iVar4 + (uVar3 & 0xfffffffc)) =
               CONCAT31(CONCAT21(uVar5,*puVar1),*(undefined1 *)puVar2);
        } while ((uint)((-2 - in_stack_0000001c) + (int)puVar8) < 0x20);
      }
      *(undefined4 *)(iVar4 + 0x70) = 0;
    }
    else {
      _Size = *(size_t *)(iVar4 + 0xc4);
      if ((int)_Size < 0x11) {
        memcpy((void *)((int)&stack0x00000010 - _Size),in_stack_00000020,_Size);
      }
      FUN_00c3da50(iVar6,iVar7,&stack0x00000000,in_stack_00000024);
      *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(iVar4 + 0x28);
      *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(iVar4 + 0x2c);
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c3dd70(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint in_stack_00000020;
  int in_stack_00000028;
  undefined4 *in_stack_0000002c;
  int in_stack_00000030;
  uint in_stack_00000034;
  
  func_0x00e87f70();
  uVar6 = in_stack_00000034;
  iVar8 = in_stack_00000030;
  puVar14 = in_stack_0000002c;
  iVar10 = in_stack_00000028;
  in_stack_00000020 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar11 = *(int *)(in_stack_00000028 + 100);
  uVar13 = *(uint *)(iVar11 + 200);
  if (*(int *)(iVar11 + 0xbc) == 0) {
    if ((uVar13 != 0xffffffff) && (in_stack_0000002c != (undefined4 *)0x0)) {
      func_0x00c3e530(in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034);
      FUN_008ab370();
      return;
    }
    puVar1 = (undefined4 *)(iVar11 + 0x20);
    *puVar1 = 0;
    func_0x0041d440(iVar11 + 0x30,&DAT_0106a1a0,0x40,iVar11,puVar1);
    func_0x00c81e40(iVar11 + 0xd0,iVar11 + 0x30);
    *puVar1 = 1;
    *(undefined4 *)(iVar11 + 0x70) = 0;
    *(undefined4 *)(iVar11 + 0xb0) = 0;
    *(undefined4 *)(iVar11 + 0xb4) = 0;
    *(undefined4 *)(iVar11 + 0xa8) = 0;
    *(undefined4 *)(iVar11 + 0xac) = 0;
    *(undefined4 *)(iVar11 + 0xbc) = 1;
    if (uVar13 != 0xffffffff) {
      func_0x00c81f10(iVar11 + 0xd0,iVar11 + 0x94,0xd);
      *(undefined4 *)(iVar11 + 0xa8) = 0xd;
      *(undefined4 *)(iVar11 + 0xac) = 0;
      *(undefined4 *)(iVar11 + 0xb8) = 1;
    }
  }
  uVar12 = uVar13;
  if (iVar8 != 0) {
    if (puVar14 == (undefined4 *)0x0) {
      func_0x00c81f10(iVar11 + 0xd0,iVar8,uVar6);
      *(undefined4 *)(iVar11 + 0xb8) = 1;
      puVar2 = (uint *)(iVar11 + 0xa8);
      uVar13 = *puVar2;
      *puVar2 = *puVar2 + uVar6;
      *(int *)(iVar11 + 0xac) = *(int *)(iVar11 + 0xac) + (uint)CARRY4(uVar13,uVar6);
      FUN_008ab370();
      return;
    }
    if (*(int *)(iVar11 + 0xb8) != 0) {
      uVar12 = *(uint *)(iVar11 + 0xa8) & 0xf;
      if (uVar12 != 0) {
        func_0x00c81f10(iVar11 + 0xd0,&DAT_0106a1a0,0x10 - uVar12);
      }
      *(undefined4 *)(iVar11 + 0xb8) = 0;
    }
    *(undefined4 *)(iVar11 + 200) = 0xffffffff;
    uVar12 = uVar6;
    if ((uVar13 != 0xffffffff) && (uVar12 = uVar13, uVar6 != uVar13 + 0x10)) goto LAB_00c3e0c1;
    iVar7 = FUN_00bc39e0(iVar10);
    if (iVar7 == 0) {
      func_0x00c81f10(iVar11 + 0xd0,iVar8,uVar12);
      FUN_00c3db00(iVar10,puVar14,iVar8,uVar12);
    }
    else {
      FUN_00c3db00(iVar10,puVar14);
      func_0x00c81f10(iVar11 + 0xd0,puVar14,uVar12);
    }
    puVar2 = (uint *)(iVar11 + 0xb0);
    uVar13 = *puVar2;
    *puVar2 = *puVar2 + uVar12;
    puVar14 = (undefined4 *)((int)puVar14 + uVar12);
    *(uint *)(iVar11 + 0xb4) = *(int *)(iVar11 + 0xb4) + (uint)CARRY4(uVar13,uVar12);
    iVar8 = iVar8 + uVar12;
    if ((iVar8 != 0) && (uVar12 == uVar6)) goto LAB_00c3e109;
  }
  if (*(int *)(iVar11 + 0xb8) != 0) {
    uVar13 = *(uint *)(iVar11 + 0xa8) & 0xf;
    if (uVar13 != 0) {
      func_0x00c81f10(iVar11 + 0xd0,&DAT_0106a1a0,0x10 - uVar13);
    }
    *(undefined4 *)(iVar11 + 0xb8) = 0;
  }
  uVar13 = *(uint *)(iVar11 + 0xb0) & 0xf;
  if (uVar13 != 0) {
    func_0x00c81f10(iVar11 + 0xd0,&DAT_0106a1a0,0x10 - uVar13);
  }
  func_0x00c81f10(iVar11 + 0xd0,iVar11 + 0xa8,0x10);
  iVar7 = FUN_00bc39e0(iVar10);
  puVar9 = (undefined1 *)(iVar11 + 0x84);
  if (iVar7 == 0) {
    puVar9 = &stack0x00000010;
  }
  func_0x00c81dc0(iVar11 + 0xd0,puVar9);
  *(undefined4 *)(iVar11 + 0xbc) = 0;
  if ((iVar8 == 0) || (uVar6 == uVar12)) {
    iVar10 = FUN_00bc39e0(iVar10);
    if (iVar10 == 0) {
      func_0x00401390(&stack0x00000010,iVar11 + 0x84,*(undefined4 *)(iVar11 + 0xc0));
    }
  }
  else {
    iVar10 = FUN_00bc39e0(iVar10);
    if (iVar10 != 0) {
      uVar3 = *(undefined4 *)(iVar11 + 0x88);
      uVar4 = *(undefined4 *)(iVar11 + 0x8c);
      uVar5 = *(undefined4 *)(iVar11 + 0x90);
      *puVar14 = *(undefined4 *)(iVar11 + 0x84);
      puVar14[1] = uVar3;
      puVar14[2] = uVar4;
      puVar14[3] = uVar5;
      FUN_008ab370();
      return;
    }
    iVar11 = func_0x00401390(&stack0x00000010,iVar8,0x10);
    if (iVar11 != 0) {
      memset((void *)((int)puVar14 - uVar12),0,uVar12);
LAB_00c3e0c1:
      FUN_008ab370();
      return;
    }
  }
LAB_00c3e109:
  FUN_008ab370();
  return;
}



undefined4 FUN_00c3e120(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar1 = func_0x00c81fd0();
    func_0x00401320(*(undefined4 *)(param_1 + 100),iVar1 + 0xd0);
  }
  return 1;
}



undefined4 FUN_00c3e150(int param_1,undefined4 param_2,size_t param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 100);
  switch(param_2) {
  case 0:
    if (iVar2 == 0) {
      iVar2 = func_0x00c81fd0("crypto\\evp\\e_chacha20_poly1305.c",0x1f9);
      iVar2 = FUN_00bbc830(iVar2 + 0xd0);
      *(int *)(param_1 + 100) = iVar2;
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\e_chacha20_poly1305.c",0x1fb,"chacha20_poly1305_ctrl");
        func_0x00bc5160(6,0x86,0);
        return 0;
      }
    }
    *(undefined4 *)(iVar2 + 0xa8) = 0;
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(undefined4 *)(iVar2 + 0xb0) = 0;
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    *(undefined4 *)(iVar2 + 0xc0) = 0;
    *(undefined4 *)(iVar2 + 0xc4) = 0xc;
    *(undefined4 *)(iVar2 + 200) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar2 + 0xa0) = 0;
    break;
  default:
    return 0xffffffff;
  case 8:
    if (iVar2 != 0) {
      iVar3 = func_0x00c81fd0("crypto\\evp\\e_chacha20_poly1305.c",0x20d);
      iVar2 = func_0x00bbbc30(iVar2,iVar3 + 0xd0);
      *(int *)((int)param_4 + 100) = iVar2;
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\e_chacha20_poly1305.c",0x20f,"chacha20_poly1305_ctrl");
        func_0x00bc5160(6,0xad,0);
        return 0;
      }
    }
    break;
  case 9:
    if (0xb < param_3 - 1) {
      return 0;
    }
    *(size_t *)(iVar2 + 0xc4) = param_3;
    return 1;
  case 0x10:
    if (0xf < param_3 - 1) {
      return 0;
    }
    iVar3 = FUN_00bc39e0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    memcpy(param_4,(void *)(iVar2 + 0x84),param_3);
    return 1;
  case 0x11:
    if (0xf < param_3 - 1) {
      return 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      memcpy((void *)(iVar2 + 0x84),param_4,param_3);
      *(size_t *)(iVar2 + 0xc0) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 != 0xc) {
      return 0;
    }
    uVar1 = *(undefined4 *)param_4;
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
    *(undefined4 *)(iVar2 + 0x78) = uVar1;
    uVar1 = *(undefined4 *)((int)param_4 + 4);
    *(undefined4 *)(iVar2 + 0x28) = uVar1;
    *(undefined4 *)(iVar2 + 0x7c) = uVar1;
    uVar1 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(iVar2 + 0x2c) = uVar1;
    *(undefined4 *)(iVar2 + 0x80) = uVar1;
    return 1;
  case 0x16:
    if (param_3 != 0xd) {
      return 0;
    }
    *(undefined8 *)(iVar2 + 0x94) = *param_4;
    *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)(iVar2 + 0xa0) = *(undefined1 *)((int)param_4 + 0xc);
    uVar4 = (uint)CONCAT11(*(undefined1 *)((int)param_4 + 0xb),*(undefined1 *)((int)param_4 + 0xc));
    iVar3 = FUN_00bc39e0(param_1);
    if (iVar3 == 0) {
      if (uVar4 < 0x10) {
        return 0;
      }
      uVar4 = uVar4 - 0x10;
      *(char *)(iVar2 + 0xa0) = (char)uVar4;
      *(char *)(iVar2 + 0x9f) = (char)(uVar4 >> 8);
    }
    *(uint *)(iVar2 + 200) = uVar4;
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0x78);
    *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x94) ^ *(uint *)(iVar2 + 0x7c);
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x98) ^ *(uint *)(iVar2 + 0x80);
    return 0x10;
  case 0x17:
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(iVar2 + 0xc4);
    return 1;
  }
  return 1;
}



undefined4 FUN_00c3eb10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc36f0(param_1);
  func_0x00c83aa0(param_2,uVar1);
  return 1;
}



undefined4 FUN_00c3eb30(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (0x3fffffff < param_4) {
    param_4 = param_4 >> 0x1e;
    do {
      uVar1 = FUN_00bc39e0(param_1);
      uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
      func_0x00c84500(param_3,param_2,0x40000000,uVar1);
      uVar2 = uVar2 + 0xc0000000;
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  if (uVar2 != 0) {
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
    func_0x00c84500(param_3,param_2,uVar2,uVar1);
  }
  return 1;
}



undefined4 FUN_00c3ebd0(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar3 = param_4;
  uVar4 = param_4;
  if (0x3fffffff < param_4) {
    uVar3 = 0x40000000;
  }
  do {
    if (uVar4 < uVar3) {
      return 1;
    }
    param_4 = func_0x00bc3930(param_1);
    uVar1 = FUN_00bc39e0(param_1);
    uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,&param_4,uVar1);
    func_0x00c84530(param_3,param_2,uVar3,uVar1);
    func_0x00bc3aa0(param_1,param_4);
    param_2 = param_2 + uVar3;
    uVar4 = uVar4 - uVar3;
    param_3 = param_3 + uVar3;
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
  } while (uVar4 != 0);
  return 1;
}



undefined4 FUN_00c3ec60(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = func_0x00bc36d0(param_1);
  uVar1 = *(uint *)(iVar2 + 4);
  if (uVar1 <= param_4) {
    uVar4 = 0;
    param_2 = param_2 - param_3;
    do {
      uVar3 = FUN_00bc39e0(param_1);
      uVar3 = func_0x00bc36f0(param_1,uVar3);
      func_0x00c844d0(param_3,param_2 + param_3,uVar3);
      uVar4 = uVar4 + uVar1;
      param_3 = param_3 + uVar1;
    } while (uVar4 <= param_4 - uVar1);
  }
  return 1;
}



undefined4 FUN_00c3ecd0(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar3 = param_5;
  if (0x3fffffff < param_5) {
    uVar1 = param_5 >> 0x1e;
    do {
      param_5 = func_0x00bc3930(param_2);
      uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
      func_0x00c84560(param_4,param_3,0x40000000,uVar2);
      func_0x00bc3aa0(param_2,param_5);
      uVar3 = uVar3 + 0xc0000000;
      param_4 = param_4 + 0x40000000;
      param_3 = param_3 + 0x40000000;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (uVar3 != 0) {
    param_5 = func_0x00bc3930(param_2);
    uVar2 = func_0x00bc36f0(param_2,param_2 + 0x20,&param_5);
    func_0x00c84560(param_4,param_3,uVar3,uVar2);
    func_0x00bc3aa0(param_2,param_5);
  }
  return 1;
}



undefined4 FUN_00c3ede0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = func_0x00bc36f0(param_1);
  uVar2 = func_0x00bc36d0(param_1);
  iVar3 = func_0x00bc3c70(uVar2);
  if (((iVar3 != 1) && (iVar3 != 2)) || (pcVar4 = FUN_00c84590, param_4 != 0)) {
    pcVar4 = FUN_00c850a0;
  }
  *(code **)(iVar1 + 0x80) = pcVar4;
  uVar2 = func_0x00bc36f0(param_1);
  func_0x00c85bb0(param_2,uVar2);
  return 1;
}



undefined4 FUN_00c3ee40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = func_0x00bc36f0(param_1);
  if (*(int *)(iVar2 + 0x84) != 0) {
    pcVar1 = *(code **)(iVar2 + 0x84);
    uVar3 = FUN_00bc39e0(param_1);
    (*pcVar1)(param_3,param_2,param_4,iVar2,param_1 + 0x20,uVar3);
    return 1;
  }
  iVar4 = FUN_00bc39e0(param_1);
  if (iVar4 != 0) {
    func_0x00bcc780();
    return 1;
  }
  func_0x00bcc480(param_3,param_2,param_4,iVar2,param_1 + 0x20,*(undefined4 *)(iVar2 + 0x80));
  return 1;
}



undefined4 FUN_00c3eed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  uVar3 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0x80));
  func_0x00bcce30(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,uVar3);
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4 FUN_00c3ef30(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  func_0x00e87f70();
  uVar2 = func_0x00bc36e0(param_2);
  iVar3 = func_0x00bc36f0(param_2);
  if (uVar2 <= param_5) {
    if (*(int *)(iVar3 + 0x84) != 0) {
      pcVar1 = *(code **)(iVar3 + 0x84);
      uVar4 = FUN_00bc39e0(param_2);
      (*pcVar1)(param_4,param_3,param_5,iVar3,uVar4);
      return 1;
    }
    uVar5 = 0;
    param_3 = param_3 - param_4;
    do {
      (**(code **)(iVar3 + 0x80))(param_4,param_3 + param_4,iVar3);
      uVar5 = uVar5 + uVar2;
      param_4 = param_4 + uVar2;
    } while (uVar5 <= param_5 - uVar2);
  }
  return 1;
}



undefined4 FUN_00c3efd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  func_0x00bccc10(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,*(undefined4 *)(iVar2 + 0x80))
  ;
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4
FUN_00c3f020(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc3930(param_2);
  iVar2 = func_0x00bc36f0(param_2);
  if (iVar1 < 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x84) == 0) {
    uVar3 = func_0x00bc36c0(param_2,&stack0x00000000,*(undefined4 *)(iVar2 + 0x80));
    func_0x00bcc940(param_4,param_3,param_5,iVar2,param_2 + 0x20,uVar3);
  }
  else {
    uVar3 = func_0x00bc36c0(param_2,&stack0x00000000,*(int *)(iVar2 + 0x84));
    func_0x00bcca60(param_4,param_3,param_5,iVar2,param_2 + 0x20,uVar3);
  }
  func_0x00bc3aa0(param_2,iVar1);
  return 1;
}



undefined4 FUN_00c3f120(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  memset(puVar1 + 4,0,0x4c);
  *puVar1 = 0x67452301;
  puVar1[1] = 0xefcdab89;
  puVar1[2] = 0x98badcfe;
  puVar1[3] = 0x10325476;
  return 1;
}



void FUN_00c3f140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c85f60(uVar1);
  return;
}



void FUN_00c3f160(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c85e40(param_2,uVar1);
  return;
}



void FUN_00c3f190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00bb4190(uVar1);
  return;
}



void FUN_00c3f1b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00bb4010(param_2,uVar1);
  return;
}



undefined4 FUN_00c3f1e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00baf190(param_1);
  iVar2 = func_0x00bb4130(iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  memset((void *)(iVar1 + 0x70),0,0x4c);
  *(undefined4 *)(iVar1 + 0x5c) = 0x67452301;
  *(undefined4 *)(iVar1 + 0x60) = 0xefcdab89;
  *(undefined4 *)(iVar1 + 100) = 0x98badcfe;
  *(undefined4 *)(iVar1 + 0x68) = 0x10325476;
  *(undefined4 *)(iVar1 + 0x6c) = 0xc3d2e1f0;
  return 1;
}



void FUN_00c3f200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c869a0(uVar1);
  return;
}



void FUN_00c3f220(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c86940(param_2,uVar1);
  return;
}



void FUN_00c3f240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3,param_4);
  func_0x00c86790(uVar1);
  return;
}



void FUN_00c3f280(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000028;
  
  func_0x00e87f70();
  uVar1 = func_0x00baf190(in_stack_00000028);
  func_0x00c8f090(&stack0x00000000);
  func_0x00c8ef70(uVar1,&stack0x00000000);
  FUN_008ab370();
  return;
}



void FUN_00c3f2d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c8f140(uVar1);
  return;
}



void FUN_00c3f2f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c8eeb0(param_2,uVar1);
  return;
}



void FUN_00c3f310(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000048;
  
  func_0x00e87f70();
  uVar1 = func_0x00baf190(in_stack_00000048);
  func_0x00c8d230(&stack0x00000000);
  func_0x00c8d0f0(uVar1,&stack0x00000000);
  FUN_008ab370();
  return;
}



void FUN_00c3f360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c8d320(uVar1);
  return;
}



void FUN_00c3f380(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c8d010(param_2,uVar1);
  return;
}



undefined4 FUN_00c3f3c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  *puVar1 = 0;
  puVar1[7] = 1;
  puVar1[3] = 0x52525252;
  puVar1[4] = 0x52525252;
  puVar1[5] = 0x25252525;
  puVar1[6] = 0x25252525;
  return 1;
}



void FUN_00c3f3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c8f290(uVar1);
  return;
}



void FUN_00c3f400(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c8f1e0(param_2,uVar1);
  return;
}



void FUN_00c3f430(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c8f620(uVar1);
  return;
}



void FUN_00c3f450(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c8f4e0(param_2,uVar1);
  return;
}



undefined4 FUN_00c3f480(undefined4 param_1)

{
  void *_Dst;
  
  _Dst = (void *)func_0x00baf190(param_1);
  memset(_Dst,0,0xa8);
  return 1;
}



void FUN_00c3f4a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c8fae0(uVar1);
  return;
}



void FUN_00c3f4c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c8f9c0(param_2,uVar1);
  return;
}



undefined4 FUN_00c3f4f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  memset(puVar1 + 8,0,0x4c);
  *puVar1 = 0x7380166f;
  puVar1[1] = 0x4914b2b9;
  puVar1[2] = 0x172442d7;
  puVar1[3] = 0xda8a0600;
  puVar1[4] = 0xa96f30bc;
  puVar1[5] = 0x163138aa;
  puVar1[6] = 0xe38dee4d;
  puVar1[7] = 0xb0fb0e4e;
  return 1;
}



void FUN_00c3f510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00c93b70(uVar1);
  return;
}



void FUN_00c3f530(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00c93970(param_2,uVar1);
  return;
}



void FUN_00c3fa00(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\evp\\evp_pbe.c",0x123);
  return;
}



int FUN_00c3fa20(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1 - *param_2;
  if (iVar1 == 0) {
    iVar1 = param_1[1] - param_2[1];
  }
  return iVar1;
}



uint FUN_00c3fe00(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = (byte *)*param_2;
  pbVar2 = (byte *)*param_1;
  if (pbVar2 != pbVar4) {
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00c3fe32:
        uVar3 = -(uint)bVar5 | 1;
        goto LAB_00c3fe37;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00c3fe32;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00c3fe37:
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  pbVar4 = (byte *)param_1[1];
  if ((pbVar4 == (byte *)0x0) || (pbVar2 = (byte *)param_2[1], pbVar2 == (byte *)0x0)) {
    uVar3 = 0;
    if (pbVar4 != (byte *)param_2[1]) {
      uVar3 = (uint)(pbVar4 != (byte *)0x0) * 2 - 1;
    }
    return uVar3;
  }
  while( true ) {
    bVar1 = *pbVar4;
    bVar5 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar4[1];
    bVar5 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)bVar5 | 1;
}



uint FUN_00c3fe90(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  iVar2 = FUN_00bbe5f0(*param_1);
  uVar3 = FUN_00bbe5f0(uVar1);
  return uVar3 ^ iVar2 << 2;
}



void FUN_00c3fec0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    func_0x00bbe070(param_2,param_1);
  }
  return;
}



void FUN_00c3fee0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[1] == 0) {
    uVar1 = param_1[2];
    iVar2 = func_0x00bd1830(uVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar3 = func_0x00bd1a80(uVar1,iVar2);
      FUN_00bbc580(*(undefined4 *)(iVar3 + 8),"crypto\\conf\\conf_api.c",0xb0);
      FUN_00bbc580(*(undefined4 *)(iVar3 + 4),"crypto\\conf\\conf_api.c",0xb1);
      FUN_00bbc580(iVar3,"crypto\\conf\\conf_api.c",0xb2);
    }
    FUN_00bd1630(uVar1);
    FUN_00bbc580(*param_1,"crypto\\conf\\conf_api.c",0xb5);
    FUN_00bbc580(param_1,"crypto\\conf\\conf_api.c",0xb6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00c40210(void)

{
  _DAT_013df5ec = func_0x00c40000();
  return;
}



void FUN_00c402b0(void)

{
  func_0x00bf24e0();
  return;
}



void FUN_00c403e0(void)

{
  func_0x00c01160(&DAT_013df5f0);
  return;
}



void FUN_00c40490(void)

{
  func_0x00c01160(&DAT_013df5f4);
  return;
}



void FUN_00c40540(void)

{
  func_0x00c01160(&DAT_013df5f8);
  return;
}



void FUN_00c407b0(void)

{
  func_0x00c01160(&DAT_013df5fc);
  return;
}



void FUN_00c407c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  func_0x00e87f70();
  piVar3 = param_5;
  if (param_5[1] == 0) {
    iVar7 = 0;
    iVar4 = func_0x00bd1830(param_3);
    if (0 < iVar4) {
      do {
        iVar4 = func_0x00bd1a80(param_3,iVar7);
        (**(code **)(iVar4 + 0x28))(iVar4,&param_5,0,param_2);
        if (param_5 != (int *)0x0) {
          pcVar2 = (char *)param_5[3];
          pcVar5 = pcVar2;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if (((int)pcVar5 - (int)(pcVar2 + 1) == piVar3[3]) &&
             (iVar6 = func_0x00bbc0f0(pcVar2,piVar3[2],piVar3[3]), iVar6 == 0)) {
            *piVar3 = iVar4;
            piVar3[1] = (int)param_5;
            return;
          }
        }
        iVar7 = iVar7 + 1;
        iVar4 = func_0x00bd1830(param_3);
        if (iVar4 <= iVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}



undefined4 FUN_00c40870(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar4 = 0;
  iVar5 = 0;
  uVar6 = 0xffffffff;
  iVar1 = func_0x00bba610(*(undefined4 *)(param_4 + 8));
  if (iVar1 < 0x2711) {
    if ((*(int *)(param_4 + 0xc) == 0) ||
       (iVar1 = func_0x00bba610(*(int *)(param_4 + 0xc)), iVar1 < 0x2711)) {
      iVar1 = func_0x00bba610(*(undefined4 *)(param_4 + 8));
      if (iVar1 < 0x200) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\dh\\dh_key.c",0x3b,"ossl_dh_compute_key");
        func_0x00bc5160(5,0x7e,0);
        return 0;
      }
      iVar5 = func_0x00bb5940(*(undefined4 *)(param_4 + 100));
      if (iVar5 != 0) {
        func_0x00bb59e0(iVar5);
        uVar2 = func_0x00bb57f0(iVar5);
        iVar4 = func_0x00bb57f0(iVar5);
        if (iVar4 != 0) {
          if (*(int *)(param_4 + 0x48) == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\dh\\dh_key.c",0x49,"ossl_dh_compute_key");
            uVar2 = 100;
          }
          else {
            if ((*(byte *)(param_4 + 0x4c) & 1) == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = func_0x00bf9c10(param_4 + 0x50,*(undefined4 *)(param_4 + 0x6c),
                                      *(undefined4 *)(param_4 + 8),iVar5);
              func_0x00bba880(*(undefined4 *)(param_4 + 0x48),4);
              if (iVar1 == 0) goto LAB_00c40aa9;
            }
            iVar1 = (**(code **)(*(int *)(param_4 + 0x68) + 0xc))
                              (param_4,iVar4,param_3,*(undefined4 *)(param_4 + 0x48),
                               *(undefined4 *)(param_4 + 8),iVar5,iVar1);
            if (iVar1 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\dh\\dh_key.c",0x58,"ossl_dh_compute_key");
              uVar2 = 0x80003;
            }
            else {
              iVar1 = func_0x00bba2d0(uVar2,*(undefined4 *)(param_4 + 8));
              if ((iVar1 != 0) && (iVar1 = func_0x00be9b40(uVar2,1), iVar1 != 0)) {
                uVar3 = func_0x00bbaaa0();
                iVar1 = func_0x00bba0f0(iVar4,uVar3);
                if ((0 < iVar1) && (iVar1 = func_0x00bba0f0(iVar4,uVar2), iVar1 != 0)) {
                  iVar1 = func_0x00bba610(*(undefined4 *)(param_4 + 8));
                  uVar6 = func_0x00bb9f90(iVar4,param_2,
                                          (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
                  goto LAB_00c40aa9;
                }
              }
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\dh\\dh_key.c",0x61,"ossl_dh_compute_key");
              uVar2 = 0x80;
            }
          }
          func_0x00bc5160(5,uVar2,0);
        }
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\dh\\dh_key.c",0x36,"ossl_dh_compute_key");
      func_0x00bc5160(5,0x82,0);
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_key.c",0x30,"ossl_dh_compute_key");
    func_0x00bc5160(5,0x67,0);
  }
LAB_00c40aa9:
  func_0x00bb9ff0(iVar4);
  func_0x00bb56f0(iVar5);
  func_0x00bb5760(iVar5);
  return uVar6;
}



undefined4 FUN_00c40ad0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iStack00000004;
  undefined4 uStack0000000c;
  int in_stack_00000014;
  
  func_0x00e87f70();
  iVar7 = 0;
  uStack0000000c = 0;
  iVar8 = 0;
  bVar9 = false;
  iVar1 = func_0x00bba610(*(undefined4 *)(in_stack_00000014 + 8));
  if (10000 < iVar1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_key.c",0x114,"generate_key");
    func_0x00bc5160(5,0x67,0);
    return 0;
  }
  if ((*(int *)(in_stack_00000014 + 0xc) != 0) &&
     (iVar1 = func_0x00bba610(*(int *)(in_stack_00000014 + 0xc)), 10000 < iVar1)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_key.c",0x11a,"generate_key");
    func_0x00bc5160(5,0x82,0);
    return 0;
  }
  iVar1 = func_0x00bba610(*(undefined4 *)(in_stack_00000014 + 8));
  if (iVar1 < 0x200) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_key.c",0x11f,"generate_key");
    func_0x00bc5160(5,0x7e,0);
    return 0;
  }
  iVar1 = func_0x00bb5940(*(undefined4 *)(in_stack_00000014 + 100));
  if (iVar1 != 0) {
    iVar8 = *(int *)(in_stack_00000014 + 0x48);
    if (iVar8 == 0) {
      iVar8 = func_0x00bba770();
      if (iVar8 == 0) goto LAB_00c40c72;
      bVar9 = true;
    }
    iVar7 = *(int *)(in_stack_00000014 + 0x44);
    if ((iVar7 != 0) || (iVar7 = func_0x00bba5e0(), iVar7 != 0)) {
      if (bVar9) {
        iVar2 = func_0x00c19e50(in_stack_00000014);
        iVar6 = iVar8;
        if (iVar2 == 0) {
          if (*(int *)(in_stack_00000014 + 0xc) == 0) {
            iVar6 = *(int *)(in_stack_00000014 + 0x40);
            if (iVar6 == 0) {
LAB_00c40cf5:
              iVar6 = func_0x00bba610(*(undefined4 *)(in_stack_00000014 + 8));
              iVar6 = iVar6 + -1;
            }
            else {
              iVar2 = func_0x00bba610(*(undefined4 *)(in_stack_00000014 + 8));
              if (iVar2 <= iVar6) goto LAB_00c40c72;
              if (iVar6 == 0) goto LAB_00c40cf5;
            }
            iVar6 = func_0x00c2a840(iVar8,iVar6,0,0,0,iVar1);
            if (iVar6 != 0) {
              iVar6 = func_0x00bba510(*(undefined4 *)(in_stack_00000014 + 0x10),2);
              if ((iVar6 != 0) &&
                 (iVar6 = func_0x00bba490(*(undefined4 *)(in_stack_00000014 + 8),2), iVar6 == 0)) {
                iVar6 = func_0x00bba020(iVar8,0);
                goto joined_r0x00c40d4d;
              }
              goto LAB_00c40d57;
            }
          }
          else {
            iVar2 = func_0x00c961d0(*(undefined4 *)(in_stack_00000014 + 100),in_stack_00000014 + 8,1
                                    ,0);
            if (iVar2 != 0) {
              uVar4 = 0x50;
              iVar2 = func_0x00bba610(*(undefined4 *)(in_stack_00000014 + 0xc),0x50,iVar8);
              goto LAB_00c40c5d;
            }
          }
        }
        else {
          uVar3 = func_0x00bba610(*(undefined4 *)(in_stack_00000014 + 8));
          uVar4 = func_0x00bb6590(uVar3);
          uVar4 = uVar4 & 0xffff;
          if (*(int *)(in_stack_00000014 + 0xc) != 0) {
            iVar5 = func_0x00bba610(*(int *)(in_stack_00000014 + 0xc));
            iVar2 = *(int *)(in_stack_00000014 + 0x40);
            if (iVar2 <= iVar5) {
LAB_00c40c5d:
              iVar6 = func_0x00c96390(iVar1,in_stack_00000014 + 8,iVar2,uVar4,iVar6);
joined_r0x00c40d4d:
              if (iVar6 != 0) goto LAB_00c40d57;
            }
          }
        }
      }
      else {
LAB_00c40d57:
        bVar9 = false;
        iVar6 = func_0x00bba5e0();
        iStack00000004 = 0;
        if (iVar6 != 0) {
          if (((*(byte *)(in_stack_00000014 + 0x4c) & 1) == 0) ||
             (iStack00000004 =
                   func_0x00bf9c10(in_stack_00000014 + 0x50,
                                   *(undefined4 *)(in_stack_00000014 + 0x6c),
                                   *(undefined4 *)(in_stack_00000014 + 8),iVar1),
             iStack00000004 != 0)) {
            func_0x00bbaab0(iVar6,iVar8,4);
            iVar2 = (**(code **)(*(int *)(in_stack_00000014 + 0x68) + 0xc))
                              (in_stack_00000014,iVar7,*(undefined4 *)(in_stack_00000014 + 0x10),
                               iVar6,*(undefined4 *)(in_stack_00000014 + 8),iVar1,iStack00000004);
            bVar9 = iVar2 != 0;
          }
          FUN_00bba080(iVar6);
          if (bVar9) {
            *(int *)(in_stack_00000014 + 0x70) = *(int *)(in_stack_00000014 + 0x70) + 1;
            *(int *)(in_stack_00000014 + 0x44) = iVar7;
            *(int *)(in_stack_00000014 + 0x48) = iVar8;
            uStack0000000c = 1;
            goto LAB_00c40ca0;
          }
        }
      }
    }
  }
LAB_00c40c72:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\dh\\dh_key.c",0x17a,"generate_key");
  func_0x00bc5160(5,0x80003,0);
LAB_00c40ca0:
  if (iVar7 != *(int *)(in_stack_00000014 + 0x44)) {
    FUN_00bba400(iVar7);
  }
  if (iVar8 != *(int *)(in_stack_00000014 + 0x48)) {
    FUN_00bba400(iVar8);
  }
  func_0x00bb5760(iVar1);
  return uStack0000000c;
}



void FUN_00c40e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00c2b2a0(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



undefined4 FUN_00c40e60(int param_1)

{
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return 1;
}



undefined4 FUN_00c40e80(int param_1)

{
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x50));
  return 1;
}



void FUN_00c412e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c41ae0(param_1,param_2,param_3,0,0,0,0);
  return;
}



void FUN_00c41300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c416d0(param_1,param_2,param_3,param_4,0,0,0,0,0,0);
  return;
}



uint FUN_00c41330(undefined4 param_1,undefined4 param_2,int param_3,code *param_4,undefined4 param_5
                 ,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar5 = param_9;
  uVar6 = 0xffffffff;
  param_3 = 0;
  if (((*(int *)(param_9 + 8) == 0) || (*(int *)(param_9 + 0xc) == 0)) ||
     (*(int *)(param_9 + 0x10) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_ossl.c",0x16f,"dsa_do_verify");
    func_0x00bc5160(10,0x65,0);
    return 0xffffffff;
  }
  param_4 = (code *)func_0x00bba610(*(int *)(param_9 + 0xc));
  if (((param_4 != (code *)0xa0) && (param_4 != (code *)&DAT_000000e0)) &&
     (param_4 != (code *)0x100)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_ossl.c",0x176,"dsa_do_verify");
    func_0x00bc5160(10,0x66,0);
    return 0xffffffff;
  }
  iVar1 = func_0x00bba610(*(undefined4 *)(iVar5 + 8));
  if (10000 < iVar1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_ossl.c",0x17b,"dsa_do_verify");
    func_0x00bc5160(10,0x67,0);
    return 0xffffffff;
  }
  iVar1 = func_0x00bba5e0();
  param_9 = func_0x00bba5e0();
  iVar2 = func_0x00bba5e0();
  iVar3 = func_0x00bb5940(0);
  if (((iVar1 == 0) || (param_9 == 0)) || ((iVar2 == 0 || (iVar3 == 0)))) goto LAB_00c415e6;
  func_0x00c1fb50(param_8,&stack0x00000000,&param_2);
  iVar4 = func_0x00bba540(unaff_retaddr);
  if (iVar4 == 0) {
    iVar4 = func_0x00bba4c0(unaff_retaddr);
    if (iVar4 == 0) {
      iVar4 = func_0x00bba970(unaff_retaddr,*(undefined4 *)(iVar5 + 0xc));
      if (iVar4 < 0) {
        iVar4 = func_0x00bba540(param_2);
        if (iVar4 == 0) {
          iVar4 = func_0x00bba4c0(param_2);
          if (iVar4 == 0) {
            iVar4 = func_0x00bba970(param_2,*(undefined4 *)(iVar5 + 0xc));
            if (iVar4 < 0) {
              iVar4 = func_0x00bb4d80(param_9,param_2,*(undefined4 *)(iVar5 + 0xc),iVar3);
              if (iVar4 != 0) {
                iVar4 = param_7;
                if ((int)param_4 >> 3 < param_7) {
                  iVar4 = (int)param_4 >> 3;
                }
                iVar4 = func_0x00bb9f50(param_6,iVar4,iVar1);
                if (iVar4 != 0) {
                  iVar4 = func_0x00be92b0(iVar1,iVar1,param_9,*(undefined4 *)(iVar5 + 0xc),iVar3);
                  if (iVar4 != 0) {
                    iVar4 = func_0x00be92b0(param_9,unaff_retaddr,param_9,
                                            *(undefined4 *)(iVar5 + 0xc),iVar3);
                    if (iVar4 != 0) {
                      if ((*(byte *)(iVar5 + 0x48) & 1) != 0) {
                        param_3 = func_0x00bf9c10(iVar5 + 0x4c,*(undefined4 *)(iVar5 + 100),
                                                  *(undefined4 *)(iVar5 + 8),iVar3);
                        if (param_3 == 0) goto LAB_00c415e6;
                      }
                      param_4 = *(code **)(*(int *)(iVar5 + 0x5c) + 0x10);
                      if (param_4 == (code *)0x0) {
                        iVar4 = func_0x00c96db0(iVar2,*(undefined4 *)(iVar5 + 0x10),iVar1,
                                                *(undefined4 *)(iVar5 + 0x40),param_9,
                                                *(undefined4 *)(iVar5 + 8),iVar3,param_3);
                      }
                      else {
                        iVar4 = (*param_4)(iVar5);
                      }
                      if (iVar4 != 0) {
                        iVar5 = func_0x00bb77c0(0,iVar1,iVar2,*(undefined4 *)(iVar5 + 0xc),iVar3);
                        if (iVar5 != 0) {
                          iVar5 = func_0x00bba970(iVar1,unaff_retaddr);
                          uVar6 = (uint)(iVar5 == 0);
                          goto LAB_00c41610;
                        }
                      }
                    }
                  }
                }
              }
LAB_00c415e6:
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\dsa\\dsa_ossl.c",0x1c7,"dsa_do_verify");
              func_0x00bc5160(10,0x80003,0);
              goto LAB_00c41610;
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_00c41610:
  func_0x00bb5760(iVar3);
  FUN_00bba400(iVar1);
  FUN_00bba400(param_9);
  FUN_00bba400(iVar2);
  return uVar6;
}



undefined4 FUN_00c41670(int param_1)

{
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  return 1;
}



undefined4 FUN_00c41690(int param_1)

{
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x4c));
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00c43800(void)

{
  DAT_013df600 = func_0x00bbb390();
  _DAT_013df608 = (uint)(DAT_013df600 != 0);
  return;
}



void FUN_00c44770(void)

{
  uint in_stack_00000018;
  
  func_0x00e87f70();
  in_stack_00000018 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  GetSystemTime((LPSYSTEMTIME)&stack0x00000008);
  SystemTimeToFileTime((SYSTEMTIME *)&stack0x00000008,(LPFILETIME)&stack0x00000000);
  FUN_008ab370();
  return;
}



int FUN_00c44e50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00bbc4f0(0x1c,"crypto\\conf\\conf_def.c",0x73);
  if ((iVar1 != 0) && (iVar2 = (**(code **)(param_1 + 8))(iVar1), iVar2 == 0)) {
    FUN_00bbc580(iVar1,"crypto\\conf\\conf_def.c",0x76);
    return 0;
  }
  return iVar1;
}



undefined4 * FUN_00c44ea0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return param_1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_s_OpenSSL_default_012b6280;
  param_1[1] = &DAT_01074e20;
  return (undefined4 *)0x1;
}



undefined4 * FUN_00c44ee0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return param_1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_s_WIN32_012b62a8;
  param_1[1] = &DAT_01074f20;
  return (undefined4 *)0x1;
}



undefined4 FUN_00c44f20(int param_1)

{
  if (param_1 != 0) {
    func_0x00c3faf0(param_1);
    FUN_00bbc580(param_1,"crypto\\conf\\conf_def.c",0x99);
    return 1;
  }
  return 0;
}



int FUN_00c44f50(int param_1)

{
  if (param_1 == 0) {
    return param_1;
  }
  func_0x00c3faf0(param_1);
  return 1;
}



undefined4 FUN_00c44f70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00bac0a0(param_2,&DAT_011a2434);
  if (iVar1 == 0) {
    uVar2 = func_0x00ba6ad0();
    uVar2 = ((int)uVar2 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar2;
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\conf\\conf_def.c",(uint)(uVar2 != 0x80) * 2 + 0xb3,"def_load");
    uVar3 = 0x72;
    if (uVar2 != 0x80) {
      uVar3 = 0x80002;
    }
    func_0x00bc5160(0xe,uVar3,0);
    return 0;
  }
  uVar3 = FUN_00c45010(param_1,iVar1,param_3);
  func_0x00baa8e0(iVar1);
  return uVar3;
}



void FUN_00c45010(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  short *psVar19;
  short *psVar20;
  bool bVar21;
  int iVar22;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000014;
  char *in_stack_00000018;
  int in_stack_0000001c;
  char *in_stack_00000020;
  byte *in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined2 uStack00000030;
  undefined1 uStack00000032;
  byte *in_stack_00000034;
  int in_stack_00000038;
  byte *in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  int *in_stack_00000048;
  int in_stack_0000004c;
  undefined8 in_stack_00000054;
  uint in_stack_00000090;
  int in_stack_00000098;
  int in_stack_0000009c;
  int *in_stack_000000a0;
  undefined4 uVar23;
  
  func_0x00e87f70();
  iVar8 = in_stack_0000009c;
  iVar3 = in_stack_00000098;
  in_stack_00000090 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  pcVar18 = (char *)0x0;
  in_stack_00000048 = in_stack_000000a0;
  in_stack_0000004c = *(int *)(in_stack_00000098 + 8);
  in_stack_0000001c = in_stack_0000009c;
  in_stack_00000040 = 1;
  iVar22 = 0;
  in_stack_00000024 = (byte *)0x0;
  iStack00000008 = 0;
  in_stack_00000020 = (char *)0x0;
  in_stack_0000002c = 0;
  in_stack_00000028 = func_0x00c1eac0();
  if (in_stack_00000028 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\conf\\conf_def.c",0xea,"def_load_bio");
    uVar23 = 0x80007;
  }
  else {
    pbVar7 = (byte *)func_0x00bbbc70("default","crypto\\conf\\conf_def.c",0xee);
    in_stack_00000024 = pbVar7;
    in_stack_0000003c = pbVar7;
    if (pbVar7 == (byte *)0x0) goto LAB_00c450b4;
    iVar5 = func_0x00c3fcc0(iVar3);
    if (iVar5 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\conf\\conf_def.c",0xf3,"def_load_bio");
      uVar23 = 0x8000e;
    }
    else {
      in_stack_00000038 = func_0x00c3fd20(iVar3,pbVar7);
      iVar5 = in_stack_00000028;
      if (in_stack_00000038 != 0) {
        iStack00000014 = 0;
        iStack0000000c = 0;
        iVar6 = func_0x00c1e8f0(in_stack_00000028,0x200);
joined_r0x00c4528f:
        if (iVar6 == 0) goto LAB_00c45dcb;
        psVar20 = (short *)(*(int *)(iVar5 + 4) + iStack00000014);
        *(char *)psVar20 = '\0';
        while( true ) {
          if ((iVar8 != 0) && (iVar8 = func_0x00baaaa0(iVar8,psVar20,0x1ff), iVar8 < 0)) {
            pcVar18 = (char *)0x0;
            goto LAB_00c450b4;
          }
          *(char *)((int)psVar20 + 0x1ff) = '\0';
          psVar19 = psVar20;
          do {
            sVar2 = *psVar19;
            psVar19 = (short *)((int)psVar19 + 1);
          } while ((char)sVar2 != '\0');
          iVar5 = (int)psVar19 - (int)((int)psVar20 + 1);
          iVar8 = iVar5;
          if (in_stack_00000040 != 0) {
            uStack00000030 = 0xbbef;
            uStack00000032 = 0xbf;
            if (((2 < iVar5) && (*psVar20 == -0x4411)) && ((char)psVar20[1] == -0x41)) {
              iVar8 = iVar5 + -3;
              func_0x008ab0e6(psVar20,(char *)((int)psVar20 + 3),iVar8);
              *(char *)(iVar5 + -3 + (int)psVar20) = '\0';
            }
            in_stack_00000040 = 0;
          }
          pcVar18 = in_stack_00000020;
          if ((iVar8 != 0) || (iStack0000000c != 0)) break;
          if (in_stack_0000002c == 0) {
LAB_00c4537f:
            iVar8 = func_0x00bd1840(iStack00000008);
            if (iVar8 == 0) {
              func_0x00c1e8a0(in_stack_00000028);
              FUN_00bbc580(in_stack_00000024,"crypto\\conf\\conf_def.c",0x232);
              FUN_00bd1630(iStack00000008);
              goto LAB_00c451c9;
            }
          }
          else {
            iVar8 = func_0x00c46100(in_stack_00000020,&stack0x0000002c);
            if (iVar8 == 0) {
              FUN_00bbc580(pcVar18,"crypto\\conf\\conf_def.c",0x126);
              in_stack_00000020 = (char *)0x0;
              goto LAB_00c4537f;
            }
          }
          func_0x00bab6d0(in_stack_0000001c);
          in_stack_0000001c = iVar8;
        }
        iVar5 = iVar8;
        if (0 < iVar8) {
          pcVar18 = (char *)((int)psVar20 + iVar8 + -1);
          do {
            if ((*pcVar18 != '\r') && (*pcVar18 != '\n')) break;
            iVar5 = iVar5 + -1;
            pcVar18 = pcVar18 + -1;
          } while (0 < iVar5);
        }
        iVar6 = in_stack_0000001c;
        if ((iVar8 == 0) || (iVar5 != iVar8)) {
          pcVar18 = (char *)0x0;
          iVar22 = iVar22 + 1;
          *(char *)(iVar5 + (int)psVar20) = '\0';
          iVar5 = iVar5 + iStack00000014;
          if (0 < iVar5) {
            bVar1 = *(byte *)(*(int *)(in_stack_00000028 + 4) + -1 + iVar5);
            if (((bVar1 < 0x80) && ((*(byte *)(*(int *)(iVar3 + 4) + (uint)bVar1 * 2) & 0x20) != 0))
               && ((iVar5 < 2 ||
                   ((bVar1 = *(byte *)(*(int *)(in_stack_00000028 + 4) + -2 + iVar5), 0x7f < bVar1
                    || ((*(byte *)(*(int *)(iVar3 + 4) + (uint)bVar1 * 2) & 0x20) == 0)))))) {
              iStack00000014 = iVar5 + -1;
              iStack0000000c = 1;
              pcVar18 = (char *)0x0;
              goto LAB_00c4559c;
            }
          }
          iStack0000000c = 0;
          in_stack_00000044 = 0;
          in_stack_00000018 = (char *)0x0;
          iStack00000014 = 0;
          uVar23 = *(undefined4 *)(in_stack_00000028 + 4);
          func_0x00c45e70(iVar3,uVar23);
          pbVar7 = (byte *)func_0x00c460b0(iVar3,uVar23);
          bVar1 = *pbVar7;
          if ((0x7f < bVar1) ||
             (iVar6 = in_stack_0000001c, (*(byte *)(*(int *)(iVar3 + 4) + (uint)bVar1 * 2) & 8) == 0
             )) {
            if (bVar1 == 0x5b) {
              pcVar9 = (char *)func_0x00c460b0(iVar3,pbVar7 + 1);
              puVar10 = (undefined1 *)func_0x00c46010(iVar3,pcVar9);
              pcVar11 = (char *)func_0x00c460b0(iVar3,puVar10);
              cVar4 = *pcVar11;
              pcVar13 = pcVar9;
              while (cVar4 != ']') {
                if ((cVar4 == '\0') || (pcVar13 == pcVar11)) {
                  FUN_00bc4f50();
                  func_0x00bc5050("crypto\\conf\\conf_def.c",0x16f,"def_load_bio");
                  func_0x00bc5160(0xe,100,0);
                  goto LAB_00c450b4;
                }
                puVar10 = (undefined1 *)func_0x00c46010(iVar3,pcVar11);
                pcVar12 = (char *)func_0x00c460b0(iVar3,puVar10);
                pcVar13 = pcVar11;
                pcVar11 = pcVar12;
                cVar4 = *pcVar12;
              }
              *puVar10 = 0;
              iVar8 = func_0x00c462d0(iVar3,0,&stack0x0000003c,pcVar9);
              pbVar7 = in_stack_0000003c;
              if (iVar8 == 0) {
                in_stack_00000024 = in_stack_0000003c;
                goto LAB_00c450b4;
              }
              in_stack_00000024 = in_stack_0000003c;
              in_stack_00000038 = func_0x00c3fb50(iVar3,in_stack_0000003c);
              iVar6 = in_stack_0000001c;
              if ((in_stack_00000038 == 0) &&
                 (in_stack_00000038 = func_0x00c3fd20(iVar3,pbVar7), iVar6 = in_stack_0000001c,
                 in_stack_00000038 == 0)) {
                FUN_00bc4f50();
                func_0x00bc5050("crypto\\conf\\conf_def.c",0x178,"def_load_bio");
                func_0x00bc5160(0xe,0x67,0);
                goto LAB_00c450b4;
              }
            }
            else {
              pcVar13 = (char *)func_0x00c46010(iVar3,pbVar7);
              if ((*pcVar13 == ':') && (pcVar13[1] == ':')) {
                *pcVar13 = '\0';
                pbVar17 = (byte *)(pcVar13 + 2);
                in_stack_00000034 = pbVar7;
                pcVar13 = (char *)func_0x00c46010(iVar3,pbVar17);
                pbVar7 = pbVar17;
              }
              else {
                in_stack_00000034 = in_stack_00000024;
              }
              pbVar17 = (byte *)func_0x00c460b0(iVar3,pcVar13);
              iVar8 = func_0x008ab040(pbVar7,".pragma",7);
              if (iVar8 != 0) {
                iStack0000000c = 0;
LAB_00c457b2:
                iVar8 = func_0x008ab040(pbVar7,".include",8);
                if (iVar8 == 0) {
                  if ((pbVar17 != pbVar7 + 8) || (*pbVar17 == 0x3d)) {
                    in_stack_00000018 = (char *)0x0;
                    pcVar13 = (char *)func_0x00c018e0("OPENSSL_CONF_INCLUDE");
                    if (pcVar13 == (char *)0x0) {
                      pcVar13 = *(char **)(iVar3 + 0x14);
                    }
                    if (*pbVar17 == 0x3d) {
                      pbVar17 = (byte *)func_0x00c460b0(iVar3,pbVar17 + 1);
                    }
                    func_0x00c46840(iVar3,pbVar17);
                    iVar8 = func_0x00c462d0(iVar3,in_stack_00000034,&stack0x00000018,pbVar17);
                    if (iVar8 == 0) goto LAB_00c450b4;
                    pcVar11 = in_stack_00000018;
                    if (((pcVar13 != (char *)0x0) && (cVar4 = *in_stack_00000018, cVar4 != '\\')) &&
                       ((cVar4 == '\0' || ((in_stack_00000018[1] != ':' && (cVar4 != '/')))))) {
                      pcVar9 = pcVar13;
                      do {
                        cVar4 = *pcVar9;
                        pcVar9 = pcVar9 + 1;
                      } while (cVar4 != '\0');
                      do {
                        cVar4 = *pcVar11;
                        pcVar11 = pcVar11 + 1;
                      } while (cVar4 != '\0');
                      pcVar9 = pcVar9 + (int)(pcVar11 +
                                             ((2 - (int)(in_stack_00000018 + 1)) -
                                             (int)(pcVar13 + 1)));
                      pcVar11 = (char *)FUN_00bbc4f0(pcVar9,"crypto\\conf\\conf_def.c",0x1d8);
                      if (pcVar11 == (char *)0x0) {
                        FUN_00bbc580(in_stack_00000018,"crypto\\conf\\conf_def.c",0x1da);
                        goto LAB_00c450b4;
                      }
                      func_0x00bbc0b0(pcVar11,pcVar13,pcVar9);
                      cVar4 = *pcVar11;
                      pcVar13 = pcVar11;
                      pcVar12 = pcVar11;
                      if (cVar4 != '\0') {
                        do {
                          pcVar13 = pcVar12;
                          pcVar12 = pcVar13 + 1;
                        } while (*pcVar13 != '\0');
                        pcVar13 = pcVar13 + -1;
                        cVar4 = *pcVar13;
                      }
                      if ((cVar4 != '\\') && (*pcVar13 != '/')) {
                        func_0x00bbc050(pcVar11,&DAT_0113c2ec,pcVar9);
                      }
                      pcVar13 = in_stack_00000018;
                      func_0x00bbc050(pcVar11,in_stack_00000018,pcVar9);
                      FUN_00bbc580(pcVar13,"crypto\\conf\\conf_def.c",0x1e2);
                    }
                    if (((*(int *)(iVar3 + 0x10) != 0) && (cVar4 = *pcVar11, cVar4 != '\\')) &&
                       ((cVar4 == '\0' || ((pcVar11[1] != ':' && (cVar4 != '/')))))) {
                      FUN_00bc4f50();
                      func_0x00bc5050("crypto\\conf\\conf_def.c",0x1e9,"def_load_bio");
                      func_0x00bc5160(0xe,0x7d,0);
                      FUN_00bbc580(pcVar11,"crypto\\conf\\conf_def.c",0x1ea);
                      goto LAB_00c450b4;
                    }
                    iVar8 = func_0x00e87aa8(pcVar11,&stack0x00000050);
                    if (iVar8 < 0) {
                      FUN_00bc4f50();
                      func_0x00bc5050("crypto\\conf\\conf_def.c",0x32d,"process_include");
                      puVar15 = (undefined4 *)func_0x008aaf8a();
                      func_0x00bc5160(2,*puVar15,"calling stat(%s)",pcVar11);
                      iVar8 = 0;
                    }
                    else if ((in_stack_00000054._2_4_ & 0xf000) == 0x4000) {
                      if (in_stack_0000002c == 0) {
                        iVar8 = func_0x00c46100(pcVar11,&stack0x0000002c);
                        if (iVar8 != 0) {
                          in_stack_00000020 = pcVar11;
                        }
                      }
                      else {
                        FUN_00bc4f50();
                        func_0x00bc5050("crypto\\conf\\conf_def.c",0x334,"process_include");
                        func_0x00bc5160(0xe,0x6f,&DAT_0112e274,pcVar11);
                        iVar8 = 0;
                      }
                    }
                    else {
                      iVar8 = func_0x00bac0a0(pcVar11,&DAT_01198360);
                    }
                    if (pcVar11 != in_stack_00000020) {
                      FUN_00bbc580(pcVar11,"crypto\\conf\\conf_def.c",499);
                    }
                    iVar6 = in_stack_0000001c;
                    if (iVar8 == 0) goto LAB_00c4559c;
                    if ((iStack00000008 == 0) &&
                       (iStack00000008 = func_0x00bd1790(), iStack00000008 == 0)) {
                      FUN_00bc4f50();
                      func_0x00bc5050("crypto\\conf\\conf_def.c",0x1fe,"def_load_bio");
                      func_0x00bc5160(0xe,0x8000f,0);
                      func_0x00baa8e0(iVar8);
                      goto LAB_00c450b4;
                    }
                    iVar5 = func_0x00bd18c0(iStack00000008,in_stack_0000001c);
                    iVar6 = iVar8;
                    if (iVar5 == 0) {
                      FUN_00bc4f50();
                      func_0x00bc5050("crypto\\conf\\conf_def.c",0x204,"def_load_bio");
                      func_0x00bc5160(0xe,0x8000f,0);
                      func_0x00baa8e0(iVar8);
                      goto LAB_00c450b4;
                    }
                    goto LAB_00c4559c;
                  }
                }
                else if (*pbVar17 == 0x3d) {
                  *pcVar13 = '\0';
                  uVar23 = func_0x00c460b0(iVar3,pbVar17 + 1);
                  func_0x00c46840(iVar3,uVar23);
                  pcVar18 = (char *)FUN_00bbc4f0(0xc,"crypto\\conf\\conf_def.c",0x216);
                  if (pcVar18 != (char *)0x0) {
                    iVar8 = func_0x00bbbc70(pbVar7,"crypto\\conf\\conf_def.c",0x218);
                    pbVar7 = in_stack_00000034;
                    *(int *)(pcVar18 + 4) = iVar8;
                    pcVar18[8] = '\0';
                    pcVar18[9] = '\0';
                    pcVar18[10] = '\0';
                    pcVar18[0xb] = '\0';
                    if ((iVar8 != 0) &&
                       (iVar8 = func_0x00c462d0(iVar3,in_stack_00000034,pcVar18 + 8,uVar23),
                       pbVar17 = pbVar7, pbVar16 = in_stack_00000024, iVar8 != 0)) {
                      do {
                        bVar1 = *pbVar17;
                        bVar21 = bVar1 < *pbVar16;
                        if (bVar1 != *pbVar16) {
LAB_00c45af2:
                          uVar14 = -(uint)bVar21 | 1;
                          goto LAB_00c45af7;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar17[1];
                        bVar21 = bVar1 < pbVar16[1];
                        if (bVar1 != pbVar16[1]) goto LAB_00c45af2;
                        pbVar17 = pbVar17 + 2;
                        pbVar16 = pbVar16 + 2;
                      } while (bVar1 != 0);
                      uVar14 = 0;
LAB_00c45af7:
                      iVar8 = in_stack_00000038;
                      if (((uVar14 == 0) || (iVar8 = func_0x00c3fb50(iVar3,pbVar7), iVar8 != 0)) ||
                         (iVar8 = func_0x00c3fd20(iVar3,pbVar7), iVar8 != 0)) {
                        iVar8 = func_0x00c3fa70(iVar3,iVar8,pcVar18);
                        if (iVar8 != 0) {
                          pcVar18 = (char *)0x0;
                          iVar6 = in_stack_0000001c;
                          goto LAB_00c4559c;
                        }
                        FUN_00bc4f50();
                        func_0x00bc5050("crypto\\conf\\conf_def.c",0x22b,"def_load_bio");
                        uVar23 = 0x8000e;
                      }
                      else {
                        FUN_00bc4f50();
                        func_0x00bc5050("crypto\\conf\\conf_def.c",0x225,"def_load_bio");
                        uVar23 = 0x67;
                      }
                      func_0x00bc5160(0xe,uVar23,0);
                    }
                  }
                  goto LAB_00c450b4;
                }
                FUN_00bc4f50();
                func_0x00bc5050("crypto\\conf\\conf_def.c",0x20d,"def_load_bio");
                func_0x00bc5160(0xe,0x65,"HERE-->%s",pbVar17);
                goto LAB_00c450b4;
              }
              pbVar7 = pbVar7 + 7;
              if (pbVar17 == pbVar7) {
                iStack0000000c = in_stack_00000044;
                pcVar18 = in_stack_00000018;
                if (*pbVar17 != 0x3d) goto LAB_00c457b2;
LAB_00c45649:
                pbVar17 = (byte *)func_0x00c460b0(iVar3,pbVar17 + 1);
              }
              else if (*pbVar17 == 0x3d) goto LAB_00c45649;
              func_0x00c46840(iVar3,pbVar17);
              pbVar7 = (byte *)func_0x008ab0c6(pbVar17,0x3a);
              if (((pbVar7 == (byte *)0x0) || (pbVar7 == pbVar17)) || (pbVar7[1] == 0)) {
                FUN_00bc4f50();
                func_0x00bc5050("crypto\\conf\\conf_def.c",0x196,"def_load_bio");
                func_0x00bc5160(0xe,0x7a,0);
                pcVar18 = in_stack_00000018;
                goto LAB_00c450b4;
              }
              *pbVar7 = 0;
              func_0x00c46840(iVar3,pbVar17);
              uVar23 = func_0x00c460b0(iVar3,pbVar7 + 1);
              pcVar18 = "dollarid";
              pbVar7 = pbVar17;
              do {
                bVar1 = *pbVar7;
                bVar21 = bVar1 < (byte)*pcVar18;
                if (bVar1 != *pcVar18) {
LAB_00c456d0:
                  uVar14 = -(uint)bVar21 | 1;
                  goto LAB_00c456d5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar21 = bVar1 < ((byte *)pcVar18)[1];
                if (bVar1 != ((byte *)pcVar18)[1]) goto LAB_00c456d0;
                pbVar7 = pbVar7 + 2;
                pcVar18 = (char *)((byte *)pcVar18 + 2);
              } while (bVar1 != 0);
              uVar14 = 0;
LAB_00c456d5:
              if (uVar14 == 0) {
                iVar8 = func_0x00c46230(uVar23,iVar3 + 0xc);
LAB_00c45781:
                pcVar18 = in_stack_00000018;
                if (iVar8 == 0) goto LAB_00c450b4;
              }
              else {
                pcVar18 = "abspath";
                pbVar7 = pbVar17;
                do {
                  bVar1 = *pbVar7;
                  bVar21 = bVar1 < (byte)*pcVar18;
                  if (bVar1 != *pcVar18) {
LAB_00c45712:
                    uVar14 = -(uint)bVar21 | 1;
                    goto LAB_00c45717;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar21 = bVar1 < ((byte *)pcVar18)[1];
                  if (bVar1 != ((byte *)pcVar18)[1]) goto LAB_00c45712;
                  pbVar7 = pbVar7 + 2;
                  pcVar18 = (char *)((byte *)pcVar18 + 2);
                } while (bVar1 != 0);
                uVar14 = 0;
LAB_00c45717:
                if (uVar14 == 0) {
                  iVar8 = func_0x00c46230(uVar23,iVar3 + 0x10);
                  goto LAB_00c45781;
                }
                pcVar18 = "includedir";
                do {
                  bVar1 = *pbVar17;
                  bVar21 = bVar1 < (byte)*pcVar18;
                  if (bVar1 != *pcVar18) {
LAB_00c45750:
                    uVar14 = -(uint)bVar21 | 1;
                    goto LAB_00c45755;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar17[1];
                  bVar21 = bVar1 < ((byte *)pcVar18)[1];
                  if (bVar1 != ((byte *)pcVar18)[1]) goto LAB_00c45750;
                  pbVar17 = pbVar17 + 2;
                  pcVar18 = (char *)((byte *)pcVar18 + 2);
                } while (bVar1 != 0);
                uVar14 = 0;
LAB_00c45755:
                if (uVar14 == 0) {
                  FUN_00bbc580(*(undefined4 *)(iVar3 + 0x14),"crypto\\conf\\conf_def.c",0x1ac);
                  iVar8 = func_0x00bbbc70(uVar23,"crypto\\conf\\conf_def.c",0x1ad);
                  *(int *)(iVar3 + 0x14) = iVar8;
                  goto LAB_00c45781;
                }
              }
              iStack0000000c = in_stack_00000044;
              pcVar18 = in_stack_00000018;
              iVar6 = in_stack_0000001c;
            }
          }
        }
        else {
          iStack00000014 = iStack00000014 + iVar5;
          iStack0000000c = 1;
          pcVar18 = (char *)0x0;
        }
LAB_00c4559c:
        in_stack_0000001c = iVar6;
        iVar5 = in_stack_00000028;
        iVar6 = func_0x00c1e8f0(in_stack_00000028,iStack00000014 + 0x200);
        iVar8 = in_stack_0000001c;
        goto joined_r0x00c4528f;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\conf\\conf_def.c",0xf9,"def_load_bio");
      uVar23 = 0x67;
    }
  }
  func_0x00bc5160(0xe,uVar23,0);
  goto LAB_00c450b4;
LAB_00c45dcb:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\conf\\conf_def.c",0x101,"def_load_bio");
  func_0x00bc5160(0xe,0x80007,0);
LAB_00c450b4:
  func_0x00c1e8a0(in_stack_00000028);
  FUN_00bbc580(in_stack_00000024,"crypto\\conf\\conf_def.c",0x23c);
  iVar5 = func_0x00bd1830(iStack00000008);
  iVar8 = in_stack_0000001c;
  while (0 < iVar5) {
    iVar6 = func_0x00bd1840(iStack00000008);
    func_0x00bab6d0(iVar8);
    iVar5 = func_0x00bd1830(iStack00000008);
    iVar8 = iVar6;
  }
  FUN_00bd1630(iStack00000008);
  FUN_00bbc580(in_stack_00000020,"crypto\\conf\\conf_def.c",0x249);
  if (in_stack_0000002c != 0) {
    func_0x00c98c10(&stack0x0000002c);
  }
  if (in_stack_00000048 != (int *)0x0) {
    *in_stack_00000048 = iVar22;
  }
  func_0x00bbc9d0(&stack0x00000080,0xd,&DAT_010750c4,iVar22);
  func_0x00ba6530(2,"line ",&stack0x00000080);
  if (in_stack_0000004c != *(int *)(iVar3 + 8)) {
    func_0x00bfeaf0(*(int *)(iVar3 + 8));
    *(undefined4 *)(iVar3 + 8) = 0;
  }
  if (pcVar18 != (char *)0x0) {
    FUN_00bbc580(*(undefined4 *)(pcVar18 + 4),"crypto\\conf\\conf_def.c",0x256);
    FUN_00bbc580(*(undefined4 *)(pcVar18 + 8),"crypto\\conf\\conf_def.c",599);
    FUN_00bbc580(pcVar18,"crypto\\conf\\conf_def.c",600);
  }
LAB_00c451c9:
  FUN_008ab370();
  return;
}



undefined4 FUN_00c45e10(int param_1,undefined4 param_2)

{
  func_0x00bbe210(*(undefined4 *)(param_1 + 8),FUN_00ba7370,FUN_00c45fd0,param_2);
  return 1;
}



ushort FUN_00c45e40(int param_1,byte param_2)

{
  if (0x7f < param_2) {
    return 0;
  }
  return *(ushort *)(*(int *)(param_1 + 4) + (uint)param_2 * 2) & 1;
}



void FUN_00c45fd0(undefined4 *param_1,undefined4 param_2)

{
  if (param_1[1] != 0) {
    func_0x00bbc8e0(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  func_0x00bbc8e0(param_2,"[[%s]]\n",*param_1);
  return;
}



void FUN_00c476c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00c47400(param_1,param_2,param_3,param_4,0,param_5);
  return;
}



void FUN_00c476e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00c47400(param_1,param_2,param_3,param_4,1,param_5);
  return;
}



void FUN_00c47700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c47620(param_1,param_2,param_3,param_4,&DAT_0106b198);
  return;
}



void FUN_00c47720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c47620(param_1,param_2,param_3,param_4,&DAT_01075270);
  return;
}



undefined4 FUN_00c478f0(int param_1)

{
  LPCSTR lpLibFileName;
  HMODULE hLibModule;
  undefined4 *puVar1;
  int iVar2;
  
  lpLibFileName = (LPCSTR)func_0x00c04fa0(param_1,0);
  if (lpLibFileName == (LPCSTR)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x67,"win32_load");
    func_0x00bc5160(0x25,0x6f,0);
    FUN_00bbc580(0,"crypto\\dso\\dso_win32.c",0x7d);
    FUN_00bbc580(0,"crypto\\dso\\dso_win32.c",0x7e);
    return 0;
  }
  hLibModule = LoadLibraryA(lpLibFileName);
  if (hLibModule == (HMODULE)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x6c,"win32_load");
    func_0x00bc5160(0x25,0x67,"filename(%s)",lpLibFileName);
    FUN_00bbc580(lpLibFileName,"crypto\\dso\\dso_win32.c",0x7d);
    FUN_00bbc580(0,"crypto\\dso\\dso_win32.c",0x7e);
    return 0;
  }
  puVar1 = (undefined4 *)FUN_00bbc4f0(4,"crypto\\dso\\dso_win32.c",0x70);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = hLibModule;
    iVar2 = func_0x00bd18c0(*(undefined4 *)(param_1 + 4),puVar1);
    if (iVar2 != 0) {
      *(LPCSTR *)(param_1 + 0x24) = lpLibFileName;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x75,"win32_load");
    func_0x00bc5160(0x25,0x69,0);
  }
  FUN_00bbc580(lpLibFileName,"crypto\\dso\\dso_win32.c",0x7d);
  FUN_00bbc580(puVar1,"crypto\\dso\\dso_win32.c",0x7e);
  FreeLibrary(hLibModule);
  return 0;
}



undefined4 FUN_00c47a30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  BOOL BVar3;
  
  if (param_1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x88,"win32_unload");
    func_0x00bc5160(0x25,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00bd1830(*(undefined4 *)(param_1 + 4));
  if (iVar1 < 1) {
    return 1;
  }
  puVar2 = (undefined4 *)func_0x00bd1840(*(undefined4 *)(param_1 + 4));
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x8f,"win32_unload");
    func_0x00bc5160(0x25,0x68,0);
    return 0;
  }
  BVar3 = FreeLibrary((HMODULE)*puVar2);
  if (BVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x93,"win32_unload");
    func_0x00bc5160(0x25,0x6b,0);
    func_0x00bd18c0(*(undefined4 *)(param_1 + 4),puVar2);
    return 0;
  }
  FUN_00bbc580(puVar2,"crypto\\dso\\dso_win32.c",0x9b);
  return 1;
}



FARPROC FUN_00c47b20(int param_1,LPCSTR param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  FARPROC pFVar4;
  
  if ((param_1 == 0) || (param_2 == (LPCSTR)0x0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0xa8,"win32_bind_func");
    func_0x00bc5160(0x25,0xc0102,0);
    pFVar4 = (FARPROC)0x0;
  }
  else {
    iVar2 = func_0x00bd1830(*(undefined4 *)(param_1 + 4));
    if (iVar2 < 1) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\dso\\dso_win32.c",0xac,"win32_bind_func");
      func_0x00bc5160(0x25,0x69,0);
      return (FARPROC)0x0;
    }
    uVar1 = *(undefined4 *)(param_1 + 4);
    iVar2 = func_0x00bd1830(uVar1);
    puVar3 = (undefined4 *)func_0x00bd1a80(uVar1,iVar2 + -1);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\dso\\dso_win32.c",0xb1,"win32_bind_func");
      func_0x00bc5160(0x25,0x68,0);
      return (FARPROC)0x0;
    }
    pFVar4 = GetProcAddress((HMODULE)*puVar3,param_2);
    if (pFVar4 == (FARPROC)0x0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\dso\\dso_win32.c",0xb6,"win32_bind_func");
      func_0x00bc5160(0x25,0x6a,"symname(%s)",param_2);
      return (FARPROC)0x0;
    }
  }
  return pFVar4;
}



int FUN_00c47c30(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  
  iVar2 = func_0x00e87d34(param_2,&DAT_0113c2ec);
  if (iVar2 == 0) {
    iVar2 = func_0x00e87d34(param_2,&DAT_01141648);
    if (iVar2 == 0) {
      iVar2 = func_0x00e87d34(param_2,&DAT_0113c084);
      if (iVar2 == 0) {
        iVar2 = 1;
        goto LAB_00c47c75;
      }
    }
  }
  iVar2 = 0;
LAB_00c47c75:
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar3 = FUN_00bbc4f0(pcVar5 + iVar2 * 4 + (1 - (int)(param_2 + 1)),"crypto\\dso\\dso_win32.c",
                       0x1c7);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x1c9,"win32_name_converter");
    func_0x00bc5160(0x25,0x6d,0);
    return 0;
  }
  puVar4 = &DAT_01143420;
  if (iVar2 == 0) {
    puVar4 = &DAT_0112e1b4;
  }
  func_0x00bbc9d0(iVar3,pcVar5 + iVar2 * 4 + (1 - (int)(param_2 + 1)),&DAT_01058a30,param_2,puVar4);
  return iVar3;
}



int FUN_00c47d00(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)0x0;
  piVar4 = (int *)0x0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\dso\\dso_win32.c",0x187,"win32_merger");
      func_0x00bc5160(0x25,0xc0102,0);
      return 0;
    }
    uVar5 = 399;
  }
  else {
    if (param_3 != 0) {
      piVar3 = (int *)func_0x00c48520(param_1,param_2,0);
      if (piVar3 == (int *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\dso\\dso_win32.c",0x195,"win32_merger");
        func_0x00bc5160(0x25,0x80025,0);
        return 0;
      }
      piVar4 = (int *)func_0x00c48520(param_1,param_3,1);
      if (piVar4 == (int *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\dso\\dso_win32.c",0x19a,"win32_merger");
        func_0x00bc5160(0x25,0x80025,0);
        FUN_00bbc580(piVar3,"crypto\\dso\\dso_win32.c",0x19b);
        return 0;
      }
      if ((*piVar3 == 0) && (piVar3[2] == 0)) {
        *piVar3 = *piVar4;
        piVar3[1] = piVar4[1];
        piVar3[2] = piVar4[2];
        piVar3[3] = piVar4[3];
      }
      if ((char *)piVar3[6] == (char *)0x0) {
        piVar3[6] = piVar4[6];
        piVar3[7] = piVar4[7];
      }
      else {
        cVar1 = *(char *)piVar3[6];
        if ((cVar1 != '\\') && (cVar1 != '/')) {
          piVar3[4] = piVar4[6];
          piVar3[5] = piVar4[7];
        }
      }
      if (piVar3[8] == 0) {
        piVar3[8] = piVar4[8];
        piVar3[9] = piVar4[9];
      }
      iVar2 = func_0x00c48270(param_1,piVar3);
      goto LAB_00c47e7b;
    }
    uVar5 = 0x18b;
    param_3 = param_2;
  }
  iVar2 = func_0x00bbbc70(param_3,"crypto\\dso\\dso_win32.c",uVar5);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00c47e7b:
  FUN_00bbc580(piVar3,"crypto\\dso\\dso_win32.c",0x1b5);
  FUN_00bbc580(piVar4,"crypto\\dso\\dso_win32.c",0x1b6);
  return iVar2;
}



void FUN_00c47eb0(FARPROC param_1,undefined4 param_2)

{
  char cVar1;
  HMODULE hModule;
  FARPROC _Dst;
  FARPROC pFVar2;
  HANDLE hObject;
  int iVar3;
  code *unaff_ESI;
  code *pcVar4;
  char *pcVar5;
  code *in_stack_00000018;
  int in_stack_0000001c;
  code *in_stack_00000238;
  
  func_0x00e87f70();
  pcVar4 = in_stack_00000238;
  if (in_stack_00000238 == (code *)0x0) {
    pcVar4 = FUN_00c47eb0;
  }
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x1fe,"win32_pathbyaddr");
    func_0x00bc5160(0x25,0x6c,0);
    FUN_008ab370();
    return;
  }
  _Dst = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
  if (_Dst == (FARPROC)0x0) {
    FreeLibrary(hModule);
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x206,"win32_pathbyaddr");
    func_0x00bc5160(0x25,0x6c,0);
    FUN_008ab370();
    return;
  }
  param_1 = GetProcAddress(hModule,"Module32First");
  pFVar2 = GetProcAddress(hModule,"Module32Next");
  hObject = (HANDLE)(*_Dst)(8,0);
  if (hObject == (HANDLE)0xffffffff) {
    FreeLibrary(hModule);
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x21a,"win32_pathbyaddr");
    func_0x00bc5160(0x25,0x6c,0);
  }
  else {
    param_1 = (FARPROC)0x224;
    iVar3 = (*unaff_ESI)(hObject,&param_1);
    if (iVar3 == 0) {
      CloseHandle(hObject);
      FreeLibrary(hModule);
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\dso\\dso_win32.c",0x223,"win32_pathbyaddr");
      func_0x00bc5160(0x25,0x72,0);
    }
    else {
      do {
        if ((in_stack_00000018 <= pcVar4) && (pcVar4 < in_stack_00000018 + in_stack_0000001c)) {
          CloseHandle(hObject);
          FreeLibrary(hModule);
          pcVar5 = &stack0x00000124;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          pcVar4 = (code *)(pcVar5 + -(int)&stack0x00000125);
          if (0 < (int)in_stack_00000238) {
            if ((int)in_stack_00000238 <= (int)pcVar4) {
              pcVar4 = in_stack_00000238 + -1;
            }
            memcpy(_Dst,&stack0x00000124,(size_t)pcVar4);
            _Dst[(int)pcVar4] = (FARPROC)0x0;
          }
          goto LAB_00c4806e;
        }
        iVar3 = (*pFVar2)(hObject,&param_1);
      } while (iVar3 != 0);
      CloseHandle(hObject);
      FreeLibrary(hModule);
    }
  }
LAB_00c4806e:
  FUN_008ab370();
  return;
}



void FUN_00c480e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  HANDLE hObject;
  int iVar4;
  HMODULE in_stack_00000028;
  LPCSTR in_stack_00000238;
  undefined4 uVar5;
  
  func_0x00e87f70();
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dso\\dso_win32.c",0x261,"win32_globallookup");
    func_0x00bc5160(0x25,0x6c,0);
    FUN_008ab370();
    return;
  }
  pFVar1 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(hModule);
    FUN_00bc4f50();
    uVar5 = 0x269;
  }
  else {
    pFVar2 = GetProcAddress(hModule,"Module32First");
    pFVar3 = GetProcAddress(hModule,"Module32Next");
    hObject = (HANDLE)(*pFVar1)(8,0);
    if (hObject != (HANDLE)0xffffffff) {
      param_3 = 0x224;
      iVar4 = (*pFVar2)(hObject,&param_3);
      if (iVar4 == 0) {
        CloseHandle(hObject);
        FreeLibrary(hModule);
      }
      else {
        do {
          pFVar1 = GetProcAddress(in_stack_00000028,in_stack_00000238);
          if (pFVar1 != (FARPROC)0x0) {
            CloseHandle(hObject);
            FreeLibrary(hModule);
            goto LAB_00c48243;
          }
          iVar4 = (*pFVar3)(hObject,&param_3);
        } while (iVar4 != 0);
        CloseHandle(hObject);
        FreeLibrary(hModule);
      }
      goto LAB_00c48243;
    }
    FreeLibrary(hModule);
    FUN_00bc4f50();
    uVar5 = 0x279;
  }
  func_0x00bc5050("crypto\\dso\\dso_win32.c",uVar5,"win32_globallookup");
  func_0x00bc5160(0x25,0x6c,0);
LAB_00c48243:
  FUN_008ab370();
  return;
}



undefined ** FUN_00c48750(void)

{
  return &PTR_DAT_010753c8;
}



bool FUN_00c48760(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113c348);
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"OpenSSL Default Provider"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"version");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"buildinfo");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"status");
  if (iVar1 == 0) {
    return true;
  }
  uVar2 = FUN_0058e2e0();
  iVar1 = func_0x00bc0c00(iVar1,uVar2);
  return iVar1 != 0;
}



undefined ** FUN_00c48810(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  switch(param_2) {
  case 1:
    return (undefined **)&DAT_01075430;
  case 2:
    return (undefined **)&DAT_013df618;
  case 3:
    return (undefined **)&DAT_01076030;
  case 4:
    return (undefined **)&DAT_010760d0;
  case 5:
    return (undefined **)&DAT_01076260;
  default:
    return (undefined **)0x0;
  case 10:
    return &PTR_s_DH_dhKeyAgreement_1_2_840_113549_01076610;
  case 0xb:
    return (undefined **)&DAT_010761e0;
  case 0xc:
    return (undefined **)&DAT_010762c0;
  case 0xd:
    return (undefined **)&DAT_01076590;
  case 0xe:
    return (undefined **)&DAT_010765c0;
  case 0x14:
    return (undefined **)&DAT_01076740;
  case 0x15:
    return (undefined **)&DAT_01076e80;
  case 0x16:
    return (undefined **)&DAT_01077110;
  }
}



void FUN_00c488e0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00c79a90(param_1);
  func_0x00bcc140(uVar1);
  FUN_00bbc580(param_1,"providers\\common\\provider_ctx.c",0x15);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_00c48900(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  func_0x00e87f70();
  pcVar4 = (code *)0x0;
  iVar2 = func_0x00cd5b00(param_3);
  if (iVar2 != 0) {
    iVar2 = func_0x00c79ba0(param_3);
    if ((iVar2 != 0) && (iVar2 = *param_3, iVar2 != 0)) {
      param_3 = param_3 + 1;
      do {
        if (iVar2 == 1) {
          _DAT_013df610 = *param_3;
        }
        else if (iVar2 == 2) {
          _DAT_013df614 = *param_3;
        }
        else if (iVar2 == 4) {
          pcVar4 = (code *)*param_3;
        }
        iVar2 = param_3[1];
        param_3 = param_3 + 2;
      } while (iVar2 != 0);
      if (pcVar4 != (code *)0x0) {
        iVar2 = func_0x00c79aa0();
        *param_5 = iVar2;
        if (iVar2 != 0) {
          iVar2 = func_0x00cd5a50();
          if (iVar2 != 0) {
            iVar1 = *param_5;
            uVar3 = (*pcVar4)(param_2);
            func_0x00c79ad0(iVar1,uVar3);
            func_0x008ff0c0(*param_5,param_2);
            func_0x00c79ac0(*param_5,iVar2);
            *param_4 = &DAT_01077140;
            func_0x00cd5ce0(&PTR_DAT_010755f0,&DAT_013df618);
            return 1;
          }
        }
        func_0x00c79a70(*param_5);
        *param_5 = 0;
        return 0;
      }
    }
  }
  return 0;
}



undefined ** FUN_00c48a10(void)

{
  return &PTR_DAT_01079e30;
}



bool FUN_00c48a20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113c348);
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"OpenSSL Base Provider"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"version");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"buildinfo");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"status");
  if (iVar1 == 0) {
    return true;
  }
  uVar2 = FUN_0058e2e0();
  iVar1 = func_0x00bc0c00(iVar1,uVar2);
  return iVar1 != 0;
}



undefined * FUN_00c48ad0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  switch(param_2) {
  case 5:
    return &UNK_0107a898;
  default:
    return (undefined *)0x0;
  case 0x14:
    return &UNK_01079e98;
  case 0x15:
    return &UNK_0107a5d8;
  case 0x16:
    return &UNK_0107a868;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4
FUN_00c48b40(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  func_0x00e87f70();
  pcVar4 = (code *)0x0;
  iVar2 = func_0x00cd5b00(param_3);
  if ((iVar2 != 0) && (iVar2 = *param_3, iVar2 != 0)) {
    param_3 = param_3 + 1;
    do {
      if (iVar2 == 1) {
        _DAT_013dfe48 = *param_3;
      }
      else if (iVar2 == 2) {
        _DAT_013dfe4c = *param_3;
      }
      else if (iVar2 == 4) {
        pcVar4 = (code *)*param_3;
      }
      iVar2 = param_3[1];
      param_3 = param_3 + 2;
    } while (iVar2 != 0);
    if (pcVar4 != (code *)0x0) {
      iVar2 = func_0x00c79aa0();
      *param_5 = iVar2;
      if (iVar2 != 0) {
        iVar2 = func_0x00cd5a50();
        if (iVar2 != 0) {
          iVar1 = *param_5;
          uVar3 = (*pcVar4)(param_2);
          func_0x00c79ad0(iVar1,uVar3);
          func_0x008ff0c0(*param_5,param_2);
          func_0x00c79ac0(*param_5,iVar2);
          *param_4 = &DAT_0107a8b8;
          return 1;
        }
      }
      func_0x00c79a70(*param_5);
      *param_5 = 0;
      return 0;
    }
  }
  return 0;
}



undefined ** FUN_00c48c20(void)

{
  return &PTR_DAT_0107b4a8;
}



bool FUN_00c48c30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113c348);
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"OpenSSL Null Provider"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"version");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"buildinfo");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"status");
  if (iVar1 == 0) {
    return true;
  }
  uVar2 = FUN_0058e2e0();
  iVar1 = func_0x00bc0c00(iVar1,uVar2);
  return iVar1 != 0;
}



undefined4 FUN_00c48ce0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 0;
}



undefined4
FUN_00c48cf0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_3 = &DAT_0107b50c;
  *param_4 = param_1;
  return 1;
}



undefined ** FUN_00c48d10(void)

{
  return &PTR_DAT_0107b548;
}



bool FUN_00c48d20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113c348);
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"OpenSSL Legacy Provider"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"version");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"buildinfo");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc1270(iVar1,"3.4.0"), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"status");
  if (iVar1 == 0) {
    return true;
  }
  uVar2 = FUN_0058e2e0();
  iVar1 = func_0x00bc0c00(iVar1,uVar2);
  return iVar1 != 0;
}



undefined ** FUN_00c48dd0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  *param_3 = 0;
  if (param_2 == 1) {
    return &PTR_s_MD4_1_2_840_113549_2_4_0107b5b0;
  }
  if (param_2 != 2) {
    if (param_2 != 4) {
      return (undefined **)0x0;
    }
    return &PTR_s_PBKDF1_0107b810;
  }
  return &PTR_s_CAST5_ECB_0107b600;
}



void FUN_00c48e10(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc3c60(param_1);
  func_0x00bef5c0(uVar1);
  FUN_00bbc580(param_1,"providers\\common\\provider_ctx.c",0x15);
  return;
}



undefined4 FUN_00c48e30(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = func_0x00c79aa0();
  *param_4 = iVar1;
  if (iVar1 != 0) {
    iVar3 = func_0x00bef800(param_1,param_2);
    if (iVar3 != 0) {
      func_0x00c79ad0(*param_4,iVar3);
      func_0x008ff0c0(*param_4,param_1);
      *param_3 = &DAT_0107b840;
      return 1;
    }
  }
  func_0x00bef5c0(iVar3);
  iVar1 = *param_4;
  uVar2 = func_0x00bc3c60(iVar1);
  func_0x00bef5c0(uVar2);
  func_0x00c79a70(iVar1);
  *param_4 = 0;
  return 0;
}



void FUN_00c491e0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\sparse_array.c",0x66);
  return;
}



void FUN_00c49200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  (*(code *)*param_4)(param_1,param_2,param_3);
  return;
}



undefined8 FUN_00c49280(int param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar3 = 0xcbf29ce484222325;
  uVar1 = 0xcbf29ce484222325;
  if (param_2 != 0) {
    do {
      uVar3 = func_0x00e87d70((uint)*(byte *)(uVar2 + param_1) ^ (uint)uVar3,
                              (int)((ulonglong)uVar3 >> 0x20),0x1b3,0x100);
      uVar2 = uVar2 + 1;
      uVar1 = uVar3;
    } while (uVar2 < param_2);
  }
  return uVar1;
}



void FUN_00c492d0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\hashtable\\hashtable.c",0x20b);
  return;
}



void FUN_00c492f0(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\hashtable\\hashtable.c",0x1a8);
  FUN_00bbc580(param_1,"crypto\\hashtable\\hashtable.c",0x1a9);
  return;
}



void FUN_00c49320(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  func_0x00e87f70();
  uVar4 = 0;
  iVar1 = param_2[2];
  if (iVar1 != -1) {
    do {
      iVar3 = 4;
      iVar5 = uVar4 << 6;
      do {
        iVar2 = *(int *)(iVar5 + 8 + *param_2);
        if (iVar2 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x10) + 4))(iVar2);
          FUN_00bbc580(iVar2,"crypto\\hashtable\\hashtable.c",0x27c);
        }
        iVar5 = iVar5 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < iVar1 + 1U);
  }
  FUN_00bbc580(param_2[1],"crypto\\hashtable\\hashtable.c",0x122);
  FUN_00bbc580(param_2,"crypto\\hashtable\\hashtable.c",0x123);
  return;
}



void FUN_00c4a1b0(int param_1)

{
  FUN_00c0f7d0(*(undefined4 *)(param_1 + 0x14));
  return;
}



undefined4
FUN_00c4a1c0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = func_0x00bdd290(0,&param_5,&param_4,&param_1,param_8);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bdbc30(0,&param_2,&param_3,param_1);
  iVar1 = param_7;
  if (param_2 == 0x10) {
    if (*(undefined **)(param_7 + 8) == &DAT_0107bc20) {
      iVar3 = FUN_00c66400();
    }
    else {
      iVar3 = FUN_00c663e0(0,&stack0x00000000,*param_3);
    }
    if (iVar3 == 0) {
      uVar5 = 0x68;
      uVar6 = 0x56;
    }
    else {
      iVar4 = func_0x00bfca60(0,&param_5,param_4);
      if (iVar4 == 0) {
        uVar5 = 0x68;
        uVar6 = 0x5b;
      }
      else {
        iVar2 = func_0x00bd21b0(iVar4,0);
        *(int *)(iVar3 + 0x44) = iVar2;
        if (iVar2 != 0) {
          thunk_FUN_00bfc170(iVar4);
          func_0x00bd5660(iVar1,**(undefined4 **)(iVar1 + 8),iVar3);
          return 1;
        }
        uVar5 = 0x6d;
        uVar6 = 0x61;
      }
    }
  }
  else {
    uVar5 = 0x69;
    uVar6 = 0x4d;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\dh\\dh_ameth.c",uVar6,"dh_pub_decode");
  func_0x00bc5160(5,uVar5,0);
  thunk_FUN_00bfc170(iVar4);
  FUN_00c0f7d0(iVar3);
  return 0;
}



undefined4 FUN_00c4a300(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  iVar3 = *(int *)(param_3 + 0x14);
  piVar1 = (int *)func_0x00bfc1c0();
  if (piVar1 == (int *)0x0) {
    FUN_00bc4f50();
    uVar4 = 0x7c;
  }
  else {
    if (*(undefined **)(param_3 + 8) == &DAT_0107bc20) {
      iVar2 = func_0x00c66510();
    }
    else {
      iVar2 = func_0x00c664f0(iVar3,piVar1 + 2);
    }
    *piVar1 = iVar2;
    if (iVar2 < 1) {
      FUN_00bc4f50();
      uVar4 = 0x81;
    }
    else {
      iVar3 = func_0x00bd21d0(*(undefined4 *)(iVar3 + 0x44),0);
      if (iVar3 == 0) goto LAB_00c4a34f;
      iVar2 = func_0x00bfcae0(iVar3,&stack0x00000000);
      thunk_FUN_00bfc170(iVar3);
      if (0 < iVar2) {
        uVar4 = func_0x00bc2660(**(undefined4 **)(param_3 + 8),0x10,piVar1,0,iVar2);
        iVar3 = func_0x00bdd4c0(param_2,uVar4);
        if (iVar3 != 0) {
          return 1;
        }
        goto LAB_00c4a34f;
      }
      FUN_00bc4f50();
      uVar4 = 0x8f;
    }
  }
  func_0x00bc5050("crypto\\dh\\dh_ameth.c",uVar4,"dh_pub_encode");
  func_0x00bc5160(5,0x8000d,0);
LAB_00c4a34f:
  FUN_00bbc580(0,"crypto\\dh\\dh_ameth.c",0x98);
  FUN_00bfc170(piVar1);
  return 0;
}



undefined4 FUN_00c4a420(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c1a0e0(param_2,0,0);
  if (iVar1 != 0) {
    func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_00c4a450(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  piVar1 = (int *)func_0x00bfc1c0();
  if (piVar1 == (int *)0x0) {
    FUN_00bc4f50();
    uVar4 = 0xbb;
  }
  else {
    if (*(undefined **)(param_3 + 8) == &DAT_0107bc20) {
      iVar2 = func_0x00c66510();
    }
    else {
      iVar2 = func_0x00c664f0(*(undefined4 *)(param_3 + 0x14),piVar1 + 2);
    }
    *piVar1 = iVar2;
    if (0 < iVar2) {
      piVar1[1] = 0x10;
      iVar2 = func_0x00bd21d0(*(undefined4 *)(*(int *)(param_3 + 0x14) + 0x48),0);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\dh\\dh_ameth.c",0xca,"dh_priv_encode");
        uVar4 = 0x6a;
      }
      else {
        iVar3 = func_0x00bfcae0(iVar2,&stack0x00000000);
        func_0x00bfbe40(iVar2);
        if (0 < iVar3) {
          uVar4 = func_0x00bc2660(**(undefined4 **)(param_3 + 8),0,0x10,piVar1,0,iVar3);
          iVar2 = func_0x00c21fd0(param_2,uVar4);
          if (iVar2 == 0) {
            FUN_00bbc6c0(0,iVar3,"crypto\\dh\\dh_ameth.c",0xd9);
            FUN_00bfc170(piVar1);
            return 0;
          }
          return 1;
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\dh\\dh_ameth.c",0xd3,"dh_priv_encode");
        uVar4 = 0x6a;
      }
      goto LAB_00c4a491;
    }
    FUN_00bc4f50();
    uVar4 = 0xc1;
  }
  func_0x00bc5050("crypto\\dh\\dh_ameth.c",uVar4,"dh_priv_encode");
  uVar4 = 0x8000d;
LAB_00c4a491:
  func_0x00bc5160(5,uVar4,0);
  FUN_00bfc170(piVar1);
  return 0;
}



undefined4 FUN_00c4a5c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(undefined **)(param_1 + 8) == &DAT_0107bc20) {
    iVar1 = FUN_00c66400();
  }
  else {
    iVar1 = FUN_00c663e0(0,param_2,param_3);
  }
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0x70) + 1;
  func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar1);
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00c6657e)
// WARNING: Removing unreachable block (ram,0x00c6659b)
// WARNING: Removing unreachable block (ram,0x00c665a1)
// WARNING: Removing unreachable block (ram,0x00c665b2)

undefined4
FUN_00c4a610(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  int in_stack_00000034;
  undefined4 in_stack_00000038;
  
  if (*(undefined **)(param_1 + 8) != &DAT_0107bc20) {
    uVar2 = func_0x00c0b760(*(undefined4 *)(param_1 + 0x14),param_2,&DAT_0108a558);
    return uVar2;
  }
  func_0x00e87f70();
  iVar1 = in_stack_00000034;
  iVar3 = in_stack_00000034 + 8;
  func_0x00c4e240(iVar3,&stack0x0000001c,&stack0x00000020,&stack0x00000024);
  in_stack_00000028 = *(undefined4 *)(iVar1 + 0x14);
  func_0x00c4e270(iVar3,&param_5,&stack0x00000000,&stack0x00000034);
  in_stack_0000002c = 0;
  uVar2 = func_0x00c0b760(&stack0x0000001c,in_stack_00000038,&DAT_0108a61c);
  FUN_00bba400(0);
  return uVar2;
}



void FUN_00c4a640(int param_1)

{
  func_0x00c0f9a0(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c4a650(int param_1)

{
  func_0x00c0f7a0(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c4a660(int param_1)

{
  func_0x00c0f890(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c4a670(int param_1,int param_2)

{
  func_0x00c4e010(*(int *)(param_1 + 0x14) + 8,*(int *)(param_2 + 0x14) + 8,
                  *(undefined **)(param_1 + 8) != &DAT_0107bc20);
  return;
}



undefined4 FUN_00c4a6a0(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    iVar3 = func_0x00c0f880();
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_2 + 0x14);
  puVar2 = *(undefined **)(param_2 + 8);
  iVar4 = func_0x00c4e070(iVar3 + 8,iVar1 + 8);
  if (iVar4 == 0) {
    return 0;
  }
  if (puVar2 != &DAT_0107bc20) {
    *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  }
  *(int *)(iVar3 + 0x70) = *(int *)(iVar3 + 0x70) + 1;
  return 1;
}



undefined4 FUN_00c4a700(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (*(int *)(iVar1 + 0x10) != 0)) {
    return 0;
  }
  return 1;
}



bool FUN_00c4a720(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00c4e010(*(int *)(param_1 + 0x14) + 8,*(int *)(param_2 + 0x14) + 8,
                          *(undefined **)(param_1 + 8) != &DAT_0107bc20);
  if (iVar1 != 0) {
    iVar1 = func_0x00bba0f0(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x44),
                            *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x44));
    return iVar1 == 0;
  }
  return false;
}



void FUN_00c4a780(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4ab90(param_1,*(undefined4 *)(param_2 + 0x14),param_3,0);
  return;
}



void FUN_00c4a7a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4ab90(param_1,*(undefined4 *)(param_2 + 0x14),param_3,1);
  return;
}



void FUN_00c4a7c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4ab90(param_1,*(undefined4 *)(param_2 + 0x14),param_3,2);
  return;
}



undefined4 FUN_00c4a7e0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 9) {
    if ((*param_1 != 0) && (param_1[0xe] == 0)) {
      iVar1 = func_0x00bd5db0(param_1);
      if (iVar1 != 0) {
        uVar2 = func_0x00c40fe0(iVar1,param_4,param_3);
        return uVar2;
      }
    }
  }
  else {
    if (param_2 != 10) {
      return 0xfffffffe;
    }
    iVar1 = func_0x00bd5db0(param_1);
    if (iVar1 != 0) {
      uVar2 = func_0x00c41150(iVar1,param_4,0,1);
      return uVar2;
    }
  }
  return 0;
}



undefined4 FUN_00c4a850(void)

{
  return 0xfffffffe;
}



undefined4 FUN_00c4a860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x44);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dh\\dh_ameth.c",0x1b1,"dh_pkey_public_check");
    func_0x00bc5160(5,0x7d,0);
    return 0;
  }
  uVar2 = func_0x00c96ac0(*(int *)(param_1 + 0x14),iVar1);
  return uVar2;
}



void FUN_00c4a8b0(int param_1)

{
  func_0x00c966d0(*(undefined4 *)(param_1 + 0x14));
  return;
}



undefined4 FUN_00c4a8c0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x70);
}



undefined4 FUN_00c4a8d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  code *in_stack_00000018;
  
  func_0x00e87f70();
  uVar9 = *(undefined4 *)(in_stack_00000010 + 0x14);
  iVar1 = FUN_00bc39e0(uVar9);
  iVar2 = func_0x00baf190(uVar9);
  iVar3 = func_0x00bb6310(uVar9);
  iVar4 = func_0x00bc42d0(uVar9);
  iVar5 = func_0x00bc3bb0(uVar9);
  iVar6 = func_0x00bb62e0(uVar9);
  uVar9 = 0;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar7 = func_0x00c4eb60();
    if (iVar7 != 0) {
      iVar1 = func_0x00c4eba0(iVar7,&DAT_01059c54,iVar1);
      if (iVar1 != 0) {
        iVar1 = func_0x00c4eba0(iVar7,&DAT_01198374,iVar2);
        if (iVar1 != 0) {
          if (iVar3 != 0) {
            iVar1 = func_0x00c4eba0(iVar7,&DAT_01059c58,iVar3);
            if (iVar1 == 0) goto LAB_00c4aa17;
          }
          uVar8 = 4;
          if (0 < iVar4) {
            iVar1 = func_0x00c4ec90(iVar7,"priv_len",iVar4);
            if (iVar1 == 0) goto LAB_00c4aa17;
            uVar8 = 0x84;
          }
          if (iVar5 != 0) {
            iVar1 = func_0x00c4eba0(iVar7,&DAT_01057a18,iVar5);
            if (iVar1 == 0) goto LAB_00c4aa17;
            uVar8 = uVar8 | 2;
          }
          if (iVar6 != 0) {
            iVar1 = func_0x00c4eba0(iVar7,&DAT_01057a10,iVar6);
            if (iVar1 == 0) goto LAB_00c4aa17;
            uVar8 = uVar8 | 1;
          }
          iVar1 = func_0x00c4ed60(iVar7);
          if (iVar1 != 0) {
            uVar9 = (*in_stack_00000018)(in_stack_00000014,uVar8,iVar1);
            func_0x00c44dd0(iVar1);
          }
        }
      }
LAB_00c4aa17:
      func_0x00c4eb30(iVar7);
      return uVar9;
    }
  }
  return 0;
}



void FUN_00c4aa40(undefined4 param_1,undefined4 param_2)

{
  func_0x00c4aad0(param_1,param_2,0x1c);
  return;
}



void FUN_00c4aa60(undefined4 param_1,undefined4 param_2)

{
  func_0x00c4aad0(param_1,param_2,0x398);
  return;
}



int FUN_00c4aa80(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2[5] != 0) {
    iVar2 = func_0x00c19fc0(param_2[5],0x87);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bd5660(param_1,*param_2,iVar2);
  if (iVar1 == 0) {
    FUN_00c0f7d0(iVar2);
  }
  return iVar1;
}



undefined4
FUN_00c4ad10(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar4 = 0;
  iVar3 = 0;
  iVar1 = func_0x00bdd290(0,&param_5,&param_4,&stack0x00000000,param_8);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bdbc30(0,&param_1,&param_2,unaff_retaddr);
  if (param_1 == 0x10) {
    param_3 = param_2[2];
    iVar4 = FUN_00c21990(0,&param_3,*param_2);
    if (iVar4 == 0) {
      uVar5 = 0x68;
      uVar2 = 0x33;
      goto LAB_00c4adf5;
    }
  }
  else {
    if ((param_1 != 5) && (param_1 != -1)) {
      uVar5 = 0x69;
      uVar2 = 0x3d;
      goto LAB_00c4adf5;
    }
    iVar4 = func_0x00c0fcc0();
    if (iVar4 == 0) {
      uVar5 = 0x8000a;
      uVar2 = 0x39;
      goto LAB_00c4adf5;
    }
  }
  iVar3 = func_0x00bfca60(0,&param_5,param_4);
  if (iVar3 == 0) {
    uVar5 = 0x68;
    uVar2 = 0x42;
  }
  else {
    iVar1 = func_0x00bd21b0(iVar3,0);
    *(int *)(iVar4 + 0x40) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar4 + 0x6c) = *(int *)(iVar4 + 0x6c) + 1;
      thunk_FUN_00bfc170(iVar3);
      func_0x00bd5660(param_7,0x74,iVar4);
      return 1;
    }
    uVar5 = 0x6c;
    uVar2 = 0x47;
  }
LAB_00c4adf5:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",uVar2,"dsa_pub_decode");
  func_0x00bc5160(10,uVar5,0);
  thunk_FUN_00bfc170(iVar3);
  FUN_00c0fc00(iVar4);
  return 0;
}



undefined4 FUN_00c4ae60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  iVar2 = *(int *)(param_3 + 0x14);
  piVar3 = (int *)0x0;
  if ((((*(int *)(param_3 + 0x28) == 0) || (*(int *)(iVar2 + 8) == 0)) ||
      (*(int *)(iVar2 + 0xc) == 0)) || (*(int *)(iVar2 + 0x10) == 0)) {
    uVar4 = 0xffffffff;
LAB_00c4af20:
    iVar2 = func_0x00bd21d0(*(undefined4 *)(iVar2 + 0x40),0);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar4 = 0x77;
    }
    else {
      iVar1 = func_0x00bfcae0(iVar2,&stack0x00000000);
      thunk_FUN_00bfc170(iVar2);
      if (0 < iVar1) {
        iVar2 = func_0x00bc2660(0x74);
        if (iVar2 != 0) {
          iVar2 = func_0x00bdd4c0(param_2,iVar2,uVar4,piVar3,0,iVar1);
          if (iVar2 != 0) {
            return 1;
          }
        }
        goto LAB_00c4aed1;
      }
      FUN_00bc4f50();
      uVar4 = 0x7f;
    }
  }
  else {
    piVar3 = (int *)func_0x00bfc1c0();
    if (piVar3 == (int *)0x0) {
      FUN_00bc4f50();
      uVar4 = 0x68;
    }
    else {
      iVar1 = FUN_00c219f0(iVar2,piVar3 + 2);
      *piVar3 = iVar1;
      if (0 < iVar1) {
        uVar4 = 0x10;
        goto LAB_00c4af20;
      }
      FUN_00bc4f50();
      uVar4 = 0x6d;
    }
  }
  func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",uVar4,"dsa_pub_encode");
  func_0x00bc5160(10,0x8000d,0);
LAB_00c4aed1:
  FUN_00bbc580(0,"crypto\\dsa\\dsa_ameth.c",0x8b);
  FUN_00bfc170(piVar3);
  return 0;
}



undefined4 FUN_00c4afb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c1a5c0(param_2,0,0);
  if (iVar1 != 0) {
    func_0x00bd5660(param_1,0x74,iVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_00c4afe0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  piVar3 = (int *)0x0;
  if ((*(int *)(param_3 + 0x14) == 0) || (*(int *)(*(int *)(param_3 + 0x14) + 0x44) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",0xab,"dsa_priv_encode");
    uVar4 = 0x65;
  }
  else {
    piVar3 = (int *)func_0x00bfc1c0();
    if (piVar3 == (int *)0x0) {
      FUN_00bc4f50();
      uVar4 = 0xb2;
    }
    else {
      iVar1 = FUN_00c219f0(*(undefined4 *)(param_3 + 0x14),piVar3 + 2);
      *piVar3 = iVar1;
      if (0 < iVar1) {
        piVar3[1] = 0x10;
        iVar1 = func_0x00bd21d0(*(undefined4 *)(*(int *)(param_3 + 0x14) + 0x44),0);
        if (iVar1 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",0xc1,"dsa_priv_encode");
          uVar4 = 0x6d;
        }
        else {
          iVar2 = func_0x00bfcae0(iVar1,&stack0x00000000);
          func_0x00bfbe40(iVar1);
          if (0 < iVar2) {
            uVar4 = func_0x00bc2660(0x74,0,0x10,piVar3,0,iVar2);
            iVar1 = func_0x00c21fd0(param_2,uVar4);
            if (iVar1 == 0) {
              FUN_00bbc6c0(0,iVar2,"crypto\\dsa\\dsa_ameth.c",0xd0);
              FUN_00bfc170(piVar3);
              return 0;
            }
            return 1;
          }
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",0xca,"dsa_priv_encode");
          uVar4 = 0x6d;
        }
        goto LAB_00c4b14b;
      }
      FUN_00bc4f50();
      uVar4 = 0xb8;
    }
    func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",uVar4,"dsa_priv_encode");
    uVar4 = 0x8000d;
  }
LAB_00c4b14b:
  func_0x00bc5160(10,uVar4,0);
  FUN_00bfc170(piVar3);
  return 0;
}



void FUN_00c4b170(int param_1)

{
  func_0x00c42bb0(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c4b180(int param_1)

{
  func_0x00c0fce0(*(undefined4 *)(param_1 + 0x14));
  return;
}



undefined4 FUN_00c4b190(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (*(int *)(iVar1 + 0xc) != 0)) &&
     (*(int *)(iVar1 + 0x10) != 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00c4b1c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    iVar2 = func_0x00c0fcc0();
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x00c4e070(iVar2 + 8,*(int *)(param_2 + 0x14) + 8);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x14) + 0x6c);
  *piVar1 = *piVar1 + 1;
  return 1;
}



void FUN_00c4b210(int param_1,int param_2)

{
  func_0x00c4e010(*(int *)(param_1 + 0x14) + 8,*(int *)(param_2 + 0x14) + 8,1);
  return;
}



bool FUN_00c4b240(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bba0f0(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x40),
                          *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40));
  return iVar1 == 0;
}



void FUN_00c4b270(int param_1)

{
  FUN_00c0fc00(*(undefined4 *)(param_1 + 0x14));
  return;
}



undefined4 FUN_00c4b280(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00c21990(0,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
  func_0x00bd5660(param_1,0x74,iVar1);
  return 1;
}



void FUN_00c4b2b0(int param_1,undefined4 param_2)

{
  FUN_00c219f0(*(undefined4 *)(param_1 + 0x14),param_2);
  return;
}



undefined4 FUN_00c4b2d0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  piVar1 = (int *)(*(int *)(param_2 + 0x14) + 8);
  if (*piVar1 != 0) {
    uVar3 = func_0x00c0f7a0(*(int *)(param_2 + 0x14));
  }
  iVar2 = func_0x00bbc8e0(param_1,"Public-Key: (%d bit)\n",uVar3);
  if (0 < iVar2) {
    iVar2 = func_0x00c77af0(param_1,"priv:",0,0,param_3);
    if (iVar2 != 0) {
      iVar2 = func_0x00c77af0(param_1,"pub: ",0,0,param_3);
      if (iVar2 != 0) {
        iVar2 = func_0x00c4e2d0(param_1,piVar1,param_3);
        if (iVar2 != 0) {
          uVar4 = 1;
        }
      }
    }
    return uVar4;
  }
  return 0;
}



void FUN_00c4b360(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4b780(param_1,*(undefined4 *)(param_2 + 0x14),param_3,1);
  return;
}



void FUN_00c4b380(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4b780(param_1,*(undefined4 *)(param_2 + 0x14),param_3,2);
  return;
}



undefined4 FUN_00c4b3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00c21950(0,param_2,param_3);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",0x16a,"old_dsa_priv_decode");
    func_0x00bc5160(10,0x8000a,0);
    return 0;
  }
  *(int *)(iVar1 + 0x6c) = *(int *)(iVar1 + 0x6c) + 1;
  func_0x00bd5660(param_1,0x74,iVar1);
  return 1;
}



void FUN_00c4b400(int param_1,undefined4 param_2)

{
  FUN_00c219b0(*(undefined4 *)(param_1 + 0x14),param_2);
  return;
}



undefined4
FUN_00c4b420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  puVar1 = param_5;
  if (param_5 == (undefined4 *)0x0) {
    iVar2 = func_0x00bab050(param_3,&DAT_0113d23c);
    if (0 < iVar2) {
      return 1;
    }
  }
  else {
    uVar4 = *param_5;
    param_5 = (undefined4 *)param_5[2];
    iVar2 = func_0x00c42e80(0,&param_5,uVar4);
    uVar4 = param_3;
    if (iVar2 != 0) {
      uVar5 = 0;
      func_0x00c1fb50(iVar2,&stack0x00000000,&param_1);
      uVar4 = param_3;
      iVar3 = func_0x00bab6e0(param_3,&DAT_0113d23c,1);
      if (iVar3 == 1) {
        iVar3 = func_0x00c77af0(uVar4,"r:   ",unaff_retaddr,0,param_6);
        if (iVar3 != 0) {
          iVar3 = func_0x00c77af0(uVar4,"s:   ",param_1,0,param_6);
          if (iVar3 != 0) {
            uVar5 = 1;
          }
        }
      }
      func_0x00c42a10(iVar2);
      return uVar5;
    }
    iVar2 = func_0x00bab050(param_3,&DAT_0113d23c);
    if (0 < iVar2) {
      uVar4 = func_0x00bdfb70(uVar4,puVar1,param_6);
      return uVar4;
    }
  }
  return 0;
}



undefined4 FUN_00c4b520(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_2 != 3) {
    return 0xfffffffe;
  }
  *param_4 = 0x2a0;
  return 1;
}



undefined4 FUN_00c4b540(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6c);
}



undefined4
FUN_00c4b550(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  func_0x00e87f70();
  uVar8 = *(undefined4 *)(param_3 + 0x14);
  iVar1 = FUN_00bc39e0(uVar8);
  iVar2 = func_0x00baf190(uVar8);
  iVar3 = func_0x00bb6310(uVar8);
  iVar4 = func_0x00bc42d0(uVar8);
  iVar5 = func_0x00bc3bb0(uVar8);
  uVar8 = 0;
  if (((iVar1 != 0) && (iVar3 != 0)) && (iVar2 != 0)) {
    iVar6 = func_0x00c4eb60();
    if (iVar6 != 0) {
      iVar1 = func_0x00c4eba0(iVar6,&DAT_01059c54,iVar1);
      if (iVar1 != 0) {
        iVar1 = func_0x00c4eba0(iVar6,&DAT_01059c58,iVar3);
        if (iVar1 != 0) {
          iVar1 = func_0x00c4eba0(iVar6,&DAT_01198374,iVar2);
          if (iVar1 != 0) {
            uVar7 = 4;
            if (iVar4 != 0) {
              iVar1 = func_0x00c4eba0(iVar6,&DAT_01057a18,iVar4);
              if (iVar1 == 0) goto LAB_00c4b66b;
              uVar7 = 6;
            }
            if (iVar5 != 0) {
              iVar1 = func_0x00c4eba0(iVar6,&DAT_01057a10,iVar5);
              if (iVar1 == 0) goto LAB_00c4b66b;
              uVar7 = uVar7 | 1;
            }
            iVar1 = func_0x00c4ed60(iVar6);
            if (iVar1 != 0) {
              uVar8 = (*param_5)(param_4,uVar7,iVar1);
              func_0x00c44dd0(iVar1);
            }
          }
        }
      }
LAB_00c4b66b:
      func_0x00c4eb30(iVar6);
      return uVar8;
    }
  }
  return 0;
}



undefined4 FUN_00c4b690(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb62e0(param_2);
  iVar2 = func_0x00c0fff0(*(undefined4 *)(param_2 + 4));
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\dsa\\dsa_ameth.c",0x1e6,"dsa_pkey_import_from");
    func_0x00bc5160(10,0x8000a,0);
    return 0;
  }
  iVar3 = func_0x00c0ffd0(iVar2,param_1);
  if (iVar3 != 0) {
    iVar3 = func_0x00c1a790(iVar2,param_1,1);
    if (iVar3 != 0) {
      iVar3 = func_0x00bd5660(uVar1,0x74,iVar2);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  FUN_00c0fc00(iVar2);
  return 0;
}



int FUN_00c4b730(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar2 = func_0x00c1a4b0(*(int *)(param_2 + 0x14),0x87);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bd5660(param_1,0x74,iVar2);
  if (iVar1 == 0) {
    FUN_00c0fc00(iVar2);
  }
  return iVar1;
}



undefined4 FUN_00c4b8b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = param_4;
  param_4 = 0;
  iVar3 = 0;
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  iVar1 = func_0x00c4c5c0(&stack0x00000000,&param_4,uVar2);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_ameth.c",0x4d,"eckey_pub_encode");
    func_0x00bc5160(0x10,0x80010,0);
    return 0;
  }
  iVar1 = func_0x00c21750(uVar2,0);
  if (0 < iVar1) {
    iVar3 = FUN_00bbc4f0(iVar1,"crypto\\ec\\ec_ameth.c",0x53);
    if (iVar3 != 0) {
      param_1 = iVar3;
      iVar1 = func_0x00c21750(uVar2,&param_1);
      if (0 < iVar1) {
        uVar2 = func_0x00bc2660(0x198,unaff_retaddr,param_4,iVar3,iVar1);
        iVar1 = func_0x00bdd4c0(param_3,uVar2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  if (unaff_retaddr == 0x10) {
    FUN_00bfc170(param_4);
  }
  FUN_00bbc580(iVar3,"crypto\\ec\\ec_ameth.c",0x60);
  return 0;
}



undefined4
FUN_00c4b9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  func_0x00e87f70();
  param_3 = 0;
  param_2 = 0;
  param_1 = 0;
  iVar1 = func_0x00bddda0(&param_2,&param_1,param_8);
  if (iVar1 != 0) {
    iVar1 = func_0x00bdd290(0,&param_3,&param_5,&param_4,param_8);
    if (iVar1 != 0) {
      iVar1 = func_0x00c1b760(param_4,param_2,param_1);
      if (iVar1 != 0) {
        iVar2 = func_0x00c21860(&stack0x00000000,&param_3,param_5);
        if (iVar2 != 0) {
          func_0x00bd5660(param_7,0x198,iVar1);
          return 1;
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ec_ameth.c",0x77,"eckey_pub_decode");
        func_0x00bc5160(0x10,0x8e,0);
        FUN_00c12650(iVar1);
      }
    }
  }
  return 0;
}



undefined4 FUN_00c4baa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_0x00bb6310(*(undefined4 *)(param_2 + 0x14));
  iVar2 = func_0x00baf190(*(undefined4 *)(param_1 + 0x14));
  iVar3 = func_0x00baf190(*(undefined4 *)(param_2 + 0x14));
  if (((iVar1 != 0) && (iVar2 != 0)) && (iVar3 != 0)) {
    iVar1 = func_0x00c117a0(iVar1,iVar2,iVar3,0);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == 1) {
      return 0;
    }
  }
  return 0xfffffffe;
}



undefined4 FUN_00c4bb10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00c1b100(param_2,param_3,param_4);
  if (iVar1 != 0) {
    func_0x00bd5660(param_1,0x198,iVar1);
    return 1;
  }
  return 0;
}



undefined4
FUN_00c4bb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,int param_18)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_retaddr;
  
  func_0x00e87f70();
  puVar1 = *(undefined4 **)(param_18 + 0x14);
  param_2 = *puVar1;
  param_3 = puVar1[1];
  param_4 = puVar1[2];
  param_5 = puVar1[3];
  param_6 = puVar1[4];
  param_7 = puVar1[5];
  param_8 = puVar1[6];
  param_9 = puVar1[7];
  param_10 = puVar1[8];
  param_11 = puVar1[9];
  param_12 = puVar1[10];
  param_13 = puVar1[0xb];
  param_14 = *(undefined8 *)(puVar1 + 0xc);
  param_15 = puVar1[0xe];
  param_18 = 0;
  iVar2 = func_0x00c4c5c0(&stack0x00000000,&param_1,&param_2);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_ameth.c",0xab,"eckey_priv_encode");
    func_0x00bc5160(0x10,0x8e,0);
    return 0;
  }
  uVar3 = func_0x00bb6160(&param_2);
  func_0x00c12a40(&param_2,uVar3 | 1);
  iVar2 = FUN_00c21540(&param_2,&param_18);
  if (iVar2 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_ameth.c",0xba,"eckey_priv_encode");
    func_0x00bc5160(0x10,0x80010,0);
  }
  else {
    uVar4 = func_0x00bc2660(0x198,0,unaff_retaddr,param_1,param_18,iVar2);
    iVar5 = func_0x00c21fd0(param_17,uVar4);
    if (iVar5 != 0) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_ameth.c",0xc0,"eckey_priv_encode");
    func_0x00bc5160(0x10,0x8000d,0);
    FUN_00bbc6c0(param_18,iVar2,"crypto\\ec\\ec_ameth.c",0xc1);
  }
  if (unaff_retaddr == 0x10) {
    FUN_00bfc170(param_1);
  }
  return 0;
}



void FUN_00c4bcd0(int param_1)

{
  func_0x00c1fbd0(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c4bce0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)func_0x00bb6310(*(undefined4 *)(param_1 + 0x14));
                    // WARNING: Could not recover jumptable at 0x00c1123d. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0x24))();
  return;
}



int FUN_00c4bd00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb6310(*(undefined4 *)(param_1 + 0x14));
  iVar2 = func_0x00c11230(uVar1);
  if (0x1ff < iVar2) {
    return 0x100;
  }
  if (0x17f < iVar2) {
    return 0xc0;
  }
  if (0xff < iVar2) {
    return 0x80;
  }
  if (0xdf < iVar2) {
    return 0x70;
  }
  iVar3 = iVar2 / 2;
  if (0x9f < iVar2) {
    iVar3 = 0x50;
  }
  return iVar3;
}



bool FUN_00c4bd70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = func_0x00bb6310(*(int *)(param_1 + 0x14));
    return iVar1 == 0;
  }
  return true;
}



undefined4 FUN_00c4bd90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb6310(*(undefined4 *)(param_2 + 0x14));
  iVar2 = func_0x00c10520(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    iVar3 = func_0x00c127b0();
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 == 0) goto LAB_00c4bdd4;
  }
  iVar3 = func_0x00c12a60(iVar3,iVar2);
  if (iVar3 != 0) {
    func_0x00c10570(iVar2);
    return 1;
  }
LAB_00c4bdd4:
  func_0x00c10570(iVar2);
  return 0;
}



uint FUN_00c4be00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bb6310(*(undefined4 *)(param_1 + 0x14));
  iVar2 = func_0x00bb6310(*(undefined4 *)(param_2 + 0x14));
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar1 = func_0x00c10050(iVar1,iVar2,0);
    return (uint)(iVar1 == 0);
  }
  return 0xfffffffe;
}



void FUN_00c4be40(int param_1)

{
  FUN_00c12650(*(undefined4 *)(param_1 + 0x14));
  return;
}



undefined4 FUN_00c4be50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00c20a50(0,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bd5660(param_1,0x198,iVar1);
  return 1;
}



void FUN_00c4be80(int param_1,undefined4 param_2)

{
  FUN_00c21460(*(undefined4 *)(param_1 + 0x14),param_2);
  return;
}



void FUN_00c4bea0(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4c390(param_1,*(undefined4 *)(param_2 + 0x14),param_3,2);
  return;
}



void FUN_00c4bec0(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4c390(param_1,*(undefined4 *)(param_2 + 0x14),param_3,1);
  return;
}



void FUN_00c4bee0(undefined4 param_1,int param_2,undefined4 param_3)

{
  func_0x00c4c390(param_1,*(undefined4 *)(param_2 + 0x14),param_3,0);
  return;
}



undefined4 FUN_00c4bf00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00c20bc0(0,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bd5660(param_1,0x198,iVar1);
  return 1;
}



void FUN_00c4bf30(int param_1,undefined4 param_2)

{
  FUN_00c21540(*(undefined4 *)(param_1 + 0x14),param_2);
  return;
}



undefined4 FUN_00c4bf50(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 3) {
    iVar2 = FUN_00bbba70(param_1);
    if (iVar2 == 0x494) {
      *param_4 = 0x477;
      return 2;
    }
    *param_4 = 0x2a0;
    return 1;
  }
  if (param_2 != 9) {
    if (param_2 != 10) {
      return 0xfffffffe;
    }
    uVar1 = func_0x00c0d910(param_1,4,param_4,0);
    uVar1 = func_0x00c12780(uVar1);
    return uVar1;
  }
  if ((*param_1 != 0) && (param_1[0xe] == 0)) {
    uVar1 = func_0x00c0d910(param_1,param_4,param_3,0);
    uVar1 = func_0x00c12840(uVar1);
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00c4bff0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar1 + 0x14) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_ameth.c",0x1ad,"ec_pkey_check");
    func_0x00bc5160(0x10,0x7d,0);
    return 0;
  }
  if (((iVar1 != 0) && (*(int **)(iVar1 + 0xc) != (int *)0x0)) && (*(int *)(iVar1 + 0x10) != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(int **)(iVar1 + 0xc) + 0xac);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ec_key.c",0x1dd,"EC_KEY_check_key");
      func_0x00bc5160(0x10,0xc0101,0);
      return 0;
    }
                    // WARNING: Could not recover jumptable at 0x00c125b2. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ec_key.c",0x1d8,"EC_KEY_check_key");
  func_0x00bc5160(0x10,0xc0102,0);
  return 0;
}



void FUN_00c4c030(int param_1)

{
  func_0x00c12560(*(undefined4 *)(param_1 + 0x14));
  return;
}



undefined4 FUN_00c4c040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_ameth.c",0x1ca,"ec_pkey_param_check");
    func_0x00bc5160(0x10,0x7c,0);
    return 0;
  }
  uVar2 = func_0x00cd90d0(iVar1,0);
  return uVar2;
}



undefined4 FUN_00c4c090(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38);
}



undefined4
FUN_00c4c0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7,undefined4 param_8,code *param_9,undefined4 param_10,
            undefined4 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  func_0x00e87f70();
  param_3 = 0;
  param_2 = 0;
  param_4 = 0;
  if ((param_7 != 0) && (iVar7 = *(int *)(param_7 + 0x14), iVar7 != 0)) {
    iVar1 = func_0x00bb6310(iVar7);
    if (iVar1 != 0) {
      param_7 = iVar1;
      iVar2 = func_0x00c4eb60();
      if (iVar2 != 0) {
        iVar3 = func_0x00bb5940(param_10);
        if (iVar3 != 0) {
          func_0x00bb59e0(iVar3);
          iVar1 = func_0x00c1adb0(iVar1,iVar2,0,param_10,param_11,iVar3,&param_3);
          if (iVar1 != 0) {
            uVar8 = 4;
            iVar1 = FUN_00baaa40(iVar7);
            param_5 = func_0x00baf190(iVar7);
            if (param_5 != 0) {
              uVar4 = func_0x00bb6140(iVar7);
              iVar5 = func_0x00c4fdc0(param_7,param_5,uVar4,&stack0x00000000,iVar3);
              if (iVar5 == 0) goto LAB_00c4c224;
              iVar5 = func_0x00c4ecb0(iVar2,&DAT_01057a18,0,iVar5);
              if (iVar5 == 0) goto LAB_00c4c224;
              uVar8 = 6;
            }
            if (iVar1 != 0) {
              iVar5 = func_0x00c11230(param_7);
              if (iVar5 < 1) goto LAB_00c4c224;
              iVar1 = func_0x00c4ec30(iVar2,&DAT_01057a10,iVar1,
                                      (int)(iVar5 + 7 + (iVar5 + 7 >> 0x1f & 7U)) >> 3);
              if (iVar1 == 0) goto LAB_00c4c224;
              uVar6 = func_0x00bb62f0(iVar7);
              iVar7 = func_0x00c4ec90(iVar2,"use-cofactor-flag",uVar6 >> 0xc & 1);
              if (iVar7 == 0) goto LAB_00c4c224;
              uVar8 = uVar8 | 0x81;
            }
            param_2 = func_0x00c4ed60(iVar2);
            param_4 = (*param_9)(param_8,uVar8,param_2);
          }
        }
LAB_00c4c224:
        func_0x00c4eb30(iVar2);
        func_0x00c44dd0(param_2);
        FUN_00bbc580(0,"crypto\\ec\\ec_ameth.c",0x25a);
        FUN_00bbc580(param_3,"crypto\\ec\\ec_ameth.c",0x25b);
        func_0x00bb56f0(iVar3);
        func_0x00bb5760(iVar3);
        return param_4;
      }
    }
  }
  return 0;
}



undefined4 FUN_00c4c280(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb62e0(param_2);
  iVar2 = func_0x00c12820(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_ameth.c",0x268,"ec_pkey_import_from");
    func_0x00bc5160(0x10,0x80010,0);
    return 0;
  }
  iVar3 = func_0x00c1ad60(iVar2,param_1);
  if (iVar3 != 0) {
    iVar3 = func_0x00c1b4e0(iVar2,param_1);
    if (iVar3 != 0) {
      iVar3 = func_0x00c1b2f0(iVar2,param_1,1);
      if (iVar3 != 0) {
        iVar3 = func_0x00bd5660(uVar1,0x198,iVar2);
        if (iVar3 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_00c12650(iVar2);
  return 0;
}



int FUN_00c4c330(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2[5] == 0) {
    iVar1 = func_0x00bd7160(param_1,*param_2);
    return iVar1;
  }
  iVar1 = func_0x00c12630(param_2[5]);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = func_0x00bd5660(param_1,0x198,iVar1);
  if (iVar2 == 0) {
    FUN_00c12650(iVar1);
  }
  return iVar2;
}



undefined4
FUN_00c4c6f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x00e87f70();
  iVar3 = param_5;
  iVar1 = func_0x00c4dc70(param_5,&param_1,&param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00bec740(*(undefined4 *)(iVar3 + 0x14),&stack0x00000000);
    if (iVar1 < 1) {
      FUN_00bfc170(param_1);
      return 0;
    }
    uVar2 = func_0x00bc2660(**(undefined4 **)(iVar3 + 8),param_2,param_1,0,iVar1);
    iVar3 = func_0x00bdd4c0(param_4,uVar2);
    if (iVar3 != 0) {
      return 1;
    }
    FUN_00bbc580(0,"crypto\\rsa\\rsa_ameth.c",0x47);
    FUN_00bfc170(param_1);
  }
  return 0;
}



undefined4
FUN_00c4c7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bdd290(0,&param_1,&stack0x00000000,&param_2,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bec700(0,&param_1,unaff_retaddr);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = func_0x00c1c4d0(iVar1,param_2);
  if (iVar2 == 0) goto LAB_00c4c84e;
  func_0x00bb6030(iVar1,0xf000);
  iVar2 = param_4;
  if (**(int **)(param_4 + 8) == 6) {
    uVar3 = 0;
LAB_00c4c827:
    func_0x00bb6550(iVar1,uVar3);
  }
  else if (**(int **)(param_4 + 8) == 0x390) {
    uVar3 = 0x1000;
    goto LAB_00c4c827;
  }
  iVar2 = func_0x00bd5660(iVar2,**(undefined4 **)(iVar2 + 8),iVar1);
  if (iVar2 != 0) {
    return 1;
  }
LAB_00c4c84e:
  FUN_00bb6040(iVar1);
  return 0;
}



undefined4 FUN_00c4c860(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = func_0x00bb7510(*(undefined4 *)(param_1 + 0x14));
  if (((uVar1 & 1) != 0) ||
     (uVar1 = func_0x00bb7510(*(undefined4 *)(param_2 + 0x14)), (uVar1 & 1) != 0)) {
    return 1;
  }
  iVar2 = func_0x00bba0f0(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x14),
                          *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14));
  if ((iVar2 == 0) &&
     (iVar2 = func_0x00bba0f0(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x18),
                              *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18)), iVar2 == 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_00c4c8d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00bec6e0(0,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar1);
  return 1;
}



void FUN_00c4c900(int param_1,undefined4 param_2)

{
  FUN_00bec720(*(undefined4 *)(param_1 + 0x14),param_2);
  return;
}



undefined4
FUN_00c4c920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  iVar3 = param_5;
  param_1 = 0;
  iVar1 = func_0x00c4dc70(param_5,&stack0x00000000,&param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bec720(*(undefined4 *)(iVar3 + 0x14),&param_1);
  if (iVar1 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ameth.c",0x9d,"rsa_priv_encode");
    func_0x00bc5160(4,0x8000d,0);
    FUN_00bfc170(unaff_retaddr);
    return 0;
  }
  uVar2 = func_0x00bc2660(**(undefined4 **)(iVar3 + 8),0,param_2,unaff_retaddr,param_1,iVar1);
  iVar3 = func_0x00c21fd0(param_4,uVar2);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ameth.c",0xa4,"rsa_priv_encode");
    func_0x00bc5160(4,0x8000d,0);
    FUN_00bfc170(unaff_retaddr);
    FUN_00bbc6c0(param_1,iVar1,"crypto\\rsa\\rsa_ameth.c",0xa6);
    return 0;
  }
  return 1;
}



undefined4 FUN_00c4ca30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c1c3e0(param_2,0,0);
  if (iVar1 != 0) {
    func_0x00bd5660(param_1,**(undefined4 **)(param_1 + 8),iVar1);
    return 1;
  }
  return 0;
}



void FUN_00c4ca60(int param_1)

{
  func_0x00bb77a0(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c4ca70(int param_1)

{
  func_0x00bba610(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14));
  return;
}



void FUN_00c4ca90(int param_1)

{
  func_0x00bb6360(*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c4caa0(int param_1)

{
  FUN_00bb6040(*(undefined4 *)(param_1 + 0x14));
  return;
}



undefined4 FUN_00c4cab0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iStack00000008;
  undefined4 uStack00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  uStack00000010 = 0;
  func_0x00e87f70();
  uVar9 = 0;
  iVar7 = *(int *)(in_stack_00000014 + 0x14);
  if (*(int *)(iVar7 + 0x14) != 0) {
    uVar9 = func_0x00bba610(*(int *)(iVar7 + 0x14));
  }
  iVar2 = func_0x00bd1830(*(undefined4 *)(iVar7 + 0x4c));
  uVar1 = uStack00000010;
  iVar3 = func_0x00baac80(uStack00000010,in_stack_00000018,0x80);
  if (iVar3 != 0) {
    puVar8 = &DAT_01040478;
    if (**(int **)(in_stack_00000014 + 8) != 0x390) {
      puVar8 = &DAT_01040474;
    }
    iVar3 = func_0x00bbc8e0(uVar1,&DAT_010627f8,puVar8);
    if (0 < iVar3) {
      if ((in_stack_0000001c == 0) || (*(int *)(iVar7 + 0x1c) == 0)) {
        iVar2 = func_0x00bbc8e0(uVar1,"Public-Key: (%d bit)\n",uVar9);
        if (iVar2 < 1) {
          return 0;
        }
        pcVar4 = "Modulus:";
        pcVar10 = "Exponent:";
      }
      else {
        iVar3 = 2;
        if (0 < iVar2) {
          iVar3 = iVar2 + 2;
        }
        iVar2 = func_0x00bbc8e0(uVar1,"Private-Key: (%d bit, %d primes)\n",uVar9,iVar3);
        if (iVar2 < 1) {
          return 0;
        }
        pcVar4 = "modulus:";
        pcVar10 = "publicExponent:";
      }
      iVar2 = func_0x00c77af0(uVar1,pcVar4,*(undefined4 *)(iVar7 + 0x14),0,in_stack_00000018);
      if ((iVar2 != 0) &&
         (iVar2 = func_0x00c77af0(uVar1,pcVar10,*(undefined4 *)(iVar7 + 0x18),0,in_stack_00000018),
         iVar2 != 0)) {
        if (in_stack_0000001c != 0) {
          iVar2 = func_0x00c77af0(uVar1,"privateExponent:",*(undefined4 *)(iVar7 + 0x1c),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"prime1:",*(undefined4 *)(iVar7 + 0x20),0,in_stack_00000018)
          ;
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"prime2:",*(undefined4 *)(iVar7 + 0x24),0,in_stack_00000018)
          ;
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"exponent1:",*(undefined4 *)(iVar7 + 0x28),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"exponent2:",*(undefined4 *)(iVar7 + 0x2c),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"coefficient:",*(undefined4 *)(iVar7 + 0x30),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iStack00000008 = 0;
          iVar2 = func_0x00bd1830(*(undefined4 *)(iVar7 + 0x4c));
          if (0 < iVar2) {
            iVar2 = 3;
            do {
              uVar9 = 0;
              puVar5 = (undefined4 *)func_0x00bd1a80(*(undefined4 *)(iVar7 + 0x4c),iStack00000008);
              iVar3 = 0;
              do {
                iVar6 = func_0x00baac80(uVar1,in_stack_00000018,0x80);
                if (iVar6 == 0) {
                  return 0;
                }
                if (iVar3 == 0) {
                  iVar6 = func_0x00bbc8e0(uVar1,"prime%d:",iVar2);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = *puVar5;
                }
                else if (iVar3 == 1) {
                  iVar6 = func_0x00bbc8e0(uVar1,"exponent%d:",iVar2);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = puVar5[1];
                }
                else if (iVar3 == 2) {
                  iVar6 = func_0x00bbc8e0(uVar1,"coefficient%d:",iVar2);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = puVar5[2];
                }
                iVar6 = func_0x00c77af0(uVar1,&DAT_0112e1b4,uVar9,0,in_stack_00000018);
                if (iVar6 == 0) {
                  return 0;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
              iVar2 = iVar2 + 1;
              iStack00000008 = iStack00000008 + 1;
              iVar3 = func_0x00bd1830(*(undefined4 *)(iVar7 + 0x4c));
            } while (iStack00000008 < iVar3);
          }
        }
        if ((**(int **)(in_stack_00000014 + 8) != 0x390) ||
           (iVar7 = func_0x00c4dcf0(uVar1,1,*(undefined4 *)(iVar7 + 0x48),in_stack_00000018),
           iVar7 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00c4cac0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iStack00000008;
  undefined4 uStack00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  
  uStack00000010 = 1;
  func_0x00e87f70();
  uVar9 = 0;
  iVar7 = *(int *)(in_stack_00000014 + 0x14);
  if (*(int *)(iVar7 + 0x14) != 0) {
    uVar9 = func_0x00bba610(*(int *)(iVar7 + 0x14));
  }
  iVar2 = func_0x00bd1830(*(undefined4 *)(iVar7 + 0x4c));
  uVar1 = uStack00000010;
  iVar3 = func_0x00baac80(uStack00000010,in_stack_00000018,0x80);
  if (iVar3 != 0) {
    puVar8 = &DAT_01040478;
    if (**(int **)(in_stack_00000014 + 8) != 0x390) {
      puVar8 = &DAT_01040474;
    }
    iVar3 = func_0x00bbc8e0(uVar1,&DAT_010627f8,puVar8);
    if (0 < iVar3) {
      if ((in_stack_0000001c == 0) || (*(int *)(iVar7 + 0x1c) == 0)) {
        iVar2 = func_0x00bbc8e0(uVar1,"Public-Key: (%d bit)\n",uVar9);
        if (iVar2 < 1) {
          return 0;
        }
        pcVar4 = "Modulus:";
        pcVar10 = "Exponent:";
      }
      else {
        iVar3 = 2;
        if (0 < iVar2) {
          iVar3 = iVar2 + 2;
        }
        iVar2 = func_0x00bbc8e0(uVar1,"Private-Key: (%d bit, %d primes)\n",uVar9,iVar3);
        if (iVar2 < 1) {
          return 0;
        }
        pcVar4 = "modulus:";
        pcVar10 = "publicExponent:";
      }
      iVar2 = func_0x00c77af0(uVar1,pcVar4,*(undefined4 *)(iVar7 + 0x14),0,in_stack_00000018);
      if ((iVar2 != 0) &&
         (iVar2 = func_0x00c77af0(uVar1,pcVar10,*(undefined4 *)(iVar7 + 0x18),0,in_stack_00000018),
         iVar2 != 0)) {
        if (in_stack_0000001c != 0) {
          iVar2 = func_0x00c77af0(uVar1,"privateExponent:",*(undefined4 *)(iVar7 + 0x1c),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"prime1:",*(undefined4 *)(iVar7 + 0x20),0,in_stack_00000018)
          ;
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"prime2:",*(undefined4 *)(iVar7 + 0x24),0,in_stack_00000018)
          ;
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"exponent1:",*(undefined4 *)(iVar7 + 0x28),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"exponent2:",*(undefined4 *)(iVar7 + 0x2c),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = func_0x00c77af0(uVar1,"coefficient:",*(undefined4 *)(iVar7 + 0x30),0,
                                  in_stack_00000018);
          if (iVar2 == 0) {
            return 0;
          }
          iStack00000008 = 0;
          iVar2 = func_0x00bd1830(*(undefined4 *)(iVar7 + 0x4c));
          if (0 < iVar2) {
            iVar2 = 3;
            do {
              uVar9 = 0;
              puVar5 = (undefined4 *)func_0x00bd1a80(*(undefined4 *)(iVar7 + 0x4c),iStack00000008);
              iVar3 = 0;
              do {
                iVar6 = func_0x00baac80(uVar1,in_stack_00000018,0x80);
                if (iVar6 == 0) {
                  return 0;
                }
                if (iVar3 == 0) {
                  iVar6 = func_0x00bbc8e0(uVar1,"prime%d:",iVar2);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = *puVar5;
                }
                else if (iVar3 == 1) {
                  iVar6 = func_0x00bbc8e0(uVar1,"exponent%d:",iVar2);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = puVar5[1];
                }
                else if (iVar3 == 2) {
                  iVar6 = func_0x00bbc8e0(uVar1,"coefficient%d:",iVar2);
                  if (iVar6 < 1) {
                    return 0;
                  }
                  uVar9 = puVar5[2];
                }
                iVar6 = func_0x00c77af0(uVar1,&DAT_0112e1b4,uVar9,0,in_stack_00000018);
                if (iVar6 == 0) {
                  return 0;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
              iVar2 = iVar2 + 1;
              iStack00000008 = iStack00000008 + 1;
              iVar3 = func_0x00bd1830(*(undefined4 *)(iVar7 + 0x4c));
            } while (iStack00000008 < iVar3);
          }
        }
        if ((**(int **)(in_stack_00000014 + 8) != 0x390) ||
           (iVar7 = func_0x00c4dcf0(uVar1,1,*(undefined4 *)(iVar7 + 0x48),in_stack_00000018),
           iVar7 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00c4cad0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc27b0(*param_2);
  if (iVar1 == 0x390) {
    uVar2 = func_0x00c1c740(param_2);
    iVar1 = func_0x00c4dcf0(param_1,0,uVar2,param_4);
    func_0x00bec6a0(uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = func_0x00bab050(param_1,&DAT_0113d23c);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_3 == 0) {
    return 1;
  }
  uVar2 = func_0x00bdfb70(param_1,param_3,param_4);
  return uVar2;
}



undefined4
FUN_00c4cb50(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  func_0x00e87f70();
  if (param_4 != 3) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(*(int *)(param_3 + 0x14) + 0x48);
  if (iVar1 != 0) {
    iVar1 = func_0x00c4d310(iVar1,&param_4,&param_1,&stack0x00000000);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ameth.c",0x1af,"rsa_pkey_ctrl");
      func_0x00bc5160(4,0xc0103,0);
      return 0;
    }
    uVar2 = FUN_00bbba70(param_4);
    *param_6 = uVar2;
    return 2;
  }
  *param_6 = 0x2a0;
  return 1;
}



undefined4
FUN_00c4cc00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
            undefined4 param_9,int param_10)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  puVar1 = param_8;
  iVar2 = func_0x00bc27b0(*param_8);
  if (iVar2 != 0x390) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ameth.c",0x27f,"rsa_item_verify");
    func_0x00bc5160(4,0x9b,0);
    return 0xffffffff;
  }
  param_8 = (undefined4 *)0x0;
  param_1 = 0;
  iVar2 = func_0x00bc27b0(*puVar1);
  if (iVar2 != 0x390) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ameth.c",0x227,"ossl_rsa_pss_to_ctx");
    func_0x00bc5160(4,0x9b,0);
    return 0xffffffff;
  }
  uVar3 = func_0x00c1c740(puVar1);
  iVar2 = func_0x00c4d310(uVar3,&stack0x00000000,&param_1,&param_3);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_ameth.c",0x22e,"ossl_rsa_pss_to_ctx");
    uVar5 = 0x95;
LAB_00c4ccf3:
    func_0x00bc5160(4,uVar5,0);
    func_0x00bec6a0(uVar3);
    return 0xffffffff;
  }
  if (param_10 == 0) {
    iVar2 = func_0x00becd30(param_8,&param_2);
    if (iVar2 < 1) goto LAB_00c4cde3;
    iVar2 = FUN_00bbba70(param_2);
    iVar4 = FUN_00bbba70(0);
    if (iVar4 != iVar2) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\rsa\\rsa_ameth.c",0x23b,"ossl_rsa_pss_to_ctx");
      uVar5 = 0x9e;
      goto LAB_00c4ccf3;
    }
  }
  else {
    iVar2 = func_0x00c0cad0(param_5,&param_8,0,0,param_10);
    if (iVar2 == 0) goto LAB_00c4cde3;
  }
  iVar2 = func_0x00bb5ef0(param_8,6);
  if (0 < iVar2) {
    iVar2 = func_0x00bb5ff0(param_8,param_3);
    if (0 < iVar2) {
      iVar2 = func_0x00bb5eb0(param_8,param_1);
      if (0 < iVar2) {
        func_0x00bec6a0(uVar3);
        return 2;
      }
    }
  }
LAB_00c4cde3:
  func_0x00bec6a0(uVar3);
  return 0xffffffff;
}



void FUN_00c4ce00(undefined1 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 int param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int unaff_retaddr;
  uint in_stack_000000d4;
  undefined4 in_stack_000000dc;
  int in_stack_000000e8;
  int in_stack_000000ec;
  
  func_0x00e87f70();
  in_stack_000000d4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_3 = in_stack_000000e8;
  param_2 = in_stack_000000ec;
  iVar2 = FUN_00baaa40(in_stack_000000dc);
  iVar3 = func_0x00bb5b10(iVar2,&param_5);
  if (((iVar3 < 1) || (param_5 == 1)) || (param_5 != 6)) goto LAB_00c4cfb7;
  if (*(int *)(iVar2 + 0x10) != 0) {
    puVar6 = (undefined4 *)func_0x00bbfaa0(&stack0x00000040,"algorithm-id",&stack0x00000054,0x80);
    param_6 = *puVar6;
    param_7 = puVar6[1];
    param_8 = puVar6[2];
    param_9 = puVar6[3];
    param_10 = puVar6[4];
    puVar6 = (undefined4 *)func_0x00bbfa10(&stack0x00000040);
    param_11 = *puVar6;
    param_12 = puVar6[1];
    param_13 = puVar6[2];
    param_14 = puVar6[3];
    param_15 = puVar6[4];
    iVar3 = func_0x00becc60(iVar2,&param_6);
    iVar2 = param_10;
    if ((0 < iVar3) && (param_10 != 0)) {
      if (param_3 != 0) {
        param_1 = &stack0x00000054;
        iVar3 = func_0x00bdbd00(&param_3,&param_1,param_10);
        if (iVar3 == 0) goto LAB_00c4cfb7;
      }
      if (param_2 != 0) {
        param_1 = &stack0x00000054;
        func_0x00bdbd00(&param_2,&param_1,iVar2);
      }
    }
    goto LAB_00c4cfb7;
  }
  uVar4 = func_0x00bb62e0(iVar2);
  iVar3 = func_0x00becd30(iVar2,&param_4);
  if (((iVar3 < 1) || (iVar3 = func_0x00bc4320(param_4), iVar3 < 1)) ||
     ((iVar5 = func_0x00bb5ad0(iVar2,&param_1), iVar5 < 1 ||
      (iVar2 = func_0x00bb5b50(iVar2,&stack0x00000000), iVar2 < 1)))) goto LAB_00c4cfb7;
  iVar2 = iVar3;
  if ((((unaff_retaddr != -1) && (iVar2 = unaff_retaddr, iVar5 = iVar3, unaff_retaddr == -4)) ||
      (iVar5 = -1, iVar2 == -3)) || (iVar2 == -2)) {
    iVar2 = func_0x00bd68d0(uVar4);
    iVar2 = iVar2 + (-2 - iVar3);
    bVar1 = func_0x00bd6000(uVar4);
    if ((bVar1 & 7) == 1) {
      iVar2 = iVar2 + -1;
    }
    if (iVar2 < 0) goto LAB_00c4cfb7;
    if ((-1 < iVar5) && (iVar5 < iVar2)) {
      iVar2 = iVar5;
    }
  }
  iVar2 = func_0x00c4d3c0(param_4,param_1,iVar2);
  if (iVar2 == 0) goto LAB_00c4cfb7;
  uVar4 = func_0x00bec6c0(0);
  iVar3 = func_0x00c23a80(iVar2,uVar4);
  func_0x00bec6a0(iVar2);
  if (iVar3 == 0) goto LAB_00c4cfb7;
  if (param_2 == 0) {
LAB_00c4cfe8:
    uVar4 = func_0x00bc2660(0x390,0x10,iVar3);
    iVar2 = func_0x00bdbc80(param_3,uVar4);
    if (iVar2 != 0) goto LAB_00c4cfb7;
  }
  else {
    iVar2 = func_0x00bfc020(iVar3);
    if (iVar2 != 0) {
      uVar4 = func_0x00bc2660(0x390,0x10,iVar2);
      iVar5 = func_0x00bdbc80(param_2,uVar4);
      if (iVar5 == 0) {
        FUN_00bfc170(iVar3);
        FUN_00bfc170(iVar2);
        goto LAB_00c4cfb7;
      }
      goto LAB_00c4cfe8;
    }
  }
  FUN_00bfc170(iVar3);
LAB_00c4cfb7:
  FUN_008ab370();
  return;
}



undefined4
FUN_00c4d0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  puVar3 = param_4;
  uVar5 = 0;
  param_1 = 0;
  iVar1 = func_0x00bc27b0(*param_4);
  if (iVar1 != 0x390) {
    return 0;
  }
  uVar2 = func_0x00c1c740(puVar3);
  iVar1 = func_0x00c4d310(uVar2,&stack0x00000000,&param_1,&param_4);
  if (iVar1 == 0) goto LAB_00c4d1e5;
  puVar3 = (undefined4 *)func_0x00bc4320(0);
  if ((int)puVar3 < 1) goto LAB_00c4d1e5;
  iVar1 = FUN_00bbba70(0);
  if (((iVar1 == 0x2a0) || (iVar1 == 0x2a1)) || (iVar1 == 0x2a2)) {
    iVar4 = FUN_00bbba70(param_1);
    if ((iVar1 != iVar4) || (param_4 != puVar3)) goto LAB_00c4d1a5;
    uVar5 = 2;
  }
  else {
LAB_00c4d1a5:
    uVar5 = 0;
  }
  iVar4 = (int)puVar3 * 4;
  if (iVar1 == 0x40) {
    iVar4 = 0x40;
  }
  else if (iVar1 == 0x72) {
    iVar4 = 0x44;
  }
  else if (iVar1 == 4) {
    iVar4 = 0x27;
  }
  func_0x00bde470(param_3,iVar1,0x390,iVar4,uVar5);
  uVar5 = 1;
LAB_00c4d1e5:
  func_0x00bec6a0(uVar2);
  return uVar5;
}



void FUN_00c4d200(int param_1)

{
  func_0x00bb96e0(*(undefined4 *)(param_1 + 0x14),0);
  return;
}



undefined4 FUN_00c4d220(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x78);
}



void FUN_00c4d230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00c4d910(param_1,0,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00c4d250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00c4d910(param_1,0x1000,param_2,param_3,param_4,param_5);
  return;
}



void FUN_00c4d280(undefined4 param_1,undefined4 param_2)

{
  func_0x00c4dab0(param_1,param_2,0);
  return;
}



void FUN_00c4d2a0(undefined4 param_1,undefined4 param_2)

{
  func_0x00c4dab0(param_1,param_2,0x1000);
  return;
}



int FUN_00c4d2c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2[5] != 0) {
    iVar2 = func_0x00c1bbb0(param_2[5],0x87);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bd5660(param_1,*param_2,iVar2);
  if (iVar1 == 0) {
    FUN_00bb6040(iVar2);
  }
  return iVar1;
}



void FUN_00c50010(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack00000008;
  uint uStack0000000c;
  int iStack00000010;
  int iStack00000014;
  uint in_stack_0000006c;
  int *in_stack_00000074;
  int in_stack_00000078;
  
  func_0x00e87f70();
  iVar5 = in_stack_00000078;
  piVar1 = in_stack_00000074;
  in_stack_0000006c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar10 = 0;
  iStack00000008 = 0;
  uStack0000000c = 0;
  func_0x00c121a0(in_stack_00000074);
  iVar2 = func_0x00bb6b70(piVar1);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x339,"ecp_nistz256_mult_precompute");
    func_0x00bc5160(0x10,0x71,0);
    FUN_008ab370();
    return;
  }
  iVar3 = func_0x00c51230(iVar2);
  if (iVar3 != 0) {
    FUN_008ab370();
    return;
  }
  if ((piVar1 == (int *)0x0) ||
     (puVar4 = (undefined4 *)FUN_00bbc830(0x14,"crypto\\ec\\ecp_nistz256.c",0x4ba),
     puVar4 == (undefined4 *)0x0)) {
    FUN_008ab370();
    return;
  }
  *puVar4 = piVar1;
  puVar4[1] = 6;
  puVar4[4] = 1;
  iVar3 = 0;
  if ((iVar5 == 0) && (iVar5 = func_0x00bb5940(piVar1[0x1a]), iVar3 = iVar5, iVar5 == 0)) {
LAB_00c50393:
    func_0x00bb56f0(iVar5);
    func_0x00bb5760(iVar3);
  }
  else {
    func_0x00bb59e0(iVar5);
    iVar6 = FUN_00bc39e0(piVar1);
    if (iVar6 == 0) goto LAB_00c50393;
    iVar6 = func_0x00bba540(iVar6);
    if (iVar6 == 0) {
      uStack0000000c = FUN_00bbc4f0(0x25040,"crypto\\ec\\ecp_nistz256.c",0x35c);
      if (uStack0000000c != 0) {
        iVar6 = (uStack0000000c & 0xffffffc0) + 0x40;
        iVar10 = func_0x00c11e70(piVar1);
        iStack00000008 = func_0x00c11e70(piVar1);
        if (((iVar10 != 0) && (iStack00000008 != 0)) &&
           (iVar7 = func_0x00c11860(iStack00000008,iVar2), iVar7 != 0)) {
          iStack00000010 = 0;
          do {
            iVar7 = func_0x00c11860(iVar10,iStack00000008);
            if (iVar7 == 0) {
LAB_00c50343:
              func_0x00bb56f0(iVar5);
              func_0x00bb5760(iVar3);
              goto LAB_00c503a9;
            }
            iStack00000014 = 0;
            iVar7 = iVar6;
            do {
              if ((*(code **)(*piVar1 + 0x6c) == (code *)0x0) ||
                 (iVar8 = (**(code **)(*piVar1 + 0x6c))(piVar1,iVar10,iVar5), iVar8 == 0))
              goto LAB_00c50393;
              iVar8 = func_0x00c2ccd0(&stack0x0000002c,*(undefined4 *)(iVar10 + 8),8);
              if ((iVar8 == 0) ||
                 (iVar8 = func_0x00c2ccd0(&stack0x0000004c,*(undefined4 *)(iVar10 + 0xc),8),
                 iVar8 == 0)) {
                FUN_00bc4f50();
                func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x37b,"ecp_nistz256_mult_precompute");
                func_0x00bc5160(0x10,0x92,0);
                func_0x00bb56f0(iVar5);
                func_0x00bb5760(iVar3);
                goto LAB_00c503a9;
              }
              func_0x004451f0(iVar7,&stack0x0000002c,iStack00000010);
              iVar8 = 0;
              do {
                iVar9 = func_0x00c11900(piVar1,iVar10,iVar10,iVar5);
                if (iVar9 == 0) goto LAB_00c50393;
                iVar8 = iVar8 + 1;
              } while (iVar8 < 7);
              iStack00000014 = iStack00000014 + 1;
              iVar7 = iVar7 + 0x1000;
            } while (iStack00000014 < 0x25);
            iVar7 = func_0x00c11690(piVar1,iStack00000008,iStack00000008,iVar2,iVar5);
            if (iVar7 == 0) goto LAB_00c50343;
            iStack00000010 = iStack00000010 + 1;
          } while (iStack00000010 < 0x40);
          puVar4[2] = iVar6;
          puVar4[3] = uStack0000000c;
          *puVar4 = piVar1;
          puVar4[1] = 7;
          uStack0000000c = 0;
          piVar1[0x18] = 5;
          piVar1[0x19] = (int)puVar4;
          func_0x00bb56f0(iVar5);
          func_0x00bb5760(iVar3);
          goto LAB_00c503e1;
        }
      }
      goto LAB_00c50393;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x355,"ecp_nistz256_mult_precompute");
    func_0x00bc5160(0x10,0x72,0);
    func_0x00bb56f0(iVar5);
    func_0x00bb5760(iVar3);
    iStack00000008 = 0;
  }
LAB_00c503a9:
  piVar1 = puVar4 + 4;
  LOCK();
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    FUN_00bbc580(puVar4[3],"crypto\\ec\\ecp_nistz256.c",0x4de);
    FUN_00bbc580(puVar4,"crypto\\ec\\ecp_nistz256.c",0x4e0);
  }
LAB_00c503e1:
  FUN_00bbc580(uStack0000000c,"crypto\\ec\\ecp_nistz256.c",0x396);
  func_0x00c11a10(iVar10);
  func_0x00c11a10(iStack00000008);
  FUN_008ab370();
  return;
}



void FUN_00c50430(int param_1,void *param_2,int param_3,uint param_4,void *param_5,void *param_6,
                 undefined4 param_7)

{
  size_t _Size;
  undefined4 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  void *pvStack00000020;
  int iStack00000024;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  uint in_stack_00000060;
  uint in_stack_00000064;
  uint in_stack_00000068;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  uint in_stack_00000074;
  uint in_stack_000000f8;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined1 in_stack_00000118;
  uint in_stack_00000134;
  undefined1 auStack_20 [28];
  undefined1 *puVar17;
  
  iVar6 = (int)param_2;
  func_0x00e87f70();
  in_stack_00000134 = DAT_0128fd40 ^ (uint)auStack_20;
  bVar5 = false;
  in_stack_00000118 = 0;
  puVar17 = (undefined1 *)0x0;
  param_2 = (void *)0x0;
  pvStack00000020 = (void *)0x0;
  uVar11 = param_4 + 1;
  in_stack_000000f8 = 0;
  in_stack_000000fc = 0;
  in_stack_00000100 = 0;
  in_stack_00000104 = 0;
  in_stack_00000108 = 0;
  in_stack_0000010c = 0;
  in_stack_00000110 = 0;
  in_stack_00000114 = 0;
  iStack00000024 = param_3;
  if ((uVar11 == 0) || (0x1fffffff < uVar11)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x3c4,"ecp_nistz256_points_mul");
    func_0x00bc5160(0x10,0x80106,0);
    FUN_008ab370();
    return;
  }
  memset(&stack0x00000038,0,0x60);
  func_0x00bb59e0(param_7);
  if (param_3 == 0) {
    bVar4 = true;
    bVar5 = true;
LAB_00c509a6:
    if (param_4 != 0) goto LAB_00c509ae;
  }
  else {
    iVar7 = func_0x00bb6b70(param_1);
    if (iVar7 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x3ce,"ecp_nistz256_points_mul");
      func_0x00bc5160(0x10,0x71,0);
      goto LAB_00c50a57;
    }
    iVar10 = *(int *)(param_1 + 100);
    if (iVar10 == 0) {
LAB_00c505ef:
      iVar10 = func_0x00c51230(iVar7);
      if (iVar10 != 0) {
        puVar17 = &LAB_0041f000;
        goto LAB_00c5060b;
      }
      bVar4 = true;
      bVar5 = true;
    }
    else {
      iVar8 = func_0x00c11e70(param_1);
      if (iVar8 == 0) goto LAB_00c50a57;
      func_0x00445240(&stack0x00000038,*(undefined4 *)(iVar10 + 8),1);
      iVar9 = func_0x00c2cd40(*(undefined4 *)(iVar8 + 8),&stack0x00000038,8);
      if (((iVar9 == 0) ||
          (iVar9 = func_0x00c2cd40(*(undefined4 *)(iVar8 + 0xc),&stack0x00000058,8), iVar9 == 0)) ||
         (iVar9 = func_0x00c2cd40(*(undefined4 *)(iVar8 + 0x10),&DAT_010819e8,8), iVar9 == 0)) {
        func_0x00c11a10(iVar8);
        goto LAB_00c50a57;
      }
      *(undefined4 *)(iVar8 + 0x14) = 1;
      iVar9 = func_0x00c117a0(param_1,iVar7,iVar8,param_7);
      if (iVar9 == 0) {
        puVar17 = *(undefined1 **)(iVar10 + 8);
      }
      func_0x00c11a10(iVar8);
      if (puVar17 == (undefined1 *)0x0) goto LAB_00c505ef;
LAB_00c5060b:
      iVar10 = func_0x00bba610(param_3);
      if ((0x100 < iVar10) || (iVar10 = func_0x00bba4c0(param_3), iVar10 != 0)) {
        iStack00000024 = func_0x00bb57f0(param_7);
        if (iStack00000024 == 0) goto LAB_00c50a57;
        iVar10 = func_0x00be9410(iStack00000024,param_3,*(undefined4 *)(param_1 + 8),param_7);
        if (iVar10 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x3fe,"ecp_nistz256_points_mul");
          func_0x00bc5160(0x10,0x80003,0);
          goto LAB_00c50a57;
        }
      }
      uVar14 = 0;
      iVar10 = func_0x00bb6b70(iStack00000024);
      if (iVar10 << 2 < 1) goto LAB_00c50709;
      do {
        iVar10 = FUN_00bbba70(iStack00000024);
        uVar12 = uVar14;
        if ((int)uVar14 < 0) {
          uVar12 = uVar14 + 3;
        }
        uVar1 = *(undefined4 *)(iVar10 + ((int)uVar12 >> 2) * 4);
        *(char *)((int)&stack0x000000f8 + uVar14 + 1) = (char)((uint)uVar1 >> 8);
        *(char *)((int)&stack0x000000f8 + uVar14) = (char)uVar1;
        *(char *)((int)&stack0x000000f8 + uVar14 + 2) = (char)((uint)uVar1 >> 0x10);
        *(char *)((int)&stack0x000000f8 + uVar14 + 3) = (char)((uint)uVar1 >> 0x18);
        uVar14 = uVar14 + 4;
        iVar10 = func_0x00bb6b70(iStack00000024);
      } while ((int)uVar14 < iVar10 * 4);
      for (; (int)uVar14 < 0x21; uVar14 = uVar14 + 1) {
LAB_00c50709:
        if (0x20 < uVar14) {
          func_0x008ab9e3();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined1 *)((int)&stack0x000000f8 + uVar14) = 0;
      }
      uVar14 = (in_stack_000000f8 & 0x7f) * 2;
      uVar12 = (uVar14 >> 7) - 1;
      uVar15 = ~uVar12;
      uVar13 = (in_stack_000000f8 & 0x7f) * -2 + 0xff & uVar15;
      func_0x00445240(&stack0x00000038,puVar17,
                      ((uVar13 | uVar12 & uVar14) >> 1) + (uVar13 & 1) & 0x7fffffff);
      func_0x004443a0(&stack0x00000078,&stack0x00000058);
      func_0x00c511a0(&stack0x00000058,&stack0x00000078,uVar15 & 1);
      uVar14 = in_stack_00000038 | in_stack_0000003c | in_stack_00000040 | in_stack_00000044 |
               in_stack_00000048 | in_stack_0000004c | in_stack_00000050 | in_stack_00000054 |
               in_stack_00000058 | in_stack_0000005c | in_stack_00000060 | in_stack_00000064 |
               in_stack_00000068 | in_stack_0000006c | in_stack_00000070 | in_stack_00000074;
      uVar14 = 0xffffffff - ((int)~(-uVar14 | uVar14) >> 0x1f);
      iVar10 = 0;
      do {
        uVar12 = *(uint *)(&UNK_010819ec + iVar10);
        uVar13 = *(uint *)(&UNK_010819f0 + iVar10);
        uVar15 = *(uint *)(&UNK_010819f4 + iVar10);
        *(uint *)(&stack0x00000078 + iVar10) = *(uint *)(&DAT_010819e8 + iVar10) & uVar14;
        *(uint *)(&stack0x0000007c + iVar10) = uVar12 & uVar14;
        *(uint *)(&stack0x00000080 + iVar10) = uVar13 & uVar14;
        *(uint *)(&stack0x00000084 + iVar10) = uVar15 & uVar14;
        iVar10 = iVar10 + 0x10;
      } while (iVar10 < 0x20);
      uVar14 = 6;
      param_3 = 0x24;
      do {
        puVar17 = puVar17 + 0x1000;
        uVar12 = uVar14 >> 3;
        bVar3 = (byte)uVar14;
        uVar14 = uVar14 + 7;
        uVar13 = (ushort)(CONCAT11(*(undefined1 *)((int)&stack0x000000f8 + uVar12 + 1),
                                   *(undefined1 *)((int)&stack0x000000f8 + uVar12)) >> (bVar3 & 7))
                 & 0xff;
        uVar12 = (uVar13 >> 7) - 1;
        uVar15 = ~uVar12;
        uVar12 = 0xff - uVar13 & uVar15 | uVar12 & uVar13;
        func_0x00445240(&stack0x00000098,puVar17,(uVar12 >> 1) + (uVar12 & 1) & 0x7fffffff);
        func_0x004443a0(&stack0x000000d8,&stack0x000000b8);
        func_0x00c511a0(&stack0x000000b8,&stack0x000000d8,uVar15 & 1);
        func_0x00445f00(&stack0x00000038,&stack0x00000038,&stack0x00000098);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      bVar4 = false;
    }
    if (!bVar4) goto LAB_00c509a6;
    _Size = param_4 * 4;
    param_2 = (void *)FUN_00bbc4f0(_Size + 4,"crypto\\ec\\ecp_nistz256.c",0x458);
    if ((param_2 == (void *)0x0) ||
       (pvStack00000020 = (void *)FUN_00bbc4f0(_Size + 4,"crypto\\ec\\ecp_nistz256.c",0x45c),
       pvStack00000020 == (void *)0x0)) goto LAB_00c50a57;
    memcpy(param_2,param_6,_Size);
    *(int *)(_Size + (int)param_2) = iStack00000024;
    memcpy(pvStack00000020,param_5,_Size);
    *(int *)(_Size + (int)pvStack00000020) = iVar7;
    param_4 = uVar11;
    param_5 = pvStack00000020;
    param_6 = param_2;
    bVar4 = bVar5;
LAB_00c509ae:
    puVar16 = (undefined4 *)&stack0x00000098;
    if (bVar4) {
      puVar16 = &stack0x00000038;
    }
    iVar7 = func_0x00c51600(param_1,puVar16,param_6,param_5,param_4,param_7);
    if (iVar7 == 0) goto LAB_00c50a57;
    if (!bVar5) {
      func_0x00445760(&stack0x00000038,&stack0x00000038,puVar16);
    }
  }
  iVar7 = func_0x00c2cd40(*(undefined4 *)(iVar6 + 8),&stack0x00000038,8);
  if (((iVar7 != 0) &&
      (iVar7 = func_0x00c2cd40(*(undefined4 *)(iVar6 + 0xc),&stack0x00000058,8), iVar7 != 0)) &&
     (iVar7 = func_0x00c2cd40(*(undefined4 *)(iVar6 + 0x10),&stack0x00000078,8), iVar7 != 0)) {
    uVar11 = func_0x00c51e00(*(undefined4 *)(iVar6 + 0x10));
    *(uint *)(iVar6 + 0x14) = uVar11 & 1;
  }
LAB_00c50a57:
  func_0x00bb56f0(param_7);
  FUN_00bbc580(pvStack00000020,"crypto\\ec\\ecp_nistz256.c",0x482);
  FUN_00bbc580(param_2,"crypto\\ec\\ecp_nistz256.c",0x483);
  FUN_008ab370();
  return;
}



void FUN_00c50af0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_stack_00000120;
  undefined4 in_stack_00000128;
  int in_stack_0000012c;
  int in_stack_00000130;
  int in_stack_00000134;
  undefined4 uVar5;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000134;
  iVar1 = in_stack_00000130;
  iVar4 = in_stack_0000012c;
  in_stack_00000120 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00c11c10(in_stack_00000128,in_stack_0000012c);
  if (iVar3 == 0) {
    iVar3 = func_0x00c2ccd0(&stack0x00000060,*(undefined4 *)(iVar4 + 8),8);
    if (iVar3 != 0) {
      iVar3 = func_0x00c2ccd0(&stack0x000000c0,*(undefined4 *)(iVar4 + 0xc),8);
      if (iVar3 != 0) {
        iVar4 = func_0x00c2ccd0(&stack0x00000040,*(undefined4 *)(iVar4 + 0x10),8);
        if (iVar4 != 0) {
          func_0x00c51300(&stack0x00000000,&stack0x00000040);
          func_0x00444480(&stack0x00000020,&stack0x00000000);
          func_0x00444450(&stack0x00000080,&stack0x00000020,&stack0x00000060);
          if (iVar1 == 0) {
LAB_00c50c14:
            if (iVar2 != 0) {
              func_0x00444450(&stack0x00000000,&stack0x00000000,&stack0x00000020);
              func_0x00444450(&stack0x000000e0,&stack0x00000000,&stack0x000000c0);
              func_0x00444420(&stack0x00000100,&stack0x000000e0);
              func_0x00c2cd40(iVar2,&stack0x00000100,8);
              FUN_008ab370();
              return;
            }
            FUN_008ab370();
            return;
          }
          func_0x00444420(&stack0x000000a0,&stack0x00000080);
          iVar4 = func_0x00c2cd40(iVar1,&stack0x000000a0,8);
          if (iVar4 != 0) goto LAB_00c50c14;
          goto LAB_00c50ccf;
        }
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x49a,"ecp_nistz256_get_affine");
    uVar5 = 0x92;
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x493,"ecp_nistz256_get_affine");
    uVar5 = 0x6a;
  }
  func_0x00bc5160(0x10,uVar5,0);
LAB_00c50ccf:
  FUN_008ab370();
  return;
}



undefined4 FUN_00c50cf0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bb6b70(param_1);
  if ((iVar1 != 0) && (iVar1 = func_0x00c51230(iVar1), iVar1 != 0)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x60) == 5) && (*(int *)(param_1 + 100) != 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_00c50d30(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  int iStack00000018;
  int iStack0000001c;
  undefined4 uStack00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar3 = 0;
  iVar4 = 0;
  uStack00000020 = 0;
  iStack00000008 = 0;
  iStack00000014 = 0;
  iStack00000018 = 0;
  iStack00000010 = 0;
  iStack0000001c = 0;
  iVar5 = 0;
  iStack0000000c = 0;
  iStack00000004 = 0;
  iVar1 = func_0x00bb5940(*(undefined4 *)(in_stack_00000028 + 0x68));
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",0x5b6,"ecp_nistz256group_full_init");
    func_0x00bc5160(0x10,0xc0100,0);
    return 0;
  }
  iVar2 = func_0x00c11610(in_stack_00000028,in_stack_0000002c,0x14);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    uVar6 = 0x5bb;
    goto LAB_00c50dd2;
  }
  iStack00000008 = func_0x00bb9f50(in_stack_0000002c + 0x14,0x20,0);
  if (iStack00000008 == 0) {
LAB_00c51094:
    FUN_00bc4f50();
    uVar6 = 0x5c3;
LAB_00c510a3:
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",uVar6,"ecp_nistz256group_full_init");
    uVar6 = 0x80003;
  }
  else {
    iStack00000014 = func_0x00bb9f50(in_stack_0000002c + 0x34,0x20,0);
    if (iStack00000014 == 0) goto LAB_00c51094;
    iStack00000018 = func_0x00bb9f50(in_stack_0000002c + 0x54,0x20,0);
    if (iStack00000018 == 0) goto LAB_00c51094;
    iVar3 = func_0x00bf9900();
    if (iVar3 == 0) goto LAB_00c510be;
    iVar2 = func_0x00bfa280(iVar3,iStack00000008,0x100,in_stack_0000002c + 0xd4,0x20,1,0);
    if (iVar2 == 0) goto LAB_00c510be;
    iVar5 = func_0x00bba5e0();
    if (iVar5 == 0) {
      FUN_00bc4f50();
      uVar6 = 0x5d5;
      goto LAB_00c510a3;
    }
    uVar6 = func_0x00bbaaa0(iVar3,iVar1);
    iVar2 = func_0x00bba950(iVar5,uVar6);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar6 = 0x5d9;
      goto LAB_00c510a3;
    }
    *(int *)(in_stack_00000028 + 0x50) = iVar3;
    iVar3 = 0;
    *(int *)(in_stack_00000028 + 0x54) = iVar5;
    iVar5 = 0;
    iVar2 = FUN_00c531d0(in_stack_00000028,iStack00000008,iStack00000014,iStack00000018,iVar1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar6 = 0x5e2;
    }
    else {
      iStack00000004 = func_0x00c11e70(in_stack_00000028);
      if (iStack00000004 != 0) {
        iStack00000010 = func_0x00bb9f50(in_stack_0000002c + 0x74,0x20,0);
        if (iStack00000010 != 0) {
          iStack0000001c = func_0x00bb9f50(in_stack_0000002c + 0x94,0x20,0);
          if (iStack0000001c != 0) {
            iVar2 = func_0x00c11fc0(in_stack_00000028,iStack00000004,iStack00000010,iStack0000001c,
                                    iVar1);
            if (iVar2 != 0) {
              iStack0000000c = func_0x00bb9f50(in_stack_0000002c + 0xb4,0x20,0);
              if (iStack0000000c != 0) {
                iVar2 = func_0x00bba8c0(iStack00000010,1);
                if (iVar2 != 0) {
                  iVar2 = func_0x00c11e70(in_stack_00000028);
                  *(int *)(in_stack_00000028 + 4) = iVar2;
                  if (iVar2 != 0) {
                    iVar2 = func_0x00c11860(iVar2,iStack00000004);
                    if (iVar2 != 0) {
                      iVar2 = func_0x00bba2d0(*(undefined4 *)(in_stack_00000028 + 8),iStack0000000c)
                      ;
                      if (iVar2 != 0) {
                        iVar2 = func_0x00bba8c0(*(undefined4 *)(in_stack_00000028 + 0xc),1);
                        if (iVar2 != 0) {
                          iVar4 = func_0x00bf9900();
                          if (iVar4 != 0) {
                            iVar2 = func_0x00bfa280(iVar4,iStack0000000c,0x100,
                                                    in_stack_0000002c + 0xf4,0x20,0xee00bc4f,
                                                    0xccd1c8aa);
                            if (iVar2 != 0) {
                              *(int *)(in_stack_00000028 + 0x5c) = iVar4;
                              iVar4 = 0;
                              uStack00000020 = 1;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_00c510be;
                  }
                  FUN_00bc4f50();
                  uVar6 = 0x5ff;
                  goto LAB_00c50dd2;
                }
              }
              FUN_00bc4f50();
              uVar6 = 0x5f6;
              goto LAB_00c510a3;
            }
            FUN_00bc4f50();
            uVar6 = 0x5f1;
            goto LAB_00c50dd2;
          }
        }
        FUN_00bc4f50();
        uVar6 = 0x5ed;
        goto LAB_00c510a3;
      }
      FUN_00bc4f50();
      uVar6 = 0x5e7;
    }
LAB_00c50dd2:
    iVar5 = 0;
    iVar3 = 0;
    func_0x00bc5050("crypto\\ec\\ecp_nistz256.c",uVar6,"ecp_nistz256group_full_init");
    uVar6 = 0x80010;
  }
  func_0x00bc5160(0x10,uVar6,0);
LAB_00c510be:
  func_0x00c11a10(iStack00000004);
  func_0x00bb5760(iVar1);
  func_0x00bf98b0(iVar3);
  func_0x00bf98b0(iVar4);
  FUN_00bba400(iStack00000008);
  FUN_00bba400(iVar5);
  FUN_00bba400(iStack00000014);
  FUN_00bba400(iStack00000018);
  FUN_00bba400(iStack0000000c);
  FUN_00bba400(iStack00000010);
  FUN_00bba400(iStack0000001c);
  return uStack00000020;
}



undefined * FUN_00c51130(void)

{
  return &DAT_01081a48;
}



undefined4 FUN_00c530b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bba5e0();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x00bba5e0();
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  iVar2 = func_0x00bba5e0();
  *(int *)(param_1 + 0x48) = iVar2;
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x44) != 0)) && (iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return 1;
  }
  FUN_00bba400(*(int *)(param_1 + 0x28));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x44));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x48));
  return 0;
}



void FUN_00c53110(int param_1)

{
  FUN_00bba400(*(undefined4 *)(param_1 + 0x28));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x44));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x48));
  return;
}



void FUN_00c53140(int param_1)

{
  FUN_00bba080(*(undefined4 *)(param_1 + 0x28));
  FUN_00bba080(*(undefined4 *)(param_1 + 0x44));
  FUN_00bba080(*(undefined4 *)(param_1 + 0x48));
  return;
}



undefined4 FUN_00c53170(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x28));
  if (iVar1 != 0) {
    iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_2 + 0x44));
    if (iVar1 != 0) {
      iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x48));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        return 1;
      }
    }
  }
  return 0;
}



undefined4
FUN_00c531d0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x00e87f70();
  param_1 = 0;
  iVar1 = func_0x00bba610(param_4);
  if (2 < iVar1) {
    iVar1 = func_0x00bba4d0(param_4);
    if (iVar1 != 0) {
      iVar1 = 0;
      if (param_7 == 0) {
        param_7 = func_0x00bb5940(param_3[0x1a]);
        iVar1 = param_7;
        if (param_7 == 0) {
          return 0;
        }
      }
      func_0x00bb59e0(param_7);
      iVar2 = func_0x00bb57f0(param_7);
      if (iVar2 != 0) {
        iVar3 = func_0x00bba2d0(param_3[10],param_4);
        if (iVar3 != 0) {
          func_0x00bba890(param_3[10],0);
          iVar3 = func_0x00be9410(iVar2,param_5,param_4,param_7);
          if (iVar3 != 0) {
            if (*(code **)(*param_3 + 0x90) == (code *)0x0) {
              iVar3 = func_0x00bba2d0(param_3[0x11],iVar2);
            }
            else {
              iVar3 = (**(code **)(*param_3 + 0x90))(param_3,param_3[0x11],iVar2,param_7);
            }
            if (iVar3 != 0) {
              iVar3 = func_0x00be9410(param_3[0x12],param_6,param_4,param_7);
              if (iVar3 != 0) {
                if (*(code **)(*param_3 + 0x90) != (code *)0x0) {
                  iVar3 = (**(code **)(*param_3 + 0x90))
                                    (param_3,param_3[0x12],param_3[0x12],param_7);
                  if (iVar3 == 0) goto LAB_00c5330f;
                }
                iVar3 = func_0x00be9830(iVar2,3);
                if (iVar3 != 0) {
                  iVar2 = func_0x00bba0f0(iVar2,param_3[10]);
                  param_1 = 1;
                  param_3[0x13] = (uint)(iVar2 == 0);
                }
              }
            }
          }
        }
      }
LAB_00c5330f:
      func_0x00bb56f0(param_7);
      func_0x00bb5760(iVar1);
      return param_1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x97,"ossl_ec_GFp_simple_group_set_curve");
  func_0x00bc5160(0x10,0x67,0);
  return 0;
}



undefined4
FUN_00c53360(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  
  func_0x00e87f70();
  param_1 = 0;
  iVar2 = 0;
  if ((param_4 != 0) && (iVar1 = func_0x00bba2d0(param_4,param_3[10]), iVar1 == 0)) {
    return 0;
  }
  if ((param_5 != 0) || (param_6 != 0)) {
    if (*(int *)(*param_3 + 0x94) == 0) {
      if ((param_5 != 0) && (iVar1 = func_0x00bba2d0(param_5,param_3[0x11]), iVar1 == 0))
      goto LAB_00c53445;
      if (param_6 != 0) {
        iVar1 = func_0x00bba2d0(param_6,param_3[0x12]);
        goto LAB_00c53439;
      }
    }
    else {
      if ((param_7 == 0) &&
         (param_7 = func_0x00bb5940(param_3[0x1a]), iVar2 = param_7, param_7 == 0)) {
        return 0;
      }
      if ((param_5 != 0) &&
         (iVar1 = (**(code **)(*param_3 + 0x94))(param_3,param_5,param_3[0x11],param_7), iVar1 == 0)
         ) goto LAB_00c53445;
      if (param_6 != 0) {
        iVar1 = (**(code **)(*param_3 + 0x94))(param_3,param_6,param_3[0x12],param_7);
LAB_00c53439:
        if (iVar1 == 0) goto LAB_00c53445;
      }
    }
  }
  param_1 = 1;
LAB_00c53445:
  func_0x00bb5760(iVar2);
  return param_1;
}



void FUN_00c53460(int param_1)

{
  func_0x00bba610(*(undefined4 *)(param_1 + 0x28));
  return;
}



undefined4 FUN_00c53470(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iStack00000004;
  undefined4 uStack00000008;
  int *in_stack_00000010;
  int in_stack_00000014;
  
  func_0x00e87f70();
  uStack00000008 = 0;
  iStack00000004 = 0;
  iVar6 = in_stack_00000010[10];
  if ((in_stack_00000014 == 0) &&
     (in_stack_00000014 = func_0x00bb5940(in_stack_00000010[0x1a]),
     iStack00000004 = in_stack_00000014, in_stack_00000014 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x105,"ossl_ec_GFp_simple_group_check_discriminant");
    func_0x00bc5160(0x10,0x80003,0);
    goto LAB_00c5363f;
  }
  func_0x00bb59e0(in_stack_00000014);
  uVar1 = func_0x00bb57f0(in_stack_00000014);
  uVar2 = func_0x00bb57f0(in_stack_00000014);
  uVar3 = func_0x00bb57f0(in_stack_00000014);
  uVar4 = func_0x00bb57f0(in_stack_00000014);
  iVar5 = func_0x00bb57f0(in_stack_00000014);
  if (iVar5 == 0) goto LAB_00c5363f;
  if (*(code **)(*in_stack_00000010 + 0x94) == (code *)0x0) {
    iVar5 = func_0x00bba2d0(uVar1,in_stack_00000010[0x11]);
    if (iVar5 == 0) goto LAB_00c5363f;
    iVar5 = func_0x00bba2d0(uVar2,in_stack_00000010[0x12]);
  }
  else {
    iVar5 = (**(code **)(*in_stack_00000010 + 0x94))
                      (in_stack_00000010,uVar1,in_stack_00000010[0x11],in_stack_00000014);
    if (iVar5 == 0) goto LAB_00c5363f;
    iVar5 = (**(code **)(*in_stack_00000010 + 0x94))
                      (in_stack_00000010,uVar2,in_stack_00000010[0x12],in_stack_00000014);
  }
  if (iVar5 == 0) goto LAB_00c5363f;
  iVar5 = func_0x00bba540(uVar1);
  if (iVar5 == 0) {
    iVar5 = func_0x00bba540(uVar2);
    if (iVar5 == 0) {
      iVar5 = func_0x00be9330(uVar3,uVar1,iVar6,in_stack_00000014);
      if ((((iVar5 == 0) ||
           (iVar5 = func_0x00be92b0(uVar4,uVar3,uVar1,iVar6,in_stack_00000014), iVar5 == 0)) ||
          (iVar5 = func_0x00be9c10(uVar3,uVar4,2), iVar5 == 0)) ||
         (((iVar5 = func_0x00be9330(uVar4,uVar2,iVar6,in_stack_00000014), iVar5 == 0 ||
           (iVar5 = func_0x00be9ad0(uVar4,0x1b), iVar5 == 0)) ||
          (iVar6 = func_0x00be9140(uVar1,uVar3,uVar4,iVar6,in_stack_00000014), uVar2 = uVar1,
          iVar6 == 0)))) goto LAB_00c5363f;
      goto LAB_00c53629;
    }
  }
  else {
LAB_00c53629:
    iVar6 = func_0x00bba540(uVar2);
    if (iVar6 != 0) goto LAB_00c5363f;
  }
  uStack00000008 = 1;
LAB_00c5363f:
  func_0x00bb56f0(in_stack_00000014);
  func_0x00bb5760(iStack00000004);
  return uStack00000008;
}



undefined4 FUN_00c53660(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bba5e0();
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x00bba5e0();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  iVar2 = func_0x00bba5e0();
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) && (iVar2 != 0)) {
    return 1;
  }
  FUN_00bba400(*(int *)(param_1 + 8));
  FUN_00bba400(*(undefined4 *)(param_1 + 0xc));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x10));
  return 0;
}



void FUN_00c536c0(int param_1)

{
  FUN_00bba400(*(undefined4 *)(param_1 + 8));
  FUN_00bba400(*(undefined4 *)(param_1 + 0xc));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x10));
  return;
}



void FUN_00c536f0(int param_1)

{
  FUN_00bba080(*(undefined4 *)(param_1 + 8));
  FUN_00bba080(*(undefined4 *)(param_1 + 0xc));
  FUN_00bba080(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



undefined4 FUN_00c53720(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  if (iVar1 != 0) {
    iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
    if (iVar1 != 0) {
      iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00c53780(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x14) = 0;
  func_0x00bbaaf0(*(undefined4 *)(param_2 + 0x10));
  return 1;
}



undefined4
FUN_00c537a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = func_0x00bbaaa0(param_5);
    uVar1 = func_0x00c11f30(param_1,param_2,param_3,param_4,uVar1);
    return uVar1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x1ed,"ossl_ec_GFp_simple_point_set_affine_coordinates");
  func_0x00bc5160(0x10,0xc0102,0);
  return 0;
}



undefined4 FUN_00c53800(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iStack0000000c;
  undefined4 uStack00000010;
  int *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  func_0x00e87f70();
  iStack0000000c = 0;
  uStack00000010 = 0;
  iVar2 = func_0x00c11c10(in_stack_00000018,in_stack_0000001c);
  if (iVar2 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x200,"ossl_ec_GFp_simple_point_get_affine_coordinates"
                   );
    func_0x00bc5160(0x10,0x6a,0);
    return 0;
  }
  if ((in_stack_00000028 == 0) &&
     (in_stack_00000028 = func_0x00bb5940(in_stack_00000018[0x1a]),
     iStack0000000c = in_stack_00000028, in_stack_00000028 == 0)) {
    return 0;
  }
  func_0x00bb59e0(in_stack_00000028);
  uVar3 = func_0x00bb57f0(in_stack_00000028);
  uVar4 = func_0x00bb57f0(in_stack_00000028);
  uVar5 = func_0x00bb57f0(in_stack_00000028);
  iVar2 = func_0x00bb57f0(in_stack_00000028);
  if (iVar2 == 0) goto LAB_00c53a72;
  uVar7 = *(undefined4 *)(in_stack_0000001c + 0x10);
  if ((*(code **)(*in_stack_00000018 + 0x94) != (code *)0x0) &&
     (iVar6 = (**(code **)(*in_stack_00000018 + 0x94))
                        (in_stack_00000018,uVar3,*(undefined4 *)(in_stack_0000001c + 0x10),
                         in_stack_00000028), uVar7 = uVar3, iVar6 == 0)) goto LAB_00c53a72;
  iVar6 = func_0x00bba4f0(uVar7);
  if (iVar6 == 0) {
    iVar6 = (**(code **)(*in_stack_00000018 + 0x8c))
                      (in_stack_00000018,uVar4,uVar7,in_stack_00000028);
    if (iVar6 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x232,
                      "ossl_ec_GFp_simple_point_get_affine_coordinates");
      func_0x00bc5160(0x10,0x80003,0);
      goto LAB_00c53a72;
    }
    if (*(int *)(*in_stack_00000018 + 0x90) == 0) {
      iVar6 = (**(code **)(*in_stack_00000018 + 0x84))(in_stack_00000018,uVar5,uVar4);
    }
    else {
      iVar6 = func_0x00be9330(uVar5,uVar4,in_stack_00000018[10],in_stack_00000028);
    }
    if ((iVar6 == 0) ||
       ((in_stack_00000020 != 0 &&
        (iVar6 = (**(code **)(*in_stack_00000018 + 0x80))
                           (in_stack_00000018,in_stack_00000020,
                            *(undefined4 *)(in_stack_0000001c + 8),uVar5,in_stack_00000028),
        iVar6 == 0)))) goto LAB_00c53a72;
    if (in_stack_00000024 != 0) {
      if (*(int *)(*in_stack_00000018 + 0x90) == 0) {
        iVar6 = (**(code **)(*in_stack_00000018 + 0x80))(in_stack_00000018,iVar2,uVar5,uVar4);
      }
      else {
        iVar6 = func_0x00be92b0(iVar2,uVar5,uVar4,in_stack_00000018[10],in_stack_00000028);
      }
      if (iVar6 == 0) goto LAB_00c53a72;
      iVar2 = (**(code **)(*in_stack_00000018 + 0x80))
                        (in_stack_00000018,in_stack_00000024,
                         *(undefined4 *)(in_stack_0000001c + 0xc),iVar2,in_stack_00000028);
      goto LAB_00c53a66;
    }
  }
  else {
    pcVar1 = *(code **)(*in_stack_00000018 + 0x94);
    if (pcVar1 == (code *)0x0) {
      if ((in_stack_00000020 != 0) &&
         (iVar2 = func_0x00bba2d0(in_stack_00000020,*(undefined4 *)(in_stack_0000001c + 8)),
         iVar2 == 0)) goto LAB_00c53a72;
      if (in_stack_00000024 != 0) {
        iVar2 = func_0x00bba2d0(in_stack_00000024,*(undefined4 *)(in_stack_0000001c + 0xc));
        goto LAB_00c53a66;
      }
    }
    else {
      if ((in_stack_00000020 != 0) &&
         (iVar2 = (*pcVar1)(in_stack_00000018,in_stack_00000020,
                            *(undefined4 *)(in_stack_0000001c + 8),in_stack_00000028), iVar2 == 0))
      goto LAB_00c53a72;
      if (in_stack_00000024 != 0) {
        iVar2 = (**(code **)(*in_stack_00000018 + 0x94))
                          (in_stack_00000018,in_stack_00000024,
                           *(undefined4 *)(in_stack_0000001c + 0xc),in_stack_00000028);
LAB_00c53a66:
        if (iVar2 == 0) goto LAB_00c53a72;
      }
    }
  }
  uStack00000010 = 1;
LAB_00c53a72:
  func_0x00bb56f0(in_stack_00000028);
  func_0x00bb5760(iStack0000000c);
  return uStack00000010;
}



uint FUN_00c53a90(void)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uStack00000020;
  int iStack00000024;
  int *in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  func_0x00e87f70();
  iStack00000024 = 0;
  uStack00000020 = 0;
  if (in_stack_00000034 == in_stack_00000038) {
    uVar3 = func_0x00c11900(in_stack_0000002c,in_stack_00000030,in_stack_00000034,in_stack_0000003c)
    ;
    return uVar3;
  }
  iVar4 = func_0x00c11c10(in_stack_0000002c,in_stack_00000034);
  iVar12 = in_stack_00000038;
  if ((iVar4 != 0) ||
     (iVar4 = func_0x00c11c10(in_stack_0000002c,in_stack_00000038), iVar12 = in_stack_00000034,
     iVar4 != 0)) {
    uVar3 = func_0x00c11860(in_stack_00000030,iVar12);
    return uVar3;
  }
  pcVar1 = *(code **)(*in_stack_0000002c + 0x80);
  pcVar2 = *(code **)(*in_stack_0000002c + 0x84);
  iVar12 = in_stack_0000002c[10];
  if ((in_stack_0000003c == 0) &&
     (in_stack_0000003c = func_0x00bb5940(in_stack_0000002c[0x1a]),
     iStack00000024 = in_stack_0000003c, in_stack_0000003c == 0)) {
    return 0;
  }
  func_0x00bb59e0(in_stack_0000003c);
  uVar5 = func_0x00bb57f0(in_stack_0000003c);
  uVar6 = func_0x00bb57f0(in_stack_0000003c);
  uVar7 = func_0x00bb57f0(in_stack_0000003c);
  uVar8 = func_0x00bb57f0(in_stack_0000003c);
  uVar9 = func_0x00bb57f0(in_stack_0000003c);
  uVar10 = func_0x00bb57f0(in_stack_0000003c);
  iVar4 = func_0x00bb57f0(in_stack_0000003c);
  if (iVar4 == 0) goto LAB_00c53f5c;
  if (*(int *)(in_stack_00000038 + 0x14) == 0) {
    iVar11 = (*pcVar2)(in_stack_0000002c,uVar5,*(undefined4 *)(in_stack_00000038 + 0x10),
                       in_stack_0000003c);
    if (((iVar11 == 0) ||
        (iVar11 = (*pcVar1)(in_stack_0000002c,uVar6,*(undefined4 *)(in_stack_00000034 + 8),uVar5,
                            in_stack_0000003c), iVar11 == 0)) ||
       (iVar11 = (*pcVar1)(in_stack_0000002c,uVar5,uVar5,*(undefined4 *)(in_stack_00000038 + 0x10),
                           in_stack_0000003c), iVar11 == 0)) goto LAB_00c53f5c;
    iVar11 = (*pcVar1)(in_stack_0000002c,uVar7,*(undefined4 *)(in_stack_00000034 + 0xc),uVar5,
                       in_stack_0000003c);
  }
  else {
    iVar11 = func_0x00bba2d0(uVar6,*(undefined4 *)(in_stack_00000034 + 8));
    if (iVar11 == 0) goto LAB_00c53f5c;
    iVar11 = func_0x00bba2d0(uVar7,*(undefined4 *)(in_stack_00000034 + 0xc));
  }
  if (iVar11 == 0) goto LAB_00c53f5c;
  if (*(int *)(in_stack_00000034 + 0x14) == 0) {
    iVar11 = (*pcVar2)(in_stack_0000002c,uVar5,*(undefined4 *)(in_stack_00000034 + 0x10),
                       in_stack_0000003c);
    if (((iVar11 == 0) ||
        (iVar11 = (*pcVar1)(in_stack_0000002c,uVar8,*(undefined4 *)(in_stack_00000038 + 8),uVar5,
                            in_stack_0000003c), iVar11 == 0)) ||
       (iVar11 = (*pcVar1)(in_stack_0000002c,uVar5,uVar5,*(undefined4 *)(in_stack_00000034 + 0x10),
                           in_stack_0000003c), iVar11 == 0)) goto LAB_00c53f5c;
    iVar11 = (*pcVar1)(in_stack_0000002c,uVar9,*(undefined4 *)(in_stack_00000038 + 0xc),uVar5,
                       in_stack_0000003c);
  }
  else {
    iVar11 = func_0x00bba2d0(uVar8,*(undefined4 *)(in_stack_00000038 + 8));
    if (iVar11 == 0) goto LAB_00c53f5c;
    iVar11 = func_0x00bba2d0(uVar9,*(undefined4 *)(in_stack_00000038 + 0xc));
  }
  if (((iVar11 == 0) || (iVar11 = func_0x00be93a0(uVar10,uVar6,uVar8,iVar12), iVar11 == 0)) ||
     (iVar11 = func_0x00be93a0(iVar4,uVar7,uVar9,iVar12), iVar11 == 0)) goto LAB_00c53f5c;
  iVar11 = func_0x00bba540(uVar10);
  if (iVar11 != 0) {
    iVar12 = func_0x00bba540(iVar4);
    if (iVar12 == 0) {
      func_0x00bbaaf0(*(undefined4 *)(in_stack_00000030 + 0x10));
      *(undefined4 *)(in_stack_00000030 + 0x14) = 0;
      uStack00000020 = 1;
    }
    else {
      func_0x00bb56f0(in_stack_0000003c);
      uStack00000020 =
           func_0x00c11900(in_stack_0000002c,in_stack_00000030,in_stack_00000034,in_stack_0000003c);
      in_stack_0000003c = 0;
    }
    goto LAB_00c53f5c;
  }
  iVar11 = func_0x00be9170(uVar6,uVar6,uVar8,iVar12);
  if ((iVar11 == 0) || (iVar11 = func_0x00be9170(uVar7,uVar7,uVar9,iVar12), iVar11 == 0))
  goto LAB_00c53f5c;
  if (*(int *)(in_stack_00000034 + 0x14) == 0) {
    if (*(int *)(in_stack_00000038 + 0x14) == 0) {
      iVar11 = (*pcVar1)(in_stack_0000002c,uVar5,*(undefined4 *)(in_stack_00000034 + 0x10),
                         *(undefined4 *)(in_stack_00000038 + 0x10),in_stack_0000003c);
    }
    else {
      iVar11 = func_0x00bba2d0(uVar5,*(undefined4 *)(in_stack_00000034 + 0x10));
    }
LAB_00c53e04:
    if (iVar11 == 0) goto LAB_00c53f5c;
    iVar11 = (*pcVar1)(in_stack_0000002c,*(undefined4 *)(in_stack_00000030 + 0x10),uVar5,uVar10,
                       in_stack_0000003c);
  }
  else {
    if (*(int *)(in_stack_00000038 + 0x14) == 0) {
      iVar11 = func_0x00bba2d0(uVar5,*(undefined4 *)(in_stack_00000038 + 0x10));
      goto LAB_00c53e04;
    }
    iVar11 = func_0x00bba2d0(*(undefined4 *)(in_stack_00000030 + 0x10),uVar10);
  }
  if (iVar11 != 0) {
    *(undefined4 *)(in_stack_00000030 + 0x14) = 0;
    iVar11 = (*pcVar2)(in_stack_0000002c,uVar5,iVar4,in_stack_0000003c);
    if (((((((iVar11 != 0) &&
            (iVar11 = (*pcVar2)(in_stack_0000002c,uVar9,uVar10,in_stack_0000003c), iVar11 != 0)) &&
           (iVar11 = (*pcVar1)(in_stack_0000002c,uVar8,uVar6,uVar9,in_stack_0000003c), iVar11 != 0))
          && ((iVar11 = func_0x00be93a0(*(undefined4 *)(in_stack_00000030 + 8),uVar5,uVar8,iVar12),
              iVar11 != 0 &&
              (iVar11 = func_0x00be91a0(uVar5,*(undefined4 *)(in_stack_00000030 + 8),iVar12),
              iVar11 != 0)))) &&
         ((iVar11 = func_0x00be93a0(uVar5,uVar8,uVar5,iVar12), iVar11 != 0 &&
          ((iVar4 = (*pcVar1)(in_stack_0000002c,uVar5,uVar5,iVar4,in_stack_0000003c), iVar4 != 0 &&
           (iVar4 = (*pcVar1)(in_stack_0000002c,uVar10,uVar9,uVar10,in_stack_0000003c), iVar4 != 0))
          )))) && (iVar4 = (*pcVar1)(in_stack_0000002c,uVar6,uVar7,uVar10,in_stack_0000003c),
                  iVar4 != 0)) &&
       ((iVar4 = func_0x00be93a0(uVar5,uVar5,uVar6,iVar12), iVar4 != 0 &&
        ((iVar4 = func_0x00bba4d0(uVar5), iVar4 == 0 ||
         (iVar12 = FUN_00be8290(uVar5,uVar5,iVar12), iVar12 != 0)))))) {
      iVar12 = func_0x00be9f60(*(undefined4 *)(in_stack_00000030 + 0xc),uVar5);
      uStack00000020 = (uint)(iVar12 != 0);
    }
  }
LAB_00c53f5c:
  func_0x00bb56f0(in_stack_0000003c);
  func_0x00bb5760(iStack00000024);
  return uStack00000020;
}



bool FUN_00c53f80(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iStack00000014;
  int *in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  func_0x00e87f70();
  iStack00000014 = 0;
  bVar11 = false;
  iVar3 = func_0x00c11c10(in_stack_00000020,in_stack_00000028);
  if (iVar3 != 0) {
    func_0x00bbaaf0(*(undefined4 *)(in_stack_00000024 + 0x10));
    *(undefined4 *)(in_stack_00000024 + 0x14) = 0;
    return true;
  }
  pcVar1 = *(code **)(*in_stack_00000020 + 0x80);
  pcVar2 = *(code **)(*in_stack_00000020 + 0x84);
  iVar3 = in_stack_00000020[10];
  if ((in_stack_0000002c == 0) &&
     (in_stack_0000002c = func_0x00bb5940(in_stack_00000020[0x1a]),
     iStack00000014 = in_stack_0000002c, in_stack_0000002c == 0)) {
    return false;
  }
  func_0x00bb59e0(in_stack_0000002c);
  iVar4 = func_0x00bb57f0(in_stack_0000002c);
  iVar5 = func_0x00bb57f0(in_stack_0000002c);
  uVar6 = func_0x00bb57f0(in_stack_0000002c);
  iVar7 = func_0x00bb57f0(in_stack_0000002c);
  if (iVar7 != 0) {
    iVar10 = iVar4;
    if (*(int *)(in_stack_00000028 + 0x14) == 0) {
      if (in_stack_00000020[0x13] == 0) {
        iVar10 = (*pcVar2)(in_stack_00000020,iVar4,*(undefined4 *)(in_stack_00000028 + 8),
                           in_stack_0000002c);
        if ((((iVar10 == 0) || (iVar10 = func_0x00be91a0(iVar5,iVar4,iVar3), iVar10 == 0)) ||
            (iVar10 = func_0x00be9170(iVar4,iVar4,iVar5,iVar3), iVar10 == 0)) ||
           ((iVar10 = (*pcVar2)(in_stack_00000020,iVar5,*(undefined4 *)(in_stack_00000028 + 0x10),
                                in_stack_0000002c), iVar10 == 0 ||
            (iVar10 = (*pcVar2)(in_stack_00000020,iVar5,iVar5,in_stack_0000002c), iVar10 == 0))))
        goto LAB_00c54349;
        iVar9 = (*pcVar1)(in_stack_00000020,iVar5,iVar5,in_stack_00000020[0x11],in_stack_0000002c);
        iVar8 = iVar4;
        iVar10 = iVar5;
      }
      else {
        iVar8 = (*pcVar2)(in_stack_00000020,iVar5,*(undefined4 *)(in_stack_00000028 + 0x10));
        if (((iVar8 == 0) ||
            (iVar8 = func_0x00be9170(iVar4,*(undefined4 *)(in_stack_00000028 + 8),iVar5,iVar3),
            iVar8 == 0)) ||
           ((iVar8 = func_0x00be93a0(uVar6,*(undefined4 *)(in_stack_00000028 + 8),iVar5,iVar3),
            iVar8 == 0 ||
            (iVar8 = (*pcVar1)(in_stack_00000020,iVar5,iVar4,uVar6,in_stack_0000002c), iVar8 == 0)))
           ) goto LAB_00c54349;
        iVar9 = func_0x00be91a0(iVar4,iVar5,iVar3);
        iVar8 = iVar5;
      }
      if (iVar9 == 0) goto LAB_00c54349;
    }
    else {
      iVar8 = (*pcVar2)(in_stack_00000020,iVar4,*(undefined4 *)(in_stack_00000028 + 8));
      if (((iVar8 == 0) || (iVar8 = func_0x00be91a0(iVar5,iVar4,iVar3), iVar8 == 0)) ||
         (iVar8 = func_0x00be9170(iVar4,iVar4,iVar5,iVar3), iVar8 == 0)) goto LAB_00c54349;
      iVar8 = in_stack_00000020[0x11];
    }
    iVar10 = func_0x00be9170(iVar5,iVar10,iVar8,iVar3);
    if (iVar10 != 0) {
      if (*(int *)(in_stack_00000028 + 0x14) == 0) {
        iVar10 = (*pcVar1)(in_stack_00000020,iVar4,*(undefined4 *)(in_stack_00000028 + 0xc),
                           *(undefined4 *)(in_stack_00000028 + 0x10),in_stack_0000002c);
      }
      else {
        iVar10 = func_0x00bba2d0(iVar4,*(undefined4 *)(in_stack_00000028 + 0xc));
      }
      if ((iVar10 != 0) &&
         (iVar10 = func_0x00be91a0(*(undefined4 *)(in_stack_00000024 + 0x10),iVar4,iVar3),
         iVar10 != 0)) {
        *(undefined4 *)(in_stack_00000024 + 0x14) = 0;
        iVar10 = (*pcVar2)(in_stack_00000020,iVar7,*(undefined4 *)(in_stack_00000028 + 0xc),
                           in_stack_0000002c);
        if (((((iVar10 != 0) &&
              ((iVar10 = (*pcVar1)(in_stack_00000020,uVar6,*(undefined4 *)(in_stack_00000028 + 8),
                                   iVar7,in_stack_0000002c), iVar10 != 0 &&
               (iVar10 = func_0x00be91e0(uVar6,uVar6,2,iVar3), iVar10 != 0)))) &&
             (iVar10 = func_0x00be91a0(iVar4,uVar6,iVar3), iVar10 != 0)) &&
            ((((iVar10 = (*pcVar2)(in_stack_00000020,*(undefined4 *)(in_stack_00000024 + 8),iVar5,
                                   in_stack_0000002c), iVar10 != 0 &&
               (iVar10 = func_0x00be93a0(*(undefined4 *)(in_stack_00000024 + 8),
                                         *(undefined4 *)(in_stack_00000024 + 8),iVar4,iVar3),
               iVar10 != 0)) &&
              (iVar10 = (*pcVar2)(in_stack_00000020,iVar4,iVar7,in_stack_0000002c), iVar10 != 0)) &&
             ((iVar10 = func_0x00be91e0(iVar7,iVar4,3,iVar3), iVar10 != 0 &&
              (iVar10 = func_0x00be93a0(iVar4,uVar6,*(undefined4 *)(in_stack_00000024 + 8),iVar3),
              iVar10 != 0)))))) &&
           (iVar5 = (*pcVar1)(in_stack_00000020,iVar4,iVar5,iVar4,in_stack_0000002c), iVar5 != 0)) {
          iVar3 = func_0x00be93a0(*(undefined4 *)(in_stack_00000024 + 0xc),iVar4,iVar7,iVar3);
          bVar11 = iVar3 != 0;
        }
      }
    }
  }
LAB_00c54349:
  func_0x00bb56f0(in_stack_0000002c);
  func_0x00bb5760(iStack00000014);
  return bVar11;
}



undefined4 FUN_00c54370(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00c11c10(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = func_0x00bba540(*(undefined4 *)(param_2 + 0xc));
    if (iVar1 == 0) {
      uVar2 = func_0x00be8460(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x28),
                              *(undefined4 *)(param_2 + 0xc));
      return uVar2;
    }
  }
  return 1;
}



void FUN_00c543c0(undefined4 param_1,int param_2)

{
  func_0x00bba540(*(undefined4 *)(param_2 + 0x10));
  return;
}



uint FUN_00c543d0(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iStack00000018;
  int *in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  func_0x00e87f70();
  uVar9 = 0xffffffff;
  iStack00000018 = 0;
  iVar3 = func_0x00c11c10(in_stack_00000020,in_stack_00000024);
  if (iVar3 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*in_stack_00000020 + 0x80);
  pcVar2 = *(code **)(*in_stack_00000020 + 0x84);
  iVar3 = in_stack_00000020[10];
  if ((in_stack_00000028 == 0) &&
     (in_stack_00000028 = func_0x00bb5940(in_stack_00000020[0x1a]),
     iStack00000018 = in_stack_00000028, in_stack_00000028 == 0)) {
    return 0xffffffff;
  }
  func_0x00bb59e0(in_stack_00000028);
  uVar4 = func_0x00bb57f0(in_stack_00000028);
  iVar5 = func_0x00bb57f0(in_stack_00000028);
  uVar6 = func_0x00bb57f0(in_stack_00000028);
  iVar7 = func_0x00bb57f0(in_stack_00000028);
  if ((iVar7 == 0) ||
     (iVar8 = (*pcVar2)(in_stack_00000020,uVar4,*(undefined4 *)(in_stack_00000024 + 8),
                        in_stack_00000028), iVar8 == 0)) goto LAB_00c54624;
  if (*(int *)(in_stack_00000024 + 0x14) == 0) {
    iVar8 = (*pcVar2)(in_stack_00000020,iVar5,*(undefined4 *)(in_stack_00000024 + 0x10),
                      in_stack_00000028);
    if (((iVar8 == 0) ||
        (iVar8 = (*pcVar2)(in_stack_00000020,uVar6,iVar5,in_stack_00000028), iVar8 == 0)) ||
       (iVar8 = (*pcVar1)(in_stack_00000020,iVar7,uVar6,iVar5,in_stack_00000028), iVar8 == 0))
    goto LAB_00c54624;
    if (in_stack_00000020[0x13] == 0) {
      iVar8 = (*pcVar1)(in_stack_00000020,iVar5,uVar6,in_stack_00000020[0x11],in_stack_00000028);
      if (iVar8 == 0) goto LAB_00c54624;
      iVar8 = func_0x00be9170(uVar4,uVar4,iVar5,iVar3);
    }
    else {
      iVar8 = func_0x00be91a0(iVar5,uVar6,iVar3);
      if ((iVar8 == 0) || (iVar8 = func_0x00be9170(iVar5,iVar5,uVar6,iVar3), iVar8 == 0))
      goto LAB_00c54624;
      iVar8 = func_0x00be93a0(uVar4,uVar4,iVar5,iVar3);
    }
    if (((iVar8 == 0) ||
        (iVar8 = (*pcVar1)(in_stack_00000020,uVar4,uVar4,*(undefined4 *)(in_stack_00000024 + 8),
                           in_stack_00000028), iVar8 == 0)) ||
       (iVar8 = (*pcVar1)(in_stack_00000020,iVar5,in_stack_00000020[0x12],iVar7,in_stack_00000028),
       iVar7 = iVar5, iVar8 == 0)) goto LAB_00c54624;
  }
  else {
    iVar7 = func_0x00be9170(uVar4,uVar4,in_stack_00000020[0x11],iVar3);
    if ((iVar7 == 0) ||
       (iVar7 = (*pcVar1)(in_stack_00000020,uVar4,uVar4,*(undefined4 *)(in_stack_00000024 + 8),
                          in_stack_00000028), iVar7 == 0)) goto LAB_00c54624;
    iVar7 = in_stack_00000020[0x12];
  }
  iVar3 = func_0x00be9170(uVar4,uVar4,iVar7,iVar3);
  if ((iVar3 != 0) &&
     (iVar3 = (*pcVar2)(in_stack_00000020,iVar5,*(undefined4 *)(in_stack_00000024 + 0xc),
                        in_stack_00000028), iVar3 != 0)) {
    iVar3 = func_0x00bba970(iVar5,uVar4);
    uVar9 = (uint)(iVar3 == 0);
  }
LAB_00c54624:
  func_0x00bb56f0(in_stack_00000028);
  func_0x00bb5760(iStack00000018);
  return uVar9;
}



uint FUN_00c54640(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uStack00000008;
  int iStack0000001c;
  int *in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  
  func_0x00e87f70();
  uVar9 = 0xffffffff;
  iStack0000001c = 0;
  iVar3 = func_0x00c11c10(in_stack_00000024,in_stack_00000028);
  if (iVar3 != 0) {
    iVar3 = func_0x00c11c10(in_stack_00000024,in_stack_0000002c);
    return (uint)(iVar3 == 0);
  }
  iVar3 = func_0x00c11c10(in_stack_00000024,in_stack_0000002c);
  if (iVar3 == 0) {
    if ((*(int *)(in_stack_00000028 + 0x14) == 0) || (*(int *)(in_stack_0000002c + 0x14) == 0)) {
      pcVar1 = *(code **)(*in_stack_00000024 + 0x80);
      pcVar2 = *(code **)(*in_stack_00000024 + 0x84);
      if ((in_stack_00000030 == 0) &&
         (iStack0000001c = func_0x00bb5940(in_stack_00000024[0x1a]),
         in_stack_00000030 = iStack0000001c, iStack0000001c == 0)) {
        return 0xffffffff;
      }
      func_0x00bb59e0(in_stack_00000030);
      uVar4 = func_0x00bb57f0(in_stack_00000030);
      uVar5 = func_0x00bb57f0(in_stack_00000030);
      uVar6 = func_0x00bb57f0(in_stack_00000030);
      iVar3 = func_0x00bb57f0(in_stack_00000030);
      if (iVar3 != 0) {
        if (*(int *)(in_stack_0000002c + 0x14) == 0) {
          iVar7 = (*pcVar2)(in_stack_00000024,iVar3,*(undefined4 *)(in_stack_0000002c + 0x10),
                            in_stack_00000030);
          if ((iVar7 == 0) ||
             (iVar7 = (*pcVar1)(in_stack_00000024,uVar4,*(undefined4 *)(in_stack_00000028 + 8),iVar3
                                ,in_stack_00000030), uStack00000008 = uVar4, iVar7 == 0))
          goto LAB_00c548ad;
        }
        else {
          uStack00000008 = *(undefined4 *)(in_stack_00000028 + 8);
        }
        if (*(int *)(in_stack_00000028 + 0x14) == 0) {
          iVar7 = (*pcVar2)(in_stack_00000024,uVar6,*(undefined4 *)(in_stack_00000028 + 0x10),
                            in_stack_00000030);
          if ((iVar7 == 0) ||
             (iVar7 = (*pcVar1)(in_stack_00000024,uVar5,*(undefined4 *)(in_stack_0000002c + 8),uVar6
                                ,in_stack_00000030), uVar8 = uVar5, iVar7 == 0)) goto LAB_00c548ad;
        }
        else {
          uVar8 = *(undefined4 *)(in_stack_0000002c + 8);
        }
        iVar7 = func_0x00bba0f0(uStack00000008,uVar8);
        if (iVar7 == 0) {
          if (*(int *)(in_stack_0000002c + 0x14) == 0) {
            iVar7 = (*pcVar1)(in_stack_00000024,iVar3,iVar3,
                              *(undefined4 *)(in_stack_0000002c + 0x10),in_stack_00000030);
            if ((iVar7 == 0) ||
               (iVar3 = (*pcVar1)(in_stack_00000024,uVar4,*(undefined4 *)(in_stack_00000028 + 0xc),
                                  iVar3,in_stack_00000030), iVar3 == 0)) goto LAB_00c548ad;
          }
          else {
            uStack00000008 = *(undefined4 *)(in_stack_00000028 + 0xc);
          }
          if (*(int *)(in_stack_00000028 + 0x14) == 0) {
            iVar3 = (*pcVar1)(in_stack_00000024,uVar6,uVar6,
                              *(undefined4 *)(in_stack_00000028 + 0x10),in_stack_00000030);
            if ((iVar3 == 0) ||
               (iVar3 = (*pcVar1)(in_stack_00000024,uVar5,*(undefined4 *)(in_stack_0000002c + 0xc),
                                  uVar6,in_stack_00000030), iVar3 == 0)) goto LAB_00c548ad;
          }
          else {
            uVar8 = *(undefined4 *)(in_stack_0000002c + 0xc);
          }
          iVar3 = func_0x00bba0f0(uStack00000008,uVar8);
          uVar9 = (uint)(iVar3 != 0);
        }
        else {
          uVar9 = 1;
        }
      }
LAB_00c548ad:
      func_0x00bb56f0(in_stack_00000030);
      func_0x00bb5760(iStack0000001c);
      return uVar9;
    }
    iVar3 = func_0x00bba0f0(*(undefined4 *)(in_stack_00000028 + 8),
                            *(undefined4 *)(in_stack_0000002c + 8));
    if ((iVar3 == 0) &&
       (iVar3 = func_0x00bba0f0(*(undefined4 *)(in_stack_00000028 + 0xc),
                                *(undefined4 *)(in_stack_0000002c + 0xc)), iVar3 == 0)) {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00c548d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  iVar4 = 0;
  uVar5 = 0;
  if (*(int *)(param_4 + 0x14) == 0) {
    iVar1 = func_0x00c11c10(param_3,param_4);
    if (iVar1 == 0) {
      if (param_5 == 0) {
        iVar4 = func_0x00bb5940(*(undefined4 *)(param_3 + 0x68));
        param_5 = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
      }
      func_0x00bb59e0(param_5);
      uVar2 = func_0x00bb57f0(param_5);
      iVar1 = func_0x00bb57f0(param_5);
      if (iVar1 != 0) {
        iVar3 = func_0x00c11a40(param_3,param_4,uVar2,iVar1,param_5);
        if (iVar3 != 0) {
          iVar1 = func_0x00c11fc0(param_3,param_4,uVar2,iVar1,param_5);
          if (iVar1 != 0) {
            if (*(int *)(param_4 + 0x14) == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x4aa,"ossl_ec_GFp_simple_make_affine");
              func_0x00bc5160(0x10,0xc0103,0);
            }
            else {
              uVar5 = 1;
            }
          }
        }
      }
      func_0x00bb56f0(param_5);
      func_0x00bb5760(iVar4);
      return uVar5;
    }
  }
  return 1;
}



undefined4 FUN_00c549e0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iStack00000004;
  undefined4 *puStack00000008;
  uint uStack0000000c;
  uint uStack00000014;
  undefined4 uStack00000018;
  int *in_stack_00000028;
  uint in_stack_0000002c;
  int *in_stack_00000030;
  int in_stack_00000034;
  undefined4 *puVar6;
  
  func_0x00e87f70();
  iStack00000004 = 0;
  puVar9 = (undefined4 *)0x0;
  uStack00000018 = 0;
  if (in_stack_0000002c == 0) {
    return 1;
  }
  if ((in_stack_00000034 == 0) &&
     (in_stack_00000034 = func_0x00bb5940(in_stack_00000028[0x1a]),
     iStack00000004 = in_stack_00000034, in_stack_00000034 == 0)) {
    return 0;
  }
  func_0x00bb59e0(in_stack_00000034);
  uVar1 = func_0x00bb57f0(in_stack_00000034);
  iVar2 = func_0x00bb57f0(in_stack_00000034);
  if ((iVar2 == 0) ||
     (puVar9 = (undefined4 *)FUN_00bbc4f0(in_stack_0000002c * 4,"crypto\\ec\\ecp_smpl.c",0x4ce),
     puVar9 == (undefined4 *)0x0)) {
LAB_00c54e5f:
    func_0x00bb56f0(in_stack_00000034);
    func_0x00bb5760(iStack00000004);
    if (puVar9 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    puStack00000008 = (undefined4 *)0x0;
    if (in_stack_0000002c != 0) {
      do {
        iVar3 = func_0x00bba5e0();
        puVar9[(int)puStack00000008] = iVar3;
        if (iVar3 == 0) goto LAB_00c54ba4;
        puStack00000008 = (undefined4 *)((int)puStack00000008 + 1);
      } while (puStack00000008 < in_stack_0000002c);
    }
    iVar3 = func_0x00bba540(*(undefined4 *)(*in_stack_00000030 + 0x10));
    if (iVar3 == 0) {
      iVar3 = func_0x00bba2d0(*puVar9,*(undefined4 *)(*in_stack_00000030 + 0x10));
    }
    else if (*(code **)(*in_stack_00000028 + 0x98) == (code *)0x0) {
      iVar3 = func_0x00bba8c0(*puVar9,1);
    }
    else {
      iVar3 = (**(code **)(*in_stack_00000028 + 0x98))(in_stack_00000028,*puVar9,in_stack_00000034);
    }
    if (iVar3 == 0) goto LAB_00c54e5f;
    uStack0000000c = 1;
    if (1 < in_stack_0000002c) {
      puVar6 = puVar9;
      do {
        puVar4 = puVar6 + 1;
        piVar5 = (int *)((int)puVar4 + ((int)in_stack_00000030 - (int)puVar9));
        iVar3 = func_0x00bba540(*(undefined4 *)(*piVar5 + 0x10));
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*in_stack_00000028 + 0x80))
                            (in_stack_00000028,*puVar4,*puVar6,*(undefined4 *)(*piVar5 + 0x10),
                             in_stack_00000034);
        }
        else {
          iVar3 = func_0x00bba2d0(*puVar4,*puVar6);
        }
        if (iVar3 == 0) goto LAB_00c54ba4;
        uStack0000000c = uStack0000000c + 1;
        puVar6 = puVar4;
      } while (uStack0000000c < in_stack_0000002c);
    }
    iVar3 = (**(code **)(*in_stack_00000028 + 0x8c))
                      (in_stack_00000028,uVar1,puVar9[in_stack_0000002c - 1],in_stack_00000034);
    if (iVar3 != 0) {
      if ((*(code **)(*in_stack_00000028 + 0x90) == (code *)0x0) ||
         ((iVar3 = (**(code **)(*in_stack_00000028 + 0x90))
                             (in_stack_00000028,uVar1,uVar1,in_stack_00000034), iVar3 != 0 &&
          (iVar3 = (**(code **)(*in_stack_00000028 + 0x90))
                             (in_stack_00000028,uVar1,uVar1,in_stack_00000034), iVar3 != 0)))) {
        iVar3 = in_stack_0000002c - 1;
        if (iVar3 != 0) {
          puStack00000008 = puVar9 + iVar3;
          do {
            puStack00000008 = puStack00000008 + -1;
            piVar5 = in_stack_00000030 + iVar3;
            iVar7 = func_0x00bba540(*(undefined4 *)(*piVar5 + 0x10));
            if ((iVar7 == 0) &&
               (((iVar7 = (**(code **)(*in_stack_00000028 + 0x80))
                                    (in_stack_00000028,iVar2,*puStack00000008,uVar1,
                                     in_stack_00000034), iVar7 == 0 ||
                 (iVar7 = (**(code **)(*in_stack_00000028 + 0x80))
                                    (in_stack_00000028,uVar1,uVar1,*(undefined4 *)(*piVar5 + 0x10),
                                     in_stack_00000034), iVar7 == 0)) ||
                (iVar7 = func_0x00bba2d0(*(undefined4 *)(*piVar5 + 0x10),iVar2), iVar7 == 0)))) {
              func_0x00bb56f0(in_stack_00000034);
              func_0x00bb5760(iStack00000004);
              goto LAB_00c54e76;
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar2 = func_0x00bba540(*(undefined4 *)(*in_stack_00000030 + 0x10));
        if ((iVar2 != 0) ||
           (iVar2 = func_0x00bba2d0(*(undefined4 *)(*in_stack_00000030 + 0x10),uVar1), iVar2 != 0))
        {
          uStack00000014 = 0;
          if (in_stack_0000002c != 0) {
            do {
              iVar2 = in_stack_00000030[uStack00000014];
              iVar3 = func_0x00bba540(*(undefined4 *)(iVar2 + 0x10));
              if (iVar3 == 0) {
                iVar3 = (**(code **)(*in_stack_00000028 + 0x84))
                                  (in_stack_00000028,uVar1,*(undefined4 *)(iVar2 + 0x10),
                                   in_stack_00000034);
                if (((iVar3 != 0) &&
                    (iVar3 = (**(code **)(*in_stack_00000028 + 0x80))
                                       (in_stack_00000028,*(undefined4 *)(iVar2 + 8),
                                        *(undefined4 *)(iVar2 + 8),uVar1,in_stack_00000034),
                    iVar3 != 0)) &&
                   ((iVar3 = (**(code **)(*in_stack_00000028 + 0x80))
                                       (in_stack_00000028,uVar1,uVar1,*(undefined4 *)(iVar2 + 0x10),
                                        in_stack_00000034), iVar3 != 0 &&
                    (iVar3 = (**(code **)(*in_stack_00000028 + 0x80))
                                       (in_stack_00000028,*(undefined4 *)(iVar2 + 0xc),
                                        *(undefined4 *)(iVar2 + 0xc),uVar1,in_stack_00000034),
                    iVar3 != 0)))) {
                  if (*(code **)(*in_stack_00000028 + 0x98) == (code *)0x0) {
                    iVar3 = func_0x00bba8c0(*(undefined4 *)(iVar2 + 0x10),1);
                  }
                  else {
                    iVar3 = (**(code **)(*in_stack_00000028 + 0x98))
                                      (in_stack_00000028,*(undefined4 *)(iVar2 + 0x10),
                                       in_stack_00000034);
                  }
                  if (iVar3 != 0) {
                    *(undefined4 *)(iVar2 + 0x14) = 1;
                    goto LAB_00c54e12;
                  }
                }
                func_0x00bb56f0(in_stack_00000034);
                func_0x00bb5760(iStack00000004);
                goto LAB_00c54e80;
              }
LAB_00c54e12:
              uStack00000014 = uStack00000014 + 1;
            } while (uStack00000014 < in_stack_0000002c);
          }
          uStack00000018 = 1;
          func_0x00bb56f0(in_stack_00000034);
          func_0x00bb5760(iStack00000004);
          goto LAB_00c54e76;
        }
      }
      goto LAB_00c54e5f;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x4fb,"ossl_ec_GFp_simple_points_make_affine");
    func_0x00bc5160(0x10,0x80003,0);
    func_0x00bb56f0(in_stack_00000034);
    func_0x00bb5760(iStack00000004);
  }
LAB_00c54e76:
  if (in_stack_0000002c == 0) goto LAB_00c54e99;
LAB_00c54e80:
  uVar8 = 0;
  do {
    if (puVar9[uVar8] == 0) break;
    FUN_00bba080(puVar9[uVar8]);
    uVar8 = uVar8 + 1;
  } while (uVar8 < in_stack_0000002c);
LAB_00c54e99:
  FUN_00bbc580(puVar9,"crypto\\ec\\ecp_smpl.c",0x550);
  return uStack00000018;
LAB_00c54ba4:
  func_0x00bb56f0(in_stack_00000034);
  func_0x00bb5760(iStack00000004);
  goto LAB_00c54e80;
}



void FUN_00c54ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00be92b0(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x28),param_5);
  return;
}



void FUN_00c54ee0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00be9330(param_2,param_3,*(undefined4 *)(param_1 + 0x28),param_4);
  return;
}



bool FUN_00c54f00(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  func_0x00e87f70();
  iVar3 = 0;
  bVar4 = false;
  if ((param_5 == 0) && (iVar3 = func_0x00bb59c0(param_2[0x1a]), param_5 = iVar3, iVar3 == 0)) {
    return false;
  }
  func_0x00bb59e0(param_5);
  iVar1 = func_0x00bb57f0(param_5);
  if (iVar1 != 0) {
    do {
      iVar2 = func_0x00c2a870(iVar1,param_2[10],0,param_5);
      if (iVar2 == 0) goto LAB_00c54ff9;
      iVar2 = func_0x00bba540(iVar1);
    } while (iVar2 != 0);
    iVar2 = (**(code **)(*param_2 + 0x80))(param_2,param_3,param_4,iVar1,param_5);
    if (iVar2 != 0) {
      iVar2 = func_0x00bb4d80(param_3,param_3,param_2[10],param_5);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x580,"ossl_ec_GFp_simple_field_inv");
        func_0x00bc5160(0x10,0xa5,0);
      }
      else {
        iVar1 = (**(code **)(*param_2 + 0x80))(param_2,param_3,param_3,iVar1,param_5);
        bVar4 = iVar1 != 0;
      }
    }
  }
LAB_00c54ff9:
  func_0x00bb56f0(param_5);
  func_0x00bb5760(iVar3);
  return bVar4;
}



int FUN_00c55020(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  func_0x00e87f70();
  func_0x00bb59e0(param_4);
  uVar1 = func_0x00bb57f0(param_4);
  iVar2 = func_0x00bb57f0(param_4);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_smpl.c",0x5a1,"ossl_ec_GFp_simple_blind_coordinates");
    func_0x00bc5160(0x10,0x80003,0);
    func_0x00bb56f0(param_4);
    return 0;
  }
  do {
    FUN_00bcaeb0();
    iVar3 = func_0x00c2a870(uVar1,param_2[10],0,param_4);
    func_0x00bcad80();
    if (iVar3 == 0) goto LAB_00c55174;
    iVar4 = func_0x00bba540(uVar1);
  } while (iVar4 != 0);
  if ((((*(code **)(*param_2 + 0x90) == (code *)0x0) ||
       (iVar4 = (**(code **)(*param_2 + 0x90))(param_2,uVar1,uVar1,param_4), iVar4 != 0)) &&
      (iVar4 = (**(code **)(*param_2 + 0x80))
                         (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x10),
                          uVar1,param_4), iVar4 != 0)) &&
     (((iVar4 = (**(code **)(*param_2 + 0x84))(param_2,iVar2,uVar1,param_4), iVar4 != 0 &&
       (iVar4 = (**(code **)(*param_2 + 0x80))
                          (param_2,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8),iVar2,
                           param_4), iVar4 != 0)) &&
      ((iVar4 = (**(code **)(*param_2 + 0x80))(param_2,iVar2,iVar2,uVar1,param_4), iVar4 != 0 &&
       (iVar2 = (**(code **)(*param_2 + 0x80))
                          (param_2,*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0xc),
                           iVar2,param_4), iVar2 != 0)))))) {
    *(undefined4 *)(param_3 + 0x14) = 0;
LAB_00c55174:
    iVar3 = 1;
  }
  func_0x00bb56f0(param_4);
  return iVar3;
}



undefined4 FUN_00c55190(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(in_stack_00000018 + 0x10);
  uVar2 = *(undefined4 *)(in_stack_00000018 + 8);
  uVar3 = *(undefined4 *)(in_stack_00000014 + 0x10);
  uVar4 = *(undefined4 *)(in_stack_00000014 + 8);
  uVar5 = *(undefined4 *)(in_stack_00000018 + 0xc);
  if ((((((*(int *)(in_stack_0000001c + 0x14) != 0) &&
         (iVar6 = (**(code **)(*in_stack_00000010 + 0x84))
                            (in_stack_00000010,uVar2,*(undefined4 *)(in_stack_0000001c + 8),
                             in_stack_00000020), iVar6 != 0)) &&
        (iVar6 = func_0x00be93a0(uVar4,uVar2,in_stack_00000010[0x11],in_stack_00000010[10]),
        iVar6 != 0)) &&
       (((iVar6 = (**(code **)(*in_stack_00000010 + 0x84))
                            (in_stack_00000010,uVar4,uVar4,in_stack_00000020), iVar6 != 0 &&
         (iVar6 = (**(code **)(*in_stack_00000010 + 0x80))
                            (in_stack_00000010,uVar5,*(undefined4 *)(in_stack_0000001c + 8),
                             in_stack_00000010[0x12],in_stack_00000020), iVar6 != 0)) &&
        ((iVar6 = func_0x00be91e0(uVar5,uVar5,3,in_stack_00000010[10]), iVar6 != 0 &&
         ((iVar6 = func_0x00be93a0(*(undefined4 *)(in_stack_00000014 + 8),uVar4,uVar5,
                                   in_stack_00000010[10]), iVar6 != 0 &&
          (iVar6 = func_0x00be9170(uVar1,uVar2,in_stack_00000010[0x11],in_stack_00000010[10]),
          iVar6 != 0)))))))) &&
      (iVar6 = (**(code **)(*in_stack_00000010 + 0x80))
                         (in_stack_00000010,uVar3,*(undefined4 *)(in_stack_0000001c + 8),uVar1,
                          in_stack_00000020), iVar6 != 0)) &&
     ((iVar6 = func_0x00be9170(uVar3,in_stack_00000010[0x12],uVar3,in_stack_00000010[10]),
      iVar6 != 0 &&
      (iVar6 = func_0x00be91e0(*(undefined4 *)(in_stack_00000014 + 0x10),uVar3,2,
                               in_stack_00000010[10]), iVar6 != 0)))) {
    do {
      iVar6 = func_0x00c2a870(*(undefined4 *)(in_stack_00000014 + 0xc),in_stack_00000010[10],0,
                              in_stack_00000020);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = func_0x00bba540(*(undefined4 *)(in_stack_00000014 + 0xc));
    } while (iVar6 != 0);
    do {
      iVar6 = func_0x00c2a870(*(undefined4 *)(in_stack_00000018 + 0x10),in_stack_00000010[10],0,
                              in_stack_00000020);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = func_0x00bba540(*(undefined4 *)(in_stack_00000018 + 0x10));
    } while (iVar6 != 0);
    if (*(code **)(*in_stack_00000010 + 0x90) != (code *)0x0) {
      iVar6 = (**(code **)(*in_stack_00000010 + 0x90))
                        (in_stack_00000010,*(undefined4 *)(in_stack_00000014 + 0xc),
                         *(undefined4 *)(in_stack_00000014 + 0xc),in_stack_00000020);
      if (iVar6 == 0) {
        return 0;
      }
      iVar6 = (**(code **)(*in_stack_00000010 + 0x90))
                        (in_stack_00000010,*(undefined4 *)(in_stack_00000018 + 0x10),
                         *(undefined4 *)(in_stack_00000018 + 0x10),in_stack_00000020);
      if (iVar6 == 0) {
        return 0;
      }
    }
    iVar6 = (**(code **)(*in_stack_00000010 + 0x80))
                      (in_stack_00000010,*(undefined4 *)(in_stack_00000014 + 0x10),
                       *(undefined4 *)(in_stack_00000014 + 0x10),
                       *(undefined4 *)(in_stack_00000014 + 0xc),in_stack_00000020);
    if (((iVar6 != 0) &&
        (iVar6 = (**(code **)(*in_stack_00000010 + 0x80))
                           (in_stack_00000010,*(undefined4 *)(in_stack_00000014 + 8),
                            *(undefined4 *)(in_stack_00000014 + 8),
                            *(undefined4 *)(in_stack_00000014 + 0xc),in_stack_00000020), iVar6 != 0)
        ) && (iVar6 = (**(code **)(*in_stack_00000010 + 0x80))
                                (in_stack_00000010,*(undefined4 *)(in_stack_00000018 + 8),
                                 *(undefined4 *)(in_stack_0000001c + 8),
                                 *(undefined4 *)(in_stack_00000018 + 0x10),in_stack_00000020),
             iVar6 != 0)) {
      *(undefined4 *)(in_stack_00000014 + 0x14) = 0;
      *(undefined4 *)(in_stack_00000018 + 0x14) = 0;
      return 1;
    }
  }
  return 0;
}



bool FUN_00c55420(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  func_0x00e87f70();
  bVar9 = false;
  func_0x00bb59e0(in_stack_0000002c);
  uVar1 = func_0x00bb57f0(in_stack_0000002c);
  uVar2 = func_0x00bb57f0(in_stack_0000002c);
  uVar3 = func_0x00bb57f0(in_stack_0000002c);
  uVar4 = func_0x00bb57f0(in_stack_0000002c);
  uVar5 = func_0x00bb57f0(in_stack_0000002c);
  uVar6 = func_0x00bb57f0(in_stack_0000002c);
  iVar7 = func_0x00bb57f0(in_stack_0000002c);
  if (((((((((iVar7 != 0) &&
            (iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                               (in_stack_0000001c,iVar7,*(undefined4 *)(in_stack_00000020 + 8),
                                *(undefined4 *)(in_stack_00000024 + 8),in_stack_0000002c),
            iVar8 != 0)) &&
           (iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                              (in_stack_0000001c,uVar1,*(undefined4 *)(in_stack_00000020 + 0x10),
                               *(undefined4 *)(in_stack_00000024 + 0x10),in_stack_0000002c),
           iVar8 != 0)) &&
          ((iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                              (in_stack_0000001c,uVar5,*(undefined4 *)(in_stack_00000020 + 8),
                               *(undefined4 *)(in_stack_00000024 + 0x10),in_stack_0000002c),
           iVar8 != 0 &&
           (iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                              (in_stack_0000001c,uVar4,*(undefined4 *)(in_stack_00000020 + 0x10),
                               *(undefined4 *)(in_stack_00000024 + 8),in_stack_0000002c), iVar8 != 0
           )))) && ((iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                                       (in_stack_0000001c,uVar6,in_stack_0000001c[0x11],uVar1,
                                        in_stack_0000002c), iVar8 != 0 &&
                    ((iVar8 = func_0x00be9170(uVar6,iVar7,uVar6,in_stack_0000001c[10]), iVar8 != 0
                     && (iVar8 = func_0x00be9170(iVar7,uVar4,uVar5,in_stack_0000001c[10]),
                        iVar8 != 0)))))) &&
        (iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                           (in_stack_0000001c,uVar6,iVar7,uVar6,in_stack_0000002c), iVar8 != 0)) &&
       (((((iVar8 = (**(code **)(*in_stack_0000001c + 0x84))
                              (in_stack_0000001c,uVar1,uVar1,in_stack_0000002c), iVar8 != 0 &&
           (iVar8 = func_0x00be91e0(uVar3,in_stack_0000001c[0x12],2,in_stack_0000001c[10]),
           iVar8 != 0)) &&
          (iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                             (in_stack_0000001c,uVar1,uVar3,uVar1,in_stack_0000002c), iVar8 != 0))
         && (((iVar8 = func_0x00be91a0(uVar6,uVar6,in_stack_0000001c[10]), iVar8 != 0 &&
              (iVar8 = func_0x00be93a0(uVar4,uVar5,uVar4,in_stack_0000001c[10]), iVar8 != 0)) &&
             ((iVar8 = (**(code **)(*in_stack_0000001c + 0x84))
                                 (in_stack_0000001c,*(undefined4 *)(in_stack_00000024 + 0x10),uVar4,
                                  in_stack_0000002c), iVar8 != 0 &&
              ((iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                                  (in_stack_0000001c,uVar5,*(undefined4 *)(in_stack_00000024 + 0x10)
                                   ,*(undefined4 *)(in_stack_00000028 + 8),in_stack_0000002c),
               iVar8 != 0 &&
               (iVar8 = func_0x00be9170(uVar1,uVar1,uVar6,in_stack_0000001c[10]), iVar8 != 0))))))))
        && ((iVar8 = func_0x00be93a0(*(undefined4 *)(in_stack_00000024 + 8),uVar1,uVar5,
                                     in_stack_0000001c[10]), iVar8 != 0 &&
            (((iVar8 = (**(code **)(*in_stack_0000001c + 0x84))
                                 (in_stack_0000001c,uVar5,*(undefined4 *)(in_stack_00000020 + 8),
                                  in_stack_0000002c), iVar8 != 0 &&
              (iVar8 = (**(code **)(*in_stack_0000001c + 0x84))
                                 (in_stack_0000001c,uVar6,*(undefined4 *)(in_stack_00000020 + 0x10),
                                  in_stack_0000002c), iVar8 != 0)) &&
             (iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                                (in_stack_0000001c,iVar7,uVar6,in_stack_0000001c[0x11],
                                 in_stack_0000002c), iVar8 != 0)))))))) &&
      ((((iVar8 = func_0x00be9170(uVar2,*(undefined4 *)(in_stack_00000020 + 8),
                                  *(undefined4 *)(in_stack_00000020 + 0x10),in_stack_0000001c[10]),
         iVar8 != 0 &&
         (iVar8 = (**(code **)(*in_stack_0000001c + 0x84))
                            (in_stack_0000001c,uVar2,uVar2,in_stack_0000002c), iVar8 != 0)) &&
        (((iVar8 = func_0x00be93a0(uVar2,uVar2,uVar5,in_stack_0000001c[10]), iVar8 != 0 &&
          ((iVar8 = func_0x00be93a0(uVar2,uVar2,uVar6,in_stack_0000001c[10]), iVar8 != 0 &&
           (iVar8 = func_0x00be93a0(uVar4,uVar5,iVar7,in_stack_0000001c[10]), iVar8 != 0)))) &&
         (iVar8 = (**(code **)(*in_stack_0000001c + 0x84))
                            (in_stack_0000001c,uVar4,uVar4,in_stack_0000002c), iVar8 != 0)))) &&
       ((((iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                             (in_stack_0000001c,uVar1,uVar6,uVar2,in_stack_0000002c), iVar8 != 0 &&
          (iVar8 = (**(code **)(*in_stack_0000001c + 0x80))
                             (in_stack_0000001c,uVar1,uVar3,uVar1,in_stack_0000002c), iVar8 != 0))
         && (iVar8 = func_0x00be93a0(*(undefined4 *)(in_stack_00000020 + 8),uVar4,uVar1,
                                     in_stack_0000001c[10]), iVar8 != 0)) &&
        ((iVar7 = func_0x00be9170(uVar4,uVar5,iVar7,in_stack_0000001c[10]), iVar7 != 0 &&
         (iVar7 = (**(code **)(*in_stack_0000001c + 0x84))
                            (in_stack_0000001c,uVar5,uVar6,in_stack_0000002c), iVar7 != 0)))))))) &&
     ((iVar7 = (**(code **)(*in_stack_0000001c + 0x80))
                         (in_stack_0000001c,uVar5,uVar5,uVar3,in_stack_0000002c), iVar7 != 0 &&
      ((iVar7 = (**(code **)(*in_stack_0000001c + 0x80))
                          (in_stack_0000001c,uVar2,uVar2,uVar4,in_stack_0000002c), iVar7 != 0 &&
       (iVar7 = func_0x00be91a0(uVar2,uVar2,in_stack_0000001c[10]), iVar7 != 0)))))) {
    iVar7 = func_0x00be9170(*(undefined4 *)(in_stack_00000020 + 0x10),uVar5,uVar2,
                            in_stack_0000001c[10]);
    bVar9 = iVar7 != 0;
  }
  func_0x00bb56f0(in_stack_0000002c);
  return bVar9;
}



uint FUN_00c558d0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uStack00000014;
  int *in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  func_0x00e87f70();
  uStack00000014 = 0;
  iVar1 = func_0x00bba540(*(undefined4 *)(in_stack_00000020 + 0x10));
  if (iVar1 != 0) {
    uVar2 = func_0x00c12120(in_stack_0000001c,in_stack_00000020);
    return uVar2;
  }
  iVar1 = func_0x00bba540(*(undefined4 *)(in_stack_00000024 + 0x10));
  if (iVar1 == 0) {
    func_0x00bb59e0(in_stack_0000002c);
    uVar3 = func_0x00bb57f0(in_stack_0000002c);
    uVar4 = func_0x00bb57f0(in_stack_0000002c);
    uVar5 = func_0x00bb57f0(in_stack_0000002c);
    uVar6 = func_0x00bb57f0(in_stack_0000002c);
    uVar7 = func_0x00bb57f0(in_stack_0000002c);
    uVar8 = func_0x00bb57f0(in_stack_0000002c);
    iVar1 = func_0x00bb57f0(in_stack_0000002c);
    if ((((((((iVar1 != 0) &&
             (iVar9 = func_0x00be91a0(uVar7,*(undefined4 *)(in_stack_00000028 + 0xc),
                                      in_stack_0000001c[10]), iVar9 != 0)) &&
            (iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                               (in_stack_0000001c,iVar1,*(undefined4 *)(in_stack_00000020 + 8),uVar7
                                ,in_stack_0000002c), iVar9 != 0)) &&
           ((iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                               (in_stack_0000001c,iVar1,*(undefined4 *)(in_stack_00000024 + 0x10),
                                iVar1,in_stack_0000002c), iVar9 != 0 &&
            (iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                               (in_stack_0000001c,uVar8,*(undefined4 *)(in_stack_00000020 + 0x10),
                                iVar1,in_stack_0000002c), iVar9 != 0)))) &&
          (iVar9 = func_0x00be91a0(uVar4,in_stack_0000001c[0x12],in_stack_0000001c[10]), iVar9 != 0)
          ) && (((iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                                    (in_stack_0000001c,uVar4,
                                     *(undefined4 *)(in_stack_00000024 + 0x10),uVar4,
                                     in_stack_0000002c), iVar9 != 0 &&
                 (iVar9 = (**(code **)(*in_stack_0000001c + 0x84))
                                    (in_stack_0000001c,uVar6,
                                     *(undefined4 *)(in_stack_00000020 + 0x10),in_stack_0000002c),
                 iVar9 != 0)) &&
                ((iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                                    (in_stack_0000001c,uVar5,uVar6,uVar4,in_stack_0000002c),
                 iVar9 != 0 &&
                 (((iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                                      (in_stack_0000001c,iVar1,
                                       *(undefined4 *)(in_stack_00000020 + 0x10),
                                       in_stack_0000001c[0x11],in_stack_0000002c), iVar9 != 0 &&
                   (iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                                      (in_stack_0000001c,uVar4,
                                       *(undefined4 *)(in_stack_00000028 + 8),
                                       *(undefined4 *)(in_stack_00000020 + 8),in_stack_0000002c),
                   iVar9 != 0)) &&
                  (iVar9 = func_0x00be9170(uVar4,uVar4,iVar1,in_stack_0000001c[10]), iVar9 != 0)))))
                ))) &&
        (((iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                             (in_stack_0000001c,uVar4,*(undefined4 *)(in_stack_00000024 + 0x10),
                              uVar4,in_stack_0000002c), iVar9 != 0 &&
          (iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                             (in_stack_0000001c,uVar3,*(undefined4 *)(in_stack_00000028 + 8),
                              *(undefined4 *)(in_stack_00000020 + 0x10),in_stack_0000002c),
          iVar9 != 0)) &&
         ((iVar9 = func_0x00be9170(iVar1,*(undefined4 *)(in_stack_00000020 + 8),uVar3,
                                   in_stack_0000001c[10]), iVar9 != 0 &&
          ((((iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                                (in_stack_0000001c,iVar1,iVar1,uVar4,in_stack_0000002c), iVar9 != 0
             && (iVar9 = func_0x00be9170(iVar1,iVar1,uVar5,in_stack_0000001c[10]), iVar9 != 0)) &&
            ((iVar9 = func_0x00be93a0(uVar3,uVar3,*(undefined4 *)(in_stack_00000020 + 8),
                                      in_stack_0000001c[10]), iVar9 != 0 &&
             (((iVar9 = (**(code **)(*in_stack_0000001c + 0x84))
                                  (in_stack_0000001c,uVar3,uVar3,in_stack_0000002c), iVar9 != 0 &&
               (iVar9 = (**(code **)(*in_stack_0000001c + 0x80))
                                  (in_stack_0000001c,uVar3,uVar3,
                                   *(undefined4 *)(in_stack_00000024 + 8),in_stack_0000002c),
               iVar9 != 0)) &&
              (iVar1 = func_0x00be93a0(uVar3,iVar1,uVar3,in_stack_0000001c[10]), iVar1 != 0)))))) &&
           ((iVar1 = (**(code **)(*in_stack_0000001c + 0x80))
                               (in_stack_0000001c,uVar4,*(undefined4 *)(in_stack_00000024 + 0x10),
                                uVar7,in_stack_0000002c), iVar1 != 0 &&
            (iVar1 = (**(code **)(*in_stack_0000001c + 0x80))
                               (in_stack_0000001c,uVar4,uVar6,uVar4,in_stack_0000002c), iVar1 != 0))
           )))))))) &&
       (((*(code **)(*in_stack_0000001c + 0x94) == (code *)0x0 ||
         (iVar1 = (**(code **)(*in_stack_0000001c + 0x94))
                            (in_stack_0000001c,uVar4,uVar4,in_stack_0000002c), iVar1 != 0)) &&
        (((iVar1 = (**(code **)(*in_stack_0000001c + 0x8c))
                             (in_stack_0000001c,uVar4,uVar4,in_stack_0000002c), iVar1 != 0 &&
          ((*(code **)(*in_stack_0000001c + 0x90) == (code *)0x0 ||
           (iVar1 = (**(code **)(*in_stack_0000001c + 0x90))
                              (in_stack_0000001c,uVar4,uVar4,in_stack_0000002c), iVar1 != 0)))) &&
         ((iVar1 = (**(code **)(*in_stack_0000001c + 0x80))
                             (in_stack_0000001c,*(undefined4 *)(in_stack_00000020 + 8),uVar8,uVar4,
                              in_stack_0000002c), iVar1 != 0 &&
          (iVar1 = (**(code **)(*in_stack_0000001c + 0x80))
                             (in_stack_0000001c,*(undefined4 *)(in_stack_00000020 + 0xc),uVar3,uVar4
                              ,in_stack_0000002c), iVar1 != 0)))))))) {
      if (*(code **)(*in_stack_0000001c + 0x98) == (code *)0x0) {
        iVar1 = func_0x00bba8c0(*(undefined4 *)(in_stack_00000020 + 0x10),1);
      }
      else {
        iVar1 = (**(code **)(*in_stack_0000001c + 0x98))
                          (in_stack_0000001c,*(undefined4 *)(in_stack_00000020 + 0x10),
                           in_stack_0000002c);
      }
      if (iVar1 != 0) {
        *(undefined4 *)(in_stack_00000020 + 0x14) = 1;
        uStack00000014 = 1;
      }
    }
    func_0x00bb56f0(in_stack_0000002c);
    return uStack00000014;
  }
  iVar1 = func_0x00c11860(in_stack_00000020,in_stack_00000028);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x00c11b80(in_stack_0000001c,in_stack_00000020,in_stack_0000002c);
  return (uint)(iVar1 != 0);
}



int FUN_00c56020(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00bbc830(0x28,"providers\\implementations\\kem\\ec_kem.c",0xc3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00bc3c60(param_1);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return iVar1;
}



void FUN_00c56050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c56a60(param_1,0x1000,param_2,0,param_3);
  return;
}



void FUN_00c56070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c56a60(param_1,0x1000,param_2,param_3,param_4);
  return;
}



undefined4
FUN_00c56090(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,void *param_5,
            uint *param_6,uint *param_7)

{
  int iVar1;
  undefined1 *_Size;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint in_stack_00000174;
  undefined4 *in_stack_0000017c;
  void *in_stack_00000180;
  uint *in_stack_00000184;
  undefined4 in_stack_00000188;
  uint *in_stack_0000018c;
  char *pcVar8;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x309,"eckem_encapsulate");
    func_0x00bc5160(0x39,0x7d,0);
    return 0xfffffffe;
  }
  func_0x00e87f70();
  puVar2 = in_stack_0000017c;
  in_stack_00000174 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_4 = in_stack_00000188;
  param_5 = in_stack_00000180;
  param_6 = in_stack_00000184;
  param_7 = in_stack_0000018c;
  param_3 = 0;
  iVar1 = in_stack_0000017c[9];
  if (in_stack_00000180 == (void *)0x0) {
    if (in_stack_00000184 == (uint *)0x0) {
      if (in_stack_0000018c == (uint *)0x0) {
        uVar3 = FUN_008ab370();
        return uVar3;
      }
    }
    else {
      *in_stack_00000184 = *(uint *)(iVar1 + 0x14);
      if (in_stack_0000018c == (uint *)0x0) goto LAB_00c56809;
    }
    *in_stack_0000018c = *(uint *)(iVar1 + 0x10);
LAB_00c56809:
    uVar3 = FUN_008ab370();
    return uVar3;
  }
  if (*in_stack_0000018c < *(uint *)(iVar1 + 0x10)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x298,"dhkem_encap");
    pcVar8 = "*secretlen too small";
LAB_00c5684a:
    func_0x00bc5160(0x39,0x8e,pcVar8);
    uVar3 = FUN_008ab370();
    return uVar3;
  }
  if (*in_stack_00000184 < *(uint *)(iVar1 + 0x14)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x29c,"dhkem_encap");
    pcVar8 = "*enclen too small";
    goto LAB_00c5684a;
  }
  _Size = (undefined1 *)in_stack_0000017c[6];
  uVar7 = in_stack_0000017c[7];
  iVar4 = func_0x00c12820(in_stack_0000017c[2],in_stack_0000017c[3]);
  if (iVar4 != 0) {
    uVar3 = func_0x00bb6310(*puVar2);
    iVar5 = func_0x00c12a60(iVar4,uVar3);
    if (iVar5 != 0) {
      if ((_Size == (undefined1 *)0x0) || (puVar6 = _Size, uVar7 == 0)) {
        uVar7 = *(uint *)(puVar2[9] + 0x1c);
        if ((0x42 < uVar7) ||
           (iVar5 = func_0x00bc5990(puVar2[2],&stack0x00000020,uVar7,0), iVar5 < 1))
        goto LAB_00c56a26;
        puVar6 = &stack0x00000020;
      }
      param_2 = (undefined1 *)func_0x00c12fb0(iVar4,puVar6,uVar7);
      if (puVar6 != _Size) {
        func_0x00401320(puVar6,uVar7);
      }
      if (0 < (int)param_2) {
        iVar5 = func_0x00c56d30(iVar4,&stack0x00000064,&stack0x00000000,0x85);
        if ((iVar5 != 0) &&
           (iVar5 = func_0x00c56d30(*puVar2,&stack0x000000ec,&param_2,0x85), iVar5 != 0)) {
          if ((_Size == *(undefined1 **)(iVar1 + 0x18)) && (param_2 == _Size)) {
            iVar5 = func_0x00c56290(puVar2,param_4,iVar4,*puVar2,puVar2[1],*puVar2,&stack0x00000064,
                                    &stack0x000000ec);
            if (iVar5 != 0) {
              memcpy(param_5,&stack0x00000064,(size_t)_Size);
              param_3 = 1;
              *param_6 = (uint)_Size;
              *param_7 = *(uint *)(iVar1 + 0x10);
            }
          }
          else {
            FUN_00bc4f50();
            func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x2ac,"dhkem_encap");
            func_0x00bc5160(0x39,0x9e,"Invalid public key");
          }
        }
        goto LAB_00c56a31;
      }
    }
  }
LAB_00c56a26:
  FUN_00c12650(iVar4);
  iVar4 = 0;
LAB_00c56a31:
  FUN_00c12650(iVar4);
  uVar3 = FUN_008ab370();
  return uVar3;
}



void FUN_00c560e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c56a60(param_1,0x2000,param_2,0,param_3);
  return;
}



void FUN_00c56100(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00c56a60(param_1,0x2000,param_2,param_3,param_4);
  return;
}



undefined4 FUN_00c56120(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint in_stack_000000a0;
  undefined4 *in_stack_000000a8;
  int in_stack_000000ac;
  uint *in_stack_000000b0;
  undefined4 in_stack_000000b4;
  int in_stack_000000b8;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x317,"eckem_decapsulate");
    func_0x00bc5160(0x39,0x7d,0);
    return 0xfffffffe;
  }
  func_0x00e87f70();
  iVar5 = in_stack_000000b8;
  uVar11 = in_stack_000000b4;
  puVar4 = in_stack_000000b0;
  iVar3 = in_stack_000000ac;
  puVar2 = in_stack_000000a8;
  in_stack_000000a0 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = in_stack_000000a8[9];
  iVar10 = *(int *)(iVar1 + 0x18);
  if (in_stack_000000ac == 0) {
    *in_stack_000000b0 = *(uint *)(iVar1 + 0x10);
    goto LAB_00c56758;
  }
  if (*in_stack_000000b0 < *(uint *)(iVar1 + 0x10)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x2e1,"dhkem_decap");
    func_0x00bc5160(0x39,0x8e,"*secretlen too small");
    goto LAB_00c56758;
  }
  if (in_stack_000000b8 != iVar10) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x2e5,"dhkem_decap");
    func_0x00bc5160(0x39,0x9e,"Invalid enc public key");
    goto LAB_00c56758;
  }
  uVar8 = *in_stack_000000a8;
  uVar6 = func_0x00c13090(uVar8);
  uVar6 = func_0x00bb6190(uVar8,uVar6);
  iVar7 = func_0x00c12820(uVar6);
  if (iVar7 == 0) {
LAB_00c56740:
    FUN_00c12650(iVar7);
    iVar7 = 0;
  }
  else {
    uVar8 = func_0x00bb6310(uVar8);
    iVar9 = func_0x00c12a60(iVar7,uVar8);
    if (iVar9 == 0) goto LAB_00c56740;
    iVar9 = func_0x00c12840(iVar7,uVar11,iVar5,0);
    if (iVar9 == 0) goto LAB_00c56740;
    iVar9 = func_0x00c56d30(*puVar2,&stack0x00000018,&stack0x00000000,0x85);
    if (iVar9 != 0) {
      if (iVar5 == iVar10) {
        iVar10 = func_0x00c56290(puVar2,iVar3,*puVar2,iVar7,*puVar2,puVar2[1],uVar11,
                                 &stack0x00000018);
        if (iVar10 != 0) {
          *puVar4 = *(uint *)(iVar1 + 0x10);
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kem\\ec_kem.c",0x2f0,"dhkem_decap");
        func_0x00bc5160(0x39,0x9e,"Invalid recipient public key");
      }
    }
  }
  FUN_00c12650(iVar7);
LAB_00c56758:
  uVar11 = FUN_008ab370();
  return uVar11;
}



void FUN_00c56170(undefined4 *param_1)

{
  FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kem\\ec_kem.c",0xd0);
  FUN_00c12650(*param_1);
  *param_1 = 0;
  FUN_00c12650(param_1[1]);
  param_1[1] = 0;
  FUN_00bbc580(param_1,"providers\\implementations\\kem\\ec_kem.c",0xd3);
  return;
}



undefined4 FUN_00c561c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,&DAT_01081f60);
    iVar1 = param_1;
    if (iVar2 != 0) {
      param_2 = 0;
      param_1 = 0;
      if (((*(int *)(iVar2 + 8) != 0) && (*(int *)(iVar2 + 0xc) != 0)) &&
         (iVar2 = func_0x00bc01d0(iVar2,&param_2,0,&param_1), iVar2 == 0)) {
        return 0;
      }
      FUN_00bbc6c0(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),
                   "providers\\implementations\\kem\\ec_kem.c",0x130);
      *(int *)(iVar1 + 0x18) = param_2;
      *(int *)(iVar1 + 0x1c) = param_1;
    }
    iVar3 = func_0x00bc09d0(iVar3,"operation");
    if (iVar3 != 0) {
      if ((*(int *)(iVar3 + 4) == 4) &&
         (iVar3 = func_0x00cdd2d0(*(undefined4 *)(iVar3 + 8)), iVar3 != 0)) {
        *(int *)(iVar1 + 0x10) = iVar3;
        return 1;
      }
      return 0;
    }
  }
  return 1;
}



undefined ** FUN_00c56280(void)

{
  return &PTR_s_operation_01081f24;
}



byte FUN_00c66360(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = func_0x00c0f880();
    *param_2 = iVar1;
    return -(iVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_00c0f7d0(*param_2);
    *param_2 = 0;
    return 2;
  }
  if (param_1 == 5) {
    iVar1 = *param_2;
    func_0x00c0f7c0(iVar1,0xf000);
    func_0x00c0f970(iVar1,0);
    func_0x00c19ed0(iVar1);
    *(int *)(iVar1 + 0x70) = *(int *)(iVar1 + 0x70) + 1;
  }
  return 1;
}



undefined * FUN_00c663d0(void)

{
  return &DAT_0108a59c;
}



void FUN_00c663e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_0108a558);
  return;
}



int FUN_00c66400(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00c0f880();
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)func_0x00c09060(0,param_2,param_3,&DAT_0108a61c);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00c0f7d0(iVar1);
    return 0;
  }
  if (param_1 != (int *)0x0) {
    FUN_00c0f7d0(*param_1);
    *param_1 = iVar1;
  }
  func_0x00c0f920(iVar1,*puVar2,puVar2[1],puVar2[2]);
  func_0x00c4e490(iVar1 + 8,puVar2[3]);
  if (puVar2[4] != 0) {
    uVar3 = func_0x00bba470(*(undefined4 *)(puVar2[4] + 4));
    func_0x00c4e5a0(iVar1 + 8,(*(undefined4 **)puVar2[4])[2],**(undefined4 **)puVar2[4],uVar3);
    thunk_FUN_00bfc170(*(undefined4 *)puVar2[4]);
    FUN_00bba400(*(undefined4 *)(puVar2[4] + 4));
    FUN_00bbc580(puVar2[4],"crypto\\dh\\dh_asn1.c",0x7d);
    puVar2[4] = 0;
  }
  FUN_00bbc580(puVar2,"crypto\\dh\\dh_asn1.c",0x81);
  func_0x00c0f7c0(iVar1,0xf000);
  func_0x00c0f970(iVar1,0x1000);
  return iVar1;
}



int thunk_FUN_00bfebb0(void)

{
  int iVar1;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  func_0x00e87f70();
  if (in_stack_00000020 == 0) {
    iVar1 = func_0x00c3fbf0(0,in_stack_00000024,in_stack_00000028);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\conf\\conf_lib.c",0x138,"NCONF_get_string");
      func_0x00bc5160(0xe,0x6a,0);
      return 0;
    }
  }
  else {
    if (DAT_013df12c == 0) {
      DAT_013df12c = func_0x00c45e60();
    }
    (**(code **)(DAT_013df12c + 8))(&stack0x00000000);
    iVar1 = func_0x00c3fbf0(&stack0x00000000,in_stack_00000024,in_stack_00000028);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\conf\\conf_lib.c",0x13b,"NCONF_get_string");
      func_0x00bc5160(0xe,0x6c,"group=%s name=%s",in_stack_00000024,in_stack_00000028);
      iVar1 = 0;
    }
  }
  return iVar1;
}



undefined4 thunk_FUN_00bfeb30(void)

{
  undefined4 uVar1;
  int in_stack_00000020;
  int in_stack_00000024;
  
  func_0x00e87f70();
  if (in_stack_00000020 != 0) {
    if (DAT_013df12c == 0) {
      DAT_013df12c = func_0x00c45e60();
    }
    (**(code **)(DAT_013df12c + 8))(&stack0x00000000);
    if (in_stack_00000024 != 0) {
      uVar1 = func_0x00c3fba0(&stack0x00000000,in_stack_00000024);
      return uVar1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\conf\\conf_lib.c",0x125,"NCONF_get_section");
    func_0x00bc5160(0xe,0x6b,0);
  }
  return 0;
}



int thunk_FUN_00bfeeb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00c3fbf0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    if (param_1 == 0) {
      func_0x00bc5050("crypto\\conf\\conf_lib.c",0x138,"NCONF_get_string");
      func_0x00bc5160(0xe,0x6a,0);
      return 0;
    }
    func_0x00bc5050("crypto\\conf\\conf_lib.c",0x13b,"NCONF_get_string");
    func_0x00bc5160(0xe,0x6c,"group=%s name=%s",param_2,param_3);
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 thunk_FUN_00bfee30(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\conf\\conf_lib.c",0x120,"NCONF_get_section");
    func_0x00bc5160(0xe,0x69,0);
    return 0;
  }
  if (param_2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\conf\\conf_lib.c",0x125,"NCONF_get_section");
    func_0x00bc5160(0xe,0x6b,0);
    return 0;
  }
  func_0x00e87f70();
  if ((param_4 != 0) && (param_5 != 0)) {
    if (*(int *)(param_4 + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = func_0x00bbe580(*(int *)(param_4 + 8),&stack0x00000000);
    }
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 8);
    }
  }
  return 0;
}



undefined * FUN_00c68480(void)

{
  return &DAT_0108a8b8;
}



undefined4 FUN_00c68490(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  func_0x00be2720("Require Explicit Policy",*param_2,&param_3);
  func_0x00be2720("Inhibit Policy Mapping",param_2[1],&param_3);
  return param_3;
}



int * FUN_00c684d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  piVar2 = (int *)func_0x00c08650(&DAT_0108a8b8);
  if (piVar2 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_pcons.c",0x40,"v2i_POLICY_CONSTRAINTS");
    func_0x00bc5160(0x22,0x8000d,0);
    return (int *)0x0;
  }
  iVar7 = 0;
  iVar3 = func_0x00bd1830(param_3);
  if (0 < iVar3) {
    do {
      iVar3 = func_0x00bd1a80(param_3,iVar7);
      pcVar6 = "requireExplicitPolicy";
      pbVar8 = *(byte **)(iVar3 + 4);
      pbVar5 = pbVar8;
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_00c68560:
          uVar4 = -(uint)bVar9 | 1;
          goto LAB_00c68565;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < ((byte *)pcVar6)[1];
        if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c68560;
        pbVar5 = pbVar5 + 2;
        pcVar6 = (char *)((byte *)pcVar6 + 2);
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_00c68565:
      if (uVar4 == 0) {
        iVar3 = func_0x00be2b20(iVar3,piVar2);
      }
      else {
        pcVar6 = "inhibitPolicyMapping";
        do {
          bVar1 = *pbVar8;
          bVar9 = bVar1 < (byte)*pcVar6;
          if (bVar1 != *pcVar6) {
LAB_00c685a5:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_00c685aa;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar9 = bVar1 < ((byte *)pcVar6)[1];
          if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c685a5;
          pbVar8 = pbVar8 + 2;
          pcVar6 = (char *)((byte *)pcVar6 + 2);
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_00c685aa:
        if (uVar4 != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_pcons.c",0x4c,"v2i_POLICY_CONSTRAINTS");
          func_0x00bc5160(0x22,0x6a,&DAT_0112e274,*(undefined4 *)(iVar3 + 4));
          goto LAB_00c68637;
        }
        iVar3 = func_0x00be2b20(iVar3,piVar2 + 1);
      }
      if (iVar3 == 0) goto LAB_00c68637;
      iVar7 = iVar7 + 1;
      iVar3 = func_0x00bd1830(param_3);
    } while (iVar7 < iVar3);
  }
  if ((piVar2[1] != 0) || (*piVar2 != 0)) {
    return piVar2;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\v3_pcons.c",0x53,"v2i_POLICY_CONSTRAINTS");
  func_0x00bc5160(0x22,0x97,0);
LAB_00c68637:
  func_0x00c08cb0(piVar2,&DAT_0108a8b8);
  return (int *)0x0;
}



int FUN_00c6a010(undefined4 param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t _Size;
  int iVar5;
  
  func_0x00e87f70();
  iVar5 = 0;
  if ((((param_3 == (void *)0x0) || ((int)param_4 < 1)) ||
      (iVar3 = *(int *)(param_2 + 0x28), iVar3 == 0)) || (*(int *)(param_2 + 0x2c) == 0)) {
    return 0;
  }
  func_0x00baa700(param_2,0xf);
  iVar4 = *(int *)(iVar3 + 4);
  do {
    do {
      iVar2 = *(int *)(iVar3 + 0x18);
      iVar1 = *(int *)(iVar3 + 0x1c);
      _Size = (iVar4 - iVar2) - iVar1;
      if ((int)param_4 <= (int)_Size) {
        memcpy((void *)(*(int *)(iVar3 + 0x14) + iVar2 + iVar1),param_3,param_4);
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + param_4;
        return iVar5 + param_4;
      }
      if (iVar2 != 0) {
        if (0 < (int)_Size) {
          memcpy((void *)(*(int *)(iVar3 + 0x14) + iVar1 + iVar2),param_3,_Size);
          iVar5 = iVar5 + _Size;
          param_3 = (void *)((int)param_3 + _Size);
          param_4 = param_4 - _Size;
          *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + _Size;
          iVar2 = *(int *)(iVar3 + 0x18);
        }
        do {
          iVar2 = func_0x00bab6e0(*(undefined4 *)(param_2 + 0x2c),
                                  *(int *)(iVar3 + 0x1c) + *(int *)(iVar3 + 0x14),iVar2);
          if (iVar2 < 1) goto LAB_00c6a10b;
          *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + iVar2;
          iVar2 = *(int *)(iVar3 + 0x18) - iVar2;
          *(int *)(iVar3 + 0x18) = iVar2;
        } while (iVar2 != 0);
      }
      iVar4 = *(int *)(iVar3 + 4);
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    } while ((int)param_4 < iVar4);
    do {
      iVar2 = func_0x00bab6e0(*(undefined4 *)(param_2 + 0x2c),param_3,param_4);
      if (iVar2 < 1) {
LAB_00c6a10b:
        func_0x00baa710(param_2);
        iVar3 = iVar5;
        if ((iVar2 < 0) && (iVar3 = iVar2, 0 < iVar5)) {
          iVar3 = iVar5;
        }
        return iVar3;
      }
      param_3 = (void *)((int)param_3 + iVar2);
      iVar5 = iVar5 + iVar2;
      param_4 = param_4 - iVar2;
      if (param_4 == 0) {
        return iVar5;
      }
      iVar4 = *(int *)(iVar3 + 4);
    } while (iVar4 <= (int)param_4);
  } while( true );
}



size_t FUN_00c6a160(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  size_t _Size;
  size_t sVar2;
  size_t sVar3;
  
  if (((param_2 == (void *)0x0) || (piVar1 = *(int **)(param_1 + 0x28), piVar1 == (int *)0x0)) ||
     (*(int *)(param_1 + 0x2c) == 0)) {
    return 0;
  }
  sVar3 = 0;
  func_0x00baa700(param_1,0xf);
  while( true ) {
    sVar2 = piVar1[3];
    if (sVar2 != 0) {
      _Size = param_3;
      if ((int)sVar2 <= (int)param_3) {
        _Size = sVar2;
      }
      memcpy(param_2,(void *)(piVar1[4] + piVar1[2]),_Size);
      piVar1[4] = piVar1[4] + _Size;
      sVar3 = sVar3 + _Size;
      piVar1[3] = piVar1[3] - _Size;
      if (param_3 == _Size) {
        return sVar3;
      }
      param_3 = param_3 - _Size;
      param_2 = (void *)((int)param_2 + _Size);
    }
    if (*piVar1 < (int)param_3) {
      while( true ) {
        sVar2 = func_0x00bab230(*(undefined4 *)(param_1 + 0x2c),param_2,param_3);
        if ((int)sVar2 < 1) {
          func_0x00baa710(param_1);
          if (-1 < (int)sVar2) {
            return sVar3;
          }
          if (0 < (int)sVar3) {
            sVar2 = sVar3;
          }
          return sVar2;
        }
        sVar3 = sVar3 + sVar2;
        if (param_3 == sVar2) break;
        param_2 = (void *)((int)param_2 + sVar2);
        param_3 = param_3 - sVar2;
      }
      return sVar3;
    }
    sVar2 = func_0x00bab230(*(undefined4 *)(param_1 + 0x2c),piVar1[2],*piVar1);
    if ((int)sVar2 < 1) break;
    piVar1[4] = 0;
    piVar1[3] = sVar2;
  }
  func_0x00baa710(param_1);
  if (-1 < (int)sVar2) {
    return sVar3;
  }
  if (0 < (int)sVar3) {
    sVar2 = sVar3;
  }
  return sVar2;
}



void FUN_00c6a280(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00c6a010(param_1,param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}



int FUN_00c6a2b0(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  func_0x00e87f70();
  puVar3 = *(undefined4 **)(param_2 + 0x28);
  iVar7 = 0;
  param_4 = param_4 + -1;
  func_0x00baa700(param_2,0xf);
  do {
    piVar1 = puVar3 + 4;
    while (iVar6 = puVar3[2], (int)puVar3[3] < 1) {
      iVar6 = func_0x00bab230(*(undefined4 *)(param_2 + 0x2c),iVar6,*puVar3);
      if (iVar6 < 1) {
        func_0x00baa710(param_2);
        *param_3 = '\0';
        if (iVar6 < 0) {
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          return iVar6;
        }
        return iVar7;
      }
      puVar3[3] = iVar6;
      *piVar1 = 0;
    }
    iVar4 = *piVar1;
    iVar5 = 0;
    do {
      if (param_4 <= iVar5) {
        puVar3[3] = puVar3[3] - iVar5;
        *piVar1 = *piVar1 + iVar5;
        goto LAB_00c6a32d;
      }
      pcVar2 = (char *)(iVar5 + iVar4 + iVar6);
      iVar5 = iVar5 + 1;
      *param_3 = *pcVar2;
      param_3 = param_3 + 1;
      if (*pcVar2 == '\n') {
        puVar3[3] = puVar3[3] - iVar5;
        *piVar1 = *piVar1 + iVar5;
        iVar7 = iVar7 + iVar5;
        goto LAB_00c6a367;
      }
    } while (iVar5 < (int)puVar3[3]);
    puVar3[3] = puVar3[3] - iVar5;
    *piVar1 = *piVar1 + iVar5;
LAB_00c6a32d:
    iVar7 = iVar7 + iVar5;
    param_4 = param_4 - iVar5;
    if (param_4 == 0) {
LAB_00c6a367:
      *param_3 = '\0';
      return iVar7;
    }
  } while( true );
}



size_t FUN_00c6a3b0(undefined4 param_1,size_t param_2,size_t param_3,size_t param_4,int *param_5)

{
  char cVar1;
  size_t *psVar2;
  int *piVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 *_Dst;
  int iVar9;
  
  func_0x00e87f70();
  piVar3 = param_5;
  sVar7 = param_4;
  sVar4 = param_3;
  iVar6 = param_2;
  psVar2 = *(size_t **)(param_2 + 0x28);
  switch(param_3) {
  case 1:
    psVar2[4] = 0;
    psVar2[3] = 0;
    psVar2[7] = 0;
    psVar2[6] = 0;
    goto LAB_00c6a404;
  case 2:
    if ((int)psVar2[3] < 1) {
      sVar4 = func_0x00baa730(*(undefined4 *)(param_2 + 0x2c),param_3,param_4,param_5);
      return sVar4;
    }
    break;
  case 3:
    return psVar2[6];
  default:
    iVar6 = *(int *)(param_2 + 0x2c);
    goto joined_r0x00c6a810;
  case 10:
    sVar4 = psVar2[3];
    goto LAB_00c6a48c;
  case 0xb:
    iVar9 = *(int *)(param_2 + 0x2c);
    if (iVar9 != 0) {
      if (0 < (int)psVar2[6]) {
        func_0x00baa700(param_2,0xf);
        sVar7 = psVar2[6];
        while (0 < (int)sVar7) {
          sVar7 = func_0x00bab6e0(*(undefined4 *)(iVar6 + 0x2c),psVar2[7] + psVar2[5],sVar7);
          func_0x00baa710(iVar6);
          if ((int)sVar7 < 1) {
            return sVar7;
          }
          psVar2[7] = psVar2[7] + sVar7;
          psVar2[6] = psVar2[6] - sVar7;
          func_0x00baa700(iVar6,0xf);
          sVar7 = psVar2[6];
        }
        psVar2[6] = 0;
        psVar2[7] = 0;
        iVar9 = *(int *)(iVar6 + 0x2c);
      }
      sVar4 = func_0x00baa730(iVar9,sVar4,param_4,param_5);
      func_0x00baa710(iVar6);
      return sVar4;
    }
    break;
  case 0xc:
    iVar6 = func_0x00baaeb0(param_5,0x75,*psVar2,0);
    if ((0 < iVar6) && (iVar6 = func_0x00baaeb0(piVar3,0x75,psVar2[1],1), 0 < iVar6)) {
      return 1;
    }
    return 0;
  case 0xd:
    sVar4 = psVar2[6];
LAB_00c6a48c:
    if (sVar4 == 0) {
LAB_00c6a404:
      iVar6 = *(int *)(param_2 + 0x2c);
joined_r0x00c6a810:
      if (iVar6 == 0) {
        return 0;
      }
      sVar4 = func_0x00baa730(iVar6,param_3,param_4,param_5);
    }
    return sVar4;
  case 0x1d:
    sVar4 = 0;
    _Dst = &param_2;
    if ((psVar2 != (size_t *)0x0) && (*(int *)(param_2 + 0x2c) != 0)) {
      func_0x00baa700(param_2,0xf);
      while( true ) {
        sVar7 = psVar2[3];
        if (sVar7 != 0) {
          param_3 = sVar4;
          if ((int)sVar7 <= (int)sVar4) {
            param_3 = sVar7;
          }
          memcpy(_Dst,(void *)(psVar2[2] + psVar2[4]),param_3);
          psVar2[4] = psVar2[4] + param_3;
          psVar2[3] = psVar2[3] - param_3;
          if (sVar4 == param_3) goto LAB_00c6a7e4;
          sVar4 = sVar4 - param_3;
          _Dst = (undefined4 *)((int)_Dst + param_3);
        }
        if ((int)*psVar2 < (int)sVar4) goto LAB_00c6a7c0;
        sVar7 = func_0x00bab230(*(undefined4 *)(iVar6 + 0x2c),psVar2[2],*psVar2);
        if ((int)sVar7 < 1) break;
        psVar2[4] = 0;
        psVar2[3] = sVar7;
      }
LAB_00c6a7db:
      func_0x00baa710(iVar6);
    }
LAB_00c6a7e4:
    sVar4 = param_4;
    if ((int)psVar2[3] < (int)param_4) {
      sVar4 = psVar2[3];
    }
    memcpy(param_5,(void *)(psVar2[4] + psVar2[2]),sVar4);
    return sVar4;
  case 0x65:
    if (*(int *)(param_2 + 0x2c) != 0) {
      func_0x00baa700(param_2,0xf);
      sVar4 = func_0x00baa730(*(undefined4 *)(iVar6 + 0x2c),sVar4,param_4,param_5);
      func_0x00baa710(iVar6);
      return sVar4;
    }
    break;
  case 0x74:
    sVar4 = psVar2[3];
    if ((int)sVar4 < 1) {
      return 0;
    }
    pcVar8 = (char *)(psVar2[4] + psVar2[2]);
    sVar7 = 0;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      sVar5 = sVar7 + 1;
      if (cVar1 != '\n') {
        sVar5 = sVar7;
      }
      sVar4 = sVar4 - 1;
      sVar7 = sVar5;
    } while (sVar4 != 0);
    return sVar5;
  case 0x75:
    param_3 = param_4;
    if (param_5 == (int *)0x0) {
LAB_00c6a534:
      param_2 = param_4;
    }
    else {
      if (*param_5 != 0) {
        param_3 = *psVar2;
        goto LAB_00c6a534;
      }
      param_2 = psVar2[1];
    }
    sVar4 = psVar2[5];
    sVar5 = psVar2[2];
    if ((((int)param_3 < 0x1001) || (param_3 == *psVar2)) ||
       ((0 < (int)param_4 &&
        (sVar5 = FUN_00bbc4f0(param_4,"crypto\\bio\\bf_buff.c",0x143), sVar5 != 0)))) {
      if ((((int)param_2 < 0x1001) || (param_2 == psVar2[1])) ||
         (sVar4 = FUN_00bbc4f0(sVar7,"crypto\\bio\\bf_buff.c",0x148), sVar4 != 0)) {
        if (psVar2[2] != sVar5) {
          FUN_00bbc580(psVar2[2],"crypto\\bio\\bf_buff.c",0x150);
          psVar2[2] = sVar5;
          psVar2[4] = 0;
          psVar2[3] = 0;
          *psVar2 = param_3;
        }
        if (psVar2[5] == sVar4) {
          return 1;
        }
        FUN_00bbc580(psVar2[5],"crypto\\bio\\bf_buff.c",0x157);
        psVar2[1] = param_2;
        psVar2[5] = sVar4;
        psVar2[7] = 0;
        psVar2[6] = 0;
        return 1;
      }
      if (sVar5 != psVar2[2]) {
        FUN_00bbc580(sVar5,"crypto\\bio\\bf_buff.c",0x14b);
        return 0;
      }
    }
    break;
  case 0x7a:
    if ((int)*psVar2 < (int)param_4) {
      if ((int)param_4 < 1) {
        return 0;
      }
      sVar4 = FUN_00bbc4f0(param_4,"crypto\\bio\\bf_buff.c",0x124);
      if (sVar4 == 0) {
        return 0;
      }
      FUN_00bbc580(psVar2[2],"crypto\\bio\\bf_buff.c",0x127);
      psVar2[2] = sVar4;
    }
    psVar2[4] = 0;
    psVar2[3] = sVar7;
    memcpy((void *)psVar2[2],param_5,sVar7);
    return 1;
  }
  return 0;
LAB_00c6a7c0:
  sVar7 = func_0x00bab230(*(undefined4 *)(iVar6 + 0x2c),_Dst,sVar4);
  if ((int)sVar7 < 1) goto LAB_00c6a7db;
  if (sVar4 == sVar7) goto LAB_00c6a7e4;
  _Dst = (undefined4 *)((int)_Dst + sVar7);
  sVar4 = sVar4 - sVar7;
  goto LAB_00c6a7c0;
}



undefined4 FUN_00c6a8d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0x20,"crypto\\bio\\bf_buff.c",0x2f);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1000;
    iVar2 = FUN_00bbc4f0(0x1000,"crypto\\bio\\bf_buff.c",0x34);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = 0x1000;
      iVar2 = FUN_00bbc4f0(0x1000,"crypto\\bio\\bf_buff.c",0x3a);
      puVar1[5] = iVar2;
      if (iVar2 == 0) {
        FUN_00bbc580(puVar1[2],"crypto\\bio\\bf_buff.c",0x3c);
        FUN_00bbc580(puVar1,"crypto\\bio\\bf_buff.c",0x3d);
        return 0;
      }
      *(undefined4 **)(param_1 + 0x28) = puVar1;
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    FUN_00bbc580(puVar1,"crypto\\bio\\bf_buff.c",0x36);
  }
  return 0;
}



undefined4 FUN_00c6a980(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  FUN_00bbc580(*(undefined4 *)(iVar1 + 8),"crypto\\bio\\bf_buff.c",0x4e);
  FUN_00bbc580(*(undefined4 *)(iVar1 + 0x14),"crypto\\bio\\bf_buff.c",0x4f);
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x28),"crypto\\bio\\bf_buff.c",0x50);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}



int FUN_00c6a9e0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 == 0) {
    return iVar4;
  }
  if (iVar4 == 0) {
    return -2;
  }
  if (((*(int *)(iVar4 + 4) == 0) || (*(int *)(*(int *)(iVar4 + 4) + 0x2c) == 0)) ||
     (param_2 != 0xe)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bio_lib.c",0x2b6,"BIO_callback_ctrl");
    func_0x00bc5160(0x20,0x79,0);
    return -2;
  }
  piVar1 = (int *)(iVar4 + 0xc);
  if (*(code **)(iVar4 + 8) == (code *)0x0) {
    if (*piVar1 == 0) goto LAB_00baa66e;
    pcVar2 = (code *)*piVar1;
LAB_00baa63e:
    iVar3 = (*pcVar2)(iVar4,6,&param_3,0,0xe,0,1,0);
  }
  else {
    pcVar2 = *(code **)(iVar4 + 0xc);
    if (pcVar2 != (code *)0x0) goto LAB_00baa63e;
    iVar3 = (**(code **)(iVar4 + 8))(iVar4,6,&param_3,0xe,0,1);
  }
  if (iVar3 < 1) {
    return iVar3;
  }
LAB_00baa66e:
  iVar3 = (**(code **)(*(int *)(iVar4 + 4) + 0x2c))(iVar4,0xe,param_3);
  if (*(code **)(iVar4 + 8) == (code *)0x0) {
    if (*piVar1 == 0) {
      return iVar3;
    }
    pcVar2 = (code *)*piVar1;
  }
  else {
    pcVar2 = (code *)*piVar1;
    if (pcVar2 == (code *)0x0) {
      iVar4 = (**(code **)(iVar4 + 8))(iVar4,0x86,&param_3,0xe,0,iVar3);
      return iVar4;
    }
  }
  iVar4 = (*pcVar2)(iVar4,0x86,&param_3,0,0xe,0,iVar3,0);
  return iVar4;
}



int FUN_00c6aa10(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if ((*piVar1 == 5) || (iVar2 = func_0x00c6b640(param_1,piVar1), 0 < iVar2)) {
    if (piVar1[10] != 0) {
      func_0x00baa700(param_1,0xf);
      iVar2 = func_0x00bab6e0(piVar1[10],param_2,param_3);
      uVar3 = func_0x00bab6a0(piVar1[10],0xf);
      func_0x00bab680(param_1,uVar3);
      return iVar2;
    }
    WSASetLastError(0);
    iVar2 = send(*(SOCKET *)(param_1 + 0x24),param_2,param_3,0);
    func_0x00baa700(param_1,0xf);
    if ((iVar2 < 1) && (iVar4 = func_0x00c07e10(iVar2), iVar4 != 0)) {
      func_0x00bab680(param_1,10);
    }
  }
  return iVar2;
}



int FUN_00c6aac0(int param_1,char *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = *(int **)(param_1 + 0x28);
  if ((*piVar1 == 5) || (iVar4 = func_0x00c6b640(param_1,piVar1), 0 < iVar4)) {
    if (piVar1[10] != 0) {
      func_0x00baa700(param_1,0xf);
      iVar4 = func_0x00bab230(piVar1[10],param_2,param_3);
      uVar2 = func_0x00bab6a0(piVar1[10],0xf);
      func_0x00bab680(param_1,uVar2);
      return iVar4;
    }
    if (param_2 != (char *)0x0) {
      WSASetLastError(0);
      iVar4 = recv(*(SOCKET *)(param_1 + 0x24),param_2,param_3,0);
      func_0x00baa700(param_1,0xf);
      if (iVar4 < 1) {
        iVar3 = func_0x00c07e10(iVar4);
        if (iVar3 != 0) {
          func_0x00bab680(param_1,9);
          return iVar4;
        }
        if (iVar4 == 0) {
          *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x800;
        }
      }
    }
  }
  return iVar4;
}



int FUN_00c6ab80(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  piVar2 = *(int **)(param_1 + 0x28);
  if ((*piVar2 == 5) || (iVar3 = func_0x00c6b640(param_1,piVar2), 0 < iVar3)) {
    if (piVar2[10] != 0) {
      func_0x00baa700(param_1,0xf);
      iVar3 = func_0x00bab6e0(piVar2[10],param_2,(int)pcVar6 - (int)(param_2 + 1));
      uVar4 = func_0x00bab6a0(piVar2[10],0xf);
      func_0x00bab680(param_1,uVar4);
      return iVar3;
    }
    WSASetLastError(0);
    iVar3 = send(*(SOCKET *)(param_1 + 0x24),param_2,(int)pcVar6 - (int)(param_2 + 1),0);
    func_0x00baa700(param_1,0xf);
    if ((iVar3 < 1) && (iVar5 = func_0x00c07e10(iVar3), iVar5 != 0)) {
      func_0x00bab680(param_1,10);
    }
  }
  return iVar3;
}



int FUN_00c6ac30(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *buf;
  int iVar4;
  
  func_0x00e87f70();
  iVar4 = 0;
  if (param_3 == (char *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x300,"conn_gets");
    func_0x00bc5160(0x20,0xc0102,0);
    return -1;
  }
  if (param_4 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x304,"conn_gets");
    func_0x00bc5160(0x20,0x7d,0);
    return -1;
  }
  *param_3 = '\0';
  if ((param_2 == 0) || (piVar2 = *(int **)(param_2 + 0x28), piVar2 == (int *)0x0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x30a,"conn_gets");
    func_0x00bc5160(0x20,0xc0102,0);
    return -1;
  }
  if ((*piVar2 != 5) && (iVar4 = func_0x00c6b640(param_2,piVar2), iVar4 < 1)) {
    return iVar4;
  }
  if (piVar2[10] != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_conn.c",0x315,"conn_gets");
    func_0x00bc5160(0x20,0xc0101,0);
    return -1;
  }
  WSASetLastError(0);
  buf = param_3;
  if (param_4 < 2) {
LAB_00c6ad9c:
    *buf = '\0';
    if (0 < iVar4) goto LAB_00c6adac;
  }
  else {
    while( true ) {
      param_4 = param_4 + -1;
      iVar4 = recv(*(SOCKET *)(param_2 + 0x24),buf,1,0);
      func_0x00baa700(param_2,0xf);
      if (iVar4 < 1) break;
      cVar1 = *buf;
      buf = buf + 1;
      if (cVar1 == '\n') goto LAB_00c6ad9c;
      if (param_4 < 2) {
        *buf = '\0';
        return (int)buf - (int)param_3;
      }
    }
    iVar3 = func_0x00c07e10(iVar4);
    if (iVar3 == 0) {
      if (iVar4 != 0) goto LAB_00c6ad9c;
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x800;
      *buf = '\0';
    }
    else {
      func_0x00bab680(param_2,9);
      *buf = '\0';
    }
  }
  if ((*(uint *)(param_2 + 0x1c) & 0x800) == 0) {
    return iVar4;
  }
LAB_00c6adac:
  return (int)buf - (int)param_3;
}



uint FUN_00c6adf0(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  size_t sVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = 1;
  piVar1 = *(int **)(param_1 + 0x28);
  switch(param_2) {
  case 1:
    *piVar1 = 1;
    func_0x00c6b600(param_1);
    func_0x00bcaf00(piVar1[7]);
    piVar1[7] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  case 2:
    return *(uint *)(param_1 + 0x1c) >> 0xb & 1;
  case 8:
    return *(uint *)(param_1 + 0x18);
  case 9:
    *(uint *)(param_1 + 0x18) = param_3;
    return 1;
  case 0xb:
    goto LAB_00c6b22e;
  case 0xc:
    if (piVar1[3] != 0) {
      func_0x00baa730(param_4,100,0,piVar1[3]);
    }
    if (piVar1[4] != 0) {
      func_0x00baa730(param_4,100,1,piVar1[4]);
    }
    func_0x00baaeb0(param_4,100,3,piVar1[1]);
    func_0x00baa730(param_4,0x9b,piVar1[5],0);
    func_0x00baa5f0(param_4,0xe,piVar1[9]);
    return 1;
  case 0xf:
    *param_4 = piVar1[9];
    return 1;
  case 0x2e:
  case 0x5d:
    if (*piVar1 != 5) {
      func_0x00c6b640(param_1,piVar1);
    }
    if (((2 < *piVar1) && (piVar1[8] != 0)) &&
       (_Src = (void *)func_0x00bcaee0(piVar1[8]), _Src != (void *)0x0)) {
      sVar4 = func_0x00bcb070(_Src);
      if ((param_3 == 0) || ((int)sVar4 < (int)param_3)) {
        param_3 = sVar4;
      }
      memcpy(param_4,_Src,param_3);
      return param_3;
    }
    break;
  case 0x5b:
  case 0x5c:
    if (*piVar1 != 5) {
      func_0x00c6b640(param_1,piVar1);
    }
    if (2 < *piVar1) {
      *param_4 = 1;
      param_4[1] = *(int *)(param_1 + 0x24);
      return 1;
    }
    break;
  case 100:
    if (param_4 == (int *)0x0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
    if (param_3 == 0) {
      iVar2 = piVar1[4];
      piVar6 = piVar1 + 3;
      FUN_00bbc580(*piVar6,"crypto\\bio\\bss_conn.c",0x20e);
      *piVar6 = 0;
      uVar5 = func_0x00bcb1f0(param_4,piVar6,piVar1 + 4,0);
      if (iVar2 == piVar1[4]) {
        return uVar5;
      }
      FUN_00bbc580(iVar2,"crypto\\bio\\bss_conn.c",0x215);
      return uVar5;
    }
    if (param_3 == 1) {
      FUN_00bbc580(piVar1[4],"crypto\\bio\\bss_conn.c",0x217);
      iVar2 = func_0x00bbbc70(param_4,"crypto\\bio\\bss_conn.c",0x218);
      piVar1[4] = iVar2;
      return (uint)(iVar2 != 0);
    }
    if (param_3 == 2) {
      iVar2 = func_0x00bcafb0(param_4,1);
      iVar3 = func_0x00bcb040(param_4,1);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        FUN_00bbc580(piVar1[3],"crypto\\bio\\bss_conn.c",0x221);
        piVar1[3] = iVar2;
        FUN_00bbc580(piVar1[4],"crypto\\bio\\bss_conn.c",0x223);
        piVar1[4] = iVar3;
        func_0x00bcaf00(piVar1[7]);
        piVar1[7] = 0;
        piVar1[8] = 0;
        return 1;
      }
      FUN_00bbc580(iVar2,"crypto\\bio\\bss_conn.c",0x229);
      FUN_00bbc580(iVar3,"crypto\\bio\\bss_conn.c",0x22a);
      return 0;
    }
    if (param_3 == 3) {
      piVar1[1] = *param_4;
      return 1;
    }
    break;
  case 0x65:
    if (*piVar1 == 5) {
      return 1;
    }
    uVar5 = func_0x00c6b640(param_1,piVar1);
    return uVar5;
  case 0x66:
    uVar5 = piVar1[5] | 8;
    if (param_3 == 0) {
      uVar5 = piVar1[5] & 0xfffffff7;
    }
    piVar1[5] = uVar5;
    if (piVar1[10] == 0) {
      return 1;
    }
    uVar5 = func_0x00baa730(piVar1[10],0x66,param_3,0);
    return uVar5;
  case 0x69:
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0xffffffff;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *(int *)(param_1 + 0x24);
    }
    return *(uint *)(param_1 + 0x24);
  case 0x7b:
    if (param_4 != (int *)0x0) {
      if (param_3 == 0) {
        *param_4 = piVar1[3];
        return 1;
      }
      if (param_3 == 1) {
        *param_4 = piVar1[4];
        return 1;
      }
      if (param_3 == 2) {
        iVar2 = func_0x00bcaee0(piVar1[8]);
        *param_4 = iVar2;
        return 1;
      }
      if (param_3 == 3) {
        iVar2 = func_0x00bcaef0(piVar1[8]);
        if (iVar2 == 0) {
          return piVar1[1];
        }
        if (iVar2 != 2) {
          if (iVar2 != 0x17) {
            return 0xffffffff;
          }
          return 6;
        }
        return 4;
      }
      if (param_3 == 4) {
        return piVar1[5];
      }
    }
    break;
  case 0x9b:
    piVar1[5] = param_3;
    piVar1[6] = param_3 >> 5 & 1;
    return 1;
  case 0x9d:
    if (((param_3 == 1) || (param_3 == 2)) && (*piVar1 < 2)) {
      piVar1[2] = param_3;
      return 1;
    }
    break;
  case 0x9e:
    return piVar1[2];
  case 0x9f:
    if (piVar1[10] != 0) {
      *param_4 = piVar1[10];
      return 1;
    }
  }
  uVar5 = 0;
LAB_00c6b22e:
  return uVar5;
}



undefined4 FUN_00c6b330(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined4 *)FUN_00bbc830(0x2c,"crypto\\bio\\bss_conn.c",0x12a);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  *puVar1 = 1;
  puVar1[1] = 0x100;
  puVar1[2] = 1;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  return 1;
}



undefined4 FUN_00c6b390(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  func_0x00baa8e0(*(undefined4 *)(iVar1 + 0x28));
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(SOCKET *)(param_1 + 0x24) != 0xffffffff) {
      if (**(int **)(param_1 + 0x28) == 5) {
        shutdown(*(SOCKET *)(param_1 + 0x24),2);
      }
      func_0x00c07ee0(*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    }
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0xc),"crypto\\bio\\bss_conn.c",0x136);
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0x10),"crypto\\bio\\bss_conn.c",0x137);
    func_0x00bcaf00(*(undefined4 *)(iVar1 + 0x1c));
    FUN_00bbc580(iVar1,"crypto\\bio\\bss_conn.c",0x139);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 1;
}

