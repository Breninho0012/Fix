          func_0x00c42080(DAT_013df100);
          *param_2 = 0;
          DAT_013df100 = 0;
          return 1;
        }
        break;
      case 0x1ad:
        iVar1 = DAT_013df0fc;
        if (DAT_013df0fc == 0) {
          DAT_013df0fc = func_0x00c420a0(0x1ad,1,0x20);
          if (((((DAT_013df0fc != 0) && (iVar1 = func_0x00bc4450(DAT_013df0fc,0x10), iVar1 != 0)) &&
               (iVar1 = func_0x00c420d0(DAT_013df0fc,3), iVar1 != 0)) &&
              ((iVar1 = func_0x00bc44d0(DAT_013df0fc,FUN_00bf3a50), iVar1 != 0 &&
               (iVar1 = func_0x00bc4430(DAT_013df0fc,FUN_00bf3c20), iVar1 != 0)))) &&
             ((iVar1 = func_0x00c420f0(DAT_013df0fc,0x124), iVar1 != 0 &&
              ((iVar1 = func_0x00bc4490(DAT_013df0fc,FUN_00bc3f60), iVar1 != 0 &&
               (iVar1 = func_0x00bc4410(DAT_013df0fc,FUN_00bc3bc0), iVar1 != 0)))))) {
            *param_2 = DAT_013df0fc;
            return 1;
          }
          func_0x00c42080(DAT_013df0fc);
          *param_2 = 0;
          DAT_013df0fc = 0;
          return 1;
        }
        break;
      default:
LAB_00bf4ac5:
        *param_2 = 0;
        return 0;
      }
    }
  }
  else if (param_4 == 0x389) {
    iVar1 = DAT_013df0f0;
    if (DAT_013df0f0 == 0) {
      DAT_013df0f0 = func_0x00c420a0(0x389,1,0x18);
      if ((((((DAT_013df0f0 != 0) && (iVar1 = func_0x00bc4450(DAT_013df0f0,0x10), iVar1 != 0)) &&
            (iVar1 = func_0x00c420d0(DAT_013df0f0,5), iVar1 != 0)) &&
           ((iVar1 = func_0x00bc44d0(DAT_013df0f0,FUN_00bf3a50), iVar1 != 0 &&
            (iVar1 = func_0x00bc4430(DAT_013df0f0,FUN_00bf4d20), iVar1 != 0)))) &&
          (iVar1 = func_0x00c420f0(DAT_013df0f0,0x124), iVar1 != 0)) &&
         ((iVar1 = func_0x00bc4490(DAT_013df0f0,FUN_00bc3f60), iVar1 != 0 &&
          (iVar1 = func_0x00bc4410(DAT_013df0f0,FUN_00bc3bc0), iVar1 != 0)))) {
        *param_2 = DAT_013df0f0;
        return 1;
      }
      func_0x00c42080(DAT_013df0f0);
      iVar1 = 0;
      DAT_013df0f0 = 0;
    }
  }
  else {
    if (param_4 != 0x38a) goto LAB_00bf4ac5;
    iVar1 = DAT_013df104;
    if (DAT_013df104 == 0) {
      DAT_013df104 = func_0x00c420a0(0x38a,1,0x20);
      if ((((DAT_013df104 != 0) && (iVar1 = func_0x00bc4450(DAT_013df104,0x10), iVar1 != 0)) &&
          (iVar1 = func_0x00c420d0(DAT_013df104,5), iVar1 != 0)) &&
         (((iVar1 = func_0x00bc44d0(DAT_013df104,FUN_00bf3a50), iVar1 != 0 &&
           (iVar1 = func_0x00bc4430(DAT_013df104,FUN_00bf4d20), iVar1 != 0)) &&
          ((iVar1 = func_0x00c420f0(DAT_013df104,0x124), iVar1 != 0 &&
           ((iVar1 = func_0x00bc4490(DAT_013df104,FUN_00bc3f60), iVar1 != 0 &&
            (iVar1 = func_0x00bc4410(DAT_013df104,FUN_00bc3bc0), iVar1 != 0)))))))) {
        *param_2 = DAT_013df104;
        return 1;
      }
      func_0x00c42080(DAT_013df104);
      *param_2 = 0;
      DAT_013df104 = 0;
      return 1;
    }
  }
  *param_2 = iVar1;
  return 1;
}



void FUN_00bf4cf0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  func_0x00417bd0(param_2,param_1,param_4,param_3 << 4);
  return;
}



undefined4
FUN_00bf4d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc36f0(param_2);
  iVar2 = func_0x00bc36f0(param_2);
  iVar3 = func_0x00bc3930(param_2);
  if (iVar3 < 0) {
    return 0;
  }
  uVar4 = func_0x00bc36c0(param_2,&stack0x00000000,FUN_00bf4cf0);
  uVar4 = func_0x00bc39f0(param_2,uVar4);
  func_0x00bcca60(param_4,param_3,param_5,(-iVar1 & 0xfU) + iVar2,uVar4);
  func_0x00bc3aa0(param_2,iVar3);
  return 1;
}



void FUN_00bf4db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bc36f0(param_1);
  iVar2 = func_0x00bc36f0(param_1,param_4);
  func_0x004174b0(param_2,param_3,iVar2 + (-iVar1 & 0xfU));
  return;
}



undefined4 FUN_00bf4df0(void)

{
  if ((DAT_013df0c8 == 0) && (DAT_013df0c4 == 0)) {
    return 0;
  }
  return 1;
}



undefined4
FUN_00bf4e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,byte *param_5,
            uint param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  func_0x00e87f70();
  iVar5 = func_0x00bc36f0(param_3);
  iVar6 = func_0x00bc36f0(param_3);
  pbVar7 = (byte *)(iVar6 + (-iVar5 & 0xfU));
  uVar8 = func_0x00bc3930(param_3);
  if (uVar8 != 0) {
    iVar5 = func_0x00bc39f0(param_3);
    if (0xf < uVar8) {
      return 0;
    }
    do {
      if (param_6 == 0) break;
      pbVar11 = (byte *)(iVar5 + uVar8);
      param_6 = param_6 - 1;
      uVar8 = uVar8 + 1;
      *param_4 = *pbVar11 ^ *param_5;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
    } while (uVar8 < 0x10);
    func_0x00bc3aa0(param_3,uVar8 & 0xf);
  }
  if (param_6 == 0) {
    return 1;
  }
  puVar9 = (undefined4 *)func_0x00bc39f0(param_3);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar8 = param_6 & 0xfffffff0;
  *(undefined4 *)pbVar7 = *puVar9;
  *(undefined4 *)(pbVar7 + 4) = uVar2;
  *(undefined4 *)(pbVar7 + 8) = uVar3;
  *(undefined4 *)(pbVar7 + 0xc) = uVar4;
  if (uVar8 != 0) {
    iVar5 = func_0x00417a60(param_4,param_5,pbVar7,uVar8);
    if (iVar5 == 0) {
      return 0;
    }
    param_6 = param_6 - uVar8;
    if (param_6 == 0) goto LAB_00bf4f2a;
  }
  param_5 = param_5 + uVar8;
  func_0x00bc3aa0(param_3,param_6);
  func_0x00417470();
  func_0x00417480(pbVar7,pbVar7,pbVar7);
  func_0x00417470();
  pbVar10 = param_4 + uVar8;
  pbVar11 = pbVar7;
  do {
    bVar1 = *param_5;
    param_5 = param_5 + 1;
    *pbVar10 = bVar1 ^ *pbVar11;
    pbVar11 = pbVar11 + 1;
    param_6 = param_6 - 1;
    pbVar10 = pbVar10 + 1;
  } while (param_6 != 0);
LAB_00bf4f2a:
  puVar9 = (undefined4 *)func_0x00bc39f0(param_3);
  uVar2 = *(undefined4 *)(pbVar7 + 4);
  uVar3 = *(undefined4 *)(pbVar7 + 8);
  uVar4 = *(undefined4 *)(pbVar7 + 0xc);
  *puVar9 = *(undefined4 *)pbVar7;
  puVar9[1] = uVar2;
  puVar9[2] = uVar3;
  puVar9[3] = uVar4;
  return 1;
}



undefined4
FUN_00bf5160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  if (DAT_012b5ef8 == -1) {
    if (DAT_013df108 == 0) {
      DAT_013df108 = func_0x00ba6860();
    }
    FUN_00bc4f50();
    func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\engines\\e_capi_err.c"
                    ,0x5c,"ERR_CAPI_error");
    func_0x00bc5160(DAT_013df108,0x6b,0);
    func_0x00bc5050("engines\\e_capi.c",0x125,0);
    return 0;
  }
  puVar1 = (uint *)func_0x00bf8170(param_3,DAT_012b5ef8);
  uVar2 = func_0x00e8798f(1,0);
  iVar3 = func_0x00bac190(uVar2);
  uVar2 = param_6;
  if (iVar3 != 0) {
    switch(param_4) {
    case 200:
      uVar2 = func_0x00bf6e70(puVar1,iVar3,0);
      func_0x00baa8e0(iVar3);
      return uVar2;
    case 0xc9:
      uVar2 = func_0x00bf6e70(puVar1,iVar3,param_6);
      func_0x00baa8e0(iVar3);
      return uVar2;
    case 0xca:
      *puVar1 = param_5;
      func_0x00bf4f50(puVar1,"Setting debug level to %d\n",param_5);
      func_0x00baa8e0(iVar3);
      return 1;
    case 0xcb:
      uVar4 = func_0x00bbbc70(param_6,"engines\\e_capi.c",0x15b);
      if (uVar4 != 0) {
        puVar1[1] = uVar4;
        func_0x00bf4f50(puVar1,"Setting debug file to %s\n",uVar4);
        func_0x00baa8e0(iVar3);
        return 1;
      }
      break;
    case 0xcc:
      puVar1[2] = param_5;
      func_0x00bf4f50(puVar1,"Setting key type to %d\n",param_5);
      func_0x00baa8e0(iVar3);
      return 1;
    case 0xcd:
      uVar2 = func_0x00bf7250(puVar1,iVar3);
      func_0x00baa8e0(iVar3);
      return uVar2;
    case 0xce:
      iVar5 = func_0x00bf69c0(puVar1,&param_1,&stack0x00000000,param_5);
      uVar2 = param_1;
      if (iVar5 == 1) {
        uVar6 = func_0x00bf5550(puVar1,param_1,unaff_retaddr,0);
        FUN_00bbc580(uVar2,"engines\\e_capi.c",0x6a3);
        func_0x00baa8e0(iVar3);
        return uVar6;
      }
      break;
    case 0xcf:
      uVar2 = func_0x00bf5550(puVar1,param_6,puVar1[4],1);
      func_0x00baa8e0(iVar3);
      return uVar2;
    case 0xd0:
      puVar1[4] = param_5;
      func_0x00baa8e0(iVar3);
      return 1;
    case 0xd1:
      uVar2 = func_0x00bf6f60(puVar1,iVar3);
      func_0x00baa8e0(iVar3);
      return uVar2;
    case 0xd2:
      puVar1[9] = param_5;
      func_0x00baa8e0(iVar3);
      return 1;
    case 0xd3:
      if (2 < param_5 - 1) {
        func_0x00bf4fb0(0,0x78,"engines\\e_capi.c",0x173);
        func_0x00baa8e0(iVar3);
        return 0;
      }
      puVar1[8] = param_5;
      func_0x00baa8e0(iVar3);
      return 1;
    case 0xd4:
      uVar4 = func_0x00bbbc70(param_6,"engines\\e_capi.c",0x140);
      if (uVar4 != 0) {
        FUN_00bbc580(puVar1[5],"engines\\e_capi.c",0x142);
        puVar1[5] = uVar4;
        func_0x00bf4f50(puVar1,"Setting store name to %s\n",uVar2);
        func_0x00baa8e0(iVar3);
        return 1;
      }
      break;
    case 0xd5:
      if ((param_5 & 1) == 0) {
        uVar4 = puVar1[7] & 0xfffdffff | 0x10000;
      }
      else {
        uVar4 = puVar1[7] & 0xfffeffff | 0x20000;
      }
      puVar1[7] = uVar4;
      func_0x00bf4f50(puVar1,"Setting flags to %d\n",param_5);
      func_0x00baa8e0(iVar3);
      return 1;
    default:
      func_0x00bf4fb0(0,0x7d,"engines\\e_capi.c",0x183);
    }
    func_0x00baa8e0(iVar3);
    return 0;
  }
  func_0x00bf4fb0(0,0x73,"engines\\e_capi.c",299);
  return 0;
}



undefined4 FUN_00bf56d0(void)

{
  func_0x00c42970(DAT_013df110);
  DAT_013df110 = 0;
  func_0x00c43080(DAT_013df114);
  DAT_013df114 = 0;
  if (DAT_013df10c != 0) {
    func_0x00ba6c20(DAT_013df108,&DAT_012b5df8);
    DAT_013df10c = 0;
  }
  return 1;
}



void FUN_00bf5730(DWORD param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,uint param_12,
                 undefined4 param_13,BYTE *param_14,int param_15,undefined4 param_16)

{
  BYTE BVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  BYTE *pbData;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  BOOL BVar15;
  int iVar16;
  int iVar17;
  HCRYPTHASH unaff_retaddr;
  
  func_0x00e87f70();
  uVar12 = param_16;
  pbData = param_14;
  param_12 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uVar13 = func_0x00baf1c0(param_16,DAT_012b5ef8);
  uVar13 = func_0x00bf8170(uVar13);
  func_0x00bf4f50(uVar13,"Called CAPI_dsa_do_sign()\n");
  iVar14 = func_0x00c0fca0(uVar12,DAT_012b5f00);
  if (iVar14 == 0) {
    if (DAT_013df108 == 0) {
      DAT_013df108 = func_0x00ba6860();
    }
    FUN_00bc4f50();
    func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\engines\\e_capi_err.c"
                    ,0x5c,"ERR_CAPI_error");
    func_0x00bc5160(DAT_013df108,0x66,0);
    func_0x00bc5050("engines\\e_capi.c",0x40e,0);
    FUN_008ab370();
    return;
  }
  if (param_15 != 0x14) {
    func_0x00bf4fb0(0,0x76,"engines\\e_capi.c",0x413);
    FUN_008ab370();
    return;
  }
  BVar15 = CryptCreateHash(*(HCRYPTPROV *)(iVar14 + 4),0x8004,0,0,(HCRYPTHASH *)&stack0x00000000);
  if (BVar15 == 0) {
    func_0x00bf4fb0(0,100,"engines\\e_capi.c",0x419);
    func_0x00bf5050();
    FUN_008ab370();
    return;
  }
  BVar15 = CryptSetHashParam(unaff_retaddr,2,pbData,0);
  if (BVar15 == 0) {
    func_0x00bf4fb0(0,0x67,"engines\\e_capi.c",0x420);
    func_0x00bf5050();
  }
  else {
    param_1 = 0x28;
    BVar15 = CryptSignHashW(unaff_retaddr,*(DWORD *)(iVar14 + 0xc),(LPCWSTR)0x0,0,(BYTE *)&param_2,
                            &param_1);
    if (BVar15 == 0) {
      func_0x00bf4fb0(0,0x72,"engines\\e_capi.c",0x428);
      func_0x00bf5050();
    }
    else {
      iVar14 = func_0x00bba5e0();
      iVar16 = func_0x00bba5e0();
      uVar10 = param_4._1_1_;
      uVar9 = (undefined1)param_4;
      uVar8 = param_3._3_1_;
      uVar7 = param_3._2_1_;
      uVar6 = param_3._1_1_;
      uVar5 = (undefined1)param_3;
      uVar4 = param_2._3_1_;
      uVar3 = param_2._2_1_;
      uVar2 = param_2._1_1_;
      BVar1 = (BYTE)param_2;
      if ((iVar14 != 0) && (iVar16 != 0)) {
        param_2._0_1_ = param_6._3_1_;
        param_6._3_1_ = BVar1;
        param_2._1_1_ = param_6._2_1_;
        param_6._2_1_ = uVar2;
        param_2._2_1_ = param_6._1_1_;
        param_6._1_1_ = uVar3;
        param_2._3_1_ = (undefined1)param_6;
        param_6._0_1_ = uVar4;
        param_3._0_1_ = param_5._3_1_;
        param_5._3_1_ = uVar5;
        param_3._1_1_ = param_5._2_1_;
        param_5._2_1_ = uVar6;
        param_3._2_1_ = param_5._1_1_;
        param_5._1_1_ = uVar7;
        param_3._3_1_ = (undefined1)param_5;
        param_5._0_1_ = uVar8;
        param_4._0_1_ = param_4._3_1_;
        param_4._3_1_ = uVar9;
        param_4._1_1_ = param_4._2_1_;
        param_4._2_1_ = uVar10;
        iVar17 = func_0x00bb9f50(&param_2,0x14,iVar14);
        uVar11 = param_9._1_1_;
        uVar10 = (undefined1)param_9;
        uVar9 = param_8._3_1_;
        uVar8 = param_8._2_1_;
        uVar7 = param_8._1_1_;
        uVar6 = (undefined1)param_8;
        uVar5 = param_7._3_1_;
        uVar4 = param_7._2_1_;
        uVar3 = param_7._1_1_;
        uVar2 = (undefined1)param_7;
        if (iVar17 != 0) {
          param_7._0_1_ = param_11._3_1_;
          param_11._3_1_ = uVar2;
          param_7._1_1_ = param_11._2_1_;
          param_11._2_1_ = uVar3;
          param_7._2_1_ = param_11._1_1_;
          param_11._1_1_ = uVar4;
          param_7._3_1_ = (undefined1)param_11;
          param_11._0_1_ = uVar5;
          param_8._0_1_ = param_10._3_1_;
          param_10._3_1_ = uVar6;
          param_8._1_1_ = param_10._2_1_;
          param_10._2_1_ = uVar7;
          param_8._2_1_ = param_10._1_1_;
          param_10._1_1_ = uVar8;
          param_8._3_1_ = (undefined1)param_10;
          param_10._0_1_ = uVar9;
          param_9._0_1_ = param_9._3_1_;
          param_9._3_1_ = uVar10;
          param_9._1_1_ = param_9._2_1_;
          param_9._2_1_ = uVar11;
          iVar17 = func_0x00bb9f50(&param_7,0x14,iVar16);
          if (iVar17 != 0) {
            iVar17 = func_0x00c42a40();
            if (iVar17 != 0) {
              func_0x00c1fb90(iVar17,iVar14,iVar16);
              goto LAB_00bf5ab1;
            }
          }
        }
      }
      FUN_00bba400(iVar14);
      FUN_00bba400(iVar16);
    }
  }
LAB_00bf5ab1:
  func_0x00401320(&param_2,0x28);
  CryptDestroyHash(unaff_retaddr);
  FUN_008ab370();
  return;
}



undefined4 FUN_00bf5ae0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00c0fca0(param_1,DAT_012b5f00);
  if (puVar1 != (undefined4 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    FUN_00bbc580(puVar1,"engines\\e_capi.c",0x659);
  }
  func_0x00c0fdb0(param_1,DAT_012b5f00,0);
  return 1;
}



undefined4 FUN_00bf6010(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bf8170(param_1,DAT_012b5ef8);
  func_0x00bf4f50(iVar1,"Calling capi_ctx_free with %lx\n",iVar1);
  if (iVar1 != 0) {
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0xc),"engines\\e_capi.c",0x673);
    FUN_00bbc580(*(undefined4 *)(iVar1 + 4),"engines\\e_capi.c",0x674);
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0x14),"engines\\e_capi.c",0x675);
    FUN_00bbc580(*(undefined4 *)(iVar1 + 0x18),"engines\\e_capi.c",0x676);
    FUN_00bbc580(iVar1,"engines\\e_capi.c",0x677);
  }
  func_0x00bf8290(param_1,DAT_012b5ef8,0);
  return 1;
}



