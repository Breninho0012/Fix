    pcVar4 = "SM2 PARAMETERS";
  }
  else {
    uVar3 = 0;
    if (param_3 == 0) {
LAB_00cc0645:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return 0;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc06cd;
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cc06cd;
    }
    pcVar6 = FUN_00c21540;
    pcVar5 = FUN_00cc74b0;
    pcVar4 = "SM2 PRIVATE KEY";
  }
  uVar3 = func_0x00cc7260(iVar1,param_3,0x198,pcVar4,pcVar5,pcVar6,param_1);
LAB_00cc06cd:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



bool FUN_00cc0750(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc0851:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5b2,
                    "sm2_to_SM2_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc0851;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc0779;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc0806;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "SM2 PARAMETERS";
    pcVar4 = FUN_00c21460;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc0779:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc0806;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "SM2 PRIVATE KEY";
    pcVar4 = FUN_00c21540;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc0806:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



undefined4
FUN_00cc0890(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    if ((param_5 & 1) != 0) {
      uVar3 = 0;
      if (param_3 == 0) {
LAB_00cc08b5:
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                        "key2any_encode");
        func_0x00bc5160(0x39,0xc0102,0);
        return 0;
      }
      iVar1 = func_0x00bb6560(param_3,0xf000);
      if (iVar1 != 0) {
LAB_00cc095c:
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
          if (iVar2 == 0) goto LAB_00cc094c;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,6,"RSA PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,param_1)
        ;
      }
LAB_00cc094c:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
    if ((param_5 & 2) != 0) {
      uVar3 = 0;
      if (param_3 == 0) goto LAB_00cc08b5;
      iVar1 = func_0x00bb6560(param_3,0xf000);
      if (iVar1 != 0) goto LAB_00cc095c;
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 != 0) {
        if (param_6 != 0) {
          iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
          if (iVar2 == 0) goto LAB_00cc0a09;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,6,"RSA PUBLIC KEY",FUN_00cc75f0,FUN_00bec740,param_1);
      }
LAB_00cc0a09:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5b7,
                  "rsa_to_PKCS1_der_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return 0;
}



bool FUN_00cc0a50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc0bce:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5b8,
                    "rsa_to_PKCS1_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) goto LAB_00cc0bce;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc0a79;
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if (iVar1 != 0) goto LAB_00cc0b28;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc0b18;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "RSA PUBLIC KEY";
    pcVar4 = FUN_00bec740;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc0a79:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if (iVar1 != 0) {
LAB_00cc0b28:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                      "key2any_encode");
      func_0x00bc5160(0x39,0x80106,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc0b18;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "RSA PRIVATE KEY";
    pcVar4 = FUN_00bec720;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc0b18:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



void FUN_00cc0c00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_010982e8,*param_1,param_2,param_3);
  return;
}



void FUN_00cc0c20(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_010982e8,param_1);
  return;
}



undefined4
FUN_00cc0c40(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  
  if (param_4 != 0) {
LAB_00cc0dc5:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5b9,
                    "rsapss_to_PKCS1_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) goto LAB_00cc0dc5;
    uVar3 = 0;
    if (param_3 == 0) goto LAB_00cc0c65;
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if ((iVar1 == 0) || (iVar1 != 0x1000)) goto LAB_00cc0d16;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc0d06;
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cc0d06;
    }
    pcVar5 = FUN_00bec740;
    pcVar4 = "RSA-PSS PUBLIC KEY";
  }
  else {
    uVar3 = 0;
    if (param_3 == 0) {
LAB_00cc0c65:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return 0;
    }
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if ((iVar1 == 0) || (iVar1 != 0x1000)) {
LAB_00cc0d16:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                      "key2any_encode");
      func_0x00bc5160(0x39,0x80106,0);
      return 0;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc0d06;
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cc0d06;
    }
    pcVar5 = FUN_00bec720;
    pcVar4 = "RSA-PSS PRIVATE KEY";
  }
  uVar3 = func_0x00cc7260(iVar1,param_3,0x390,pcVar4,FUN_00cc75f0,pcVar5,param_1);
LAB_00cc0d06:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



bool FUN_00cc0e00(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc0f8c:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5ba,
                    "rsapss_to_PKCS1_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) goto LAB_00cc0f8c;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc0e29;
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if ((iVar1 == 0) || (iVar1 != 0x1000)) goto LAB_00cc0edf;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc0ecf;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "RSA-PSS PUBLIC KEY";
    pcVar4 = FUN_00bec740;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc0e29:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if ((iVar1 == 0) || (iVar1 != 0x1000)) {
LAB_00cc0edf:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                      "key2any_encode");
      func_0x00bc5160(0x39,0x80106,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc0ecf;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "RSA-PSS PRIVATE KEY";
    pcVar4 = FUN_00bec720;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc0ecf:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



undefined4 FUN_00cc0fc0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5bc,
                    "dh_to_PKCS3_der_encode");
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



bool FUN_00cc10d0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5bd,
                    "dh_to_PKCS3_pem_encode");
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



undefined4 FUN_00cc11e0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5be,
                    "dhx_to_X9_42_der_encode");
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



bool FUN_00cc12f0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5bf,
                    "dhx_to_X9_42_pem_encode");
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



undefined4
FUN_00cc1400(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  if (param_4 != 0) {
LAB_00cc14f6:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5c2,
                    "ec_to_X9_62_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc14f6;
    uVar3 = 0;
    if (param_3 == 0) goto LAB_00cc1425;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc14ad;
    pcVar6 = FUN_00c21460;
    pcVar5 = (code *)0x0;
    pcVar4 = "EC PARAMETERS";
  }
  else {
    uVar3 = 0;
    if (param_3 == 0) {
LAB_00cc1425:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return 0;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc14ad;
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cc14ad;
    }
    pcVar6 = FUN_00c21540;
    pcVar5 = FUN_00cc74b0;
    pcVar4 = "EC PRIVATE KEY";
  }
  uVar3 = func_0x00cc7260(iVar1,param_3,0x198,pcVar4,pcVar5,pcVar6,param_1);
LAB_00cc14ad:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



bool FUN_00cc1530(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc1631:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x5c3,
                    "ec_to_X9_62_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc1631;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc1559;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc15e6;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "EC PARAMETERS";
    pcVar4 = FUN_00c21460;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc1559:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc15e6;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "EC PRIVATE KEY";
    pcVar4 = FUN_00c21540;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc15e6:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



void FUN_00cc1670(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x28,"providers\\implementations\\encode_decode\\encode_key2any.c",0x3b1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 1;
  }
  return;
}



void FUN_00cc16a0(int param_1)

{
  func_0x00c473a0(param_1 + 0x10);
  FUN_00ba8550(*(undefined4 *)(param_1 + 0xc));
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\encode_key2any.c",0x3c1);
  return;
}



undefined ** FUN_00cc16d0(void)

{
  return &PTR_s_cipher_010a0550;
}



bool FUN_00cc16e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  puVar1 = param_3;
  uVar3 = func_0x00bc3c60(*param_3);
  uVar2 = param_4;
  iVar4 = func_0x00bc09d0(param_4,"cipher");
  iVar5 = func_0x00bc09d0(uVar2,"properties");
  iVar6 = func_0x00bc09d0(uVar2,"save-parameters");
  if (iVar4 != 0) {
    param_3 = (undefined4 *)0x0;
    iVar4 = func_0x00bc08d0(iVar4,&param_3);
    if (iVar4 == 0) {
      return false;
    }
    if ((iVar5 != 0) && (iVar4 = func_0x00bc08d0(iVar5,&stack0x00000000), iVar4 == 0)) {
      return false;
    }
    FUN_00ba8550(puVar1[3]);
    puVar1[3] = 0;
    puVar1[2] = (uint)(param_3 != (undefined4 *)0x0);
    if (param_3 != (undefined4 *)0x0) {
      iVar4 = func_0x00ba8520(uVar3,param_3,0);
      puVar1[3] = iVar4;
      if (iVar4 == 0) {
        return false;
      }
    }
  }
  if (iVar6 == 0) {
    return true;
  }
  iVar4 = func_0x00bbfcd0(iVar6,puVar1 + 1);
  return iVar4 != 0;
}



undefined4
FUN_00cc17e0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    if ((param_5 & 1) != 0) {
      uVar3 = 0;
      if (param_3 == 0) {
LAB_00cc1805:
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                        "key2any_encode");
        func_0x00bc5160(0x39,0xc0102,0);
        return 0;
      }
      iVar1 = func_0x00bb6560(param_3,0xf000);
      if (iVar1 != 0) {
LAB_00cc18ac:
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
          if (iVar2 == 0) goto LAB_00cc189c;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,6,"RSA PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,param_1)
        ;
      }
LAB_00cc189c:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
    if ((param_5 & 2) != 0) {
      uVar3 = 0;
      if (param_3 == 0) goto LAB_00cc1805;
      iVar1 = func_0x00bb6560(param_3,0xf000);
      if (iVar1 != 0) goto LAB_00cc18ac;
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 != 0) {
        if (param_6 != 0) {
          iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
          if (iVar2 == 0) goto LAB_00cc1959;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,6,"RSA PUBLIC KEY",FUN_00cc75f0,FUN_00bec740,param_1);
      }
LAB_00cc1959:
      func_0x00baa8e0(iVar1);
      return uVar3;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x522,
                  "rsa_to_type_specific_keypair_der_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return 0;
}



undefined4 FUN_00cc19a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x524,
                    "dh_to_type_specific_params_der_encode");
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



undefined4 FUN_00cc1ab0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x525,
                    "dhx_to_type_specific_params_der_encode");
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



undefined4
FUN_00cc1bc0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
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
          if (iVar2 == 0) goto LAB_00cc1c69;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,0x74,"DSA PRIVATE KEY",FUN_00cc73b0,FUN_00c219b0,
                                param_1);
      }
LAB_00cc1c69:
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
          if (iVar2 == 0) goto LAB_00cc1d0f;
        }
        uVar3 = func_0x00cc7260(iVar1,param_3,0x74,"DSA PUBLIC KEY",FUN_00cc73b0,FUN_00c219d0,
                                param_1);
      }
LAB_00cc1d0f:
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
  func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x528,
                  "dsa_to_type_specific_der_encode");
  func_0x00bc5160(0x39,0x80106,0);
  return 0;
}



undefined4
FUN_00cc1de0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  if (param_4 != 0) {
LAB_00cc1ed6:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x52b,
                    "ec_to_type_specific_no_pub_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc1ed6;
    uVar3 = 0;
    if (param_3 == 0) goto LAB_00cc1e05;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc1e8d;
    pcVar6 = FUN_00c21460;
    pcVar5 = (code *)0x0;
    pcVar4 = "EC PARAMETERS";
  }
  else {
    uVar3 = 0;
    if (param_3 == 0) {
LAB_00cc1e05:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return 0;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc1e8d;
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cc1e8d;
    }
    pcVar6 = FUN_00c21540;
    pcVar5 = FUN_00cc74b0;
    pcVar4 = "EC PRIVATE KEY";
  }
  uVar3 = func_0x00cc7260(iVar1,param_3,0x198,pcVar4,pcVar5,pcVar6,param_1);
LAB_00cc1e8d:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc1f10(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  code *pcVar6;
  
  if (param_4 != 0) {
LAB_00cc2006:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x52d,
                    "sm2_to_type_specific_no_pub_der_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc2006;
    uVar3 = 0;
    if (param_3 == 0) goto LAB_00cc1f35;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc1fbd;
    pcVar6 = FUN_00c21460;
    pcVar5 = (code *)0x0;
    pcVar4 = "SM2 PARAMETERS";
  }
  else {
    uVar3 = 0;
    if (param_3 == 0) {
LAB_00cc1f35:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return 0;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc1fbd;
    if (param_6 != 0) {
      iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7);
      if (iVar2 == 0) goto LAB_00cc1fbd;
    }
    pcVar6 = FUN_00c21540;
    pcVar5 = FUN_00cc74b0;
    pcVar4 = "SM2 PRIVATE KEY";
  }
  uVar3 = func_0x00cc7260(iVar1,param_3,0x198,pcVar4,pcVar5,pcVar6,param_1);
LAB_00cc1fbd:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



bool FUN_00cc2040(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc21be:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x535,
                    "rsa_to_type_specific_keypair_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) goto LAB_00cc21be;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc2069;
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if (iVar1 != 0) goto LAB_00cc2118;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc2108;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "RSA PUBLIC KEY";
    pcVar4 = FUN_00bec740;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc2069:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00bb6560(param_3,0xf000);
    if (iVar1 != 0) {
LAB_00cc2118:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x42c,
                      "key2any_encode");
      func_0x00bc5160(0x39,0x80106,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc2108;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "RSA PRIVATE KEY";
    pcVar4 = FUN_00bec720;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc2108:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



bool FUN_00cc21f0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x537,
                    "dh_to_type_specific_params_pem_encode");
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



bool FUN_00cc2300(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_4 != 0) || ((param_5 & 0x84) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x538,
                    "dhx_to_type_specific_params_pem_encode");
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



bool FUN_00cc2410(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc2574:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x53b,
                    "dsa_to_type_specific_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x84) == 0) goto LAB_00cc2574;
      bVar3 = false;
      if (param_3 == 0) goto LAB_00cc2439;
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if (iVar1 == 0) goto LAB_00cc24c6;
      puVar8 = (undefined4 *)0x0;
      pcVar7 = (code *)0x0;
      uVar6 = param_1[3];
      pcVar5 = "DSA PARAMETERS";
      pcVar4 = FUN_00c219f0;
    }
    else {
      bVar3 = false;
      if (param_3 == 0) goto LAB_00cc2439;
      iVar1 = func_0x00cd59f0(*param_1,param_2);
      if ((iVar1 == 0) ||
         ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
      goto LAB_00cc24c6;
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
LAB_00cc2439:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc24c6;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "DSA PRIVATE KEY";
    pcVar4 = FUN_00c219b0;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc24c6:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



bool FUN_00cc25b0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc26b1:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x53e,
                    "ec_to_type_specific_no_pub_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc26b1;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc25d9;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc2666;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "EC PARAMETERS";
    pcVar4 = FUN_00c21460;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc25d9:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc2666;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "EC PRIVATE KEY";
    pcVar4 = FUN_00c21540;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc2666:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



bool FUN_00cc26f0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
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
LAB_00cc27f1:
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x540,
                    "sm2_to_type_specific_no_pub_pem_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_00cc27f1;
    bVar3 = false;
    if (param_3 == 0) goto LAB_00cc2719;
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if (iVar1 == 0) goto LAB_00cc27a6;
    puVar8 = (undefined4 *)0x0;
    pcVar7 = (code *)0x0;
    uVar6 = param_1[3];
    pcVar5 = "SM2 PARAMETERS";
    pcVar4 = FUN_00c21460;
  }
  else {
    bVar3 = false;
    if (param_3 == 0) {
LAB_00cc2719:
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x41f,
                      "key2any_encode");
      func_0x00bc5160(0x39,0xc0102,0);
      return false;
    }
    iVar1 = func_0x00cd59f0(*param_1,param_2);
    if ((iVar1 == 0) ||
       ((param_6 != 0 && (iVar2 = func_0x00c47740(param_1 + 4,param_6,param_7), iVar2 == 0))))
    goto LAB_00cc27a6;
    puVar8 = param_1 + 4;
    pcVar7 = FUN_00c47700;
    uVar6 = param_1[3];
    pcVar5 = "SM2 PRIVATE KEY";
    pcVar4 = FUN_00c21540;
  }
  iVar2 = func_0x00c6d2d0(pcVar4,pcVar5,iVar1,param_3,uVar6,0,0,pcVar7,puVar8);
  bVar3 = 0 < iVar2;
LAB_00cc27a6:
  func_0x00baa8e0(iVar1);
  return bVar3;
}



undefined4
FUN_00cc2830(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x54c,
                    "rsa_to_EncryptedPrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc28e8;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,6,"RSA PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,param_1);
  }
