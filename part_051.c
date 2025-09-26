{
  return &PTR_DAT_012b74c0;
}



void FUN_00cb1e60(undefined4 param_1,undefined4 param_2)

{
  func_0x00cb2220(param_1,0,param_2);
  return;
}



undefined ** FUN_00cb1e80(void)

{
  return &PTR_DAT_0109a27c;
}



bool FUN_00cb1e90(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_01057a10);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_01057a10);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 5) {
      FUN_00bc4f50();
      uVar3 = 0xbd;
      goto LAB_00cb22e8;
    }
    FUN_00bee500(param_1[2],param_1[3],"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",
                 0xc0);
    iVar2 = 1;
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    _Dst = (void *)FUN_00bee630(iVar2,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0xc2
                               );
    param_1[2] = _Dst;
    if (_Dst == (void *)0x0) {
      return false;
    }
    memcpy(_Dst,*(void **)(iVar1 + 8),*(size_t *)(iVar1 + 0xc));
    param_1[3] = *(undefined4 *)(iVar1 + 0xc);
  }
  iVar1 = func_0x00bc09d0(param_2,"properties");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 4) {
      FUN_00bc4f50();
      uVar3 = 0xcc;
      goto LAB_00cb22e8;
    }
    FUN_00bbc580(param_1[7],"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0xcf);
    iVar1 = func_0x00bbbc70(*(undefined4 *)(iVar1 + 8),
                            "providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0xd0);
    param_1[7] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
  }
  if ((param_1[8] == 0) || (iVar1 = func_0x00cd5dc0(param_1 + 4,param_2,*param_1), iVar1 != 0)) {
    return param_1[2] != 0;
  }
  FUN_00bc4f50();
  uVar3 = 0xd7;
LAB_00cb22e8:
  func_0x00bc5050("providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",uVar3,"mac_key_fromdata"
                 );
  func_0x00bc5160(0x39,0x80106,0);
  return false;
}



undefined ** FUN_00cb1ec0(void)

{
  return &PTR_DAT_0109a2f8;
}



bool FUN_00cb1ed0(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((param_2 & 1) != 0) {
      return *(int *)(param_1 + 8) != 0;
    }
    return true;
  }
  return false;
}



int FUN_00cb1f00(int param_1,int param_2,byte param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_0058e2e0();
  if (iVar3 == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    if (iVar1 == 0) {
LAB_00cb1f66:
      if (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) {
        if (*(int *)(param_1 + 0x10) == 0) {
          if (*(int *)(param_2 + 0x10) == 0) {
LAB_00cb1f81:
            if ((iVar3 == 0) ||
               (iVar3 = func_0x00401390(iVar3,iVar1,*(int *)(param_1 + 0xc)), iVar3 == 0)) {
              iVar3 = 1;
              goto LAB_00cb1f34;
            }
          }
        }
        else if (*(int *)(param_2 + 0x10) != 0) goto LAB_00cb1f81;
      }
    }
  }
  else if (iVar1 != 0) goto LAB_00cb1f66;
  iVar3 = 0;
LAB_00cb1f34:
  if (*(int *)(param_1 + 0x10) != 0) {
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_00bc3b90(*(undefined4 *)(param_2 + 0x10));
      iVar3 = func_0x00bc3ef0(uVar2,uVar4);
      if (iVar3 != 0) {
        return 1;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 FUN_00cb1fb0(int param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 1) != 0)) {
    uVar2 = func_0x00cb22b0(param_1,param_3);
    return uVar2;
  }
  return 0;
}



undefined ** FUN_00cb1fe0(byte param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_0109a1d8;
  if ((param_1 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



undefined4 FUN_00cb2000(int param_1,byte param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 1) != 0)) {
    iVar1 = func_0x00c4eb60();
    if (iVar1 != 0) {
      iVar2 = func_0x00cb2220(param_1,iVar1,0);
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



undefined4 * FUN_00cb2070(undefined4 param_1)

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
      puVar3[8] = 1;
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}



undefined ** FUN_00cb20c0(void)

{
  return &PTR_DAT_0109a2a8;
}



undefined ** FUN_00cb20d0(byte param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_DAT_0109a218;
  if ((param_1 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



undefined4 * FUN_00cb20f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar3 = uVar1;
  puVar3[1] = param_2;
  iVar2 = FUN_00cb1dc0(puVar3,param_3);
  if (iVar2 != 0) {
    iVar2 = func_0x00cd5dc0(puVar3 + 4,param_3,*puVar3);
    if (iVar2 != 0) {
      return puVar3;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x1bf,
                    "cmac_gen_set_params");
    func_0x00bc5160(0x39,0x80106,0);
  }
  FUN_00bbc580(puVar3,"providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x198);
  return (undefined4 *)0x0;
}



undefined4 FUN_00cb21a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00cb1dc0(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = func_0x00cd5dc0(param_1 + 4,param_2,*param_1);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\keymgmt\\mac_legacy_kmgmt.c",0x1bf,
                    "cmac_gen_set_params");
    func_0x00bc5160(0x39,0x80106,0);
  }
  return 0;
}



undefined ** FUN_00cb2210(void)

{
  return &PTR_DAT_012b74e8;
}



undefined4 * FUN_00cb2400(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0x28,"providers\\implementations\\exchange\\dh_exch.c",0x59)
    ;
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = func_0x00bc3c60(param_1);
      *puVar2 = uVar3;
      puVar2[4] = 0;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_00cb2440(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = func_0x00c0f9e0(param_2);
    if (iVar1 != 0) {
      FUN_00c0f7d0(*(undefined4 *)(param_1 + 4));
      *(int *)(param_1 + 4) = param_2;
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar1 = FUN_00cb2890(param_1,param_3);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00cb24a0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0058e2e0();
  if (((iVar2 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    iVar2 = func_0x009b10a0(param_2);
    iVar3 = func_0x009b10a0(uVar1);
    if (((iVar2 != 0) && (iVar3 != 0)) && (iVar2 = func_0x00c4e010(iVar2,iVar3,1), iVar2 != 0)) {
      iVar2 = func_0x00c0f9e0(param_2);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_00c0f7d0(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 8) = param_2;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\exchange\\dh_exch.c",0x9c,"dh_match_params");
    func_0x00bc5160(0x39,0xcb,0);
  }
  return 0;
}



undefined4 FUN_00cb2550(undefined4 *param_1,int param_2,uint *param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_0058e2e0();
  puVar1 = param_1;
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1[4] == 0) {
    uVar5 = func_0x00cb2d30(param_1,param_2,param_3,param_4,param_1[3] & 1);
    return uVar5;
  }
  if (param_1[4] != 1) {
    return 0;
  }
  uVar5 = 0;
  if (param_2 != 0) {
    if (param_4 < (uint)param_1[8]) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\exchange\\dh_exch.c",0xe1,"dh_X9_42_kdf_derive");
      uVar5 = 0x6a;
    }
    else {
      if ((param_1[1] != 0) && (param_1[2] != 0)) {
        uVar3 = func_0x00c0f9a0(param_1[1]);
        param_1 = (undefined4 *)uVar3;
        iVar2 = FUN_00bee630(uVar3,"providers\\implementations\\exchange\\dh_exch.c",0xe6);
        if (iVar2 == 0) {
          return 0;
        }
        iVar4 = func_0x00cb2d30(puVar1,iVar2,&param_1,uVar3,1);
        uVar3 = param_1;
        if ((iVar4 != 0) &&
           ((puVar1[4] != 1 ||
            (iVar4 = func_0x00c75b60(param_2,puVar1[8],iVar2,param_1,puVar1[9],puVar1[6],puVar1[7],
                                     puVar1[5],*puVar1,0), iVar4 != 0)))) {
          uVar5 = 1;
          *param_3 = puVar1[8];
        }
        FUN_00bee500(iVar2,uVar3,"providers\\implementations\\exchange\\dh_exch.c",0xf9);
        return uVar5;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\exchange\\dh_exch.c",0xb9,"dh_plain_derive");
      uVar5 = 0x80;
    }
    func_0x00bc5160(0x39,uVar5,0);
    return 0;
  }
  *param_3 = param_1[8];
  return 1;
}



void FUN_00cb26c0(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x24),"providers\\implementations\\exchange\\dh_exch.c",
               0x115);
  FUN_00c0f7d0(*(undefined4 *)(param_1 + 4));
  FUN_00c0f7d0(*(undefined4 *)(param_1 + 8));
  FUN_00bd4770(*(undefined4 *)(param_1 + 0x14));
  FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               "providers\\implementations\\exchange\\dh_exch.c",0x119);
  FUN_00bbc580(param_1,"providers\\implementations\\exchange\\dh_exch.c",0x11b);
  return;
}



undefined4 * FUN_00cb2720(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)FUN_00bbc830(0x28,"providers\\implementations\\exchange\\dh_exch.c",0x126);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
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
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_1 + 8);
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  if ((param_1[1] == 0) || (iVar4 = func_0x00c0f9e0(param_1[1]), iVar4 != 0)) {
    puVar5[1] = param_1[1];
    if ((param_1[2] == 0) || (iVar4 = func_0x00c0f9e0(param_1[2]), iVar4 != 0)) {
      puVar5[2] = param_1[2];
      if ((param_1[5] == 0) || (iVar4 = FUN_00bd4800(param_1[5]), iVar4 != 0)) {
        puVar5[5] = param_1[5];
        if ((param_1[6] != 0) && (param_1[7] != 0)) {
          iVar4 = func_0x00bbbc30(param_1[6],param_1[7],
                                  "providers\\implementations\\exchange\\dh_exch.c",0x143);
          puVar5[6] = iVar4;
          if (iVar4 == 0) goto LAB_00cb2828;
        }
        if (param_1[9] != 0) {
          iVar4 = func_0x00bbbc70(param_1[9],"providers\\implementations\\exchange\\dh_exch.c",0x149
                                 );
          puVar5[9] = iVar4;
          if (iVar4 == 0) goto LAB_00cb2828;
        }
        return puVar5;
      }
    }
  }
LAB_00cb2828:
  FUN_00bbc580(puVar5[9],"providers\\implementations\\exchange\\dh_exch.c",0x115);
  FUN_00c0f7d0(puVar5[1]);
  FUN_00c0f7d0(puVar5[2]);
  FUN_00bd4770(puVar5[5]);
  FUN_00bbc6c0(puVar5[6],puVar5[7],"providers\\implementations\\exchange\\dh_exch.c",0x119);
  FUN_00bbc580(puVar5,"providers\\implementations\\exchange\\dh_exch.c",0x11b);
  return (undefined4 *)0x0;
}



void FUN_00cb2890(undefined4 param_1,undefined4 param_2,int param_3,byte param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  uint in_stack_000000b0;
  undefined4 *in_stack_000000b8;
  int in_stack_000000bc;
  
  func_0x00e87f70();
  iVar6 = in_stack_000000bc;
  puVar2 = in_stack_000000b8;
  in_stack_000000b0 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  memset(&param_4,0,0x50);
  if (puVar2 == (undefined4 *)0x0) goto LAB_00cb2a32;
  if (iVar6 != 0) {
    iVar3 = func_0x00bc09d0(iVar6,"kdf-type");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x50);
      if (iVar3 == 0) goto LAB_00cb2a32;
      if (param_4 == 0) {
        puVar2[4] = 0;
      }
      else {
        pbVar8 = &DAT_01060b58;
        pbVar4 = &param_4;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00cb2950:
            uVar5 = -(uint)bVar9 | 1;
            goto LAB_00cb2955;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00cb2950;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_00cb2955:
        if (uVar5 != 0) goto LAB_00cb2a32;
        puVar2[4] = 1;
      }
    }
    iVar3 = func_0x00bc09d0(iVar6,"kdf-digest");
    if (iVar3 != 0) {
      memset(&stack0x00000060,0,0x50);
      iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x50);
      if (iVar3 == 0) goto LAB_00cb2a32;
      iVar3 = func_0x00bc09d0(iVar6,"kdf-digest-props");
      if (iVar3 != 0) {
        iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x50);
        if (iVar3 == 0) goto LAB_00cb2a32;
      }
      FUN_00bd4770(puVar2[5]);
      iVar3 = func_0x00bd4740(*puVar2,&param_4,&stack0x00000060);
      puVar2[5] = iVar3;
      if (iVar3 == 0) goto LAB_00cb2a32;
      iVar3 = func_0x00bc44f0(iVar3);
      if (iVar3 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\exchange\\dh_exch.c",0x18c,"dh_set_ctx_params")
        ;
        func_0x00bc5160(0x39,0xb7,0);
        goto LAB_00cb2a32;
      }
    }
    iVar3 = func_0x00bc09d0(iVar6,"kdf-outlen");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0300(iVar3,&param_1);
      if (iVar3 == 0) goto LAB_00cb2a32;
      puVar2[8] = param_1;
    }
    iVar3 = func_0x00bc09d0(iVar6,"kdf-ukm");
    if (iVar3 != 0) {
      param_1 = 0;
      FUN_00bbc580(puVar2[6],"providers\\implementations\\exchange\\dh_exch.c",0x1a6);
      puVar2[6] = 0;
      puVar2[7] = 0;
      if ((*(int *)(iVar3 + 8) != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
        iVar3 = func_0x00bc01d0(iVar3,&param_1,0,&param_2);
        if (iVar3 == 0) goto LAB_00cb2a32;
        puVar2[6] = param_1;
        puVar2[7] = param_2;
      }
    }
    iVar3 = func_0x00bc09d0(iVar6,&DAT_010607a8);
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0300(iVar3,&param_3);
      if (iVar3 == 0) goto LAB_00cb2a32;
      puVar2[3] = (uint)(param_3 != 0) | puVar2[3] & 0xfffffffe;
    }
    iVar6 = func_0x00bc09d0(iVar6,"cekalg");
    if (iVar6 != 0) {
      FUN_00bbc580(puVar2[9],"providers\\implementations\\exchange\\dh_exch.c",0x1bd);
      puVar2[9] = 0;
      if ((*(int *)(iVar6 + 8) != 0) && (*(int *)(iVar6 + 0xc) != 0)) {
        iVar6 = func_0x00bc0850(iVar6,&stack0x00000000,0x50);
        if (iVar6 != 0) {
          uVar7 = func_0x00bbbc70(&param_4,"providers\\implementations\\exchange\\dh_exch.c",0x1c2);
          puVar2[9] = uVar7;
          FUN_008ab370();
          return;
        }
LAB_00cb2a32:
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



undefined ** FUN_00cb2bf0(void)

{
  return &PTR_DAT_0109a3f8;
}



bool FUN_00cb2c00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-type");
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar2 = &DAT_0112e1b4;
    }
    else {
      if (*(int *)(param_1 + 0x10) != 1) {
        return false;
      }
      puVar2 = &DAT_01060b58;
    }
    iVar1 = func_0x00bc12f0(iVar1,puVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-digest");
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      puVar2 = &DAT_0112e1b4;
    }
    else {
      puVar2 = (undefined1 *)FUN_00bc42b0(*(int *)(param_1 + 0x14));
    }
    iVar1 = func_0x00bc12f0(iVar1,puVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-outlen");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x20)), iVar1 == 0))
  {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-ukm");
  if ((iVar1 != 0) &&
     (iVar1 = func_0x00bc1000(iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c))
     , iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"cekalg");
  if (iVar1 == 0) {
    return true;
  }
  puVar2 = &DAT_0112e1b4;
  if (*(undefined1 **)(param_1 + 0x24) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x24);
  }
  iVar1 = func_0x00bc12f0(iVar1,puVar2);
  return iVar1 != 0;
}



undefined ** FUN_00cb2d20(void)

{
  return &PTR_s_kdf_type_0109a498;
}



undefined4 * FUN_00cb2e30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0xc,"providers\\implementations\\exchange\\ecx_exch.c",0x34)
    ;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x20;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00cb2e60(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0xc,"providers\\implementations\\exchange\\ecx_exch.c",0x34)
    ;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x38;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_00cb2e90(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (*(int *)(param_2 + 0x4c) == *param_1)) {
    iVar1 = func_0x00c0f9e0(param_2);
    if (iVar1 != 0) {
      FUN_00c15480(param_1[1]);
      param_1[1] = param_2;
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\exchange\\ecx_exch.c",0x53,"ecx_init");
  func_0x00bc5160(0x39,0xc0103,0);
  return 0;
}



undefined4 FUN_00cb2f10(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (*(int *)(param_2 + 0x4c) == *param_1)) {
    iVar1 = func_0x00c0f9e0(param_2);
    if (iVar1 != 0) {
      FUN_00c15480(param_1[2]);
      param_1[2] = param_2;
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\exchange\\ecx_exch.c",0x79,"ecx_set_peer");
  func_0x00bc5160(0x39,0xc0103,0);
  return 0;
}



void FUN_00cb2f90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  func_0x00c15330(param_1[2],param_1[1],*param_1,param_2,param_3,param_4);
  return;
}



void FUN_00cb2fc0(int param_1)

{
  FUN_00c15480(*(undefined4 *)(param_1 + 4));
  FUN_00c15480(*(undefined4 *)(param_1 + 8));
  FUN_00bbc580(param_1,"providers\\implementations\\exchange\\ecx_exch.c",0x94);
  return;
}



undefined8 * FUN_00cb2ff0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) ||
     (puVar2 = (undefined8 *)
               FUN_00bbc830(0xc,"providers\\implementations\\exchange\\ecx_exch.c",0x9f),
     puVar2 == (undefined8 *)0x0)) {
    return (undefined8 *)0x0;
  }
  *puVar2 = *param_1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
  if ((*(int *)((int)puVar2 + 4) != 0) &&
     (iVar1 = func_0x00c0f9e0(*(int *)((int)puVar2 + 4)), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\exchange\\ecx_exch.c",0xa5,"ecx_dupctx");
    func_0x00bc5160(0x39,0xc0103,0);
    FUN_00bbc580(puVar2,"providers\\implementations\\exchange\\ecx_exch.c",0xa6);
    return (undefined8 *)0x0;
  }
  if ((*(int *)(puVar2 + 1) != 0) && (iVar1 = func_0x00c0f9e0(*(int *)(puVar2 + 1)), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\exchange\\ecx_exch.c",0xab,"ecx_dupctx");
    func_0x00bc5160(0x39,0xc0103,0);
    FUN_00c15480(*(undefined4 *)((int)puVar2 + 4));
    FUN_00bbc580(puVar2,"providers\\implementations\\exchange\\ecx_exch.c",0xad);
    return (undefined8 *)0x0;
  }
  return puVar2;
}



undefined * FUN_00cb30e0(void)

{
  return &DAT_0109a630;
}



undefined4 * FUN_00cb30f0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x24,"providers\\implementations\\exchange\\ecdh_exch.c",0x5b);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = func_0x00bc3c60(param_1);
      *puVar2 = uVar3;
      puVar2[3] = 0xffffffff;
      puVar2[4] = 0;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_00cb3140(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = func_0x00bb6310(param_2);
    if (iVar1 != 0) {
      iVar1 = func_0x00c12be0(param_2);
      if (iVar1 != 0) {
        FUN_00c12650(*(undefined4 *)(param_1 + 4));
        *(int *)(param_1 + 4) = param_2;
        *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x10) = 0;
        iVar1 = FUN_00cb3570(param_1,param_3);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00cb31b0(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  func_0x00e87f70();
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar4 = *(undefined4 *)(param_2 + 4);
  iVar2 = func_0x00bb6310(uVar4);
  iVar3 = func_0x00bb6310(param_3);
  uVar4 = func_0x00bb6190(uVar4);
  iVar5 = func_0x00bb5940(uVar4);
  if (iVar5 != 0) {
    if (((iVar2 == 0) || (iVar3 == 0)) || (iVar2 = func_0x00c10050(iVar2,iVar3,iVar5), iVar2 != 0))
    {
      bVar1 = false;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\exchange\\ecdh_exch.c",0x94,"ecdh_match_params");
      func_0x00bc5160(0x39,0xcb,0);
    }
    else {
      bVar1 = true;
    }
    func_0x00bb5760(iVar5);
    if ((bVar1) && (iVar2 = func_0x00c12be0(param_3), iVar2 != 0)) {
      FUN_00c12650(*(undefined4 *)(param_2 + 8));
      *(int *)(param_2 + 8) = param_3;
      return 1;
    }
    return 0;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\exchange\\ecdh_exch.c",0x8d,"ecdh_match_params");
  func_0x00bc5160(0x39,0x80003,0);
  return 0;
}



undefined4 FUN_00cb32c0(undefined4 *param_1,int param_2,uint *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = param_1;
  if (param_1[4] == 0) {
    uVar5 = func_0x00cb3960(param_1,param_2,param_3,param_4);
    return uVar5;
  }
  if (param_1[4] != 1) {
    return 0;
  }
  uVar5 = 0;
  if (param_2 == 0) {
    *param_3 = param_1[8];
    return 1;
  }
  if (param_4 < (uint)param_1[8]) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\exchange\\ecdh_exch.c",0x251,
                    "ecdh_X9_63_kdf_derive");
    func_0x00bc5160(0x39,0x6a,0);
  }
  else {
    iVar3 = func_0x00cb3960(param_1,0,&param_1,0);
    puVar2 = param_1;
    if (iVar3 != 0) {
      iVar3 = FUN_00bee630(param_1,"providers\\implementations\\exchange\\ecdh_exch.c",0x256);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = func_0x00cb3960(puVar1,iVar3,&param_1,puVar2);
      puVar2 = param_1;
      if (iVar4 != 0) {
        iVar4 = func_0x00c77980(param_2,puVar1[8],iVar3,param_1,puVar1[6],puVar1[7],puVar1[5],
                                *puVar1,0);
        if (iVar4 != 0) {
          uVar5 = 1;
          *param_3 = puVar1[8];
        }
      }
      FUN_00bee500(iVar3,puVar2,"providers\\implementations\\exchange\\ecdh_exch.c",0x267);
      return uVar5;
    }
  }
  return 0;
}



void FUN_00cb33f0(int param_1)

{
  FUN_00c12650(*(undefined4 *)(param_1 + 4));
  FUN_00c12650(*(undefined4 *)(param_1 + 8));
  FUN_00bd4770(*(undefined4 *)(param_1 + 0x14));
  FUN_00bbc6c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               "providers\\implementations\\exchange\\ecdh_exch.c",0xbb);
  FUN_00bbc580(param_1,"providers\\implementations\\exchange\\ecdh_exch.c",0xbd);
  return;
}



undefined4 * FUN_00cb3440(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)FUN_00bbc830(0x24,"providers\\implementations\\exchange\\ecdh_exch.c",0xc9)
  ;
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
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
  puVar5[8] = param_1[8];
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  if ((param_1[1] == 0) || (iVar4 = func_0x00c12be0(param_1[1]), iVar4 != 0)) {
    puVar5[1] = param_1[1];
    if ((param_1[2] == 0) || (iVar4 = func_0x00c12be0(param_1[2]), iVar4 != 0)) {
      puVar5[2] = param_1[2];
      if ((param_1[5] == 0) || (iVar4 = FUN_00bd4800(param_1[5]), iVar4 != 0)) {
        puVar5[5] = param_1[5];
        if ((param_1[6] != 0) && (param_1[7] != 0)) {
          iVar4 = func_0x00bbbc30(param_1[6],param_1[7],
                                  "providers\\implementations\\exchange\\ecdh_exch.c",0xea);
          puVar5[6] = iVar4;
          if (iVar4 == 0) goto LAB_00cb3518;
        }
        return puVar5;
      }
    }
  }
LAB_00cb3518:
  FUN_00c12650(puVar5[1]);
  FUN_00c12650(puVar5[2]);
  FUN_00bd4770(puVar5[5]);
  FUN_00bbc6c0(puVar5[6],puVar5[7],"providers\\implementations\\exchange\\ecdh_exch.c",0xbb);
  FUN_00bbc580(puVar5,"providers\\implementations\\exchange\\ecdh_exch.c",0xbd);
  return (undefined4 *)0x0;
}