undefined4 FUN_00bf6b70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  HCRYPTPROV unaff_retaddr;
  
  func_0x00e87f70();
  if (-1 < DAT_012b5ef8) {
LAB_00bf6da8:
    iVar4 = FUN_00bbc830(0x34,"engines\\e_capi.c",0x660);
    iVar3 = DAT_012b5ef8;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x10) = 1;
      *(undefined4 *)(iVar4 + 0x24) = 3;
      *(undefined4 *)(iVar4 + 8) = 1;
      *(undefined4 *)(iVar4 + 0x1c) = 0x1c000;
      *(undefined4 *)(iVar4 + 0x20) = 1;
      *(code **)(iVar4 + 0x28) = FUN_00466fc0;
      func_0x00bf8290(param_2,iVar3,iVar4);
      BVar5 = CryptAcquireContextW
                        ((HCRYPTPROV *)&stack0x00000000,(LPCWSTR)0x0,
                         L"Microsoft Enhanced RSA and AES Cryptographic Provider",0x18,0xf0000000);
      if (BVar5 != 0) {
        DAT_013df118 = 1;
        CryptReleaseContext(unaff_retaddr,0);
      }
      return 1;
    }
    if (DAT_013df108 == 0) {
      DAT_013df108 = func_0x00ba6860();
    }
    func_0x00bf4fb0(0,DAT_013df108,"engines\\e_capi.c",0x1d0);
    return 0;
  }
  DAT_012b5ef8 = func_0x00bca460(10,0,0,0,0,0);
  if (DAT_012b5ef8 < 0) {
    func_0x00bf4fb0(0,0x80026,"engines\\e_capi.c",0x1a3);
    return 0;
  }
  DAT_012b5f04 = func_0x00bca460(3,0,0,0,0,0);
  DAT_012b5efc = func_0x00bca460(9,0,0,0,0,0);
  uVar1 = func_0x00bec1c0();
  uVar2 = func_0x00bb6b70(uVar1);
  iVar3 = func_0x00c429f0(DAT_013df110,uVar2);
  if (iVar3 != 0) {
    uVar2 = FUN_00bc39e0(uVar1);
    iVar3 = func_0x00bee290(DAT_013df110,uVar2);
    if (iVar3 != 0) {
      iVar3 = func_0x00bd8c50(DAT_013df110,FUN_00bf7b00);
      if (iVar3 != 0) {
        iVar3 = func_0x00c404f0(DAT_013df110,FUN_00bf7910);
        if (iVar3 != 0) {
          uVar2 = FUN_00baaa40(uVar1);
          iVar3 = func_0x00c40440(DAT_013df110,uVar2);
          if (iVar3 != 0) {
            uVar1 = func_0x00bb6160(uVar1);
            iVar3 = func_0x00bcc220(DAT_013df110,uVar1);
            if (iVar3 != 0) {
              iVar3 = func_0x00bcc1e0(DAT_013df110,FUN_00bf78a0);
              if (iVar3 != 0) {
                iVar3 = func_0x00bf8270(DAT_013df110,FUN_00bf7b50);
                if (iVar3 != 0) {
                  DAT_012b5f00 = func_0x00bca460(7,0,0,0,0,0);
                  uVar1 = func_0x00c416b0();
                  iVar3 = func_0x00c429f0(DAT_013df114,FUN_00bf5730);
                  if (iVar3 != 0) {
                    uVar2 = func_0x00bb6310(uVar1);
                    iVar3 = func_0x00bd8c50(DAT_013df114,uVar2);
                    if (iVar3 != 0) {
                      iVar3 = func_0x00bc6740(DAT_013df114,FUN_00bf5ae0);
                      if (iVar3 != 0) {
                        uVar2 = func_0x00baf190(uVar1);
                        iVar3 = func_0x00c404f0(DAT_013df114,uVar2);
                        if (iVar3 != 0) {
                          uVar1 = FUN_00baaa40(uVar1);
                          iVar3 = func_0x00c40440(DAT_013df114,uVar1);
                          if (iVar3 != 0) goto LAB_00bf6da8;
                        }
                      }
                    }
                  }
                  func_0x00bf4fb0(0,0x8000a,"engines\\e_capi.c",0x1c8);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00bf4fb0(0,0x80004,"engines\\e_capi.c",0x1b8);
  return 0;
}



int FUN_00bf7400(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0x00bf8170(param_1,DAT_012b5ef8);
  if (iVar1 == 0) {
    if (DAT_013df108 == 0) {
      DAT_013df108 = func_0x00ba6860();
    }
    FUN_00bc4f50();
    func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\engines\\e_capi_err.c"
                    ,0x5c,"ERR_CAPI_error");
    func_0x00bc5160(DAT_013df108,0x65,0);
    func_0x00bc5050("engines\\e_capi.c",0x337,0);
    return 0;
  }
  puVar2 = (undefined4 *)func_0x00bf5eb0(iVar1,param_2);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = func_0x00bf62e0(param_1,puVar2);
  if (iVar1 == 0) {
    CryptDestroyKey(puVar2[2]);
    CryptReleaseContext(puVar2[1],0);
    if ((PCCERT_CONTEXT)*puVar2 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar2);
    }
    FUN_00bbc580(puVar2,"engines\\e_capi.c",0x659);
  }
  return iVar1;
}



undefined4 FUN_00bf74d0(void)

{
  int *piVar1;
  int iVar2;
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  int iVar3;
  undefined4 uVar4;
  PCCERT_CONTEXT pCVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack00000004;
  int iStack0000000c;
  BYTE *in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  
  func_0x00e87f70();
  uVar7 = in_stack_0000001c;
  iVar10 = 0;
  iStack00000004 = 0;
  iVar2 = func_0x00bf8170(in_stack_0000001c,DAT_012b5ef8);
  *in_stack_00000028 = 0;
  *in_stack_0000002c = 0;
  puVar9 = &DAT_0105b93c;
  if (*(undefined **)(iVar2 + 0x18) != (undefined *)0x0) {
    puVar9 = *(undefined **)(iVar2 + 0x18);
  }
  hCertStore = (HCERTSTORE)func_0x00bf77c0(iVar2,puVar9);
  if (hCertStore != (HCERTSTORE)0x0) {
    iStack0000000c = 0;
    pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
    uVar8 = in_stack_00000024;
    while (pCertContext != (PCCERT_CONTEXT)0x0) {
      in_stack_00000014 = pCertContext->pbCertEncoded;
      iVar3 = FUN_00bde2e0(0,&stack0x00000014,pCertContext->cbCertEncoded);
      if (iVar3 == 0) {
        func_0x00bf4f50(iVar2,"Can\'t Parse Certificate %d\n",iStack0000000c);
      }
      else {
        iVar10 = func_0x00bd1830(uVar8);
        if (iVar10 < 1) {
LAB_00bf765f:
          iVar10 = func_0x00be1990(iVar3,1,0);
          if (iVar10 != 0) {
            puVar12 = (undefined4 *)0x0;
            puVar6 = (undefined4 *)func_0x00bf6930(iVar2,pCertContext);
            if (puVar6 != (undefined4 *)0x0) {
              puVar12 = (undefined4 *)func_0x00bf6100(iVar2,*puVar6,puVar6[1],puVar6[2],puVar6[6]);
            }
            FUN_00bbc580(puVar6,"engines\\e_capi.c",0x623);
            if (puVar12 != (undefined4 *)0x0) {
              pCVar5 = CertDuplicateCertificateContext(pCertContext);
              uVar7 = DAT_012b5f04;
              *puVar12 = pCVar5;
              func_0x00bde2d0(iVar3,uVar7,puVar12);
              if (iStack00000004 == 0) {
                iStack00000004 = func_0x00bd1790();
              }
              func_0x00bd18c0(iStack00000004,iVar3);
              iVar10 = iStack00000004;
              goto LAB_00bf75e3;
            }
          }
        }
        else {
          iVar11 = 0;
          iVar10 = func_0x00bd1830(uVar8);
          if (0 < iVar10) {
            do {
              uVar7 = func_0x00bd1a80(uVar8,iVar11);
              uVar4 = func_0x00bb6140(iVar3);
              iVar10 = func_0x00bde860(uVar7,uVar4);
              if (iVar10 == 0) goto LAB_00bf765f;
              iVar11 = iVar11 + 1;
              iVar10 = func_0x00bd1830(uVar8);
            } while (iVar11 < iVar10);
          }
        }
        FUN_00bde1d0(iVar3);
        iVar10 = iStack00000004;
      }
LAB_00bf75e3:
      iStack0000000c = iStack0000000c + 1;
      pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext);
      uVar7 = in_stack_0000001c;
    }
    CertCloseStore(hCertStore,0);
    if (iVar10 != 0) {
      iVar2 = (**(code **)(iVar2 + 0x28))(uVar7,in_stack_00000020,iVar10);
      iVar11 = 0;
      iVar3 = func_0x00bd1830(iVar10);
      if (0 < iVar3) {
        do {
          iVar3 = func_0x00bd1a80(iVar10,iVar11);
          if (iVar11 == iVar2) {
            *in_stack_00000028 = iVar3;
          }
          else {
            puVar6 = (undefined4 *)func_0x00bde210(iVar3,DAT_012b5f04);
            if (puVar6 != (undefined4 *)0x0) {
              CryptDestroyKey(puVar6[2]);
              CryptReleaseContext(puVar6[1],0);
              if ((PCCERT_CONTEXT)*puVar6 != (PCCERT_CONTEXT)0x0) {
                CertFreeCertificateContext((PCCERT_CONTEXT)*puVar6);
              }
              FUN_00bbc580(puVar6,"engines\\e_capi.c",0x659);
            }
            FUN_00bde1d0(iVar3);
            iVar10 = iStack00000004;
          }
          iVar11 = iVar11 + 1;
          iVar3 = func_0x00bd1830(iVar10);
        } while (iVar11 < iVar3);
      }
      FUN_00bd1630(iVar10);
      piVar1 = in_stack_00000028;
      if (*in_stack_00000028 != 0) {
        uVar7 = func_0x00bde210(*in_stack_00000028,DAT_012b5f04);
        uVar8 = func_0x00bf62e0(in_stack_0000001c,uVar7);
        uVar7 = DAT_012b5f04;
        *in_stack_0000002c = uVar8;
        func_0x00bde2d0(*piVar1,uVar7,0);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00bf78a0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00bb6300(param_1,DAT_012b5efc);
  if (puVar1 != (undefined4 *)0x0) {
    CryptDestroyKey(puVar1[2]);
    CryptReleaseContext(puVar1[1],0);
    if ((PCCERT_CONTEXT)*puVar1 != (PCCERT_CONTEXT)0x0) {
      CertFreeCertificateContext((PCCERT_CONTEXT)*puVar1);
    }
    FUN_00bbc580(puVar1,"engines\\e_capi.c",0x659);
  }
  func_0x00bb6540(param_1,DAT_012b5efc,0);
  return 1;
}



void FUN_00bf7910(void)

{
  BYTE *pBVar1;
  size_t _Size;
  int iVar2;
  void *_Dst;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  BYTE *pbData;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  BYTE *pBVar9;
  uint in_stack_00000014;
  size_t in_stack_0000001c;
  int in_stack_00000020;
  void *in_stack_00000024;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  
  func_0x00e87f70();
  uVar3 = in_stack_00000028;
  _Dst = in_stack_00000024;
  iVar2 = in_stack_00000020;
  _Size = in_stack_0000001c;
  in_stack_00000014 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((int)in_stack_0000001c < 1) {
LAB_00bf7ae7:
    FUN_008ab370();
    return;
  }
  uVar4 = func_0x00baf190(in_stack_00000028,DAT_012b5ef8);
  uVar4 = func_0x00bf8170(uVar4);
  func_0x00bf4f50(uVar4,"Called capi_rsa_priv_dec()\n");
  iVar5 = func_0x00bb6300(uVar3,DAT_012b5efc);
  if (iVar5 == 0) {
    func_0x00bf4fb0(0,0x66,"engines\\e_capi.c",0x3c3);
  }
  else {
    if (in_stack_0000002c != 1) {
      func_0x00bbc9d0(&stack0x00000008,10,&DAT_011a2390,in_stack_0000002c);
      func_0x00bf4fb0(0,0x7f,"engines\\e_capi.c",0x3d4);
      func_0x00ba6530(2,"padding=",&stack0x00000008);
      FUN_008ab370();
      return;
    }
    pbData = (BYTE *)FUN_00bbc4f0(_Size,"engines\\e_capi.c",0x3db);
    if (pbData != (BYTE *)0x0) {
      iVar8 = 0;
      pBVar9 = pbData + (_Size - 1);
      do {
        pBVar1 = (BYTE *)(iVar2 + iVar8);
        iVar8 = iVar8 + 1;
        *pBVar9 = *pBVar1;
        pBVar9 = pBVar9 + -1;
      } while (iVar8 < (int)_Size);
      BVar6 = CryptDecrypt(*(HCRYPTKEY *)(iVar5 + 8),0,1,0,pbData,(DWORD *)&stack0x00000000);
      if (BVar6 == 0) {
        func_0x00bf4fb0(0,0x6a,"engines\\e_capi.c",0x3e3);
        DVar7 = GetLastError();
        func_0x00bbc9d0(&stack0x00000008,10,&DAT_0105b6f4,DVar7);
        func_0x00ba6530(2,"Error code= 0x",&stack0x00000008);
        func_0x00401320(pbData,_Size);
        FUN_00bbc580(pbData,"engines\\e_capi.c",0x3e6);
        FUN_008ab370();
        return;
      }
      memcpy(_Dst,pbData,_Size);
      func_0x00401320(pbData,_Size);
      FUN_00bbc580(pbData,"engines\\e_capi.c",0x3ec);
      goto LAB_00bf7ae7;
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00bf7b00(void)

{
  if (DAT_013df108 == 0) {
    DAT_013df108 = func_0x00ba6860();
  }
  FUN_00bc4f50();
  func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\engines\\e_capi_err.c"
                  ,0x5c,"ERR_CAPI_error");
  func_0x00bc5160(DAT_013df108,0x74,0);
  func_0x00bc5050("engines\\e_capi.c",0x34d,0);
  return 0xffffffff;
}



void FUN_00bf7b50(HCRYPTHASH param_1,BYTE *param_2,uint *param_3)

{
  BYTE BVar1;
  BYTE *pbSignature;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ALG_ID Algid;
  BOOL BVar5;
  DWORD DVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  uint in_stack_0000001c;
  int in_stack_00000024;
  BYTE *in_stack_00000028;
  BYTE *in_stack_00000030;
  uint *in_stack_00000034;
  undefined4 in_stack_00000038;
  
  func_0x00e87f70();
  uVar2 = in_stack_00000038;
  pbSignature = in_stack_00000030;
  in_stack_0000001c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_2 = in_stack_00000028;
  param_3 = in_stack_00000034;
  uVar3 = func_0x00baf190(in_stack_00000038,DAT_012b5ef8);
  uVar3 = func_0x00bf8170(uVar3);
  func_0x00bf4f50(uVar3,"Called CAPI_rsa_sign()\n");
  iVar4 = func_0x00bb6300(uVar2,DAT_012b5efc);
  if (iVar4 == 0) {
    if (DAT_013df108 == 0) {
      DAT_013df108 = func_0x00ba6860();
    }
    FUN_00bc4f50();
    func_0x00bc5050("C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\openssl\\x86-windows-static-rel\\engines\\e_capi_err.c"
                    ,0x5c,"ERR_CAPI_error");
    func_0x00bc5160(DAT_013df108,0x66,0);
    func_0x00bc5050("engines\\e_capi.c",0x362,0);
    FUN_008ab370();
    return;
  }
  if (in_stack_00000024 < 0x2a1) {
    if (in_stack_00000024 == 0x2a0) {
      Algid = 0x800c;
    }
    else if (in_stack_00000024 == 4) {
      Algid = 0x8003;
    }
    else if (in_stack_00000024 == 0x40) {
      Algid = 0x8004;
    }
    else {
      if (in_stack_00000024 != 0x72) goto LAB_00bf7c61;
      Algid = 0x8008;
    }
  }
  else if (in_stack_00000024 == 0x2a1) {
    Algid = 0x800d;
  }
  else {
    if (in_stack_00000024 != 0x2a2) {
LAB_00bf7c61:
      func_0x00bbc9d0(&stack0x00000010,10,&DAT_0105b6a4,in_stack_00000024);
      func_0x00bf4fb0(0,0x7e,"engines\\e_capi.c",0x382);
      func_0x00ba6530(2,"NID=0x",&stack0x00000010);
      FUN_008ab370();
      return;
    }
    Algid = 0x800e;
  }
  BVar5 = CryptCreateHash(*(HCRYPTPROV *)(iVar4 + 4),Algid,0,0,&param_1);
  if (BVar5 != 0) {
    BVar5 = CryptSetHashParam(param_1,2,param_2,0);
    if (BVar5 == 0) {
      func_0x00bf4fb0(0,0x67,"engines\\e_capi.c",0x391);
      func_0x00bf5050();
    }
    else {
      uVar7 = func_0x00bb77a0(uVar2);
      BVar5 = CryptSignHashW(param_1,*(DWORD *)(iVar4 + 0xc),(LPCWSTR)0x0,0,pbSignature,
                             (DWORD *)&stack0x00000000);
      if (BVar5 == 0) {
        func_0x00bf4fb0(0,0x72,"engines\\e_capi.c",0x399);
        func_0x00bf5050();
      }
      else {
        uVar8 = 0;
        pBVar9 = pbSignature;
        if ((uVar7 & 0xfffffffe) != 0) {
          do {
            BVar1 = pbSignature[uVar8];
            pbSignature[uVar8] = pBVar9[uVar7 - 1];
            uVar8 = uVar8 + 1;
            (pBVar9 + -1)[uVar7] = BVar1;
            pBVar9 = pBVar9 + -1;
          } while (uVar8 < uVar7 >> 1);
        }
        *param_3 = uVar7;
      }
    }
    CryptDestroyHash(param_1);
    FUN_008ab370();
    return;
  }
  func_0x00bf4fb0(0,100,"engines\\e_capi.c",0x38a);
  DVar6 = GetLastError();
  func_0x00bbc9d0(&stack0x00000010,10,&DAT_0105b6f4,DVar6);
  func_0x00ba6530(2,"Error code= 0x",&stack0x00000010);
  FUN_008ab370();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bf83a0(void)

{
  DAT_01466740 = func_0x00bbb390();
  _DAT_013df120 = (uint)(DAT_01466740 != 0);
  return;
}



void FUN_00bf84a0(undefined4 *param_1)

{
  (*(code *)*param_1)();
  FUN_00bbc580(param_1,"crypto\\engine\\eng_lib.c",0xac);
  return;
}



undefined4 FUN_00bfa830(uint *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  uint uVar3;
  
  DVar2 = GetCurrentThreadId();
  param_1[8] = DVar2;
  uVar3 = (*(code *)param_1[2])(param_1[1]);
  EnterCriticalSection((LPCRITICAL_SECTION)param_1[6]);
  *param_1 = *param_1 | 1;
  param_1[3] = uVar3;
  puVar1 = (undefined4 *)param_1[7];
  EnterCriticalSection((LPCRITICAL_SECTION)*puVar1);
  if (puVar1[3] == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)*puVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[6]);
    return 0;
  }
  puVar1[4] = puVar1[4] + 1;
  puVar1[3] = puVar1[3] + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)*puVar1);
  ReleaseSemaphore((HANDLE)puVar1[1],1,(LPLONG)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1[6]);
  return 0;
}



void FUN_00bfb4c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((*(byte *)(param_1 + 5) & 4) != 0) {
      FUN_00bbc580(*param_1,"crypto\\asn1\\a_object.c",0x165);
      FUN_00bbc580(param_1[1],"crypto\\asn1\\a_object.c",0x166);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((*(byte *)(param_1 + 5) & 8) != 0) {
      FUN_00bbc580(param_1[4],"crypto\\asn1\\a_object.c",0x16b);
      param_1[4] = 0;
      param_1[3] = 0;
    }
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_00bbc580(param_1,"crypto\\asn1\\a_object.c",0x170);
    }
  }
  return;
}



void FUN_00bfc170(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x10) == 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x16f);
    }
    if ((uVar1 & 0x80) == 0) {
      FUN_00bbc580(param_1,"crypto\\asn1\\asn1_lib.c",0x171);
    }
  }
  return;
}



undefined * FUN_00bfc880(void)

{
  return &DAT_0105ce50;
}



void thunk_FUN_00bfc170(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 & 0x10) == 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 8),"crypto\\asn1\\asn1_lib.c",0x16f);
    }
    if ((uVar1 & 0x80) == 0) {
      FUN_00bbc580(param_1,"crypto\\asn1\\asn1_lib.c",0x171);
    }
  }
  return;
}



undefined * FUN_00bfc8a0(void)

{
  return &DAT_0105cce4;
}



undefined * FUN_00bfc8c0(void)

{
  return &DAT_0105ccc8;
}



undefined * FUN_00bfc8d0(void)

{
  return &DAT_0105cf14;
}



undefined * FUN_00bfc8e0(void)

{
  return &DAT_0105cda8;
}



undefined * FUN_00bfc900(void)

{
  return &DAT_0105cd54;
}



undefined * FUN_00bfc920(void)

{
  return &DAT_0105ccac;
}



undefined * FUN_00bfc940(void)

{
  return &DAT_0105ce18;
}



void FUN_00bfc950(void)

{
  func_0x00c08650(&DAT_0105ce18);
  return;
}



undefined * FUN_00bfc960(void)

{
  return &DAT_0105ce34;
}



undefined * FUN_00bfc970(void)

{
  return &DAT_0105cf30;
}



undefined * FUN_00bfc980(void)

{
  return &DAT_0105cc90;
}



void FUN_00bfc990(void)

{
  func_0x00bfc2f0(4);
  return;
}



undefined * FUN_00bfc9a0(void)

{
  return &DAT_0105cd1c;
}



undefined * FUN_00bfc9b0(void)

{
  return &DAT_0105ce88;
}



undefined * FUN_00bfc9c0(void)

{
  return &DAT_0105ce6c;
}



void FUN_00bfc9d0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_0105ce50);
  return;
}



undefined * FUN_00bfca00(void)

{
  return &DAT_0105cd00;
}



undefined * FUN_00bfca20(void)

{
  return &DAT_0105cec0;
}



undefined * FUN_00bfca30(void)

{
  return &DAT_0105cea4;
}



undefined4 FUN_00bfd770(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = param_4;
  param_1 = 0xffffffff;
  if (*(int *)(param_4 + 0x30) == 0) {
    return 1;
  }
  iVar2 = func_0x00bc09d0(param_3,"potential");
  if (iVar2 != 0) {
    iVar2 = func_0x00bbfcd0(iVar2,&stack0x00000000);
    if (iVar2 != 0) {
      iVar2 = func_0x00bc09d0(param_3,"iteration");
      if (iVar2 != 0) {
        iVar2 = func_0x00bbfcd0(iVar2,&param_1);
        if (iVar2 != 0) {
          **(undefined4 **)(iVar1 + 0x34) = 0xffffffff;
          *(undefined4 *)(*(int *)(iVar1 + 0x34) + 4) = param_1;
          uVar3 = (**(code **)(iVar1 + 0x30))(iVar1);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



void FUN_00bfd820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00bb6b70(param_3);
  **(undefined4 **)(iVar1 + 0x34) = param_1;
  *(undefined4 *)(*(int *)(iVar1 + 0x34) + 4) = param_2;
  (**(code **)(iVar1 + 0x30))(iVar1);
  return;
}



void FUN_00bfdaa0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = param_1 + 4;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(param_1[2],"crypto\\evp\\evp_rand.c",0x49);
      FUN_00bc7c90(*param_1);
      FUN_00bbc580(param_1,"crypto\\evp\\evp_rand.c",0x4c);
    }
  }
  return;
}



int * FUN_00bfdd50(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iStack00000004;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  iVar4 = in_stack_00000014;
  func_0x00e87f70();
  iVar6 = 0;
  piVar5 = *(int **)(in_stack_00000014 + 8);
  in_stack_00000014 = 0;
  iVar7 = 0;
  iStack00000004 = 0;
  piVar2 = (int *)FUN_00bbc830(100,"crypto\\evp\\evp_rand.c",0x51);
  if (piVar2 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\evp_rand.c",0x81,"evp_rand_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
    return (int *)0x0;
  }
  piVar2[4] = 1;
  piVar2[1] = in_stack_00000010;
  iVar3 = func_0x00bc9200(iVar4);
  piVar1 = piVar2 + 2;
  *piVar1 = iVar3;
  if (iVar3 == 0) {
    piVar5 = piVar2 + 4;
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      FUN_00bbc580(*piVar1,"crypto\\evp\\evp_rand.c",0x49);
      FUN_00bc7c90(*piVar2);
      FUN_00bbc580(piVar2,"crypto\\evp\\evp_rand.c",0x4c);
      return (int *)0x0;
    }
  }
  else {
    piVar2[3] = *(int *)(iVar4 + 0xc);
    piVar2[5] = (int)piVar5;
    iVar4 = *piVar5;
    if (iVar4 != 0) {
      piVar5 = piVar5 + 1;
      do {
        switch(iVar4) {
        case 1:
          if (piVar2[6] == 0) {
            iVar6 = iVar6 + 1;
            piVar2[6] = *piVar5;
          }
          break;
        case 2:
          if (piVar2[7] == 0) {
            iVar6 = iVar6 + 1;
            piVar2[7] = *piVar5;
          }
          break;
        case 3:
          if (piVar2[8] == 0) {
            in_stack_00000014 = in_stack_00000014 + 1;
            piVar2[8] = *piVar5;
          }
          break;
        case 4:
          if (piVar2[9] == 0) {
            in_stack_00000014 = in_stack_00000014 + 1;
            piVar2[9] = *piVar5;
          }
          break;
        case 5:
          if (piVar2[10] == 0) {
            in_stack_00000014 = in_stack_00000014 + 1;
            piVar2[10] = *piVar5;
          }
          break;
        case 6:
          if (piVar2[0xb] == 0) {
            piVar2[0xb] = *piVar5;
          }
          break;
        case 7:
          if (piVar2[0xc] == 0) {
            piVar2[0xc] = *piVar5;
          }
          break;
        case 8:
          if (piVar2[0xd] == 0) {
            iStack00000004 = iStack00000004 + 1;
            piVar2[0xd] = *piVar5;
          }
          break;
        case 9:
          if (piVar2[0xe] == 0) {
            iVar7 = iVar7 + 1;
            piVar2[0xe] = *piVar5;
          }
          break;
        case 10:
          if (piVar2[0xf] == 0) {
            iVar7 = iVar7 + 1;
            piVar2[0xf] = *piVar5;
          }
          break;
        case 0xb:
          if (piVar2[0x10] == 0) {
            piVar2[0x10] = *piVar5;
          }
          break;
        case 0xc:
          if (piVar2[0x11] == 0) {
            piVar2[0x11] = *piVar5;
          }
          break;
        case 0xd:
          if (piVar2[0x12] == 0) {
            piVar2[0x12] = *piVar5;
          }
          break;
        case 0xe:
          if (piVar2[0x13] == 0) {
            piVar2[0x13] = *piVar5;
          }
          break;
        case 0xf:
          if (piVar2[0x14] == 0) {
            iVar6 = iVar6 + 1;
            piVar2[0x14] = *piVar5;
          }
          break;
        case 0x10:
          if (piVar2[0x15] == 0) {
            piVar2[0x15] = *piVar5;
          }
          break;
        case 0x11:
          if (piVar2[0x16] == 0) {
            piVar2[0x16] = *piVar5;
          }
          break;
        case 0x12:
          if (piVar2[0x17] == 0) {
            piVar2[0x17] = *piVar5;
          }
          break;
        case 0x13:
          if (piVar2[0x18] == 0) {
            piVar2[0x18] = *piVar5;
          }
        }
        iVar4 = piVar5[1];
        piVar5 = piVar5 + 2;
      } while (iVar4 != 0);
      if ((((in_stack_00000014 == 3) && (iVar6 == 3)) &&
          ((iStack00000004 == 0 || (iStack00000004 == 1)))) && ((iVar7 == 0 || (iVar7 == 2)))) {
        if ((in_stack_00000018 != 0) && (iVar4 = func_0x00bc8620(in_stack_00000018), iVar4 == 0)) {
          FUN_00bfdaa0(piVar2);
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\evp_rand.c",0x115,"evp_rand_from_algorithm");
          func_0x00bc5160(6,0xc0103,0);
          return (int *)0x0;
        }
        *piVar2 = in_stack_00000018;
        return piVar2;
      }
    }
    piVar5 = piVar2 + 4;
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      FUN_00bbc580(*piVar1,"crypto\\evp\\evp_rand.c",0x49);
      FUN_00bc7c90(*piVar2);
      FUN_00bbc580(piVar2,"crypto\\evp\\evp_rand.c",0x4c);
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\evp_rand.c",0x10f,"evp_rand_from_algorithm");
    func_0x00bc5160(6,0xc1,0);
  }
  return (int *)0x0;
}



undefined8 __fastcall FUN_00bfe3e0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 0x10);
    LOCK();
    param_2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return CONCAT44(param_2,1);
}



undefined4 FUN_00bfe400(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc5560(0);
  if ((iVar1 != 0) && (0 < param_2)) {
    uVar2 = func_0x00bfdc80(iVar1,0,0,0,param_1,param_2);
    return uVar2;
  }
  return 0;
}



bool FUN_00bfe430(void)

{
  int iVar1;
  
  iVar1 = func_0x00bc5560(0);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = func_0x00bfdb40(iVar1);
  return iVar1 == 1;
}



void FUN_00bfe450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc5710(0);
  if (iVar1 == 0) {
    return;
  }
  func_0x00bfdae0(iVar1,param_1,param_2,0,0,0,0);
  return;
}



undefined4 FUN_00bfeb30(void)

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



int FUN_00bfebb0(void)

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



undefined4 FUN_00bfee30(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

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



int FUN_00bfeeb0(int param_1,undefined4 param_2,undefined4 param_3)

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



void FUN_00bfefd0(undefined4 param_1,char param_2)

{
  func_0x00bd12b0((int)param_2);
  return;
}



int FUN_00bfefe0(undefined4 param_1,char param_2)

{
  return param_2 + -0x30;
}



void FUN_00bff070(void)

{
  func_0x00c01160(&DAT_013df130);
  return;
}



uint FUN_00c005f0(undefined4 *param_1,undefined4 *param_2)

{
  if (*(int *)*param_1 < *(int *)*param_2) {
    return 0xffffffff;
  }
  return (uint)(*(int *)*param_2 < *(int *)*param_1);
}



void FUN_00c00610(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\property\\property_parse.c",0x12e);
  return;
}



void FUN_00c00ff0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_013df134 != 0) {
    do {
      iVar2 = DAT_013df134;
      iVar4 = func_0x00bbb470(DAT_01466740);
      iVar3 = DAT_013df134;
      iVar1 = DAT_013df134;
      if (iVar4 != 0) {
        for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 100)) {
          if (iVar1 == iVar2) {
            if (*(int *)(iVar2 + 100) != 0) {
              *(undefined4 *)(*(int *)(iVar2 + 100) + 0x60) = *(undefined4 *)(iVar2 + 0x60);
            }
            if (*(int *)(iVar2 + 0x60) != 0) {
              *(undefined4 *)(*(int *)(iVar2 + 0x60) + 100) = *(undefined4 *)(iVar2 + 100);
            }
            if (iVar3 == iVar2) {
              DAT_013df134 = *(int *)(iVar2 + 100);
            }
            if (DAT_013df138 == iVar2) {
              DAT_013df138 = *(int *)(iVar2 + 0x60);
            }
            func_0x00bf8500(iVar2,0);
            goto LAB_00c01076;
          }
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\engine\\eng_list.c",0x84,"engine_list_remove");
        func_0x00bc5160(0x26,0x69,0);
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\engine\\eng_list.c",0x173,"ENGINE_remove");
        func_0x00bc5160(0x26,0x6e,0);
LAB_00c01076:
        func_0x00bbb440(DAT_01466740);
      }
    } while (DAT_013df134 != 0);
  }
  return;
}



void FUN_00c013f0(int param_1)

{
  if (param_1 != 0) {
    FUN_00bd1630(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 8) != 0) {
      func_0x00bc6980(*(int *)(param_1 + 8),0);
    }
    FUN_00bbc580(param_1,"crypto\\engine\\eng_table.c",0xb8);
  }
  return;
}



void FUN_00c01430(undefined4 *param_1,undefined4 *param_2)

{
  (*(code *)*param_2)(*param_1,param_1[1],param_1[2],param_2[1]);
  return;
}



void FUN_00c01580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00baa730(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return;
}



undefined4 FUN_00c015a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      uVar2 = func_0x00baa8e0(param_1[1]);
      FUN_00bbc580(param_1,"crypto\\bio\\ossl_core_bio.c",0x32);
      return uVar2;
    }
  }
  return 1;
}



void FUN_00c015e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00baaaa0(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}



undefined4 * FUN_00c01600(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0x00bac0a0(param_1,param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc4f0(8,"crypto\\bio\\ossl_core_bio.c",0x19);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 1;
      puVar2[1] = iVar1;
      return puVar2;
    }
    FUN_00bbc580(0,"crypto\\bio\\ossl_core_bio.c",0x1c);
    func_0x00baa8e0(iVar1);
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_00c016e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_0x00c252d0(param_1,param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00bbc4f0(8,"crypto\\bio\\ossl_core_bio.c",0x19);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 1;
      puVar2[1] = iVar1;
      return puVar2;
    }
    FUN_00bbc580(0,"crypto\\bio\\ossl_core_bio.c",0x1c);
    func_0x00baa8e0(iVar1);
  }
  return (undefined4 *)0x0;
}



void FUN_00c01740(int param_1,undefined4 param_2)

{
  func_0x00bab050(*(undefined4 *)(param_1 + 4),param_2);
  return;
}



void FUN_00c01760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00bab260(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return;
}



undefined8 FUN_00c01780(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  return CONCAT44(iVar1,1);
}



void FUN_00c017a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00bbca40(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}



void FUN_00c017c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00bab710(*(undefined4 *)(param_1 + 4),param_2,param_3,param_4);
  return;
}



void FUN_00c017e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00bef6e0(param_1,0x16);
  if (param_2 != (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      *param_2 = *puVar1;
      return;
    }
    *param_2 = 0;
  }
  return;
}



undefined4 thunk_FUN_00bc7da0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x6c);
  }
  return 0;
}



undefined4 thunk_FUN_00baaa40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



undefined4 thunk_FUN_00bc77d0(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  return 0;
}



