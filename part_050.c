    }
    iVar3 = func_0x00bc09d0(iVar4,"pkcs5");
    if (iVar3 != 0) {
      iVar3 = func_0x00bbfcd0(iVar3,&param_3);
      if (iVar3 == 0) {
        return 0;
      }
      puVar1[0xb] = (uint)(param_3 == (undefined4 *)0x0);
    }
    iVar3 = func_0x00bc09d0(iVar4,&DAT_01059dc0);
    if ((iVar3 != 0) && (iVar3 = func_0x00c9e3e0(puVar1 + 1,puVar1 + 2,iVar3), iVar3 == 0)) {
      return 0;
    }
    iVar3 = func_0x00bc09d0(iVar4,&DAT_01059db8);
    if (iVar3 != 0) {
      if ((puVar1[0xb] != 0) && (*(uint *)(iVar3 + 0xc) < 0x10)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf2.c",0x125,
                        "kdf_pbkdf2_set_ctx_params");
        func_0x00bc5160(0x39,0x70,0);
        return 0;
      }
      iVar3 = func_0x00c9e3e0(puVar1 + 3,puVar1 + 4,iVar3);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar4 = func_0x00bc09d0(iVar4,&DAT_01093bec);
    if (iVar4 != 0) {
      iVar4 = func_0x00bc05a0(iVar4,&stack0x00000000);
      if (iVar4 == 0) {
        return 0;
      }
      uVar5 = 1;
      if (puVar1[0xb] != 0) {
        uVar5 = 1000;
      }
      if ((param_1 == 0) && (unaff_retaddr < uVar5)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\pbkdf2.c",0x131,
                        "kdf_pbkdf2_set_ctx_params");
        func_0x00bc5160(0x39,0x7b,0);
        return 0;
      }
      puVar1[6] = unaff_retaddr;
      puVar1[7] = param_1;
    }
  }
  return 1;
}



undefined ** FUN_00c9deb0(void)

{
  return &PTR_DAT_01095414;
}



bool FUN_00c9dec0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc10c0(iVar1,0xffffffff);
    return iVar1 != 0;
  }
  return true;
}



undefined4 * FUN_00c9e460(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x30,"providers\\implementations\\kdfs\\pkcs12kdf.c",0x90);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00c9e490(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *_Dst;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    _Dst = (undefined4 *)FUN_00bbc830(0x30,"providers\\implementations\\kdfs\\pkcs12kdf.c",0x90);
    if (_Dst != (undefined4 *)0x0) {
      *_Dst = uVar1;
      iVar2 = func_0x00cd62b0(param_1[6],param_1[7],_Dst + 6,_Dst + 7);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[4],param_1[5],_Dst + 4,_Dst + 5);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd5eb0(_Dst + 1,param_1 + 1);
          if (iVar2 != 0) {
            uVar1 = param_1[9];
            _Dst[8] = param_1[8];
            _Dst[9] = uVar1;
            _Dst[10] = param_1[10];
            return _Dst;
          }
        }
      }
      func_0x00cd6000(_Dst + 1);
      FUN_00bbc580(_Dst[6],"providers\\implementations\\kdfs\\pkcs12kdf.c",0x9a);
      FUN_00bbc6c0(_Dst[4],_Dst[5],"providers\\implementations\\kdfs\\pkcs12kdf.c",0x9b);
      memset(_Dst,0,0x30);
      FUN_00bbc580(_Dst,"providers\\implementations\\kdfs\\pkcs12kdf.c",0xa5);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00c9e580(void *param_1)

{
  if (param_1 != (void *)0x0) {
    func_0x00cd6000((int)param_1 + 4);
    FUN_00bbc580(*(undefined4 *)((int)param_1 + 0x18),
                 "providers\\implementations\\kdfs\\pkcs12kdf.c",0x9a);
    FUN_00bbc6c0(*(undefined4 *)((int)param_1 + 0x10),*(undefined4 *)((int)param_1 + 0x14),
                 "providers\\implementations\\kdfs\\pkcs12kdf.c",0x9b);
    memset(param_1,0,0x30);
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\pkcs12kdf.c",0xa5);
  }
  return;
}



void FUN_00c9e5e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd6000(param_1 + 1);
  FUN_00bbc580(param_1[6],"providers\\implementations\\kdfs\\pkcs12kdf.c",0x9a);
  FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\pkcs12kdf.c",0x9b);
  memset(param_1,0,0x30);
  *param_1 = uVar1;
  return;
}



undefined4 FUN_00c9e630(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = func_0x00bc3c60(*param_1);
    if (param_4 != 0) {
      iVar1 = func_0x00cd5f40(param_1 + 1,param_4,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = func_0x00bc09d0(param_4,&DAT_01059dc0);
      if ((iVar1 != 0) && (iVar1 = func_0x00c9ed50(param_1 + 4,param_1 + 5,iVar1), iVar1 == 0)) {
        return 0;
      }
      iVar1 = func_0x00bc09d0(param_4,&DAT_01059db8);
      if ((iVar1 != 0) && (iVar1 = func_0x00c9ed50(param_1 + 6,param_1 + 7,iVar1), iVar1 == 0)) {
        return 0;
      }
      iVar1 = func_0x00bc09d0(param_4,&DAT_0113fde4);
      if ((iVar1 != 0) && (iVar1 = func_0x00bbfcd0(iVar1,param_1 + 10), iVar1 == 0)) {
        return 0;
      }
      iVar1 = func_0x00bc09d0(param_4,&DAT_01093bec);
      if ((iVar1 != 0) && (iVar1 = func_0x00bc05a0(iVar1,param_1 + 8), iVar1 == 0)) {
        return 0;
      }
    }
    if (param_1[4] != 0) {
      if (param_1[6] != 0) {
        uVar2 = FUN_00bbba70(param_1 + 1);
        uVar2 = func_0x00c9e8e0(param_1[4],param_1[5],param_1[6],param_1[7],param_1[10],param_1[8],
                                param_1[9],uVar2,param_2,param_3);
        return uVar2;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\pkcs12kdf.c",0xe9,"kdf_pkcs12_derive");
      func_0x00bc5160(0x39,0x83,0);
      return 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\pkcs12kdf.c",0xe4,"kdf_pkcs12_derive");
    func_0x00bc5160(0x39,0x82,0);
  }
  return 0;
}



undefined ** FUN_00c9e7b0(void)

{
  return &PTR_s_properties_010954f8;
}



bool FUN_00c9e7c0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(*param_1);
  if (param_2 != 0) {
    iVar2 = func_0x00cd5f40(param_1 + 1,param_2,uVar1);
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01059dc0);
    if ((iVar2 != 0) && (iVar2 = func_0x00c9ed50(param_1 + 4,param_1 + 5,iVar2), iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01059db8);
    if ((iVar2 != 0) && (iVar2 = func_0x00c9ed50(param_1 + 6,param_1 + 7,iVar2), iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_0113fde4);
    if ((iVar2 != 0) && (iVar2 = func_0x00bbfcd0(iVar2,param_1 + 10), iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01093bec);
    if (iVar2 != 0) {
      iVar2 = func_0x00bc05a0(iVar2,param_1 + 8);
      return iVar2 != 0;
    }
  }
  return true;
}



undefined ** FUN_00c9e8a0(void)

{
  return &PTR_DAT_01095584;
}



undefined4 FUN_00c9e8b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar2 == 0) {
    return 0xfffffffe;
  }
  param_2 = 0xffffffff;
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\params.c",0x274,"OSSL_PARAM_set_uint32");
    func_0x00bc5160(0xf,0xc0102,0);
    return 0;
  }
  iVar4 = *(int *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  if (iVar4 == 2) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 0x10) = 4;
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = *(int *)(iVar2 + 0xc);
      if (iVar4 != 4) {
LAB_00bc114a:
        if (iVar4 == 8) {
          *(undefined4 *)(iVar2 + 0x10) = 8;
          *puVar3 = 0xffffffff;
          puVar3[1] = 0;
          return 1;
        }
        uVar1 = func_0x00bc1630(iVar2,&param_2,4);
        return uVar1;
      }
      *puVar3 = 0xffffffff;
    }
  }
  else if (iVar4 == 1) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 0x10) = 4;
    if (puVar3 != (undefined4 *)0x0) {
      iVar4 = *(int *)(iVar2 + 0xc);
      if (iVar4 == 4) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\params.c",0x294,"OSSL_PARAM_set_uint32");
        func_0x00bc5160(0xf,0x7e,0);
        return 0;
      }
      goto LAB_00bc114a;
    }
  }
  else {
    if (iVar4 != 3) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\params.c",0x2b2,"OSSL_PARAM_set_uint32");
      func_0x00bc5160(0xf,0x81,0);
      return 0;
    }
    *(undefined4 *)(iVar2 + 0x10) = 8;
    if (*(undefined8 **)(iVar2 + 8) != (undefined8 *)0x0) {
      if (*(int *)(iVar2 + 0xc) == 8) {
        **(undefined8 **)(iVar2 + 8) = 0x41efffffffe00000;
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\params.c",0x2ae,"OSSL_PARAM_set_uint32");
      func_0x00bc5160(0xf,0x82,0);
      return 0;
    }
  }
  return 1;
}



undefined4 * FUN_00c9edd0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00bbc830(0x40,"providers\\implementations\\kdfs\\scrypt.c",0x41);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      puVar3[6] = 0x100000;
      puVar3[7] = 0;
      puVar3[8] = 8;
      puVar3[9] = 0;
      puVar3[10] = 1;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0x40100000;
      puVar3[0xd] = 0;
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}



int FUN_00c9edf0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = func_0x00c9f360(*param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_1[0xe] == 0) || (iVar3 = FUN_00bd4800(param_1[0xe]), iVar3 != 0)) {
    if (param_1[1] != 0) {
      iVar3 = func_0x00bbbc70(param_1[1],"providers\\implementations\\kdfs\\scrypt.c",0x6d);
      *(int *)(iVar2 + 4) = iVar3;
      if (iVar3 == 0) goto LAB_00c9eeaf;
    }
    iVar3 = func_0x00cd62b0(param_1[4],param_1[5],iVar2 + 0x10,iVar2 + 0x14);
    if ((iVar3 != 0) &&
       (iVar3 = func_0x00cd62b0(param_1[2],param_1[3],iVar2 + 8,iVar2 + 0xc), iVar3 != 0)) {
      uVar1 = param_1[7];
      *(undefined4 *)(iVar2 + 0x18) = param_1[6];
      *(undefined4 *)(iVar2 + 0x1c) = uVar1;
      uVar1 = param_1[9];
      *(undefined4 *)(iVar2 + 0x20) = param_1[8];
      *(undefined4 *)(iVar2 + 0x24) = uVar1;
      uVar1 = param_1[0xb];
      *(undefined4 *)(iVar2 + 0x28) = param_1[10];
      *(undefined4 *)(iVar2 + 0x2c) = uVar1;
      uVar1 = param_1[0xd];
      *(undefined4 *)(iVar2 + 0x30) = param_1[0xc];
      *(undefined4 *)(iVar2 + 0x34) = uVar1;
      *(undefined4 *)(iVar2 + 0x38) = param_1[0xe];
      return iVar2;
    }
  }
LAB_00c9eeaf:
  FUN_00bbc580(*(undefined4 *)(iVar2 + 4),"providers\\implementations\\kdfs\\scrypt.c",0x53);
  FUN_00bd4770(*(undefined4 *)(iVar2 + 0x38));
  FUN_00bbc580(*(undefined4 *)(iVar2 + 0x10),"providers\\implementations\\kdfs\\scrypt.c",0x5e);
  FUN_00bbc6c0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
               "providers\\implementations\\kdfs\\scrypt.c",0x5f);
  *(undefined4 *)(iVar2 + 0x18) = 0x100000;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 8;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 1;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0x40100000;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  FUN_00bbc580(iVar2,"providers\\implementations\\kdfs\\scrypt.c",0x56);
  return 0;
}



void FUN_00c9ef40(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\kdfs\\scrypt.c",0x53);
    FUN_00bd4770(*(undefined4 *)(param_1 + 0x38));
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x10),"providers\\implementations\\kdfs\\scrypt.c",0x5e);
    FUN_00bbc6c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 "providers\\implementations\\kdfs\\scrypt.c",0x5f);
    *(undefined4 *)(param_1 + 0x18) = 0x100000;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 8;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x40100000;
    *(undefined4 *)(param_1 + 0x34) = 0;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\scrypt.c",0x56);
  }
  return;
}



void FUN_00c9efd0(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x10),"providers\\implementations\\kdfs\\scrypt.c",0x5e);
  FUN_00bbc6c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               "providers\\implementations\\kdfs\\scrypt.c",0x5f);
  *(undefined4 *)(param_1 + 0x18) = 0x100000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 8;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x40100000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



undefined4
FUN_00c9f040(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (iVar1 = FUN_00c9f130(param_1,param_4), iVar1 != 0)) {
    if (param_1[2] != 0) {
      if (param_1[4] == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\scrypt.c",0xc6,"kdf_scrypt_derive");
        func_0x00bc5160(0x39,0x83,0);
        return 0;
      }
      if ((param_1[0xe] == 0) && (iVar1 = func_0x00ca0070(param_1), iVar1 == 0)) {
        return 0;
      }
      uVar2 = func_0x00c9fc50(param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],
                              param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                              param_1[0xd],param_2,param_3,param_1[0xe],*param_1,param_1[1]);
      return uVar2;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\scrypt.c",0xc1,"kdf_scrypt_derive");
    func_0x00bc5160(0x39,0x82,0);
  }
  return 0;
}



undefined ** FUN_00c9f120(void)

{
  return &PTR_DAT_01095650;
}



bool FUN_00c9f130(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_retaddr;
  
  func_0x00e87f70();
  if (param_4 != 0) {
    iVar1 = func_0x00bc09d0(param_4,&DAT_01059dc0);
    if ((iVar1 != 0) && (iVar1 = func_0x00c9fff0(param_3 + 8,param_3 + 0xc,iVar1), iVar1 == 0)) {
      return false;
    }
    iVar1 = func_0x00bc09d0(param_4,&DAT_01059db8);
    if ((iVar1 != 0) && (iVar1 = func_0x00c9fff0(param_3 + 0x10,param_3 + 0x14,iVar1), iVar1 == 0))
    {
      return false;
    }
    iVar1 = func_0x00bc09d0(param_4,&DAT_0105913c);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc05a0(iVar1,&stack0x00000000);
      if (iVar1 == 0) {
        return false;
      }
      if ((param_1 == 0) && (unaff_retaddr < 2)) {
        return false;
      }
      if (unaff_retaddr == 0 && param_1 == 0) {
        return false;
      }
      if ((unaff_retaddr - 1 & unaff_retaddr) != 0 ||
          ((param_1 - 1) + (uint)(unaff_retaddr != 0) & param_1) != 0) {
        return false;
      }
      *(uint *)(param_3 + 0x18) = unaff_retaddr;
      *(uint *)(param_3 + 0x1c) = param_1;
    }
    iVar1 = func_0x00bc09d0(param_4,&DAT_01198360);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc05a0(iVar1,&stack0x00000000);
      if (iVar1 == 0) {
        return false;
      }
      if ((param_1 == 0) && (unaff_retaddr == 0)) {
        return false;
      }
      *(uint *)(param_3 + 0x20) = unaff_retaddr;
      *(uint *)(param_3 + 0x24) = param_1;
    }
    iVar1 = func_0x00bc09d0(param_4,&DAT_01059c54);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc05a0(iVar1,&stack0x00000000);
      if (iVar1 == 0) {
        return false;
      }
      if ((param_1 == 0) && (unaff_retaddr == 0)) {
        return false;
      }
      *(uint *)(param_3 + 0x28) = unaff_retaddr;
      *(uint *)(param_3 + 0x2c) = param_1;
    }
    iVar1 = func_0x00bc09d0(param_4,"maxmem_bytes");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc05a0(iVar1,&stack0x00000000);
      if (iVar1 == 0) {
        return false;
      }
      if ((param_1 == 0) && (unaff_retaddr == 0)) {
        return false;
      }
      *(uint *)(param_3 + 0x30) = unaff_retaddr;
      *(uint *)(param_3 + 0x34) = param_1;
    }
    iVar1 = func_0x00bc09d0(param_4,"properties");
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) != 4) {
        return false;
      }
      iVar1 = *(int *)(iVar1 + 8);
      FUN_00bbc580(*(undefined4 *)(param_3 + 4),"providers\\implementations\\kdfs\\scrypt.c",0xae);
      *(undefined4 *)(param_3 + 4) = 0;
      if (iVar1 != 0) {
        iVar1 = func_0x00bbbc70(iVar1,"providers\\implementations\\kdfs\\scrypt.c",0xb1);
        *(int *)(param_3 + 4) = iVar1;
        if (iVar1 == 0) {
          return false;
        }
      }
      iVar1 = func_0x00ca0070(param_3);
      return iVar1 != 0;
    }
  }
  return true;
}



undefined ** FUN_00c9f350(void)

{
  return &PTR_DAT_010956f0;
}



void FUN_00ca00e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x1c,"providers\\implementations\\kdfs\\tls1_prf.c",0x78);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  return;
}



undefined4 * FUN_00ca0110(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00bbc830(0x1c,"providers\\implementations\\kdfs\\tls1_prf.c",0x78);
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *puVar3 = uVar1;
    if (param_1[1] != 0) {
      iVar2 = func_0x00c74a90(param_1[1]);
      puVar3[1] = iVar2;
      if (iVar2 == 0) goto LAB_00ca01af;
    }
    if (param_1[2] != 0) {
      iVar2 = func_0x00c74a90(param_1[2]);
      puVar3[2] = iVar2;
      if (iVar2 == 0) goto LAB_00ca01af;
    }
    iVar2 = func_0x00cd62b0(param_1[3],param_1[4],puVar3 + 3,puVar3 + 4);
    if ((iVar2 == 0) ||
       (iVar2 = func_0x00cd62b0(param_1[5],param_1[6],puVar3 + 5,puVar3 + 6), iVar2 == 0)) {
LAB_00ca01af:
      uVar1 = *puVar3;
      func_0x00c74b50(puVar3[1]);
      func_0x00c74b50(puVar3[2]);
      FUN_00bbc6c0(puVar3[3],puVar3[4],"providers\\implementations\\kdfs\\tls1_prf.c",0x90);
      FUN_00bbc6c0(puVar3[5],puVar3[6],"providers\\implementations\\kdfs\\tls1_prf.c",0x91);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      puVar3[6] = 0;
      *puVar3 = uVar1;
      FUN_00bbc580(puVar3,"providers\\implementations\\kdfs\\tls1_prf.c",0x85);
      return (undefined4 *)0x0;
    }
  }
  return puVar3;
}



void FUN_00ca0220(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    func_0x00c74b50(param_1[1]);
    func_0x00c74b50(param_1[2]);
    FUN_00bbc6c0(param_1[3],param_1[4],"providers\\implementations\\kdfs\\tls1_prf.c",0x90);
    FUN_00bbc6c0(param_1[5],param_1[6],"providers\\implementations\\kdfs\\tls1_prf.c",0x91);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = uVar1;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\tls1_prf.c",0x85);
  }
  return;
}



void FUN_00ca02b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00c74b50(param_1[1]);
  func_0x00c74b50(param_1[2]);
  FUN_00bbc6c0(param_1[3],param_1[4],"providers\\implementations\\kdfs\\tls1_prf.c",0x90);
  FUN_00bbc6c0(param_1[5],param_1[6],"providers\\implementations\\kdfs\\tls1_prf.c",0x91);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = uVar1;
  return;
}



undefined4 FUN_00ca0330(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00ca0450(param_1,param_4);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\tls1_prf.c",0x104,"kdf_tls1_prf_derive"
                         );
          func_0x00bc5160(0x39,0x84,0);
          return 0;
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\tls1_prf.c",0x108,"kdf_tls1_prf_derive"
                         );
          func_0x00bc5160(0x39,0x8c,0);
          return 0;
        }
        if (param_3 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\tls1_prf.c",0x10c,"kdf_tls1_prf_derive"
                         );
          func_0x00bc5160(0x39,0x69,0);
          return 0;
        }
        uVar2 = func_0x00ca08a0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                *(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x18),param_2,
                                param_3);
        return uVar2;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\tls1_prf.c",0x100,"kdf_tls1_prf_derive");
      func_0x00bc5160(0x39,0x81,0);
    }
  }
  return 0;
}



undefined ** FUN_00ca0440(void)

{
  return &PTR_s_properties_010957c0;
}



undefined4 FUN_00ca0450(void)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_stack_00000010;
  void *in_stack_00000014;
  
  func_0x00e87f70();
  puVar2 = in_stack_00000010;
  uVar4 = func_0x00bc3c60(*in_stack_00000010);
  pvVar3 = in_stack_00000014;
  if (in_stack_00000014 != (void *)0x0) {
    iVar5 = func_0x00bc09d0(in_stack_00000014,"digest");
    if (iVar5 != 0) {
      iVar5 = func_0x00bbbfe0(*(undefined4 *)(iVar5 + 8),"MD5-SHA1");
      if (iVar5 == 0) {
        iVar5 = func_0x00cd6030(puVar2 + 1,pvVar3,&DAT_010532a4,0,&DAT_0104e418,uVar4);
        if (iVar5 == 0) {
          return 0;
        }
        iVar5 = func_0x00cd6030(puVar2 + 2,pvVar3,&DAT_010532a4,0,&DAT_0104e908,uVar4);
      }
      else {
        func_0x00c74b50(puVar2[2]);
        iVar5 = func_0x00cd6030(puVar2 + 1,pvVar3,&DAT_010532a4,0,0,uVar4);
      }
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = func_0x00cd5f40(&stack0x00000000,pvVar3,uVar4);
      if (iVar5 == 0) {
        return 0;
      }
      uVar4 = FUN_00bbba70(&stack0x00000000);
      iVar5 = func_0x00bc44f0(uVar4);
      if (iVar5 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\tls1_prf.c",0x148,
                        "kdf_tls1_prf_set_ctx_params");
        func_0x00bc5160(0x39,0xb7,0);
        func_0x00cd6000(&stack0x00000000);
        return 0;
      }
      func_0x00cd6000(&stack0x00000000);
    }
    in_stack_00000010 = (undefined4 *)func_0x00bc09d0(pvVar3,"secret");
    if (in_stack_00000010 != (undefined4 *)0x0) {
      FUN_00bbc6c0(puVar2[3],puVar2[4],"providers\\implementations\\kdfs\\tls1_prf.c",0x158);
      puVar2[3] = 0;
      iVar5 = func_0x00bc01d0(in_stack_00000010,puVar2 + 3,0,puVar2 + 4);
      if (iVar5 == 0) {
        return 0;
      }
    }
    for (iVar5 = func_0x00bc09d0(pvVar3,&DAT_01056c84); iVar5 != 0;
        iVar5 = func_0x00bc09d0(iVar5 + 0x14,&DAT_01056c84)) {
      if ((*(int *)(iVar5 + 0xc) != 0) && (*(int *)(iVar5 + 8) != 0)) {
        in_stack_00000014 = (void *)0x0;
        in_stack_00000010 = (undefined4 *)0x0;
        iVar6 = func_0x00bc01f0(iVar5,&stack0x00000014,&stack0x00000010);
        if (iVar6 == 0) {
          return 0;
        }
        uVar1 = puVar2[6];
        if (~uVar1 < in_stack_00000010) {
          return 0;
        }
        iVar6 = uVar1 + (int)in_stack_00000010;
        iVar7 = FUN_00bbc710(puVar2[5],uVar1,iVar6,"providers\\implementations\\kdfs\\tls1_prf.c",
                             0x174);
        if (iVar7 == 0) {
          return 0;
        }
        puVar2[5] = iVar7;
        if (in_stack_00000010 != (undefined4 *)0x0) {
          memcpy((void *)(puVar2[6] + iVar7),in_stack_00000014,(size_t)in_stack_00000010);
        }
        puVar2[6] = iVar6;
      }
    }
  }
  return 1;
}



undefined ** FUN_00ca06b0(void)

{
  return &PTR_DAT_01095824;
}



void FUN_00ca0a90(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x44,"providers\\implementations\\kdfs\\hkdf.c",0x6c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  return;
}



undefined4 * FUN_00ca0ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *_Dst;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    _Dst = (undefined4 *)FUN_00bbc830(0x44,"providers\\implementations\\kdfs\\hkdf.c",0x6c);
    if (_Dst != (undefined4 *)0x0) {
      *_Dst = uVar1;
      iVar2 = func_0x00cd62b0(param_1[5],param_1[6],_Dst + 5,_Dst + 6);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[7],param_1[8],_Dst + 7,_Dst + 8);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd62b0(param_1[9],param_1[10],_Dst + 9,_Dst + 10);
          if (iVar2 != 0) {
            iVar2 = func_0x00cd62b0(param_1[0xb],param_1[0xc],_Dst + 0xb,_Dst + 0xc);
            if (iVar2 != 0) {
              iVar2 = func_0x00cd62b0(param_1[0xd],param_1[0xe],_Dst + 0xd,_Dst + 0xe);
              if (iVar2 != 0) {
                iVar2 = func_0x00cd62b0(param_1[0xf],param_1[0x10],_Dst + 0xf,_Dst + 0x10);
                if (iVar2 != 0) {
                  iVar2 = func_0x00cd5eb0(_Dst + 2,param_1 + 2);
                  if (iVar2 != 0) {
                    _Dst[1] = param_1[1];
                    return _Dst;
                  }
                }
              }
            }
          }
        }
      }
      uVar1 = *_Dst;
      func_0x00cd6000(_Dst + 2);
      FUN_00bbc580(_Dst[5],"providers\\implementations\\kdfs\\hkdf.c",0x86);
      FUN_00bbc580(_Dst[9],"providers\\implementations\\kdfs\\hkdf.c",0x88);
      FUN_00bbc580(_Dst[0xb],"providers\\implementations\\kdfs\\hkdf.c",0x89);
      FUN_00bbc6c0(_Dst[0xd],_Dst[0xe],"providers\\implementations\\kdfs\\hkdf.c",0x8a);
      FUN_00bbc6c0(_Dst[7],_Dst[8],"providers\\implementations\\kdfs\\hkdf.c",0x8b);
      FUN_00bbc6c0(_Dst[0xf],_Dst[0x10],"providers\\implementations\\kdfs\\hkdf.c",0x8c);
      memset(_Dst,0,0x44);
      *_Dst = uVar1;
      FUN_00bbc580(_Dst,"providers\\implementations\\kdfs\\hkdf.c",0x79);
      return (undefined4 *)0x0;
    }
  }
  return _Dst;
}



void FUN_00ca0c60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    func_0x00cd6000(param_1 + 2);
    FUN_00bbc580(param_1[5],"providers\\implementations\\kdfs\\hkdf.c",0x86);
    FUN_00bbc580(param_1[9],"providers\\implementations\\kdfs\\hkdf.c",0x88);
    FUN_00bbc580(param_1[0xb],"providers\\implementations\\kdfs\\hkdf.c",0x89);
    FUN_00bbc6c0(param_1[0xd],param_1[0xe],"providers\\implementations\\kdfs\\hkdf.c",0x8a);
    FUN_00bbc6c0(param_1[7],param_1[8],"providers\\implementations\\kdfs\\hkdf.c",0x8b);
    FUN_00bbc6c0(param_1[0xf],param_1[0x10],"providers\\implementations\\kdfs\\hkdf.c",0x8c);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *param_1 = uVar1;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\hkdf.c",0x79);
  }
  return;
}



void FUN_00ca0d80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd6000(param_1 + 2);
  FUN_00bbc580(param_1[5],"providers\\implementations\\kdfs\\hkdf.c",0x86);
  FUN_00bbc580(param_1[9],"providers\\implementations\\kdfs\\hkdf.c",0x88);
  FUN_00bbc580(param_1[0xb],"providers\\implementations\\kdfs\\hkdf.c",0x89);
  FUN_00bbc6c0(param_1[0xd],param_1[0xe],"providers\\implementations\\kdfs\\hkdf.c",0x8a);
  FUN_00bbc6c0(param_1[7],param_1[8],"providers\\implementations\\kdfs\\hkdf.c",0x8b);
  FUN_00bbc6c0(param_1[0xf],param_1[0x10],"providers\\implementations\\kdfs\\hkdf.c",0x8c);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = uVar1;
  return;
}



void FUN_00ca0e90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_stack_0000005c;
  undefined4 *in_stack_00000064;
  undefined4 in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000070;
  
  func_0x00e87f70();
  iVar10 = in_stack_00000070;
  uVar7 = in_stack_00000068;
  puVar6 = in_stack_00000064;
  in_stack_0000005c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uVar8 = func_0x00bc3c60(*in_stack_00000064);
  iVar9 = FUN_0058e2e0();
  if (iVar9 == 0) goto LAB_00ca0f3a;
  if (iVar10 != 0) {
    iVar9 = func_0x00ca1950(puVar6,iVar10);
    if (iVar9 == 0) goto LAB_00ca0f3a;
    iVar10 = func_0x00bc1860(iVar10,&DAT_011987c4,puVar6 + 0xf,puVar6 + 0x10,0x8000);
    if (iVar10 == 0) goto LAB_00ca0f3a;
  }
  iVar9 = FUN_00bbba70(puVar6 + 2);
  iVar10 = in_stack_0000006c;
  if (iVar9 != 0) {
    iVar12 = puVar6[7];
    if (iVar12 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\hkdf.c",0xe5,"kdf_hkdf_derive");
      func_0x00bc5160(0x39,0x80,0);
      FUN_008ab370();
      return;
    }
    if (in_stack_0000006c == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\hkdf.c",0xe9,"kdf_hkdf_derive");
      func_0x00bc5160(0x39,0x69,0);
      FUN_008ab370();
      return;
    }
    iVar11 = puVar6[1];
    if (iVar11 != 0) {
      if (iVar11 == 1) {
        func_0x00ca17e0(uVar8,iVar9,puVar6[5],puVar6[6],iVar12,puVar6[8],uVar7,in_stack_0000006c);
        FUN_008ab370();
        return;
      }
      if (iVar11 == 2) {
        func_0x00ca1620(iVar9,iVar12,puVar6[8],puVar6[0xf],puVar6[0x10],uVar7,in_stack_0000006c);
        FUN_008ab370();
        return;
      }
    }
    uVar1 = puVar6[0x10];
    uVar2 = puVar6[0xf];
    uVar3 = puVar6[8];
    uVar4 = puVar6[6];
    uVar5 = puVar6[5];
    iVar11 = func_0x00bc4320(iVar9);
    if (0 < iVar11) {
      iVar12 = func_0x00ca17e0(uVar8,iVar9,uVar5,uVar4,iVar12,uVar3,&stack0x0000001c,iVar11);
      if (iVar12 != 0) {
        func_0x00ca1620(iVar9,&stack0x0000001c,iVar11,uVar2,uVar1,uVar7,iVar10);
        func_0x00401320(&stack0x0000001c,0x40);
        FUN_008ab370();
        return;
      }
    }
    FUN_008ab370();
    return;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\kdfs\\hkdf.c",0xe1,"kdf_hkdf_derive");
  func_0x00bc5160(0x39,0x81,0);
LAB_00ca0f3a:
  FUN_008ab370();
  return;
}