LAB_00cc28e8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc2960(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x54d,
                    "rsa_to_EncryptedPrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc2a18;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,6,"RSA PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,param_1);
  }
LAB_00cc2a18:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc2a90(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x54e,
                    "rsa_to_PrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc2b48;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,6,"RSA PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,param_1);
  }
LAB_00cc2b48:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc2bc0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x54f,
                    "rsa_to_PrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc2c78;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,6,"RSA PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,param_1);
  }
LAB_00cc2c78:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc2cf0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x550,
                    "rsa_to_SubjectPublicKeyInfo_der_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc2da8;
    }
    uVar3 = func_0x00cc70f0(iVar1,param_3,6,"RSA PUBLIC KEY",FUN_00cc75f0,FUN_00bec740,param_1);
  }
LAB_00cc2da8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc2e20(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x551,
                    "rsa_to_SubjectPublicKeyInfo_pem_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc2ed8;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,6,"RSA PUBLIC KEY",FUN_00cc75f0,FUN_00bec740,param_1);
  }
LAB_00cc2ed8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc2f60(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x552,
                    "rsapss_to_EncryptedPrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if ((iVar1 == 0) || (iVar1 != 0x1000)) {
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
      if (iVar2 == 0) goto LAB_00cc3022;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x390,"RSA-PSS PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,
                            param_1);
  }
LAB_00cc3022:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3090(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x553,
                    "rsapss_to_EncryptedPrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if ((iVar1 == 0) || (iVar1 != 0x1000)) {
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
      if (iVar2 == 0) goto LAB_00cc3152;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x390,"RSA-PSS PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,
                            param_1);
  }
LAB_00cc3152:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc31c0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x554,
                    "rsapss_to_PrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if ((iVar1 == 0) || (iVar1 != 0x1000)) {
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
      if (iVar2 == 0) goto LAB_00cc3282;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x390,"RSA-PSS PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,
                            param_1);
  }
LAB_00cc3282:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc32f0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x555,
                    "rsapss_to_PrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if ((iVar1 == 0) || (iVar1 != 0x1000)) {
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
      if (iVar2 == 0) goto LAB_00cc33b2;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x390,"RSA-PSS PRIVATE KEY",FUN_00cc75f0,FUN_00bec720,
                            param_1);
  }
LAB_00cc33b2:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3420(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x556,
                    "rsapss_to_SubjectPublicKeyInfo_der_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if ((iVar1 == 0) || (iVar1 != 0x1000)) {
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
      if (iVar2 == 0) goto LAB_00cc34e2;
    }
    uVar3 = func_0x00cc70f0(iVar1,param_3,0x390,"RSA-PSS PUBLIC KEY",FUN_00cc75f0,FUN_00bec740,
                            param_1);
  }
LAB_00cc34e2:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3550(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x557,
                    "rsapss_to_SubjectPublicKeyInfo_pem_encode");
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
  iVar1 = func_0x00bb6560(param_3,0xf000);
  if ((iVar1 == 0) || (iVar1 != 0x1000)) {
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
      if (iVar2 == 0) goto LAB_00cc3612;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x390,"RSA-PSS PUBLIC KEY",FUN_00cc75f0,FUN_00bec740,
                            param_1);
  }
LAB_00cc3612:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3680(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x559,
                    "dh_to_EncryptedPrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc3738;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x1c,"DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,param_1);
  }
LAB_00cc3738:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc37b0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x55a,
                    "dh_to_EncryptedPrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc3868;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x1c,"DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,param_1);
  }
LAB_00cc3868:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc38e0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x55b,
                    "dh_to_PrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc3998;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x1c,"DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,param_1);
  }
LAB_00cc3998:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3a10(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x55c,
                    "dh_to_PrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc3ac8;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x1c,"DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,param_1);
  }
LAB_00cc3ac8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3b40(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x55d,
                    "dh_to_SubjectPublicKeyInfo_der_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc3bf8;
    }
    uVar3 = func_0x00cc70f0(iVar1,param_3,0x1c,"DH PUBLIC KEY",FUN_00cc72f0,FUN_00cc66e0,param_1);
  }
LAB_00cc3bf8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3c70(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x55e,
                    "dh_to_SubjectPublicKeyInfo_pem_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 != 0) {
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
      if (iVar2 == 0) goto LAB_00cc3d28;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x1c,"DH PUBLIC KEY",FUN_00cc72f0,FUN_00cc66e0,param_1);
  }
LAB_00cc3d28:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3da0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x55f,
                    "dhx_to_EncryptedPrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
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
      if (iVar2 == 0) goto LAB_00cc3e5b;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x398,"X9.42 DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,
                            param_1);
  }
LAB_00cc3e5b:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc3ed0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x560,
                    "dhx_to_EncryptedPrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
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
      if (iVar2 == 0) goto LAB_00cc3f8b;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x398,"X9.42 DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,
                            param_1);
  }
LAB_00cc3f8b:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4000(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x561,
                    "dhx_to_PrivateKeyInfo_der_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
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
      if (iVar2 == 0) goto LAB_00cc40bb;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x398,"X9.42 DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,
                            param_1);
  }
LAB_00cc40bb:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4130(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x562,
                    "dhx_to_PrivateKeyInfo_pem_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
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
      if (iVar2 == 0) goto LAB_00cc41eb;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x398,"X9.42 DH PRIVATE KEY",FUN_00cc72f0,FUN_00cc6640,
                            param_1);
  }
LAB_00cc41eb:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4260(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x563,
                    "dhx_to_SubjectPublicKeyInfo_der_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
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
      if (iVar2 == 0) goto LAB_00cc431b;
    }
    uVar3 = func_0x00cc70f0(iVar1,param_3,0x398,"X9.42 DH PUBLIC KEY",FUN_00cc72f0,FUN_00cc66e0,
                            param_1);
  }
LAB_00cc431b:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4390(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x564,
                    "dhx_to_SubjectPublicKeyInfo_pem_encode");
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
  iVar1 = func_0x00c0f9d0(param_3,0x1000);
  if (iVar1 == 0) {
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
      if (iVar2 == 0) goto LAB_00cc444b;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x398,"X9.42 DH PUBLIC KEY",FUN_00cc72f0,FUN_00cc66e0,
                            param_1);
  }
LAB_00cc444b:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc44c0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x567,
                    "dsa_to_EncryptedPrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc4565;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x74,"DSA PRIVATE KEY",FUN_00cc73b0,FUN_00cc67b0,param_1);
  }
LAB_00cc4565:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc45b0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x568,
                    "dsa_to_EncryptedPrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc4655;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x74,"DSA PRIVATE KEY",FUN_00cc73b0,FUN_00cc67b0,param_1);
  }
LAB_00cc4655:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc46a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x569,
                    "dsa_to_PrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc4745;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x74,"DSA PRIVATE KEY",FUN_00cc73b0,FUN_00cc67b0,param_1);
  }
LAB_00cc4745:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4790(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x56a,
                    "dsa_to_PrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc4835;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x74,"DSA PRIVATE KEY",FUN_00cc73b0,FUN_00cc67b0,param_1);
  }
LAB_00cc4835:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4880(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x56b,
                    "dsa_to_SubjectPublicKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc4925;
    }
    uVar3 = func_0x00cc70f0(iVar1,param_3,0x74,"DSA PUBLIC KEY",FUN_00cc73b0,FUN_00cc6850,param_1);
  }
LAB_00cc4925:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4970(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x56c,
                    "dsa_to_SubjectPublicKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc4a15;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x74,"DSA PUBLIC KEY",FUN_00cc73b0,FUN_00cc6850,param_1);
  }
LAB_00cc4a15:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4a60(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x56f,
                    "ec_to_EncryptedPrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc4b08;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x198,"EC PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1);
  }
LAB_00cc4b08:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4b50(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x570,
                    "ec_to_EncryptedPrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc4bf8;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x198,"EC PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1);
  }
LAB_00cc4bf8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4c40(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x571,
                    "ec_to_PrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc4ce8;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x198,"EC PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1);
  }
LAB_00cc4ce8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4d30(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x572,
                    "ec_to_PrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc4dd8;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x198,"EC PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1);
  }
LAB_00cc4dd8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4e20(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x573,
                    "ec_to_SubjectPublicKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc4ec8;
    }
    uVar3 = func_0x00cc70f0(iVar1,param_3,0x198,"EC PUBLIC KEY",FUN_00cc74b0,FUN_00cc6930,param_1);
  }
LAB_00cc4ec8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc4f10(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x574,
                    "ec_to_SubjectPublicKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc4fb8;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x198,"EC PUBLIC KEY",FUN_00cc74b0,FUN_00cc6930,param_1);
  }
LAB_00cc4fb8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc5000(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x576,
                    "sm2_to_EncryptedPrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc50a8;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x198,"SM2 PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1)
    ;
  }
LAB_00cc50a8:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc50f0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x577,
                    "sm2_to_EncryptedPrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5198;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x198,"SM2 PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1)
    ;
  }
LAB_00cc5198:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc51e0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x578,
                    "sm2_to_PrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc5288;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x198,"SM2 PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1)
    ;
  }
LAB_00cc5288:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc52d0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x579,
                    "sm2_to_PrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5378;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x198,"SM2 PRIVATE KEY",FUN_00cc74b0,FUN_00cc68f0,param_1)
    ;
  }
LAB_00cc5378:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc53c0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x57a,
                    "sm2_to_SubjectPublicKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc5468;
    }
    uVar3 = func_0x00cc70f0(iVar1,param_3,0x198,"SM2 PUBLIC KEY",FUN_00cc74b0,FUN_00cc6930,param_1);
  }
LAB_00cc5468:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc54b0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x57b,
                    "sm2_to_SubjectPublicKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5558;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x198,"SM2 PUBLIC KEY",FUN_00cc74b0,FUN_00cc6930,param_1);
  }
LAB_00cc5558:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



void FUN_00cc55a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098a98,*param_1,param_2,param_3);
  return;
}



void FUN_00cc55c0(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01098a98,param_1);
  return;
}



undefined4
FUN_00cc55e0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x57e,
                    "ed25519_to_EncryptedPrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc5685;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x43f,"ED25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5685:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc56d0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x57f,
                    "ed25519_to_EncryptedPrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5775;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x43f,"ED25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5775:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc57c0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x580,
                    "ed25519_to_PrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc5865;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x43f,"ED25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5865:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc58b0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x581,
                    "ed25519_to_PrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5955;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x43f,"ED25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5955:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc59a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x582,
                    "ed25519_to_SubjectPublicKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc5a5b;
    }
    uVar3 = 0;
    iVar2 = func_0x00cc7040(param_3,0x43f,0,0xffffffff,FUN_00cc6a30);
    if (iVar2 != 0) {
      uVar3 = func_0x00bdb2e0(iVar1,iVar2);
    }
    func_0x00bdd150(iVar2);
  }
LAB_00cc5a5b:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc5aa0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x583,
                    "ed25519_to_SubjectPublicKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5b45;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x43f,"ED25519 PUBLIC KEY",0,FUN_00cc6a30,param_1);
  }
LAB_00cc5b45:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



void FUN_00cc5b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098b40,*param_1,param_2,param_3);
  return;
}



void FUN_00cc5bb0(undefined4 param_1)

{
  func_0x00cec4c0(&DAT_01098b40,param_1);
  return;
}



undefined4
FUN_00cc5bd0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x584,
                    "ed448_to_EncryptedPrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc5c75;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x440,"ED448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5c75:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc5cc0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x585,
                    "ed448_to_EncryptedPrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5d65;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x440,"ED448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5d65:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc5db0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x586,
                    "ed448_to_PrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc5e55;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x440,"ED448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5e55:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc5ea0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x587,
                    "ed448_to_PrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc5f45;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x440,"ED448 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc5f45:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc5f90(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x588,
                    "ed448_to_SubjectPublicKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc604b;
    }
    uVar3 = 0;
    iVar2 = func_0x00cc7040(param_3,0x440,0,0xffffffff,FUN_00cc6a30);
    if (iVar2 != 0) {
      uVar3 = func_0x00bdb2e0(iVar1,iVar2);
    }
    func_0x00bdd150(iVar2);
  }
LAB_00cc604b:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc6090(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x589,
                    "ed448_to_SubjectPublicKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc6135;
    }
    uVar3 = func_0x00cc7180(iVar1,param_3,0x440,"ED448 PUBLIC KEY",0,FUN_00cc6a30,param_1);
  }
LAB_00cc6135:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc6180(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x58a,
                    "x25519_to_EncryptedPrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc6225;
    }
    uVar3 = func_0x00cc6c30(iVar1,param_3,0x40a,"X25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc6225:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc6270(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x58b,
                    "x25519_to_EncryptedPrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc6315;
    }
    uVar3 = func_0x00cc6cd0(iVar1,param_3,0x40a,"X25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc6315:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc6360(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x58c,
                    "x25519_to_PrivateKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc6405;
    }
    uVar3 = func_0x00cc6e20(iVar1,param_3,0x40a,"X25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc6405:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc6450(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 1) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x58d,
                    "x25519_to_PrivateKeyInfo_pem_encode");
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
      if (iVar2 == 0) goto LAB_00cc64f5;
    }
    uVar3 = func_0x00cc6f30(iVar1,param_3,0x40a,"X25519 PRIVATE KEY",0,FUN_00cc6980,param_1);
  }
LAB_00cc64f5:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4
FUN_00cc6540(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) || ((param_5 & 2) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x58e,
                    "x25519_to_SubjectPublicKeyInfo_der_encode");
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
      if (iVar2 == 0) goto LAB_00cc65fb;
    }
    uVar3 = 0;
    iVar2 = func_0x00cc7040(param_3,0x40a,0,0xffffffff,FUN_00cc6a30);
    if (iVar2 != 0) {
      uVar3 = func_0x00bdb2e0(iVar1,iVar2);
    }
    func_0x00bdd150(iVar2);
  }
LAB_00cc65fb:
  func_0x00baa8e0(iVar1);
  return uVar3;
}



undefined4 FUN_00cc6640(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bb62e0(param_1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x1f2,
                    "dh_pki_priv_to_der");
    func_0x00bc5160(0x39,0xdd,0);
    return 0;
  }
  iVar1 = func_0x00bd21d0(iVar1,0);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x1f6,
                    "dh_pki_priv_to_der");
    func_0x00bc5160(0x39,0xa0,0);
    return 0;
  }
  uVar2 = func_0x00bfcae0(iVar1,param_2);
  func_0x00bfbe40(iVar1);
  return uVar2;
}



undefined4 FUN_00cc66e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc3bb0(param_1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x1dd,
                    "dh_spki_pub_to_der");
    func_0x00bc5160(0x39,0xdc,0);
    return 0;
  }
  iVar1 = func_0x00bd21d0(iVar1,0);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x1e1,
                    "dh_spki_pub_to_der");
    func_0x00bc5160(0x39,0xa0,0);
    return 0;
  }
  uVar2 = func_0x00bfcae0(iVar1,param_2);
  func_0x00bfbe40(iVar1);
  return uVar2;
}



void FUN_00cc6780(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00c0f9d0(param_1,0x1000);
  if (iVar1 != 0) {
    func_0x00c66510();
    return;
  }
  func_0x00c664f0(param_1,param_2);
  return;
}