void FUN_00cb3570(int param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  uint in_stack_000000ac;
  undefined4 *in_stack_000000b4;
  int in_stack_000000b8;
  
  func_0x00e87f70();
  iVar6 = in_stack_000000b8;
  puVar2 = in_stack_000000b4;
  in_stack_000000ac = DAT_0128fd40 ^ (uint)&stack0x00000000;
  memset(&param_3,0,0x50);
  if (puVar2 == (undefined4 *)0x0) goto LAB_00cb374a;
  if (iVar6 != 0) {
    iVar3 = func_0x00bc09d0(iVar6,"ecdh-cofactor-mode");
    if (iVar3 != 0) {
      iVar3 = func_0x00bbfcd0(iVar3,&param_1);
      if ((iVar3 == 0) || (2 < param_1 + 1U)) goto LAB_00cb374a;
      puVar2[3] = param_1;
    }
    iVar3 = func_0x00bc09d0(iVar6,"kdf-type");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x50);
      if (iVar3 == 0) goto LAB_00cb374a;
      if (param_3 == 0) {
        puVar2[4] = 0;
      }
      else {
        pbVar7 = &DAT_010559e4;
        pbVar4 = &param_3;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00cb3668:
            uVar5 = -(uint)bVar8 | 1;
            goto LAB_00cb366d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00cb3668;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_00cb366d:
        if (uVar5 != 0) goto LAB_00cb374a;
        puVar2[4] = 1;
      }
    }
    iVar3 = func_0x00bc09d0(iVar6,"kdf-digest");
    if (iVar3 != 0) {
      memset(&stack0x0000005c,0,0x50);
      iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x50);
      if (iVar3 == 0) goto LAB_00cb374a;
      iVar3 = func_0x00bc09d0(iVar6,"kdf-digest-props");
      if (iVar3 != 0) {
        iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x50);
        if (iVar3 == 0) goto LAB_00cb374a;
      }
      FUN_00bd4770(puVar2[5]);
      iVar3 = func_0x00bd4740(*puVar2,&param_3,&stack0x0000005c);
      puVar2[5] = iVar3;
      if (iVar3 == 0) goto LAB_00cb374a;
      iVar3 = func_0x00bc44f0(iVar3);
      if (iVar3 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\exchange\\ecdh_exch.c",0x13f,
                        "ecdh_set_ctx_params");
        func_0x00bc5160(0x39,0xb7,0);
        goto LAB_00cb374a;
      }
    }
    iVar3 = func_0x00bc09d0(iVar6,"kdf-outlen");
    if (iVar3 != 0) {
      iVar3 = func_0x00bc0300(iVar3,&param_1);
      if (iVar3 == 0) goto LAB_00cb374a;
      puVar2[8] = param_1;
    }
    iVar6 = func_0x00bc09d0(iVar6,"kdf-ukm");
    if (iVar6 != 0) {
      param_1 = 0;
      iVar6 = func_0x00bc01d0(iVar6,&param_1,0,&param_2);
      if (iVar6 == 0) {
LAB_00cb374a:
        FUN_008ab370();
        return;
      }
      FUN_00bbc580(puVar2[6],"providers\\implementations\\exchange\\ecdh_exch.c",0x15d);
      puVar2[6] = param_1;
      puVar2[7] = param_2;
    }
  }
  FUN_008ab370();
  return;
}



undefined ** FUN_00cb3810(void)

{
  return &PTR_s_ecdh_cofactor_mode_0109a6f8;
}



bool FUN_00cb3820(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"ecdh-cofactor-mode");
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 == 0xffffffff) {
      uVar2 = func_0x00bb62f0(*(undefined4 *)(param_1 + 4));
      uVar2 = uVar2 >> 0xc & 1;
    }
    iVar1 = func_0x00bc0c00(iVar1,uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-type");
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar3 = &DAT_0112e1b4;
    }
    else {
      if (*(int *)(param_1 + 0x10) != 1) {
        return false;
      }
      puVar3 = &DAT_010559e4;
    }
    iVar1 = func_0x00bc12f0(iVar1,puVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-digest");
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      puVar3 = &DAT_0112e1b4;
    }
    else {
      puVar3 = (undefined1 *)FUN_00bc42b0(*(int *)(param_1 + 0x14));
    }
    iVar1 = func_0x00bc12f0(iVar1,puVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-outlen");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x20)), iVar1 == 0))
  {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"kdf-ukm");
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = func_0x00bc1000(iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return iVar1 != 0;
}



undefined ** FUN_00cb3950(void)

{
  return &PTR_s_ecdh_cofactor_mode_0109a788;
}



void FUN_00cb3ac0(undefined4 param_1)

{
  func_0x00cb3e90("TLS1-PRF",param_1);
  return;
}



void FUN_00cb3ae0(undefined4 param_1)

{
  func_0x00cb3e90(&DAT_0105471c,param_1);
  return;
}



void FUN_00cb3b00(undefined4 param_1)

{
  func_0x00cb3e90("SCRYPT",param_1);
  return;
}



undefined4 FUN_00cb3b20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    iVar1 = func_0x00cb1b00(param_2);
    if (iVar1 != 0) {
      *(int *)(param_1 + 8) = param_2;
      uVar2 = func_0x00cdcb70(*(undefined4 *)(param_1 + 4),param_3);
      return uVar2;
    }
  }
  return 0;
}



undefined4 FUN_00cb3b70(int param_1,int param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = func_0x00cdc9d0(*(undefined4 *)(param_1 + 4));
    if (param_2 == 0) {
      *param_3 = uVar2;
      return 1;
    }
    if ((uVar2 == 0xffffffff) || (bVar3 = uVar2 <= param_4, param_4 = uVar2, bVar3)) {
      iVar1 = func_0x00cdcb90(*(undefined4 *)(param_1 + 4),param_2,param_4,0);
      if (0 < iVar1) {
        *param_3 = param_4;
        return 1;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\exchange\\kdf_exch.c",0x75,"kdf_derive");
      func_0x00bc5160(0x39,0x6a,0);
    }
  }
  return 0;
}



void FUN_00cb3c00(int param_1)

{
  func_0x00cdc990(*(undefined4 *)(param_1 + 4));
  FUN_00cb1ad0(*(undefined4 *)(param_1 + 8));
  FUN_00bbc580(param_1,"providers\\implementations\\exchange\\kdf_exch.c",0x8a);
  return;
}



undefined8 * FUN_00cb3c30(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00bbc830(0xc,"providers\\implementations\\exchange\\kdf_exch.c",0x95)
    ;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *param_1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
      iVar1 = func_0x00cdc8c0(*(undefined4 *)((int)param_1 + 4));
      *(int *)((int)puVar2 + 4) = iVar1;
      if (iVar1 != 0) {
        iVar1 = func_0x00cb1b00(*(undefined4 *)(puVar2 + 1));
        if (iVar1 == 0) {
          func_0x00cdc990(*(undefined4 *)((int)puVar2 + 4));
          FUN_00bbc580(puVar2,"providers\\implementations\\exchange\\kdf_exch.c",0xa2);
          return (undefined8 *)0x0;
        }
        return puVar2;
      }
      FUN_00bbc580(puVar2,"providers\\implementations\\exchange\\kdf_exch.c",0x9d);
    }
  }
  return (undefined8 *)0x0;
}



void FUN_00cb3cd0(int param_1,undefined4 param_2)

{
  func_0x00cdcb70(*(undefined4 *)(param_1 + 4),param_2);
  return;
}



void FUN_00cb3cf0(int param_1,undefined4 param_2)

{
  func_0x00cdcab0(*(undefined4 *)(param_1 + 4),param_2);
  return;
}



undefined4 FUN_00cb3d10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,"TLS1-PRF",0);
  iVar2 = func_0x00ce3100(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce31a0(iVar2);
  FUN_00ce3130(iVar2);
  return uVar1;
}



undefined4 FUN_00cb3d50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,&DAT_0105471c,0);
  iVar2 = func_0x00ce3100(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce31a0(iVar2);
  FUN_00ce3130(iVar2);
  return uVar1;
}



undefined4 FUN_00cb3d90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,"SCRYPT",0);
  iVar2 = func_0x00ce3100(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce31a0(iVar2);
  FUN_00ce3130(iVar2);
  return uVar1;
}



undefined4 FUN_00cb3dd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,"TLS1-PRF",0);
  iVar2 = func_0x00ce3100(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce3170(iVar2);
  FUN_00ce3130(iVar2);
  return uVar1;
}



undefined4 FUN_00cb3e10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,&DAT_0105471c,0);
  iVar2 = func_0x00ce3100(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce3170(iVar2);
  FUN_00ce3130(iVar2);
  return uVar1;
}



undefined4 FUN_00cb3e50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,"SCRYPT",0);
  iVar2 = func_0x00ce3100(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce3170(iVar2);
  FUN_00ce3130(iVar2);
  return uVar1;
}



undefined4 * FUN_00cb3f10(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x160,"providers\\implementations\\signature\\dsa_sig.c",0x87);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = func_0x00bc3c60(param_1);
      puVar2[4] = puVar2[4] | 2;
      *puVar2 = uVar3;
      if (param_2 != 0) {
        iVar1 = func_0x00bbbc70(param_2,"providers\\implementations\\signature\\dsa_sig.c",0x8e);
        puVar2[1] = iVar1;
        if (iVar1 == 0) {
          FUN_00bbc580(puVar2,"providers\\implementations\\signature\\dsa_sig.c",0x8f);
          puVar2 = (undefined4 *)0x0;
        }
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



bool FUN_00cb3f90(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return false;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
LAB_00cb3ff6:
      *(undefined4 *)(param_1 + 0xc) = 0x10;
      iVar1 = FUN_00cb4660(param_1,param_3);
      return iVar1 != 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\dsa_sig.c",0x11e,"dsa_signverify_init");
    func_0x00bc5160(0x39,0x72,0);
  }
  else {
    iVar1 = func_0x00c0fdc0(param_2);
    if (iVar1 != 0) {
      FUN_00c0fc00(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 8) = param_2;
      goto LAB_00cb3ff6;
    }
  }
  return false;
}



bool FUN_00cb4020(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return false;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
LAB_00cb4086:
      *(undefined4 *)(param_1 + 0xc) = 0x20;
      iVar1 = FUN_00cb4660(param_1,param_3);
      return iVar1 != 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\dsa_sig.c",0x11e,"dsa_signverify_init");
    func_0x00bc5160(0x39,0x72,0);
  }
  else {
    iVar1 = func_0x00c0fdc0(param_2);
    if (iVar1 != 0) {
      FUN_00c0fc00(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 8) = param_2;
      goto LAB_00cb4086;
    }
  }
  return false;
}



undefined4
FUN_00cb40b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0x4000) {
    uVar1 = func_0x00cb54c0(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_2 == 0) {
    uVar1 = FUN_00cb4150(param_1,0,param_3,param_4);
    return uVar1;
  }
  iVar2 = func_0x00bd3e10(*(undefined4 *)(param_1 + 0x154),param_5,param_6);
  if (iVar2 < 1) {
    return 0;
  }
  uVar1 = FUN_00cb4150(param_1,param_2,param_3,param_4);
  return uVar1;
}



void FUN_00cb4130(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return;
  }
  func_0x00bd3e10(*(undefined4 *)(param_1 + 0x154),param_2,param_3);
  return;
}



void FUN_00cb4150(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_stack_00000044;
  int in_stack_0000004c;
  int in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  
  func_0x00e87f70();
  uVar3 = in_stack_00000054;
  iVar2 = in_stack_00000050;
  iVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar4 = FUN_0058e2e0();
  if (((iVar4 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x154) != 0)) {
    if (iVar2 != 0) {
      iVar4 = func_0x00bd3c80(*(int *)(iVar1 + 0x154),&stack0x00000004,&stack0x00000000);
      if (iVar4 == 0) goto LAB_00cb41d8;
    }
    func_0x00cb54c0(iVar1,iVar2,uVar3,in_stack_00000058,&stack0x00000004,0);
    FUN_008ab370();
    return;
  }
LAB_00cb41d8:
  FUN_008ab370();
  return;
}



undefined4
FUN_00cb41f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0x8000) {
    uVar2 = func_0x00cb5570(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  iVar1 = func_0x00cb55d0(param_1,param_2,param_3);
  if (0 < iVar1) {
    iVar1 = func_0x00bd3e10(*(undefined4 *)(param_1 + 0x154),param_4,param_5);
    if (0 < iVar1) {
      uVar2 = FUN_00cb4260(param_1);
      return uVar2;
    }
  }
  return 0;
}



void FUN_00cb4260(void)

{
  int iVar1;
  int iVar2;
  uint in_stack_00000044;
  int in_stack_0000004c;
  
  func_0x00e87f70();
  iVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar2 = FUN_0058e2e0();
  if (((iVar2 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x154) != 0)) {
    iVar2 = func_0x00bd3c80(*(int *)(iVar1 + 0x154),&stack0x00000004,&stack0x00000000);
    if (iVar2 != 0) {
      func_0x00cb5570(iVar1,*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x15c),
                      &stack0x00000004,0);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00cb42f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00cb4ff0(param_1,param_2,param_3,param_4,0x4000,"DSA Digest Sign Init");
  return;
}



undefined4 FUN_00cb4320(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    uVar1 = func_0x00bd3e10(*(undefined4 *)(param_1 + 0x154),param_2,param_3);
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00cb4350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    uVar1 = FUN_00cb4150(param_1,param_2,param_3,param_4);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    return uVar1;
  }
  return 0;
}



void FUN_00cb4380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00cb4ff0(param_1,param_2,param_3,param_4,0x8000,"DSA Digest Verify Init");
  return;
}



undefined4 FUN_00cb43b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    iVar1 = func_0x00cb55d0(param_1,param_2,param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_00cb4260(param_1);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    return uVar2;
  }
  return 0;
}



void FUN_00cb43f0(int param_1)

{
  func_0x00bd45b0(*(undefined4 *)(param_1 + 0x154));
  FUN_00bd4770(*(undefined4 *)(param_1 + 0x150));
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x158),"providers\\implementations\\signature\\dsa_sig.c",
               0x26c);
  FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\signature\\dsa_sig.c",0x26d
              );
  FUN_00c0fc00(*(undefined4 *)(param_1 + 8));
  FUN_00bbc580(param_1,"providers\\implementations\\signature\\dsa_sig.c",0x26f);
  return;
}



undefined4 * FUN_00cb4450(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           FUN_00bbc830(0x160,"providers\\implementations\\signature\\dsa_sig.c",0x27a);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = param_1;
  puVar4 = puVar2;
  for (iVar1 = 0x58; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2[2] = 0;
  puVar2[1] = 0;
  if ((param_1[2] == 0) || (iVar1 = func_0x00c0fdc0(param_1[2]), iVar1 != 0)) {
    puVar2[2] = param_1[2];
    if ((param_1[0x54] == 0) || (iVar1 = FUN_00bd4800(param_1[0x54]), iVar1 != 0)) {
      puVar2[0x54] = param_1[0x54];
      if (param_1[0x55] != 0) {
        iVar1 = func_0x00bd46b0();
        puVar2[0x55] = iVar1;
        if ((iVar1 == 0) || (iVar1 = func_0x00bd3f40(iVar1,param_1[0x55]), iVar1 == 0))
        goto LAB_00cb4528;
      }
      if (param_1[1] != 0) {
        iVar1 = func_0x00bbbc70(param_1[1],"providers\\implementations\\signature\\dsa_sig.c",0x292)
        ;
        puVar2[1] = iVar1;
        if (iVar1 == 0) goto LAB_00cb4528;
      }
      return puVar2;
    }
  }
LAB_00cb4528:
  func_0x00bd45b0(puVar2[0x55]);
  FUN_00bd4770(puVar2[0x54]);
  FUN_00bbc580(puVar2[0x56],"providers\\implementations\\signature\\dsa_sig.c",0x26c);
  FUN_00bbc580(puVar2[1],"providers\\implementations\\signature\\dsa_sig.c",0x26d);
  FUN_00c0fc00(puVar2[2]);
  FUN_00bbc580(puVar2,"providers\\implementations\\signature\\dsa_sig.c",0x26f);
  return (undefined4 *)0x0;
}



undefined ** FUN_00cb45a0(void)

{
  return &PTR_DAT_012b7524;
}



bool FUN_00cb45b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"algorithm-id");
  if ((iVar1 != 0) &&
     (iVar1 = func_0x00bc1050(iVar1,-(uint)(*(int *)(param_1 + 0x118) != 0) & param_1 + 0x18U,
                              *(int *)(param_1 + 0x118)), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"digest");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc12f0(iVar1,param_1 + 0x11c), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"nonce-type");
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x14));
  return iVar1 != 0;
}



undefined ** FUN_00cb4650(void)

{
  return &PTR_s_algorithm_id_0109afc8;
}



void FUN_00cb4660(undefined1 *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 in_stack_0000003c;
  uint in_stack_0000013c;
  int in_stack_00000144;
  int in_stack_00000148;
  
  func_0x00e87f70();
  iVar3 = in_stack_00000148;
  iVar1 = in_stack_00000144;
  in_stack_0000013c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (in_stack_00000144 == 0) goto LAB_00cb46ba;
  if (in_stack_00000148 != 0) {
    iVar2 = func_0x00bc09d0(in_stack_00000148,"nonce-type");
    if (iVar2 != 0) {
      iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x14);
      if (iVar2 == 0) goto LAB_00cb46ba;
    }
    iVar2 = func_0x00bc09d0(iVar3,"digest");
    if (iVar2 != 0) {
      param_2 = 0;
      memset(&stack0x00000009,0,0x31);
      in_stack_0000003c = 0;
      memset(&stack0x0000003d,0,0xff);
      param_1 = &stack0x0000003c;
      iVar3 = func_0x00bc09d0(iVar3,"properties");
      iVar2 = func_0x00bc0850(iVar2,&stack0x00000000,0x32);
      if (iVar2 != 0) {
        if (iVar3 != 0) {
          iVar3 = func_0x00bc0850(iVar3,&param_1,0x100);
          if (iVar3 == 0) goto LAB_00cb46ba;
        }
        func_0x00cb5110(iVar1,&param_2,&stack0x0000003c,"DSA Set Ctx");
        FUN_008ab370();
        return;
      }
LAB_00cb46ba:
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



undefined ** FUN_00cb47c0(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 != 0) {
    ppuVar1 = (undefined **)&DAT_0109b068;
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
      ppuVar1 = &PTR_s_digest_0109b018;
    }
    return ppuVar1;
  }
  return &PTR_s_digest_0109b018;
}



int FUN_00cb47e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x154);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x80) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4615. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x80))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x70), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cb4800(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x150);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x7c))(0,uVar1);
    return iVar2;
  }
  return 0;
}



int FUN_00cb4820(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x154);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x88) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4715. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x88))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x6c), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cb4840(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x150);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x78) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x78))(0,uVar1);
    return iVar2;
  }
  return 0;
}



bool FUN_00cb4860(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,"nonce-type");
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,param_1 + 0x14), iVar2 == 0)) {
      return false;
    }
    if ((*(int *)(param_1 + 0xc) == 0x8000) &&
       (iVar2 = func_0x00bc09d0(param_2,"signature"), iVar2 != 0)) {
      puVar1 = (undefined4 *)(param_1 + 0x158);
      FUN_00bbc580(*puVar1,"providers\\implementations\\signature\\dsa_sig.c",0x3c4);
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      iVar2 = func_0x00bc01d0(iVar2,puVar1,0,(undefined4 *)(param_1 + 0x15c));
      return iVar2 != 0;
    }
  }
  return true;
}



undefined ** FUN_00cb4910(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 != 0) {
    ppuVar1 = &PTR_s_signature_0109b07c;
    if (*(int *)(param_1 + 0xc) != 0x8000) {
      ppuVar1 = (undefined **)0x0;
    }
    return ppuVar1;
  }
  return (undefined **)0x0;
}



void FUN_00cb4930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,&DAT_0104e908,0x10,"DSA-SHA1 Sign Init");
  return;
}



void FUN_00cb4960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,&DAT_0104e908,0x4000,
                  "DSA-SHA1 Sign Message Init");
  return;
}



void FUN_00cb4990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,&DAT_0104e908,0x20,"DSA-SHA1 Verify Init");
  return;
}



void FUN_00cb49c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,&DAT_0104e908,0x8000,
                  "DSA-SHA1 Verify Message Init");
  return;
}



void FUN_00cb49f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-224",0x10,"DSA-SHA2-224 Sign Init");
  return;
}



void FUN_00cb4a20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-224",0x4000,
                  "DSA-SHA2-224 Sign Message Init");
  return;
}



void FUN_00cb4a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-224",0x20,"DSA-SHA2-224 Verify Init");
  return;
}



void FUN_00cb4a80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-224",0x8000,
                  "DSA-SHA2-224 Verify Message Init");
  return;
}



void FUN_00cb4ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-256",0x10,"DSA-SHA2-256 Sign Init");
  return;
}



void FUN_00cb4ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-256",0x4000,
                  "DSA-SHA2-256 Sign Message Init");
  return;
}



void FUN_00cb4b10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-256",0x20,"DSA-SHA2-256 Verify Init");
  return;
}



void FUN_00cb4b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-256",0x8000,
                  "DSA-SHA2-256 Verify Message Init");
  return;
}



void FUN_00cb4b70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-384",0x10,"DSA-SHA2-384 Sign Init");
  return;
}



void FUN_00cb4ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-384",0x4000,
                  "DSA-SHA2-384 Sign Message Init");
  return;
}



void FUN_00cb4bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-384",0x20,"DSA-SHA2-384 Verify Init");
  return;
}



void FUN_00cb4c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-384",0x8000,
                  "DSA-SHA2-384 Verify Message Init");
  return;
}



void FUN_00cb4c30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-512",0x10,"DSA-SHA2-512 Sign Init");
  return;
}



void FUN_00cb4c60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-512",0x4000,
                  "DSA-SHA2-512 Sign Message Init");
  return;
}



void FUN_00cb4c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-512",0x20,"DSA-SHA2-512 Verify Init");
  return;
}



void FUN_00cb4cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA2-512",0x8000,
                  "DSA-SHA2-512 Verify Message Init");
  return;
}



void FUN_00cb4cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-224",0x10,"DSA-SHA3-224 Sign Init");
  return;
}



void FUN_00cb4d20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-224",0x4000,
                  "DSA-SHA3-224 Sign Message Init");
  return;
}



void FUN_00cb4d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-224",0x20,"DSA-SHA3-224 Verify Init");
  return;
}



void FUN_00cb4d80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-224",0x8000,
                  "DSA-SHA3-224 Verify Message Init");
  return;
}



void FUN_00cb4db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-256",0x10,"DSA-SHA3-256 Sign Init");
  return;
}



void FUN_00cb4de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-256",0x4000,
                  "DSA-SHA3-256 Sign Message Init");
  return;
}



void FUN_00cb4e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-256",0x20,"DSA-SHA3-256 Verify Init");
  return;
}



void FUN_00cb4e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-256",0x8000,
                  "DSA-SHA3-256 Verify Message Init");
  return;
}



void FUN_00cb4e70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-384",0x10,"DSA-SHA3-384 Sign Init");
  return;
}



void FUN_00cb4ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-384",0x4000,
                  "DSA-SHA3-384 Sign Message Init");
  return;
}



void FUN_00cb4ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-384",0x20,"DSA-SHA3-384 Verify Init");
  return;
}



void FUN_00cb4f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-384",0x8000,
                  "DSA-SHA3-384 Verify Message Init");
  return;
}



void FUN_00cb4f30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-512",0x10,"DSA-SHA3-512 Sign Init");
  return;
}



void FUN_00cb4f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-512",0x4000,
                  "DSA-SHA3-512 Sign Message Init");
  return;
}



void FUN_00cb4f90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-512",0x20,"DSA-SHA3-512 Verify Init");
  return;
}



void FUN_00cb4fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb53c0(param_1,param_2,FUN_00cb4860,param_3,"SHA3-512",0x8000,
                  "DSA-SHA3-512 Verify Message Init");
  return;
}



undefined4 * FUN_00cb56d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00bbc830(0xa8,"providers\\implementations\\signature\\rsa_sig.c",0xeb);
  if (puVar2 != (undefined4 *)0x0) {
    if (param_2 != 0) {
      iVar4 = func_0x00bbbc70(param_2,"providers\\implementations\\signature\\rsa_sig.c",0xed);
      if (iVar4 == 0) goto LAB_00cb574b;
    }
    uVar3 = func_0x00bc3c60(param_1);
    *puVar2 = uVar3;
    puVar2[4] = puVar2[4] | 2;
    puVar2[1] = iVar4;
    puVar2[0x25] = 0xfffffffc;
    puVar2[0x26] = 0xffffffff;
    return puVar2;
  }
LAB_00cb574b:
  FUN_00bbc580(puVar2,"providers\\implementations\\signature\\rsa_sig.c",0xee);
  return (undefined4 *)0x0;
}



void FUN_00cb5770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8660(param_1,param_2,FUN_00cb6420,param_3,0x10,"RSA Sign Init");
  return;
}



void FUN_00cb57a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8660(param_1,param_2,FUN_00cb6420,param_3,0x20,"RSA Verify Init");
  return;
}



void FUN_00cb57d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8660(param_1,param_2,FUN_00cb6420,param_3,0x40,"RSA VerifyRecover Init");
  return;
}