void FUN_00c01d30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = param_1 + 5;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(param_1[2],"crypto\\encode_decode\\decoder_meth.c",0x3c);
      func_0x00bff5a0(param_1[4]);
      FUN_00bc7c90(*param_1);
      FUN_00bbc580(param_1,"crypto\\encode_decode\\decoder_meth.c",0x40);
    }
  }
  return;
}



undefined8 FUN_00c01e40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x14);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return CONCAT44(iVar1,1);
}



int FUN_00c01e60(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bc7fa0(param_2);
  uVar1 = func_0x00c07780(uVar1);
  iVar2 = func_0x00c07330(uVar1,0,*param_1,0x3a);
  iVar3 = 0;
  if ((iVar2 != 0) && (iVar3 = func_0x00c02240(iVar2,param_1,param_2), iVar3 != 0)) {
    return iVar3;
  }
  *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 1;
  return iVar3;
}



void FUN_00c01eb0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  (*(code *)*param_3)(param_2,param_3[1]);
  return;
}



undefined4 FUN_00c01ed0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  func_0x00e87f70();
  iVar3 = param_4[1];
  if (iVar3 == 0) {
    if (param_4[2] == 0) {
      return 0;
    }
    iVar3 = func_0x00c07780(*param_4);
    pcVar2 = (char *)param_4[2];
    iVar4 = func_0x008ab0c6(pcVar2,0x3a);
    if (iVar4 == 0) {
      pcVar5 = pcVar2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar5 - (int)(pcVar2 + 1);
    }
    else {
      iVar4 = iVar4 - (int)pcVar2;
    }
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = func_0x00c076d0(iVar3,pcVar2,iVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((param_2 == 0) && (param_2 = func_0x00bef6e0(*param_4,0xb), param_2 == 0)) {
    return 0;
  }
  iVar3 = func_0x00c06730(param_2,iVar3,param_4[3],param_3,&stack0x00000000);
  if (iVar3 == 0) {
    return 0;
  }
  return 0;
}



void FUN_00c01f80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[4] == 0) {
    uVar1 = func_0x00c069f0(*param_1);
    param_1[4] = uVar1;
  }
  return;
}



undefined4
FUN_00c025a0(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  if (param_4 != (char *)0x0) {
    iVar4 = func_0x008ab0c6(param_4,0x3a);
    if (iVar4 == 0) {
      pcVar5 = param_4;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar5 - (int)(param_4 + 1);
    }
    else {
      iVar4 = iVar4 - (int)param_4;
    }
  }
  iVar2 = func_0x00c07780(*param_6);
  if ((iVar2 != 0) && (iVar4 = func_0x00c076d0(iVar2,param_4,iVar4), iVar4 != 0)) {
    if ((param_1 == 0) && (param_1 = func_0x00bef6e0(*param_6,0xb), param_1 == 0)) {
      return 0;
    }
    uVar3 = func_0x00c05fa0(param_1,param_3,iVar4,param_5,param_2,FUN_00c01e40,FUN_00c01d30);
    return uVar3;
  }
  return 0;
}



void FUN_00c02640(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,0xb);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c05f80(param_1);
  return;
}



void FUN_00c02670(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,0xb);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c06b00(param_1);
  return;
}



void FUN_00c02c60(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  func_0x00e87f70();
  uVar1 = *(undefined4 *)(param_4 + 0x1c);
  if (*(char *)(param_4 + 0x18) == '\0') {
    uVar2 = func_0x00c01dc0(param_3);
    uVar2 = thunk_FUN_00bc77d0(uVar2);
    if ((*(code **)(param_3 + 0x30) == (code *)0x0) ||
       (iVar3 = (**(code **)(param_3 + 0x30))(uVar2,*(undefined4 *)(*(int *)(param_4 + 4) + 8)),
       iVar3 != 0)) {
      iVar3 = func_0x00bd1830(uVar1);
      iVar6 = 0;
      if (0 < iVar3) {
        do {
          iVar4 = func_0x00bd1a80(uVar1,iVar6);
          if (*(int *)(iVar4 + 4) == *(int *)(param_3 + 4)) {
            iVar4 = (**(code **)(param_3 + 0x18))(uVar2);
            if (iVar4 == 0) {
              *(undefined1 *)(param_4 + 0x18) = 1;
            }
            else {
              iVar5 = func_0x00c26f80(param_3,iVar4);
              if (iVar5 == 0) {
                (**(code **)(param_3 + 0x1c))(iVar4);
                *(undefined1 *)(param_4 + 0x18) = 1;
              }
              else {
                iVar4 = func_0x00c26df0(*(undefined4 *)(param_4 + 4),iVar5);
                if (iVar4 == 0) {
                  FUN_00c26f30(iVar5);
                  *(undefined1 *)(param_4 + 0x18) = 1;
                }
                else {
                  *(int *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) + 1;
                }
              }
            }
          }
        } while ((*(char *)(param_4 + 0x18) == '\0') && (iVar6 = iVar6 + 1, iVar6 < iVar3));
      }
    }
  }
  return;
}



void FUN_00c02d70(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_2[2] == 0) goto LAB_00c02e3c;
  if (*(char *)((int)param_2 + 0x19) == '\0') {
    uVar2 = func_0x00c07780(*param_2);
    iVar3 = func_0x00c075f0(uVar2,param_2[2]);
    param_2[3] = iVar3;
    if (iVar3 != 0) {
      pbVar7 = (byte *)param_2[2];
      pcVar6 = "id-ecPublicKey";
      pbVar4 = pbVar7;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_00c02dd8:
          uVar5 = -(uint)bVar8 | 1;
          goto LAB_00c02ddd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < ((byte *)pcVar6)[1];
        if (bVar1 != ((byte *)pcVar6)[1]) goto LAB_00c02dd8;
        pbVar4 = pbVar4 + 2;
        pcVar6 = (char *)((byte *)pcVar6 + 2);
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_00c02ddd:
      if (uVar5 != 0) {
        pbVar4 = &DAT_0105da7c;
        do {
          bVar1 = *pbVar7;
          bVar8 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00c02e07:
            uVar5 = -(uint)bVar8 | 1;
            goto LAB_00c02e0c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00c02e07;
          pbVar7 = pbVar7 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_00c02e0c:
        if (uVar5 != 0) goto LAB_00c02e24;
      }
      uVar2 = func_0x00c075f0(uVar2,&DAT_01055670);
      param_2[4] = uVar2;
    }
LAB_00c02e24:
    *(undefined1 *)((int)param_2 + 0x19) = 1;
  }
  if (param_2[3] == 0) {
    return;
  }
  if ((*(int *)(param_1 + 4) != param_2[3]) && (*(int *)(param_1 + 4) != param_2[4])) {
    return;
  }
LAB_00c02e3c:
  iVar3 = FUN_00c0de90(param_1);
  if ((iVar3 != 0) && (iVar3 = func_0x00bd18c0(param_2[7],param_1), iVar3 < 1)) {
    FUN_00c0dde0(param_1);
    *(undefined1 *)(param_2 + 6) = 1;
  }
  return;
}



uint FUN_00c02e70(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1[3] != param_2[3]) {
    return (uint)(param_2[3] <= param_1[3]) * 2 - 1;
  }
  iVar2 = param_2[2];
  if (param_1[2] == 0) {
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar3 = func_0x00bbbfe0(param_1[2],iVar2);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  iVar2 = *param_2;
  if (*param_1 == 0) {
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar3 = func_0x00bbbfe0(*param_1,iVar2);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  iVar2 = param_2[1];
  if (param_1[1] == 0) {
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    uVar3 = func_0x00bbbfe0(param_1[1],iVar2);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  pbVar5 = (byte *)param_1[4];
  pbVar4 = (byte *)param_2[4];
  if (pbVar5 == (byte *)0x0) {
    return (uint)(pbVar4 != (byte *)0x0);
  }
  if (pbVar4 == (byte *)0x0) {
    return 0xffffffff;
  }
  while( true ) {
    bVar1 = *pbVar5;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar5[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar5 = pbVar5 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return -(uint)bVar6 | 1;
}



void FUN_00c02f70(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00bbc580(*param_1,"crypto\\encode_decode\\decoder_pkey.c",0x260);
    FUN_00bbc580(param_1[1],"crypto\\encode_decode\\decoder_pkey.c",0x261);
    FUN_00bbc580(param_1[2],"crypto\\encode_decode\\decoder_pkey.c",0x262);
    FUN_00bbc580(param_1[4],"crypto\\encode_decode\\decoder_pkey.c",0x263);
    func_0x00c01b70(param_1[5]);
    FUN_00bbc580(param_1,"crypto\\encode_decode\\decoder_pkey.c",0x265);
  }
  return;
}



uint FUN_00c02fe0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[4] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = func_0x00bbe720(param_1[4]);
  }
  if (param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = func_0x00bbe720(param_1[1]);
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar2 = func_0x00bbe720(iVar2);
  }
  iVar2 = (iVar3 * 0x17 + iVar1) * 0x17 + iVar2;
  if (param_1[2] == 0) {
    return (iVar2 + 0x327f7) * 0x17 ^ param_1[3];
  }
  iVar3 = func_0x00bbe720(param_1[2]);
  return (iVar2 + 0x327f7) * 0x17 + iVar3 ^ param_1[3];
}



void FUN_00c03060(int param_1)

{
  if (param_1 != 0) {
    func_0x00bd1860(*(undefined4 *)(param_1 + 0xc),FUN_00c0dde0);
    FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\encode_decode\\decoder_pkey.c",200);
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x10),"crypto\\encode_decode\\decoder_pkey.c",0xc9);
    FUN_00bbc580(param_1,"crypto\\encode_decode\\decoder_pkey.c",0xca);
  }
  return;
}



bool FUN_00c030b0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 *in_stack_0000002c;
  
  func_0x00e87f70();
  puVar2 = in_stack_0000002c;
  uVar1 = in_stack_00000024;
  iVar3 = func_0x00bc36d0(in_stack_00000024);
  uVar4 = func_0x00bc3c60(uVar1);
  iVar5 = func_0x00c01dc0(iVar3);
  uVar1 = in_stack_00000028;
  iVar6 = func_0x00bc09d0(in_stack_00000028,"data-type");
  if (iVar6 != 0) {
    in_stack_0000002c = (undefined4 *)0x0;
    iVar6 = func_0x00bc0850(iVar6,&stack0x0000002c,0);
    if (iVar6 == 0) {
      return false;
    }
    FUN_00bbc580(puVar2[4],"crypto\\encode_decode\\decoder_pkey.c",99);
    puVar2[4] = in_stack_0000002c;
  }
  iVar6 = func_0x00bc09d0(uVar1,"reference");
  if ((iVar6 == 0) || (*(int *)(iVar6 + 4) != 5)) {
    return false;
  }
  uVar1 = *(undefined4 *)(iVar6 + 8);
  in_stack_0000002c = *(undefined4 **)(iVar6 + 0xc);
  iVar6 = func_0x00bd1830(puVar2[3]);
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      iVar7 = func_0x00bd1a80(puVar2[3],iVar10);
      iVar8 = FUN_00baaa40(iVar7);
      if (((iVar8 == iVar5) && (iVar9 = func_0x00c0e050(iVar7), iVar9 != 0)) &&
         (iVar9 = func_0x00c0de30(iVar7,puVar2[4]), iVar9 != 0)) {
        if (iVar10 < iVar6) {
          iVar6 = FUN_00c0de90(iVar7);
          if (iVar6 == 0) {
            return false;
          }
          if (iVar7 == 0) goto LAB_00c03284;
          goto LAB_00c031d9;
        }
        break;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6);
  }
  iVar7 = func_0x00c0ddb0(*puVar2,puVar2[4],puVar2[1]);
  if (iVar7 != 0) {
    iVar8 = FUN_00baaa40(iVar7);
LAB_00c031d9:
    iVar6 = 0;
    if (iVar8 == iVar5) {
      iVar3 = func_0x00c0e090(iVar7,uVar1,in_stack_0000002c);
    }
    else {
      in_stack_0000001c = puVar2[2];
      in_stack_00000018 = 0;
      if (in_stack_0000001c == 0) {
        in_stack_0000001c = 0x87;
      }
      in_stack_00000014 = iVar7;
      (**(code **)(iVar3 + 0x38))(uVar4,uVar1,in_stack_0000002c,FUN_00c16010,&stack0x00000014);
      iVar3 = in_stack_00000018;
      in_stack_00000018 = 0;
    }
    if ((iVar3 != 0) && (iVar6 = func_0x00c15e30(iVar7,iVar3), iVar6 == 0)) {
      func_0x00c0df30(iVar7,iVar3);
    }
    *(int *)puVar2[5] = iVar6;
    FUN_00c0dde0(iVar7);
  }
LAB_00c03284:
  return *(int *)puVar2[5] != 0;
}



uint FUN_00c032a0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c0de90(param_1);
  return -(uint)(iVar1 != 0) & param_1;
}



void FUN_00c03800(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = param_1 + 5;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(param_1[2],"crypto\\encode_decode\\encoder_meth.c",0x3c);
      func_0x00bff5a0(param_1[4]);
      FUN_00bc7c90(*param_1);
      FUN_00bbc580(param_1,"crypto\\encode_decode\\encoder_meth.c",0x40);
    }
  }
  return;
}



int FUN_00c038d0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bc7fa0(param_2);
  uVar1 = func_0x00c07780(uVar1);
  iVar2 = func_0x00c07330(uVar1,0,*param_1,0x3a);
  iVar3 = 0;
  if ((iVar2 != 0) && (iVar3 = func_0x00c03920(iVar2,param_1,param_2), iVar3 != 0)) {
    return iVar3;
  }
  *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 1;
  return iVar3;
}



undefined4 FUN_00c03c00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  func_0x00e87f70();
  iVar3 = param_4[1];
  if (iVar3 == 0) {
    if (param_4[2] == 0) {
      return 0;
    }
    iVar3 = func_0x00c07780(*param_4);
    pcVar5 = (char *)param_4[2];
    iVar4 = func_0x008ab0c6(pcVar5,0x3a);
    if (iVar4 == 0) {
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      iVar4 = (int)pcVar5 - (int)pcVar1;
    }
    else {
      iVar4 = iVar4 - (int)pcVar5;
    }
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = func_0x00c076d0(iVar3,param_4[2],iVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((param_2 == 0) && (param_2 = func_0x00bef6e0(*param_4,10), param_2 == 0)) {
    return 0;
  }
  iVar3 = func_0x00c06730(param_2,iVar3,param_4[3],param_3,&stack0x00000000);
  if (iVar3 == 0) {
    return 0;
  }
  return 0;
}



undefined4
FUN_00c03f60(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  if (param_4 != (char *)0x0) {
    iVar4 = func_0x008ab0c6(param_4,0x3a);
    if (iVar4 == 0) {
      pcVar5 = param_4;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar5 - (int)(param_4 + 1);
    }
    else {
      iVar4 = iVar4 - (int)param_4;
    }
  }
  iVar2 = func_0x00c07780(*param_6);
  if ((iVar2 != 0) && (iVar4 = func_0x00c076d0(iVar2,param_4,iVar4), iVar4 != 0)) {
    if ((param_1 == 0) && (param_1 = func_0x00bef6e0(*param_6,10), param_1 == 0)) {
      return 0;
    }
    uVar3 = func_0x00c05fa0(param_1,param_3,iVar4,param_5,param_2,FUN_00c01e40,FUN_00c03800);
    return uVar3;
  }
  return 0;
}



void FUN_00c04000(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,10);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c05f80(param_1);
  return;
}



void FUN_00c04030(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,10);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c06b00(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00c04290(void)

{
  DAT_013df150 = func_0x00bbb390();
  _DAT_013df158 = (uint)(DAT_013df150 != 0);
  return;
}



void FUN_00c043f0(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\objects\\obj_xref.c",0xd3);
  return;
}



int FUN_00c04410(undefined4 *param_1,undefined4 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



int FUN_00c04430(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_1 + 4) - iVar1;
  if ((iVar2 == 0) || (iVar1 == 0)) {
    iVar2 = *(int *)(*param_1 + 8) - *(int *)(*param_2 + 8);
  }
  return iVar2;
}



void FUN_00c044b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(param_1 + 0x40);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1 && -1 < iVar2 + -1) {
      return;
    }
    FUN_00bc7c90(*(undefined4 *)(param_1 + 0x30));
  }
  FUN_00bbc580(param_1,"crypto\\store\\store_meth.c",0x27);
  return;
}



int FUN_00c04530(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = func_0x00bc7fa0(param_2);
  uVar1 = func_0x00c07780(uVar1);
  iVar2 = func_0x00c072d0(uVar1,0,*param_1);
  iVar3 = 0;
  if ((iVar2 != 0) && (iVar3 = func_0x00c04840(iVar2,param_1,param_2), iVar3 != 0)) {
    return iVar3;
  }
  *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 1;
  return iVar3;
}



undefined4 FUN_00c04580(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  func_0x00e87f70();
  iVar2 = param_4[1];
  if (iVar2 == 0) {
    uVar1 = func_0x00c07780(*param_4);
    iVar2 = func_0x00c075f0(uVar1,param_4[2]);
  }
  if ((param_2 == 0) && (param_2 = func_0x00bef6e0(*param_4,0xf), param_2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00c06730(param_2,iVar2,param_4[3],param_3,&stack0x00000000);
  if (iVar2 == 0) {
    return 0;
  }
  return 0;
}



undefined4
FUN_00c04a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00c07780(*param_6);
  if ((iVar1 == 0) || (iVar1 = func_0x00c075f0(iVar1,param_4), iVar1 == 0)) {
    return 0;
  }
  if ((param_1 == 0) && (param_1 = func_0x00bef6e0(*param_6,0xf), param_1 == 0)) {
    return 0;
  }
  uVar2 = func_0x00c05fa0(param_1,param_3,iVar1,param_5,param_2,FUN_00c04b30,FUN_00c044b0);
  return uVar2;
}



void FUN_00c04ad0(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,0xf);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c05f80(param_1);
  return;
}



void FUN_00c04b00(int param_1,undefined4 *param_2)

{
  if (param_1 == 0) {
    param_1 = func_0x00bef6e0(*param_2,0xf);
    if (param_1 == 0) {
      return;
    }
  }
  func_0x00c06b00(param_1);
  return;
}



undefined8 __fastcall FUN_00c04b30(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (*(int *)(param_3 + 0x30) != 0) {
    piVar1 = (int *)(param_3 + 0x40);
    LOCK();
    param_2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return CONCAT44(param_2,1);
}



undefined4 FUN_00c054a0(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = (code *)0x0;
  iVar2 = *param_2;
  if (iVar2 != 0) {
    do {
      if (iVar2 == 4) {
        pcVar3 = (code *)param_2[1];
      }
      iVar2 = param_2[2];
      param_2 = param_2 + 2;
    } while (iVar2 != 0);
    if (pcVar3 != (code *)0x0) {
      uVar1 = (*pcVar3)(param_1);
      iVar2 = func_0x00bef6e0(uVar1,0x12);
      if (iVar2 != 0) {
        uVar1 = (**(code **)(iVar2 + 0x1c))(*(undefined4 *)(iVar2 + 4));
        *param_4 = uVar1;
        uVar1 = (**(code **)(iVar2 + 0x20))(*(undefined4 *)(iVar2 + 4));
        *param_3 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00c05760(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = func_0x00bef6e0(param_2,0x12);
  if (iVar1 != 0) {
    iVar2 = func_0x00bbb470(*(undefined4 *)(iVar1 + 8));
    if (iVar2 != 0) {
      uVar3 = (**(code **)(iVar1 + 0x18))(param_1);
      *(undefined4 *)(iVar1 + 4) = param_1;
      iVar2 = func_0x00bc7b90(param_2,uVar3,1);
      if (iVar2 == 0) {
        iVar2 = func_0x00bc7fb0(param_2,uVar3,FUN_00c054a0,0,1);
        if (iVar2 != 0) {
          iVar4 = func_0x00bc74a0(iVar2,0,0);
          if (iVar4 == 0) {
            FUN_00bc7c90(iVar2);
            func_0x00bbb440(*(undefined4 *)(iVar1 + 8));
            return 0;
          }
          iVar4 = func_0x00bc8240(iVar2,param_1);
          if (iVar4 != 0) {
            iVar4 = func_0x00bc75b0(iVar2,0,0);
            if (iVar4 != 0) {
              func_0x00bbb440(*(undefined4 *)(iVar1 + 8));
              return 1;
            }
          }
          func_0x00bc77e0(iVar2,0);
          FUN_00bc7c90(iVar2);
        }
      }
      else {
        FUN_00bc7c90(iVar2);
        iVar2 = func_0x00bc74a0(iVar2,0,1);
        if (iVar2 != 0) {
          func_0x00bbb440(*(undefined4 *)(iVar1 + 8));
          return 1;
        }
      }
      func_0x00bbb440(*(undefined4 *)(iVar1 + 8));
      return 0;
    }
  }
  return 0;
}



void FUN_00c05890(undefined4 param_1,undefined4 param_2)

{
  func_0x00bc9730(param_2,param_1,0,1);
  return;
}



bool FUN_00c058b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x00bef6e0(param_2,0x12);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(iVar1 + 0x18))(param_1);
    iVar1 = func_0x00bc7b90(param_2,uVar2,1);
    if (iVar1 != 0) {
      FUN_00bc7c90(iVar1);
      iVar3 = func_0x00bc7f90(iVar1);
      if (iVar3 != 0) {
        iVar1 = func_0x00bc77e0(iVar1,1);
        return iVar1 != 0;
      }
      return true;
    }
  }
  return false;
}



void FUN_00c05930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)func_0x00bef6e0(param_1,0xc);
  if (param_2 != (undefined4 *)0x0) {
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    *param_2 = uVar2;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      *param_3 = puVar1[1];
      return;
    }
    *param_3 = 0;
  }
  return;
}



void FUN_00c05c10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  if (param_3 != 0) {
    func_0x00bd1860(*(undefined4 *)(param_3 + 4),FUN_00c05e30);
    func_0x00bbe160(*(undefined4 *)(param_3 + 8),FUN_00c05e00);
    func_0x00bbe2e0(*(undefined4 *)(param_3 + 8));
    FUN_00bbc580(param_3,"crypto\\property\\property.c",0xe8);
  }
  if (param_4 != 0) {
    func_0x00c48fc0(*(undefined4 *)(param_4 + 4),param_1,param_2,0);
  }
  return;
}



void FUN_00c05c70(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = func_0x00bd1830(*(undefined4 *)(param_3 + 4));
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
      piVar2 = (int *)func_0x00bd1a80(*(undefined4 *)(param_3 + 4),iVar1);
      if (*piVar2 == param_4[1]) {
        (*(code *)piVar2[4])(piVar2[2]);
        FUN_00bbc580(piVar2,"crypto\\property\\property.c",0xce);
        func_0x00bd1430(*(undefined4 *)(param_3 + 4),iVar1);
        iVar3 = iVar3 + 1;
      }
    } while (0 < iVar1);
    if (0 < iVar3) {
      iVar1 = *param_4;
      iVar3 = func_0x00bbe570(*(undefined4 *)(param_3 + 8));
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) - iVar3;
      func_0x00bbe160(*(undefined4 *)(param_3 + 8),FUN_00c05e00);
      func_0x00bbe280(*(undefined4 *)(param_3 + 8));
    }
  }
  return;
}



void FUN_00c05d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00bd18c0(param_4,param_3);
  return;
}



void FUN_00c05d30(undefined4 param_1,undefined4 param_2,int param_3)

{
  func_0x00bbe160(*(undefined4 *)(param_3 + 8),FUN_00c05e00);
  func_0x00bbe280(*(undefined4 *)(param_3 + 8));
  return;
}



void FUN_00c05d50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2[2] ^ param_2[2] << 0xd;
  uVar2 = uVar2 ^ uVar2 >> 0x11;
  uVar2 = uVar2 ^ uVar2 << 5;
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    iVar1 = func_0x00bbe070(*param_2,param_1);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0x10))(*(undefined4 *)(iVar1 + 8));
      FUN_00bbc580(iVar1,"crypto\\property\\property.c",0xd6);
    }
    return;
  }
  param_2[1] = param_2[1] + 1;
  return;
}



void FUN_00c05db0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00bb6190(*(undefined4 *)(param_3 + 8));
  *param_4 = *(undefined4 *)(param_3 + 8);
  func_0x00bbe5b0(*(undefined4 *)(param_3 + 8),0);
  func_0x00bbe210(*param_4,FUN_00ba7370,FUN_00c05d50,param_4);
  func_0x00bbe5b0(*(undefined4 *)(param_3 + 8),uVar1);
  return;
}



void FUN_00c05e00(int param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 8));
    FUN_00bbc580(param_1,"crypto\\property\\property.c",0xd6);
  }
  return;
}



void FUN_00c05e30(int param_1)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 8));
    FUN_00bbc580(param_1,"crypto\\property\\property.c",0xce);
  }
  return;
}



uint FUN_00c06b20(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar4 = (byte *)param_1[1];
  pbVar6 = (byte *)param_2[1];
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00c06b50:
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_00c06b55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00c06b50;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_00c06b55:
  if (((uVar5 == 0) && (uVar2 = *param_1, uVar2 != 0)) && (uVar3 = *param_2, uVar3 != 0)) {
    if (uVar2 < uVar3) {
      return 1;
    }
    uVar5 = -(uint)(uVar3 < uVar2);
  }
  return uVar5;
}



void FUN_00c06b80(int param_1)

{
  FUN_00bbe5f0(*(undefined4 *)(param_1 + 4));
  return;
}



undefined4
FUN_00c06c30(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  
  if (param_5 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\core_fetch.c",0x5b,"ossl_method_construct_postcondition");
    func_0x00bc5160(0xf,0xc0102,0);
    return 0;
  }
  *param_5 = 1;
  if (((param_3 == 0) || (*(int *)(param_4 + 0xc) != 0)) &&
     (iVar1 = func_0x00bc82c0(param_1,param_2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_00c06ca0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  
  if (param_5 == (uint *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\core_fetch.c",0x40,"ossl_method_construct_precondition");
    func_0x00bc5160(0xf,0xc0102,0);
    return 0;
  }
  *param_5 = 0;
  if (((param_3 == 0) || (*(int *)(param_4 + 0xc) != 0)) &&
     (iVar1 = func_0x00bc8560(param_1,param_2,param_5), iVar1 == 0)) {
    return 0;
  }
  *param_5 = (uint)(*param_5 == 0);
  return 1;
}



void FUN_00c06d10(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_2 + 0xc) == 0)) && (*(int *)(param_2 + 4) == 0)) {
    iVar1 = (*(code *)**(undefined4 **)(param_2 + 0x10))(*(undefined4 *)(param_2 + 0x14));
    *(int *)(param_2 + 4) = iVar1;
    if (iVar1 == 0) {
      return;
    }
  }
  (**(code **)(*(int *)(param_2 + 0x10) + 4))
            (*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x14));
  return;
}



void FUN_00c06d60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_4 + 0x10) + 0x14))
                    (param_2,param_1,*(undefined4 *)(param_4 + 0x14));
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_4 + 0x10) + 0x10))
              (*(undefined4 *)(param_4 + 4),iVar1,param_1,*param_2,param_2[1],
               *(undefined4 *)(param_4 + 0x14));
    (**(code **)(*(int *)(param_4 + 0x10) + 0x18))(iVar1,*(undefined4 *)(param_4 + 0x14));
  }
  return;
}



void FUN_00c06db0(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))
            (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14));
  return;
}