undefined4 FUN_00cc67b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc3bb0(param_1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x265,
                    "dsa_pki_priv_to_der");
    func_0x00bc5160(0x39,0xdd,0);
    return 0;
  }
  iVar1 = func_0x00bd21d0(iVar1,0);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x269,
                    "dsa_pki_priv_to_der");
    func_0x00bc5160(0x39,0xa0,0);
    return 0;
  }
  uVar2 = func_0x00bfcae0(iVar1,param_2);
  func_0x00bfbe40(iVar1);
  return uVar2;
}



undefined4 FUN_00cc6850(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc42d0(param_1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x250,
                    "dsa_spki_pub_to_der");
    func_0x00bc5160(0x39,0xdc,0);
    return 0;
  }
  iVar1 = func_0x00bd21d0(iVar1,0);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x254,
                    "dsa_spki_pub_to_der");
    func_0x00bc5160(0x39,0xa0,0);
    return 0;
  }
  uVar2 = func_0x00bfcae0(iVar1,param_2);
  func_0x00bfbe40(iVar1);
  return uVar2;
}



undefined4 FUN_00cc68f0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0x00bb6160(param_1);
  func_0x00c12a40(param_1,uVar1 | 1);
  uVar2 = FUN_00c21540(param_1,param_2);
  func_0x00c12a40(param_1,uVar1);
  return uVar2;
}



int FUN_00cc6930(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = func_0x00baf190(param_1);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x2c1,
                    "ec_spki_pub_to_der");
    func_0x00bc5160(0x39,0xdc,0);
    return 0;
  }
  bVar1 = false;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x488,"i2o_ECPublicKey");
    func_0x00bc5160(0x10,0xc0102,0);
    return 0;
  }
  iVar3 = func_0x00c4fe40(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x1c),0,0,0);
  if (param_2 == (int *)0x0) {
    return iVar3;
  }
  if (iVar3 != 0) {
    iVar2 = *param_2;
    if (iVar2 == 0) {
      iVar2 = FUN_00bbc4f0(iVar3,"crypto\\ec\\ec_asn1.c",0x494);
      *param_2 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
    }
    iVar2 = func_0x00c4fe40(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x1c),iVar2,iVar3,0);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x49a,"i2o_ECPublicKey");
      func_0x00bc5160(0x10,0x80010,0);
      if (bVar1) {
        FUN_00bbc580(*param_2,"crypto\\ec\\ec_asn1.c",0x49c);
        *param_2 = 0;
      }
      return 0;
    }
    if (!bVar1) {
      *param_2 = *param_2 + iVar3;
    }
    return iVar3;
  }
  return 0;
}



int FUN_00cc6980(void)

{
  int iVar1;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  
  func_0x00e87f70();
  if ((in_stack_00000014 == 0) || (*(int *)(in_stack_00000014 + 0x48) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x313,
                    "ecx_pki_priv_to_der");
    func_0x00bc5160(0x39,0xc0102,0);
    iVar1 = 0;
  }
  else {
    iVar1 = func_0x00bfcb00(&stack0x00000000,in_stack_00000018);
    if (iVar1 < 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x31d,
                      "ecx_pki_priv_to_der");
      func_0x00bc5160(0x39,0x8000d,0);
      return 0;
    }
  }
  return iVar1;
}



undefined4 FUN_00cc6a30(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x300,
                    "ecx_spki_pub_to_der");
    func_0x00bc5160(0x39,0xc0102,0);
  }
  else {
    iVar1 = func_0x00bbbc30(param_1 + 0xc,*(undefined4 *)(param_1 + 0x4c),
                            "providers\\implementations\\encode_decode\\encode_key2any.c",0x304);
    if (iVar1 != 0) {
      *param_2 = iVar1;
      return *(undefined4 *)(param_1 + 0x4c);
    }
  }
  return 0;
}



undefined4
FUN_00cc72f0(undefined4 param_1,int param_2,undefined4 param_3,int *param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)func_0x00bfc1c0();
  if (piVar1 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x1c1,
                    "prepare_dh_params");
    func_0x00bc5160(0x39,0x8000d,0);
    return 0;
  }
  if (param_2 == 0x398) {
    iVar2 = func_0x00c66510();
  }
  else {
    iVar2 = func_0x00c664f0(param_1,piVar1 + 2);
  }
  *piVar1 = iVar2;
  if (iVar2 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x1cb,
                    "prepare_dh_params");
    func_0x00bc5160(0x39,0x8000d,0);
    FUN_00bfc170(piVar1);
    return 0;
  }
  piVar1[1] = 0x10;
  *param_4 = (int)piVar1;
  *param_5 = 0x10;
  return 1;
}



undefined4
FUN_00cc73b0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_00bc39e0(param_1);
  iVar2 = func_0x00bb6310(param_1);
  iVar3 = func_0x00baf190(param_1);
  if ((((param_3 == 0) || (iVar1 == 0)) || (iVar2 == 0)) || (iVar3 == 0)) {
    *param_4 = 0;
    *param_5 = 0xffffffff;
    return 1;
  }
  piVar4 = (int *)func_0x00bfc1c0();
  if (piVar4 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x229,
                    "encode_dsa_params");
    func_0x00bc5160(0x39,0x8000d,0);
    return 0;
  }
  iVar1 = FUN_00c219f0(param_1,piVar4 + 2);
  *piVar4 = iVar1;
  if (iVar1 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x230,
                    "encode_dsa_params");
    func_0x00bc5160(0x39,0x8000d,0);
    FUN_00bfc170(piVar4);
    return 0;
  }
  *param_5 = 0x10;
  *param_4 = (int)piVar4;
  return 1;
}



undefined4
FUN_00cc74b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = func_0x00bb6310(param_1);
  if (iVar1 != 0) {
    iVar2 = func_0x00baf190(iVar1);
    if (iVar2 == 0) {
LAB_00cc7547:
      piVar4 = (int *)func_0x00bfc1c0();
      if (piVar4 == (int *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x288,
                        "prepare_ec_explicit_params");
        func_0x00bc5160(0x39,0x8000d,0);
        return 0;
      }
      iVar1 = FUN_00c21460(param_1,piVar4 + 2);
      *piVar4 = iVar1;
      if (iVar1 < 1) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x28e,
                        "prepare_ec_explicit_params");
        func_0x00bc5160(0x39,0x8000d,0);
        FUN_00bfc170(piVar4);
        return 0;
      }
      *param_5 = 0x10;
      *param_4 = (int)piVar4;
      return 1;
    }
    iVar2 = func_0x00bc2660(iVar2);
    if (iVar2 != 0) {
      uVar3 = FUN_00baaa40(iVar1);
      if ((uVar3 & 1) == 0) goto LAB_00cc7547;
      iVar1 = func_0x00bc2520(iVar2);
      if (iVar1 != 0) {
        *param_4 = iVar2;
        *param_5 = 6;
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2any.c",0x2b1,
                      "prepare_ec_params");
      func_0x00bc5160(0x39,0xd1,0);
      FUN_00bfb4c0(iVar2);
    }
  }
  return 0;
}



undefined4 FUN_00cc75f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_stack_00000020;
  int *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  
  func_0x00e87f70();
  uVar2 = func_0x00bb6b80(in_stack_00000020);
  piVar1 = in_stack_0000002c;
  *in_stack_0000002c = 0;
  iVar3 = func_0x00bb6560(in_stack_00000020,0xf000);
  if (iVar3 == 0) {
    *in_stack_00000030 = 5;
    return 1;
  }
  if (iVar3 != 0x1000) {
    return 0;
  }
  iVar3 = func_0x00c66c50(uVar2);
  if (iVar3 != 0) {
    *in_stack_00000030 = 0xffffffff;
    return 1;
  }
  iVar3 = 0;
  in_stack_0000002c = (int *)0x0;
  iVar5 = 0;
  do {
    if (iVar5 != 0) {
      if (iVar5 != 1) goto LAB_00cc76de;
      iVar3 = FUN_00bbc4f0(in_stack_0000002c,
                           "providers\\implementations\\encode_decode\\encode_key2any.c",0x361);
      if (iVar3 != 0) {
        iVar4 = func_0x00bfab90(&stack0x00000000,iVar3,in_stack_0000002c);
        if (iVar4 != 0) goto LAB_00cc76de;
      }
LAB_00cc76a3:
      func_0x00bfa8e0(&stack0x00000000);
      goto LAB_00cc76b0;
    }
    iVar4 = func_0x00bfacc0(&stack0x00000000);
    if (iVar4 == 0) goto LAB_00cc76b0;
LAB_00cc76de:
    iVar4 = func_0x00ce9f80(&stack0x00000000,0xffffffff,uVar2);
    if (iVar4 == 0) goto LAB_00cc76a3;
    iVar4 = func_0x00bfaa70(&stack0x00000000);
    if (iVar4 == 0) goto LAB_00cc76a3;
    iVar4 = func_0x00bfab20(&stack0x00000000,&stack0x0000002c);
    if (iVar4 == 0) goto LAB_00cc76a3;
    func_0x00bfa8e0(&stack0x00000000);
  } while ((in_stack_0000002c != (int *)0x0) && (iVar5 = iVar5 + 1, iVar5 < 2));
  iVar5 = func_0x00bfc1c0();
  if (iVar5 != 0) {
    *in_stack_00000030 = 0x10;
    func_0x00bfc2c0(iVar5,iVar3,in_stack_0000002c);
    *piVar1 = iVar5;
    return 1;
  }
LAB_00cc76b0:
  FUN_00bbc580(iVar3,"providers\\implementations\\encode_decode\\encode_key2any.c",0x382);
  return 0;
}



void FUN_00cc7790(int param_1)

{
  func_0x00c473a0(param_1 + 8);
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\encode_key2ms.c",0x58);
  return;
}



bool FUN_00cc77b0(undefined4 param_1,byte param_2)

{
  return (param_2 & 3) != 0;
}



void FUN_00cc77c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x20,"providers\\implementations\\encode_decode\\encode_key2ms.c",0x49);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 2;
  }
  return;
}



undefined ** FUN_00cc77f0(void)

{
  return &PTR_s_encrypt_level_010a1828;
}



bool FUN_00cc7800(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc09d0(param_2,"encrypt-level");
  if (iVar1 != 0) {
    iVar1 = func_0x00bbfcd0(iVar1,param_1 + 4);
    return iVar1 != 0;
  }
  return true;
}



void FUN_00cc7840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01097e28,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7860(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2ms.c",0xe5,
                    "dsa2pvk_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar1 = func_0x00cc7aa0(param_1,param_3,param_5,param_2,FUN_00bd6eb0,param_6,param_7);
  return uVar1;
}



undefined4
FUN_00cc78c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2ms.c",0xe6,
                    "dsa2msblob_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar1 = func_0x00cc7a00(param_1,param_3,param_5,param_2,FUN_00bd6eb0,param_6,param_7);
  return uVar1;
}



void FUN_00cc7920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098250,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7940(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2ms.c",0xe9,
                    "rsa2pvk_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar1 = func_0x00cc7aa0(param_1,param_3,param_5,param_2,FUN_00c0da70,param_6,param_7);
  return uVar1;
}



undefined4
FUN_00cc79a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2ms.c",0xea,
                    "rsa2msblob_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar1 = func_0x00cc7a00(param_1,param_3,param_5,param_2,FUN_00c0da70,param_6,param_7);
  return uVar1;
}



void FUN_00cc7b60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01097c18,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x35e,
                    "dh2text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8200(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc7c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01097cc8,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7c20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x35f,
                    "dhx2text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8200(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



undefined4
FUN_00cc7ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x362,
                    "dsa2text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8470(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc7d20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01099388,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x365,
                    "ec2text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8940(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc7dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_010994a0,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x367,
                    "sm22text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8940(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc7e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098a98,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x36a,
                    "ed255192text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8c30(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc7f00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098b40,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x36b,
                    "ed4482text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8c30(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc7fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_01098948,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc7fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x36c,
                    "x255192text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8c30(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc8040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_010989f0,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc8060(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x36d,
                    "x4482text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc8c30(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



undefined4
FUN_00cc80e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x370,
                    "rsa2text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc9210(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc8160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00cec520(&DAT_010982e8,param_1,param_2,param_3);
  return;
}



undefined4
FUN_00cc8180(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2text.c",0x371,
                    "rsapss2text_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = func_0x00cc9210(iVar1,param_3,param_5);
  func_0x00baa8e0(iVar1);
  return uVar2;
}



void FUN_00cc9d20(undefined4 param_1,undefined4 param_2)

{
  func_0x00cc6a90(param_2,0x86);
  return;
}



undefined4
FUN_00cc9d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2blob.c",0xaf,
                    "ec2blob_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar1 = func_0x00cc9de0(param_1,param_3,param_5,param_2);
  return uVar1;
}



undefined4
FUN_00cc9d90(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\encode_key2blob.c",0xb1,
                    "sm22blob_encode");
    func_0x00bc5160(0x39,0x80106,0);
    return 0;
  }
  uVar1 = func_0x00cc9de0(param_1,param_3,param_5,param_2);
  return uVar1;
}



void FUN_00cc9e60(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\decode_der2key.c",0xa9);
  return;
}



void FUN_00cc9e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,code *param_6)

{
  byte bVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  int iVar10;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
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
  undefined4 in_stack_0000007c;
  uint in_stack_00000080;
  undefined4 *in_stack_00000088;
  undefined4 in_stack_0000008c;
  uint in_stack_00000090;
  code *in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined *puVar11;
  
  func_0x00e87f70();
  puVar3 = in_stack_00000088;
  in_stack_00000080 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_6 = in_stack_00000094;
  param_5 = in_stack_00000098;
  param_2 = 0;
  param_3 = 0;
  iVar10 = 0;
  in_stack_00000088[0x42] = in_stack_00000090;
  uVar7 = in_stack_00000090;
  if (in_stack_00000090 == 0) {
    uVar7 = *(uint *)(in_stack_00000088[0x41] + 0x10);
  }
  if ((*(uint *)(in_stack_00000088[0x41] + 0x10) & uVar7) == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\decode_der2key.c",0xe5,
                    "der2key_decode");
    func_0x00bc5160(0x39,0x80106,0);
    FUN_008ab370();
    return;
  }
  iVar4 = func_0x00cec5d0(*in_stack_00000088,in_stack_0000008c,&param_2,&param_3);
  if (iVar4 != 0) {
    FUN_00bcaeb0();
    if ((uVar7 & 1) == 0) {
LAB_00cc9fe7:
      if ((uVar7 & 2) != 0) {
        param_1 = param_2;
        pcVar2 = *(code **)(puVar3[0x41] + 0x24);
        if (pcVar2 == (code *)0x0) {
          pcVar2 = *(code **)(puVar3[0x41] + 0x18);
          if (pcVar2 != (code *)0x0) {
            iVar10 = (*pcVar2)(0,&param_1,param_3);
            goto LAB_00cca024;
          }
        }
        else {
          iVar10 = (*pcVar2)(0,&param_1,param_3);
LAB_00cca024:
          if (iVar10 != 0) goto LAB_00cca07f;
        }
        if (puVar3[0x42] != 0) goto LAB_00cca071;
      }
      if ((uVar7 & 0x84) != 0) {
        param_1 = param_2;
        if ((*(code **)(puVar3[0x41] + 0x1c) != (code *)0x0) &&
           (iVar10 = (**(code **)(puVar3[0x41] + 0x1c))(0,&param_1,param_3), iVar10 != 0))
        goto LAB_00cca07f;
        if (puVar3[0x42] != 0) goto LAB_00cca071;
      }
      FUN_00bcacf0();
    }
    else {
      param_1 = param_2;
      pcVar2 = *(code **)(puVar3[0x41] + 0x20);
      if (pcVar2 == (code *)0x0) {
        pcVar2 = *(code **)(puVar3[0x41] + 0x14);
        if (pcVar2 != (code *)0x0) {
          iVar10 = (*pcVar2)(0,&param_1,param_3);
        }
      }
      else {
        iVar10 = (*pcVar2)(0,&param_1,param_3,puVar3);
        if ((*(byte *)(puVar3 + 0x43) & 1) != 0) {
          FUN_00bcacf0();
          goto LAB_00cca207;
        }
      }
      if (iVar10 == 0) {
        if (puVar3[0x42] == 0) goto LAB_00cc9fe7;
LAB_00cca071:
        FUN_00bcacf0();
        goto LAB_00cca0d8;
      }
LAB_00cca07f:
      func_0x00bcad80();
    }
    if (iVar10 != 0) {
      if ((*(code **)(puVar3[0x41] + 0x28) == (code *)0x0) ||
         (iVar4 = (**(code **)(puVar3[0x41] + 0x28))(iVar10,puVar3), iVar4 != 0)) {
        if ((iVar10 != 0) && (*(code **)(puVar3[0x41] + 0x2c) != (code *)0x0)) {
          (**(code **)(puVar3[0x41] + 0x2c))(iVar10,puVar3);
        }
      }
      else {
        (**(code **)(puVar3[0x41] + 0x30))(iVar10);
        iVar10 = 0;
      }
    }
  }