undefined4
FUN_00cb5800(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x380,"rsa_sign");
      func_0x00bc5160(0x39,0xef,0);
    }
    else {
      if (*(int *)(param_1 + 0xc) != 0x4000) {
        uVar2 = func_0x00cb8210(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar2;
      }
      if (param_2 == 0) {
        uVar2 = FUN_00cb5920(param_1,0,param_3,param_4);
        return uVar2;
      }
      iVar1 = FUN_00cb58c0(param_1,param_5,param_6);
      if (iVar1 != 0) {
        iVar1 = FUN_00cb5920(param_1,param_2,param_3,param_4);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// WARNING: Possible PIC construction at 0x00c0c6d0: Changing call to branch
// WARNING: Possible PIC construction at 0x00c0cbf0: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00c0c6d5)
// WARNING: Removing unreachable block (ram,0x00c0cbf5)

undefined4 FUN_00cb58c0(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *unaff_ESI;
  int unaff_EDI;
  
  if ((param_1 != 0) && (iVar3 = *(int *)(param_1 + 0x18), iVar3 != 0)) {
    if ((*(uint *)(param_1 + 0x10) & 8) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffdf;
      while( true ) {
        iVar5 = unaff_EDI;
        piVar6 = unaff_ESI;
        if (param_3 == 0) {
          return 1;
        }
        if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\digest.c",0x187,"EVP_DigestUpdate");
          func_0x00bc5160(6,0xbd,0);
          return 0;
        }
        puVar1 = *(uint **)(iVar3 + 0x14);
        if (((puVar1 == (uint *)0x0) || (uVar2 = *puVar1, (uVar2 & 0xc1f0) == 0)) ||
           (puVar1[6] == 0)) break;
        unaff_EDI = iVar3;
        if (uVar2 == 0x80) {
          unaff_ESI = *(int **)(iVar3 + 0x14);
          if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1a5,"EVP_DigestSignUpdate");
            func_0x00bc5160(6,0xbd,0);
            return 0;
          }
          if (unaff_ESI != (int *)0x0) {
            if (((*unaff_ESI == 0x80) && (unaff_ESI[6] != 0)) && (unaff_ESI[5] != 0)) {
              UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_ESI[5] + 0x4c);
              if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00c0c6a7. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar4 = (*UNRECOVERED_JUMPTABLE_00)();
                return uVar4;
              }
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1b0,"EVP_DigestSignUpdate");
              func_0x00bc5160(6,0xc0101,0);
              return 0;
            }
            if (((*(byte *)(unaff_ESI + 0x15) & 1) != 0) &&
               (iVar5 = (**(code **)(unaff_ESI[0x10] + 0x80))(unaff_ESI,iVar3,iVar5,piVar6),
               iVar5 == 0)) {
              return 0;
            }
            unaff_ESI[0x15] = unaff_ESI[0x15] & 0xfffffffe;
          }
        }
        else {
          if (uVar2 != 0x100) {
            FUN_00bc4f50();
            uVar4 = 0x19a;
            goto LAB_00bd3eab;
          }
          unaff_ESI = *(int **)(iVar3 + 0x14);
          if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1cd,"EVP_DigestVerifyUpdate");
            func_0x00bc5160(6,0xbd,0);
            return 0;
          }
          if (unaff_ESI != (int *)0x0) {
            if (((*unaff_ESI == 0x100) && (unaff_ESI[6] != 0)) && (unaff_ESI[5] != 0)) {
              UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_ESI[5] + 0x5c);
              if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00c0cbc7. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar4 = (*UNRECOVERED_JUMPTABLE_00)();
                return uVar4;
              }
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1d8,"EVP_DigestVerifyUpdate");
              func_0x00bc5160(6,0xc0101,0);
              return 0;
            }
            if (((*(byte *)(unaff_ESI + 0x15) & 1) != 0) &&
               (iVar5 = (**(code **)(unaff_ESI[0x10] + 0x80))(unaff_ESI,iVar3,iVar5,piVar6),
               iVar5 == 0)) {
              return 0;
            }
            unaff_ESI[0x15] = unaff_ESI[0x15] & 0xfffffffe;
          }
        }
      }
      iVar5 = *(int *)(iVar3 + 4);
      if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40) == 0)) || ((*(uint *)(iVar3 + 0xc) & 0x100) != 0)
         ) {
        if (*(code **)(iVar3 + 0x18) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00bd3f17. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar4 = (**(code **)(iVar3 + 0x18))();
          return uVar4;
        }
        return 0;
      }
      if (*(code **)(iVar5 + 0x50) != (code *)0x0) {
        uVar4 = (**(code **)(iVar5 + 0x50))(*(undefined4 *)(iVar3 + 0x1c),param_2,param_3);
        return uVar4;
      }
      FUN_00bc4f50();
      uVar4 = 0x1a4;
LAB_00bd3eab:
      func_0x00bc5050("crypto\\evp\\digest.c",uVar4,"EVP_DigestUpdate");
      func_0x00bc5160(6,0xbd,0);
      return 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x348,
                    "rsa_signverify_message_update");
    func_0x00bc5160(0x39,0xf0,0);
  }
  return 0;
}



void FUN_00cb5920(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_stack_00000044;
  int in_stack_0000004c;
  int in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  
  func_0x00e87f70();
  uVar3 = in_stack_00000054;
  iVar2 = in_stack_00000050;
  iVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar4 = FUN_0058e2e0();
  if (((iVar4 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x18) != 0)) {
    if ((*(byte *)(iVar1 + 0x10) & 0x10) != 0) {
      if (iVar2 != 0) {
        iVar4 = func_0x00bd3c80(*(int *)(iVar1 + 0x18),&stack0x00000004,&stack0x00000000);
        if (iVar4 == 0) goto LAB_00cb5990;
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffffffc7;
      }
      func_0x00cb8210(iVar1,iVar2,uVar3,in_stack_00000058,&stack0x00000004,0);
      FUN_008ab370();
      return;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x35c,
                    "rsa_sign_message_final");
    func_0x00bc5160(0x39,0xed,0);
  }
LAB_00cb5990:
  FUN_008ab370();
  return;
}



undefined4
FUN_00cb59f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((*(byte *)(param_1 + 0x10) & 0x20) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x496,"rsa_verify");
      func_0x00bc5160(0x39,0xef,0);
    }
    else {
      if (*(int *)(param_1 + 0xc) != 0x8000) {
        uVar2 = func_0x00cb8960(param_1,param_2,param_3,param_4,param_5);
        return uVar2;
      }
      iVar1 = func_0x00cb8c00(param_1,param_2,param_3);
      if (iVar1 != 0) {
        iVar1 = FUN_00cb58c0(param_1,param_4,param_5);
        if (iVar1 != 0) {
          iVar1 = FUN_00cb5d00(param_1);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



undefined4
FUN_00cb5aa0(uint param_1,void *param_2,uint *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  void *_Dst;
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint _Size;
  undefined4 uVar6;
  
  iVar2 = FUN_0058e2e0();
  puVar1 = param_3;
  _Dst = param_2;
  uVar3 = param_1;
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    uVar3 = func_0x00bb77a0(*(undefined4 *)(param_1 + 8));
    *param_3 = uVar3;
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x14) == 0) {
    _Size = func_0x00bb7540(param_6,param_5,param_2,*(undefined4 *)(param_1 + 8),iVar2);
    if (-1 < (int)_Size) {
LAB_00cb5c7a:
      *puVar1 = _Size;
      return 1;
    }
    FUN_00bc4f50();
    uVar6 = 0x3ee;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 5) {
        iVar2 = func_0x00cb8cd0(param_1);
        if (iVar2 != 0) {
          iVar2 = func_0x00bb7540(param_6,param_5,*(undefined4 *)(uVar3 + 0xa4),
                                  *(undefined4 *)(uVar3 + 8),5);
          if (0 < iVar2) {
            _Size = iVar2 - 1;
            uVar4 = func_0x00c2eaa0(*(undefined4 *)(uVar3 + 0x1c));
            if (*(byte *)(_Size + *(int *)(uVar3 + 0xa4)) != uVar4) {
              FUN_00bc4f50();
              func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x3c1,
                              "rsa_verify_recover");
              func_0x00bc5160(0x39,0xad,0);
              return 0;
            }
            uVar5 = func_0x00bc4320(*(undefined4 *)(uVar3 + 0x14));
            uVar4 = param_4;
            if (_Size != uVar5) {
              FUN_00bc4f50();
              func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x3c5,
                              "rsa_verify_recover");
              uVar6 = func_0x00bc4320(*(undefined4 *)(uVar3 + 0x14),_Size);
              func_0x00bc5160(0x39,0xa6,"Should be %d, but got %d",uVar6);
              return 0;
            }
            *puVar1 = _Size;
            if (_Dst != *(void **)(uVar3 + 0xa4)) {
              if (param_4 < _Size) {
                FUN_00bc4f50();
                func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x3ce,
                                "rsa_verify_recover");
                func_0x00bc5160(0x39,0x6a,"buffer size is %d, should be %d",uVar4,_Size);
                return 0;
              }
              memcpy(_Dst,*(void **)(uVar3 + 0xa4),_Size);
            }
            goto LAB_00cb5c7a;
          }
          FUN_00bc4f50();
          uVar6 = 0x3bc;
          goto LAB_00cb5b67;
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x3e6,
                        "rsa_verify_recover");
        func_0x00bc5160(0x39,0xa8,"Only X.931 or PKCS#1 v1.5 padding allowed");
      }
      return 0;
    }
    iVar2 = func_0x00c791a0(*(undefined4 *)(param_1 + 0x1c),0,0,param_2,&param_1,param_5,param_6,
                            *(undefined4 *)(param_1 + 8));
    if (0 < iVar2) {
      *puVar1 = param_1;
      return 1;
    }
    FUN_00bc4f50();
    uVar6 = 0x3de;
  }
LAB_00cb5b67:
  func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",uVar6,"rsa_verify_recover");
  func_0x00bc5160(0x39,0x80004,0);
  return 0;
}



void FUN_00cb5d00(void)

{
  int iVar1;
  int iVar2;
  uint in_stack_00000044;
  int in_stack_0000004c;
  
  func_0x00e87f70();
  iVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar2 = FUN_0058e2e0();
  if (((iVar2 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x18) != 0)) {
    if ((*(byte *)(iVar1 + 0x10) & 0x10) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x476,
                      "rsa_verify_message_final");
      func_0x00bc5160(0x39,0xed,0);
    }
    else {
      iVar2 = func_0x00bd3c80(*(int *)(iVar1 + 0x18),&stack0x00000004,&stack0x00000000);
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffffffc7;
        func_0x00cb8960(iVar1,*(undefined4 *)(iVar1 + 0x9c),*(undefined4 *)(iVar1 + 0xa0),
                        &stack0x00000004,0);
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00cb5dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  func_0x00cb7940(param_1,param_2,param_3,param_4,0x4000,"RSA Digest Sign Init");
  return;
}



// WARNING: Possible PIC construction at 0x00c0c6d0: Changing call to branch
// WARNING: Possible PIC construction at 0x00c0cbf0: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00c0c6d5)
// WARNING: Removing unreachable block (ram,0x00c0cbf5)

undefined4 FUN_00cb5e00(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0x10), (uVar2 & 1) == 0)) &&
     (iVar3 = *(int *)(param_1 + 0x18), iVar3 != 0)) {
    if ((uVar2 & 8) != 0) {
      *(uint *)(param_1 + 0x10) = uVar2 & 0xffffffdf;
      while( true ) {
        iVar5 = unaff_EDI;
        piVar6 = unaff_ESI;
        if (param_3 == 0) {
          return 1;
        }
        if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\digest.c",0x187,"EVP_DigestUpdate");
          func_0x00bc5160(6,0xbd,0);
          return 0;
        }
        puVar1 = *(uint **)(iVar3 + 0x14);
        if (((puVar1 == (uint *)0x0) || (uVar2 = *puVar1, (uVar2 & 0xc1f0) == 0)) ||
           (puVar1[6] == 0)) break;
        unaff_EDI = iVar3;
        if (uVar2 == 0x80) {
          unaff_ESI = *(int **)(iVar3 + 0x14);
          if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1a5,"EVP_DigestSignUpdate");
            func_0x00bc5160(6,0xbd,0);
            return 0;
          }
          if (unaff_ESI != (int *)0x0) {
            if (((*unaff_ESI == 0x80) && (unaff_ESI[6] != 0)) && (unaff_ESI[5] != 0)) {
              UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_ESI[5] + 0x4c);
              if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00c0c6a7. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar4 = (*UNRECOVERED_JUMPTABLE_00)();
                return uVar4;
              }
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1b0,"EVP_DigestSignUpdate");
              func_0x00bc5160(6,0xc0101,0);
              return 0;
            }
            if (((*(byte *)(unaff_ESI + 0x15) & 1) != 0) &&
               (iVar5 = (**(code **)(unaff_ESI[0x10] + 0x80))(unaff_ESI,iVar3,iVar5,piVar6),
               iVar5 == 0)) {
              return 0;
            }
            unaff_ESI[0x15] = unaff_ESI[0x15] & 0xfffffffe;
          }
        }
        else {
          if (uVar2 != 0x100) {
            FUN_00bc4f50();
            uVar4 = 0x19a;
            goto LAB_00bd3eab;
          }
          unaff_ESI = *(int **)(iVar3 + 0x14);
          if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1cd,"EVP_DigestVerifyUpdate");
            func_0x00bc5160(6,0xbd,0);
            return 0;
          }
          if (unaff_ESI != (int *)0x0) {
            if (((*unaff_ESI == 0x100) && (unaff_ESI[6] != 0)) && (unaff_ESI[5] != 0)) {
              UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_ESI[5] + 0x5c);
              if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00c0cbc7. Too many branches
                    // WARNING: Treating indirect jump as call
                uVar4 = (*UNRECOVERED_JUMPTABLE_00)();
                return uVar4;
              }
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1d8,"EVP_DigestVerifyUpdate");
              func_0x00bc5160(6,0xc0101,0);
              return 0;
            }
            if (((*(byte *)(unaff_ESI + 0x15) & 1) != 0) &&
               (iVar5 = (**(code **)(unaff_ESI[0x10] + 0x80))(unaff_ESI,iVar3,iVar5,piVar6),
               iVar5 == 0)) {
              return 0;
            }
            unaff_ESI[0x15] = unaff_ESI[0x15] & 0xfffffffe;
          }
        }
      }
      iVar5 = *(int *)(iVar3 + 4);
      if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40) == 0)) || ((*(uint *)(iVar3 + 0xc) & 0x100) != 0)
         ) {
        if (*(code **)(iVar3 + 0x18) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00bd3f17. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar4 = (**(code **)(iVar3 + 0x18))();
          return uVar4;
        }
        return 0;
      }
      if (*(code **)(iVar5 + 0x50) != (code *)0x0) {
        uVar4 = (**(code **)(iVar5 + 0x50))(*(undefined4 *)(iVar3 + 0x1c),param_2,param_3);
        return uVar4;
      }
      FUN_00bc4f50();
      uVar4 = 0x1a4;
LAB_00bd3eab:
      func_0x00bc5050("crypto\\evp\\digest.c",uVar4,"EVP_DigestUpdate");
      func_0x00bc5160(6,0xbd,0);
      return 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x348,
                    "rsa_signverify_message_update");
    func_0x00bc5160(0x39,0xf0,0);
  }
  return 0;
}



bool FUN_00cb5e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    iVar1 = FUN_00cb5920(param_1,param_2,param_3,param_4);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    return iVar1 != 0;
  }
  return false;
}



void FUN_00cb5ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return;
  }
  func_0x00cb7940(param_1,param_2,param_3,param_4,0x8000,"RSA Digest Verify Init");
  return;
}



undefined4 FUN_00cb5ed0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    iVar1 = func_0x00cb8c00(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_00cb5d00(param_1);
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    return uVar2;
  }
  return 0;
}



void FUN_00cb5f20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    func_0x00bd45b0(*(undefined4 *)(param_1 + 0x18));
    FUN_00bd4770(*(undefined4 *)(param_1 + 0x14));
    FUN_00bd4770(*(undefined4 *)(param_1 + 0x58));
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x9c),"providers\\implementations\\signature\\rsa_sig.c",
                 0x52e);
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\signature\\rsa_sig.c",
                 0x52f);
    if (*(int *)(param_1 + 0xa4) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xa4);
      uVar2 = func_0x00bb77a0(*(undefined4 *)(param_1 + 8));
      func_0x00401320(uVar1,uVar2);
    }
    FUN_00bbc580(*(undefined4 *)(param_1 + 0xa4),"providers\\implementations\\signature\\rsa_sig.c",
                 0x274);
    *(undefined4 *)(param_1 + 0xa4) = 0;
    FUN_00bb6040(*(undefined4 *)(param_1 + 8));
    FUN_00bbc6c0(param_1,0xa8,"providers\\implementations\\signature\\rsa_sig.c",0x533);
  }
  return;
}



undefined4 * FUN_00cb5fe0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_00bbc830(0xa8,"providers\\implementations\\signature\\rsa_sig.c",0x53e)
  ;
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = param_1;
  puVar6 = puVar3;
  for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[0x16] = 0;
  puVar3[6] = 0;
  puVar3[0x29] = 0;
  puVar3[1] = 0;
  if ((param_1[2] == 0) || (iVar2 = func_0x00bb6570(param_1[2]), iVar2 != 0)) {
    puVar3[2] = param_1[2];
    if ((param_1[5] == 0) || (iVar2 = FUN_00bd4800(param_1[5]), iVar2 != 0)) {
      puVar3[5] = param_1[5];
      if ((param_1[0x16] == 0) || (iVar2 = FUN_00bd4800(param_1[0x16]), iVar2 != 0)) {
        puVar3[0x16] = param_1[0x16];
        if (param_1[6] != 0) {
          iVar2 = func_0x00bd46b0();
          puVar3[6] = iVar2;
          if ((iVar2 == 0) || (iVar2 = func_0x00bd3f40(iVar2,param_1[6]), iVar2 == 0))
          goto LAB_00cb60eb;
        }
        if (param_1[1] != 0) {
          iVar2 = func_0x00bbbc70(param_1[1],"providers\\implementations\\signature\\rsa_sig.c",
                                  0x55e);
          puVar3[1] = iVar2;
          if (iVar2 == 0) goto LAB_00cb60eb;
        }
        return puVar3;
      }
    }
  }
LAB_00cb60eb:
  func_0x00bd45b0(puVar3[6]);
  FUN_00bd4770(puVar3[5]);
  FUN_00bd4770(puVar3[0x16]);
  FUN_00bbc580(puVar3[0x27],"providers\\implementations\\signature\\rsa_sig.c",0x52e);
  FUN_00bbc580(puVar3[1],"providers\\implementations\\signature\\rsa_sig.c",0x52f);
  if (puVar3[0x29] != 0) {
    uVar1 = puVar3[0x29];
    uVar4 = func_0x00bb77a0(puVar3[2]);
    func_0x00401320(uVar1,uVar4);
  }
  FUN_00bbc580(puVar3[0x29],"providers\\implementations\\signature\\rsa_sig.c",0x274);
  puVar3[0x29] = 0;
  FUN_00bb6040(puVar3[2]);
  FUN_00bbc6c0(puVar3,0xa8,"providers\\implementations\\signature\\rsa_sig.c",0x533);
  return (undefined4 *)0x0;
}



undefined ** FUN_00cb61a0(void)

{
  return &PTR_DAT_012b7554;
}



void FUN_00cb61b0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_retaddr;
  uint in_stack_00000084;
  int in_stack_0000008c;
  undefined4 in_stack_00000090;
  
  func_0x00e87f70();
  uVar1 = in_stack_00000090;
  iVar4 = in_stack_0000008c;
  in_stack_00000084 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((in_stack_0000008c == 0) ||
     ((iVar2 = func_0x00bc09d0(in_stack_00000090,"algorithm-id"), iVar2 != 0 &&
      ((iVar3 = func_0x00cb79f0(iVar4,&stack0x00000004,0x80,&stack0x00000000), iVar3 == 0 ||
       (iVar2 = func_0x00bc1050(iVar2,iVar3,unaff_retaddr), iVar2 == 0)))))) goto LAB_00cb6341;
  iVar2 = func_0x00bc09d0(uVar1,"pad-mode");
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) == 1) {
      iVar2 = func_0x00bc0c00(iVar2,*(undefined4 *)(iVar4 + 0x54));
LAB_00cb62b9:
      if (iVar2 == 0) goto LAB_00cb6341;
    }
    else {
      if (*(int *)(iVar2 + 4) != 4) goto LAB_00cb6341;
      if (DAT_012b752c != 0) {
        iVar6 = 0;
        iVar3 = DAT_012b752c;
        do {
          if (*(int *)(iVar4 + 0x54) == iVar3) {
            if ((&PTR_DAT_012b7530)[iVar6 * 2] != (undefined *)0x0) {
              iVar2 = func_0x00bc12f0(iVar2,(&PTR_DAT_012b7530)[iVar6 * 2]);
              goto LAB_00cb62b9;
            }
            break;
          }
          iVar3 = (&DAT_012b7534)[iVar6 * 2];
          iVar6 = iVar6 + 1;
        } while (iVar3 != 0);
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x595,"rsa_get_ctx_params")
      ;
      func_0x00bc5160(0x39,0xc0103,0);
    }
  }
  iVar2 = func_0x00bc09d0(uVar1,"digest");
  if (((iVar2 != 0) && (iVar2 = func_0x00bc12f0(iVar2,iVar4 + 0x20), iVar2 == 0)) ||
     ((iVar2 = func_0x00bc09d0(uVar1,"mgf1-digest"), iVar2 != 0 &&
      (iVar2 = func_0x00bc12f0(iVar2,iVar4 + 0x60), iVar2 == 0)))) {
LAB_00cb6341:
    FUN_008ab370();
    return;
  }
  iVar2 = func_0x00bc09d0(uVar1,"saltlen");
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) == 1) {
      iVar4 = func_0x00bc0c00(iVar2,*(undefined4 *)(iVar4 + 0x94));
      if (iVar4 == 0) goto LAB_00cb6341;
    }
    else if (*(int *)(iVar2 + 4) == 4) {
      switch(*(undefined4 *)(iVar4 + 0x94)) {
      case 0xfffffffc:
        pcVar5 = "auto-digestmax";
        break;
      case 0xfffffffd:
        pcVar5 = "max";
        break;
      case 0xfffffffe:
        pcVar5 = "auto";
        break;
      case 0xffffffff:
        pcVar5 = "digest";
        break;
      default:
        iVar4 = func_0x00bbc9d0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                                &DAT_011a2390,*(undefined4 *)(iVar4 + 0x94));
        if (iVar4 < 1) goto LAB_00cb6341;
        *(int *)(iVar2 + 0x10) = iVar4;
        goto LAB_00cb63d6;
      }
      func_0x00bc12f0(iVar2,pcVar5);
      FUN_008ab370();
      return;
    }
  }
LAB_00cb63d6:
  FUN_008ab370();
  return;
}



undefined ** FUN_00cb6410(void)

{
  return &PTR_s_algorithm_id_0109bf18;
}