void FUN_00c06dd0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc1f70(param_1[2],*param_1);
  if (iVar1 != 0) {
    uVar2 = func_0x00bc3c90(iVar1,0,param_2);
    func_0x00c06e00(0,uVar2);
  }
  return;
}



void FUN_00c07060(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc1f70(param_1[2],*param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00bbba70(iVar1,0,param_2);
    func_0x00c06e00(0,uVar2);
  }
  return;
}



void FUN_00c07090(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\core_namemap.c",0x2f);
  return;
}



void FUN_00c072b0(undefined4 param_1)

{
  func_0x00bd1860(param_1,FUN_00c07090);
  return;
}



int FUN_00c079b0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  WSASetLastError(0);
  iVar1 = send(*(SOCKET *)(param_1 + 0x24),param_2,param_3,0);
  func_0x00baa700(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = func_0x00c07e10(iVar1);
    if (iVar2 != 0) {
      func_0x00bab680(param_1,10);
    }
  }
  return iVar1;
}



int FUN_00c07a00(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  WSASetLastError(0);
  iVar1 = recv(*(SOCKET *)(param_1 + 0x24),param_2,param_3,0);
  func_0x00baa700(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = func_0x00c07e10(iVar1);
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x800;
        return iVar1;
      }
    }
    else {
      func_0x00bab680(param_1,9);
    }
  }
  return iVar1;
}



int FUN_00c07a70(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  WSASetLastError(0);
  iVar2 = send(*(SOCKET *)(param_1 + 0x24),param_2,(int)pcVar4 - (int)(param_2 + 1),0);
  func_0x00baa700(param_1,0xf);
  if (iVar2 < 1) {
    iVar3 = func_0x00c07e10(iVar2);
    if (iVar3 != 0) {
      func_0x00bab680(param_1,10);
    }
  }
  return iVar2;
}



uint FUN_00c07ad0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  switch(param_2) {
  case 2:
    return *(uint *)(param_1 + 0x1c) >> 0xb & 1;
  case 8:
    return *(uint *)(param_1 + 0x18);
  case 9:
    *(int *)(param_1 + 0x18) = param_3;
    return 1;
  case 0xb:
  case 0xc:
    goto LAB_00c07bf8;
  case 0x5b:
  case 0x5c:
    if (*(int *)(param_1 + 0x14) != 0) {
      *param_4 = 1;
      param_4[1] = *(undefined4 *)(param_1 + 0x24);
      return 1;
    }
    break;
  case 100:
    if ((param_4 != (undefined4 *)0x0) && (param_3 == 2)) {
      uVar2 = FUN_008ad590(param_4);
      uVar3 = func_0x00bcaff0(puVar1,uVar2);
      if (uVar3 == 0) {
        return 0;
      }
      puVar1[7] = 1;
      return uVar3;
    }
    break;
  case 0x68:
    if (*(int *)(param_1 + 0x18) != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        func_0x00c07ee0(*(undefined4 *)(param_1 + 0x24));
      }
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x24) = *param_4;
    *(int *)(param_1 + 0x18) = param_3;
    *(undefined4 *)(param_1 + 0x14) = 1;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    puVar1[6] = 0;
    return 1;
  case 0x69:
    if (*(int *)(param_1 + 0x14) == 0) {
      return 0xffffffff;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_1 + 0x24);
    }
    return *(uint *)(param_1 + 0x24);
  case 0x7b:
    if ((param_4 != (undefined4 *)0x0) && (param_3 == 2)) {
      *param_4 = puVar1;
      return 1;
    }
  }
  uVar3 = 0;
LAB_00c07bf8:
  return uVar3;
}



bool FUN_00c07cb0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00bbc830(0x20,"crypto\\bio\\bss_sock.c",0x5e);
  *(int *)(param_1 + 0x28) = iVar1;
  return iVar1 != 0;
}



undefined4 FUN_00c07cf0(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      func_0x00c07ee0(*(undefined4 *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x28),"crypto\\bio\\bss_sock.c",0x6f);
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00c0c09c)

uint FUN_00c0c020(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1[1];
  uVar1 = param_2[1];
  pbVar3 = (byte *)*param_1;
  pbVar4 = (byte *)*param_2;
  uVar5 = uVar6;
  if ((int)uVar1 <= (int)uVar6) {
    uVar5 = uVar1;
  }
  while (uVar2 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar3 != *(int *)pbVar4) goto LAB_00c0c057;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
    uVar5 = uVar2;
  }
  if (uVar2 != 0xfffffffc) {
LAB_00c0c057:
    bVar7 = *pbVar3 < *pbVar4;
    if ((*pbVar3 != *pbVar4) ||
       ((uVar2 != 0xfffffffd &&
        ((bVar7 = pbVar3[1] < pbVar4[1], pbVar3[1] != pbVar4[1] ||
         ((uVar2 != 0xfffffffe &&
          ((bVar7 = pbVar3[2] < pbVar4[2], pbVar3[2] != pbVar4[2] ||
           ((uVar2 != 0xffffffff && (bVar7 = pbVar3[3] < pbVar4[3], pbVar3[3] != pbVar4[3]))))))))))
       )) {
      uVar6 = uVar6 - uVar1;
      if ((-(uint)bVar7 | 1) != 0) {
        uVar6 = -(uint)bVar7 | 1;
      }
      return uVar6;
    }
  }
  return uVar6 - uVar1;
}



undefined4 FUN_00c0d3e0(void)

{
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\evp\\m_sigver.c",0x16,"update");
  func_0x00bc5160(6,0xb1,0);
  return 0;
}



void FUN_00c0d520(void)

{
  func_0x00c01160(&DAT_013df15c);
  return;
}



undefined4
FUN_00c0d530(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,uint param_8,int *param_9)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  
  func_0x00e87f70();
  uVar5 = param_6;
  param_2 = (undefined4 *)FUN_00baaa30(param_6);
  piVar4 = param_9;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((((char *)*param_2 == (char *)0x0) || (*(char *)*param_2 == '\0')) && (param_2[1] == 0)) {
    if (param_8 != 0) {
      param_2[2] = (uint)(*(char *)(param_7 + -1 + param_8) == '\n');
    }
    uVar5 = func_0x00baafa0(uVar5,param_7,param_8,param_9);
    uVar5 = func_0x00bab710(uVar5);
    return uVar5;
  }
  *param_9 = 0;
  puVar2 = param_2;
  iVar10 = param_7;
  uVar9 = param_8;
  do {
    if (uVar9 == 0) {
      return 1;
    }
    param_2 = puVar2;
    if (puVar2[2] != 0) {
      pcVar1 = (char *)*puVar2;
      if (pcVar1 != (char *)0x0) {
        param_3 = pcVar1 + 1;
        pcVar8 = pcVar1;
        do {
          cVar11 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar11 != '\0');
        uVar5 = func_0x00baafa0(param_6,pcVar1,(int)pcVar8 - (int)param_3,&param_4);
        iVar6 = func_0x00bab710(uVar5);
        if (iVar6 == 0) {
          return 0;
        }
      }
      uVar5 = func_0x00baafa0(param_6,&DAT_01058f18,puVar2[1],&DAT_0112e1b4);
      func_0x00bbc8e0(uVar5);
      puVar2[2] = 0;
    }
    uVar7 = 0;
    cVar11 = '\0';
    if (uVar9 != 0) {
      do {
        cVar11 = *(char *)(uVar7 + iVar10);
        if (cVar11 == '\n') break;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
    uVar3 = uVar7 + 1;
    if (cVar11 != '\n') {
      uVar3 = uVar7;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - param_1) {
      param_1 = 0;
      uVar5 = func_0x00baafa0(param_6,iVar10,uVar3,&param_1);
      iVar6 = func_0x00bab710(uVar5);
      if (iVar6 == 0) {
        return 0;
      }
      iVar10 = iVar10 + param_1;
      *piVar4 = *piVar4 + param_1;
      uVar9 = uVar9 - param_1;
    }
    puVar2 = param_2;
    if (cVar11 == '\n') {
      param_2[2] = 1;
    }
  } while( true );
}



void FUN_00c0d6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baafa0(param_1,param_2,param_3,param_4);
  func_0x00bab260(uVar1);
  return;
}



void FUN_00c0d700(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  func_0x00bab6e0(param_1,param_2,(int)pcVar2 - (int)(param_2 + 1));
  return;
}



void FUN_00c0d730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baafa0(param_1,param_2,param_3);
  func_0x00baaaa0(uVar1);
  return;
}



uint FUN_00c0d750(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    piVar1 = (int *)FUN_00baaa30(param_1);
    if (piVar1 != (int *)0x0) {
      if (param_2 == 0x4f) {
        FUN_00bbc580(*piVar1,"crypto\\bio\\bf_prefix.c",0xa1);
        if (param_4 == 0) {
          *piVar1 = 0;
          return 1;
        }
        iVar2 = func_0x00bbbc70(param_4,"crypto\\bio\\bf_prefix.c",0xa6);
        *piVar1 = iVar2;
        uVar4 = (uint)(iVar2 != 0);
      }
      else if (param_2 == 0x50) {
        if (-1 < param_3) {
          piVar1[1] = param_3;
          return 1;
        }
      }
      else {
        if (param_2 == 0x51) {
          return piVar1[1];
        }
        if ((param_2 == 1) || (param_2 == 0x80)) {
          piVar1[2] = 1;
        }
        iVar2 = func_0x00baafa0(param_1);
        if (iVar2 != 0) {
          uVar3 = func_0x00baafa0(param_1,param_2,param_3,param_4);
          uVar4 = func_0x00baa730(uVar3);
          return uVar4;
        }
      }
      return uVar4;
    }
  }
  return 0xffffffff;
}



undefined4 FUN_00c0d850(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00bbc830(0xc,"crypto\\bio\\bf_prefix.c",0x36);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 1;
  func_0x00bab670(param_1,puVar1);
  func_0x00bab690(param_1,1);
  return 1;
}



undefined4 FUN_00c0d8a0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00baaa30(param_1);
  FUN_00bbc580(*puVar1,"crypto\\bio\\bf_prefix.c",0x47);
  FUN_00bbc580(puVar1,"crypto\\bio\\bf_prefix.c",0x48);
  return 1;
}



void FUN_00c0d8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baafa0(param_1,param_2,param_3);
  func_0x00baa5f0(uVar1);
  return;
}



int FUN_00c0da70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bd5660(param_1,6,param_2);
  if (iVar1 != 0) {
    func_0x00bb6570(param_2);
  }
  return iVar1;
}



void FUN_00c0dde0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x18);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 0xc),"crypto\\evp\\keymgmt_meth.c",0x12e);
      FUN_00bc7c90(*(undefined4 *)(param_1 + 0x14));
      FUN_00bbc580(param_1,"crypto\\evp\\keymgmt_meth.c",0x131);
    }
  }
  return;
}



undefined8 FUN_00c0de90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x18);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return CONCAT44(iVar1,1);
}



void FUN_00c0e160(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    iVar1 = func_0x00bd8030(param_1);
    *param_2 = iVar1;
  }
  return;
}



int FUN_00c0e180(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int iStack00000014;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  
  func_0x00e87f70();
  iVar4 = in_stack_00000028;
  iVar7 = 0;
  piVar6 = *(int **)(in_stack_00000028 + 8);
  iStack00000004 = 0;
  iVar8 = 0;
  iStack00000008 = 0;
  in_stack_00000028 = 0;
  iStack00000010 = 0;
  iStack00000014 = 0;
  iStack0000000c = 0;
  iVar2 = FUN_00bbc830(0x84,"crypto\\evp\\keymgmt_meth.c",0x18);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x18) = 1;
    *(undefined4 *)(iVar2 + 4) = in_stack_00000024;
    iVar3 = func_0x00bc9200(iVar4);
    piVar1 = (int *)(iVar2 + 0xc);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      piVar6 = (int *)(iVar2 + 0x18);
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 1 || iVar8 + -1 < 0) {
        FUN_00bbc580(*piVar1,"crypto\\evp\\keymgmt_meth.c",0x12e);
        FUN_00bc7c90(*(undefined4 *)(iVar2 + 0x14));
        FUN_00bbc580(iVar2,"crypto\\evp\\keymgmt_meth.c",0x131);
        return 0;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar4 + 0xc);
      iVar4 = *piVar6;
      if (iVar4 != 0) {
        piVar6 = piVar6 + 1;
        do {
          switch(iVar4) {
          case 1:
            if (*(int *)(iVar2 + 0x1c) == 0) {
              *(int *)(iVar2 + 0x1c) = *piVar6;
            }
            break;
          case 2:
            if (*(int *)(iVar2 + 0x34) == 0) {
              *(int *)(iVar2 + 0x34) = *piVar6;
            }
            break;
          case 3:
            if (*(int *)(iVar2 + 0x38) == 0) {
              *(int *)(iVar2 + 0x38) = *piVar6;
            }
            break;
          case 4:
            if (*(int *)(iVar2 + 0x44) == 0) {
              iStack00000008 = iStack00000008 + 1;
              *(int *)(iVar2 + 0x44) = *piVar6;
            }
            break;
          case 5:
            if (*(int *)(iVar2 + 0x48) == 0) {
              iStack00000008 = iStack00000008 + 1;
              *(int *)(iVar2 + 0x48) = *piVar6;
            }
            break;
          case 6:
            if (*(int *)(iVar2 + 0x4c) == 0) {
              *(int *)(iVar2 + 0x4c) = *piVar6;
            }
            break;
          case 7:
            if (*(int *)(iVar2 + 0x50) == 0) {
              *(int *)(iVar2 + 0x50) = *piVar6;
            }
            break;
          case 8:
            if (*(int *)(iVar2 + 0x54) == 0) {
              *(int *)(iVar2 + 0x54) = *piVar6;
            }
            break;
          case 10:
            if (*(int *)(iVar2 + 0x20) == 0) {
              *(int *)(iVar2 + 0x20) = *piVar6;
            }
            break;
          case 0xb:
            if (*(int *)(iVar2 + 0x24) == 0) {
              iVar8 = iVar8 + 1;
              *(int *)(iVar2 + 0x24) = *piVar6;
            }
            break;
          case 0xc:
            if (*(int *)(iVar2 + 0x28) == 0) {
              iVar8 = iVar8 + 1;
              *(int *)(iVar2 + 0x28) = *piVar6;
            }
            break;
          case 0xd:
            if (*(int *)(iVar2 + 0x2c) == 0) {
              iStack00000004 = iStack00000004 + 1;
              *(int *)(iVar2 + 0x2c) = *piVar6;
            }
            break;
          case 0xe:
            if (*(int *)(iVar2 + 0x30) == 0) {
              iStack00000004 = iStack00000004 + 1;
              *(int *)(iVar2 + 0x30) = *piVar6;
            }
            break;
          case 0xf:
            if (*(int *)(iVar2 + 0x3c) == 0) {
              iStack0000000c = iStack0000000c + 1;
              *(int *)(iVar2 + 0x3c) = *piVar6;
            }
            break;
          case 0x10:
            if (*(int *)(iVar2 + 0x40) == 0) {
              iStack0000000c = iStack0000000c + 1;
              *(int *)(iVar2 + 0x40) = *piVar6;
            }
            break;
          case 0x14:
            if (*(int *)(iVar2 + 0x58) == 0) {
              *(int *)(iVar2 + 0x58) = *piVar6;
            }
            break;
          case 0x15:
            if (*(int *)(iVar2 + 0x5c) == 0) {
              *(int *)(iVar2 + 0x5c) = *piVar6;
            }
            break;
          case 0x16:
            if (*(int *)(iVar2 + 0x60) == 0) {
              *(int *)(iVar2 + 0x60) = *piVar6;
            }
            break;
          case 0x17:
            if (*(int *)(iVar2 + 100) == 0) {
              *(int *)(iVar2 + 100) = *piVar6;
            }
            break;
          case 0x28:
            if (*(int *)(iVar2 + 0x68) == 0) {
              in_stack_00000028 = in_stack_00000028 + 1;
              *(int *)(iVar2 + 0x68) = *piVar6;
            }
            break;
          case 0x29:
            if (*(int *)(iVar2 + 0x6c) == 0) {
              iVar4 = in_stack_00000028 + 1;
              if (iStack00000010 != 0) {
                iVar4 = in_stack_00000028;
              }
              iStack00000010 = iStack00000010 + 1;
              *(int *)(iVar2 + 0x6c) = *piVar6;
              in_stack_00000028 = iVar4;
            }
            break;
          case 0x2a:
            if (*(int *)(iVar2 + 0x74) == 0) {
              iVar7 = iVar7 + 1;
              *(int *)(iVar2 + 0x74) = *piVar6;
            }
            break;
          case 0x2b:
            if (*(int *)(iVar2 + 0x78) == 0) {
              iVar4 = iVar7 + 1;
              if (iStack00000014 != 0) {
                iVar4 = iVar7;
              }
              *(int *)(iVar2 + 0x78) = *piVar6;
LAB_00c0e4e8:
              iStack00000014 = iStack00000014 + 1;
              iVar7 = iVar4;
            }
            break;
          case 0x2c:
            if (*(int *)(iVar2 + 0x80) == 0) {
              *(int *)(iVar2 + 0x80) = *piVar6;
            }
            break;
          case 0x2d:
            if (*(int *)(iVar2 + 0x70) == 0) {
              iVar4 = in_stack_00000028 + 1;
              if (iStack00000010 != 0) {
                iVar4 = in_stack_00000028;
              }
              iStack00000010 = iStack00000010 + 1;
              *(int *)(iVar2 + 0x70) = *piVar6;
              in_stack_00000028 = iVar4;
            }
            break;
          case 0x2e:
            if (*(int *)(iVar2 + 0x7c) == 0) {
              iVar4 = iVar7 + 1;
              if (iStack00000014 != 0) {
                iVar4 = iVar7;
              }
              *(int *)(iVar2 + 0x7c) = *piVar6;
              goto LAB_00c0e4e8;
            }
          }
          iVar4 = piVar6[1];
          piVar6 = piVar6 + 2;
        } while (iVar4 != 0);
      }
      if (((((*(int *)(iVar2 + 0x20) != 0) &&
            ((((*(int *)(iVar2 + 0x1c) != 0 || (*(int *)(iVar2 + 0x4c) != 0)) ||
              (*(int *)(iVar2 + 0x54) != 0)) && (*(int *)(iVar2 + 0x5c) != 0)))) &&
           ((iVar8 == 0 || (iVar8 == 2)))) && ((iStack00000004 == 0 || (iStack00000004 == 2)))) &&
         (((((iStack00000008 == 0 || (iStack00000008 == 2)) &&
            ((iStack0000000c == 0 || (iStack0000000c == 2)))) &&
           ((in_stack_00000028 == 0 || (in_stack_00000028 == 2)))) &&
          (((iVar7 == 0 || (iVar7 == 2)) &&
           ((*(int *)(iVar2 + 0x4c) == 0 ||
            ((*(int *)(iVar2 + 0x34) != 0 && (*(int *)(iVar2 + 0x50) != 0)))))))))) {
        *(int *)(iVar2 + 0x14) = in_stack_0000002c;
        if (in_stack_0000002c != 0) {
          func_0x00bc8620(in_stack_0000002c);
        }
        in_stack_00000028 = 0;
        uVar5 = 0;
        if (*(int *)(iVar2 + 0x14) != 0) {
          func_0x00bc9710(*(int *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 4),FUN_00c0e160,
                          &stack0x00000028);
          uVar5 = in_stack_00000028;
        }
        *(undefined4 *)(iVar2 + 8) = uVar5;
        return iVar2;
      }
      piVar6 = (int *)(iVar2 + 0x18);
      LOCK();
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 1 || iVar8 + -1 < 0) {
        FUN_00bbc580(*piVar1,"crypto\\evp\\keymgmt_meth.c",0x12e);
        FUN_00bc7c90(*(undefined4 *)(iVar2 + 0x14));
        FUN_00bbc580(iVar2,"crypto\\evp\\keymgmt_meth.c",0x131);
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\keymgmt_meth.c",0xfa,"keymgmt_from_algorithm");
      func_0x00bc5160(6,0xc1,0);
    }
  }
  return 0;
}



void FUN_00c0ea10(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\evp\\signature.c",0x17f);
      FUN_00bc7c90(*(undefined4 *)(param_1 + 0xc));
      FUN_00bbc580(param_1,"crypto\\evp\\signature.c",0x182);
    }
  }
  return;
}



undefined8 FUN_00c0ea60(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x10);
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return CONCAT44(iVar1,1);
}



undefined4 * FUN_00c0f0d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iStack00000004;
  int iStack00000008;
  int iStack0000000c;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar3 = in_stack_0000001c;
  func_0x00e87f70();
  piVar4 = *(int **)(in_stack_0000001c + 8);
  iVar5 = 0;
  iStack00000004 = 0;
  iStack00000008 = 0;
  iVar6 = 0;
  in_stack_0000001c = 0;
  iStack0000000c = 0;
  puVar1 = (undefined4 *)FUN_00bbc830(0x94,"crypto\\evp\\signature.c",0x19);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\signature.c",0x38,"evp_signature_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
    return (undefined4 *)0x0;
  }
  puVar1[4] = 1;
  puVar1[3] = in_stack_00000020;
  func_0x00bc8620(in_stack_00000020);
  *puVar1 = in_stack_00000018;
  iVar2 = func_0x00bc9200(iVar3);
  puVar1[1] = iVar2;
  if (iVar2 == 0) goto LAB_00c0f5cf;
  puVar1[2] = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *piVar4;
  if (iVar3 != 0) {
    piVar4 = piVar4 + 1;
    do {
      switch(iVar3) {
      case 1:
        if (puVar1[5] == 0) {
          iStack00000004 = iStack00000004 + 1;
          puVar1[5] = *piVar4;
        }
        break;
      case 2:
        if (puVar1[6] == 0) {
          iVar5 = iVar5 + 1;
          puVar1[6] = *piVar4;
        }
        break;
      case 3:
        if (puVar1[7] == 0) {
          puVar1[7] = *piVar4;
        }
        break;
      case 4:
        if (puVar1[0xb] == 0) {
          iVar5 = iVar5 + 1;
          puVar1[0xb] = *piVar4;
        }
        break;
      case 5:
        if (puVar1[0xc] == 0) {
          puVar1[0xc] = *piVar4;
        }
        break;
      case 6:
        if (puVar1[0x10] == 0) {
          iVar5 = iVar5 + 1;
          puVar1[0x10] = *piVar4;
        }
        break;
      case 7:
        if (puVar1[0x11] == 0) {
          puVar1[0x11] = *piVar4;
        }
        break;
      case 8:
        if (puVar1[0x12] == 0) {
          iVar5 = iVar5 + 1;
          puVar1[0x12] = *piVar4;
        }
        break;
      case 9:
        if (puVar1[0x13] == 0) {
          puVar1[0x13] = *piVar4;
        }
        break;
      case 10:
        if (puVar1[0x14] == 0) {
          puVar1[0x14] = *piVar4;
        }
        break;
      case 0xb:
        if (puVar1[0x15] == 0) {
          puVar1[0x15] = *piVar4;
        }
        break;
      case 0xc:
        if (puVar1[0x16] == 0) {
          iVar5 = iVar5 + 1;
          puVar1[0x16] = *piVar4;
        }
        break;
      case 0xd:
        if (puVar1[0x17] == 0) {
          puVar1[0x17] = *piVar4;
        }
        break;
      case 0xe:
        if (puVar1[0x18] == 0) {
          puVar1[0x18] = *piVar4;
        }
        break;
      case 0xf:
        if (puVar1[0x19] == 0) {
          puVar1[0x19] = *piVar4;
        }
        break;
      case 0x10:
        if (puVar1[0x1a] == 0) {
          iStack00000004 = iStack00000004 + 1;
          puVar1[0x1a] = *piVar4;
        }
        break;
      case 0x11:
        if (puVar1[0x1b] == 0) {
          puVar1[0x1b] = *piVar4;
        }
        break;
      case 0x12:
        if (puVar1[0x1c] == 0) {
          iStack00000008 = iStack00000008 + 1;
          puVar1[0x1c] = *piVar4;
        }
        break;
      case 0x13:
        if (puVar1[0x1d] == 0) {
          iStack00000008 = iStack00000008 + 1;
          puVar1[0x1d] = *piVar4;
        }
        break;
      case 0x14:
        if (puVar1[0x1e] == 0) {
          iVar6 = iVar6 + 1;
          puVar1[0x1e] = *piVar4;
        }
        break;
      case 0x15:
        if (puVar1[0x1f] == 0) {
          iVar6 = iVar6 + 1;
          puVar1[0x1f] = *piVar4;
        }
        break;
      case 0x16:
        if (puVar1[0x20] == 0) {
          in_stack_0000001c = in_stack_0000001c + 1;
          puVar1[0x20] = *piVar4;
        }
        break;
      case 0x17:
        if (puVar1[0x21] == 0) {
          in_stack_0000001c = in_stack_0000001c + 1;
          puVar1[0x21] = *piVar4;
        }
        break;
      case 0x18:
        if (puVar1[0x22] == 0) {
          iStack0000000c = iStack0000000c + 1;
          puVar1[0x22] = *piVar4;
        }
        break;
      case 0x19:
        if (puVar1[0x23] == 0) {
          iStack0000000c = iStack0000000c + 1;
          puVar1[0x23] = *piVar4;
        }
        break;
      case 0x1a:
        if (puVar1[0x24] == 0) {
          puVar1[0x24] = *piVar4;
        }
        break;
      case 0x1b:
        if (puVar1[8] == 0) {
          iVar5 = iVar5 + 1;
          puVar1[8] = *piVar4;
        }
        break;
      case 0x1c:
        if (puVar1[9] == 0) {
          puVar1[9] = *piVar4;
        }
        break;
      case 0x1d:
        if (puVar1[10] == 0) {
          puVar1[10] = *piVar4;
        }
        break;
      case 0x1e:
        if (puVar1[0xd] == 0) {
          iVar5 = iVar5 + 1;
          puVar1[0xd] = *piVar4;
        }
        break;
      case 0x1f:
        if (puVar1[0xe] == 0) {
          puVar1[0xe] = *piVar4;
        }
        break;
      case 0x20:
        if (puVar1[0xf] == 0) {
          puVar1[0xf] = *piVar4;
        }
      }
      iVar3 = piVar4[1];
      piVar4 = piVar4 + 2;
    } while (iVar3 != 0);
    if (((((iStack00000004 == 2) && ((iStack00000008 == 0 || (iStack00000008 == 2)))) &&
         ((iVar6 == 0 || (iVar6 == 2)))) &&
        ((((in_stack_0000001c == 0 || (in_stack_0000001c == 2)) &&
          ((iStack0000000c == 0 || (iStack0000000c == 2)))) && (iVar5 != 0)))) &&
       ((puVar1[6] == 0 || (puVar1[7] != 0)))) {
      if ((puVar1[8] == 0) || (puVar1[7] != 0)) {
        if (((puVar1[7] != 0) || (puVar1[9] != 0)) || (puVar1[10] != 0)) goto LAB_00c0f65a;
LAB_00c0f66a:
        if ((puVar1[0xb] == 0) || (puVar1[0xc] != 0)) {
          if (puVar1[0xd] == 0) {
            if (((puVar1[0xc] != 0) || (puVar1[0xe] != 0)) || (puVar1[0xf] != 0)) goto LAB_00c0f6af;
LAB_00c0f6bb:
            if ((((puVar1[0x10] == 0) || (puVar1[0x11] != 0)) &&
                (((puVar1[0x12] == 0 || (puVar1[0x15] != 0)) ||
                 ((puVar1[0x13] != 0 && (puVar1[0x14] != 0)))))) &&
               ((puVar1[0x16] == 0 ||
                ((puVar1[0x19] != 0 || ((puVar1[0x17] != 0 && (puVar1[0x18] != 0)))))))) {
              return puVar1;
            }
          }
          else if ((puVar1[0xc] != 0) || ((puVar1[0xe] != 0 && (puVar1[0xf] != 0)))) {
LAB_00c0f6af:
            if ((puVar1[0xb] != 0) || (puVar1[0xd] != 0)) goto LAB_00c0f6bb;
          }
        }
      }
      else if ((puVar1[9] != 0) && (puVar1[10] != 0)) {
LAB_00c0f65a:
        if ((puVar1[6] != 0) || (puVar1[8] != 0)) goto LAB_00c0f66a;
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\evp\\signature.c",0x16c,"evp_signature_from_algorithm");
  func_0x00bc5160(6,0xc1,0);
LAB_00c0f5cf:
  piVar4 = puVar1 + 4;
  LOCK();
  iVar3 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    FUN_00bbc580(puVar1[1],"crypto\\evp\\signature.c",0x17f);
    FUN_00bc7c90(puVar1[3]);
    FUN_00bbc580(puVar1,"crypto\\evp\\signature.c",0x182);
  }
  return (undefined4 *)0x0;
}



void FUN_00c0f7d0(int param_1)

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



void FUN_00c0fc00(int param_1)

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



uint FUN_00c12500(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar3 = param_4;
  if (*(uint *)(param_1 + 8) == 0) {
    return *(uint *)(param_1 + 8);
  }
  func_0x00e87f70();
  iVar2 = param_4[1];
  uVar1 = iVar2 - 1;
  if ((*(byte *)(param_4 + 4) & 4) == 0) {
    if (iVar2 != 0) {
      iVar5 = func_0x00bba6e0(*(undefined4 *)(*param_4 + -4 + iVar2 * 4));
      return iVar5 + iVar2 * 0x20 + -0x20;
    }
    return 0;
  }
  iVar2 = param_4[2];
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  param_4 = (int *)0x0;
  if (0 < iVar2) {
    puVar6 = (undefined4 *)*piVar3;
    do {
      uVar7 = (int)((uVar8 ^ uVar1) - 1 & ~(uVar8 ^ uVar1)) >> 0x1f;
      uVar9 = uVar7 | uVar9;
      uVar4 = func_0x00bba6e0(*puVar6);
      uVar8 = uVar8 + 1;
      uVar7 = (~uVar9 & 0x20) + (int)param_4 + (uVar4 & uVar7);
      puVar6 = puVar6 + 1;
      param_4 = (int *)uVar7;
    } while ((int)uVar8 < iVar2);
  }
  return 0xffffffffU - ((int)(~uVar1 - 1 & uVar1) >> 0x1f) & uVar7;
}



void FUN_00c12650(int *param_1)

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



void FUN_00c13070(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0xa8))(param_1);
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}