LAB_00cca0d8:
  FUN_00bbc580(param_2,"providers\\implementations\\encode_decode\\decode_der2key.c",0x136);
  param_2 = 0;
  if (iVar10 != 0) {
    param_4 = 2;
    puVar5 = (undefined4 *)func_0x00bbfa40(&stack0x0000001c,&DAT_0113c5f4,&param_4);
    pbVar8 = &DAT_01056b4c;
    in_stack_00000030 = *puVar5;
    in_stack_00000034 = puVar5[1];
    in_stack_00000038 = puVar5[2];
    in_stack_0000003c = puVar5[3];
    in_stack_00000040 = puVar5[4];
    pbVar6 = *(byte **)puVar3[0x41];
    do {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00cca161:
        uVar7 = -(uint)bVar9 | 1;
        goto LAB_00cca166;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00cca161;
      pbVar6 = pbVar6 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_00cca166:
    if ((uVar7 == 0) && (uVar7 = func_0x00bb62f0(iVar10), (uVar7 & 4) != 0)) {
      puVar11 = &DAT_01055670;
    }
    else {
      puVar11 = *(undefined **)puVar3[0x41];
    }
    puVar5 = (undefined4 *)func_0x00bbfb90(&stack0x0000001c,"data-type",puVar11,0);
    in_stack_00000044 = *puVar5;
    in_stack_00000048 = puVar5[1];
    in_stack_0000004c = puVar5[2];
    in_stack_00000050 = puVar5[3];
    in_stack_00000054 = puVar5[4];
    puVar5 = (undefined4 *)func_0x00bbfaa0(&stack0x0000001c,"reference",&stack0x00000000,4);
    in_stack_00000058 = *puVar5;
    in_stack_0000005c = puVar5[1];
    in_stack_00000060 = puVar5[2];
    in_stack_00000064 = puVar5[3];
    in_stack_00000068 = puVar5[4];
    puVar5 = (undefined4 *)func_0x00bbfa10(&stack0x0000001c);
    in_stack_0000006c = *puVar5;
    in_stack_00000070 = puVar5[1];
    in_stack_00000074 = puVar5[2];
    in_stack_00000078 = puVar5[3];
    in_stack_0000007c = puVar5[4];
    (*param_6)(&stack0x00000030,param_5);
  }
LAB_00cca207:
  (**(code **)(puVar3[0x41] + 0x30))(iVar10);
  FUN_00bbc580(param_2,"providers\\implementations\\encode_decode\\decode_der2key.c",0x157);
  FUN_008ab370();
  return;
}



undefined4
FUN_00cca250(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = (code *)func_0x00cec4f0(*(undefined4 *)(*(int *)(param_1 + 0x104) + 4));
  if ((param_3 == 4) && (pcVar1 != (code *)0x0)) {
    iVar3 = *(int *)(param_1 + 0x108);
    if (iVar3 == 0) {
      iVar3 = 0x87;
    }
    uVar2 = (*pcVar1)(*param_2,iVar3,param_4,param_5);
    return uVar2;
  }
  return 0;
}



undefined ** FUN_00cca2a0(void)

{
  return &PTR_s_properties_010a27b0;
}



bool FUN_00cca2b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  param_1 = param_1 + 4;
  iVar1 = func_0x00bc09d0(param_2,"properties");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc0850(iVar1,&param_1,0x100);
    return iVar1 != 0;
  }
  return true;
}



void FUN_00cca2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00ccafa0(param_2,param_3,param_4,FUN_00c1a0e0);
  return;
}



void FUN_00cca310(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc3c60(*param_2);
  *(undefined4 *)(param_1 + 100) = uVar1;
  return;
}



void FUN_00cca330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00ccafa0(param_2,param_3,param_4,FUN_00c1a5c0);
  return;
}



void FUN_00cca350(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc3c60(*param_2);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  return;
}



void FUN_00cca370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00ccafa0(param_2,param_3,param_4,FUN_00c1b100);
  return;
}



bool FUN_00cca390(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = func_0x00bb62f0(param_1);
  iVar1 = *(int *)(*(int *)(param_2 + 0x104) + 0xc);
  if ((uVar2 & 4) == 0) {
    return iVar1 != 0x494;
  }
  if ((iVar1 != 0x494) && (iVar1 != 0x198)) {
    return false;
  }
  return true;
}



void FUN_00cca3e0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc3c60(*param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



void FUN_00cca400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00ccafa0(param_2,param_3,param_4,FUN_00c77ed0);
  return;
}



void FUN_00cca420(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc3c60(*param_2);
  *param_1 = uVar1;
  return;
}



void FUN_00cca440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00ccafa0(param_2,param_3,param_4,FUN_00c1c3e0);
  return;
}



undefined4 FUN_00cca460(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = func_0x00bb6560(param_1,0xf000);
  if (iVar1 == 0) {
    bVar2 = *(int *)(*(int *)(param_2 + 0x104) + 0xc) == 6;
  }
  else {
    if (iVar1 != 0x1000) {
      return 0;
    }
    bVar2 = *(int *)(*(int *)(param_2 + 0x104) + 0xc) == 0x390;
  }
  if ((bVar2) && (iVar1 = func_0x00bb68a0(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



void FUN_00cca4d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bc3c60(*param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



void FUN_00cca4f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a27d8;
  }
  return;
}



void FUN_00cca520(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a27d8);
  return;
}



void FUN_00cca540(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a280c;
  }
  return;
}



void FUN_00cca570(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a280c);
  return;
}



void FUN_00cca590(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2840;
  }
  return;
}



void FUN_00cca5c0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2840);
  return;
}



void FUN_00cca5e0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2874;
  }
  return;
}



void FUN_00cca610(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2874);
  return;
}



void FUN_00cca630(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a28a8;
  }
  return;
}



void FUN_00cca660(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a28a8);
  return;
}



void FUN_00cca680(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a28dc;
  }
  return;
}



void FUN_00cca6b0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a28dc);
  return;
}



void FUN_00cca6d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2910;
  }
  return;
}



void FUN_00cca700(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2910);
  return;
}



void FUN_00cca720(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2944;
  }
  return;
}



void FUN_00cca750(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2944);
  return;
}



void FUN_00cca770(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2978;
  }
  return;
}



void FUN_00cca7a0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2978);
  return;
}



void FUN_00cca7c0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a29ac;
  }
  return;
}



void FUN_00cca7f0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a29ac);
  return;
}



void FUN_00cca810(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a29e0;
  }
  return;
}



void FUN_00cca840(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a29e0);
  return;
}



void FUN_00cca860(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2a14;
  }
  return;
}



void FUN_00cca890(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2a14);
  return;
}



void FUN_00cca8b0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2a48;
  }
  return;
}



void FUN_00cca8e0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2a48);
  return;
}



void FUN_00cca900(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2a7c;
  }
  return;
}



void FUN_00cca930(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2a7c);
  return;
}



void FUN_00cca950(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2ab0;
  }
  return;
}



void FUN_00cca980(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2ab0);
  return;
}



void FUN_00cca9a0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2ae4;
  }
  return;
}



void FUN_00cca9d0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2ae4);
  return;
}



void FUN_00cca9f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2b18;
  }
  return;
}



void FUN_00ccaa20(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2b18);
  return;
}



void FUN_00ccaa40(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2b4c;
  }
  return;
}



void FUN_00ccaa70(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2b4c);
  return;
}



void FUN_00ccaa90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2b80;
  }
  return;
}



void FUN_00ccaac0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2b80);
  return;
}



void FUN_00ccaae0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2bb4;
  }
  return;
}



void FUN_00ccab10(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2bb4);
  return;
}



void FUN_00ccab30(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_s_ED25519_010a2be8;
  }
  return;
}



void FUN_00ccab60(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_s_ED25519_010a2be8);
  return;
}



void FUN_00ccab80(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_s_ED25519_010a2c1c;
  }
  return;
}



void FUN_00ccabb0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_s_ED25519_010a2c1c);
  return;
}



void FUN_00ccabd0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_s_ED448_010a2c50;
  }
  return;
}



void FUN_00ccac00(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_s_ED448_010a2c50);
  return;
}



void FUN_00ccac20(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_s_ED448_010a2c84;
  }
  return;
}



void FUN_00ccac50(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_s_ED448_010a2c84);
  return;
}



void FUN_00ccac70(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2cb8;
  }
  return;
}



void FUN_00ccaca0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2cb8);
  return;
}



void FUN_00ccacc0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2cec;
  }
  return;
}



void FUN_00ccacf0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2cec);
  return;
}



void FUN_00ccad10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2d20;
  }
  return;
}



void FUN_00ccad40(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2d20);
  return;
}



void FUN_00ccad60(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2d54;
  }
  return;
}



void FUN_00ccad90(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2d54);
  return;
}



void FUN_00ccadb0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2d88;
  }
  return;
}



void FUN_00ccade0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2d88);
  return;
}



void FUN_00ccae00(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2dbc;
  }
  return;
}



void FUN_00ccae30(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2dbc);
  return;
}



void FUN_00ccae50(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2df0;
  }
  return;
}



void FUN_00ccae80(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2df0);
  return;
}



void FUN_00ccaea0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2e24;
  }
  return;
}



void FUN_00ccaed0(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2e24);
  return;
}



void FUN_00ccaef0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x110,"providers\\implementations\\encode_decode\\decode_der2key.c",0x86);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &PTR_DAT_010a2e58;
  }
  return;
}



void FUN_00ccaf20(undefined4 param_1,undefined4 param_2)

{
  func_0x00ccaf40(param_2,&PTR_DAT_010a2e58);
  return;
}



void FUN_00ccb060(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\decode_msblob2key.c",0x4f);
  return;
}



void FUN_00ccb080(int param_1,undefined1 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined8 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                 undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
                 undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
                 undefined4 param_30,undefined4 param_31,undefined4 param_32,undefined4 param_33,
                 undefined4 param_34,undefined4 param_35)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint in_stack_000000a4;
  undefined4 *in_stack_000000ac;
  undefined4 in_stack_000000b0;
  uint in_stack_000000b4;
  code *in_stack_000000b8;
  undefined4 in_stack_000000bc;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c4;
  
  func_0x00e87f70();
  pcVar2 = in_stack_000000b8;
  puVar1 = in_stack_000000ac;
  in_stack_000000a4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_9 = in_stack_000000bc;
  param_6 = in_stack_000000c0;
  param_8 = in_stack_000000c4;
  iVar3 = func_0x00cd59f0(*in_stack_000000ac,in_stack_000000b0);
  param_7 = -1;
  puVar8 = (undefined1 *)0x0;
  param_3 = -1;
  param_1 = 0;
  if (iVar3 == 0) goto LAB_00ccb446;
  iVar4 = func_0x00bab230(iVar3,&stack0x00000094,0x10);
  if (iVar4 == 0x10) {
    FUN_00bcaeb0();
    param_2 = &stack0x00000094;
    iVar4 = func_0x00cee050(&param_2,0x10,&param_15,&param_4,&param_7,&param_3);
    func_0x00bcad80();
    if (iVar4 < 1) goto LAB_00ccb339;
    puVar1[2] = in_stack_000000b4;
    param_5 = 0;
    if (param_7 == 0) {
      bVar9 = *(int *)puVar1[1] == 6;
    }
    else {
      bVar9 = *(int *)puVar1[1] == 0x74;
    }
    if (!bVar9) goto LAB_00ccb339;
    uVar5 = func_0x00cede80(param_4,param_7,param_3);
    if (0x19000 < uVar5) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\encode_decode\\decode_msblob2key.c",0x83,
                      "msblob2key_decode");
      func_0x00bc5160(9,0x80,0);
      goto LAB_00ccb339;
    }
    puVar8 = (undefined1 *)
             FUN_00bbc4f0(uVar5,"providers\\implementations\\encode_decode\\decode_msblob2key.c",
                          0x86);
    if (puVar8 != (undefined1 *)0x0) {
      param_2 = puVar8;
      uVar6 = func_0x00bab230(iVar3,puVar8,uVar5);
      if (uVar6 == uVar5) {
        if ((((in_stack_000000b4 == 0) || ((in_stack_000000b4 & 1) != 0)) && (param_3 == 0)) &&
           (*(int *)(puVar1[1] + 0xc) != 0)) {
          param_10 = 0;
          param_11 = 0;
          param_12 = 0;
          param_13 = 0;
          param_14 = 0;
          iVar4 = func_0x00c47740(&param_10,param_6,param_8);
          if (iVar4 == 0) goto LAB_00ccb41d;
          param_2 = puVar8;
          param_1 = (**(code **)(puVar1[1] + 0xc))(&param_2,param_4,param_3);
          if ((in_stack_000000b4 != 0) && (param_1 == 0)) goto LAB_00ccb339;
        }
        if (((param_1 != 0) ||
            ((((in_stack_000000b4 == 0 || ((in_stack_000000b4 & 2) != 0)) &&
              ((param_3 != 0 && (*(int *)(puVar1[1] + 0x10) != 0)))) &&
             (((param_2 = puVar8,
               param_1 = (**(code **)(puVar1[1] + 0x10))(&param_2,param_4,param_3),
               in_stack_000000b4 == 0 || (param_1 != 0)) && (param_1 != 0)))))) &&
           (*(code **)(puVar1[1] + 0x14) != (code *)0x0)) {
          (**(code **)(puVar1[1] + 0x14))(param_1,puVar1);
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\decode_msblob2key.c",0x8b,
                        "msblob2key_decode");
        func_0x00bc5160(9,0x7b,0);
      }
      goto LAB_00ccb339;
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\encode_decode\\decode_msblob2key.c",0x70,
                    "msblob2key_decode");
    func_0x00bc5160(9,0x7b,0);
