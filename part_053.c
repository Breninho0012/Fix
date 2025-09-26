
undefined4 FUN_00ccf300(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x6c,"providers\\implementations\\digests\\sm3_prov.c",0x12);
    return uVar2;
  }
  return 0;
}



void FUN_00ccf320(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x6c,"providers\\implementations\\digests\\sm3_prov.c",0x12);
  return;
}



undefined4 * FUN_00ccf340(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00bbc4f0(0x6c,"providers\\implementations\\digests\\sm3_prov.c",0x12)
    ;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccf380(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x1f < param_4)) {
    iVar1 = func_0x00c93970(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x20;
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccf3c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb7240(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccf3f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x60,"providers\\implementations\\digests\\ripemd_prov.c",0x18);
    return uVar2;
  }
  return 0;
}



void FUN_00ccf410(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x60,"providers\\implementations\\digests\\ripemd_prov.c",0x18);
  return;
}



undefined4 * FUN_00ccf430(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)
             FUN_00bbc4f0(0x60,"providers\\implementations\\digests\\ripemd_prov.c",0x18);
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *puVar5 = *param_1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar3 = param_1[7];
      puVar5[4] = param_1[4];
      puVar5[5] = uVar1;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar3 = param_1[0xb];
      puVar5[8] = param_1[8];
      puVar5[9] = uVar1;
      puVar5[10] = uVar2;
      puVar5[0xb] = uVar3;
      uVar1 = param_1[0xd];
      uVar2 = param_1[0xe];
      uVar3 = param_1[0xf];
      puVar5[0xc] = param_1[0xc];
      puVar5[0xd] = uVar1;
      puVar5[0xe] = uVar2;
      puVar5[0xf] = uVar3;
      uVar1 = param_1[0x11];
      uVar2 = param_1[0x12];
      uVar3 = param_1[0x13];
      puVar5[0x10] = param_1[0x10];
      puVar5[0x11] = uVar1;
      puVar5[0x12] = uVar2;
      puVar5[0x13] = uVar3;
      uVar1 = param_1[0x15];
      uVar2 = param_1[0x16];
      uVar3 = param_1[0x17];
      puVar5[0x14] = param_1[0x14];
      puVar5[0x15] = uVar1;
      puVar5[0x16] = uVar2;
      puVar5[0x17] = uVar3;
      return puVar5;
    }
  }
  return puVar5;
}



undefined4 FUN_00ccf490(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x13 < param_4)) {
    iVar1 = func_0x00c8f4e0(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x14;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccf4d0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x14,0);
  return;
}



bool FUN_00ccf4f0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  return iVar1 != 0;
}



undefined4 FUN_00ccf500(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(1,"providers\\implementations\\digests\\null_prov.c",0x34);
    return uVar2;
  }
  return 0;
}



void FUN_00ccf520(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,1,"providers\\implementations\\digests\\null_prov.c",0x34);
  return;
}



undefined1 * FUN_00ccf540(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = (undefined1 *)FUN_00bbc4f0(1,"providers\\implementations\\digests\\null_prov.c",0x34);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *param_1;
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccf570(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    *param_3 = 0;
    return 1;
  }
  return 0;
}



void FUN_00ccf590(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0,0,0);
  return;
}



void FUN_00ccf5b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  FUN_00bbc830(0xc,"providers\\implementations\\ciphers\\cipher_null.c",0x1e);
  return;
}



void FUN_00ccf5d0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\ciphers\\cipher_null.c",0x24);
  return;
}



undefined4 FUN_00ccf5f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = 1;
  return 1;
}



undefined4
FUN_00ccf610(int *param_1,void *param_2,uint *param_3,uint param_4,void *param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    if ((*param_1 == 0) && (uVar1 = param_1[1], uVar1 != 0)) {
      if (param_6 < uVar1) {
        return 0;
      }
      iVar2 = param_6 - uVar1;
      param_6 = param_6 - uVar1;
      param_1[2] = (int)param_5 + iVar2;
    }
    if (param_6 <= param_4) {
      if ((param_2 != (void *)0x0) && (param_5 != param_2)) {
        memcpy(param_2,param_5,param_6);
      }
      *param_3 = param_6;
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccf680(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  *param_3 = 0;
  return 1;
}



void FUN_00ccf6a0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0,0,0,0,8,0);
  return;
}



undefined ** FUN_00ccf6c0(void)

{
  return &PTR_s_keylen_010a6f08;
}



undefined4 FUN_00ccf6d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,"ivlen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x82;
      goto LAB_00ccf705;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x87;
      goto LAB_00ccf705;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"tls-mac");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1000(iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x8d;
LAB_00ccf705:
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_null.c",uVar2,
                      "null_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined ** FUN_00ccf7a0(void)

{
  return &PTR_s_tls_mac_size_010a6f58;
}



undefined4 FUN_00ccf7b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,"tls-mac-size");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc0300(iVar1,param_1 + 4);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_null.c",0xa9,
                      "null_set_ctx_params");
      func_0x00bc5160(0x39,0x67,0);
      return 0;
    }
  }
  return 1;
}



void FUN_00ccf810(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x1f);
  return;
}



int FUN_00ccf840(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc4f0(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x2a);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
      return iVar1;
    }
  }
  return 0;
}



void FUN_00ccf880(undefined4 param_1)

{
  func_0x00ce64b0(param_1,1,0,0,0x100,0x80,0);
  return;
}



int FUN_00ccf8a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x33);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef160(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccf900(undefined4 param_1)

{
  func_0x00ce64b0(param_1,1,0,0,0xc0,0x80,0);
  return;
}



int FUN_00ccf920(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x35);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef160(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccf980(undefined4 param_1)

{
  func_0x00ce64b0(param_1,1,0,0,0x80,0x80,0);
  return;
}



int FUN_00ccf9a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x37);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef160(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfa00(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0,0,0x100,0x80,0x80);
  return;
}



int FUN_00ccfa30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x39);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef0c0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfa90(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0,0,0xc0,0x80,0x80);
  return;
}



int FUN_00ccfac0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x3b);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef0c0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfb20(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0,0,0x80,0x80,0x80);
  return;
}



int FUN_00ccfb50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x3d);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef0c0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfbb0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,4,0,0,0x100,8,0x80);
  return;
}



int FUN_00ccfbd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x3f);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef180(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfc30(undefined4 param_1)

{
  func_0x00ce64b0(param_1,4,0,0,0xc0,8,0x80);
  return;
}



int FUN_00ccfc50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x41);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef180(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfcb0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,4,0,0,0x80,8,0x80);
  return;
}



int FUN_00ccfcd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x43);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef180(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfd30(undefined4 param_1)

{
  func_0x00ce64b0(param_1,3,0,0,0x100,8,0x80);
  return;
}



int FUN_00ccfd50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x45);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef100(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfdb0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,3,0,0,0xc0,8,0x80);
  return;
}



int FUN_00ccfdd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x47);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef100(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00ccfe30(undefined4 param_1)

{
  func_0x00ce64b0(param_1,3,0,0,0x80,8,0x80);
  return;
}



int FUN_00ccfe50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x49);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef100(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00ccfeb0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x4b);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef0e0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00ccff10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x4d);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef0e0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00ccff70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x4f);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef0e0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00ccffd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x51);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef120(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd0030(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x53);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef120(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd0090(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x55);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef120(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd00f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,5,0,0,0x100,8,0x80);
  return;
}



int FUN_00cd0110(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x57);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef140(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd0170(undefined4 param_1)

{
  func_0x00ce64b0(param_1,5,0,0,0xc0,8,0x80);
  return;
}



int FUN_00cd0190(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x59);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef140(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd01f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,5,0,0,0x80,8,0x80);
  return;
}



int FUN_00cd0210(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes.c",0x5b);
    if (iVar1 != 0) {
      uVar2 = func_0x00cef140(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd0270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6290(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd0370(param_1,param_6);
  return;
}



void FUN_00cd02b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6260(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd0370(param_1,param_6);
  return;
}



undefined4 FUN_00cd02f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00bc09d0(param_2,"cts_mode");
  if (iVar1 != 0) {
    iVar2 = func_0x00ceee10(*(undefined4 *)(param_1 + 0x4c));
    if (iVar2 != 0) {
      iVar1 = func_0x00bc12f0(iVar1,iVar2);
      if (iVar1 != 0) goto LAB_00cd0353;
    }
    FUN_00bc4f50();
    func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\ciphers\\cipher_aes_cts.inc"
                    ,0x38,"aes_cbc_cts_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
LAB_00cd0353:
  uVar3 = FUN_00ce62c0(param_1,param_2);
  return uVar3;
}



undefined4 FUN_00cd0370(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,"cts_mode");
  if (iVar1 == 0) {
LAB_00cd03a2:
    uVar2 = FUN_00ce6880(param_1,param_2);
    return uVar2;
  }
  if (*(int *)(iVar1 + 4) == 4) {
    iVar1 = func_0x00ceee30(*(undefined4 *)(iVar1 + 8));
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x4c) = iVar1;
      goto LAB_00cd03a2;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\ciphers\\cipher_aes_cts.inc"
                  ,0x55,"aes_cbc_cts_set_ctx_params");
  func_0x00bc5160(0x39,0x68,0);
  return 0;
}



undefined ** FUN_00cd03e0(void)

{
  return &PTR_s_keylen_010a7ba8;
}



undefined ** FUN_00cd03f0(void)

{
  return &PTR_s_padding_010a7c48;
}



void FUN_00cd0400(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,4,0,0x100,0x80,0x80);
  return;
}



void FUN_00cd0430(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,4,0,0xc0,0x80,0x80);
  return;
}



void FUN_00cd0460(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,4,0,0x80,0x80,0x80);
  return;
}



void FUN_00cd0490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd0970(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



void FUN_00cd04c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd0970(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



undefined4
FUN_00cd04f0(int param_1,int param_2,undefined4 *param_3,char *param_4,int param_5,char *param_6)

{
  int iVar1;
  
  if (param_4 < param_6) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xc9,
                    "aes_xts_stream_update");
    func_0x00bc5160(0x39,0x6a,0);
    return 0;
  }
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if ((((*(int *)(param_1 + 0x270) != 0) && (*(int *)(param_1 + 0x274) != 0)) &&
        ((*(uint *)(param_1 + 0x50) & 4) != 0)) &&
       (((param_2 != 0 && (param_5 != 0)) && ((char *)0xf < param_6)))) {
      if (param_6 < "ampler2DShadow") {
        if (*(code **)(param_1 + 0x280) != (code *)0x0) {
          (**(code **)(param_1 + 0x280))
                    (param_5,param_2,param_6,*(int *)(param_1 + 0x270),*(int *)(param_1 + 0x274),
                     param_1 + 0x20);
          *param_3 = param_6;
          return 1;
        }
        iVar1 = func_0x00bcf9f0(param_1 + 0x270,param_1 + 0x20,param_5,param_2,param_6,
                                *(uint *)(param_1 + 0x50) >> 1 & 1);
        if (iVar1 == 0) {
          *param_3 = param_6;
          return 1;
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xb4,
                        "aes_xts_cipher");
        func_0x00bc5160(0x39,0x94,0);
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xce,
                  "aes_xts_stream_update");
  func_0x00bc5160(0x39,0x66,0);
  return 0;
}



undefined4
FUN_00cd0630(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            int param_6,char *param_7)

{
  int iVar1;
  
  func_0x00e87f70();
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if ((((*(int *)(param_2 + 0x270) != 0) && (*(int *)(param_2 + 0x274) != 0)) &&
        ((*(uint *)(param_2 + 0x50) & 4) != 0)) &&
       (((param_3 != 0 && (param_6 != 0)) && ((char *)0xf < param_7)))) {
      if (param_7 < "ampler2DShadow") {
        if (*(code **)(param_2 + 0x280) != (code *)0x0) {
          (**(code **)(param_2 + 0x280))
                    (param_6,param_3,param_7,*(int *)(param_2 + 0x270),*(int *)(param_2 + 0x274),
                     param_2 + 0x20);
          *param_4 = param_7;
          return 1;
        }
        iVar1 = func_0x00bcf9f0(param_2 + 0x270,param_2 + 0x20,param_6,param_3,param_7,
                                *(uint *)(param_2 + 0x50) >> 1 & 1);
        if (iVar1 == 0) {
          *param_4 = param_7;
          return 1;
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xb4,
                        "aes_xts_cipher");
        func_0x00bc5160(0x39,0x94,0);
      }
    }
  }
  return 0;
}



void FUN_00cd0730(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x288,"providers\\implementations\\ciphers\\cipher_aes_xts.c",0x85);
  return;
}



int FUN_00cd0760(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (((*(int *)(param_1 + 0x270) == 0) || (*(int *)(param_1 + 0x270) == param_1 + 0x80)) &&
       ((*(int *)(param_1 + 0x274) == 0 || (*(int *)(param_1 + 0x274) == param_1 + 0x178)))) {
      iVar1 = FUN_00bbc4f0(0x288,"providers\\implementations\\ciphers\\cipher_aes_xts.c",0x98);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
        return iVar1;
      }
    }
  }
  return 0;
}



bool FUN_00cd07d0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"keylen");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_2);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_xts.c",0xf6,
                        "aes_xts_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return false;
      }
      return param_2 == *(int *)(param_1 + 0x3c);
    }
  }
  return true;
}



undefined ** FUN_00cd0840(void)

{
  return &PTR_s_keylen_010a7e78;
}



void FUN_00cd0850(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10001,2,0,0x200,8,0x80);
  return;
}



int FUN_00cd0880(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x288,"providers\\implementations\\ciphers\\cipher_aes_xts.c",0x77);
  if (iVar1 != 0) {
    uVar2 = func_0x00cef360(0x200,0);
    func_0x00ce67c0(iVar1,0x200,8,0x80,0x10001,2,0,uVar2);
  }
  return iVar1;
}



void FUN_00cd08e0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10001,2,0,0x100,8,0x80);
  return;
}



int FUN_00cd0910(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x288,"providers\\implementations\\ciphers\\cipher_aes_xts.c",0x77);
  if (iVar1 != 0) {
    uVar2 = func_0x00cef360(0x100,0);
    func_0x00ce67c0(iVar1,0x100,8,0x80,0x10001,2,0,uVar2);
  }
  return iVar1;
}



void FUN_00cd0ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd16a0(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



void FUN_00cd0b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd16a0(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



bool FUN_00cd0b30(void)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint in_stack_00000014;
  int in_stack_00000018;
  uint *in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  uint in_stack_00000028;
  undefined4 uVar10;
  
  func_0x00e87f70();
  iVar8 = in_stack_00000018;
  iVar5 = in_stack_00000014;
  if ((*(byte *)(in_stack_00000014 + 0x30c) & 1) == 0) {
    return false;
  }
  iVar1 = func_0x00cd17c0(in_stack_00000014);
  uVar10 = in_stack_00000024;
  if (iVar1 == 0) {
    return false;
  }
  if (in_stack_00000028 == 0) {
    *in_stack_0000001c = 0;
    return true;
  }
  bVar9 = iVar8 != 0;
  in_stack_00000014 = in_stack_00000028;
  piVar6 = (int *)(iVar5 + 0x318);
  if (bVar9) {
    piVar6 = (int *)(iVar5 + 0x314);
  }
  pcVar2 = FUN_00cd1790;
  if (bVar9) {
    pcVar2 = FUN_00cd1620;
  }
  iVar1 = 0x33c;
  if (bVar9) {
    iVar1 = 0x32c;
  }
  uVar7 = 0;
  iVar1 = iVar1 + iVar5;
  if (*piVar6 == 0) {
    uVar3 = in_stack_00000028 & 0xfffffff0;
  }
  else {
    uVar3 = func_0x00cef380(iVar1,piVar6,0x10,&stack0x00000000,&stack0x00000014);
  }
  if (*piVar6 == 0x10) {
    if (in_stack_00000020 < 0x10) {
      FUN_00bc4f50();
      uVar10 = 0xaf;
      goto LAB_00cd0c0e;
    }
    iVar4 = (*pcVar2)(iVar5,iVar1,iVar8,0x10);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0xb3,
                      "aes_ocb_block_update_internal");
      func_0x00bc5160(0x39,0x66,0);
      return false;
    }
    *piVar6 = 0;
    uVar7 = 0x10;
    if (iVar8 != 0) {
      iVar8 = iVar8 + 0x10;
    }
  }
  if (uVar3 != 0) {
    uVar7 = uVar7 + uVar3;
    if (in_stack_00000020 < uVar7) {
      FUN_00bc4f50();
      uVar10 = 0xbe;
LAB_00cd0c0e:
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",uVar10,
                      "aes_ocb_block_update_internal");
      func_0x00bc5160(0x39,0x6a,0);
      return false;
    }
    iVar5 = (*pcVar2)(iVar5,uVar10,iVar8,uVar3);
    if (iVar5 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0xc2,
                      "aes_ocb_block_update_internal");
      func_0x00bc5160(0x39,0x66,0);
      return false;
    }
    in_stack_00000014 = in_stack_00000014 - uVar3;
  }
  if ((in_stack_00000014 != 0) &&
     (iVar5 = func_0x00cef4a0(iVar1,piVar6,0x10,&stack0x00000000,&stack0x00000014), iVar5 == 0)) {
    return false;
  }
  *in_stack_0000001c = uVar7;
  return in_stack_00000014 == 0;
}



undefined4 FUN_00cd0d40(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && ((*(byte *)(param_1 + 0x30c) & 1) != 0)) &&
     (iVar1 = func_0x00cd17c0(param_1), iVar1 != 0)) {
    *param_3 = 0;
    if (*(int *)(param_1 + 0x314) != 0) {
      iVar1 = FUN_00cd1620(param_1,param_1 + 0x32c,param_2,*(int *)(param_1 + 0x314));
      if (iVar1 == 0) {
        return 0;
      }
      *param_3 = *(undefined4 *)(param_1 + 0x314);
      *(undefined4 *)(param_1 + 0x314) = 0;
    }
    if (*(int *)(param_1 + 0x318) != 0) {
      iVar1 = func_0x00cd1670(param_1,param_1 + 0x33c,*(int *)(param_1 + 0x318));
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x310);
    if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
      if ((iVar1 != 0) &&
         (iVar1 = func_0x00bd0c40(param_1 + 0x270,param_1 + 0x31c,iVar1), iVar1 == 0))
      goto LAB_00cd0e24;
    }
    else {
      iVar1 = func_0x00bd0ed0(param_1 + 0x270,param_1 + 0x31c,iVar1);
      if (0 < iVar1) {
LAB_00cd0e24:
        *(undefined4 *)(param_1 + 0x308) = 3;
        return 1;
      }
    }
  }
  return 0;
}



undefined4
FUN_00cd0e40(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 < param_6) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x203,"aes_ocb_cipher");
    func_0x00bc5160(0x39,0x6a,0);
    return 0;
  }
  iVar1 = FUN_00cd1620(param_1,param_5,param_2,param_6);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x208,"aes_ocb_cipher");
    func_0x00bc5160(0x39,0x66,0);
    return 0;
  }
  *param_3 = param_6;
  return 1;
}



void FUN_00cd0ee0(int param_1)