undefined ** FUN_00ca1100(void)

{
  return &PTR_DAT_01095948;
}



bool FUN_00ca1110(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return true;
  }
  iVar1 = func_0x00ca1950(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1860(param_2,&DAT_011987c4,param_1 + 0x3c,param_1 + 0x40,0x8000);
    return iVar1 != 0;
  }
  return false;
}



undefined ** FUN_00ca1160(void)

{
  return &PTR_DAT_010959e8;
}



bool FUN_00ca1170(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = func_0x00ca1870(param_1,param_2);
    return iVar1 != 0;
  }
  return true;
}



void FUN_00ca11a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iStack00000008;
  uint in_stack_000000a4;
  undefined4 *in_stack_000000ac;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  int in_stack_000000b8;
  undefined4 uVar16;
  
  func_0x00e87f70();
  iVar9 = in_stack_000000b8;
  uVar16 = in_stack_000000b0;
  puVar7 = in_stack_000000ac;
  in_stack_000000a4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar8 = FUN_0058e2e0();
  if (iVar8 == 0) goto LAB_00ca1223;
  if (iVar9 == 0) {
LAB_00ca1310:
    iVar9 = FUN_00bbba70(puVar7 + 2);
    if (iVar9 != 0) {
      if (puVar7[1] == 1) {
        uVar2 = puVar7[0xc];
        puVar14 = (undefined *)puVar7[7];
        uVar3 = puVar7[0xb];
        uVar4 = puVar7[10];
        uVar5 = puVar7[9];
        iStack00000008 = puVar7[8];
        uVar6 = puVar7[6];
        iVar8 = puVar7[5];
        uVar10 = func_0x00bc3c60(*puVar7);
        iVar11 = func_0x00bc4320(iVar9);
        if (0 < iVar11) {
          if (puVar14 == (undefined *)0x0) {
            puVar14 = &DAT_01095b30;
            iStack00000008 = iVar11;
          }
          if (iVar8 == 0) {
            puVar15 = &DAT_01095b30;
          }
          else {
            iVar12 = func_0x00bd46b0();
            if (((iVar12 == 0) || (iVar13 = func_0x00bd3dd0(iVar12,iVar9,0), iVar13 < 1)) ||
               (iVar13 = func_0x00bd3c80(iVar12,&stack0x00000064,0), iVar13 < 1)) {
              func_0x00bd45b0(iVar12);
              goto LAB_00ca1223;
            }
            func_0x00bd45b0(iVar12);
            iVar8 = func_0x00ca1b90(iVar9,iVar8,uVar6,uVar5,uVar4,uVar3,uVar2,&stack0x00000064,
                                    iVar11,&stack0x00000024,iVar11);
            if (iVar8 == 0) goto LAB_00ca1223;
            puVar15 = &stack0x00000024;
          }
          func_0x00ca17e0(uVar10,iVar9,puVar15,iVar11,puVar14,iStack00000008,uVar16,
                          in_stack_000000b4);
          if (puVar15 == &stack0x00000024) {
            func_0x00401320(&stack0x00000024,iVar11);
          }
        }
      }
      else if (puVar7[1] == 2) {
        func_0x00ca1b90(iVar9,puVar7[7],puVar7[8],puVar7[9],puVar7[10],puVar7[0xb],puVar7[0xc],
                        puVar7[0xd],puVar7[0xe],uVar16,in_stack_000000b4);
      }
      goto LAB_00ca1223;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\hkdf.c",0x32d,"kdf_tls1_3_derive");
    uVar16 = 0x81;
  }
  else {
    iVar8 = func_0x00ca1950(puVar7,iVar9);
    if (iVar8 == 0) goto LAB_00ca1223;
    if (puVar7[1] != 0) {
      iVar8 = func_0x00bc09d0(iVar9,"prefix");
      if (iVar8 != 0) {
        puVar1 = puVar7 + 9;
        FUN_00bbc580(*puVar1,"providers\\implementations\\kdfs\\hkdf.c",0x35f);
        *puVar1 = 0;
        iVar8 = func_0x00bc01d0(iVar8,puVar1,0,puVar7 + 10);
        if (iVar8 == 0) goto LAB_00ca1223;
      }
      iVar8 = func_0x00bc09d0(iVar9,"label");
      if (iVar8 != 0) {
        puVar1 = puVar7 + 0xb;
        FUN_00bbc580(*puVar1,"providers\\implementations\\kdfs\\hkdf.c",0x367);
        *puVar1 = 0;
        iVar8 = func_0x00bc01d0(iVar8,puVar1,0,puVar7 + 0xc);
        if (iVar8 == 0) goto LAB_00ca1223;
      }
      FUN_00bbc6c0(puVar7[0xd],puVar7[0xe],"providers\\implementations\\kdfs\\hkdf.c",0x36e);
      puVar7[0xd] = 0;
      iVar9 = func_0x00bc09d0(iVar9,&DAT_0113c58c);
      if ((iVar9 != 0) && (iVar9 = func_0x00bc01d0(iVar9,puVar7 + 0xd,0,puVar7 + 0xe), iVar9 == 0))
      goto LAB_00ca1223;
      goto LAB_00ca1310;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\hkdf.c",0x35a,"kdf_tls1_3_set_ctx_params");
    uVar16 = 0x7d;
  }
  func_0x00bc5160(0x39,uVar16,0);
LAB_00ca1223:
  FUN_008ab370();
  return;
}



undefined ** FUN_00ca14c0(void)

{
  return &PTR_DAT_01095a28;
}



bool FUN_00ca14d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    return true;
  }
  iVar1 = func_0x00ca1950(param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = func_0x00bc09d0(param_2,"prefix");
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)(param_1 + 0x24);
        FUN_00bbc580(*puVar2,"providers\\implementations\\kdfs\\hkdf.c",0x35f);
        *puVar2 = 0;
        iVar1 = func_0x00bc01d0(iVar1,puVar2,0,param_1 + 0x28);
        if (iVar1 == 0) {
          return false;
        }
      }
      iVar1 = func_0x00bc09d0(param_2,"label");
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)(param_1 + 0x2c);
        FUN_00bbc580(*puVar2,"providers\\implementations\\kdfs\\hkdf.c",0x367);
        *puVar2 = 0;
        iVar1 = func_0x00bc01d0(iVar1,puVar2,0,param_1 + 0x30);
        if (iVar1 == 0) {
          return false;
        }
      }
      puVar2 = (undefined4 *)(param_1 + 0x34);
      FUN_00bbc6c0(*puVar2,*(undefined4 *)(param_1 + 0x38),
                   "providers\\implementations\\kdfs\\hkdf.c",0x36e);
      *puVar2 = 0;
      iVar1 = func_0x00bc09d0(param_2,&DAT_0113c58c);
      if (iVar1 == 0) {
        return true;
      }
      iVar1 = func_0x00bc01d0(iVar1,puVar2,0,(undefined4 *)(param_1 + 0x38));
      return iVar1 != 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\hkdf.c",0x35a,"kdf_tls1_3_set_ctx_params");
    func_0x00bc5160(0x39,0x7d,0);
  }
  return false;
}



undefined ** FUN_00ca1610(void)

{
  return &PTR_DAT_01095af0;
}



void FUN_00ca1d40(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x2c,"providers\\implementations\\kdfs\\sshkdf.c",0x3f);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  return;
}



undefined4 * FUN_00ca1d70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *_Dst;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    _Dst = (undefined4 *)FUN_00bbc830(0x2c,"providers\\implementations\\kdfs\\sshkdf.c",0x3f);
    if (_Dst != (undefined4 *)0x0) {
      *_Dst = uVar1;
      iVar2 = func_0x00cd62b0(param_1[4],param_1[5],_Dst + 4,_Dst + 5);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[6],param_1[7],_Dst + 6,_Dst + 7);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd62b0(param_1[9],param_1[10],_Dst + 9,_Dst + 10);
          if (iVar2 != 0) {
            iVar2 = func_0x00cd5eb0(_Dst + 1,param_1 + 1);
            if (iVar2 != 0) {
              *(undefined1 *)(_Dst + 8) = *(undefined1 *)(param_1 + 8);
              return _Dst;
            }
          }
        }
      }
      uVar1 = *_Dst;
      func_0x00cd6000(_Dst + 1);
      FUN_00bbc6c0(_Dst[4],_Dst[5],"providers\\implementations\\kdfs\\sshkdf.c",0x56);
      FUN_00bbc6c0(_Dst[6],_Dst[7],"providers\\implementations\\kdfs\\sshkdf.c",0x57);
      FUN_00bbc6c0(_Dst[9],_Dst[10],"providers\\implementations\\kdfs\\sshkdf.c",0x58);
      memset(_Dst,0,0x2c);
      *_Dst = uVar1;
      FUN_00bbc580(_Dst,"providers\\implementations\\kdfs\\sshkdf.c",0x4c);
      return (undefined4 *)0x0;
    }
  }
  return _Dst;
}



void FUN_00ca1e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    func_0x00cd6000(param_1 + 1);
    FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\sshkdf.c",0x56);
    FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\sshkdf.c",0x57);
    FUN_00bbc6c0(param_1[9],param_1[10],"providers\\implementations\\kdfs\\sshkdf.c",0x58);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *param_1 = uVar1;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\sshkdf.c",0x4c);
  }
  return;
}



void FUN_00ca1f30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd6000(param_1 + 1);
  FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\sshkdf.c",0x56);
  FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\sshkdf.c",0x57);
  FUN_00bbc6c0(param_1[9],param_1[10],"providers\\implementations\\kdfs\\sshkdf.c",0x58);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = uVar1;
  return;
}



undefined4 FUN_00ca1fd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00ca2140(param_1,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_00bbba70(param_1 + 4);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x10) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\sshkdf.c",0xbb,"kdf_sshkdf_derive");
          func_0x00bc5160(0x39,0x80,0);
          return 0;
        }
        if (*(int *)(param_1 + 0x18) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\sshkdf.c",0xbf,"kdf_sshkdf_derive");
          func_0x00bc5160(0x39,0x87,0);
          return 0;
        }
        if (*(int *)(param_1 + 0x24) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\sshkdf.c",0xc3,"kdf_sshkdf_derive");
          func_0x00bc5160(0x39,0x85,0);
          return 0;
        }
        if (*(char *)(param_1 + 0x20) == '\0') {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\sshkdf.c",199,"kdf_sshkdf_derive");
          func_0x00bc5160(0x39,0x86,0);
          return 0;
        }
        uVar2 = func_0x00ca22e0(iVar1,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                                *(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                                *(char *)(param_1 + 0x20),param_2,param_3);
        return uVar2;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\sshkdf.c",0xb7,"kdf_sshkdf_derive");
      func_0x00bc5160(0x39,0x81,0);
    }
  }
  return 0;
}



undefined ** FUN_00ca2130(void)

{
  return &PTR_s_properties_01095c70;
}



undefined4 FUN_00ca2140(char *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = param_1;
  uVar2 = func_0x00bc3c60(*(undefined4 *)param_1);
  iVar4 = param_2;
  if (param_2 != 0) {
    iVar3 = func_0x00bc09d0(param_2,"digest");
    if (iVar3 != 0) {
      iVar3 = func_0x00cd5f40(pcVar1 + 4,iVar4,uVar2);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = FUN_00bbba70(pcVar1 + 4);
      iVar3 = func_0x00bc44f0(uVar2);
      if (iVar3 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\sshkdf.c",0xe9,
                        "kdf_sshkdf_set_ctx_params");
        func_0x00bc5160(0x39,0xb7,0);
        return 0;
      }
    }
    iVar3 = func_0x00bc09d0(iVar4,&DAT_01141910);
    if ((iVar3 != 0) && (iVar3 = func_0x00ca2510(pcVar1 + 0x10,pcVar1 + 0x14,iVar3), iVar3 == 0)) {
      return 0;
    }
    iVar3 = func_0x00bc09d0(iVar4,"xcghash");
    if ((iVar3 != 0) && (iVar3 = func_0x00ca2510(pcVar1 + 0x18,pcVar1 + 0x1c,iVar3), iVar3 == 0)) {
      return 0;
    }
    iVar3 = func_0x00bc09d0(iVar4,"session_id");
    if ((iVar3 != 0) && (iVar3 = func_0x00ca2510(pcVar1 + 0x24,pcVar1 + 0x28,iVar3), iVar3 == 0)) {
      return 0;
    }
    iVar4 = func_0x00bc09d0(iVar4,&DAT_0113c5f4);
    if (iVar4 != 0) {
      iVar3 = func_0x00bc08d0(iVar4,&param_1);
      if (((iVar3 == 0) || (param_1 == (char *)0x0)) || (*(int *)(iVar4 + 0xc) != 1)) {
        return 0;
      }
      if (5 < (byte)(*param_1 + 0xbfU)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\sshkdf.c",0x111,
                        "kdf_sshkdf_set_ctx_params");
        func_0x00bc5160(0x39,0x8a,0);
        return 0;
      }
      pcVar1[0x20] = *param_1;
    }
  }
  return 1;
}



undefined ** FUN_00ca22d0(void)

{
  return &PTR_DAT_01095cfc;
}



void FUN_00ca2550(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0x34,"providers\\implementations\\kdfs\\sskdf.c",0x13c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
  return;
}



undefined4 * FUN_00ca2580(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *_Dst;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  _Dst = (undefined4 *)FUN_00bbc830(0x34,"providers\\implementations\\kdfs\\sskdf.c",0x13c);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *_Dst = uVar1;
  if (param_1[1] != 0) {
    iVar2 = func_0x00c74a90(param_1[1]);
    _Dst[1] = iVar2;
    if (iVar2 == 0) goto LAB_00ca25d6;
  }
  iVar2 = func_0x00cd62b0(param_1[7],param_1[8],_Dst + 7,_Dst + 8);
  if ((((iVar2 != 0) &&
       (iVar2 = func_0x00cd62b0(param_1[9],param_1[10],_Dst + 9,_Dst + 10), iVar2 != 0)) &&
      (iVar2 = func_0x00cd62b0(param_1[5],param_1[6],_Dst + 5,_Dst + 6), iVar2 != 0)) &&
     (iVar2 = func_0x00cd5eb0(_Dst + 2,param_1 + 2), iVar2 != 0)) {
    _Dst[0xb] = param_1[0xb];
    _Dst[0xc] = param_1[0xc];
    return _Dst;
  }
LAB_00ca25d6:
  uVar1 = *_Dst;
  func_0x00c74b50(_Dst[1]);
  func_0x00cd6000(_Dst + 2);
  FUN_00bbc6c0(_Dst[5],_Dst[6],"providers\\implementations\\kdfs\\sskdf.c",0x14a);
  FUN_00bbc6c0(_Dst[7],_Dst[8],"providers\\implementations\\kdfs\\sskdf.c",0x14b);
  FUN_00bbc6c0(_Dst[9],_Dst[10],"providers\\implementations\\kdfs\\sskdf.c",0x14c);
  memset(_Dst,0,0x34);
  *_Dst = uVar1;
  FUN_00bbc580(_Dst,"providers\\implementations\\kdfs\\sskdf.c",0x157);
  return (undefined4 *)0x0;
}



void FUN_00ca26e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    func_0x00c74b50(param_1[1]);
    func_0x00cd6000(param_1 + 2);
    FUN_00bbc6c0(param_1[5],param_1[6],"providers\\implementations\\kdfs\\sskdf.c",0x14a);
    FUN_00bbc6c0(param_1[7],param_1[8],"providers\\implementations\\kdfs\\sskdf.c",0x14b);
    FUN_00bbc6c0(param_1[9],param_1[10],"providers\\implementations\\kdfs\\sskdf.c",0x14c);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *param_1 = uVar1;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\sskdf.c",0x157);
  }
  return;
}



void FUN_00ca27b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00c74b50(param_1[1]);
  func_0x00cd6000(param_1 + 2);
  FUN_00bbc6c0(param_1[5],param_1[6],"providers\\implementations\\kdfs\\sskdf.c",0x14a);
  FUN_00bbc6c0(param_1[7],param_1[8],"providers\\implementations\\kdfs\\sskdf.c",0x14b);
  FUN_00bbc6c0(param_1[9],param_1[10],"providers\\implementations\\kdfs\\sskdf.c",0x14c);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = uVar1;
  return;
}



undefined4 FUN_00ca2870(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  iVar2 = param_1;
  iVar3 = FUN_0058e2e0();
  if ((iVar3 != 0) && ((param_4 == 0 || (iVar3 = func_0x00ca3230(param_1,param_4), iVar3 != 0)))) {
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar3 = FUN_00bbba70(param_1 + 8);
      piVar1 = (int *)(param_1 + 4);
      if (*piVar1 == 0) {
        if (iVar3 != 0) {
          uVar4 = func_0x00ca2c00(iVar3,*(undefined4 *)(param_1 + 0x14),
                                  *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                  *(undefined4 *)(param_1 + 0x20),0,param_2,param_3);
          return uVar4;
        }
        FUN_00bc4f50();
        uVar4 = 0x1d9;
LAB_00ca291a:
        func_0x00bc5050("providers\\implementations\\kdfs\\sskdf.c",uVar4,"sskdf_derive");
        func_0x00bc5160(0x39,0x81,0);
        return 0;
      }
      puVar7 = (undefined *)0x0;
      param_1 = 0;
      uVar4 = FUN_00bbba70(*piVar1);
      iVar5 = func_0x00c74ca0(uVar4,&DAT_010532a4);
      if (iVar5 == 0) {
        if (*(int *)(iVar2 + 0x30) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\sskdf.c",0x1c6,"sskdf_derive");
          func_0x00bc5160(0x39,0x89,0);
          return 0;
        }
        puVar7 = &UNK_01095e30;
        param_1 = 3;
        iVar3 = func_0x00c74ca0(uVar4,"KMAC128");
        iVar3 = (-(uint)(iVar3 != 0) & 0x20) + 0x84;
      }
      else {
        if (iVar3 == 0) {
          FUN_00bc4f50();
          uVar4 = 0x1b7;
          goto LAB_00ca291a;
        }
        iVar3 = func_0x00bc4320(iVar3);
        if (iVar3 < 1) {
          return 0;
        }
      }
      iVar5 = *(int *)(iVar2 + 0x24);
      if ((iVar5 == 0) || (iVar6 = *(int *)(iVar2 + 0x28), *(int *)(iVar2 + 0x28) == 0)) {
        iVar5 = FUN_00bbc830(iVar3,"providers\\implementations\\kdfs\\sskdf.c",0x1cb);
        *(int *)(iVar2 + 0x24) = iVar5;
        if (iVar5 == 0) {
          return 0;
        }
        *(int *)(iVar2 + 0x28) = iVar3;
        iVar6 = iVar3;
      }
      uVar4 = func_0x00ca2e30(*(undefined4 *)(iVar2 + 4),puVar7,param_1,
                              *(undefined4 *)(iVar2 + 0x2c),iVar5,iVar6,
                              *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                              *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),param_2,
                              param_3);
      return uVar4;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\sskdf.c",0x1a6,"sskdf_derive");
    func_0x00bc5160(0x39,0x84,0);
  }
  return 0;
}



undefined ** FUN_00ca2a50(void)

{
  return &PTR_s_secret_01095e38;
}



bool FUN_00ca2a60(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = func_0x00ca3230(param_1,param_2);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00ca2a90(void)

{
  return &PTR_DAT_01095eec;
}



bool FUN_00ca2aa0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = func_0x00ca3190(param_1,param_2);
    return iVar1 != 0;
  }
  return true;
}



undefined4 FUN_00ca2ad0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if ((param_4 != 0) && (iVar1 = func_0x00ca3230(param_1,param_4), iVar1 == 0)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\sskdf.c",0x219,"x963kdf_derive");
        func_0x00bc5160(0x39,0x88,0);
        return 0;
      }
      iVar1 = FUN_00bbba70(param_1 + 8);
      if (iVar1 != 0) {
        uVar2 = func_0x00ca2c00(iVar1,*(undefined4 *)(param_1 + 0x14),
                                *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                *(undefined4 *)(param_1 + 0x20),1,param_2,param_3);
        return uVar2;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\sskdf.c",0x220,"x963kdf_derive");
      func_0x00bc5160(0x39,0x81,0);
      return 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\sskdf.c",0x214,"x963kdf_derive");
    func_0x00bc5160(0x39,0x84,0);
  }
  return 0;
}



undefined ** FUN_00ca2bc0(void)

{
  return &PTR_s_secret_01095f18;
}



undefined ** FUN_00ca2bd0(void)

{
  return &PTR_DAT_01095fcc;
}



bool FUN_00ca2be0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00ca3190(param_1,param_2);
  return iVar1 != 0;
}



undefined4 * FUN_00ca33c0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x3c,"providers\\implementations\\kdfs\\kbkdf.c",0x79);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      puVar2[3] = 0x20;
      puVar2[0xc] = 1;
      puVar2[0xe] = 1;
      puVar2[0xd] = 0;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00ca3410(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00bbc830(0x3c,"providers\\implementations\\kdfs\\kbkdf.c",0x79);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      puVar3[3] = 0x20;
      puVar3[0xc] = 1;
      puVar3[0xe] = 1;
      puVar3[0xd] = 0;
      iVar2 = func_0x00c74a90(param_1[2]);
      puVar3[2] = iVar2;
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[4],param_1[5],puVar3 + 4,puVar3 + 5);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd62b0(param_1[6],param_1[7],puVar3 + 6,puVar3 + 7);
          if (iVar2 != 0) {
            iVar2 = func_0x00cd62b0(param_1[8],param_1[9],puVar3 + 8,puVar3 + 9);
            if (iVar2 != 0) {
              iVar2 = func_0x00cd62b0(param_1[10],param_1[0xb],puVar3 + 10,puVar3 + 0xb);
              if (iVar2 != 0) {
                puVar3[1] = param_1[1];
                puVar3[3] = param_1[3];
                puVar3[0xc] = param_1[0xc];
                puVar3[0xe] = param_1[0xe];
                puVar3[0xd] = param_1[0xd];
                return puVar3;
              }
            }
          }
        }
      }
      uVar1 = *puVar3;
      func_0x00c74b50(puVar3[2]);
      FUN_00bbc6c0(puVar3[8],puVar3[9],"providers\\implementations\\kdfs\\kbkdf.c",0x93);
      FUN_00bbc6c0(puVar3[6],puVar3[7],"providers\\implementations\\kdfs\\kbkdf.c",0x94);
      FUN_00bbc6c0(puVar3[4],puVar3[5],"providers\\implementations\\kdfs\\kbkdf.c",0x95);
      FUN_00bbc6c0(puVar3[10],puVar3[0xb],"providers\\implementations\\kdfs\\kbkdf.c",0x96);
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *puVar3 = uVar1;
      puVar3[3] = 0x20;
      puVar3[0xc] = 1;
      puVar3[0xe] = 1;
      puVar3[0xd] = 0;
      FUN_00bbc580(puVar3,"providers\\implementations\\kdfs\\kbkdf.c",0x89);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00ca35e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    func_0x00c74b50(param_1[2]);
    FUN_00bbc6c0(param_1[8],param_1[9],"providers\\implementations\\kdfs\\kbkdf.c",0x93);
    FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\kbkdf.c",0x94);
    FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\kbkdf.c",0x95);
    FUN_00bbc6c0(param_1[10],param_1[0xb],"providers\\implementations\\kdfs\\kbkdf.c",0x96);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = uVar1;
    param_1[3] = 0x20;
    param_1[0xc] = 1;
    param_1[0xe] = 1;
    param_1[0xd] = 0;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\kbkdf.c",0x89);
  }
  return;
}



void FUN_00ca36d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00c74b50(param_1[2]);
  FUN_00bbc6c0(param_1[8],param_1[9],"providers\\implementations\\kdfs\\kbkdf.c",0x93);
  FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\kbkdf.c",0x94);
  FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\kbkdf.c",0x95);
  FUN_00bbc6c0(param_1[10],param_1[0xb],"providers\\implementations\\kdfs\\kbkdf.c",0x96);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = uVar1;
  param_1[3] = 0x20;
  param_1[0xc] = 1;
  param_1[0xe] = 1;
  param_1[0xd] = 0;
  return;
}