LAB_00ccb339:
    param_5 = 1;
    FUN_00bbc580(puVar8,"providers\\implementations\\encode_decode\\decode_msblob2key.c",0xb6);
    func_0x00baa8e0(iVar3);
    puVar8 = (undefined1 *)0x0;
    iVar3 = 0;
    if (param_1 != 0) {
      param_6 = 2;
      puVar7 = (undefined4 *)func_0x00bbfa40(&param_10,&DAT_0113c5f4,&param_6);
      param_16 = *puVar7;
      param_17 = puVar7[1];
      param_18 = puVar7[2];
      param_19 = puVar7[3];
      param_20 = puVar7[4];
      puVar7 = (undefined4 *)func_0x00bbfb90(&param_10,"data-type",*(undefined4 *)(puVar1[1] + 4),0)
      ;
      param_21 = *puVar7;
      param_22 = puVar7[1];
      param_23 = puVar7[2];
      param_24 = puVar7[3];
      param_25 = puVar7[4];
      puVar7 = (undefined4 *)func_0x00bbfaa0(&param_10,"reference",&param_1,4);
      param_26 = *puVar7;
      param_27 = puVar7[1];
      param_28 = puVar7[2];
      param_29 = puVar7[3];
      param_30 = puVar7[4];
      puVar7 = (undefined4 *)func_0x00bbfa10(&param_10);
      param_31 = *puVar7;
      param_32 = puVar7[1];
      param_33 = puVar7[2];
      param_34 = puVar7[3];
      param_35 = puVar7[4];
      param_5 = (*pcVar2)(&param_16,param_9);
    }
  }
LAB_00ccb41d:
  func_0x00baa8e0(iVar3);
  FUN_00bbc580(puVar8,"providers\\implementations\\encode_decode\\decode_msblob2key.c",0xcf);
  (**(code **)(puVar1[1] + 0x18))(param_1);
LAB_00ccb446:
  FUN_008ab370();
  return;
}



undefined4
FUN_00ccb460(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = (code *)func_0x00cec4f0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  if ((param_3 == 4) && (pcVar1 != (code *)0x0)) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      iVar3 = 0x87;
    }
    uVar2 = (*pcVar1)(*param_2,iVar3,param_4,param_5);
    return uVar2;
  }
  return 0;
}



bool FUN_00ccb4b0(undefined4 param_1,uint param_2)

{
  if (param_2 != 0) {
    return (param_2 & 3) != 0;
  }
  return true;
}



void FUN_00ccb4d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0xc,"providers\\implementations\\encode_decode\\decode_msblob2key.c",0x42);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = &DAT_010a2f38;
  }
  return;
}



void FUN_00ccb500(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0xc,"providers\\implementations\\encode_decode\\decode_msblob2key.c",0x42);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = &DAT_010a2f54;
  }
  return;
}



void FUN_00ccb530(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\decode_pvk2key.c",0x53);
  return;
}



void FUN_00ccb550(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                 undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                 uint param_29,undefined4 param_30,undefined4 *param_31,undefined4 param_32,
                 uint param_33,code *param_34,undefined4 param_35,undefined4 param_36,
                 undefined4 param_37)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  
  func_0x00e87f70();
  uVar5 = param_36;
  puVar2 = param_31;
  param_29 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_3 = param_34;
  param_2 = param_35;
  param_1 = param_37;
  iVar3 = func_0x00cd59f0(*param_31,param_32);
  iVar9 = 0;
  if (iVar3 == 0) {
    FUN_008ab370();
    return;
  }
  puVar2[0x42] = param_33;
  if (((param_33 == 0) || ((param_33 & 1) != 0)) && (*(int *)(puVar2[0x41] + 0xc) != 0)) {
    param_4 = 0;
    param_5 = 0;
    param_6 = 0;
    param_7 = 0;
    param_8 = 0;
    iVar4 = func_0x00c47740(&param_4,uVar5,param_1);
    if (iVar4 == 0) goto LAB_00ccb76a;
    pcVar1 = *(code **)(puVar2[0x41] + 0xc);
    uVar5 = func_0x00bc3c60(*puVar2,puVar2 + 1);
    iVar9 = (*pcVar1)(iVar3,FUN_00c47720,&param_4,uVar5);
    uVar6 = func_0x00ba6ad0();
    if (((-1 < (int)uVar6) &&
        (uVar8 = ((int)uVar6 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar6,
        (uVar6 & 0x7f800000) == 0x4800000)) && ((uVar8 == 0x68 || (uVar8 == 0x65)))) {
      FUN_00bcacf0();
      goto LAB_00ccb76a;
    }
    if ((iVar9 != 0) && (*(code **)(puVar2[0x41] + 0x10) != (code *)0x0)) {
      (**(code **)(puVar2[0x41] + 0x10))(iVar9,puVar2);
    }
  }
  func_0x00baa8e0(iVar3);
  iVar3 = 0;
  if (iVar9 != 0) {
    param_1 = 2;
    puVar7 = (undefined4 *)func_0x00bbfa40(&param_4,&DAT_0113c5f4,&param_1);
    param_9 = *puVar7;
    param_10 = puVar7[1];
    param_11 = puVar7[2];
    param_12 = puVar7[3];
    param_13 = puVar7[4];
    puVar7 = (undefined4 *)func_0x00bbfb90(&param_4,"data-type",*(undefined4 *)(puVar2[0x41] + 4),0)
    ;
    param_14 = *puVar7;
    param_15 = puVar7[1];
    param_16 = puVar7[2];
    param_17 = puVar7[3];
    param_18 = puVar7[4];
    puVar7 = (undefined4 *)func_0x00bbfaa0(&param_4,"reference",&stack0x00000000,4);
    param_19 = *puVar7;
    param_20 = puVar7[1];
    param_21 = puVar7[2];
    param_22 = puVar7[3];
    param_23 = puVar7[4];
    puVar7 = (undefined4 *)func_0x00bbfa10(&param_4);
    param_24 = *puVar7;
    param_25 = puVar7[1];
    param_26 = puVar7[2];
    param_27 = puVar7[3];
    param_28 = puVar7[4];
    (*param_3)(&param_9,param_2);
  }
LAB_00ccb76a:
  func_0x00baa8e0(iVar3);
  (**(code **)(puVar2[0x41] + 0x14))(iVar9);
  FUN_008ab370();
  return;
}



undefined4
FUN_00ccb7a0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = (code *)func_0x00cec4f0(*(undefined4 *)(*(int *)(param_1 + 0x104) + 8));
  if ((param_3 == 4) && (pcVar1 != (code *)0x0)) {
    iVar3 = *(int *)(param_1 + 0x108);
    if (iVar3 == 0) {
      iVar3 = 0x87;
    }
    uVar2 = (*pcVar1)(*param_2,iVar3,param_4,param_5);
    return uVar2;
  }
  return 0;
}



undefined ** FUN_00ccb7f0(void)

{
  return &PTR_s_properties_010a3040;
}



uint FUN_00ccb800(undefined4 param_1,uint param_2)

{
  if (param_2 != 0) {
    return param_2 & 1;
  }
  return 1;
}



void FUN_00ccb820(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x10c,"providers\\implementations\\encode_decode\\decode_pvk2key.c",0x46);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &DAT_010a3068;
  }
  return;
}



void FUN_00ccb850(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x10c,"providers\\implementations\\encode_decode\\decode_pvk2key.c",0x46);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x41] = &DAT_010a3080;
  }
  return;
}



void FUN_00ccb880(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x104,"providers\\implementations\\encode_decode\\decode_epki2pki.c",0x2a);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



void FUN_00ccb8a0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\decode_epki2pki.c",0x35);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00ccb8c0(code *param_1,undefined4 param_2,code *param_3,int param_4,undefined4 *param_5,
                 undefined4 param_6,undefined4 *param_7,undefined4 *param_8,undefined4 param_9,
                 undefined4 param_10,code *param_11)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
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
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined4 *in_stack_000004e4;
  undefined4 in_stack_000004e8;
  code *in_stack_000004f0;
  undefined4 in_stack_000004f4;
  code *in_stack_000004f8;
  undefined4 in_stack_000004fc;
  
  func_0x00e87f70();
  param_5 = (undefined4 *)0x0;
  param_1 = in_stack_000004f8;
  param_2 = in_stack_000004fc;
  param_8 = in_stack_000004e4;
  param_10 = in_stack_000004f4;
  param_11 = in_stack_000004f0;
  iVar2 = func_0x00cd59f0(*in_stack_000004e4,in_stack_000004e8);
  if (iVar2 == 0) {
    FUN_008ab370();
    return;
  }
  iVar3 = func_0x00c1f050(iVar2,&param_5);
  func_0x00baa8e0(iVar2);
  if (-1 < iVar3) {
    pcVar6 = (code *)param_5[1];
    uVar7 = *param_5;
    param_3 = pcVar6;
    param_9 = uVar7;
    FUN_00bbc580(param_5,"providers\\implementations\\encode_decode\\decode_epki2pki.c",0x6e);
    FUN_00bcaeb0();
    iVar2 = func_0x00c21bf0(0,&param_3,uVar7);
    param_4 = iVar2;
    if (iVar2 == 0) {
      func_0x00bcad80();
    }
    else {
      param_6 = 0;
      FUN_00bcacf0();
      iVar3 = (*param_1)(&stack0x000000dc,0x400,&param_6,0,param_2);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\encode_decode\\decode_epki2pki.c",0x79,
                        "epki2pki_decode");
        func_0x00bc5160(0x39,0x9f,0);
        func_0x00c21bc0(iVar2);
      }
      else {
        param_1 = (code *)0x0;
        param_2 = 0;
        func_0x00c1fb50(iVar2,&stack0x00000000,&param_7);
        uVar7 = *param_7;
        uVar1 = param_7[2];
        uVar4 = func_0x00bc3c60(*param_8,param_8 + 1);
        iVar2 = func_0x00ce4e70(0,&stack0x000000dc,param_6,uVar1,uVar7,&param_1,&param_2,0,uVar4);
        uVar7 = param_9;
        if (iVar2 != 0) {
          FUN_00bbc580(pcVar6,"providers\\implementations\\encode_decode\\decode_epki2pki.c",0x88);
          pcVar6 = param_1;
          uVar7 = param_2;
        }
        func_0x00c21bc0(param_4);
      }
    }
    FUN_00bcaeb0();
    param_3 = pcVar6;
    iVar2 = func_0x00c22030(0,&param_3,uVar7);
    func_0x00bcad80();
    if ((iVar2 != 0) && (iVar3 = func_0x00c21f80(0,0,0,&stack0x00000000,iVar2), iVar3 != 0)) {
      param_4 = 2;
      func_0x00bc27c0(&stack0x000000a8,0x32,_DAT_00000000,0);
      puVar5 = (undefined4 *)func_0x00bbfb90(&stack0x00000030,"data-type",&stack0x000000a8,0);
      in_stack_00000044 = *puVar5;
      in_stack_00000048 = puVar5[1];
      in_stack_0000004c = puVar5[2];
      in_stack_00000050 = puVar5[3];
      in_stack_00000054 = puVar5[4];
      puVar5 = (undefined4 *)func_0x00bbfb90(&stack0x00000030,"data-structure","PrivateKeyInfo",0);
      in_stack_00000058 = *puVar5;
      in_stack_0000005c = puVar5[1];
      in_stack_00000060 = puVar5[2];
      in_stack_00000064 = puVar5[3];
      in_stack_00000068 = puVar5[4];
      puVar5 = (undefined4 *)func_0x00bbfaa0(&stack0x00000030,&DAT_0113c58c,pcVar6,uVar7);
      in_stack_0000006c = *puVar5;
      in_stack_00000070 = puVar5[1];
      in_stack_00000074 = puVar5[2];
      in_stack_00000078 = puVar5[3];
      in_stack_0000007c = puVar5[4];
      puVar5 = (undefined4 *)func_0x00bbfa40(&stack0x00000030,&DAT_0113c5f4,&param_4);
      in_stack_00000080 = *puVar5;
      in_stack_00000084 = puVar5[1];
      in_stack_00000088 = puVar5[2];
      in_stack_0000008c = puVar5[3];
      in_stack_00000090 = puVar5[4];
      puVar5 = (undefined4 *)func_0x00bbfa10(&stack0x00000030);
      in_stack_00000094 = *puVar5;
      in_stack_00000098 = puVar5[1];
      in_stack_0000009c = puVar5[2];
      in_stack_000000a0 = puVar5[3];
      in_stack_000000a4 = puVar5[4];
      (*param_11)(&stack0x00000044,param_10);
    }
    func_0x00c21f40(iVar2);
    FUN_00bbc580(pcVar6,"providers\\implementations\\encode_decode\\decode_epki2pki.c",0xaf);
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



undefined ** FUN_00ccbc50(void)

{
  return &PTR_s_properties_010a3104;
}