{
  if (param_1 != 0) {
    func_0x00bd05c0(param_1 + 0x270);
    func_0x00ce6840(param_1);
    FUN_00bbc6c0(param_1,0x350,"providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x14a);
  }
  return;
}



undefined4 * FUN_00cd0f20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x350,"providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x156);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = param_1;
      puVar4 = puVar2;
      for (iVar1 = 0xd4; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar1 = func_0x00bd0600(puVar2 + 0x9c,param_1 + 0x9c,puVar2 + 0x20,puVar2 + 0x5e);
      if (iVar1 == 0) {
        FUN_00bbc580(puVar2,"providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x15b);
        puVar2 = (undefined4 *)0x0;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_00cd0fb0(uint *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = (int)param_1;
  iVar4 = func_0x00bc09d0(param_2,"ivlen");
  puVar1 = (uint *)((int)param_1 + 0x40);
  if ((iVar4 != 0) && (iVar4 = func_0x00bc10c0(iVar4,*puVar1), iVar4 == 0)) {
    FUN_00bc4f50();
    uVar6 = 0x1a8;
LAB_00cd0fee:
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",uVar6,
                    "aes_ocb_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
  iVar4 = func_0x00bc09d0(param_2,"keylen");
  if ((iVar4 != 0) &&
     (iVar4 = func_0x00bc10c0(iVar4,*(undefined4 *)((int)param_1 + 0x3c)), iVar4 == 0)) {
    FUN_00bc4f50();
    uVar6 = 0x1ad;
    goto LAB_00cd0fee;
  }
  iVar4 = func_0x00bc09d0(param_2,"taglen");
  if ((iVar4 != 0) &&
     (iVar4 = func_0x00bc10c0(iVar4,*(undefined4 *)((int)param_1 + 0x310)), iVar4 == 0)) {
    FUN_00bc4f50();
    uVar6 = 0x1b3;
    goto LAB_00cd0fee;
  }
  param_1 = (uint *)((int)param_1 + 0x40);
  iVar4 = func_0x00bc09d0(param_2,&DAT_01056ae8);
  if (iVar4 != 0) {
    uVar2 = *puVar1;
    if (*(uint *)(iVar4 + 0xc) < uVar2) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x1bb,
                      "aes_ocb_get_ctx_params");
      func_0x00bc5160(0x39,0x6d,0);
      return 0;
    }
    iVar5 = func_0x00bc1050(iVar4,iVar3,uVar2);
    if ((iVar5 == 0) && (iVar4 = func_0x00bc1000(iVar4,iVar3,*param_1), iVar4 == 0)) {
      FUN_00bc4f50();
      uVar6 = 0x1c0;
      goto LAB_00cd1187;
    }
  }
  iVar4 = func_0x00bc09d0(param_2,"updated-iv");
  if (iVar4 != 0) {
    if (*(uint *)(iVar4 + 0xc) < *param_1) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x1c7,
                      "aes_ocb_get_ctx_params");
      func_0x00bc5160(0x39,0x6d,0);
      return 0;
    }
    iVar5 = func_0x00bc1050(iVar4,iVar3 + 0x20,*param_1);
    if ((iVar5 == 0) &&
       (iVar4 = func_0x00bc1000(iVar4,iVar3 + 0x20,*(undefined4 *)(iVar3 + 0x40)), iVar4 == 0)) {
      FUN_00bc4f50();
      uVar6 = 0x1cc;
LAB_00cd1187:
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",uVar6,
                      "aes_ocb_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
  }
  iVar4 = func_0x00bc09d0(param_2,&DAT_0103d958);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 4) != 5) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x1d3,
                      "aes_ocb_get_ctx_params");
      func_0x00bc5160(0x39,0x67,0);
      return 0;
    }
    if (((*(byte *)(iVar3 + 0x50) & 2) == 0) ||
       (*(size_t *)(iVar4 + 0xc) != *(size_t *)(iVar3 + 0x310))) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x1d7,
                      "aes_ocb_get_ctx_params");
      func_0x00bc5160(0x39,0x76,0);
      return 0;
    }
    memcpy(*(void **)(iVar4 + 8),(void *)(iVar3 + 0x31c),*(size_t *)(iVar3 + 0x310));
  }
  return 1;
}



undefined4 FUN_00cd1250(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_2;
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = func_0x00bc09d0(param_2,&DAT_0103d958);
  iVar1 = param_1;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 5) {
      FUN_00bc4f50();
      uVar4 = 0x16d;
      goto LAB_00cd128d;
    }
    if (*(void **)(iVar2 + 8) == (void *)0x0) {
      if (0x10 < *(uint *)(iVar2 + 0xc)) {
        FUN_00bc4f50();
        uVar4 = 0x173;
LAB_00cd12c8:
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",uVar4,
                        "aes_ocb_set_ctx_params");
        func_0x00bc5160(0x39,0x76,0);
        return 0;
      }
      *(uint *)(param_1 + 0x310) = *(uint *)(iVar2 + 0xc);
    }
    else {
      if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x179,
                        "aes_ocb_set_ctx_params");
        func_0x00bc5160(0x39,0x80106,0);
        return 0;
      }
      if (*(size_t *)(iVar2 + 0xc) != *(size_t *)(param_1 + 0x310)) {
        FUN_00bc4f50();
        uVar4 = 0x17d;
        goto LAB_00cd12c8;
      }
      memcpy((void *)(param_1 + 0x31c),*(void **)(iVar2 + 8),*(size_t *)(iVar2 + 0xc));
    }
  }
  iVar2 = func_0x00bc09d0(iVar3,"ivlen");
  if (iVar2 != 0) {
    iVar2 = func_0x00bc0300(iVar2,&param_2);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar4 = 0x186;
      goto LAB_00cd128d;
    }
    if (0xe < param_2 - 1U) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x40) != param_2) {
      *(int *)(iVar1 + 0x40) = param_2;
      *(undefined4 *)(iVar1 + 0x308) = 0;
    }
  }
  iVar3 = func_0x00bc09d0(iVar3,"keylen");
  if (iVar3 == 0) {
    return 1;
  }
  iVar3 = func_0x00bc0300(iVar3,&param_1);
  if (iVar3 != 0) {
    if (*(int *)(iVar1 + 0x3c) == param_1) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x19a,
                    "aes_ocb_set_ctx_params");
    func_0x00bc5160(0x39,0x69,0);
    return 0;
  }
  FUN_00bc4f50();
  uVar4 = 0x196;
LAB_00cd128d:
  func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_ocb.c",uVar4,
                  "aes_ocb_set_ctx_params");
  func_0x00bc5160(0x39,0x67,0);
  return 0;
}



undefined ** FUN_00cd1420(void)

{
  return &PTR_s_keylen_010a8098;
}



undefined ** FUN_00cd1430(void)

{
  return &PTR_s_keylen_010a8128;
}



void FUN_00cd1440(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10003,3,0,0x100,0x80,0x60);
  return;
}



int FUN_00cd1470(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x350,"providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x13a);
  if (iVar1 != 0) {
    uVar2 = func_0x00cef730(0x100,0);
    func_0x00ce67c0(iVar1,0x100,0x80,0x60,0x10003,3,0,uVar2);
    *(undefined4 *)(iVar1 + 0x310) = 0x10;
  }
  return iVar1;
}



void FUN_00cd14e0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10003,3,0,0xc0,0x80,0x60);
  return;
}



int FUN_00cd1510(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x350,"providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x13a);
  if (iVar1 != 0) {
    uVar2 = func_0x00cef730(0xc0,0);
    func_0x00ce67c0(iVar1,0xc0,0x80,0x60,0x10003,3,0,uVar2);
    *(undefined4 *)(iVar1 + 0x310) = 0x10;
  }
  return iVar1;
}



void FUN_00cd1580(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10003,3,0,0x80,0x80,0x60);
  return;
}



int FUN_00cd15b0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x350,"providers\\implementations\\ciphers\\cipher_aes_ocb.c",0x13a);
  if (iVar1 != 0) {
    uVar2 = func_0x00cef730(0x80,0);
    func_0x00ce67c0(iVar1,0x80,0x80,0x60,0x10003,3,0,uVar2);
    *(undefined4 *)(iVar1 + 0x310) = 0x10;
  }
  return iVar1;
}



bool FUN_00cd1620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    iVar1 = func_0x00bd0680(param_1 + 0x270,param_2,param_3,param_4);
    return iVar1 != 0;
  }
  iVar1 = func_0x00bd0940();
  if (iVar1 != 0) {
    return true;
  }
  return false;
}



bool FUN_00cd1790(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00bd03a0(param_1 + 0x270,param_2,param_4);
  return iVar1 == 1;
}



void FUN_00cd1810(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x388,"providers\\implementations\\ciphers\\cipher_aes_gcm.c",0x3c);
  return;
}



void FUN_00cd1830(undefined4 param_1)

{
  func_0x00ce64b0(param_1,6,3,0,0x80,8,0x60);
  return;
}



int FUN_00cd1850(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x388,"providers\\implementations\\ciphers\\cipher_aes_gcm.c",0x1e);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf05b0(0x80);
    func_0x00ceff20(param_1,iVar1,0x80,uVar2);
  }
  return iVar1;
}



int FUN_00cd18a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_1 != 0)) {
    iVar1 = func_0x00bbbc30(param_1,0x388,"providers\\implementations\\ciphers\\cipher_aes_gcm.c",
                            0x30);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x248) != 0)) {
      *(int *)(iVar1 + 0x248) = iVar1 + 0x288;
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd18f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,6,3,0,0xc0,8,0x60);
  return;
}



int FUN_00cd1910(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x388,"providers\\implementations\\ciphers\\cipher_aes_gcm.c",0x1e);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf05b0(0xc0);
    func_0x00ceff20(param_1,iVar1,0xc0,uVar2);
  }
  return iVar1;
}



void FUN_00cd1960(undefined4 param_1)

{
  func_0x00ce64b0(param_1,6,3,0,0x100,8,0x60);
  return;
}



int FUN_00cd1980(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x388,"providers\\implementations\\ciphers\\cipher_aes_gcm.c",0x1e);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf05b0(0x100);
    func_0x00ceff20(param_1,iVar1,0x100,uVar2);
  }
  return iVar1;
}



void FUN_00cd19d0(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x178,"providers\\implementations\\ciphers\\cipher_aes_ccm.c",0x40);
  return;
}



void FUN_00cd19f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,7,3,0,0x80,8,0x60);
  return;
}



int FUN_00cd1a10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x178,"providers\\implementations\\ciphers\\cipher_aes_ccm.c",0x1e);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1120(0x80);
    func_0x00cf0c90(iVar1,0x80,uVar2);
  }
  return iVar1;
}



int FUN_00cd1a60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_1 != 0)) {
    iVar1 = func_0x00bbbc30(param_1,0x178,"providers\\implementations\\ciphers\\cipher_aes_ccm.c",
                            0x2e);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 100) = iVar1 + 0x80;
      return iVar1;
    }
  }
  return 0;
}



void FUN_00cd1aa0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,7,3,0,0xc0,8,0x60);
  return;
}



int FUN_00cd1ac0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x178,"providers\\implementations\\ciphers\\cipher_aes_ccm.c",0x1e);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1120(0xc0);
    func_0x00cf0c90(iVar1,0xc0,uVar2);
  }
  return iVar1;
}



void FUN_00cd1b10(undefined4 param_1)

{
  func_0x00ce64b0(param_1,7,3,0,0x100,8,0x60);
  return;
}



int FUN_00cd1b30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x178,"providers\\implementations\\ciphers\\cipher_aes_ccm.c",0x1e);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1120(0x100);
    func_0x00cf0c90(iVar1,0x100,uVar2);
  }
  return iVar1;
}



void FUN_00cd1b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd2580(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



void FUN_00cd1bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd2580(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



undefined4
FUN_00cd1be0(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (param_6 == 0) {
      *param_3 = 0;
      return 1;
    }
    if (param_4 < param_6) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_wrp.c",0xfb,"aes_wrap_cipher"
                     );
      func_0x00bc5160(0x39,0x6a,0);
    }
    else {
      iVar1 = func_0x00cd2410(param_1,param_2,param_5,param_6);
      if (iVar1 != 0) {
        *param_3 = iVar1;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00cd1c60(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x61);
  return;
}



undefined4 FUN_00cd1c90(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  func_0x00e87f70();
  if (param_3 != 0) {
    iVar1 = func_0x00bc09d0(param_3,"keylen");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&stack0x00000000);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x113,
                        "aes_wrap_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      if (*(int *)(param_2 + 0x3c) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x117,
                        "aes_wrap_set_ctx_params");
        func_0x00bc5160(0x39,0x69,0);
        return 0;
      }
    }
  }
  return 1;
}



int FUN_00cd1d40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_1 != 0)) {
    iVar1 = func_0x00bbbc30(param_1,0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",
                            0x4f);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) && (*(int *)(iVar1 + 0x5c) != 0)) {
      iVar2 = func_0x00bbbc30(*(int *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x60),
                              "providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x53);
      *(int *)(iVar1 + 0x58) = iVar2;
      if (iVar2 == 0) {
        FUN_00bbc580(iVar1,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x55);
        iVar1 = 0;
      }
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd1db0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,2,0,0x100,0x40,0x40);
  return;
}



int FUN_00cd1dd0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x100,0x40,0x40,0x10002,2,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd1e30(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,2,0,0xc0,0x40,0x40);
  return;
}



int FUN_00cd1e50(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0xc0,0x40,0x40,0x10002,2,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd1eb0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,2,0,0x80,0x40,0x40);
  return;
}



int FUN_00cd1ed0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x80,0x40,0x40,0x10002,2,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd1f30(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,2,0,0x100,0x40,0x20);
  return;
}



int FUN_00cd1f50(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x100,0x40,0x20,0x10002,2,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd1fb0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,2,0,0xc0,0x40,0x20);
  return;
}



int FUN_00cd1fd0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0xc0,0x40,0x20,0x10002,2,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd2030(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,2,0,0x80,0x40,0x20);
  return;
}



int FUN_00cd2050(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x80,0x40,0x20,0x10002,2,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd20b0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,0x202,0,0x100,0x40,0x40);
  return;
}



int FUN_00cd20e0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x100,0x40,0x40,0x10002,0x202,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd2140(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,0x202,0,0xc0,0x40,0x40);
  return;
}



int FUN_00cd2170(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0xc0,0x40,0x40,0x10002,0x202,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd21d0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,0x202,0,0x80,0x40,0x40);
  return;
}



int FUN_00cd2200(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x80,0x40,0x40,0x10002,0x202,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd2260(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,0x202,0,0x100,0x40,0x20);
  return;
}



int FUN_00cd2290(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x100,0x40,0x20,0x10002,0x202,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd22f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,0x202,0,0xc0,0x40,0x20);
  return;
}



int FUN_00cd2320(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0xc0,0x40,0x20,0x10002,0x202,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd2380(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,0x202,0,0x80,0x40,0x20);
  return;
}



int FUN_00cd23b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x180,"providers\\implementations\\ciphers\\cipher_aes_wrp.c",0x3b);
  if (iVar1 != 0) {
    func_0x00ce67c0(iVar1,0x80,0x40,0x20,0x10002,0x202,0,0,0);
    *(uint *)(iVar1 + 0x50) =
         (uint)(*(int *)(iVar1 + 0x40) == 4) | *(uint *)(iVar1 + 0x50) & 0xfffffffe;
  }
  return iVar1;
}



void FUN_00cd26f0(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x3a0,"providers\\implementations\\ciphers\\cipher_aria_gcm.c",0x32);
  return;
}



int FUN_00cd2710(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x3a0,"providers\\implementations\\ciphers\\cipher_aria_gcm.c",0x17);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1190(0x80);
    func_0x00ceff20(param_1,iVar1,0x80,uVar2);
  }
  return iVar1;
}



void FUN_00cd2760(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = func_0x00bbbc30(param_1,0x3a0,"providers\\implementations\\ciphers\\cipher_aria_gcm.c",
                          0x26);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x248) != 0)) {
    *(int *)(iVar1 + 0x248) = iVar1 + 0x288;
  }
  return;
}



int FUN_00cd27a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x3a0,"providers\\implementations\\ciphers\\cipher_aria_gcm.c",0x17);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1190(0xc0);
    func_0x00ceff20(param_1,iVar1,0xc0,uVar2);
  }
  return iVar1;
}



int FUN_00cd27f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x3a0,"providers\\implementations\\ciphers\\cipher_aria_gcm.c",0x17);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1190(0x100);
    func_0x00ceff20(param_1,iVar1,0x100,uVar2);
  }
  return iVar1;
}



void FUN_00cd2840(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x188,"providers\\implementations\\ciphers\\cipher_aria_ccm.c",0x32);
  return;
}



int FUN_00cd2860(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_aria_ccm.c",0x19);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf11f0(0x80);
    func_0x00cf0c90(iVar1,0x80,uVar2);
  }
  return iVar1;
}



void FUN_00cd28b0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = func_0x00bbbc30(param_1,0x188,"providers\\implementations\\ciphers\\cipher_aria_ccm.c",
                          0x27);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 100) != 0)) {
    *(int *)(iVar1 + 100) = iVar1 + 0x70;
  }
  return;
}



int FUN_00cd28e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_aria_ccm.c",0x19);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf11f0(0xc0);
    func_0x00cf0c90(iVar1,0xc0,uVar2);
  }
  return iVar1;
}



int FUN_00cd2930(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_aria_ccm.c",0x19);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf11f0(0x100);
    func_0x00cf0c90(iVar1,0x100,uVar2);
  }
  return iVar1;
}



void FUN_00cd2980(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x18);
  return;
}



int FUN_00cd29b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc4f0(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x23);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
      return iVar1;
    }
  }
  return 0;
}



int FUN_00cd29f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x2c);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1300(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2a50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x2e);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1300(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2ab0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x30);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1300(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2b10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x32);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12b0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2b70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x34);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12b0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2bd0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x36);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12b0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2c30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x38);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1310(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2c90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x3a);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1310(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2cf0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x3c);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1310(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2d50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x3e);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12d0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2db0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x40);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12d0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2e10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x42);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12d0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2e70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x44);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12c0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2ed0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x46);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12c0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2f30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x48);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12c0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd2f90(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x4a);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12e0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3000(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x4c);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12e0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3060(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x4e);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12e0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd30c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x50);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12f0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3120(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x52);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12f0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3180(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_aria.c",0x54);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf12f0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd31e0(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x1e);
  return;
}



int FUN_00cd3210(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc4f0(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x29);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
      return iVar1;
    }
  }
  return 0;
}



int FUN_00cd3250(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x32);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1420(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd32b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x34);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1420(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3310(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x36);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1420(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3370(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x38);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13d0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd33d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x3a);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13d0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3430(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x3c);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13d0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3490(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x3e);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1430(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd34f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x40);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1430(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3550(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x42);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1430(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd35b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x44);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13f0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3610(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x46);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13f0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3670(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x48);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13f0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd36d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x4a);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13e0(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3730(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x4c);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13e0(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3790(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x4e);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf13e0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd37f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x50);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1400(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3850(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x52);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1400(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd38b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x54);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1400(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3910(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x56);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1410(0x100,param_1);
      func_0x00ce67c0(iVar1,0x100,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3970(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x58);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1410(0xc0,param_1);
      func_0x00ce67c0(iVar1,0xc0,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd39d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x198,"providers\\implementations\\ciphers\\cipher_camellia.c",0x5a);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1410(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd3a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6290(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd3b30(param_1,param_6);
  return;
}



void FUN_00cd3a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6260(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd3b30(param_1,param_6);
  return;
}



undefined4 FUN_00cd3ab0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00bc09d0(param_2,"cts_mode");
  if (iVar1 != 0) {
    iVar2 = func_0x00ceee10(*(undefined4 *)(param_1 + 0x4c));
    if (iVar2 != 0) {
      iVar1 = func_0x00bc12f0(iVar1,iVar2);
      if (iVar1 != 0) goto LAB_00cd3b13;
    }
    FUN_00bc4f50();
    func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\ciphers\\cipher_camellia_cts.inc"
                    ,0x38,"camellia_cbc_cts_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
LAB_00cd3b13:
  uVar3 = FUN_00ce62c0(param_1,param_2);
  return uVar3;
}



undefined4 FUN_00cd3b30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,"cts_mode");
  if (iVar1 == 0) {
LAB_00cd3b62:
    uVar2 = FUN_00ce6880(param_1,param_2);
    return uVar2;
  }
  if (*(int *)(iVar1 + 4) == 4) {
    iVar1 = func_0x00ceee30(*(undefined4 *)(iVar1 + 8));
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x4c) = iVar1;
      goto LAB_00cd3b62;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\providers\\implementations\\ciphers\\cipher_camellia_cts.inc"
                  ,0x55,"camellia_cbc_cts_set_ctx_params");
  func_0x00bc5160(0x39,0x68,0);
  return 0;
}



undefined ** FUN_00cd3ba0(void)

{
  return &PTR_s_keylen_010aa3b0;
}



undefined ** FUN_00cd3bb0(void)

{
  return &PTR_s_padding_010aa450;
}



void FUN_00cd3bc0(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x308,"providers\\implementations\\ciphers\\cipher_sm4_gcm.c",0x33);
  return;
}



int FUN_00cd3be0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x308,"providers\\implementations\\ciphers\\cipher_sm4_gcm.c",0x19);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1490(0x80);
    func_0x00ceff20(param_1,iVar1,0x80,uVar2);
  }
  return iVar1;
}



void FUN_00cd3c30(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = func_0x00bbbc30(param_1,0x308,"providers\\implementations\\ciphers\\cipher_sm4_gcm.c",0x28
                         );
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x248) != 0)) {
    *(int *)(iVar1 + 0x248) = iVar1 + 0x288;
  }
  return;
}



void FUN_00cd3c70(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0xf0,"providers\\implementations\\ciphers\\cipher_sm4_ccm.c",0x32);
  return;
}



int FUN_00cd3c90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0xf0,"providers\\implementations\\ciphers\\cipher_sm4_ccm.c",0x19);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf14e0(0x80);
    func_0x00cf0c90(iVar1,0x80,uVar2);
  }
  return iVar1;
}



void FUN_00cd3ce0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = func_0x00bbbc30(param_1,0xf0,"providers\\implementations\\ciphers\\cipher_sm4_ccm.c",0x27)
  ;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 100) != 0)) {
    *(int *)(iVar1 + 100) = iVar1 + 0x70;
  }
  return;
}