int FUN_00ca37a0(undefined4 param_1,uint param_2,uint param_3,size_t param_4,uint param_5,
                undefined4 param_6,int param_7,int param_8,uint param_9,undefined4 param_10,
                undefined4 param_11,int param_12,undefined4 param_13,undefined4 param_14,
                uint param_15)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  int in_stack_00000080;
  int in_stack_00000084;
  uint in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 uVar8;
  
  func_0x00e87f70();
  iVar3 = in_stack_00000080;
  _Dst = (void *)0x0;
  param_3 = 0;
  uVar5 = 0;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (iVar1 = FUN_00ca3c30(iVar3,in_stack_0000008c), iVar1 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(iVar3 + 8);
  if (iVar1 == 0) {
    if ((*(int *)(iVar3 + 0x14) != 0) && (*(int *)(iVar3 + 0x10) != 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\kbkdf.c",0x13b,"kbkdf_derive");
      func_0x00bc5160(0x39,0x96,0);
      return 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\kbkdf.c",0x136,"kbkdf_derive");
    func_0x00bc5160(0x39,0x72,0);
    return 0;
  }
  if (in_stack_00000088 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\kbkdf.c",0x141,"kbkdf_derive");
    func_0x00bc5160(0x39,0x69,0);
    return 0;
  }
  if (*(int *)(iVar3 + 0x34) == 0) {
    uVar5 = func_0x00c74b90(iVar1);
    if (uVar5 != 0) {
      if ((*(uint *)(iVar3 + 0x2c) == 0) || (*(uint *)(iVar3 + 0x2c) == uVar5)) {
        if (*(int *)(iVar3 + 4) == 0) {
          uVar7 = *(uint *)(iVar3 + 0xc);
          uVar6 = 1 << (uVar7 & 0x1f);
          uVar4 = 0;
          if (0x1f < uVar7) {
            uVar4 = uVar6;
          }
          uVar6 = uVar6 ^ uVar4;
          if (0x3f < uVar7) {
            uVar4 = uVar6;
          }
          if ((uVar4 == 0) && (uVar6 <= in_stack_00000088 / uVar5)) {
            FUN_00bc4f50();
            func_0x00bc5050("providers\\implementations\\kdfs\\kbkdf.c",0x158,"kbkdf_derive");
            uVar8 = 0x69;
            goto LAB_00ca397d;
          }
        }
        if (*(int *)(iVar3 + 0x30) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = in_stack_00000088 * 8;
          uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                  in_stack_00000088 << 0x1b;
          param_3 = uVar7;
        }
        _Dst = (void *)FUN_00bbc830(uVar5,"providers\\implementations\\kdfs\\kbkdf.c",0x160);
        if (_Dst != (void *)0x0) {
          param_8 = *(int *)(iVar3 + 0xc);
          param_7 = *(int *)(iVar3 + 4);
          param_6 = *(undefined4 *)(iVar3 + 8);
          param_12 = *(int *)(iVar3 + 0x38);
          param_13 = *(undefined4 *)(iVar3 + 0x24);
          param_14 = *(undefined4 *)(iVar3 + 0x20);
          param_10 = *(undefined4 *)(iVar3 + 0x1c);
          param_11 = *(undefined4 *)(iVar3 + 0x18);
          param_4 = *(size_t *)(iVar3 + 0x2c);
          param_2 = 0;
          param_1 = 0;
          param_15 = uVar7;
          if (param_4 != 0) {
            memcpy(_Dst,*(void **)(iVar3 + 0x28),param_4);
          }
          uVar7 = in_stack_00000088;
          param_5 = 1;
          if (in_stack_00000088 != 0) {
            do {
              param_9 = param_5 >> 0x18 | (param_5 & 0xff0000) >> 8 | (param_5 & 0xff00) << 8 |
                        param_5 << 0x18;
              iVar3 = func_0x00c74a90(param_6);
              if ((((iVar3 == 0) ||
                   (((param_7 == 1 && (iVar1 = func_0x00c74cd0(iVar3,_Dst,param_4), iVar1 == 0)) ||
                    (iVar1 = (int)((param_8 >> 0x1f & 7U) + param_8) >> 3,
                    iVar1 = func_0x00c74cd0(iVar3,(int)&param_10 - iVar1,iVar1), iVar1 == 0)))) ||
                  (iVar1 = func_0x00c74cd0(iVar3,param_11,param_10), iVar1 == 0)) ||
                 ((((param_12 != 0 &&
                    (iVar1 = func_0x00c74cd0(iVar3,&stack0x00000003,1), iVar1 == 0)) ||
                   ((iVar1 = func_0x00c74cd0(iVar3,param_14,param_13), iVar1 == 0 ||
                    ((param_3 != 0 && (iVar1 = func_0x00c74cd0(iVar3,&param_15,4), iVar1 == 0))))))
                  || (iVar1 = func_0x00c74c60(iVar3,_Dst,0,uVar5), iVar1 == 0)))) goto LAB_00ca3bf9;
              uVar4 = uVar7 - param_1;
              uVar6 = uVar5;
              if (uVar4 < uVar5) {
                uVar6 = uVar4;
              }
              memcpy((void *)(in_stack_00000084 + param_1),_Dst,uVar6);
              param_1 = param_1 + uVar5;
              param_4 = uVar5;
              func_0x00c74b50(iVar3);
              param_5 = param_5 + 1;
            } while (param_1 < uVar7);
          }
          iVar3 = 0;
          param_2 = 1;
LAB_00ca3bf9:
          func_0x00c74b50(iVar3);
          goto LAB_00ca3c02;
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\kbkdf.c",0x150,"kbkdf_derive");
        uVar8 = 0x9a;
LAB_00ca397d:
        func_0x00bc5160(0x39,uVar8,0);
      }
    }
    iVar3 = 0;
  }
  else {
    param_6 = *(undefined4 *)(iVar3 + 0x24);
    uVar8 = *(undefined4 *)(iVar3 + 0x20);
    param_2 = in_stack_00000088;
    puVar2 = (undefined4 *)func_0x00bbfad0(&stack0x00000040,&DAT_0113cdc0,&param_2);
    in_stack_00000054 = *puVar2;
    in_stack_00000058 = puVar2[1];
    in_stack_0000005c = puVar2[2];
    in_stack_00000060 = puVar2[3];
    in_stack_00000064 = puVar2[4];
    puVar2 = (undefined4 *)func_0x00bbfa10(&stack0x00000040);
    in_stack_00000068 = *puVar2;
    in_stack_0000006c = puVar2[1];
    in_stack_00000070 = puVar2[2];
    in_stack_00000074 = puVar2[3];
    in_stack_00000078 = puVar2[4];
    iVar3 = func_0x00c74c40(iVar1,&stack0x00000054);
    if (((iVar3 < 1) || (iVar3 = func_0x00c74cd0(iVar1,uVar8,param_6), iVar3 == 0)) ||
       (iVar3 = func_0x00c74c60(iVar1,in_stack_00000084,0,param_2), iVar3 == 0)) {
      param_2 = 0;
    }
    else {
      param_2 = 1;
    }
LAB_00ca3c02:
    iVar3 = param_2;
    if (param_2 == 1) goto LAB_00ca399f;
  }
  func_0x00401320(in_stack_00000084,in_stack_00000088);
LAB_00ca399f:
  FUN_00bbc6c0(_Dst,uVar5,"providers\\implementations\\kdfs\\kbkdf.c",0x16a);
  return iVar3;
}



undefined ** FUN_00ca3c20(void)

{
  return &PTR_DAT_010960c0;
}



bool FUN_00ca3c30(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_00000040;
  int in_stack_00000044;
  
  func_0x00e87f70();
  puVar2 = in_stack_00000040;
  uVar3 = func_0x00bc3c60(*in_stack_00000040);
  iVar6 = in_stack_00000044;
  if (in_stack_00000044 == 0) {
    return true;
  }
  piVar1 = puVar2 + 2;
  iVar4 = func_0x00cd6030(piVar1,in_stack_00000044,0,0,0,uVar3);
  if (iVar4 == 0) {
    return false;
  }
  if (*piVar1 != 0) {
    puVar2[0xd] = 0;
    uVar3 = FUN_00bbba70(*piVar1,"KMAC128");
    iVar4 = func_0x00c74ca0(uVar3);
    if (iVar4 == 0) {
      uVar3 = FUN_00bbba70(*piVar1,"KMAC256");
      iVar4 = func_0x00c74ca0(uVar3);
      if (iVar4 == 0) {
        uVar3 = FUN_00bbba70(*piVar1,&DAT_010532a4);
        iVar4 = func_0x00c74ca0(uVar3);
        if (iVar4 == 0) {
          uVar3 = FUN_00bbba70(*piVar1,&DAT_010535b4);
          iVar4 = func_0x00c74ca0(uVar3);
          if (iVar4 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("providers\\implementations\\kdfs\\kbkdf.c",0x189,"kbkdf_set_ctx_params"
                           );
            func_0x00bc5160(0x39,0x97,0);
            return false;
          }
        }
        goto LAB_00ca3d33;
      }
    }
    puVar2[0xd] = 1;
  }
LAB_00ca3d33:
  iVar4 = func_0x00bc09d0(iVar6,&DAT_01056a94);
  if (iVar4 != 0) {
    iVar5 = func_0x00bbc0f0("counter",*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
    if (iVar5 == 0) {
      puVar2[1] = 0;
    }
    else {
      iVar4 = func_0x00bbc0f0("feedback",*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
      if (iVar4 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\kbkdf.c",0x196,"kbkdf_set_ctx_params");
        func_0x00bc5160(0x39,0x7d,0);
        return false;
      }
      puVar2[1] = 1;
    }
  }
  iVar4 = func_0x00bc09d0(iVar6,&DAT_01141910);
  if ((iVar4 != 0) &&
     (iVar4 = func_0x00bc19a0(iVar4,&DAT_01141910,puVar2 + 4,puVar2 + 5), iVar4 == 0)) {
    return false;
  }
  iVar4 = func_0x00bc19a0(iVar6,&DAT_01059db8,puVar2 + 6,puVar2 + 7);
  if (((iVar4 == 0) ||
      (iVar4 = func_0x00bc1860(iVar6,&DAT_011987c4,puVar2 + 8,puVar2 + 9,0), iVar4 == 0)) ||
     (iVar4 = func_0x00bc19a0(iVar6,&DAT_01056c84,puVar2 + 10,puVar2 + 0xb), iVar4 == 0)) {
    return false;
  }
  iVar4 = func_0x00bc09d0(iVar6,"use-l");
  if ((iVar4 != 0) && (iVar4 = func_0x00bbfcd0(iVar4,puVar2 + 0xc), iVar4 == 0)) {
    return false;
  }
  iVar4 = func_0x00bc09d0(iVar6,&DAT_01198360);
  if (iVar4 != 0) {
    in_stack_00000040 = (undefined4 *)0x0;
    iVar4 = func_0x00bbfcd0(iVar4,&stack0x00000040);
    if (iVar4 == 0) {
      return false;
    }
    if (((in_stack_00000040 != (undefined4 *)&DAT_00000008) &&
        (in_stack_00000040 != (undefined4 *)&DAT_00000010)) &&
       ((in_stack_00000040 != (undefined4 *)&DAT_00000018 &&
        (in_stack_00000040 != (undefined4 *)0x20)))) {
      return false;
    }
    puVar2[3] = in_stack_00000040;
  }
  iVar6 = func_0x00bc09d0(iVar6,"use-separator");
  if ((iVar6 != 0) && (iVar6 = func_0x00bbfcd0(iVar6,puVar2 + 0xe), iVar6 == 0)) {
    return false;
  }
  iVar6 = *piVar1;
  if ((iVar6 != 0) && (puVar2[5] != 0)) {
    if (puVar2[0xd] != 0) {
      iVar4 = puVar2[7];
      if ((puVar2[6] != 0) && (iVar4 != 0)) {
        puVar7 = (undefined4 *)func_0x00bbfaa0(&stack0x00000000,"custom",puVar2[6],iVar4);
        in_stack_00000014 = *puVar7;
        in_stack_00000018 = puVar7[1];
        in_stack_0000001c = puVar7[2];
        in_stack_00000020 = puVar7[3];
        in_stack_00000024 = puVar7[4];
        puVar7 = (undefined4 *)func_0x00bbfa10(&stack0x00000000);
        in_stack_00000028 = *puVar7;
        in_stack_0000002c = puVar7[1];
        in_stack_00000030 = puVar7[2];
        in_stack_00000034 = puVar7[3];
        in_stack_00000038 = puVar7[4];
        iVar6 = func_0x00c74c40(iVar6,&stack0x00000014);
        if (iVar6 < 1) {
          return false;
        }
      }
    }
    iVar6 = func_0x00c74c80(puVar2[2],puVar2[4],puVar2[5],0);
    return iVar6 != 0;
  }
  return true;
}



undefined ** FUN_00ca3f90(void)

{
  return &PTR_DAT_010961c4;
}



undefined4 * FUN_00ca3fa0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x50,"providers\\implementations\\kdfs\\x942kdf.c",0x155);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      puVar2[0x13] = 1;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00ca3fe0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00bbc830(0x50,"providers\\implementations\\kdfs\\x942kdf.c",0x155);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      puVar3[0x13] = 1;
      iVar2 = func_0x00cd62b0(param_1[4],param_1[5],puVar3 + 4,puVar3 + 5);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[6],param_1[7],puVar3 + 6,puVar3 + 7);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd62b0(param_1[8],param_1[0xc],puVar3 + 8,puVar3 + 0xc);
          if (iVar2 != 0) {
            iVar2 = func_0x00cd62b0(param_1[9],param_1[0xd],puVar3 + 9,puVar3 + 0xd);
            if (iVar2 != 0) {
              iVar2 = func_0x00cd62b0(param_1[10],param_1[0xe],puVar3 + 10,puVar3 + 0xe);
              if (iVar2 != 0) {
                iVar2 = func_0x00cd62b0(param_1[0xb],param_1[0xf],puVar3 + 0xb,puVar3 + 0xf);
                if (iVar2 != 0) {
                  iVar2 = func_0x00cd5eb0(puVar3 + 1,param_1 + 1);
                  if (iVar2 != 0) {
                    puVar3[0x11] = param_1[0x11];
                    puVar3[0x12] = param_1[0x12];
                    puVar3[0x10] = param_1[0x10];
                    puVar3[0x13] = param_1[0x13];
                    return puVar3;
                  }
                }
              }
            }
          }
        }
      }
      uVar1 = *puVar3;
      func_0x00cd6000(puVar3 + 1);
      FUN_00bbc6c0(puVar3[4],puVar3[5],"providers\\implementations\\kdfs\\x942kdf.c",0x165);
      FUN_00bbc6c0(puVar3[6],puVar3[7],"providers\\implementations\\kdfs\\x942kdf.c",0x166);
      FUN_00bbc6c0(puVar3[8],puVar3[0xc],"providers\\implementations\\kdfs\\x942kdf.c",0x167);
      FUN_00bbc6c0(puVar3[9],puVar3[0xd],"providers\\implementations\\kdfs\\x942kdf.c",0x168);
      FUN_00bbc6c0(puVar3[10],puVar3[0xe],"providers\\implementations\\kdfs\\x942kdf.c",0x169);
      FUN_00bbc6c0(puVar3[0xb],puVar3[0xf],"providers\\implementations\\kdfs\\x942kdf.c",0x16a);
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      *puVar3 = uVar1;
      puVar3[0x13] = 1;
      FUN_00bbc580(puVar3,"providers\\implementations\\kdfs\\x942kdf.c",0x176);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00ca4230(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    func_0x00cd6000(param_1 + 1);
    FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\x942kdf.c",0x165);
    FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\x942kdf.c",0x166);
    FUN_00bbc6c0(param_1[8],param_1[0xc],"providers\\implementations\\kdfs\\x942kdf.c",0x167);
    FUN_00bbc6c0(param_1[9],param_1[0xd],"providers\\implementations\\kdfs\\x942kdf.c",0x168);
    FUN_00bbc6c0(param_1[10],param_1[0xe],"providers\\implementations\\kdfs\\x942kdf.c",0x169);
    FUN_00bbc6c0(param_1[0xb],param_1[0xf],"providers\\implementations\\kdfs\\x942kdf.c",0x16a);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *param_1 = uVar1;
    param_1[0x13] = 1;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\x942kdf.c",0x176);
  }
  return;
}



void FUN_00ca4370(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd6000(param_1 + 1);
  FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\x942kdf.c",0x165);
  FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\x942kdf.c",0x166);
  FUN_00bbc6c0(param_1[8],param_1[0xc],"providers\\implementations\\kdfs\\x942kdf.c",0x167);
  FUN_00bbc6c0(param_1[9],param_1[0xd],"providers\\implementations\\kdfs\\x942kdf.c",0x168);
  FUN_00bbc6c0(param_1[10],param_1[0xe],"providers\\implementations\\kdfs\\x942kdf.c",0x169);
  FUN_00bbc6c0(param_1[0xb],param_1[0xf],"providers\\implementations\\kdfs\\x942kdf.c",0x16a);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = uVar1;
  param_1[0x13] = 1;
  return;
}



undefined4
FUN_00ca4490(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  iVar1 = param_3;
  param_3 = 0;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00ca4730(iVar1,param_6);
    if (iVar2 != 0) {
      if ((*(int *)(iVar1 + 0x4c) == 0) || (*(int *)(iVar1 + 0x28) == 0)) {
        if ((*(int *)(iVar1 + 0x18) != 0) &&
           ((((*(int *)(iVar1 + 0x20) != 0 || (*(int *)(iVar1 + 0x24) != 0)) ||
             (*(int *)(iVar1 + 0x28) != 0)) || (*(int *)(iVar1 + 0x2c) != 0)))) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x1e6,"x942kdf_derive");
          func_0x00bc5160(0x39,0x73,0);
          return 0;
        }
        if (*(int *)(iVar1 + 0x10) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x1ea,"x942kdf_derive");
          func_0x00bc5160(0x39,0x84,0);
          return 0;
        }
        iVar2 = FUN_00bbba70(iVar1 + 4);
        if (iVar2 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x1ef,"x942kdf_derive");
          func_0x00bc5160(0x39,0x81,0);
          return 0;
        }
        if ((*(int *)(iVar1 + 0x44) == 0) || (*(int *)(iVar1 + 0x48) == 0)) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",499,"x942kdf_derive");
          func_0x00bc5160(0x39,0x90,0);
          return 0;
        }
        if ((*(int *)(iVar1 + 0x20) != 0) && (0x3fffffff < *(uint *)(iVar1 + 0x30))) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x1fb,"x942kdf_derive");
          func_0x00bc5160(0x39,200,0);
          return 0;
        }
        if (*(int *)(iVar1 + 0x4c) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar1 + 0x40);
        }
        iVar3 = func_0x00ca4c10(uVar4,*(int *)(iVar1 + 0x44),*(int *)(iVar1 + 0x48),
                                *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),
                                *(int *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x30),
                                *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x34),
                                *(undefined4 *)(iVar1 + 0x28),*(undefined4 *)(iVar1 + 0x38),
                                *(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x3c),
                                &stack0x00000000,&param_3,&param_1);
        if (iVar3 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x207,"x942kdf_derive");
          func_0x00bc5160(0x39,0x8d,0);
          return 0;
        }
        uVar4 = func_0x00ca4ed0(iVar2,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),0,
                                param_3,param_1,param_4,param_5);
        FUN_00bbc580(0,"providers\\implementations\\kdfs\\x942kdf.c",0x20c);
        return uVar4;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x1da,"x942kdf_derive");
      func_0x00bc5160(0x39,0xc6,0);
    }
  }
  return 0;
}



undefined ** FUN_00ca4720(void)

{
  return &PTR_s_properties_010962f0;
}



undefined4 FUN_00ca4730(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined **ppuVar7;
  
  uVar1 = func_0x00bc3c60(*param_1);
  uVar5 = 0;
  if (param_2 == 0) {
    return 1;
  }
  iVar2 = func_0x00bc09d0(param_2,"digest");
  if (iVar2 != 0) {
    iVar2 = func_0x00cd5f40(param_1 + 1,param_2,uVar1);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_00bbba70(param_1 + 1);
    iVar2 = func_0x00bc44f0(uVar3);
    if (iVar2 != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x225,"x942kdf_set_ctx_params");
      func_0x00bc5160(0x39,0xb7,0);
      return 0;
    }
  }
  iVar2 = func_0x00bc09d0(param_2,"secret");
  if (((iVar2 != 0) || (iVar2 = func_0x00bc09d0(param_2,&DAT_01141910), iVar2 != 0)) &&
     (iVar2 = func_0x00ca5100(param_1 + 4,param_1 + 5,iVar2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"acvp-info");
  if ((iVar2 != 0) && (iVar2 = func_0x00ca5100(param_1 + 6,param_1 + 7,iVar2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"partyu-info");
  if (((iVar2 != 0) || (iVar2 = func_0x00bc09d0(param_2,&DAT_0108d3ac), iVar2 != 0)) &&
     (iVar2 = func_0x00ca5100(param_1 + 8,param_1 + 0xc,iVar2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"partyv-info");
  if ((iVar2 != 0) && (iVar2 = func_0x00ca5100(param_1 + 9,param_1 + 0xd,iVar2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"use-keybits");
  if ((iVar2 != 0) && (iVar2 = func_0x00bbfcd0(iVar2,param_1 + 0x13), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"supp-pubinfo");
  if (iVar2 != 0) {
    iVar2 = func_0x00ca5100(param_1 + 10,param_1 + 0xe,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    param_1[0x13] = 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"supp-privinfo");
  if ((iVar2 != 0) && (iVar2 = func_0x00ca5100(param_1 + 0xb,param_1 + 0xf,iVar2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"cekalg");
  if (iVar2 == 0) {
    return 1;
  }
  if (*(int *)(iVar2 + 4) == 4) {
    iVar4 = func_0x00bc09d0(param_2,"properties");
    if (iVar4 != 0) {
      uVar5 = *(undefined4 *)(iVar2 + 8);
    }
    iVar2 = func_0x00ba8520(uVar1,*(undefined4 *)(iVar2 + 8),uVar5);
    if (iVar2 != 0) {
      uVar6 = 0;
      ppuVar7 = &PTR_s_AES_128_WRAP_010962b0;
      do {
        iVar4 = func_0x00bc3ef0(iVar2,*ppuVar7);
        if (iVar4 != 0) {
          FUN_00ba8550(iVar2);
          param_1[0x11] = (&PTR_DAT_010962b4)[uVar6 * 4];
          param_1[0x12] = (&DAT_010962b8)[uVar6 * 4];
          param_1[0x10] = (&DAT_010962bc)[uVar6 * 4];
          return 1;
        }
        uVar6 = uVar6 + 1;
        ppuVar7 = ppuVar7 + 4;
      } while (uVar6 < 4);
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x61,"find_alg_id");
    func_0x00bc5160(0x39,0x91,0);
    FUN_00ba8550(iVar2);
  }
  return 0;
}



undefined ** FUN_00ca49e0(void)

{
  return &PTR_DAT_010963f4;
}



bool FUN_00ca49f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    iVar2 = FUN_00bbba70(param_1 + 4);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\x942kdf.c",0x1af,"x942kdf_size");
      func_0x00bc5160(0x39,0x81,0);
      iVar2 = 0;
    }
    else {
      iVar2 = func_0x00bc4320(iVar2);
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
    iVar1 = func_0x00bc10c0(iVar1,iVar2);
    return iVar1 != 0;
  }
  return true;
}



undefined4 * FUN_00ca5150(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x20,"providers\\implementations\\kdfs\\krb5kdf.c",0x43);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00ca5180(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_1;
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00bbc830(0x20,"providers\\implementations\\kdfs\\krb5kdf.c",0x43);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      iVar2 = func_0x00cd62b0(param_1[4],param_1[5],puVar3 + 4,puVar3 + 5);
      if (iVar2 != 0) {
        iVar2 = func_0x00cd62b0(param_1[6],param_1[7],puVar3 + 6,puVar3 + 7);
        if (iVar2 != 0) {
          iVar2 = func_0x00cd5d60(puVar3 + 1,param_1 + 1);
          if (iVar2 != 0) {
            return puVar3;
          }
        }
      }
      uVar1 = *puVar3;
      func_0x00cd5e80(puVar3 + 1);
      FUN_00bbc6c0(puVar3[4],puVar3[5],"providers\\implementations\\kdfs\\krb5kdf.c",0x59);
      FUN_00bbc6c0(puVar3[6],puVar3[7],"providers\\implementations\\kdfs\\krb5kdf.c",0x5a);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *puVar3 = uVar1;
      FUN_00bbc580(puVar3,"providers\\implementations\\kdfs\\krb5kdf.c",0x4f);
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00ca5260(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    func_0x00cd5e80(param_1 + 1);
    FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\krb5kdf.c",0x59);
    FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\krb5kdf.c",0x5a);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = uVar1;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\krb5kdf.c",0x4f);
  }
  return;
}



void FUN_00ca52c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  func_0x00cd5e80(param_1 + 1);
  FUN_00bbc6c0(param_1[4],param_1[5],"providers\\implementations\\kdfs\\krb5kdf.c",0x59);
  FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kdfs\\krb5kdf.c",0x5a);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = uVar1;
  return;
}



undefined4 FUN_00ca5310(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    uVar3 = func_0x00bc3c60(*param_1);
    puVar1 = param_1 + 1;
    if (param_4 != 0) {
      iVar2 = func_0x00cd5dc0(puVar1,param_4,uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = func_0x00bc09d0(param_4,&DAT_01141910);
      if ((iVar2 != 0) && (iVar2 = func_0x00ca5ae0(param_1 + 4,param_1 + 5,iVar2), iVar2 == 0)) {
        return 0;
      }
      iVar2 = func_0x00bc09d0(param_4,"constant");
      if ((iVar2 != 0) && (iVar2 = func_0x00ca5ae0(param_1 + 6,param_1 + 7,iVar2), iVar2 == 0)) {
        return 0;
      }
    }
    iVar2 = FUN_00bbba70(puVar1);
    if (iVar2 != 0) {
      if (param_1[4] == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\krb5kdf.c",0x8d,"krb5kdf_derive");
        func_0x00bc5160(0x39,0x80,0);
        return 0;
      }
      if (param_1[6] != 0) {
        uVar3 = FUN_00bc39e0(puVar1);
        uVar3 = func_0x00ca5570(iVar2,uVar3,param_1[4],param_1[5],param_1[6],param_1[7],param_2,
                                param_3);
        return uVar3;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\krb5kdf.c",0x91,"krb5kdf_derive");
      func_0x00bc5160(0x39,0x9c,0);
      return 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\krb5kdf.c",0x89,"krb5kdf_derive");
    func_0x00bc5160(0x39,0x9b,0);
  }
  return 0;
}



undefined ** FUN_00ca5470(void)

{
  return &PTR_s_properties_01096580;
}



bool FUN_00ca5480(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(*param_1);
  if (param_2 != 0) {
    iVar2 = func_0x00cd5dc0(param_1 + 1,param_2,uVar1);
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,&DAT_01141910);
    if ((iVar2 != 0) && (iVar2 = func_0x00ca5ae0(param_1 + 4,param_1 + 5,iVar2), iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(param_2,"constant");
    if (iVar2 != 0) {
      iVar2 = func_0x00ca5ae0(param_1 + 6,param_1 + 7,iVar2);
      return iVar2 != 0;
    }
  }
  return true;
}



undefined ** FUN_00ca5510(void)

{
  return &PTR_DAT_010965e4;
}



undefined4 FUN_00ca5520(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00bbba70(param_1 + 4);
  if (iVar1 == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = FUN_00bc39e0(iVar1);
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
  if (iVar1 != 0) {
    uVar2 = func_0x00bc10c0(iVar1,uVar2);
    return uVar2;
  }
  return 0xfffffffe;
}



int FUN_00ca5b20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00bbc830(0xac,"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x2f);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x94) = param_1;
      return iVar1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x31,"hmac_drbg_kdf_new");
    func_0x00bc5160(0x39,0xc0100,0);
  }
  return 0;
}



int * FUN_00ca5b80(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1[0x25];
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_00bbc830(0xac,"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x2f);
  if (piVar3 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x31,"hmac_drbg_kdf_new");
    func_0x00bc5160(0x39,0xc0100,0);
    return (int *)0x0;
  }
  piVar3[0x25] = iVar4;
  if (*param_1 != 0) {
    iVar4 = func_0x00c74a90(*param_1);
    *piVar3 = iVar4;
    if (iVar4 == 0) goto LAB_00ca5bfb;
  }
  iVar4 = func_0x00cd5eb0(piVar3 + 1,param_1 + 1);
  if (iVar4 != 0) {
    iVar4 = param_1[6];
    iVar2 = param_1[7];
    iVar1 = param_1[8];
    piVar3[5] = param_1[5];
    piVar3[6] = iVar4;
    piVar3[7] = iVar2;
    piVar3[8] = iVar1;
    iVar4 = param_1[10];
    iVar2 = param_1[0xb];
    iVar1 = param_1[0xc];
    piVar3[9] = param_1[9];
    piVar3[10] = iVar4;
    piVar3[0xb] = iVar2;
    piVar3[0xc] = iVar1;
    iVar4 = param_1[0xe];
    iVar2 = param_1[0xf];
    iVar1 = param_1[0x10];
    piVar3[0xd] = param_1[0xd];
    piVar3[0xe] = iVar4;
    piVar3[0xf] = iVar2;
    piVar3[0x10] = iVar1;
    iVar4 = param_1[0x12];
    iVar2 = param_1[0x13];
    iVar1 = param_1[0x14];
    piVar3[0x11] = param_1[0x11];
    piVar3[0x12] = iVar4;
    piVar3[0x13] = iVar2;
    piVar3[0x14] = iVar1;
    iVar4 = param_1[0x16];
    iVar2 = param_1[0x17];
    iVar1 = param_1[0x18];
    piVar3[0x15] = param_1[0x15];
    piVar3[0x16] = iVar4;
    piVar3[0x17] = iVar2;
    piVar3[0x18] = iVar1;
    iVar4 = param_1[0x1a];
    iVar2 = param_1[0x1b];
    iVar1 = param_1[0x1c];
    piVar3[0x19] = param_1[0x19];
    piVar3[0x1a] = iVar4;
    piVar3[0x1b] = iVar2;
    piVar3[0x1c] = iVar1;
    iVar4 = param_1[0x1e];
    iVar2 = param_1[0x1f];
    iVar1 = param_1[0x20];
    piVar3[0x1d] = param_1[0x1d];
    piVar3[0x1e] = iVar4;
    piVar3[0x1f] = iVar2;
    piVar3[0x20] = iVar1;
    iVar4 = param_1[0x22];
    iVar2 = param_1[0x23];
    iVar1 = param_1[0x24];
    piVar3[0x21] = param_1[0x21];
    piVar3[0x22] = iVar4;
    piVar3[0x23] = iVar2;
    piVar3[0x24] = iVar1;
    piVar3[4] = param_1[4];
    iVar4 = func_0x00cd62b0(param_1[0x26],param_1[0x28],piVar3 + 0x26,piVar3 + 0x28);
    if ((iVar4 != 0) &&
       (iVar4 = func_0x00cd62b0(param_1[0x27],param_1[0x29],piVar3 + 0x27,piVar3 + 0x29), iVar4 != 0
       )) {
      piVar3[0x2a] = param_1[0x2a];
      return piVar3;
    }
  }
LAB_00ca5bfb:
  iVar4 = piVar3[0x25];
  func_0x00c74b50(*piVar3);
  func_0x00cd6000(piVar3 + 1);
  FUN_00bbc6c0(piVar3[0x26],piVar3[0x28],"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x40);
  FUN_00bbc6c0(piVar3[0x27],piVar3[0x29],"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x41);
  func_0x00401320(piVar3,0xac);
  piVar3[0x25] = iVar4;
  FUN_00bbc580(piVar3,"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x4c);
  return (int *)0x0;
}



void FUN_00ca5d40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[0x25];
    func_0x00c74b50(*param_1);
    func_0x00cd6000(param_1 + 1);
    FUN_00bbc6c0(param_1[0x26],param_1[0x28],"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x40
                );
    FUN_00bbc6c0(param_1[0x27],param_1[0x29],"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x41
                );
    func_0x00401320(param_1,0xac);
    param_1[0x25] = uVar1;
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x4c);
  }
  return;
}



void FUN_00ca5dc0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[0x25];
  func_0x00c74b50(*param_1);
  func_0x00cd6000(param_1 + 1);
  FUN_00bbc6c0(param_1[0x26],param_1[0x28],"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x40);
  FUN_00bbc6c0(param_1[0x27],param_1[0x29],"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0x41);
  func_0x00401320(param_1,0xac);
  param_1[0x25] = uVar1;
  return;
}



undefined4 FUN_00ca5e30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = FUN_00ca5ee0(param_1,param_4);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xa8) != 0) {
LAB_00ca5ea7:
        uVar2 = func_0x00cab1a0(param_1,param_2,param_3,0,0);
        return uVar2;
      }
      if ((((*(int *)(param_1 + 0x98) != 0) && (*(int *)(param_1 + 0xa0) != 0)) &&
          (*(int *)(param_1 + 0x9c) != 0)) && (*(int *)(param_1 + 0xa4) != 0)) {
        iVar1 = func_0x00cab440(param_1,*(int *)(param_1 + 0x98),*(int *)(param_1 + 0xa0),
                                *(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa4),0,0);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0xa8) = 1;
          goto LAB_00ca5ea7;
        }
      }
    }
  }
  return 0;
}



undefined ** FUN_00ca5ed0(void)

{
  return &PTR_s_entropy_010966e8;
}



undefined4 FUN_00ca5ee0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  func_0x00e87f70();
  iVar1 = param_2;
  uVar3 = func_0x00bc3c60(*(undefined4 *)(param_2 + 0x94));
  iVar2 = param_3;
  param_2 = 0;
  if (param_3 != 0) {
    iVar4 = func_0x00bc09d0(param_3,"entropy");
    if (iVar4 != 0) {
      iVar4 = func_0x00bc01d0(iVar4,&param_2,0,&stack0x00000000);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(iVar1 + 0x98),"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",
                   0xc3);
      *(int *)(iVar1 + 0x98) = param_2;
      *(undefined4 *)(iVar1 + 0xa0) = 0;
      *(undefined4 *)(iVar1 + 0xa8) = 0;
      param_2 = 0;
    }
    iVar4 = func_0x00bc09d0(iVar2,"nonce");
    if (iVar4 != 0) {
      iVar4 = func_0x00bc01d0(iVar4,&param_2,0,&stack0x00000000);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(iVar1 + 0x9c),"providers\\implementations\\kdfs\\hmacdrbg_kdf.c",
                   0xce);
      *(int *)(iVar1 + 0x9c) = param_2;
      *(undefined4 *)(iVar1 + 0xa4) = 0;
      *(undefined4 *)(iVar1 + 0xa8) = 0;
    }
    iVar4 = func_0x00bc09d0(iVar2,"digest");
    if (iVar4 != 0) {
      iVar4 = func_0x00cd5f40(iVar1 + 4,iVar2,uVar3);
      if (iVar4 != 0) {
        iVar4 = FUN_00bbba70(iVar1 + 4);
        if (iVar4 == 0) {
LAB_00ca6076:
          uVar3 = func_0x00cd6030(iVar1,iVar2,&DAT_010532a4,0,0,uVar3);
          return uVar3;
        }
        iVar5 = func_0x00bc44f0(iVar4);
        if (iVar5 == 0) {
          iVar4 = func_0x00bc4320(iVar4);
          if (0 < iVar4) {
            *(int *)(iVar1 + 0x10) = iVar4;
            goto LAB_00ca6076;
          }
        }
        else {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kdfs\\hmacdrbg_kdf.c",0xdd,
                          "hmac_drbg_kdf_set_ctx_params");
          func_0x00bc5160(0x39,0xb7,0);
        }
      }
      return 0;
    }
  }
  return 1;
}