undefined4 FUN_00c135b0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  func_0x00e87f70();
  uVar7 = 0;
  if (param_2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_key.c",0x2a1,"ossl_ec_key_simple_check_key");
    func_0x00bc5160(0x10,0xc0102,0);
    return 0;
  }
  iVar3 = func_0x00bb5940(*(undefined4 *)(param_2 + 0x30));
  if (iVar3 == 0) {
    return 0;
  }
  bVar2 = false;
  iVar4 = func_0x00bb6310(*(undefined4 *)(param_2 + 0xc));
  iVar5 = func_0x00c133e0(param_2,iVar3);
  if (iVar5 == 0) goto LAB_00c1384b;
  if ((iVar4 == 0) || (iVar4 = func_0x00bba4f0(iVar4), iVar4 == 0)) {
    iVar4 = func_0x00c11e70(*(undefined4 *)(param_2 + 0xc));
    if (iVar4 == 0) goto LAB_00c1384b;
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
    iVar5 = func_0x00bba540(uVar1);
    if (iVar5 == 0) {
      iVar5 = func_0x00c11d30(*(undefined4 *)(param_2 + 0xc),iVar4,0,*(undefined4 *)(param_2 + 0x10)
                              ,uVar1,iVar3);
      if (iVar5 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ec_key.c",0x24b,"ossl_ec_key_public_check");
        func_0x00bc5160(0x10,0x80010,0);
      }
      else {
        iVar5 = func_0x00c11c10(*(undefined4 *)(param_2 + 0xc),iVar4);
        if (iVar5 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\ec\\ec_key.c",0x24f,"ossl_ec_key_public_check");
          func_0x00bc5160(0x10,0x82,0);
        }
        else {
          bVar2 = true;
        }
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ec_key.c",0x246,"ossl_ec_key_public_check");
      func_0x00bc5160(0x10,0x7a,0);
    }
    func_0x00c11a10(iVar4);
    if (!bVar2) goto LAB_00c1384b;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      FUN_00bc4f50();
      pcVar8 = "ossl_ec_key_private_check";
      uVar7 = 0x260;
LAB_00c138b7:
      func_0x00bc5050("crypto\\ec\\ec_key.c",uVar7,pcVar8);
      func_0x00bc5160(0x10,0xc0102,0);
      func_0x00bb5760(iVar3);
      return 0;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    uVar6 = func_0x00bbaaa0();
    iVar4 = func_0x00bba0f0(uVar1,uVar6);
    if ((iVar4 < 0) ||
       (iVar4 = func_0x00bba0f0(*(undefined4 *)(param_2 + 0x14),
                                *(undefined4 *)(*(int *)(param_2 + 0xc) + 8)), -1 < iVar4)) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ec_key.c",0x265,"ossl_ec_key_private_check");
      func_0x00bc5160(0x10,0x7b,0);
      func_0x00bb5760(iVar3);
      return 0;
    }
    bVar2 = false;
    if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0x10) == 0)) ||
       (*(int *)(param_2 + 0x14) == 0)) {
      FUN_00bc4f50();
      pcVar8 = "ossl_ec_key_pairwise_check";
      uVar7 = 0x279;
      goto LAB_00c138b7;
    }
    iVar4 = func_0x00c11e70(*(int *)(param_2 + 0xc));
    if (iVar4 != 0) {
      iVar5 = func_0x00c11d30(*(undefined4 *)(param_2 + 0xc),iVar4,*(undefined4 *)(param_2 + 0x14),0
                              ,0,iVar3);
      if (iVar5 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\ec\\ec_key.c",0x283,"ossl_ec_key_pairwise_check");
        func_0x00bc5160(0x10,0x80010,0);
      }
      else {
        iVar5 = func_0x00c117a0(*(undefined4 *)(param_2 + 0xc),iVar4,*(undefined4 *)(param_2 + 0x10)
                                ,iVar3);
        if (iVar5 == 0) {
          bVar2 = true;
        }
        else {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\ec\\ec_key.c",0x287,"ossl_ec_key_pairwise_check");
          func_0x00bc5160(0x10,0x7b,0);
        }
      }
    }
    func_0x00c11a10(iVar4);
    if (!bVar2) goto LAB_00c1384b;
  }
  uVar7 = 1;
LAB_00c1384b:
  func_0x00bb5760(iVar3);
  return uVar7;
}



void FUN_00c138f0(undefined4 param_1)

{
  func_0x00c12c00(param_1,0);
  return;
}



int FUN_00c13900(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bb5940(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = func_0x00c11d30(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14),0,0,iVar1);
  func_0x00bb5760(iVar1);
  if (iVar2 == 1) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return iVar2;
}



undefined4 FUN_00c13950(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar1 = func_0x00bba770();
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x41c;
      goto LAB_00c13977;
    }
  }
  iVar1 = func_0x00bb9f50(param_2,param_3,iVar1);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    return 1;
  }
  FUN_00bc4f50();
  uVar2 = 0x420;
LAB_00c13977:
  func_0x00bc5050("crypto\\ec\\ec_key.c",uVar2,"ossl_ec_key_simple_oct2priv");
  func_0x00bc5160(0x10,0x80003,0);
  return 0;
}



uint FUN_00c139d0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x00c11230(*(undefined4 *)(param_1 + 0xc));
  uVar2 = (int)((iVar1 + 7 >> 0x1f & 7U) + iVar1 + 7) >> 3;
  if (*(int *)(param_1 + 0x14) != 0) {
    if (param_2 == 0) {
      return uVar2;
    }
    if (uVar2 <= param_3) {
      iVar1 = func_0x00bb9f90(*(int *)(param_1 + 0x14),param_2,uVar2);
      if (iVar1 != -1) {
        return uVar2;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ec_key.c",0x3ff,"ossl_ec_key_simple_priv2oct");
      func_0x00bc5160(0x10,100,0);
    }
  }
  return 0;
}



void FUN_00c13af0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_0105ed30);
  return;
}



undefined * FUN_00c13b10(void)

{
  return &DAT_0105ed30;
}



void FUN_00c140a0(void)

{
  func_0x00c01160(&DAT_013df164);
  return;
}



void FUN_00c14a70(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      (**(code **)(*param_1 + 0x1c))(param_1[1]);
    }
    param_1[1] = 0;
    FUN_00c03800(*param_1);
    *param_1 = 0;
    FUN_00bbc580(param_1,"crypto\\encode_decode\\encoder_lib.c",0xfd);
  }
  return;
}



void FUN_00c14e80(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  func_0x00e87f70();
  if (param_3[7] == 0) {
    param_3[7] = 1;
    iVar1 = func_0x00c03890(param_2);
    if ((uint)(param_3[4] == iVar1) == (param_3[6] & 1)) {
      uVar2 = thunk_FUN_00bc77d0(iVar1);
      iVar3 = func_0x00bd1830(*param_3);
      iVar7 = 0;
      if (0 < iVar3) {
        do {
          if ((*(byte *)(param_3 + 6) & 1) == 0) {
            uVar4 = func_0x00bd1a80(*param_3,iVar7);
            uVar5 = func_0x00c01e00(param_2,uVar4);
          }
          else {
            uVar5 = (uint)(*(int *)(param_3[1] + iVar7 * 4) == *(int *)(param_2 + 4));
          }
        } while (((((uVar5 == 0) ||
                   ((*(code **)(param_2 + 0x30) != (code *)0x0 &&
                    (iVar6 = (**(code **)(param_2 + 0x30))(uVar2,*(undefined4 *)param_3[5]),
                    iVar6 == 0)))) || ((param_3[4] != iVar1 && (*(int *)(param_2 + 0x38) == 0)))) ||
                 (iVar6 = func_0x00c140b0(param_3[5],param_2), iVar6 == 0)) &&
                (iVar7 = iVar7 + 1, iVar7 < iVar3));
      }
    }
    param_3[7] = 0;
  }
  return;
}



void FUN_00c14f60(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((param_2[1] & 1) == 0) {
    param_2[1] = param_2[1] | 1;
    iVar1 = func_0x00bd18c0(*param_2,param_1);
    if (0 < iVar1) {
      param_2[1] = param_2[1] & 0xfffffffe;
    }
  }
  return;
}



void FUN_00c14f90(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2[3] == 0) {
    uVar1 = func_0x00bc36d0(param_1);
    iVar4 = *param_2;
    iVar2 = FUN_00baaa40(*(undefined4 *)(iVar4 + 0x38));
    iVar3 = func_0x00c03890(uVar1);
    if (iVar2 != iVar3) {
      param_2[2] = param_1;
      iVar4 = func_0x00c0ded0(*(undefined4 *)(iVar4 + 0x38),*(undefined4 *)(iVar4 + 0x3c),param_2[1]
                              ,FUN_00c15030,param_2);
      if (iVar4 == 0) {
        return;
      }
      param_2[3] = param_2[4];
      return;
    }
    param_2[3] = *(int *)(iVar4 + 0x3c);
  }
  return;
}



void FUN_00c15000(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = func_0x00bc36d0(*(int *)(param_1 + 8));
    (**(code **)(iVar1 + 0x3c))(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



bool FUN_00c15030(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  iVar1 = func_0x00bc36d0(uVar2);
  uVar2 = func_0x00bc3c60(uVar2);
  iVar1 = (**(code **)(iVar1 + 0x38))(uVar2,*(undefined4 *)(param_2 + 4),param_1);
  *(int *)(param_2 + 0x10) = iVar1;
  return iVar1 != 0;
}



void FUN_00c15480(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x54);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 4),"crypto\\ec\\ecx_key.c",0x4d);
      FUN_00bee500(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   "crypto\\ec\\ecx_key.c",0x4e);
      FUN_00bbc580(param_1,"crypto\\ec\\ecx_key.c",0x50);
    }
  }
  return;
}



undefined4 FUN_00c16010(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = param_2[1];
  if (iVar2 == 0) {
    iVar2 = func_0x00c0e0e0(*param_2);
    param_2[1] = iVar2;
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\keymgmt_lib.c",0x25,"evp_keymgmt_util_try_import");
      func_0x00bc5160(6,0x80006,0);
      return 0;
    }
    bVar1 = true;
  }
  if (*param_1 != 0) {
    iVar2 = func_0x00c0e070(*param_2,iVar2,param_2[2],param_1);
    if (iVar2 == 0) {
      if (bVar1) {
        func_0x00c0df30(*param_2,param_2[1]);
        param_2[1] = 0;
      }
      return 0;
    }
  }
  return 1;
}



void FUN_00c160d0(undefined4 *param_1)

{
  func_0x00c0df30(*param_1,param_1[1]);
  FUN_00c0dde0(*param_1);
  FUN_00bbc580(param_1,"crypto\\evp\\keymgmt_lib.c",0xdb);
  return;
}