void FUN_00cd3d10(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x100,"providers\\implementations\\ciphers\\cipher_sm4.c",0x18);
  return;
}



int FUN_00cd3d40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc4f0(0x100,"providers\\implementations\\ciphers\\cipher_sm4.c",0x23);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
      return iVar1;
    }
  }
  return 0;
}



int FUN_00cd3d80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_sm4.c",0x2c);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1590(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3de0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_sm4.c",0x2e);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1560(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3e40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_sm4.c",0x30);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1580(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,5,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3ea0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_sm4.c",0x32);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf15a0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd3f00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_sm4.c",0x34);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf1570(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd3f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd4490(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}



void FUN_00cd3f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  func_0x00cd4490(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}



undefined4
FUN_00cd3fc0(int param_1,int param_2,undefined4 *param_3,char *param_4,int param_5,char *param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_4 < param_6) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xab,
                    "sm4_xts_stream_update");
    func_0x00bc5160(0x39,0x6a,0);
    return 0;
  }
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x184);
    if ((((iVar2 != 0) && (*(int *)(param_1 + 0x188) != 0)) &&
        ((*(uint *)(param_1 + 0x50) & 4) != 0)) &&
       (((param_2 != 0 && (param_5 != 0)) && ((char *)0xf < param_6)))) {
      if (param_6 < "ampler2DShadow") {
        iVar1 = param_1 + 0x20;
        if (*(int *)(param_1 + 0x180) == 0) {
          if (*(code **)(param_1 + 0x194) != (code *)0x0) {
            (**(code **)(param_1 + 0x194))
                      (param_5,param_2,param_6,iVar2,*(undefined4 *)(param_1 + 0x188),iVar1);
            *param_3 = param_6;
            return 1;
          }
          iVar2 = func_0x00cf15b0(param_1 + 0x184,iVar1,param_5,param_2,param_6,
                                  *(uint *)(param_1 + 0x50) >> 1 & 1);
        }
        else {
          if (*(code **)(param_1 + 0x198) != (code *)0x0) {
            (**(code **)(param_1 + 0x198))
                      (param_5,param_2,param_6,iVar2,*(undefined4 *)(param_1 + 0x188),iVar1);
            *param_3 = param_6;
            return 1;
          }
          iVar2 = func_0x00bcf9f0(param_1 + 0x184,iVar1,param_5,param_2,param_6);
        }
        if (iVar2 == 0) {
          *param_3 = param_6;
          return 1;
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0x8e,
                        "sm4_xts_cipher");
        func_0x00bc5160(0x39,0x94,0);
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xb0,
                  "sm4_xts_stream_update");
  func_0x00bc5160(0x39,0x66,0);
  return 0;
}



undefined4
FUN_00cd4160(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            int param_6,char *param_7)

{
  int iVar1;
  int iVar2;
  
  func_0x00e87f70();
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_2 + 0x184);
    if ((((iVar2 != 0) && (*(int *)(param_2 + 0x188) != 0)) &&
        ((*(uint *)(param_2 + 0x50) & 4) != 0)) &&
       (((param_3 != 0 && (param_6 != 0)) && ((char *)0xf < param_7)))) {
      if (param_7 < "ampler2DShadow") {
        iVar1 = param_2 + 0x20;
        if (*(int *)(param_2 + 0x180) == 0) {
          if (*(code **)(param_2 + 0x194) != (code *)0x0) {
            (**(code **)(param_2 + 0x194))
                      (param_6,param_3,param_7,iVar2,*(undefined4 *)(param_2 + 0x188),iVar1);
            *param_4 = param_7;
            return 1;
          }
          iVar2 = func_0x00cf15b0(param_2 + 0x184,iVar1,param_6,param_3,param_7,
                                  *(uint *)(param_2 + 0x50) >> 1 & 1);
        }
        else {
          if (*(code **)(param_2 + 0x198) != (code *)0x0) {
            (**(code **)(param_2 + 0x198))
                      (param_6,param_3,param_7,iVar2,*(undefined4 *)(param_2 + 0x188),iVar1);
            *param_4 = param_7;
            return 1;
          }
          iVar2 = func_0x00bcf9f0(param_2 + 0x184,iVar1,param_6,param_3,param_7);
        }
        if (iVar2 == 0) {
          *param_4 = param_7;
          return 1;
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0x8e,
                        "sm4_xts_cipher");
        func_0x00bc5160(0x39,0x94,0);
      }
    }
  }
  return 0;
}



void FUN_00cd42b0(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x1a0,"providers\\implementations\\ciphers\\cipher_sm4_xts.c",0x5f);
  return;
}



int FUN_00cd42e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (((*(int *)(param_1 + 0x184) == 0) || (*(int *)(param_1 + 0x184) == param_1 + 0x80)) &&
       ((*(int *)(param_1 + 0x188) == 0 || (*(int *)(param_1 + 0x188) == param_1 + 0x100)))) {
      iVar1 = FUN_00bbc4f0(0x1a0,"providers\\implementations\\ciphers\\cipher_sm4_xts.c",0x72);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
        return iVar1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00cd4350(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 0) || (iVar1 = func_0x00bc09d0(param_2,"xts_standard"), iVar1 == 0)) {
    return 1;
  }
  param_2 = 0;
  if (*(int *)(iVar1 + 4) == 4) {
    iVar1 = func_0x00bc08d0(iVar1,&param_2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bbbfe0(param_2,&DAT_010aaab4);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x180) = 0;
        return 1;
      }
      iVar1 = func_0x00bbbfe0(param_2,&DAT_010aaab8);
      if (iVar1 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xeb,
                        "sm4_xts_set_ctx_params");
        func_0x00bc5160(0x39,0x68,0);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x180) = 1;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xe3,
                    "sm4_xts_set_ctx_params");
    func_0x00bc5160(0x39,0x67,0);
  }
  return 0;
}



undefined ** FUN_00cd4430(void)

{
  return &PTR_s_xts_standard_010aa9f8;
}



int FUN_00cd4440(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00bbc830(0x1a0,"providers\\implementations\\ciphers\\cipher_sm4_xts.c",0x50);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf1a00(0x100,0);
    func_0x00ce67c0(iVar1,0x100,8,0x80,0x10001,2,0,uVar2);
  }
  return iVar1;
}



void FUN_00cd45f0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf1fb0();
  func_0x00cf1d60(param_1,1,0xc0,0x40,0,0x10,0,uVar1);
  return;
}



void FUN_00cd4620(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,1,0x10,0,0xc0,0x40,0);
  return;
}



void FUN_00cd4640(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf1fa0();
  func_0x00cf1d60(param_1,2,0xc0,0x40,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd4670(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,2,0x10,0,0xc0,0x40,0x40);
  return;
}



void FUN_00cd4690(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf2420();
  func_0x00cf1d60(param_1,4,0xc0,8,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd46c0(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,4,0x10,0,0xc0,8,0x40);
  return;
}



void FUN_00cd46e0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf23f0();
  func_0x00cf1d60(param_1,3,0xc0,8,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd4710(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,3,0x10,0,0xc0,8,0x40);
  return;
}



void FUN_00cd4730(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf2400();
  func_0x00cf1d60(param_1,3,0xc0,8,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd4760(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf2410();
  func_0x00cf1d60(param_1,3,0xc0,8,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd4790(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf23d0();
  func_0x00cf1d60(param_1,1,0x80,0x40,0,0x10,0,uVar1);
  return;
}



void FUN_00cd47c0(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,1,0x10,0,0x80,0x40,0);
  return;
}



void FUN_00cd47e0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf23b0();
  func_0x00cf1d60(param_1,2,0x80,0x40,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd4810(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,2,0x10,0,0x80,0x40,0x40);
  return;
}



void FUN_00cd4830(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf23e0();
  func_0x00cf1d60(param_1,4,0x80,8,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd4860(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,4,0x10,0,0x80,8,0x40);
  return;
}



void FUN_00cd4880(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf23c0();
  func_0x00cf1d60(param_1,3,0x80,8,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd48b0(undefined4 param_1)

{
  func_0x00cf1cd0(param_1,3,0x10,0,0x80,8,0x40);
  return;
}



void FUN_00cd48d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_stack_0000001c;
  int in_stack_00000024;
  undefined4 *in_stack_00000028;
  int *in_stack_0000002c;
  uint in_stack_00000030;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  
  func_0x00e87f70();
  uVar5 = in_stack_00000038;
  uVar1 = in_stack_00000034;
  piVar4 = in_stack_0000002c;
  puVar3 = in_stack_00000028;
  iVar2 = in_stack_00000024;
  in_stack_0000001c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  *in_stack_0000002c = 0;
  if (in_stack_00000038 == 0) {
LAB_00cd4a4f:
    FUN_008ab370();
    return;
  }
  if (in_stack_00000030 < in_stack_00000038) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_tdes_wrap.c",0x9e,
                    "tdes_wrap_update");
    func_0x00bc5160(0x39,0x6a,0);
    FUN_008ab370();
    return;
  }
  iVar6 = FUN_0058e2e0();
  if (((iVar6 != 0) && (uVar5 < 0x40000000)) && ((uVar5 & 7) == 0)) {
    if ((*(byte *)(iVar2 + 0x50) & 2) == 0) {
      iVar6 = func_0x00cd4c90(iVar2,puVar3,uVar1,uVar5);
    }
    else {
      iVar6 = uVar5 + 0x10;
      if (puVar3 != (undefined4 *)0x0) {
        func_0x008ab0e6(puVar3 + 2,uVar1,uVar5);
        iVar7 = func_0x00c7ac40(uVar1,uVar5,&param_2);
        if (iVar7 == 0) {
          iVar6 = 0;
        }
        else {
          *(undefined4 *)(uVar5 + 8 + (int)puVar3) = param_2;
          *(undefined4 *)(uVar5 + 0xc + (int)puVar3) = param_3;
          func_0x00401320(&param_2,0x14);
          iVar7 = func_0x00bc5450(*(undefined4 *)(iVar2 + 0x78),iVar2 + 0x20,8,0);
          if (iVar7 < 1) {
            iVar6 = 0;
          }
          else {
            uVar1 = *(undefined4 *)(iVar2 + 0x24);
            *puVar3 = *(undefined4 *)(iVar2 + 0x20);
            puVar3[1] = uVar1;
            (**(code **)(*(int *)(iVar2 + 0x70) + 4))(iVar2,puVar3 + 2,puVar3 + 2,uVar5 + 8);
            func_0x00c1eb00(puVar3,0,iVar6);
            *(undefined4 *)(iVar2 + 0x20) = 0x2ca2dd4a;
            *(undefined4 *)(iVar2 + 0x24) = 0x521e879;
            (**(code **)(*(int *)(iVar2 + 0x70) + 4))(iVar2,puVar3,puVar3,iVar6);
          }
        }
      }
    }
    if (0 < iVar6) {
      *piVar4 = iVar6;
      goto LAB_00cd4a4f;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\ciphers\\cipher_tdes_wrap.c",0xa3,"tdes_wrap_update")
  ;
  func_0x00bc5160(0x39,0x66,0);
  FUN_008ab370();
  return;
}



void FUN_00cd4ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_stack_0000001c;
  int in_stack_00000024;
  undefined4 *in_stack_00000028;
  int *in_stack_0000002c;
  uint in_stack_00000030;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  
  func_0x00e87f70();
  uVar1 = in_stack_00000034;
  piVar4 = in_stack_0000002c;
  puVar3 = in_stack_00000028;
  iVar2 = in_stack_00000024;
  in_stack_0000001c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  *in_stack_0000002c = 0;
  iVar6 = FUN_0058e2e0();
  uVar5 = in_stack_00000038;
  if (iVar6 != 0) {
    if (in_stack_00000030 < in_stack_00000038) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_tdes_wrap.c",0x8a,
                      "tdes_wrap_cipher");
      func_0x00bc5160(0x39,0x6a,0);
    }
    else if ((in_stack_00000038 < 0x40000000) && ((in_stack_00000038 & 7) == 0)) {
      if ((*(byte *)(iVar2 + 0x50) & 2) == 0) {
        iVar6 = func_0x00cd4c90(iVar2,puVar3,uVar1,in_stack_00000038);
      }
      else {
        iVar6 = in_stack_00000038 + 0x10;
        if (puVar3 != (undefined4 *)0x0) {
          func_0x008ab0e6(puVar3 + 2,uVar1,in_stack_00000038);
          iVar7 = func_0x00c7ac40(uVar1,uVar5,&param_2);
          if (iVar7 == 0) {
            iVar6 = 0;
          }
          else {
            *(undefined4 *)(uVar5 + 8 + (int)puVar3) = param_2;
            *(undefined4 *)(uVar5 + 0xc + (int)puVar3) = param_3;
            func_0x00401320(&param_2,0x14);
            iVar7 = func_0x00bc5450(*(undefined4 *)(iVar2 + 0x78),iVar2 + 0x20,8,0);
            if (iVar7 < 1) {
              iVar6 = 0;
            }
            else {
              uVar1 = *(undefined4 *)(iVar2 + 0x24);
              *puVar3 = *(undefined4 *)(iVar2 + 0x20);
              puVar3[1] = uVar1;
              (**(code **)(*(int *)(iVar2 + 0x70) + 4))(iVar2,puVar3 + 2,puVar3 + 2,uVar5 + 8);
              func_0x00c1eb00(puVar3,0,iVar6);
              *(undefined4 *)(iVar2 + 0x20) = 0x2ca2dd4a;
              *(undefined4 *)(iVar2 + 0x24) = 0x521e879;
              (**(code **)(*(int *)(iVar2 + 0x70) + 4))(iVar2,puVar3,puVar3,iVar6);
            }
          }
        }
      }
      if (0 < iVar6) {
        *piVar4 = iVar6;
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00cd4c40(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf2430();
  func_0x00cf1d60(param_1,0x10002,0xc0,0x40,0,0x12,0,uVar1);
  return;
}



void FUN_00cd4c70(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0x10002,0x12,0,0xc0,0x40,0);
  return;
}



uint FUN_00cd4e40(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00ce6290(param_1,param_2,param_3,param_4,param_5,0);
  if (uVar1 != 0) {
    if (param_4 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(param_1);
    }
    iVar2 = FUN_00cd5090(param_1,param_6);
    uVar1 = -(uint)(iVar2 != 0) & uVar1;
  }
  return uVar1;
}



uint FUN_00cd4e90(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00ce6260(param_1,param_2,param_3,param_4,param_5,0);
  if (uVar1 != 0) {
    if (param_4 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 0xc))(param_1);
    }
    iVar2 = FUN_00cd5090(param_1,param_6);
    uVar1 = -(uint)(iVar2 != 0) & uVar1;
  }
  return uVar1;
}



int FUN_00cd4ee0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0xf8,"providers\\implementations\\ciphers\\cipher_chacha20.c",0x34);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf2690(0x100,0);
    func_0x00ce67c0(iVar1,0x100,8,0x80,0,2,0,uVar2);
  }
  return iVar1;
}



void FUN_00cd4f40(int param_1)

{
  if (param_1 != 0) {
    func_0x00ce6840(param_1);
    FUN_00bbc6c0(param_1,0xf8,"providers\\implementations\\ciphers\\cipher_chacha20.c",0x40);
  }
  return;
}



int FUN_00cd4f70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = func_0x00bbbc30(param_1,0xf8,"providers\\implementations\\ciphers\\cipher_chacha20.c",0x4a
                         );
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x58) != 0) && (*(int *)(iVar1 + 0x5c) != 0)) {
    iVar2 = func_0x00bbbc30(*(int *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x60),
                            "providers\\implementations\\ciphers\\cipher_chacha20.c",0x4d);
    *(int *)(iVar1 + 0x58) = iVar2;
    if (iVar2 == 0) {
      FUN_00bbc580(iVar1,"providers\\implementations\\ciphers\\cipher_chacha20.c",0x4f);
      return 0;
    }
  }
  return iVar1;
}



void FUN_00cd4fe0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0,2,0,0x100,8,0x80);
  return;
}



undefined4 FUN_00cd5000(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,"ivlen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0x10);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x65;
      goto LAB_00cd5030;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0x20);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x6a;
LAB_00cd5030:
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20.c",uVar2,
                      "chacha20_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00cd5090(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"keylen");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_2);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar3 = 0x87;
        goto LAB_00cd50d0;
      }
      if (param_2 != 0x20) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20.c",0x8b,
                        "chacha20_set_ctx_params");
        func_0x00bc5160(0x39,0x69,0);
        return 0;
      }
    }
    iVar2 = func_0x00bc09d0(iVar2,"ivlen");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_2);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar3 = 0x92;
LAB_00cd50d0:
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20.c",uVar3,
                        "chacha20_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      if (param_2 != 0x10) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20.c",0x96,
                        "chacha20_set_ctx_params");
        func_0x00bc5160(0x39,0x6d,0);
        return 0;
      }
    }
  }
  return 1;
}



undefined ** FUN_00cd5190(void)

{
  return &PTR_s_keylen_010ab0c0;
}



undefined ** FUN_00cd51a0(void)

{
  return &PTR_s_keylen_010ab0fc;
}



int FUN_00cd51e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x2b8,"providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0x2e)
  ;
  if (iVar1 != 0) {
    uVar2 = func_0x00cf3340(0x100,0);
    func_0x00ce67c0(iVar1,0x100,8,0x60,0,3,0,uVar2);
    *(undefined4 *)(iVar1 + 0x2b0) = 0xffffffff;
    func_0x00cd51b0(iVar1 + 0x80);
  }
  return iVar1;
}



void FUN_00cd5250(int param_1)

{
  if (param_1 != 0) {
    func_0x00ce6840(param_1);
    FUN_00bbc6c0(param_1,0x2b8,"providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",
                 0x57);
  }
  return;
}



int FUN_00cd5280(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return param_1;
  }
  iVar1 = func_0x00bbbc30(param_1,0x2b8,
                          "providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0x45);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) && (*(int *)(iVar1 + 0x5c) != 0)) {
    iVar2 = func_0x00bbbc30(*(int *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x60),
                            "providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0x48);
    *(int *)(iVar1 + 0x58) = iVar2;
    if (iVar2 == 0) {
      FUN_00bbc580(iVar1,"providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0x4a);
      iVar1 = 0;
    }
  }
  return iVar1;
}



uint FUN_00cd52f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00ce6290(param_1,param_2,param_3,param_4,param_5,0);
  if (uVar1 != 0) {
    if (param_4 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 0x10))(param_1);
    }
    iVar2 = FUN_00cd5570(param_1,param_6);
    uVar1 = -(uint)(iVar2 != 0) & uVar1;
  }
  return uVar1;
}



uint FUN_00cd5340(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00ce6260(param_1,param_2,param_3,param_4,param_5,0);
  if (uVar1 != 0) {
    if (param_4 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 0x10))(param_1);
    }
    iVar2 = FUN_00cd5570(param_1,param_6);
    uVar1 = -(uint)(iVar2 != 0) & uVar1;
  }
  return uVar1;
}



void FUN_00cd5390(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0,3,0,0x100,8,0x60);
  return;
}



undefined4 FUN_00cd53b0(int param_1,undefined4 param_2)

{
  uint _Size;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,"ivlen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0xc);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x6b;
      goto LAB_00cd53e2;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0x20);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x71;
LAB_00cd53e2:
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",uVar2,
                      "chacha20_poly1305_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"taglen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x2ac));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x76;
      goto LAB_00cd54c5;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"tlsaadpad");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x2b4));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x7b;
      goto LAB_00cd54c5;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_0103d958);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 5) {
      FUN_00bc4f50();
      uVar2 = 0x82;
LAB_00cd54c5:
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",uVar2,
                      "chacha20_poly1305_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0x86,
                      "chacha20_poly1305_get_ctx_params");
      func_0x00bc5160(0x39,0x77,0);
      return 0;
    }
    _Size = *(uint *)(iVar1 + 0xc);
    if ((_Size == 0) || (0x10 < _Size)) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0x8a,
                      "chacha20_poly1305_get_ctx_params");
      func_0x00bc5160(0x39,0x76,0);
      return 0;
    }
    memcpy(*(void **)(iVar1 + 8),(void *)(param_1 + 0x274),_Size);
  }
  return 1;
}



undefined4 FUN_00cd5570(int param_1,int param_2)