void FUN_00ccbc60(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(0x104,"providers\\implementations\\encode_decode\\decode_spki2typespki.c",
                        0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



void FUN_00ccbc80(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\decode_spki2typespki.c",0x33);
  return;
}



void FUN_00ccbca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
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
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  uint in_stack_000000c4;
  undefined4 *in_stack_000000cc;
  undefined4 in_stack_000000d0;
  code *in_stack_000000d8;
  undefined4 in_stack_000000dc;
  
  func_0x00e87f70();
  uVar2 = in_stack_000000dc;
  pcVar1 = in_stack_000000d8;
  puVar6 = in_stack_000000cc;
  in_stack_000000c4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_5 = 2;
  param_1 = 0;
  iVar3 = func_0x00cec5d0(*in_stack_000000cc,in_stack_000000d0,&param_2,&param_3);
  if (iVar3 == 0) goto LAB_00ccbeb7;
  param_4 = param_2;
  uVar4 = func_0x00bc3c60(*puVar6,puVar6 + 1);
  iVar3 = func_0x00bddd50(&param_4,param_3,uVar4);
  if ((iVar3 != 0) && (iVar5 = func_0x00bdd290(0,0,0,&stack0x00000000,iVar3), iVar5 != 0)) {
    func_0x00bdbc30(&param_1,0,0,0);
    iVar5 = func_0x00bc27b0(param_1);
    if ((iVar5 == 0x198) && (iVar5 = func_0x00c1ba70(0), iVar5 != 0)) {
      in_stack_00000090 = 0x324d53;
    }
    else {
      iVar5 = func_0x00bc27c0(&stack0x00000090,0x32,param_1,0);
      if (iVar5 < 1) goto LAB_00ccbe99;
    }
    func_0x00bdd960(iVar3);
    iVar3 = 0;
    puVar6 = (undefined4 *)func_0x00bbfb90(&stack0x00000018,"data-type",&stack0x00000090,0);
    in_stack_0000002c = *puVar6;
    in_stack_00000030 = puVar6[1];
    in_stack_00000034 = puVar6[2];
    in_stack_00000038 = puVar6[3];
    in_stack_0000003c = puVar6[4];
    puVar6 = (undefined4 *)
             func_0x00bbfb90(&stack0x00000018,"data-structure","SubjectPublicKeyInfo",0);
    in_stack_00000040 = *puVar6;
    in_stack_00000044 = puVar6[1];
    in_stack_00000048 = puVar6[2];
    in_stack_0000004c = puVar6[3];
    in_stack_00000050 = puVar6[4];
    puVar6 = (undefined4 *)func_0x00bbfaa0(&stack0x00000018,&DAT_0113c58c,param_2,param_3);
    in_stack_00000054 = *puVar6;
    in_stack_00000058 = puVar6[1];
    in_stack_0000005c = puVar6[2];
    in_stack_00000060 = puVar6[3];
    in_stack_00000064 = puVar6[4];
    puVar6 = (undefined4 *)func_0x00bbfa40(&stack0x00000018,&DAT_0113c5f4,&param_5);
    in_stack_00000068 = *puVar6;
    in_stack_0000006c = puVar6[1];
    in_stack_00000070 = puVar6[2];
    in_stack_00000074 = puVar6[3];
    in_stack_00000078 = puVar6[4];
    puVar6 = (undefined4 *)func_0x00bbfa10(&stack0x00000018);
    in_stack_0000007c = *puVar6;
    in_stack_00000080 = puVar6[1];
    in_stack_00000084 = puVar6[2];
    in_stack_00000088 = puVar6[3];
    in_stack_0000008c = puVar6[4];
    (*pcVar1)(&stack0x0000002c,uVar2);
  }
LAB_00ccbe99:
  func_0x00bdd960(iVar3);
  FUN_00bbc580(param_2,"providers\\implementations\\encode_decode\\decode_spki2typespki.c",0x8c);
LAB_00ccbeb7:
  FUN_008ab370();
  return;
}



undefined ** FUN_00ccbed0(void)

{
  return &PTR_s_properties_010a31a8;
}



void FUN_00ccbee0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           FUN_00bbc830(4,"providers\\implementations\\encode_decode\\decode_pem2der.c",0x3b);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



void FUN_00ccbf00(undefined4 param_1)

{
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\decode_pem2der.c",0x46);
  return;
}



void FUN_00ccbf20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5,undefined4 param_6,undefined4 param_7,code *param_8)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  undefined **ppuVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  uint in_stack_0000009c;
  undefined4 *in_stack_000000a4;
  undefined4 in_stack_000000a8;
  code *in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  
  func_0x00e87f70();
  uVar5 = in_stack_000000bc;
  uVar4 = in_stack_000000b8;
  in_stack_0000009c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_8 = in_stack_000000b0;
  param_7 = in_stack_000000b4;
  param_5 = (char *)0x0;
  param_1 = 0;
  param_4 = 0;
  param_6 = 0;
  iVar7 = func_0x00cd59f0(*in_stack_000000a4,in_stack_000000a8);
  if (iVar7 == 0) goto LAB_00ccc1be;
  iVar8 = func_0x00c6dea0(iVar7,&stack0x00000000,&param_5,&param_1,&param_4);
  func_0x00baa8e0(iVar7);
  if (iVar8 < 1) goto LAB_00ccc1be;
  pcVar12 = param_5;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar12 - (int)(param_5 + 1)) < 0xb) {
LAB_00ccc038:
    uVar14 = 0;
    param_2 = 1;
    ppuVar15 = &PTR_s_ENCRYPTED_PRIVATE_KEY_012b75a0;
    do {
      pbVar9 = *ppuVar15;
      pbVar13 = (byte *)0x0;
      do {
        bVar2 = *pbVar13;
        bVar17 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00ccc074:
          uVar10 = -(uint)bVar17 | 1;
          goto LAB_00ccc079;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar13[1];
        bVar17 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00ccc074;
        pbVar13 = pbVar13 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      uVar10 = 0;
LAB_00ccc079:
      if (uVar10 == 0) {
        if (uVar14 < 0x11) {
          puVar16 = &stack0x00000038;
          param_6 = (&DAT_012b75a4)[uVar14 * 4];
          puVar3 = (&PTR_s_EncryptedPrivateKeyInfo_012b75ac)[uVar14 * 4];
          if ((&DAT_012b75a8)[uVar14 * 4] != 0) {
            puVar11 = (undefined4 *)
                      func_0x00bbfb90(&stack0x00000024,"data-type",(&DAT_012b75a8)[uVar14 * 4],0);
            puVar16 = (undefined4 *)&stack0x0000004c;
            in_stack_00000038 = *puVar11;
            in_stack_0000003c = puVar11[1];
            in_stack_00000040 = puVar11[2];
            in_stack_00000044 = puVar11[3];
            in_stack_00000048 = puVar11[4];
          }
          if (puVar3 != (undefined *)0x0) {
            puVar11 = (undefined4 *)func_0x00bbfb90(&stack0x00000024,"data-structure",puVar3,0);
            uVar4 = puVar11[1];
            uVar5 = puVar11[2];
            uVar6 = puVar11[3];
            *puVar16 = *puVar11;
            puVar16[1] = uVar4;
            puVar16[2] = uVar5;
            puVar16[3] = uVar6;
            puVar16[4] = puVar11[4];
            puVar16 = puVar16 + 5;
          }
          puVar11 = (undefined4 *)func_0x00bbfaa0(&stack0x00000024,&DAT_0113c58c,param_1,param_4);
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          *puVar16 = *puVar11;
          puVar16[1] = uVar4;
          puVar16[2] = uVar5;
          puVar16[3] = uVar6;
          puVar16[4] = puVar11[4];
          puVar11 = (undefined4 *)func_0x00bbfa40(&stack0x00000024,&DAT_0113c5f4,&param_6);
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puVar16[5] = *puVar11;
          puVar16[6] = uVar4;
          puVar16[7] = uVar5;
          puVar16[8] = uVar6;
          puVar16[9] = puVar11[4];
          puVar11 = (undefined4 *)func_0x00bbfa10(&stack0x00000024);
          uVar4 = puVar11[1];
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          puVar16[10] = *puVar11;
          puVar16[0xb] = uVar4;
          puVar16[0xc] = uVar5;
          puVar16[0xd] = uVar6;
          puVar16[0xe] = puVar11[4];
          param_2 = (*param_8)(&stack0x00000038);
        }
        break;
      }
      uVar14 = uVar14 + 1;
      ppuVar15 = ppuVar15 + 4;
    } while (uVar14 < 0x11);
  }
  else {
    param_2 = uVar4;
    param_3 = uVar5;
    iVar7 = func_0x00c6db60(param_5,&stack0x00000024);
    if ((iVar7 != 0) &&
       (iVar7 = func_0x00c6d8e0(&stack0x00000024,param_1,&param_4,FUN_00ccc1e0,&param_2), iVar7 != 0
       )) goto LAB_00ccc038;
  }
  FUN_00bbc580(0,"providers\\implementations\\encode_decode\\decode_pem2der.c",0xd1);
  FUN_00bbc580(param_5,"providers\\implementations\\encode_decode\\decode_pem2der.c",0xd2);
  FUN_00bbc580(param_1,"providers\\implementations\\encode_decode\\decode_pem2der.c",0xd3);
LAB_00ccc1be:
  FUN_008ab370();
  return;
}



undefined4 *
FUN_00ccc1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if ((param_4 != (undefined4 *)0x0) && ((code *)*param_4 != (code *)0x0)) {
    iVar1 = (*(code *)*param_4)(param_1,param_2,&param_4,0,param_4[1]);
    if (iVar1 != 0) {
      return param_4;
    }
  }
  return (undefined4 *)0xffffffff;
}



void FUN_00ccc220(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 char *param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint in_stack_0000004c;
  undefined4 in_stack_00000054;
  int in_stack_00000058;
  
  func_0x00e87f70();
  iVar7 = in_stack_00000058;
  uVar8 = in_stack_00000054;
  in_stack_0000004c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  FUN_00bcaeb0();
  param_3 = param_3 & 0xfffffffe;
  uVar10 = 1;
  param_2 = iVar7;
  iVar4 = func_0x00bbc0f0(iVar7,"file:",5);
  if (iVar4 == 0) {
    pcVar11 = (char *)(iVar7 + 5);
    iVar4 = func_0x00bbc0f0(pcVar11,&DAT_01142c38,2);
    if (iVar4 == 0) {
      uVar10 = 0;
      iVar4 = func_0x00bbc0f0(iVar7 + 7,"localhost/",10);
      if (iVar4 == 0) {
        iVar4 = iVar7 + 0x11;
      }
      else {
        iVar4 = func_0x00bbc0f0(iVar7 + 7,&DAT_0113c2ec,1);
        if (iVar4 != 0) {
          FUN_00bcacf0();
          FUN_00bc4f50();
          func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0xe4,"file_open");
          func_0x00bc5160(0x39,0xdf,0);
          FUN_008ab370();
          return;
        }
        iVar4 = iVar7 + 8;
      }
      pcVar11 = (char *)(iVar4 + -1);
    }
    uVar12 = (&param_3)[uVar10 * 2];
    cVar3 = *pcVar11;
    (&param_3)[uVar10 * 2] = uVar12 | 1;
    if (((cVar3 == '/') && (pcVar11[2] == ':')) && (pcVar11[3] == '/')) {
      param_6 = pcVar11 + 1;
      cVar3 = func_0x008ab034(*param_6);
      pcVar2 = param_6;
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        (&param_3)[uVar10 * 2] = uVar12 & 0xfffffffe;
        pcVar11 = pcVar2;
      }
    }
    (&param_2)[uVar10 * 2] = (int)pcVar11;
    uVar10 = uVar10 + 1;
  }
  uVar12 = 0;
  do {
    while( true ) {
      if (uVar10 <= uVar12) {
        FUN_00bcacf0();
        FUN_008ab370();
        return;
      }
      if (((*(byte *)(&param_3 + uVar12 * 2) & 1) != 0) &&
         (pcVar11 = (char *)(&param_2)[uVar12 * 2], *pcVar11 != '/')) {
        FUN_00bcacf0();
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0x101,"file_open");
        func_0x00bc5160(0x39,0xdb,"Given path=%s",pcVar11);
        FUN_008ab370();
        return;
      }
      iVar4 = (&param_2)[uVar12 * 2];
      uVar12 = uVar12 + 1;
      iVar5 = func_0x00e87aa8(iVar4,&param_7);
      if (-1 < iVar5) break;
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0x107,"file_open");
      puVar6 = (undefined4 *)func_0x008aaf8a();
      func_0x00bc5160(2,*puVar6,"calling stat(%s)",iVar4);
    }
  } while (iVar4 == 0);
  func_0x00bcad80();
  if ((param_8._2_4_ & 0xf000) != 0x4000) {
    iVar4 = func_0x00bac0a0(iVar4,&DAT_011a2434);
    if (iVar4 != 0) {
      iVar7 = func_0x00cccf50(0,iVar7,uVar8);
      if (iVar7 != 0) {
        *(int *)(iVar7 + 0xc) = iVar4;
        FUN_008ab370();
        return;
      }
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0x9c,"file_open_stream")
      ;
      func_0x00bc5160(0x39,0x80039,0);
    }
    func_0x00baa980(iVar4);
LAB_00ccc5f4:
    FUN_008ab370();
    return;
  }
  iVar7 = func_0x00cccf50(1,iVar7,uVar8);
  if (iVar7 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0xad,"file_open_dir");
    func_0x00bc5160(0x39,0x80039,0);
    FUN_008ab370();
    return;
  }
  piVar1 = (int *)(iVar7 + 0xc);
  uVar8 = func_0x00c98c60(piVar1,iVar4);
  *(undefined4 *)(iVar7 + 0x20) = uVar8;
  piVar9 = (int *)func_0x008aaf8a();
  iVar5 = *piVar9;
  *(int *)(iVar7 + 0x24) = iVar5;
  if (*(int *)(iVar7 + 0x20) != 0) goto LAB_00ccc5f4;
  if (iVar5 == 0) {
    *(undefined4 *)(iVar7 + 0x10) = 1;
    FUN_008ab370();
    return;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0xb5,"file_open_dir");
  func_0x00bc5160(2,*(undefined4 *)(iVar7 + 0x24),"Calling OPENSSL_DIR_read(\"%s\")",iVar4);
  iVar4 = *(int *)(iVar7 + 8);
  if (iVar4 == 0) {
    func_0x00baa8e0(*piVar1);
    *piVar1 = 0;
    FUN_00bbc580(*(undefined4 *)(iVar7 + 4),"providers\\implementations\\storemgmt\\file_store.c",
                 0x71);
  }
  else {
    if (iVar4 != 1) goto LAB_00ccc563;
    if (*piVar1 != iVar4 + -1) {
      func_0x00c98c10(piVar1);
    }
    FUN_00bbc580(*(undefined4 *)(iVar7 + 4),"providers\\implementations\\storemgmt\\file_store.c",
                 0x71);
  }
  if (*(int *)(iVar7 + 8) != 1) {
    func_0x00c01b70(*(undefined4 *)(iVar7 + 0x10));
    FUN_00bbc580(*(undefined4 *)(iVar7 + 0x18),"providers\\implementations\\storemgmt\\file_store.c"
                 ,0x74);
    FUN_00bbc580(*(undefined4 *)(iVar7 + 0x14),"providers\\implementations\\storemgmt\\file_store.c"
                 ,0x75);
  }
  FUN_00bbc580(iVar7,"providers\\implementations\\storemgmt\\file_store.c",0x77);
LAB_00ccc563:
  FUN_008ab370();
  return;
}



undefined4 * FUN_00ccc640(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0x00cd59f0(param_1,param_2);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)
           FUN_00bbc830(0x2c,"providers\\implementations\\storemgmt\\file_store.c",0x7f);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[2] = 0;
    puVar2[3] = iVar1;
    return puVar2;
  }
  FUN_00bc4f50();
  func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0x9c,"file_open_stream");
  func_0x00bc5160(0x39,0x80039,0);
  func_0x00baa8e0(iVar1);
  return (undefined4 *)0x0;
}



undefined ** FUN_00ccc6c0(void)

{
  return &PTR_s_properties_010a32f0;
}



undefined4 FUN_00ccc6d0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_retaddr;
  
  func_0x00e87f70();
  iVar4 = param_3;
  puVar2 = param_2;
  if (param_3 != 0) {
    if (param_2[2] != 1) {
      iVar3 = func_0x00bc09d0(param_3,"properties");
      if (iVar3 != 0) {
        puVar1 = puVar2 + 6;
        FUN_00bbc580(*puVar1,"providers\\implementations\\storemgmt\\file_store.c",0x14a);
        *puVar1 = 0;
        iVar3 = func_0x00bc0850(iVar3,puVar1,0);
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar3 = func_0x00bc09d0(iVar4,"input-type");
      if (iVar3 != 0) {
        puVar1 = puVar2 + 5;
        FUN_00bbc580(*puVar1,"providers\\implementations\\storemgmt\\file_store.c",0x151);
        *puVar1 = 0;
        iVar3 = func_0x00bc0850(iVar3,puVar1,0);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    iVar3 = func_0x00bc09d0(iVar4,"expect");
    if ((iVar3 != 0) && (iVar3 = func_0x00bbfcd0(iVar3,puVar2 + 10), iVar3 == 0)) {
      return 0;
    }
    iVar4 = func_0x00bc09d0(iVar4,"subject");
    if (iVar4 != 0) {
      param_2 = (undefined4 *)0x0;
      param_3 = 0;
      if (puVar2[2] == 1) {
        iVar4 = func_0x00bc01f0(iVar4,&param_2,&param_3);
        if ((iVar4 != 0) && (iVar4 = func_0x00bdc800(0,&param_2,param_3), iVar4 != 0)) {
          uVar5 = func_0x00bc3c60(*puVar2,0,&stack0x00000000);
          uVar5 = func_0x00bde960(iVar4,uVar5);
          func_0x00bbc9d0(puVar2 + 5,9,"%08lx",uVar5);
          FUN_00bdc650(iVar4);
          if (unaff_retaddr != 0) {
            return 1;
          }
        }
      }
      else {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\storemgmt\\file_store.c",0x164,
                        "file_set_ctx_params");
        func_0x00bc5160(0x39,0xde,0);
      }
      return 0;
    }
  }
  return 1;
}



undefined4
FUN_00ccc870(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  func_0x00e87f70();
  if (*(int *)(param_3 + 8) != 0) {
    if (*(int *)(param_3 + 8) != 1) {
      return 0;
    }
    uVar1 = func_0x00ccca70(param_3,param_4,param_5,param_6,param_7);
    return uVar1;
  }
  iVar2 = func_0x00cccd70(param_3);
  if (iVar2 == 0) {
    return 0;
  }
  func_0x00c26460(*(undefined4 *)(param_3 + 0x10),&stack0x00000000);
  func_0x00c02c40(*(undefined4 *)(param_3 + 0x10),param_6,param_7);
  FUN_00bcaeb0();
  uVar1 = func_0x00c265a0(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0xc));
  iVar2 = func_0x00baa730(*(undefined4 *)(param_3 + 0xc),2,0,0);
  if (iVar2 != 0) {
    uVar3 = func_0x00ba6ad0();
    if ((((uVar3 != 0) && (-1 < (int)uVar3)) && ((uVar3 & 0x7f800000) == 0x1e000000)) &&
       ((((int)uVar3 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar3) == 0x8010c)) {
      func_0x00bcad80();
      return uVar1;
    }
  }
  FUN_00bcacf0();
  return uVar1;
}



undefined4 FUN_00ccc970(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != 1) {
      return 1;
    }
    return *(undefined4 *)(param_1 + 0x10);
  }
  iVar1 = func_0x00baa730(*(undefined4 *)(param_1 + 0xc),10,0,0);
  if ((iVar1 == 0) && (iVar1 = func_0x00baa730(*(undefined4 *)(param_1 + 0xc),2,0,0), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_00ccc9c0(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    func_0x00baa8e0(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\storemgmt\\file_store.c",
                 0x71);
  }
  else {
    if (*(int *)(param_1 + 8) != 1) {
      return 1;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      func_0x00c98c10(param_1 + 0xc);
    }
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"providers\\implementations\\storemgmt\\file_store.c",
                 0x71);
  }
  if (*(int *)(param_1 + 8) != 1) {
    func_0x00c01b70(*(undefined4 *)(param_1 + 0x10));
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x18),
                 "providers\\implementations\\storemgmt\\file_store.c",0x74);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x14),
                 "providers\\implementations\\storemgmt\\file_store.c",0x75);
  }
  FUN_00bbc580(param_1,"providers\\implementations\\storemgmt\\file_store.c",0x77);
  return 1;
}