undefined ** FUN_00ca60a0(void)

{
  return &PTR_DAT_010966a8;
}



bool FUN_00ca60b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_0113cd34);
  if (iVar1 != 0) {
    if (*param_1 == 0) {
      return false;
    }
    uVar2 = FUN_00bbba70(*param_1);
    uVar2 = FUN_00bc39e0(uVar2);
    iVar1 = func_0x00bc12f0(iVar1,uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"digest");
  if (iVar1 == 0) {
    return true;
  }
  iVar3 = FUN_00bbba70(param_1 + 1);
  if (iVar3 == 0) {
    return false;
  }
  uVar2 = FUN_00bc42b0(iVar3);
  iVar1 = func_0x00bc12f0(iVar1,uVar2);
  return iVar1 != 0;
}



int FUN_00ca6140(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x68,"providers\\implementations\\kdfs\\argon2.c",0x3ba);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x3bc,"kdf_argon2i_new");
    func_0x00bc5160(0x39,0xc0100,0);
    return 0;
  }
  uVar2 = func_0x00bc3c60(param_1);
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  func_0x00ca94b0(iVar1,1);
  return iVar1;
}



int FUN_00ca61b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x68,"providers\\implementations\\kdfs\\argon2.c",0x3a7);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x3a9,"kdf_argon2d_new");
    func_0x00bc5160(0x39,0xc0100,0);
    return 0;
  }
  uVar2 = func_0x00bc3c60(param_1);
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  func_0x00ca94b0(iVar1,0);
  return iVar1;
}



int FUN_00ca6220(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bbc830(0x68,"providers\\implementations\\kdfs\\argon2.c",0x3cd);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x3cf,"kdf_argon2id_new");
    func_0x00bc5160(0x39,0xc0100,0);
    return 0;
  }
  uVar2 = func_0x00bc3c60(param_1);
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  func_0x00ca94b0(iVar1,2);
  return iVar1;
}



void FUN_00ca6290(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 8) != 0) {
      FUN_00bbc6c0(*(int *)((int)param_1 + 8),*(undefined4 *)((int)param_1 + 0xc),
                   "providers\\implementations\\kdfs\\argon2.c",0x3e1);
    }
    if (*(int *)((int)param_1 + 0x10) != 0) {
      FUN_00bbc6c0(*(int *)((int)param_1 + 0x10),*(undefined4 *)((int)param_1 + 0x14),
                   "providers\\implementations\\kdfs\\argon2.c",0x3e4);
    }
    if (*(int *)((int)param_1 + 0x18) != 0) {
      FUN_00bbc6c0(*(int *)((int)param_1 + 0x18),*(undefined4 *)((int)param_1 + 0x1c),
                   "providers\\implementations\\kdfs\\argon2.c",999);
    }
    if (*(int *)((int)param_1 + 0x20) != 0) {
      FUN_00bbc6c0(*(int *)((int)param_1 + 0x20),*(undefined4 *)((int)param_1 + 0x24),
                   "providers\\implementations\\kdfs\\argon2.c",0x3ea);
    }
    FUN_00bd4770(*(undefined4 *)((int)param_1 + 0x5c));
    FUN_00ce2e30(*(undefined4 *)((int)param_1 + 0x60));
    FUN_00bbc580(*(undefined4 *)((int)param_1 + 100),"providers\\implementations\\kdfs\\argon2.c",
                 0x3ef);
    memset(param_1,0,0x68);
    FUN_00bbc580(param_1,"providers\\implementations\\kdfs\\argon2.c",0x3f3);
  }
  return;
}



void FUN_00ca6360(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x40);
  uVar2 = *(undefined4 *)((int)param_1 + 0x58);
  FUN_00bd4770(*(undefined4 *)((int)param_1 + 0x5c));
  FUN_00ce2e30(*(undefined4 *)((int)param_1 + 0x60));
  FUN_00bbc580(*(undefined4 *)((int)param_1 + 100),"providers\\implementations\\kdfs\\argon2.c",
               0x46b);
  if (*(int *)((int)param_1 + 8) != 0) {
    FUN_00bbc6c0(*(int *)((int)param_1 + 8),*(undefined4 *)((int)param_1 + 0xc),
                 "providers\\implementations\\kdfs\\argon2.c",0x46e);
  }
  if (*(int *)((int)param_1 + 0x10) != 0) {
    FUN_00bbc6c0(*(int *)((int)param_1 + 0x10),*(undefined4 *)((int)param_1 + 0x14),
                 "providers\\implementations\\kdfs\\argon2.c",0x471);
  }
  if (*(int *)((int)param_1 + 0x18) != 0) {
    FUN_00bbc6c0(*(int *)((int)param_1 + 0x18),*(undefined4 *)((int)param_1 + 0x1c),
                 "providers\\implementations\\kdfs\\argon2.c",0x474);
  }
  if (*(int *)((int)param_1 + 0x20) != 0) {
    FUN_00bbc6c0(*(int *)((int)param_1 + 0x20),*(undefined4 *)((int)param_1 + 0x24),
                 "providers\\implementations\\kdfs\\argon2.c",0x477);
  }
  memset(param_1,0,0x68);
  *(undefined4 *)((int)param_1 + 0x40) = uVar1;
  *(undefined4 *)((int)param_1 + 0x58) = uVar2;
  *(undefined4 *)((int)param_1 + 4) = 0x40;
  *(undefined4 *)((int)param_1 + 0x28) = 3;
  *(undefined4 *)((int)param_1 + 0x2c) = 8;
  *(undefined4 *)((int)param_1 + 0x30) = 1;
  *(undefined4 *)((int)param_1 + 0x34) = 1;
  *(undefined4 *)((int)param_1 + 0x38) = 0x13;
  return;
}



void FUN_00ca6450(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int in_stack_0000080c;
  int in_stack_00000814;
  
  func_0x00e87f70();
  iVar3 = FUN_0058e2e0();
  if ((iVar3 == 0) || (iVar3 = FUN_00ca68e0(), iVar3 == 0)) goto LAB_00ca68ad;
  if (*(int *)(in_stack_0000080c + 0x60) == 0) {
    iVar3 = func_0x00ce2e00();
    *(int *)(in_stack_0000080c + 0x60) = iVar3;
    if (iVar3 != 0) goto LAB_00ca64eb;
    FUN_00bc4f50();
    func_0x00bc5050();
  }
  else {
LAB_00ca64eb:
    if (*(int *)(in_stack_0000080c + 0x5c) == 0) {
      iVar3 = func_0x00bd4740();
      *(int *)(in_stack_0000080c + 0x5c) = iVar3;
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050();
        goto LAB_00ca68a3;
      }
    }
    if ((*(int *)(in_stack_0000080c + 0x10) == 0) || (*(int *)(in_stack_0000080c + 0x14) == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050();
    }
    else {
      if (in_stack_00000814 != *(int *)(in_stack_0000080c + 4)) {
        iVar3 = func_0x00bc09d0();
        if (iVar3 != 0) {
          FUN_00bc4f50();
          func_0x00bc5050();
          goto LAB_00ca68a3;
        }
        iVar3 = func_0x00ca9460();
        if (iVar3 == 0) goto LAB_00ca68ad;
      }
      iVar3 = *(int *)(in_stack_0000080c + 0x40);
      if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) {
        if (1 < *(uint *)(in_stack_0000080c + 0x34)) {
          uVar7 = func_0x00c39560();
          if (((int)((ulonglong)uVar7 >> 0x20) == 0) &&
             ((uint)uVar7 < *(uint *)(in_stack_0000080c + 0x34))) {
            FUN_00bc4f50();
            func_0x00bc5050();
            func_0x00c39560();
            func_0x00bc5160();
            goto LAB_00ca68ad;
          }
          if (*(uint *)(in_stack_0000080c + 0x30) < *(uint *)(in_stack_0000080c + 0x34)) {
            FUN_00bc4f50();
            func_0x00bc5050();
            func_0x00bc5160();
            goto LAB_00ca68ad;
          }
        }
        iVar3 = *(int *)(in_stack_0000080c + 0x30);
        if ((uint)(iVar3 * 8) <= *(uint *)(in_stack_0000080c + 0x2c)) {
          *(undefined4 *)(in_stack_0000080c + 0x44) = 0;
          uVar4 = *(uint *)(in_stack_0000080c + 0x2c) / (uint)(iVar3 * 4);
          *(uint *)(in_stack_0000080c + 0x50) = uVar4;
          *(undefined4 *)(in_stack_0000080c + 0x48) = *(undefined4 *)(in_stack_0000080c + 0x28);
          *(uint *)(in_stack_0000080c + 0x4c) = iVar3 * uVar4 * 4;
          *(uint *)(in_stack_0000080c + 0x54) = uVar4 << 2;
          iVar3 = func_0x00ca92a0();
          if (iVar3 == 1) {
            if (*(int *)(in_stack_0000080c + 0x34) == 1) {
              iVar3 = func_0x00ca8890();
            }
            else {
              iVar3 = func_0x00ca8630();
            }
            if (iVar3 == 1) {
              puVar5 = (undefined4 *)
                       (*(int *)(in_stack_0000080c + 0x44) + -0x400 +
                       *(int *)(in_stack_0000080c + 0x54) * 0x400);
              puVar6 = (undefined4 *)&stack0x00000004;
              for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              if (1 < *(uint *)(in_stack_0000080c + 0x30)) {
                iVar3 = *(uint *)(in_stack_0000080c + 0x30) - 1;
                do {
                  func_0x00ca95e0();
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              uVar4 = 0;
              do {
                uVar1 = *(undefined4 *)(&stack0x00000008 + uVar4);
                uVar2 = *(undefined4 *)(&stack0x00000004 + uVar4);
                (&stack0x00000404)[uVar4] = (char)uVar2;
                (&stack0x00000405)[uVar4] = (char)((uint)uVar2 >> 8);
                (&stack0x00000408)[uVar4] = (char)uVar1;
                (&stack0x00000406)[uVar4] = (char)((uint)uVar2 >> 0x10);
                (&stack0x00000409)[uVar4] = (char)((uint)uVar1 >> 8);
                (&stack0x00000407)[uVar4] = (char)((uint)uVar2 >> 0x18);
                (&stack0x0000040a)[uVar4] = (char)((uint)uVar1 >> 0x10);
                (&stack0x0000040b)[uVar4] = (char)((uint)uVar1 >> 0x18);
                uVar4 = uVar4 + 8;
              } while (uVar4 < 0x400);
              func_0x00ca70b0();
              func_0x00401320();
              func_0x00401320();
              if (*(int *)(in_stack_0000080c + 0x40) == 0) {
                FUN_00bbc6c0();
                FUN_008ab370();
                return;
              }
              FUN_00bee500();
              FUN_008ab370();
              return;
            }
          }
          goto LAB_00ca68ad;
        }
        FUN_00bc4f50();
        func_0x00bc5050();
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050();
      }
    }
  }
LAB_00ca68a3:
  func_0x00bc5160();
LAB_00ca68ad:
  FUN_008ab370();
  return;
}



undefined ** FUN_00ca68d0(void)

{
  return &PTR_DAT_01096888;
}



undefined4 FUN_00ca68e0(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint unaff_retaddr;
  char *pcVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  uVar2 = param_3;
  if (param_3 == 0) {
    return 1;
  }
  iVar3 = func_0x00bc09d0(param_3,&DAT_01059dc0);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 8) != 0) {
      FUN_00bbc6c0(*(int *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                   "providers\\implementations\\kdfs\\argon2.c",0x4f3);
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    iVar3 = func_0x00bc01d0(iVar3,(undefined4 *)(param_2 + 8),0,&stack0x00000000);
    if (iVar3 == 0) {
      return 0;
    }
    *(uint *)(param_2 + 0xc) = unaff_retaddr;
  }
  iVar3 = func_0x00bc09d0(uVar2,&DAT_01059db8);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      return 0;
    }
    puVar1 = (undefined4 *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00bbc6c0(*(int *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                   "providers\\implementations\\kdfs\\argon2.c",0x513);
      *puVar1 = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
    iVar3 = func_0x00bc01d0(iVar3,puVar1,0,&stack0x00000000);
    if (iVar3 == 0) {
      return 0;
    }
    if (unaff_retaddr < 8) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x51c,"kdf_argon2_ctx_set_salt");
      func_0x00bc5160(0x39,0x70,"min: %u",8);
      FUN_00bbc580(*puVar1,"providers\\implementations\\kdfs\\argon2.c",0x52b);
      *(undefined4 *)(param_2 + 0x14) = 0;
      *puVar1 = 0;
      return 0;
    }
    *(uint *)(param_2 + 0x14) = unaff_retaddr;
  }
  iVar3 = func_0x00bc09d0(uVar2,"secret");
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_00bbc6c0(*(int *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   "providers\\implementations\\kdfs\\argon2.c",0x4d8);
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
    iVar3 = func_0x00bc01d0(iVar3,(undefined4 *)(param_2 + 0x18),0,&stack0x00000000);
    if (iVar3 == 0) {
      return 0;
    }
    *(uint *)(param_2 + 0x1c) = unaff_retaddr;
  }
  iVar3 = func_0x00bc09d0(uVar2,&DAT_010969b4);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      FUN_00bbc6c0(*(int *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                   "providers\\implementations\\kdfs\\argon2.c",0x539);
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0;
    }
    iVar3 = func_0x00bc01d0(iVar3,(undefined4 *)(param_2 + 0x20),0,&stack0x00000000);
    if (iVar3 == 0) {
      return 0;
    }
    *(uint *)(param_2 + 0x24) = unaff_retaddr;
  }
  iVar3 = func_0x00bc09d0(uVar2,&DAT_0113cdc0);
  if (iVar3 != 0) {
    iVar3 = func_0x00bc0320(iVar3,&param_3);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = func_0x00ca9460(param_2,param_3);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = func_0x00bc09d0(uVar2,&DAT_01093bec);
  if (iVar3 != 0) {
    iVar3 = func_0x00bc0320(iVar3,&param_3);
    if (iVar3 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x4a7,"kdf_argon2_ctx_set_t_cost"
                     );
      func_0x00bc5160(0x39,0x7b,"min: %u",1);
      return 0;
    }
    *(uint *)(param_2 + 0x28) = param_3;
  }
  iVar3 = func_0x00bc09d0(uVar2,"threads");
  if (iVar3 == 0) {
LAB_00ca6c44:
    iVar3 = func_0x00bc09d0(uVar2,"lanes");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0320(iVar3,&param_3);
      if (iVar3 == 0) {
        return 0;
      }
      if (0xffffff < param_3) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x493,
                        "kdf_argon2_ctx_set_lanes");
        func_0x00bc5160(0x39,0x68,"max lanes: %u",0xffffff);
        return 0;
      }
      if (param_3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x499,
                        "kdf_argon2_ctx_set_lanes");
        func_0x00bc5160(0x39,0x68,"min lanes: %u",1);
        return 0;
      }
      *(uint *)(param_2 + 0x30) = param_3;
    }
    iVar3 = func_0x00bc09d0(uVar2,"memcost");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0320(iVar3,&param_3);
      if (iVar3 == 0) {
        return 0;
      }
      if (param_3 < 8) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x4b5,
                        "kdf_argon2_ctx_set_m_cost");
        func_0x00bc5160(0x39,0xeb,"min: %u",8);
        return 0;
      }
      *(uint *)(param_2 + 0x2c) = param_3;
    }
    iVar3 = func_0x00bc09d0(uVar2,"early_clean");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0320(iVar3,&param_3);
      if (iVar3 == 0) {
        return 0;
      }
      *(uint *)(param_2 + 0x3c) = (uint)(param_3 != 0);
    }
    iVar3 = func_0x00bc09d0(uVar2,"version");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0320(iVar3,&param_3);
      if (iVar3 == 0) {
        return 0;
      }
      if ((param_3 != 0x10) && (param_3 != 0x13)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x559,
                        "kdf_argon2_ctx_set_version");
        func_0x00bc5160(0x39,0x7d,"invalid Argon2 version");
        return 0;
      }
      *(uint *)(param_2 + 0x38) = param_3;
    }
    iVar3 = func_0x00bc09d0(uVar2,"properties");
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) != 4) {
        return 0;
      }
      iVar3 = *(int *)(iVar3 + 8);
      FUN_00bbc580(*(undefined4 *)(param_2 + 100),"providers\\implementations\\kdfs\\argon2.c",0x561
                  );
      *(undefined4 *)(param_2 + 100) = 0;
      if (iVar3 != 0) {
        iVar3 = func_0x00bbbc70(iVar3,"providers\\implementations\\kdfs\\argon2.c",0x564);
        *(int *)(param_2 + 100) = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
      }
      FUN_00bd4770(*(undefined4 *)(param_2 + 0x5c));
      *(undefined4 *)(param_2 + 0x5c) = 0;
      FUN_00ce2e30(*(undefined4 *)(param_2 + 0x60));
      *(undefined4 *)(param_2 + 0x60) = 0;
    }
    return 1;
  }
  iVar3 = func_0x00bc0320(iVar3,&param_3);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x481,"kdf_argon2_ctx_set_threads")
    ;
    uVar5 = 1;
    pcVar4 = "min threads: %u";
  }
  else {
    if (param_3 < 0x1000000) {
      *(uint *)(param_2 + 0x34) = param_3;
      goto LAB_00ca6c44;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kdfs\\argon2.c",0x487,"kdf_argon2_ctx_set_threads")
    ;
    uVar5 = 0xffffff;
    pcVar4 = "max threads: %u";
  }
  func_0x00bc5160(0x39,0xea,pcVar4,uVar5);
  return 0;
}



undefined ** FUN_00ca6e80(void)

{
  return &PTR_DAT_0109698c;
}



undefined4 FUN_00ca9030(undefined4 *param_1)

{
  func_0x00ca8c70(param_1[4],*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return 0;
}



undefined4 * FUN_00ca9680(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0x30,"providers\\implementations\\rands\\test_rng.c",0x3b);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[4] = 0x7fffffff;
  puVar1[2] = 0;
  return puVar1;
}



void FUN_00ca96b0(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x14),"providers\\implementations\\rands\\test_rng.c",
                 0x4b);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x18),"providers\\implementations\\rands\\test_rng.c",
                 0x4c);
    func_0x00bbb370(*(undefined4 *)(param_1 + 0x28));
    FUN_00bbc580(param_1,"providers\\implementations\\rands\\test_rng.c",0x4e);
  }
  return;
}



undefined4 FUN_00ca9700(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000020;
  
  func_0x00e87f70();
  iVar3 = in_stack_00000020;
  iVar1 = param_3;
  param_1 = 0;
  if (in_stack_00000020 != 0) {
    iVar2 = func_0x00bc09d0(in_stack_00000020,"strength");
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,iVar1 + 0xc), iVar2 == 0)) {
      return 0;
    }
    iVar2 = func_0x00bc09d0(iVar3,"test_entropy");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc01d0(iVar2,&stack0x00000000,0,&param_1);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(iVar1 + 0x14),"providers\\implementations\\rands\\test_rng.c",
                   0xf3);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = param_1;
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    iVar2 = func_0x00bc09d0(iVar3,"test_nonce");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc01d0(iVar2,&stack0x00000000,0,&param_1);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(iVar1 + 0x18),"providers\\implementations\\rands\\test_rng.c",
                   0xfe);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x24) = param_1;
    }
    iVar2 = func_0x00bc09d0(iVar3,"max_request");
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x10), iVar2 == 0)) {
      return 0;
    }
    iVar3 = func_0x00bc09d0(iVar3,"generate");
    if ((iVar3 != 0) && (iVar3 = func_0x00bc0300(iVar3,iVar1 + 4), iVar3 == 0)) {
      return 0;
    }
  }
  if (*(uint *)(iVar1 + 0xc) < param_4) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 8) = 1;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0xd3abc8e;
  return 1;
}



undefined4 FUN_00ca9880(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return 1;
}



undefined4 FUN_00ca98a0(int param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0xc) < param_4) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if ((uint)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20)) < param_3) {
      return 0;
    }
    memcpy(param_2,(void *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20)),param_3);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
  }
  else {
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        uVar1 = *(uint *)(param_1 + 0x2c) ^ *(uint *)(param_1 + 0x2c) << 0xd;
        uVar1 = uVar1 ^ uVar1 >> 0x11;
        uVar1 = uVar1 ^ uVar1 << 5;
        *(uint *)(param_1 + 0x2c) = uVar1;
        *(char *)((int)param_2 + uVar2) = (char)uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_3);
      return 1;
    }
  }
  return 1;
}



uint FUN_00ca9920(int param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 <= *(uint *)(param_1 + 0xc)) {
    if (*(int *)(param_1 + 4) != 0) {
      uVar2 = 0;
      if (param_4 != 0) {
        do {
          uVar1 = *(uint *)(param_1 + 0x2c) ^ *(uint *)(param_1 + 0x2c) << 0xd;
          uVar1 = uVar1 ^ uVar1 >> 0x11;
          uVar1 = uVar1 ^ uVar1 << 5;
          *(uint *)(param_1 + 0x2c) = uVar1;
          *(char *)(uVar2 + (int)param_2) = (char)uVar1;
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_4);
      }
      return param_4;
    }
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      if (param_2 != (void *)0x0) {
        memcpy(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_1 + 0x24));
      }
      return *(uint *)(param_1 + 0x24);
    }
  }
  return 0;
}



undefined ** FUN_00ca99a0(void)

{
  return &PTR_s_test_entropy_01096d68;
}



bool FUN_00ca99b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x00e87f70();
  iVar3 = param_4;
  param_1 = 0;
  if (param_4 != 0) {
    iVar2 = func_0x00bc09d0(param_4,"strength");
    iVar1 = param_3;
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,param_3 + 0xc), iVar2 == 0)) {
      return false;
    }
    iVar2 = func_0x00bc09d0(iVar3,"test_entropy");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc01d0(iVar2,&stack0x00000000,0,&param_1);
      if (iVar2 == 0) {
        return false;
      }
      FUN_00bbc580(*(undefined4 *)(iVar1 + 0x14),"providers\\implementations\\rands\\test_rng.c",
                   0xf3);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = param_1;
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    iVar2 = func_0x00bc09d0(iVar3,"test_nonce");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc01d0(iVar2,&stack0x00000000,0,&param_1);
      if (iVar2 == 0) {
        return false;
      }
      FUN_00bbc580(*(undefined4 *)(iVar1 + 0x18),"providers\\implementations\\rands\\test_rng.c",
                   0xfe);
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x24) = param_1;
    }
    iVar2 = func_0x00bc09d0(iVar3,"max_request");
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x10), iVar2 == 0)) {
      return false;
    }
    iVar3 = func_0x00bc09d0(iVar3,"generate");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0300(iVar3,iVar1 + 4);
      return iVar3 != 0;
    }
  }
  return true;
}



undefined ** FUN_00ca9b20(void)

{
  return &PTR_s_state_01096d00;
}



bool FUN_00ca9b30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,"state");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc0c00(iVar1,*(undefined4 *)(param_1 + 8)), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"strength");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc0c00(iVar1,*(undefined4 *)(param_1 + 0xc)), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"max_request");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x10)), iVar1 == 0))
  {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"generate");
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 4));
  return iVar1 != 0;
}



undefined4 FUN_00ca9be0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    iVar1 = func_0x00bbb390();
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\test_rng.c",0x133,
                      "test_rng_enable_locking");
      func_0x00bc5160(0x39,0x7e,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00ca9c30(int param_1)

{
  PSRWLOCK SRWLock;
  
  if ((param_1 != 0) && (SRWLock = *(PSRWLOCK *)(param_1 + 0x28), SRWLock != (PSRWLOCK)0x0)) {
    AcquireSRWLockExclusive(SRWLock);
    SRWLock[1].Ptr = (PVOID)0x1;
    return 1;
  }
  return 1;
}



PSRWLOCK FUN_00ca9c50(PSRWLOCK param_1)

{
  if ((param_1 != (PSRWLOCK)0x0) && (param_1 = (PSRWLOCK)param_1[10].Ptr, param_1 != (PSRWLOCK)0x0))
  {
    if (param_1[1].Ptr != (PVOID)0x0) {
      param_1[1].Ptr = (PVOID)0x0;
      ReleaseSRWLockExclusive(param_1);
      return (PSRWLOCK)0x1;
    }
    ReleaseSRWLockShared(param_1);
    return (PSRWLOCK)0x1;
  }
  return param_1;
}



uint FUN_00ca9c70(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  uint uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (param_5 < *(uint *)(param_1 + 0x1c)) {
    uVar1 = param_5;
  }
  return uVar1;
}



undefined4 * FUN_00ca9c90(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined4 *)FUN_00bbc830(8,"providers\\implementations\\rands\\seed_src.c",0x37);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = 0;
      return puVar1;
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\seed_src.c",0x33,"seed_src_new");
    func_0x00bc5160(0x39,0xe5,0);
  }
  return (undefined4 *)0x0;
}



void FUN_00ca9cf0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\rands\\seed_src.c",0x42);
  return;
}



undefined4 FUN_00ca9d10(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  return 1;
}



undefined4 FUN_00ca9d30(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return 1;
}



bool FUN_00ca9d50(int param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  void *_Src;
  
  if (*(int *)(param_1 + 4) != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\seed_src.c",0x65,"seed_src_generate");
    func_0x00bc5160(0x39,(*(int *)(param_1 + 4) != 2) + 0xc0,0);
    return false;
  }
  iVar1 = func_0x00bfe7b0(param_4,1,param_3,param_3);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\seed_src.c",0x6b,"seed_src_generate");
    func_0x00bc5160(0x39,0x80024,0);
    return false;
  }
  iVar2 = func_0x00bfe980(iVar1);
  if (iVar2 != 0) {
    _Size = func_0x00bb6b70(iVar1);
    _Src = (void *)FUN_00bbba70(iVar1);
    memcpy(param_2,_Src,_Size);
  }
  func_0x00bfe760(iVar1);
  return iVar2 != 0;
}



undefined4 FUN_00ca9e20(int param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\seed_src.c",0x85,"seed_src_reseed");
    func_0x00bc5160(0x39,(*(int *)(param_1 + 4) != 2) + 0xc0,0);
    return 0;
  }
  return 1;
}



undefined ** FUN_00ca9e70(void)

{
  return &PTR_s_state_01096ec8;
}



bool FUN_00ca9e80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,"state");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc0c00(iVar1,*(undefined4 *)(param_1 + 4)), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"strength");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc0c00(iVar1,0x400), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"max_request");
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = func_0x00bc10c0(iVar1,0x80);
  return iVar1 != 0;
}



uint FUN_00ca9f10(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,uint param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  func_0x00e87f70();
  uVar6 = 0;
  iVar3 = func_0x00bfe7b0(param_4,1,param_5,param_6);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\seed_src.c",0xbb,"seed_get_seed");
    func_0x00bc5160(0x39,0x80024,0);
    return 0;
  }
  iVar4 = func_0x00bfe980(iVar3);
  if (iVar4 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\seed_src.c",0xca,"seed_get_seed");
    func_0x00bc5160(0x39,0xba,0);
  }
  else {
    uVar6 = func_0x00bb6b70(iVar3);
    iVar4 = func_0x00bfe720(iVar3);
    uVar7 = 0;
    *param_3 = iVar4;
    if (param_9 != 0) {
      do {
        uVar5 = uVar7 % uVar6;
        pbVar1 = (byte *)(param_8 + uVar7);
        uVar7 = uVar7 + 1;
        pbVar2 = (byte *)(*param_3 + uVar5);
        *pbVar2 = *pbVar2 ^ *pbVar1;
      } while (uVar7 < param_9);
      func_0x00bfe760(iVar3);
      return uVar6;
    }
  }
  func_0x00bfe760(iVar3);
  return uVar6;
}



void FUN_00caa010(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00bee500(param_2,param_3,"providers\\implementations\\rands\\seed_src.c",0xd3);
  return;
}



void FUN_00caa030(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c39170(param_1,param_2,param_3,FUN_00caa700,FUN_00caa070,FUN_00caa670,FUN_00caa890,
                  FUN_00caa760,FUN_00caa480);
  return;
}



void FUN_00caa070(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x8c), iVar1 != 0)) {
    func_0x00bd45b0(*(undefined4 *)(iVar1 + 0xc));
    func_0x00cd6000(iVar1);
    FUN_00bee500(iVar1,0x164,"providers\\implementations\\rands\\drbg_hash.c",0x1ca);
  }
  func_0x00c39140(param_1);
  return;
}