void FUN_00cb6420(undefined *param_1,int param_2,int param_3,undefined1 *param_4,undefined1 *param_5
                 ,undefined1 *param_6,undefined1 param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 in_stack_00000050;
  undefined1 in_stack_00000084;
  undefined1 in_stack_00000184;
  int in_stack_0000028c;
  int in_stack_00000290;
  undefined4 uVar13;
  
  func_0x00e87f70();
  param_7 = 0;
  param_3 = in_stack_00000290;
  memset(&stack0x0000001d,0,0x31);
  param_1 = (undefined *)0x0;
  in_stack_00000084 = 0;
  memset(&stack0x00000085,0,0xff);
  param_6 = (undefined1 *)0x0;
  in_stack_00000050 = 0;
  memset(&stack0x00000051,0,0x31);
  param_4 = (undefined1 *)0x0;
  in_stack_00000184 = 0;
  memset(&stack0x00000185,0,0xff);
  param_5 = (undefined1 *)0x0;
  if ((in_stack_0000028c == 0) || (in_stack_00000290 == 0)) goto LAB_00cb6837;
  iVar8 = *(int *)(in_stack_0000028c + 0x54);
  param_2 = *(int *)(in_stack_0000028c + 0x94);
  iVar2 = func_0x00bc09d0(in_stack_00000290,"digest");
  if (iVar2 != 0) {
    iVar3 = func_0x00bc09d0(in_stack_00000290,"properties");
    param_1 = &param_7;
    iVar2 = func_0x00bc0850(iVar2,&param_1,0x32);
    if (iVar2 == 0) goto LAB_00cb6837;
    if (iVar3 != 0) {
      param_6 = &stack0x00000084;
      iVar2 = func_0x00bc0850(iVar3,&param_6,0x100);
      if (iVar2 == 0) goto LAB_00cb6837;
    }
  }
  iVar2 = func_0x00bc09d0(in_stack_00000290,"pad-mode");
  if (iVar2 == 0) goto LAB_00cb668f;
  pcVar11 = (char *)0x0;
  if (*(int *)(iVar2 + 4) == 1) {
    iVar2 = func_0x00bbfcd0(iVar2,&stack0x00000000);
    if (iVar2 == 0) goto LAB_00cb6837;
  }
  else {
    if ((*(int *)(iVar2 + 4) != 4) || (*(byte **)(iVar2 + 8) == (byte *)0x0)) goto LAB_00cb6837;
    iVar3 = 0;
    in_stack_00000290 = param_3;
    if (DAT_012b752c != 0) {
      iVar4 = 0;
      do {
        pbVar9 = *(byte **)((int)&PTR_DAT_012b7530 + iVar4);
        pbVar5 = *(byte **)(iVar2 + 8);
        do {
          bVar1 = *pbVar5;
          bVar12 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_00cb65d0:
            uVar6 = -(uint)bVar12 | 1;
            goto LAB_00cb65d5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar12 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_00cb65d0;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_00cb65d5:
        if (uVar6 == 0) {
          iVar8 = (&DAT_012b752c)[iVar3 * 2];
          break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar3 * 8;
      } while ((&DAT_012b752c)[iVar3 * 2] != 0);
    }
  }
  switch(iVar8) {
  case 1:
    pcVar11 = "PKCS#1 padding not allowed with RSA-PSS";
    goto LAB_00cb664d;
  case 3:
    pcVar11 = "No padding not allowed with RSA-PSS";
    goto LAB_00cb664d;
  case 4:
    pcVar11 = "OAEP padding not allowed for signing / verifying";
    break;
  case 5:
    pcVar11 = "X.931 padding not allowed with RSA-PSS";
LAB_00cb664d:
    iVar2 = func_0x00bb6560(*(undefined4 *)(in_stack_0000028c + 8),0xf000);
    if (iVar2 != 0) break;
LAB_00cb668f:
    iVar2 = func_0x00bc09d0(in_stack_00000290,"saltlen");
    if (iVar2 == 0) {
LAB_00cb6943:
      iVar2 = func_0x00bc09d0(in_stack_00000290,"mgf1-digest");
      if (iVar2 != 0) {
        iVar3 = func_0x00bc09d0(in_stack_00000290,"mgf1-properties");
        param_4 = &stack0x00000050;
        iVar2 = func_0x00bc0850(iVar2,&param_4,0x32);
        if (iVar2 == 0) goto LAB_00cb6837;
        if (iVar3 != 0) {
          param_5 = &stack0x00000184;
          iVar2 = func_0x00bc0850(iVar3,&param_5,0x100);
          if (iVar2 == 0) goto LAB_00cb6837;
        }
        if (iVar8 != 6) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x6df,
                          "rsa_set_ctx_params");
          pcVar11 = (char *)0x0;
          uVar13 = 0xa7;
          goto LAB_00cb682b;
        }
      }
      *(int *)(in_stack_0000028c + 0x94) = param_2;
      *(int *)(in_stack_0000028c + 0x54) = iVar8;
      if (((*(int *)(in_stack_0000028c + 0x14) == 0) && (param_1 == (undefined *)0x0)) &&
         (iVar8 == 6)) {
        param_1 = &DAT_0104e908;
      }
      if ((param_4 == (undefined1 *)0x0) ||
         (iVar8 = func_0x00cb8000(in_stack_0000028c,param_4,param_5), iVar8 != 0)) {
        if (param_1 == (undefined *)0x0) {
          func_0x00cb7830(in_stack_0000028c,0,0,*(undefined4 *)(in_stack_0000028c + 0x1c));
        }
        else {
          func_0x00cb7de0(in_stack_0000028c,param_1,param_6,"RSA Sign Set Ctx");
        }
      }
      goto LAB_00cb6837;
    }
    if (iVar8 == 6) {
      if (*(int *)(iVar2 + 4) == 1) {
        iVar2 = func_0x00bbfcd0(iVar2,&param_2);
        if (iVar2 == 0) goto LAB_00cb6837;
      }
      else {
        if (*(int *)(iVar2 + 4) != 4) goto LAB_00cb6837;
        pbVar9 = *(byte **)(iVar2 + 8);
        pcVar11 = "digest";
        pbVar5 = pbVar9;
        do {
          bVar1 = *pbVar5;
          bVar12 = bVar1 < (byte)*pcVar11;
          if (bVar1 != *pcVar11) {
LAB_00cb6715:
            uVar6 = -(uint)bVar12 | 1;
            goto LAB_00cb671a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar12 = bVar1 < ((byte *)pcVar11)[1];
          if (bVar1 != ((byte *)pcVar11)[1]) goto LAB_00cb6715;
          pbVar5 = pbVar5 + 2;
          pcVar11 = (char *)((byte *)pcVar11 + 2);
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_00cb671a:
        if (uVar6 == 0) {
          param_2 = -1;
        }
        else {
          pbVar10 = &DAT_01015f10;
          pbVar5 = pbVar9;
          do {
            bVar1 = *pbVar5;
            bVar12 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00cb6751:
              uVar6 = -(uint)bVar12 | 1;
              goto LAB_00cb6756;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar12 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00cb6751;
            pbVar5 = pbVar5 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          uVar6 = 0;
LAB_00cb6756:
          if (uVar6 == 0) {
            param_2 = -3;
          }
          else {
            pbVar10 = &DAT_01060b80;
            pbVar5 = pbVar9;
            do {
              bVar1 = *pbVar5;
              bVar12 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_00cb6790:
                uVar6 = -(uint)bVar12 | 1;
                goto LAB_00cb6795;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar12 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_00cb6790;
              pbVar5 = pbVar5 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            uVar6 = 0;
LAB_00cb6795:
            if (uVar6 == 0) {
              param_2 = -2;
            }
            else {
              pcVar11 = "auto-digestmax";
              pbVar5 = pbVar9;
              do {
                bVar1 = *pbVar5;
                bVar12 = bVar1 < (byte)*pcVar11;
                if (bVar1 != *pcVar11) {
LAB_00cb67d0:
                  uVar6 = -(uint)bVar12 | 1;
                  goto LAB_00cb67d5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar12 = bVar1 < ((byte *)pcVar11)[1];
                if (bVar1 != ((byte *)pcVar11)[1]) goto LAB_00cb67d0;
                pbVar5 = pbVar5 + 2;
                pcVar11 = (char *)((byte *)pcVar11 + 2);
              } while (bVar1 != 0);
              uVar6 = 0;
LAB_00cb67d5:
              if (uVar6 == 0) {
                param_2 = -4;
              }
              else {
                param_2 = func_0x008aafde(pbVar9);
              }
            }
          }
        }
      }
      if (-5 < param_2) {
        if (*(int *)(in_stack_0000028c + 0x98) != -1) {
          if ((param_2 == -4) || (param_2 == -2)) {
            if ((*(uint *)(in_stack_0000028c + 0xc) & 0x8020) == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x6b0,
                              "rsa_set_ctx_params");
              pcVar11 = "Cannot use autodetected salt length";
              goto LAB_00cb6829;
            }
          }
          else if (param_2 == -1) {
            iVar2 = func_0x00bc4320(*(undefined4 *)(in_stack_0000028c + 0x14));
            if (iVar2 < *(int *)(in_stack_0000028c + 0x98)) {
              FUN_00bc4f50();
              func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x6b7,
                              "rsa_set_ctx_params");
              uVar13 = *(undefined4 *)(in_stack_0000028c + 0x98);
              uVar7 = func_0x00bc4320(*(undefined4 *)(in_stack_0000028c + 0x14));
              func_0x00bc5160(0x39,0xac,
                              "Should be more than %d, but would be set to match digest size (%d)",
                              uVar13,uVar7);
              goto LAB_00cb6837;
            }
          }
          else if ((-1 < param_2) && (param_2 < *(int *)(in_stack_0000028c + 0x98))) {
            FUN_00bc4f50();
            func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x6c2,
                            "rsa_set_ctx_params");
            func_0x00bc5160(0x39,0xac,"Should be more than %d, but would be set to %d",
                            *(undefined4 *)(in_stack_0000028c + 0x98),param_2);
            goto LAB_00cb6837;
          }
        }
        goto LAB_00cb6943;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x6a6,"rsa_set_ctx_params")
      ;
      pcVar11 = (char *)0x0;
LAB_00cb6829:
      uVar13 = 0x70;
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",0x685,"rsa_set_ctx_params")
      ;
      pcVar11 = "PSS saltlen can only be specified if PSS padding has been specified first";
      uVar13 = 0x88;
    }
    goto LAB_00cb682b;
  case 6:
    if ((*(uint *)(in_stack_0000028c + 0xc) & 0xc030) != 0) goto LAB_00cb668f;
    pcVar11 = "PSS padding only allowed for sign and verify operations";
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\signature\\rsa_sig.c",
                  (uint)(pcVar11 != (char *)0x0) * 2 + 0x679,"rsa_set_ctx_params");
  uVar13 = 0xa5;
LAB_00cb682b:
  func_0x00bc5160(0x39,uVar13,pcVar11);
LAB_00cb6837:
  FUN_008ab370();
  return;
}



undefined ** FUN_00cb6a90(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 != 0) {
    ppuVar1 = &PTR_s_pad_mode_0109c020;
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
      ppuVar1 = &PTR_s_digest_0109bf90;
    }
    return ppuVar1;
  }
  return &PTR_s_digest_0109bf90;
}



int FUN_00cb6ab0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x80) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4615. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x80))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x70), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cb6ad0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x7c))(0,uVar1);
    return iVar2;
  }
  return 0;
}



int FUN_00cb6af0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x88) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4715. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x88))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x6c), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cb6b10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x78) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x78))(0,uVar1);
    return iVar2;
  }
  return 0;
}



undefined4 FUN_00cb6b30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0xc) != 0x8000) {
      return 0;
    }
    iVar2 = func_0x00bc09d0(param_2,"signature");
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)(param_1 + 0x9c);
      FUN_00bbc580(*puVar1,"providers\\implementations\\signature\\rsa_sig.c",1999);
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      iVar2 = func_0x00bc01d0(iVar2,puVar1,0,(undefined4 *)(param_1 + 0xa0));
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



undefined ** FUN_00cb6bb0(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 != 0) {
    ppuVar1 = &PTR_s_signature_0109c084;
    if (*(int *)(param_1 + 0xc) != 0x8000) {
      ppuVar1 = (undefined **)0x0;
    }
    return ppuVar1;
  }
  return (undefined **)0x0;
}



void FUN_00cb6bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"RIPEMD160",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb6c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"RIPEMD160",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb6c30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"RIPEMD160",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb6c60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"RIPEMD160",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb6c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"RIPEMD160",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb6cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_0104e908,0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb6cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_0104e908,0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb6d20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_0104e908,0x20,1,"RSA Sigalg Verify Init"
                 );
  return;
}



void FUN_00cb6d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_0104e908,0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb6d80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_0104e908,0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb6db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-224",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb6de0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-224",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb6e10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-224",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb6e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-224",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb6e70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-224",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb6ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-256",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb6ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-256",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb6f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-256",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb6f30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-256",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb6f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-256",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb6f90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-384",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb6fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-384",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb6ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-384",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb7020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-384",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb7050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-384",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb70b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb70e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb7110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb7140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/224",0x10,1,"RSA Sigalg Sign Init")
  ;
  return;
}



void FUN_00cb71a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/224",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb71d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/224",0x20,1,
                  "RSA Sigalg Verify Init");
  return;
}



void FUN_00cb7200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/224",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb7230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/224",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/256",0x10,1,"RSA Sigalg Sign Init")
  ;
  return;
}



void FUN_00cb7290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/256",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb72c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/256",0x20,1,
                  "RSA Sigalg Verify Init");
  return;
}



void FUN_00cb72f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/256",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb7320(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA2-512/256",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-224",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb7380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-224",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb73b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-224",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb73e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-224",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb7410(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-224",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7440(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-256",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb7470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-256",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb74a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-256",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb74d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-256",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb7500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-256",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7530(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-384",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb7560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-384",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb7590(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-384",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb75c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-384",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb75f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-384",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-512",0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb7650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-512",0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb7680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-512",0x20,1,"RSA Sigalg Verify Init");
  return;
}



void FUN_00cb76b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-512",0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb76e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,"SHA3-512",0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



void FUN_00cb7710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_01055270,0x10,1,"RSA Sigalg Sign Init");
  return;
}



void FUN_00cb7740(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_01055270,0x4000,1,
                  "RSA Sigalg Sign Message Init");
  return;
}



void FUN_00cb7770(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_01055270,0x20,1,"RSA Sigalg Verify Init"
                 );
  return;
}



void FUN_00cb77a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_01055270,0x8000,1,
                  "RSA Sigalg Verify Message Init");
  return;
}



void FUN_00cb77d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cb8130(param_1,param_2,FUN_00cb6b30,param_3,&DAT_01055270,0x40,1,
                  "RSA Sigalg Verify Recover Init");
  return;
}



undefined4 * FUN_00cb8d20(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x218,"providers\\implementations\\signature\\eddsa_sig.c",0xab);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = func_0x00bc3c60(param_1);
      *puVar2 = uVar3;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_00cb8d60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 2)) {
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffe1 | 1;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cb8dc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 2)) {
    *(undefined4 *)(param_1 + 0x10c) = 3;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffed | 0xd;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cb8e20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 2)) {
    *(undefined4 *)(param_1 + 0x10c) = 2;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffffff5 | 0x15;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cb8e80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 3)) {
    *(undefined4 *)(param_1 + 0x10c) = 4;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffe5 | 1;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cb8ee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 3)) {
    *(undefined4 *)(param_1 + 0x10c) = 5;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffed | 9;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_00cb8f40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int unaff_retaddr;
  uint in_stack_0000004c;
  undefined4 *in_stack_00000054;
  int in_stack_00000058;
  undefined4 *in_stack_0000005c;
  uint in_stack_00000060;
  undefined1 *in_stack_00000064;
  int in_stack_00000068;
  
  func_0x00e87f70();
  puVar7 = in_stack_00000064;
  puVar3 = in_stack_0000005c;
  iVar2 = in_stack_00000058;
  puVar1 = in_stack_00000054;
  in_stack_0000004c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar5 = in_stack_00000054[1];
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
LAB_00cb8fb3:
    FUN_008ab370();
    return;
  }
  if (iVar2 != 0) {
    if (in_stack_00000060 < 0x40) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x18e,"ed25519_sign");
      func_0x00bc5160(0x39,0x6a,0);
      goto LAB_00cb8fb3;
    }
    iVar4 = *(int *)(iVar5 + 0x48);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x192,"ed25519_sign");
      func_0x00bc5160(0x39,0xdd,0);
      FUN_008ab370();
      return;
    }
    uVar6 = puVar1[0x44];
    iVar8 = in_stack_00000068;
    if ((uVar6 & 8) == 0) {
      if ((uVar6 & 2) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1bb,"ed25519_sign");
        func_0x00bc5160(0x39,0xf3,0);
        FUN_008ab370();
        return;
      }
    }
    else if ((uVar6 & 2) == 0) {
      iVar4 = func_0x00bd4820(*puVar1,"SHA512",0,puVar7,in_stack_00000068,&stack0x0000000c,
                              &stack0x00000000);
      if ((iVar4 == 0) || (unaff_retaddr != 0x40)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1af,"ed25519_sign");
        func_0x00bc5160(0x39,0xf1,0);
        FUN_008ab370();
        return;
      }
      uVar6 = puVar1[0x44];
      puVar7 = &stack0x0000000c;
      iVar4 = *(int *)(iVar5 + 0x48);
      iVar8 = 0x40;
    }
    else if (in_stack_00000068 != 0x40) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1b5,"ed25519_sign");
      func_0x00bc5160(0x39,0xa6,0);
      FUN_008ab370();
      return;
    }
    iVar5 = func_0x00c5c6e0(iVar2,puVar7,iVar8,iVar5 + 0xc,iVar4,(byte)(uVar6 >> 2) & 1,
                            (byte)(uVar6 >> 3) & 1,(byte)(uVar6 >> 4) & 1,puVar1 + 0x45,puVar1[0x85]
                            ,*puVar1,0);
    if (iVar5 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1c3,"ed25519_sign");
      func_0x00bc5160(0x39,0xaf,0);
      FUN_008ab370();
      return;
    }
  }
  *puVar3 = 0x40;
  FUN_008ab370();
  return;
}



void FUN_00cb91f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint in_stack_00000044;
  undefined4 *in_stack_0000004c;
  int in_stack_00000050;
  undefined4 *in_stack_00000054;
  uint in_stack_00000058;
  undefined1 *in_stack_0000005c;
  int in_stack_00000060;
  undefined4 uVar9;
  
  func_0x00e87f70();
  puVar8 = in_stack_0000005c;
  puVar3 = in_stack_00000054;
  iVar2 = in_stack_00000050;
  puVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar6 = in_stack_0000004c[1];
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) goto LAB_00cb925f;
  if (iVar2 == 0) goto LAB_00cb938e;
  if (in_stack_00000058 < 0x72) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1fa,"ed448_sign");
    uVar9 = 0x6a;
  }
  else {
    iVar4 = *(int *)(iVar6 + 0x48);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1fe,"ed448_sign");
      uVar9 = 0xdd;
    }
    else {
      uVar5 = puVar1[0x44];
      iVar7 = in_stack_00000060;
      if ((uVar5 & 8) == 0) {
        if ((uVar5 & 2) != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x221,"ed448_sign");
          uVar9 = 0xf3;
          goto LAB_00cb9255;
        }
      }
      else if ((uVar5 & 2) == 0) {
        iVar4 = func_0x00cb9ea0(*puVar1,0,puVar8,in_stack_00000060,&stack0x00000004,0x40);
        if (iVar4 == 0) goto LAB_00cb925f;
        uVar5 = puVar1[0x44];
        puVar8 = &stack0x00000004;
        iVar4 = *(int *)(iVar6 + 0x48);
        iVar7 = 0x40;
      }
      else if (in_stack_00000060 != 0x40) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x21b,"ed448_sign");
        uVar9 = 0xa6;
        goto LAB_00cb9255;
      }
      iVar6 = func_0x00c78c50(*puVar1,iVar2,puVar8,iVar7,iVar6 + 0xc,iVar4,puVar1 + 0x45,
                              puVar1[0x85],(byte)(uVar5 >> 3) & 1,*(undefined4 *)(iVar6 + 4));
      if (iVar6 != 0) {
LAB_00cb938e:
        *puVar3 = 0x72;
        FUN_008ab370();
        return;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x229,"ed448_sign");
      uVar9 = 0xaf;
    }
  }
LAB_00cb9255:
  func_0x00bc5160(0x39,uVar9,0);
LAB_00cb925f:
  FUN_008ab370();
  return;
}



void FUN_00cb93b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int unaff_retaddr;
  uint in_stack_00000044;
  undefined4 *in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  undefined1 *in_stack_00000058;
  int in_stack_0000005c;
  undefined4 uVar6;
  
  func_0x00e87f70();
  puVar5 = in_stack_00000058;
  uVar6 = in_stack_00000050;
  puVar2 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = in_stack_0000004c[1];
  iVar3 = FUN_0058e2e0();
  if ((iVar3 != 0) && (in_stack_00000054 == 0x40)) {
    uVar4 = puVar2[0x44];
    iVar3 = in_stack_0000005c;
    if ((uVar4 & 8) == 0) {
      if ((uVar4 & 2) == 0) goto LAB_00cb94db;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x260,"ed25519_verify");
      uVar6 = 0xf3;
    }
    else if ((uVar4 & 2) == 0) {
      iVar3 = func_0x00bd4820(*puVar2,"SHA512",0,puVar5,in_stack_0000005c,&stack0x00000004,
                              &stack0x00000000);
      if ((iVar3 != 0) && (unaff_retaddr == 0x40)) {
        uVar4 = puVar2[0x44];
        puVar5 = &stack0x00000004;
        iVar3 = 0x40;
LAB_00cb94db:
        func_0x00c5c9b0(puVar5,iVar3,uVar6,iVar1 + 0xc,(byte)(uVar4 >> 2) & 1,(byte)(uVar4 >> 3) & 1
                        ,(byte)(uVar4 >> 4) & 1,puVar2 + 0x45,puVar2[0x85],*puVar2,
                        *(undefined4 *)(iVar1 + 4));
        FUN_008ab370();
        return;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x254,"ed25519_verify");
      uVar6 = 0xf1;
    }
    else {
      if (in_stack_0000005c == 0x40) goto LAB_00cb94db;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x25a,"ed25519_verify");
      uVar6 = 0xa6;
    }
    func_0x00bc5160(0x39,uVar6,0);
  }
  FUN_008ab370();
  return;
}



void FUN_00cb9540(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_stack_00000048;
  undefined4 in_stack_0000004c;
  int in_stack_00000050;
  undefined1 *in_stack_00000054;
  int in_stack_00000058;
  undefined4 uVar4;
  
  func_0x00e87f70();
  iVar1 = in_stack_00000048[1];
  iVar2 = FUN_0058e2e0();
  if ((iVar2 != 0) && (in_stack_00000050 == 0x72)) {
    uVar3 = in_stack_00000048[0x44];
    if ((uVar3 & 8) == 0) {
      register0x00000010 = (BADSPACEBASE *)in_stack_00000054;
      if ((uVar3 & 2) == 0) goto LAB_00cb9629;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x294,"ed448_verify");
      uVar4 = 0xf3;
    }
    else {
      if ((uVar3 & 2) == 0) {
        iVar2 = func_0x00cb9ea0(*in_stack_00000048,0,in_stack_00000054,in_stack_00000058,
                                &stack0x00000000,0x40);
        if (iVar2 == 0) goto LAB_00cb95ea;
        uVar3 = in_stack_00000048[0x44];
        in_stack_00000058 = 0x40;
LAB_00cb9629:
        func_0x00c78c90(*in_stack_00000048,register0x00000010,in_stack_00000058,in_stack_0000004c,
                        iVar1 + 0xc,in_stack_00000048 + 0x45,in_stack_00000048[0x85],
                        (byte)(uVar3 >> 3) & 1,*(undefined4 *)(iVar1 + 4));
        FUN_008ab370();
        return;
      }
      register0x00000010 = (BADSPACEBASE *)in_stack_00000054;
      if (in_stack_00000058 == 0x40) goto LAB_00cb9629;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x28e,"ed448_verify");
      uVar4 = 0xa6;
    }
    func_0x00bc5160(0x39,uVar4,0);
  }
LAB_00cb95ea:
  FUN_008ab370();
  return;
}



undefined4 FUN_00cb9670(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if ((param_3 == 0) && (*(int *)(param_1 + 4) != 0)) {
      uVar1 = FUN_00cb9ab0(param_1,param_4);
      return uVar1;
    }
    iVar2 = func_0x00cba010(param_1,param_3);
    if ((iVar2 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 2)) {
      *(undefined4 *)(param_1 + 0x10c) = 1;
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffe0;
      iVar2 = FUN_00cb9ab0(param_1,param_4);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x2a6,
                    "ed25519_digest_signverify_init");
    func_0x00bc5160(0x39,0x7a,"Explicit digest not allowed with EdDSA operations");
  }
  return 0;
}



undefined4 FUN_00cb9720(int param_1,char *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if ((param_3 == 0) && (*(int *)(param_1 + 4) != 0)) {
      uVar1 = FUN_00cb9ab0(param_1,param_4);
      return uVar1;
    }
    iVar2 = func_0x00cba010(param_1,param_3);
    if ((iVar2 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 3)) {
      *(undefined4 *)(param_1 + 0x10c) = 4;
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffe4;
      iVar2 = FUN_00cb9ab0(param_1,param_4);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x2c8,
                    "ed448_digest_signverify_init");
    func_0x00bc5160(0x39,0x7a,"Explicit digest not allowed with EdDSA operations");
  }
  return 0;
}