{
  uint _Size;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = param_2;
  iVar1 = param_1;
  iVar4 = *(int *)(param_1 + 0x70);
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,"keylen");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar5 = 0xb0;
        goto LAB_00cd55ba;
      }
      if (param_1 != 0x20) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0xb4,
                        "chacha20_poly1305_set_ctx_params");
        func_0x00bc5160(0x39,0x69,0);
        return 0;
      }
    }
    iVar2 = func_0x00bc09d0(iVar3,"ivlen");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,&param_1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar5 = 0xbb;
        goto LAB_00cd55ba;
      }
      if (param_1 != 0xc) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0xbf,
                        "chacha20_poly1305_set_ctx_params");
        func_0x00bc5160(0x39,0x6d,0);
        return 0;
      }
    }
    iVar2 = func_0x00bc09d0(iVar3,&DAT_0103d958);
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 5) {
        FUN_00bc4f50();
        uVar5 = 199;
        goto LAB_00cd55ba;
      }
      _Size = *(uint *)(iVar2 + 0xc);
      if ((_Size == 0) || (0x10 < _Size)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0xcb,
                        "chacha20_poly1305_set_ctx_params");
        func_0x00bc5160(0x39,0x76,0);
        return 0;
      }
      if (*(void **)(iVar2 + 8) != (void *)0x0) {
        if ((*(byte *)(iVar1 + 0x50) & 2) != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0xd0,
                          "chacha20_poly1305_set_ctx_params");
          func_0x00bc5160(0x39,0x78,0);
          return 0;
        }
        memcpy((void *)(iVar1 + 0x274),*(void **)(iVar2 + 8),_Size);
      }
      *(undefined4 *)(iVar1 + 0x2ac) = *(undefined4 *)(iVar2 + 0xc);
    }
    iVar2 = func_0x00bc09d0(iVar3,"tlsaad");
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 5) {
        FUN_00bc4f50();
        uVar5 = 0xdb;
        goto LAB_00cd55ba;
      }
      param_1 = (**(code **)(iVar4 + 0x14))
                          (iVar1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      if (param_1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0xe0,
                        "chacha20_poly1305_set_ctx_params");
        func_0x00bc5160(0x39,0x73,0);
        return 0;
      }
      *(int *)(iVar1 + 0x2b4) = param_1;
    }
    iVar3 = func_0x00bc09d0(iVar3,"tlsivfixed");
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) != 5) {
        FUN_00bc4f50();
        uVar5 = 0xe9;
LAB_00cd55ba:
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",uVar5,
                        "chacha20_poly1305_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      iVar4 = (**(code **)(iVar4 + 0x18))
                        (iVar1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
      if (iVar4 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0xed,
                        "chacha20_poly1305_set_ctx_params");
        func_0x00bc5160(0x39,0x6d,0);
        return 0;
      }
    }
  }
  return 1;
}



bool FUN_00cd5840(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,undefined4 param_5
                 ,uint param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (param_6 == 0) {
      *param_3 = 0;
      return true;
    }
    if (param_6 <= param_4) {
      iVar2 = (**(code **)(iVar2 + 0xc))(param_1,param_2,param_3,param_5,param_6);
      return iVar2 != 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_chacha20_poly1305.c",0x12e,
                    "chacha20_poly1305_cipher");
    func_0x00bc5160(0x39,0x6a,0);
  }
  return false;
}



undefined4 FUN_00cd58c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar2 = (**(code **)(iVar2 + 0xc))(param_1,param_2,param_3,0,0);
    if (0 < iVar2) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}



undefined ** FUN_00cd5910(void)

{
  return &PTR_s_keylen_010ab218;
}



undefined4 FUN_00cd5920(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00baaa30(param_1);
  if (DAT_013dffec == (code *)0x0) {
    return 0xffffffff;
  }
                    // WARNING: Could not recover jumptable at 0x00cd593e. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_013dffec)();
  return uVar1;
}



undefined4 FUN_00cd5940(undefined4 param_1)

{
  undefined4 uVar1;
  
  func_0x00bab690(param_1,0);
  uVar1 = FUN_00baaa30(param_1);
  if (DAT_013dfff4 != (code *)0x0) {
    (*DAT_013dfff4)(uVar1);
  }
  return 1;
}



undefined4 FUN_00cd5970(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00baaa30(param_1);
  if (DAT_013dffe4 == (code *)0x0) {
    return 0xffffffff;
  }
                    // WARNING: Could not recover jumptable at 0x00cd598e. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_013dffe4)();
  return uVar1;
}



undefined4 FUN_00cd5990(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00baaa30(param_1);
  if (DAT_013dffe8 == (code *)0x0) {
    return 0xffffffff;
  }
                    // WARNING: Could not recover jumptable at 0x00cd59ae. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_013dffe8)();
  return uVar1;
}



undefined4 FUN_00cd59b0(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00baaa30(param_1);
  if (DAT_013dffdc == (code *)0x0) {
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x00cd59cd. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_013dffdc)();
  return uVar1;
}



undefined4 FUN_00cd59d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00baaa30(param_1);
  if (DAT_013dffe0 == (code *)0x0) {
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x00cd59ed. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*DAT_013dffe0)();
  return uVar1;
}



undefined4 FUN_00cd6500(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x5c,"providers\\implementations\\digests\\md4_prov.c",0x18);
    return uVar2;
  }
  return 0;
}



void FUN_00cd6520(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x5c,"providers\\implementations\\digests\\md4_prov.c",0x18);
  return;
}



undefined4 * FUN_00cd6540(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00bbc4f0(0x5c,"providers\\implementations\\digests\\md4_prov.c",0x18)
    ;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00cd6580(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0xf < param_4)) {
    iVar1 = func_0x00c85e40(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x10;
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cd65c0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 != 0) && (iVar1 = func_0x00bc09d0(param_2,"pad-type"), iVar1 != 0)) &&
     (iVar1 = func_0x00bc0300(iVar1,param_1 + 0x1c), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\digests\\mdc2_prov.c",0x33,"mdc2_set_ctx_params");
    func_0x00bc5160(0x39,0x67,0);
    return 0;
  }
  return 1;
}



undefined ** FUN_00cd6630(void)

{
  return &PTR_s_pad_type_010ab428;
}



undefined4 FUN_00cd6640(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 == 0) || (iVar1 = func_0x00c8f250(param_1), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (((param_2 != 0) && (iVar1 = func_0x00bc09d0(param_2,"pad-type"), iVar1 != 0)) &&
     (iVar1 = func_0x00bc0300(iVar1,param_1 + 0x1c), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\digests\\mdc2_prov.c",0x33,"mdc2_set_ctx_params");
    func_0x00bc5160(0x39,0x67,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00cd66c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x20,"providers\\implementations\\digests\\mdc2_prov.c",0x3d);
    return uVar2;
  }
  return 0;
}



void FUN_00cd66e0(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x20,"providers\\implementations\\digests\\mdc2_prov.c",0x3d);
  return;
}



undefined4 * FUN_00cd6700(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)
             FUN_00bbc4f0(0x20,"providers\\implementations\\digests\\mdc2_prov.c",0x3d);
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *puVar5 = *param_1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar3 = param_1[7];
      puVar5[4] = param_1[4];
      puVar5[5] = uVar1;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      return puVar5;
    }
  }
  return puVar5;
}



undefined4 FUN_00cd6740(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0xf < param_4)) {
    iVar1 = func_0x00c8f1e0(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x10;
      return 1;
    }
  }
  return 0;
}



void FUN_00cd6780(undefined4 param_1)

{
  func_0x00cee7d0(param_1,8,0x10,0);
  return;
}



undefined4 FUN_00cd67a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00c8fac0(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cd67d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0xa8,"providers\\implementations\\digests\\wp_prov.c",0x18);
    return uVar2;
  }
  return 0;
}



void FUN_00cd6800(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0xa8,"providers\\implementations\\digests\\wp_prov.c",0x18);
  return;
}



undefined4 * FUN_00cd6820(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00bbc4f0(0xa8,"providers\\implementations\\digests\\wp_prov.c",0x18);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00cd6860(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x3f < param_4)) {
    iVar1 = func_0x00c8f9c0(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x40;
      return 1;
    }
  }
  return 0;
}



void FUN_00cd68a0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x40,0);
  return;
}



void FUN_00cd68c0(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x10c8,"providers\\implementations\\ciphers\\cipher_blowfish.c",0x20);
  return;
}



void * FUN_00cd68f0(void *param_1)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    _Dst = (void *)FUN_00bbc4f0(0x10c8,"providers\\implementations\\ciphers\\cipher_blowfish.c",0x2b
                               );
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_1,0x10c8);
      return _Dst;
    }
  }
  return (void *)0x0;
}



void FUN_00cd6930(undefined4 param_1)

{
  func_0x00ce64b0(param_1,1,0x100,0,0x80,0x40,0);
  return;
}



int FUN_00cd6950(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x10c8,"providers\\implementations\\ciphers\\cipher_blowfish.c",0x34);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3600(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x40,0,1,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd69b0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0x100,0,0x80,0x40,0x40);
  return;
}



int FUN_00cd69d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x10c8,"providers\\implementations\\ciphers\\cipher_blowfish.c",0x36);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf35e0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x40,0x40,2,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6a30(undefined4 param_1)

{
  func_0x00ce64b0(param_1,4,0x100,0,0x80,8,0x40);
  return;
}



int FUN_00cd6a50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x10c8,"providers\\implementations\\ciphers\\cipher_blowfish.c",0x38);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3610(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x40,4,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6ab0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,3,0x100,0,0x80,8,0x40);
  return;
}



int FUN_00cd6ad0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x10c8,"providers\\implementations\\ciphers\\cipher_blowfish.c",0x3a);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf35f0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x40,3,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6b30(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x158,"providers\\implementations\\ciphers\\cipher_idea.c",0x1f);
  return;
}



undefined4 * FUN_00cd6b60(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x158,"providers\\implementations\\ciphers\\cipher_idea.c",0x2a);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00cd6ba0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,1,0,0,0x80,0x40,0);
  return;
}



int FUN_00cd6bc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x158,"providers\\implementations\\ciphers\\cipher_idea.c",0x33);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3930(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x40,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6c20(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0,0,0x80,0x40,0x40);
  return;
}



int FUN_00cd6c40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x158,"providers\\implementations\\ciphers\\cipher_idea.c",0x35);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3910(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x40,0x40,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6ca0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,4,0,0,0x80,8,0x40);
  return;
}



int FUN_00cd6cc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x158,"providers\\implementations\\ciphers\\cipher_idea.c",0x37);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3940(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x40,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6d20(undefined4 param_1)

{
  func_0x00ce64b0(param_1,3,0,0,0x80,8,0x40);
  return;
}



int FUN_00cd6d40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x158,"providers\\implementations\\ciphers\\cipher_idea.c",0x39);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3920(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x40,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6da0(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x108,"providers\\implementations\\ciphers\\cipher_cast5.c",0x21);
  return;
}



undefined4 * FUN_00cd6dd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x108,"providers\\implementations\\ciphers\\cipher_cast5.c",0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



int FUN_00cd6e10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_cast5.c",0x35);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3c00(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x40,0,1,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd6e70(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_cast5.c",0x37);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3be0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x40,0x40,2,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd6ed0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_cast5.c",0x39);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3c10(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x40,4,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd6f30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_cast5.c",0x3b);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3bf0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x40,3,0x100,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd6f90(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x100,"providers\\implementations\\ciphers\\cipher_seed.c",0x1e);
  return;
}



undefined4 * FUN_00cd6fc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x100,"providers\\implementations\\ciphers\\cipher_seed.c",0x29);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



int FUN_00cd7000(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_seed.c",0x32);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3ed0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0,1,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd7060(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_seed.c",0x34);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3eb0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,0x80,0x80,2,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd70c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_seed.c",0x36);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3ee0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,4,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



int FUN_00cd7120(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0x100,"providers\\implementations\\ciphers\\cipher_seed.c",0x38);
    if (iVar1 != 0) {
      uVar2 = func_0x00cf3ec0(0x80,param_1);
      func_0x00ce67c0(iVar1,0x80,8,0x80,3,0,0,uVar2);
    }
    return iVar1;
  }
  return 0;
}



void FUN_00cd7180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6290(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd7290(param_1,param_6);
  return;
}



void FUN_00cd71c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6260(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd7290(param_1,param_6);
  return;
}



void FUN_00cd7200(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x29);
  return;
}



undefined4 * FUN_00cd7230(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x34);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined ** FUN_00cd7270(void)

{
  return &PTR_s_keylen_010ac038;
}



undefined ** FUN_00cd7280(void)

{
  return &PTR_s_padding_010ac0f0;
}



// WARNING: Removing unreachable block (ram,0x00cd743f)
// WARNING: Removing unreachable block (ram,0x00cd7433)
// WARNING: Removing unreachable block (ram,0x00cd744b)
// WARNING: Removing unreachable block (ram,0x00cd7455)

void FUN_00cd7290(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000024;
  
  func_0x00e87f70();
  iVar3 = in_stack_00000024;
  iVar1 = in_stack_00000020;
  in_stack_00000018 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (in_stack_00000024 != 0) {
    iVar2 = FUN_00ce6b80(in_stack_00000020,in_stack_00000024);
    if (iVar2 != 0) {
      iVar2 = func_0x00bc09d0(iVar3,"keybits");
      if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x180), iVar2 == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",0xbb,
                        "rc2_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        FUN_008ab370();
        return;
      }
      iVar3 = func_0x00bc09d0(iVar3,"algorithm-id-params");
      if (iVar3 == 0) goto LAB_00cd746a;
      param_1 = *(undefined4 *)(iVar3 + 8);
      iVar2 = 0;
      if (((*(int *)(iVar3 + 4) == 5) && (*(uint *)(iVar1 + 0x40) < 0x11)) &&
         (iVar2 = func_0x00bfcac0(0,&param_1,*(undefined4 *)(iVar3 + 0xc)), iVar2 != 0)) {
        iVar3 = func_0x00bfcd50(iVar2,&stack0x00000000,&stack0x00000008,
                                *(undefined4 *)(iVar1 + 0x40));
        if ((iVar3 == *(int *)(iVar1 + 0x40)) &&
           (iVar3 = func_0x00ce6750(iVar1,&stack0x00000008,*(int *)(iVar1 + 0x40)), iVar3 != 0)) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",0x54,
                          "rc2_magic_to_keybits");
          func_0x00bc5160(0x39,0x99,0);
          *(undefined4 *)(iVar1 + 0x180) = 0;
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",0xcf,"rc2_set_ctx_params")
      ;
      func_0x00bc5160(0x39,0x68,0);
      FUN_00bfc9d0(iVar2);
    }
    FUN_008ab370();
    return;
  }
LAB_00cd746a:
  FUN_008ab370();
  return;
}



undefined4
FUN_00cd7480(int param_1,undefined1 *param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  uVar7 = param_6;
  iVar3 = param_5;
  iVar2 = FUN_00ce62c0(param_5,param_6);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(uVar7,"keybits");
  if ((iVar2 != 0) && (iVar3 = func_0x00bc10c0(iVar2,*(undefined4 *)(iVar3 + 0x180)), iVar3 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",0x73,"rc2_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
  iVar3 = func_0x00bc09d0(uVar7,"algorithm-id-params");
  iVar2 = func_0x00bc09d0(uVar7,"alg_id_param");
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      return 1;
    }
    iVar6 = 0;
LAB_00cd7524:
    param_1 = *(int *)(iVar2 + 8);
    param_3 = &param_1;
    if (iVar6 == 0) {
      register0x00000010 = (BADSPACEBASE *)0x0;
    }
    if (param_1 == 0) {
      param_3 = (undefined4 *)0x0;
    }
    param_2 = (undefined1 *)register0x00000010;
    if (iVar3 != 0) goto LAB_00cd754d;
LAB_00cd7553:
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 5)) {
      iVar4 = func_0x00bfc9f0();
      iVar5 = param_5;
      if (iVar4 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",0x87,
                        "rc2_get_ctx_params");
        func_0x00bc5160(0x39,0x8000d,0);
        return 0;
      }
      iVar1 = *(int *)(param_5 + 0x180);
      if (iVar1 == 0x28) {
        uVar7 = 0xa0;
      }
      else if (iVar1 == 0x40) {
        uVar7 = 0x78;
      }
      else if (iVar1 == 0x80) {
        uVar7 = 0x3a;
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",0x46,
                        "rc2_keybits_to_magic");
        func_0x00bc5160(0x39,0x99,0);
        uVar7 = 0;
      }
      iVar5 = func_0x00bfce80(iVar4,uVar7,iVar5 + 0x20,*(undefined4 *)(iVar5 + 0x40));
      if (iVar5 == 0) {
        FUN_00bfc9d0(iVar4);
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",0x90,
                        "rc2_get_ctx_params");
        func_0x00bc5160(0x39,0x8000d,0);
        return 0;
      }
      iVar5 = func_0x00bfcb60(iVar4,param_2);
      if ((iVar3 != 0) && (-1 < iVar5)) {
        *(int *)(iVar3 + 0x10) = iVar5;
      }
      if (iVar6 != param_1) {
        iVar5 = func_0x00bfcb60(iVar4,param_3);
      }
      if ((iVar2 != 0) && (-1 < iVar5)) {
        *(int *)(iVar2 + 0x10) = iVar5;
        FUN_00bfc9d0(iVar4);
        return 1;
      }
      FUN_00bfc9d0(iVar4);
      if (-1 < iVar5) {
        return 1;
      }
      FUN_00bc4f50();
      uVar7 = 0xa7;
      goto LAB_00cd76eb;
    }
  }
  else {
    iVar6 = *(int *)(iVar3 + 8);
    if (iVar2 != 0) goto LAB_00cd7524;
    param_3 = (undefined4 *)0x0;
    param_1 = 0;
    param_2 = (undefined1 *)register0x00000010;
    if (iVar6 == 0) {
      param_2 = (undefined1 *)0x0;
    }
LAB_00cd754d:
    if (*(int *)(iVar3 + 4) == 5) goto LAB_00cd7553;
  }
  FUN_00bc4f50();
  uVar7 = 0x83;
LAB_00cd76eb:
  func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc2.c",uVar7,"rc2_get_ctx_params");
  func_0x00bc5160(0x39,0x68,0);
  return 0;
}



int FUN_00cd7710(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x11c);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf41b0(0x80,0);
    func_0x00ce67c0(iVar1,0x80,0x40,0,1,0x100,0,uVar2);
    *(undefined4 *)(iVar1 + 0x180) = 0x80;
  }
  return iVar1;
}



int FUN_00cd7780(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x11e);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf4190(0x80,0);
    func_0x00ce67c0(iVar1,0x80,0x40,0x40,2,0x100,0,uVar2);
    *(undefined4 *)(iVar1 + 0x180) = 0x80;
  }
  return iVar1;
}



void FUN_00cd77f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0x100,0,0x28,0x40,0x40);
  return;
}



int FUN_00cd7810(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x120);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf4190(0x28,0);
    func_0x00ce67c0(iVar1,0x28,0x40,0x40,2,0x100,0,uVar2);
    *(undefined4 *)(iVar1 + 0x180) = 0x28;
  }
  return iVar1;
}



void FUN_00cd7870(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0x100,0,0x40,0x40,0x40);
  return;
}



int FUN_00cd7890(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x122);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf4190(0x40,0);
    func_0x00ce67c0(iVar1,0x40,0x40,0x40,2,0x100,0,uVar2);
    *(undefined4 *)(iVar1 + 0x180) = 0x40;
  }
  return iVar1;
}



int FUN_00cd78f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x125);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf41c0(0x80,0);
    func_0x00ce67c0(iVar1,0x80,8,0x40,4,0x100,0,uVar2);
    *(undefined4 *)(iVar1 + 0x180) = 0x80;
  }
  return iVar1;
}



int FUN_00cd7960(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x188,"providers\\implementations\\ciphers\\cipher_rc2.c",0x127);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf41a0(0x80,0);
    func_0x00ce67c0(iVar1,0x80,8,0x40,3,0x100,0,uVar2);
    *(undefined4 *)(iVar1 + 0x180) = 0x80;
  }
  return iVar1;
}



void FUN_00cd79d0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00cf4300();
  func_0x00cf1d60(param_1,2,0xc0,0x40,0x40,0x10,0,uVar1);
  return;
}



void FUN_00cd7a00(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x44);
  return;
}



undefined4
FUN_00cd7a30(void *param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6
            )

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)param_1 + 0x50);
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(uint *)((int)param_1 + 0x50) = uVar1 | 2;
  if (param_4 == 0) {
    if ((uVar1 & 4) != 0) {
      memcpy((void *)((int)param_1 + 0x20),param_1,*(size_t *)((int)param_1 + 0x40));
    }
  }
  else {
    iVar2 = func_0x00ce6750(param_1,param_4,param_5);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (param_2 != 0) {
    if (param_3 == *(int *)((int)param_1 + 0x3c)) {
      iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x70))(param_1,param_2,param_3);
      if (iVar2 != 0) {
        *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 8;
        goto LAB_00cd7ad4;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_des.c",0x5e,"des_init");
      func_0x00bc5160(0x39,0x69,0);
    }
    return 0;
  }