void FUN_00c16100(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (3 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (param_3 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = param_3;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c161d0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000010;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (4 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (in_stack_00000010 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_00000010;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c162a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000014;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (5 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (in_stack_00000014 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_00000014;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c16370(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000018;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (6 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (in_stack_00000018 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_00000018;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c16440(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_0000001c;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (7 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (in_stack_0000001c != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_0000001c;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00c16510(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = func_0x00bb6190(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



void FUN_00c16580(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  iVar3 = func_0x00bb6320(uVar4);
  if (iVar3 != 0) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (unaff_retaddr != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = unaff_retaddr;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c16650(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (1 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (param_1 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = param_1;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c16720(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (2 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (param_2 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = param_2;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c167f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (3 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (param_3 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = param_3;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c168c0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000010;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (4 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (in_stack_00000010 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_00000010;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c16990(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000014;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (5 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (in_stack_00000014 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_00000014;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c16a60(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000018;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (6 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (in_stack_00000018 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_00000018;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c16b30(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_0000001c;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (7 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000028,&stack0x00000000);
    if (((iVar3 != 0) && (in_stack_0000001c != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = in_stack_0000001c;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00c16c00(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  func_0x00e87f70();
  if (param_2 == 7) {
    if ((*(byte *)*param_4 & 6) != 0) {
      param_4[1] = 0;
      return 1;
    }
  }
  else if (param_2 == 8) {
    iVar1 = func_0x00bc08d0(param_4[8],&stack0x00000000);
    if (iVar1 != 0) {
      iVar1 = func_0x00bbbfe0(*(undefined4 *)(*param_4 + 0xc),0);
      if (iVar1 == 0) {
        param_4[5] = 1;
        return 1;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x803,"fix_group_ecx");
    func_0x00bc5160(6,0x80106,0);
    param_4[5] = 0;
    return 0;
  }
  return 0;
}



void FUN_00c16cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c19a40(param_1,param_2,param_3,thunk_FUN_00bc3b90,thunk_FUN_00bf0f10);
  return;
}



void FUN_00c16cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c19a40(param_1,param_2,param_3,thunk_FUN_00bc42b0,thunk_FUN_00bf0fb0);
  return;
}



int FUN_00c16cf0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00c18bc0(param_1,param_2,param_3);
  if (0 < iVar1) {
    if (((param_1 == 2) || (param_1 == 5)) && (*(int *)(param_3 + 4) == 1)) {
      **(undefined4 **)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x1c);
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_00c16d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c19b60(param_1,param_2,param_3,&DAT_01060638);
  return;
}



void FUN_00c16d60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c19b60(param_1,param_2,param_3,&DAT_01060650);
  return;
}



int FUN_00c16d80(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00c18a70(param_1,param_2,param_3);
  if (iVar1 < 1) {
    return iVar1;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 4) != 2) goto LAB_00c16dd2;
  }
  else if ((param_1 != 8) || (*(int *)(param_3 + 4) != 1)) goto LAB_00c16dd2;
  func_0x00bc27c0(param_3 + 0x28,0x32,*(undefined4 *)(param_3 + 0x18),0);
  *(int *)(param_3 + 0x18) = param_3 + 0x28;
  *(undefined4 *)(param_3 + 0x14) = 0;
LAB_00c16dd2:
  iVar1 = FUN_00c18bc0(param_1,param_2,param_3);
  if (0 < iVar1) {
    if (param_1 == 7) {
      if (*(int *)(param_3 + 4) != 2) {
        return iVar1;
      }
    }
    else {
      if (param_1 != 2) {
        return iVar1;
      }
      if (*(int *)(param_3 + 4) != 1) {
        return iVar1;
      }
    }
    uVar2 = func_0x00bc2c50(*(undefined4 *)(param_3 + 0x18),0);
    *(undefined4 *)(param_3 + 0x18) = uVar2;
  }
  return iVar1;
}



int FUN_00c16e20(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00c18a70(param_1,param_2,param_3);
  if (0 < iVar1) {
    if (*(int *)(param_3 + 4) != 2) {
      return 0;
    }
    if (param_1 == 1) {
      uVar2 = func_0x00c66280(*(undefined4 *)(param_3 + 0x14));
      iVar1 = func_0x00bc36d0(uVar2);
      *(int *)(param_3 + 0x18) = iVar1;
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x3f0,"fix_dh_nid");
        func_0x00bc5160(6,0xde,0);
        return 0;
      }
      *(undefined4 *)(param_3 + 0x14) = 0;
    }
    iVar1 = FUN_00c18bc0(param_1,param_2,param_3);
  }
  return iVar1;
}



int FUN_00c16eb0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00c18a70(param_1,param_2,param_3);
  if (iVar1 < 1) {
    return iVar1;
  }
  if (*(int *)(param_3 + 4) != 2) {
    return 0;
  }
  if (param_1 == 1) {
    uVar2 = func_0x00c66280(*(undefined4 *)(param_3 + 0x14));
    iVar1 = func_0x00bc36d0(uVar2);
    *(int *)(param_3 + 0x18) = iVar1;
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x40b;
LAB_00c16f14:
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",uVar2,"fix_dh_nid5114");
      func_0x00bc5160(6,0xde,0);
      return 0;
    }
  }
  else {
    if (param_1 != 4) goto LAB_00c16f64;
    if (*(int *)(param_3 + 0x18) == 0) {
      return 0;
    }
    uVar2 = func_0x008aafde(*(int *)(param_3 + 0x18));
    uVar2 = func_0x00c66280(uVar2);
    iVar1 = func_0x00bc36d0(uVar2);
    *(int *)(param_3 + 0x18) = iVar1;
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x417;
      goto LAB_00c16f14;
    }
  }
  *(undefined4 *)(param_3 + 0x14) = 0;
LAB_00c16f64:
  iVar1 = FUN_00c18bc0(param_1,param_2,param_3);
  return iVar1;
}



int FUN_00c16f80(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar3 = func_0x00c18a70(param_1,param_2,param_3);
  if (0 < iVar3) {
    if (*(int *)(param_3 + 4) != 2) {
      return 0;
    }
    if (param_1 == 4) {
      uVar4 = func_0x008aafde(*(undefined4 *)(param_3 + 0x18));
      pcVar5 = (char *)func_0x00c662b0(uVar4);
      *(char **)(param_3 + 0x18) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x436,"fix_dh_paramgen_type");
        func_0x00bc5160(6,0xde,0);
        return 0;
      }
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      *(int *)(param_3 + 0x14) = (int)pcVar5 - (int)pcVar1;
    }
    iVar3 = FUN_00c18bc0(param_1,param_2,param_3);
  }
  return iVar3;
}



int FUN_00c17010(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  func_0x00e87f70();
  iVar2 = func_0x00c18a70(param_2,param_3,param_4);
  if (iVar2 < 1) {
    return iVar2;
  }
  if (*(int *)(param_4 + 4) != 2) {
    return 0;
  }
  if (param_2 == 1) {
    if (*(int *)(param_4 + 0x14) == 0) {
      pcVar3 = "explicit";
    }
    else {
      if (*(int *)(param_4 + 0x14) != 1) {
        iVar2 = -2;
        goto LAB_00c17119;
      }
      pcVar3 = "named_curve";
    }
    *(char **)(param_4 + 0x18) = pcVar3;
    *(undefined4 *)(param_4 + 0x14) = 0;
  }
  iVar2 = FUN_00c18bc0(param_2,param_3,param_4);
  if (iVar2 < 1) {
    return iVar2;
  }
  if (param_2 != 7) {
    return iVar2;
  }
  pbVar6 = *(byte **)(param_4 + 0x18);
  pcVar3 = "explicit";
  pbVar4 = pbVar6;
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < (byte)*pcVar3;
    if (bVar1 != *pcVar3) {
LAB_00c170c0:
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_00c170c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < ((byte *)pcVar3)[1];
    if (bVar1 != ((byte *)pcVar3)[1]) goto LAB_00c170c0;
    pbVar4 = pbVar4 + 2;
    pcVar3 = (char *)((byte *)pcVar3 + 2);
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_00c170c5:
  if (uVar5 == 0) {
    *(undefined4 *)(param_4 + 0x14) = 0;
  }
  else {
    pcVar3 = "named_curve";
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < (byte)*pcVar3;
      if (bVar1 != *pcVar3) {
LAB_00c170f3:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_00c170f8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < ((byte *)pcVar3)[1];
      if (bVar1 != ((byte *)pcVar3)[1]) goto LAB_00c170f3;
      pbVar6 = pbVar6 + 2;
      pcVar3 = (char *)((byte *)pcVar3 + 2);
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_00c170f8:
    if (uVar5 == 0) {
      *(undefined4 *)(param_4 + 0x14) = 1;
    }
    else {
      iVar2 = -2;
      *(undefined4 *)(param_4 + 0x14) = 0xfffffffe;
    }
  }
  *(undefined4 *)(param_4 + 0x18) = 0;
  if (iVar2 != -2) {
    return iVar2;
  }
LAB_00c17119:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x46b,"fix_ec_param_enc");
  func_0x00bc5160(6,0x93,0);
  return iVar2;
}



int FUN_00c17150(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x00e87f70();
  iVar3 = 0;
  iVar1 = func_0x00c18a70(param_2,param_3,param_4);
  if (iVar1 < 1) {
    return iVar1;
  }
  if (*(int *)(param_4 + 4) != 2) {
    return 0;
  }
  if (param_2 == 1) {
    register0x00000010 = (BADSPACEBASE *)func_0x00bc2790(*(undefined4 *)(param_4 + 0x14));
    *(undefined4 *)(param_4 + 0x14) = 0;
  }
  else {
    if (param_2 != 7) goto LAB_00c171c0;
    iVar3 = param_4 + 0x28;
    *(undefined4 *)(param_4 + 0x1c) = 0x32;
  }
  *(BADSPACEBASE **)(param_4 + 0x18) = register0x00000010;
LAB_00c171c0:
  iVar1 = FUN_00c18bc0(param_2,param_3,param_4);
  if ((0 < iVar1) && (param_2 == 7)) {
    uVar2 = func_0x00bc2b00(iVar3);
    *(undefined4 *)(param_4 + 0x14) = uVar2;
    *(undefined4 *)(param_4 + 0x18) = 0;
  }
  return iVar1;
}



int FUN_00c17200(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 1) {
    if (*(int *)(param_3 + 4) != 0) {
      return 0;
    }
    *(uint *)(param_3 + 4) = (*(int *)(param_3 + 0x14) != -2) + 1;
  }
  else if (param_1 == 4) {
    *(undefined4 *)(param_3 + 4) = 2;
  }
  else if ((param_1 == 7) && (*(int *)(param_3 + 4) == 0)) {
    return 0;
  }
  iVar1 = func_0x00c18a70(param_1,param_2,param_3);
  if (0 < iVar1) {
    if (((param_1 == 1) && (*(int *)(param_3 + 4) == 2)) &&
       ((*(int *)(param_3 + 0x14) < -1 || (1 < *(int *)(param_3 + 0x14))))) {
      return -2;
    }
    iVar1 = FUN_00c18bc0(param_1,param_2,param_3);
    if (0 < iVar1) {
      if (param_1 == 2) {
        if ((*(int *)(param_3 + 4) == 1) &&
           ((*(int *)(param_3 + 0x14) < 0 || (1 < *(int *)(param_3 + 0x14))))) {
          *(undefined4 *)(param_3 + 0x14) = 0xffffffff;
          return -1;
        }
      }
      else if ((param_1 == 7) && (*(int *)(param_3 + 4) == 1)) {
        *(undefined4 *)(param_3 + 0x14) = 0xfffffffe;
      }
    }
  }
  return iVar1;
}



int FUN_00c172c0(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  bool bVar16;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  func_0x00e87f70();
  iVar9 = func_0x00c18a70(in_stack_00000018,in_stack_0000001c,in_stack_00000020);
  if (0 < iVar9) {
    if (in_stack_00000018 == 1) {
      if (*(int *)(in_stack_00000020 + 4) == 1) {
        *(undefined4 *)(in_stack_00000020 + 0x24) = *(undefined4 *)(in_stack_00000020 + 0x18);
        *(int *)(in_stack_00000020 + 0x18) = in_stack_00000020 + 0x28;
        *(undefined4 *)(in_stack_00000020 + 0x14) = 0x32;
      }
      else if (*(int *)(in_stack_00000020 + 4) == 2) {
        puVar10 = (undefined4 *)
                  func_0x00bbfa40(&stack0x00000000,*(undefined4 *)(in_stack_0000001c + 0x1c),
                                  in_stack_00000020 + 0x14);
        puVar5 = *(undefined4 **)(in_stack_00000020 + 0x20);
        uVar6 = puVar10[1];
        uVar7 = puVar10[2];
        uVar8 = puVar10[3];
        *puVar5 = *puVar10;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        puVar5[4] = puVar10[4];
        return 1;
      }
    }
    else if ((in_stack_00000018 == 8) && (*(int *)(in_stack_00000020 + 4) == 1)) {
      iVar9 = *(int *)(in_stack_00000020 + 0x20);
      piVar1 = (int *)(in_stack_00000020 + 0x14);
      if (*(int *)(iVar9 + 4) == 1) {
        iVar9 = func_0x00bbfcd0(iVar9,piVar1);
        return iVar9;
      }
      if (*(int *)(iVar9 + 4) == 2) {
        iVar9 = func_0x00bc0300(iVar9,piVar1);
        return iVar9;
      }
      uVar15 = 0;
      do {
        if (*piVar1 == (&DAT_01060668)[uVar15 * 2]) goto LAB_00c173f7;
        uVar15 = uVar15 + 1;
      } while (uVar15 < 7);
      if (uVar15 == 7) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x528,"fix_rsa_padding_mode");
        func_0x00bc5160(4,0x76,"[action:%d, state:%d] padding number %d",
                        *(undefined4 *)(in_stack_00000020 + 4),8,*piVar1);
        return -2;
      }
LAB_00c173f7:
      pcVar13 = (&PTR_DAT_0106066c)[uVar15 * 2];
      if (pcVar13 == (char *)0x0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x532,"fix_rsa_padding_mode");
        func_0x00bc5160(6,0x93,0);
        return -2;
      }
      *(char **)(in_stack_00000020 + 0x18) = pcVar13;
      pcVar2 = pcVar13 + 1;
      do {
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      *piVar1 = (int)pcVar13 - (int)pcVar2;
    }
    iVar9 = FUN_00c18bc0(in_stack_00000018,in_stack_0000001c,in_stack_00000020);
    if (0 < iVar9) {
      if (*(int *)(in_stack_00000020 + 4) == 2) {
        if (in_stack_00000018 != 7) {
          return iVar9;
        }
      }
      else {
        if (*(int *)(in_stack_00000020 + 4) != 1) {
          return iVar9;
        }
        if (in_stack_00000018 != 2) {
          return iVar9;
        }
      }
      uVar15 = 0;
      do {
        pbVar14 = (&PTR_DAT_0106066c)[uVar15 * 2];
        pbVar11 = *(byte **)(in_stack_00000020 + 0x18);
        do {
          bVar4 = *pbVar11;
          bVar16 = bVar4 < *pbVar14;
          if (bVar4 != *pbVar14) {
LAB_00c174c0:
            uVar12 = -(uint)bVar16 | 1;
            goto LAB_00c174c5;
          }
          if (bVar4 == 0) break;
          bVar4 = pbVar11[1];
          bVar16 = bVar4 < pbVar14[1];
          if (bVar4 != pbVar14[1]) goto LAB_00c174c0;
          pbVar11 = pbVar11 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar4 != 0);
        uVar12 = 0;
LAB_00c174c5:
        if (uVar12 == 0) goto LAB_00c17520;
        uVar15 = uVar15 + 1;
      } while (uVar15 < 7);
      if (uVar15 == 7) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x546,"fix_rsa_padding_mode");
        func_0x00bc5160(4,0x76,"[action:%d, state:%d] padding name %s",
                        *(undefined4 *)(in_stack_00000020 + 4),in_stack_00000018,
                        *(undefined4 *)(in_stack_00000020 + 0x14));
        *(undefined4 *)(in_stack_00000020 + 0x18) = 0;
        *(undefined4 *)(in_stack_00000020 + 0x14) = 0xfffffffe;
        return -2;
      }
LAB_00c17520:
      if (in_stack_00000018 == 2) {
        **(undefined4 **)(in_stack_00000020 + 0x24) = (&DAT_01060668)[uVar15 * 2];
        *(undefined4 *)(in_stack_00000020 + 0x18) = 0;
        return iVar9;
      }
      *(undefined4 *)(in_stack_00000020 + 0x14) = (&DAT_01060668)[uVar15 * 2];
      *(undefined4 *)(in_stack_00000020 + 0x18) = 0;
    }
  }
  return iVar9;
}



int FUN_00c17560(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  
  func_0x00e87f70();
  iVar3 = func_0x00c18a70(param_2,param_3,param_4);
  if (iVar3 < 1) {
    return iVar3;
  }
  if ((param_2 == 1) && (*(int *)(param_4 + 4) == 1)) {
    *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_4 + 0x18);
    *(int *)(param_4 + 0x18) = param_4 + 0x28;
    *(undefined4 *)(param_4 + 0x14) = 0x32;
  }
  else {
    iVar3 = *(int *)(param_4 + 4);
    if (iVar3 == 2) {
      if (param_2 != 1) goto LAB_00c17625;
    }
    else if ((iVar3 != 1) || (param_2 != 8)) goto LAB_00c17625;
    uVar9 = 0;
    do {
      if (*(int *)(param_4 + 0x14) == (&DAT_010606a0)[uVar9 * 2]) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
    pcVar8 = (char *)(param_4 + 0x28);
    if (uVar9 == 3) {
      func_0x00bbc9d0(pcVar8,0x32,&DAT_011a2390,*(int *)(param_4 + 0x14));
    }
    else {
      func_0x008ab01c(pcVar8,(&PTR_s_digest_010606a4)[uVar9 * 2],0x31);
      *(undefined1 *)(param_4 + 0x59) = 0;
    }
    *(char **)(param_4 + 0x18) = pcVar8;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    *(int *)(param_4 + 0x14) = (int)pcVar8 - (param_4 + 0x29);
  }
LAB_00c17625:
  iVar3 = FUN_00c18bc0(param_2,param_3,param_4);
  if (0 < iVar3) {
    if (*(int *)(param_4 + 4) == 2) {
      if (param_2 != 7) {
        return iVar3;
      }
    }
    else {
      if (*(int *)(param_4 + 4) != 1) {
        return iVar3;
      }
      if (param_2 != 2) {
        return iVar3;
      }
    }
    uVar9 = 0;
    do {
      pbVar7 = (&PTR_s_digest_010606a4)[uVar9 * 2];
      pbVar4 = *(byte **)(param_4 + 0x18);
      do {
        bVar2 = *pbVar4;
        bVar10 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_00c17690:
          uVar5 = -(uint)bVar10 | 1;
          goto LAB_00c17695;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar10 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_00c17690;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_00c17695:
      if (uVar5 == 0) goto LAB_00c176b3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < 3);
    if (uVar9 == 3) {
      uVar6 = func_0x008aafde(*(byte **)(param_4 + 0x18));
    }
    else {
LAB_00c176b3:
      uVar6 = (&DAT_010606a0)[uVar9 * 2];
    }
    if (param_2 == 2) {
      **(undefined4 **)(param_4 + 0x24) = uVar6;
      *(undefined4 *)(param_4 + 0x18) = 0;
      return iVar3;
    }
    *(undefined4 *)(param_4 + 0x14) = uVar6;
    *(undefined4 *)(param_4 + 0x18) = 0;
  }
  return iVar3;
}



int FUN_00c176f0(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  
  iVar4 = func_0x00c18a70(param_1,param_2,param_3);
  if (iVar4 < 1) {
    return iVar4;
  }
  if (*(int *)(param_3 + 4) == 2) {
    if (param_1 != 1) goto LAB_00c17764;
  }
  else if ((*(int *)(param_3 + 4) != 1) || (param_1 != 8)) goto LAB_00c17764;
  uVar9 = 0;
  do {
    if (*(int *)(param_3 + 0x14) == (&DAT_010606b8)[uVar9 * 2]) goto LAB_00c1774b;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  if (uVar9 == 3) {
    return 0;
  }
LAB_00c1774b:
  pcVar7 = (&PTR_s_EXTRACT_AND_EXPAND_010606bc)[uVar9 * 2];
  *(char **)(param_3 + 0x18) = pcVar7;
  pcVar1 = pcVar7 + 1;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  *(int *)(param_3 + 0x14) = (int)pcVar7 - (int)pcVar1;
LAB_00c17764:
  iVar4 = FUN_00c18bc0(param_1,param_2,param_3);
  if (iVar4 < 1) {
    return iVar4;
  }
  if (*(int *)(param_3 + 4) == 2) {
    if (param_1 != 7) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_3 + 4) != 1) {
      return 1;
    }
    if (param_1 != 2) {
      return 1;
    }
  }
  uVar9 = 0;
  do {
    pbVar5 = (&PTR_s_EXTRACT_AND_EXPAND_010606bc)[uVar9 * 2];
    pbVar8 = *(byte **)(param_3 + 0x18);
    do {
      bVar3 = *pbVar8;
      bVar10 = bVar3 < *pbVar5;
      if (bVar3 != *pbVar5) {
LAB_00c177d0:
        uVar6 = -(uint)bVar10 | 1;
        goto LAB_00c177d5;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar8[1];
      bVar10 = bVar3 < pbVar5[1];
      if (bVar3 != pbVar5[1]) goto LAB_00c177d0;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar3 != 0);
    uVar6 = 0;
LAB_00c177d5:
    if (uVar6 == 0) goto LAB_00c177ed;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 3);
  if (uVar9 == 3) {
    return 0;
  }
LAB_00c177ed:
  if (param_1 != 2) {
    *(undefined4 *)(param_3 + 0x14) = (&DAT_010606b8)[uVar9 * 2];
  }
  *(undefined4 *)(param_3 + 0x18) = 0;
  return 1;
}



undefined4 FUN_00c17810(undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  uVar4 = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_3 + 0x18) = 0;
  iVar3 = func_0x00bd5fc0(uVar4);
  if (iVar3 == 0x1c) {
    uVar4 = func_0x00bd5db0(uVar4);
    iVar3 = func_0x00c19e50(uVar4);
    if (iVar3 == 0) goto LAB_00c178b4;
    uVar4 = func_0x00c66280(iVar3);
    uVar4 = func_0x00bc36d0(uVar4);
  }
  else {
    if (iVar3 != 0x198) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x60a,"get_payload_group_name");
      func_0x00bc5160(6,0xe0,0);
      return 0;
    }
    uVar4 = func_0x00c0d910(uVar4);
    iVar3 = func_0x00bb6310(uVar4);
    if (iVar3 == 0) goto LAB_00c178b4;
    iVar3 = func_0x00baf190(iVar3);
    if (iVar3 == 0) goto LAB_00c178b4;
    uVar4 = func_0x00c4f2a0(iVar3);
  }
  *(undefined4 *)(param_3 + 0x18) = uVar4;
LAB_00c178b4:
  pcVar5 = *(char **)(param_3 + 0x18);
  if (pcVar5 == (char *)0x0) {
    return 1;
  }
  pcVar1 = pcVar5 + 1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  *(int *)(param_3 + 0x14) = (int)pcVar5 - (int)pcVar1;
  uVar4 = FUN_00c18bc0(param_1,param_2,param_3);
  return uVar4;
}



undefined4 FUN_00c178f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(param_3 + 0x18) = 0;
  if (*(int *)(*(int *)(param_3 + 0x20) + 4) != 2) {
    return 0;
  }
  iVar1 = func_0x00bd5fc0(uVar2);
  if (iVar1 == 0x1c) {
    uVar2 = func_0x00bd5db0(uVar2);
    uVar2 = func_0x00bb62e0(uVar2);
  }
  else {
    if (iVar1 != 0x198) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x637,"get_payload_private_key");
      func_0x00bc5160(6,0xe0,0);
      return 0;
    }
    uVar2 = func_0x00c0d910(uVar2);
    uVar2 = FUN_00baaa40(uVar2);
  }
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
  return uVar2;
}



undefined4 FUN_00c17990(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = param_3;
  param_3 = 0;
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  iVar2 = func_0x00bd5fc0(uVar3);
  if (iVar2 < 0x199) {
    if (iVar2 == 0x198) {
      if (*(int *)(*(int *)(iVar1 + 0x20) + 4) != 5) {
        return 0;
      }
      uVar3 = func_0x00c0d910(uVar3);
      uVar4 = func_0x00bb6190(uVar3);
      iVar2 = func_0x00bb5940(uVar4);
      uVar4 = func_0x00bb6310(uVar3);
      uVar3 = func_0x00baf190(uVar3);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = func_0x00c4fdc0(uVar4,uVar3,2,&param_3,iVar2);
      *(undefined4 *)(iVar1 + 0x1c) = uVar3;
      *(int *)(iVar1 + 0x18) = param_3;
      func_0x00bb5760(iVar2);
      goto LAB_00c17ac9;
    }
    if (iVar2 == 0x1c) goto LAB_00c17a84;
    if (iVar2 != 0x74) goto LAB_00c17a53;
    if (*(int *)(*(int *)(iVar1 + 0x20) + 4) != 2) {
      return 0;
    }
    uVar3 = func_0x00bd5e00(uVar3);
    uVar3 = func_0x00bc42d0(uVar3);
  }
  else {
    if (iVar2 != 0x398) {
LAB_00c17a53:
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x674,"get_payload_public_key");
      func_0x00bc5160(6,0xe0,0);
      return 0;
    }
LAB_00c17a84:
    iVar2 = *(int *)(*(int *)(iVar1 + 0x20) + 4);
    if (iVar2 == 2) {
      uVar3 = func_0x00bd5db0(uVar3);
      uVar3 = func_0x00bc3bb0(uVar3);
    }
    else {
      if (iVar2 != 5) {
        return 0;
      }
      uVar3 = func_0x00bd5db0(uVar3,&param_3,0,1);
      uVar3 = func_0x00c41150(uVar3);
      *(undefined4 *)(iVar1 + 0x1c) = uVar3;
      uVar3 = param_3;
    }
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
LAB_00c17ac9:
  uVar3 = FUN_00c18bc0(param_1,param_2,iVar1);
  FUN_00bbc580(param_3,"crypto\\evp\\ctrl_params_translate.c",0x679);
  return uVar3;
}



undefined4
FUN_00c17b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_5;
  func_0x00e87f70();
  iVar2 = func_0x00c0d910(*(undefined4 *)(param_5 + 0x18));
  param_5 = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x68e,"get_payload_public_key_ec");
    func_0x00bc5160(6,0xe0,0);
    return 0;
  }
  uVar3 = func_0x00bb6190(iVar2);
  iVar4 = func_0x00bb5940(uVar3);
  if (iVar4 != 0) {
    uVar3 = func_0x00baf190(iVar2);
    uVar5 = func_0x00bb6310(iVar2);
    if (*(int *)(*(int *)(iVar1 + 0x20) + 4) == 2) {
      iVar2 = func_0x00bb57f0(iVar4);
      iVar6 = func_0x00bb57f0(iVar4);
      if (((iVar6 != 0) && (iVar7 = func_0x00c11a40(uVar5,uVar3,iVar2,iVar6,iVar4), iVar7 != 0)) &&
         ((iVar7 = func_0x008ab040(**(undefined4 **)(iVar1 + 0x20),&DAT_01060bb8,2), iVar7 == 0 ||
          (iVar7 = func_0x008ab040(**(undefined4 **)(iVar1 + 0x20),&DAT_01060bbc,2), iVar2 = iVar6,
          iVar7 == 0)))) {
        *(int *)(iVar1 + 0x18) = iVar2;
        param_5 = FUN_00c18bc0(param_3,param_4,iVar1);
      }
    }
    func_0x00bb5760(iVar4);
    return param_5;
  }
  return 0;
}



undefined4 FUN_00c17c30(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  iVar1 = func_0x00bd5fc0(uVar2);
  if (iVar1 == 0x1c) {
    uVar2 = func_0x00bd5db0(uVar2);
    iVar1 = FUN_00bc39e0(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x6d7,"get_dh_dsa_payload_p");
      func_0x00bc5160(6,0xe0,0);
      return 0;
    }
    uVar2 = func_0x00bd5e00(uVar2);
    iVar1 = FUN_00bc39e0(uVar2);
  }
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c17cd0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if (iVar1 == 0x1c) {
    uVar2 = func_0x00bd5db0(*(undefined4 *)(param_3 + 0x18));
    iVar1 = func_0x00bb6310(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      return 0;
    }
    uVar2 = func_0x00bd5e00(*(undefined4 *)(param_3 + 0x18));
    iVar1 = func_0x00bb6310(uVar2);
  }
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c17d40(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if (iVar1 == 0x1c) {
    uVar2 = func_0x00bd5db0(*(undefined4 *)(param_3 + 0x18));
    iVar1 = func_0x00baf190(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      return 0;
    }
    uVar2 = func_0x00bd5e00(*(undefined4 *)(param_3 + 0x18));
    iVar1 = func_0x00baf190(uVar2);
  }
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c17db0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  iVar1 = func_0x00bd5fc0(uVar2);
  if (iVar1 != 0x198) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x728,
                    "get_ec_decoded_from_explicit_params");
    func_0x00bc5160(6,0xe0,0);
    return 0;
  }
  uVar2 = func_0x00c0d910(uVar2);
  iVar1 = func_0x00c12610(uVar2);
  if (iVar1 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x722,
                    "get_ec_decoded_from_explicit_params");
    func_0x00bc5160(6,0xa3,0);
  }
  else if (*(int *)(*(int *)(param_3 + 0x20) + 4) == 1) {
    *(int *)(param_3 + 0x14) = iVar1;
    *(undefined4 *)(param_3 + 0x18) = 0;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c17e70(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = FUN_00baaa40(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c17ee0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = func_0x00bb6160(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c17f50(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = func_0x00bb6140(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c17fc0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = FUN_00baaa50(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c18030(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = func_0x00bb62f0(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



void FUN_00c180a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  iVar1 = func_0x00bb6320(uVar2);
  if (iVar1 != 0) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (unaff_retaddr != 0)) &&
       (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2)) {
      *(int *)(in_stack_00000038 + 0x18) = unaff_retaddr;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c18170(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  uVar3 = func_0x00bb6320(uVar2);
  if (1 < uVar3) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (param_1 != 0)) && (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2))
    {
      *(int *)(in_stack_00000038 + 0x18) = param_1;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c18240(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  uVar3 = func_0x00bb6320(uVar2);
  if (2 < uVar3) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (param_2 != 0)) && (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2))
    {
      *(int *)(in_stack_00000038 + 0x18) = param_2;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c18310(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  uVar3 = func_0x00bb6320(uVar2);
  if (3 < uVar3) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (param_3 != 0)) && (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2))
    {
      *(int *)(in_stack_00000038 + 0x18) = param_3;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c183e0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_00000010;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  uVar3 = func_0x00bb6320(uVar2);
  if (4 < uVar3) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (in_stack_00000010 != 0)) &&
       (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2)) {
      *(int *)(in_stack_00000038 + 0x18) = in_stack_00000010;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c184b0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_00000014;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  uVar3 = func_0x00bb6320(uVar2);
  if (5 < uVar3) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (in_stack_00000014 != 0)) &&
       (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2)) {
      *(int *)(in_stack_00000038 + 0x18) = in_stack_00000014;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c18580(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_00000018;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  uVar3 = func_0x00bb6320(uVar2);
  if (6 < uVar3) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (in_stack_00000018 != 0)) &&
       (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2)) {
      *(int *)(in_stack_00000038 + 0x18) = in_stack_00000018;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c18650(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_stack_0000001c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  
  func_0x00e87f70();
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
  if (iVar1 != 6) {
    iVar1 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000038 + 0x18));
    if (iVar1 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(in_stack_00000038 + 0x18));
  uVar3 = func_0x00bb6320(uVar2);
  if (7 < uVar3) {
    iVar1 = func_0x00bb6280(uVar2,&stack0x00000000);
    if (((iVar1 != 0) && (in_stack_0000001c != 0)) &&
       (*(int *)(*(int *)(in_stack_00000038 + 0x20) + 4) == 2)) {
      *(int *)(in_stack_00000038 + 0x18) = in_stack_0000001c;
      FUN_00c18bc0(in_stack_00000030,in_stack_00000034,in_stack_00000038);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00c18720(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = FUN_00baaa30(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00c18790(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18));
  if ((iVar1 != 6) && (iVar1 = func_0x00bd5fc0(*(undefined4 *)(param_3 + 0x18)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = func_0x00c0d960(*(undefined4 *)(param_3 + 0x18));
  iVar1 = func_0x00bb6150(uVar2);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_3 + 0x20) + 4) == 2)) {
    *(int *)(param_3 + 0x18) = iVar1;
    uVar2 = FUN_00c18bc0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



void FUN_00c18800(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  iVar3 = func_0x00bb6320(uVar4);
  if (iVar3 != 0) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (unaff_retaddr != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = unaff_retaddr;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c188d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (1 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (param_1 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = param_1;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00c189a0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  int in_stack_00000060;
  
  func_0x00e87f70();
  iVar2 = in_stack_00000060;
  uVar1 = in_stack_0000005c;
  in_stack_00000050 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bd5fc0(*(undefined4 *)(in_stack_00000060 + 0x18));
  if (iVar3 != 6) {
    iVar3 = func_0x00bd5fc0(*(undefined4 *)(iVar2 + 0x18));
    if (iVar3 != 0x390) {
      FUN_008ab370();
      return;
    }
  }
  uVar4 = func_0x00c0d960(*(undefined4 *)(iVar2 + 0x18));
  uVar5 = func_0x00bb6320(uVar4);
  if (2 < uVar5) {
    iVar3 = func_0x00bb61d0(uVar4,&stack0x00000000,&stack0x00000028);
    if (((iVar3 != 0) && (param_2 != 0)) && (*(int *)(*(int *)(iVar2 + 0x20) + 4) == 2)) {
      *(int *)(iVar2 + 0x18) = param_2;
      FUN_00c18bc0(in_stack_00000058,uVar1,iVar2);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



uint FUN_00c18bc0(int param_1,int *param_2,char *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  int *piVar19;
  int in_stack_00000030;
  int in_stack_00000034;
  int *in_stack_00000038;
  
  func_0x00e87f70();
  piVar10 = in_stack_00000038;
  iVar14 = in_stack_00000034;
  iVar15 = in_stack_00000030;
  uVar11 = func_0x00c18a70(in_stack_00000030,in_stack_00000034,in_stack_00000038);
  if ((int)uVar11 < 1) {
    return uVar11;
  }
  switch(iVar15) {
  case 0:
  case 8:
    uVar11 = piVar10[5];
    break;
  case 1:
    if (piVar10[1] == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x19d,"default_fixup_args");
      func_0x00bc5160(6,0x8010c,"[action:%d, state:%d]",piVar10[1],iVar15);
      return 0;
    }
    if (*(int *)(iVar14 + 0xc) != 0) {
      puVar2 = (uint *)*piVar10;
      uVar13 = *puVar2;
      if ((((((uVar13 & 0xc1f0) == 0) || (puVar2[6] != 0)) &&
           (((uVar13 & 0x800) == 0 || (puVar2[6] != 0)))) &&
          (((uVar13 & 0x600) == 0 || (puVar2[6] != 0)))) &&
         (((uVar13 & 0x3000) == 0 || (puVar2[6] != 0)))) {
        puVar2 = (uint *)*piVar10;
        if ((((*puVar2 & 6) == 0) || (puVar2[5] != 0)) && (((*puVar2 & 8) == 0 || (puVar2[5] != 0)))
           ) goto LAB_00c18cd9;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x1b3,"default_fixup_args");
      func_0x00bc5160(6,0x93,0);
      return 0xfffffffe;
    }
LAB_00c18cd9:
    switch(*(undefined4 *)(iVar14 + 0x20)) {
    case 1:
      puVar12 = (undefined4 *)
                func_0x00bbfa40(&stack0x00000018,*(undefined4 *)(iVar14 + 0x1c),piVar10 + 5);
      break;
    case 2:
      if (piVar10[6] == 0) {
        puVar12 = (undefined4 *)
                  func_0x00bbfad0(&stack0x00000018,*(undefined4 *)(iVar14 + 0x1c),piVar10 + 5);
      }
      else {
        if (piVar10[1] != 2) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x1df,"default_fixup_args");
          func_0x00bc5160(6,0x8010c,"[action:%d, state:%d] trying to get a BIGNUM via ctrl call",
                          piVar10[1],iVar15);
          return 0;
        }
        iVar15 = func_0x00bba610(piVar10[6]);
        iVar15 = (int)(iVar15 + 7 + (iVar15 + 7 >> 0x1f & 7U)) >> 3;
        piVar10[0x19] = iVar15;
        iVar15 = FUN_00bbc4f0(iVar15,"crypto\\evp\\ctrl_params_translate.c",0x1ce);
        piVar10[0x17] = iVar15;
        if (iVar15 == 0) {
          return 0;
        }
        iVar15 = func_0x00bb9fc0(piVar10[6],iVar15,piVar10[0x19]);
        if (iVar15 < 0) {
          FUN_00bbc580(piVar10[0x17],"crypto\\evp\\ctrl_params_translate.c",0x1d2);
          piVar10[0x17] = 0;
          return 0;
        }
        puVar12 = (undefined4 *)
                  func_0x00bbf9e0(&stack0x00000018,*(undefined4 *)(iVar14 + 0x1c),piVar10[0x17],
                                  piVar10[0x19]);
      }
      break;
    default:
      return uVar11;
    case 4:
      puVar12 = (undefined4 *)
                func_0x00bbfb90(&stack0x00000018,*(undefined4 *)(iVar14 + 0x1c),piVar10[6],
                                piVar10[5]);
      break;
    case 5:
      puVar12 = (undefined4 *)
                func_0x00bbfaa0(&stack0x00000018,*(undefined4 *)(iVar14 + 0x1c),piVar10[6],
                                piVar10[5]);
      break;
    case 6:
      puVar12 = (undefined4 *)
                func_0x00bbfb60(&stack0x00000018,*(undefined4 *)(iVar14 + 0x1c),piVar10[6],
                                piVar10[5]);
      break;
    case 7:
      puVar12 = (undefined4 *)
                func_0x00bbfa70(&stack0x00000018,*(undefined4 *)(iVar14 + 0x1c),piVar10[6],
                                piVar10[5]);
    }
    puVar3 = (undefined4 *)piVar10[8];
    uVar7 = puVar12[1];
    uVar8 = puVar12[2];
    uVar9 = puVar12[3];
    *puVar3 = *puVar12;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = puVar12[4];
    return uVar11;
  case 2:
    if (piVar10[1] != 1) {
      return uVar11;
    }
    switch(*(undefined4 *)(iVar14 + 0x20)) {
    case 4:
    case 5:
    case 6:
    case 7:
      piVar10[5] = *(int *)(piVar10[8] + 0x10);
      return uVar11;
    default:
      return uVar11;
    }
  default:
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x18c,"default_fixup_args");
    func_0x00bc5160(6,0xc0101,"[action:%d, state:%d]",piVar10[1],iVar15);
    return 0;
  case 4:
    param_2 = (int *)piVar10[3];
    param_5 = piVar10[6];
    param_1 = 0;
    if (piVar10[1] != 2) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x224,"default_fixup_args");
      func_0x00bc5160(6,0x93,"[action:%d, state:%d] only setting allowed",piVar10[1],iVar15);
      return 0;
    }
    piVar19 = param_2;
    if (iVar14 != 0) {
      piVar4 = *(int **)(iVar14 + 0x1c);
      piVar10[3] = (int)piVar4;
      piVar19 = piVar4;
      if (piVar10[4] != 0) {
        piVar19 = piVar10 + 10;
        *piVar19 = (int)&LAB_00786568;
        uVar13 = func_0x00bbc050(piVar19,piVar4,0x32);
        if (uVar13 < 4) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x235,"default_fixup_args");
          func_0x00bc5160(6,0xc0103,0);
          return 0xffffffff;
        }
      }
    }
    param_4 = func_0x00bed280(*piVar10);
    pcVar5 = (char *)piVar10[6];
    param_3 = pcVar5 + 1;
    pcVar17 = pcVar5;
    do {
      cVar1 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar1 != '\0');
    iVar14 = func_0x00c65e20(piVar10[8],param_4,piVar19,pcVar5,(int)pcVar17 - (int)param_3,&param_1)
    ;
    if (iVar14 == 0) {
      if (param_1 != 0) {
        return 0;
      }
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x242,"default_fixup_args");
      func_0x00bc5160(6,0x93,"[action:%d, state:%d] name=%s, value=%s",piVar10[1],iVar15,param_2,
                      param_5);
      return 0xfffffffe;
    }
    piVar10[0x17] = *(int *)(piVar10[8] + 8);
    piVar10[0x19] = *(int *)(piVar10[8] + 0xc);
    return uVar11;
  case 5:
    return uVar11;
  case 7:
  }
  if (iVar15 == 7) {
    if (piVar10[1] == 2) {
      switch(*(undefined4 *)(iVar14 + 0x20)) {
      case 1:
        uVar11 = func_0x00bbfcd0(piVar10[8],piVar10 + 5);
        return uVar11;
      case 2:
        goto LAB_00c19058;
      default:
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x283,"default_fixup_args");
        func_0x00bc5160(6,0x8010c,"[action:%d, state:%d] unknown OSSL_PARAM data type %d",piVar10[1]
                        ,7,*(undefined4 *)(iVar14 + 0x20));
        return 0;
      case 4:
        uVar11 = func_0x00bc0850(piVar10[8],piVar10[6],piVar10[7]);
        return uVar11;
      case 5:
        uVar11 = func_0x00bc01d0(piVar10[8],piVar10 + 6,piVar10[7],piVar10 + 5);
        return uVar11;
      case 7:
        uVar11 = func_0x00bc0140(piVar10[8],piVar10[6],piVar10 + 7);
        return uVar11;
      }
    }
    if ((piVar10[1] == 1) && (*(int *)(iVar14 + 0x20) == 7)) {
      piVar10[6] = (int)(piVar10 + 0x18);
      return uVar11;
    }
  }
  else if (((iVar15 == 8) || (iVar15 == 0)) && (piVar10[1] == 1)) {
    iVar6 = piVar10[5];
    iVar16 = *(int *)(iVar14 + 0x20);
    iVar18 = iVar6;
    if (iVar15 == 0) {
      iVar18 = piVar10[7];
    }
    if (iVar16 == 0) {
      if (*(int *)(iVar14 + 0x24) == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x295,"default_fixup_args");
        func_0x00bc5160(6,0xc0103,0);
        return 0;
      }
      iVar16 = *(int *)(piVar10[8] + 4);
    }
    switch(iVar16) {
    case 1:
      uVar11 = func_0x00bc0c00(piVar10[8],iVar6);
      return uVar11;
    case 2:
      goto LAB_00c191de;
    default:
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\ctrl_params_translate.c",0x2b1,"default_fixup_args");
      func_0x00bc5160(6,0x8010c,"[action:%d, state:%d] unsupported OSSL_PARAM data type %d",
                      piVar10[1],iVar15,*(undefined4 *)(iVar14 + 0x20));
      return 0;
    case 4:
      uVar11 = func_0x00bc12f0(piVar10[8],piVar10[6]);
      return uVar11;
    case 5:
      uVar11 = func_0x00bc1050(piVar10[8],piVar10[6],iVar18);
      return uVar11;
    case 7:
      uVar11 = func_0x00bc1000(piVar10[8],*(undefined4 *)piVar10[6],iVar18);
      return uVar11;
    }
  }
  return uVar11;
LAB_00c191de:
  if (piVar10[6] == 0) {
    uVar11 = func_0x00bc10c0(piVar10[8],iVar6);
    return uVar11;
  }
  uVar11 = func_0x00bc0a50(piVar10[8],piVar10[6]);
  return uVar11;
LAB_00c19058:
  if (piVar10[6] == 0) {
    iVar15 = func_0x00bc0300(piVar10[8],piVar10 + 5);
    return (uint)(iVar15 != 0);
  }
  iVar15 = func_0x00bbfbe0(piVar10[8],piVar10[6]);
  if (iVar15 != 0) {
    return 1;
  }
  return 0;
}



int thunk_FUN_00bf0f10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bb8800(4,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1f70(param_3,2);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = func_0x00c07780(param_2);
    iVar1 = func_0x00c075f0(uVar2,param_3);
    if (iVar1 == 0) {
      FUN_00bcaeb0();
      uVar3 = func_0x00ba8520(param_2,param_3,0);
      FUN_00ba8550(uVar3);
      func_0x00bcad80();
      iVar1 = func_0x00c075f0(uVar2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = func_0x00c07540(uVar2,iVar1,FUN_00bf0ea0,&stack0x00000000);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 0;
}



void thunk_FUN_00bc3b90(undefined4 *param_1)

{
  if (param_1[0xf] == 0) {
    func_0x00bc2790(*param_1);
  }
  return;
}



int thunk_FUN_00bf0fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x00e87f70();
  iVar1 = func_0x00bb8800(8,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc1f70(param_3,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = func_0x00c07780(param_2);
    iVar1 = func_0x00c075f0(uVar2,param_3);
    if (iVar1 == 0) {
      FUN_00bcaeb0();
      uVar3 = func_0x00bd4740(param_2,param_3,0);
      FUN_00bd4770(uVar3);
      func_0x00bcad80();
      iVar1 = func_0x00c075f0(uVar2,param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = func_0x00c07540(uVar2,iVar1,FUN_00bf0ec0,&stack0x00000000);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 0;
}



undefined4 * thunk_FUN_00bc42b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return param_1;
  }
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    return (undefined4 *)param_1[0xe];
  }
  puVar1 = (undefined4 *)func_0x00bc2790(*param_1);
  return puVar1;
}



int FUN_00c1a0e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_retaddr;
  
  func_0x00e87f70();
  iVar5 = 0;
  iVar4 = 0;
  iVar2 = func_0x00c21f80(0,&param_4,&param_3,&stack0x00000000,param_7);
  if (iVar2 == 0) {
    return 0;
  }
  func_0x00bdbc30(0,&param_2,&param_5,unaff_retaddr);
  if (param_2 == 0x10) {
    iVar4 = func_0x00bfca60(0,&param_4,param_3);
    if (iVar4 != 0) {
      param_1 = param_5[2];
      uVar1 = *param_5;
      iVar2 = func_0x00bc27b0(*unaff_retaddr);
      if (iVar2 == 0x1c) {
        iVar5 = FUN_00c663e0(0,&param_1,uVar1);
      }
      else {
        if (iVar2 != 0x398) goto LAB_00c1a21e;
        iVar5 = FUN_00c66400(0,&param_1,uVar1);
      }
      if (iVar5 != 0) {
        iVar2 = func_0x00bba770();
        if (iVar2 != 0) {
          iVar3 = func_0x00bd21b0(iVar4,iVar2);
          if (iVar3 != 0) {
            iVar2 = func_0x00c0f8e0(iVar5,0,iVar2);
            if (iVar2 != 0) {
              iVar2 = func_0x00c40fc0(iVar5);
              if (iVar2 != 0) {
                func_0x00bfbe40(iVar4);
                return iVar5;
              }
            }
            goto LAB_00c1a245;
          }
        }
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\dh\\dh_backend.c",0xdf,"ossl_dh_key_from_pkcs8");
        func_0x00bc5160(5,0x6a,0);
        FUN_00bba080(iVar2);
        goto LAB_00c1a245;
      }
    }
  }
LAB_00c1a21e:
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\dh\\dh_backend.c",0xec,"ossl_dh_key_from_pkcs8");
  func_0x00bc5160(5,0x72,0);
LAB_00c1a245:
  FUN_00c0f7d0(iVar5);
  func_0x00bfbe40(iVar4);
  return 0;
}



int FUN_00c1a5c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,undefined4 *param_6,undefined4 param_7,int param_8,undefined4 param_9,
                undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  func_0x00e87f70();
  iVar6 = 0;
  iVar3 = 0;
  iVar2 = 0;
  param_1 = 0;
  iVar1 = func_0x00c21f80(0,&param_4,&param_3,&param_2,param_10);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00bdbc30(0,&param_5,&param_6,param_2);
  iVar1 = func_0x00bfca60(0,&param_4,param_3);
  param_8 = iVar1;
  if (((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0x102)) || (param_5 != 0x10)) {
LAB_00c1a728:
    uVar4 = 0x68;
    uVar5 = 0xb8;
  }
  else {
    param_7 = param_6[2];
    iVar3 = FUN_00c21990(0,&param_7,*param_6);
    if (iVar3 == 0) goto LAB_00c1a728;
    iVar2 = func_0x00bba770();
    if (iVar2 == 0) {
LAB_00c1a71e:
      uVar4 = 0x6d;
      uVar5 = 0x9c;
    }
    else {
      iVar1 = func_0x00bd21b0(iVar1,iVar2);
      if (iVar1 == 0) goto LAB_00c1a71e;
      iVar6 = func_0x00bba5e0();
      if (iVar6 == 0) {
        uVar4 = 0x80003;
        uVar5 = 0xa1;
      }
      else {
        param_1 = func_0x00bb5930();
        if (param_1 == 0) {
          uVar4 = 0x80003;
          uVar5 = 0xa5;
        }
        else {
          uVar4 = FUN_00bc39e0(iVar3);
          uVar5 = func_0x00baf190(iVar3);
          func_0x00bba880(iVar2,4);
          iVar1 = func_0x00c2b1f0(iVar6,uVar5,iVar2,uVar4,param_1);
          if (iVar1 == 0) {
            uVar4 = 0x6d;
            uVar5 = 0xad;
          }
          else {
            iVar1 = func_0x00c0fd20(iVar3,iVar6,iVar2);
            if (iVar1 != 0) goto LAB_00c1a769;
            uVar4 = 0xc0103;
            uVar5 = 0xb1;
          }
        }
      }
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\dsa\\dsa_backend.c",uVar5,"ossl_dsa_key_from_pkcs8");
  func_0x00bc5160(10,uVar4,0);
  FUN_00bba400(iVar2);
  FUN_00bba400(iVar6);
  FUN_00c0fc00(iVar3);
  iVar3 = 0;
LAB_00c1a769:
  func_0x00bb5760(param_1);
  func_0x00bfbe40(param_8);
  return iVar3;
}



int FUN_00c1b100(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  param_4 = 0;
  iVar1 = func_0x00c21f80(0,&param_4,&param_7,&param_5,param_9);
  if (iVar1 == 0) {
    return 0;
  }
  param_3 = 0;
  param_2 = (undefined4 *)0x0;
  iVar3 = 0;
  func_0x00bdbc30(0,&param_3,&param_2,param_5);
  iVar1 = func_0x00c12820(param_10,param_11);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_backend.c",0x302,"ossl_ec_key_param_from_x509_algor");
    uVar4 = 0x80010;
LAB_00c1b2be:
    func_0x00bc5160(0x10,uVar4,0);
  }
  else {
    if (param_3 == 0x10) {
      param_6 = param_2[2];
      iVar2 = FUN_00c20a50(&stack0x00000000,&param_6,*param_2);
      if (iVar2 != 0) {
LAB_00c1b22d:
        param_1 = iVar1;
        if (iVar1 != 0) {
          iVar1 = FUN_00c20bc0(&param_1,&param_4,param_7);
          if (iVar1 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\ec\\ec_backend.c",0x33b,"ossl_ec_key_from_pkcs8");
            func_0x00bc5160(0x10,0x8e,0);
            FUN_00c12650(param_1);
            return 0;
          }
          return param_1;
        }
        goto LAB_00c1b2e0;
      }
      FUN_00bc4f50();
      uVar4 = 0x30d;
LAB_00c1b2ad:
      func_0x00bc5050("crypto\\ec\\ec_backend.c",uVar4,"ossl_ec_key_param_from_x509_algor");
      uVar4 = 0x8e;
      goto LAB_00c1b2be;
    }
    if (param_3 != 6) {
      FUN_00bc4f50();
      uVar4 = 799;
      goto LAB_00c1b2ad;
    }
    uVar4 = func_0x00bc27b0(param_2);
    iVar3 = func_0x00c4f530(param_10,param_11,uVar4);
    if (iVar3 != 0) {
      func_0x00bab690(iVar3,1);
      iVar2 = func_0x00c12a60(iVar1,iVar3);
      if (iVar2 != 0) {
        func_0x00c10570(iVar3);
        goto LAB_00c1b22d;
      }
    }
  }
  FUN_00c12650(iVar1);
  func_0x00c10570(iVar3);
  param_1 = 0;
LAB_00c1b2e0:
  FUN_00c12650(param_1);
  return 0;
}



int FUN_00c1c3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  func_0x00e87f70();
  iVar1 = func_0x00c21f80(0,&param_2,&param_1,&stack0x00000000,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00bec6e0(0,&param_2,param_1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\rsa\\rsa_backend.c",0x2b6,"ossl_rsa_key_from_pkcs8");
    func_0x00bc5160(4,0x80004,0);
    return 0;
  }
  iVar2 = func_0x00c1c4d0(iVar1,unaff_retaddr);
  if (iVar2 == 0) {
    FUN_00bb6040(iVar1);
    return 0;
  }
  func_0x00bb6030(iVar1,0xf000);
  iVar2 = func_0x00bc27b0(*unaff_retaddr);
  if (iVar2 == 6) {
    func_0x00bb6550(iVar1,0);
  }
  else if (iVar2 == 0x390) {
    func_0x00bb6550(iVar1,0x1000);
    return iVar1;
  }
  return iVar1;
}



undefined * FUN_00c1d0c0(void)

{
  return &DAT_0106126c;
}



undefined * FUN_00c1d0d0(void)

{
  return &DAT_010612b0;
}



undefined * FUN_00c1d0e0(void)

{
  return &DAT_01061354;
}



undefined * FUN_00c1d0f0(void)

{
  return &DAT_01061398;
}



undefined * FUN_00c1d100(void)

{
  return &DAT_010613dc;
}



undefined4 FUN_00c1d110(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iStack00000008;
  int iStack00000010;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  
  func_0x00e87f70();
  iStack00000010 = 0;
  iVar4 = func_0x00bd1830(in_stack_00000020);
  if (0 < iVar4) {
    do {
      if (0 < iStack00000010) {
        func_0x00bab050(in_stack_00000024,&DAT_0113d23c);
      }
      puVar5 = (undefined4 *)func_0x00bd1a80(in_stack_00000020,iStack00000010);
      func_0x00bbc8e0(in_stack_00000024,"%*sPolicy: ",in_stack_00000028,&DAT_0112e1b4);
      func_0x00bfba40(in_stack_00000024,*puVar5);
      if (puVar5[1] != 0) {
        func_0x00bab050(in_stack_00000024,&DAT_0113d23c);
        uVar1 = puVar5[1];
        iStack00000008 = 0;
        iVar4 = func_0x00bd1830(uVar1);
        if (0 < iVar4) {
          do {
            if (0 < iStack00000008) {
              func_0x00bab050(in_stack_00000024,&DAT_0113d23c);
            }
            puVar5 = (undefined4 *)func_0x00bd1a80(uVar1,iStack00000008);
            iVar4 = func_0x00bc27b0(*puVar5);
            if (iVar4 == 0xa4) {
              func_0x00bbc8e0(in_stack_00000024,"%*sCPS: %.*s",in_stack_00000028 + 2,&DAT_0112e1b4,
                              *(undefined4 *)puVar5[1],((undefined4 *)puVar5[1])[2]);
            }
            else if (iVar4 == 0xa5) {
              func_0x00bbc8e0(in_stack_00000024,"%*sUser Notice:\n",in_stack_00000028 + 2,
                              &DAT_0112e1b4);
              iVar4 = in_stack_00000028 + 4;
              piVar2 = (int *)puVar5[1];
              piVar3 = (int *)*piVar2;
              if (piVar3 != (int *)0x0) {
                func_0x00bbc8e0(in_stack_00000024,"%*sOrganization: %.*s\n",iVar4,&DAT_0112e1b4,
                                *(undefined4 *)*piVar3,((undefined4 *)*piVar3)[2]);
                iVar6 = func_0x00bd1830(piVar3[1]);
                puVar7 = &DAT_01141e74;
                if (iVar6 < 2) {
                  puVar7 = &DAT_0112e1b4;
                }
                func_0x00bbc8e0(in_stack_00000024,"%*sNumber%s: ",iVar4,&DAT_0112e1b4,puVar7);
                iVar8 = 0;
                iVar6 = func_0x00bd1830(piVar3[1]);
                if (0 < iVar6) {
                  do {
                    iVar6 = func_0x00bd1a80(piVar3[1],iVar8);
                    if (iVar8 != 0) {
                      func_0x00bab050(in_stack_00000024,&DAT_0112e444);
                    }
                    if (iVar6 == 0) {
                      func_0x00bab050(in_stack_00000024,"(null)");
                    }
                    else {
                      iVar6 = FUN_00be3910(0,iVar6);
                      if (iVar6 == 0) goto LAB_00c1d371;
                      func_0x00bab050(in_stack_00000024,iVar6);
                      FUN_00bbc580(iVar6,"crypto\\x509\\v3_cpols.c",0x1e8);
                    }
                    iVar8 = iVar8 + 1;
                    iVar6 = func_0x00bd1830(piVar3[1]);
                  } while (iVar8 < iVar6);
                }
                if (piVar2[1] != 0) {
                  func_0x00bab050(in_stack_00000024,&DAT_0113d23c);
                }
              }
              puVar5 = (undefined4 *)piVar2[1];
              if (puVar5 != (undefined4 *)0x0) {
                func_0x00bbc8e0(in_stack_00000024,"%*sExplicit Text: %.*s",iVar4,&DAT_0112e1b4,
                                *puVar5,puVar5[2]);
              }
            }
            else {
              func_0x00bbc8e0(in_stack_00000024,"%*sUnknown Qualifier: ",in_stack_00000028 + 4,
                              &DAT_0112e1b4);
              func_0x00bfba40(in_stack_00000024,*puVar5);
            }
LAB_00c1d371:
            iStack00000008 = iStack00000008 + 1;
            iVar4 = func_0x00bd1830(uVar1);
          } while (iStack00000008 < iVar4);
        }
      }
      iStack00000010 = iStack00000010 + 1;
      iVar4 = func_0x00bd1830(in_stack_00000020);
    } while (iStack00000010 < iVar4);
  }
  return 1;
}



int FUN_00c1d3c0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  undefined4 uStack00000008;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  func_0x00e87f70();
  iVar3 = func_0x00be2b70(in_stack_0000001c);
  iVar4 = func_0x00bd1830(iVar3);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\x509\\v3_cpols.c",0x66,"r2i_certpol");
    func_0x00bc5160(0x22,0x80022,0);
    return 0;
  }
  iVar5 = func_0x00bd17c0(0,iVar4);
  if (iVar5 != 0) {
    iVar12 = 0;
    uStack00000008 = 0;
    if (0 < iVar4) {
      do {
        iVar6 = func_0x00bd1a80(iVar3,iVar12);
        if ((*(int *)(iVar6 + 8) != 0) || (pbVar2 = *(byte **)(iVar6 + 4), pbVar2 == (byte *)0x0)) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\x509\\v3_cpols.c",0x74,"r2i_certpol");
          func_0x00bc5160(0x22,0x86,0);
          func_0x00ba6530(4,"name=",*(undefined4 *)(iVar6 + 4),", value=",*(undefined4 *)(iVar6 + 8)
                         );
          goto LAB_00c1d692;
        }
        pbVar11 = &DAT_010614d8;
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar7;
          bVar13 = bVar1 < *pbVar11;
          if (bVar1 != *pbVar11) {
LAB_00c1d4c0:
            uVar8 = -(uint)bVar13 | 1;
            goto LAB_00c1d4c5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar13 = bVar1 < pbVar11[1];
          if (bVar1 != pbVar11[1]) goto LAB_00c1d4c0;
          pbVar7 = pbVar7 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar1 != 0);
        uVar8 = 0;
LAB_00c1d4c5:
        if (uVar8 == 0) {
          uStack00000008 = 1;
        }
        else {
          if (*pbVar2 == 0x40) {
            iVar9 = func_0x00c68410(in_stack_00000018,pbVar2 + 1);
            if (iVar9 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\x509\\v3_cpols.c",0x81,"r2i_certpol");
              func_0x00bc5160(0x22,0x87,&DAT_0112e274,*(undefined4 *)(iVar6 + 4));
              goto LAB_00c1d692;
            }
            piVar10 = (int *)func_0x00c1dc80(in_stack_00000018,iVar9,uStack00000008);
            func_0x00c68460(in_stack_00000018,iVar9);
            if (piVar10 == (int *)0x0) goto LAB_00c1d692;
          }
          else {
            iVar9 = func_0x00bc2c50(pbVar2,0);
            if (iVar9 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\x509\\v3_cpols.c",0x8b,"r2i_certpol");
              func_0x00bc5160(0x22,0x6e,&DAT_0112e274,*(undefined4 *)(iVar6 + 4));
              goto LAB_00c1d692;
            }
            piVar10 = (int *)func_0x00c08650(&DAT_010612b0);
            if (piVar10 == (int *)0x0) {
              FUN_00bfb4c0(iVar9);
              FUN_00bc4f50();
              func_0x00bc5050("crypto\\x509\\v3_cpols.c",0x93,"r2i_certpol");
              func_0x00bc5160(0x22,0x8000d,0);
              goto LAB_00c1d692;
            }
            *piVar10 = iVar9;
          }
          iVar6 = func_0x00bd18c0(iVar5,piVar10);
          if (iVar6 == 0) {
            func_0x00c08cb0(piVar10,&DAT_010612b0);
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\x509\\v3_cpols.c",0x9a,"r2i_certpol");
            func_0x00bc5160(0x22,0x8000f,0);
            goto LAB_00c1d692;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar4);
    }
    func_0x00bd1860(iVar3,FUN_00be27e0);
    return iVar5;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\v3_cpols.c",0x6c,"r2i_certpol");
  func_0x00bc5160(0x22,0x8000f,0);
LAB_00c1d692:
  func_0x00bd1860(iVar3,FUN_00be27e0);
  func_0x00bd1860(iVar5,FUN_00c1d6d0);
  return 0;
}



undefined * FUN_00c1d6c0(void)

{
  return &DAT_01061310;
}



void FUN_00c1d6d0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_010612b0);
  return;
}



void FUN_00c1d6f0(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_01061354);
  return;
}



void FUN_00c1e000(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    FUN_00bfb4c0(*(undefined4 *)(param_1 + 4));
    if ((*param_1 & 4) == 0) {
      func_0x00bd1860(*(undefined4 *)(param_1 + 8),FUN_00c1d6f0);
    }
    func_0x00bd1860(*(undefined4 *)(param_1 + 0xc),FUN_00bfb4c0);
    FUN_00bbc580(param_1,"crypto\\x509\\pcy_data.c",0x1b);
  }
  return;
}



void FUN_00c1e130(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00bfc730(*(undefined4 *)(*(int *)*param_1 + 4),*(undefined4 *)(*(int *)*param_2 + 4));
  return;
}



void FUN_00c1e370(undefined4 param_1)

{
  FUN_00bbc580(param_1,"crypto\\x509\\pcy_node.c",0x82);
  return;
}



void FUN_00c1e880(int *param_1,int *param_2)

{
  func_0x00bfc730(*(undefined4 *)(*param_1 + 4),*(undefined4 *)(*param_2 + 4));
  return;
}



int FUN_00c1f460(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  func_0x00e87f70();
  iVar1 = func_0x00c1f6f0(0,param_2,param_3,param_4,0,0);
  if (iVar1 == 0) {
    uVar2 = func_0x00bfcaa0(0,&stack0x00000000,param_4);
    uVar4 = *param_3;
    iVar1 = func_0x00bd1830(uVar2);
    if (iVar1 == 6) {
      uVar4 = 0x74;
    }
    else {
      iVar1 = func_0x00bd1830(uVar2);
      if (iVar1 == 4) {
        uVar4 = 0x198;
      }
      else {
        iVar1 = func_0x00bd1830(uVar2);
        if (iVar1 == 3) {
          iVar1 = func_0x00c22030(0,&stack0x00000000,param_4);
          func_0x00bd1860(uVar2,FUN_00bfc9d0);
          if (iVar1 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\asn1\\d2i_pr.c",0xd0,"d2i_AutoPrivateKey_legacy");
            func_0x00bc5160(0xd,0xa7,0);
          }
          else {
            iVar3 = func_0x00c22330(iVar1,0,0);
            func_0x00c21f40(iVar1);
            if (iVar3 != 0) {
              *param_3 = uVar4;
              if (param_2 == (int *)0x0) {
                return iVar3;
              }
              *param_2 = iVar3;
              return iVar3;
            }
          }
          return 0;
        }
        uVar4 = 6;
      }
    }
    func_0x00bd1860(uVar2,FUN_00bfc9d0);
    iVar1 = func_0x00c1f8f0(uVar4,param_2,param_3,param_4,0,0);
  }
  return iVar1;
}



undefined * FUN_00c1faa0(void)

{
  return &DAT_01061864;
}



undefined * FUN_00c1fab0(void)

{
  return &DAT_010618e0;
}



undefined * FUN_00c1fac0(void)

{
  return &DAT_01061938;
}



undefined * FUN_00c1fad0(void)

{
  return &DAT_01061998;
}



undefined * FUN_00c1fae0(void)

{
  return &DAT_010619dc;
}



undefined * FUN_00c1faf0(void)

{
  return &DAT_01061a34;
}



undefined * FUN_00c1fb00(void)

{
  return &DAT_01061b20;
}



undefined * FUN_00c1fb10(void)

{
  return &DAT_01061ac8;
}



int FUN_00c20a50(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  func_0x00e87f70();
  piVar1 = param_3;
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x44e,"d2i_ECParameters");
    func_0x00bc5160(0x10,0xc0102,0);
    return 0;
  }
  if ((param_2 == (int *)0x0) || (iVar2 = *param_2, iVar2 == 0)) {
    iVar2 = func_0x00c127b0();
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x454,"d2i_ECParameters");
      func_0x00bc5160(0x10,0x80010,0);
      return 0;
    }
  }
  param_3 = (int *)*piVar1;
  piVar3 = (int *)func_0x00c09060(0,&param_3,param_4,&DAT_01061b20);
  if (piVar3 != (int *)0x0) {
    iVar4 = func_0x00c207f0(piVar3);
    if (iVar4 != 0) {
      if (*piVar3 == 1) {
        *(undefined4 *)(iVar4 + 0x18) = 1;
      }
      if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)0x0) {
        func_0x00c10570(*(undefined4 *)(iVar2 + 0xc));
        *(int *)(iVar2 + 0xc) = iVar4;
      }
      func_0x00c08cb0(piVar3,&DAT_01061b20);
      *piVar1 = (int)param_3;
      iVar4 = func_0x00baf190(*(undefined4 *)(iVar2 + 0xc));
      if (iVar4 == 0x494) {
        func_0x00c12a50(iVar2,4);
      }
      *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
      if (param_2 != (int *)0x0) {
        *param_2 = iVar2;
      }
      return iVar2;
    }
  }
  func_0x00c08cb0(piVar3,&DAT_01061b20);
  if ((param_2 != (int *)0x0) && (*param_2 == iVar2)) {
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
    return 0;
  }
  FUN_00c12650(iVar2);
  return 0;
}



int FUN_00c20bc0(undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  func_0x00e87f70();
  uVar7 = *param_3;
  puVar2 = (undefined4 *)func_0x00c09060(0,&stack0x00000000,param_4,&DAT_01061b90);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_2 == (int *)0x0) || (iVar3 = *param_2, iVar3 == 0)) {
    iVar3 = func_0x00c127b0();
    if (iVar3 != 0) goto LAB_00c20c38;
    FUN_00bc4f50();
    uVar7 = 0x3b0;
LAB_00c20c22:
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",uVar7,"d2i_ECPrivateKey");
    uVar7 = 0x80010;
  }
  else {
LAB_00c20c38:
    if (puVar2[2] != 0) {
      func_0x00c10570(*(undefined4 *)(iVar3 + 0xc));
      iVar4 = func_0x00c207f0(puVar2[2]);
      *(int *)(iVar3 + 0xc) = iVar4;
      if ((iVar4 != 0) && (*(int *)puVar2[2] == 1)) {
        *(undefined4 *)(iVar4 + 0x18) = 1;
      }
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
      FUN_00bc4f50();
      uVar7 = 0x3bf;
      goto LAB_00c20c22;
    }
    *(undefined4 *)(iVar3 + 8) = *puVar2;
    iVar4 = puVar2[1];
    if (iVar4 != 0) {
      uVar5 = FUN_00bbba70(iVar4);
      uVar5 = FUN_00bc39e0(iVar4,uVar5);
      iVar4 = func_0x00c128b0(iVar3,uVar5);
      if (iVar4 == 0) goto LAB_00c20da8;
      iVar4 = func_0x00baf190(*(undefined4 *)(iVar3 + 0xc));
      if (iVar4 == 0x494) {
        func_0x00c12a50(iVar3,4);
      }
      func_0x00c11760(*(undefined4 *)(iVar3 + 0x10));
      iVar4 = func_0x00c11e70(*(undefined4 *)(iVar3 + 0xc));
      *(int *)(iVar3 + 0x10) = iVar4;
      if (iVar4 == 0) {
        FUN_00bc4f50();
        uVar7 = 0x3d5;
      }
      else {
        if (puVar2[3] == 0) {
          pcVar1 = *(code **)(**(int **)(iVar3 + 0xc) + 0xb0);
          if (pcVar1 != (code *)0x0) {
            iVar4 = (*pcVar1)(iVar3);
            if (iVar4 != 0) {
              *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 2;
              goto LAB_00c20d57;
            }
          }
          goto LAB_00c20da8;
        }
        uVar5 = FUN_00bc39e0(puVar2[3]);
        uVar6 = FUN_00bbba70(puVar2[3]);
        iVar4 = func_0x00c12840(iVar3,uVar5,uVar6,0);
        if (iVar4 != 0) {
LAB_00c20d57:
          if (param_2 != (int *)0x0) {
            *param_2 = iVar3;
          }
          func_0x00c08cb0(puVar2,&DAT_01061b90);
          *param_3 = uVar7;
          *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 1;
          return iVar3;
        }
        FUN_00bc4f50();
        uVar7 = 0x3e0;
      }
      goto LAB_00c20c22;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x3cb,"d2i_ECPrivateKey");
    uVar7 = 0x7d;
  }
  func_0x00bc5160(0x10,uVar7,0);
LAB_00c20da8:
  if ((param_2 == (int *)0x0) || (*param_2 != iVar3)) {
    FUN_00c12650(iVar3);
  }
  func_0x00c08cb0(puVar2,&DAT_01061b90);
  return 0;
}



int FUN_00c21460(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x443,"i2d_ECParameters");
    func_0x00bc5160(0x10,0xc0102,0);
    return 0;
  }
  iVar1 = func_0x00c1fe60(*(undefined4 *)(param_1 + 0xc),0);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x397,"i2d_ECPKParameters");
    func_0x00bc5160(0x10,0x78,0);
    return 0;
  }
  iVar2 = func_0x00c0b760(iVar1,param_2,&DAT_01061b20);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x39b,"i2d_ECPKParameters");
    func_0x00bc5160(0x10,0x79,0);
    func_0x00c08cb0(iVar1,&DAT_01061b20);
    return 0;
  }
  func_0x00c08cb0(iVar1,&DAT_01061b20);
  return iVar2;
}