void thunk_FUN_00cb8f40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int unaff_retaddr;
  uint in_stack_0000004c;
  undefined4 *in_stack_00000054;
  int in_stack_00000058;
  undefined4 *in_stack_0000005c;
  uint in_stack_00000060;
  undefined1 *in_stack_00000064;
  int in_stack_00000068;
  
  func_0x00e87f70();
  puVar7 = in_stack_00000064;
  puVar3 = in_stack_0000005c;
  iVar2 = in_stack_00000058;
  puVar1 = in_stack_00000054;
  in_stack_0000004c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar5 = in_stack_00000054[1];
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
LAB_00cb8fb3:
    FUN_008ab370();
    return;
  }
  if (iVar2 != 0) {
    if (in_stack_00000060 < 0x40) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x18e,"ed25519_sign");
      func_0x00bc5160(0x39,0x6a,0);
      goto LAB_00cb8fb3;
    }
    iVar4 = *(int *)(iVar5 + 0x48);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x192,"ed25519_sign");
      func_0x00bc5160(0x39,0xdd,0);
      FUN_008ab370();
      return;
    }
    uVar6 = puVar1[0x44];
    iVar8 = in_stack_00000068;
    if ((uVar6 & 8) == 0) {
      if ((uVar6 & 2) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1bb,"ed25519_sign");
        func_0x00bc5160(0x39,0xf3,0);
        FUN_008ab370();
        return;
      }
    }
    else if ((uVar6 & 2) == 0) {
      iVar4 = func_0x00bd4820(*puVar1,"SHA512",0,puVar7,in_stack_00000068,&stack0x0000000c,
                              &stack0x00000000);
      if ((iVar4 == 0) || (unaff_retaddr != 0x40)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1af,"ed25519_sign");
        func_0x00bc5160(0x39,0xf1,0);
        FUN_008ab370();
        return;
      }
      uVar6 = puVar1[0x44];
      puVar7 = &stack0x0000000c;
      iVar4 = *(int *)(iVar5 + 0x48);
      iVar8 = 0x40;
    }
    else if (in_stack_00000068 != 0x40) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1b5,"ed25519_sign");
      func_0x00bc5160(0x39,0xa6,0);
      FUN_008ab370();
      return;
    }
    iVar5 = func_0x00c5c6e0(iVar2,puVar7,iVar8,iVar5 + 0xc,iVar4,(byte)(uVar6 >> 2) & 1,
                            (byte)(uVar6 >> 3) & 1,(byte)(uVar6 >> 4) & 1,puVar1 + 0x45,puVar1[0x85]
                            ,*puVar1,0);
    if (iVar5 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1c3,"ed25519_sign");
      func_0x00bc5160(0x39,0xaf,0);
      FUN_008ab370();
      return;
    }
  }
  *puVar3 = 0x40;
  FUN_008ab370();
  return;
}



void thunk_FUN_00cb91f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint in_stack_00000044;
  undefined4 *in_stack_0000004c;
  int in_stack_00000050;
  undefined4 *in_stack_00000054;
  uint in_stack_00000058;
  undefined1 *in_stack_0000005c;
  int in_stack_00000060;
  undefined4 uVar9;
  
  func_0x00e87f70();
  puVar8 = in_stack_0000005c;
  puVar3 = in_stack_00000054;
  iVar2 = in_stack_00000050;
  puVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar6 = in_stack_0000004c[1];
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) goto LAB_00cb925f;
  if (iVar2 == 0) goto LAB_00cb938e;
  if (in_stack_00000058 < 0x72) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1fa,"ed448_sign");
    uVar9 = 0x6a;
  }
  else {
    iVar4 = *(int *)(iVar6 + 0x48);
    if (iVar4 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x1fe,"ed448_sign");
      uVar9 = 0xdd;
    }
    else {
      uVar5 = puVar1[0x44];
      iVar7 = in_stack_00000060;
      if ((uVar5 & 8) == 0) {
        if ((uVar5 & 2) != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x221,"ed448_sign");
          uVar9 = 0xf3;
          goto LAB_00cb9255;
        }
      }
      else if ((uVar5 & 2) == 0) {
        iVar4 = func_0x00cb9ea0(*puVar1,0,puVar8,in_stack_00000060,&stack0x00000004,0x40);
        if (iVar4 == 0) goto LAB_00cb925f;
        uVar5 = puVar1[0x44];
        puVar8 = &stack0x00000004;
        iVar4 = *(int *)(iVar6 + 0x48);
        iVar7 = 0x40;
      }
      else if (in_stack_00000060 != 0x40) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x21b,"ed448_sign");
        uVar9 = 0xa6;
        goto LAB_00cb9255;
      }
      iVar6 = func_0x00c78c50(*puVar1,iVar2,puVar8,iVar7,iVar6 + 0xc,iVar4,puVar1 + 0x45,
                              puVar1[0x85],(byte)(uVar5 >> 3) & 1,*(undefined4 *)(iVar6 + 4));
      if (iVar6 != 0) {
LAB_00cb938e:
        *puVar3 = 0x72;
        FUN_008ab370();
        return;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x229,"ed448_sign");
      uVar9 = 0xaf;
    }
  }
LAB_00cb9255:
  func_0x00bc5160(0x39,uVar9,0);
LAB_00cb925f:
  FUN_008ab370();
  return;
}



void thunk_FUN_00cb93b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int unaff_retaddr;
  uint in_stack_00000044;
  undefined4 *in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  undefined1 *in_stack_00000058;
  int in_stack_0000005c;
  undefined4 uVar6;
  
  func_0x00e87f70();
  puVar5 = in_stack_00000058;
  uVar6 = in_stack_00000050;
  puVar2 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = in_stack_0000004c[1];
  iVar3 = FUN_0058e2e0();
  if ((iVar3 != 0) && (in_stack_00000054 == 0x40)) {
    uVar4 = puVar2[0x44];
    iVar3 = in_stack_0000005c;
    if ((uVar4 & 8) == 0) {
      if ((uVar4 & 2) == 0) goto LAB_00cb94db;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x260,"ed25519_verify");
      uVar6 = 0xf3;
    }
    else if ((uVar4 & 2) == 0) {
      iVar3 = func_0x00bd4820(*puVar2,"SHA512",0,puVar5,in_stack_0000005c,&stack0x00000004,
                              &stack0x00000000);
      if ((iVar3 != 0) && (unaff_retaddr == 0x40)) {
        uVar4 = puVar2[0x44];
        puVar5 = &stack0x00000004;
        iVar3 = 0x40;
LAB_00cb94db:
        func_0x00c5c9b0(puVar5,iVar3,uVar6,iVar1 + 0xc,(byte)(uVar4 >> 2) & 1,(byte)(uVar4 >> 3) & 1
                        ,(byte)(uVar4 >> 4) & 1,puVar2 + 0x45,puVar2[0x85],*puVar2,
                        *(undefined4 *)(iVar1 + 4));
        FUN_008ab370();
        return;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x254,"ed25519_verify");
      uVar6 = 0xf1;
    }
    else {
      if (in_stack_0000005c == 0x40) goto LAB_00cb94db;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x25a,"ed25519_verify");
      uVar6 = 0xa6;
    }
    func_0x00bc5160(0x39,uVar6,0);
  }
  FUN_008ab370();
  return;
}



void FUN_00cb9800(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint in_stack_00000044;
  undefined4 *in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  undefined1 *in_stack_00000058;
  int in_stack_0000005c;
  undefined4 uVar7;
  
  func_0x00e87f70();
  iVar4 = in_stack_0000005c;
  puVar6 = in_stack_00000058;
  uVar7 = in_stack_00000050;
  puVar2 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar1 = in_stack_0000004c[1];
  iVar3 = FUN_0058e2e0();
  if ((iVar3 != 0) && (in_stack_00000054 == 0x72)) {
    uVar5 = puVar2[0x44];
    if ((uVar5 & 8) == 0) {
      if ((uVar5 & 2) == 0) goto LAB_00cb9886;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x294,"ed448_verify");
      uVar7 = 0xf3;
    }
    else {
      if ((uVar5 & 2) == 0) {
        iVar4 = func_0x00cb9ea0(*puVar2,0,puVar6,iVar4,&stack0x00000004,0x40);
        if (iVar4 == 0) goto LAB_00cb98f5;
        uVar5 = puVar2[0x44];
        puVar6 = &stack0x00000004;
        iVar4 = 0x40;
LAB_00cb9886:
        func_0x00c78c90(*puVar2,puVar6,iVar4,uVar7,iVar1 + 0xc,puVar2 + 0x45,puVar2[0x85],
                        (byte)(uVar5 >> 3) & 1,*(undefined4 *)(iVar1 + 4));
        FUN_008ab370();
        return;
      }
      if (iVar4 == 0x40) goto LAB_00cb9886;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x28e,"ed448_verify");
      uVar7 = 0xa6;
    }
    func_0x00bc5160(0x39,uVar7,0);
  }
LAB_00cb98f5:
  FUN_008ab370();
  return;
}



void FUN_00cb9940(int param_1)

{
  FUN_00c15480(*(undefined4 *)(param_1 + 4));
  FUN_00bbc580(param_1,"providers\\implementations\\signature\\eddsa_sig.c",0x2e9);
  return;
}



undefined4 * FUN_00cb9970(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x218,"providers\\implementations\\signature\\eddsa_sig.c",0x2f4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = param_1;
      puVar4 = puVar2;
      for (iVar1 = 0x86; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2[1] = 0;
      if (param_1[1] != 0) {
        iVar1 = func_0x00c0f9e0(param_1[1]);
        if (iVar1 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x2fc,"eddsa_dupctx")
          ;
          func_0x00bc5160(0x39,0xc0103,0);
          FUN_00c15480(puVar2[1]);
          FUN_00bbc580(puVar2,"providers\\implementations\\signature\\eddsa_sig.c",0x2e9);
          return (undefined4 *)0x0;
        }
      }
      puVar2[1] = param_1[1];
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



undefined ** FUN_00cb9a30(void)

{
  return &PTR_s_ED25519_012b755c;
}



undefined ** FUN_00cb9a40(void)

{
  return &PTR_s_ED448_012b7564;
}



bool FUN_00cb9a50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"algorithm-id");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1050(iVar1,-(uint)(*(int *)(param_1 + 0x108) != 0) & param_1 + 8U,
                            *(int *)(param_1 + 0x108));
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00cb9aa0(void)

{
  return &PTR_s_algorithm_id_0109d168;
}



void FUN_00cb9ab0(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_stack_00000038;
  int in_stack_00000040;
  int in_stack_00000044;
  
  func_0x00e87f70();
  iVar3 = in_stack_00000044;
  iVar1 = in_stack_00000040;
  in_stack_00000038 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (in_stack_00000040 == 0) goto LAB_00cb9b4a;
  if (in_stack_00000044 == 0) goto LAB_00cb9ce0;
  iVar2 = func_0x00bc09d0(in_stack_00000044,"instance");
  if (iVar2 != 0) {
    param_1 = 0;
    memset(&stack0x00000005,0,0x31);
    if ((*(byte *)(iVar1 + 0x110) & 1) != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\eddsa_sig.c",0x347,
                      "eddsa_set_ctx_params");
      func_0x00bc5160(0x39,0xf2,"the EdDSA instance is preset, you may not try to specify it",0);
LAB_00cb9b4a:
      FUN_008ab370();
      return;
    }
    iVar2 = func_0x00bc0850(iVar2,&stack0x00000000,0x32);
    if (iVar2 == 0) goto LAB_00cb9b4a;
    iVar2 = func_0x00bbbfe0(&param_1,"Ed25519");
    if (iVar2 == 0) {
      func_0x00cb9f20(iVar1,1,0,*(uint *)(iVar1 + 0x110) >> 1 & 1);
    }
    else {
      iVar2 = func_0x00bbbfe0(&param_1,"Ed25519ctx");
      if (iVar2 == 0) {
        func_0x00cb9f20(iVar1,2,0,*(uint *)(iVar1 + 0x110) >> 1 & 1);
      }
      else {
        iVar2 = func_0x00bbbfe0(&param_1,"Ed25519ph");
        if (iVar2 == 0) {
          uVar5 = *(uint *)(iVar1 + 0x110);
          if (*(int *)(*(int *)(iVar1 + 4) + 0x50) == 2) {
            *(undefined4 *)(iVar1 + 0x10c) = 3;
            uVar4 = uVar5 | 0xc;
LAB_00cb9c7d:
            uVar4 = uVar4 & 0xffffffef;
LAB_00cb9c80:
            *(uint *)(iVar1 + 0x110) = (uVar4 & 0xfffffffe ^ uVar5) & 2 ^ uVar4 & 0xfffffffe;
          }
        }
        else {
          iVar2 = func_0x00bbbfe0(&param_1,"Ed448");
          if (iVar2 == 0) {
            uVar5 = *(uint *)(iVar1 + 0x110);
            if (*(int *)(*(int *)(iVar1 + 4) + 0x50) == 3) {
              *(undefined4 *)(iVar1 + 0x10c) = 4;
              uVar4 = uVar5 & 0xffffffe7;
              goto LAB_00cb9c80;
            }
          }
          else {
            iVar2 = func_0x00bbbfe0(&param_1,"Ed448ph");
            if (iVar2 != 0) goto LAB_00cb9b4a;
            uVar5 = *(uint *)(iVar1 + 0x110);
            if (*(int *)(*(int *)(iVar1 + 4) + 0x50) == 3) {
              *(undefined4 *)(iVar1 + 0x10c) = 5;
              uVar4 = uVar5 | 8;
              goto LAB_00cb9c7d;
            }
          }
        }
      }
    }
  }
  iVar3 = func_0x00bc09d0(iVar3,"context-string");
  if (iVar3 != 0) {
    iVar3 = func_0x00bc01d0(iVar3,&stack0x00000000,0xff,(undefined4 *)(iVar1 + 0x214));
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x214) = 0;
      FUN_008ab370();
      return;
    }
  }
LAB_00cb9ce0:
  FUN_008ab370();
  return;
}



undefined ** FUN_00cb9d00(void)

{
  return &PTR_s_instance_0109d1b8;
}



undefined ** FUN_00cb9d10(void)

{
  return &PTR_s_context_string_0109d1f4;
}



undefined4 FUN_00cb9d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 2)) {
    *(undefined4 *)(param_1 + 0x10c) = 3;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffef | 0xf;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cb9d80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 2)) {
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffe2 | 2;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cb9de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 3)) {
    *(undefined4 *)(param_1 + 0x10c) = 5;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffef | 0xb;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cb9e40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00cba010(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x50) == 3)) {
    *(undefined4 *)(param_1 + 0x10c) = 4;
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xffffffe6 | 2;
    iVar1 = FUN_00cb9ab0(param_1,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 * FUN_00cba1e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x16c,"providers\\implementations\\signature\\ecdsa_sig.c",0x95);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[4] = puVar2[4] | 2;
      uVar3 = func_0x00bc3c60(param_1);
      *puVar2 = uVar3;
      if (param_2 != 0) {
        iVar1 = func_0x00bbbc70(param_2,"providers\\implementations\\signature\\ecdsa_sig.c",0x9f);
        puVar2[1] = iVar1;
        if (iVar1 == 0) {
          FUN_00bbc580(puVar2,"providers\\implementations\\signature\\ecdsa_sig.c",0xa0);
          puVar2 = (undefined4 *)0x0;
        }
      }
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



bool FUN_00cba260(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return false;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
LAB_00cba2c6:
      *(undefined4 *)(param_1 + 0xc) = 0x10;
      iVar1 = FUN_00cbaa10(param_1,param_3);
      return iVar1 != 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\ecdsa_sig.c",0x111,
                    "ecdsa_signverify_init");
    func_0x00bc5160(0x39,0x72,0);
  }
  else {
    iVar1 = func_0x00c12be0(param_2);
    if (iVar1 != 0) {
      FUN_00c12650(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 8) = param_2;
      goto LAB_00cba2c6;
    }
  }
  return false;
}



bool FUN_00cba2f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return false;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
LAB_00cba356:
      *(undefined4 *)(param_1 + 0xc) = 0x20;
      iVar1 = FUN_00cbaa10(param_1,param_3);
      return iVar1 != 0;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\signature\\ecdsa_sig.c",0x111,
                    "ecdsa_signverify_init");
    func_0x00bc5160(0x39,0x72,0);
  }
  else {
    iVar1 = func_0x00c12be0(param_2);
    if (iVar1 != 0) {
      FUN_00c12650(*(undefined4 *)(param_1 + 8));
      *(int *)(param_1 + 8) = param_2;
      goto LAB_00cba356;
    }
  }
  return false;
}



undefined4
FUN_00cba380(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != 0x4000) {
    uVar1 = func_0x00cbb8d0(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_2 == 0) {
    uVar1 = FUN_00cba420(param_1,0,param_3,param_4);
    return uVar1;
  }
  iVar2 = func_0x00bd3e10(*(undefined4 *)(param_1 + 0x150),param_5,param_6);
  if (iVar2 < 1) {
    return 0;
  }
  uVar1 = FUN_00cba420(param_1,param_2,param_3,param_4);
  return uVar1;
}



void FUN_00cba400(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    return;
  }
  func_0x00bd3e10(*(undefined4 *)(param_1 + 0x150),param_2,param_3);
  return;
}



void FUN_00cba420(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_stack_00000044;
  int in_stack_0000004c;
  int in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  
  func_0x00e87f70();
  uVar3 = in_stack_00000054;
  iVar2 = in_stack_00000050;
  iVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar4 = FUN_0058e2e0();
  if (((iVar4 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x150) != 0)) {
    if (iVar2 != 0) {
      iVar4 = func_0x00bd3c80(*(int *)(iVar1 + 0x150),&stack0x00000004,&stack0x00000000);
      if (iVar4 == 0) goto LAB_00cba4a8;
    }
    func_0x00cbb8d0(iVar1,iVar2,uVar3,in_stack_00000058,&stack0x00000004,0);
    FUN_008ab370();
    return;
  }
LAB_00cba4a8:
  FUN_008ab370();
  return;
}



undefined4
FUN_00cba4c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xc) == 0x8000) {
    iVar1 = func_0x00cbb9e0(param_1,param_2,param_3);
    if (0 < iVar1) {
      iVar1 = func_0x00bd3e10(*(undefined4 *)(param_1 + 0x150),param_4,param_5);
      if (0 < iVar1) {
        uVar2 = FUN_00cba550(param_1);
        return uVar2;
      }
    }
  }
  else {
    iVar1 = FUN_0058e2e0();
    if (iVar1 != 0) {
      if ((*(int *)(param_1 + 0x154) == 0) || (param_5 == *(int *)(param_1 + 0x154))) {
        uVar2 = func_0x00c55fe0(0,param_4,param_5,param_2,param_3,*(undefined4 *)(param_1 + 8));
        return uVar2;
      }
    }
  }
  return 0;
}



void FUN_00cba550(void)

{
  int iVar1;
  int iVar2;
  uint in_stack_00000044;
  int in_stack_0000004c;
  
  func_0x00e87f70();
  iVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar2 = FUN_0058e2e0();
  if (((iVar2 != 0) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x150) != 0)) {
    iVar2 = func_0x00bd3c80(*(int *)(iVar1 + 0x150),&stack0x00000004,&stack0x00000000);
    if (iVar2 != 0) {
      func_0x00cbb9a0(iVar1,*(undefined4 *)(iVar1 + 0x158),*(undefined4 *)(iVar1 + 0x15c),
                      &stack0x00000004,0);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00cba5e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00cbb3b0(param_1,param_2,param_3,param_4,0x4000,"ECDSA Digest Sign Init");
  return;
}



// WARNING: Possible PIC construction at 0x00c0c6d0: Changing call to branch
// WARNING: Possible PIC construction at 0x00c0cbf0: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00c0c6d5)
// WARNING: Removing unreachable block (ram,0x00c0cbf5)

undefined4 FUN_00cba610(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (((param_1 == 0) || (iVar3 = *(int *)(param_1 + 0x150), iVar3 == 0)) ||
     ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    return 0;
  }
  while( true ) {
    iVar5 = unaff_EDI;
    piVar6 = unaff_ESI;
    if (param_3 == 0) {
      return 1;
    }
    if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\digest.c",0x187,"EVP_DigestUpdate");
      func_0x00bc5160(6,0xbd,0);
      return 0;
    }
    puVar1 = *(uint **)(iVar3 + 0x14);
    if (((puVar1 == (uint *)0x0) || (uVar2 = *puVar1, (uVar2 & 0xc1f0) == 0)) || (puVar1[6] == 0))
    break;
    unaff_EDI = iVar3;
    if (uVar2 == 0x80) {
      unaff_ESI = *(int **)(iVar3 + 0x14);
      if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1a5,"EVP_DigestSignUpdate");
        func_0x00bc5160(6,0xbd,0);
        return 0;
      }
      if (unaff_ESI != (int *)0x0) {
        if (((*unaff_ESI == 0x80) && (unaff_ESI[6] != 0)) && (unaff_ESI[5] != 0)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_ESI[5] + 0x4c);
          if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00c0c6a7. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar4 = (*UNRECOVERED_JUMPTABLE_00)();
            return uVar4;
          }
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1b0,"EVP_DigestSignUpdate");
          func_0x00bc5160(6,0xc0101,0);
          return 0;
        }
        if (((*(byte *)(unaff_ESI + 0x15) & 1) != 0) &&
           (iVar5 = (**(code **)(unaff_ESI[0x10] + 0x80))(unaff_ESI,iVar3,iVar5,piVar6), iVar5 == 0)
           ) {
          return 0;
        }
        unaff_ESI[0x15] = unaff_ESI[0x15] & 0xfffffffe;
      }
    }
    else {
      if (uVar2 != 0x100) {
        FUN_00bc4f50();
        uVar4 = 0x19a;
        goto LAB_00bd3eab;
      }
      unaff_ESI = *(int **)(iVar3 + 0x14);
      if ((*(uint *)(iVar3 + 0xc) & 0x800) != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1cd,"EVP_DigestVerifyUpdate");
        func_0x00bc5160(6,0xbd,0);
        return 0;
      }
      if (unaff_ESI != (int *)0x0) {
        if (((*unaff_ESI == 0x100) && (unaff_ESI[6] != 0)) && (unaff_ESI[5] != 0)) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_ESI[5] + 0x5c);
          if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00c0cbc7. Too many branches
                    // WARNING: Treating indirect jump as call
            uVar4 = (*UNRECOVERED_JUMPTABLE_00)();
            return uVar4;
          }
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\m_sigver.c",0x1d8,"EVP_DigestVerifyUpdate");
          func_0x00bc5160(6,0xc0101,0);
          return 0;
        }
        if (((*(byte *)(unaff_ESI + 0x15) & 1) != 0) &&
           (iVar5 = (**(code **)(unaff_ESI[0x10] + 0x80))(unaff_ESI,iVar3,iVar5,piVar6), iVar5 == 0)
           ) {
          return 0;
        }
        unaff_ESI[0x15] = unaff_ESI[0x15] & 0xfffffffe;
      }
    }
  }
  iVar5 = *(int *)(iVar3 + 4);
  if (((iVar5 == 0) || (*(int *)(iVar5 + 0x40) == 0)) || ((*(uint *)(iVar3 + 0xc) & 0x100) != 0)) {
    if (*(code **)(iVar3 + 0x18) != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00bd3f17. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar4 = (**(code **)(iVar3 + 0x18))();
      return uVar4;
    }
    return 0;
  }
  if (*(code **)(iVar5 + 0x50) != (code *)0x0) {
    uVar4 = (**(code **)(iVar5 + 0x50))(*(undefined4 *)(iVar3 + 0x1c),param_2,param_3);
    return uVar4;
  }
  FUN_00bc4f50();
  uVar4 = 0x1a4;
LAB_00bd3eab:
  func_0x00bc5050("crypto\\evp\\digest.c",uVar4,"EVP_DigestUpdate");
  func_0x00bc5160(6,0xbd,0);
  return 0;
}



undefined4 FUN_00cba640(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    uVar1 = FUN_00cba420(param_1,param_2,param_3,param_4);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    return uVar1;
  }
  return 0;
}



void FUN_00cba670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00cbb3b0(param_1,param_2,param_3,param_4,0x8000,"ECDSA Digest Verify Init");
  return;
}



undefined4 FUN_00cba6a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0058e2e0();
  if ((((iVar1 != 0) && (param_1 != 0)) && (*(int *)(param_1 + 0x150) != 0)) &&
     ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
    iVar1 = func_0x00cbb9e0(param_1,param_2,param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_00cba550(param_1);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    return uVar2;
  }
  return 0;
}



void FUN_00cba700(int param_1)

{
  func_0x00bd45b0(*(undefined4 *)(param_1 + 0x150));
  FUN_00bd4770(*(undefined4 *)(param_1 + 0x14c));
  FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\signature\\ecdsa_sig.c",
               0x265);
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x158),"providers\\implementations\\signature\\ecdsa_sig.c"
               ,0x266);
  FUN_00c12650(*(undefined4 *)(param_1 + 8));
  FUN_00bba080(*(undefined4 *)(param_1 + 0x160));
  FUN_00bba080(*(undefined4 *)(param_1 + 0x164));
  FUN_00bbc580(param_1,"providers\\implementations\\signature\\ecdsa_sig.c",0x26a);
  return;
}