undefined4
FUN_00caa0c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00caa7d0(param_1,param_6);
    if (iVar1 != 0) {
      uVar2 = func_0x00c389a0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined4 FUN_00caa130(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = param_1[0x23];
  func_0x00401320(iVar1 + 0x14,0x6f);
  func_0x00401320(iVar1 + 0x83,0x6f);
  func_0x00401320(iVar1 + 0xf2,0x6f);
  uVar2 = func_0x00c39120(param_1);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x00c38891)

undefined4
thunk_FUN_00c386f0(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                  undefined4 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  
  uVar3 = 0;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || ((*param_1 != 0 && (iVar1 = func_0x00bbb470(*param_1), iVar1 == 0)))) {
    return 0;
  }
  if (param_1[0x22] != 1) {
    func_0x00c393e0(param_1);
    if (param_1[0x22] == 2) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x282,"ossl_prov_drbg_generate");
      func_0x00bc5160(0x39,0xc0,0);
      goto LAB_00c38977;
    }
    if (param_1[0x22] == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x286,"ossl_prov_drbg_generate");
      func_0x00bc5160(0x39,0xc1,0);
      goto LAB_00c38977;
    }
  }
  if ((uint)param_1[0x10] < param_4) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x28b,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xb5,0);
    goto LAB_00c38977;
  }
  if ((uint)param_1[0x11] < param_3) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x290,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xc4,0);
    goto LAB_00c38977;
  }
  if ((uint)param_1[0x17] < param_7) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x294,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xb8,0);
    uVar3 = 0;
    goto LAB_00c38977;
  }
  iVar1 = FUN_00466fc0();
  bVar4 = param_1[0xe] != iVar1;
  if (bVar4) {
    param_1[0xe] = iVar1;
  }
  if ((param_1[0x19] != 0) && ((uint)param_1[0x19] <= (uint)param_1[0x18])) {
    bVar4 = true;
  }
  if ((-1 < param_1[0x1d]) && ((0 < param_1[0x1d] || (param_1[0x1c] != 0)))) {
    lVar5 = func_0x008aaff6(0);
    if (*(longlong *)(param_1 + 0x1a) <= lVar5) {
      lVar5 = lVar5 - *(longlong *)(param_1 + 0x1a);
      iVar1 = (int)((ulonglong)lVar5 >> 0x20);
      if ((iVar1 < param_1[0x1d]) ||
         ((iVar1 <= param_1[0x1d] && ((uint)lVar5 < (uint)param_1[0x1c])))) goto LAB_00c388aa;
    }
    bVar4 = true;
  }
LAB_00c388aa:
  if ((((param_1[6] != 0) &&
       (iVar1 = param_1[0x20], iVar2 = func_0x00c37f90(param_1), iVar2 != iVar1)) || (bVar4)) ||
     (param_5 != 0)) {
    iVar1 = func_0x00c38e80(param_1,param_5,0,0,param_6,param_7);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x2b0,"ossl_prov_drbg_generate");
      func_0x00bc5160(0x39,0xc5,0);
      uVar3 = 0;
      goto LAB_00c38977;
    }
    param_6 = 0;
    param_7 = 0;
  }
  iVar1 = (*(code *)param_1[5])(param_1,param_2,param_3,param_6,param_7);
  if (iVar1 == 0) {
    param_1[0x22] = 2;
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg.c",0x2b9,"ossl_prov_drbg_generate");
    func_0x00bc5160(0x39,0xbf,0);
    uVar3 = 0;
  }
  else {
    param_1[0x18] = param_1[0x18] + 1;
    uVar3 = 1;
  }
LAB_00c38977:
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar3;
}



undefined4
thunk_FUN_00c38e30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x00c38e80(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined ** FUN_00caa1c0(void)

{
  return &PTR_s_properties_01097140;
}



undefined4 FUN_00caa1d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x00caa7d0(param_1,param_2);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined ** FUN_00caa210(void)

{
  return &PTR_s_digest_01097010;
}



undefined4 FUN_00caa220(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  uVar2 = param_3;
  piVar1 = param_2;
  uVar6 = 0;
  param_2 = (int *)0x0;
  iVar4 = piVar1[0x23];
  iVar3 = func_0x00c38480(piVar1,param_3,&param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    return 1;
  }
  if ((*piVar1 != 0) && (iVar3 = func_0x00bbb3c0(*piVar1), iVar3 == 0)) {
    return 0;
  }
  iVar3 = func_0x00bc09d0(uVar2,"digest");
  if (iVar3 != 0) {
    iVar4 = FUN_00bbba70(iVar4);
    if (iVar4 == 0) goto LAB_00caa2be;
    uVar5 = FUN_00bc42b0(iVar4);
    iVar4 = func_0x00bc12f0(iVar3,uVar5);
    if (iVar4 == 0) goto LAB_00caa2be;
  }
  uVar6 = func_0x00c382c0(piVar1,uVar2);
LAB_00caa2be:
  if (*piVar1 != 0) {
    func_0x00bbb440(*piVar1);
  }
  return uVar6;
}



undefined4 FUN_00caa2e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = param_1[0x23];
  if (*param_1 != 0) {
    iVar2 = func_0x00bbb3c0(*param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x14 + uVar3) != '\0') goto LAB_00caa33b;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x6f);
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x83 + uVar3) != '\0') goto LAB_00caa33b;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x6f);
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0xf2 + uVar3) != '\0') goto LAB_00caa33b;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x6f);
  uVar4 = 1;
LAB_00caa33b:
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar4;
}



undefined4
FUN_00caa480(undefined1 param_1,int param_2,undefined4 param_3,int param_4,void *param_5,
            uint param_6,int param_7,int param_8)

{
  void *_Src;
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint _Size;
  int *piVar9;
  undefined1 uStack00000005;
  undefined1 uStack00000006;
  undefined1 uStack00000007;
  
  func_0x00e87f70();
  iVar7 = param_4;
  uVar1 = *(undefined4 *)(param_4 + 0x60);
  param_2 = *(int *)(param_4 + 0x8c);
  param_1 = (undefined1)((uint)uVar1 >> 0x18);
  uStack00000005 = (undefined1)((uint)uVar1 >> 0x10);
  uStack00000006 = (undefined1)((uint)uVar1 >> 8);
  uStack00000007 = (undefined1)uVar1;
  if ((*(int *)(param_2 + 0xc) != 0) &&
     (((param_7 == 0 || (param_8 == 0)) ||
      (iVar3 = func_0x00caa3d0(param_4,2,param_7,param_8), iVar3 != 0)))) {
    _Size = param_6;
    iVar3 = *(int *)(iVar7 + 0x8c);
    iVar5 = iVar7;
    if (param_6 == 0) {
LAB_00caa617:
      iVar3 = func_0x00caa3d0(iVar5,3,0,0);
      if (iVar3 != 0) {
        iVar3 = param_2 + 0x14;
        iVar7 = func_0x00caa350(iVar5,iVar3,param_2 + 0x83,*(undefined4 *)(iVar7 + 0x84));
        if ((iVar7 != 0) && (iVar7 = func_0x00caa350(iVar5,iVar3,&param_1,4), iVar7 != 0)) {
          return 1;
        }
      }
    }
    else {
      piVar9 = (int *)(iVar7 + 0x84);
      memcpy((void *)(iVar3 + 0xf2),(void *)(iVar3 + 0x14),*(size_t *)(iVar7 + 0x84));
      uVar1 = *(undefined4 *)(iVar3 + 0xc);
      uVar4 = FUN_00bbba70(iVar3,0);
      iVar5 = func_0x00bd3dd0(uVar1,uVar4);
      while (iVar5 != 0) {
        _Src = (void *)(iVar3 + 0xf2);
        iVar5 = func_0x00bd3e10(*(undefined4 *)(iVar3 + 0xc),_Src,*piVar9);
        pvVar2 = param_5;
        if (iVar5 == 0) {
          return 0;
        }
        if (_Size < *(uint *)(iVar3 + 0x10)) {
          iVar3 = func_0x00bd3a80(*(undefined4 *)(iVar3 + 0xc),_Src,0);
          if (iVar3 == 0) {
            return 0;
          }
          memcpy(param_5,_Src,_Size);
          iVar5 = param_4;
          goto LAB_00caa617;
        }
        iVar5 = func_0x00bd3a80(*(undefined4 *)(iVar3 + 0xc),param_5,0);
        if (iVar5 == 0) {
          return 0;
        }
        _Size = _Size - *(int *)(iVar3 + 0x10);
        iVar5 = param_4;
        if (_Size == 0) goto LAB_00caa617;
        param_5 = (void *)((int)pvVar2 + *(int *)(iVar3 + 0x10));
        iVar5 = *piVar9 + iVar3;
        iVar8 = *(byte *)(iVar5 + 0xf1) + 1;
        *(char *)(iVar5 + 0xf1) = (char)iVar8;
        pcVar6 = (char *)(iVar5 + 0xf0);
        if ((char)((uint)iVar8 >> 8) != '\0') {
          iVar5 = *piVar9;
          for (; (iVar5 = iVar5 + -1, iVar5 != 0 && (*pcVar6 = *pcVar6 + '\x01', *pcVar6 == '\0'));
              pcVar6 = pcVar6 + -1) {
          }
        }
        uVar1 = *(undefined4 *)(iVar3 + 0xc);
        uVar4 = FUN_00bbba70(iVar3,0);
        iVar5 = func_0x00bd3dd0(uVar1,uVar4);
      }
    }
  }
  return 0;
}



undefined4
FUN_00caa670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  func_0x00bd45b0(*(undefined4 *)(iVar2 + 0xc));
  iVar1 = func_0x00bd46b0();
  *(int *)(iVar2 + 0xc) = iVar1;
  if (iVar1 != 0) {
    iVar1 = func_0x00caa8d0(param_1,iVar2 + 0x14,0xff,param_2,param_3,param_4,param_5,param_6,
                            param_7);
    if (iVar1 != 0) {
      iVar2 = func_0x00caa8d0(param_1,iVar2 + 0x83,0,iVar2 + 0x14,*(undefined4 *)(param_1 + 0x84),0,
                              0,0,0);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00caa700(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bee720(0x164,"providers\\implementations\\rands\\drbg_hash.c",0x1a7);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  *(undefined4 *)(param_1 + 0x84) = 0x6f;
  *(undefined4 *)(param_1 + 0x4c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x58) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x44) = 0x10000;
  return 1;
}



void FUN_00caa760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  
  _Dst = (void *)(*(int *)(param_1 + 0x8c) + 0x14);
  _Src = (void *)(*(int *)(param_1 + 0x8c) + 0x83);
  iVar1 = func_0x00caa8d0(param_1,_Src,1,_Dst,*(undefined4 *)(param_1 + 0x84),param_2,param_3,
                          param_4,param_5);
  if (iVar1 == 0) {
    return;
  }
  memcpy(_Dst,_Src,*(size_t *)(param_1 + 0x84));
  func_0x00caa8d0(param_1,_Src,0,_Dst,*(undefined4 *)(param_1 + 0x84),0,0,0,0);
  return;
}



void FUN_00caa890(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  func_0x00401320(iVar1 + 0x14,0x6f);
  func_0x00401320(iVar1 + 0x83,0x6f);
  func_0x00401320(iVar1 + 0xf2,0x6f);
  func_0x00c39120(param_1);
  return;
}



void FUN_00caaa80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c39170(param_1,param_2,param_3,FUN_00caaf60,FUN_00caaac0,FUN_00caaee0,FUN_00cab100,
                  FUN_00caafc0,FUN_00caaeb0);
  return;
}



void FUN_00caaac0(int param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x8c), puVar1 != (undefined4 *)0x0)) {
    func_0x00c74b50(*puVar1);
    func_0x00cd6000(puVar1 + 1);
    FUN_00bee500(puVar1,0x94,"providers\\implementations\\rands\\drbg_hmac.c",0x15e);
  }
  func_0x00c39140(param_1);
  return;
}



undefined4
FUN_00caab10(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00cab030(param_1,param_6);
    if (iVar1 != 0) {
      uVar2 = func_0x00c389a0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined4 FUN_00caab80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = param_1[0x23];
  func_0x00401320(iVar1 + 0x14,0x40);
  func_0x00401320(iVar1 + 0x54,0x40);
  uVar2 = func_0x00c39120(param_1);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined ** FUN_00caabe0(void)

{
  return &PTR_s_properties_01097398;
}



undefined4 FUN_00caabf0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x00cab030(param_1,param_2);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined ** FUN_00caac30(void)

{
  return &PTR_DAT_01097258;
}



undefined4 FUN_00caac40(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  uVar3 = param_3;
  piVar2 = param_2;
  uVar7 = 0;
  param_2 = (int *)0x0;
  piVar1 = (int *)piVar2[0x23];
  iVar4 = func_0x00c38480(piVar2,param_3,&param_2);
  if (iVar4 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    return 1;
  }
  if ((*piVar2 != 0) && (iVar4 = func_0x00bbb3c0(*piVar2), iVar4 == 0)) {
    return 0;
  }
  iVar4 = func_0x00bc09d0(uVar3,&DAT_0113cd34);
  if (iVar4 != 0) {
    iVar6 = *piVar1;
    if (iVar6 == 0) goto LAB_00caad22;
    uVar5 = FUN_00bbba70(iVar6);
    uVar5 = FUN_00bc39e0(uVar5);
    iVar4 = func_0x00bc12f0(iVar4,uVar5);
    if (iVar4 == 0) goto LAB_00caad22;
  }
  iVar4 = func_0x00bc09d0(uVar3,"digest");
  if (iVar4 != 0) {
    iVar6 = FUN_00bbba70(piVar1 + 1);
    if (iVar6 == 0) goto LAB_00caad22;
    uVar5 = FUN_00bc42b0(iVar6);
    iVar4 = func_0x00bc12f0(iVar4,uVar5);
    if (iVar4 == 0) goto LAB_00caad22;
  }
  uVar7 = func_0x00c382c0(piVar2,uVar3);
LAB_00caad22:
  if (*piVar2 != 0) {
    func_0x00bbb440(*piVar2);
  }
  return uVar7;
}



undefined4 FUN_00caad40(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = param_1[0x23];
  if (*param_1 != 0) {
    iVar2 = func_0x00bbb3c0(*param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x14 + uVar3) != '\0') goto LAB_00caad87;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x40);
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x54 + uVar3) != '\0') goto LAB_00caad87;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x40);
  uVar4 = 1;
LAB_00caad87:
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar4;
}



void FUN_00caaeb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  func_0x00cab1a0(*(undefined4 *)(param_1 + 0x8c),param_2,param_3,param_4,param_5);
  return;
}



undefined4
FUN_00caaee0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  if (*piVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\rands\\drbg_hmac.c",0x78,"ossl_drbg_hmac_init");
    func_0x00bc5160(0x39,0x96,0);
    return 0;
  }
  memset(piVar1 + 5,0,piVar1[4]);
  memset(piVar1 + 0x15,1,piVar1[4]);
  uVar2 = func_0x00cab130(piVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}



undefined4 FUN_00caaf60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bee720(0x94,"providers\\implementations\\rands\\drbg_hmac.c",0x13b);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x58) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x44) = 0x10000;
  return 1;
}



undefined4 FUN_00caafc0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  iVar1 = func_0x00caada0(uVar2,0,param_2,param_3,param_4,param_5,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 == 0) && (param_5 == 0)) {
    return 1;
  }
  uVar2 = func_0x00caada0(uVar2,1,param_2,param_3,param_4,param_5,0,0);
  return uVar2;
}



void FUN_00cab100(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  func_0x00401320(iVar1 + 0x14,0x40);
  func_0x00401320(iVar1 + 0x54,0x40);
  func_0x00c39120(param_1);
  return;
}



void FUN_00cab4c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c39170(param_1,param_2,param_3,FUN_00cac3d0,FUN_00cab500,FUN_00cac340,FUN_00cac660,
                  FUN_00cac410,FUN_00cabf50);
  return;
}



void FUN_00cab500(int param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined4 **)(param_1 + 0x8c), puVar1 != (undefined4 *)0x0)) {
    func_0x00ba8010(*puVar1);
    func_0x00ba8010(puVar1[1]);
    func_0x00ba8010(puVar1[2]);
    FUN_00ba8550(puVar1[3]);
    FUN_00ba8550(puVar1[4]);
    FUN_00bee500(puVar1,0x90,"providers\\implementations\\rands\\drbg_ctr.c",0x28d);
  }
  func_0x00c39140(param_1);
  return;
}



undefined4
FUN_00cab560(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00cac470(param_1,param_6);
    if (iVar1 != 0) {
      uVar2 = func_0x00c389a0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined4 FUN_00cab5d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = param_1[0x23];
  func_0x00401320(iVar1 + 0x1c,0x20);
  func_0x00401320(iVar1 + 0x3c,0x10);
  func_0x00401320(iVar1 + 0x4c,0x10);
  func_0x00401320(iVar1 + 0x60,0x30);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  uVar2 = func_0x00c39120(param_1);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined ** FUN_00cab650(void)

{
  return &PTR_s_properties_01097638;
}



undefined4 FUN_00cab660(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = func_0x00bbb470(*param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x00cac470(param_1,param_2);
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar2;
}



undefined ** FUN_00cab6a0(void)

{
  return &PTR_s_cipher_010974f8;
}



undefined4 FUN_00cab6b0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  uVar2 = param_3;
  piVar1 = param_2;
  uVar6 = 0;
  iVar5 = param_2[0x23];
  param_2 = (int *)0x0;
  iVar3 = func_0x00c38480(piVar1,param_3,&param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    return 1;
  }
  if ((*piVar1 != 0) && (iVar3 = func_0x00bbb3c0(*piVar1), iVar3 == 0)) {
    return 0;
  }
  iVar3 = func_0x00bc09d0(uVar2,"use_derivation_function");
  if ((iVar3 != 0) && (iVar3 = func_0x00bc0c00(iVar3,*(undefined4 *)(iVar5 + 0x18)), iVar3 == 0))
  goto LAB_00cab770;
  iVar3 = func_0x00bc09d0(uVar2,"cipher");
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar5 == 0) goto LAB_00cab770;
    uVar4 = FUN_00bc3b90(iVar5);
    iVar5 = func_0x00bc12f0(iVar3,uVar4);
    if (iVar5 == 0) goto LAB_00cab770;
  }
  uVar6 = func_0x00c382c0(piVar1,uVar2);
LAB_00cab770:
  if (*piVar1 != 0) {
    func_0x00bbb440(*piVar1);
  }
  return uVar6;
}



undefined4 FUN_00cab790(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = param_1[0x23];
  if (*param_1 != 0) {
    iVar2 = func_0x00bbb3c0(*param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x1c + uVar3) != '\0') goto LAB_00cab7fd;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x20);
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x3c + uVar3) != '\0') goto LAB_00cab7fd;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x4c + uVar3) != '\0') goto LAB_00cab7fd;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  uVar3 = 0;
  do {
    if (*(char *)(iVar1 + 0x60 + uVar3) != '\0') goto LAB_00cab7fd;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x30);
  if (*(int *)(iVar1 + 0x5c) == 0) {
    uVar4 = 1;
  }
LAB_00cab7fd:
  if (*param_1 != 0) {
    func_0x00bbb440(*param_1);
  }
  return uVar4;
}



undefined4
FUN_00cabf50(undefined4 param_1,size_t param_2,undefined4 param_3,int param_4,void *param_5,
            size_t param_6,int param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  size_t sVar9;
  int iVar10;
  
  func_0x00e87f70();
  iVar10 = param_8;
  iVar6 = param_7;
  iVar2 = *(int *)(param_4 + 0x8c);
  if ((param_7 == 0) || (param_8 == 0)) {
    iVar5 = 0;
    param_7 = iVar6;
  }
  else {
    iVar5 = 0x10;
    uVar4 = 1;
    do {
      pbVar1 = (byte *)(iVar2 + 0x3b + iVar5);
      iVar5 = iVar5 + -1;
      uVar4 = uVar4 + *pbVar1;
      *(char *)(iVar2 + 0x3c + iVar5) = (char)uVar4;
      uVar4 = uVar4 >> 8;
    } while (iVar5 != 0);
    iVar5 = func_0x00cabd60(param_4,param_7,param_8,0,0,0,0);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = 1;
    if (*(int *)(iVar2 + 0x18) == 0) {
      iVar5 = iVar10;
    }
    param_7 = 0;
    if (*(int *)(iVar2 + 0x18) == 0) {
      param_7 = iVar6;
    }
  }
  sVar9 = param_6;
  pvVar8 = param_5;
  iVar10 = iVar2 + 0x3c;
  iVar6 = 0x10;
  uVar4 = 1;
  do {
    pbVar1 = (byte *)(iVar2 + 0x3b + iVar6);
    iVar6 = iVar6 + -1;
    uVar4 = uVar4 + *pbVar1;
    *(char *)(iVar10 + iVar6) = (char)uVar4;
    uVar4 = uVar4 >> 8;
  } while (iVar6 != 0);
  if (param_6 == 0) {
    iVar6 = 0x10;
    uVar4 = 1;
    do {
      pbVar1 = (byte *)(iVar2 + 0x3b + iVar6);
      iVar6 = iVar6 + -1;
      uVar4 = uVar4 + *pbVar1;
      *(char *)(iVar10 + iVar6) = (char)uVar4;
      uVar4 = uVar4 >> 8;
    } while (iVar6 != 0);
  }
  else {
    memset(param_5,0,param_6);
    do {
      iVar6 = func_0x00ba8630(*(undefined4 *)(iVar2 + 4),0,0,0,iVar10,0xffffffff);
      if (iVar6 == 0) {
        return 0;
      }
      uVar4 = *(uint *)(iVar2 + 0x48);
      if (0x40000000 < param_6) {
        sVar9 = 0x40000000;
      }
      uVar3 = (int)(sVar9 + 0xf + ((int)(sVar9 + 0xf) >> 0x1f & 0xfU)) >> 4;
      uVar7 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
              uVar3;
      uVar4 = uVar7;
      if (uVar7 < uVar3) {
        if (uVar7 != 0) {
          sVar9 = (uVar3 - uVar7) * 0x10;
        }
        iVar6 = 0xc;
        uVar4 = 0;
        if (uVar7 == 0) {
          uVar4 = uVar7;
        }
        uVar3 = 1;
        do {
          pbVar1 = (byte *)(iVar2 + 0x3b + iVar6);
          iVar6 = iVar6 + -1;
          uVar3 = uVar3 + *pbVar1;
          *(char *)(iVar10 + iVar6) = (char)uVar3;
          uVar3 = uVar3 >> 8;
        } while (iVar6 != 0);
      }
      *(uint *)(iVar2 + 0x48) =
           uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      iVar6 = func_0x00ba8660(*(undefined4 *)(iVar2 + 4),pvVar8,&param_2,pvVar8,sVar9);
      if (iVar6 == 0) {
        return 0;
      }
      if (param_2 != sVar9) {
        return 0;
      }
      pvVar8 = (void *)((int)pvVar8 + sVar9);
      sVar9 = param_6 - sVar9;
      param_6 = sVar9;
    } while (sVar9 != 0);
    param_6 = 0;
  }
  iVar2 = func_0x00cabd60(param_4,param_7,iVar5,0,0,0,0);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



bool FUN_00cac340(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  if (param_2 != 0) {
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    iVar2 = func_0x00ba8630(*puVar1,0,0,puVar1 + 7,0,0xffffffff);
    if (iVar2 != 0) {
      uVar3 = 1;
      iVar2 = 0x10;
      do {
        iVar4 = iVar2 + -1;
        uVar3 = uVar3 + *(byte *)((int)puVar1 + iVar2 + 0x3b);
        *(char *)((int)puVar1 + iVar2 + 0x3b) = (char)uVar3;
        uVar3 = uVar3 >> 8;
        iVar2 = iVar4;
      } while (iVar4 != 0);
      iVar2 = func_0x00cabd60(param_1,param_2,param_3,param_6,param_7,param_4,param_5);
      return iVar2 != 0;
    }
  }
  return false;
}



undefined4 FUN_00cac3d0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00bee720(0x90,"providers\\implementations\\rands\\drbg_ctr.c",0x26e);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar2 + 0x18) = 1;
  *(int *)(param_1 + 0x8c) = iVar2;
  iVar2 = *(int *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x44) = 0x10000;
  if (*(int *)(iVar2 + 0x18) == 0) {
    if (*(int *)(iVar2 + 0x14) == 0) {
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x84);
    }
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x58) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x5c) = 0x7fffffff;
    uVar1 = *(uint *)(iVar2 + 0x14);
    if (uVar1 != 0) {
      *(uint *)(param_1 + 0x48) = uVar1;
      *(uint *)(param_1 + 0x50) = uVar1 >> 1;
      return 1;
    }
  }
  return 1;
}



bool FUN_00cac410(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = 0x10;
    uVar3 = 1;
    iVar2 = *(int *)(param_1 + 0x8c);
    do {
      pbVar1 = (byte *)(iVar2 + 0x3b + iVar4);
      iVar4 = iVar4 + -1;
      uVar3 = uVar3 + *pbVar1;
      *(char *)(iVar2 + 0x3c + iVar4) = (char)uVar3;
      uVar3 = uVar3 >> 8;
    } while (iVar4 != 0);
    iVar2 = func_0x00cabd60(param_1,param_2,param_3,param_4,param_5,0,0);
    return iVar2 != 0;
  }
  return false;
}



void FUN_00cac660(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  func_0x00401320(iVar1 + 0x1c,0x20);
  func_0x00401320(iVar1 + 0x3c,0x10);
  func_0x00401320(iVar1 + 0x4c,0x10);
  func_0x00401320(iVar1 + 0x60,0x30);
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  func_0x00c39120(param_1);
  return;
}



int FUN_00cac6b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = func_0x00bc3c60(param_1);
    iVar1 = func_0x00c0fbe0(uVar2);
    if (iVar1 != 0) {
      func_0x00c0f7c0(iVar1,0xf000);
      func_0x00c0f970(iVar1,0);
    }
    return iVar1;
  }
  return 0;
}



void thunk_FUN_00c0f7d0(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x54);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      if ((*(int *)(param_1 + 0x68) != 0) &&
         (pcVar3 = *(code **)(*(int *)(param_1 + 0x68) + 0x14), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      func_0x00bc67c0(*(undefined4 *)(param_1 + 0x60));
      func_0x00bca230(6,param_1,param_1 + 0x58);
      func_0x00bbb370(*(undefined4 *)(param_1 + 0x6c));
      func_0x00c4dfb0(param_1 + 8);
      FUN_00bba080(*(undefined4 *)(param_1 + 0x44));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x48));
      FUN_00bbc580(param_1,"crypto\\dh\\dh_lib.c",0xa4);
    }
  }
  return;
}



void FUN_00cac700(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cad4c0(param_1,param_2,param_3,0);
  return;
}



void FUN_00cac720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cad4c0(param_1,param_2,param_3,0x1000);
  return;
}



undefined4 FUN_00cac740(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    uVar2 = func_0x009b10a0(param_2);
    *(undefined4 *)(param_1 + 4) = uVar2;
    return 1;
  }
  return 0;
}



undefined4 FUN_00cac780(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00cad360(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"safeprime-generator");
    if ((iVar1 != 0) && (iVar1 = func_0x00bbfcd0(iVar1,param_1 + 0x28), iVar1 == 0)) {
      return 0;
    }
    iVar1 = func_0x00bc09d0(param_2,"gindex");
    if ((((iVar1 == 0) && (iVar1 = func_0x00bc09d0(param_2,"pcounter"), iVar1 == 0)) &&
        (iVar1 = func_0x00bc09d0(param_2,"hindex"), iVar1 == 0)) &&
       (((iVar1 = func_0x00bc09d0(param_2,&DAT_01056c84), iVar1 == 0 &&
         (iVar1 = func_0x00bc09d0(param_2,"qbits"), iVar1 == 0)) &&
        ((iVar1 = func_0x00bc09d0(param_2,"digest"), iVar1 == 0 &&
         (iVar1 = func_0x00bc09d0(param_2,"properties"), iVar1 == 0)))))) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\dh_kmgmt.c",0x2a7,"dh_gen_set_params");
    func_0x00bc5160(0x39,0x80106,0);
  }
  return 0;
}



undefined ** FUN_00cac880(void)

{
  return &PTR_DAT_01097ab0;
}



int FUN_00cac890(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = param_2;
  func_0x00e87f70();
  param_2 = (undefined4 *)0x0;
  iVar5 = 0;
  iVar2 = FUN_0058e2e0();
  if ((iVar2 == 0) || (puVar1 == (undefined4 *)0x0)) {
    return 0;
  }
  iVar2 = puVar1[3];
  if (iVar2 != 0) {
    puVar1[9] = 3;
  }
  if (3 < (uint)puVar1[9]) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\dh_kmgmt.c",0x2d3,"dh_gen");
    func_0x00bc5160(0x39,0xc0103,"gen_type set to unsupported value %d",puVar1[9]);
    return 0;
  }
  if ((puVar1[9] == 3) && (puVar1[1] == 0)) {
    if (iVar2 == 0) {
      iVar2 = func_0x00c75940(puVar1[4]);
      puVar1[3] = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar2 = func_0x00c19f50(*puVar1,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)func_0x009b10a0(iVar2);
LAB_00caca47:
    if ((*(byte *)(puVar1 + 2) & 3) == 0) {
LAB_00cacaae:
      func_0x00c0f7c0(iVar2,0xf000);
      func_0x00c0f970(iVar2,puVar1[0x12]);
      func_0x00bb9ec0(iVar5);
      return iVar2;
    }
    if ((*piVar3 != 0) && (piVar3[2] != 0)) {
      if (0 < (int)puVar1[0xd]) {
        func_0x00c0f980(iVar2,puVar1[0xd]);
      }
      func_0x00c4e210(piVar3,4,puVar1[9] == 1);
      iVar4 = func_0x00c40fc0(iVar2);
      if (0 < iVar4) goto LAB_00cacaae;
    }
    if (0 < (int)param_2) goto LAB_00caca9a;
  }
  else {
    iVar2 = func_0x00c0fbe0(*puVar1);
    if (iVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)func_0x009b10a0(iVar2);
    if (((puVar1[1] == 0) || (iVar4 = func_0x00c4e070(piVar3,puVar1[1]), iVar4 != 0)) &&
       (iVar4 = func_0x00c4e530(piVar3,puVar1[6],puVar1[7]), iVar4 != 0)) {
      if (puVar1[8] == -1) {
        if (puVar1[0xc] != 0) {
          func_0x00bda210(piVar3,puVar1[0xc]);
        }
      }
      else {
        func_0x00c4e520(piVar3,puVar1[8]);
        if (puVar1[0xb] != -1) {
          func_0x00c12a40(piVar3,puVar1[0xb]);
        }
      }
      if (puVar1[0xe] != 0) {
        func_0x00c4e7e0(piVar3,puVar1[0xe],puVar1[0xf]);
      }
      puVar1[0x10] = param_3;
      puVar1[0x11] = param_4;
      iVar5 = func_0x00bb9ee0();
      if (iVar5 != 0) {
        func_0x00bb9f00(iVar5,FUN_00cad660,puVar1);
      }
      if ((*(byte *)(puVar1 + 2) & 4) != 0) {
        if (puVar1[9] == 0) {
          param_2 = (undefined4 *)func_0x00c75690(iVar2,puVar1[4],puVar1[10]);
        }
        else {
          param_2 = (undefined4 *)func_0x00c75900(iVar2,puVar1[9],puVar1[4],puVar1[5],iVar5);
        }
        if ((int)param_2 < 1) goto LAB_00caca8f;
      }
      goto LAB_00caca47;
    }
  }
LAB_00caca8f:
  FUN_00c0f7d0(iVar2);
  iVar2 = 0;
LAB_00caca9a:
  func_0x00bb9ec0(iVar5);
  return iVar2;
}