undefined4 * FUN_00cccff0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  HCERTSTORE pvVar3;
  
  iVar1 = func_0x00bbc0f0(param_2,"org.openssl.winstore:",0x15);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             FUN_00bbc830(0x20,"providers\\implementations\\storemgmt\\winstore_store.c",0x56);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_1;
      pvVar3 = CertOpenSystemStoreW(0,L"ROOT");
      puVar2[4] = pvVar3;
      if (pvVar3 != (HCERTSTORE)0x0) {
        if ((PCCERT_CONTEXT)puVar2[5] != (PCCERT_CONTEXT)0x0) {
          CertFreeCertificateContext((PCCERT_CONTEXT)puVar2[5]);
          puVar2[5] = 0;
        }
        puVar2[6] = 0;
        return puVar2;
      }
      FUN_00bbc580(puVar2,"providers\\implementations\\storemgmt\\winstore_store.c",0x5d);
    }
  }
  return (undefined4 *)0x0;
}



undefined ** FUN_00ccd070(void)

{
  return &PTR_s_subject_010a3490;
}



undefined4 FUN_00ccd080(undefined4 param_1,undefined4 param_2,size_t param_3,void *param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  size_t sVar3;
  int iVar4;
  void *pvVar5;
  PCCERT_CONTEXT pCVar6;
  
  func_0x00e87f70();
  pvVar5 = param_4;
  sVar3 = param_3;
  bVar2 = false;
  if (param_4 != (void *)0x0) {
    iVar4 = func_0x00bc09d0(param_4,"properties");
    if (iVar4 != 0) {
      puVar1 = (undefined4 *)(sVar3 + 4);
      FUN_00bbc580(*puVar1,"providers\\implementations\\storemgmt\\winstore_store.c",0x80);
      *puVar1 = 0;
      iVar4 = func_0x00bc0850(iVar4,puVar1,0);
      if (iVar4 == 0) {
        return 0;
      }
      bVar2 = true;
    }
    iVar4 = func_0x00bc09d0(pvVar5,"subject");
    if (iVar4 == 0) {
      if (!bVar2) {
        return 1;
      }
    }
    else {
      param_4 = (void *)0x0;
      param_3 = 0;
      iVar4 = func_0x00bc01f0(iVar4,&param_4,&param_3);
      if (iVar4 == 0) {
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(sVar3 + 8),
                   "providers\\implementations\\storemgmt\\winstore_store.c",0x90);
      pvVar5 = (void *)FUN_00bbc4f0(param_3,
                                    "providers\\implementations\\storemgmt\\winstore_store.c",0x92);
      *(void **)(sVar3 + 8) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        *(undefined4 *)(sVar3 + 0xc) = 0;
        return 0;
      }
      *(size_t *)(sVar3 + 0xc) = param_3;
      memcpy(pvVar5,param_4,param_3);
    }
    pCVar6 = *(PCCERT_CONTEXT *)(sVar3 + 0x14);
    if (pCVar6 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext(pCVar6);
      *(undefined4 *)(sVar3 + 0x14) = 0;
      pCVar6 = (PCCERT_CONTEXT)0x0;
    }
    *(undefined4 *)(sVar3 + 0x18) = 0;
    if (*(int *)(sVar3 + 0xc) == 0) {
      pCVar6 = (PCCERT_CONTEXT)0x0;
    }
    else {
      pCVar6 = CertFindCertificateInStore
                         (*(HCERTSTORE *)(sVar3 + 0x10),0x10001,0,0x20007,&stack0x00000000,pCVar6);
    }
    *(PCCERT_CONTEXT *)(sVar3 + 0x14) = pCVar6;
    *(uint *)(sVar3 + 0x18) = 2 - (uint)(pCVar6 != (PCCERT_CONTEXT)0x0);
  }
  return 1;
}



undefined4
FUN_00ccd1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  func_0x00e87f70();
  iVar1 = param_4;
  if (*(int *)(param_4 + 0x18) != 1) {
    return 0;
  }
  param_4 = *(undefined4 *)(*(int *)(param_4 + 0x14) + 8);
  iVar2 = func_0x00ccd320(iVar1);
  if (iVar2 != 0) {
    param_1 = param_5;
    param_2 = param_6;
    func_0x00c26460(*(undefined4 *)(iVar1 + 0x1c),&param_1);
    func_0x00c02c40(*(undefined4 *)(iVar1 + 0x1c),param_7,param_8);
    iVar2 = func_0x00c267c0(*(undefined4 *)(iVar1 + 0x1c),&stack0x00000000,&param_4);
    if (iVar2 != 0) {
      func_0x00ccd510(iVar1);
      return 1;
    }
  }
  return 0;
}



bool FUN_00ccd290(int param_1)

{
  return *(int *)(param_1 + 0x18) != 1;
}



undefined4 FUN_00ccd2a0(int param_1)

{
  if (*(PCCERT_CONTEXT *)(param_1 + 0x14) != (PCCERT_CONTEXT)0x0) {
    CertFreeCertificateContext(*(PCCERT_CONTEXT *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  CertCloseStore(*(HCERTSTORE *)(param_1 + 0x10),0);
  func_0x00c01b70(*(undefined4 *)(param_1 + 0x1c));
  FUN_00bbc580(*(undefined4 *)(param_1 + 4),
               "providers\\implementations\\storemgmt\\winstore_store.c",0x13a);
  FUN_00bbc580(*(undefined4 *)(param_1 + 8),
               "providers\\implementations\\storemgmt\\winstore_store.c",0x13b);
  FUN_00bbc580(param_1,"providers\\implementations\\storemgmt\\winstore_store.c",0x13c);
  return 1;
}



undefined4 FUN_00ccd580(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  iVar1 = func_0x00bbbfe0(param_2,"TLS-GROUP");
  if (iVar1 != 0) {
    return 0;
  }
  ppuVar3 = &PTR_s_tls_group_name_010a38c8;
  uVar2 = 0;
  do {
    iVar1 = (*param_3)(ppuVar3,param_4);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = uVar2 + 200;
    ppuVar3 = ppuVar3 + 0x32;
  } while (uVar2 < 0x2968);
  return 1;
}



undefined4 FUN_00ccd5e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"ssl3-ms");
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 5)) {
      uVar2 = func_0x00bb73a0(param_1,0x1d,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8));
      return uVar2;
    }
  }
  return 1;
}



undefined ** FUN_00ccd630(void)

{
  return &PTR_s_ssl3_ms_010a6538;
}



undefined4 FUN_00ccd640(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 == 0) || (iVar1 = func_0x00bb7240(param_1), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (((param_2 != 0) && (iVar1 = func_0x00bc09d0(param_2,"ssl3-ms"), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 4) == 5 &&
      (iVar1 = func_0x00bb73a0(param_1,0x1d,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8))
      , iVar1 == 0)))) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00ccd6a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x60,"providers\\implementations\\digests\\sha2_prov.c",0x3f);
    return uVar2;
  }
  return 0;
}



void FUN_00ccd6c0(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x60,"providers\\implementations\\digests\\sha2_prov.c",0x3f);
  return;
}



undefined4 * FUN_00ccd6e0(undefined4 *param_1)

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
             FUN_00bbc4f0(0x60,"providers\\implementations\\digests\\sha2_prov.c",0x3f);
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



undefined4 FUN_00ccd740(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x13 < param_4)) {
    iVar1 = func_0x00bb7100(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x14;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccd780(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x14,2);
  return;
}



undefined4 FUN_00ccd7a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb42a0(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccd7d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x70,"providers\\implementations\\digests\\sha2_prov.c",0x44);
    return uVar2;
  }
  return 0;
}



void FUN_00ccd7f0(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x70,"providers\\implementations\\digests\\sha2_prov.c",0x44);
  return;
}



undefined4 * FUN_00ccd810(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x70,"providers\\implementations\\digests\\sha2_prov.c",0x44);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccd850(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x1b < param_4)) {
    iVar1 = func_0x00bb4290(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x1c;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccd890(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x1c,2);
  return;
}



undefined4 FUN_00ccd8b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb47a0(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccd8e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x70,"providers\\implementations\\digests\\sha2_prov.c",0x49);
    return uVar2;
  }
  return 0;
}



void FUN_00ccd900(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x70,"providers\\implementations\\digests\\sha2_prov.c",0x49);
  return;
}



undefined4 * FUN_00ccd920(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x70,"providers\\implementations\\digests\\sha2_prov.c",0x49);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccd960(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x1f < param_4)) {
    iVar1 = func_0x00bb4400(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x20;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccd9a0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x20,2);
  return;
}



undefined4 FUN_00ccd9c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb4920(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccd9f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x70,"providers\\implementations\\digests\\sha2_prov.c",0x4e);
    return uVar2;
  }
  return 0;
}



void FUN_00ccda10(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x70,"providers\\implementations\\digests\\sha2_prov.c",0x4e);
  return;
}



undefined4 * FUN_00ccda30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x70,"providers\\implementations\\digests\\sha2_prov.c",0x4e);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccda70(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x17 < param_4)) {
    iVar1 = func_0x00bb4400(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x18;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccdab0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x18,2);
  return;
}



undefined4 FUN_00ccdad0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb7ce0(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccdb00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x53);
    return uVar2;
  }
  return 0;
}



void FUN_00ccdb30(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x53);
  return;
}



undefined4 * FUN_00ccdb50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x53);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccdb90(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x2f < param_4)) {
    iVar1 = func_0x00bb7cd0(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x30;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccdbd0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x80,0x30,2);
  return;
}



undefined4 FUN_00ccdbf0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb85d0(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccdc20(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x58);
    return uVar2;
  }
  return 0;
}



void FUN_00ccdc50(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x58);
  return;
}



undefined4 * FUN_00ccdc70(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x58);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccdcb0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x3f < param_4)) {
    iVar1 = func_0x00bb7e70(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x40;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccdcf0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x80,0x40,2);
  return;
}



undefined4 FUN_00ccdd10(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb86a0(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccdd40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x5d);
    return uVar2;
  }
  return 0;
}



void FUN_00ccdd70(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x5d);
  return;
}



undefined4 * FUN_00ccdd90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x5d);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccddd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x1b < param_4)) {
    iVar1 = func_0x00bb7e70(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x1c;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccde10(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x80,0x1c,2);
  return;
}



undefined4 FUN_00ccde30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb8750(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccde60(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x62);
    return uVar2;
  }
  return 0;
}



void FUN_00ccde90(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x62);
  return;
}



undefined4 * FUN_00ccdeb0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0xd8,"providers\\implementations\\digests\\sha2_prov.c",0x62);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccdef0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x1f < param_4)) {
    iVar1 = func_0x00bb7e70(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x20;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccdf30(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x80,0x20,2);
  return;
}



undefined4 FUN_00ccdf50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00c6f660(param_1);
  return 1;
}



undefined4 FUN_00ccdf70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 == 0) || (func_0x00c6f660(param_1), param_1 == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"xoflen");
    if ((iVar1 == 0) && (iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0), iVar1 == 0)) {
      return 1;
    }
    iVar1 = func_0x00bc0300(iVar1,param_1 + 0x174);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\digests\\sha3_prov.c",0x27c,
                      "shake_set_ctx_params");
      func_0x00bc5160(0x39,0x67,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00cce010(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  size_t _Size;
  uint _Size_00;
  
  iVar1 = *(int *)(param_1 + 0x170);
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x178);
    if (iVar2 != 0) {
      _Size_00 = iVar1 - iVar2;
      _Dst = (void *)(iVar2 + 200 + param_1);
      if (param_3 < _Size_00) {
        memcpy(_Dst,param_2,param_3);
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + param_3;
        return 1;
      }
      memcpy(_Dst,param_2,_Size_00);
      param_2 = (void *)((int)param_2 + _Size_00);
      param_3 = param_3 - _Size_00;
      (**(code **)(param_1 + 0x180))(param_1,param_1 + 200,iVar1);
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    _Size = (**(code **)(param_1 + 0x180))(param_1,param_2,param_3);
    if (_Size != 0) {
      memcpy((void *)(param_1 + 200),(void *)((int)param_2 + (param_3 - _Size)),_Size);
      *(size_t *)(param_1 + 0x178) = _Size;
    }
  }
  return 1;
}



undefined4 FUN_00cce0e0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x174) == -1) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\digests\\sha3_prov.c",0x77,"keccak_final");
    func_0x00bc5160(0x39,0xa6,0);
    return 0;
  }
  if (param_4 != 0) {
    uVar2 = (**(code **)(param_1 + 0x184))(param_1,param_2,*(int *)(param_1 + 0x174));
  }
  *param_3 = *(undefined4 *)(param_1 + 0x174);
  return uVar2;
}



void FUN_00cce160(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,400,"providers\\implementations\\digests\\sha3_prov.c",0x230);
  return;
}



undefined4 * FUN_00cce180(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(400,"providers\\implementations\\digests\\sha3_prov.c",0x236);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00cce1c0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    if (*(code **)(param_1 + 0x188) != (code *)0x0) {
      if (param_4 != 0) {
        uVar2 = (**(code **)(param_1 + 0x188))(param_1,param_2,param_4);
      }
      *param_3 = param_4;
      return uVar2;
    }
  }
  return 0;
}