undefined4 * FUN_00cba780(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           FUN_00bbc830(0x16c,"providers\\implementations\\signature\\ecdsa_sig.c",0x275);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = param_1;
  puVar4 = puVar2;
  for (iVar1 = 0x5b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2[2] = 0;
  puVar2[1] = 0;
  if ((((param_1[2] == 0) || (iVar1 = func_0x00c12be0(param_1[2]), iVar1 != 0)) &&
      (param_1[0x58] == 0)) && (param_1[0x59] == 0)) {
    puVar2[2] = param_1[2];
    if ((param_1[0x53] == 0) || (iVar1 = FUN_00bd4800(param_1[0x53]), iVar1 != 0)) {
      puVar2[0x53] = param_1[0x53];
      if (param_1[0x54] != 0) {
        iVar1 = func_0x00bd46b0();
        puVar2[0x54] = iVar1;
        if ((iVar1 == 0) || (iVar1 = func_0x00bd3f40(iVar1,param_1[0x54]), iVar1 == 0))
        goto LAB_00cba879;
      }
      if (param_1[1] != 0) {
        iVar1 = func_0x00bbbc70(param_1[1],"providers\\implementations\\signature\\ecdsa_sig.c",
                                0x290);
        puVar2[1] = iVar1;
        if (iVar1 == 0) goto LAB_00cba879;
      }
      return puVar2;
    }
  }
LAB_00cba879:
  func_0x00bd45b0(puVar2[0x54]);
  FUN_00bd4770(puVar2[0x53]);
  FUN_00bbc580(puVar2[1],"providers\\implementations\\signature\\ecdsa_sig.c",0x265);
  FUN_00bbc580(puVar2[0x56],"providers\\implementations\\signature\\ecdsa_sig.c",0x266);
  FUN_00c12650(puVar2[2]);
  FUN_00bba080(puVar2[0x58]);
  FUN_00bba080(puVar2[0x59]);
  FUN_00bbc580(puVar2,"providers\\implementations\\signature\\ecdsa_sig.c",0x26a);
  return (undefined4 *)0x0;
}



undefined ** FUN_00cba900(void)

{
  return &PTR_DAT_012b756c;
}



bool FUN_00cba910(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"algorithm-id");
  if ((iVar1 != 0) &&
     (iVar1 = func_0x00bc1050(iVar1,-(uint)(*(int *)(param_1 + 0x114) != 0) & param_1 + 0x14U,
                              *(int *)(param_1 + 0x114)), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"digest-size");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x154)), iVar1 == 0))
  {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"digest");
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x14c) == 0) {
      iVar2 = param_1 + 0x118;
    }
    else {
      iVar2 = FUN_00bc42b0(*(int *)(param_1 + 0x14c));
    }
    iVar1 = func_0x00bc12f0(iVar1,iVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"nonce-type");
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x168));
  return iVar1 != 0;
}



undefined ** FUN_00cbaa00(void)

{
  return &PTR_s_algorithm_id_0109d9d0;
}



void FUN_00cbaa10(undefined1 *param_1,undefined1 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 in_stack_00000040;
  uint in_stack_00000140;
  int in_stack_00000148;
  int in_stack_0000014c;
  
  func_0x00e87f70();
  iVar4 = in_stack_0000014c;
  iVar1 = in_stack_00000148;
  in_stack_00000140 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (((in_stack_00000148 != 0) && (in_stack_0000014c != 0)) &&
     ((iVar2 = func_0x00bc09d0(in_stack_0000014c,"nonce-type"), iVar2 == 0 ||
      (iVar2 = func_0x00bc0300(iVar2,iVar1 + 0x168), iVar2 != 0)))) {
    iVar2 = func_0x00bc09d0(iVar4,"digest");
    if (iVar2 != 0) {
      param_3 = 0;
      memset(&stack0x0000000d,0,0x31);
      param_1 = &param_3;
      in_stack_00000040 = 0;
      memset(&stack0x00000041,0,0xff);
      param_2 = &stack0x00000040;
      iVar3 = func_0x00bc09d0(iVar4,"properties");
      iVar2 = func_0x00bc0850(iVar2,&param_1,0x32);
      if ((iVar2 == 0) ||
         (((iVar3 != 0 && (iVar2 = func_0x00bc0850(iVar3,&param_2,0x100), iVar2 == 0)) ||
          (iVar2 = func_0x00cbb4d0(iVar1,&param_3,&stack0x00000040,"ECDSA Set Ctx"), iVar2 == 0))))
      goto LAB_00cbab77;
    }
    iVar4 = func_0x00bc09d0(iVar4,"digest-size");
    if (((iVar4 != 0) && (iVar4 = func_0x00bc0300(iVar4,&stack0x00000000), iVar4 != 0)) &&
       (((*(byte *)(iVar1 + 0x10) & 2) != 0 || (*(int *)(iVar1 + 0x154) == 0)))) {
      *(undefined4 *)(iVar1 + 0x154) = 0;
    }
  }
LAB_00cbab77:
  FUN_008ab370();
  return;
}



undefined ** FUN_00cbab90(void)

{
  return &PTR_s_digest_0109da38;
}



int FUN_00cbaba0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x150);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x80) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4615. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x80))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x70), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cbabc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14c);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x7c))(0,uVar1);
    return iVar2;
  }
  return 0;
}



int FUN_00cbabe0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x150);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x88) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4715. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x88))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x6c), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cbac00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14c);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x78) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x78))(0,uVar1);
    return iVar2;
  }
  return 0;
}



bool FUN_00cbac20(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 != 0) {
    iVar2 = func_0x00bc09d0(param_2,"nonce-type");
    if ((iVar2 != 0) && (iVar2 = func_0x00bc0300(iVar2,param_1 + 0x168), iVar2 == 0)) {
      return false;
    }
    if ((*(int *)(param_1 + 0xc) == 0x8000) &&
       (iVar2 = func_0x00bc09d0(param_2,"signature"), iVar2 != 0)) {
      puVar1 = (undefined4 *)(param_1 + 0x158);
      FUN_00bbc580(*puVar1,"providers\\implementations\\signature\\ecdsa_sig.c",0x3d6);
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      iVar2 = func_0x00bc01d0(iVar2,puVar1,0,(undefined4 *)(param_1 + 0x15c));
      return iVar2 != 0;
    }
  }
  return true;
}



undefined ** FUN_00cbacd0(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 != 0) {
    ppuVar1 = &PTR_s_signature_0109dab0;
    if (*(int *)(param_1 + 0xc) != 0x8000) {
      ppuVar1 = (undefined **)0x0;
    }
    return ppuVar1;
  }
  return (undefined **)0x0;
}



void FUN_00cbacf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,&DAT_0104e908,0x10,"ECDSA-SHA1 Sign Init");
  return;
}



void FUN_00cbad20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,&DAT_0104e908,0x4000,
                  "ECDSA-SHA1 Sign Message Init");
  return;
}



void FUN_00cbad50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,&DAT_0104e908,0x20,"ECDSA-SHA1 Verify Init");
  return;
}



void FUN_00cbad80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,&DAT_0104e908,0x8000,
                  "ECDSA-SHA1 Verify Message Init");
  return;
}



void FUN_00cbadb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-224",0x10,"ECDSA-SHA2-224 Sign Init");
  return;
}



void FUN_00cbade0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-224",0x4000,
                  "ECDSA-SHA2-224 Sign Message Init");
  return;
}



void FUN_00cbae10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-224",0x20,"ECDSA-SHA2-224 Verify Init")
  ;
  return;
}



void FUN_00cbae40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-224",0x8000,
                  "ECDSA-SHA2-224 Verify Message Init");
  return;
}



void FUN_00cbae70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-256",0x10,"ECDSA-SHA2-256 Sign Init");
  return;
}



void FUN_00cbaea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-256",0x4000,
                  "ECDSA-SHA2-256 Sign Message Init");
  return;
}



void FUN_00cbaed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-256",0x20,"ECDSA-SHA2-256 Verify Init")
  ;
  return;
}



void FUN_00cbaf00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-256",0x8000,
                  "ECDSA-SHA2-256 Verify Message Init");
  return;
}



void FUN_00cbaf30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-384",0x10,"ECDSA-SHA2-384 Sign Init");
  return;
}



void FUN_00cbaf60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-384",0x4000,
                  "ECDSA-SHA2-384 Sign Message Init");
  return;
}



void FUN_00cbaf90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-384",0x20,"ECDSA-SHA2-384 Verify Init")
  ;
  return;
}



void FUN_00cbafc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-384",0x8000,
                  "ECDSA-SHA2-384 Verify Message Init");
  return;
}



void FUN_00cbaff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-512",0x10,"ECDSA-SHA2-512 Sign Init");
  return;
}



void FUN_00cbb020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-512",0x4000,
                  "ECDSA-SHA2-512 Sign Message Init");
  return;
}



void FUN_00cbb050(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-512",0x20,"ECDSA-SHA2-512 Verify Init")
  ;
  return;
}



void FUN_00cbb080(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA2-512",0x8000,
                  "ECDSA-SHA2-512 Verify Message Init");
  return;
}



void FUN_00cbb0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-224",0x10,"ECDSA-SHA3-224 Sign Init");
  return;
}



void FUN_00cbb0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-224",0x4000,
                  "ECDSA-SHA3-224 Sign Message Init");
  return;
}



void FUN_00cbb110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-224",0x20,"ECDSA-SHA3-224 Verify Init")
  ;
  return;
}



void FUN_00cbb140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-224",0x8000,
                  "ECDSA-SHA3-224 Verify Message Init");
  return;
}



void FUN_00cbb170(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-256",0x10,"ECDSA-SHA3-256 Sign Init");
  return;
}



void FUN_00cbb1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-256",0x4000,
                  "ECDSA-SHA3-256 Sign Message Init");
  return;
}



void FUN_00cbb1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-256",0x20,"ECDSA-SHA3-256 Verify Init")
  ;
  return;
}



void FUN_00cbb200(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-256",0x8000,
                  "ECDSA-SHA3-256 Verify Message Init");
  return;
}



void FUN_00cbb230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-384",0x10,"ECDSA-SHA3-384 Sign Init");
  return;
}



void FUN_00cbb260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-384",0x4000,
                  "ECDSA-SHA3-384 Sign Message Init");
  return;
}



void FUN_00cbb290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-384",0x20,"ECDSA-SHA3-384 Verify Init")
  ;
  return;
}



void FUN_00cbb2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-384",0x8000,
                  "ECDSA-SHA3-384 Verify Message Init");
  return;
}



void FUN_00cbb2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-512",0x10,"ECDSA-SHA3-512 Sign Init");
  return;
}



void FUN_00cbb320(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-512",0x4000,
                  "ECDSA-SHA3-512 Sign Message Init");
  return;
}



void FUN_00cbb350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-512",0x20,"ECDSA-SHA3-512 Verify Init")
  ;
  return;
}



void FUN_00cbb380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbb7d0(param_1,param_2,FUN_00cbac20,param_3,"SHA3-512",0x8000,
                  "ECDSA-SHA3-512 Verify Message Init");
  return;
}



void FUN_00cbba40(undefined4 param_1,undefined4 param_2)

{
  func_0x00cbbe50(param_1,param_2,&DAT_010532a4);
  return;
}



void FUN_00cbba60(undefined4 param_1,undefined4 param_2)

{
  func_0x00cbbe50(param_1,param_2,"SIPHASH");
  return;
}



void FUN_00cbba80(undefined4 param_1,undefined4 param_2)

{
  func_0x00cbbe50(param_1,param_2,"POLY1305");
  return;
}



void FUN_00cbbaa0(undefined4 param_1,undefined4 param_2)

{
  func_0x00cbbe50(param_1,param_2,&DAT_010535b4);
  return;
}



undefined4 FUN_00cbbac0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\mac_legacy_sig.c",0x6b,
                      "mac_digest_sign_init");
      func_0x00bc5160(0x39,0x72,0);
      return 0;
    }
  }
  else if (param_3 == 0) goto LAB_00cbbb33;
  iVar1 = func_0x00cb1b00(param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00cb1b70(*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 8) = param_3;
  iVar1 = param_3;
LAB_00cbbb33:
  if (*(int *)(iVar1 + 0x10) != 0) {
    uVar2 = FUN_00bc3b90(*(int *)(iVar1 + 0x10));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if (iVar1 != 0) {
    uVar3 = FUN_00bbba70(iVar1);
  }
  iVar1 = func_0x00cd6300(*(undefined4 *)(param_1 + 0xc),0,uVar2,param_2,uVar3,
                          *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c),0,0);
  if ((iVar1 != 0) &&
     (iVar1 = func_0x00c74c80(*(undefined4 *)(param_1 + 0xc),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 8),
                              *(undefined4 *)(*(int *)(param_1 + 8) + 0xc),param_4), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_00cbbbb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1[1],param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00cbbbd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (((iVar2 != 0) && (param_1 != 0)) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = func_0x00c75010(*(int *)(param_1 + 0xc),0,param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



void FUN_00cbbc00(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 4),
               "providers\\implementations\\signature\\mac_legacy_sig.c",0xa6);
  func_0x00c74b50(*(undefined4 *)(param_1 + 0xc));
  FUN_00cb1b70(*(undefined4 *)(param_1 + 8));
  FUN_00bbc580(param_1,"providers\\implementations\\signature\\mac_legacy_sig.c",0xa9);
  return;
}



undefined4 * FUN_00cbbc40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = FUN_0058e2e0();
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)
           FUN_00bbc830(0x10,"providers\\implementations\\signature\\mac_legacy_sig.c",0xb4);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *puVar5 = *param_1;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  if (param_1[1] != 0) {
    iVar4 = func_0x00bbbc70(param_1[1],"providers\\implementations\\signature\\mac_legacy_sig.c",
                            0xbd);
    puVar5[1] = iVar4;
    if (iVar4 == 0) goto LAB_00cbbcde;
  }
  if ((param_1[2] != 0) && (iVar4 = func_0x00cb1b00(param_1[2]), iVar4 == 0)) {
LAB_00cbbcde:
    FUN_00bbc580(puVar5[1],"providers\\implementations\\signature\\mac_legacy_sig.c",0xa6);
    func_0x00c74b50(puVar5[3]);
    FUN_00cb1b70(puVar5[2]);
    FUN_00bbc580(puVar5,"providers\\implementations\\signature\\mac_legacy_sig.c",0xa9);
    return (undefined4 *)0x0;
  }
  puVar5[2] = param_1[2];
  if (param_1[3] != 0) {
    iVar4 = func_0x00c74a90(param_1[3]);
    puVar5[3] = iVar4;
    if (iVar4 == 0) goto LAB_00cbbcde;
  }
  return puVar5;
}



void FUN_00cbbd30(int param_1,undefined4 param_2)

{
  func_0x00c74c40(*(undefined4 *)(param_1 + 0xc),param_2);
  return;
}



undefined4 FUN_00cbbd50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,&DAT_010532a4,0);
  iVar2 = func_0x00ce2e00(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce2e70(iVar2);
  FUN_00ce2e30(iVar2);
  return uVar1;
}



undefined4 FUN_00cbbd90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,"SIPHASH",0);
  iVar2 = func_0x00ce2e00(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce2e70(iVar2);
  FUN_00ce2e30(iVar2);
  return uVar1;
}



undefined4 FUN_00cbbdd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,"POLY1305",0);
  iVar2 = func_0x00ce2e00(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce2e70(iVar2);
  FUN_00ce2e30(iVar2);
  return uVar1;
}



undefined4 FUN_00cbbe10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00bc3c60(param_2,&DAT_010535b4,0);
  iVar2 = func_0x00ce2e00(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = func_0x00ce2e70(iVar2);
  FUN_00ce2e30(iVar2);
  return uVar1;
}



undefined4 * FUN_00cbbf20(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0x15c,"providers\\implementations\\signature\\sm2_sig.c",0x7a)
  ;
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar2 = func_0x00bc3c60(param_1);
  *puVar1 = uVar2;
  if (param_2 != 0) {
    iVar3 = func_0x00bbbc70(param_2,"providers\\implementations\\signature\\sm2_sig.c",0x80);
    puVar1[1] = iVar3;
    if (iVar3 == 0) {
      FUN_00bbc580(puVar1,"providers\\implementations\\signature\\sm2_sig.c",0x81);
      return (undefined4 *)0x0;
    }
  }
  puVar1[0x54] = 0x20;
  puVar1[4] = 0x334d53;
  return puVar1;
}



undefined4 FUN_00cbbfa0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x00e87f70();
  iVar1 = FUN_0058e2e0();
  iVar2 = param_4;
  iVar3 = param_3;
  if (iVar1 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    if (*(int *)(param_3 + 8) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\signature\\sm2_sig.c",0x93,
                      "sm2sig_signature_init");
      func_0x00bc5160(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = func_0x00c12be0(param_4);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00c12650(*(undefined4 *)(iVar3 + 8));
    *(int *)(iVar3 + 8) = iVar2;
  }
  iVar2 = param_5;
  if (param_5 != 0) {
    iVar1 = func_0x00bc09d0(param_5,"distid");
    if (iVar1 != 0) {
      param_3 = 0;
      if ((*(byte *)(iVar3 + 0xc) & 1) == 0) {
        return 0;
      }
      if ((*(int *)(iVar1 + 0xc) != 0) &&
         (iVar1 = func_0x00bc01d0(iVar1,&param_3,0,&stack0x00000000), iVar1 == 0)) {
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(iVar3 + 0x154),"providers\\implementations\\signature\\sm2_sig.c"
                   ,0x1d1);
      *(int *)(iVar3 + 0x154) = param_3;
      *(undefined4 *)(iVar3 + 0x158) = 0;
    }
    iVar1 = func_0x00bc09d0(iVar2,"digest-size");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_1 != *(int *)(iVar3 + 0x150)) {
        return 0;
      }
    }
    iVar2 = func_0x00bc09d0(iVar2,"digest");
    if (iVar2 != 0) {
      param_3 = 0;
      iVar2 = func_0x00bc0850(iVar2,&param_3,0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = func_0x00cbcaf0(iVar3,param_3);
      if (iVar3 == 0) {
        FUN_00bbc580(param_3,"providers\\implementations\\signature\\sm2_sig.c",0x1e8);
        return 0;
      }
      FUN_00bbc580(param_3,"providers\\implementations\\signature\\sm2_sig.c",0x1eb);
    }
  }
  return 1;
}



undefined4
FUN_00cbc150(uint param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1;
  uVar2 = func_0x00c1fbd0(*(undefined4 *)(param_1 + 8));
  if (param_2 == 0) {
    *param_3 = uVar2;
    return 1;
  }
  if (uVar2 <= param_4) {
    iVar3 = *(int *)(uVar1 + 0x150);
    if ((iVar3 == 0) || (param_6 == iVar3)) {
      iVar3 = func_0x00ceabe0(param_5,param_6,param_2,&param_1,*(undefined4 *)(uVar1 + 8));
      if (0 < iVar3) {
        *param_3 = param_1;
        return 1;
      }
    }
  }
  return 0;
}



undefined4
FUN_00cbc1c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x150) != 0) && (param_5 != *(int *)(param_1 + 0x150))) {
    return 0;
  }
  uVar1 = func_0x00ceacf0(param_4,param_5,param_2,param_3,*(undefined4 *)(param_1 + 8));
  return uVar1;
}



bool FUN_00cbc200(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  func_0x00e87f70();
  iVar3 = 0;
  iVar1 = FUN_00cbbfa0(in_stack_00000020,in_stack_00000028,in_stack_0000002c);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = func_0x00cbcaf0(in_stack_00000020,in_stack_00000024);
  if (iVar1 != 0) {
    if (*(int *)(in_stack_00000020 + 0x14c) == 0) {
      iVar1 = func_0x00bd46b0();
      *(int *)(in_stack_00000020 + 0x14c) = iVar1;
      if (iVar1 == 0) {
        return false;
      }
    }
    uVar2 = FUN_00bbba70(*(undefined4 *)(in_stack_00000020 + 0x148));
    *(undefined4 *)(in_stack_00000020 + 0x144) = 0;
    iVar1 = func_0x00bfab90(&stack0x00000000,in_stack_00000020 + 0x42,0x100);
    if (((iVar1 != 0) &&
        (iVar1 = func_0x00ceb3e0(&stack0x00000000,0xffffffff,*(undefined4 *)(in_stack_00000020 + 8),
                                 uVar2), iVar1 != 0)) &&
       (iVar1 = func_0x00bfaa70(&stack0x00000000), iVar1 != 0)) {
      func_0x00bfab20(&stack0x00000000,in_stack_00000020 + 0x144);
      iVar3 = func_0x00bfaac0(&stack0x00000000);
    }
    func_0x00bfa8e0(&stack0x00000000);
    if ((iVar3 != 0) && (*(int *)(in_stack_00000020 + 0x144) != 0)) {
      func_0x008ab0e6(in_stack_00000020 + 0x42,iVar3,*(int *)(in_stack_00000020 + 0x144));
    }
    iVar1 = func_0x00bd3df0(*(undefined4 *)(in_stack_00000020 + 0x14c),
                            *(undefined4 *)(in_stack_00000020 + 0x148),in_stack_0000002c);
    if (iVar1 != 0) {
      *(uint *)(in_stack_00000020 + 0xc) = *(uint *)(in_stack_00000020 + 0xc) | 1;
    }
    return iVar1 != 0;
  }
  return false;
}



undefined4 FUN_00cbc340(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14c) != 0)) {
    iVar1 = func_0x00cbca60(param_1);
    if (iVar1 != 0) {
      iVar1 = func_0x00bd3e10(*(undefined4 *)(param_1 + 0x14c),param_2,param_3);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_00cbc390(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_stack_00000048;
  int in_stack_00000050;
  int in_stack_00000054;
  undefined4 *in_stack_00000058;
  uint in_stack_0000005c;
  
  func_0x00e87f70();
  puVar2 = in_stack_00000058;
  iVar1 = in_stack_00000054;
  iVar5 = in_stack_00000050;
  in_stack_00000048 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((in_stack_00000050 != 0) && (*(int *)(in_stack_00000050 + 0x14c) != 0)) {
    if (in_stack_00000054 == 0) {
      uVar6 = func_0x00c1fbd0(*(undefined4 *)(in_stack_00000050 + 8));
      *puVar2 = uVar6;
      FUN_008ab370();
      return;
    }
    iVar3 = func_0x00cbca60(in_stack_00000050);
    if (iVar3 != 0) {
      iVar3 = func_0x00bd3c80(*(undefined4 *)(iVar5 + 0x14c),&stack0x00000008,&stack0x00000000);
      if (iVar3 != 0) {
        uVar4 = func_0x00c1fbd0(*(undefined4 *)(iVar5 + 8));
        if ((uVar4 <= in_stack_0000005c) &&
           ((*(int *)(iVar5 + 0x150) == 0 || (*(int *)(iVar5 + 0x150) == 0)))) {
          iVar5 = func_0x00ceabe0(&stack0x00000008,0,iVar1,&param_1,*(undefined4 *)(iVar5 + 8));
          if (0 < iVar5) {
            *puVar2 = param_1;
            FUN_008ab370();
            return;
          }
        }
      }
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00cbc4b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_stack_00000044;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  
  func_0x00e87f70();
  uVar2 = in_stack_00000050;
  iVar1 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((in_stack_0000004c != 0) && (*(int *)(in_stack_0000004c + 0x14c) != 0)) {
    iVar3 = func_0x00bc4320(*(undefined4 *)(in_stack_0000004c + 0x148));
    if (iVar3 - 1U < 0x40) {
      iVar3 = func_0x00cbca60(iVar1);
      if (iVar3 != 0) {
        iVar3 = func_0x00bd3c80(*(undefined4 *)(iVar1 + 0x14c),&stack0x00000004,&stack0x00000000);
        if (iVar3 != 0) {
          if ((*(int *)(iVar1 + 0x150) == 0) || (*(int *)(iVar1 + 0x150) == 0)) {
            func_0x00ceacf0(&stack0x00000004,0,uVar2,in_stack_00000054,*(undefined4 *)(iVar1 + 8));
            FUN_008ab370();
            return;
          }
        }
      }
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00cbc570(int param_1)

{
  func_0x00bd45b0(*(undefined4 *)(param_1 + 0x14c));
  FUN_00bd4770(*(undefined4 *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_00c12650(*(undefined4 *)(param_1 + 8));
  FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\signature\\sm2_sig.c",0x157
              );
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x154),"providers\\implementations\\signature\\sm2_sig.c",
               0x158);
  FUN_00bbc580(param_1,"providers\\implementations\\signature\\sm2_sig.c",0x159);
  return;
}



undefined4 * FUN_00cbc5f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x15c,"providers\\implementations\\signature\\sm2_sig.c",0x161);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = param_1;
  puVar4 = puVar1;
  for (iVar2 = 0x57; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  puVar1[0x55] = 0;
  if (param_1[2] != 0) {
    iVar2 = func_0x00c12be0(param_1[2]);
    if (iVar2 == 0) goto LAB_00cbc70c;
  }
  puVar1[2] = param_1[2];
  if (param_1[1] != 0) {
    iVar2 = func_0x00bbbc70(param_1[1],"providers\\implementations\\signature\\sm2_sig.c",0x171);
    puVar1[1] = iVar2;
    if (iVar2 == 0) goto LAB_00cbc70c;
  }
  if (param_1[0x52] != 0) {
    iVar2 = FUN_00bd4800(param_1[0x52]);
    if (iVar2 == 0) goto LAB_00cbc70c;
  }
  puVar1[0x52] = param_1[0x52];
  if (param_1[0x53] != 0) {
    iVar2 = func_0x00bd46b0();
    puVar1[0x53] = iVar2;
    if (iVar2 == 0) goto LAB_00cbc70c;
    iVar2 = func_0x00bd3f40(iVar2,param_1[0x53]);
    if (iVar2 == 0) goto LAB_00cbc70c;
  }
  if (param_1[0x55] != 0) {
    _Dst = (void *)FUN_00bbc4f0(param_1[0x56],"providers\\implementations\\signature\\sm2_sig.c",
                                0x182);
    puVar1[0x55] = _Dst;
    if (_Dst == (void *)0x0) {
LAB_00cbc70c:
      func_0x00bd45b0(puVar1[0x53]);
      FUN_00bd4770(puVar1[0x52]);
      puVar1[0x53] = 0;
      puVar1[0x52] = 0;
      FUN_00c12650(puVar1[2]);
      FUN_00bbc580(puVar1[1],"providers\\implementations\\signature\\sm2_sig.c",0x157);
      FUN_00bbc580(puVar1[0x55],"providers\\implementations\\signature\\sm2_sig.c",0x158);
      FUN_00bbc580(puVar1,"providers\\implementations\\signature\\sm2_sig.c",0x159);
      return (undefined4 *)0x0;
    }
    puVar1[0x56] = param_1[0x56];
    memcpy(_Dst,(void *)param_1[0x55],param_1[0x56]);
  }
  return puVar1;
}



bool FUN_00cbc7b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"algorithm-id");
  if ((iVar1 != 0) &&
     (iVar1 = func_0x00bc1050(iVar1,-(uint)(*(int *)(param_1 + 0x144) != 0) & param_1 + 0x42U,
                              *(int *)(param_1 + 0x144)), iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"digest-size");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x150)), iVar1 == 0))
  {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"digest");
  if (iVar1 == 0) {
    return true;
  }
  if (*(int *)(param_1 + 0x148) == 0) {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = FUN_00bc42b0(*(int *)(param_1 + 0x148));
  }
  iVar1 = func_0x00bc12f0(iVar1,param_1);
  return iVar1 != 0;
}