void FUN_00cacae0(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x38),"providers\\implementations\\keymgmt\\dh_kmgmt.c",
                 0x330);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x3c),"providers\\implementations\\keymgmt\\dh_kmgmt.c",
                 0x331);
    FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 "providers\\implementations\\keymgmt\\dh_kmgmt.c",0x332);
    FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\dh_kmgmt.c",0x333);
  }
  return;
}



undefined4 FUN_00cacb40(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (param_2 == 4)) {
    uVar1 = *param_1;
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00cacb60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x00bc09d0(param_2,&DAT_01040544);
  if (iVar1 != 0) {
    uVar2 = func_0x00c0f7a0(param_1);
    iVar1 = func_0x00bc0c00(iVar1,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"security-bits");
  if (iVar1 != 0) {
    uVar2 = func_0x00c0f890(param_1);
    iVar1 = func_0x00bc0c00(iVar1,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"max-size");
  if (iVar1 != 0) {
    uVar2 = func_0x00c0f9a0(param_1);
    iVar1 = func_0x00bc0c00(iVar1,uVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"encoded-pub-key");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 5) {
      return 0;
    }
    iVar3 = func_0x00c41150(param_1,iVar1 + 8,*(undefined4 *)(iVar1 + 0xc),0);
    *(int *)(iVar1 + 0x10) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar1 = func_0x00c1a450(param_1,0,param_2);
  if ((iVar1 != 0) && (iVar1 = func_0x00c1a330(param_1,0,param_2,1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



undefined ** FUN_00cacc50(void)

{
  return &PTR_DAT_01097930;
}



bool FUN_00cacc60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,"encoded-pub-key");
  if (iVar1 == 0) {
    return true;
  }
  if (*(int *)(iVar1 + 4) == 5) {
    iVar1 = func_0x00c40fe0(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    return iVar1 != 0;
  }
  return false;
}



undefined ** FUN_00cacca0(void)

{
  return &PTR_s_encoded_pub_key_01097a84;
}



bool FUN_00caccb0(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return false;
  }
  if ((param_2 & 7) == 0) {
    return true;
  }
  if ((param_2 & 2) != 0) {
    iVar1 = func_0x00bc3bb0(param_1);
    bVar2 = iVar1 != 0;
  }
  if ((param_2 & 1) != 0) {
    if ((bVar2 == false) || (iVar1 = func_0x00bb62e0(param_1), iVar1 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if ((param_2 & 4) != 0) {
    if (((bVar2 != false) && (iVar1 = FUN_00bc39e0(param_1), iVar1 != 0)) &&
       (iVar1 = func_0x00baf190(param_1), iVar1 != 0)) {
      return true;
    }
    bVar2 = false;
  }
  return bVar2;
}



bool FUN_00cacd40(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  func_0x00e87f70();
  bVar6 = true;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return false;
  }
  if ((param_4 & 3) == 0) goto LAB_00cace00;
  bVar1 = false;
  if ((param_4 & 2) == 0) {
LAB_00cacdb1:
    if ((param_4 & 1) != 0) {
      iVar2 = func_0x00bb62e0(param_2);
      iVar3 = func_0x00bb62e0(param_3);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        iVar2 = func_0x00bba0f0(iVar2,iVar3);
        bVar6 = iVar2 == 0;
        bVar1 = true;
      }
    }
  }
  else {
    iVar2 = func_0x00bc3bb0(param_2);
    iVar3 = func_0x00bc3bb0(param_3);
    if ((iVar2 == 0) || (iVar3 == 0)) goto LAB_00cacdb1;
    bVar1 = true;
    iVar2 = func_0x00bba0f0(iVar2,iVar3);
    bVar6 = iVar2 == 0;
  }
  if ((bVar6 == false) || (!bVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
LAB_00cace00:
  if ((param_4 & 4) != 0) {
    uVar4 = func_0x009b10a0(param_2);
    uVar5 = func_0x009b10a0(param_3);
    if ((bVar6 != false) && (iVar2 = func_0x00c4e010(uVar4,uVar5,1), iVar2 != 0)) {
      return true;
    }
    bVar6 = false;
  }
  return bVar6;
}



bool FUN_00cace50(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  func_0x00e87f70();
  bVar4 = true;
  iVar2 = FUN_0058e2e0();
  uVar1 = param_3;
  iVar3 = param_2;
  if (iVar2 == 0) {
    return false;
  }
  if ((param_3 & 7) == 0) {
    return true;
  }
  if ((param_3 & 4) != 0) {
    if (param_4 == 1) {
      iVar2 = func_0x00c969e0();
    }
    else {
      iVar2 = func_0x00c966d0(param_2);
    }
    bVar4 = iVar2 != 0;
  }
  if ((uVar1 & 2) != 0) {
    if (bVar4 != false) {
      param_2 = 0;
      func_0x00c0f850(iVar3,&param_2,0);
      if (param_2 != 0) {
        iVar2 = func_0x00c19f30(iVar3);
        if (iVar2 == 0) {
          iVar2 = func_0x00c96ac0(iVar3,param_2);
        }
        else {
          iVar2 = func_0x00c96d80(iVar3,param_2,&stack0x00000000);
        }
        if (iVar2 != 0) {
          bVar4 = true;
          goto LAB_00cacf0b;
        }
      }
    }
    bVar4 = false;
  }
LAB_00cacf0b:
  if ((uVar1 & 1) != 0) {
    if (bVar4 != false) {
      param_2 = 0;
      func_0x00c0f850(iVar3,0,&param_2);
      if ((param_2 != 0) && (iVar2 = func_0x00c96c80(iVar3,param_2,&stack0x00000000), iVar2 != 0)) {
        bVar4 = true;
        goto LAB_00cacf58;
      }
    }
    bVar4 = false;
  }
LAB_00cacf58:
  if (((byte)uVar1 & 3) == 3) {
    if ((bVar4 != false) && (iVar3 = func_0x00c96c00(iVar3), iVar3 != 0)) {
      return true;
    }
    bVar4 = false;
  }
  return bVar4;
}



bool FUN_00cacf90(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 7) != 0)) {
    iVar1 = func_0x00c1a3d0(param_1,param_3);
    if ((param_2 & 3) == 0) {
      return iVar1 != 0;
    }
    if ((iVar1 != 0) && (iVar1 = func_0x00c1a270(param_1,param_3,param_2 & 1), iVar1 != 0)) {
      return true;
    }
  }
  return false;
}



undefined4 FUN_00cacff0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((param_1 & 0x84) != 0);
  uVar1 = uVar2 + 2;
  if ((param_1 & 3) == 0) {
    uVar1 = uVar2;
  }
  return *(undefined4 *)(&DAT_012b7128 + uVar1 * 4);
}



undefined4 FUN_00cad010(int param_1,uint param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 == 0) || (param_1 == 0)) || ((param_2 & 7) == 0)) {
    return 0;
  }
  iVar1 = func_0x00c4eb60();
  if (iVar1 == 0) {
    return 0;
  }
  if (((((param_2 & 0x84) == 0) || (iVar2 = func_0x00c1a450(param_1,iVar1,0), iVar2 != 0)) &&
      (((param_2 & 3) == 0 || (iVar2 = func_0x00c1a330(param_1,iVar1,0,param_2 & 1), iVar2 != 0))))
     && (iVar2 = func_0x00c4ed60(iVar1), iVar2 != 0)) {
    uVar3 = (*param_3)(iVar2,param_4);
    func_0x00c44dd0(iVar2);
    func_0x00c4eb30(iVar1);
    return uVar3;
  }
  func_0x00c4eb30(iVar1);
  return 0;
}



int FUN_00cad0d0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0058e2e0();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar3 = func_0x00c0fbd0(param_1);
    iVar1 = func_0x00c40ea0();
    if ((iVar3 == iVar1) && (iVar3 = func_0x00c0fbe0(*(undefined4 *)(param_1 + 100)), iVar3 != 0)) {
      uVar2 = func_0x00bc42d0(param_1);
      *(undefined4 *)(iVar3 + 0x40) = uVar2;
      uVar4 = param_2 & 4;
      if ((uVar4 == 0) || (iVar1 = func_0x00c4e070(iVar3 + 8,param_1 + 8), iVar1 != 0)) {
        *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
        if ((param_2 & 2) != 0) {
          if (uVar4 == 0) goto LAB_00c1a089;
          if (*(int *)(param_1 + 0x44) != 0) {
            iVar1 = func_0x00bba340(*(int *)(param_1 + 0x44));
            *(int *)(iVar3 + 0x44) = iVar1;
            if (iVar1 == 0) goto LAB_00c1a089;
          }
        }
        if ((param_2 & 1) != 0) {
          if (uVar4 == 0) goto LAB_00c1a089;
          if (*(int *)(param_1 + 0x48) != 0) {
            iVar1 = func_0x00bba340(*(int *)(param_1 + 0x48));
            *(int *)(iVar3 + 0x48) = iVar1;
            if (iVar1 == 0) goto LAB_00c1a089;
          }
        }
        iVar1 = func_0x00bc9ff0(6,iVar3 + 0x58,param_1 + 0x58);
        if (iVar1 != 0) {
          return iVar3;
        }
      }
LAB_00c1a089:
      FUN_00c0f7d0(iVar3);
      return 0;
    }
  }
  return 0;
}



int FUN_00cad0e0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = func_0x00c0fbe0(uVar1);
  if (iVar2 != 0) {
    func_0x00c0f7c0(iVar2,0xf000);
    func_0x00c0f970(iVar2,0x1000);
  }
  return iVar2;
}



undefined ** FUN_00cad120(void)

{
  return &PTR_DAT_01097b28;
}



undefined4 FUN_00cad130(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = func_0x00cad360(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"gindex");
  if ((iVar2 != 0) && (iVar2 = func_0x00bbfcd0(iVar2,param_1 + 0x20), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"pcounter");
  if ((iVar2 != 0) && (iVar2 = func_0x00bbfcd0(iVar2,param_1 + 0x2c), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"hindex");
  if ((iVar2 != 0) && (iVar2 = func_0x00bbfcd0(iVar2,param_1 + 0x30), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,&DAT_01056c84);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 5) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 8);
    FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 "providers\\implementations\\keymgmt\\dh_kmgmt.c",0x202);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if ((iVar2 != 0) && (iVar1 != 0)) {
      iVar2 = func_0x00bbbc30(iVar2,iVar1,"providers\\implementations\\keymgmt\\dh_kmgmt.c",0x206);
      *(int *)(param_1 + 0x18) = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
  }
  iVar2 = func_0x00bc09d0(param_2,"qbits");
  if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,param_1 + 0x14), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bc09d0(param_2,"digest");
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 4) {
      return 0;
    }
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x38),"providers\\implementations\\keymgmt\\dh_kmgmt.c",
                 0x27a);
    iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),
                            "providers\\implementations\\keymgmt\\dh_kmgmt.c",0x27b);
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x00bc09d0(param_2,"properties");
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 4) {
      return 0;
    }
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x3c),"providers\\implementations\\keymgmt\\dh_kmgmt.c",
                 0x283);
    iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),
                            "providers\\implementations\\keymgmt\\dh_kmgmt.c",0x284);
    *(int *)(param_1 + 0x3c) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x00bc09d0(param_2,"safeprime-generator");
  if (iVar2 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\dh_kmgmt.c",0x28c,"dhx_gen_set_params");
    func_0x00bc5160(0x39,0x8010c,0);
    return 0;
  }
  return 1;
}



undefined * FUN_00cad350(void)

{
  return &DAT_010579a8;
}



void FUN_00cad660(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000060;
  
  func_0x00e87f70();
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = func_0x00bb6b70(in_stack_00000060);
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
  in_stack_00000034 = 0;
  in_stack_00000038 = 0;
  in_stack_0000003c = 0;
  in_stack_00000040 = 0;
  in_stack_00000044 = 0;
  in_stack_00000048 = 0;
  in_stack_0000004c = 0;
  puVar2 = (undefined4 *)func_0x00bbfa40(&stack0x00000000,"potential",&stack0x00000058);
  in_stack_00000014 = *puVar2;
  in_stack_00000018 = puVar2[1];
  in_stack_0000001c = puVar2[2];
  in_stack_00000020 = puVar2[3];
  in_stack_00000024 = puVar2[4];
  puVar2 = (undefined4 *)func_0x00bbfa40(&stack0x00000000,"iteration",&stack0x0000005c);
  in_stack_00000028 = *puVar2;
  in_stack_0000002c = puVar2[1];
  in_stack_00000030 = puVar2[2];
  in_stack_00000034 = puVar2[3];
  in_stack_00000038 = puVar2[4];
  (**(code **)(iVar1 + 0x40))(&stack0x00000014,*(undefined4 *)(iVar1 + 0x44));
  FUN_008ab370();
  return;
}



void FUN_00cad760(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = func_0x00bc3c60(param_1);
  func_0x00c0fde0(0,uVar2);
  return;
}



void thunk_FUN_00c0fc00(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x50);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      if ((*(int *)(param_1 + 0x5c) != 0) &&
         (pcVar3 = *(code **)(*(int *)(param_1 + 0x5c) + 0x1c), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      func_0x00bc67c0(*(undefined4 *)(param_1 + 0x60));
      func_0x00bca230(7,param_1,param_1 + 0x54);
      func_0x00bbb370(*(undefined4 *)(param_1 + 100));
      func_0x00c4dfb0(param_1 + 8);
      FUN_00bba080(*(undefined4 *)(param_1 + 0x40));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x44));
      FUN_00bbc580(param_1,"crypto\\dsa\\dsa_lib.c",0xf2);
    }
  }
  return;
}



undefined4 * FUN_00cad790(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && ((param_2 & 7) != 0)) {
    puVar3 = (undefined4 *)
             FUN_00bbc830(0x3c,"providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x1a1);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[2] = param_2;
      *puVar3 = uVar1;
      puVar3[3] = 0x800;
      puVar3[4] = 0xe0;
      puVar3[8] = 2;
      puVar3[7] = 0xffffffff;
      puVar3[9] = 0xffffffff;
      puVar3[10] = 0;
    }
    iVar2 = FUN_00cad830(puVar3,param_3);
    if (iVar2 == 0) {
      FUN_00bbc580(puVar3,"providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x1b1);
      puVar3 = (undefined4 *)0x0;
    }
    return puVar3;
  }
  return (undefined4 *)0x0;
}



bool FUN_00cad830(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 != 0) {
    iVar3 = func_0x00bc09d0(param_2,&DAT_0113c5f4);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) == 4) {
        uVar1 = *(undefined4 *)(iVar3 + 8);
        uVar4 = 0;
        do {
          iVar3 = func_0x00bbbfe0((&PTR_s_default_01097ed8)[uVar4 * 2],uVar1);
          if (iVar3 == 0) {
            if ((&DAT_01097edc)[uVar4 * 2] != -1) {
              *(undefined4 *)(param_1 + 0x20) = (&DAT_01097edc)[uVar4 * 2];
              goto LAB_00cad8ca;
            }
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x1e4,"dsa_gen_set_params")
      ;
      func_0x00bc5160(0x39,0x80106,0);
      return false;
    }
LAB_00cad8ca:
    iVar3 = func_0x00bc09d0(param_2,"gindex");
    if ((iVar3 != 0) && (iVar3 = func_0x00bbfcd0(iVar3,param_1 + 0x1c), iVar3 == 0)) {
      return false;
    }
    iVar3 = func_0x00bc09d0(param_2,"pcounter");
    if ((iVar3 != 0) && (iVar3 = func_0x00bbfcd0(iVar3,param_1 + 0x24), iVar3 == 0)) {
      return false;
    }
    iVar3 = func_0x00bc09d0(param_2,"hindex");
    if ((iVar3 != 0) && (iVar3 = func_0x00bbfcd0(iVar3,param_1 + 0x28), iVar3 == 0)) {
      return false;
    }
    iVar3 = func_0x00bc09d0(param_2,&DAT_01056c84);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) != 5) {
        return false;
      }
      iVar2 = *(int *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 8);
      FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   "providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x1c5);
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if ((iVar3 != 0) && (iVar2 != 0)) {
        iVar3 = func_0x00bbbc30(iVar3,iVar2,"providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x1c9
                               );
        *(int *)(param_1 + 0x14) = iVar3;
        if (iVar3 == 0) {
          return false;
        }
        *(int *)(param_1 + 0x18) = iVar2;
      }
    }
    iVar3 = func_0x00bc09d0(param_2,"pbits");
    if ((iVar3 != 0) && (iVar3 = func_0x00bc0300(iVar3,param_1 + 0xc), iVar3 == 0)) {
      return false;
    }
    iVar3 = func_0x00bc09d0(param_2,"qbits");
    if ((iVar3 != 0) && (iVar3 = func_0x00bc0300(iVar3,param_1 + 0x10), iVar3 == 0)) {
      return false;
    }
    iVar3 = func_0x00bc09d0(param_2,"digest");
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) != 4) {
        return false;
      }
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x2c),
                   "providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x20b);
      iVar3 = func_0x00bbbc70(*(undefined4 *)(iVar3 + 8),
                              "providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x20c);
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 == 0) {
        return false;
      }
    }
    iVar3 = func_0x00bc09d0(param_2,"properties");
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 4) != 4) {
        return false;
      }
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x30),
                   "providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x214);
      iVar3 = func_0x00bbbc70(*(undefined4 *)(iVar3 + 8),
                              "providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x215);
      *(int *)(param_1 + 0x30) = iVar3;
      return iVar3 != 0;
    }
  }
  return true;
}



undefined ** FUN_00cadab0(void)

{
  return &PTR_DAT_012b7148;
}



bool FUN_00cadac0(int param_1)

{
  return param_1 != 0;
}



undefined * FUN_00cadad0(void)

{
  return &DAT_010981ec;
}



int FUN_00cadae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_0058e2e0();
  if (((iVar2 == 0) || (param_1 == (undefined4 *)0x0)) ||
     (iVar2 = func_0x00c0fff0(*param_1), iVar2 == 0)) {
    return 0;
  }
  uVar1 = param_1[8];
  bVar6 = uVar1 == 2;
  if (bVar6) {
    uVar1 = (uint)((uint)param_1[3] < 0x800);
    param_1[8] = uVar1;
    bVar6 = uVar1 == 2;
  }
  if (1 < uVar1 && !bVar6) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x278,"dsa_gen");
    func_0x00bc5160(0x39,0xc0103,"gen_type set to unsupported value %d",param_1[8]);
    return 0;
  }
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  iVar3 = func_0x00bb9ee0();
  if (iVar3 != 0) {
    func_0x00bb9f00(iVar3,FUN_00cae250,param_1);
  }
  piVar4 = (int *)func_0x009b10a0(iVar2);
  if (((param_1[1] == 0) || (iVar5 = func_0x00c4e070(piVar4,param_1[1]), iVar5 != 0)) &&
     ((param_1[5] == 0 || (iVar5 = func_0x00c4e530(piVar4,param_1[5],param_1[6]), iVar5 != 0)))) {
    if (param_1[7] == -1) {
      if (param_1[10] != 0) {
        func_0x00bda210(piVar4,param_1[10]);
      }
    }
    else {
      func_0x00c4e520(piVar4,param_1[7]);
      if (param_1[9] != -1) {
        func_0x00c12a40(piVar4,param_1[9]);
      }
    }
    if (param_1[0xb] != 0) {
      func_0x00c4e7e0(piVar4,param_1[0xb],param_1[0xc]);
    }
    if ((((*(byte *)(param_1 + 2) & 4) == 0) ||
        (iVar5 = func_0x00ce9ab0(iVar2,param_1[8],param_1[3],param_1[4],iVar3), 0 < iVar5)) &&
       ((func_0x00c4e210(piVar4,4,param_1[8] == 1), (*(byte *)(param_1 + 2) & 3) == 0 ||
        ((((*piVar4 != 0 && (piVar4[1] != 0)) && (piVar4[2] != 0)) &&
         (iVar5 = func_0x00c77680(iVar2), 0 < iVar5)))))) goto LAB_00cadc66;
  }
  FUN_00c0fc00(iVar2);
  iVar2 = 0;
LAB_00cadc66:
  func_0x00bb9ec0(iVar3);
  return iVar2;
}



void FUN_00cadc80(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x2c),"providers\\implementations\\keymgmt\\dsa_kmgmt.c",
                 0x2b8);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x30),"providers\\implementations\\keymgmt\\dsa_kmgmt.c",
                 0x2b9);
    FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 "providers\\implementations\\keymgmt\\dsa_kmgmt.c",0x2ba);
    FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\dsa_kmgmt.c",699);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00cade06)

undefined4 FUN_00cadce0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  func_0x00e87f70();
  uVar1 = param_3;
  iVar2 = func_0x00bc09d0(param_3,&DAT_01040544);
  iVar4 = param_2;
  if (iVar2 != 0) {
    uVar3 = func_0x00c0f7a0(param_2);
    iVar2 = func_0x00bc0c00(iVar2,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x00bc09d0(uVar1,"security-bits");
  if (iVar2 != 0) {
    uVar3 = func_0x00c0fce0(iVar4);
    iVar2 = func_0x00bc0c00(iVar2,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x00bc09d0(uVar1,"max-size");
  if (iVar2 != 0) {
    uVar3 = func_0x00c42bb0(iVar4);
    iVar2 = func_0x00bc0c00(iVar2,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = func_0x00bc09d0(uVar1,"default-digest");
  if ((iVar2 == 0) || (iVar2 = func_0x00bc12f0(iVar2,"SHA256"), iVar2 != 0)) {
    uVar3 = func_0x009b10a0(iVar4,0,uVar1);
    iVar2 = func_0x00c4e610(uVar3);
    if (((iVar2 != 0) && (param_2 = 0, iVar4 != 0)) &&
       ((func_0x00c0fc80(iVar4,&stack0x00000000,&param_2), param_2 == 0 ||
        (iVar4 = func_0x00c665f0(0,uVar1,&DAT_01057a10,param_2), iVar4 != 0)))) {
      return 1;
    }
  }
  return 0;
}



undefined ** FUN_00cade30(void)

{
  return &PTR_DAT_010980c0;
}



bool FUN_00cade40(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return false;
  }
  if ((param_2 & 7) == 0) {
    return true;
  }
  if ((param_2 & 2) != 0) {
    iVar1 = func_0x00bc42d0(param_1);
    bVar2 = iVar1 != 0;
  }
  if ((param_2 & 1) != 0) {
    if ((bVar2 == false) || (iVar1 = func_0x00bc3bb0(param_1), iVar1 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if ((param_2 & 4) != 0) {
    if (((bVar2 != false) && (iVar1 = FUN_00bc39e0(param_1), iVar1 != 0)) &&
       (iVar1 = func_0x00baf190(param_1), iVar1 != 0)) {
      return true;
    }
    bVar2 = false;
  }
  return bVar2;
}



bool FUN_00caded0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  func_0x00e87f70();
  bVar6 = true;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return false;
  }
  if ((param_4 & 3) == 0) goto LAB_00cadf90;
  bVar1 = false;
  if ((param_4 & 2) == 0) {
LAB_00cadf41:
    if ((param_4 & 1) != 0) {
      iVar2 = func_0x00bc3bb0(param_2);
      iVar3 = func_0x00bc3bb0(param_3);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        iVar2 = func_0x00bba0f0(iVar2,iVar3);
        bVar6 = iVar2 == 0;
        bVar1 = true;
      }
    }
  }
  else {
    iVar2 = func_0x00bc42d0(param_2);
    iVar3 = func_0x00bc42d0(param_3);
    if ((iVar2 == 0) || (iVar3 == 0)) goto LAB_00cadf41;
    bVar1 = true;
    iVar2 = func_0x00bba0f0(iVar2,iVar3);
    bVar6 = iVar2 == 0;
  }
  if ((bVar6 == false) || (!bVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
LAB_00cadf90:
  if ((param_4 & 4) != 0) {
    uVar4 = func_0x009b10a0(param_2);
    uVar5 = func_0x009b10a0(param_3);
    if ((bVar6 != false) && (iVar2 = func_0x00c4e010(uVar4,uVar5,1), iVar2 != 0)) {
      return true;
    }
    bVar6 = false;
  }
  return bVar6;
}



bool FUN_00cadfe0(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  func_0x00e87f70();
  bVar4 = true;
  iVar2 = FUN_0058e2e0();
  uVar1 = param_3;
  iVar3 = param_2;
  if (iVar2 == 0) {
    return false;
  }
  if ((param_3 & 7) == 0) {
    return true;
  }
  if ((param_3 & 4) != 0) {
    param_2 = 0;
    iVar2 = func_0x00ce9c40(iVar3,param_4,&param_2);
    bVar4 = iVar2 != 0;
  }
  if ((uVar1 & 2) != 0) {
    if (bVar4 != false) {
      param_2 = 0;
      func_0x00c0fc80(iVar3,&param_2,0);
      if ((param_2 != 0) && (iVar2 = func_0x00ce9cd0(iVar3,param_2,&stack0x00000000), iVar2 != 0)) {
        bVar4 = true;
        goto LAB_00cae081;
      }
    }
    bVar4 = false;
  }
LAB_00cae081:
  if ((uVar1 & 1) != 0) {
    if (bVar4 != false) {
      param_2 = 0;
      func_0x00c0fc80(iVar3,0,&param_2);
      if ((param_2 != 0) && (iVar2 = func_0x00ce9c90(iVar3,param_2,&stack0x00000000), iVar2 != 0)) {
        bVar4 = true;
        goto LAB_00cae0ce;
      }
    }
    bVar4 = false;
  }
LAB_00cae0ce:
  if (((byte)uVar1 & 3) == 3) {
    if ((bVar4 != false) && (iVar3 = func_0x00ce9ba0(iVar3), iVar3 != 0)) {
      return true;
    }
    bVar4 = false;
  }
  return bVar4;
}



bool FUN_00cae100(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 7) != 0)) {
    iVar1 = func_0x00c0ffd0(param_1,param_3);
    if ((param_2 & 3) == 0) {
      return iVar1 != 0;
    }
    if ((iVar1 != 0) && (iVar1 = func_0x00c1a790(param_1,param_3,param_2 & 1), iVar1 != 0)) {
      return true;
    }
  }
  return false;
}



undefined4 FUN_00cae160(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((param_1 & 0x84) != 0);
  uVar1 = uVar2 + 2;
  if ((param_1 & 3) == 0) {
    uVar1 = uVar2;
  }
  return *(undefined4 *)(&DAT_012b7138 + uVar1 * 4);
}



undefined4 FUN_00cae180(int param_1,uint param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 == 0) || (param_1 == 0)) || ((param_2 & 7) == 0)) {
    return 0;
  }
  iVar1 = func_0x00c4eb60();
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 & 0x84) != 0) {
    uVar2 = func_0x009b10a0(param_1,iVar1,0);
    iVar3 = func_0x00c4e610(uVar2);
    if (iVar3 == 0) goto LAB_00cae227;
  }
  if ((((param_2 & 3) == 0) || (iVar3 = func_0x00cae350(param_1,iVar1,0,param_2 & 1), iVar3 != 0))
     && (iVar3 = func_0x00c4ed60(iVar1), iVar3 != 0)) {
    uVar2 = (*param_3)(iVar3,param_4);
    func_0x00c44dd0(iVar3);
    func_0x00c4eb30(iVar1);
    return uVar2;
  }
LAB_00cae227:
  func_0x00c4eb30(iVar1);
  return 0;
}



int FUN_00cae240(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar2 = func_0x00c0fcb0(param_1);
    iVar1 = func_0x00c416b0();
    if ((iVar2 == iVar1) && (iVar2 = func_0x00c0fff0(*(undefined4 *)(param_1 + 0x68)), iVar2 != 0))
    {
      uVar3 = param_2 & 4;
      if ((uVar3 == 0) || (iVar1 = func_0x00c4e070(iVar2 + 8,param_1 + 8), iVar1 != 0)) {
        *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
        if ((param_2 & 2) != 0) {
          if (uVar3 == 0) goto LAB_00c1a56d;
          if (*(int *)(param_1 + 0x40) != 0) {
            iVar1 = func_0x00bba340(*(int *)(param_1 + 0x40));
            *(int *)(iVar2 + 0x40) = iVar1;
            if (iVar1 == 0) goto LAB_00c1a56d;
          }
        }
        if ((param_2 & 1) != 0) {
          if (uVar3 == 0) goto LAB_00c1a56d;
          if (*(int *)(param_1 + 0x44) != 0) {
            iVar1 = func_0x00bba340(*(int *)(param_1 + 0x44));
            *(int *)(iVar2 + 0x44) = iVar1;
            if (iVar1 == 0) goto LAB_00c1a56d;
          }
        }
        iVar1 = func_0x00bc9ff0(7,iVar2 + 0x54,param_1 + 0x54);
        if (iVar1 != 0) {
          return iVar2;
        }
      }
LAB_00c1a56d:
      FUN_00c0fc00(iVar2);
      return 0;
    }
  }
  return 0;
}