LAB_00cd7ad4:
  uVar3 = FUN_00ce6880(param_1,param_6);
  return uVar3;
}



undefined4
FUN_00cd7af0(void *param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6
            )

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)param_1 + 0x50);
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(uint *)((int)param_1 + 0x50) = uVar1 & 0xfffffffd;
  if (param_4 == 0) {
    if ((uVar1 & 4) != 0) {
      memcpy((void *)((int)param_1 + 0x20),param_1,*(size_t *)((int)param_1 + 0x40));
    }
  }
  else {
    iVar2 = func_0x00ce6750(param_1,param_4,param_5);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (param_2 != 0) {
    if (param_3 == *(int *)((int)param_1 + 0x3c)) {
      iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x70))(param_1,param_2,param_3);
      if (iVar2 != 0) {
        *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 8;
        goto LAB_00cd7b94;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_des.c",0x5e,"des_init");
      func_0x00bc5160(0x39,0x69,0);
    }
    return 0;
  }
LAB_00cd7b94:
  uVar3 = FUN_00ce6880(param_1,param_6);
  return uVar3;
}



undefined4 FUN_00cd7bb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00ce62c0(param_1,param_2);
  if (iVar2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,"randkey");
    if (iVar2 == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar1 = *(undefined4 *)(iVar2 + 8);
      iVar2 = func_0x00bc5990(*(undefined4 *)(param_1 + 0x78),uVar1,*(int *)(param_1 + 0x3c),0);
      if (0 < iVar2) {
        func_0x00c7a7f0(uVar1);
        return 1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\ciphers\\cipher_des.c",0x90,"des_get_ctx_params");
    func_0x00bc5160(0x39,0x79,0);
  }
  return 0;
}



undefined ** FUN_00cd7c40(void)

{
  return &PTR_s_keylen_010ac538;
}



int FUN_00cd7c50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc4f0(0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x37);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 8))(iVar1,param_1);
      return iVar1;
    }
  }
  return 0;
}



int FUN_00cd7c90(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00cf4820();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x28);
  if (iVar2 != 0) {
    func_0x00ce67c0(iVar2,0x40,0x40,0,1,0x10,0,uVar1,param_1);
  }
  return iVar2;
}



void FUN_00cd7ce0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,1,0x10,0,0x40,0x40,0);
  return;
}



int FUN_00cd7d00(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00cf47e0();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x28);
  if (iVar2 != 0) {
    func_0x00ce67c0(iVar2,0x40,0x40,0x40,2,0x10,0,uVar1,param_1);
  }
  return iVar2;
}



void FUN_00cd7d50(undefined4 param_1)

{
  func_0x00ce64b0(param_1,2,0x10,0,0x40,0x40,0x40);
  return;
}



int FUN_00cd7d70(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00cf4830();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x28);
  if (iVar2 != 0) {
    func_0x00ce67c0(iVar2,0x40,8,0x40,4,0x10,0,uVar1,param_1);
  }
  return iVar2;
}



void FUN_00cd7dc0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,4,0x10,0,0x40,8,0x40);
  return;
}



int FUN_00cd7de0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00cf4800();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x28);
  if (iVar2 != 0) {
    func_0x00ce67c0(iVar2,0x40,8,0x40,3,0x10,0,uVar1,param_1);
  }
  return iVar2;
}



void FUN_00cd7e30(undefined4 param_1)

{
  func_0x00ce64b0(param_1,3,0x10,0,0x40,8,0x40);
  return;
}



int FUN_00cd7e50(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00cf47f0();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x28);
  if (iVar2 != 0) {
    func_0x00ce67c0(iVar2,0x40,8,0x40,3,0x10,0,uVar1,param_1);
  }
  return iVar2;
}



int FUN_00cd7ea0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00cf4810();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00bbc830(0x108,"providers\\implementations\\ciphers\\cipher_des.c",0x28);
  if (iVar2 != 0) {
    func_0x00ce67c0(iVar2,0x40,8,0x40,3,0x10,0,uVar1,param_1);
  }
  return iVar2;
}



void FUN_00cd7ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6290(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00ce6b80(param_1,param_6);
  return;
}



void FUN_00cd7f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6260(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00ce6b80(param_1,param_6);
  return;
}



void FUN_00cd7f70(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x488,"providers\\implementations\\ciphers\\cipher_rc4.c",0x22);
  return;
}



undefined4 * FUN_00cd7fa0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x488,"providers\\implementations\\ciphers\\cipher_rc4.c",0x2d);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x122; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00cd7fe0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0,0x100,0,0x28,8,0);
  return;
}



int FUN_00cd8000(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x488,"providers\\implementations\\ciphers\\cipher_rc4.c",0x75);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf4890(0x28,0);
    func_0x00ce67c0(iVar1,0x28,8,0,0,0x100,0,uVar2);
  }
  return iVar1;
}



void FUN_00cd8050(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0,0x100,0,0x80,8,0);
  return;
}



int FUN_00cd8070(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x488,"providers\\implementations\\ciphers\\cipher_rc4.c",0x77);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf4890(0x80,0);
    func_0x00ce67c0(iVar1,0x80,8,0,0,0x100,0,uVar2);
  }
  return iVar1;
}



void FUN_00cd80d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6290(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd82e0(param_1,param_6);
  return;
}



void FUN_00cd8110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ce6260(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00cd82e0(param_1,param_6);
  return;
}



int FUN_00cd8150(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x5a8,"providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0x37);
  if (iVar1 != 0) {
    uVar2 = func_0x00cf4c80(0x80,0);
    func_0x00ce67c0(iVar1,0x80,8,0,0,0x101,0,uVar2);
  }
  return iVar1;
}



void FUN_00cd81b0(undefined4 param_1)

{
  func_0x00ce6840(param_1);
  FUN_00bbc6c0(param_1,0x5a8,"providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0x48);
  return;
}



void FUN_00cd81e0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  func_0x00bbbc30(param_1,0x5a8,"providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0x51);
  return;
}



undefined4 FUN_00cd8200(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,"keylen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x3c));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x79;
      goto LAB_00cd8238;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"ivlen");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x40));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x7f;
      goto LAB_00cd8238;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"tlsaadpad");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x5a0));
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x84;
LAB_00cd8238:
      func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",uVar2,
                      "rc4_hmac_md5_get_ctx_params");
      func_0x00bc5160(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined ** FUN_00cd82d0(void)

{
  return &PTR_s_keylen_010ac7c0;
}



undefined4 FUN_00cd82e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = param_2;
  iVar3 = param_1;
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"keylen");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_1);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar4 = 0xa2;
        goto LAB_00cd8325;
      }
      if (*(int *)(iVar3 + 0x3c) != param_1) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xa6,
                        "rc4_hmac_md5_set_ctx_params");
        func_0x00bc5160(0x39,0x69,0);
        return 0;
      }
    }
    iVar1 = func_0x00bc09d0(iVar2,"ivlen");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_1);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar4 = 0xae;
        goto LAB_00cd8325;
      }
      if (*(int *)(iVar3 + 0x40) != param_1) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xb2,
                        "rc4_hmac_md5_set_ctx_params");
        func_0x00bc5160(0x39,0x6d,0);
        return 0;
      }
    }
    iVar1 = func_0x00bc09d0(iVar2,"tlsaad");
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 5) {
        FUN_00bc4f50();
        uVar4 = 0xba;
        goto LAB_00cd8325;
      }
      param_1 = (**(code **)(*(int *)(iVar3 + 0x70) + 0xc))
                          (iVar3,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      if (param_1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",0xbf,
                        "rc4_hmac_md5_set_ctx_params");
        func_0x00bc5160(0x39,0x73,0);
        return 0;
      }
      *(int *)(iVar3 + 0x5a0) = param_1;
    }
    iVar1 = func_0x00bc09d0(iVar2,"mackey");
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 5) {
        FUN_00bc4f50();
        uVar4 = 199;
        goto LAB_00cd8325;
      }
      (**(code **)(*(int *)(iVar3 + 0x70) + 0x10))
                (iVar3,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    }
    iVar2 = func_0x00bc09d0(iVar2,"tls-version");
    if (iVar2 != 0) {
      iVar3 = func_0x00bc0300(iVar2,iVar3 + 0x54);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar4 = 0xcf;
LAB_00cd8325:
        func_0x00bc5050("providers\\implementations\\ciphers\\cipher_rc4_hmac_md5.c",uVar4,
                        "rc4_hmac_md5_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
    }
  }
  return 1;
}



undefined ** FUN_00cd84e0(void)

{
  return &PTR_s_keylen_010ac810;
}



void FUN_00cd84f0(undefined4 param_1)

{
  func_0x00ce64b0(param_1,0,0x101,0,0x80,8,0);
  return;
}



undefined4 * FUN_00cd8510(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x28,"providers\\implementations\\kdfs\\pbkdf1.c",0x68);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00cd8540(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00bbc830(0x28,"providers\\implementations\\kdfs\\pbkdf1.c",0x68);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      iVar2 = func_0x00cd62b0(param_1[6],param_1[7],puVar3 + 6,puVar3 + 7);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[4],param_1[5],puVar3 + 4,puVar3 + 5);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd5eb0(puVar3 + 1,param_1 + 1);
          if (iVar2 != 0) {
            uVar1 = param_1[9];
            puVar3[8] = param_1[8];
            puVar3[9] = uVar1;
            return puVar3;
          }
        }
      }
      func_0x00cd6000(puVar3 + 1);
      FUN_00bbc580(puVar3[6],"providers\\implementations\\kdfs\\pbkdf1.c",0x72);
      FUN_00bbc6c0(puVar3[4],puVar3[5],"providers\\implementations\\kdfs\\pbkdf1.c",0x73);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      FUN_00bbc580(puVar3,"providers\\implementations\\kdfs\\pbkdf1.c",0x7d);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00cd8620(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    func_0x00cd6000(param_1 + 1);
    FUN_00bbc580(param_1[6],"providers\\implementations\\kdfs\\pbkdf1.c",0x72);
    FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\pbkdf1.c",0x73);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\pbkdf1.c",0x7d);
  }
  return;
}



void FUN_00cd8680(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd6000(param_1 + 1);
  FUN_00bbc580(param_1[6],"providers\\implementations\\kdfs\\pbkdf1.c",0x72);
  FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\pbkdf1.c",0x73);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = uVar1;
  return;
}



void FUN_00cd86d0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *_Dst;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint in_stack_0000005c;
  undefined4 *in_stack_00000064;
  void *in_stack_00000068;
  uint in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 uVar14;
  
  func_0x00e87f70();
  uVar14 = in_stack_00000070;
  _Dst = in_stack_00000068;
  puVar5 = in_stack_00000064;
  in_stack_0000005c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar6 = FUN_0058e2e0();
  if (iVar6 != 0) {
    uVar7 = func_0x00bc3c60(*puVar5);
    iVar6 = func_0x00cd5f40(puVar5 + 1,uVar14,uVar7);
    if ((((iVar6 != 0) &&
         ((iVar6 = func_0x00bc09d0(uVar14,&DAT_01059dc0), iVar6 == 0 ||
          (iVar6 = func_0x00cd8a90(puVar5 + 4,puVar5 + 5,iVar6), iVar6 != 0)))) &&
        ((iVar6 = func_0x00bc09d0(uVar14,&DAT_01059db8), iVar6 == 0 ||
         (iVar6 = func_0x00cd8a90(puVar5 + 6,puVar5 + 7,iVar6), iVar6 != 0)))) &&
       ((iVar6 = func_0x00bc09d0(uVar14,&DAT_01093bec), iVar6 == 0 ||
        (iVar6 = func_0x00bc05a0(iVar6,puVar5 + 8), iVar6 != 0)))) {
      if (puVar5[4] == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf1.c",0xbb,"kdf_pbkdf1_derive");
        uVar14 = 0x82;
      }
      else {
        if (puVar5[6] != 0) {
          uVar8 = FUN_00bbba70(puVar5 + 1);
          uVar14 = puVar5[7];
          uVar1 = puVar5[8];
          uVar7 = puVar5[6];
          uVar2 = puVar5[9];
          uVar3 = puVar5[5];
          uVar4 = puVar5[4];
          iVar6 = func_0x00bd46b0();
          if (iVar6 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf1.c",0x3f,"kdf_pbkdf1_do_derive"
                           );
            func_0x00bc5160(0x39,0x80006,0);
          }
          else {
            iVar9 = func_0x00bd3dd0(iVar6,uVar8,0);
            if ((((iVar9 != 0) && (iVar9 = func_0x00bd3e10(iVar6,uVar4,uVar3), iVar9 != 0)) &&
                (iVar9 = func_0x00bd3e10(iVar6,uVar7,uVar14), iVar9 != 0)) &&
               ((iVar9 = func_0x00bd3c80(iVar6,&stack0x0000001c,0), iVar9 != 0 &&
                (uVar10 = func_0x00bc4320(uVar8), 0 < (int)uVar10)))) {
              if (uVar10 < in_stack_0000006c) {
                FUN_00bc4f50();
                func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf1.c",0x4c,
                                "kdf_pbkdf1_do_derive");
                func_0x00bc5160(0x39,0xca,0);
              }
              else {
                uVar11 = 0;
                uVar12 = 1;
                if ((uVar2 != 0) || (1 < uVar1)) {
                  do {
                    iVar9 = func_0x00bd3dd0(iVar6,uVar8,0);
                    if ((iVar9 == 0) ||
                       ((iVar9 = func_0x00bd3e10(iVar6,&stack0x0000001c,uVar10), iVar9 == 0 ||
                        (iVar9 = func_0x00bd3c80(iVar6,&stack0x0000001c,0), iVar9 == 0))))
                    goto LAB_00cd898c;
                    bVar13 = 0xfffffffe < uVar12;
                    uVar12 = uVar12 + 1;
                    uVar11 = uVar11 + bVar13;
                  } while ((uVar11 < uVar2) || ((uVar11 <= uVar2 && (uVar12 < uVar1))));
                }
                memcpy(_Dst,&stack0x0000001c,in_stack_0000006c);
              }
            }
          }
LAB_00cd898c:
          func_0x00401320(&stack0x0000001c,0x40);
          func_0x00bd45b0(iVar6);
          FUN_008ab370();
          return;
        }
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf1.c",0xc0,"kdf_pbkdf1_derive");
        uVar14 = 0x83;
      }
      func_0x00bc5160(0x39,uVar14,0);
    }
  }
  FUN_008ab370();
  return;
}



undefined ** FUN_00cd89c0(void)

{
  return &PTR_s_properties_010ac930;
}



bool FUN_00cd89d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(*param_1);
  iVar2 = func_0x00cd5f40(param_1 + 1,param_2,uVar1);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = func_0x00bc09d0(param_2,&DAT_01059dc0);
  if ((iVar2 != 0) && (iVar2 = func_0x00cd8a90(param_1 + 4,param_1 + 5,iVar2), iVar2 == 0)) {
    return false;
  }
  iVar2 = func_0x00bc09d0(param_2,&DAT_01059db8);
  if ((iVar2 != 0) && (iVar2 = func_0x00cd8a90(param_1 + 6,param_1 + 7,iVar2), iVar2 == 0)) {
    return false;
  }
  iVar2 = func_0x00bc09d0(param_2,&DAT_01093bec);
  if (iVar2 == 0) {
    return true;
  }
  iVar2 = func_0x00bc05a0(iVar2,param_1 + 8);
  return iVar2 != 0;
}



undefined ** FUN_00cd8a80(void)

{
  return &PTR_DAT_010ac9a8;
}



undefined4 * FUN_00cd8b10(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x20,"providers\\implementations\\kdfs\\pvkkdf.c",0x30);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      func_0x00cd8f90(puVar2);
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00cd8b50(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00bbc830(0x20,"providers\\implementations\\kdfs\\pvkkdf.c",0x30);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      func_0x00cd8f90(puVar3);
      iVar2 = func_0x00cd62b0(param_1[3],param_1[4],puVar3 + 3,puVar3 + 4);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[1],param_1[2],puVar3 + 1,puVar3 + 2);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd5eb0(puVar3 + 5,param_1 + 5);
          if (iVar2 != 0) {
            return puVar3;
          }
        }
      }
      func_0x00cd6000(puVar3 + 5);
      FUN_00bbc580(puVar3[3],"providers\\implementations\\kdfs\\pvkkdf.c",0x3b);
      FUN_00bbc6c0(puVar3[1],puVar3[2],"providers\\implementations\\kdfs\\pvkkdf.c",0x3c);
      func_0x00401320(puVar3,0x20);
      FUN_00bbc580(puVar3,"providers\\implementations\\kdfs\\pvkkdf.c",0x46);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00cd8c20(int param_1)

{
  if (param_1 != 0) {
    func_0x00cd6000(param_1 + 0x14);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0xc),"providers\\implementations\\kdfs\\pvkkdf.c",0x3b);
    FUN_00bbc6c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                 "providers\\implementations\\kdfs\\pvkkdf.c",0x3c);
    func_0x00401320(param_1,0x20);
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\pvkkdf.c",0x46);
  }
  return;
}



void FUN_00cd8c70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd6000(param_1 + 5);
  FUN_00bbc580(param_1[3],"providers\\implementations\\kdfs\\pvkkdf.c",0x3b);
  FUN_00bbc6c0(param_1[1],param_1[2],"providers\\implementations\\kdfs\\pvkkdf.c",0x3c);
  func_0x00401320(param_1,0x20);
  *param_1 = uVar1;
  func_0x00cd8f90(param_1);
  return;
}



undefined4 FUN_00cd8cc0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = func_0x00bc3c60(*param_1);
    if (param_4 != 0) {
      iVar1 = func_0x00cd5f40(param_1 + 5,param_4,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_0x00bc09d0(param_4,&DAT_01059dc0);
      if ((iVar1 != 0) && (iVar1 = func_0x00cd9050(param_1 + 1,param_1 + 2,iVar1), iVar1 == 0)) {
        return 0;
      }
      iVar1 = func_0x00bc09d0(param_4,&DAT_01059db8);
      if ((iVar1 != 0) && (iVar1 = func_0x00cd9050(param_1 + 3,param_1 + 4,iVar1), iVar1 == 0)) {
        return 0;
      }
    }
    if (param_1[1] != 0) {
      if (param_1[3] == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pvkkdf.c",0x96,"kdf_pvk_derive");
        func_0x00bc5160(0x39,0x83,0);
        return 0;
      }
      iVar1 = FUN_00bbba70(param_1 + 5);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pvkkdf.c",0x9c,"kdf_pvk_derive");
        func_0x00bc5160(0x39,0x7a,0);
        return 0;
      }
      uVar3 = func_0x00bc4320(iVar1);
      if ((int)uVar3 < 1) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pvkkdf.c",0xa1,"kdf_pvk_derive");
        func_0x00bc5160(0x39,0x8e,0);
        return 0;
      }
      if (uVar3 <= param_3) {
        iVar4 = func_0x00bd46b0();
        if ((((iVar4 != 0) && (iVar1 = func_0x00bd3dd0(iVar4,iVar1,0), iVar1 != 0)) &&
            (iVar1 = func_0x00bd3e10(iVar4,param_1[3],param_1[4]), iVar1 != 0)) &&
           ((iVar1 = func_0x00bd3e10(iVar4,param_1[1],param_1[2]), iVar1 != 0 &&
            (iVar1 = func_0x00bd3c80(iVar4,param_2,0), iVar1 != 0)))) {
          func_0x00bd45b0(iVar4);
          return 1;
        }
        func_0x00bd45b0(iVar4);
        return 0;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\pvkkdf.c",0xa5,"kdf_pvk_derive");
      func_0x00bc5160(0x39,0xca,0);
      return 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\pvkkdf.c",0x91,"kdf_pvk_derive");
    func_0x00bc5160(0x39,0x82,0);
  }
  return 0;
}



undefined ** FUN_00cd8ee0(void)

{
  return &PTR_s_properties_010aca78;
}



bool FUN_00cd8ef0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(*param_1);
  if (param_2 != 0) {
    iVar2 = func_0x00cd5f40(param_1 + 5,param_2,uVar1);
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01059dc0);
    if ((iVar2 != 0) && (iVar2 = func_0x00cd9050(param_1 + 1,param_1 + 2,iVar2), iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01059db8);
    if (iVar2 != 0) {
      iVar2 = func_0x00cd9050(param_1 + 3,param_1 + 4,iVar2);
      return iVar2 != 0;
    }
  }
  return true;
}



undefined ** FUN_00cd8f80(void)

{
  return &PTR_DAT_010acadc;
}



void FUN_00cd9b30(int param_1)