undefined ** FUN_00cbc870(void)

{
  return &PTR_s_algorithm_id_0109e258;
}



undefined4 FUN_00cbc880(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x00e87f70();
  iVar2 = param_4;
  iVar3 = param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    iVar1 = func_0x00bc09d0(param_4,"distid");
    if (iVar1 != 0) {
      param_3 = 0;
      if ((*(byte *)(iVar3 + 0xc) & 1) == 0) {
        return 0;
      }
      if ((*(int *)(iVar1 + 0xc) != 0) &&
         (iVar1 = func_0x00bc01d0(iVar1,&param_3,0,&stack0x00000000), iVar1 == 0)) {
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(iVar3 + 0x154),"providers\\implementations\\signature\\sm2_sig.c"
                   ,0x1d1);
      *(int *)(iVar3 + 0x154) = param_3;
      *(undefined4 *)(iVar3 + 0x158) = 0;
    }
    iVar1 = func_0x00bc09d0(iVar2,"digest-size");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,&param_1);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_1 != *(int *)(iVar3 + 0x150)) {
        return 0;
      }
    }
    iVar2 = func_0x00bc09d0(iVar2,"digest");
    if (iVar2 != 0) {
      param_3 = 0;
      iVar2 = func_0x00bc0850(iVar2,&param_3,0);
      if (iVar2 != 0) {
        iVar3 = func_0x00cbcaf0(iVar3,param_3);
        if (iVar3 != 0) {
          FUN_00bbc580(param_3,"providers\\implementations\\signature\\sm2_sig.c",0x1eb);
          return 1;
        }
        FUN_00bbc580(param_3,"providers\\implementations\\signature\\sm2_sig.c",0x1e8);
      }
      return 0;
    }
  }
  return 1;
}



undefined ** FUN_00cbc9d0(void)

{
  return &PTR_s_digest_size_0109e2a8;
}



int FUN_00cbc9e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14c);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x80) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4615. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x80))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x70), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cbca00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x7c) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x7c))(0,uVar1);
    return iVar2;
  }
  return 0;
}



int FUN_00cbca20(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14c);
  if (iVar3 == 0) {
    return iVar3;
  }
  piVar1 = *(int **)(iVar3 + 0x14);
  if (((piVar1 != (int *)0x0) && (((*piVar1 == 0x100 || (*piVar1 == 0x80)) && (piVar1[6] != 0)))) &&
     (*(code **)(piVar1[5] + 0x88) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00bd4715. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(piVar1[5] + 0x88))();
    return iVar3;
  }
  if ((*(int *)(iVar3 + 4) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar3 + 4) + 0x6c), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(undefined4 *)(iVar3 + 0x1c),param_2);
    return iVar3;
  }
  return 0;
}



int FUN_00cbca40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 == 0) {
    return iVar2;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x78) != 0)) {
    uVar1 = func_0x00bc42d0(iVar2);
    uVar1 = FUN_00bc77d0(uVar1);
    iVar2 = (**(code **)(iVar2 + 0x78))(0,uVar1);
    return iVar2;
  }
  return 0;
}



undefined4 * FUN_00cbcbd0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x2c,"providers\\implementations\\asymciphers\\rsa_enc.c",0x57);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = func_0x00bc3c60(param_1);
      *puVar2 = uVar3;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00cbcc10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbd750(param_1,param_2,param_3,0x200,"RSA Encrypt Init");
  return;
}



int FUN_00cbcc30(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = param_1[1];
    if (param_2 != 0) {
      if (param_1[2] == 4) {
        uVar2 = func_0x00bb77a0(uVar2);
        iVar3 = FUN_00bbc4f0(uVar2,"providers\\implementations\\asymciphers\\rsa_enc.c",0xba);
        if (iVar3 == 0) {
          return 0;
        }
        iVar1 = param_1[4];
        if (iVar1 == 0) {
          iVar1 = func_0x00bd4740(*param_1,"SHA-1",0);
          param_1[4] = iVar1;
          if (iVar1 == 0) {
            FUN_00bbc580(iVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0xbf);
            FUN_00bc4f50();
            func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",0xc0,"rsa_encrypt")
            ;
            func_0x00bc5160(0x39,0xc0103,0);
            return 0;
          }
        }
        iVar1 = func_0x00c2e540(*param_1,iVar3,uVar2,param_5,param_6,param_1[6],param_1[7],iVar1,
                                param_1[5]);
        if (iVar1 == 0) {
          FUN_00bbc580(iVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0xcd);
          return 0;
        }
        iVar1 = func_0x00bb7550(uVar2,iVar3,param_2,param_1[1],3);
        FUN_00bbc580(iVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0xd2);
      }
      else {
        iVar1 = func_0x00bb7550(param_6,param_5,param_2,uVar2,param_1[2]);
      }
      if (-1 < iVar1) {
        *param_3 = iVar1;
        return 1;
      }
      return iVar1;
    }
    iVar1 = func_0x00bb77a0(uVar2);
    if (iVar1 != 0) {
      *param_3 = iVar1;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",0xaf,"rsa_encrypt");
    func_0x00bc5160(0x39,0x9e,0);
  }
  return 0;
}



void FUN_00cbcdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbd750(param_1,param_2,param_3,0x400,"RSA Decrypt Init");
  return;
}



uint FUN_00cbcdf0(undefined4 *param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = func_0x00bb77a0(param_1[1]);
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = param_1[2];
  if (iVar2 == 7) {
    if (param_2 == 0) {
      *param_3 = 0x30;
      return 1;
    }
    if (param_4 < 0x30) {
      FUN_00bc4f50();
      uVar5 = 0xef;
LAB_00cbce4a:
      func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",uVar5,"rsa_decrypt");
      func_0x00bc5160(0x39,0x8e,0);
      return 0;
    }
  }
  else {
    if (param_2 == 0) {
      if (uVar1 != 0) {
        *param_3 = uVar1;
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",0xf5,"rsa_decrypt");
      func_0x00bc5160(0x39,0x9e,0);
      return 0;
    }
    if (param_4 < uVar1) {
      FUN_00bc4f50();
      uVar5 = 0xfd;
      goto LAB_00cbce4a;
    }
    if (iVar2 != 4) {
      if ((param_1[10] == 0) && (iVar2 == 1)) {
        iVar2 = 8;
      }
      uVar1 = func_0x00bb7520(param_6,param_5,param_2,param_1[1],iVar2);
      goto LAB_00cbd06a;
    }
  }
  iVar2 = FUN_00bbc4f0(uVar1,"providers\\implementations\\asymciphers\\rsa_enc.c",0x106);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = func_0x00bb7520(param_6,param_5,iVar2,param_1[1],3);
  if (uVar3 != uVar1) {
    FUN_00bbc580(iVar2,"providers\\implementations\\asymciphers\\rsa_enc.c",0x10f);
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",0x110,"rsa_decrypt");
    func_0x00bc5160(0x39,0xa2,0);
    return 0;
  }
  if (param_1[2] == 4) {
    iVar4 = param_1[4];
    if (iVar4 == 0) {
      iVar4 = func_0x00bd4740(*param_1,"SHA-1",0);
      param_1[4] = iVar4;
      if (iVar4 == 0) {
        FUN_00bbc580(iVar2,"providers\\implementations\\asymciphers\\rsa_enc.c",0x117);
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",0x118,"rsa_decrypt");
        func_0x00bc5160(0x39,0xc0103,0);
        return 0;
      }
    }
    uVar1 = func_0x00c2de40(param_2,param_4,iVar2,uVar1,uVar1,param_1[6],param_1[7],iVar4,param_1[5]
                           );
  }
  else {
    if (param_1[8] == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",0x125,"rsa_decrypt");
      func_0x00bc5160(0x39,0xa1,0);
      FUN_00bbc580(iVar2,"providers\\implementations\\asymciphers\\rsa_enc.c",0x126);
      return 0;
    }
    uVar1 = func_0x00c2d6f0(*param_1,param_2,param_4,iVar2,uVar1,param_1[8],param_1[9]);
  }
  FUN_00bbc580(iVar2,"providers\\implementations\\asymciphers\\rsa_enc.c",0x12d);
LAB_00cbd06a:
  uVar3 = (int)uVar1 >> 0x1f;
  *param_3 = *param_3 & uVar3 | ~uVar3 & uVar1;
  return ~uVar3 & 1;
}



void FUN_00cbd0b0(int param_1)

{
  FUN_00bb6040(*(undefined4 *)(param_1 + 4));
  FUN_00bd4770(*(undefined4 *)(param_1 + 0x10));
  FUN_00bd4770(*(undefined4 *)(param_1 + 0x14));
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x18),"providers\\implementations\\asymciphers\\rsa_enc.c",
               0x143);
  FUN_00bbc580(param_1,"providers\\implementations\\asymciphers\\rsa_enc.c",0x145);
  return;
}



undefined4 * FUN_00cbd100(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = FUN_0058e2e0();
  if ((iVar4 == 0) ||
     (puVar5 = (undefined4 *)
               FUN_00bbc830(0x2c,"providers\\implementations\\asymciphers\\rsa_enc.c",0x150),
     puVar5 == (undefined4 *)0x0)) {
    return (undefined4 *)0x0;
  }
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
  *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_1 + 8);
  puVar5[10] = param_1[10];
  if ((puVar5[1] != 0) && (iVar4 = func_0x00bb6570(puVar5[1]), iVar4 == 0)) {
    FUN_00bbc580(puVar5,"providers\\implementations\\asymciphers\\rsa_enc.c",0x156);
    return (undefined4 *)0x0;
  }
  if ((puVar5[4] != 0) && (iVar4 = FUN_00bd4800(puVar5[4]), iVar4 == 0)) {
    FUN_00bb6040(puVar5[1]);
    FUN_00bbc580(puVar5,"providers\\implementations\\asymciphers\\rsa_enc.c",0x15c);
    return (undefined4 *)0x0;
  }
  if ((puVar5[5] != 0) && (iVar4 = FUN_00bd4800(puVar5[5]), iVar4 == 0)) {
    FUN_00bb6040(puVar5[1]);
    FUN_00bd4770(puVar5[4]);
    FUN_00bbc580(puVar5,"providers\\implementations\\asymciphers\\rsa_enc.c",0x163);
    return (undefined4 *)0x0;
  }
  return puVar5;
}



bool FUN_00cbd1f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"pad-mode");
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 1) {
      iVar1 = func_0x00bc0c00(iVar1,*(undefined4 *)(param_1 + 8));
LAB_00cbd291:
      if (iVar1 == 0) {
        return false;
      }
    }
    else {
      if (*(int *)(iVar1 + 4) != 4) {
        return false;
      }
      if (DAT_012b7574 != 0) {
        iVar4 = 0;
        iVar2 = DAT_012b7574;
        do {
          if (*(int *)(param_1 + 8) == iVar2) {
            if ((&PTR_DAT_012b7578)[iVar4 * 2] != (undefined *)0x0) {
              iVar1 = func_0x00bc12f0(iVar1,(&PTR_DAT_012b7578)[iVar4 * 2]);
              goto LAB_00cbd291;
            }
            break;
          }
          iVar2 = (&DAT_012b757c)[iVar4 * 2];
          iVar4 = iVar4 + 1;
        } while (iVar2 != 0);
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\asymciphers\\rsa_enc.c",0x189,
                      "rsa_get_ctx_params");
      func_0x00bc5160(0x39,0xc0103,0);
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"digest");
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar3 = &DAT_0112e1b4;
    }
    else {
      puVar3 = (undefined1 *)FUN_00bc42b0(*(int *)(param_1 + 0x10));
    }
    iVar1 = func_0x00bc12f0(iVar1,puVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"mgf1-digest");
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    if ((iVar2 == 0) && (iVar2 = *(int *)(param_1 + 0x10), iVar2 == 0)) {
      puVar3 = &DAT_0112e1b4;
    }
    else {
      puVar3 = (undefined1 *)FUN_00bc42b0(iVar2);
    }
    iVar1 = func_0x00bc12f0(iVar1,puVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,"oaep-label");
  if ((iVar1 != 0) &&
     (iVar1 = func_0x00bc1000(iVar1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c))
     , iVar1 == 0)) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"tls-client-version");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x20)), iVar1 == 0))
  {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"tls-negotiated-version");
  if ((iVar1 != 0) && (iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x24)), iVar1 == 0))
  {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"implicit-rejection");
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x28));
  return iVar1 != 0;
}



undefined ** FUN_00cbd3c0(void)

{
  return &PTR_s_digest_0109e3b8;
}



void FUN_00cbd3d0(byte *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 *puVar10;
  uint in_stack_00000140;
  undefined4 *in_stack_00000148;
  int in_stack_0000014c;
  
  func_0x00e87f70();
  iVar7 = in_stack_0000014c;
  puVar2 = in_stack_00000148;
  in_stack_00000140 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  memset(&stack0x00000040,0,0x100);
  if ((puVar2 == (undefined4 *)0x0) || (iVar7 == 0)) goto LAB_00cbd609;
  iVar3 = func_0x00bc09d0(iVar7,"digest");
  if (iVar3 != 0) {
    iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x32);
    if ((iVar3 == 0) ||
       ((iVar3 = func_0x00bc09d0(iVar7,"digest-props"), iVar3 != 0 &&
        (iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x100), iVar3 == 0)))) goto LAB_00cbd609;
    FUN_00bd4770(puVar2[4]);
    iVar3 = func_0x00bd4740(*puVar2,&stack0x0000000c,&stack0x00000040);
    puVar2[4] = iVar3;
    if (iVar3 == 0) goto LAB_00cbd609;
  }
  iVar3 = func_0x00bc09d0(iVar7,"pad-mode");
  if (iVar3 != 0) {
    param_2 = 0;
    if (*(int *)(iVar3 + 4) == 1) {
      iVar3 = func_0x00bbfcd0(iVar3,&param_2);
      if (iVar3 == 0) goto LAB_00cbd609;
LAB_00cbd56e:
      if (param_2 == 6) goto LAB_00cbd609;
      if ((param_2 == 4) && (puVar2[4] == 0)) {
        iVar3 = func_0x00bd4740(*puVar2,&DAT_0104e908,&stack0x00000040);
        puVar2[4] = iVar3;
        if (iVar3 == 0) goto LAB_00cbd609;
      }
    }
    else {
      if ((*(int *)(iVar3 + 4) != 4) || (param_1 = *(byte **)(iVar3 + 8), param_1 == (byte *)0x0))
      goto LAB_00cbd609;
      iVar3 = 0;
      if (DAT_012b7574 != 0) {
        iVar4 = 0;
        do {
          pbVar8 = *(byte **)((int)&PTR_DAT_012b7578 + iVar4);
          pbVar5 = param_1;
          do {
            bVar1 = *pbVar5;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_00cbd528:
              uVar6 = -(uint)bVar9 | 1;
              goto LAB_00cbd52d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_00cbd528;
            pbVar5 = pbVar5 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          uVar6 = 0;
LAB_00cbd52d:
          if (uVar6 == 0) {
            param_2 = (&DAT_012b7574)[iVar3 * 2];
            goto LAB_00cbd56e;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar3 * 8;
        } while ((&DAT_012b7574)[iVar3 * 2] != 0);
      }
    }
    puVar2[2] = param_2;
  }
  iVar3 = func_0x00bc09d0(iVar7,"mgf1-digest");
  if (iVar3 != 0) {
    iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x32);
    if (iVar3 == 0) goto LAB_00cbd609;
    iVar3 = func_0x00bc09d0(iVar7,"mgf1-properties");
    if (iVar3 == 0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10 = &stack0x00000040;
      iVar3 = func_0x00bc0850(iVar3,&stack0x00000000,0x100);
      if (iVar3 == 0) goto LAB_00cbd609;
    }
    FUN_00bd4770(puVar2[5]);
    iVar3 = func_0x00bd4740(*puVar2,&stack0x0000000c,puVar10);
    puVar2[5] = iVar3;
    if (iVar3 == 0) goto LAB_00cbd609;
  }
  iVar3 = func_0x00bc09d0(iVar7,"oaep-label");
  if (iVar3 != 0) {
    param_2 = 0;
    iVar3 = func_0x00bc01d0(iVar3,&param_2,0,&param_1);
    if (iVar3 == 0) goto LAB_00cbd609;
    FUN_00bbc580(puVar2[6],"providers\\implementations\\asymciphers\\rsa_enc.c",0x23c);
    puVar2[6] = param_2;
    puVar2[7] = param_1;
  }
  iVar3 = func_0x00bc09d0(iVar7,"tls-client-version");
  if (iVar3 != 0) {
    iVar3 = func_0x00bc0300(iVar3,&param_1);
    if (iVar3 == 0) goto LAB_00cbd609;
    puVar2[8] = param_1;
  }
  iVar3 = func_0x00bc09d0(iVar7,"tls-negotiated-version");
  if (iVar3 != 0) {
    iVar3 = func_0x00bc0300(iVar3,&param_1);
    if (iVar3 == 0) goto LAB_00cbd609;
    puVar2[9] = param_1;
  }
  iVar7 = func_0x00bc09d0(iVar7,"implicit-rejection");
  if ((iVar7 != 0) && (iVar7 = func_0x00bc0300(iVar7,&param_1), iVar7 != 0)) {
    puVar2[10] = param_1;
  }
LAB_00cbd609:
  FUN_008ab370();
  return;
}



undefined ** FUN_00cbd740(void)

{
  return &PTR_s_digest_0109e458;
}



undefined4 * FUN_00cbd820(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x14,"providers\\implementations\\asymciphers\\sm2_enc.c",0x32);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar2 = func_0x00bc3c60(param_1);
  *puVar1 = uVar2;
  return puVar1;
}



bool FUN_00cbd850(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    iVar1 = func_0x00c12be0(param_2);
    if (iVar1 != 0) {
      FUN_00c12650(param_1[1]);
      param_1[1] = param_2;
      if (param_3 == 0) {
        return true;
      }
      iVar1 = func_0x00cd5f40(param_1 + 2,param_3,*param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined4
FUN_00cbd8b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00bbba70(param_1 + 2);
  if ((iVar1 == 0) && (iVar1 = func_0x00cd5f10(param_1 + 2,*param_1,&DAT_01055270,0), iVar1 == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    uVar2 = func_0x00cebcb0(param_1[1],iVar1,param_5,param_6,param_2,param_3);
    return uVar2;
  }
  iVar1 = func_0x00ceb4d0(param_1[1],iVar1,param_6);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\asymciphers\\sm2_enc.c",0x5d,"sm2_asym_encrypt");
    func_0x00bc5160(0x39,0x9e,0);
    return 0;
  }
  return 1;
}



uint FUN_00cbd950(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00bbba70(param_1 + 2);
  if (iVar1 == 0) {
    iVar1 = func_0x00cd5f10(param_1 + 2,*param_1,&DAT_01055270,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (param_2 == 0) {
    iVar1 = func_0x00cec3f0(param_5,param_6);
    return (uint)(iVar1 != 0);
  }
  uVar2 = func_0x00ceb580(param_1[1],iVar1,param_5,param_6,param_2,param_3);
  return uVar2;
}



void FUN_00cbd9c0(int param_1)

{
  FUN_00c12650(*(undefined4 *)(param_1 + 4));
  func_0x00cd6000(param_1 + 8);
  FUN_00bbc580(param_1,"providers\\implementations\\asymciphers\\sm2_enc.c",0x80);
  return;
}



undefined4 * FUN_00cbd9f0(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = (undefined4 *)
           FUN_00bbc830(0x14,"providers\\implementations\\asymciphers\\sm2_enc.c",0x88);
  if (puVar5 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined8 *)(puVar5 + 2);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *puVar5 = *param_1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar5[4] = param_1[4];
  *puVar1 = 0;
  puVar5[4] = 0;
  if (puVar5[1] != 0) {
    iVar6 = func_0x00c12be0(puVar5[1]);
    if (iVar6 == 0) {
      FUN_00bbc580(puVar5,"providers\\implementations\\asymciphers\\sm2_enc.c",0x90);
      return (undefined4 *)0x0;
    }
  }
  iVar6 = func_0x00cd5eb0(puVar1,param_1 + 2);
  if (iVar6 == 0) {
    FUN_00c12650(puVar5[1]);
    func_0x00cd6000(puVar1);
    FUN_00bbc580(puVar5,"providers\\implementations\\asymciphers\\sm2_enc.c",0x80);
    return (undefined4 *)0x0;
  }
  return puVar5;
}



bool FUN_00cbdaa0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return false;
  }
  iVar1 = func_0x00bc09d0(param_2,"digest");
  if (iVar1 != 0) {
    iVar2 = FUN_00bbba70(param_1 + 8);
    if (iVar2 == 0) {
      iVar1 = func_0x00bc12f0(iVar1,&DAT_0112e1b4);
      return iVar1 != 0;
    }
    uVar3 = FUN_00bc42b0(iVar2);
    iVar1 = func_0x00bc12f0(iVar1,uVar3);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00cbdb20(void)

{
  return &PTR_s_digest_0109e630;
}



bool FUN_00cbdb30(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  if (param_2 != 0) {
    iVar1 = func_0x00cd5f40(param_1 + 2,param_2,*param_1);
    return iVar1 != 0;
  }
  return true;
}



undefined ** FUN_00cbdb60(void)

{
  return &PTR_s_digest_0109e658;
}



undefined4 * FUN_00cbdb70(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc830(0xc,"providers\\implementations\\kem\\rsa_kem.c",0x5b);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = func_0x00bc3c60(param_1);
      *puVar2 = uVar3;
      puVar2[2] = 0xffffffff;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void FUN_00cbdbb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbde50(param_1,param_2,param_3,0x1000,"RSA Encapsulate Init");
  return;
}



undefined4
FUN_00cbdbd0(int param_1,undefined4 param_2,int param_3,int param_4,uint *param_5,undefined4 param_6
            ,uint *param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    return 0xfffffffe;
  }
  func_0x00e87f70();
  uVar3 = func_0x00bb77a0(*(undefined4 *)(param_3 + 4));
  if (param_4 == 0) {
    if (uVar3 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kem\\rsa_kem.c",0x121,"rsasve_generate");
      func_0x00bc5160(0x39,0x9e,0);
      return 0;
    }
    if (param_5 == (uint *)0x0) {
      if (param_7 == (uint *)0x0) {
        return 0;
      }
      *param_7 = uVar3;
      return 1;
    }
    *param_5 = uVar3;
    if (param_7 != (uint *)0x0) {
      *param_7 = uVar3;
    }
    return 1;
  }
  if ((param_5 != (uint *)0x0) && (*param_5 < uVar3)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\rsa_kem.c",0x133,"rsasve_generate");
    func_0x00bc5160(0x39,0xd9,0);
    return 0;
  }
  uVar6 = *(undefined4 *)(param_3 + 4);
  uVar4 = func_0x00bb6b70(uVar6);
  iVar2 = func_0x00bb59c0(uVar4);
  if (iVar2 == 0) {
    return 0;
  }
  func_0x00bb59e0(iVar2);
  uVar4 = func_0x00bb57f0(iVar2);
  iVar5 = func_0x00bb57f0(iVar2);
  if (iVar5 != 0) {
    uVar6 = FUN_00baaa40(uVar6);
    iVar7 = func_0x00bba2d0(uVar4,uVar6);
    if ((((iVar7 != 0) && (iVar7 = func_0x00be9b40(uVar4,3), iVar7 != 0)) &&
        (iVar7 = func_0x00c2a870(iVar5,uVar4,0,iVar2), iVar7 != 0)) &&
       ((iVar7 = func_0x00be9830(iVar5,2), iVar7 != 0 &&
        (uVar8 = func_0x00bb9f90(iVar5,param_6,uVar3), uVar8 == uVar3)))) {
      bVar1 = true;
      goto LAB_00cbe09e;
    }
  }
  bVar1 = false;
LAB_00cbe09e:
  func_0x00bb56f0(iVar2);
  func_0x00bb5760(iVar2);
  if (!bVar1) {
    return 0;
  }
  iVar2 = func_0x00bb7550(uVar3,param_6,param_4,*(undefined4 *)(param_3 + 4),3);
  if (iVar2 == 0) {
    func_0x00401320(param_6,uVar3);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar3;
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = uVar3;
      return 1;
    }
  }
  return uVar6;
}



void FUN_00cbdc00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbde50(param_1,param_2,param_3,0x2000,"RSA Decapsulate Init");
  return;
}



uint FUN_00cbdc20(int param_1,int param_2,uint *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    return 0xfffffffe;
  }
  uVar2 = func_0x00bb77a0(*(undefined4 *)(param_1 + 4));
  if (param_2 == 0) {
    if (uVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\kem\\rsa_kem.c",0x16d,"rsasve_recover");
      func_0x00bc5160(0x39,0x9e,0);
      return 0;
    }
    *param_3 = uVar2;
    return 1;
  }
  if (param_5 != uVar2) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\rsa_kem.c",0x179,"rsasve_recover");
    func_0x00bc5160(0x39,0x8e,0);
    return 0;
  }
  if ((param_3 != (uint *)0x0) && (*param_3 < uVar2)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\rsa_kem.c",0x183,"rsasve_recover");
    func_0x00bc5160(0x39,0xd9,0);
    return 0;
  }
  uVar2 = func_0x00bb7520(param_5,param_4,param_2,*(undefined4 *)(param_1 + 4),3);
  if ((0 < (int)uVar2) && (param_3 != (uint *)0x0)) {
    *param_3 = uVar2;
  }
  return (uint)(0 < (int)uVar2);
}