int FUN_00c21540(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar2 = param_4;
  iVar3 = 0;
  iVar4 = 0;
  param_2 = 0;
  puVar5 = (undefined4 *)0x0;
  param_1 = 0;
  if (((param_4 == 0) || (*(int *)(param_4 + 0xc) == 0)) ||
     (((*(byte *)(param_4 + 0x18) & 2) == 0 && (*(int *)(param_4 + 0x10) == 0)))) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x403,"i2d_ECPrivateKey");
    uVar6 = 0xc0102;
  }
  else {
    puVar5 = (undefined4 *)func_0x00c08650(&DAT_01061b90);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00bc4f50();
      uVar6 = 0x408;
    }
    else {
      *puVar5 = *(undefined4 *)(iVar2 + 8);
      iVar4 = func_0x00c12920(iVar2,&stack0x00000000);
      if (iVar4 == 0) {
        FUN_00bc4f50();
        uVar6 = 0x411;
      }
      else {
        func_0x00bfc2c0(puVar5[1],0,iVar4);
        if ((*(byte *)(iVar2 + 0x18) & 1) == 0) {
          iVar1 = func_0x00c1fe60(*(undefined4 *)(iVar2 + 0xc),puVar5[2]);
          puVar5[2] = iVar1;
          if (iVar1 == 0) {
            FUN_00bc4f50();
            uVar6 = 0x41c;
            goto LAB_00c215a6;
          }
        }
        if ((*(byte *)(iVar2 + 0x18) & 2) == 0) {
          iVar1 = func_0x00bfc8b0();
          puVar5[3] = iVar1;
          if (iVar1 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("crypto\\ec\\ec_asn1.c",0x424,"i2d_ECPrivateKey");
            uVar6 = 0x8000d;
            goto LAB_00c216fe;
          }
          iVar2 = func_0x00c12780(iVar2,*(undefined4 *)(iVar2 + 0x1c),&param_1,0);
          if (iVar2 == 0) {
            FUN_00bc4f50();
            uVar6 = 0x42b;
            goto LAB_00c215a6;
          }
          func_0x00bfc660(puVar5[3],0);
          func_0x00bfc2c0(puVar5[3],param_1,iVar2);
          param_1 = 0;
        }
        iVar3 = func_0x00c0b760(puVar5,param_5,&DAT_01061b90);
        if (iVar3 != 0) {
          param_2 = 1;
          goto LAB_00c21708;
        }
        FUN_00bc4f50();
        uVar6 = 0x435;
      }
    }