{
  FUN_00c530b0(param_1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



int FUN_00cd9b50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  func_0x00e87f70();
  iVar4 = 0;
  param_1 = 0;
  func_0x00bf98b0(*(undefined4 *)(param_3 + 0x50));
  *(undefined4 *)(param_3 + 0x50) = 0;
  FUN_00bba400(*(undefined4 *)(param_3 + 0x54));
  *(undefined4 *)(param_3 + 0x54) = 0;
  iVar5 = 0;
  if (param_7 == 0) {
    param_7 = func_0x00bb5940(*(undefined4 *)(param_3 + 0x68));
    iVar5 = param_7;
    if (param_7 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bf9900();
  if (iVar1 != 0) {
    iVar2 = func_0x00bf9960(iVar1,param_4,param_7);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecp_mont.c",0xa6,"ossl_ec_GFp_mont_group_set_curve");
      func_0x00bc5160(0x10,0x80003,0);
    }
    else {
      iVar4 = func_0x00bba5e0();
      if (iVar4 != 0) {
        uVar3 = func_0x00bbaaa0(iVar1,param_7);
        iVar2 = func_0x00bba950(iVar4,uVar3);
        if (iVar2 != 0) {
          *(int *)(param_3 + 0x50) = iVar1;
          iVar1 = 0;
          *(int *)(param_3 + 0x54) = iVar4;
          iVar4 = 0;
          param_1 = FUN_00c531d0(param_3,param_4,param_5,param_6,param_7);
          if (param_1 == 0) {
            func_0x00bf98b0(*(undefined4 *)(param_3 + 0x50));
            *(undefined4 *)(param_3 + 0x50) = 0;
            FUN_00bba400(*(undefined4 *)(param_3 + 0x54));
            *(undefined4 *)(param_3 + 0x54) = 0;
          }
        }
      }
    }
  }
  FUN_00bba400(iVar4);
  func_0x00bb5760(iVar5);
  func_0x00bf98b0(iVar1);
  return param_1;
}



void FUN_00cd9c80(int param_1)

{
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_00bba400(*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00c53110(param_1);
  return;
}



void FUN_00cd9cb0(int param_1)

{
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_00bba080(*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00c53140(param_1);
  return;
}



undefined4 FUN_00cd9ce0(int param_1,int param_2)

{
  int iVar1;
  
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_00bba080(*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar1 = FUN_00c53170(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    iVar1 = func_0x00bf9900();
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x00bf9840(iVar1,*(undefined4 *)(param_2 + 0x50));
    if (iVar1 == 0) goto LAB_00cd9d4f;
  }
  if (*(int *)(param_2 + 0x54) == 0) {
    return 1;
  }
  iVar1 = func_0x00bba340(*(int *)(param_2 + 0x54));
  *(int *)(param_1 + 0x54) = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
LAB_00cd9d4f:
  func_0x00bf98b0(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  return 0;
}



undefined4
FUN_00cd9d70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_mont.c",200,"ossl_ec_GFp_mont_field_mul");
    func_0x00bc5160(0x10,0x6f,0);
    return 0;
  }
  uVar1 = func_0x00bf9d60(param_2,param_3,param_4,*(int *)(param_1 + 0x50),param_5);
  return uVar1;
}



undefined4 FUN_00cd9dc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_mont.c",0xd3,"ossl_ec_GFp_mont_field_sqr");
    func_0x00bc5160(0x10,0x6f,0);
    return 0;
  }
  uVar1 = func_0x00bf9d60(param_2,param_3,param_3,*(int *)(param_1 + 0x50),param_4);
  return uVar1;
}



undefined4
FUN_00cd9e10(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  uVar4 = 0;
  if (*(int *)(param_2 + 0x50) == 0) {
    return 0;
  }
  iVar3 = 0;
  if ((param_5 == 0) &&
     (param_5 = func_0x00bb59c0(*(undefined4 *)(param_2 + 0x68)), iVar3 = param_5, param_5 == 0)) {
    return 0;
  }
  func_0x00bb59e0(param_5);
  iVar1 = func_0x00bb57f0(param_5);
  if ((((iVar1 != 0) && (iVar2 = func_0x00bba8c0(iVar1,2), iVar2 != 0)) &&
      (iVar2 = FUN_00be8320(iVar1,*(undefined4 *)(param_2 + 0x28),iVar1), iVar2 != 0)) &&
     (iVar1 = FUN_00c2b2a0(param_3,param_4,iVar1,*(undefined4 *)(param_2 + 0x28),param_5,
                           *(undefined4 *)(param_2 + 0x50)), iVar1 != 0)) {
    iVar1 = func_0x00bba540(param_3);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecp_mont.c",0xff,"ossl_ec_GFp_mont_field_inv");
      func_0x00bc5160(0x10,0xa5,0);
    }
  }
  func_0x00bb56f0(param_5);
  func_0x00bb5760(iVar3);
  return uVar4;
}



undefined4 FUN_00cd9f10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_mont.c",0x10f,"ossl_ec_GFp_mont_field_encode");
    func_0x00bc5160(0x10,0x6f,0);
    return 0;
  }
  uVar1 = func_0x00bba950(param_2,param_3,*(int *)(param_1 + 0x50),param_4);
  return uVar1;
}



undefined4 FUN_00cd9f60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_mont.c",0x11a,"ossl_ec_GFp_mont_field_decode");
    func_0x00bc5160(0x10,0x6f,0);
    return 0;
  }
  uVar1 = func_0x00bf9d00(param_2,param_3,*(int *)(param_1 + 0x50),param_4);
  return uVar1;
}



bool FUN_00cd9fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ecp_mont.c",0x125,"ossl_ec_GFp_mont_field_set_to_one");
    func_0x00bc5160(0x10,0x6f,0);
    return false;
  }
  iVar1 = func_0x00bba2d0(param_2,*(int *)(param_1 + 0x54));
  return iVar1 != 0;
}



undefined4 FUN_00cda010(int param_1)

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
    return 1;
  }
  FUN_00bba400(*(int *)(param_1 + 0x28));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x44));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x48));
  return 0;
}



void FUN_00cda070(int param_1)

{
  FUN_00bba080(*(undefined4 *)(param_1 + 0x28));
  FUN_00bba080(*(undefined4 *)(param_1 + 0x44));
  FUN_00bba080(*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



undefined4 FUN_00cda0c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x28));
  if (iVar1 != 0) {
    iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_2 + 0x44));
    if (iVar1 != 0) {
      iVar1 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x48));
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_2 + 0x2c);
        *(int *)(param_1 + 0x2c) = iVar1;
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
        iVar1 = iVar1 + 0x1f;
        iVar1 = func_0x00bbb1e0(*(undefined4 *)(param_1 + 0x44),
                                (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
          iVar1 = func_0x00bbb1e0(*(undefined4 *)(param_1 + 0x48),
                                  (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5);
          if (iVar1 != 0) {
            func_0x00c2cd20(*(undefined4 *)(param_1 + 0x44));
            func_0x00c2cd20(*(undefined4 *)(param_1 + 0x48));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00cda190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = func_0x00bba2d0(*(undefined4 *)(param_1 + 0x28),param_2);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x2c);
  iVar2 = func_0x00cf5fc0(*(undefined4 *)(param_1 + 0x28),piVar1,6);
  if ((iVar2 == 6) || (iVar2 == 4)) {
    iVar2 = func_0x00cf4d20(*(undefined4 *)(param_1 + 0x44),param_3,piVar1);
    if (iVar2 != 0) {
      iVar2 = func_0x00bbb1e0(*(undefined4 *)(param_1 + 0x44),
                              (int)(*piVar1 + 0x1f + (*piVar1 + 0x1f >> 0x1f & 0x1fU)) >> 5);
      if (iVar2 != 0) {
        func_0x00c2cd20(*(undefined4 *)(param_1 + 0x44));
        iVar2 = func_0x00cf4d20(*(undefined4 *)(param_1 + 0x48),param_4,piVar1);
        if (iVar2 != 0) {
          iVar2 = func_0x00bbb1e0(*(undefined4 *)(param_1 + 0x48),
                                  (int)(*piVar1 + 0x1f + (*piVar1 + 0x1f >> 0x1f & 0x1fU)) >> 5);
          if (iVar2 != 0) {
            func_0x00c2cd20(*(undefined4 *)(param_1 + 0x48));
            return 1;
          }
        }
      }
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x70,"ossl_ec_GF2m_simple_group_set_curve");
    func_0x00bc5160(0x10,0x83,0);
  }
  return 0;
}



undefined4 FUN_00cda280(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_2 != 0) &&
     (iVar1 = func_0x00bba2d0(param_2,*(undefined4 *)(param_1 + 0x28)), iVar1 == 0)) {
    return 0;
  }
  if ((param_3 != 0) &&
     (iVar1 = func_0x00bba2d0(param_3,*(undefined4 *)(param_1 + 0x44)), iVar1 == 0)) {
    return 0;
  }
  if ((param_4 != 0) &&
     (iVar1 = func_0x00bba2d0(param_4,*(undefined4 *)(param_1 + 0x48)), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



int FUN_00cda2e0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bba610(*(undefined4 *)(param_1 + 0x28));
  return iVar1 + -1;
}



undefined4 FUN_00cda300(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  if ((param_2 == 0) && (param_2 = func_0x00bb5930(), iVar4 = param_2, param_2 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0xbf,"ossl_ec_GF2m_simple_group_check_discriminant");
    func_0x00bc5160(0x10,0x80003,0);
  }
  else {
    func_0x00bb59e0(param_2);
    iVar1 = func_0x00bb57f0(param_2);
    if (((iVar1 != 0) &&
        (iVar2 = func_0x00cf4d20(iVar1,*(undefined4 *)(param_1 + 0x48),param_1 + 0x2c), iVar2 != 0))
       && (iVar1 = func_0x00bba540(iVar1), iVar1 == 0)) {
      uVar3 = 1;
    }
  }
  func_0x00bb56f0(param_2);
  func_0x00bb5760(iVar4);
  return uVar3;
}



undefined4 FUN_00cda3a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bba5e0();
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x00bba5e0();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  iVar2 = func_0x00bba5e0();
  *(int *)(param_1 + 0x10) = iVar2;
  if (((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) && (iVar2 != 0)) {
    return 1;
  }
  FUN_00bba400(*(int *)(param_1 + 8));
  FUN_00bba400(*(undefined4 *)(param_1 + 0xc));
  FUN_00bba400(*(undefined4 *)(param_1 + 0x10));
  return 0;
}



undefined4 FUN_00cda400(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    iVar2 = func_0x00bba2d0(*(undefined4 *)(param_2 + 8),param_3);
    if (iVar2 != 0) {
      func_0x00bba890(*(undefined4 *)(param_2 + 8),0);
      iVar2 = func_0x00bba2d0(*(undefined4 *)(param_2 + 0xc),param_4);
      if (iVar2 != 0) {
        func_0x00bba890(*(undefined4 *)(param_2 + 0xc),0);
        uVar1 = *(undefined4 *)(param_2 + 0x10);
        uVar3 = func_0x00bbaaa0();
        iVar2 = func_0x00bba2d0(uVar1,uVar3);
        if (iVar2 != 0) {
          func_0x00bba890(*(undefined4 *)(param_2 + 0x10),0);
          *(undefined4 *)(param_2 + 0x14) = 1;
          uVar4 = 1;
        }
      }
    }
    return uVar4;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x128,"ossl_ec_GF2m_simple_point_set_affine_coordinates")
  ;
  func_0x00bc5160(0x10,0xc0102,0);
  return 0;
}



undefined4 FUN_00cda4b0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x00c11c10(param_1,param_2);
  if (iVar2 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x148,
                    "ossl_ec_GF2m_simple_point_get_affine_coordinates");
    func_0x00bc5160(0x10,0x6a,0);
    return 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = func_0x00bbaaa0();
  iVar2 = func_0x00bba0f0(uVar1,uVar3);
  if (iVar2 == 0) {
    if (param_3 != 0) {
      iVar2 = func_0x00bba2d0(param_3,*(undefined4 *)(param_2 + 8));
      if (iVar2 == 0) {
        return 0;
      }
      func_0x00bba890(param_3,0);
    }
    if (param_4 != 0) {
      iVar2 = func_0x00bba2d0(param_4,*(undefined4 *)(param_2 + 0xc));
      if (iVar2 == 0) {
        return 0;
      }
      func_0x00bba890(param_4,0);
    }
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x14d,"ossl_ec_GF2m_simple_point_get_affine_coordinates")
  ;
  func_0x00bc5160(0x10,0xc0101,0);
  return 0;
}



bool FUN_00cda590(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iStack0000001c;
  int *in_stack_00000024;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  
  func_0x00e87f70();
  bVar10 = false;
  iStack0000001c = 0;
  iVar1 = func_0x00c11c10(in_stack_00000024,in_stack_0000002c);
  iVar2 = in_stack_00000030;
  if ((iVar1 == 0) &&
     (iVar1 = func_0x00c11c10(in_stack_00000024,in_stack_00000030), iVar2 = in_stack_0000002c,
     iVar1 == 0)) {
    if ((in_stack_00000034 != 0) ||
       (in_stack_00000034 = func_0x00bb5930(), iStack0000001c = in_stack_00000034,
       in_stack_00000034 != 0)) {
      func_0x00bb59e0(in_stack_00000034);
      uVar3 = func_0x00bb57f0(in_stack_00000034);
      uVar4 = func_0x00bb57f0(in_stack_00000034);
      uVar5 = func_0x00bb57f0(in_stack_00000034);
      uVar6 = func_0x00bb57f0(in_stack_00000034);
      uVar7 = func_0x00bb57f0(in_stack_00000034);
      uVar8 = func_0x00bb57f0(in_stack_00000034);
      uVar9 = func_0x00bb57f0(in_stack_00000034);
      iVar2 = func_0x00bb57f0(in_stack_00000034);
      if (iVar2 != 0) {
        if (*(int *)(in_stack_0000002c + 0x14) == 0) {
          iVar1 = func_0x00c11a40(in_stack_00000024,in_stack_0000002c,uVar3,uVar4,in_stack_00000034)
          ;
        }
        else {
          iVar1 = func_0x00bba2d0(uVar3,*(undefined4 *)(in_stack_0000002c + 8));
          if (iVar1 == 0) goto LAB_00cda8f8;
          iVar1 = func_0x00bba2d0(uVar4,*(undefined4 *)(in_stack_0000002c + 0xc));
        }
        if (iVar1 != 0) {
          if (*(int *)(in_stack_00000030 + 0x14) == 0) {
            iVar1 = func_0x00c11a40(in_stack_00000024,in_stack_00000030,uVar5,uVar6,
                                    in_stack_00000034);
          }
          else {
            iVar1 = func_0x00bba2d0(uVar5,*(undefined4 *)(in_stack_00000030 + 8));
            if (iVar1 == 0) goto LAB_00cda8f8;
            iVar1 = func_0x00bba2d0(uVar6,*(undefined4 *)(in_stack_00000030 + 0xc));
          }
          if (iVar1 != 0) {
            iVar1 = func_0x00bba970(uVar3,uVar5);
            if (iVar1 == 0) {
              iVar2 = func_0x00bba970(uVar4,uVar6);
              if ((iVar2 != 0) || (iVar2 = func_0x00bba540(uVar5), iVar2 != 0)) {
                iVar2 = func_0x00c12120(in_stack_00000024,in_stack_00000028);
                bVar10 = iVar2 != 0;
                goto LAB_00cda8f8;
              }
              iVar2 = (**(code **)(*in_stack_00000024 + 0x88))
                                (in_stack_00000024,uVar9,uVar6,uVar5,in_stack_00000034);
              if ((((iVar2 == 0) || (iVar2 = func_0x00cf4c90(uVar9,uVar9,uVar5), iVar2 == 0)) ||
                  (iVar2 = (**(code **)(*in_stack_00000024 + 0x84))
                                     (in_stack_00000024,uVar7,uVar9,in_stack_00000034), iVar2 == 0))
                 || (iVar2 = func_0x00cf4c90(uVar7,uVar7,uVar9), iVar2 == 0)) goto LAB_00cda8f8;
              iVar2 = in_stack_00000024[0x11];
            }
            else {
              iVar1 = func_0x00cf4c90(iVar2,uVar3,uVar5);
              if ((((iVar1 == 0) || (iVar1 = func_0x00cf4c90(uVar9,uVar4,uVar6), iVar1 == 0)) ||
                  ((iVar1 = (**(code **)(*in_stack_00000024 + 0x88))
                                      (in_stack_00000024,uVar9,uVar9,iVar2,in_stack_00000034),
                   iVar1 == 0 ||
                   ((iVar1 = (**(code **)(*in_stack_00000024 + 0x84))
                                       (in_stack_00000024,uVar7,uVar9,in_stack_00000034), iVar1 == 0
                    || (iVar1 = func_0x00cf4c90(uVar7,uVar7,in_stack_00000024[0x11]), iVar1 == 0))))
                  )) || (iVar1 = func_0x00cf4c90(uVar7,uVar7,uVar9), iVar1 == 0)) goto LAB_00cda8f8;
            }
            iVar2 = func_0x00cf4c90(uVar7,uVar7,iVar2);
            if (((((iVar2 != 0) && (iVar2 = func_0x00cf4c90(uVar8,uVar5,uVar7), iVar2 != 0)) &&
                 (iVar2 = (**(code **)(*in_stack_00000024 + 0x80))
                                    (in_stack_00000024,uVar8,uVar8,uVar9,in_stack_00000034),
                 iVar2 != 0)) &&
                ((iVar2 = func_0x00cf4c90(uVar8,uVar8,uVar7), iVar2 != 0 &&
                 (iVar2 = func_0x00cf4c90(uVar8,uVar8,uVar6), iVar2 != 0)))) &&
               (iVar2 = func_0x00c11fc0(in_stack_00000024,in_stack_00000028,uVar7,uVar8,
                                        in_stack_00000034), iVar2 != 0)) {
              bVar10 = true;
            }
          }
        }
      }
LAB_00cda8f8:
      func_0x00bb56f0(in_stack_00000034);
      func_0x00bb5760(iStack0000001c);
      return bVar10;
    }
  }
  else {
    iVar2 = func_0x00c11860(in_stack_00000028,iVar2);
    if (iVar2 != 0) {
      return true;
    }
  }
  return false;
}



void FUN_00cda920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00cda590(param_1,param_2,param_3,param_3,param_4);
  return;
}



undefined4 FUN_00cda940(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00c11c10(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = func_0x00bba540(*(undefined4 *)(param_2 + 0xc));
    if (iVar1 == 0) {
      if (*(code **)(*param_1 + 0x6c) != (code *)0x0) {
        iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,param_2,param_3);
        if (iVar1 != 0) {
          uVar2 = func_0x00cf4c90(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8),
                                  *(undefined4 *)(param_2 + 0xc));
          return uVar2;
        }
      }
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00cda9a0(void)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack00000004;
  undefined4 uStack00000008;
  int *in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  func_0x00e87f70();
  uStack00000008 = 0xffffffff;
  iStack00000004 = 0;
  iVar3 = func_0x00c11c10(in_stack_00000018,in_stack_0000001c);
  if (iVar3 != 0) {
    return 1;
  }
  pcVar1 = *(code **)(*in_stack_00000018 + 0x80);
  pcVar2 = *(code **)(*in_stack_00000018 + 0x84);
  if (*(int *)(in_stack_0000001c + 0x14) == 0) {
    return 0xffffffff;
  }
  if ((in_stack_00000020 == 0) &&
     (in_stack_00000020 = func_0x00bb5930(), iStack00000004 = in_stack_00000020,
     in_stack_00000020 == 0)) {
    return 0xffffffff;
  }
  func_0x00bb59e0(in_stack_00000020);
  uVar4 = func_0x00bb57f0(in_stack_00000020);
  iVar3 = func_0x00bb57f0(in_stack_00000020);
  if (((((iVar3 != 0) &&
        (iVar5 = func_0x00cf4c90(iVar3,*(undefined4 *)(in_stack_0000001c + 8),
                                 in_stack_00000018[0x11]), iVar5 != 0)) &&
       (iVar5 = (*pcVar1)(in_stack_00000018,iVar3,iVar3,*(undefined4 *)(in_stack_0000001c + 8),
                          in_stack_00000020), iVar5 != 0)) &&
      ((iVar5 = func_0x00cf4c90(iVar3,iVar3,*(undefined4 *)(in_stack_0000001c + 0xc)), iVar5 != 0 &&
       (iVar5 = (*pcVar1)(in_stack_00000018,iVar3,iVar3,*(undefined4 *)(in_stack_0000001c + 8),
                          in_stack_00000020), iVar5 != 0)))) &&
     ((iVar5 = func_0x00cf4c90(iVar3,iVar3,in_stack_00000018[0x12]), iVar5 != 0 &&
      ((iVar5 = (*pcVar2)(in_stack_00000018,uVar4,*(undefined4 *)(in_stack_0000001c + 0xc),
                          in_stack_00000020), iVar5 != 0 &&
       (iVar5 = func_0x00cf4c90(iVar3,iVar3,uVar4), iVar5 != 0)))))) {
    uStack00000008 = func_0x00bba540(iVar3);
  }
  func_0x00bb56f0(in_stack_00000020);
  func_0x00bb5760(iStack00000004);
  return uStack00000008;
}