void FUN_00cbdd30(int param_1)

{
  FUN_00bb6040(*(undefined4 *)(param_1 + 4));
  FUN_00bbc580(param_1,"providers\\implementations\\kem\\rsa_kem.c",0x6a);
  return;
}



undefined8 * FUN_00cbdd50(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) ||
     (puVar2 = (undefined8 *)FUN_00bbc830(0xc,"providers\\implementations\\kem\\rsa_kem.c",0x75),
     puVar2 == (undefined8 *)0x0)) {
    return (undefined8 *)0x0;
  }
  *puVar2 = *param_1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
  if ((*(int *)((int)puVar2 + 4) != 0) &&
     (iVar1 = func_0x00bb6570(*(int *)((int)puVar2 + 4)), iVar1 == 0)) {
    FUN_00bbc580(puVar2,"providers\\implementations\\kem\\rsa_kem.c",0x7b);
    return (undefined8 *)0x0;
  }
  return puVar2;
}



undefined * FUN_00cbddb0(void)

{
  return &DAT_0109e758;
}



undefined4 FUN_00cbddc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 == 0) || (iVar1 = func_0x00bc09d0(param_2,"operation"), iVar1 == 0)) {
    return 1;
  }
  if (*(int *)(iVar1 + 4) != 4) {
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = 0;
  do {
    iVar2 = func_0x00bbbfe0((&PTR_s_RSASVE_0109e754)[iVar3 * 2],iVar1);
    if (iVar2 == 0) {
      if ((int)(&DAT_0109e750)[iVar3 * 2] < 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 8) = (&DAT_0109e750)[iVar3 * 2];
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 == 0);
  return 0;
}



undefined ** FUN_00cbde40(void)

{
  return &PTR_s_operation_0109e76c;
}



int FUN_00cbe110(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00bbc830(0x28,"providers\\implementations\\kem\\ecx_kem.c",0xa0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00bc3c60(param_1);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return iVar1;
}



void FUN_00cbe140(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbec10(param_1,0x1000,param_2,0,param_3);
  return;
}



undefined4
FUN_00cbe160(int param_1,int *param_2,void *param_3,uint *param_4,undefined4 param_5,uint *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x29b,"ecxkem_encapsulate");
    func_0x00bc5160(0x39,0x7d,0);
    return 0xfffffffe;
  }
  func_0x00e87f70();
  uVar4 = 0;
  iVar1 = param_2[9];
  if (param_3 == (void *)0x0) {
    if (param_4 == (uint *)0x0) {
      if (param_6 == (uint *)0x0) {
        return 0;
      }
    }
    else {
      *param_4 = *(uint *)(iVar1 + 0x14);
      if (param_6 == (uint *)0x0) {
        return 1;
      }
    }
    *param_6 = *(uint *)(iVar1 + 0x10);
    return 1;
  }
  if (*param_6 < *(uint *)(iVar1 + 0x10)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x235,"dhkem_encap");
    pcVar5 = "*secretlen too small";
  }
  else {
    if (*(uint *)(iVar1 + 0x14) <= *param_4) {
      iVar2 = func_0x00cbe640(param_2,param_2[6],param_2[7]);
      if ((iVar2 == 0) || ((*(byte *)(iVar2 + 8) & 1) == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x98,"ecx_pubkey");
        func_0x00bc5160(0x39,0xdc,0);
        _Src = (void *)0x0;
      }
      else {
        _Src = (void *)(iVar2 + 0xc);
      }
      iVar3 = *param_2;
      if ((iVar3 == 0) || ((*(byte *)(iVar3 + 8) & 1) == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x98,"ecx_pubkey");
        func_0x00bc5160(0x39,0xdc,0);
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + 0xc;
      }
      if (((_Src != (void *)0x0) && (iVar3 != 0)) &&
         (iVar3 = func_0x00cbe390(param_2,param_5,iVar2,*param_2,param_2[1],*param_2,_Src,iVar3),
         iVar3 != 0)) {
        memcpy(param_3,_Src,*(size_t *)(iVar1 + 0x14));
        uVar4 = 1;
        *param_4 = *(uint *)(iVar1 + 0x14);
        *param_6 = *(uint *)(iVar1 + 0x10);
      }
      FUN_00c15480(iVar2);
      return uVar4;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x239,"dhkem_encap");
    pcVar5 = "*enclen too small";
  }
  func_0x00bc5160(0x39,0x8e,pcVar5);
  return 0;
}



void FUN_00cbe1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cbec10(param_1,0x2000,param_2,0,param_3);
  return;
}



undefined4 FUN_00cbe1d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
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
  int *in_stack_00000044;
  int in_stack_00000048;
  uint *in_stack_0000004c;
  undefined4 in_stack_00000050;
  int in_stack_00000054;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x2a9,"ecxkem_decapsulate");
    func_0x00bc5160(0x39,0x7d,0);
    return 0xfffffffe;
  }
  func_0x00e87f70();
  piVar2 = in_stack_00000044;
  uVar6 = 0;
  iVar4 = *in_stack_00000044;
  iVar1 = in_stack_00000044[9];
  if (in_stack_00000048 == 0) {
    *in_stack_0000004c = *(uint *)(iVar1 + 0x10);
    return 1;
  }
  in_stack_00000044 = (int *)iVar4;
  if (*in_stack_0000004c < *(uint *)(iVar1 + 0x10)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x274,"dhkem_decap");
    func_0x00bc5160(0x39,0x8e,"*secretlen too small");
    return 0;
  }
  if (in_stack_00000054 == *(int *)(iVar1 + 0x14)) {
    puVar3 = (undefined4 *)
             func_0x00bbfaa0(&param_1,&DAT_01057a18,in_stack_00000050,in_stack_00000054);
    in_stack_00000018 = *puVar3;
    in_stack_0000001c = puVar3[1];
    in_stack_00000020 = puVar3[2];
    in_stack_00000024 = puVar3[3];
    in_stack_00000028 = puVar3[4];
    puVar3 = (undefined4 *)func_0x00bbfa10(&param_1);
    in_stack_0000002c = *puVar3;
    in_stack_00000030 = puVar3[1];
    in_stack_00000034 = puVar3[2];
    in_stack_00000038 = puVar3[3];
    in_stack_0000003c = puVar3[4];
    iVar4 = func_0x00c154d0(piVar2[2],*(undefined4 *)(*piVar2 + 0x50),1,piVar2[3]);
    if (iVar4 != 0) {
      iVar5 = func_0x00c77f70(iVar4,&stack0x00000018,0);
      if (iVar5 < 1) {
        FUN_00c15480(iVar4);
        iVar4 = 0;
      }
      if (iVar4 != 0) {
        if ((in_stack_00000044 == (int *)0x0) || ((*(byte *)((int)in_stack_00000044 + 8) & 1) == 0))
        {
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x98,"ecx_pubkey");
          func_0x00bc5160(0x39,0xdc,0);
        }
        else if (((int)in_stack_00000044 + 0xc != 0) &&
                (iVar5 = func_0x00cbe390(piVar2,in_stack_00000048,*piVar2,iVar4,*piVar2,piVar2[1],
                                         in_stack_00000050,(int)in_stack_00000044 + 0xc), iVar5 != 0
                )) {
          uVar6 = 1;
          *in_stack_0000004c = *(uint *)(iVar1 + 0x10);
        }
      }
      FUN_00c15480(iVar4);
      return uVar6;
    }
    FUN_00c15480(0);
    return 0;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\kem\\ecx_kem.c",0x278,"dhkem_decap");
  func_0x00bc5160(0x39,0x9e,"Invalid enc public key");
  return 0;
}



void FUN_00cbe220(undefined4 *param_1)

{
  FUN_00bbc6c0(param_1[6],param_1[7],"providers\\implementations\\kem\\ecx_kem.c",0xad);
  FUN_00c15480(*param_1);
  *param_1 = 0;
  FUN_00c15480(param_1[1]);
  param_1[1] = 0;
  FUN_00bbc580(param_1,"providers\\implementations\\kem\\ecx_kem.c",0xb0);
  return;
}



undefined4 FUN_00cbe270(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x00e87f70();
  iVar3 = param_3;
  iVar1 = param_2;
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 != 0) {
    iVar2 = func_0x00bc09d0(param_3,&DAT_01081f60);
    if (iVar2 != 0) {
      param_2 = 0;
      if (((*(int *)(iVar2 + 8) != 0) && (*(int *)(iVar2 + 0xc) != 0)) &&
         (iVar2 = func_0x00bc01d0(iVar2,&param_2,0,&stack0x00000000), iVar2 == 0)) {
        return 0;
      }
      FUN_00bbc6c0(*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c),
                   "providers\\implementations\\kem\\ecx_kem.c",0x107);
      *(int *)(iVar1 + 0x18) = param_2;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
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



void FUN_00cbe340(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00cbec10(param_1,0x1000,param_2,param_3,param_4);
  return;
}



void FUN_00cbe360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00cbec10(param_1,0x2000,param_2,param_3,param_4);
  return;
}



undefined ** FUN_00cbe380(void)

{
  return &PTR_s_operation_0109e874;
}



void FUN_00cbef10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098948,*param_1,param_2,param_3);
  return;
}



void FUN_00cbef30(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01098948,param_1);
  return;
}



undefined4
FUN_00cbef50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x58f,
                    "x25519_to_SubjectPublicKeyInfo_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar3 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(*param_1,param_2);
  if (iVar1 != 0) {
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cbeff5;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x40a,"X25519 PUBLIC KEY",0,FUN_00cc6a30,param_1);
  }
LAB_00cbeff5:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



void FUN_00cbf040(undefined4 param_1,undefined4 param_2)

{
  func_0x00cc6a90(param_2,2);
  return;
}



void FUN_00cbf050(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_010989f0,*param_1,param_2,param_3);
  return;
}



void FUN_00cbf070(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_010989f0,param_1);
  return;
}



undefined4
FUN_00cbf090(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x590,
                    "x448_to_EncryptedPrivateKeyInfo_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar3 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(*param_1,param_2);
  if (iVar1 != 0) {
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cbf135;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x40b,"X448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cbf135:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



void FUN_00cbf180(undefined4 param_1,undefined4 param_2)

{
  func_0x00cc6a90(param_2,1);
  return;
}



undefined4
FUN_00cbf190(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x591,
                    "x448_to_EncryptedPrivateKeyInfo_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar3 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(*param_1,param_2);
  if (iVar1 != 0) {
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cbf235;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x40b,"X448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cbf235:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cbf280(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x592,
                    "x448_to_PrivateKeyInfo_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar3 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(*param_1,param_2);
  if (iVar1 != 0) {
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cbf325;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x40b,"X448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cbf325:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cbf370(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x593,
                    "x448_to_PrivateKeyInfo_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar3 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(*param_1,param_2);
  if (iVar1 != 0) {
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cbf415;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x40b,"X448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cbf415:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cbf460(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x594,
                    "x448_to_SubjectPublicKeyInfo_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar3 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(*param_1,param_2);
  if (iVar1 != 0) {
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cbf51b;
    }
    uVar3 = 0;
    iVar2 = func_0x00cc7040(param_3,0x40b,0,0xffffffff,FUN_00cc6a30);
    if (iVar2 != 0) {
      uVar3 = func_0x00bdb2e0(iVar1,iVar2);
    }
    func_0x00bdd150(iVar2);
  }
LAB_00cbf51b:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cbf560(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x595,
                    "x448_to_SubjectPublicKeyInfo_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar3 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(*param_1,param_2);
  if (iVar1 != 0) {
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cbf605;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x40b,"X448 PUBLIC KEY",0,FUN_00cc6a30,param_1);
  }
LAB_00cbf605:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



void FUN_00cbf650(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098250,*param_1,param_2,param_3);
  return;
}



void FUN_00cbf670(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01098250,param_1);
  return;
}



undefined4
FUN_00cbf690(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    if ((param_5 & 1) != 0) {
      uVar3 = 0;
      if (param_3 == 0) {
LAB_00cbf6b5:
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                        "key2any_encode");
        func_0x00bc5160(0x39,0xc0102,0);
        return 0;
      }
      iVar1 = func_0x00bb6560(param_3,0xf000);
      if (iVar1 != 0) {
LAB_00cbf75c:
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                        "key2any_encode");
        func_0x00bc5160(0x39,0x80106,0);
        return 0;
      }
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 != 0) {
        if (param_6 != 0) {
          iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
          if (iVar2 == 0) goto LAB_00cbf74c;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,6,"RSA PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,param_1)
        ;
      }
LAB_00cbf74c:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
    if ((param_5 & 2) != 0) {
      uVar3 = 0;
      if (param_3 == 0) goto LAB_00cbf6b5;
      iVar1 = func_0x00bb6560(param_3,0xf000);
      if (iVar1 != 0) goto LAB_00cbf75c;
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 != 0) {
        if (param_6 != 0) {
          iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
          if (iVar2 == 0) goto LAB_00cbf809;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,6,"RSA PUBLIC KEY",FUN_00cc75f0,FUN_00bec740,param_1);
      }
LAB_00cbf809:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5a1,
                  "rsa_to_RSA_der_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return 0;
}



void FUN_00cbf850(undefined4 param_1,undefined4 param_2)

{
  func_0x00cc6a90(param_2,3);
  return;
}



bool FUN_00cbf860(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  
  if (param_4 != 0) {
LAB_00cbf9de:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5a2,
                    "rsa_to_RSA_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) goto LAB_00cbf9de;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cbf889;
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if (iVar1 != 0) goto LAB_00cbf938;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cbf928;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "RSA PUBLIC KEY";
    pcVar4 = FUN_00bec740;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cbf889:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if (iVar1 != 0) {
LAB_00cbf938:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                      "key2any_encode");
      func_0x00bc5160(0x39,0x80106,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cbf928;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "RSA PRIVATE KEY";
    pcVar4 = FUN_00bec720;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cbf928:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



void FUN_00cbfa10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01097c18,*param_1,param_2,param_3);
  return;
}



void FUN_00cbfa30(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01097c18,param_1);
  return;
}



undefined4 FUN_00cbfa50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5a4,
                    "dh_to_DH_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar2 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = func_0x00cc7260(iVar1,param_3,0x1c,"DH PARAMETERS",0,FUN_00cc6780,param_1);
    }
    func_0x00baa8e0(iVar1);
    return uVar2;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                  "key2any_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return 0;
}



void FUN_00cbfb60(undefined4 param_1,undefined4 param_2)

{
  func_0x00cc6a90(param_2,0x84);
  return;
}



bool FUN_00cbfb80(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5a5,
                    "dh_to_DH_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  bVar3 = false;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return false;
  }
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 != 0) {
      iVar2 = func_0x00c6d2d0(FUN_00cc6780,"DH PARAMETERS",iVar1,param_3,param_1[3],0,0,0,0);
      bVar3 = 0 < iVar2;
    }
    func_0x00baa8e0(iVar1);
    return bVar3;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                  "key2any_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return false;
}



void FUN_00cbfc90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01097cc8,*param_1,param_2,param_3);
  return;
}



void FUN_00cbfcb0(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01097cc8,param_1);
  return;
}



undefined4 FUN_00cbfcd0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5a6,
                    "dhx_to_DHX_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar2 = 0;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = func_0x00cc7260(iVar1,param_3,0x398,"X9.42 DH PARAMETERS",0,FUN_00cc6780,param_1);
    }
    func_0x00baa8e0(iVar1);
    return uVar2;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                  "key2any_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return 0;
}



bool FUN_00cbfde0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5a7,
                    "dhx_to_DHX_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  bVar3 = false;
  if (param_3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                    "key2any_encode");
    func_0x00bc5160(0x39,0xc0102,0);
    return false;
  }
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 != 0) {
      iVar2 = func_0x00c6d2d0(FUN_00cc6780,"X9.42 DH PARAMETERS",iVar1,param_3,param_1[3],0,0,0,0);
      bVar3 = 0 < iVar2;
    }
    func_0x00baa8e0(iVar1);
    return bVar3;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                  "key2any_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return false;
}



void FUN_00cbfef0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01097e28,*param_1,param_2,param_3);
  return;
}



void FUN_00cbff10(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01097e28,param_1);
  return;
}



undefined4
FUN_00cbff30(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    if ((param_5 & 1) != 0) {
      uVar3 = 0;
      if (param_3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                        "key2any_encode");
        func_0x00bc5160(0x39,0xc0102,0);
        return 0;
      }
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 != 0) {
        if (param_6 != 0) {
          iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
          if (iVar2 == 0) goto LAB_00cbffd9;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,0x74,"DSA PRIVATE KEY",FUN_00cc73b0,FUN_00c219b0,
                                param_1);
      }
LAB_00cbffd9:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
    if ((param_5 & 2) != 0) {
      uVar3 = 0;
      if (param_3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                        "key2any_encode");
        func_0x00bc5160(0x39,0xc0102,0);
        return 0;
      }
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 != 0) {
        if (param_6 != 0) {
          iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
          if (iVar2 == 0) goto LAB_00cc007f;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,0x74,"DSA PUBLIC KEY",FUN_00cc73b0,FUN_00c219d0,
                                param_1);
      }
LAB_00cc007f:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
    if ((param_5 & 0x84) != 0) {
      uVar3 = 0;
      if (param_3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                        "key2any_encode");
        func_0x00bc5160(0x39,0xc0102,0);
        return 0;
      }
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 != 0) {
        uVar3 = func_0x00cc7260(iVar1,param_3,0x74,"DSA PARAMETERS",0,FUN_00c219f0,param_1);
      }
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5aa,
                  "dsa_to_DSA_der_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return 0;
}



void FUN_00cc0150(undefined4 param_1,undefined4 param_2)

{
  func_0x00cc6a90(param_2,0x87);
  return;
}



bool FUN_00cc0170(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  
  if (param_4 != 0) {
LAB_00cc02d4:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5ab,
                    "dsa_to_DSA_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x84) == 0) goto LAB_00cc02d4;
      bVar3 = false;
      if (param_3 == 0) goto LAB_00cc0199;
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 == 0) goto LAB_00cc0226;
      puVar8 = (undefined4 *)0x0;
      pcVar7 = (code *)0x0;
      uVar6 = param_1[3];
      pcVar5 = "DSA PARAMETERS";
      pcVar4 = FUN_00c219f0;
    }
    else {
      bVar3 = false;
      if (param_3 == 0) goto LAB_00cc0199;
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if ((iVar1 == 0) ||
         ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
      goto LAB_00cc0226;
      puVar8 = (undefined4 *)0x0;
      pcVar7 = (code *)0x0;
      uVar6 = param_1[3];
      pcVar5 = "DSA PUBLIC KEY";
      pcVar4 = FUN_00c219d0;
    }
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc0199:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc0226;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "DSA PRIVATE KEY";
    pcVar4 = FUN_00c219b0;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc0226:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



void FUN_00cc0310(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01099388,*param_1,param_2,param_3);
  return;
}



void FUN_00cc0330(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01099388,param_1);
  return;
}



undefined4
FUN_00cc0350(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  if (param_4 != 0) {
LAB_00cc0446:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5ae,
                    "ec_to_EC_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc0446;
    uVar3 = 0;
    if (param_3 == 0) goto LAB_00cc0375;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc03fd;
    pcVar6 = FUN_00c21460;
    pcVar5 = (code *)0x0;
    pcVar4 = "EC PARAMETERS";
  }
  else {
    uVar3 = 0;
    if (param_3 == 0) {
LAB_00cc0375:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return 0;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc03fd;
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cc03fd;
    }
    pcVar6 = FUN_00c21540;
    pcVar5 = FUN_00cc74b0;
    pcVar4 = "EC PRIVATE KEY";
  }
  uVar3 = func_0x00cc7260(iVar1,param_3,0x198,pcVar4,pcVar5,pcVar6,param_1);
LAB_00cc03fd:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



void FUN_00cc0480(undefined4 param_1,undefined4 param_2)

{
  func_0x00cc6a90(param_2,0x85);
  return;
}



bool FUN_00cc04a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  
  if (param_4 != 0) {
LAB_00cc05a1:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5af,
                    "ec_to_EC_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc05a1;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc04c9;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc0556;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "EC PARAMETERS";
    pcVar4 = FUN_00c21460;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc04c9:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc0556;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "EC PRIVATE KEY";
    pcVar4 = FUN_00c21540;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc0556:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



void FUN_00cc05e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_010994a0,*param_1,param_2,param_3);
  return;
}



void FUN_00cc0600(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_010994a0,param_1);
  return;
}



undefined4
FUN_00cc0620(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  if (param_4 != 0) {
LAB_00cc0716:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5b1,
                    "sm2_to_SM2_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc0716;
    uVar3 = 0;
    if (param_3 == 0) goto LAB_00cc0645;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc06cd;
    pcVar6 = FUN_00c21460;
    pcVar5 = (code *)0x0;