void FUN_00cae250(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000060;
  
  func_0x00e87f70();
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = func_0x00bb6b70(in_stack_00000060);
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
  in_stack_00000034 = 0;
  in_stack_00000038 = 0;
  in_stack_0000003c = 0;
  in_stack_00000040 = 0;
  in_stack_00000044 = 0;
  in_stack_00000048 = 0;
  in_stack_0000004c = 0;
  puVar2 = (undefined4 *)func_0x00bbfa40(&stack0x00000000,"potential",&stack0x00000058);
  in_stack_00000014 = *puVar2;
  in_stack_00000018 = puVar2[1];
  in_stack_0000001c = puVar2[2];
  in_stack_00000020 = puVar2[3];
  in_stack_00000024 = puVar2[4];
  puVar2 = (undefined4 *)func_0x00bbfa40(&stack0x00000000,"iteration",&stack0x0000005c);
  in_stack_00000028 = *puVar2;
  in_stack_0000002c = puVar2[1];
  in_stack_00000030 = puVar2[2];
  in_stack_00000034 = puVar2[3];
  in_stack_00000038 = puVar2[4];
  (**(code **)(iVar1 + 0x34))(&stack0x00000014,*(undefined4 *)(iVar1 + 0x38));
  FUN_008ab370();
  return;
}



int FUN_00cae3f0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_0x00bb6b90(uVar1);
  if (iVar2 != 0) {
    func_0x00bb6030(iVar2,0xf000);
    func_0x00bb6550(iVar2,0);
  }
  return iVar2;
}



int FUN_00cae440(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = func_0x00bb6b90(uVar1);
  if (iVar2 != 0) {
    func_0x00bb6030(iVar2,0xf000);
    func_0x00bb6550(iVar2,0x1000);
  }
  return iVar2;
}



void FUN_00cae490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00caed50(param_1,param_2,0,param_3);
  return;
}



void FUN_00cae4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00caed50(param_1,param_2,0x1000,param_3);
  return;
}



bool FUN_00cae4d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,&DAT_01040544);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,param_1 + 3);
      if (iVar1 == 0) {
        return false;
      }
      if ((uint)param_1[3] < 0x200) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\keymgmt\\rsa_kmgmt.c",0x203,
                        "rsa_gen_set_params");
        func_0x00bc5160(0x39,0xab,0);
        return false;
      }
    }
    iVar1 = func_0x00bc09d0(param_2,"primes");
    if ((iVar1 != 0) && (iVar1 = func_0x00bc0300(iVar1,param_1 + 5), iVar1 == 0)) {
      return false;
    }
    iVar1 = func_0x00bc09d0(param_2,&DAT_01059c50);
    if ((iVar1 != 0) && (iVar1 = func_0x00bbfbe0(iVar1,param_1 + 4), iVar1 == 0)) {
      return false;
    }
    if (param_1[2] == 0x1000) {
      iVar1 = func_0x00caeed0(param_1 + 6,param_1 + 0xb,param_2,0x1000,*param_1);
      return iVar1 != 0;
    }
  }
  return true;
}



undefined ** FUN_00cae5c0(void)

{
  return &PTR_DAT_012b7210;
}



undefined ** FUN_00cae5d0(void)

{
  return &PTR_DAT_012b7260;
}



int FUN_00cae5e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = 0;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if (param_2[2] == 0) {
      iVar1 = func_0x00c66c50(param_2 + 6);
      if (iVar1 == 0) goto LAB_00cae6c5;
    }
    else if (param_2[2] != 0x1000) {
      return 0;
    }
    iVar1 = func_0x00bb6b90(*param_2);
    if (iVar1 != 0) {
      param_2[0xc] = param_3;
      param_2[0xd] = param_4;
      iVar4 = func_0x00bb9ee0();
      if (iVar4 != 0) {
        func_0x00bb9f00(iVar4,FUN_00caef20,param_2);
      }
      iVar2 = func_0x00c67380(iVar1,param_2[3],param_2[5],param_2[4],iVar4);
      iVar5 = iVar1;
      if (iVar2 != 0) {
        uVar3 = func_0x00bb6b80(iVar1,param_2 + 6);
        iVar2 = func_0x00c66c10(uVar3);
        if (iVar2 != 0) {
          func_0x00bb6030(iVar1,0xf000);
          func_0x00bb6550(iVar1,param_2[2]);
          iVar5 = 0;
          iVar6 = iVar1;
        }
      }
LAB_00cae6c5:
      func_0x00bb9ec0(iVar4);
      FUN_00bb6040(iVar5);
      return iVar6;
    }
  }
  return 0;
}



void FUN_00cae6f0(int param_1)

{
  if (param_1 != 0) {
    FUN_00bba080(*(undefined4 *)(param_1 + 0x10));
    FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\rsa_kmgmt.c",0x28a);
  }
  return;
}



undefined4 FUN_00cae720(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (param_2 == 4)) {
    uVar1 = *param_1;
    iVar2 = func_0x00bb6560(uVar1,0xf000);
    if (iVar2 != 0) {
      return 0;
    }
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00cae760(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (param_2 == 4)) {
    uVar1 = *param_1;
    iVar2 = func_0x00bb6560(uVar1,0xf000);
    if (iVar2 != 0x1000) {
      return 0;
    }
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}



void thunk_FUN_00bb6040(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x58);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      if ((*(int *)(param_1 + 0xc) != 0) &&
         (pcVar3 = *(code **)(*(int *)(param_1 + 0xc) + 0x20), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      func_0x00bc67c0(*(undefined4 *)(param_1 + 0x10));
      func_0x00bca230(9,param_1,param_1 + 0x50);
      func_0x00bbb370(*(undefined4 *)(param_1 + 0x74));
      FUN_00bba400(*(undefined4 *)(param_1 + 0x14));
      FUN_00bba400(*(undefined4 *)(param_1 + 0x18));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x1c));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x20));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x24));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x28));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x2c));
      FUN_00bba080(*(undefined4 *)(param_1 + 0x30));
      func_0x00bec6a0(*(undefined4 *)(param_1 + 0x48));
      func_0x00bd1860(*(undefined4 *)(param_1 + 0x4c),FUN_00bee3f0);
      func_0x00bea5d0(*(undefined4 *)(param_1 + 0x6c));
      func_0x00bea5d0(*(undefined4 *)(param_1 + 0x70));
      FUN_00bbc580(param_1,"crypto\\rsa\\rsa_lib.c",0xba);
    }
  }
  return;
}



undefined4 FUN_00cae7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  uVar1 = func_0x00bb6b80(param_2);
  iVar2 = func_0x00bb6560(param_2,0xf000);
  iVar3 = FUN_00baaa40(param_2);
  iVar4 = func_0x00bc09d0(param_3,&DAT_01040544);
  if (iVar4 != 0) {
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = func_0x00bb7500(param_2);
    iVar4 = func_0x00bc0c00(iVar4,uVar5);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = func_0x00bc09d0(param_3,"security-bits");
  if (iVar4 != 0) {
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = func_0x00bb6360(param_2);
    iVar4 = func_0x00bc0c00(iVar4,uVar5);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = func_0x00bc09d0(param_3,"max-size");
  if (iVar4 != 0) {
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = func_0x00bb77a0(param_2);
    iVar3 = func_0x00bc0c00(iVar4,uVar5);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = func_0x00bc09d0(param_3,"default-digest");
  if ((iVar3 != 0) &&
     (((iVar2 != 0x1000 || (iVar4 = func_0x00c66c50(uVar1), iVar4 != 0)) &&
      (iVar3 = func_0x00bc12f0(iVar3,"SHA256"), iVar3 == 0)))) {
    return 0;
  }
  iVar3 = func_0x00bc09d0(param_3,"mandatory-digest");
  if (iVar3 == 0) {
    if (iVar2 != 0x1000) goto LAB_00cae93b;
  }
  else {
    if (iVar2 != 0x1000) goto LAB_00cae93b;
    iVar2 = func_0x00c66c50(uVar1);
    if (iVar2 == 0) {
      uVar5 = func_0x00c66c30(uVar1);
      iVar2 = func_0x00c67360(uVar5);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = func_0x00bc12f0(iVar3,iVar2);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  iVar2 = func_0x00c1cae0(uVar1,0,param_3);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00cae93b:
  iVar2 = func_0x00c1cc20(param_2,0,param_3,1);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



undefined ** FUN_00cae960(void)

{
  return &PTR_DAT_01098620;
}



bool FUN_00cae970(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 == 0) {
    return false;
  }
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if ((param_2 & 0x83) == 0) {
      return true;
    }
    if ((param_2 & 3) != 0) {
      iVar1 = FUN_00baaa40(param_1);
      bVar2 = iVar1 != 0;
    }
    if ((param_2 & 2) != 0) {
      if ((bVar2 == false) || (iVar1 = func_0x00bb6160(param_1), iVar1 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    if ((param_2 & 1) != 0) {
      if ((bVar2 != false) && (iVar1 = func_0x00bb6140(param_1), iVar1 != 0)) {
        return true;
      }
      bVar2 = false;
    }
    return bVar2;
  }
  return false;
}



bool FUN_00caea00(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  func_0x00e87f70();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return false;
  }
  uVar3 = func_0x00bb6160(param_3);
  uVar3 = func_0x00bb6160(param_2,uVar3);
  iVar2 = func_0x00bba0f0(uVar3);
  bVar6 = iVar2 == 0;
  if ((param_4 & 3) == 0) {
    return bVar6;
  }
  bVar1 = false;
  if ((param_4 & 2) == 0) {
LAB_00caea89:
    if ((param_4 & 1) == 0) goto LAB_00caeaca;
    iVar4 = func_0x00bb6140(param_2);
    iVar5 = func_0x00bb6140(param_3);
    if ((iVar4 == 0) || (iVar5 == 0)) goto LAB_00caeaca;
    if (bVar6) goto LAB_00caeab2;
    goto LAB_00caeac3;
  }
  iVar4 = FUN_00baaa40(param_2);
  iVar5 = FUN_00baaa40(param_3);
  if ((iVar4 == 0) || (iVar5 == 0)) goto LAB_00caea89;
  if (iVar2 == 0) {
LAB_00caeab2:
    iVar2 = func_0x00bba0f0(iVar4,iVar5);
    if (iVar2 != 0) goto LAB_00caeac3;
    bVar6 = true;
  }
  else {
LAB_00caeac3:
    bVar6 = false;
  }
  bVar1 = true;
LAB_00caeaca:
  if ((bVar6) && (bVar1)) {
    return true;
  }
  return false;
}



bool FUN_00caeaf0(undefined4 param_1,byte param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x83) != 0) {
    if ((param_2 & 3) == 3) {
      iVar1 = func_0x00bb96f0(param_1);
      return iVar1 != 0;
    }
    if ((param_2 & 1) != 0) {
      iVar1 = func_0x00bb9710(param_1);
      bVar2 = iVar1 != 0;
    }
    if ((param_2 & 2) != 0) {
      if (bVar2 != false) {
        iVar1 = func_0x00bb9720(param_1);
        if (iVar1 != 0) {
          return true;
        }
      }
      bVar2 = false;
    }
  }
  return bVar2;
}



bool FUN_00caeb70(undefined4 param_1,int param_2,byte param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  func_0x00e87f70();
  bVar4 = true;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_2 != 0)) {
    if ((param_3 & 0x83) != 0) {
      uVar2 = func_0x00bb6560(param_2,0xf000);
      if ((char)param_3 < '\0') {
        uVar3 = func_0x00bb6b70(param_2);
        uVar2 = func_0x00bb6b80(param_2,&stack0x00000000,param_4,uVar2,uVar3);
        iVar1 = func_0x00caeed0(uVar2);
        bVar4 = iVar1 != 0;
      }
      if ((param_3 & 3) != 0) {
        if (bVar4 != false) {
          iVar1 = func_0x00c1be50(param_2,param_4,param_3 & 1);
          if (iVar1 != 0) {
            return true;
          }
        }
        bVar4 = false;
      }
      return bVar4;
    }
  }
  return false;
}



undefined ** FUN_00caec30(byte param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_01098388;
  if ((param_1 & 3) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



undefined4 FUN_00caec50(int param_1,byte param_2,code *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bb6b80(param_1);
  iVar2 = FUN_0058e2e0();
  if (((iVar2 == 0) || (param_1 == 0)) || ((param_2 & 0x83) == 0)) {
    return 0;
  }
  iVar2 = func_0x00c4eb60();
  if (iVar2 == 0) {
    return 0;
  }
  if (((((-1 < (char)param_2) || (iVar3 = func_0x00c66c50(uVar1), iVar3 != 0)) ||
       (iVar3 = func_0x00c1cae0(uVar1,iVar2,0), iVar3 != 0)) &&
      (((param_2 & 3) == 0 || (iVar3 = func_0x00c1cc20(param_1,iVar2,0,param_2 & 1), iVar3 != 0))))
     && (iVar3 = func_0x00c4ed60(iVar2), iVar3 != 0)) {
    uVar1 = (*param_3)(iVar3,param_4);
    func_0x00c44dd0(iVar3);
    func_0x00c4eb30(iVar2);
    return uVar1;
  }
  func_0x00c4eb30(iVar2);
  return 0;
}



undefined1 * FUN_00caed20(void)

{
  return &DAT_01040474;
}



int FUN_00caed30(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = FUN_0058e2e0();
  if ((iVar9 == 0) || ((param_2 & 3) == 0)) {
    return 0;
  }
  func_0x00e87f70();
  if (*(int *)(param_2 + 0x10) != 0) {
    return 0;
  }
  iVar9 = func_0x00bb6310(param_2);
  iVar3 = func_0x00bec1c0();
  if (iVar9 != iVar3) {
    return 0;
  }
  iVar9 = func_0x00bb6b90(*(undefined4 *)(param_2 + 4));
  if (iVar9 == 0) {
    return 0;
  }
  if ((param_3 & 3) != 0) {
    if (*(int *)(param_2 + 0x14) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x14));
      *(int *)(iVar9 + 0x14) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x18));
      *(int *)(iVar9 + 0x18) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
  }
  if ((param_3 & 1) != 0) {
    if (*(int *)(param_2 + 0x1c) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x1c));
      *(int *)(iVar9 + 0x1c) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
    if (*(int *)(param_2 + 0x20) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x20));
      *(int *)(iVar9 + 0x20) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x24));
      *(int *)(iVar9 + 0x24) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x28));
      *(int *)(iVar9 + 0x28) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
    if (*(int *)(param_2 + 0x2c) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x2c));
      *(int *)(iVar9 + 0x2c) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
    if (*(int *)(param_2 + 0x30) != 0) {
      iVar3 = func_0x00bba340(*(int *)(param_2 + 0x30));
      *(int *)(iVar9 + 0x30) = iVar3;
      if (iVar3 == 0) goto LAB_00c1be27;
    }
  }
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar9 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(iVar9 + 0x38) = uVar8;
  *(undefined4 *)(iVar9 + 0x3c) = uVar1;
  *(undefined4 *)(iVar9 + 0x40) = uVar2;
  *(undefined4 *)(iVar9 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  if (((param_3 & 1) != 0) && (iVar3 = func_0x00bd1830(*(undefined4 *)(param_2 + 0x4c)), 0 < iVar3))
  {
    iVar4 = func_0x00bd17c0(0,iVar3);
    *(int *)(iVar9 + 0x4c) = iVar4;
    if (iVar4 == 0) goto LAB_00c1be27;
    iVar4 = 0;
    do {
      piVar5 = (int *)FUN_00bbc830(0x14,"crypto\\rsa\\rsa_backend.c",0x210);
      if (piVar5 == (int *)0x0) goto LAB_00c1be27;
      func_0x00bd18c0(*(undefined4 *)(iVar9 + 0x4c),piVar5);
      piVar6 = (int *)func_0x00bd1a80(*(undefined4 *)(param_2 + 0x4c),iVar4);
      if (*piVar6 != 0) {
        iVar7 = func_0x00bba340(*piVar6);
        *piVar5 = iVar7;
        if (iVar7 == 0) goto LAB_00c1be27;
      }
      if (piVar6[1] != 0) {
        iVar7 = func_0x00bba340(piVar6[1]);
        piVar5[1] = iVar7;
        if (iVar7 == 0) goto LAB_00c1be27;
      }
      if (piVar6[2] != 0) {
        iVar7 = func_0x00bba340(piVar6[2]);
        piVar5[2] = iVar7;
        if (iVar7 == 0) goto LAB_00c1be27;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
    iVar3 = func_0x00bee2f0(iVar9);
    if (iVar3 == 0) goto LAB_00c1be27;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    iVar4 = func_0x00bec680(*(int *)(param_2 + 0x48));
    *(int *)(iVar9 + 0x48) = iVar4;
    iVar3 = *(int *)(*(int *)(param_2 + 0x48) + 4);
    if ((iVar3 != 0) && (*(int *)(iVar4 + 4) == 0)) {
      uVar8 = func_0x00bdbf80(iVar3);
      *(undefined4 *)(*(int *)(iVar9 + 0x48) + 0x10) = uVar8;
      if (*(int *)(*(int *)(iVar9 + 0x48) + 0x10) == 0) goto LAB_00c1be27;
    }
  }
  iVar3 = func_0x00bc9ff0(9,iVar9 + 0x50,param_2 + 0x50);
  if (iVar3 != 0) {
    return iVar9;
  }
LAB_00c1be27:
  FUN_00bb6040(iVar9);
  return 0;
}



void FUN_00caef20(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000060;
  
  func_0x00e87f70();
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = func_0x00bb6b70(in_stack_00000060);
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  in_stack_00000028 = 0;
  in_stack_0000002c = 0;
  in_stack_00000030 = 0;
  in_stack_00000034 = 0;
  in_stack_00000038 = 0;
  in_stack_0000003c = 0;
  in_stack_00000040 = 0;
  in_stack_00000044 = 0;
  in_stack_00000048 = 0;
  in_stack_0000004c = 0;
  puVar2 = (undefined4 *)func_0x00bbfa40(&stack0x00000000,"potential",&stack0x00000058);
  in_stack_00000014 = *puVar2;
  in_stack_00000018 = puVar2[1];
  in_stack_0000001c = puVar2[2];
  in_stack_00000020 = puVar2[3];
  in_stack_00000024 = puVar2[4];
  puVar2 = (undefined4 *)func_0x00bbfa40(&stack0x00000000,"iteration",&stack0x0000005c);
  in_stack_00000028 = *puVar2;
  in_stack_0000002c = puVar2[1];
  in_stack_00000030 = puVar2[2];
  in_stack_00000034 = puVar2[3];
  in_stack_00000038 = puVar2[4];
  (**(code **)(iVar1 + 0x30))(&stack0x00000014,*(undefined4 *)(iVar1 + 0x34));
  FUN_008ab370();
  return;
}



void FUN_00caf020(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = func_0x00bc3c60(param_1,0,0,0);
  func_0x00c154d0(uVar2);
  return;
}



void FUN_00caf050(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = func_0x00bc3c60(param_1,1,0,0);
  func_0x00c154d0(uVar2);
  return;
}



void FUN_00caf080(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = func_0x00bc3c60(param_1,2,0,0);
  func_0x00c154d0(uVar2);
  return;
}



void FUN_00caf0b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = func_0x00bc3c60(param_1,3,0,0);
  func_0x00c154d0(uVar2);
  return;
}



void FUN_00caf0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00caf850(param_1,param_2,param_3,0,&DAT_0105470c);
  return;
}



void FUN_00caf100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00caf850(param_1,param_2,param_3,1,&DAT_01054714);
  return;
}



void FUN_00caf120(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00caf850(param_1,param_2,param_3,2,0);
  return;
}



void FUN_00caf140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00caf850(param_1,param_2,param_3,3,0);
  return;
}



void FUN_00caf160(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  func_0x00caf6d0(param_1);
  return;
}



void FUN_00caf180(int param_1)

{
  FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               "providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x34e);
  FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x34f
              );
  FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x350);
  return;
}



bool FUN_00caf1d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return false;
  }
  iVar2 = func_0x00bc09d0(param_2,"group");
  if (iVar2 != 0) {
    pcVar3 = (char *)0x0;
    if (*(int *)(param_1 + 8) == 0) {
      pcVar3 = "x25519";
    }
    else if (*(int *)(param_1 + 8) == 1) {
      pcVar3 = "x448";
    }
    if (((*(int *)(iVar2 + 4) != 4) || (pcVar3 == (char *)0x0)) ||
       (iVar2 = func_0x00bbbfe0(*(undefined4 *)(iVar2 + 8),pcVar3), iVar2 != 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x23e,"ecx_gen_set_params")
      ;
      func_0x00bc5160(0x39,0x80106,0);
      return false;
    }
  }
  iVar2 = func_0x00bc09d0(param_2,"properties");
  if (iVar2 == 0) {
LAB_00caf29d:
    iVar2 = func_0x00bc09d0(param_2,"dhkem-ikm");
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) && (*(int *)(iVar2 + 8) != 0)) {
      puVar1 = (undefined4 *)(param_1 + 0x10);
      FUN_00bbc580(*puVar1,"providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x24e);
      *puVar1 = 0;
      iVar2 = func_0x00bc01d0(iVar2,puVar1,0,param_1 + 0x14);
      return iVar2 != 0;
    }
    return true;
  }
  if (*(int *)(iVar2 + 4) == 4) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\keymgmt\\ecx_kmgmt.c",
                 0x246);
    iVar2 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 8),
                            "providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x247);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) goto LAB_00caf29d;
  }
  return false;
}



undefined ** FUN_00caf300(void)

{
  return &PTR_s_group_012b7318;
}



void FUN_00caf310(undefined4 param_1,undefined4 param_2)

{
  func_0x00caf9d0(param_1,param_2,0xfd,0x80,0x20);
  return;
}



void FUN_00caf330(undefined4 param_1,undefined4 param_2)

{
  func_0x00caf9d0(param_1,param_2,0x1c0,0xe0,0x38);
  return;
}



undefined4 FUN_00caf350(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00caf9d0(param_1,param_2,0x100,0x80,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x00bc09d0(param_2,"mandatory-digest");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc12f0(iVar1,&DAT_0112e1b4), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00caf3a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00caf9d0(param_1,param_2,0x1c8,0xe0,0x72);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x00bc09d0(param_2,"mandatory-digest");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc12f0(iVar1,&DAT_0112e1b4), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



undefined ** FUN_00caf3f0(void)

{
  return &PTR_DAT_01098c28;
}



undefined ** FUN_00caf400(void)

{
  return &PTR_DAT_01098cc8;
}



undefined4 thunk_FUN_00cafad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"encoded-pub-key");
    if (iVar1 != 0) {
      param_2 = param_1 + 0xc;
      if (*(int *)(iVar1 + 0xc) != *(int *)(param_1 + 0x4c)) {
        return 0;
      }
      iVar1 = func_0x00bc01d0(iVar1,&param_2,0x39,0);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   "providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x1a9);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    iVar2 = func_0x00bc09d0(iVar2,"properties");
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 4) {
        return 0;
      }
      iVar2 = *(int *)(iVar2 + 8);
      FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\keymgmt\\ecx_kmgmt.c",
                   399);
      *(undefined4 *)(param_1 + 4) = 0;
      if (iVar2 != 0) {
        iVar2 = func_0x00bbbc70(iVar2,"providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x192);
        *(int *)(param_1 + 4) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



undefined ** FUN_00caf420(void)

{
  return &PTR_s_encoded_pub_key_01098d40;
}



undefined * FUN_00caf430(void)

{
  return &DAT_01098d7c;
}



byte FUN_00caf440(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (param_1 != 0)) {
    bVar1 = 1;
    if ((param_2 & 2) != 0) {
      bVar1 = *(byte *)(param_1 + 8) & 1;
    }
    if ((param_2 & 1) == 0) {
      return bVar1;
    }
    if ((bVar1 != 0) && (*(int *)(param_1 + 0x48) != 0)) {
      return 1;
    }
  }
  return 0;
}



bool FUN_00caf480(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  bVar4 = true;
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return false;
  }
  if ((param_3 & 4) != 0) {
    bVar4 = *(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50);
  }
  if ((param_3 & 3) == 0) {
    return bVar4;
  }
  bVar1 = false;
  if ((param_3 & 2) == 0) {
LAB_00caf4f8:
    if (((param_3 & 1) == 0) ||
       ((iVar2 = *(int *)(param_1 + 0x48), iVar2 == 0 ||
        (iVar3 = *(int *)(param_2 + 0x48), iVar3 == 0)))) goto LAB_00caf539;
    if ((bVar4 != false) &&
       ((*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50) &&
        (iVar5 = *(int *)(param_1 + 0x4c), iVar5 == *(int *)(param_2 + 0x4c))))) goto LAB_00caf521;
    goto LAB_00caf532;
  }
  iVar2 = param_1 + 0xc;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    iVar2 = 0;
  }
  iVar3 = param_2 + 0xc;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    iVar3 = 0;
  }
  if ((iVar2 == 0) || (iVar3 == 0)) goto LAB_00caf4f8;
  if ((bVar4 == false) ||
     ((*(int *)(param_1 + 0x50) != *(int *)(param_2 + 0x50) ||
      (iVar5 = *(int *)(param_1 + 0x4c), iVar5 != *(int *)(param_2 + 0x4c))))) {
LAB_00caf532:
    bVar4 = false;
  }
  else {
LAB_00caf521:
    iVar2 = func_0x00401390(iVar2,iVar3,iVar5);
    if (iVar2 != 0) goto LAB_00caf532;
    bVar4 = true;
  }
  bVar1 = true;
LAB_00caf539:
  if ((bVar4 != false) && (bVar1)) {
    return true;
  }
  return false;
}



void FUN_00caf560(undefined4 param_1,undefined4 param_2)

{
  func_0x00cafbb0(param_1,param_2,0,0x20);
  return;
}



void FUN_00caf580(undefined4 param_1,undefined4 param_2)

{
  func_0x00cafbb0(param_1,param_2,1,0x38);
  return;
}



void FUN_00caf5a0(undefined4 param_1,undefined4 param_2)

{
  func_0x00cafbb0(param_1,param_2,2,0x20);
  return;
}



void FUN_00caf5c0(undefined4 param_1,undefined4 param_2)

{
  func_0x00cafbb0(param_1,param_2,3,0x39);
  return;
}



bool FUN_00caf5e0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 3) != 0)) {
    iVar1 = func_0x00c77f70(param_1,param_3,param_2 & 1);
    return iVar1 != 0;
  }
  return false;
}



undefined ** FUN_00caf620(byte param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_01098be8;
  if ((param_1 & 3) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



undefined4 FUN_00caf640(int param_1,uint param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 3) != 0)) {
    iVar1 = func_0x00c4eb60();
    if (iVar1 != 0) {
      iVar2 = func_0x00cafd50(param_1,iVar1,0,param_2 & 1);
      if (iVar2 != 0) {
        iVar2 = func_0x00c4ed60(iVar1);
        if (iVar2 != 0) {
          uVar3 = (*param_3)(iVar2,param_4);
          func_0x00c44dd0(iVar2);
        }
      }
      func_0x00c4eb30(iVar1);
      return uVar3;
    }
  }
  return 0;
}



undefined4 * FUN_00caf6c0(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = FUN_0058e2e0();
  if (iVar6 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)FUN_00bbc830(0x58,"crypto\\ec\\ecx_backend.c",0x6f);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar2 = *param_1;
  puVar5[2] = puVar5[2] & 0xfffffffe;
  *puVar5 = uVar2;
  puVar5[0x13] = param_1[0x13];
  puVar5[0x14] = param_1[0x14];
  puVar5[0x15] = 1;
  if (param_1[1] != 0) {
    iVar6 = func_0x00bbbc70(param_1[1],"crypto\\ec\\ecx_backend.c",0x7d);
    puVar5[1] = iVar6;
    if (iVar6 == 0) goto LAB_00c77ea5;
  }
  if (((param_2 & 2) != 0) && ((*(byte *)(param_1 + 2) & 1) != 0)) {
    uVar2 = param_1[4];
    uVar3 = param_1[5];
    uVar4 = param_1[6];
    puVar5[3] = param_1[3];
    puVar5[4] = uVar2;
    puVar5[5] = uVar3;
    puVar5[6] = uVar4;
    uVar2 = param_1[8];
    uVar3 = param_1[9];
    uVar4 = param_1[10];
    puVar5[7] = param_1[7];
    puVar5[8] = uVar2;
    puVar5[9] = uVar3;
    puVar5[10] = uVar4;
    uVar2 = param_1[0xc];
    uVar3 = param_1[0xd];
    uVar4 = param_1[0xe];
    puVar5[0xb] = param_1[0xb];
    puVar5[0xc] = uVar2;
    puVar5[0xd] = uVar3;
    puVar5[0xe] = uVar4;
    *(undefined8 *)(puVar5 + 0xf) = *(undefined8 *)(param_1 + 0xf);
    uVar1 = *(undefined1 *)(param_1 + 0x11);
    puVar5[2] = puVar5[2] | 1;
    *(undefined1 *)(puVar5 + 0x11) = uVar1;
  }
  if (((param_2 & 1) != 0) && (param_1[0x12] != 0)) {
    iVar6 = func_0x00c15460(puVar5);
    if (iVar6 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ecx_backend.c",0x8b,"ossl_ecx_key_dup");
      func_0x00bc5160(0x10,0x80010,0);
LAB_00c77ea5:
      FUN_00c15480(puVar5);
      return (undefined4 *)0x0;
    }
    memcpy((void *)puVar5[0x12],(void *)param_1[0x12],puVar5[0x13]);
  }
  return puVar5;
}