uint FUN_00cdaaf0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iStack00000010;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  func_0x00e87f70();
  uVar6 = 0xffffffff;
  iStack00000010 = 0;
  iVar1 = func_0x00c11c10(in_stack_0000001c,in_stack_00000020);
  if (iVar1 != 0) {
    iVar1 = func_0x00c11c10(in_stack_0000001c,in_stack_00000024);
    return (uint)(iVar1 == 0);
  }
  iVar1 = func_0x00c11c10(in_stack_0000001c,in_stack_00000024);
  if (iVar1 == 0) {
    if ((*(int *)(in_stack_00000020 + 0x14) == 0) || (*(int *)(in_stack_00000024 + 0x14) == 0)) {
      if (in_stack_00000028 == 0) {
        in_stack_00000028 = func_0x00bb5930();
        iStack00000010 = in_stack_00000028;
        if (in_stack_00000028 == 0) {
          return 0xffffffff;
        }
      }
      func_0x00bb59e0(in_stack_00000028);
      uVar2 = func_0x00bb57f0(in_stack_00000028);
      uVar3 = func_0x00bb57f0(in_stack_00000028);
      uVar4 = func_0x00bb57f0(in_stack_00000028);
      iVar1 = func_0x00bb57f0(in_stack_00000028);
      if (iVar1 != 0) {
        iVar5 = func_0x00c11a40(in_stack_0000001c,in_stack_00000020,uVar2,uVar3,in_stack_00000028);
        if (iVar5 != 0) {
          iVar5 = func_0x00c11a40(in_stack_0000001c,in_stack_00000024,uVar4,iVar1,in_stack_00000028)
          ;
          if (iVar5 != 0) {
            iVar5 = func_0x00bba0f0(uVar2,uVar4);
            if (iVar5 == 0) {
              iVar1 = func_0x00bba0f0(uVar3,iVar1);
              uVar6 = 0;
              if (iVar1 == 0) goto LAB_00cdac4a;
            }
            uVar6 = 1;
          }
        }
      }
LAB_00cdac4a:
      func_0x00bb56f0(in_stack_00000028);
      func_0x00bb5760(iStack00000010);
      return uVar6;
    }
    iVar1 = func_0x00bba0f0(*(undefined4 *)(in_stack_00000020 + 8),
                            *(undefined4 *)(in_stack_00000024 + 8));
    if (iVar1 == 0) {
      iVar1 = func_0x00bba0f0(*(undefined4 *)(in_stack_00000020 + 0xc),
                              *(undefined4 *)(in_stack_00000024 + 0xc));
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



undefined4 FUN_00cdac70(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  iVar4 = 0;
  uVar5 = 0;
  if (*(int *)(param_3 + 0x14) == 0) {
    iVar1 = func_0x00c11c10(param_2,param_3);
    if (iVar1 == 0) {
      if (param_4 == 0) {
        iVar4 = func_0x00bb5930();
        param_4 = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
      }
      func_0x00bb59e0(param_4);
      uVar2 = func_0x00bb57f0(param_4);
      iVar1 = func_0x00bb57f0(param_4);
      if (iVar1 != 0) {
        iVar3 = func_0x00c11a40(param_2,param_3,uVar2,iVar1,param_4);
        if (iVar3 != 0) {
          iVar3 = func_0x00bba2d0(*(undefined4 *)(param_3 + 8),uVar2);
          if (iVar3 != 0) {
            iVar1 = func_0x00bba2d0(*(undefined4 *)(param_3 + 0xc),iVar1);
            if (iVar1 != 0) {
              iVar1 = func_0x00bba8c0(*(undefined4 *)(param_3 + 0x10),1);
              if (iVar1 != 0) {
                *(undefined4 *)(param_3 + 0x14) = 1;
                uVar5 = 1;
              }
            }
          }
        }
      }
      func_0x00bb56f0(param_4);
      func_0x00bb5760(iVar4);
      return uVar5;
    }
  }
  return 1;
}



undefined4 FUN_00cdad60(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,*(undefined4 *)(param_3 + uVar2 * 4),param_4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}



void FUN_00cdadb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00cf57a0(param_2,param_3,param_4,param_1 + 0x2c,param_5);
  return;
}



void FUN_00cdade0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00cf5d50(param_2,param_3,param_1 + 0x2c,param_4);
  return;
}



void FUN_00cdae00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00cf4f40(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x28),param_5);
  return;
}



undefined4 FUN_00cdae20(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_4 + 0x14) != 0) {
    do {
      iVar1 = func_0x00bba610(param_1[10]);
      iVar1 = func_0x00c2a840(*(undefined4 *)(param_3 + 0x10),iVar1 + -1,0xffffffff,0,0,param_5);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x2de;
        goto LAB_00cdafce;
      }
      iVar1 = func_0x00bba540(*(undefined4 *)(param_3 + 0x10));
    } while (iVar1 != 0);
    if (((*(code **)(*param_1 + 0x90) == (code *)0x0) ||
        (iVar1 = (**(code **)(*param_1 + 0x90))
                           (param_1,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x10),
                            param_5), iVar1 != 0)) &&
       (iVar1 = (**(code **)(*param_1 + 0x80))
                          (param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_4 + 8),
                           *(undefined4 *)(param_3 + 0x10),param_5), iVar1 != 0)) {
      do {
        iVar1 = func_0x00bba610(param_1[10]);
        iVar1 = func_0x00c2a840(*(undefined4 *)(param_2 + 0xc),iVar1 + -1,0xffffffff,0,0,param_5);
        if (iVar1 == 0) {
          FUN_00bc4f50();
          uVar2 = 0x2ed;
LAB_00cdafce:
          func_0x00bc5050("crypto\\ec\\ec2_smpl.c",uVar2,"ec_GF2m_simple_ladder_pre");
          func_0x00bc5160(0x10,0x80003,0);
          return 0;
        }
        iVar1 = func_0x00bba540(*(undefined4 *)(param_2 + 0xc));
      } while (iVar1 != 0);
      if (((((*(code **)(*param_1 + 0x90) == (code *)0x0) ||
            (iVar1 = (**(code **)(*param_1 + 0x90))
                               (param_1,*(undefined4 *)(param_2 + 0xc),
                                *(undefined4 *)(param_2 + 0xc),param_5), iVar1 != 0)) &&
           ((iVar1 = (**(code **)(*param_1 + 0x84))
                               (param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_4 + 8)
                                ,param_5), iVar1 != 0 &&
            ((iVar1 = (**(code **)(*param_1 + 0x84))
                                (param_1,*(undefined4 *)(param_2 + 8),
                                 *(undefined4 *)(param_2 + 0x10),param_5), iVar1 != 0 &&
             (iVar1 = func_0x00cf4c90(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
                                      param_1[0x12]), iVar1 != 0)))))) &&
          (iVar1 = (**(code **)(*param_1 + 0x80))
                             (param_1,*(undefined4 *)(param_2 + 0x10),
                              *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0xc),param_5
                             ), iVar1 != 0)) &&
         (iVar1 = (**(code **)(*param_1 + 0x80))
                            (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_2 + 0xc),param_5), iVar1 != 0)) {
        *(undefined4 *)(param_3 + 0x14) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
        return 1;
      }
    }
  }
  return 0;
}



bool FUN_00cdaff0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))
                    (param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                     *(undefined4 *)(param_3 + 8),param_5);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x80))
                      (param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_2 + 8),
                       *(undefined4 *)(param_3 + 0x10),param_5);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x84))
                        (param_1,*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_2 + 0x10),
                         param_5);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*param_1 + 0x84))
                          (param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),
                           param_5);
        if (iVar1 != 0) {
          iVar1 = func_0x00cf4c90(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_2 + 0xc),
                                  *(undefined4 *)(param_3 + 8));
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*param_1 + 0x84))
                              (param_1,*(undefined4 *)(param_3 + 0x10),
                               *(undefined4 *)(param_3 + 0x10),param_5);
            if (iVar1 != 0) {
              iVar1 = (**(code **)(*param_1 + 0x80))
                                (param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_2 + 0xc)
                                 ,*(undefined4 *)(param_3 + 8),param_5);
              if (iVar1 != 0) {
                iVar1 = (**(code **)(*param_1 + 0x80))
                                  (param_1,*(undefined4 *)(param_2 + 0xc),
                                   *(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_4 + 8),
                                   param_5);
                if (iVar1 != 0) {
                  iVar1 = func_0x00cf4c90(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8),
                                          *(undefined4 *)(param_2 + 0xc));
                  if (iVar1 != 0) {
                    iVar1 = (**(code **)(*param_1 + 0x84))
                                      (param_1,*(undefined4 *)(param_2 + 0xc),
                                       *(undefined4 *)(param_2 + 0x10),param_5);
                    if (iVar1 != 0) {
                      iVar1 = (**(code **)(*param_1 + 0x80))
                                        (param_1,*(undefined4 *)(param_2 + 0x10),
                                         *(undefined4 *)(param_2 + 0x10),
                                         *(undefined4 *)(param_3 + 0xc),param_5);
                      if (iVar1 != 0) {
                        iVar1 = (**(code **)(*param_1 + 0x84))
                                          (param_1,*(undefined4 *)(param_3 + 0xc),
                                           *(undefined4 *)(param_3 + 0xc),param_5);
                        if (iVar1 != 0) {
                          iVar1 = (**(code **)(*param_1 + 0x80))
                                            (param_1,*(undefined4 *)(param_3 + 0xc),
                                             *(undefined4 *)(param_3 + 0xc),param_1[0x12],param_5);
                          if (iVar1 != 0) {
                            iVar1 = func_0x00cf4c90(*(undefined4 *)(param_2 + 8),
                                                    *(undefined4 *)(param_2 + 0xc),
                                                    *(undefined4 *)(param_3 + 0xc));
                            return iVar1 != 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



undefined4
FUN_00cdb1a0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  func_0x00e87f70();
  param_1 = 0;
  iVar1 = func_0x00bba540(*(undefined4 *)(param_4 + 0x10));
  if (iVar1 != 0) {
    uVar2 = func_0x00c12120(param_3,param_4);
    return uVar2;
  }
  iVar1 = func_0x00bba540(*(undefined4 *)(param_5 + 0x10));
  if (iVar1 != 0) {
    iVar1 = func_0x00c11860(param_4,param_6);
    if (iVar1 != 0) {
      iVar1 = func_0x00c11b80(param_3,param_4,param_7);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x332,"ec_GF2m_simple_ladder_post");
    func_0x00bc5160(0x10,0x80010,0);
    return 0;
  }
  func_0x00bb59e0(param_7);
  uVar2 = func_0x00bb57f0(param_7);
  uVar3 = func_0x00bb57f0(param_7);
  iVar1 = func_0x00bb57f0(param_7);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x33d,"ec_GF2m_simple_ladder_post");
    func_0x00bc5160(0x10,0x80003,0);
    func_0x00bb56f0(param_7);
    return 0;
  }
  iVar4 = (**(code **)(*param_3 + 0x80))
                    (param_3,uVar2,*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_5 + 0x10),
                     param_7);
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*param_3 + 0x80))
                      (param_3,uVar3,*(undefined4 *)(param_6 + 8),*(undefined4 *)(param_4 + 0x10),
                       param_7);
    if (iVar4 != 0) {
      iVar4 = func_0x00cf4c90(uVar3,*(undefined4 *)(param_4 + 8),uVar3);
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*param_3 + 0x80))
                          (param_3,iVar1,*(undefined4 *)(param_6 + 8),
                           *(undefined4 *)(param_5 + 0x10),param_7);
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*param_3 + 0x80))
                            (param_3,*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 8),
                             iVar1,param_7);
          if (iVar4 != 0) {
            iVar4 = func_0x00cf4c90(iVar1,iVar1,*(undefined4 *)(param_5 + 8));
            if (iVar4 != 0) {
              iVar4 = (**(code **)(*param_3 + 0x80))(param_3,uVar3,uVar3,iVar1,param_7);
              if (iVar4 != 0) {
                iVar4 = (**(code **)(*param_3 + 0x84))
                                  (param_3,iVar1,*(undefined4 *)(param_6 + 8),param_7);
                if (iVar4 != 0) {
                  iVar4 = func_0x00cf4c90(iVar1,*(undefined4 *)(param_6 + 0xc),iVar1);
                  if (iVar4 != 0) {
                    iVar4 = (**(code **)(*param_3 + 0x80))(param_3,iVar1,iVar1,uVar2,param_7);
                    if (iVar4 != 0) {
                      iVar4 = func_0x00cf4c90(uVar3,iVar1,uVar3);
                      if (iVar4 != 0) {
                        iVar4 = (**(code **)(*param_3 + 0x80))
                                          (param_3,iVar1,*(undefined4 *)(param_6 + 8),uVar2,param_7)
                        ;
                        if (iVar4 != 0) {
                          iVar4 = (**(code **)(*param_3 + 0x8c))(param_3,iVar1,iVar1,param_7);
                          if (iVar4 != 0) {
                            iVar4 = (**(code **)(*param_3 + 0x80))
                                              (param_3,uVar3,uVar3,iVar1,param_7);
                            if (iVar4 != 0) {
                              iVar4 = (**(code **)(*param_3 + 0x80))
                                                (param_3,*(undefined4 *)(param_4 + 8),
                                                 *(undefined4 *)(param_4 + 0x10),iVar1,param_7);
                              if (iVar4 != 0) {
                                iVar4 = func_0x00cf4c90(iVar1,*(undefined4 *)(param_6 + 8),
                                                        *(undefined4 *)(param_4 + 8));
                                if (iVar4 != 0) {
                                  iVar4 = (**(code **)(*param_3 + 0x80))
                                                    (param_3,iVar1,iVar1,uVar3,param_7);
                                  if (iVar4 != 0) {
                                    iVar1 = func_0x00cf4c90(*(undefined4 *)(param_4 + 0xc),
                                                            *(undefined4 *)(param_6 + 0xc),iVar1);
                                    if (iVar1 != 0) {
                                      iVar1 = func_0x00bba8c0(*(undefined4 *)(param_4 + 0x10),1);
                                      if (iVar1 != 0) {
                                        *(undefined4 *)(param_4 + 0x14) = 1;
                                        func_0x00bba890(*(undefined4 *)(param_4 + 8),0);
                                        func_0x00bba890(*(undefined4 *)(param_4 + 0xc),0);
                                        param_1 = 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00bb56f0(param_7);
  return param_1;
}



undefined4
FUN_00cdb510(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_4 < 2) {
    iVar1 = func_0x00bba540(*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
      iVar1 = func_0x00bba540(*(undefined4 *)(param_1 + 0xc));
      if (iVar1 == 0) {
        if (param_3 == 0) {
          if (param_4 == 1) {
            uVar3 = func_0x00c51ee0(param_1,param_2,*param_6,*param_5,param_7);
            return uVar3;
          }
        }
        else if (param_4 == 0) {
          uVar3 = func_0x00c51ee0(param_1,param_2,param_3,0,param_7);
          return uVar3;
        }
        iVar1 = func_0x00c11e70(param_1);
        if (iVar1 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x38c,"ec_GF2m_simple_points_mul");
          func_0x00bc5160(0x10,0x80010,0);
          return 0;
        }
        iVar2 = func_0x00c51ee0(param_1,iVar1,param_3,0,param_7);
        if (iVar2 != 0) {
          iVar2 = func_0x00c51ee0(param_1,param_2,*param_6,*param_5,param_7);
          if (iVar2 != 0) {
            iVar2 = func_0x00c11690(param_1,param_2,iVar1,param_2,param_7);
            if (iVar2 != 0) {
              uVar3 = 1;
            }
          }
        }
        func_0x00c11a10(iVar1);
        return uVar3;
      }
    }
  }
  uVar3 = func_0x00c525d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar3;
}



int FUN_00cdb660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x00cf50c0(param_2,param_3,*(undefined4 *)(param_1 + 0x28),param_4);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec2_smpl.c",0x3a7,"ec_GF2m_simple_field_inv");
    func_0x00bc5160(0x10,0xa5,0);
  }
  return iVar1;
}



undefined4 FUN_00cdec90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



char * FUN_00cdeca0(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  if (param_2 == (char *)0x0) {
    return param_2;
  }
  pcVar1 = param_2 + 1;
  do {
    cVar2 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar2 != '\0');
  return param_2 + -(int)pcVar1;
}



undefined4 FUN_00cdecc0(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
  case 2:
  case 4:
  case 9:
  case 0xb:
  case 0xc:
    return 1;
  default:
    return 0;
  }
}



int FUN_00cded10(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 != 0) && (0 < param_3)) {
    iVar1 = FUN_00baaa30(param_1);
    iVar2 = func_0x00baafa0(param_1);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar4 = func_0x00bab6e0(iVar2,param_2,param_3);
    }
    iVar3 = FUN_00baaa40(param_1);
    if ((iVar3 != 0) && (0 < iVar4)) {
      iVar1 = func_0x00bd3e10(iVar1,param_2,iVar4);
      if (iVar1 == 0) {
        func_0x00baa700(param_1,0xf);
        return 0;
      }
    }
    if (iVar2 != 0) {
      func_0x00baa700(param_1,0xf);
      func_0x00baa710(param_1);
    }
    return iVar4;
  }
  return 0;
}



int FUN_00cdedc0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar1 = FUN_00baaa30(param_1);
    iVar2 = func_0x00baafa0(param_1);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar2 = func_0x00bab230(iVar2,param_2,param_3);
      iVar3 = FUN_00baaa40(param_1);
      if ((iVar3 != 0) && (0 < iVar2)) {
        iVar1 = func_0x00bd3e10(iVar1,param_2,iVar2);
        if (iVar1 < 1) {
          return -1;
        }
      }
      func_0x00baa700(param_1,0xf);
      func_0x00baa710(param_1);
      return iVar2;
    }
  }
  return 0;
}



undefined4 FUN_00cdee40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  uVar1 = FUN_00baaa30(param_2);
  iVar2 = func_0x00bc4130(uVar1);
  if (param_4 < iVar2) {
    return 0;
  }
  iVar2 = func_0x00bd3c80(uVar1,param_3,&stack0x00000000);
  if (iVar2 < 1) {
    unaff_retaddr = 0xffffffff;
  }
  return unaff_retaddr;
}



int FUN_00cdee90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  func_0x00e87f70();
  uVar1 = FUN_00baaa30(param_2);
  uVar2 = func_0x00baafa0(param_2);
  switch(param_3) {
  case 1:
    iVar4 = FUN_00baaa40(param_2);
    if (iVar4 == 0) {
      return 0;
    }
    uVar3 = func_0x00bc36d0(uVar1,0);
    iVar4 = func_0x00bd3dd0(uVar1,uVar3);
    if (0 < iVar4) {
      iVar4 = func_0x00baa730(uVar2,param_3,param_4,param_5);
      return iVar4;
    }
    break;
  default:
    iVar4 = func_0x00baa730(uVar2,param_3,param_4,param_5);
    break;
  case 0xc:
    uVar2 = FUN_00baaa30(param_5);
    iVar4 = func_0x00bd3f40(uVar2,uVar1);
    if (iVar4 == 0) {
      return 0;
    }
    goto LAB_00cdef5b;
  case 0x65:
    func_0x00baa700(param_2,0xf);
    iVar4 = func_0x00baa730(uVar2,param_3,param_4,param_5);
    func_0x00baa710(param_2);
    return iVar4;
  case 0x6f:
    iVar4 = func_0x00bd3dd0(uVar1,param_5,0);
    if (0 < iVar4) {
      func_0x00bab690(param_2,1);
      return iVar4;
    }
    break;
  case 0x70:
    iVar4 = FUN_00baaa40(param_2);
    if (iVar4 == 0) {
      return 0;
    }
    uVar1 = func_0x00bc36d0(uVar1);
    *param_5 = uVar1;
    return 1;
  case 0x78:
    *param_5 = uVar1;
LAB_00cdef5b:
    func_0x00bab690(param_2,1);
    return 1;
  case 0x94:
    iVar4 = FUN_00baaa40(param_2);
    if (iVar4 == 0) {
      return 0;
    }
    func_0x00bab670(param_2,param_5);
    return 1;
  }
  return iVar4;
}



undefined4 FUN_00cdf0e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bd46b0();
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bab690(param_1,1);
  func_0x00bab670(param_1,iVar1);
  return 1;
}



undefined4 FUN_00cdf110(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_00baaa30(param_1);
  func_0x00bd45b0(uVar1);
  func_0x00bab670(param_1,0);
  func_0x00bab690(param_1,0);
  return 1;
}