undefined4 FUN_00cce210(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"xoflen");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x174));
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x255;
        goto LAB_00cce294;
      }
    }
    iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0);
    if (iVar1 != 0) {
      iVar1 = func_0x00bc10c0(iVar1,*(undefined4 *)(param_1 + 0x174));
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x25b;
LAB_00cce294:
        func_0x00bc5050("providers\\implementations\\digests\\sha3_prov.c",uVar2,
                        "shake_get_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
    }
  }
  return 1;
}



undefined ** FUN_00cce2c0(void)

{
  return &PTR_s_xoflen_010a6990;
}



undefined4 FUN_00cce2d0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"xoflen");
    if ((iVar1 == 0) && (iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0), iVar1 == 0)) {
      return 1;
    }
    iVar1 = func_0x00bc0300(iVar1,param_1 + 0x174);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\digests\\sha3_prov.c",0x27c,
                      "shake_set_ctx_params");
      func_0x00bc5160(0x39,0x67,0);
      return 0;
    }
  }
  return 1;
}



undefined ** FUN_00cce360(void)

{
  return &PTR_s_xoflen_010a69cc;
}



undefined4 FUN_00cce370(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x18c) != 0) && (*(int *)(param_1 + 0x18c) != 1)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18c) = 1;
  uVar1 = func_0x00ce1540(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x170));
  return uVar1;
}



undefined4 thunk_FUN_00c6f550(int param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *_Dst;
  
  iVar2 = *(int *)(param_1 + 0x170);
  if (param_3 == 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x18c) != 3) && (*(int *)(param_1 + 0x18c) != 2)) {
    _Dst = (undefined1 *)(param_1 + 200 + *(int *)(param_1 + 0x178));
    memset(_Dst,0,iVar2 - *(int *)(param_1 + 0x178));
    *_Dst = *(undefined1 *)(param_1 + 0x17c);
    pbVar1 = (byte *)(iVar2 + 199 + param_1);
    *pbVar1 = *pbVar1 | 0x80;
    func_0x00ce1540(param_1,param_1 + 200,iVar2,iVar2);
    *(undefined4 *)(param_1 + 0x18c) = 2;
    func_0x00ce1760(param_1,param_2,param_3,iVar2,0);
    return 1;
  }
  return 0;
}



undefined4 thunk_FUN_00c6f690(void *param_1,void *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *_Dst;
  uint _Size;
  uint uVar6;
  
  uVar6 = param_3;
  iVar3 = (int)param_1;
  uVar2 = *(uint *)((int)param_1 + 0x170);
  uVar5 = *(uint *)((int)param_1 + 0x178);
  if (param_3 == 0) {
    return 1;
  }
  if (*(int *)((int)param_1 + 0x18c) == 2) {
    return 0;
  }
  if (*(int *)((int)param_1 + 0x18c) == 3) {
    uVar4 = 1;
    param_3 = 1;
    if (uVar5 != 0) {
      _Size = uVar6;
      if (uVar5 < uVar6) {
        _Size = uVar5;
      }
      memcpy(param_2,(void *)((uVar2 - uVar5) + 200 + (int)param_1),_Size);
      *(int *)((int)param_1 + 0x178) = *(int *)((int)param_1 + 0x178) - _Size;
      uVar4 = 1;
      param_3 = 1;
      uVar6 = uVar6 - _Size;
      param_1 = (void *)((int)param_2 + _Size);
      if (uVar6 == 0) {
        return 1;
      }
      goto LAB_00c6f723;
    }
  }
  else {
    _Dst = (undefined1 *)((int)param_1 + 200 + uVar5);
    memset(_Dst,0,uVar2 - uVar5);
    *_Dst = *(undefined1 *)((int)param_1 + 0x17c);
    pbVar1 = (byte *)((int)param_1 + 199 + uVar2);
    *pbVar1 = *pbVar1 | 0x80;
    func_0x00ce1540(param_1,(int)param_1 + 200,uVar2,uVar2);
    *(undefined4 *)((int)param_1 + 0x18c) = 3;
    uVar4 = 0;
    *(undefined4 *)((int)param_1 + 0x178) = 0;
    param_3 = 0;
  }
  param_1 = param_2;
LAB_00c6f723:
  uVar5 = uVar6;
  if (uVar2 <= uVar6) {
    uVar5 = uVar6 % uVar2;
    func_0x00ce1760(iVar3,param_1,uVar6 - uVar5,uVar2,param_3);
    uVar4 = 1;
    param_1 = (void *)((int)param_1 + (uVar6 - uVar5));
  }
  if (uVar5 != 0) {
    func_0x00ce1760(iVar3,(void *)(iVar3 + 200),uVar2,uVar2,uVar4);
    memcpy(param_1,(void *)(iVar3 + 200),uVar5);
    *(uint *)(iVar3 + 0x178) = uVar2 - uVar5;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce3d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x29c);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,6,0xe0);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce430(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x90,0x1c,2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce450(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x29e);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,6,0x100);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce4b0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x88,0x20,2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce4d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2a0);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,6,0x180);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce530(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x68,0x30,2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce550(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2a2);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,6,0x200);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce5b0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x48,0x40,2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce5d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2a4);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,1,0xe0);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce630(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2a6);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,1,0x100);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce690(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2a8);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,1,0x180);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce6f0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2aa);
    if (iVar2 != 0) {
      func_0x00c6f5f0(iVar2,1,0x200);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce750(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2ac);
    if (iVar2 != 0) {
      func_0x00c6f4e0(iVar2,0x1f,0x80,0);
      puVar1 = PTR_thunk_FUN_00c6f690_012b76c4;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76bc;
      *(undefined **)(iVar2 + 0x188) = puVar1;
      *(undefined4 *)(iVar2 + 0x174) = 0xffffffff;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce7c0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0xa8,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce7e0(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2ae);
    if (iVar2 != 0) {
      func_0x00c6f4e0(iVar2,0x1f,0x100,0);
      puVar1 = PTR_thunk_FUN_00c6f690_012b76c4;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76bc;
      *(undefined **)(iVar2 + 0x188) = puVar1;
      *(undefined4 *)(iVar2 + 0x174) = 0xffffffff;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce850(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x88,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce870(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2b0);
    if (iVar2 != 0) {
      func_0x00c6f4e0(iVar2,4,0x80,0x100);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce8d0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0xa8,0x20,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00cce8f0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    iVar2 = FUN_00bbc830(400,"providers\\implementations\\digests\\sha3_prov.c",0x2b2);
    if (iVar2 != 0) {
      func_0x00c6f4e0(iVar2,4,0x100,0x200);
      uVar1 = DAT_012b76b8;
      *(undefined8 *)(iVar2 + 0x180) = _PTR_FUN_012b76b0;
      *(undefined4 *)(iVar2 + 0x188) = uVar1;
      return iVar2;
    }
  }
  return 0;
}



void FUN_00cce950(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x88,0x40,1);
  return;
}



undefined4 FUN_00cce970(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 != 0) && (iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0), iVar1 != 0)) &&
     (iVar1 = func_0x00bc10c0(iVar1,*(undefined1 *)(param_1 + 0xe8)), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbc,
                    "ossl_blake2b_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00cce9e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 != 0) && (iVar2 = func_0x00bc09d0(param_2,&DAT_0113cdc0), iVar2 != 0)) {
    iVar2 = func_0x00bc0300(iVar2,&param_1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbc,
                      "ossl_blake2b_set_ctx_params");
      func_0x00bc5160(0x39,0x67,0);
      return 0;
    }
    if (0x3f < param_1 - 1U) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbc,
                      "ossl_blake2b_set_ctx_params");
      func_0x00bc5160(0x39,0xda,0);
      return 0;
    }
    func_0x00c8d280(iVar1 + 0xe8,param_1);
  }
  return 1;
}



undefined ** FUN_00cceaa0(void)

{
  return &PTR_DAT_010a6b70;
}



undefined4 FUN_00cceab0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((param_2 != 0) && (iVar1 = func_0x00bc09d0(param_2,&DAT_0113cdc0), iVar1 != 0)) &&
     (iVar1 = func_0x00bc10c0(iVar1,*(undefined1 *)(param_1 + 0x78)), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbb,
                    "ossl_blake2s_get_ctx_params");
    func_0x00bc5160(0x39,0x68,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00cceb20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 != 0) && (iVar2 = func_0x00bc09d0(param_2,&DAT_0113cdc0), iVar2 != 0)) {
    iVar2 = func_0x00bc0300(iVar2,&param_1);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbb,
                      "ossl_blake2s_set_ctx_params");
      func_0x00bc5160(0x39,0x67,0);
      return 0;
    }
    if (0x1f < param_1 - 1U) {
      FUN_00bc4f50();
      func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbb,
                      "ossl_blake2s_set_ctx_params");
      func_0x00bc5160(0x39,0xda,0);
      return 0;
    }
    func_0x00c8d280(iVar1 + 0x78,param_1);
  }
  return 1;
}



undefined ** FUN_00ccebd0(void)

{
  return &PTR_DAT_010a6b48;
}



undefined4 FUN_00ccebe0(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int unaff_retaddr;
  
  func_0x00e87f70();
  iVar3 = FUN_0058e2e0();
  if ((iVar3 != 0) && (param_2 != 0)) {
    if ((param_3 != 0) && (iVar3 = func_0x00bc09d0(param_3,&DAT_0113cdc0), iVar3 != 0)) {
      iVar3 = func_0x00bc0300(iVar3,&stack0x00000000);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbb,
                        "ossl_blake2s_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      if (0x1f < unaff_retaddr - 1U) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbb,
                        "ossl_blake2s_set_ctx_params");
        func_0x00bc5160(0x39,0xda,0);
        return 0;
      }
      func_0x00c8d280(param_2 + 0x78,unaff_retaddr);
    }
    cVar2 = *(char *)(param_2 + 0x78);
    pcVar1 = (char *)(param_2 + 0x78);
    func_0x00c8f090(pcVar1);
    if (cVar2 != '\0') {
      *pcVar1 = cVar2;
    }
    iVar3 = func_0x00c8ef70(param_2,pcVar1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccecd0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x98,"providers\\implementations\\digests\\blake2_prov.c",0xbb);
    return uVar2;
  }
  return 0;
}



void FUN_00cced00(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x98,"providers\\implementations\\digests\\blake2_prov.c",0xbb);
  return;
}



undefined4 * FUN_00cced20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x98,"providers\\implementations\\digests\\blake2_prov.c",0xbb);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00cced60(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x74);
    *param_3 = uVar1;
    if (param_4 == 0) {
      return 1;
    }
    if (uVar1 <= param_4) {
      uVar3 = func_0x00c8eeb0(param_2,param_1);
      return uVar3;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbb,
                    "blake2s256_internal_final");
    func_0x00bc5160(0x39,0xda,0);
  }
  return 0;
}



void FUN_00ccedd0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x20,0);
  return;
}



undefined4 FUN_00ccedf0(undefined4 param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int unaff_retaddr;
  
  func_0x00e87f70();
  iVar3 = FUN_0058e2e0();
  if ((iVar3 != 0) && (param_2 != 0)) {
    if ((param_3 != 0) && (iVar3 = func_0x00bc09d0(param_3,&DAT_0113cdc0), iVar3 != 0)) {
      iVar3 = func_0x00bc0300(iVar3,&stack0x00000000);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbc,
                        "ossl_blake2b_set_ctx_params");
        func_0x00bc5160(0x39,0x67,0);
        return 0;
      }
      if (0x3f < unaff_retaddr - 1U) {
        FUN_00bc4f50();
        func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbc,
                        "ossl_blake2b_set_ctx_params");
        func_0x00bc5160(0x39,0xda,0);
        return 0;
      }
      func_0x00c8d280(param_2 + 0xe8,unaff_retaddr);
    }
    cVar2 = *(char *)(param_2 + 0xe8);
    pcVar1 = (char *)(param_2 + 0xe8);
    func_0x00c8d230(pcVar1);
    if (cVar2 != '\0') {
      *pcVar1 = cVar2;
    }
    iVar3 = func_0x00c8d0f0(param_2,pcVar1);
    if (iVar3 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00cceef0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x128,"providers\\implementations\\digests\\blake2_prov.c",0xbc);
    return uVar2;
  }
  return 0;
}



void FUN_00ccef20(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x128,"providers\\implementations\\digests\\blake2_prov.c",0xbc);
  return;
}



undefined4 * FUN_00ccef40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0x128,"providers\\implementations\\digests\\blake2_prov.c",0xbc);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccef80(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0058e2e0();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0xe4);
    *param_3 = uVar1;
    if (param_4 == 0) {
      return 1;
    }
    if (uVar1 <= param_4) {
      uVar3 = func_0x00c8d010(param_2,param_1);
      return uVar3;
    }
    FUN_00bc4f50();
    func_0x00bc5050("providers\\implementations\\digests\\blake2_prov.c",0xbc,
                    "blake2b512_internal_final");
    func_0x00bc5160(0x39,0xda,0);
  }
  return 0;
}



void FUN_00cceff0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x80,0x40,0);
  return;
}



undefined4 FUN_00ccf010(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00bb4130(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00ccf040(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0x5c,"providers\\implementations\\digests\\md5_prov.c",0x18);
    return uVar2;
  }
  return 0;
}



void FUN_00ccf060(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0x5c,"providers\\implementations\\digests\\md5_prov.c",0x18);
  return;
}



undefined4 * FUN_00ccf080(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00bbc4f0(0x5c,"providers\\implementations\\digests\\md5_prov.c",0x18)
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



undefined4 FUN_00ccf0c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0xf < param_4)) {
    iVar1 = func_0x00bb4010(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x10;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccf100(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x10,0);
  return;
}



undefined4 FUN_00ccf120(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar1 = func_0x00bc09d0(param_2,"ssl3-ms");
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 5)) {
      uVar2 = func_0x00c86790(param_1,0x1d,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8));
      return uVar2;
    }
  }
  return 1;
}



undefined ** FUN_00ccf170(void)

{
  return &PTR_s_ssl3_ms_010a6d40;
}



undefined4 FUN_00ccf180(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (((iVar1 == 0) || (iVar1 = func_0x00c86970(param_1), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (((param_2 != 0) && (iVar1 = func_0x00bc09d0(param_2,"ssl3-ms"), iVar1 != 0)) &&
     ((*(int *)(iVar1 + 4) == 5 &&
      (iVar1 = func_0x00c86790(param_1,0x1d,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8))
      , iVar1 == 0)))) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00ccf1e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_00bbc830(0xbc,"providers\\implementations\\digests\\md5_sha1_prov.c",0x3d);
    return uVar2;
  }
  return 0;
}



void FUN_00ccf210(undefined4 param_1)

{
  FUN_00bbc6c0(param_1,0xbc,"providers\\implementations\\digests\\md5_sha1_prov.c",0x3d);
  return;
}



undefined4 * FUN_00ccf230(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)
             FUN_00bbc4f0(0xbc,"providers\\implementations\\digests\\md5_sha1_prov.c",0x3d);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
      for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      return puVar2;
    }
  }
  return puVar2;
}



undefined4 FUN_00ccf270(undefined4 param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if ((iVar1 != 0) && (0x23 < param_4)) {
    iVar1 = func_0x00c86940(param_2,param_1);
    if (iVar1 != 0) {
      *param_3 = 0x24;
      return 1;
    }
  }
  return 0;
}



void FUN_00ccf2b0(undefined4 param_1)

{
  func_0x00cee7d0(param_1,0x40,0x24,0);
  return;
}



undefined4 FUN_00ccf2d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0058e2e0();
  if (iVar1 != 0) {
    iVar1 = func_0x00c93b10(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