undefined4 FUN_00cafad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"encoded-pub-key");
    if (iVar1 != 0) {
      param_2 = param_1 + 0xc;
      if (*(int *)(iVar1 + 0xc) != *(int *)(param_1 + 0x4c)) {
        return 0;
      }
      iVar1 = func_0x00bc01d0(iVar1,&param_2,0x39,0);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   "providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x1a9);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    iVar2 = func_0x00bc09d0(iVar2,"properties");
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 4) != 4) {
        return 0;
      }
      iVar2 = *(int *)(iVar2 + 8);
      FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\keymgmt\\ecx_kmgmt.c",
                   399);
      *(undefined4 *)(param_1 + 4) = 0;
      if (iVar2 != 0) {
        iVar2 = func_0x00bbbc70(iVar2,"providers\\implementations\\keymgmt\\ecx_kmgmt.c",0x192);
        *(int *)(param_1 + 4) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}



void FUN_00cafdc0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = func_0x00bc3c60(param_1,0);
  func_0x00c12820(uVar2);
  return;
}



undefined4 * FUN_00cafdf0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && ((param_2 & 0x87) != 0)) {
    puVar3 = (undefined4 *)
             FUN_00bbc830(0x50,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x3f1);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      puVar3[0xf] = param_2;
      puVar3[0x10] = 0;
      iVar2 = FUN_00cafef0(puVar3,param_3);
      if (iVar2 == 0) {
        FUN_00bbc580(puVar3,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x3f7);
        puVar3 = (undefined4 *)0x0;
      }
    }
    return puVar3;
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_00cafe70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = func_0x00bb6310(param_2);
    if (iVar1 != 0) {
      iVar1 = func_0x00c10520(iVar1);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\keymgmt\\ec_kmgmt.c",0x418,"ec_gen_set_group");
        func_0x00bc5160(0x39,0xb0,0);
        return 0;
      }
      func_0x00c10570(*(undefined4 *)(param_1 + 0x44));
      *(int *)(param_1 + 0x44) = iVar1;
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cafef0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  uVar3 = 0;
  iVar1 = func_0x00bc09d0(param_3,"use-cofactor-flag");
  if ((iVar1 != 0) && (iVar1 = func_0x00bbfcd0(iVar1,param_2 + 0x40), iVar1 == 0))
  goto LAB_00cb030b;
  iVar1 = func_0x00bc09d0(param_3,"group");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 4) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 4),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x45f);
    iVar1 = func_0x00bbbc70(*(undefined4 *)(iVar1 + 8),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x45f);
    *(int *)(param_2 + 4) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"field-type");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 4) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 0x14),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x460);
    iVar1 = func_0x00bbbc70(*(undefined4 *)(iVar1 + 8),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x460);
    *(int *)(param_2 + 0x14) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"encoding");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 4) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 8),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x461);
    iVar1 = func_0x00bbbc70(*(undefined4 *)(iVar1 + 8),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x461);
    *(int *)(param_2 + 8) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"point-format");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 4) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 0xc),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x462);
    iVar1 = func_0x00bbbc70(*(undefined4 *)(iVar1 + 8),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x462);
    *(int *)(param_2 + 0xc) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"group-check");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 4) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 0x10),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x463);
    iVar1 = func_0x00bbbc70(*(undefined4 *)(iVar1 + 8),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x463);
    *(int *)(param_2 + 0x10) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,&DAT_01059c54);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar2 = func_0x00bba5e0();
      *(int *)(param_2 + 0x18) = iVar2;
      if (iVar2 == 0) goto LAB_00cb030b;
    }
    iVar1 = func_0x00bbfbe0(iVar1,(int *)(param_2 + 0x18));
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,&DAT_0119836c);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar2 = func_0x00bba5e0();
      *(int *)(param_2 + 0x1c) = iVar2;
      if (iVar2 == 0) goto LAB_00cb030b;
    }
    iVar1 = func_0x00bbfbe0(iVar1,(int *)(param_2 + 0x1c));
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,&DAT_01198370);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x20) == 0) {
      iVar2 = func_0x00bba5e0();
      *(int *)(param_2 + 0x20) = iVar2;
      if (iVar2 == 0) goto LAB_00cb030b;
    }
    iVar1 = func_0x00bbfbe0(iVar1,(int *)(param_2 + 0x20));
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"order");
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x24) == 0) {
      iVar2 = func_0x00bba5e0();
      *(int *)(param_2 + 0x24) = iVar2;
      if (iVar2 == 0) goto LAB_00cb030b;
    }
    iVar1 = func_0x00bbfbe0(iVar1,(int *)(param_2 + 0x24));
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"cofactor");
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar2 = func_0x00bba5e0();
      *(int *)(param_2 + 0x28) = iVar2;
      if (iVar2 == 0) goto LAB_00cb030b;
    }
    iVar1 = func_0x00bbfbe0(iVar1,(int *)(param_2 + 0x28));
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,&DAT_01056c84);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 5) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 0x30),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x46b);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = func_0x00bbbc30(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x46b);
    *(int *)(param_2 + 0x30) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"generator");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 5) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 0x2c),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x46d);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = func_0x00bbbc30(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x46d);
    *(int *)(param_2 + 0x2c) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  iVar1 = func_0x00bc09d0(param_3,"dhkem-ikm");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 5) goto LAB_00cb030b;
    FUN_00bbc580(*(undefined4 *)(param_2 + 0x48),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x470);
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = func_0x00bbbc30(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                            "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x470);
    *(int *)(param_2 + 0x48) = iVar1;
    if (iVar1 == 0) goto LAB_00cb030b;
  }
  uVar3 = 1;
LAB_00cb030b:
  func_0x00c10570(0);
  return uVar3;
}



undefined ** FUN_00cb0320(void)

{
  return &PTR_s_group_012b73a8;
}



undefined * FUN_00cb0330(void)

{
  return &DAT_01099fcc;
}



int FUN_00cb0340(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = func_0x00c12820(*param_1,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1[0x11] == 0) {
    iVar3 = func_0x00cb15e0(param_1);
    if (iVar3 == 0) goto LAB_00cb0378;
  }
  else {
    if (param_1[2] != 0) {
      iVar3 = func_0x00c1ac80(param_1[2]);
      if (iVar3 < 0) goto LAB_00cb0378;
      func_0x00bab690(param_1[0x11],iVar3);
    }
    if (param_1[3] != 0) {
      iVar3 = func_0x00c1b8c0(param_1[3]);
      if (iVar3 < 0) goto LAB_00cb0378;
      func_0x00baf690(param_1[0x11],iVar3);
    }
  }
  if (param_1[0x11] == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\ec_kmgmt.c",0x4f6,"ec_gen_assign_group");
    func_0x00bc5160(0x39,0xb1,0);
    bVar1 = false;
  }
  else {
    iVar3 = func_0x00c12a60(iVar2,param_1[0x11]);
    bVar1 = 0 < iVar3;
  }
  if ((*(byte *)(param_1 + 0xf) & 3) != 0) {
    if ((param_1[0x12] == 0) || (param_1[0x13] == 0)) {
      if (bVar1) {
        iVar3 = func_0x00c126f0(iVar2);
        goto LAB_00cb043e;
      }
    }
    else if (bVar1) {
      iVar3 = func_0x00c12fb0(iVar2,param_1[0x12],param_1[0x13]);
LAB_00cb043e:
      if (iVar3 != 0) {
        bVar1 = true;
        goto LAB_00cb044b;
      }
    }
    bVar1 = false;
  }
LAB_00cb044b:
  if (param_1[0x10] == -1) {
    iVar3 = param_1[4];
    if (!bVar1) goto LAB_00cb0378;
  }
  else {
    if ((!bVar1) || (iVar3 = func_0x00c1ba00(iVar2,param_1[0x10]), iVar3 == 0)) goto LAB_00cb0378;
    iVar3 = param_1[4];
  }
  if (iVar3 == 0) {
    return iVar2;
  }
  iVar3 = func_0x00c1b9a0(iVar2,iVar3);
  if (iVar3 != 0) {
    return iVar2;
  }
LAB_00cb0378:
  FUN_00c12650(iVar2);
  return 0;
}



void FUN_00cb04a0(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                 "providers\\implementations\\keymgmt\\ec_kmgmt.c",0x57f);
    func_0x00c10570(*(undefined4 *)(param_1 + 0x44));
    FUN_00bba400(*(undefined4 *)(param_1 + 0x18));
    FUN_00bba400(*(undefined4 *)(param_1 + 0x1c));
    FUN_00bba400(*(undefined4 *)(param_1 + 0x20));
    FUN_00bba400(*(undefined4 *)(param_1 + 0x24));
    FUN_00bba400(*(undefined4 *)(param_1 + 0x28));
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x586);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x14),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x587);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0xc),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x588);
    FUN_00bbc580(*(undefined4 *)(param_1 + 8),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x589);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x30),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x58a);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x2c),"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                 0x58b);
    FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x58c);
  }
  return;
}



undefined4 FUN_00cb0580(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (param_2 == 4)) {
    uVar1 = *param_1;
    iVar2 = func_0x00bb6310(uVar1);
    if (iVar2 != 0) {
      iVar2 = func_0x00baf190(iVar2);
      if (iVar2 != 0x494) {
        *param_1 = 0;
        return uVar1;
      }
    }
    return 0;
  }
  return 0;
}



void thunk_FUN_00c12650(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != (int *)0x0) {
    piVar1 = param_1 + 8;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0xc), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      func_0x00bc67c0(param_1[1]);
      if (((int *)param_1[3] != (int *)0x0) &&
         (pcVar3 = *(code **)(*(int *)param_1[3] + 0xb8), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      func_0x00bca230(8,param_1,param_1 + 10);
      func_0x00c10570(param_1[3]);
      func_0x00c11a10(param_1[4]);
      FUN_00bba080(param_1[5]);
      FUN_00bbc580(param_1[0xd],"crypto\\ec\\ec_key.c",0x65);
      FUN_00bbc6c0(param_1,0x3c,"crypto\\ec\\ec_key.c",0x67);
    }
  }
  return;
}



void FUN_00cb05e0(undefined4 param_1,undefined4 param_2)

{
  func_0x00cb10b0(param_1,param_2,0);
  return;
}



undefined ** FUN_00cb0600(void)

{
  return &PTR_DAT_01099ac8;
}



undefined4 FUN_00cb0610(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 1;
    }
    uVar1 = func_0x00bb6310(param_1,param_2);
    iVar2 = func_0x00c123d0(uVar1);
    if (iVar2 != 0) {
      iVar2 = func_0x00bc09d0(param_2,"encoded-pub-key");
      if (iVar2 == 0) {
LAB_00cb0693:
        uVar1 = func_0x00c1b4e0(param_1,param_2);
        return uVar1;
      }
      uVar1 = func_0x00bb6190(param_1);
      iVar3 = func_0x00bb5940(uVar1);
      if ((iVar3 != 0) && (*(int *)(iVar2 + 4) == 5)) {
        iVar2 = func_0x00c12840(param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                                iVar3);
        if (iVar2 != 0) {
          func_0x00bb5760(iVar3);
          goto LAB_00cb0693;
        }
      }
      func_0x00bb5760(iVar3);
    }
  }
  return 0;
}



undefined ** FUN_00cb06c0(void)

{
  return &PTR_s_use_cofactor_flag_01099d38;
}



bool FUN_00cb06d0(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return false;
  }
  if ((param_2 & 0x87) == 0) {
    return true;
  }
  if ((param_2 & 2) != 0) {
    iVar1 = func_0x00baf190(param_1);
    bVar2 = iVar1 != 0;
  }
  if ((param_2 & 1) != 0) {
    if ((bVar2 == false) || (iVar1 = FUN_00baaa40(param_1), iVar1 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if ((param_2 & 4) != 0) {
    if ((bVar2 != false) && (iVar1 = func_0x00bb6310(param_1), iVar1 != 0)) {
      return true;
    }
    bVar2 = false;
  }
  return bVar2;
}



int FUN_00cb0760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  func_0x00e87f70();
  iVar2 = func_0x00bb6310(param_3);
  iVar3 = func_0x00bb6310(param_4);
  iVar7 = 1;
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
    return 0;
  }
  uVar5 = func_0x00bb6190(param_3);
  iVar4 = func_0x00bb5940(uVar5);
  if (iVar4 == 0) {
    return 0;
  }
  if (((param_5 & 4) != 0) &&
     (((iVar2 == 0 || (iVar3 == 0)) || (iVar2 = func_0x00c10050(iVar2,iVar3,iVar4), iVar2 != 0)))) {
    iVar7 = 0;
  }
  if ((param_5 & 3) == 0) goto LAB_00cb0894;
  bVar1 = false;
  if ((param_5 & 2) == 0) {
LAB_00cb0830:
    if ((param_5 & 1) != 0) {
      iVar2 = FUN_00baaa40(param_3);
      iVar3 = FUN_00baaa40(param_4);
      if ((iVar2 != 0) && (iVar3 != 0)) {
        if ((iVar7 == 0) || (iVar7 = func_0x00bba0f0(iVar2,iVar3), iVar7 != 0)) goto LAB_00cb086b;
        iVar7 = 1;
        goto LAB_00cb086d;
      }
    }
  }
  else {
    iVar2 = func_0x00baf190(param_3);
    iVar6 = func_0x00baf190(param_4);
    if ((iVar2 == 0) || (iVar6 == 0)) goto LAB_00cb0830;
    if ((iVar7 == 0) || (iVar7 = func_0x00c117a0(iVar3,iVar2,iVar6,iVar4), iVar7 != 0)) {
LAB_00cb086b:
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
LAB_00cb086d:
    bVar1 = true;
  }
  if ((iVar7 != 0) && (bVar1)) {
    func_0x00bb5760(iVar4);
    return 1;
  }
  iVar7 = 0;
LAB_00cb0894:
  func_0x00bb5760(iVar4);
  return iVar7;
}



bool FUN_00cb08c0(undefined4 param_1,byte param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = true;
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x87) == 0) {
    return true;
  }
  uVar2 = func_0x00bb6190(param_1);
  iVar1 = func_0x00bb5940(uVar2);
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 4) != 0) {
    uVar3 = func_0x00bb62f0(param_1);
    if ((uVar3 & 0x2000) == 0) {
      uVar2 = func_0x00bb6310(param_1,iVar1);
      iVar4 = func_0x00cd90d0(uVar2);
      bVar5 = iVar4 != 0;
    }
    else {
      uVar2 = func_0x00bb6310(param_1,uVar3 >> 0xe & 1);
      iVar4 = func_0x00cd92f0(uVar2);
      bVar5 = 0 < iVar4;
    }
  }
  if ((param_2 & 2) == 0) goto LAB_00cb0986;
  if (param_3 == 1) {
    if (bVar5 != false) {
      iVar4 = func_0x00c133e0(param_1,iVar1);
LAB_00cb0976:
      if (iVar4 != 0) {
        bVar5 = true;
        goto LAB_00cb0986;
      }
    }
  }
  else if (bVar5 != false) {
    iVar4 = func_0x00c13280(param_1,iVar1);
    goto LAB_00cb0976;
  }
  bVar5 = false;
LAB_00cb0986:
  if ((param_2 & 1) != 0) {
    if ((bVar5 == false) || (iVar4 = func_0x00c131d0(param_1), iVar4 == 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
  }
  if ((param_2 & 3) == 3) {
    if ((bVar5 != false) && (iVar4 = func_0x00c130a0(param_1,iVar1), iVar4 != 0)) {
      func_0x00bb5760(iVar1);
      return true;
    }
    bVar5 = false;
  }
  func_0x00bb5760(iVar1);
  return bVar5;
}



void FUN_00cb09f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb1530(param_1,param_2,param_3,0);
  return;
}



undefined4 FUN_00cb0a10(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 & 1) + 2;
  if ((param_1 & 2) == 0) {
    uVar1 = param_1 & 1;
  }
  uVar2 = uVar1 + 4;
  if ((param_1 & 4) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 8;
  if ((param_1 & 0x80) == 0) {
    uVar1 = uVar2;
  }
  return *(undefined4 *)(&DAT_012b7368 + uVar1 * 4);
}



undefined4
FUN_00cb0a40(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,code *param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  func_0x00e87f70();
  uVar1 = param_4;
  param_1 = 0;
  iVar2 = FUN_0058e2e0();
  iVar5 = param_3;
  if ((((iVar2 == 0) || (param_3 == 0)) || ((uVar1 & 4) == 0)) ||
     (((uVar1 & 3) == 1 || (iVar2 = func_0x00c4eb60(), iVar2 == 0)))) {
    return 0;
  }
  uVar3 = func_0x00bb6190(iVar5);
  param_3 = func_0x00bb5940(uVar3);
  if (param_3 != 0) {
    func_0x00bb59e0(param_3);
    uVar3 = func_0x00c13090(iVar5,param_3,&param_1);
    uVar3 = func_0x00bb6190(iVar5,uVar3);
    uVar3 = func_0x00bb6310(iVar5,iVar2,0,uVar3);
    iVar4 = func_0x00c1adb0(uVar3);
    if ((uVar1 & 3) != 0) {
      if (iVar4 == 0) goto LAB_00cb0b6c;
      iVar4 = func_0x00cb17c0(iVar5,iVar2,0,uVar1 & 1,&stack0x00000000);
    }
    if (((iVar4 != 0) &&
        (((uVar1 & 0x80) == 0 || (iVar5 = func_0x00cb19d0(iVar5,iVar2,0), iVar5 != 0)))) &&
       (iVar5 = func_0x00c4ed60(iVar2), iVar5 != 0)) {
      uVar3 = (*param_5)(iVar5,param_6);
      func_0x00c44dd0(iVar5);
      goto LAB_00cb0b6e;
    }
  }
LAB_00cb0b6c:
  uVar3 = 0;
LAB_00cb0b6e:
  func_0x00c4eb30(iVar2);
  FUN_00bbc580(0,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x207);
  FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x208);
  iVar5 = param_3;
  func_0x00bb56f0(param_3);
  func_0x00bb5760(iVar5);
  return uVar3;
}



undefined1 * FUN_00cb0bd0(int param_1)

{
  if (param_1 == 0xb) {
    return &DAT_010784bc;
  }
  if (param_1 != 0xc) {
    return (undefined1 *)0x0;
  }
  return &DAT_0105ebe0;
}



int * FUN_00cb0bf0(int *param_1,byte param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = FUN_0058e2e0();
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  if (param_1 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_backend.c",0x25a,"ossl_ec_key_dup");
    func_0x00bc5160(0x10,0xc0102,0);
    return (int *)0x0;
  }
  piVar2 = (int *)func_0x00c41f30(param_1[0xc],param_1[0xd],param_1[1]);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  if (((undefined4 *)param_1[3] != (undefined4 *)0x0) && ((param_2 & 4) != 0)) {
    iVar3 = func_0x00c122b0(param_1[0xc],param_1[0xd],*(undefined4 *)param_1[3]);
    piVar2[3] = iVar3;
    if ((iVar3 == 0) || (iVar3 = func_0x00c102c0(iVar3,param_1[3]), iVar3 == 0)) goto LAB_00c1b0ee;
    if (*param_1 != 0) {
      *piVar2 = *param_1;
    }
  }
  if ((param_1[4] != 0) && ((param_2 & 2) != 0)) {
    if (piVar2[3] == 0) goto LAB_00c1b0ee;
    iVar3 = func_0x00c11e70(piVar2[3]);
    piVar2[4] = iVar3;
    if ((iVar3 == 0) || (iVar3 = func_0x00c11860(iVar3,param_1[4]), iVar3 == 0)) goto LAB_00c1b0ee;
  }
  if ((param_1[5] != 0) && ((param_2 & 1) != 0)) {
    if (piVar2[3] == 0) goto LAB_00c1b0ee;
    iVar3 = func_0x00bba5e0();
    piVar2[5] = iVar3;
    if (((iVar3 == 0) || (iVar3 = func_0x00bba2d0(iVar3,param_1[5]), iVar3 == 0)) ||
       ((*(code **)(*(int *)piVar2[3] + 0xb4) != (code *)0x0 &&
        (iVar3 = (**(code **)(*(int *)piVar2[3] + 0xb4))(piVar2,param_1), iVar3 == 0))))
    goto LAB_00c1b0ee;
  }
  if ((char)param_2 < '\0') {
    piVar2[6] = param_1[6];
    piVar2[7] = param_1[7];
  }
  piVar2[2] = param_1[2];
  piVar2[9] = param_1[9];
  iVar3 = func_0x00bc9ff0(8,piVar2 + 10,param_1 + 10);
  if (iVar3 != 0) {
    if ((*piVar2 == 0) || (pcVar1 = *(code **)(*piVar2 + 0x10), pcVar1 == (code *)0x0)) {
      return piVar2;
    }
    if (((param_2 & 3) == 3) && (iVar3 = (*pcVar1)(piVar2,param_1), iVar3 != 0)) {
      return piVar2;
    }
  }
LAB_00c1b0ee:
  FUN_00c12650(piVar2);
  return (int *)0x0;
}



void FUN_00cb0c00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = func_0x00bc3c60(param_1,0,0x494);
  func_0x00c127c0(uVar2);
  return;
}



undefined4 * FUN_00cb0c30(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if (((iVar2 != 0) && ((param_2 & 0x87) != 0)) &&
     (puVar3 = (undefined4 *)
               FUN_00bbc830(0x50,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x3f1),
     puVar3 != (undefined4 *)0x0)) {
    *puVar3 = uVar1;
    puVar3[0xf] = param_2;
    puVar3[0x10] = 0;
    iVar2 = FUN_00cafef0(puVar3,param_3);
    if (iVar2 == 0) {
      FUN_00bbc580(puVar3,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x3f7);
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[1] == 0) {
        iVar2 = func_0x00bbbc70(&DAT_01055674,"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                                0x408);
        puVar3[1] = iVar2;
        if (iVar2 == 0) {
          FUN_00bbc6c0(puVar3[0x12],puVar3[0x13],"providers\\implementations\\keymgmt\\ec_kmgmt.c",
                       0x57f);
          func_0x00c10570(puVar3[0x11]);
          FUN_00bba400(puVar3[6]);
          FUN_00bba400(puVar3[7]);
          FUN_00bba400(puVar3[8]);
          FUN_00bba400(puVar3[9]);
          FUN_00bba400(puVar3[10]);
          FUN_00bbc580(puVar3[1],"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x586);
          FUN_00bbc580(puVar3[5],"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x587);
          FUN_00bbc580(puVar3[3],"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x588);
          FUN_00bbc580(puVar3[2],"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x589);
          FUN_00bbc580(puVar3[0xc],"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x58a);
          FUN_00bbc580(puVar3[0xb],"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x58b);
          FUN_00bbc580(puVar3,"providers\\implementations\\keymgmt\\ec_kmgmt.c",0x58c);
          return (undefined4 *)0x0;
        }
      }
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}



int FUN_00cb0dc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = func_0x00c12820(*param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1[0x11] == 0) {
    iVar2 = func_0x00cb15e0(param_1);
    if (iVar2 == 0) goto LAB_00cb0def;
  }
  else {
    if (param_1[2] != 0) {
      iVar2 = func_0x00c1ac80(param_1[2]);
      if (iVar2 < 0) goto LAB_00cb0def;
      func_0x00bab690(param_1[0x11],iVar2);
    }
    if (param_1[3] != 0) {
      iVar2 = func_0x00c1b8c0(param_1[3]);
      if (iVar2 < 0) goto LAB_00cb0def;
      func_0x00baf690(param_1[0x11],iVar2);
    }
  }
  if (param_1[0x11] == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\ec_kmgmt.c",0x4f6,"ec_gen_assign_group");
    func_0x00bc5160(0x39,0xb1,0);
    FUN_00c12650(iVar1);
    return 0;
  }
  iVar2 = func_0x00c12a60(iVar1,param_1[0x11]);
  if (0 < iVar2) {
    if ((param_1[0xf] & 3) == 0) {
      return iVar1;
    }
    iVar2 = func_0x00c126f0(iVar1);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
LAB_00cb0def:
  FUN_00c12650(iVar1);
  return 0;
}



void FUN_00cb0ec0(undefined4 param_1,undefined4 param_2)

{
  func_0x00cb10b0(param_1,param_2,1);
  return;
}



undefined ** FUN_00cb0ee0(void)

{
  return &PTR_DAT_01099dd8;
}



undefined ** FUN_00cb0ef0(void)

{
  return &PTR_s_encoded_pub_key_01099fa4;
}



void FUN_00cb0f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb1530(param_1,param_2,param_3,1);
  return;
}



undefined * FUN_00cb0f20(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_01055670;
  if (param_1 != 0xc) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



bool FUN_00cb0f30(undefined4 param_1,byte param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = true;
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 0x87) == 0) {
    return true;
  }
  uVar2 = func_0x00bb6190(param_1);
  iVar1 = func_0x00bb5940(uVar2);
  if (iVar1 == 0) {
    return false;
  }
  if ((param_2 & 4) != 0) {
    uVar2 = func_0x00bb6310(param_1,iVar1);
    iVar3 = func_0x00cd90d0(uVar2);
    bVar4 = iVar3 != 0;
  }
  if ((param_2 & 2) == 0) goto LAB_00cb0fc2;
  if (param_3 == 1) {
    if (bVar4 != false) {
      iVar3 = func_0x00c133e0(param_1,iVar1);
LAB_00cb0fb2:
      if (iVar3 != 0) {
        bVar4 = true;
        goto LAB_00cb0fc2;
      }
    }
  }
  else if (bVar4 != false) {
    iVar3 = func_0x00c13280(param_1,iVar1);
    goto LAB_00cb0fb2;
  }
  bVar4 = false;
LAB_00cb0fc2:
  if ((param_2 & 1) != 0) {
    if ((bVar4 == false) || (iVar3 = func_0x00ce9d10(param_1), iVar3 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  if ((param_2 & 3) == 3) {
    if ((bVar4 != false) && (iVar3 = func_0x00c130a0(param_1,iVar1), iVar3 != 0)) {
      func_0x00bb5760(iVar1);
      return true;
    }
    bVar4 = false;
  }
  func_0x00bb5760(iVar1);
  return bVar4;
}



undefined4 FUN_00cb1030(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (param_2 == 4)) {
    uVar1 = *param_1;
    iVar2 = func_0x00bb6310(uVar1);
    if (iVar2 != 0) {
      iVar2 = func_0x00baf190(iVar2);
      if (iVar2 == 0x494) {
        *param_1 = 0;
        return uVar1;
      }
    }
    return 0;
  }
  return 0;
}



undefined4 * FUN_00cb1a90(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           FUN_00bbc830(8,"providers\\implementations\\keymgmt\\kdf_legacy_kmgmt.c",0x24);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2[1] = 1;
  uVar3 = func_0x00bc3c60(param_1);
  *puVar2 = uVar3;
  return puVar2;
}



void FUN_00cb1ad0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\kdf_legacy_kmgmt.c",0x3d);
    }
  }
  return;
}



undefined4 * FUN_00cb1b20(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)
             FUN_00bbc830(0x24,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x47);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = uVar1;
      puVar3[1] = 1;
      puVar3[8] = 0;
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00cb1b70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 4);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bee500(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                   "providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x60);
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x1c),
                   "providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x61);
      func_0x00cd5e80(param_1 + 0x10);
      FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",100);
    }
  }
  return;
}



undefined4 * FUN_00cb1bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = func_0x00bc3c60(param_1);
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)
           FUN_00bbc830(0x1c,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x17f);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = uVar1;
    puVar3[1] = param_2;
    iVar2 = FUN_00cb1dc0(puVar3,param_3);
    if (iVar2 == 0) {
      FUN_00bbc580(puVar3,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x18c);
      return (undefined4 *)0x0;
    }
  }
  return puVar3;
}



undefined4 * FUN_00cb1c40(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (param_1 != (undefined4 *)0x0)) {
    uVar1 = *param_1;
    iVar2 = FUN_0058e2e0();
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)
               FUN_00bbc830(0x24,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x47);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 1;
        *puVar3 = uVar1;
        puVar3[8] = 0;
        if ((*(byte *)(param_1 + 1) & 3) != 0) {
          if (param_1[2] != 0) {
            iVar2 = func_0x00cd5d60(puVar3 + 4,param_1 + 4);
            if (iVar2 == 0) {
              FUN_00cb1b70(puVar3);
              FUN_00bc4f50();
              func_0x00bc5050("providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x1fa,
                              "mac_gen");
              func_0x00bc5160(0x39,0xc0103,0);
              return (undefined4 *)0x0;
            }
            func_0x00cd5e80(param_1 + 4);
            puVar3[2] = param_1[2];
            puVar3[3] = param_1[3];
            param_1[3] = 0;
            param_1[2] = 0;
            return puVar3;
          }
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x1ed,"mac_gen")
          ;
          func_0x00bc5160(0x39,0x9e,0);
          FUN_00cb1b70(puVar3);
          puVar3 = (undefined4 *)0x0;
        }
        return puVar3;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x1e4,"mac_gen");
    func_0x00bc5160(0x39,0x80039,0);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}



void FUN_00cb1d80(int param_1)

{
  FUN_00bee500(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               "providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x20a);
  func_0x00cd5e80(param_1 + 0x10);
  FUN_00bbc580(param_1,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x20c);
  return;
}



undefined4 FUN_00cb1dc0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *_Dst;
  
  if (param_1 != 0) {
    iVar1 = func_0x00bc09d0(param_2,&DAT_01057a10);
    if (iVar1 == 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 4) == 5) {
      _Dst = (void *)FUN_00bee630(*(undefined4 *)(iVar1 + 0xc),
                                  "providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x1ac);
      *(void **)(param_1 + 8) = _Dst;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,*(void **)(iVar1 + 8),*(size_t *)(iVar1 + 0xc));
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        return 1;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x1a9,
                      "mac_gen_set_params");
      func_0x00bc5160(0x39,0x80106,0);
    }
  }
  return 0;
}



undefined ** FUN_00cb1e50(void)