int FUN_00cdf150(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = func_0x00baafa0(param_1);
  if (iVar4 == 0) {
    return 0;
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



uint FUN_00cdf180(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  func_0x00e87f70();
  piVar1 = (int *)FUN_00baaa30(param_3);
  iVar2 = func_0x00baafa0(param_3);
  if ((piVar1 != (int *)0x0) && (iVar2 != 0)) {
    func_0x00baa700(param_3,0xf);
    iVar4 = piVar1[1];
    for (iVar6 = *piVar1 - iVar4; 0 < iVar6; iVar6 = iVar6 - uVar3) {
      uVar3 = func_0x00bab6e0(iVar2,iVar4 + 0x20 + (int)piVar1,iVar6);
      if ((int)uVar3 < 1) {
        func_0x00baa710(param_3);
        return uVar3;
      }
      piVar1[1] = piVar1[1] + uVar3;
      iVar4 = piVar1[1];
    }
    if ((param_4 != 0) && (0 < (int)param_5)) {
      piVar1[1] = 0;
      uVar3 = param_5;
      while( true ) {
        uVar7 = uVar3;
        if (0x1000 < uVar3) {
          uVar7 = 0x1000;
        }
        iVar4 = func_0x00ba8660(piVar1[5],piVar1 + 8,piVar1,param_4,uVar7);
        if (iVar4 == 0) break;
        uVar3 = uVar3 - uVar7;
        param_4 = param_4 + uVar7;
        piVar1[1] = 0;
        iVar4 = *piVar1;
        if (0 < iVar4) {
          iVar6 = 0;
          do {
            uVar7 = func_0x00bab6e0(iVar2,iVar6 + 0x20 + (int)piVar1,iVar4);
            if ((int)uVar7 < 1) {
              func_0x00baa710(param_3);
              uVar5 = param_5 - uVar3;
              if (param_5 == uVar3) {
                uVar5 = uVar7;
              }
              return uVar5;
            }
            piVar1[1] = piVar1[1] + uVar7;
            iVar4 = iVar4 - uVar7;
            iVar6 = piVar1[1];
          } while (0 < iVar4);
        }
        *piVar1 = 0;
        piVar1[1] = 0;
        if ((int)uVar3 < 1) {
          func_0x00baa710(param_3);
          return param_5;
        }
      }
      func_0x00baa700(param_3,0xf);
      piVar1[4] = 0;
    }
  }
  return 0;
}



size_t FUN_00cdf320(undefined4 param_1,int param_2,size_t param_3,undefined4 param_4,
                   undefined4 param_5,void *param_6,uint param_7)

{
  size_t *psVar1;
  undefined4 uVar2;
  void *_Dst;
  size_t *psVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  size_t _Size;
  
  func_0x00e87f70();
  _Dst = param_6;
  uVar2 = param_5;
  _Size = 0;
  if (param_6 != (void *)0x0) {
    psVar3 = (size_t *)FUN_00baaa30(param_5);
    iVar4 = func_0x00baafa0(uVar2);
    uVar9 = param_7;
    if ((psVar3 != (size_t *)0x0) && (iVar4 != 0)) {
      if (0 < (int)*psVar3) {
        _Size = *psVar3 - psVar3[1];
        if ((int)param_7 < (int)_Size) {
          _Size = param_7;
        }
        memcpy(_Dst,(void *)(psVar3[1] + 0x20 + (int)psVar3),_Size);
        psVar3[1] = psVar3[1] + _Size;
        param_6 = (void *)((int)_Dst + _Size);
        uVar9 = uVar9 - _Size;
        if (*psVar3 == psVar3[1]) {
          *psVar3 = 0;
          psVar3[1] = 0;
        }
      }
      iVar5 = func_0x00bc36e0(psVar3[5]);
      if (iVar5 != 0) {
        iVar8 = 0;
        if (iVar5 != 1) {
          iVar8 = iVar5;
        }
        if (0 < (int)uVar9) {
          while (0 < (int)psVar3[2]) {
            if (psVar3[6] == psVar3[7]) {
              psVar1 = psVar3 + 0x50;
              psVar3[6] = (size_t)psVar1;
              psVar3[7] = (size_t)psVar1;
              sVar6 = func_0x00bab230(iVar4,psVar1,0x1000);
              if (0 < (int)sVar6) {
                psVar3[7] = psVar3[7] + sVar6;
                goto LAB_00cdf414;
              }
LAB_00cdf476:
              iVar5 = func_0x00bab6a0(iVar4,8);
              if (iVar5 != 0) {
                if (_Size == 0) {
                  _Size = sVar6;
                }
                break;
              }
              psVar3[2] = sVar6;
              sVar6 = func_0x00ba8610(psVar3[5],psVar3 + 8,psVar3);
              psVar3[4] = sVar6;
              psVar3[1] = 0;
LAB_00cdf4e7:
              sVar6 = *psVar3;
              if ((int)uVar9 < (int)*psVar3) {
                sVar6 = uVar9;
              }
              if ((int)sVar6 < 1) break;
              memcpy(param_6,psVar3 + 8,sVar6);
              psVar3[1] = sVar6;
              _Size = _Size + sVar6;
              uVar9 = uVar9 - sVar6;
              param_6 = (void *)((int)param_6 + sVar6);
            }
            else {
              sVar6 = psVar3[7] - psVar3[6];
              if ((int)sVar6 < 1) goto LAB_00cdf476;
LAB_00cdf414:
              if (uVar9 < 0x101) {
LAB_00cdf4ae:
                if (0x100 < (int)sVar6) {
                  sVar6 = 0x100;
                }
                iVar5 = func_0x00ba8660(psVar3[5],psVar3 + 8,psVar3,psVar3[6],sVar6);
                if (iVar5 == 0) {
                  func_0x00baa700(param_5,0xf);
                  psVar3[4] = 0;
                  return 0;
                }
                psVar3[6] = psVar3[6] + sVar6;
                psVar3[2] = 1;
                if (*psVar3 != 0) goto LAB_00cdf4e7;
              }
              else {
                param_3 = uVar9 - iVar8;
                sVar7 = sVar6;
                if ((int)param_3 < (int)sVar6) {
                  sVar7 = param_3;
                }
                iVar5 = func_0x00ba8660(psVar3[5],param_6,&param_2,psVar3[6],sVar7);
                if (iVar5 == 0) {
                  func_0x00baa700(param_5,0xf);
                  return 0;
                }
                _Size = _Size + param_2;
                param_6 = (void *)((int)param_6 + param_2);
                uVar9 = uVar9 - param_2;
                sVar6 = sVar6 - param_3;
                if (0 < (int)sVar6) {
                  psVar3[6] = psVar3[6] + param_3;
                  goto LAB_00cdf4ae;
                }
                psVar3[6] = psVar3[7];
              }
            }
            if ((int)uVar9 < 1) break;
          }
        }
        uVar2 = param_5;
        func_0x00baa700(param_5,0xf);
        func_0x00baa710(uVar2);
        if (_Size == 0) {
          _Size = psVar3[2];
        }
        return _Size;
      }
    }
  }
  return 0;
}



int FUN_00cdf580(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  func_0x00e87f70();
  piVar2 = (int *)FUN_00baaa30(param_2);
  uVar3 = func_0x00baafa0(param_2);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  switch(param_3) {
  case 1:
    piVar2[4] = 1;
    iVar5 = piVar2[5];
    piVar2[3] = 0;
    uVar4 = FUN_00bc39e0(iVar5);
    iVar5 = func_0x00ba8630(iVar5,0,0,0,0,uVar4);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = func_0x00baa730(uVar3,param_3,param_4,param_5);
    return iVar5;
  case 2:
    if (piVar2[2] < 1) {
      return 1;
    }
    break;
  case 10:
  case 0xd:
    if (0 < *piVar2 - piVar2[1]) {
      return *piVar2 - piVar2[1];
    }
    break;
  case 0xb:
    do {
      iVar5 = piVar2[1];
      iVar7 = *piVar2;
      if (*piVar2 != iVar5) {
        do {
          iVar6 = FUN_00cdf180(param_2,0,0);
          if (iVar6 < 0) {
            return iVar6;
          }
          iVar1 = *piVar2;
          iVar7 = iVar7 - iVar5;
          iVar5 = piVar2[1];
          if (iVar1 - iVar5 == iVar7) {
            return iVar6;
          }
          iVar7 = iVar1;
        } while (iVar1 != iVar5);
      }
      if (piVar2[3] != 0) {
        iVar5 = func_0x00baa730(uVar3,param_3,param_4,param_5);
        func_0x00baa710(param_2);
        return iVar5;
      }
      piVar2[3] = 1;
      piVar2[1] = 0;
      iVar5 = func_0x00ba8610(piVar2[5],piVar2 + 8,piVar2);
      piVar2[4] = iVar5;
    } while (0 < iVar5);
    return iVar5;
  case 0xc:
    iVar5 = FUN_00baaa30(param_5);
    iVar7 = func_0x00ba8070();
    *(int *)(iVar5 + 0x14) = iVar7;
    if (iVar7 == 0) {
      return 0;
    }
    iVar5 = func_0x00ba7710(iVar7,piVar2[5]);
    if (iVar5 != 0) {
      func_0x00bab690(param_5,1);
      return iVar5;
    }
    return 0;
  case 0x65:
    func_0x00baa700(param_2,0xf);
    iVar5 = func_0x00baa730(uVar3,param_3,param_4,param_5);
    func_0x00baa710(param_2);
    return iVar5;
  case 0x71:
    return piVar2[4];
  case 0x81:
    *param_5 = piVar2[5];
    func_0x00bab690(param_2,1);
    return 1;
  }
  iVar5 = func_0x00baa730(uVar3,param_3,param_4,param_5);
  return iVar5;
}



undefined4 FUN_00cdf840(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00bbc830(0x1140,"crypto\\evp\\bio_enc.c",0x44);
  if (iVar1 != 0) {
    iVar2 = func_0x00ba8070();
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 8) = 1;
      *(undefined4 *)(iVar1 + 0x10) = 1;
      *(int *)(iVar1 + 0x18) = iVar1 + 0x140;
      *(int *)(iVar1 + 0x1c) = iVar1 + 0x140;
      func_0x00bab670(param_1,iVar1);
      func_0x00bab690(param_1,1);
      return 1;
    }
    FUN_00bbc580(iVar1,"crypto\\evp\\bio_enc.c",0x49);
  }
  return 0;
}



undefined4 FUN_00cdf8c0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00baaa30(param_1);
    if (iVar1 != 0) {
      func_0x00ba8010(*(undefined4 *)(iVar1 + 0x14));
      FUN_00bbc6c0(iVar1,0x1140,"crypto\\evp\\bio_enc.c",0x61);
      func_0x00bab670(param_1,0);
      func_0x00bab690(param_1,0);
      return 1;
    }
  }
  return 0;
}



int FUN_00cdf9f0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  SOCKET s;
  int iVar2;
  sockaddr *to;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  WSASetLastError(0);
  if (*(int *)(iVar1 + 0x38) == 0) {
    iVar2 = func_0x00bcb070(iVar1);
    s = *(SOCKET *)(param_1 + 0x24);
    to = (sockaddr *)FUN_008ad590(iVar1);
    iVar2 = sendto(s,param_2,param_3,0,to,iVar2);
  }
  else {
    iVar2 = send(*(SOCKET *)(param_1 + 0x24),param_2,param_3,0);
  }
  func_0x00baa700(param_1,0xf);
  if (0 < iVar2) {
    return iVar2;
  }
  if ((iVar2 != 0) && (iVar2 != -1)) {
    return iVar2;
  }
  iVar3 = WSAGetLastError();
  if (iVar3 < 0x71) {
    if (((iVar3 != 0x70) && (iVar3 != 4)) && (iVar3 != 0xb)) {
      bVar4 = iVar3 == 0x67;
LAB_00cdfa8a:
      if (!bVar4) {
        bVar4 = false;
        goto LAB_00cdfa95;
      }
    }
  }
  else if ((iVar3 != 0x86) && (iVar3 != 0x8c)) {
    bVar4 = iVar3 == 0x2733;
    goto LAB_00cdfa8a;
  }
  bVar4 = true;
LAB_00cdfa95:
  if (bVar4) {
    func_0x00bab680(param_1,10);
    iVar3 = WSAGetLastError();
    *(int *)(iVar1 + 0x3c) = iVar3;
  }
  return iVar2;
}



// WARNING: Removing unreachable block (ram,0x00cdfbb6)

void FUN_00cdfac0(char *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  SOCKET s;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  sockaddr *from;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint unaff_retaddr;
  uint in_stack_0000003c;
  int in_stack_00000044;
  char *in_stack_00000048;
  int in_stack_0000004c;
  char *pcVar11;
  int *fromlen;
  
  func_0x00e87f70();
  iVar8 = in_stack_00000044;
  in_stack_0000003c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_1 = in_stack_00000048;
  param_5 = 0x1c;
  param_3 = in_stack_00000044;
  param_2 = *(int *)(in_stack_00000044 + 0x28);
  if (in_stack_00000048 == (char *)0x0) {
    FUN_008ab370();
    return;
  }
  WSASetLastError(0);
  func_0x00bcaf80(&stack0x00000020);
  iVar7 = *(int *)(iVar8 + 0x28);
  if ((*(int *)(iVar7 + 0x4c) == 0) && (*(int *)(iVar7 + 0x48) == 0)) goto LAB_00cdfcbc;
  param_4 = 4;
  iVar5 = getsockopt(*(SOCKET *)(iVar8 + 0x24),0xffff,0x1006,&stack0x00000000,&param_4);
  if (iVar5 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram.c",0x13e,"dgram_adjust_rcv_timeout");
    pcVar11 = "calling getsockopt()";
    iVar5 = WSAGetLastError();
    func_0x00bc5160(2,iVar5,pcVar11);
  }
  else {
    *(int *)(iVar7 + 0x50) = (int)((ulonglong)unaff_retaddr * 1000000);
    *(int *)(iVar7 + 0x54) =
         ((int)unaff_retaddr >> 0x1f) * 1000000 + (int)((ulonglong)unaff_retaddr * 1000000 >> 0x20);
  }
  uVar10 = FUN_00c44770();
  iVar5 = param_3;
  uVar6 = *(uint *)(iVar7 + 0x48);
  if (*(ulonglong *)(iVar7 + 0x48) < uVar10) {
LAB_00cdfbde:
    uVar6 = 0;
    uVar9 = 1000;
  }
  else {
    uVar9 = uVar6 - (uint)uVar10;
    uVar6 = (*(int *)(iVar7 + 0x4c) - (int)(uVar10 >> 0x20)) - (uint)(uVar6 < (uint)uVar10);
    if (((uVar6 == 0) && (uVar9 < 0x3e9)) && (uVar9 < 1000)) goto LAB_00cdfbde;
  }
  uVar1 = *(uint *)(iVar7 + 0x54);
  uVar2 = *(uint *)(iVar7 + 0x50);
  if (((((uVar1 == 0) && (uVar2 == 0)) || (uVar6 < uVar1)) ||
      ((uVar6 <= uVar1 &&
       ((uVar9 < uVar2 || ((uVar6 <= uVar1 && ((uVar6 < uVar1 || (uVar9 <= uVar2)))))))))) &&
     (iVar7 = setsockopt(*(SOCKET *)(param_3 + 0x24),0xffff,0x1006,&stack0x00000000,4),
     iVar8 = iVar5, iVar7 < 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram.c",0x15c,"dgram_adjust_rcv_timeout");
    pcVar11 = "calling setsockopt()";
    iVar7 = WSAGetLastError();
    func_0x00bc5160(2,iVar7,pcVar11);
  }
LAB_00cdfcbc:
  fromlen = &param_5;
  s = *(SOCKET *)(iVar8 + 0x24);
  iVar7 = *(int *)(param_2 + 0x58);
  from = (sockaddr *)FUN_008ad590(&stack0x00000020);
  iVar5 = recvfrom(s,param_1,in_stack_0000004c,-(uint)(iVar7 != 0) & 2,from,fromlen);
  iVar7 = param_2;
  if ((*(int *)(param_2 + 0x38) == 0) && (-1 < iVar5)) {
    func_0x00baa730(iVar8,0x2c,0,&stack0x00000020);
    func_0x00baa700(iVar8,0xf);
  }
  else {
    func_0x00baa700(iVar8,0xf);
    if ((iVar5 < 0) && (iVar5 = func_0x00ce0810(iVar5), iVar5 != 0)) {
      func_0x00bab680(iVar8,9);
      iVar5 = WSAGetLastError();
      *(int *)(iVar7 + 0x3c) = iVar5;
    }
  }
  param_1 = *(char **)(iVar8 + 0x28);
  if ((*(int *)((int)param_1 + 0x4c) == 0) && (*(int *)((int)param_1 + 0x48) == 0)) {
    FUN_008ab370();
    return;
  }
  lVar3 = (ulonglong)*(uint *)((int)param_1 + 0x50) * 0x431bde82;
  lVar4 = (ulonglong)*(uint *)((int)param_1 + 0x54) * 0xd7b634db +
          ((ulonglong)*(uint *)((int)param_1 + 0x50) * 0xd7b634db >> 0x20);
  uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar4);
  lVar3 = (ulonglong)*(uint *)((int)param_1 + 0x54) * 0x431bde82 +
          (ulonglong)CONCAT14(CARRY4(uVar6,uVar9),uVar6 + uVar9);
  param_1 = (char *)((uint)lVar3 >> 0x12 | (int)((ulonglong)lVar3 >> 0x20) * 0x4000);
  iVar8 = setsockopt(*(SOCKET *)(param_3 + 0x24),0xffff,0x1006,(char *)&param_1,4);
  if (iVar8 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_dgram.c",0x18b,"dgram_reset_rcv_timeout");
    pcVar11 = "calling setsockopt()";
    iVar8 = WSAGetLastError();
    func_0x00bc5160(2,iVar8,pcVar11);
  }
  FUN_008ab370();
  return;
}



int FUN_00cdfe50(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  SOCKET s;
  int iVar3;
  sockaddr *to;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(param_1 + 0x28);
  WSASetLastError(0);
  if (*(int *)(iVar2 + 0x38) == 0) {
    iVar3 = func_0x00bcb070(iVar2);
    s = *(SOCKET *)(param_1 + 0x24);
    to = (sockaddr *)FUN_008ad590(iVar2);
    iVar3 = sendto(s,param_2,(int)pcVar5 - (int)(param_2 + 1),0,to,iVar3);
  }
  else {
    iVar3 = send(*(SOCKET *)(param_1 + 0x24),param_2,(int)pcVar5 - (int)(param_2 + 1),0);
  }
  func_0x00baa700(param_1,0xf);
  if (0 < iVar3) {
    return iVar3;
  }
  if ((iVar3 != 0) && (iVar3 != -1)) {
    return iVar3;
  }
  iVar4 = WSAGetLastError();
  if (iVar4 < 0x71) {
    if (((iVar4 != 0x70) && (iVar4 != 4)) && (iVar4 != 0xb)) {
      bVar6 = iVar4 == 0x67;
LAB_00cdfefd:
      if (!bVar6) {
        bVar6 = false;
        goto LAB_00cdff08;
      }
    }
  }
  else if ((iVar4 != 0x86) && (iVar4 != 0x8c)) {
    bVar6 = iVar4 == 0x2733;
    goto LAB_00cdfefd;
  }
  bVar6 = true;
LAB_00cdff08:
  if (bVar6) {
    func_0x00bab680(param_1,10);
    iVar4 = WSAGetLastError();
    *(int *)(iVar2 + 0x3c) = iVar4;
  }
  return iVar3;
}



void FUN_00cdff30(uint param_1,undefined8 param_2,int param_3)

{
  SOCKET s;
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  SOCKET *_Dst;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  uint uVar8;
  short *_Src;
  short *psVar9;
  size_t sVar10;
  uint in_stack_000000b0;
  int in_stack_000000b8;
  undefined4 in_stack_000000bc;
  size_t in_stack_000000c0;
  SOCKET *in_stack_000000c4;
  char *pcVar11;
  
  func_0x00e87f70();
  _Dst = in_stack_000000c4;
  iVar5 = in_stack_000000b8;
  in_stack_000000b0 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_1 = 0;
  param_3 = 0x80;
  _Src = *(short **)(in_stack_000000b8 + 0x28);
  switch(in_stack_000000bc) {
  default:
LAB_00ce04b0:
    break;
  case 8:
    break;
  case 9:
    *(size_t *)(in_stack_000000b8 + 0x18) = in_stack_000000c0;
    break;
  case 0xb:
  case 0xc:
    break;
  case 0x1f:
  case 0x2c:
LAB_00ce00b0:
    uVar6 = FUN_008ad590(in_stack_000000c4);
    func_0x00bcaff0(_Src,uVar6);
    break;