LAB_00c215a6:
    func_0x00bc5050("crypto\\ec\\ec_asn1.c",uVar6,"i2d_ECPrivateKey");
    uVar6 = 0x80010;
  }
LAB_00c216fe:
  func_0x00bc5160(0x10,uVar6,0);
LAB_00c21708:
  FUN_00bbc6c0(0,iVar4,"crypto\\ec\\ec_asn1.c",0x43a);
  FUN_00bbc580(param_1,"crypto\\ec\\ec_asn1.c",0x43b);
  func_0x00c08cb0(puVar5,&DAT_01061b90);
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}



byte FUN_00c21900(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = func_0x00c0fcc0();
    *param_2 = iVar1;
    return -(iVar1 != 0) & 2;
  }
  if (param_1 == 2) {
    FUN_00c0fc00(*param_2);
    *param_2 = 0;
    return 2;
  }
  return 1;
}



void FUN_00c21950(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_01061ed0);
  return;
}



void FUN_00c21970(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_01061fd0);
  return;
}



void FUN_00c21990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x00c09060(param_1,param_2,param_3,&DAT_01061f44);
  return;
}



void FUN_00c219b0(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01061ed0);
  return;
}



void FUN_00c219d0(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01061fd0);
  return;
}



void FUN_00c219f0(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01061f44);
  return;
}



undefined * FUN_00c21a10(void)

{
  return &DAT_010620d0;
}



bool FUN_00c21a20(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  switch(param_1) {
  case 10:
    iVar1 = func_0x00c22620(param_4 + 2,*param_2);
    if (iVar1 < 1) {
      return false;
    }
  case 0xc:
    iVar1 = func_0x00c693a0(*param_2,*param_4);
    param_4[1] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
  default:
    return true;
  case 0xb:
  case 0xd:
    iVar1 = func_0x00c68e30(*param_2,param_4[1]);
    return 0 < iVar1;
  }
}



undefined4 FUN_00c21aa0(int param_1,int *param_2)

{
  if (param_1 == 3) {
    func_0x00bd5d50(*(undefined4 *)(*param_2 + 0x1c));
  }
  return 1;
}



undefined4 FUN_00c21ac0(int param_1,int *param_2)

{
  if (param_1 == 3) {
    FUN_00bde1d0(*(undefined4 *)(*param_2 + 0x10));
  }
  return 1;
}



undefined * FUN_00c21ae0(void)

{
  return &DAT_010622d0;
}



undefined * FUN_00c21af0(void)

{
  return &DAT_0106228c;
}



undefined * FUN_00c21b00(void)

{
  return &DAT_010623b0;
}



undefined * FUN_00c21b10(void)

{
  return &DAT_010621c8;
}



undefined * FUN_00c21b20(void)

{
  return &DAT_01062408;
}



undefined * FUN_00c21b30(void)

{
  return &DAT_01062328;
}



undefined * FUN_00c21b40(void)

{
  return &DAT_010624b4;
}



undefined * FUN_00c21b50(void)

{
  return &DAT_01062568;
}



undefined * FUN_00c21b60(void)

{
  return &DAT_010624f8;
}



undefined * FUN_00c21b70(void)

{
  return &DAT_01062130;
}



void FUN_00c21b90(int param_1)

{
  if (param_1 != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x1c),"crypto\\pkcs7\\pk7_asn1.c",0x74);
    func_0x00c08cb0(param_1,&DAT_01062130);
  }
  return;
}



undefined * FUN_00c21be0(void)

{
  return &DAT_01062830;
}



void FUN_00c21c10(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01062830);
  return;
}



undefined * FUN_00c21c30(void)

{
  return &DAT_010628c8;
}



bool FUN_00c21c40(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (param_1 == 1) {
    iVar2 = func_0x00bd1790();
    *(int *)(iVar1 + 0x18) = iVar2;
    return iVar2 != 0;
  }
  return true;
}



undefined4 FUN_00c21c70(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  switch(param_1) {
  case 3:
    thunk_FUN_00bfc170(*(undefined4 *)(iVar2 + 0x30));
    FUN_00bbc580(*(undefined4 *)(iVar2 + 0x38),"crypto\\x509\\x_req.c",0x3f);
    return 1;
  case 4:
    thunk_FUN_00bfc170(*(undefined4 *)(iVar2 + 0x30));
  case 1:
    *(undefined4 *)(iVar2 + 0x30) = 0;
    return 1;
  case 0xf:
    iVar1 = param_4[0xe];
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x34) = param_4[0xd];
      FUN_00bbc580(*(undefined4 *)(iVar2 + 0x38),"crypto\\x509\\x_req.c",0x98);
      *(undefined4 *)(iVar2 + 0x38) = 0;
      if (iVar1 != 0) {
        iVar1 = func_0x00bbbc70(iVar1,"crypto\\x509\\x_req.c",0x9b);
        *(int *)(iVar2 + 0x38) = iVar1;
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    if ((param_4[5] != 0) && (iVar1 = func_0x00bdd220(param_4[5]), iVar1 != 0)) {
      iVar1 = func_0x00bd5b50(iVar1);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\x509\\x_req.c",0x4d,&DAT_010629a8);
        func_0x00bc5160(0xb,0x80006,0);
        return 0;
      }
      iVar2 = func_0x00bdd2f0(iVar2 + 0x14,iVar1);
      if (iVar2 != 0) {
        func_0x00bd5d50(iVar1);
        return 1;
      }
      func_0x00bd5d50(iVar1);
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\x509\\x_req.c",0x52,&DAT_010629a8);
      func_0x00bc5160(0xb,0xc0103,0);
      return 0;
    }
    break;
  case 0x10:
    *param_4 = *(undefined4 *)(iVar2 + 0x34);
    return 1;
  case 0x11:
    *param_4 = *(undefined4 *)(iVar2 + 0x38);
  }
  return 1;
}



undefined * FUN_00c21e20(void)

{
  return &DAT_010629d8;
}



undefined4 FUN_00c21f10(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 2) && (puVar1 = *(undefined4 **)(*param_2 + 8), puVar1 != (undefined4 *)0x0)) {
    func_0x00401320(puVar1[2],*puVar1);
  }
  return 1;
}



undefined * FUN_00c21f60(void)

{
  return &DAT_01062b18;
}



void FUN_00c22050(undefined4 param_1,undefined4 param_2)

{
  func_0x00c0b760(param_1,param_2,&DAT_01062b18);
  return;
}



undefined * FUN_00c224d0(void)

{
  return &DAT_01062dfc;
}



undefined * FUN_00c224e0(void)

{
  return &DAT_01062be0;
}



undefined * FUN_00c224f0(void)

{
  return &DAT_01062c38;
}



undefined * FUN_00c22500(void)

{
  return &DAT_01062c90;
}



undefined * FUN_00c22510(void)

{
  return &DAT_01062cd4;
}



undefined * FUN_00c22520(void)

{
  return &DAT_01062d2c;
}



undefined * FUN_00c22900(void)

{
  return &DAT_01063028;
}



void FUN_00c22910(undefined4 param_1)

{
  func_0x00c08cb0(param_1,&DAT_01063028);
  return;
}



undefined4 FUN_00c22970(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  memset(puVar1 + 8,0,0x4c);
  *puVar1 = 0xc1059ed8;
  puVar1[1] = 0x367cd507;
  puVar1[2] = 0x3070dd17;
  puVar1[3] = 0xf70e5939;
  puVar1[4] = 0xffc00b31;
  puVar1[5] = 0x68581511;
  puVar1[6] = 0x64f98fa7;
  puVar1[7] = 0xbefa4fa4;
  puVar1[0x1b] = 0x1c;
  return 1;
}



void FUN_00c22990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00bb4300(uVar1);
  return;
}



void FUN_00c229b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00bb4290(param_2,uVar1);
  return;
}



undefined4 FUN_00c229d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  memset(puVar1 + 8,0,0x4c);
  *puVar1 = 0x6a09e667;
  puVar1[1] = 0xbb67ae85;
  puVar1[2] = 0x3c6ef372;
  puVar1[3] = 0xa54ff53a;
  puVar1[4] = 0x510e527f;
  puVar1[5] = 0x9b05688c;
  puVar1[6] = 0x1f83d9ab;
  puVar1[7] = 0x5be0cd19;
  puVar1[0x1b] = 0x20;
  return 1;
}



void FUN_00c229f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00bb4820(uVar1);
  return;
}



void FUN_00c22a10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00bb4400(param_2,uVar1);
  return;
}



undefined4 FUN_00c22a30(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  *puVar1 = 0xc1059ed8;
  puVar1[1] = 0xcbbb9d5d;
  puVar1[2] = 0x367cd507;
  puVar1[3] = 0x629a292a;
  puVar1[4] = 0x3070dd17;
  puVar1[5] = 0x9159015a;
  puVar1[6] = 0xf70e5939;
  puVar1[7] = 0x152fecd8;
  puVar1[8] = 0xffc00b31;
  puVar1[9] = 0x67332667;
  puVar1[10] = 0x68581511;
  puVar1[0xb] = 0x8eb44a87;
  puVar1[0xc] = 0x64f98fa7;
  puVar1[0xd] = 0xdb0c2e0d;
  puVar1[0xe] = 0xbefa4fa4;
  puVar1[0xf] = 0x47b5481d;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0x30;
  return 1;
}



void FUN_00c22a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  FUN_00bb7d90(uVar1);
  return;
}



void FUN_00c22a70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00bb7cd0(param_2,uVar1);
  return;
}



undefined4 FUN_00c22a90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  *puVar1 = 0xf3bcc908;
  puVar1[1] = 0x6a09e667;
  puVar1[2] = 0x84caa73b;
  puVar1[3] = 0xbb67ae85;
  puVar1[4] = 0xfe94f82b;
  puVar1[5] = 0x3c6ef372;
  puVar1[6] = 0x5f1d36f1;
  puVar1[7] = 0xa54ff53a;
  puVar1[8] = 0xade682d1;
  puVar1[9] = 0x510e527f;
  puVar1[10] = 0x2b3e6c1f;
  puVar1[0xb] = 0x9b05688c;
  puVar1[0xc] = 0xfb41bd6b;
  puVar1[0xd] = 0x1f83d9ab;
  puVar1[0xe] = 0x137e2179;
  puVar1[0xf] = 0x5be0cd19;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0x40;
  return 1;
}



void FUN_00c22ab0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1);
  func_0x00bb7e70(param_2,uVar1);
  return;
}



undefined4 FUN_00c22ad0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  *puVar1 = 0x19544da2;
  puVar1[1] = 0x8c3d37c8;
  puVar1[2] = 0x89dcd4d6;
  puVar1[3] = 0x73e19966;
  puVar1[4] = 0x32ff9c82;
  puVar1[5] = 0x1dfab7ae;
  puVar1[6] = 0x582f9fcf;
  puVar1[7] = 0x679dd514;
  puVar1[8] = 0x7bd44da8;
  puVar1[9] = 0xf6d2b69;
  puVar1[10] = 0x4c48942;
  puVar1[0xb] = 0x77e36f73;
  puVar1[0xc] = 0x6a1d36c8;
  puVar1[0xd] = 0x3f9d85a8;
  puVar1[0xe] = 0x91d692a1;
  puVar1[0xf] = 0x1112e6ad;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0x1c;
  return 1;
}



undefined4 FUN_00c22af0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0x00baf190(param_1);
  *puVar1 = 0xfc2bf72c;
  puVar1[1] = 0x22312194;
  puVar1[2] = 0xc84c64c2;
  puVar1[3] = 0x9f555fa3;
  puVar1[4] = 0x6f53b151;
  puVar1[5] = 0x2393b86b;
  puVar1[6] = 0x5940eabd;
  puVar1[7] = 0x96387719;
  puVar1[8] = 0xa88effe3;
  puVar1[9] = 0x96283ee2;
  puVar1[10] = 0x53863992;
  puVar1[0xb] = 0xbe5e1e25;
  puVar1[0xc] = 0x2c85b8aa;
  puVar1[0xd] = 0x2b0199fc;
  puVar1[0xe] = 0x81c52ca2;
  puVar1[0xf] = 0xeb72ddc;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0x20;
  return 1;
}



void FUN_00c22b10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,6,*(int *)(*(int *)(param_1 + 4) + 8) << 3);
  func_0x00c6f5f0(uVar1);
  return;
}



void FUN_00c22b40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,param_2,param_3);
  func_0x00c6f7d0(uVar1);
  return;
}



void FUN_00c22b60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00baf190(param_1);
  FUN_00c6f550(iVar1,param_2,*(undefined4 *)(iVar1 + 0x174));
  return;
}



void FUN_00c22b80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00baf190(param_1,0x1f,*(int *)(*(int *)(param_1 + 4) + 8) << 3);
  func_0x00c6f5f0(uVar1);
  return;
}



void FUN_00c22bb0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack00000004;
  undefined8 in_stack_00000000;
  uint in_stack_0000003c;
  undefined4 *in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  
  iStack00000004 = (int)((ulonglong)in_stack_00000000 >> 0x20);
  if (iStack00000004 != 0) {
    func_0x00baf190();
  }
  func_0x00e87f70();
  uVar2 = in_stack_00000050;
  puVar1 = in_stack_00000044;
  in_stack_0000003c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (in_stack_00000048 == 0x1d) {
    if ((((in_stack_00000044 != (undefined4 *)0x0) && (in_stack_0000004c == 0x30)) &&
        (iVar3 = FUN_00bb72a0(in_stack_00000044,in_stack_00000050,0x30), 0 < iVar3)) &&
       ((iVar3 = FUN_00bb72a0(puVar1,&stack0x00000000,0x28), iVar3 != 0 &&
        (iVar3 = func_0x00bb7100(&stack0x00000028,puVar1), iVar3 != 0)))) {
      memset(puVar1 + 5,0,0x4c);
      *puVar1 = 0x67452301;
      puVar1[1] = 0xefcdab89;
      puVar1[2] = 0x98badcfe;
      puVar1[3] = 0x10325476;
      puVar1[4] = 0xc3d2e1f0;
      iVar3 = FUN_00bb72a0(puVar1,uVar2,0x30);
      if ((0 < iVar3) &&
         ((iVar3 = FUN_00bb72a0(puVar1,&stack0x00000000,0x28), iVar3 != 0 &&
          (iVar3 = FUN_00bb72a0(puVar1,&stack0x00000028,0x14), iVar3 != 0)))) {
        func_0x00401320(&stack0x00000028,0x14);
        FUN_008ab370();
        return;
      }
    }
    FUN_008ab370();
    return;
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00c22be0(int param_1,int param_2,undefined4 param_3)

{
  if ((param_1 != 0) && (param_2 == 3)) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x174) = param_3;
    return 1;
  }
  return 0;
}



undefined * FUN_00c22d00(void)

{
  return &DAT_0106376c;
}



undefined * FUN_00c22d20(void)

{
  return &DAT_0106398c;
}



undefined * FUN_00c22d30(void)

{
  return &DAT_0106395c;
}



undefined * FUN_00c22d40(void)

{
  return &DAT_01063904;
}



undefined * FUN_00c22d50(void)

{
  return &DAT_01063a20;
}



int FUN_00c22d60(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iStack00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uVar15;
  
  func_0x00e87f70();
  iVar11 = 0;
  iVar12 = 0;
  iVar2 = func_0x00bd1830(in_stack_0000001c);
  iVar3 = func_0x00bd17c0(0,iVar2);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    uVar15 = 0xfd;
LAB_00c22da6:
    func_0x00bc5050("crypto\\x509\\v3_crld.c",uVar15,"v2i_crld");
    uVar15 = 0x8000f;
LAB_00c23022:
    func_0x00bc5160(0x22,uVar15,0);
LAB_00c2302c:
    FUN_00be0540(iVar12);
    FUN_00be03d0(iVar11);
    func_0x00bd1860(iVar3,FUN_00c23490);
    return 0;
  }
  iStack00000004 = 0;
  if (0 < iVar2) {
    do {
      iVar12 = func_0x00bd1a80(in_stack_0000001c,iStack00000004);
      if (*(int *)(iVar12 + 8) != 0) {
        iVar12 = func_0x00c293a0(in_stack_00000014,in_stack_00000018,iVar12);
        iVar11 = 0;
        if (iVar12 == 0) goto LAB_00c2302c;
        iVar11 = func_0x00be0400();
        if (iVar11 == 0) {
          FUN_00bc4f50();
          uVar15 = 0x112;
        }
        else {
          iVar4 = func_0x00bd18c0(iVar11,iVar12);
          if (iVar4 == 0) {
            FUN_00bc4f50();
            uVar15 = 0x116;
            goto LAB_00c22da6;
          }
          iVar12 = 0;
          piVar8 = (int *)func_0x00c08650(&DAT_0106395c);
          if (piVar8 == (int *)0x0) {
            FUN_00bc4f50();
            uVar15 = 0x11b;
          }
          else {
            func_0x00bd18c0(iVar3,piVar8);
            iVar4 = func_0x00c08650(&DAT_01063904);
            *piVar8 = iVar4;
            if (iVar4 != 0) {
              *(int *)(iVar4 + 4) = iVar11;
              *(undefined4 *)*piVar8 = 0;
              goto LAB_00c22f86;
            }
            FUN_00bc4f50();
            uVar15 = 0x120;
          }
        }
        func_0x00bc5050("crypto\\x509\\v3_crld.c",uVar15,"v2i_crld");
        uVar15 = 0x8000d;
        goto LAB_00c23022;
      }
      iVar12 = func_0x00c68410(in_stack_00000018,*(undefined4 *)(iVar12 + 4));
      if (iVar12 == 0) {
        iVar11 = 0;
        iVar12 = 0;
        goto LAB_00c2302c;
      }
      iVar11 = func_0x00c08650(&DAT_0106395c);
      if (iVar11 == 0) {
LAB_00c22fa7:
        func_0x00c08cb0(iVar11,&DAT_0106395c);
        func_0x00c68460(in_stack_00000018,iVar12);
        iVar11 = 0;
        iVar12 = 0;
        goto LAB_00c2302c;
      }
      iVar13 = 0;
      iVar4 = func_0x00bd1830(iVar12);
      if (0 < iVar4) {
        do {
          iVar4 = func_0x00bd1a80(iVar12,iVar13);
          iVar5 = func_0x00c23760(iVar11,in_stack_00000018,iVar4);
          if (iVar5 < 1) {
            if (iVar5 < 0) goto LAB_00c22fa7;
            pbVar10 = *(byte **)(iVar4 + 4);
            pcVar9 = "reasons";
            pbVar6 = pbVar10;
            do {
              bVar1 = *pbVar6;
              bVar14 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00c22e80:
                uVar7 = -(uint)bVar14 | 1;
                goto LAB_00c22e85;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar14 = bVar1 < ((byte *)pcVar9)[1];
              if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c22e80;
              pbVar6 = pbVar6 + 2;
              pcVar9 = (char *)((byte *)pcVar9 + 2);
            } while (bVar1 != 0);
            uVar7 = 0;
LAB_00c22e85:
            if (uVar7 == 0) {
              iVar4 = func_0x00c23960(iVar11 + 4,*(undefined4 *)(iVar4 + 8));
            }
            else {
              pcVar9 = "CRLissuer";
              do {
                bVar1 = *pbVar10;
                bVar14 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_00c22ec0:
                  uVar7 = -(uint)bVar14 | 1;
                  goto LAB_00c22ec5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar10[1];
                bVar14 = bVar1 < ((byte *)pcVar9)[1];
                if (bVar1 != ((byte *)pcVar9)[1]) goto LAB_00c22ec0;
                pbVar10 = pbVar10 + 2;
                pcVar9 = (char *)((byte *)pcVar9 + 2);
              } while (bVar1 != 0);
              uVar7 = 0;
LAB_00c22ec5:
              if (uVar7 != 0) goto LAB_00c22ee4;
              iVar4 = func_0x00c23580(in_stack_00000018,*(undefined4 *)(iVar4 + 8));
              *(int *)(iVar11 + 8) = iVar4;
            }
            if (iVar4 == 0) goto LAB_00c22fa7;
          }
LAB_00c22ee4:
          iVar13 = iVar13 + 1;
          iVar4 = func_0x00bd1830(iVar12);
        } while (iVar13 < iVar4);
      }
      func_0x00c68460(in_stack_00000018,iVar12);
      func_0x00bd18c0(iVar3,iVar11);
LAB_00c22f86:
      iStack00000004 = iStack00000004 + 1;
    } while (iStack00000004 < iVar2);
  }
  return iVar3;
}



undefined4 FUN_00c23050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = func_0x00bd1830(param_2);
  if (0 < iVar1) {
    do {
      if (0 < iVar3) {
        func_0x00bab050(param_3,&DAT_0113d23c);
      }
      piVar2 = (int *)func_0x00bd1a80(param_2,iVar3);
      if (*piVar2 != 0) {
        func_0x00c23620(param_3,*piVar2,param_4);
      }
      if (piVar2[1] != 0) {
        func_0x00c236c0(param_3,"Reasons",piVar2[1],param_4);
      }
      if (piVar2[2] != 0) {
        func_0x00bbc8e0(param_3,"%*sCRL Issuer:\n",param_4,&DAT_0112e1b4);
        func_0x00be2570(param_3,piVar2[2],param_4);
