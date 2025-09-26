undefined8 FUN_00d15090(void)

{
  return 7200000000000;
}



void FUN_00d150a0(int *param_1)

{
  int *piVar1;
  
  if ((param_1 != (int *)0x0) &&
     ((piVar1 = param_1, *param_1 == 0 ||
      ((*param_1 == 1 && (piVar1 = (int *)param_1[8], (int *)param_1[8] != (int *)0x0)))))) {
    FUN_00bbc580(piVar1[0x20a],"ssl\\t1_lib.c",0x78);
    func_0x00d26ae0(param_1);
  }
  return;
}



bool FUN_00d154e0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00d26fc0(param_1);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x20))(param_1);
    return iVar1 != 0;
  }
  return false;
}



void FUN_00d17170(undefined4 *param_1,undefined4 *param_2)

{
  func_0x00bde860(*param_1,*param_2);
  return;
}



undefined4 FUN_00d18db0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 != 0x101) && (iVar1 = func_0x00bfa920(param_2), iVar1 == 0)) {
    return 0;
  }
  iVar1 = func_0x00bfaaf0(param_2,&param_3);
  if ((iVar1 != 0) && (param_3 < 0x80000000)) {
    *(uint *)(param_1 + 0xa8) = param_3;
    *(undefined4 *)(param_1 + 0xac) = 0;
    return 1;
  }
  return 0;
}



void FUN_00d18e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,int param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_stack_000000c4;
  int in_stack_000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uVar6;
  
  func_0x00e87f70();
  iVar1 = in_stack_000000cc;
  in_stack_000000c4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar4 = 0;
  iVar5 = 0;
  param_5 = in_stack_000000d0;
  param_4 = 0;
  iVar3 = *(int *)(in_stack_000000cc + 0x284);
  param_7 = *(undefined4 **)(in_stack_000000cc + 4);
  param_2 = 0;
  param_1 = 0;
  if ((iVar3 == 0) || (*(int *)(in_stack_000000cc + 0x288) == 0)) {
    FUN_00bc4f50();
    uVar6 = 0x143;
LAB_00d19175:
    func_0x00bc5050("ssl\\statem\\statem_lib.c",uVar6,"tls_construct_cert_verify");
    uVar6 = 0xc0103;
LAB_00d19186:
    func_0x00d06d50(iVar1,0x50,uVar6,0);
  }
  else {
    param_6 = *(int *)(*(int *)(in_stack_000000cc + 0x288) + 4);
    if (param_6 == 0) {
LAB_00d19155:
      FUN_00bc4f50();
      uVar6 = 0x149;
      goto LAB_00d19175;
    }
    iVar2 = func_0x00d154a0(param_7,iVar3,&param_4);
    if (iVar2 == 0) goto LAB_00d19155;
    iVar4 = func_0x00bd46b0();
    if (iVar4 == 0) {
      FUN_00bc4f50();
      uVar6 = 0x14f;
LAB_00d18eb9:
      func_0x00bc5050("ssl\\statem\\statem_lib.c",uVar6,"tls_construct_cert_verify");
      uVar6 = 0x80006;
      goto LAB_00d19186;
    }
    iVar2 = func_0x00d175e0(iVar1,&stack0x00000020,&param_3,&param_1);
    if (iVar2 != 0) {
      if ((*(byte *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x74) + 0x28) & 2) != 0) {
        iVar2 = func_0x00bfae30(param_5,*(undefined2 *)(iVar3 + 4),0,2);
        if (iVar2 == 0) {
          FUN_00bc4f50();
          uVar6 = 0x15a;
          goto LAB_00d19175;
        }
      }
      iVar2 = param_4;
      if (param_4 != 0) {
        iVar2 = FUN_00bc42b0(param_4);
      }
      iVar2 = func_0x00c0c5e0(iVar4,&param_2,iVar2,*param_7,param_7[0xa1],param_6,0);
      if (iVar2 < 1) {
        FUN_00bc4f50();
        uVar6 = 0x162;
      }
      else if (*(int *)(iVar3 + 0x10) == 0x390) {
        iVar2 = func_0x00bb5ef0(param_2,6);
        if (0 < iVar2) {
          iVar2 = func_0x00bb5ff0(param_2,0xffffffff);
          if (0 < iVar2) goto LAB_00d18fb3;
        }
        FUN_00bc4f50();
        uVar6 = 0x16a;
      }
      else {
LAB_00d18fb3:
        if (*(int *)(iVar1 + 0x20) == 0x300) {
          iVar2 = func_0x00c0c610(iVar4);
          if (0 < iVar2) {
            iVar2 = func_0x00bd4390(iVar4,0x1d,*(undefined4 *)(*(int *)(iVar1 + 0x71c) + 4),
                                    *(int *)(iVar1 + 0x71c) + 0x48);
            if (0 < iVar2) {
              iVar2 = func_0x00c0c230(iVar4,0,&stack0x00000000);
              if (0 < iVar2) {
                iVar5 = FUN_00bbc4f0(0,"ssl\\statem\\statem_lib.c",0x17c);
                if (iVar5 != 0) {
                  iVar2 = func_0x00c0c230(iVar4,iVar5,&stack0x00000000);
                  if (0 < iVar2) goto LAB_00d190c3;
                }
                FUN_00bc4f50();
                uVar6 = 0x17f;
                goto LAB_00d18eb9;
              }
            }
          }
          FUN_00bc4f50();
          uVar6 = 0x179;
        }
        else {
          iVar2 = func_0x00c0c0b0(iVar4,0,&stack0x00000000,param_3,param_1);
          if (iVar2 < 1) {
            FUN_00bc4f50();
            uVar6 = 0x188;
          }
          else {
            iVar5 = FUN_00bbc4f0(0,"ssl\\statem\\statem_lib.c",0x18b);
            if (iVar5 != 0) {
              iVar2 = func_0x00c0c0b0(iVar4,iVar5,&stack0x00000000,param_3,param_1);
              if (0 < iVar2) {
LAB_00d190c3:
                iVar3 = *(int *)(iVar3 + 0x10);
                if (((iVar3 == 0x32b) || (iVar3 == 0x3d3)) || (iVar3 == 0x3d4)) {
                  func_0x00c1eb00(iVar5,0,0);
                }
                iVar3 = func_0x00bfb180(param_5,iVar5,0,2);
                if (iVar3 == 0) {
                  FUN_00bc4f50();
                  uVar6 = 0x19f;
                  goto LAB_00d19175;
                }
                iVar3 = func_0x00d42750(iVar1,0);
                if (iVar3 != 0) {
                  FUN_00bbc580(iVar5,"ssl\\statem\\statem_lib.c",0x1a9);
                  func_0x00bd45b0(iVar4);
                  goto LAB_00d191ac;
                }
                goto LAB_00d19191;
              }
            }
            FUN_00bc4f50();
            uVar6 = 0x18e;
          }
        }
      }
      goto LAB_00d18eb9;
    }
  }
LAB_00d19191:
  FUN_00bbc580(iVar5,"ssl\\statem\\statem_lib.c",0x1ad);
  func_0x00bd45b0(iVar4);
LAB_00d191ac:
  FUN_008ab370();
  return;
}



undefined4 FUN_00d191d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bfae30(param_2,1,0,1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_lib.c",0x3bd,"tls_construct_change_cipher_spec");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00d19220(int param_1,undefined4 param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  uint _Size;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x8b4) != 4)) {
    *(undefined4 *)(param_1 + 0x80) = 1;
  }
  iVar2 = (*(int **)(param_1 + 0xc))[0x1d];
  if ((((((*(byte *)(iVar2 + 0x28) & 8) == 0) && (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1))
       && (iVar1 != 0x10000)) && (*(int *)(param_1 + 0x38) == 0)) &&
     (((*(int *)(param_1 + 0x9c) != 0 || ((*(uint *)(param_1 + 0x788) & 0x100000) != 0)) &&
      ((*(int *)(param_1 + 0x23c) == 0 &&
       (iVar2 = (**(code **)(iVar2 + 8))(param_1,0x92), iVar2 == 0)))))) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x74);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
    uVar3 = *(undefined4 *)(iVar2 + 0x14);
  }
  else {
    uVar4 = *(undefined4 *)(iVar2 + 0x18);
    uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  }
  _Src = (void *)(param_1 + 0x124);
  _Size = (**(code **)(iVar2 + 0xc))(param_1,uVar4,uVar3,_Src);
  if (_Size != 0) {
    *(uint *)(param_1 + 0x1a4) = _Size;
    iVar2 = func_0x00bfad90(param_2,_Src,_Size);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      uVar4 = 0x28f;
    }
    else {
      if (((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) != 0) ||
           (iVar2 = **(int **)(param_1 + 0xc), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
         (iVar2 = func_0x00d037a0(param_1,"CLIENT_RANDOM",*(int *)(param_1 + 0x71c) + 0x48,
                                  *(undefined4 *)(*(int *)(param_1 + 0x71c) + 4)), iVar2 == 0)) {
        return 0;
      }
      if (_Size < 0x41) {
        if (*(int *)(param_1 + 0x38) != 0) {
          memcpy((void *)(param_1 + 0x2f8),_Src,_Size);
          *(uint *)(param_1 + 0x338) = _Size;
          return 1;
        }
        memcpy((void *)(param_1 + 0x2b4),_Src,_Size);
        *(uint *)(param_1 + 0x2f4) = _Size;
        return 1;
      }
      FUN_00bc4f50();
      uVar4 = 0x2a2;
    }
    func_0x00bc5050("ssl\\statem\\statem_lib.c",uVar4,"tls_construct_finished");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
  }
  return 0;
}



undefined4 FUN_00d193b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bfae30(param_2,*(int *)(param_1 + 0x8b0),*(int *)(param_1 + 0x8b0) >> 0x1f,1);
  if (iVar1 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_lib.c",0x2b5,"tls_construct_key_update");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x8b0) = 0xffffffff;
  return 1;
}



int FUN_00d1b2b0(int param_1)

{
  if ((param_1 != 0x6d) && (param_1 != 0x74)) {
    switch(param_1) {
    case 0:
      return 0;
    default:
      return -1;
    case 10:
      return 10;
    case 0x14:
      return 0x14;
    case 0x15:
      return 0x15;
    case 0x16:
      return 0x16;
    case 0x1e:
      return 0x1e;
    case 0x28:
    case 0x6d:
    case 0x74:
      return 0x28;
    case 0x2a:
      return 0x2a;
    case 0x2b:
      return 0x2b;
    case 0x2c:
      return 0x2c;
    case 0x2d:
      return 0x2d;
    case 0x2e:
      return 0x2e;
    case 0x2f:
      return 0x2f;
    case 0x30:
      return 0x30;
    case 0x31:
      return 0x31;
    case 0x32:
      return 0x32;
    case 0x33:
      return 0x33;
    case 0x3c:
      return 0x3c;
    case 0x46:
      return 0x46;
    case 0x47:
      return 0x47;
    case 0x50:
      return 0x50;
    case 0x56:
      return 0x56;
    case 0x5a:
      return 0x5a;
    case 100:
      return 100;
    case 0x6e:
      return 0x6e;
    case 0x6f:
      return 0x6f;
    case 0x70:
      return 0x70;
    case 0x71:
      return 0x71;
    case 0x72:
      return 0x72;
    case 0x73:
      return 0x73;
    case 0x78:
      return 0x78;
    }
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00d1b82a)

void FUN_00d1b2d0(size_t param_1,int param_2,int param_3,undefined4 param_4,char *param_5,
                 undefined4 param_6,undefined1 *param_7,int param_8,undefined4 param_9,
                 undefined4 param_10,int param_11,int param_12,uint param_13,int param_14,
                 undefined4 param_15,undefined4 param_16,size_t param_17,uint param_18)

{
  byte bVar1;
  size_t sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_stack_0000011c;
  int in_stack_00000124;
  uint in_stack_00000128;
  char *pcVar9;
  
  func_0x00e87f70();
  iVar8 = in_stack_00000124;
  in_stack_0000011c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_7 = &stack0x0000005c;
  param_11 = 0;
  param_12 = 0;
  param_13 = 0;
  param_8 = 0;
  param_6 = 0;
  param_3 = 0;
  param_9 = 0;
  param_10 = *(undefined4 *)(in_stack_00000124 + 4);
  param_1 = 0;
  param_18 = ~in_stack_00000128 & 1;
  param_15 = 0x10;
  bVar1 = (byte)in_stack_00000128;
  if (((bVar1 & 0x12) == 0x12) || ((bVar1 & 0x21) == 0x21)) {
    if ((in_stack_00000128 & 0x40) == 0) {
      if ((char)bVar1 < '\0') {
        param_11 = in_stack_00000124 + 0x4ac;
        param_2 = in_stack_00000124 + 0x3ec;
        uVar3 = func_0x00d0b120(in_stack_00000124);
        param_12 = func_0x00bc4320(uVar3);
        if (param_12 < 1) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\tls13_enc.c",0x24c,"tls13_change_cipher_state");
          func_0x00d06d50(iVar8,0x50,0xc0103,0);
          goto LAB_00d1b801;
        }
        param_7 = (undefined1 *)(iVar8 + 0x56c);
        pcVar9 = "c hs traffic";
        param_5 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
      }
      else {
        param_2 = in_stack_00000124 + 0x42c;
        param_5 = "CLIENT_TRAFFIC_SECRET_0";
        pcVar9 = "c ap traffic";
        param_7 = (undefined1 *)(in_stack_00000124 + 0x52c);
      }
      uVar4 = in_stack_00000128 & 0x40;
LAB_00d1b8a8:
      param_4 = 0xc;
      param_8 = func_0x00d0b120(iVar8);
      param_3 = *(int *)(iVar8 + 0x254);
      param_6 = *(undefined4 *)(iVar8 + 600);
      param_9 = *(undefined4 *)(iVar8 + 0x25c);
      iVar6 = func_0x00d42750(iVar8,1);
      if ((iVar6 == 0) ||
         (iVar6 = func_0x00d034c0(iVar8,&stack0x0000005c,0x40,&param_1), iVar6 == 0))
      goto LAB_00d1b801;
      goto LAB_00d1b904;
    }
    iVar6 = func_0x00d07ff0(*(undefined4 *)(in_stack_00000124 + 0x71c));
    param_4 = 0xb;
    param_2 = iVar8 + 0x3ac;
    param_5 = "CLIENT_EARLY_TRAFFIC_SECRET";
    pcVar9 = "c e traffic";
    param_14 = func_0x00baa730(*(undefined4 *)(iVar8 + 0xf8),3,0,&param_16);
    if (0 < param_14) {
      if (((*(int *)(iVar8 + 0x9c) == 2) && (*(int *)(iVar8 + 0xe84) != 0)) &&
         (*(int *)(*(int *)(iVar8 + 0x71c) + 0x2f4) == 0)) {
        iVar6 = *(int *)(iVar8 + 0x720);
        if ((iVar6 == 0) || (*(int *)(iVar8 + 0xe84) != *(int *)(iVar6 + 0x2f4))) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\tls13_enc.c",0x207,"tls13_change_cipher_state");
          func_0x00d06d50(iVar8,0x50,0xc0103,0);
          goto LAB_00d1b3d4;
        }
        iVar6 = func_0x00d07ff0(iVar6);
      }
      uVar3 = param_10;
      if (iVar6 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\tls13_enc.c",0x20d,"tls13_change_cipher_state");
        func_0x00d06d50(iVar8,0x50,0xdb,0);
        goto LAB_00d1b3d4;
      }
      iVar7 = func_0x00d09f50(param_10,iVar6,&param_3);
      if (iVar7 == 0) {
        func_0x00d06de0(iVar8,0x50);
        goto LAB_00d1b3d4;
      }
      uVar4 = func_0x00bc2510(param_3);
      if (((uVar4 & 0x200000) == 0) &&
         (iVar7 = func_0x00d09ff0(uVar3,iVar6,&param_6,&param_9,0), iVar7 == 0)) {
        func_0x00d06de0(iVar8,0x50);
        goto LAB_00d1b3d4;
      }
      iVar7 = func_0x00bd46b0();
      if (iVar7 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\tls13_enc.c",0x229,"tls13_change_cipher_state");
        func_0x00d06d50(iVar8,0x50,0x80006,0);
        goto LAB_00d1b3d4;
      }
      iVar6 = func_0x00d0b670(param_10,*(undefined4 *)(iVar6 + 0x34));
      param_8 = iVar6;
      if ((((iVar6 == 0) || (iVar5 = func_0x00bd3dd0(iVar7,iVar6,0), iVar5 == 0)) ||
          (iVar5 = func_0x00bd3e10(iVar7,param_16,param_14), iVar5 == 0)) ||
         (iVar5 = func_0x00bd3c80(iVar7,&stack0x0000005c,&param_17), iVar5 == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\tls13_enc.c",0x231,"tls13_change_cipher_state");
        func_0x00d06d50(iVar8,0x50,0xc0103,0);
        func_0x00bd45b0(iVar7);
        goto LAB_00d1b3d4;
      }
      param_1 = param_17;
      func_0x00bd45b0(iVar7);
      iVar6 = func_0x00d1c320(**(undefined4 **)(iVar8 + 4),(*(undefined4 **)(iVar8 + 4))[0xa1],iVar6
                              ,iVar8 + 0x3ac,"e exp master",0xc,&stack0x0000005c,param_1,
                              iVar8 + 0x66c,param_1,0);
      if (iVar6 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\tls13_enc.c",0x70,"tls13_hkdf_expand");
        func_0x00d06d50(iVar8,0x50,0xc0103,0);
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\tls13_enc.c",0x23e,"tls13_change_cipher_state");
        func_0x00d06d50(iVar8,0x50,0xc0103,0);
        goto LAB_00d1b3d4;
      }
      iVar6 = func_0x00d037a0(iVar8,"EARLY_EXPORTER_SECRET",iVar8 + 0x66c,param_1);
      if (iVar6 == 0) goto LAB_00d1b3d4;
      uVar4 = in_stack_00000128 & 0x40;
      iVar6 = iVar8 + 0x3ac;
      goto LAB_00d1b998;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\tls13_enc.c",0x1f8,"tls13_change_cipher_state");
    func_0x00d06d50(iVar8,0x50,0x14c,0);
  }
  else {
    if ((char)bVar1 < '\0') {
      param_2 = in_stack_00000124 + 0x3ec;
      param_11 = in_stack_00000124 + 0x4ec;
      uVar3 = func_0x00d0b120(in_stack_00000124);
      param_12 = func_0x00bc4320(uVar3);
      if (0 < param_12) {
        pcVar9 = "s hs traffic";
        param_5 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
        goto LAB_00d1b435;
      }
      FUN_00bc4f50();
      pcVar9 = "tls13_change_cipher_state";
      uVar3 = 0x270;
LAB_00d1b3a6:
      func_0x00bc5050("ssl\\tls13_enc.c",uVar3,pcVar9);
      func_0x00d06d50(iVar8,0x50,0xc0103,0);
    }
    else {
      param_2 = in_stack_00000124 + 0x42c;
      param_5 = "SERVER_TRAFFIC_SECRET_0";
      pcVar9 = "s ap traffic";
LAB_00d1b435:
      param_4 = 0xc;
      uVar4 = in_stack_00000128 & 0x40;
      if (uVar4 == 0) goto LAB_00d1b8a8;
LAB_00d1b904:
      sVar2 = param_1;
      if (pcVar9 == "s ap traffic") {
        memcpy((void *)(iVar8 + 0x52c),&stack0x0000005c,param_1);
      }
      if (pcVar9 == "s hs traffic") {
        memcpy((void *)(iVar8 + 0x56c),&stack0x0000005c,sVar2);
      }
      iVar6 = param_2;
      if (pcVar9 == "c ap traffic") {
        uVar3 = func_0x00d0b120(iVar8);
        iVar6 = param_2;
        iVar7 = func_0x00d1c320(**(undefined4 **)(iVar8 + 4),(*(undefined4 **)(iVar8 + 4))[0xa1],
                                uVar3,param_2,"res master",10,&stack0x0000005c,sVar2,iVar8 + 0x46c,
                                sVar2,0);
        if (iVar7 != 0) goto LAB_00d1b998;
LAB_00d1b983:
        FUN_00bc4f50();
        pcVar9 = "tls13_hkdf_expand";
        uVar3 = 0x70;
        goto LAB_00d1b3a6;
      }
LAB_00d1b998:
      iVar7 = param_8;
      if ((param_3 != 0) &&
         (iVar6 = func_0x00d1afa0(iVar8,param_8,param_3,param_9,param_6,iVar6,param_7,pcVar9,param_4
                                  ,&stack0x0000009c,&stack0x000000dc,&param_10,&stack0x00000000,
                                  &param_15,&param_14), sVar2 = param_1, iVar6 != 0)) {
        if (pcVar9 == "s ap traffic") {
          memcpy((void *)(iVar8 + 0x5ec),&stack0x0000009c,param_1);
          uVar3 = func_0x00d0b120(iVar8);
          iVar6 = func_0x00d1c320(**(undefined4 **)(iVar8 + 4),(*(undefined4 **)(iVar8 + 4))[0xa1],
                                  uVar3,param_2,"exp master",10,param_7,sVar2,iVar8 + 0x62c,sVar2,0)
          ;
          if (iVar6 == 0) goto LAB_00d1b983;
          iVar6 = func_0x00d037a0(iVar8,"EXPORTER_SECRET",iVar8 + 0x62c,param_1);
          iVar7 = param_8;
          if (iVar6 == 0) goto LAB_00d1b3c6;
        }
        else if (pcVar9 == "c ap traffic") {
          memcpy((void *)(iVar8 + 0x5ac),&stack0x0000009c,param_1);
        }
        iVar6 = func_0x00d037a0(iVar8,param_5,&stack0x0000009c,param_1);
        if (iVar6 != 0) {
          if (param_11 != 0) {
            uVar3 = func_0x00d0b120(iVar8,&stack0x0000009c,param_11,param_12);
            iVar6 = func_0x00d1bba0(iVar8,uVar3);
            if (iVar6 == 0) goto LAB_00d1b3c6;
          }
          if ((in_stack_00000128 & 2) != 0) {
            if ((*(int *)(iVar8 + 0x38) == 0) && (pcVar9 == "c e traffic")) {
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
            (**(code **)(*(int *)(iVar8 + 0x920) + 0x34))(*(undefined4 *)(iVar8 + 0x928),uVar3);
          }
          if (uVar4 == 0) {
            uVar4 = ~(in_stack_00000128 >> 7) & 1 | 2;
          }
          else {
            uVar4 = 1;
          }
          iVar8 = func_0x00d0d080(iVar8,*(undefined4 *)(iVar8 + 0x20),param_18,uVar4,
                                  &stack0x0000009c,param_1,&stack0x000000dc,param_10,
                                  &stack0x0000004c,param_15,0,0,param_3,param_14,param_9,param_6,0,
                                  iVar7);
          param_13 = (uint)(iVar8 != 0);
        }
      }
    }
LAB_00d1b3c6:
    if ((in_stack_00000128 & 0x40) == 0) goto LAB_00d1b801;
  }
LAB_00d1b3d4:
  uVar4 = func_0x00bc2510(param_3);
  if ((uVar4 & 0x200000) == 0) {
    func_0x00d03350(param_6);
  }
  func_0x00d032c0(param_3);
LAB_00d1b801:
  func_0x00401320(&stack0x000000dc,0x40);
  func_0x00401320(&stack0x0000009c,0x40);
  FUN_008ab370();
  return;
}



void FUN_00d1bc10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_retaddr;
  uint in_stack_000000d4;
  int in_stack_000000dc;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e4;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f4;
  int in_stack_000000f8;
  
  func_0x00e87f70();
  uVar2 = in_stack_000000f0;
  iVar1 = in_stack_000000dc;
  in_stack_000000d4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_4 = in_stack_000000e0;
  param_3 = in_stack_000000e8;
  iVar3 = func_0x00d0b120(in_stack_000000dc);
  iVar4 = func_0x00bd46b0();
  if ((((iVar4 != 0) && (iVar3 != 0)) && (iVar5 = func_0x00d06d30(iVar1), iVar5 != 0)) &&
     (iVar5 = func_0x00bd3dd0(iVar4,iVar3,0), 0 < iVar5)) {
    uVar6 = 0;
    if (in_stack_000000f8 != 0) {
      uVar6 = in_stack_000000f4;
    }
    iVar5 = func_0x00bd3e10(iVar4,uVar2,uVar6);
    if (((0 < iVar5) &&
        (iVar5 = func_0x00bd3c80(iVar4,&stack0x00000054,&stack0x00000000), 0 < iVar5)) &&
       ((iVar5 = func_0x00bd3dd0(iVar4,iVar3,0), 0 < iVar5 &&
        ((iVar5 = func_0x00bd3c80(iVar4,&stack0x00000014,&param_2), 0 < iVar5 &&
         (iVar5 = func_0x00d1c320(**(undefined4 **)(iVar1 + 4),(*(undefined4 **)(iVar1 + 4))[0xa1],
                                  iVar3,iVar1 + 0x62c,param_3,in_stack_000000ec,&stack0x00000014,
                                  param_2,&stack0x00000094,unaff_retaddr,1), iVar5 != 0)))))) {
      func_0x00d1c320(**(undefined4 **)(iVar1 + 4),(*(undefined4 **)(iVar1 + 4))[0xa1],iVar3,
                      &stack0x00000094,"exporter",8,&stack0x00000054,unaff_retaddr,param_4,
                      in_stack_000000e4,1);
    }
  }
  func_0x00bd45b0(iVar4);
  FUN_008ab370();
  return;
}



void FUN_00d1bdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 unaff_retaddr;
  uint in_stack_000000cc;
  int in_stack_000000d4;
  int in_stack_000000d8;
  undefined4 in_stack_000000e0;
  
  func_0x00e87f70();
  iVar5 = in_stack_000000d4;
  in_stack_000000cc = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_2 = in_stack_000000e0;
  iVar6 = func_0x00d0b120(in_stack_000000d4);
  param_3 = FUN_00bc42b0(iVar6);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  puVar10 = &param_4;
  param_1 = 0;
  if (iVar6 == 0) goto LAB_00d1bf59;
  if (puVar1[0xa1] != 0) {
    puVar7 = (undefined4 *)func_0x00bbfb90(&stack0x00000038,"properties",puVar1[0xa1],0);
    puVar10 = (undefined4 *)&stack0x00000024;
    param_4 = *puVar7;
    param_5 = puVar7[1];
    param_6 = puVar7[2];
    param_7 = puVar7[3];
    param_8 = puVar7[4];
  }
  puVar7 = (undefined4 *)func_0x00bbfa10(&stack0x00000038);
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *puVar10 = *puVar7;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  puVar10[4] = puVar7[4];
  iVar8 = func_0x00d034c0(iVar5,&stack0x0000008c,0x40,&stack0x00000000);
  if (iVar8 != 0) {
    if (in_stack_000000d8 == *(int *)(*(int *)(*(int *)(iVar5 + 0xc) + 0x74) + 0x18)) {
      puVar9 = (undefined1 *)(iVar5 + 0x4ec);
    }
    else if ((*(int *)(iVar5 + 0x1a4) == 0) || (*(int *)(iVar5 + 0x228) == 0)) {
      puVar9 = (undefined1 *)(iVar5 + 0x4ac);
    }
    else {
      iVar6 = func_0x00d1bba0(iVar5,iVar6,iVar5 + 0x5ac,&stack0x0000004c,unaff_retaddr);
      if (iVar6 == 0) goto LAB_00d1bf46;
      puVar9 = &stack0x0000004c;
    }
    iVar6 = func_0x00c74cf0(*puVar1,&DAT_010532a4,puVar1[0xa1],param_3,&param_4,puVar9,unaff_retaddr
                            ,&stack0x0000008c,unaff_retaddr,param_2,0x80,&param_1);
    if (iVar6 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\tls13_enc.c",0x135,"tls13_final_finish_mac");
      func_0x00d06d50(iVar5,0x50,0xc0103,0);
    }
  }
LAB_00d1bf46:
  func_0x00401320(&stack0x0000004c,0x40);
LAB_00d1bf59:
  FUN_008ab370();
  return;
}



undefined4
FUN_00d1bfb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = func_0x00d0b120(param_1);
  iVar2 = func_0x00bc4320(uVar1);
  if (iVar2 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\tls13_enc.c",0xfe,"tls13_generate_master_secret");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  *param_5 = iVar2;
  uVar1 = func_0x00d1c020(param_1,uVar1,param_3,0,0,param_2);
  return uVar1;
}



undefined4 FUN_00d1c5f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  func_0x00e87f70();
  iVar1 = param_4;
  param_1 = 0;
  *(undefined4 *)(*(int *)(param_4 + 0x71c) + 0x2cc) = *(undefined4 *)(param_4 + 0x234);
  iVar2 = func_0x00d09c70(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 0x71c),&param_4,
                          &param_2,&stack0x00000000,&param_1,0,0);
  if (iVar2 == 0) {
    func_0x00d06de0(iVar1,0x50);
    return 0;
  }
  func_0x00d032c0(*(undefined4 *)(iVar1 + 0x254));
  *(int *)(iVar1 + 0x254) = param_4;
  func_0x00d03350(*(undefined4 *)(iVar1 + 600));
  *(undefined4 *)(iVar1 + 600) = param_2;
  *(undefined4 *)(iVar1 + 0x25c) = 0;
  *(undefined4 *)(iVar1 + 0x260) = param_1;
  return 1;
}



undefined4 FUN_00d1d330(uint param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = param_1;
  pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x88);
  if (pcVar1 != (code *)0x0) {
    iVar4 = (*pcVar1)(param_1,*(undefined4 *)(param_1 + 0x360),&param_1);
    if ((iVar4 != 0) && (param_1 < 0x100)) {
      *(uint *)(*(int *)(uVar3 + 0x360) + 0x100) = param_1;
      iVar4 = *(int *)(uVar3 + 0x360);
      uVar2 = *(undefined4 *)(iVar4 + 0x100);
      iVar5 = func_0x00bfae30(param_2,0xfeff,0,2);
      if (iVar5 != 0) {
        iVar4 = func_0x00bfb180(param_2,iVar4,uVar2,1);
        if (iVar4 != 0) {
          return 1;
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x572,"dtls_construct_hello_verify_request");
      func_0x00d06d50(uVar3,0xffffffff,0xc0103,0);
      return 0;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x56b,"dtls_construct_hello_verify_request");
  func_0x00d06d50(uVar3,0xffffffff,400,0);
  return 0;
}



undefined4 FUN_00d1d6c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0x15:
    *param_2 = 0;
    *param_3 = 0;
    return 1;
  default:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_srvr.c",1099,"ossl_statem_server_construct_message");
    func_0x00d06d50(param_1,0x50,0xec,0);
    return 0;
  case 0x17:
    *param_2 = FUN_00d1d330;
    *param_3 = 3;
    return 1;
  case 0x18:
    *param_2 = FUN_00d1f260;
    *param_3 = 2;
    return 1;
  case 0x19:
    *param_2 = FUN_00d1f110;
    *param_3 = 0xb;
    return 1;
  case 0x1b:
    *param_2 = FUN_00d1f4b0;
    *param_3 = 0xc;
    return 1;
  case 0x1c:
    *param_2 = FUN_00d1e9b0;
    *param_3 = 0xd;
    return 1;
  case 0x1d:
    *param_2 = FUN_00d1f230;
    *param_3 = 0xe;
    return 1;
  case 0x25:
    *param_2 = FUN_00d1ec10;
    *param_3 = 4;
    return 1;
  case 0x26:
    *param_2 = FUN_00d1e930;
    *param_3 = 0x16;
    return 1;
  case 0x27:
    break;
  case 0x28:
    *param_2 = FUN_00d19220;
    *param_3 = 0x14;
    return 1;
  case 0x29:
    *param_2 = FUN_00d1ebf0;
    *param_3 = 8;
    return 1;
  case 0x2c:
    *param_2 = FUN_00d18e10;
    *param_3 = 0xf;
    return 1;
  case 0x2e:
    *param_2 = FUN_00d193b0;
    *param_3 = 0x18;
    return 1;
  case 0x32:
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return 1;
  }
  pcVar1 = FUN_00d2c6d0;
  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
    pcVar1 = FUN_00d191d0;
  }
  *param_2 = pcVar1;
  *param_3 = 0x101;
  return 1;
}



undefined4 FUN_00d1d920(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0x16:
    return 0x20144;
  default:
    return 0;
  case 0x1e:
  case 0x1f:
    return *(undefined4 *)(param_1 + 0x79c);
  case 0x20:
    return 0x800;
  case 0x21:
    return 0x10003;
  case 0x22:
    return 0x202;
  case 0x23:
  case 0x30:
    return 1;
  case 0x24:
    return 0x40;
  }
}



uint FUN_00d1d9b0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x6c) == 0x16) {
    uVar2 = func_0x00d20ef0(param_1,param_2);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x6c) != 0x20) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x529,"ossl_statem_server_post_process_message");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  }
  if ((*(int *)(param_1 + 0x84) == 0) &&
     ((*(int *)(*(int *)(param_1 + 0x71c) + 0x29c) != 0 ||
      (*(int *)(*(int *)(param_1 + 0x71c) + 0x2a0) != 0)))) {
    if (*(int *)(param_1 + 0xf8) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xda7,"tls_post_process_client_key_exchange");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = func_0x00d42750(param_1,uVar3);
  return -(uint)(iVar1 != 0) & 2;
}



undefined4 FUN_00d1da80(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  
  iVar6 = param_1;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0x15:
    iVar5 = func_0x00d076e0(param_1);
    if (iVar5 != 1) {
      return 3;
    }
    iVar6 = func_0x00d431e0(iVar6);
    break;
  default:
    goto LAB_00d1dacb;
  case 0x17:
    iVar5 = func_0x00d076e0(param_1);
    if (iVar5 != 1) {
      return 3;
    }
    if ((*(int *)(iVar6 + 0x20) != 0x100) && (iVar5 = func_0x00d431e0(iVar6), iVar5 == 0)) {
      return 0;
    }
    *(undefined4 *)(iVar6 + 0x7a0) = 1;
    return 2;
  case 0x18:
    if ((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) != 0) {
      return 2;
    }
    iVar5 = **(int **)(param_1 + 0xc);
    if (iVar5 < 0x304) {
      return 2;
    }
    if (iVar5 == 0x10000) {
      return 2;
    }
    uVar4 = *(uint *)(param_1 + 0x788) & 0x100000;
    if (*(int *)(param_1 + 0x6f4) == 1) {
      if (uVar4 != 0) {
        return 2;
      }
      goto LAB_00d1db40;
    }
    if ((uVar4 != 0) && (*(int *)(param_1 + 0x6f4) != 2)) {
      return 2;
    }
  case 0x27:
    if (*(int *)(param_1 + 0x6f4) == 1) {
      iVar6 = func_0x00d076e0(param_1);
      if (iVar6 == 0) {
        return 3;
      }
      return 2;
    }
    puVar1 = (undefined4 *)(*(int **)(param_1 + 0xc))[0x1d];
    if ((((*(byte *)(puVar1 + 10) & 8) == 0) && (iVar5 = **(int **)(param_1 + 0xc), 0x303 < iVar5))
       && (iVar5 != 0x10000)) {
      iVar5 = (*(code *)*puVar1)(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 0x74) + 8))(iVar6,0xa2);
      if (iVar5 == 0) {
        return 0;
      }
      if ((*(int *)(iVar6 + 0x854) != 2) &&
         (iVar5 = (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 0x74) + 8))(iVar6,0xa1), iVar5 == 0)
         ) {
        return 0;
      }
      pcVar2 = *(code **)(*(int *)(iVar6 + 0x91c) + 0x34);
      if (pcVar2 == (code *)0x0) {
        return 2;
      }
      (*pcVar2)(*(undefined4 *)(iVar6 + 0x924),1);
      return 2;
    }
    iVar6 = (*(code *)puVar1[2])(param_1,0x22);
    break;
  case 0x1c:
    if (*(int *)(param_1 + 0x8b4) != 3) goto LAB_00d1dcd5;
  case 0x1d:
LAB_00d1db40:
    iVar6 = func_0x00d076e0(param_1);
    if (iVar6 == 1) {
      return 2;
    }
    return 3;
  case 0x25:
    SetLastError(0);
    if ((*(byte *)((*(int **)(iVar6 + 0xc))[0x1d] + 0x28) & 8) != 0) {
      return 2;
    }
    iVar5 = **(int **)(iVar6 + 0xc);
    if (iVar5 < 0x304) {
      return 2;
    }
    if (iVar5 == 0x10000) {
      return 2;
    }
    iVar5 = func_0x00d076e0(iVar6);
    if (iVar5 == 1) {
      return 2;
    }
    iVar5 = func_0x00d00760(iVar6,0);
    if (iVar5 != 5) {
      return 3;
    }
    DVar7 = GetLastError();
    if (((DVar7 != 0x20) && (DVar7 != 0x6c)) && (DVar7 != 0x2746)) {
      return 3;
    }
    *(undefined4 *)(iVar6 + 0x30) = 1;
    return 2;
  case 0x28:
    iVar5 = func_0x00d076e0(param_1);
    if (iVar5 != 1) {
      return 3;
    }
    iVar5 = (*(int **)(iVar6 + 0xc))[0x1d];
    if ((*(byte *)(iVar5 + 0x28) & 8) != 0) {
      return 2;
    }
    iVar3 = **(int **)(iVar6 + 0xc);
    if (iVar3 < 0x304) {
      return 2;
    }
    if (iVar3 == 0x10000) {
      return 2;
    }
    iVar5 = (**(code **)(iVar5 + 4))(iVar6,iVar6 + 0x42c,iVar6 + 0x3ec,0,&param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar6 = (**(code **)(*(int *)(*(int *)(iVar6 + 0xc) + 0x74) + 8))(iVar6,0x122);
    break;
  case 0x29:
    if (*(int *)(param_1 + 0x36c) != 0) {
      return 2;
    }
    iVar5 = func_0x00d1e880(param_1);
    if (iVar5 != 0) {
      return 2;
    }
LAB_00d1dcd5:
    if ((((*(byte *)((*(int **)(iVar6 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
        (iVar5 = **(int **)(iVar6 + 0xc), 0x303 < iVar5)) &&
       ((iVar5 != 0x10000 && ((*(uint *)(iVar6 + 0x78c) & 1) == 0)))) {
      return 2;
    }
    *(undefined4 *)(iVar6 + 0x870) = 0;
    return 2;
  case 0x2e:
    iVar5 = func_0x00d076e0(param_1);
    if (iVar5 != 1) {
      return 3;
    }
    iVar6 = func_0x00d1c6b0(iVar6,1);
  }
  if (iVar6 == 0) {
    return 0;
  }
LAB_00d1dacb:
  return 2;
}



undefined4 FUN_00d1de10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0x15:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) != 0) {
      func_0x00d246e0(param_1);
      return 2;
    }
    break;
  case 0x17:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
      return 2;
    }
    func_0x00d246e0(param_1);
    goto LAB_00d1de6b;
  case 0x18:
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x88) = 1;
      return 2;
    }
    break;
  case 0x25:
    if ((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) {
      iVar1 = **(int **)(param_1 + 0xc);
      if (iVar1 < 0x304) {
        return 2;
      }
      if (iVar1 == 0x10000) {
        return 2;
      }
      if (*(int *)(param_1 + 0xe94) != 0) {
        return 2;
      }
      if (*(int *)(param_1 + 0x804) != 0) {
        return 2;
      }
      uVar2 = func_0x00d19410(param_1,param_2,0,0);
      return uVar2;
    }
LAB_00d1de6b:
    *(undefined4 *)(param_1 + 0x88) = 0;
    break;
  case 0x27:
    if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
      return 2;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x71c) + 0x2cc);
    if (iVar1 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x71c) + 0x2cc) = *(undefined4 *)(param_1 + 0x234);
    }
    else if (iVar1 != *(int *)(param_1 + 0x234)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x330,"ossl_statem_server_pre_work");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0xc) + 0x74))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      return 2;
    }
    break;
  case 0x32:
    if ((*(int *)(param_1 + 0x9c) != 9) && ((*(uint *)(param_1 + 0xb4) & 0x800) == 0)) {
      return 2;
    }
  case 1:
    uVar2 = func_0x00d19410(param_1,param_2,1,1);
    return uVar2;
  }
  return 2;
}



uint FUN_00d1e010(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0x16:
    uVar2 = func_0x00d22960(param_1,param_2);
    return uVar2;
  default:
    FUN_00bc4f50();
    pcVar4 = "ossl_statem_server_process_message";
    uVar3 = 0x4f5;
    break;
  case 0x1e:
    uVar2 = func_0x00d22250(param_1,param_2);
    return uVar2;
  case 0x20:
    uVar2 = func_0x00d22f70(param_1,param_2);
    return uVar2;
  case 0x21:
    uVar2 = func_0x00d19d50(param_1,param_2);
    return uVar2;
  case 0x22:
    uVar2 = func_0x00d232e0(param_1,param_2);
    return uVar2;
  case 0x23:
    uVar2 = func_0x00d1a280(param_1,param_2);
    return uVar2;
  case 0x24:
    uVar2 = func_0x00d1a3a0(param_1,param_2);
    return uVar2;
  case 0x30:
    uVar2 = func_0x00d1a760(param_1,param_2);
    return uVar2;
  case 0x35:
    if (*(int *)(param_2 + 4) != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x1118,"tls_process_end_of_early_data");
      func_0x00d06d50(param_1,0x32,0x9f,0);
      return 0;
    }
    if ((*(int *)(param_1 + 0x9c) == 0xb) || (*(int *)(param_1 + 0x9c) == 10)) {
      iVar1 = func_0x00d0ba70(param_1 + 0x910);
      if (iVar1 != 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x1127,"tls_process_end_of_early_data");
        func_0x00d06d50(param_1,10,0xb6,0);
        return 0;
      }
      *(undefined4 *)(param_1 + 0x9c) = 0xc;
      iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 8))(param_1,0xa1);
      return -(uint)(iVar1 != 0) & 3;
    }
    FUN_00bc4f50();
    pcVar4 = "tls_process_end_of_early_data";
    uVar3 = 0x111e;
  }
  func_0x00bc5050("ssl\\statem\\statem_srvr.c",uVar3,pcVar4);
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d1e1f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int extraout_ECX;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = *(int **)(param_1 + 0xc);
  if ((((*(byte *)(piVar2[0x1d] + 0x28) & 8) == 0) && (0x303 < *piVar2)) && (*piVar2 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x6c)) {
    case 1:
      if (*(int *)(param_1 + 0x9c) == 0xb) break;
      if ((*(int *)(param_1 + 0x8b4) != 4) || (param_2 != 0xb)) {
        if ((param_2 == 0x18) && ((*(uint *)(param_1 + 0xb4) & 0x2000) == 0)) {
          *(undefined4 *)(param_1 + 0x6c) = 0x30;
          return 1;
        }
        break;
      }
      goto LAB_00d1e324;
    default:
      break;
    case 0x1e:
    case 0x1f:
      if ((*(int *)(*(int *)(param_1 + 0x71c) + 0x29c) != 0) ||
         (*(int *)(*(int *)(param_1 + 0x71c) + 0x2a0) != 0)) {
        if (param_2 == 0xf) {
          *(undefined4 *)(param_1 + 0x6c) = 0x21;
          return 1;
        }
        break;
      }
      goto LAB_00d1e2de;
    case 0x21:
      if (param_2 != 0x14) break;
      goto LAB_00d1e2fb;
    case 0x28:
    case 0x35:
      goto LAB_00d1e26b;
    case 0x32:
      if (*(int *)(param_1 + 0x6f4) == 1) {
        if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x6c) = 0x16;
          return 1;
        }
        break;
      }
      if (*(int *)(param_1 + 0x854) == 2) {
        if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0x6c) = 0x35;
          return 1;
        }
        break;
      }
LAB_00d1e26b:
      if (*(int *)(param_1 + 0x268) == 0) {
LAB_00d1e2de:
        if (param_2 == 0x14) {
LAB_00d1e2fb:
          *(undefined4 *)(param_1 + 0x6c) = 0x24;
          return 1;
        }
      }
      else if (param_2 == 0xb) {
LAB_00d1e324:
        *(undefined4 *)(param_1 + 0x6c) = 0x1e;
        return 1;
      }
    }
    goto LAB_00d1e27d;
  }
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
  case 1:
  case 0x17:
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x6c) = 0x16;
      return 1;
    }
    break;
  case 0x1d:
    if (param_2 == 0x10) {
      if (*(int *)(param_1 + 0x268) != 0) {
        if (*(int *)(param_1 + 0x20) != 0x300) break;
        if (((byte)*(undefined4 *)(param_1 + 0x754) & 3) == 3) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xe1,"ossl_statem_server_read_transition");
          func_0x00d06d50(param_1,0x28,199,0);
          return 0;
        }
      }
LAB_00d1e405:
      *(undefined4 *)(param_1 + 0x6c) = 0x20;
      return 1;
    }
    if ((*(int *)(param_1 + 0x268) != 0) && (param_2 == 0xb)) {
      *(undefined4 *)(param_1 + 0x6c) = 0x1e;
      return 1;
    }
    break;
  case 0x1e:
    if (param_2 == 0x10) goto LAB_00d1e405;
    break;
  case 0x20:
    uVar3 = func_0x00d1e850(param_1);
    piVar2 = (int *)((ulonglong)uVar3 >> 0x20);
    param_2 = extraout_ECX;
    if (((int)uVar3 != 0) && (*(int *)(param_1 + 0x84) == 0)) {
      if (extraout_ECX == 0xf) {
        *(undefined4 *)(param_1 + 0x6c) = 0x21;
        return 1;
      }
      break;
    }
  case 0x21:
    if (param_2 == 0x101) {
LAB_00d1e496:
      *(undefined4 *)(param_1 + 0x6c) = 0x23;
      return 1;
    }
    break;
  case 0x22:
    goto joined_r0x00d1e46c;
  case 0x23:
    if (*(int *)(param_1 + 0x340) != 0) {
      if (param_2 == 0x43) {
        *(undefined4 *)(param_1 + 0x6c) = 0x22;
        return 1;
      }
      break;
    }
joined_r0x00d1e46c:
    if (param_2 == 0x14) {
      *(undefined4 *)(param_1 + 0x6c) = 0x24;
      return 1;
    }
    break;
  case 0x28:
    if (param_2 != 0x101) break;
    goto LAB_00d1e496;
  }
LAB_00d1e27d:
  if (((*(byte *)(piVar2[0x1d] + 0x28) & 8) != 0) && (param_2 == 0x101)) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x30) = 3;
    uVar1 = func_0x00d007d0(param_1);
    func_0x00baa700(uVar1,0xf);
    func_0x00bab680(uVar1,9);
    return 0;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x150,"ossl_statem_server_read_transition");
  func_0x00d06d50(param_1,10,0xf4,0);
  return 0;
}



undefined4 FUN_00d1e580(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = *(uint *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8;
  if (((uVar3 == 0) && (iVar2 = **(int **)(param_1 + 0xc), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    uVar1 = func_0x00d1d420(param_1);
    return uVar1;
  }
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
  case 0x17:
    break;
  case 1:
    if (*(int *)(param_1 + 0x70) == 0x15) {
      *(undefined4 *)(param_1 + 0x6c) = 0x15;
      *(undefined4 *)(param_1 + 0x70) = 0;
      return 1;
    }
    iVar2 = func_0x00d1ac30(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    break;
  default:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x26b,"ossl_statem_server_write_transition");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  case 0x15:
    goto LAB_00d1e5f6;
  case 0x16:
    if (((uVar3 != 0) && (*(int *)(*(int *)(param_1 + 0x360) + 0x104) == 0)) &&
       (uVar3 = func_0x00d00790(param_1), (uVar3 & 0x2000) != 0)) {
      *(undefined4 *)(param_1 + 0x6c) = 0x17;
      return 1;
    }
    if (((*(int *)(param_1 + 0x8ac) != 0) || (*(int *)(param_1 + 0x1a4) == 0)) ||
       (*(int *)(param_1 + 0x228) == 0)) {
      *(undefined4 *)(param_1 + 0x6c) = 0x18;
      return 1;
    }
    goto LAB_00d1e5f6;
  case 0x18:
    if (*(int *)(param_1 + 0x36c) != 0) {
      *(uint *)(param_1 + 0x6c) = (uint)(*(int *)(param_1 + 0x800) == 0) * 2 + 0x25;
      return 1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x234) + 0x14) & 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x19;
      return 1;
    }
    iVar2 = func_0x00d1e8f0(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x1b;
      return 1;
    }
    iVar2 = func_0x00d1e880(param_1);
    *(uint *)(param_1 + 0x6c) = 0x1d - (uint)(iVar2 != 0);
    return 1;
  case 0x19:
    if (*(int *)(param_1 + 0x7ec) != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x26;
      return 1;
    }
  case 0x26:
    iVar2 = func_0x00d1e8f0(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x1b;
      return 1;
    }
LAB_00d1e70a:
    iVar2 = func_0x00d1e880(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x1c;
      return 1;
    }
LAB_00d1e725:
    *(undefined4 *)(param_1 + 0x6c) = 0x1d;
    return 1;
  case 0x1b:
    goto LAB_00d1e70a;
  case 0x1c:
    goto LAB_00d1e725;
  case 0x1d:
    uVar4 = FUN_00c44770();
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    break;
  case 0x24:
    uVar4 = FUN_00c44770();
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    if (*(int *)(param_1 + 0x36c) == 0) {
      *(uint *)(param_1 + 0x6c) = (uint)(*(int *)(param_1 + 0x800) == 0) * 2 + 0x25;
      return 1;
    }
LAB_00d1e5f6:
    *(undefined4 *)(param_1 + 0x6c) = 1;
    return 1;
  case 0x25:
    *(undefined4 *)(param_1 + 0x6c) = 0x27;
    return 1;
  case 0x27:
    *(undefined4 *)(param_1 + 0x6c) = 0x28;
    return 1;
  case 0x28:
    if (*(int *)(param_1 + 0x36c) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      return 1;
    }
  }
  return 2;
}



undefined4 FUN_00d1e930(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bfae30(param_2,*(int *)(param_1 + 0x7e0),*(int *)(param_1 + 0x7e0) >> 0x1f,1);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb180(param_2,*(undefined4 *)(param_1 + 0x7f8),
                            *(undefined4 *)(param_1 + 0x7fc),3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x10d4,"tls_construct_cert_status_body");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d1e9b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_2;
  iVar1 = param_1;
  if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 0xc), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    if (*(int *)(param_1 + 0x8b4) == 3) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x8bc),"ssl\\statem\\statem_srvr.c",0xb0c);
      *(undefined4 *)(iVar1 + 0x8c0) = 0x20;
      iVar2 = FUN_00bbc4f0(0x20,"ssl\\statem\\statem_srvr.c",0xb0e);
      *(int *)(iVar1 + 0x8bc) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x8c0) = 0;
        FUN_00bc4f50();
        uVar4 = 0xb10;
LAB_00d1ebc8:
        func_0x00bc5050("ssl\\statem\\statem_srvr.c",uVar4,"tls_construct_certificate_request");
        func_0x00d06d50(iVar1,0x50,0xc0103,0);
        return 0;
      }
      iVar2 = func_0x00bc5450(**(undefined4 **)(iVar1 + 4),iVar2,*(undefined4 *)(iVar1 + 0x8c0),0);
      uVar4 = param_2;
      if ((iVar2 < 1) ||
         (iVar2 = func_0x00bfb180(param_2,*(undefined4 *)(iVar1 + 0x8bc),
                                  *(undefined4 *)(iVar1 + 0x8c0),1), iVar2 == 0)) {
        FUN_00bc4f50();
        uVar4 = 0xb17;
        goto LAB_00d1ebc8;
      }
      iVar2 = func_0x00d18c60(iVar1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = func_0x00bfae30(param_2,0,0,1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        uVar4 = 0xb21;
        goto LAB_00d1ebc8;
      }
    }
    iVar2 = func_0x00d2a970(iVar1,uVar4,0x4000,0,0);
  }
  else {
    iVar2 = func_0x00bfb0a0(param_2,1);
    if (((iVar2 == 0) || (iVar2 = func_0x00d26df0(iVar1,uVar4), iVar2 == 0)) ||
       (iVar2 = func_0x00bfa920(uVar4), iVar2 == 0)) {
      FUN_00bc4f50();
      uVar4 = 0xb32;
      goto LAB_00d1ebc8;
    }
    if ((*(byte *)(*(int *)(*(int *)(iVar1 + 0xc) + 0x74) + 0x28) & 2) != 0) {
      uVar3 = func_0x00d14100(iVar1,1,&param_1);
      iVar2 = func_0x00bfb0a0(uVar4,2);
      if (((iVar2 == 0) || (iVar2 = func_0x00bfafd0(uVar4,1), iVar2 == 0)) ||
         ((iVar2 = func_0x00d13ff0(iVar1,uVar4,param_1,uVar3), iVar2 == 0 ||
          (iVar2 = func_0x00bfa920(uVar4), iVar2 == 0)))) {
        FUN_00bc4f50();
        uVar4 = 0xb3e;
        goto LAB_00d1ebc8;
      }
    }
    uVar4 = func_0x00d175a0(iVar1,uVar4);
    iVar2 = func_0x00d17270(iVar1,uVar4);
  }
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 0x8c4) = *(int *)(iVar1 + 0x8c4) + 1;
  *(undefined4 *)(iVar1 + 0x268) = 1;
  return 1;
}



bool FUN_00d1ebf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00d2a970(param_1,param_2,0x400,0,0);
  return iVar1 != 0;
}



void FUN_00d1ec10(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 uStack00000014;
  undefined1 uStack00000015;
  undefined1 uStack00000016;
  undefined1 uStack00000017;
  undefined1 uStack00000018;
  undefined1 uStack00000019;
  undefined1 uStack0000001a;
  undefined1 uStack0000001b;
  uint in_stack_0000001c;
  int in_stack_00000024;
  undefined4 in_stack_00000028;
  
  func_0x00e87f70();
  uVar7 = in_stack_00000028;
  iVar6 = in_stack_00000024;
  in_stack_0000001c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar11 = *(int *)(in_stack_00000024 + 0x8a0);
  if ((((*(byte *)((*(int **)(in_stack_00000024 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
      (iVar9 = **(int **)(in_stack_00000024 + 0xc), 0x303 < iVar9)) && (iVar9 != 0x10000)) {
    uVar8 = func_0x00d0b120(in_stack_00000024);
    iVar9 = func_0x00bc4320(uVar8);
    if (iVar9 < 1) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x1054,"tls_construct_new_session_ticket");
      func_0x00d06d50(iVar6,0x50,0xc0103,0);
      FUN_008ab370();
      return;
    }
    if ((*(int *)(iVar6 + 0xe94) != 0) || (*(int *)(iVar6 + 0x36c) != 0)) {
      iVar10 = func_0x00d09000(*(undefined4 *)(iVar6 + 0x71c),0);
      if (iVar10 == 0) goto LAB_00d1f0f1;
      FUN_00d07ed0(*(undefined4 *)(iVar6 + 0x71c));
      *(int *)(iVar6 + 0x71c) = iVar10;
    }
    iVar10 = func_0x00d086b0(iVar6,*(undefined4 *)(iVar6 + 0x71c));
    if (iVar10 == 0) goto LAB_00d1f0f1;
    iVar10 = func_0x00bc5450(**(undefined4 **)(iVar6 + 4),&stack0x00000000,4,0);
    if (iVar10 < 1) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x1070,"tls_construct_new_session_ticket");
      func_0x00d06d50(iVar6,0x50,0xc0103,0);
      FUN_008ab370();
      return;
    }
    *(undefined4 *)(*(int *)(iVar6 + 0x71c) + 0x2f0) = 0;
    uVar3 = *(undefined4 *)(iVar6 + 0xe98);
    uVar4 = *(undefined4 *)(iVar6 + 0xe9c);
    uStack0000001b = (undefined1)uVar3;
    uStack0000001a = (undefined1)((uint)uVar3 >> 8);
    uStack00000019 = (undefined1)((uint)uVar3 >> 0x10);
    uStack00000018 = (undefined1)((uint)uVar3 >> 0x18);
    uStack00000014 = (undefined1)((uint)uVar4 >> 0x18);
    uStack00000017 = (undefined1)uVar4;
    uStack00000016 = (undefined1)((uint)uVar4 >> 8);
    uStack00000015 = (undefined1)((uint)uVar4 >> 0x10);
    iVar10 = func_0x00d1c2a0(iVar6,uVar8,iVar6 + 0x46c,"resumption",10,&stack0x00000014,8,
                             *(int *)(iVar6 + 0x71c) + 0x48,iVar9,1);
    if (iVar10 == 0) goto LAB_00d1f0f1;
    *(int *)(*(int *)(iVar6 + 0x71c) + 4) = iVar9;
    iVar9 = *(int *)(iVar6 + 0x71c);
    uVar12 = FUN_00c44770();
    *(undefined8 *)(iVar9 + 0x2b8) = uVar12;
    func_0x00d08fa0(*(undefined4 *)(iVar6 + 0x71c));
    if (*(int *)(iVar6 + 0x344) != 0) {
      FUN_00bbc580(*(undefined4 *)(*(int *)(iVar6 + 0x71c) + 0x2f8),"ssl\\statem\\statem_srvr.c",
                   0x108a);
      iVar9 = *(int *)(iVar6 + 0x71c);
      uVar8 = func_0x00bbbc30(*(undefined4 *)(iVar6 + 0x344),*(undefined4 *)(iVar6 + 0x348),
                              "ssl\\statem\\statem_srvr.c",0x108c);
      *(undefined4 *)(iVar9 + 0x2f8) = uVar8;
      iVar9 = *(int *)(iVar6 + 0x71c);
      if (*(int *)(iVar9 + 0x2f8) == 0) {
        *(undefined4 *)(iVar9 + 0x2fc) = 0;
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x108f,"tls_construct_new_session_ticket");
        func_0x00d06d50(iVar6,0x50,0x8000f,0);
        FUN_008ab370();
        return;
      }
      *(undefined4 *)(iVar9 + 0x2fc) = *(undefined4 *)(iVar6 + 0x348);
    }
    *(undefined4 *)(*(int *)(iVar6 + 0x71c) + 0x2f4) = *(undefined4 *)(iVar6 + 0xe84);
  }
  pcVar5 = *(code **)(iVar11 + 0x260);
  if ((pcVar5 != (code *)0x0) &&
     (iVar11 = (*pcVar5)(iVar6,*(undefined4 *)(iVar11 + 0x268)), iVar11 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x109a,"tls_construct_new_session_ticket");
    func_0x00d06d50(iVar6,0x50,0xc0103,0);
    FUN_008ab370();
    return;
  }
  if (((((*(byte *)((*(int **)(iVar6 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
       (iVar11 = **(int **)(iVar6 + 0xc), 0x303 < iVar11)) && (iVar11 != 0x10000)) &&
     (((*(uint *)(iVar6 + 0x788) & 0x4000) != 0 ||
      ((*(int *)(iVar6 + 0xe84) != 0 && ((*(uint *)(iVar6 + 0x788) & 0x1000000) == 0)))))) {
    iVar11 = func_0x00d1d130(iVar6,uVar7,0,&stack0x00000014);
    if (iVar11 == 0) goto LAB_00d1f0f1;
    iVar11 = func_0x00bfad90(uVar7,*(int *)(iVar6 + 0x71c) + 0x24c,
                             *(undefined4 *)(*(int *)(iVar6 + 0x71c) + 0x248));
    if ((iVar11 == 0) || (iVar11 = func_0x00bfa920(uVar7), iVar11 == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x102a,"construct_stateful_ticket");
      func_0x00d06d50(iVar6,0x50,0xc0103,0);
      FUN_008ab370();
      return;
    }
  }
  else {
    iVar11 = func_0x00d1ca30(iVar6,uVar7,0,&stack0x00000014);
    if (iVar11 != 1) {
      if (iVar11 == 2) {
        *(int *)(iVar6 + 0xe94) = *(int *)(iVar6 + 0xe94) + 1;
        puVar1 = (uint *)(iVar6 + 0xe98);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        *(int *)(iVar6 + 0xe9c) = *(int *)(iVar6 + 0xe9c) + (uint)(0xfffffffe < uVar2);
        if (0 < *(int *)(iVar6 + 0x804)) {
          *(int *)(iVar6 + 0x804) = *(int *)(iVar6 + 0x804) + -1;
          FUN_008ab370();
          return;
        }
      }
      goto LAB_00d1f0f1;
    }
  }
  if (((((*(byte *)((*(int **)(iVar6 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
       (iVar11 = **(int **)(iVar6 + 0xc), 0x303 < iVar11)) && (iVar11 != 0x10000)) &&
     (iVar11 = func_0x00d2a970(iVar6,uVar7,0x2000,0,0), iVar11 != 0)) {
    func_0x00d23410(iVar6);
    func_0x00d03e80(iVar6,2);
  }
LAB_00d1f0f1:
  FUN_008ab370();
  return;
}



bool FUN_00d1f110(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x288);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xee8,"tls_construct_server_certificate");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return false;
  }
  if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = func_0x00bfae30(param_2,0,0,1);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xef1,"tls_construct_server_certificate");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return false;
    }
  }
  if (*(char *)(param_1 + 0x886) != '\0') {
    if (*(char *)(param_1 + 0x886) == '\x02') {
      iVar2 = func_0x00d19b50(param_1,param_2,iVar2);
      if (iVar2 != 0) {
        return true;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xf02,"tls_construct_server_certificate");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
    }
    return false;
  }
  iVar2 = func_0x00d17c50(param_1,param_2,iVar2,0);
  return iVar2 != 0;
}



bool FUN_00d1f230(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar1 = func_0x00d42750(param_1,0);
    return iVar1 != 0;
  }
  return true;
}



bool FUN_00d1f260(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar9 = param_2;
  iVar5 = param_1;
  if (((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
       (iVar2 = **(int **)(param_1 + 0xc), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
     (*(int *)(param_1 + 0x6f4) == 1)) {
    bVar1 = true;
    iVar2 = 0x303;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x20);
    bVar1 = false;
  }
  piVar7 = (int *)(param_1 + 0x6f4);
  iVar2 = func_0x00bfae30(param_2,iVar2,iVar2 >> 0x1f,2);
  if (iVar2 != 0) {
    puVar3 = &DAT_010be008;
    if (*piVar7 != 1) {
      puVar3 = (undefined4 *)(iVar5 + 0xb8);
    }
    iVar2 = func_0x00bfad90(uVar9,puVar3,0x20);
    if (iVar2 != 0) {
      if (((*(byte *)(*(int *)(iVar5 + 4) + 0x28) & 2) == 0) && (*(int *)(iVar5 + 0x36c) == 0)) {
        *(undefined4 *)(*(int *)(iVar5 + 0x71c) + 0x248) = 0;
      }
      if (bVar1) {
        uVar6 = *(uint *)(iVar5 + 0x750);
        iVar2 = iVar5 + 0x730;
      }
      else {
        uVar6 = *(uint *)(*(int *)(iVar5 + 0x71c) + 0x248);
        iVar2 = *(int *)(iVar5 + 0x71c) + 0x24c;
      }
      if (uVar6 < 0x21) {
        if ((bVar1) || (*(int **)(iVar5 + 0x264) == (int *)0x0)) {
          iVar8 = 0;
        }
        else {
          iVar8 = **(int **)(iVar5 + 0x264);
        }
        iVar2 = func_0x00bfb180(uVar9,iVar2,uVar6,1);
        if (((iVar2 != 0) &&
            (iVar2 = (**(code **)(*(int *)(iVar5 + 0xc) + 0x60))
                               (*(undefined4 *)(iVar5 + 0x234),uVar9,&param_1), iVar2 != 0)) &&
           (iVar2 = func_0x00bfae30(uVar9,iVar8,iVar8 >> 0x1f,1), iVar2 != 0)) {
          if (*(int *)(iVar5 + 0x6f4) == 1) {
            uVar4 = 0x800;
          }
          else if ((((*(byte *)((*(int **)(iVar5 + 0xc))[0x1d] + 0x28) & 8) != 0) ||
                   (iVar2 = **(int **)(iVar5 + 0xc), iVar2 < 0x304)) ||
                  (uVar4 = 0x200, iVar2 == 0x10000)) {
            uVar4 = 0x100;
          }
          iVar2 = func_0x00d2a970(iVar5,uVar9,uVar4,0,0);
          if (iVar2 == 0) {
            return false;
          }
          if (*(int *)(iVar5 + 0x6f4) == 1) {
            FUN_00d07ed0(*(undefined4 *)(iVar5 + 0x71c));
            *(undefined4 *)(iVar5 + 0x71c) = 0;
            *(undefined4 *)(iVar5 + 0x36c) = 0;
            iVar5 = func_0x00d17490(iVar5,0,0,0,0);
            if (iVar5 == 0) {
              return false;
            }
          }
          else if ((*(byte *)(iVar5 + 0x754) & 1) == 0) {
            iVar5 = func_0x00d42750(iVar5,0);
            return iVar5 != 0;
          }
          return true;
        }
        FUN_00bc4f50();
        uVar9 = 0x99e;
      }
      else {
        FUN_00bc4f50();
        uVar9 = 0x98c;
      }
      goto LAB_00d1f48d;
    }
  }
  FUN_00bc4f50();
  uVar9 = 0x969;
LAB_00d1f48d:
  func_0x00bc5050("ssl\\statem\\statem_srvr.c",uVar9,"tls_construct_server_hello");
  func_0x00d06d50(iVar5,0x50,0xc0103,0);
  return false;
}



void FUN_00d1f4b0(size_t param_1,uint param_2,int param_3,void *param_4,void *param_5,uint param_6,
                 undefined4 param_7,undefined4 *param_8,int param_9,undefined4 param_10,
                 undefined4 param_11,int param_12,int param_13,int param_14,undefined4 param_15,
                 int param_16,uint param_17,undefined4 param_18,int param_19,undefined4 param_20)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  undefined2 extraout_var;
  uint uVar10;
  char *pcVar11;
  size_t sVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  func_0x00e87f70();
  uVar14 = param_20;
  iVar4 = param_19;
  param_17 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_5 = (void *)0x0;
  iVar9 = *(int *)(param_19 + 0x284);
  param_6 = 0;
  param_3 = iVar9;
  iVar6 = func_0x00bd46b0();
  param_7 = 0;
  param_8 = *(undefined4 **)(iVar4 + 4);
  param_9 = 0;
  param_10 = 0;
  iVar7 = func_0x00bfab20(uVar14,&param_12);
  if (iVar7 == 0) {
    FUN_00bc4f50();
    uVar14 = 0x9e2;
LAB_00d1f53a:
    func_0x00bc5050("ssl\\statem\\statem_srvr.c",uVar14,"tls_construct_server_key_exchange");
    uVar14 = 0xc0103;
    goto LAB_00d1f54b;
  }
  if (iVar6 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x9e7,"tls_construct_server_key_exchange");
    func_0x00d06d50(iVar4,0x50,0x80006,0);
    func_0x00bd5d50(0);
    FUN_00bbc580(0,"ssl\\statem\\statem_srvr.c",0xafb);
    func_0x00bd45b0(0);
    goto LAB_00d1ff8b;
  }
  param_2 = *(uint *)(*(int *)(iVar4 + 0x234) + 0x10);
  param_16 = 0;
  param_15 = 0;
  param_14 = 0;
  param_13 = 0;
  if ((param_2 & 0x48) == 0) {
    if ((param_2 & 0x102) == 0) {
      if ((param_2 & 0x84) != 0) {
        if (*(int *)(iVar4 + 0x238) != 0) {
          FUN_00bc4f50();
          uVar14 = 0xa31;
          goto LAB_00d1f53a;
        }
        uVar5 = func_0x00d15f80(iVar4,0xfffffffe);
        param_6 = (uint)uVar5;
        if (uVar5 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa39,"tls_construct_server_key_exchange");
          uVar14 = 0x13b;
          uVar13 = 0x28;
          goto LAB_00d1f54d;
        }
        *(uint *)(*(int *)(iVar4 + 0x71c) + 0x2d4) = param_6;
        iVar7 = func_0x00d27e00(iVar4,CONCAT22(extraout_var,uVar5));
        *(int *)(iVar4 + 0x238) = iVar7;
        if (iVar7 != 0) {
          param_5 = (void *)func_0x00bd5f00(iVar7,&stack0x00000000);
          if (param_5 != (void *)0x0) goto LAB_00d1f9c7;
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa49,"tls_construct_server_key_exchange");
          uVar14 = 0x80010;
          goto LAB_00d1f54b;
        }
        goto LAB_00d1ff3a;
      }
      if ((param_2 & 0x20) == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa65,"tls_construct_server_key_exchange");
        uVar14 = 0xfa;
      }
      else {
        if ((((*(int *)(iVar4 + 0x8e0) != 0) && (*(int *)(iVar4 + 0x8e4) != 0)) &&
            (*(int *)(iVar4 + 0x8e8) != 0)) && (*(int *)(iVar4 + 0x8ec) != 0)) {
          param_13 = *(int *)(iVar4 + 0x8e0);
          param_14 = *(int *)(iVar4 + 0x8e4);
          param_15 = *(undefined4 *)(iVar4 + 0x8e8);
          param_16 = *(int *)(iVar4 + 0x8ec);
          iVar9 = param_3;
          goto LAB_00d1f9c7;
        }
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa5b,"tls_construct_server_key_exchange");
        uVar14 = 0x166;
      }
LAB_00d1f54b:
      uVar13 = 0x50;
LAB_00d1f54d:
      func_0x00d06d50(iVar4,uVar13,uVar14,0);
      sVar8 = 0;
    }
    else {
      if (*(int *)(*(int *)(iVar4 + 0x6ac) + 0xc) == 0) {
        sVar8 = *(size_t *)(*(int *)(iVar4 + 0x6ac) + 4);
        sVar12 = 0;
        if (sVar8 == 0) {
          pcVar2 = *(code **)(*(int *)(iVar4 + 0x6ac) + 8);
          param_1 = sVar8;
          if (pcVar2 == (code *)0x0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa0d,"tls_construct_server_key_exchange");
            uVar14 = 0xab;
            goto LAB_00d1f54b;
          }
          uVar13 = (*pcVar2)(iVar4,0,0x400);
          sVar8 = func_0x00d23680(uVar13);
          sVar12 = sVar8;
          if (sVar8 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa06,"tls_construct_server_key_exchange");
            func_0x00d06d50(iVar4,0x50,0xc0103,0);
            goto LAB_00d1f555;
          }
        }
      }
      else {
        sVar8 = func_0x00d12e40(iVar4);
        sVar12 = sVar8;
        if (sVar8 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_srvr.c",0x9fa,"tls_construct_server_key_exchange");
          func_0x00d06d50(iVar4,0x50,0xc0103,0);
          goto LAB_00d1f555;
        }
      }
      param_1 = sVar8;
      uVar13 = func_0x00bd6870(sVar8,0,sVar8);
      iVar9 = FUN_00d05b40(iVar4,0x40007,uVar13);
      sVar8 = sVar12;
      if (iVar9 != 0) {
        if (*(int *)(iVar4 + 0x238) != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa16,"tls_construct_server_key_exchange");
          func_0x00d06d50(iVar4,0x50,0xc0103,0);
          goto LAB_00d1f555;
        }
        iVar9 = func_0x00d27d80(iVar4,param_1);
        *(int *)(iVar4 + 0x238) = iVar9;
        if (iVar9 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa1c,"tls_construct_server_key_exchange");
          func_0x00d06d50(iVar4,0x50,0xc0103,0);
          goto LAB_00d1f555;
        }
        func_0x00bd5d50(sVar12);
        param_9 = 1;
        iVar9 = func_0x00bd6060(*(undefined4 *)(iVar4 + 0x238),&DAT_01059c54,&param_13);
        if (((iVar9 != 0) &&
            (iVar9 = func_0x00bd6060(*(undefined4 *)(iVar4 + 0x238),&DAT_01198374,&param_14),
            iVar9 != 0)) &&
           (iVar7 = func_0x00bd6060(*(undefined4 *)(iVar4 + 0x238),&DAT_01057a18,&param_15),
           iVar9 = param_3, iVar7 != 0)) goto LAB_00d1f9c7;
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa2b,"tls_construct_server_key_exchange");
        func_0x00d06d50(iVar4,0x50,0xc0103,0);
        func_0x00bd5d50(0);
        FUN_00bbc580(0,"ssl\\statem\\statem_srvr.c",0xafb);
        func_0x00bd45b0(iVar6);
        goto LAB_00d1ff64;
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa12,"tls_construct_server_key_exchange");
      func_0x00d06d50(iVar4,0x28,0x18a,0);
    }
LAB_00d1f555:
    func_0x00bd5d50(sVar8);
    FUN_00bbc580(0,"ssl\\statem\\statem_srvr.c",0xafb);
    func_0x00bd45b0(iVar6);
  }
  else {
LAB_00d1f9c7:
    if (((*(byte *)(*(int *)(iVar4 + 0x234) + 0x14) & 0x44) == 0) &&
       ((*(uint *)(*(int *)(iVar4 + 0x234) + 0x10) & 0x1c8) == 0)) {
      if (iVar9 != 0) goto LAB_00d1fa17;
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa6d,"tls_construct_server_key_exchange");
      func_0x00d06d50(iVar4,0x32,0xc0103,0);
    }
    else {
      param_3 = 0;
LAB_00d1fa17:
      if ((param_2 & 0x1c8) == 0) {
LAB_00d1fa8a:
        iVar9 = 0;
        do {
          if ((&param_13)[iVar9] == 0) break;
          if ((iVar9 != 2) || (uVar13 = 1, (param_2 & 0x20) == 0)) {
            uVar13 = 2;
          }
          iVar7 = func_0x00bfb0a0(uVar14,uVar13);
          if (iVar7 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa8f,"tls_construct_server_key_exchange");
            func_0x00d06d50(iVar4,0x50,0xc0103,0);
            goto LAB_00d1ff3a;
          }
          if ((iVar9 == 2) && ((param_2 & 0x102) != 0)) {
            iVar7 = func_0x00bba610(param_13);
            param_1 = (int)(iVar7 + 7 + (iVar7 + 7 >> 0x1f & 7U)) >> 3;
            iVar7 = func_0x00bba610(param_15);
            param_1 = param_1 - ((int)(iVar7 + 7 + (iVar7 + 7 >> 0x1f & 7U)) >> 3);
            if (param_1 != 0) {
              iVar7 = func_0x00bfa8b0(uVar14,param_1,&param_4);
              if (iVar7 == 0) {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa9d,
                                "tls_construct_server_key_exchange");
                func_0x00d06d50(iVar4,0x50,0xc0103,0);
                goto LAB_00d1ff3a;
              }
              memset(param_4,0,param_1);
            }
          }
          iVar7 = func_0x00bba610((&param_13)[iVar9],&param_4);
          iVar7 = func_0x00bfa8b0(uVar14,(int)(iVar7 + 7 + (iVar7 + 7 >> 0x1f & 7U)) >> 3);
          if ((iVar7 == 0) || (iVar7 = func_0x00bfa920(uVar14), iVar7 == 0)) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xaa6,"tls_construct_server_key_exchange");
            func_0x00d06d50(iVar4,0x50,0xc0103,0);
            goto LAB_00d1ff3a;
          }
          func_0x00bb9f70((&param_13)[iVar9],param_4);
          iVar9 = iVar9 + 1;
        } while (iVar9 < 4);
        if ((param_2 & 0x84) != 0) {
          iVar9 = func_0x00bfae30(uVar14,3,0,1);
          if ((((iVar9 == 0) || (iVar9 = func_0x00bfae30(uVar14,0,0,1), iVar9 == 0)) ||
              (iVar9 = func_0x00bfae30(uVar14,param_6,0,1), iVar9 == 0)) ||
             (iVar9 = func_0x00bfb180(uVar14,0,param_5,1), iVar9 == 0)) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xab8,"tls_construct_server_key_exchange");
            func_0x00d06d50(iVar4,0x50,0xc0103,0);
            goto LAB_00d1ff3a;
          }
          FUN_00bbc580(0,"ssl\\statem\\statem_srvr.c",0xabb);
        }
        if (param_3 == 0) {
LAB_00d1ff32:
          param_10 = 1;
        }
        else {
          iVar9 = *(int *)(*(int *)(iVar4 + 0x288) + 4);
          param_2 = 0;
          if ((iVar9 == 0) || (iVar7 = func_0x00d154a0(param_8,param_3,&param_6), iVar7 == 0)) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xac8,"tls_construct_server_key_exchange");
            func_0x00d06d50(iVar4,0x50,0xc0103,0);
          }
          else {
            iVar7 = func_0x00bfaaf0(uVar14,&param_11);
            if (iVar7 == 0) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xacd,"tls_construct_server_key_exchange"
                             );
              func_0x00d06d50(iVar4,0x50,0xc0103,0);
            }
            else if (((*(byte *)(*(int *)(*(int *)(iVar4 + 0xc) + 0x74) + 0x28) & 2) == 0) ||
                    (iVar7 = func_0x00bfae30(uVar14,*(undefined2 *)(param_3 + 4),0,2), iVar7 != 0))
            {
              uVar10 = param_6;
              if (param_6 != 0) {
                uVar10 = FUN_00bc42b0(param_6);
              }
              iVar9 = func_0x00c0c5e0(iVar6,&param_7,uVar10,*param_8,param_8[0xa1],iVar9,0);
              if (iVar9 < 1) {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xada,
                                "tls_construct_server_key_exchange");
                func_0x00d06d50(iVar4,0x50,0xc0103,0);
              }
              else if ((*(int *)(param_3 + 0x10) == 0x390) &&
                      ((iVar9 = func_0x00bb5ef0(param_7,6), iVar9 < 1 ||
                       (iVar9 = func_0x00bb5ff0(param_7,0xffffffff), iVar9 < 1)))) {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xae0,
                                "tls_construct_server_key_exchange");
                func_0x00d06d50(iVar4,0x50,0x80006,0);
              }
              else {
                iVar9 = func_0x00d173e0(iVar4,&param_1,
                                        *(int *)(*(int *)(iVar4 + 0xa0) + 4) + param_12,param_11);
                if (iVar9 != 0) {
                  iVar7 = func_0x00c0c0b0(iVar6,0,&param_2,param_1,iVar9);
                  if ((((0 < iVar7) &&
                       (iVar7 = func_0x00bfb210(uVar14,param_2,&param_5,2), iVar7 != 0)) &&
                      (iVar9 = func_0x00c0c0b0(iVar6,param_5,&param_2,param_1,iVar9), 0 < iVar9)) &&
                     ((iVar9 = func_0x00bfb120(uVar14,param_2,&param_4,2), iVar9 != 0 &&
                      (param_5 == param_4)))) {
                    FUN_00bbc580(param_1,"ssl\\statem\\statem_srvr.c",0xaf5);
                    goto LAB_00d1ff32;
                  }
                  FUN_00bbc580(param_1,"ssl\\statem\\statem_srvr.c",0xaf1);
                  FUN_00bc4f50();
                  func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xaf2,
                                  "tls_construct_server_key_exchange");
                  func_0x00d06d50(iVar4,0x50,0xc0103,0);
                }
              }
            }
            else {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xad2,"tls_construct_server_key_exchange"
                             );
              func_0x00d06d50(iVar4,0x50,0xc0103,0);
            }
          }
        }
      }
      else {
        pcVar3 = *(char **)(*(int *)(iVar4 + 0x6ac) + 0x58);
        if (pcVar3 == (char *)0x0) {
          uVar10 = 0;
LAB_00d1fa45:
          iVar9 = func_0x00bfb180(uVar14,pcVar3,uVar10,2);
          if (iVar9 != 0) goto LAB_00d1fa8a;
        }
        else {
          pcVar11 = pcVar3;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          uVar10 = (int)pcVar11 - (int)(pcVar3 + 1);
          if (uVar10 < 0x101) goto LAB_00d1fa45;
        }
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_srvr.c",0xa7d,"tls_construct_server_key_exchange");
        func_0x00d06d50(iVar4,0x50,0xc0103,0);
      }
    }
LAB_00d1ff3a:
    func_0x00bd5d50(0);
    FUN_00bbc580(0,"ssl\\statem\\statem_srvr.c",0xafb);
    func_0x00bd45b0(iVar6);
    if (param_9 == 0) goto LAB_00d1ff8b;
LAB_00d1ff64:
    FUN_00bba400(param_13);
    FUN_00bba400(param_14);
    FUN_00bba400(param_15);
    FUN_00bba400(param_16);
  }
LAB_00d1ff8b:
  FUN_008ab370();
  return;
}



void FUN_00d24400(undefined4 param_1)

{
  func_0x00d2b5a0(param_1,0x16);
  return;
}



undefined4 FUN_00d244c0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  func_0x00e87f70();
  if (param_3 != (int *)0x0) {
    piVar8 = (int *)0x0;
    if (*param_3 == 0) {
      piVar8 = param_3;
    }
    if (piVar8 != (int *)0x0) {
      func_0x00d28630(piVar8 + 0x244);
      iVar7 = piVar8[0xd8];
      if (iVar7 != 0) {
        uVar1 = *(undefined4 *)(iVar7 + 0x114);
        uVar2 = *(undefined4 *)(iVar7 + 0x110);
        uVar3 = *(undefined4 *)(iVar7 + 0x178);
        uVar4 = *(undefined4 *)(iVar7 + 0x11c);
        uVar5 = *(undefined4 *)(iVar7 + 0x118);
        func_0x00d24630(piVar8);
        memset((void *)piVar8[0xd8],0,0x180);
        *(undefined4 *)(piVar8[0xd8] + 0x178) = uVar3;
        if (piVar8[0xe] != 0) {
          *(undefined4 *)(piVar8[0xd8] + 0x100) = 0xff;
        }
        uVar6 = func_0x00d00790(param_3);
        if ((uVar6 & 0x1000) != 0) {
          *(undefined4 *)(piVar8[0xd8] + 0x11c) = uVar4;
          *(undefined4 *)(piVar8[0xd8] + 0x118) = uVar5;
        }
        *(undefined4 *)(piVar8[0xd8] + 0x110) = uVar2;
        *(undefined4 *)(piVar8[0xd8] + 0x114) = uVar1;
      }
      iVar7 = func_0x00d257b0(param_3);
      if (iVar7 != 0) {
        iVar7 = *(int *)param_3[3];
        if (iVar7 == 0x1ffff) {
          piVar8[8] = 0xfefd;
          return 1;
        }
        if ((piVar8[0x1e2] & 0x8000U) != 0) {
          piVar8[0x1e9] = 0x100;
          iVar7 = 0x100;
        }
        piVar8[8] = iVar7;
        return 1;
      }
    }
  }
  return 0;
}



int FUN_00d24750(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                undefined8 *param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 unaff_retaddr;
  
  func_0x00e87f70();
  if (param_3 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)0x0;
  if (*param_3 == 0) {
    piVar2 = param_3;
  }
  if (piVar2 != (int *)0x0) {
    switch(param_4) {
    case 0x11:
      if (0xcf < param_5) {
        *(int *)(piVar2[0xd8] + 0x11c) = param_5;
        return param_5;
      }
      break;
    default:
      iVar1 = FUN_00d25930(param_3,param_4,param_5,param_6);
      return iVar1;
    case 0x49:
      iVar1 = func_0x00d24960(piVar2,&stack0x00000000);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = func_0x00d25050(unaff_retaddr,param_1);
      *param_6 = uVar3;
      return 1;
    case 0x4a:
      iVar1 = func_0x00d249e0(piVar2);
      return iVar1;
    case 0x78:
      if (0xff < param_5) {
        *(int *)(piVar2[0xd8] + 0x118) = param_5;
        return 1;
      }
      break;
    case 0x79:
      return 0x100;
    }
    return 0;
  }
  return 0;
}



void FUN_00d248e0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)0x0;
    if (*param_1 == 0) {
      piVar1 = param_1;
    }
    if (piVar1 != (int *)0x0) {
      if (piVar1[0xd8] != 0) {
        func_0x00d24630(piVar1);
        func_0x00d114d0(*(undefined4 *)(piVar1[0xd8] + 0x110));
        func_0x00d114d0(*(undefined4 *)(piVar1[0xd8] + 0x114));
      }
      func_0x00d286c0(piVar1 + 0x244);
      func_0x00d26ae0(param_1);
      FUN_00bbc580(piVar1[0xd8],"ssl\\d1_lib.c",0xa7);
      piVar1[0xd8] = 0;
    }
  }
  return;
}



bool FUN_00d24c60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar4 = (int *)0x0;
    if (*param_1 == 0) {
      piVar4 = param_1;
    }
    if (piVar4 != (int *)0x0) {
      iVar1 = func_0x00d28780(piVar4 + 0x244);
      if (iVar1 != 0) {
        iVar1 = func_0x00d26fc0(param_1);
        if (iVar1 != 0) {
          iVar1 = FUN_00bbc830(0x180,"ssl\\d1_lib.c",0x4d);
          if (iVar1 == 0) {
            func_0x00d26ae0(param_1);
            return false;
          }
          uVar2 = func_0x00d115a0();
          *(undefined4 *)(iVar1 + 0x110) = uVar2;
          iVar3 = func_0x00d115a0();
          *(int *)(iVar1 + 0x114) = iVar3;
          if (piVar4[0xe] != 0) {
            *(undefined4 *)(iVar1 + 0x100) = 0xff;
          }
          *(undefined4 *)(iVar1 + 0x118) = 0;
          *(undefined4 *)(iVar1 + 0x11c) = 0;
          if ((*(int *)(iVar1 + 0x110) != 0) && (iVar3 != 0)) {
            piVar4[0xd8] = iVar1;
            iVar1 = (**(code **)(param_1[3] + 0x20))(param_1);
            return iVar1 != 0;
          }
          func_0x00d114d0(*(int *)(iVar1 + 0x110));
          func_0x00d114d0(*(undefined4 *)(iVar1 + 0x114));
          FUN_00bbc580(iVar1,"ssl\\d1_lib.c",0x5f);
          func_0x00d26ae0(param_1);
          return false;
        }
      }
    }
  }
  return false;
}



uint thunk_FUN_00d27300(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    piVar4 = (int *)0x0;
    if (*param_1 == 0) {
      piVar4 = param_1;
    }
    if (piVar4 != (int *)0x0) {
      if ((piVar4[0x10] != 0) || (iVar3 = func_0x00d06ae0(param_1), iVar3 != 0)) {
        piVar4[0x11] = 3;
        return 1;
      }
      uVar1 = piVar4[0x11];
      if ((uVar1 & 1) == 0) {
        piVar4[0x11] = uVar1 | 1;
        func_0x00d28390(piVar4,1,0);
        if (0 < piVar4[0x43]) {
          return 0xffffffff;
        }
      }
      else if (piVar4[0x43] < 1) {
        if (((uVar1 & 2) == 0) &&
           ((**(code **)(piVar2[3] + 0x48))(piVar2,0,0,0,0,0,&param_1),
           (*(byte *)(piVar4 + 0x11) & 2) == 0)) {
          return 0xffffffff;
        }
      }
      else {
        iVar3 = (**(code **)(piVar2[3] + 0x50))(piVar2);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
      }
      if (piVar4[0x11] == 3) {
        return (uint)(piVar4[0x43] == 0);
      }
    }
  }
  return 0;
}



bool FUN_00d251a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x101) {
    return true;
  }
  iVar1 = func_0x00bfae30(param_2,param_3,param_3 >> 0x1f,1);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb0a0(param_2,3);
    return iVar1 != 0;
  }
  return false;
}



void FUN_00d251e0(undefined4 param_1)

{
  func_0x00d17a70(param_1,0x16);
  return;
}



void FUN_00d251f0(undefined4 param_1)

{
  FUN_00cfef40(param_1);
  return;
}



int FUN_00d25200(int param_1,int param_2)

{
  if (*(uint *)(param_1 + 0xc) == *(uint *)(param_2 + 0xc)) {
    return 0;
  }
  return (-(uint)(*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) & 0xfffffffe) + 1;
}



undefined4 FUN_00d25220(int *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != (int *)0x0) &&
     ((*param_1 == 0 || ((*param_1 == 1 && (param_1 = (int *)param_1[8], param_1 != (int *)0x0))))))
  {
    uVar1 = func_0x00bbbc70(param_1[0x240],"ssl\\s3_lib.c",0xda7);
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00d25260(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) &&
     ((*param_1 == 0 || ((*param_1 == 1 && (param_1 = (int *)param_1[8], param_1 != (int *)0x0))))))
  {
    switch(param_2) {
    case 6:
      uVar1 = 1;
      *(int *)(param_1[0x1ab] + 8) = param_3;
      break;
    case 0xf:
      param_1[0xd9] = param_3;
      return 1;
    case 0x38:
      param_1[0x1f5] = param_3;
      return 1;
    case 0x4f:
      param_1[0x243] = param_3;
      return 1;
    }
    return uVar1;
  }
  return 0;
}



uint FUN_00d25930(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar6 = param_1;
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return 0;
    }
    piVar6 = (int *)param_1[8];
    if ((int *)param_1[8] == (int *)0x0) {
      return 0;
    }
  }
  switch(param_2) {
  case 3:
    if (param_4 != (int *)0x0) {
      iVar1 = func_0x00d23680(param_4);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\s3_lib.c",0xdcf,&DAT_010c15c4);
        func_0x00bc5160(0x14,0x80005,0);
        return 0;
      }
      iVar2 = func_0x00d00bc0(param_1,iVar1);
      if (iVar2 == 0) {
        func_0x00bd5d50(iVar1);
        return 0;
      }
      return 1;
    }
    FUN_00bc4f50();
    uVar8 = 0xdca;
    goto LAB_00d259d6;
  case 4:
    if (param_4 != (int *)0x0) {
      uVar4 = func_0x00d23790(piVar6 + 0x207,piVar6 + 0x206,param_4);
      return uVar4;
    }
    FUN_00bc4f50();
    uVar8 = 0xde6;
LAB_00d259d6:
    func_0x00bc5050("ssl\\s3_lib.c",uVar8,&DAT_010c15c4);
    func_0x00bc5160(0x14,0xc0102,0);
    break;
  default:
    return 0;
  case 6:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_lib.c",0xddb,&DAT_010c15c4);
    func_0x00bc5160(0x14,0xc0101,0);
    return 0;
  case 10:
    return piVar6[0x47];
  case 0xb:
    uVar4 = piVar6[0x47];
    piVar6[0x47] = 0;
    return uVar4;
  case 0xc:
    return piVar6[0x46];
  case 0xd:
    return piVar6[0x2d];
  case 0x10:
    piVar6[0xda] = (int)param_4;
    return 1;
  case 0x37:
    if (param_3 != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\s3_lib.c",0xe0a,&DAT_010c15c4);
      func_0x00bc5160(0x14,0x140,0);
      return 0;
    }
    FUN_00bbc580(piVar6[0x1f7],"ssl\\s3_lib.c",0xdfa);
    piVar6[0x1f7] = 0;
    if (param_4 != (int *)0x0) {
      piVar5 = param_4;
      do {
        iVar1 = *piVar5;
        piVar5 = (int *)((int)piVar5 + 1);
      } while ((char)iVar1 != '\0');
      if ((piVar5 != (int *)((int)param_4 + 1)) &&
         ((uint)((int)piVar5 - ((int)param_4 + 1)) < 0x100)) {
        iVar1 = func_0x00bbbc70(param_4,"ssl\\s3_lib.c",0xe05);
        piVar6[0x1f7] = iVar1;
        if (iVar1 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\s3_lib.c",0xe06,&DAT_010c15c4);
          func_0x00bc5160(0x14,0xc0103,0);
          return 0;
        }
        return 1;
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\s3_lib.c",0xe02,&DAT_010c15c4);
      func_0x00bc5160(0x14,0x13f,0);
      return 0;
    }
    return 1;
  case 0x39:
    piVar6[0x1f6] = (int)param_4;
    return 1;
  case 0x41:
    piVar6[0x1f8] = param_3;
    return 1;
  case 0x42:
    *param_4 = piVar6[0x1fd];
    return 1;
  case 0x43:
    piVar6[0x1fd] = (int)param_4;
    return 1;
  case 0x44:
    *param_4 = piVar6[0x1fc];
    return 1;
  case 0x45:
    piVar6[0x1fc] = (int)param_4;
    return 1;
  case 0x46:
    *param_4 = piVar6[0x1fe];
    uVar4 = piVar6[0x1ff];
    if (uVar4 != 0) {
      uVar7 = 0xffffffff;
      if (uVar4 < 0x80000000) {
        uVar7 = uVar4;
      }
      return uVar7;
    }
    return 0xffffffff;
  case 0x47:
    FUN_00bbc580(piVar6[0x1fe],"ssl\\s3_lib.c",0xe38);
    piVar6[0x1fe] = (int)param_4;
    piVar6[0x1ff] = param_3;
    return 1;
  case 0x58:
    if (param_3 != 0) {
      uVar4 = func_0x00d059b0();
      return uVar4;
    }
    uVar4 = func_0x00d058f0(piVar6,0,param_4);
    return uVar4;
  case 0x59:
    if (param_3 != 0) {
      uVar4 = func_0x00d05070();
      return uVar4;
    }
    uVar4 = func_0x00d04fe0(piVar6,0,param_4);
    return uVar4;
  case 0x5a:
    if (piVar6[0x1c7] != 0) {
      iVar1 = piVar6[0x209];
      uVar4 = piVar6[0x208];
      if ((param_4 != (int *)0x0) && (uVar7 = 0, uVar4 != 0)) {
        do {
          iVar2 = func_0x00d15430(param_1[1],*(undefined2 *)(iVar1 + uVar7 * 2));
          if (iVar2 == 0) {
            uVar3 = *(ushort *)(iVar1 + uVar7 * 2) | 0x1000000;
          }
          else {
            uVar3 = func_0x00d153f0(*(undefined2 *)(iVar2 + 0x10),1);
          }
          param_4[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      return uVar4;
    }
    break;
  case 0x5b:
    uVar4 = func_0x00d15880(piVar6 + 0x207,piVar6 + 0x206,param_4,param_3);
    return uVar4;
  case 0x5c:
    uVar4 = func_0x00d159b0(param_1[1],piVar6 + 0x207,piVar6 + 0x206,param_4);
    return uVar4;
  case 0x5d:
    uVar4 = func_0x00d15f80(piVar6,param_3);
    if (param_3 != -1) {
      uVar4 = func_0x00d153f0(uVar4 & 0xffff,1);
      return uVar4;
    }
    return uVar4 & 0xffff;
  case 0x61:
    uVar8 = 0;
    goto LAB_00d25ebd;
  case 0x62:
    uVar4 = func_0x00d15da0(param_1[1],piVar6[0x1ab],param_4,0);
    return uVar4;
  case 0x65:
    uVar8 = 1;
LAB_00d25ebd:
    uVar4 = func_0x00d15c70(piVar6[0x1ab],param_4,param_3,uVar8);
    return uVar4;
  case 0x66:
    uVar4 = func_0x00d15da0(param_1[1],piVar6[0x1ab],param_4,1);
    return uVar4;
  case 0x67:
    if ((piVar6[0xe] == 0) && (piVar6[0x8f] != 0)) {
      if (param_4 != (int *)0x0) {
        *param_4 = piVar6[0x90];
      }
      return piVar6[0x91];
    }
    break;
  case 0x68:
    if (piVar6[0xe] != 0) {
      uVar4 = func_0x00d27290(piVar6[0x1ab],param_4,param_3);
      return uVar4;
    }
    break;
  case 0x69:
    uVar4 = func_0x00d04ca0(piVar6,0,param_3);
    return uVar4;
  case 0x6a:
    uVar4 = func_0x00d05a00(piVar6[0x1ab],param_4,0,param_3);
    return uVar4;
  case 0x6b:
    uVar4 = func_0x00d05a00(piVar6[0x1ab],param_4,1,param_3);
    return uVar4;
  case 0x6c:
    iVar1 = piVar6[0xa7];
    goto LAB_00d25fd2;
  case 0x6d:
    if ((piVar6[0x1c7] != 0) && (piVar6[0xd7] != 0)) {
      func_0x00bd7560(piVar6[0xd7]);
      *param_4 = piVar6[0xd7];
      return 1;
    }
    break;
  case 0x6f:
    if (piVar6[0x205] != 0) {
      *param_4 = piVar6[0x205];
      return piVar6[0x204];
    }
    break;
  case 0x73:
    *param_4 = *(int *)(*(int *)piVar6[0x1ab] + 8);
    return 1;
  case 0x74:
    uVar4 = func_0x00d05860(piVar6[0x1ab],param_4);
    return uVar4;
  case 0x75:
    if (param_3 != 3) {
      uVar4 = func_0x00d05a40(piVar6[0x1ab],param_3);
      return uVar4;
    }
    if ((piVar6[0xe] != 0) && (piVar6[0x8d] != 0)) {
      if ((*(byte *)(piVar6[0x8d] + 0x14) & 0x44) != 0) {
        return 2;
      }
      if (piVar6[0xa2] != 0) {
        *(int *)piVar6[0x1ab] = piVar6[0xa2];
        return 1;
      }
    }
    break;
  case 0x76:
    *(int *)(piVar6[0x1ab] + 0xc) = param_3;
    return 1;
  case 0x7f:
    return piVar6[0x1f8];
  case 0x84:
    iVar1 = piVar6[0xa1];
LAB_00d25fd2:
    if (iVar1 != 0) {
      *param_4 = *(int *)(iVar1 + 8);
      return 1;
    }
    break;
  case 0x85:
    if ((piVar6[0x1c7] != 0) && (piVar6[0x8e] != 0)) {
      func_0x00bd7560(piVar6[0x8e]);
      *param_4 = piVar6[0x8e];
      return 1;
    }
    break;
  case 0x86:
    if (((((*(byte *)(((int *)piVar6[3])[0x1d] + 0x28) & 8) == 0) &&
         (iVar1 = *(int *)piVar6[3], 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (*(char *)((int)piVar6 + 0x359) != '\0')) {
      uVar4 = func_0x00d153f0(*(undefined2 *)((int)piVar6 + 0x35a),1);
      return uVar4;
    }
    uVar4 = func_0x00d153f0(*(undefined4 *)(piVar6[0x1c7] + 0x2d4),1);
    return uVar4;
  case 0x87:
    if (param_4 != (int *)0x0) {
      *param_4 = piVar6[0x209];
    }
    return piVar6[0x208];
  case 0x89:
    uVar4 = func_0x00d05630(piVar6[0x1ab],param_4,0);
    return uVar4;
  case 0x8a:
    uVar4 = func_0x00d05630(piVar6[0x1ab],param_4,1);
    return uVar4;
  }
  return 0;
}



undefined4 FUN_00d261f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_2) {
  case 6:
    *(undefined4 *)(*(int *)(param_1 + 0xd8) + 8) = param_3;
    return 1;
  default:
    return 0;
  case 0x35:
    *(undefined4 *)(param_1 + 0x14c) = param_3;
    return 1;
  case 0x3f:
    *(undefined4 *)(param_1 + 0x170) = param_3;
    return 1;
  case 0x48:
    *(undefined4 *)(param_1 + 0x168) = param_3;
    return 1;
  case 0x4b:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(undefined4 *)(param_1 + 0x1ec) = param_3;
    return 1;
  case 0x4c:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(undefined4 *)(param_1 + 0x1f0) = param_3;
    return 1;
  case 0x4d:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(undefined4 *)(param_1 + 500) = param_3;
    return 1;
  case 0x4f:
    *(undefined4 *)(param_1 + 0x23c) = param_3;
    return 1;
  }
}



// WARNING: Removing unreachable block (ram,0x00d15a4e)
// WARNING: Removing unreachable block (ram,0x00d15a5b)
// WARNING: Removing unreachable block (ram,0x00d15a7b)
// WARNING: Removing unreachable block (ram,0x00d15aa0)
// WARNING: Removing unreachable block (ram,0x00d15a56)

undefined4 FUN_00d26340(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 in_stack_00000020;
  
  switch(param_2) {
  case 3:
    if (param_4 != (int *)0x0) {
      iVar3 = func_0x00d23680(param_4);
      if (iVar3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\s3_lib.c",0xf30,"ssl3_ctx_ctrl");
        func_0x00bc5160(0x14,0x80005,0);
        return 0;
      }
      iVar4 = func_0x00cffdb0(param_1,iVar3);
      if (iVar4 != 0) {
        return 1;
      }
      func_0x00bd5d50(iVar3);
      return 0;
    }
    FUN_00bc4f50();
    uVar5 = 0xf2b;
    goto LAB_00d26375;
  case 4:
    if (param_4 != (int *)0x0) {
      uVar5 = func_0x00d23790(param_1 + 0x18c,param_1 + 0x188,param_4);
      return uVar5;
    }
    FUN_00bc4f50();
    uVar5 = 0xf46;
LAB_00d26375:
    func_0x00bc5050("ssl\\s3_lib.c",uVar5,"ssl3_ctx_ctrl");
    func_0x00bc5160(0x14,0xc0102,0);
LAB_00d26390:
    return 0;
  default:
    goto LAB_00d26390;
  case 6:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_lib.c",0xf3b,"ssl3_ctx_ctrl");
    func_0x00bc5160(0x14,0xc0101,0);
    return 0;
  case 0xe:
    iVar3 = *(int *)(param_1 + 0xa8);
    if (iVar3 == 0) {
      iVar3 = func_0x00bd1790();
      *(int *)(param_1 + 0xa8) = iVar3;
      if (iVar3 == 0) {
        FUN_00bc4f50();
        uVar5 = 0xfd9;
        goto LAB_00d2689a;
      }
    }
    iVar3 = func_0x00bd18c0(iVar3,param_4);
    if (iVar3 == 0) {
      FUN_00bc4f50();
      uVar5 = 0xfde;
LAB_00d2689a:
      func_0x00bc5050("ssl\\s3_lib.c",uVar5,"ssl3_ctx_ctrl");
      func_0x00bc5160(0x14,0x8000f,0);
      return 0;
    }
    break;
  case 0x36:
    *(int **)(param_1 + 0x150) = param_4;
    return 1;
  case 0x3a:
  case 0x3b:
    if (param_4 == (int *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 != 0x3b) {
        iVar3 = *(int *)(param_1 + 0x158);
        iVar4 = *(int *)(param_1 + 0x15c);
        iVar1 = *(int *)(param_1 + 0x160);
        *param_4 = *(int *)(param_1 + 0x154);
        param_4[1] = iVar3;
        param_4[2] = iVar4;
        param_4[3] = iVar1;
        piVar6 = *(int **)(param_1 + 0x164);
        iVar3 = piVar6[1];
        iVar4 = piVar6[2];
        iVar1 = piVar6[3];
        param_4[4] = *piVar6;
        param_4[5] = iVar3;
        param_4[6] = iVar4;
        param_4[7] = iVar1;
        iVar3 = piVar6[5];
        iVar4 = piVar6[6];
        iVar1 = piVar6[7];
        param_4[8] = piVar6[4];
        param_4[9] = iVar3;
        param_4[10] = iVar4;
        param_4[0xb] = iVar1;
        iVar3 = *(int *)(param_1 + 0x164);
        iVar4 = *(int *)(iVar3 + 0x24);
        iVar1 = *(int *)(iVar3 + 0x28);
        iVar2 = *(int *)(iVar3 + 0x2c);
        param_4[0xc] = *(int *)(iVar3 + 0x20);
        param_4[0xd] = iVar4;
        param_4[0xe] = iVar1;
        param_4[0xf] = iVar2;
        iVar4 = *(int *)(iVar3 + 0x34);
        iVar1 = *(int *)(iVar3 + 0x38);
        iVar2 = *(int *)(iVar3 + 0x3c);
        param_4[0x10] = *(int *)(iVar3 + 0x30);
        param_4[0x11] = iVar4;
        param_4[0x12] = iVar1;
        param_4[0x13] = iVar2;
        return 1;
      }
      iVar3 = param_4[1];
      iVar4 = param_4[2];
      iVar1 = param_4[3];
      piVar6 = *(int **)(param_1 + 0x164);
      *(int *)(param_1 + 0x154) = *param_4;
      *(int *)(param_1 + 0x158) = iVar3;
      *(int *)(param_1 + 0x15c) = iVar4;
      *(int *)(param_1 + 0x160) = iVar1;
      iVar3 = param_4[5];
      iVar4 = param_4[6];
      iVar1 = param_4[7];
      *piVar6 = param_4[4];
      piVar6[1] = iVar3;
      piVar6[2] = iVar4;
      piVar6[3] = iVar1;
      iVar3 = param_4[9];
      iVar4 = param_4[10];
      iVar1 = param_4[0xb];
      piVar6[4] = param_4[8];
      piVar6[5] = iVar3;
      piVar6[6] = iVar4;
      piVar6[7] = iVar1;
      iVar3 = *(int *)(param_1 + 0x164);
      iVar4 = param_4[0xd];
      iVar1 = param_4[0xe];
      iVar2 = param_4[0xf];
      *(int *)(iVar3 + 0x20) = param_4[0xc];
      *(int *)(iVar3 + 0x24) = iVar4;
      *(int *)(iVar3 + 0x28) = iVar1;
      *(int *)(iVar3 + 0x2c) = iVar2;
      iVar4 = param_4[0x11];
      iVar1 = param_4[0x12];
      iVar2 = param_4[0x13];
      *(int *)(iVar3 + 0x30) = param_4[0x10];
      *(int *)(iVar3 + 0x34) = iVar4;
      *(int *)(iVar3 + 0x38) = iVar1;
      *(int *)(iVar3 + 0x3c) = iVar2;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_lib.c",0xf5b,"ssl3_ctx_ctrl");
    func_0x00bc5160(0x14,0x145,0);
    return 0;
  case 0x40:
    *(int **)(param_1 + 0x174) = param_4;
    return 1;
  case 0x41:
    *(int *)(param_1 + 0x178) = param_3;
    return 1;
  case 0x4e:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    *(int **)(param_1 + 0x1e8) = param_4;
    return 1;
  case 0x4f:
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 0x20;
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x1f8),"ssl\\s3_lib.c",0xf8c);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    if (param_4 != (int *)0x0) {
      piVar6 = param_4;
      do {
        iVar3 = *piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
      } while ((char)iVar3 != '\0');
      if ((uint)((int)piVar6 - (int)((int)param_4 + 1)) < 0x100) {
        piVar6 = param_4;
        do {
          iVar3 = *piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
        } while ((char)iVar3 != '\0');
        if (piVar6 != (int *)((int)param_4 + 1)) {
          iVar3 = func_0x00bbbc70(param_4,"ssl\\s3_lib.c",0xf94);
          *(int *)(param_1 + 0x1f8) = iVar3;
          if (iVar3 != 0) {
            return 1;
          }
          FUN_00bc4f50();
          uVar5 = 0xf95;
          goto LAB_00d26654;
        }
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\s3_lib.c",0xf91,"ssl3_ctx_ctrl");
      func_0x00bc5160(0x14,0x165,0);
      return 0;
    }
    break;
  case 0x50:
    *(int *)(param_1 + 0x220) = param_3;
    return 1;
  case 0x51:
    *(code **)(param_1 + 500) = FUN_00d25220;
    if (*(int *)(param_1 + 0x21c) != 0) {
      FUN_00bbc580(*(int *)(param_1 + 0x21c),"ssl\\s3_lib.c",0xf9d);
    }
    iVar3 = func_0x00bbbc70(param_4,"ssl\\s3_lib.c",0xf9e);
    *(int *)(param_1 + 0x21c) = iVar3;
    if (iVar3 == 0) {
      FUN_00bc4f50();
      uVar5 = 3999;
LAB_00d26654:
      func_0x00bc5050("ssl\\s3_lib.c",uVar5,"ssl3_ctx_ctrl");
      func_0x00bc5160(0x14,0xc0103,0);
      return 0;
    }
    break;
  case 0x52:
    iVar3 = *(int *)(param_1 + 0xa8);
    if ((iVar3 == 0) && (param_3 == 0)) goto LAB_00d26974;
    goto LAB_00d2697f;
  case 0x53:
    func_0x00bdf360(*(undefined4 *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xa8) = 0;
    return 1;
  case 0x58:
    if (param_3 != 0) {
      uVar5 = func_0x00d059b0();
      return uVar5;
    }
    uVar5 = func_0x00d058f0(0,param_1,param_4);
    return uVar5;
  case 0x59:
    if (param_3 != 0) {
      uVar5 = func_0x00d05070();
      return uVar5;
    }
    uVar5 = func_0x00d04fe0(0,param_1,param_4);
    return uVar5;
  case 0x5b:
    uVar5 = func_0x00d15880(param_1 + 0x18c,param_1 + 0x188,param_4,param_3);
    return uVar5;
  case 0x5c:
    func_0x00e87f70();
    iVar3 = FUN_00bbc4f0(0x50,"ssl\\t1_lib.c",0x447);
    if (iVar3 == 0) {
      return 0;
    }
    iVar4 = func_0x00bf1420(in_stack_00000020,0x3a,1,FUN_00d12760,&stack0x00000000);
    if (iVar4 != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\t1_lib.c",0x44e,"tls1_set_groups_list");
      func_0x00bc5160(0x14,0x80106,"No valid groups in \'%s\'",in_stack_00000020);
    }
    FUN_00bbc580(iVar3,"ssl\\t1_lib.c",0x463);
    return 0;
  case 0x61:
    uVar5 = func_0x00d15c70(*(undefined4 *)(param_1 + 0xd8),param_4,param_3,0);
    return uVar5;
  case 0x62:
    uVar5 = 0;
    goto LAB_00d267a2;
  case 0x65:
    uVar5 = func_0x00d15c70(*(undefined4 *)(param_1 + 0xd8),param_4,param_3,1);
    return uVar5;
  case 0x66:
    uVar5 = 1;
LAB_00d267a2:
    uVar5 = func_0x00d15da0(param_1,*(undefined4 *)(param_1 + 0xd8),param_4,uVar5);
    return uVar5;
  case 0x68:
    uVar5 = func_0x00d27290(*(undefined4 *)(param_1 + 0xd8),param_4,param_3);
    return uVar5;
  case 0x69:
    uVar5 = func_0x00d04ca0(0,param_1,param_3);
    return uVar5;
  case 0x6a:
    uVar5 = 0;
    goto LAB_00d26817;
  case 0x6b:
    uVar5 = 1;
LAB_00d26817:
    uVar5 = func_0x00d05a00(*(undefined4 *)(param_1 + 0xd8),param_4,uVar5,param_3);
    return uVar5;
  case 0x73:
LAB_00d26974:
    iVar3 = *(int *)(**(int **)(param_1 + 0xd8) + 8);
LAB_00d2697f:
    *param_4 = iVar3;
    break;
  case 0x74:
    uVar5 = func_0x00d05860(*(undefined4 *)(param_1 + 0xd8),param_4);
    return uVar5;
  case 0x75:
    uVar5 = func_0x00d05a40(*(undefined4 *)(param_1 + 0xd8),param_3);
    return uVar5;
  case 0x76:
    *(int *)(*(int *)(param_1 + 0xd8) + 0xc) = param_3;
    return 1;
  case 0x7f:
    return *(undefined4 *)(param_1 + 0x178);
  case 0x80:
    *param_4 = *(int *)(param_1 + 0x170);
    return 1;
  case 0x81:
    *param_4 = *(int *)(param_1 + 0x174);
    return 1;
  case 0x89:
    uVar5 = func_0x00d05630(*(undefined4 *)(param_1 + 0xd8),param_4,0);
    return uVar5;
  case 0x8a:
    uVar5 = func_0x00d05630(*(undefined4 *)(param_1 + 0xd8),param_4,1);
    return uVar5;
  }
  return 1;
}



int FUN_00d26c50(uint param_1)

{
  if (param_1 < 0xa7) {
    return param_1 * -0x40 + 0x12ba268;
  }
  return 0;
}



void FUN_00d26c70(void)

{
  int iVar1;
  
  func_0x00e87f70();
  iVar1 = func_0x00cfef70(&stack0x00000000,&DAT_012b7728,7);
  if (iVar1 == 0) {
    iVar1 = func_0x00cfef70(&stack0x00000000,&DAT_012b78e8,0xa7);
    if (iVar1 == 0) {
      func_0x00cfef70(&stack0x00000000,&DAT_012ba2a8,2);
    }
  }
  return;
}



undefined4 FUN_00d27010(void)

{
  return 0xa7;
}



void FUN_00d27020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00d270b0(param_1,param_2,param_3,1,param_4);
  return;
}



undefined4 FUN_00d27040(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xc) & 0xff000000) != 0x3000000) {
    *param_3 = 0;
    return 1;
  }
  iVar1 = func_0x00bfae30(param_2,*(uint *)(param_1 + 0xc) & 0xffff,0,2);
  if (iVar1 == 0) {
    return 0;
  }
  *param_3 = 2;
  return 1;
}



void FUN_00d27090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  func_0x00d270b0(param_1,param_2,param_3,0,param_4);
  return;
}



undefined4 FUN_00d271d0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)0x0;
    if (*param_1 == 0) {
      piVar1 = param_1;
    }
    if (piVar1 != (int *)0x0) {
      if (piVar1[0xd] != 0) {
        piVar1[0x45] = 1;
      }
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00d27200(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)0x0;
    if (*param_1 == 0) {
      piVar3 = param_1;
    }
    if (piVar3 != (int *)0x0) {
      if (piVar3[0x45] != 0) {
        iVar1 = func_0x00d0baa0(piVar3 + 0x244);
        if (((iVar1 == 0) && (iVar1 = func_0x00d0bc40(piVar3 + 0x244), iVar1 == 0)) &&
           ((param_2 != 0 || (iVar1 = func_0x00d06b10(param_1), iVar1 == 0)))) {
          func_0x00d06e90(piVar3);
          piVar3[0x47] = piVar3[0x47] + 1;
          piVar3[0x46] = piVar3[0x46] + 1;
          piVar3[0x45] = 0;
          uVar2 = 1;
        }
      }
      return uVar2;
    }
  }
  return 0;
}



uint FUN_00d27300(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    piVar4 = (int *)0x0;
    if (*param_1 == 0) {
      piVar4 = param_1;
    }
    if (piVar4 != (int *)0x0) {
      if ((piVar4[0x10] != 0) || (iVar3 = func_0x00d06ae0(param_1), iVar3 != 0)) {
        piVar4[0x11] = 3;
        return 1;
      }
      uVar1 = piVar4[0x11];
      if ((uVar1 & 1) == 0) {
        piVar4[0x11] = uVar1 | 1;
        func_0x00d28390(piVar4,1,0);
        if (0 < piVar4[0x43]) {
          return 0xffffffff;
        }
      }
      else if (piVar4[0x43] < 1) {
        if (((uVar1 & 2) == 0) &&
           ((**(code **)(piVar2[3] + 0x48))(piVar2,0,0,0,0,0,&param_1),
           (*(byte *)(piVar4 + 0x11) & 2) == 0)) {
          return 0xffffffff;
        }
      }
      else {
        iVar3 = (**(code **)(piVar2[3] + 0x50))(piVar2);
        if (iVar3 == -1) {
          return 0xffffffff;
        }
      }
      if (piVar4[0x11] == 3) {
        return (uint)(piVar4[0x43] == 0);
      }
    }
  }
  return 0;
}



undefined4 FUN_00d273d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)0x0;
    if (*param_1 == 0) {
      piVar3 = param_1;
    }
    if (piVar3 != (int *)0x0) {
      SetLastError(0);
      if (piVar3[0x45] != 0) {
        piVar3 = (int *)0x0;
        if (*param_1 == 0) {
          piVar3 = param_1;
        }
        if ((piVar3 != (int *)0x0) && (piVar3[0x45] != 0)) {
          iVar1 = func_0x00d0baa0(piVar3 + 0x244);
          if ((iVar1 == 0) &&
             ((iVar1 = func_0x00d0bc40(piVar3 + 0x244), iVar1 == 0 &&
              (iVar1 = func_0x00d06b10(param_1), iVar1 == 0)))) {
            func_0x00d06e90(piVar3);
            piVar3[0x47] = piVar3[0x47] + 1;
            piVar3[0x46] = piVar3[0x46] + 1;
            piVar3[0x45] = 0;
          }
        }
      }
      uVar2 = (**(code **)(param_1[3] + 0x4c))(param_1,0x17,param_2,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



int FUN_00d280d0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int *in_stack_00000014;
  
  func_0x00e87f70();
  if ((in_stack_00000014 != (int *)0x0) &&
     ((piVar6 = in_stack_00000014, *in_stack_00000014 == 0 ||
      ((*in_stack_00000014 == 1 &&
       (piVar6 = (int *)in_stack_00000014[8], (int *)in_stack_00000014[8] != (int *)0x0)))))) {
    if (piVar6[0x248] == 0) {
LAB_00d281f7:
      piVar6[0x43] = 0;
      return 1;
    }
    iVar2 = func_0x00d06ab0(in_stack_00000014);
    if (((iVar2 == 0xd) && (piVar6[0x22b] == 0)) &&
       (uVar3 = func_0x00d01330(in_stack_00000014), (uVar3 & 0xffffff00) == 0x300)) {
      func_0x00d01330(in_stack_00000014);
    }
    piVar1 = piVar6 + 0x44;
    iVar2 = func_0x00d0bc40(piVar6 + 0x244);
    if (iVar2 == 0) {
      uVar4 = (**(code **)(piVar6[0x248] + 0x18))
                        (piVar6[0x24a],&stack0x00000000,1,"ssl\\s3_msg.c",0x81);
      iVar2 = func_0x00d0bd90(piVar6,1,uVar4);
      if (0 < iVar2) {
        func_0x00baa730(piVar6[10],0xb,0,0);
        piVar6[0x43] = 0;
        if ((code *)piVar6[0xd9] != (code *)0x0) {
          (*(code *)piVar6[0xd9])(1,piVar6[8],0x15,piVar1,2,in_stack_00000014,piVar6[0xda]);
        }
        pcVar5 = (code *)piVar6[0x1d7];
        if ((pcVar5 != (code *)0x0) ||
           (pcVar5 = *(code **)(in_stack_00000014[1] + 0xb0), pcVar5 != (code *)0x0)) {
          (*pcVar5)(in_stack_00000014,0x4008,
                    CONCAT11((char)*piVar1,*(undefined1 *)((int)piVar6 + 0x111)));
        }
        return iVar2;
      }
      piVar6[0x43] = 2;
      piVar6[0x251] = 2;
      *(undefined1 *)(piVar6 + 0x252) = 0x15;
      piVar6[0x253] = (int)piVar1;
      return iVar2;
    }
    if (piVar6[0x43] == 2) {
      uVar4 = (**(code **)(piVar6[0x248] + 0x1c))(piVar6[0x24a],"ssl\\s3_msg.c",0x76);
      iVar2 = func_0x00d0bd90(piVar6,1,uVar4);
      if (0 < iVar2) {
        piVar6[0x251] = 0;
        goto LAB_00d281f7;
      }
    }
    else {
      piVar6[0x43] = 0;
    }
  }
  return -1;
}



int FUN_00d28480(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  
  func_0x00e87f70();
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    piVar5 = (int *)0x0;
    if (*param_2 == 0) {
      piVar5 = param_2;
    }
    if (piVar5 != (int *)0x0) {
      piVar5[0x43] = 0;
      piVar1 = piVar5 + 0x44;
      param_2 = (int *)CONCAT22(param_2._2_2_,(short)*piVar1);
      iVar3 = func_0x00d287e0(piVar5,0x15,&param_2,2,&stack0x00000000);
      if (iVar3 < 1) {
        piVar5[0x43] = 1;
        return iVar3;
      }
      func_0x00baa730(piVar5[10],0xb,0,0);
      if ((code *)piVar5[0xd9] != (code *)0x0) {
        (*(code *)piVar5[0xd9])(1,piVar5[8],0x15,piVar1,2,piVar2,piVar5[0xda]);
      }
      pcVar4 = (code *)piVar5[0x1d7];
      if ((pcVar4 != (code *)0x0) || (pcVar4 = *(code **)(piVar2[1] + 0xb0), pcVar4 != (code *)0x0))
      {
        (*pcVar4)(piVar2,0x4008,CONCAT11((char)*piVar1,*(undefined1 *)((int)piVar5 + 0x111)));
      }
      return iVar3;
    }
  }
  return 0;
}



int FUN_00d28570(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)0x0;
    if (*param_1 == 0) {
      piVar2 = param_1;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = func_0x00d06b10(param_1);
      if ((iVar1 != 0) && (iVar1 = func_0x00d06dc0(piVar2), iVar1 == 0)) {
        iVar1 = (*(code *)piVar2[0xd])(param_1);
        if (iVar1 < 0) {
          return iVar1;
        }
        if (iVar1 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\d1_msg.c",0x1a,"dtls1_write_app_data_bytes");
          func_0x00bc5160(0x14,0xe5,0);
          return -1;
        }
      }
      if (0x4000 < param_4) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\d1_msg.c",0x20,"dtls1_write_app_data_bytes");
        func_0x00bc5160(0x14,0x14e,0);
        return -1;
      }
      iVar1 = func_0x00d29310(piVar2,param_2,param_3,param_4,param_5);
      return iVar1;
    }
  }
  return -1;
}



int FUN_00d28930(void)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  code *pcVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  code *pcStack00000004;
  char in_stack_00000010;
  int *in_stack_00000034;
  char in_stack_00000038;
  undefined1 *in_stack_0000003c;
  void *in_stack_00000040;
  uint in_stack_00000044;
  int in_stack_00000048;
  size_t *in_stack_0000004c;
  size_t sVar16;
  
  func_0x00e87f70();
  piVar14 = in_stack_00000034;
  pcStack00000004 = (code *)0x0;
  if ((in_stack_00000034 == (int *)0x0) ||
     ((piVar15 = in_stack_00000034, *in_stack_00000034 != 0 &&
      ((*in_stack_00000034 != 1 ||
       (piVar15 = (int *)in_stack_00000034[8], (int *)in_stack_00000034[8] == (int *)0x0)))))) {
    return -1;
  }
  if ((((in_stack_00000038 != '\0') && (in_stack_00000038 != '\x17')) &&
      (in_stack_00000038 != '\x16')) || ((in_stack_00000048 != 0 && (in_stack_00000038 != '\x17'))))
  {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0xd6,"dtls1_read_bytes");
    func_0x00d06d50(piVar15,0x50,0xc0103,0);
    return -1;
  }
  iVar6 = func_0x00d06dc0(piVar15);
  if ((iVar6 == 0) && (iVar6 = func_0x00d06b10(piVar14), iVar6 != 0)) {
    iVar6 = (*(code *)piVar15[0xd])(piVar14);
    if (iVar6 < 0) {
      return iVar6;
    }
    if (iVar6 == 0) {
      return -1;
    }
  }
  pcVar12 = (code *)0x0;
LAB_00d28a00:
  do {
    do {
      piVar15[0xc] = 1;
      iVar6 = func_0x00d06b40(piVar14);
      if (((iVar6 != 0) && ((uint)piVar15[0x25a] <= (uint)piVar15[0x25b])) &&
         (iVar6 = func_0x00d115e0(*(undefined4 *)(piVar15[0x255] + 4)), iVar6 != 0)) {
        piVar3 = *(int **)(iVar6 + 8);
        iVar10 = piVar3[1];
        iVar4 = piVar3[2];
        iVar5 = piVar3[3];
        piVar15[0x25c] = *piVar3;
        piVar15[0x25d] = iVar10;
        piVar15[0x25e] = iVar4;
        piVar15[0x25f] = iVar5;
        iVar10 = piVar3[5];
        iVar4 = piVar3[6];
        iVar5 = piVar3[7];
        piVar15[0x260] = piVar3[4];
        piVar15[0x261] = iVar10;
        piVar15[0x262] = iVar4;
        piVar15[0x263] = iVar5;
        iVar10 = piVar3[9];
        piVar15[0x264] = piVar3[8];
        piVar15[0x265] = iVar10;
        piVar15[0x25a] = 1;
        piVar15[0x25b] = 0;
        FUN_00bbc580(*(undefined4 *)(iVar6 + 8),"ssl\\record\\rec_layer_d1.c",0xa4);
        func_0x00d11410(iVar6);
      }
      iVar6 = func_0x00d249e0(piVar15);
    } while (0 < iVar6);
    iVar6 = func_0x00d06dd0(piVar15);
    if (iVar6 != 0) {
      return -1;
    }
    if ((uint)piVar15[0x25a] <= (uint)piVar15[0x25b]) {
      piVar15[0x25a] = 0;
      uVar7 = 0;
      piVar15[0x25b] = 0;
      do {
        piVar3 = piVar15 + (uVar7 * 5 + 0x12e) * 2;
        uVar8 = (**(code **)(piVar15[0x247] + 0x20))
                          (piVar15[0x249],piVar3,piVar3 + 1,piVar3 + 2,piVar3 + 3,piVar3 + 5,
                           piVar3 + 7,(int)piVar3 + 0x1e,"ssl\\record\\rec_layer_d1.c",0x101);
        iVar6 = func_0x00d0bd90(piVar15,0,uVar8);
        if (iVar6 < 1) {
          iVar6 = func_0x00d2be30(piVar15,iVar6);
          if (iVar6 < 1) {
            return iVar6;
          }
          goto LAB_00d28a00;
        }
        piVar3[6] = 0;
        piVar15[0x25a] = piVar15[0x25a] + 1;
        iVar6 = (**(code **)(piVar15[0x247] + 0xc))(piVar15[0x249]);
      } while ((iVar6 != 0) && (uVar7 = piVar15[0x25a], uVar7 < 0x20));
    }
    iVar6 = piVar15[0x25b] * 5 + 0x12e;
    piVar3 = piVar15 + iVar6 * 2;
    if (((char)piVar15[iVar6 * 2 + 2] != '\x15') && (piVar3[5] != 0)) {
      piVar15[0x254] = 0;
    }
    if ((piVar15[0x40] != 0) && ((char)piVar3[2] != '\x16')) {
      uVar8 = *(undefined4 *)(piVar15[0x255] + 4);
      uVar7 = func_0x00d115f0(uVar8);
      if (uVar7 < 100) {
        if (piVar3[6] != 0) {
          return -1;
        }
        piVar9 = (int *)FUN_00bbc4f0(0x28,"ssl\\record\\rec_layer_d1.c",0x58);
        iVar6 = func_0x00d11430((int)piVar3 + 0x1e,piVar9);
        if ((piVar9 == (int *)0x0) || (iVar6 == 0)) {
          FUN_00bbc580(piVar9,"ssl\\record\\rec_layer_d1.c",0x5b);
          func_0x00d11410(iVar6);
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x5d,"dtls_buffer_record");
          uVar8 = 0xc0103;
LAB_00d28f26:
          func_0x00d06d50(piVar15,0x50,uVar8,0);
          return -1;
        }
        iVar10 = piVar3[1];
        iVar4 = piVar3[2];
        iVar5 = piVar3[3];
        *piVar9 = *piVar3;
        piVar9[1] = iVar10;
        piVar9[2] = iVar4;
        piVar9[3] = iVar5;
        iVar10 = piVar3[5];
        iVar4 = piVar3[6];
        iVar5 = piVar3[7];
        piVar9[4] = piVar3[4];
        piVar9[5] = iVar10;
        piVar9[6] = iVar4;
        piVar9[7] = iVar5;
        iVar10 = piVar3[9];
        piVar9[8] = piVar3[8];
        piVar9[9] = iVar10;
        iVar10 = func_0x00bbbc30(piVar3[3],piVar3[5],"ssl\\record\\rec_layer_d1.c",0x67);
        piVar9[4] = iVar10;
        piVar9[3] = iVar10;
        if (iVar10 == 0) {
          FUN_00bbc580(piVar9,"ssl\\record\\rec_layer_d1.c",0x69);
          func_0x00d11410(iVar6);
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x6b,"dtls_buffer_record");
          uVar8 = 0x8000f;
          goto LAB_00d28f26;
        }
        *piVar9 = 0;
        *(int **)(iVar6 + 8) = piVar9;
        iVar10 = func_0x00d114f0(uVar8,iVar6);
        pcVar12 = pcStack00000004;
        piVar14 = in_stack_00000034;
        if (iVar10 == 0) {
          FUN_00bbc580(piVar9[4],"ssl\\record\\rec_layer_d1.c",0x82);
          FUN_00bbc580(piVar9,"ssl\\record\\rec_layer_d1.c",0x83);
          func_0x00d11410(iVar6);
          piVar14 = in_stack_00000034;
        }
      }
      iVar6 = func_0x00d0cfd0(piVar15,piVar3,0);
joined_r0x00d28c99:
      if (iVar6 == 0) {
        return -1;
      }
      goto LAB_00d28a00;
    }
    if ((piVar15[0x11] & 2U) != 0) {
      iVar6 = func_0x00d0cfd0(piVar15,piVar3,0);
      if (iVar6 != 0) {
        piVar15[0xc] = 1;
        return 0;
      }
      return -1;
    }
    cVar1 = (char)piVar3[2];
    if (in_stack_00000038 == cVar1) {
LAB_00d291ed:
      iVar6 = func_0x00d06b10(piVar14);
      if (((iVar6 != 0) && (in_stack_00000038 == '\x17')) &&
         ((piVar15[0x69] == 0 || (piVar15[0x8a] == 0)))) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x148,"dtls1_read_bytes");
        func_0x00d06d50(piVar15,10,100,0);
        return -1;
      }
      if (in_stack_0000003c != (undefined1 *)0x0) {
        *in_stack_0000003c = (char)piVar3[2];
      }
      uVar7 = piVar3[5];
      if (in_stack_00000044 != 0) {
        uVar13 = in_stack_00000044;
        if (uVar7 < in_stack_00000044) {
          uVar13 = uVar7;
        }
        memcpy(in_stack_00000040,(void *)(piVar3[6] + piVar3[3]),uVar13);
        sVar16 = uVar13;
        if (in_stack_00000048 != 0) {
          if (piVar3[5] != 0) goto LAB_00d292bd;
          sVar16 = 0;
        }
        iVar6 = func_0x00d0cfd0(piVar15,piVar3,sVar16);
        if (iVar6 == 0) {
          return -1;
        }
LAB_00d292bd:
        *in_stack_0000004c = uVar13;
        return 1;
      }
      if (uVar7 != 0) {
        return 0;
      }
      goto LAB_00d29262;
    }
    if (cVar1 == '\x14') {
      if (in_stack_00000038 == '\x16') {
        if (in_stack_0000003c != (undefined1 *)0x0) goto LAB_00d291ed;
        goto LAB_00d28cf6;
      }
    }
    else {
LAB_00d28cf6:
      if (cVar1 == '\x15') {
        pcVar11 = (char *)(piVar3[6] + piVar3[3]);
        uVar7 = piVar3[5];
        if (((uVar7 < 0x80000000) && (uVar7 != 0)) && (cVar1 = *pcVar11, uVar7 != 1)) {
          bVar2 = pcVar11[1];
          uVar13 = (uint)bVar2;
          if (uVar7 == 2) {
            if ((code *)piVar15[0xd9] != (code *)0x0) {
              (*(code *)piVar15[0xd9])(0,piVar15[8],0x15,pcVar11,2,piVar14,piVar15[0xda]);
            }
            pcStack00000004 = (code *)piVar15[0x1d7];
            if ((((code *)piVar15[0x1d7] != (code *)0x0) ||
                (pcStack00000004 = *(code **)(piVar14[1] + 0xb0),
                *(code **)(piVar14[1] + 0xb0) != (code *)0x0)) ||
               (pcStack00000004 = pcVar12, pcVar12 != (code *)0x0)) {
              (*pcStack00000004)(piVar14,0x4004,CONCAT11(cVar1,bVar2));
            }
            if (cVar1 != '\x01') {
              if (cVar1 != '\x02') {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x1c3,"dtls1_read_bytes");
                func_0x00d06d50(piVar15,0x2f,0xf6,0);
                return -1;
              }
              piVar15[0xc] = 1;
              piVar15[0x42] = uVar13;
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x1ba,"dtls1_read_bytes");
              func_0x00d06d50(piVar15,0xffffffff,uVar13 + 1000,"SSL alert number %d",uVar13);
              piVar15[0x11] = piVar15[0x11] | 2;
              iVar6 = func_0x00d0cfd0(piVar15,piVar3,0);
              if (iVar6 != 0) {
                func_0x00d07e30(piVar15[0x228],piVar15[0x1c7]);
                return 0;
              }
              return -1;
            }
            piVar15[0x41] = uVar13;
            iVar6 = func_0x00d0cfd0(piVar15,piVar3,0);
            if (iVar6 == 0) {
              return -1;
            }
            piVar15[0x254] = piVar15[0x254] + 1;
            if (piVar15[0x254] == 5) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x1a0,"dtls1_read_bytes");
              func_0x00d06d50(piVar15,10,0x199,0);
              return -1;
            }
            pcVar12 = pcStack00000004;
            if (uVar13 == 0) {
              piVar15[0x11] = piVar15[0x11] | 2;
              return 0;
            }
            goto LAB_00d28a00;
          }
        }
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x186,"dtls1_read_bytes");
        func_0x00d06d50(piVar15,10,0xcd,0);
        return -1;
      }
    }
    if ((piVar15[0x11] & 1U) != 0) {
      piVar15[0xc] = 1;
LAB_00d29262:
      iVar6 = func_0x00d0cfd0(piVar15,piVar3,0);
      if (iVar6 == 0) {
        return -1;
      }
      return 0;
    }
    if (cVar1 == '\x14') {
LAB_00d28df7:
      iVar6 = func_0x00d0cfd0(piVar15,piVar3,0);
      goto joined_r0x00d28c99;
    }
    if ((cVar1 != '\x16') || (iVar6 = func_0x00d06dc0(piVar15), iVar6 != 0)) {
      switch((char)piVar3[2]) {
      case '\x14':
      case '\x15':
      case '\x16':
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x244,"dtls1_read_bytes");
        func_0x00d06d50(piVar15,10,0xc0103,0);
        return -1;
      case '\x17':
        goto LAB_00d29144;
      default:
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x23a,"dtls1_read_bytes");
        func_0x00d06d50(piVar15,10,0xf5,0);
        return -1;
      }
    }
    if (((short)piVar3[7] != *(short *)piVar15[0x255]) || ((uint)piVar3[5] < 0xc))
    goto LAB_00d28df7;
    func_0x00d2b9b0(piVar3[3],&stack0x00000010);
    if (in_stack_00000010 == '\x14') {
      iVar6 = func_0x00d24410(piVar15);
      if (iVar6 < 0) {
        return -1;
      }
      iVar6 = func_0x00d2c1a0(piVar15);
      if ((iVar6 < 1) && (iVar6 = func_0x00d06dd0(piVar15), iVar6 != 0)) {
        return -1;
      }
      iVar6 = func_0x00d0cfd0(piVar15,piVar3,0);
    }
    else {
      iVar6 = func_0x00d06b40(piVar14);
      if (iVar6 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x216,"dtls1_read_bytes");
        func_0x00d06d50(piVar15,0x50,0xc0103,0);
        return -1;
      }
      func_0x00d06e60(piVar15,1);
      iVar6 = (*(code *)piVar15[0xd])(piVar14);
      if (iVar6 < 0) {
        return iVar6;
      }
    }
    if (iVar6 == 0) {
      return -1;
    }
    if (((*(byte *)(piVar15 + 0x1e4) & 4) == 0) &&
       (iVar6 = (**(code **)(piVar15[0x247] + 8))(piVar15[0x249]), iVar6 == 0)) {
      piVar15[0xc] = 3;
      uVar8 = func_0x00d007d0(piVar14);
      func_0x00baa700(uVar8,0xf);
      func_0x00bab680(uVar8,9);
      return -1;
    }
  } while( true );
LAB_00d29144:
  if (((piVar15[0x48] != 0) && (piVar15[0x46] != 0)) &&
     (iVar6 = func_0x00d06ba0(piVar15), iVar6 != 0)) {
    piVar15[0x48] = 2;
    return -1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\record\\rec_layer_d1.c",0x254,"dtls1_read_bytes");
  func_0x00d06d50(piVar15,10,0xf5,0);
  return -1;
}



undefined4 FUN_00d29450(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    if (((*(uint *)(param_1 + 0x788) & 0x40004) == 0) && (param_3 == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x3b4,"final_renegotiate");
      func_0x00d06d50(param_1,0x28,0x152,0);
      return 0;
    }
  }
  else if (((*(int *)(param_1 + 0x8ac) != 0) && ((*(uint *)(param_1 + 0x788) & 0x40000) == 0)) &&
          (param_3 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions.c",0x3c0,"final_renegotiate");
    func_0x00d06d50(param_1,0x28,0x152,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00d29500(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x88c) = 0;
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x7dc),"ssl\\statem\\extensions.c",0x3d6);
    *(undefined4 *)(param_1 + 0x7dc) = 0;
  }
  return 1;
}



undefined4 FUN_00d29540(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  
  func_0x00e87f70();
  iVar7 = 3;
  iVar5 = *(int *)(param_2 + 4);
  uVar2 = func_0x00d00790(param_2);
  if ((iVar5 == 0) || (iVar1 = *(int *)(param_2 + 0x8a0), iVar1 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions.c",0x3e6,"final_server_name");
    func_0x00d06d50(param_2,0x50,0xc0103,0);
    return 0;
  }
  pcVar6 = *(code **)(iVar5 + 0x14c);
  if (pcVar6 == (code *)0x0) {
    pcVar6 = *(code **)(iVar1 + 0x14c);
    if (pcVar6 == (code *)0x0) goto LAB_00d295c6;
    uVar3 = *(undefined4 *)(iVar1 + 0x150);
  }
  else {
    uVar3 = *(undefined4 *)(iVar5 + 0x150);
  }
  iVar7 = (*pcVar6)(param_2,&stack0x00000000,uVar3);
LAB_00d295c6:
  if ((((*(int *)(param_2 + 0x38) != 0) && (param_4 != 0)) && (iVar7 == 0)) &&
     (*(int *)(param_2 + 0x36c) == 0)) {
    FUN_00bbc580(*(undefined4 *)(*(int *)(param_2 + 0x71c) + 0x2e0),"ssl\\statem\\extensions.c",
                 0x3fc);
    iVar1 = *(int *)(param_2 + 0x71c);
    uVar3 = func_0x00bbbc70(*(undefined4 *)(param_2 + 0x7dc),"ssl\\statem\\extensions.c",0x3fd);
    *(undefined4 *)(iVar1 + 0x2e0) = uVar3;
    if ((*(int *)(*(int *)(param_2 + 0x71c) + 0x2e0) == 0) && (*(int *)(param_2 + 0x7dc) != 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x3ff,"final_server_name");
      func_0x00d06d50(param_2,0x50,0xc0103,0);
    }
  }
  if (((*(int *)(param_2 + 0x1a4) == 0) || (*(int *)(param_2 + 0x228) == 0)) &&
     ((iVar5 != *(int *)(param_2 + 0x8a0) && (*(int *)(param_2 + 0x6f4) == 0)))) {
    LOCK();
    *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + 1;
    UNLOCK();
    piVar4 = (int *)(*(int *)(param_2 + 0x8a0) + 0x50);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
  }
  if (iVar7 == 0) {
    if ((((*(int *)(param_2 + 0x800) != 0) && ((uVar2 & 0x4000) == 0)) &&
        (uVar2 = func_0x00d00790(param_2), (uVar2 & 0x4000) != 0)) &&
       (*(undefined4 *)(param_2 + 0x800) = 0, *(int *)(param_2 + 0x36c) == 0)) {
      iVar5 = func_0x00d08360(param_2);
      if (iVar5 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions.c",0x426,"final_server_name");
        func_0x00d06d50(param_2,0x50,0xc0103,0);
        return 0;
      }
      FUN_00bbc580(*(undefined4 *)(iVar5 + 0x2e4),"ssl\\statem\\extensions.c",0x41c);
      *(undefined4 *)(iVar5 + 0x2e4) = 0;
      *(undefined4 *)(iVar5 + 0x2e8) = 0;
      *(undefined4 *)(iVar5 + 0x2ec) = 0;
      *(undefined4 *)(iVar5 + 0x2f0) = 0;
      iVar5 = func_0x00d086b0(param_2,iVar5);
      if (iVar5 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions.c",0x422,"final_server_name");
        func_0x00d06d50(param_2,0x50,0xc0103,0);
        return 0;
      }
    }
    return 1;
  }
  if (iVar7 == 1) {
    if ((((*(byte *)((*(int **)(param_2 + 0xc))[0x1d] + 0x28) & 8) != 0) ||
        (iVar5 = **(int **)(param_2 + 0xc), iVar5 < 0x304)) || (iVar5 == 0x10000)) {
      func_0x00d28390(param_2,1,0x70);
    }
  }
  else {
    if (iVar7 == 2) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x42e,"final_server_name");
      func_0x00d06d50(param_2,0x70,0xea,0);
      return 0;
    }
    if (iVar7 != 3) {
      return 1;
    }
  }
  *(undefined4 *)(param_2 + 0x88c) = 0;
  return 1;
}



undefined4 FUN_00d29870(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x80c) != 0)) &&
      (*(int *)(param_1 + 0x808) != 0)) &&
     (((pcVar4 = *(char **)(param_1 + 0x814), pcVar4 != (char *)0x0 &&
       (uVar2 = *(uint *)(param_1 + 0x810), uVar2 != 0)) &&
      (((*(byte *)(*(int *)(param_1 + 0x234) + 0x10) & 4) != 0 ||
       ((*(byte *)(*(int *)(param_1 + 0x234) + 0x14) & 8) != 0)))))) {
    uVar3 = 0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == '\0') break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    if (uVar3 == uVar2) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x460,"final_ec_pt_formats");
      func_0x00d06d50(param_1,0x2f,0x9d,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00d29900(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x800) = 0;
  }
  return 1;
}



undefined4 FUN_00d29920(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x7e0) = 0xffffffff;
    return 1;
  }
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x7f8),"ssl\\statem\\extensions.c",0x47a);
  *(undefined4 *)(param_1 + 0x7f8) = 0;
  *(undefined4 *)(param_1 + 0x7fc) = 0;
  return 1;
}



undefined4 FUN_00d29970(int param_1)

{
  *(undefined4 *)(param_1 + 0x340) = 0;
  return 1;
}



undefined4 FUN_00d29990(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x344),"ssl\\statem\\extensions.c",0x48e);
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00bbc580(*(undefined4 *)(param_1 + 0x34c),"ssl\\statem\\extensions.c",0x492);
    *(undefined4 *)(param_1 + 0x34c) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  return 1;
}



undefined4 FUN_00d29a00(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((param_3 == 0) && (*(int *)(*(int *)(param_1 + 0x71c) + 0x2f8) != 0)) {
      *(undefined4 *)(param_1 + 0x858) = 0;
    }
  }
  else if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
           (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    uVar2 = func_0x00d20c50(param_1);
    return uVar2;
  }
  return 1;
}



undefined4 FUN_00d29a60(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x290),"ssl\\statem\\extensions.c",0x4bb);
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  return 1;
}



undefined4 FUN_00d29aa0(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x28c),"ssl\\statem\\extensions.c",0x4b0);
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  return 1;
}



undefined4 FUN_00d29ae0(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined2 *)(param_1 + 0x886) = 0;
  }
  return 1;
}



undefined4 FUN_00d29b00(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined2 *)(param_1 + 0x884) = 0;
  }
  return 1;
}



undefined4 FUN_00d29b20(int param_1)

{
  func_0x00bd1860(*(undefined4 *)(param_1 + 0x248),FUN_00bdc650);
  *(undefined4 *)(param_1 + 0x248) = 0;
  return 1;
}



undefined4 FUN_00d29b50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00d175a0(param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar2 = func_0x00bd1830(iVar1);
  if (iVar2 == 0) {
    return 2;
  }
  iVar2 = func_0x00bfae30(param_2,0x2f,0,2);
  if ((iVar2 == 0) || (iVar2 = func_0x00bfb0a0(param_2,2), iVar2 == 0)) {
    FUN_00bc4f50();
    uVar3 = 0x514;
  }
  else {
    iVar1 = func_0x00d17270(param_1,iVar1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x00bfa920(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_00bc4f50();
    uVar3 = 0x51e;
  }
  func_0x00bc5050("ssl\\statem\\extensions.c",uVar3,"tls_construct_certificate_authorities");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d29c10(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00d17870(param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 4) == 0) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions.c",0x52c,"tls_parse_certificate_authorities");
    func_0x00d06d50(param_1,0x32,0x6e,0);
  }
  return 0;
}



undefined4 FUN_00d29c70(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x8dc),"ssl\\statem\\extensions.c",0x4c5);
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  return 1;
}



undefined4 FUN_00d29ca0(int param_1)

{
  FUN_00bbc580(*(undefined4 *)(param_1 + 0x814),"ssl\\statem\\extensions.c",0x4ce);
  *(undefined4 *)(param_1 + 0x814) = 0;
  *(undefined4 *)(param_1 + 0x810) = 0;
  return 1;
}



undefined4 FUN_00d29ce0(int param_1)

{
  *(undefined4 *)(param_1 + 0x850) = 0;
  return 1;
}



undefined4 FUN_00d29d00(int param_1)

{
  if ((*(uint *)(param_1 + 0xb4) & 0x200) != 0) {
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffdff | 0x1000;
  }
  return 1;
}



undefined4 FUN_00d29d30(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xb4);
  if (((uVar1 & 0x200) == 0) && ((uVar1 & 0x1000) != 0)) {
    FUN_00bc4f50();
    uVar2 = 0x4ee;
  }
  else {
    if ((*(int *)(param_1 + 0x38) != 0) ||
       ((*(int *)(param_1 + 0x36c) == 0 ||
        (((~(uVar1 >> 9) ^ ~*(uint *)(*(int *)(param_1 + 0x71c) + 0x310)) & 1) == 0)))) {
      return 1;
    }
    FUN_00bc4f50();
    uVar2 = 0x4f8;
  }
  func_0x00bc5050("ssl\\statem\\extensions.c",uVar2,"final_ems");
  func_0x00d06d50(param_1,0x28,0x68,0);
  return 0;
}



undefined4 FUN_00d29dc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x84c) = 0;
  return 1;
}



undefined4 FUN_00d29de0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_retaddr;
  uint in_stack_00000010;
  uint in_stack_00000014;
  int in_stack_00000018;
  
  func_0x00e87f70();
  iVar5 = in_stack_00000018;
  uVar4 = in_stack_00000010;
  if ((*(byte *)((*(int **)(in_stack_00000010 + 0xc))[0x1d] + 0x28) & 8) != 0) {
    return 1;
  }
  iVar2 = **(int **)(in_stack_00000010 + 0xc);
  if (iVar2 < 0x304) {
    return 1;
  }
  if (iVar2 == 0x10000) {
    return 1;
  }
  if ((in_stack_00000014 & 0x800) != 0) {
    return 1;
  }
  if (*(int *)(in_stack_00000010 + 0x38) == 0) {
    if (in_stack_00000018 != 0) {
      return 1;
    }
    if ((*(byte *)(in_stack_00000010 + 0x84c) & 1) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x56b,"final_key_share");
      func_0x00d06d50(uVar4,0x2f,0x65,0);
      return 0;
    }
    if (*(int *)(in_stack_00000010 + 0x36c) == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x56f,"final_key_share");
      func_0x00d06d50(uVar4,0x6d,0x65,0);
      return 0;
    }
    iVar5 = func_0x00d1bf80(in_stack_00000010,0,0);
    if (iVar5 != 0) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions.c",0x5f2,"final_key_share");
    func_0x00d06d50(uVar4,0x50,0xc0103,0);
    return 0;
  }
  if (*(int *)(in_stack_00000010 + 0x35c) == 0) {
    if (((*(int *)(in_stack_00000010 + 0x6f4) == 0) && (in_stack_00000018 != 0)) &&
       ((*(int *)(in_stack_00000010 + 0x36c) == 0 ||
        ((*(byte *)(in_stack_00000010 + 0x84c) & 2) != 0)))) {
      uVar6 = *(undefined4 *)(in_stack_00000010 + 0x824);
      uVar3 = *(undefined4 *)(in_stack_00000010 + 0x820);
      func_0x00d15350(in_stack_00000010,&stack0x00000000,&stack0x00000010);
      uVar7 = 0;
      if (in_stack_00000010 != 0) {
        do {
          uVar1 = *(undefined2 *)(unaff_retaddr + uVar7 * 2);
          iVar5 = func_0x00d17210(uVar4,uVar1,uVar6,uVar3,1);
          if (((iVar5 != 0) && (iVar5 = func_0x00d16e30(uVar4,uVar1,0x20004), iVar5 != 0)) &&
             (iVar5 = func_0x00d16ef0(uVar4,uVar1,0x304,0x304,0,0), iVar5 != 0)) {
            iVar5 = in_stack_00000018;
            if (uVar7 < in_stack_00000010) {
              *(undefined2 *)(uVar4 + 0x35a) = uVar1;
              goto LAB_00d2a09b;
            }
            break;
          }
          uVar7 = uVar7 + 1;
          iVar5 = in_stack_00000018;
        } while (uVar7 < in_stack_00000010);
      }
    }
    if ((*(int *)(uVar4 + 0x36c) == 0) || ((*(byte *)(uVar4 + 0x84c) & 1) == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x5d1,"final_key_share");
      uVar6 = 0x6d;
      if (iVar5 != 0) {
        uVar6 = 0x28;
      }
      func_0x00d06d50(uVar4,uVar6,0x65,0);
      return 0;
    }
    if (((*(uint *)(uVar4 + 0xb4) & 0x800) == 0) || (*(int *)(uVar4 + 0x864) != 0))
    goto LAB_00d2a0b2;
    if (*(int *)(uVar4 + 0x6f4) != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x5dd,"final_key_share");
      func_0x00d06d50(uVar4,0x50,0xc0103,0);
      return 0;
    }
  }
  else {
    if (((*(uint *)(in_stack_00000010 + 0xb4) & 0x800) == 0) ||
       (*(int *)(in_stack_00000010 + 0x864) != 0)) {
LAB_00d2a0b2:
      if (*(int *)(uVar4 + 0x6f4) != 1) {
        return 1;
      }
      *(undefined4 *)(uVar4 + 0x6f4) = 2;
      return 1;
    }
    if (*(int *)(in_stack_00000010 + 0x6f4) != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x5a0,"final_key_share");
      func_0x00d06d50(uVar4,0x50,0xc0103,0);
      return 0;
    }
  }
LAB_00d2a09b:
  *(undefined4 *)(uVar4 + 0x6f4) = 1;
  return 1;
}



undefined4 FUN_00d2a120(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x8a8) = 0;
  }
  return 1;
}



undefined4 FUN_00d2a140(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    if (((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
         (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (*(int *)(param_1 + 0x36c) == 0)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\extensions.c",0x540,"final_sig_algs");
      func_0x00d06d50(param_1,0x6d,0x70,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00d2a1b0(undefined4 param_1,int param_2,int param_3)

{
  if ((param_3 == 0) && (param_2 == 0x800)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions.c",0x54c,"final_supported_versions");
    func_0x00d06d50(param_1,0x6d,0x1a4,0);
    return 0;
  }
  return 1;
}



bool FUN_00d2a200(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      if ((param_2 == 0x400) && (*(int *)(param_1 + 0x858) == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\extensions.c",0x6c1,"final_early_data");
        func_0x00d06d50(param_1,0x2f,0xe9,0);
        return false;
      }
    }
    else {
      if ((((*(int *)(param_1 + 0xe84) != 0) && (*(int *)(param_1 + 0x36c) != 0)) &&
          (*(int *)(param_1 + 0x9c) == 9)) &&
         ((*(int *)(param_1 + 0x858) != 0 && (*(int *)(param_1 + 0x6f4) == 0)))) {
        if (*(code **)(param_1 + 0xea0) == (code *)0x0) {
LAB_00d2a2a7:
          *(undefined4 *)(param_1 + 0x854) = 2;
          iVar1 = FUN_00d1b2d0(param_1,0x61);
          return iVar1 != 0;
        }
        iVar1 = (**(code **)(param_1 + 0xea0))(param_1,*(undefined4 *)(param_1 + 0xea4));
        if (iVar1 != 0) goto LAB_00d2a2a7;
      }
      *(undefined4 *)(param_1 + 0x854) = 1;
    }
  }
  return true;
}



undefined4 FUN_00d2a2e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x71c) + 0x300) == -1) {
    *(undefined1 *)(*(int *)(param_1 + 0x71c) + 0x300) = 0;
  }
  if ((*(int *)(param_1 + 0x71c) != 0) &&
     (cVar1 = *(char *)(*(int *)(param_1 + 0x71c) + 0x300), (byte)(cVar1 - 1U) < 4)) {
    (**(code **)(*(int *)(param_1 + 0x91c) + 0x50))
              (*(undefined4 *)(param_1 + 0x924),0x200 << (cVar1 - 1U & 0x1f));
    uVar2 = *(undefined4 *)(param_1 + 0x928);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x920) + 0x50);
    uVar4 = func_0x00d03410(param_1);
    (*pcVar3)(uVar2,uVar4);
  }
  return 1;
}



undefined4 FUN_00d2a360(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b4) = 0;
  return 1;
}



undefined4 FUN_00d2a380(int param_1,undefined4 param_2,int param_3)

{
  if ((((*(int *)(param_1 + 0x38) != 0) && (param_3 != 0)) && (*(int *)(param_1 + 0x888) != 0)) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x888) + 0x268) + 0x1e8) == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\extensions.c",0x700,"final_psk");
    func_0x00d06d50(param_1,0x6d,0x136,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00d2a3f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x874) = 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  return 1;
}



undefined4 FUN_00d2b4f0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_3;
  if ((param_3 != 0x101) && (iVar2 = func_0x00bfa920(param_2), iVar2 == 0)) {
    return 0;
  }
  iVar2 = func_0x00bfaaf0(param_2,&param_3);
  if ((iVar2 != 0) && (param_3 < 0x80000000)) {
    if (uVar1 != 0x101) {
      *(uint *)(*(int *)(param_1 + 0x360) + 0x124) = param_3 - 0xc;
      *(uint *)(*(int *)(param_1 + 0x360) + 0x130) = param_3 - 0xc;
    }
    *(uint *)(param_1 + 0xa8) = param_3;
    *(undefined4 *)(param_1 + 0xac) = 0;
    if ((uVar1 != 3) && (iVar2 = func_0x00d2b310(param_1,uVar1 == 0x101), iVar2 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}



bool FUN_00d2c5e0(int param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  
  *(undefined2 *)(*(int *)(param_1 + 0x360) + 0x108) =
       *(undefined2 *)(*(int *)(param_1 + 0x360) + 0x10a);
  if (param_3 == 0x101) {
    iVar2 = *(int *)(param_1 + 0x360);
    *(undefined1 *)(iVar2 + 0x120) = 1;
    *(undefined4 *)(iVar2 + 0x124) = 0;
    *(undefined2 *)(iVar2 + 0x128) = *(undefined2 *)(iVar2 + 0x108);
    *(undefined4 *)(iVar2 + 300) = 0;
    *(undefined4 *)(iVar2 + 0x130) = 0;
    iVar2 = func_0x00bfae30(param_2,1,0,1);
    if (iVar2 != 0) {
      return true;
    }
  }
  else {
    psVar1 = (short *)(*(int *)(param_1 + 0x360) + 0x10a);
    *psVar1 = *psVar1 + 1;
    iVar2 = *(int *)(param_1 + 0x360);
    *(undefined2 *)(iVar2 + 0x128) = *(undefined2 *)(iVar2 + 0x108);
    *(char *)(iVar2 + 0x120) = (char)param_3;
    *(undefined4 *)(iVar2 + 0x124) = 0;
    *(undefined4 *)(iVar2 + 300) = 0;
    *(undefined4 *)(iVar2 + 0x130) = 0;
    iVar2 = func_0x00bfa8b0(param_2,0xc,&param_3);
    if (iVar2 != 0) {
      iVar2 = func_0x00bfb050(param_2);
      return iVar2 != 0;
    }
  }
  return false;
}



undefined4 FUN_00d2c6d0(int param_1,undefined4 param_2)

{
  short *psVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) == 0x100) {
    psVar1 = (short *)(*(int *)(param_1 + 0x360) + 0x10a);
    *psVar1 = *psVar1 + 1;
    iVar2 = func_0x00bfae30(param_2,*(undefined2 *)(*(int *)(param_1 + 0x360) + 0x108),0,2);
    if (iVar2 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_dtls.c",1000,"dtls_construct_change_cipher_spec");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00d2cfc0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0xd:
    *param_2 = FUN_00d2fd90;
    *param_3 = 1;
    return 1;
  case 0xe:
    *param_2 = FUN_00d2fbc0;
    *param_3 = 0xb;
    return 1;
  default:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",0x3b1,"ossl_statem_client_construct_message");
    func_0x00d06d50(param_1,0x50,0xec,0);
    return 0;
  case 0x10:
    *param_2 = FUN_00d30170;
    *param_3 = 0x10;
    return 1;
  case 0x11:
    *param_2 = FUN_00d18e10;
    *param_3 = 0xf;
    return 1;
  case 0x12:
    break;
  case 0x13:
    *param_2 = FUN_00d30520;
    *param_3 = 0x43;
    return 1;
  case 0x14:
    *param_2 = FUN_00d19220;
    *param_3 = 0x14;
    return 1;
  case 0x2f:
    *param_2 = FUN_00d193b0;
    *param_3 = 0x18;
    return 1;
  case 0x33:
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return 1;
  case 0x34:
    *param_2 = FUN_00d304c0;
    *param_3 = 5;
    return 1;
  }
  pcVar1 = FUN_00d2c6d0;
  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
    pcVar1 = FUN_00d191d0;
  }
  *param_2 = pcVar1;
  *param_3 = 0x101;
  return 1;
}



int FUN_00d2d190(int param_1)

{
  int iVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 2:
    return 0x102;
  case 3:
    return 0x10047;
  case 4:
  case 5:
  case 8:
    return *(int *)(param_1 + 0x79c);
  case 6:
    return 0x4000;
  case 7:
    return 0x19000;
  default:
    iVar2 = 0;
    break;
  case 10:
    if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) != 0) ||
        (iVar1 = **(int **)(param_1 + 0xc), iVar1 < 0x304)) || (iVar2 = 0x2010a, iVar1 == 0x10000))
    {
      return 0x10005;
    }
    break;
  case 0xb:
    return (uint)(*(int *)(param_1 + 0x20) == 0x100) * 2 + 1;
  case 0xc:
    return 0x40;
  case 0x2a:
    return 20000;
  case 0x2b:
    return 0x10003;
  case 0x31:
    return 1;
  }
  return iVar2;
}



undefined4 FUN_00d2d290(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 4:
  case 5:
    uVar1 = func_0x00d305d0(param_1,param_2);
    return uVar1;
  default:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",0x47f,"ossl_statem_client_post_process_message");
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  case 8:
  case 0x2b:
    uVar1 = func_0x00d309f0(param_1,param_2);
    return uVar1;
  }
}



byte FUN_00d2d330(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0xa8) = 0;
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0xd:
    if ((*(int *)(param_1 + 0x9c) == 2) && (*(int *)(param_1 + 0xe84) != 0)) {
      if (((*(uint *)(param_1 + 0x788) & 0x100000) == 0) &&
         (iVar3 = FUN_00d1b2d0(param_1,0x52), iVar3 == 0)) {
        return 0;
      }
    }
    else {
      iVar3 = func_0x00d076e0(param_1);
      if (iVar3 == 0) {
        return 3;
      }
    }
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0x7a0) = 1;
    return 2;
  default:
    goto LAB_00d2d4b9;
  case 0x10:
    iVar3 = *(int *)(param_1 + 0x274);
    uVar4 = *(undefined4 *)(param_1 + 0x278);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x234) + 0x10);
    if ((uVar1 & 0x20) == 0) {
      if ((iVar3 == 0) && ((uVar1 & 8) == 0)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xe0d,"tls_client_key_exchange_post_work");
        func_0x00d06d50(param_1,0x50,0x80106,0);
      }
      else {
        iVar3 = func_0x00d27ad0(param_1,iVar3,uVar4,1);
        if (iVar3 != 0) {
          return 2;
        }
        iVar3 = 0;
        uVar4 = 0;
      }
    }
    else {
      iVar2 = func_0x00d238e0(param_1);
      if (iVar2 != 0) {
        return 2;
      }
    }
    FUN_00bbc6c0(iVar3,uVar4,"ssl\\statem\\statem_clnt.c",0xe3b);
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined4 *)(param_1 + 0x278) = 0;
    return 0;
  case 0x12:
    if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
        (iVar3 = **(int **)(param_1 + 0xc), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
      return 2;
    }
    if (*(int *)(param_1 + 0x6f4) == 1) {
      return 2;
    }
    if ((*(int *)(param_1 + 0x9c) == 2) && (*(int *)(param_1 + 0xe84) != 0)) {
      iVar3 = FUN_00d1b2d0(param_1,0x52);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x71c) + 0x2cc) = *(undefined4 *)(param_1 + 0x234);
      if (*(undefined4 **)(param_1 + 0x264) == (undefined4 *)0x0) {
        *(undefined4 *)(*(int *)(param_1 + 0x71c) + 0x2c8) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x71c) + 0x2c8) = **(undefined4 **)(param_1 + 0x264);
      }
      iVar3 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0xc) + 0x74))(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 8))(param_1,0x12);
    }
    break;
  case 0x14:
    iVar3 = func_0x00d076e0(param_1);
    if (iVar3 != 1) {
      return 4;
    }
    if ((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) != 0) {
      return 2;
    }
    iVar3 = **(int **)(param_1 + 0xc);
    if (iVar3 < 0x304) {
      return 2;
    }
    if (iVar3 == 0x10000) {
      return 2;
    }
    iVar3 = func_0x00d18cf0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x8b4) == 4) {
      return 2;
    }
    iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 8))(param_1,0x112);
    break;
  case 0x2f:
    iVar3 = func_0x00d076e0(param_1);
    if (iVar3 != 1) {
      return 3;
    }
    iVar3 = func_0x00d1c6b0(param_1,1);
    return -(iVar3 != 0) & 2;
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_00d2d4b9:
  return 2;
}



undefined4 FUN_00d2d610(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 1:
    uVar2 = func_0x00d19410(param_1,param_2,1,1);
    return uVar2;
  case 0xd:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
      if (*(int *)(param_1 + 0x854) != 1) {
        return 2;
      }
      iVar1 = func_0x00d0d080(param_1,0x10000,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    }
    else {
      iVar1 = func_0x00d431e0(param_1);
    }
    if (iVar1 == 0) {
      return 0;
    }
    break;
  case 0x12:
    if (((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) != 0) &&
       (*(int *)(param_1 + 0x36c) != 0)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      return 2;
    }
    break;
  case 0x32:
LAB_00d2d6c3:
    uVar2 = func_0x00d19410(param_1,param_2,0,1);
    return uVar2;
  case 0x33:
    if ((*(int *)(param_1 + 0x9c) != 7) && (*(int *)(param_1 + 0x9c) != 0)) goto LAB_00d2d6c3;
  }
  return 2;
}



undefined4 FUN_00d2d740(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  byte *_Src;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  
  func_0x00e87f70();
  piVar7 = param_4;
  iVar10 = param_3;
  switch(*(undefined4 *)(param_3 + 0x6c)) {
  case 2:
    uVar12 = param_4[1];
    if (1 < uVar12) {
      *param_4 = *param_4 + 2;
      param_4[1] = uVar12 - 2;
      if (uVar12 - 2 != 0) {
        uVar13 = (uint)*(byte *)*param_4;
        _Src = (byte *)*param_4 + 1;
        if (uVar13 <= uVar12 - 3) {
          param_4[1] = (uVar12 - 3) - uVar13;
          *param_4 = (int)(_Src + uVar13);
          if (0xff < uVar13) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_clnt.c",0x555,"dtls_process_hello_verify");
            func_0x00d06d50(iVar10,0x2f,0x194,0);
            return 0;
          }
          memcpy(*(void **)(param_3 + 0x360),_Src,uVar13);
          *(uint *)(*(int *)(iVar10 + 0x360) + 0x100) = uVar13;
          return 1;
        }
      }
    }
    FUN_00bc4f50();
    pcVar15 = "dtls_process_hello_verify";
    uVar11 = 0x54f;
    break;
  case 3:
    uVar11 = func_0x00d32270(param_3,param_4);
    return uVar11;
  case 4:
    uVar11 = func_0x00d31e00(param_3,param_4);
    return uVar11;
  default:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",0x43f,"ossl_statem_client_process_message");
    func_0x00d06d50(iVar10,0x50,0xc0103,0);
    return 0;
  case 6:
    iVar9 = param_4[1];
    if (iVar9 == 0) {
LAB_00d2d969:
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xb39,"tls_process_cert_status_body");
      uVar11 = 0x149;
    }
    else {
      cVar1 = *(char *)*param_4;
      *param_4 = *param_4 + 1;
      param_4[1] = iVar9 - 1U;
      if (cVar1 != '\x01') goto LAB_00d2d969;
      if (iVar9 - 1U < 3) {
LAB_00d2d958:
        FUN_00bc4f50();
        uVar11 = 0xb3e;
      }
      else {
        puVar6 = (undefined1 *)*param_4;
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        *param_4 = *param_4 + 3;
        uVar12 = (uint)CONCAT21(CONCAT11(uVar2,uVar3),uVar4);
        param_4[1] = iVar9 - 4U;
        if (iVar9 - 4U != uVar12) goto LAB_00d2d958;
        iVar9 = FUN_00bbc4f0(uVar12,"ssl\\statem\\statem_clnt.c",0xb41);
        *(int *)(iVar10 + 0x7f8) = iVar9;
        if (iVar9 == 0) {
          *(undefined4 *)(iVar10 + 0x7fc) = 0;
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xb44,"tls_process_cert_status_body");
          uVar11 = 0x8000f;
          uVar14 = 0x50;
          goto LAB_00d2d98b;
        }
        *(uint *)(iVar10 + 0x7fc) = uVar12;
        iVar9 = func_0x00d1c8c0(piVar7,iVar9,uVar12);
        if (iVar9 != 0) {
          return 3;
        }
        FUN_00bc4f50();
        uVar11 = 0xb49;
      }
      func_0x00bc5050("ssl\\statem\\statem_clnt.c",uVar11,"tls_process_cert_status_body");
      uVar11 = 0x9f;
    }
    uVar14 = 0x32;
LAB_00d2d98b:
    func_0x00d06d50(iVar10,uVar14,uVar11,0);
    return 0;
  case 7:
    uVar11 = func_0x00d312d0(param_3,param_4);
    return uVar11;
  case 8:
    uVar11 = func_0x00d30de0(param_3,param_4);
    return uVar11;
  case 9:
    if (param_4[1] == 0) {
      if (((*(byte *)(*(int *)(param_3 + 0x234) + 0x10) & 0x20) != 0) &&
         (iVar9 = func_0x00d23eb0(param_3), iVar9 < 1)) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xb9a,"tls_process_server_done");
        func_0x00d06d50(iVar10,0x50,0x169,0);
        return 0;
      }
      iVar9 = *(int *)(iVar10 + 4);
      iVar8 = func_0x00d2e8c0(iVar10);
      if (iVar8 == 0) {
        return 0;
      }
      if ((*(int *)(iVar10 + 0x7e0) != -1) &&
         (pcVar5 = *(code **)(iVar9 + 0x170), pcVar5 != (code *)0x0)) {
        iVar9 = (*pcVar5)(iVar10,*(undefined4 *)(iVar9 + 0x174));
        if (iVar9 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xb7a,"tls_process_initial_server_flight");
          func_0x00d06d50(iVar10,0x71,0x148,0);
          return 0;
        }
        if (iVar9 < 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xb7f,"tls_process_initial_server_flight");
          func_0x00d06d50(iVar10,0x50,0x131,0);
          return 0;
        }
      }
      if (*(int *)(iVar10 + 0x890) == 0) {
        return 1;
      }
      iVar9 = func_0x00d04000(iVar10);
      if (iVar9 == 0) {
        if ((*(byte *)(iVar10 + 0x754) & 1) != 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    FUN_00bc4f50();
    pcVar15 = "tls_process_server_done";
    uVar11 = 0xb94;
    break;
  case 10:
    uVar11 = func_0x00d318c0(param_3,param_4);
    return uVar11;
  case 0xb:
    uVar11 = func_0x00d1a280(param_3,param_4);
    return uVar11;
  case 0xc:
    uVar11 = func_0x00d1a3a0(param_3,param_4);
    return uVar11;
  case 0x2a:
    param_3 = 0;
    puVar6 = (undefined1 *)*param_4;
    if (1 < (uint)param_4[1]) {
      uVar12 = param_4[1] - 2;
      uVar13 = (uint)CONCAT11(*puVar6,puVar6[1]);
      if ((uVar13 <= uVar12) && (uVar12 == uVar13)) {
        *param_4 = (int)(puVar6 + uVar13 + 2);
        param_4[1] = 0;
        iVar9 = func_0x00d2a5b0(iVar10,&stack0x00000000,0x400,&param_3,0,1);
        if ((iVar9 != 0) && (iVar10 = func_0x00d2abb0(iVar10,0x400,param_3,0,0,1), iVar10 != 0)) {
          FUN_00bbc580(param_3,"ssl\\statem\\statem_clnt.c",0xfc5);
          return 3;
        }
        goto LAB_00d2dca4;
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xfb8,"tls_process_encrypted_extensions");
    func_0x00d06d50(iVar10,0x32,0x9f,0);
LAB_00d2dca4:
    FUN_00bbc580(param_3,"ssl\\statem\\statem_clnt.c",0xfc9);
    return 0;
  case 0x2b:
    uVar11 = func_0x00d19d50(param_3,param_4);
    return uVar11;
  case 0x2d:
    if (param_4[1] == 0) {
      if ((*(uint *)(param_3 + 0x788) & 0x40000000) != 0) {
        func_0x00d28390(param_3,1,100);
        return 1;
      }
      if ((*(byte *)(*(int *)(*(int *)(param_3 + 0xc) + 0x74) + 0x28) & 8) == 0) {
        func_0x00d00b20(param_3);
        return 1;
      }
      func_0x00d00ad0();
      return 1;
    }
    FUN_00bc4f50();
    pcVar15 = "tls_process_hello_req";
    uVar11 = 0xf98;
    break;
  case 0x31:
    uVar11 = func_0x00d1a760(param_3,param_4);
    return uVar11;
  }
  func_0x00bc5050("ssl\\statem\\statem_clnt.c",uVar11,pcVar15);
  func_0x00d06d50(iVar10,0x32,0x9f,0);
  return 0;
}



undefined4 FUN_00d2dd80(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8;
  if (((uVar3 == 0) && (iVar2 = **(int **)(param_1 + 0xc), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x6c)) {
    case 1:
      if (param_2 == 4) goto LAB_00d2e0d2;
      if (param_2 == 0x18) {
        if ((*(uint *)(param_1 + 0xb4) & 0x2000) == 0) {
          *(undefined4 *)(param_1 + 0x6c) = 0x31;
          return 1;
        }
        break;
      }
      if ((param_2 != 0xd) || (*(int *)(param_1 + 0x8b4) != 1)) break;
      *(undefined4 *)(param_1 + 0x8b4) = 4;
      iVar2 = func_0x00d18c60(param_1);
      goto joined_r0x00d2def2;
    case 3:
      if (param_2 == 8) {
        *(undefined4 *)(param_1 + 0x6c) = 0x2a;
        return 1;
      }
      break;
    case 4:
    case 5:
      if (param_2 == 0xf) {
        *(undefined4 *)(param_1 + 0x6c) = 0x2b;
        return 1;
      }
      break;
    case 8:
      goto joined_r0x00d2de5a;
    case 0xd:
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0x6c) = 3;
        return 1;
      }
      break;
    case 0x2a:
      if (*(int *)(param_1 + 0x36c) != 0) {
        if (param_2 != 0x14) break;
        goto LAB_00d2de8d;
      }
      if (param_2 == 0xd) goto LAB_00d2def8;
joined_r0x00d2de5a:
      if (param_2 == 0xb) {
        *(undefined4 *)(param_1 + 0x6c) = 4;
        return 1;
      }
      break;
    case 0x2b:
      goto LAB_00d2de84;
    }
    goto LAB_00d2de01;
  }
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 1:
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x2d;
      return 1;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x36c) != 0) {
      iVar2 = *(int *)(param_1 + 0x800);
      goto joined_r0x00d2e0c3;
    }
    if ((uVar3 != 0) && (param_2 == 3)) {
LAB_00d2df8b:
      *(undefined4 *)(param_1 + 0x6c) = 2;
      return 1;
    }
    if ((((0x300 < *(int *)(param_1 + 0x20)) && (*(int *)(param_1 + 0x834) != 0)) &&
        (*(int *)(*(int *)(param_1 + 0x71c) + 0x2e4) != 0)) && (param_2 == 0x101)) {
      *(undefined4 *)(param_1 + 0x36c) = 1;
      *(undefined4 *)(param_1 + 0x6c) = 0xb;
      return 1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x234) + 0x14) & 0x54) == 0) {
      if (param_2 == 0xb) {
        *(undefined4 *)(param_1 + 0x6c) = 4;
        return 1;
      }
      break;
    }
    uVar3 = *(uint *)(*(int *)(param_1 + 0x234) + 0x10);
    if ((uVar3 & 0x1a6) == 0) {
      if (((uVar3 & 0x1c8) != 0) && (param_2 == 0xc)) goto LAB_00d2e095;
      if (param_2 != 0xd) {
        if (param_2 != 0xe) break;
        goto LAB_00d2e0ad;
      }
      iVar2 = func_0x00d2ce90(param_1);
      goto joined_r0x00d2def2;
    }
    goto joined_r0x00d2e08f;
  case 4:
  case 5:
    if ((*(int *)(param_1 + 0x7ec) != 0) && (param_2 == 0x16)) {
      *(undefined4 *)(param_1 + 0x6c) = 6;
      return 1;
    }
  case 6:
    uVar3 = *(uint *)(*(int *)(param_1 + 0x234) + 0x10);
    if ((uVar3 & 0x1a6) == 0) {
      if (((uVar3 & 0x1c8) != 0) && (param_2 == 0xc)) goto LAB_00d2e095;
LAB_00d2e07c:
      if (param_2 == 0xd) {
        iVar2 = func_0x00d2ce90(param_1);
joined_r0x00d2def2:
        if (iVar2 != 0) {
LAB_00d2def8:
          *(undefined4 *)(param_1 + 0x6c) = 8;
          return 1;
        }
      }
      else {
LAB_00d2e0a4:
        if (param_2 == 0xe) {
LAB_00d2e0ad:
          *(undefined4 *)(param_1 + 0x6c) = 9;
          return 1;
        }
      }
    }
    else {
joined_r0x00d2e08f:
      if (param_2 == 0xc) {
LAB_00d2e095:
        *(undefined4 *)(param_1 + 0x6c) = 7;
        return 1;
      }
    }
    break;
  case 7:
    goto LAB_00d2e07c;
  case 8:
    goto LAB_00d2e0a4;
  case 10:
    if (param_2 != 0x101) break;
    goto LAB_00d2e0ed;
  case 0xb:
LAB_00d2de84:
    if (param_2 == 0x14) {
LAB_00d2de8d:
      *(undefined4 *)(param_1 + 0x6c) = 0xc;
      return 1;
    }
    break;
  case 0xd:
    if (param_2 == 2) {
LAB_00d2df42:
      *(undefined4 *)(param_1 + 0x6c) = 3;
      return 1;
    }
    if ((uVar3 != 0) && (param_2 == 3)) goto LAB_00d2df8b;
    break;
  case 0x14:
    iVar2 = *(int *)(param_1 + 0x800);
joined_r0x00d2e0c3:
    if (iVar2 == 0) {
      if (param_2 == 0x101) {
LAB_00d2e0ed:
        *(undefined4 *)(param_1 + 0x6c) = 0xb;
        return 1;
      }
    }
    else if (param_2 == 4) {
LAB_00d2e0d2:
      *(undefined4 *)(param_1 + 0x6c) = 10;
      return 1;
    }
    break;
  case 0x32:
    if (param_2 == 2) goto LAB_00d2df42;
  }
LAB_00d2de01:
  if (((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) != 0) && (param_2 == 0x101))
  {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x30) = 3;
    uVar1 = func_0x00d007d0(param_1);
    func_0x00baa700(uVar1,0xf);
    func_0x00bab680(uVar1,9);
    return 0;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\statem_clnt.c",0x1a8,"ossl_statem_client_read_transition");
  func_0x00d06d50(param_1,10,0xf4,0);
  return 0;
}



undefined4 FUN_00d2e200(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  uVar2 = *(uint *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8;
  if (((uVar2 != 0) || (iVar1 = **(int **)(param_1 + 0xc), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x6c)) {
    case 1:
      if (*(int *)(param_1 + 0x8ac) == 0) {
        return 2;
      }
    case 0:
    case 2:
      *(undefined4 *)(param_1 + 0x6c) = 0xd;
      return 1;
    case 3:
      if (((*(uint *)(param_1 + 0x788) & 0x100000) == 0) ||
         (uVar4 = 0x12, *(int *)(param_1 + 0x9c) == 7)) {
        uVar4 = 0xd;
      }
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      return 1;
    default:
      FUN_00bc4f50();
      pcVar5 = "ossl_statem_client_write_transition";
      uVar4 = 0x22d;
      goto LAB_00d2e552;
    case 9:
      uVar3 = FUN_00c44770();
      *(undefined8 *)(param_1 + 0x50) = uVar3;
      *(uint *)(param_1 + 0x6c) = (uint)(*(int *)(param_1 + 0x23c) == 0) * 2 + 0xe;
      return 1;
    case 0xc:
      if (*(int *)(param_1 + 0x36c) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = 0x12;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x6c) = 1;
      return 1;
    case 0xd:
      if (*(int *)(param_1 + 0x9c) == 2) {
        uVar4 = 0x12;
        if ((*(uint *)(param_1 + 0x788) & 0x100000) == 0) {
          uVar4 = 0x32;
        }
        *(undefined4 *)(param_1 + 0x6c) = uVar4;
        return 1;
      }
    case 0x32:
      uVar3 = FUN_00c44770();
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      return 2;
    case 0xe:
      *(undefined4 *)(param_1 + 0x6c) = 0x10;
      return 1;
    case 0x10:
      *(uint *)(param_1 + 0x6c) = (*(int *)(param_1 + 0x23c) != 1) + 0x11;
      if ((*(byte *)(param_1 + 0xb4) & 0x10) != 0) {
        *(undefined4 *)(param_1 + 0x6c) = 0x12;
        return 1;
      }
      return 1;
    case 0x11:
      *(undefined4 *)(param_1 + 0x6c) = 0x12;
      return 1;
    case 0x12:
      if (*(int *)(param_1 + 0x6f4) == 1) {
        *(undefined4 *)(param_1 + 0x6c) = 0xd;
        return 1;
      }
      if (*(int *)(param_1 + 0x9c) == 2) {
        *(undefined4 *)(param_1 + 0x6c) = 0x32;
        return 1;
      }
      if ((uVar2 == 0) && (*(int *)(param_1 + 0x340) != 0)) {
        *(undefined4 *)(param_1 + 0x6c) = 0x13;
        return 1;
      }
    case 0x13:
LAB_00d2e4d0:
      *(undefined4 *)(param_1 + 0x6c) = 0x14;
      return 1;
    case 0x14:
      if (*(int *)(param_1 + 0x36c) == 0) {
        return 2;
      }
      break;
    case 0x2d:
      iVar1 = FUN_00d27200(param_1,1);
      if (iVar1 != 0) {
        iVar1 = func_0x00d1ac30(param_1);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x6c) = 0xd;
          return 1;
        }
        return 0;
      }
    }
LAB_00d2e4eb:
    *(undefined4 *)(param_1 + 0x6c) = 1;
    return 1;
  }
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 1:
    if (*(int *)(param_1 + 0x8b0) != -1) {
      *(undefined4 *)(param_1 + 0x6c) = 0x2f;
      return 1;
    }
    return 2;
  default:
    FUN_00bc4f50();
    pcVar5 = "ossl_statem_client13_write_transition";
    uVar4 = 0x1c4;
LAB_00d2e552:
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",uVar4,pcVar5);
    func_0x00d06d50(param_1,0x50,0xc0103,0);
    return 0;
  case 8:
    if (*(int *)(param_1 + 0x8b4) != 4) {
      if ((~*(uint *)(param_1 + 0x44) & 1) == 0) goto LAB_00d2e4eb;
      FUN_00bc4f50();
      pcVar5 = "ossl_statem_client13_write_transition";
      uVar4 = 0x1d5;
      goto LAB_00d2e552;
    }
    break;
  case 10:
  case 0x14:
  case 0x2f:
  case 0x31:
    goto LAB_00d2e4eb;
  case 0xc:
    if ((*(int *)(param_1 + 0x9c) == 3) || (*(int *)(param_1 + 0x9c) == 7)) {
      *(undefined4 *)(param_1 + 0x6c) = 0x33;
    }
    else if (((*(uint *)(param_1 + 0x788) & 0x100000) == 0) || (*(int *)(param_1 + 0x6f4) != 0)) {
      if (*(int *)(param_1 + 0x23c) == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 0x14;
      }
      else {
        iVar1 = func_0x00d2cec0(param_1);
        *(uint *)(param_1 + 0x6c) = (iVar1 != 0) + 0xe;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = 0x12;
    }
    uVar3 = FUN_00c44770();
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    return 1;
  case 0xe:
  case 0xf:
    uVar4 = 0x14;
    if (*(int *)(param_1 + 0x23c) == 1) {
      uVar4 = 0x11;
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    return 1;
  case 0x11:
    goto LAB_00d2e4d0;
  case 0x33:
    if (*(int *)(param_1 + 0x854) == 2) {
      *(undefined4 *)(param_1 + 0x6c) = 0x34;
      return 1;
    }
  case 0x12:
  case 0x34:
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x14;
      return 1;
    }
  }
  iVar1 = func_0x00d2cec0(param_1);
  *(uint *)(param_1 + 0x6c) = (iVar1 != 0) + 0xe;
  return 1;
}



undefined4 FUN_00d2fbc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((((*(byte *)((*(int **)(param_1 + 0xc))[0x1d] + 0x28) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 0xc), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    if (*(int *)(param_1 + 0x8bc) == 0) {
      iVar2 = func_0x00bfae30(param_2,0,0);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xeb5,"tls_construct_client_certificate");
        func_0x00d06d50(param_1,0x50,0xc0103,0);
        return 0;
      }
    }
    else {
      iVar2 = func_0x00bfb180(param_2,*(int *)(param_1 + 0x8bc),*(undefined4 *)(param_1 + 0x8c0),1);
      if (iVar2 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xeb9,"tls_construct_client_certificate");
        func_0x00d06d50(param_1,0x50,0xc0103,0);
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x23c) != 2) {
    uVar3 = **(undefined4 **)(param_1 + 0x6ac);
  }
  if (*(char *)(param_1 + 0x884) == '\0') {
    iVar2 = func_0x00d17c50(param_1,param_2,uVar3,0);
  }
  else {
    if (*(char *)(param_1 + 0x884) != '\x02') {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xecd,"tls_construct_client_certificate");
      func_0x00d06d50(param_1,0x50,0xc0103,0);
      return 0;
    }
    iVar2 = func_0x00d19b50(param_1,param_2,uVar3);
  }
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (*(int **)(param_1 + 0xc))[0x1d];
  if ((((((*(byte *)(iVar2 + 0x28) & 8) == 0) && (iVar1 = **(int **)(param_1 + 0xc), 0x303 < iVar1))
       && ((iVar1 != 0x10000 &&
           ((*(int *)(param_1 + 0x1a4) == 0 || (*(int *)(param_1 + 0x228) == 0)))))) &&
      ((*(int *)(param_1 + 0x9c) != 0 || ((*(uint *)(param_1 + 0x788) & 0x100000) != 0)))) &&
     (iVar2 = (**(code **)(iVar2 + 8))(param_1,0x92), iVar2 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xee0,"tls_construct_client_certificate");
    func_0x00d06d50(param_1,0xffffffff,0x6d,0);
    return 0;
  }
  return 1;
}



bool FUN_00d2fd90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  size_t _Size;
  bool bVar9;
  undefined4 uVar10;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 0x71c);
  iVar4 = func_0x00d189d0(param_1);
  if (iVar4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",0x49b,"tls_construct_client_hello");
    func_0x00d06d50(param_1,0x50,iVar4,0);
    return false;
  }
  if ((((puVar2 == (undefined4 *)0x0) || (iVar4 = func_0x00d18b30(param_1,*puVar2,0), iVar4 == 0))
      || (iVar4 = func_0x00d08020(puVar2), iVar4 == 0)) &&
     ((*(int *)(param_1 + 0x6f4) == 0 && (iVar4 = func_0x00d088e0(param_1,0), iVar4 == 0)))) {
    return false;
  }
  iVar4 = param_1 + 0xd8;
  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) == 0) {
    bVar9 = *(int *)(param_1 + 0x6f4) == 0;
LAB_00d2fe50:
    if (bVar9) goto LAB_00d2fe54;
  }
  else {
    uVar5 = 0;
    do {
      if (*(char *)(uVar5 + iVar4) != '\0') {
        bVar9 = false;
        goto LAB_00d2fe50;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
LAB_00d2fe54:
    iVar6 = func_0x00d27a00(param_1,0,iVar4,0x20,0);
    if (iVar6 < 1) {
      FUN_00bc4f50();
      uVar10 = 0x4bf;
      goto LAB_00d30149;
    }
  }
  iVar6 = func_0x00bfae30(param_2,*(int *)(param_1 + 0x7a4),*(int *)(param_1 + 0x7a4) >> 0x1f,2);
  if ((iVar6 == 0) || (iVar4 = func_0x00bfad90(param_2,iVar4,0x20), iVar4 == 0)) {
    FUN_00bc4f50();
    uVar10 = 0x4e6;
  }
  else {
    piVar3 = *(int **)(param_1 + 0x71c);
    piVar7 = piVar3 + 0x93;
    if ((*(int *)(param_1 + 0x3c) == 0) && (*piVar3 != 0x304)) {
      _Size = piVar3[0x92];
      if (*(int *)(param_1 + 0x20) == 0x304) {
        *(size_t *)(param_1 + 0x750) = _Size;
        memcpy((void *)(param_1 + 0x730),piVar7,_Size);
      }
    }
    else if ((*(int *)(param_1 + 0x20) == 0x304) && ((*(uint *)(param_1 + 0x788) & 0x100000) != 0))
    {
      piVar7 = (int *)(param_1 + 0x730);
      _Size = 0x20;
      *(undefined4 *)(param_1 + 0x750) = 0x20;
      if ((*(int *)(param_1 + 0x6f4) == 0) &&
         (iVar4 = func_0x00bc5450(*puVar1,piVar7,0x20,0), iVar4 < 1)) {
        FUN_00bc4f50();
        uVar10 = 0x4f5;
        goto LAB_00d30149;
      }
    }
    else {
      _Size = 0;
    }
    iVar4 = func_0x00bfb0a0(param_2,1);
    if ((iVar4 == 0) ||
       (((_Size != 0 && (iVar4 = func_0x00bfad90(param_2,piVar7,_Size), iVar4 == 0)) ||
        (iVar4 = func_0x00bfa920(param_2), iVar4 == 0)))) {
      FUN_00bc4f50();
      uVar10 = 0x507;
    }
    else {
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) != 0) {
        uVar5 = *(uint *)(*(int *)(param_1 + 0x360) + 0x100);
        if ((0xff < uVar5) ||
           (iVar4 = func_0x00bfb180(param_2,*(int *)(param_1 + 0x360),uVar5,1), iVar4 == 0)) {
          FUN_00bc4f50();
          uVar10 = 0x510;
          goto LAB_00d30149;
        }
      }
      iVar4 = func_0x00bfb0a0(param_2,2);
      if (iVar4 == 0) {
        FUN_00bc4f50();
        uVar10 = 0x517;
      }
      else {
        uVar10 = func_0x00d00720(param_1,param_2);
        iVar4 = func_0x00d2ea80(param_1,uVar10);
        if (iVar4 == 0) {
          return false;
        }
        iVar4 = func_0x00bfa920(param_2);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          uVar10 = 0x521;
        }
        else {
          iVar4 = func_0x00bfb0a0(param_2,1);
          if (iVar4 == 0) {
            FUN_00bc4f50();
            uVar10 = 0x527;
          }
          else {
            iVar4 = func_0x00d180b0(param_1);
            if (((iVar4 != 0) && (puVar1[0x2b] != 0)) &&
               (((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x74) + 0x28) & 8) != 0 ||
                (*(int *)(param_1 + 0x2b0) < 0x304)))) {
              iVar4 = func_0x00bd1830(puVar1[0x2b]);
              iVar6 = 0;
              if (0 < iVar4) {
                do {
                  piVar7 = (int *)func_0x00bd1a80(puVar1[0x2b],iVar6);
                  iVar8 = func_0x00bfae30(param_2,*piVar7,*piVar7 >> 0x1f,1);
                  if (iVar8 == 0) {
                    FUN_00bc4f50();
                    uVar10 = 0x533;
                    goto LAB_00d30149;
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar4);
              }
            }
            iVar4 = func_0x00bfae30(param_2,0,0,1);
            if ((iVar4 != 0) && (iVar4 = func_0x00bfa920(param_2), iVar4 != 0)) {
              iVar4 = func_0x00d2a970(param_1,param_2,0x80,0,0);
              return iVar4 != 0;
            }
            FUN_00bc4f50();
            uVar10 = 0x53b;
          }
        }
      }
    }
  }
LAB_00d30149:
  func_0x00bc5050("ssl\\statem\\statem_clnt.c",uVar10,"tls_construct_client_hello");
  func_0x00d06d50(param_1,0x50,0xc0103,0);
  return false;
}



undefined4 FUN_00d30170(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  func_0x00e87f70();
  uVar6 = param_3;
  iVar2 = param_2;
  uVar1 = *(uint *)(*(int *)(param_2 + 0x234) + 0x10);
  if (((uVar1 & 0x1c8) != 0) && (iVar3 = func_0x00d2f5d0(param_2,param_3), iVar3 == 0))
  goto LAB_00d3044f;
  if ((uVar1 & 0x41) == 0) {
    if ((uVar1 & 0x102) == 0) {
      if ((uVar1 & 0x84) != 0) {
        iVar5 = *(int *)(iVar2 + 0x35c);
        param_2 = 0;
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar4 = func_0x00d27d80(iVar2,iVar5);
          if (iVar4 == 0) {
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xc99,"tls_construct_cke_ecdhe");
            func_0x00d06d50(iVar2,0x50,0x80014,0);
          }
          else {
            iVar5 = func_0x00d27620(iVar2,iVar4,iVar5,0);
            if (iVar5 != 0) {
              iVar5 = func_0x00bd5f00(iVar4,&param_2);
              if (iVar5 == 0) {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xca6,"tls_construct_cke_ecdhe");
                func_0x00d06d50(iVar2,0x50,0x80010,0);
              }
              else {
                iVar5 = func_0x00bfb180(uVar6,param_2,iVar5,1);
                if (iVar5 == 0) {
                  FUN_00bc4f50();
                  func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xcab,"tls_construct_cke_ecdhe");
                  func_0x00d06d50(iVar2,0x50,0xc0103,0);
                }
                else {
                  iVar3 = 1;
                }
              }
            }
          }
          FUN_00bbc580(param_2,"ssl\\statem\\statem_clnt.c",0xcb1);
          func_0x00bd5d50(iVar4);
          goto LAB_00d301ba;
        }
        FUN_00bc4f50();
        pcVar7 = "tls_construct_cke_ecdhe";
        uVar6 = 0xc93;
LAB_00d30433:
        func_0x00bc5050("ssl\\statem\\statem_clnt.c",uVar6,pcVar7);
        uVar6 = 0xc0103;
LAB_00d30444:
        func_0x00d06d50(iVar2,0x50,uVar6,0);
        goto LAB_00d3044f;
      }
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 0x200) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if ((uVar1 & 8) != 0) {
              return 1;
            }
            FUN_00bc4f50();
            pcVar7 = "tls_construct_client_key_exchange";
            uVar6 = 0xde8;
            goto LAB_00d30433;
          }
          param_2 = 0;
          if (*(int *)(iVar2 + 0x8f0) == 0) {
LAB_00d3040a:
            FUN_00bc4f50();
            pcVar7 = "tls_construct_cke_srp";
            uVar6 = 0xdb3;
            goto LAB_00d30433;
          }
          iVar3 = func_0x00bba610(*(int *)(iVar2 + 0x8f0),&param_2,2);
          iVar3 = func_0x00bfb120(uVar6,(int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3);
          if (iVar3 == 0) goto LAB_00d3040a;
          func_0x00bb9f70(*(undefined4 *)(iVar2 + 0x8f0),param_2);
          FUN_00bbc580(*(undefined4 *)(*(int *)(iVar2 + 0x71c) + 0x304),"ssl\\statem\\statem_clnt.c"
                       ,0xdb8);
          iVar3 = *(int *)(iVar2 + 0x71c);
          uVar6 = func_0x00bbbc70(*(undefined4 *)(iVar2 + 0x8dc),"ssl\\statem\\statem_clnt.c",0xdb9)
          ;
          *(undefined4 *)(iVar3 + 0x304) = uVar6;
          if (*(int *)(*(int *)(iVar2 + 0x71c) + 0x304) != 0) {
            return 1;
          }
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xdbb,"tls_construct_cke_srp");
          uVar6 = 0x8000f;
          goto LAB_00d30444;
        }
        iVar3 = func_0x00d2f260(iVar2,uVar6);
      }
      else {
        iVar3 = func_0x00d2ef20(iVar2,uVar6);
      }
    }
    else {
      iVar3 = func_0x00d2ed40(iVar2,uVar6);
    }
  }
  else {
    iVar3 = func_0x00d2f890(iVar2,uVar6);
  }
LAB_00d301ba:
  if (iVar3 != 0) {
    return 1;
  }
LAB_00d3044f:
  FUN_00bbc6c0(*(undefined4 *)(iVar2 + 0x274),*(undefined4 *)(iVar2 + 0x278),
               "ssl\\statem\\statem_clnt.c",0xdee);
  *(undefined4 *)(iVar2 + 0x274) = 0;
  *(undefined4 *)(iVar2 + 0x278) = 0;
  FUN_00bbc6c0(*(undefined4 *)(iVar2 + 0x27c),*(undefined4 *)(iVar2 + 0x280),
               "ssl\\statem\\statem_clnt.c",0xdf2);
  *(undefined4 *)(iVar2 + 0x27c) = 0;
  *(undefined4 *)(iVar2 + 0x280) = 0;
  return 0;
}



undefined4 FUN_00d304c0(int param_1)

{
  if ((*(int *)(param_1 + 0x9c) != 3) && (*(int *)(param_1 + 0x9c) != 7)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\statem\\statem_clnt.c",0x104a,"tls_construct_end_of_early_data");
    func_0x00d06d50(param_1,0x50,0xc0101,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = 7;
  return 1;
}



undefined4 FUN_00d30520(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  size_t _Size;
  
  func_0x00e87f70();
  _Size = 0x20 - (*(int *)(param_2 + 0x848) + 2U & 0x1f);
  iVar1 = func_0x00bfb180(param_3,*(undefined4 *)(param_2 + 0x844),*(int *)(param_2 + 0x848),1);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfb120(param_3,_Size,&stack0x00000000,1);
    if (iVar1 != 0) {
      memset((void *)0x0,0,_Size);
      return 1;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\statem\\statem_clnt.c",0xf88,"tls_construct_next_proto");
  func_0x00d06d50(param_2,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d33f80(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  func_0x00e87f70();
  iVar2 = 8;
  pcVar1 = (char *)(param_2 + 0x99b);
  do {
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 != '\0') {
      return 1;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (0 < iVar2);
  if (iVar2 != 0) {
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x829,"tls_increment_sequence_ctr");
  func_0x00d34a80(param_2,0x50,0x147,0);
  return 0;
}



undefined4 FUN_00d33ff0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) == 1) {
    if (*(uint *)(param_1 + 0x3dc) <= *(uint *)(param_1 + 0x3d8)) {
      iVar1 = func_0x00d368f0(param_1,1,0,0);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  else if ((*(uint *)(param_1 + 0x97c) <= *(uint *)(param_1 + 0x980)) &&
          (*(int *)(param_1 + 0x3f0) == 0)) {
    uVar2 = func_0x00d36810(param_1);
    return uVar2;
  }
  return 1;
}



undefined4 FUN_00d34050(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 1) {
    if ((*(uint *)(param_1 + 0x3dc) <= *(uint *)(param_1 + 0x3d8)) ||
       (((*(uint *)(param_1 + 0x3d8) == 0 && (*(uint *)(param_1 + 0x3dc) == 1)) &&
        (*(int *)(param_1 + 0x4c) == 0)))) {
      func_0x00d367b0(param_1,0);
      *(undefined4 *)(param_1 + 0x3dc) = 0;
      return 1;
    }
  }
  else if ((((*(uint *)(param_1 + 0x97c) <= *(uint *)(param_1 + 0x980)) &&
            (*(uint *)(param_1 + 0x980) == *(uint *)(param_1 + 0x984))) &&
           (*(int *)(param_1 + 0x3f0) == 0)) && (*(int *)(param_1 + 0x988) != 0xf1)) {
    uVar1 = func_0x00d36740(param_1);
    return uVar1;
  }
  return 0;
}



undefined4 FUN_00d340d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x3f0) != 0) {
      uVar2 = func_0x00bab710(*(undefined4 *)(param_1 + 0x2c),
                              *(int *)(param_1 + 0x3ec) + *(int *)(param_1 + 0x3e0),
                              *(int *)(param_1 + 0x3f0),&param_1);
    }
    func_0x00d35e50(iVar1);
  }
  return uVar2;
}



bool FUN_00d34120(int param_1)

{
  return *(int *)(param_1 + 0x3f0) != 0;
}



bool FUN_00d34130(int param_1)

{
  return *(uint *)(param_1 + 0x980) < *(uint *)(param_1 + 0x97c);
}



int FUN_00d34150(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = *(uint *)(param_1 + 0x980);
  if (uVar2 < *(uint *)(param_1 + 0x97c)) {
    piVar1 = (int *)(uVar2 * 0x2c + 0x404 + param_1);
    do {
      if (piVar1[-1] != 0x17) {
        return iVar3;
      }
      iVar3 = iVar3 + *piVar1;
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xb;
    } while (uVar2 < *(uint *)(param_1 + 0x97c));
  }
  return iVar3;
}



void FUN_00d34190(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00d341a1. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + 0xa7c) + 0x20))();
  return;
}



undefined4 FUN_00d341b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x3d8) < *(uint *)(param_1 + 0x3dc)) &&
     (*(int *)(param_1 + 0x4c + *(uint *)(param_1 + 0x3d8) * 0x1c) != 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x764,"tls_write_records");
    func_0x00d34a80(param_1,0x50,0xc0101,0);
  }
  else {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xa7c) + 0x24))(param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      uVar2 = FUN_00d34240(param_1);
      return uVar2;
    }
  }
  return 0xfffffffe;
}



int FUN_00d34240(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  
  iVar4 = 0;
  if (*(uint *)(param_1 + 0x3d8) < *(uint *)(param_1 + 0x3dc)) {
    do {
      while( true ) {
        iVar7 = param_1 + *(int *)(param_1 + 0x3d8) * 0x1c;
        SetLastError(0);
        if (*(int *)(param_1 + 0x28) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x799,"tls_retry_write_records");
          func_0x00d34a80(param_1,0x50,0x80,0);
          iVar2 = -2;
          goto LAB_00d343bf;
        }
        pcVar1 = *(code **)(*(int *)(param_1 + 0xa7c) + 0x44);
        if ((pcVar1 != (code *)0x0) &&
           (iVar2 = (*pcVar1)(param_1,*(undefined4 *)(iVar7 + 0x54)), iVar2 != 1)) {
          return iVar2;
        }
        iVar3 = func_0x00bab6e0(*(undefined4 *)(param_1 + 0x28),
                                *(int *)(iVar7 + 0x3c) + *(int *)(iVar7 + 0x48),
                                *(undefined4 *)(iVar7 + 0x4c));
        if (-1 < iVar3) break;
        iVar2 = func_0x00bab6a0(*(undefined4 *)(param_1 + 0x28),8);
        if (iVar2 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x793,"tls_retry_write_records");
          pcVar9 = "tls_retry_write_records failure";
          DVar6 = GetLastError();
          func_0x00bc5160(2,DVar6,pcVar9);
          iVar2 = -2;
        }
        else {
          iVar2 = 0;
        }
LAB_00d3437d:
        if (iVar3 < 1) {
LAB_00d343bf:
          if (*(int *)(param_1 + 8) != 0) {
            *(undefined4 *)(iVar7 + 0x4c) = 0;
            iVar4 = *(int *)(param_1 + 0x3dc);
            iVar7 = *(int *)(param_1 + 0x3d8) + 1;
            *(int *)(param_1 + 0x3d8) = iVar7;
            if ((iVar7 == iVar4) && ((*(byte *)(param_1 + 0x38) & 0x10) != 0)) {
              if (iVar4 != 0) {
                puVar8 = (undefined4 *)(param_1 + (iVar4 * 7 + 8) * 4);
                do {
                  if (puVar8[5] == 0) {
                    FUN_00bbc580(*puVar8,"ssl\\record\\methods\\tls_common.c",0x88);
                  }
                  else {
                    puVar8[5] = 0;
                  }
                  *puVar8 = 0;
                  puVar8 = puVar8 + -7;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              *(undefined4 *)(param_1 + 0x3dc) = 0;
            }
          }
          return iVar2;
        }
        *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + iVar4;
        *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) - iVar4;
      }
      if ((iVar3 == 0) && (iVar4 = func_0x00bab6a0(*(undefined4 *)(param_1 + 0x28),8), iVar4 != 0))
      {
        iVar2 = 0;
      }
      else {
        iVar2 = 1;
      }
      iVar4 = iVar3;
      if (iVar3 != *(int *)(iVar7 + 0x4c)) goto LAB_00d3437d;
      *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + iVar3;
      *(undefined4 *)(iVar7 + 0x4c) = 0;
      uVar5 = *(int *)(param_1 + 0x3d8) + 1;
      *(uint *)(param_1 + 0x3d8) = uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x3dc));
    if ((uVar5 == *(uint *)(param_1 + 0x3dc)) && ((*(byte *)(param_1 + 0x38) & 0x10) != 0)) {
      func_0x00d367b0(param_1,0);
      *(undefined4 *)(param_1 + 0x3dc) = 0;
    }
  }
  return 1;
}



undefined4 FUN_00d34450(int param_1)

{
  return *(undefined4 *)(param_1 + 0x99c);
}



undefined4 FUN_00d34460(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = func_0x00bab6b0(param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  func_0x00baa8e0(*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = param_2;
  return 1;
}



int FUN_00d344a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
                int *param_5,undefined4 *param_6,undefined2 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = *(uint *)(param_1 + 0x980);
  uVar2 = *(uint *)(param_1 + 0x97c);
  if (uVar2 <= uVar4) {
    do {
      if (*(uint *)(param_1 + 0x984) != uVar2) {
        FUN_00bc4f50();
        func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x469,"tls_read_record");
        func_0x00d34a80(param_1,0x50,0x141,0);
        return -2;
      }
      iVar3 = (**(code **)(*(int *)(param_1 + 0xa7c) + 0x14))(param_1);
      if (iVar3 != 1) {
        return iVar3;
      }
      uVar4 = *(uint *)(param_1 + 0x980);
      uVar2 = *(uint *)(param_1 + 0x97c);
    } while (uVar2 <= uVar4);
  }
  *(uint *)(param_1 + 0x980) = uVar4 + 1;
  puVar5 = (undefined4 *)(uVar4 * 0x2c + 0x3fc + param_1);
  *param_2 = puVar5;
  *param_3 = *puVar5;
  *param_4 = *(undefined1 *)(puVar5 + 1);
  *param_5 = puVar5[5] + puVar5[4];
  *param_6 = puVar5[2];
  if (*(int *)(param_1 + 8) != 0) {
    *param_7 = *(undefined2 *)(puVar5 + 8);
    uVar1 = *(undefined4 *)((int)puVar5 + 0x26);
    *param_8 = *(undefined4 *)((int)puVar5 + 0x22);
    param_8[1] = uVar1;
  }
  return 1;
}



undefined4 FUN_00d34590(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x3fc + *(uint *)(param_1 + 0x984) * 0x2c;
  if ((*(uint *)(param_1 + 0x984) < *(uint *)(param_1 + 0x980)) && (param_2 == iVar2)) {
    if (*(uint *)(iVar2 + 8) < param_3) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x493,"tls_release_record");
      func_0x00d34a80(param_1,0x50,0xc0103,0);
      return 0xfffffffe;
    }
    if ((*(uint *)(param_1 + 0x30) & 2) != 0) {
      func_0x00401320(*(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 0x10),param_3);
    }
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + param_3;
    piVar1 = (int *)(iVar2 + 8);
    *piVar1 = *piVar1 - param_3;
    if ((((*piVar1 == 0) &&
         (*(int *)(param_1 + 0x984) = *(int *)(param_1 + 0x984) + 1,
         *(int *)(param_1 + 0x980) == *(int *)(param_1 + 0x984))) &&
        ((*(byte *)(param_1 + 0x38) & 0x10) != 0)) && (*(int *)(param_1 + 0x3f0) == 0)) {
      func_0x00d36740(param_1);
    }
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x48d,"tls_release_record");
  func_0x00d34a80(param_1,0x50,0x13d,0);
  return 0xfffffffe;
}



void FUN_00d34690(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00d346a1. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + 0xa7c) + 0xc))();
  return;
}



void FUN_00d346b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa2c) = param_2;
  return;
}



void FUN_00d346c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9c0) = param_2;
  return;
}



void FUN_00d346d0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xa78) = param_2;
  if (1 < param_2) {
    *(undefined4 *)(param_1 + 0x9a0) = 1;
  }
  return;
}



void FUN_00d346f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x988) == 0xf0) {
    pcVar2 = "RH";
    pcVar1 = "read header";
  }
  else if (*(int *)(param_1 + 0x988) == 0xf1) {
    pcVar2 = "RB";
    pcVar1 = "read body";
  }
  else {
    pcVar1 = "unknown";
    pcVar2 = "unknown";
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pcVar2;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = pcVar1;
  }
  return;
}



undefined4 FUN_00d34740(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bc09d0(param_2,"options");
  if (iVar1 != 0) {
    iVar1 = func_0x00bc05a0(iVar1,param_1 + 0x30);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x4b0;
      goto LAB_00d3477c;
    }
  }
  iVar1 = func_0x00bc09d0(param_2,&DAT_01056a94);
  if (iVar1 != 0) {
    iVar1 = func_0x00bc0320(iVar1,param_1 + 0x38);
    if (iVar1 == 0) {
      FUN_00bc4f50();
      uVar2 = 0x4b6;
      goto LAB_00d3477c;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = func_0x00bc09d0(param_2,"read_buffer_len");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,param_1 + 0x3e4);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x4be;
        goto LAB_00d3477c;
      }
    }
  }
  else {
    iVar1 = func_0x00bc09d0(param_2,"block_padding");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,param_1 + 0x9d0);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x4c5;
        goto LAB_00d3477c;
      }
    }
    iVar1 = func_0x00bc09d0(param_2,"hs_padding");
    if (iVar1 != 0) {
      iVar1 = func_0x00bc0300(iVar1,param_1 + 0x9d4);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x4cb;
        goto LAB_00d3477c;
      }
    }
  }
  if (*(int *)(param_1 + 0x18) == 3) {
    iVar1 = func_0x00bc09d0(param_2,"read_ahead");
    if (iVar1 != 0) {
      iVar1 = func_0x00bbfcd0(iVar1,param_1 + 0x9a0);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar2 = 0x4da;
LAB_00d3477c:
        func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar2,"tls_set_options");
        func_0x00bc5160(0x14,0x13c,0);
        return 0;
      }
    }
  }
  return 1;
}



undefined4 * FUN_00d348e0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x9bc);
  if (puVar1 == (undefined4 *)0x0) {
    return puVar1;
  }
  return (undefined4 *)*puVar1;
}



void FUN_00d34900(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9c4) = param_2;
  return;
}



int FUN_00d34910(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
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
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  int *in_stack_00000080;
  
  iVar1 = func_0x00d35f60(param_1,param_2,param_3,param_4,param_5,param_6,in_stack_00000040,
                          in_stack_00000044,in_stack_0000004c,in_stack_00000050,in_stack_00000058,
                          in_stack_0000005c,in_stack_00000060,in_stack_0000006c,in_stack_00000070,
                          in_stack_00000074,in_stack_00000078,in_stack_00000080);
  if (iVar1 != 1) {
    return iVar1;
  }
  if (param_3 < 0x10001) {
    if (param_3 == 0x10000) {
      *(undefined ***)(*in_stack_00000080 + 0xa7c) = &PTR_FUN_010c8840;
    }
    else {
      switch(param_3) {
      case 0x300:
        *(undefined ***)(*in_stack_00000080 + 0xa7c) = &PTR_FUN_010c8570;
        break;
      case 0x301:
      case 0x302:
      case 0x303:
        *(undefined ***)(*in_stack_00000080 + 0xa7c) = &PTR_FUN_010c8660;
        break;
      case 0x304:
        *(undefined **)(*in_stack_00000080 + 0xa7c) = &DAT_010c8758;
        break;
      default:
        goto LAB_00d34a1f;
      }
    }
    iVar1 = (*(code *)**(undefined4 **)(*in_stack_00000080 + 0xa7c))
                      (*in_stack_00000080,param_6,in_stack_00000028,in_stack_0000002c,
                       in_stack_00000030,in_stack_00000034,in_stack_00000038,in_stack_0000003c,
                       in_stack_00000040,in_stack_00000044,in_stack_00000048,in_stack_0000004c,
                       in_stack_00000050);
    if (iVar1 == 1) {
      return 1;
    }
  }
  else {
LAB_00d34a1f:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x593,"tls_new_record_layer");
    func_0x00bc5160(0x14,0xc0103,0);
    iVar1 = -2;
  }
  func_0x00d35e50(*in_stack_00000080);
  *in_stack_00000080 = 0;
  return iVar1;
}



bool FUN_00d34db0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00d368f0(param_1,param_3,0,0);
  return iVar1 != 0;
}



undefined4 FUN_00d34dd0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x9bc) != 0) {
    if (0x4400 < *(uint *)(param_2 + 8)) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x42c,"tls_default_post_process_record");
      func_0x00d34a80(param_1,0x16,0x8c,0);
      return 0;
    }
    iVar1 = *(int *)(param_2 + 0x1c);
    if (iVar1 == 0) {
      iVar1 = FUN_00bbc4f0(0x4540,"ssl\\record\\methods\\tls_common.c",0x414);
      *(int *)(param_2 + 0x1c) = iVar1;
      if (iVar1 == 0) goto LAB_00d34ea8;
    }
    iVar1 = func_0x00c79a30(*(undefined4 *)(param_1 + 0x9bc),iVar1,0x4000,
                            *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 8));
    if (iVar1 < 0) {
LAB_00d34ea8:
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x431,"tls_default_post_process_record");
      func_0x00d34a80(param_1,0x1e,0x6b,0);
      return 0;
    }
    *(int *)(param_2 + 8) = iVar1;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
  }
  if (0x4000 < *(uint *)(param_2 + 8)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x437,"tls_default_post_process_record");
    func_0x00d34a80(param_1,0x16,0x92,0);
    return 0;
  }
  return 1;
}



int FUN_00d34ee0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                int param_6,int param_7,uint *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  func_0x00e87f70();
  if (param_4 == 0) {
    return -1;
  }
  iVar5 = *(int *)(param_3 + 0x3e0);
  uVar6 = *(uint *)(param_3 + 0x3f0);
  iVar4 = 7 - (iVar5 - 4U & 7);
  if (param_6 == 0) {
    if (uVar6 == 0) {
      *(int *)(param_3 + 0x3ec) = iVar4;
    }
    *(undefined4 *)(param_3 + 0x990) = 0;
    *(int *)(param_3 + 0x98c) = *(int *)(param_3 + 0x3ec) + iVar5;
  }
  iVar3 = *(int *)(param_3 + 0x98c);
  if (iVar3 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x14c,"tls_default_read_n");
    func_0x00d34a80(param_3,0x50,0xc0103,0);
    return -2;
  }
  iVar5 = iVar4 + iVar5;
  iVar1 = *(int *)(param_3 + 0x990);
  if ((iVar3 != iVar5) && (param_7 == 1)) {
    func_0x008ab0e6(iVar5,iVar3,iVar1 + uVar6);
    *(int *)(param_3 + 0x98c) = iVar5;
    *(int *)(param_3 + 0x3ec) = iVar4 + iVar1;
  }
  if (*(int *)(param_3 + 8) != 0) {
    if (uVar6 == 0) {
      if (param_6 != 0) {
        return -1;
      }
    }
    else {
      uVar2 = uVar6;
      if (uVar6 < param_4) goto LAB_00d35004;
    }
  }
  uVar2 = param_4;
  if (uVar6 < param_4) {
    uVar2 = *(int *)(param_3 + 1000) - *(int *)(param_3 + 0x3ec);
    if (uVar2 < param_4) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x17a,"tls_default_read_n");
      func_0x00d34a80(param_3,0x50,0xc0103,0);
      return -2;
    }
    if ((*(int *)(param_3 + 0x9a0) == 0) && (*(int *)(param_3 + 8) == 0)) {
      param_5 = param_4;
    }
    else if (param_5 < param_4) {
      param_5 = param_4;
    }
    else if (uVar2 < param_5) {
      param_5 = uVar2;
    }
    do {
      iVar4 = *(int *)(param_3 + 0x24);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_3 + 0x28);
        SetLastError(0);
        if (iVar4 == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x1ab,"tls_default_read_n");
          func_0x00d34a80(param_3,0x50,0xd3,0);
          iVar5 = -2;
          goto LAB_00d35186;
        }
      }
      else {
        SetLastError(0);
      }
      iVar3 = func_0x00bab230(iVar4,iVar1 + iVar5 + uVar6,param_5 - uVar6);
      if (iVar3 < 1) {
        iVar3 = func_0x00bab6a0(iVar4,8);
        if (iVar3 == 0) {
          iVar5 = func_0x00baa730(iVar4,2,0,0);
          iVar5 = -2 - (uint)(iVar5 != 0);
LAB_00d35186:
          *(uint *)(param_3 + 0x3f0) = uVar6;
          if ((((*(byte *)(param_3 + 0x38) & 0x10) != 0) && (*(int *)(param_3 + 8) == 0)) &&
             (iVar1 + uVar6 == 0)) {
            func_0x00d36740(param_3);
          }
          return iVar5;
        }
        if (*(int *)(param_3 + 0x24) == 0) {
          iVar5 = 0;
          goto LAB_00d35186;
        }
        func_0x00baa8e0(*(int *)(param_3 + 0x24));
        *(undefined4 *)(param_3 + 0x24) = 0;
      }
      else {
        uVar6 = uVar6 + iVar3;
        if (*(int *)(param_3 + 8) != 0) {
          if (uVar6 < param_4) {
            param_4 = uVar6;
          }
          break;
        }
      }
    } while (uVar6 < param_4);
    *(int *)(param_3 + 0x3ec) = *(int *)(param_3 + 0x3ec) + param_4;
    *(uint *)(param_3 + 0x3f0) = uVar6 - param_4;
    *(int *)(param_3 + 0x990) = *(int *)(param_3 + 0x990) + param_4;
    *param_8 = param_4;
    return 1;
  }
LAB_00d35004:
  *(int *)(param_3 + 0x990) = *(int *)(param_3 + 0x990) + uVar2;
  *(uint *)(param_3 + 0x3f0) = uVar6 - uVar2;
  *(int *)(param_3 + 0x3ec) = *(int *)(param_3 + 0x3ec) + uVar2;
  *param_8 = uVar2;
  return 1;
}



bool FUN_00d351c0(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) == param_2;
}



undefined4 FUN_00d351e0(int param_1,int *param_2)

{
  uint uVar1;
  
  if (*param_2 != *(int *)(param_1 + 0xc)) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x3e4,"tls_default_validate_record_header")
    ;
    func_0x00d34a80(param_1,0x46,0x10b,0);
    return 0;
  }
  uVar1 = 0x4140;
  if (*(int *)(param_1 + 0x9bc) != 0) {
    uVar1 = 0x4540;
  }
  if (uVar1 < (uint)param_2[2]) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x3f3,"tls_default_validate_record_header")
    ;
    func_0x00d34a80(param_1,0x16,0x96,0);
    return 0;
  }
  return 1;
}



uint FUN_00d352d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0xa78) != 0) && (*(int *)(param_1 + 0x9ac) != 0)) {
    uVar2 = func_0x00bc36d0(*(int *)(param_1 + 0x9ac));
    uVar3 = func_0x00bc2510(uVar2);
    if ((((uVar3 & 0x800000) != 0) &&
        ((((iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0x302 || (iVar1 == 0x303)) || (iVar1 == 0x100)
          ) || ((iVar1 == 0xfeff || (iVar1 == 0xfefd)))))) && (param_3 != 0)) {
      uVar3 = (param_3 - 1U) / *param_5 + 1;
      if (*(uint *)(param_1 + 0xa78) <= uVar3) {
        uVar3 = *(uint *)(param_1 + 0xa78);
      }
      return uVar3;
    }
  }
  return 1;
}



void FUN_00d35350(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  uint uStack00000004;
  uint uStack00000008;
  int *piStack0000000c;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  undefined4 uVar16;
  undefined4 uVar17;
  
  func_0x00e87f70();
  iVar4 = in_stack_0000006c;
  in_stack_00000064 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uStack00000008 = 0;
  uStack00000004 = 0;
  puVar15 = (uint *)(in_stack_0000006c + 0x404);
  piStack0000000c = (int *)0x0;
  if ((*(int *)(in_stack_0000006c + 0x3e0) != 0) ||
     (iVar5 = func_0x00d36810(in_stack_0000006c), iVar5 != 0)) {
    in_stack_00000018 = *(uint *)(iVar4 + 0xa78);
    if (in_stack_00000018 == 0) {
      in_stack_00000018 = 1;
    }
    do {
      puVar13 = puVar15;
      if ((*(int *)(iVar4 + 0x988) != 0xf1) || (*(uint *)(iVar4 + 0x990) < 5)) {
        iVar5 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 0x10))
                          (iVar4,5,*(undefined4 *)(iVar4 + 1000),0,uStack00000004 == 0,
                           &stack0x00000014);
        if (iVar5 < 1) break;
        uVar12 = *(uint *)(iVar4 + 0x990);
        pbVar3 = *(byte **)(iVar4 + 0x98c);
        *(undefined4 *)(iVar4 + 0x988) = 0xf1;
        if (0x7fffffff < uVar12) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x252,"tls_get_more_records");
          uVar17 = 0xc0103;
          goto LAB_00d35d34;
        }
        in_stack_0000001c = pbVar3;
        if (uVar12 < 2) {
LAB_00d35d03:
          FUN_00bc4f50();
          uVar17 = 600;
        }
        else {
          if (uVar12 == 2) goto LAB_00d35d03;
          if ((((*(int *)(iVar4 + 0x10) == 1) && (*(int *)(iVar4 + 0xa30) != 0)) &&
              ((*pbVar3 & 0x80) != 0)) && (pbVar3[2] == 1)) {
            uVar12 = CONCAT11(*pbVar3,pbVar3[1]) & 0x7fff;
            puVar13[-1] = 0x16;
            puVar13[-2] = 2;
            *puVar13 = uVar12;
            if (uVar12 <= *(int *)(iVar4 + 1000) - 2U) {
LAB_00d3554d:
              iVar5 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 0x18))(iVar4,puVar13 + -2);
              if (iVar5 != 0) goto LAB_00d3556c;
              break;
            }
            FUN_00bc4f50();
            uVar17 = 0x273;
LAB_00d354ad:
            func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar17,"tls_get_more_records");
            uVar17 = 0xc6;
            uVar16 = 0x16;
            goto LAB_00d35d36;
          }
          if (((uVar12 != 0) && (in_stack_0000001c = (byte *)(uint)*pbVar3, 1 < uVar12 - 1)) &&
             (uVar11 = (uint)CONCAT11(pbVar3[1],pbVar3[2]), 1 < uVar12 - 3)) {
            bVar1 = pbVar3[3];
            bVar2 = pbVar3[4];
            puVar13[-2] = uVar11;
            *puVar13 = (uint)CONCAT11(bVar1,bVar2);
            puVar13[-1] = (uint)in_stack_0000001c;
            if (uVar11 != 2) {
              if (*(code **)(iVar4 + 0xa6c) != (code *)0x0) {
                (**(code **)(iVar4 + 0xa6c))(0,uVar11,0x100,pbVar3,5,*(undefined4 *)(iVar4 + 0xa64))
                ;
              }
              if (*puVar13 <= *(int *)(iVar4 + 1000) - 5U) goto LAB_00d3554d;
              FUN_00bc4f50();
              uVar17 = 0x297;
              goto LAB_00d354ad;
            }
            FUN_00bc4f50();
            func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x28d,"tls_get_more_records");
            uVar17 = 0x10b;
            uVar16 = 0x46;
            goto LAB_00d35d36;
          }
          if (*(code **)(iVar4 + 0xa6c) != (code *)0x0) {
            (**(code **)(iVar4 + 0xa6c))(0,0,0x100,pbVar3,5,*(undefined4 *)(iVar4 + 0xa64));
          }
          FUN_00bc4f50();
          uVar17 = 0x27f;
        }
        func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar17,"tls_get_more_records");
        uVar17 = 0xc0103;
        uVar16 = 0x32;
        goto LAB_00d35d36;
      }
LAB_00d3556c:
      uVar12 = *puVar13 - 3;
      if (puVar13[-2] != 2) {
        uVar12 = *puVar13;
      }
      if ((uVar12 != 0) &&
         (iVar5 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 0x10))
                            (iVar4,uVar12,uVar12,1,0,&stack0x00000014), iVar5 < 1)) break;
      *(undefined4 *)(iVar4 + 0x988) = 0xf0;
      iVar5 = 2;
      if (puVar13[-2] != 2) {
        iVar5 = 5;
      }
      uVar12 = iVar5 + *(int *)(iVar4 + 0x98c);
      uStack00000004 = uStack00000004 + 1;
      puVar13[4] = uVar12;
      puVar13[3] = uVar12;
      puVar13[1] = *puVar13;
      *(undefined4 *)(iVar4 + 0x990) = 0;
      *(undefined4 *)(iVar4 + 0xa30) = 0;
      if (((in_stack_00000018 <= uStack00000004) || (puVar13[-1] != 0x17)) ||
         ((((iVar5 = *(int *)(iVar4 + 0xc), iVar5 != 0x302 &&
            (((iVar5 != 0x303 && (iVar5 != 0x100)) && (iVar5 != 0xfeff)))) && (iVar5 != 0xfefd)) ||
          (*(int *)(iVar4 + 0x9ac) == 0)))) goto LAB_00d3568a;
      uVar17 = func_0x00bc36d0(*(int *)(iVar4 + 0x9ac));
      uVar12 = func_0x00bc2510(uVar17);
      if ((((uVar12 & 0x800000) == 0) || (*(int *)(iVar4 + 0x3e0) == 0)) ||
         ((*(uint *)(iVar4 + 0x3f0) < 5 ||
          ((pcVar6 = (char *)(*(int *)(iVar4 + 0x3e0) + *(int *)(iVar4 + 0x3ec)), *pcVar6 != '\x17'
           || (puVar15 = puVar13 + 0xb, *(uint *)(iVar4 + 0x3f0) < CONCAT11(pcVar6[3],pcVar6[4]) + 5
              )))))) goto LAB_00d3568a;
    } while( true );
  }
  goto LAB_00d35d44;
LAB_00d3568a:
  if ((uStack00000004 == 1) &&
     (((puVar13[-1] == 0x14 && (*(int *)(iVar4 + 0xc) == 0x304)) && (*(int *)(iVar4 + 0x9c0) != 0)))
     ) {
    if ((*puVar13 == 1) && (*(char *)puVar13[3] == '\x01')) {
      if (*(code **)(iVar4 + 0xa6c) != (code *)0x0) {
        (**(code **)(iVar4 + 0xa6c))
                  (0,0x304,0x14,(char *)puVar13[3],1,*(undefined4 *)(iVar4 + 0xa64));
      }
      puVar13[-1] = 0x16;
      *(int *)(iVar4 + 0x9a4) = *(int *)(iVar4 + 0x9a4) + 1;
      if (*(uint *)(iVar4 + 0x9a4) < 0x21) {
        *(undefined4 *)(iVar4 + 0x97c) = 0;
        *(undefined4 *)(iVar4 + 0x980) = 0;
        *(undefined4 *)(iVar4 + 0x984) = 0;
        FUN_008ab370();
        return;
      }
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x2f9,"tls_get_more_records");
      uVar17 = 0x106;
      uVar16 = 10;
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x2ec,"tls_get_more_records");
      uVar17 = 0x104;
      uVar16 = 10;
    }
  }
  else {
    if (((*(int *)(iVar4 + 0x9b8) == 0) ||
        (iVar5 = func_0x00bc36d0(*(int *)(iVar4 + 0x9b8)), iVar5 == 0)) ||
       (uStack00000008 = func_0x00bc4320(iVar5), uStack00000008 - 1 < 0x40)) {
      if ((*(int *)(iVar4 + 0xa18) == 0) || (*(int *)(iVar4 + 0x9b8) == 0)) {
        if ((uStack00000008 != 0) &&
           (piStack0000000c =
                 (int *)FUN_00bbc830(uStack00000004 * 8,"ssl\\record\\methods\\tls_common.c",0x32f),
           piStack0000000c == (int *)0x0)) {
          FUN_00bc4f50();
          func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x331,"tls_get_more_records");
          uVar17 = 0x8000f;
          goto LAB_00d35d34;
        }
      }
      else {
        uVar12 = 0;
        if (uStack00000004 != 0) {
          puVar15 = (uint *)(iVar4 + 0x404);
          do {
            if (*puVar15 < uStack00000008) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x31b,"tls_get_more_records");
              uVar17 = 0xa0;
              uVar16 = 0x32;
              goto LAB_00d35d36;
            }
            uVar7 = *puVar15 - uStack00000008;
            uVar11 = puVar15[3];
            *puVar15 = uVar7;
            iVar5 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 8))
                              (iVar4,puVar15 + -2,&stack0x00000024,0);
            if ((iVar5 == 0) ||
               (iVar5 = func_0x00401390(&stack0x00000024,uVar11 + uVar7,uStack00000008), iVar5 != 0)
               ) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x323,"tls_get_more_records");
              uVar17 = 0x119;
              uVar16 = 0x14;
              goto LAB_00d35d36;
            }
            uVar12 = uVar12 + 1;
            puVar15 = puVar15 + 0xb;
          } while (uVar12 < uStack00000004);
        }
        uStack00000008 = 0;
      }
      FUN_00bcaeb0();
      iVar5 = iVar4 + 0x3fc;
      iVar8 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 4))
                        (iVar4,iVar5,uStack00000004,0,piStack0000000c,uStack00000008);
      if (iVar8 == 0) {
        if (*(int *)(iVar4 + 0x99c) != -1) {
          FUN_00bcacf0();
          goto LAB_00d359e8;
        }
        if (((uStack00000004 == 1) && (*(code **)(iVar4 + 0xa68) != (code *)0x0)) &&
           (iVar5 = (**(code **)(iVar4 + 0xa68))(*(undefined4 *)(iVar4 + 0xa64)), iVar5 != 0)) {
          func_0x00bcad80();
          iVar5 = func_0x00d34c10(iVar4,*(undefined4 *)(iVar4 + 0x404),0x68,0);
          if (iVar5 != 0) {
            *(undefined4 *)(iVar4 + 0x404) = 0;
            *(undefined4 *)(iVar4 + 0x97c) = 0;
            *(undefined4 *)(iVar4 + 0x980) = 0;
            *(undefined4 *)(iVar4 + 0x984) = 0;
            *(undefined8 *)(iVar4 + 0x994) = 0;
          }
          goto LAB_00d359e8;
        }
        FUN_00bcacf0();
        FUN_00bc4f50();
        uVar17 = 0x366;
LAB_00d359c7:
        func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar17,"tls_get_more_records");
        uVar16 = 0x119;
        uVar17 = 0x14;
      }
      else {
        FUN_00bcacf0();
        if ((((*(int *)(iVar4 + 0x9ac) != 0) && (*(int *)(iVar4 + 0xa18) == 0)) &&
            (iVar9 = func_0x00bc36d0(*(undefined4 *)(iVar4 + 0x9b8)), iVar9 != 0)) &&
           (piVar14 = piStack0000000c, uVar12 = uStack00000004, uStack00000004 != 0)) {
          do {
            iVar9 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 8))(iVar4,iVar5,&stack0x00000024,0);
            if (((iVar9 == 0) || (piVar14 == (int *)0x0)) ||
               ((*piVar14 == 0 ||
                (iVar10 = func_0x00401390(&stack0x00000024,*piVar14,uStack00000008), iVar9 = iVar8,
                iVar10 != 0)))) {
              iVar9 = 0;
            }
            iVar8 = 0;
            if (*(uint *)(iVar5 + 8) <= uStack00000008 + 0x4400) {
              iVar8 = iVar9;
            }
            iVar5 = iVar5 + 0x2c;
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar12 != 0);
          if (iVar8 == 0) {
            if (*(int *)(iVar4 + 0x99c) != -1) goto LAB_00d359e8;
            FUN_00bc4f50();
            uVar17 = 0x395;
            goto LAB_00d359c7;
          }
        }
        uVar12 = 0;
        if (uStack00000004 != 0) {
          puVar15 = (uint *)(iVar4 + 0x404);
          do {
            iVar5 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 0x1c))(iVar4,puVar15 + -2);
            if (iVar5 == 0) goto LAB_00d359e8;
            if ((*(uint *)(iVar4 + 0x9c4) != 0x4000) && (*(uint *)(iVar4 + 0x9c4) < *puVar15)) {
              FUN_00bc4f50();
              func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x3ad,"tls_get_more_records");
              uVar16 = 0x92;
              uVar17 = 0x16;
              goto LAB_00d359da;
            }
            puVar15[2] = 0;
            if (*puVar15 == 0) {
              uVar11 = *(int *)(iVar4 + 0x9a4) + 1;
              *(uint *)(iVar4 + 0x9a4) = uVar11;
              if (0x20 < uVar11) {
                FUN_00bc4f50();
                func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x3be,"tls_get_more_records");
                uVar16 = 0x12a;
                uVar17 = 10;
                goto LAB_00d359da;
              }
            }
            else {
              *(undefined4 *)(iVar4 + 0x9a4) = 0;
            }
            uVar12 = uVar12 + 1;
            puVar15 = puVar15 + 0xb;
          } while (uVar12 < uStack00000004);
        }
        if ((*(int *)(iVar4 + 0x18) != 1) || (*(int *)(iVar4 + 0x400) != 0x17)) {
LAB_00d35c5f:
          *(uint *)(iVar4 + 0x97c) = uStack00000004;
          *(undefined4 *)(iVar4 + 0x980) = 0;
          *(undefined4 *)(iVar4 + 0x984) = 0;
          goto LAB_00d359e8;
        }
        if (*(uint *)(iVar4 + 0x9c8) == 0) {
          FUN_00bc4f50();
          uVar17 = 0x1f8;
        }
        else {
          uVar12 = *(int *)(iVar4 + 0x9cc) + *(int *)(iVar4 + 0x404);
          if (uVar12 <= *(uint *)(iVar4 + 0x9c8)) {
            *(uint *)(iVar4 + 0x9cc) = uVar12;
            goto LAB_00d35c5f;
          }
          FUN_00bc4f50();
          uVar17 = 0x201;
        }
        func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar17,"rlayer_early_data_count_ok");
        uVar16 = 0xa4;
        uVar17 = 10;
      }
LAB_00d359da:
      func_0x00d34a80(iVar4,uVar17,uVar16,0);
LAB_00d359e8:
      if (piStack0000000c != (int *)0x0) {
        uVar12 = 0;
        if (uStack00000004 != 0) {
          do {
            if (piStack0000000c[uVar12 * 2 + 1] != 0) {
              FUN_00bbc580(piStack0000000c[uVar12 * 2],"ssl\\record\\methods\\tls_common.c",0x3d7);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uStack00000004);
        }
        FUN_00bbc580(piStack0000000c,"ssl\\record\\methods\\tls_common.c",0x3d9);
      }
      FUN_008ab370();
      return;
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x309,"tls_get_more_records");
    uVar17 = 0x80006;
LAB_00d35d34:
    uVar16 = 0x50;
  }
LAB_00d35d36:
  func_0x00d34a80(iVar4,uVar16,uVar17,0);
LAB_00d35d44:
  FUN_008ab370();
  return;
}



undefined4
FUN_00d35d60(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4,undefined4 param_5,
            int param_6,int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  uVar3 = 0;
  if (param_4 != 0) {
    piVar4 = (int *)(param_7 + 0xc);
    do {
      piVar4[3] = (uint)*param_3;
      iVar2 = 7 - (piVar4[-3] + 4U & 7);
      *piVar4 = iVar2;
      iVar1 = func_0x00bfad10(param_6,piVar4[-3],piVar4[-1],0);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar5 = 0x634;
LAB_00d35e1c:
        func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar5,
                        "tls_initialise_write_packets_default");
        func_0x00d34a80(param_2,0x50,0xc0103,0);
        return 0;
      }
      *param_8 = *param_8 + 1;
      iVar1 = func_0x00bfa8b0(param_6,iVar2,0);
      if (iVar1 == 0) {
        FUN_00bc4f50();
        uVar5 = 0x639;
        goto LAB_00d35e1c;
      }
      uVar3 = uVar3 + 1;
      param_6 = param_6 + 0x1c;
      piVar4 = piVar4 + 7;
      param_3 = param_3 + 0x10;
    } while (uVar3 < param_4);
  }
  return 1;
}



undefined4
FUN_00d36380(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
            undefined1 *param_6,undefined4 param_7,undefined4 *param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint unaff_retaddr;
  undefined4 uVar6;
  
  func_0x00e87f70();
  uVar6 = param_7;
  iVar2 = param_4;
  param_4 = (uint)(*(int *)(param_4 + 8) != 0) * 8 + 5;
  iVar4 = func_0x00bfaaf0(param_7,&stack0x00000000);
  puVar3 = param_8;
  iVar5 = param_5;
  if ((((iVar4 == 0) || (uVar1 = param_8[2], (unaff_retaddr - param_5) + 0x50 < uVar1)) ||
      (uVar1 < unaff_retaddr)) ||
     ((unaff_retaddr < uVar1 && (iVar4 = func_0x00bfa8b0(uVar6,uVar1 - unaff_retaddr,0), iVar4 == 0)
      ))) {
    FUN_00bc4f50();
    uVar6 = 0x6a5;
  }
  else {
    if ((*(int *)(iVar2 + 0xa18) != 0) && (iVar5 != 0)) {
      iVar4 = func_0x00bfa8b0(uVar6,iVar5,&param_1);
      if ((iVar4 == 0) ||
         (iVar4 = (**(code **)(*(int *)(iVar2 + 0xa7c) + 8))(iVar2,puVar3,param_1,1), iVar4 == 0)) {
        FUN_00bc4f50();
        uVar6 = 0x6ad;
        goto LAB_00d36540;
      }
      puVar3[2] = puVar3[2] + iVar5;
    }
    iVar5 = func_0x00bfaaf0(uVar6,&param_2);
    if ((iVar5 == 0) || (iVar5 = func_0x00bfa920(uVar6), iVar5 == 0)) {
      FUN_00bc4f50();
      uVar6 = 0x6b6;
    }
    else {
      iVar5 = param_4;
      if (*(int *)(iVar2 + 0xa6c) != 0) {
        iVar4 = func_0x00bfaac0(uVar6);
        iVar5 = param_4;
        (**(code **)(iVar2 + 0xa6c))
                  (1,*puVar3,0x100,(iVar4 - param_2) - param_4,param_4,
                   *(undefined4 *)(iVar2 + 0xa64));
        if ((*(int *)(iVar2 + 0xc) == 0x304) && (*(int *)(iVar2 + 0x9ac) != 0)) {
          param_4 = CONCAT31(param_4._1_3_,*param_6);
          (**(code **)(iVar2 + 0xa6c))(1,*puVar3,0x101,&param_4,1,*(undefined4 *)(iVar2 + 0xa64));
        }
      }
      iVar4 = func_0x00bfaa70(uVar6);
      if (iVar4 != 0) {
        puVar3[2] = puVar3[2] + iVar5;
        return 1;
      }
      FUN_00bc4f50();
      uVar6 = 0x6ca;
    }
  }
LAB_00d36540:
  func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar6,
                  "tls_post_encryption_processing_default");
  func_0x00d34a80(iVar2,0x50,0xc0103,0);
  return 0;
}



undefined4 FUN_00d36570(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_retaddr;
  undefined4 uVar5;
  
  func_0x00e87f70();
  iVar1 = param_5;
  uVar5 = param_4;
  iVar3 = param_3;
  iVar4 = param_2;
  if ((*(int *)(param_2 + 0xa18) == 0) && (param_3 != 0)) {
    iVar2 = func_0x00bfa8b0(param_4,param_3,&param_2);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar4 + 0xa7c) + 8))(iVar4,iVar1,param_2,1);
      if (iVar2 != 0) goto LAB_00d365d9;
    }
    FUN_00bc4f50();
    uVar5 = 0x671;
  }
  else {
LAB_00d365d9:
    iVar3 = func_0x00bfaf10(uVar5,0x50 - iVar3,0);
    if (iVar3 != 0) {
      iVar3 = func_0x00bfaaf0(uVar5,&stack0x00000000);
      if (iVar3 != 0) {
        iVar4 = func_0x00bfaac0(uVar5);
        *(int *)(iVar1 + 8) = unaff_retaddr;
        *(int *)(iVar1 + 0x14) = iVar4 - unaff_retaddr;
        *(int *)(iVar1 + 0x18) = iVar4 - unaff_retaddr;
        return 1;
      }
    }
    FUN_00bc4f50();
    uVar5 = 0x683;
  }
  func_0x00bc5050("ssl\\record\\methods\\tls_common.c",uVar5,"tls_prepare_for_encryption_default");
  func_0x00d34a80(iVar4,0x50,0xc0103,0);
  return 0;
}



undefined4
FUN_00d36660(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  *param_5 = 0;
  iVar2 = *(int *)(param_3 + 0xc) + 0x400;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  iVar1 = func_0x00bfae30(param_2,param_4,0,1);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfae30(param_2,*(undefined4 *)(param_3 + 4),0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfb0a0(param_2,2);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x9b4) != 0) {
          iVar1 = func_0x00bfa8b0(param_2,*(int *)(param_1 + 0x9b4),0);
          if (iVar1 == 0) goto LAB_00d36701;
        }
        if (iVar2 != 0) {
          iVar2 = func_0x00bfaf10(param_2,iVar2,param_5);
          if (iVar2 == 0) goto LAB_00d36701;
        }
        return 1;
      }
    }
  }
LAB_00d36701:
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\record\\methods\\tls_common.c",0x657,"tls_prepare_record_header_default");
  func_0x00d34a80(param_1,0x50,0xc0103,0);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00d36d87)
// WARNING: Removing unreachable block (ram,0x00d36ded)
// WARNING: Removing unreachable block (ram,0x00d36daa)
// WARNING: Removing unreachable block (ram,0x00d36db7)
// WARNING: Removing unreachable block (ram,0x00d36be0)
// WARNING: Removing unreachable block (ram,0x00d36e59)
// WARNING: Removing unreachable block (ram,0x00d36d02)
// WARNING: Removing unreachable block (ram,0x00d36dc8)
// WARNING: Removing unreachable block (ram,0x00d36d15)
// WARNING: Removing unreachable block (ram,0x00d36cc8)
// WARNING: Removing unreachable block (ram,0x00d36cd0)

void FUN_00d36ab0(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puStack00000004;
  int in_stack_0000097c;
  int in_stack_00000980;
  uint in_stack_00000984;
  
  func_0x00e87f70();
  if (((*(int *)(in_stack_0000097c + 0x9b8) == 0) || (iVar3 = func_0x00bc36d0(), iVar3 == 0)) ||
     (iVar3 = func_0x00bc4130(), -1 < iVar3)) {
    iVar3 = (**(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 0x28))();
    if ((iVar3 != 0) &&
       (iVar3 = (**(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 0x2c))(), iVar3 != 0)) {
      memset(&stack0x000003c8,0,0x5ac);
      puStack00000004 = (undefined4 *)0x0;
      if (in_stack_00000984 != 0) {
        puVar4 = (undefined4 *)&stack0x000003dc;
        do {
          pbVar6 = (byte *)((int)puStack00000004 * 0x10 + in_stack_00000980);
          pcVar1 = *(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 0x30);
          if (pcVar1 == (code *)0x0) {
            bVar2 = *pbVar6;
          }
          else {
            bVar2 = (*pcVar1)();
          }
          puVar4[-4] = (uint)bVar2;
          puVar4[-5] = *(undefined4 *)(pbVar6 + 4);
          iVar3 = (**(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 0x34))();
          if (iVar3 == 0) goto LAB_00d36cc0;
          iVar3 = *(int *)(in_stack_0000097c + 0x9bc);
          *puVar4 = 0;
          puVar4[-3] = *(undefined4 *)(pbVar6 + 0xc);
          puVar4[1] = *(undefined4 *)(pbVar6 + 8);
          if (iVar3 != 0) {
            iVar3 = func_0x00c799f0();
            if (-1 < iVar3) {
              puVar4[-3] = iVar3;
              puVar4[1] = *puVar4;
              iVar3 = func_0x00bfa8b0();
              if (iVar3 != 0) goto LAB_00d36d1a;
            }
            FUN_00bc4f50();
            func_0x00bc5050();
            goto LAB_00d36cb3;
          }
LAB_00d36d1a:
          pcVar1 = *(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 0x38);
          if (((pcVar1 != (code *)0x0) && (iVar3 = (*pcVar1)(), iVar3 == 0)) ||
             (iVar3 = (**(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 0x3c))(), iVar3 == 0))
          goto LAB_00d36cc0;
          puStack00000004 = (undefined4 *)((int)puStack00000004 + 1);
          puVar4 = puVar4 + 0xb;
        } while (puStack00000004 < in_stack_00000984);
      }
      iVar3 = (**(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 4))();
      if (iVar3 < 1) {
        if (*(int *)(in_stack_0000097c + 0x99c) == -1) {
          FUN_00bc4f50();
          func_0x00bc5050();
LAB_00d36cb3:
          func_0x00d34a80();
        }
      }
      else {
        uVar7 = 0;
        if (in_stack_00000984 != 0) {
          puStack00000004 = (undefined4 *)(in_stack_0000097c + 0x4c);
          puVar5 = &stack0x000003c8;
          do {
            iVar3 = (**(code **)(*(int *)(in_stack_0000097c + 0xa7c) + 0x40))();
            if (iVar3 == 0) break;
            uVar7 = uVar7 + 1;
            puVar4 = (undefined4 *)(puVar5 + 8);
            puVar5 = puVar5 + 0x2c;
            *puStack00000004 = *puVar4;
            puStack00000004 = puStack00000004 + 7;
          } while (uVar7 < in_stack_00000984);
        }
      }
    }
  }
  else {
    FUN_00bc4f50();
    func_0x00bc5050();
    func_0x00d34a80();
  }
LAB_00d36cc0:
  FUN_008ab370();
  return;
}



void FUN_00d36ec0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa60) = param_2;
  return;
}



undefined4 FUN_00d36ed0(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_2;
  func_0x00e87f70();
  param_2 = 1;
  if (*(int *)(iVar4 + 0x3f0) != 0) {
    param_2 = func_0x00bab710(*(undefined4 *)(iVar4 + 0x2c),
                              *(int *)(iVar4 + 0x3ec) + *(int *)(iVar4 + 0x3e0),
                              *(int *)(iVar4 + 0x3f0),&stack0x00000000);
    *(undefined4 *)(iVar4 + 0x3f0) = 0;
  }
  if (*(int *)(iVar4 + 0xa38) != 0) {
    iVar2 = func_0x00d115e0(*(int *)(iVar4 + 0xa38));
    while (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar2 + 8);
      uVar3 = func_0x00bab710(*(undefined4 *)(iVar4 + 0x2c),*puVar1,puVar1[1],&stack0x00000000);
      param_2 = param_2 & uVar3;
      FUN_00bbc580(puVar1[2],"ssl\\record\\methods\\dtls_meth.c",0x25c);
      FUN_00bbc580(*(undefined4 *)(iVar2 + 8),"ssl\\record\\methods\\dtls_meth.c",0x25d);
      func_0x00d11410(iVar2);
      iVar2 = func_0x00d115e0(*(undefined4 *)(iVar4 + 0xa38));
    }
    func_0x00d114d0(*(undefined4 *)(iVar4 + 0xa38));
  }
  if (*(int *)(iVar4 + 0xa3c) != 0) {
    iVar2 = func_0x00d115e0(*(int *)(iVar4 + 0xa3c));
    while (iVar2 != 0) {
      FUN_00bbc580(*(undefined4 *)(*(int *)(iVar2 + 8) + 8),"ssl\\record\\methods\\dtls_meth.c",
                   0x266);
      FUN_00bbc580(*(undefined4 *)(iVar2 + 8),"ssl\\record\\methods\\dtls_meth.c",0x267);
      func_0x00d11410(iVar2);
      iVar2 = func_0x00d115e0(*(undefined4 *)(iVar4 + 0xa3c));
    }
    func_0x00d114d0(*(undefined4 *)(iVar4 + 0xa3c));
  }
  iVar4 = FUN_00d340d0(iVar4);
  if ((iVar4 != 0) && (param_2 != 0)) {
    return 1;
  }
  return 0;
}



int FUN_00d37040(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                undefined4 param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
                undefined4 param_29,undefined4 param_30,undefined4 param_31,int *param_32)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00d35f60(param_1,param_2,param_3,param_4,param_5,param_6,param_16,param_17,param_19
                          ,param_20,param_22,param_23,param_24,param_27,param_28,param_29,param_30,
                          param_32);
  if (iVar1 != 1) {
    return iVar1;
  }
  iVar1 = *param_32;
  uVar2 = func_0x00d115a0();
  *(undefined4 *)(iVar1 + 0xa38) = uVar2;
  iVar1 = *param_32;
  uVar2 = func_0x00d115a0();
  *(undefined4 *)(iVar1 + 0xa3c) = uVar2;
  iVar1 = *param_32;
  if ((*(int *)(iVar1 + 0xa38) == 0) || (*(int *)(iVar1 + 0xa3c) == 0)) {
    FUN_00d36ed0(iVar1);
    *param_32 = 0;
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\record\\methods\\dtls_meth.c",0x290,"dtls_new_record_layer");
    func_0x00bc5160(0x14,0x80014,0);
    return -2;
  }
  *(undefined4 *)(iVar1 + 8) = 1;
  *(undefined2 *)(*param_32 + 0x20) = param_7;
  *(undefined4 *)(*param_32 + 0xa60) = 1;
  if (param_3 < 0xff00) {
    if (((param_3 == 0xfeff) || (param_3 == 0x100)) || (param_3 == 0xfefd)) {
      *(undefined ***)(*param_32 + 0xa7c) = &PTR_FUN_010c86a8;
LAB_00d3716e:
      iVar1 = (*(code *)**(undefined4 **)(*param_32 + 0xa7c))
                        (*param_32,param_6,param_10,param_11,param_12,param_13,param_14,param_15,
                         param_16,param_17,param_18,param_19,param_20);
      if (iVar1 == 1) {
        return 1;
      }
      goto LAB_00d371b5;
    }
  }
  else if (param_3 == 0x1ffff) {
    *(undefined ***)(*param_32 + 0xa7c) = &PTR_FUN_010c8888;
    goto LAB_00d3716e;
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\record\\methods\\dtls_meth.c",0x2a3,"dtls_new_record_layer");
  func_0x00bc5160(0x14,0xc0103,0);
  iVar1 = -2;
LAB_00d371b5:
  FUN_00d36ed0(*param_32);
  *param_32 = 0;
  return iVar1;
}



int FUN_00d37210(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x9ac) != 0) {
    uVar1 = func_0x00bc36d0(*(int *)(param_1 + 0x9ac));
    iVar2 = func_0x00bc3c70(uVar1);
    if (iVar2 == 2) {
      iVar3 = func_0x00bc36e0(*(undefined4 *)(param_1 + 0x9ac));
    }
  }
  return *(int *)(param_1 + 0xa34) + 0xd + *(int *)(param_1 + 0x9b4) + iVar3;
}



int FUN_00d37260(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint *_Dst;
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint unaff_retaddr;
  
  func_0x00e87f70();
  _Dst = (uint *)(param_3 + 0x3fc);
  *(undefined4 *)(param_3 + 0x97c) = 0;
  *(undefined4 *)(param_3 + 0x980) = 0;
  *(undefined4 *)(param_3 + 0x984) = 0;
  if ((*(int *)(param_3 + 0x3e0) == 0) && (iVar12 = func_0x00d36810(param_3), iVar12 == 0)) {
    return -2;
  }
LAB_00d372c0:
  do {
    puVar17 = (uint *)(param_3 + 0x990);
    iVar12 = func_0x00d115e0(*(undefined4 *)(param_3 + 0xa3c));
    if (iVar12 != 0) {
      piVar5 = *(int **)(iVar12 + 8);
      func_0x00d34bd0(param_3 + 0x3e0);
      *(int *)(param_3 + 0x98c) = *piVar5;
      *puVar17 = piVar5[1];
      iVar15 = piVar5[3];
      iVar9 = piVar5[4];
      iVar10 = piVar5[5];
      *(int *)(param_3 + 0x3e0) = piVar5[2];
      *(int *)(param_3 + 0x3e4) = iVar15;
      *(int *)(param_3 + 1000) = iVar9;
      *(int *)(param_3 + 0x3ec) = iVar10;
      *(undefined8 *)(param_3 + 0x3f0) = *(undefined8 *)(piVar5 + 6);
      *(int *)(param_3 + 0x3f8) = piVar5[8];
      iVar15 = piVar5[10];
      iVar9 = piVar5[0xb];
      iVar10 = piVar5[0xc];
      *_Dst = piVar5[9];
      *(int *)(param_3 + 0x400) = iVar15;
      *(int *)(param_3 + 0x404) = iVar9;
      *(int *)(param_3 + 0x408) = iVar10;
      iVar15 = piVar5[0xe];
      iVar9 = piVar5[0xf];
      iVar10 = piVar5[0x10];
      *(int *)(param_3 + 0x40c) = piVar5[0xd];
      *(int *)(param_3 + 0x410) = iVar15;
      *(int *)(param_3 + 0x414) = iVar9;
      *(int *)(param_3 + 0x418) = iVar10;
      *(undefined8 *)(param_3 + 0x41c) = *(undefined8 *)(piVar5 + 0x11);
      *(int *)(param_3 + 0x424) = piVar5[0x13];
      iVar15 = *piVar5;
      *(undefined4 *)(param_3 + 0x996) = *(undefined4 *)(iVar15 + 5);
      *(undefined2 *)(param_3 + 0x99a) = *(undefined2 *)(iVar15 + 9);
      FUN_00bbc580(*(undefined4 *)(iVar12 + 8),"ssl\\record\\methods\\dtls_meth.c",0x167);
      func_0x00d11410(iVar12);
LAB_00d377e9:
      *(undefined4 *)(param_3 + 0x97c) = 1;
      return 1;
    }
    if ((*(int *)(param_3 + 0x988) != 0xf1) || (*puVar17 < 0xd)) {
      iVar12 = (**(code **)(*(int *)(param_3 + 0xa7c) + 0x10))
                         (param_3,0xd,*(undefined4 *)(param_3 + 1000),0,1,&stack0x00000000);
      if (iVar12 < 1) {
        return iVar12;
      }
      if (*puVar17 == 0xd) {
        pbVar2 = *(byte **)(param_3 + 0x98c);
        *(undefined4 *)(param_3 + 0x988) = 0xf1;
        *(uint *)(param_3 + 0x400) = (uint)*pbVar2;
        bVar1 = pbVar2[1];
        uVar18 = (uint)CONCAT11(bVar1,pbVar2[2]);
        *_Dst = uVar18;
        *(ushort *)(param_3 + 0x41c) = CONCAT11(pbVar2[3],pbVar2[4]);
        *(undefined4 *)(param_3 + 0x996) = *(undefined4 *)(pbVar2 + 5);
        *(undefined2 *)(param_3 + 0x99a) = *(undefined2 *)(pbVar2 + 9);
        *(uint *)(param_3 + 0x404) = (uint)CONCAT11(pbVar2[0xb],pbVar2[0xc]);
        if (*(code **)(param_3 + 0xa6c) != (code *)0x0) {
          (**(code **)(param_3 + 0xa6c))
                    (0,uVar18,0x100,*(undefined4 *)(param_3 + 0x98c),0xd,
                     *(undefined4 *)(param_3 + 0xa64));
        }
        if (((*(int *)(param_3 + 0xa30) != 0) || (*(int *)(param_3 + 0x400) == 0x15)) ||
           (*_Dst == *(uint *)(param_3 + 0xc))) {
          if (*(int *)(param_3 + 0xc) == 0x1ffff) {
            uVar18 = 0xfe;
          }
          else {
            uVar18 = *(int *)(param_3 + 0xc) >> 8;
          }
          if (((bVar1 == uVar18) && (*(uint *)(param_3 + 0x404) < 0x4541)) &&
             (*(uint *)(param_3 + 0x404) <= *(int *)(param_3 + 0x9c4) + 0x140U)) goto LAB_00d37414;
        }
        goto LAB_00d37676;
      }
      *(undefined4 *)(param_3 + 0x990) = 0;
      goto LAB_00d372c0;
    }
LAB_00d37414:
    uVar18 = *(uint *)(param_3 + 0x404);
    if ((uVar18 <= *(int *)(param_3 + 0x990) - 0xdU) ||
       ((iVar12 = (**(code **)(*(int *)(param_3 + 0xa7c) + 0x10))
                            (param_3,uVar18,uVar18,1,1,&stack0x00000000), 0 < iVar12 &&
        (unaff_retaddr == uVar18)))) {
      *(undefined4 *)(param_3 + 0x988) = 0xf0;
      bVar11 = false;
      if (*(ushort *)(param_3 + 0x41c) == *(ushort *)(param_3 + 0x20)) {
        iVar12 = 0xa40;
LAB_00d374a8:
        puVar17 = (uint *)(param_3 + iVar12);
        if (puVar17 != (uint *)0x0) {
          iVar12 = func_0x00d37d60(param_3 + 0x994,puVar17 + 2);
          if (iVar12 < 1) {
            uVar18 = -iVar12;
            if (uVar18 < 0x40) {
              uVar16 = 1 << (uVar18 & 0x1f);
              uVar13 = 0;
              if (0x1f < uVar18) {
                uVar13 = uVar16;
              }
              uVar16 = uVar16 ^ uVar13;
              if (0x3f < uVar18) {
                uVar13 = uVar16;
              }
              if ((uVar16 & *puVar17) == 0 && (uVar13 & puVar17[1]) == 0) goto LAB_00d374fd;
            }
          }
          else {
LAB_00d374fd:
            func_0x00d34bf0(_Dst,param_3 + 0x994);
            if (*(int *)(param_3 + 0x404) == 0) goto LAB_00d372c0;
            if (bVar11) {
              if (*(int *)(param_3 + 0xa60) != 0) {
                uVar3 = *(undefined4 *)(param_3 + 0xa38);
                uVar18 = func_0x00d115f0(uVar3);
                if (uVar18 < 100) {
                  puVar14 = (undefined4 *)
                            FUN_00bbc4f0(0x50,"ssl\\record\\methods\\dtls_meth.c",0x123);
                  iVar12 = func_0x00d11430(param_3 + 0x41e,puVar14);
                  if ((puVar14 == (undefined4 *)0x0) || (iVar12 == 0)) {
                    FUN_00bbc580(puVar14,"ssl\\record\\methods\\dtls_meth.c",0x126);
                    func_0x00d11410(iVar12);
                    FUN_00bc4f50();
                    func_0x00bc5050("ssl\\record\\methods\\dtls_meth.c",0x128,
                                    "dtls_rlayer_buffer_record");
                    func_0x00d34a80(param_3,0x50,0xc0103,0);
                    return -2;
                  }
                  *puVar14 = *(undefined4 *)(param_3 + 0x98c);
                  puVar14[1] = *(undefined4 *)(param_3 + 0x990);
                  uVar6 = *(undefined4 *)(param_3 + 0x3e4);
                  uVar7 = *(undefined4 *)(param_3 + 1000);
                  uVar8 = *(undefined4 *)(param_3 + 0x3ec);
                  puVar14[2] = *(undefined4 *)(param_3 + 0x3e0);
                  puVar14[3] = uVar6;
                  puVar14[4] = uVar7;
                  puVar14[5] = uVar8;
                  *(undefined8 *)(puVar14 + 6) = *(undefined8 *)(param_3 + 0x3f0);
                  puVar14[8] = *(undefined4 *)(param_3 + 0x3f8);
                  uVar6 = *(undefined4 *)(param_3 + 0x400);
                  uVar7 = *(undefined4 *)(param_3 + 0x404);
                  uVar8 = *(undefined4 *)(param_3 + 0x408);
                  puVar14[9] = *_Dst;
                  puVar14[10] = uVar6;
                  puVar14[0xb] = uVar7;
                  puVar14[0xc] = uVar8;
                  uVar6 = *(undefined4 *)(param_3 + 0x410);
                  uVar7 = *(undefined4 *)(param_3 + 0x414);
                  uVar8 = *(undefined4 *)(param_3 + 0x418);
                  puVar14[0xd] = *(undefined4 *)(param_3 + 0x40c);
                  puVar14[0xe] = uVar6;
                  puVar14[0xf] = uVar7;
                  puVar14[0x10] = uVar8;
                  *(undefined8 *)(puVar14 + 0x11) = *(undefined8 *)(param_3 + 0x41c);
                  puVar14[0x13] = *(undefined4 *)(param_3 + 0x424);
                  *(undefined4 **)(iVar12 + 8) = puVar14;
                  *(undefined4 *)(param_3 + 0x98c) = 0;
                  *(undefined4 *)(param_3 + 0x990) = 0;
                  *(undefined4 *)(param_3 + 0x3e0) = 0;
                  *(undefined4 *)(param_3 + 0x3e4) = 0;
                  *(undefined4 *)(param_3 + 1000) = 0;
                  *(undefined4 *)(param_3 + 0x3ec) = 0;
                  *(undefined8 *)(param_3 + 0x3f0) = 0;
                  *(undefined4 *)(param_3 + 0x3f8) = 0;
                  memset(_Dst,0,0x2c);
                  iVar15 = func_0x00d36810(param_3);
                  if (iVar15 == 0) {
                    FUN_00bbc580(puVar14[2],"ssl\\record\\methods\\dtls_meth.c",0x13a);
                    FUN_00bbc580(puVar14,"ssl\\record\\methods\\dtls_meth.c",0x13b);
                    func_0x00d11410(iVar12);
                    return -2;
                  }
                  iVar15 = func_0x00d114f0(uVar3,iVar12);
                  if (iVar15 == 0) {
                    FUN_00bbc580(puVar14[2],"ssl\\record\\methods\\dtls_meth.c",0x142);
                    FUN_00bbc580(puVar14,"ssl\\record\\methods\\dtls_meth.c",0x143);
                    func_0x00d11410(iVar12);
                  }
                }
              }
            }
            else {
              iVar12 = func_0x00d37940(param_3,puVar17);
              if (iVar12 != 0) {
                pcVar4 = *(code **)(*(int *)(param_3 + 0xa7c) + 0x1c);
                if ((pcVar4 != (code *)0x0) && (iVar12 = (*pcVar4)(param_3,_Dst), iVar12 == 0)) {
                  return -2;
                }
                goto LAB_00d377e9;
              }
              if (*(int *)(param_3 + 0x99c) != -1) {
                return -2;
              }
            }
          }
LAB_00d37676:
          *(undefined4 *)(param_3 + 0x404) = 0;
          *(undefined4 *)(param_3 + 0x990) = 0;
          goto LAB_00d372c0;
        }
      }
      else if ((uint)*(ushort *)(param_3 + 0x41c) == *(ushort *)(param_3 + 0x20) + 1) {
        bVar11 = true;
        iVar12 = 0xa50;
        goto LAB_00d374a8;
      }
      *(undefined4 *)(param_3 + 0x404) = 0;
      *(undefined4 *)(param_3 + 0x990) = 0;
      goto LAB_00d372c0;
    }
    if (*(int *)(param_3 + 0x99c) != -1) {
      return -2;
    }
    *(undefined4 *)(param_3 + 0x404) = 0;
    *(int *)(param_3 + 0x990) = 0;
  } while( true );
}



void FUN_00d37800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00d36380(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return;
  }
  FUN_00d33f80(param_1);
  return;
}



undefined4
FUN_00d37830(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  *param_5 = 0;
  iVar2 = *(int *)(param_3 + 0xc) + 0x400;
  if (*(int *)(param_1 + 0x9bc) == 0) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  iVar1 = func_0x00bfae30(param_2,param_4,0,1);
  if (iVar1 != 0) {
    iVar1 = func_0x00bfae30(param_2,*(undefined4 *)(param_3 + 4),0,2);
    if (iVar1 != 0) {
      iVar1 = func_0x00bfae30(param_2,*(undefined2 *)(param_1 + 0x20),0,2);
      if (iVar1 != 0) {
        iVar1 = func_0x00bfad90(param_2,param_1 + 0x996,6);
        if (iVar1 != 0) {
          iVar1 = func_0x00bfb0a0(param_2,2);
          if (iVar1 != 0) {
            if (*(int *)(param_1 + 0x9b4) != 0) {
              iVar1 = func_0x00bfa8b0(param_2,*(int *)(param_1 + 0x9b4),0);
              if (iVar1 == 0) goto LAB_00d37901;
            }
            if (iVar2 != 0) {
              iVar2 = func_0x00bfaf10(param_2,iVar2,param_5);
              if (iVar2 == 0) goto LAB_00d37901;
            }
            return 1;
          }
        }
      }
    }
  }
LAB_00d37901:
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\record\\methods\\dtls_meth.c",0x2cc,"dtls_prepare_record_header");
  func_0x00d34a80(param_1,0x50,0xc0103,0);
  return 0;
}



void FUN_00d38fd0(void)

{
  int iVar1;
  int in_stack_00000048;
  
  func_0x00e87f70();
  if (((*(int *)(in_stack_00000048 + 0x1c) == 0) &&
      ((*(uint *)(in_stack_00000048 + 0x484) & 0x200) != 0)) &&
     (((*(uint *)(in_stack_00000048 + 0x480) >> 0x19 & 1) == 0 ||
      (*(char *)(in_stack_00000048 + 0x2f8) != '\0')))) {
    iVar1 = func_0x00d52410(&stack0x00000000);
    *(int *)(in_stack_00000048 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      *(uint *)(in_stack_00000048 + 0x484) = *(uint *)(in_stack_00000048 + 0x484) & 0xfffffdff;
    }
  }
  FUN_008ab370();
  return;
}



void thunk_FUN_00d38fd0(void)

{
  int iVar1;
  int in_stack_00000048;
  
  func_0x00e87f70();
  if (((*(int *)(in_stack_00000048 + 0x1c) == 0) &&
      ((*(uint *)(in_stack_00000048 + 0x484) & 0x200) != 0)) &&
     (((*(uint *)(in_stack_00000048 + 0x480) >> 0x19 & 1) == 0 ||
      (*(char *)(in_stack_00000048 + 0x2f8) != '\0')))) {
    iVar1 = func_0x00d52410(&stack0x00000000);
    *(int *)(in_stack_00000048 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      *(uint *)(in_stack_00000048 + 0x484) = *(uint *)(in_stack_00000048 + 0x484) & 0xfffffdff;
    }
  }
  FUN_008ab370();
  return;
}



undefined4
FUN_00d398f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x00e87f70();
  iVar1 = param_5;
  uVar5 = 0;
  param_1 = 0;
  uVar4 = *(uint *)(param_5 + 0x480);
  if ((uVar4 & 0xe0000) != 0) {
    do {
      if (uVar5 != 2) {
        switch(uVar5) {
        case 0:
          iVar2 = 0x2ec;
          break;
        case 1:
          iVar2 = 0x2f0;
          break;
        default:
          iVar2 = 0x2f4;
        }
        param_5 = 0;
        if ((*(int *)(iVar2 + iVar1) != 0) &&
           ((iVar2 = func_0x00d3eae0(*(int *)(iVar2 + iVar1),&param_5,&stack0x00000000), iVar2 == 0
            || (param_5 != 0)))) {
          func_0x00d3c810(iVar1,10,0,6,0,"crypto stream data in wrong EL",0,
                          "ssl\\quic\\quic_channel.c",0x396,"ch_on_crypto_recv_record");
          return 0;
        }
      }
      uVar4 = *(uint *)(iVar1 + 0x480);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar4 >> 0x11 & 7));
  }
  switch(uVar4 >> 0x11 & 7) {
  case 0:
    iVar2 = 0x2ec;
    break;
  case 1:
    iVar2 = 0x2f0;
    break;
  default:
    iVar2 = 0x2f4;
  }
  if (*(int *)(iVar2 + iVar1) == 0) {
    return 0;
  }
  uVar3 = func_0x00d3ec20(*(int *)(iVar2 + iVar1),param_3,param_4,&param_1);
  return uVar3;
}



void FUN_00d39a30(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  
  func_0x00e87f70();
  switch(*(uint *)(in_stack_0000002c + 0x480) >> 0x11 & 7) {
  case 0:
    iVar1 = 0x2ec;
    iVar2 = 0xc0;
    break;
  case 1:
    iVar1 = 0x2f0;
    iVar2 = 0x110;
    break;
  default:
    iVar2 = 0x160;
    iVar1 = 0x2f4;
  }
  iVar1 = *(int *)(iVar1 + in_stack_0000002c);
  if (iVar1 != 0) {
    func_0x00d38580(in_stack_0000002c + 0x298,&stack0x00000000);
    iVar2 = func_0x00d3d6c0(iVar2 + in_stack_0000002c,in_stack_00000028,0,unaff_retaddr,param_1);
    if (iVar2 != 0) {
      func_0x00d3ef80(iVar1,in_stack_00000028);
      FUN_008ab370();
      return;
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00d39b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  switch(*(uint *)(param_4 + 0x480) >> 0xe & 7) {
  case 0:
    iVar1 = 0x2e0;
    break;
  case 1:
    iVar1 = 0x2e4;
    break;
  default:
    iVar1 = 0x2e8;
  }
  if (*(int *)(iVar1 + param_4) == 0) {
    return;
  }
  func_0x00d3deb0(*(int *)(iVar1 + param_4),param_1,param_2,param_3);
  return;
}



undefined4 FUN_00d39b60(int param_1,byte param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_2 == 10) {
    if ((*(uint *)(param_1 + 0x480) & 0x200) != 0) {
      iVar1 = func_0x00d615c0(*(undefined4 *)(param_1 + 0xc));
      if (iVar1 != 0) {
        iVar1 = 10;
        pcVar2 = "Post-handshake TLS CertificateRequest received";
        uVar3 = 0x432;
        goto LAB_00d39bde;
      }
    }
  }
  else if ((param_2 == 0x2f) && ((*(uint *)(param_1 + 0x480) & 0x200) != 0)) {
    iVar1 = func_0x00d61590(*(undefined4 *)(param_1 + 0xc));
    if (iVar1 != 0) {
      iVar1 = 10;
      pcVar2 = "Bad max_early_data received";
      uVar3 = 0x440;
      goto LAB_00d39bde;
    }
  }
  pcVar2 = "handshake alert";
  iVar1 = param_2 + 0x100;
  uVar3 = 0x445;
LAB_00d39bde:
  func_0x00d3c810(param_1,iVar1,0,0,0,pcVar2,0,"ssl\\quic\\quic_channel.c",uVar3,
                  "ch_on_handshake_alert");
  return 1;
}



undefined4 FUN_00d39c10(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x480);
  if (((uVar1 & 0x200) == 0) && ((uVar1 & 0x1c000) == 0xc000)) {
    if ((char)uVar1 < '\0') {
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x20),"ssl\\quic\\quic_channel.c",0x40a);
      *(undefined4 *)(param_1 + 0x20) = 0;
      func_0x00d5c460(*(undefined4 *)(param_1 + 0x2d0));
      func_0x00d5e500(*(undefined4 *)(param_1 + 0x40));
      uVar1 = *(uint *)(param_1 + 0x480);
      *(uint *)(param_1 + 0x480) = uVar1 | 0x200;
      if ((uVar1 & 0x2000000) != 0) {
        if ((uVar1 & 0x400) == 0) {
          func_0x00d389e0(param_1,1);
          uVar1 = *(uint *)(param_1 + 0x480);
          *(uint *)(param_1 + 0x480) = uVar1 | 0x400;
          func_0x00d3ace0(param_1,uVar1 & 7);
          func_0x00d5a290(*(undefined4 *)(param_1 + 0x2c8));
        }
        func_0x00d5e630(*(undefined4 *)(param_1 + 0x40));
      }
      func_0x00d3ace0(param_1,*(uint *)(param_1 + 0x480) & 7);
      return 1;
    }
    func_0x00d3c810(param_1,0x16d,0,6,0,"no transport parameters received",0,
                    "ssl\\quic\\quic_channel.c",0x405,"ch_on_handshake_complete");
  }
  return 0;
}



undefined4
FUN_00d39d10(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = param_7;
  uVar1 = param_1;
  if (param_1 - 1 < 3) {
    if (param_2 == 0) {
      if ((*(uint *)(param_7 + 0x480) >> 0x11 & 7) < param_1) {
        uVar4 = 0;
        if (param_1 != 0) {
          do {
            switch(uVar4) {
            case 0:
              iVar3 = 0x2ec;
              break;
            case 1:
              iVar3 = 0x2f0;
              break;
            default:
              iVar3 = 0x2f4;
            }
            param_1 = 0;
            param_7 = 0;
            if ((*(int *)(iVar3 + iVar2) != 0) &&
               ((iVar3 = func_0x00d3eae0(*(int *)(iVar3 + iVar2),&param_1,&param_7), iVar3 == 0 ||
                (param_1 != 0)))) {
              func_0x00d3c810(iVar2,10,0,6,0,"crypto stream data in wrong EL",0,
                              "ssl\\quic\\quic_channel.c",0x3e4,"ch_on_handshake_yield_secret");
              return 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
        iVar3 = func_0x00d5c780(*(undefined4 *)(iVar2 + 0x2d0),uVar1,param_3,param_4,param_5,param_6
                               );
        if (iVar3 != 0) {
          uVar4 = *(uint *)(iVar2 + 0x480) | 0x4000000;
          *(uint *)(iVar2 + 0x480) = (uVar1 << 0x11 ^ uVar4) & 0xe0000 ^ uVar4;
          return 1;
        }
      }
    }
    else if (((*(uint *)(param_7 + 0x480) >> 0xe & 7) < param_1) &&
            (iVar3 = func_0x00d53700(*(undefined4 *)(param_7 + 0x2cc),param_1,param_3,param_4,
                                     param_5,param_6), iVar3 != 0)) {
      *(uint *)(iVar2 + 0x480) =
           (uVar1 << 0xe ^ *(uint *)(iVar2 + 0x480)) & 0x1c000 ^ *(uint *)(iVar2 + 0x480);
      return 1;
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00d3a901)
// WARNING: Removing unreachable block (ram,0x00d3a8a0)
// WARNING: Removing unreachable block (ram,0x00d3a8a7)
// WARNING: Removing unreachable block (ram,0x00d3a8ab)
// WARNING: Removing unreachable block (ram,0x00d3a93f)
// WARNING: Removing unreachable block (ram,0x00d3a6bb)
// WARNING: Removing unreachable block (ram,0x00d3a6cc)
// WARNING: Removing unreachable block (ram,0x00d3a8b5)
// WARNING: Removing unreachable block (ram,0x00d3aba3)
// WARNING: Removing unreachable block (ram,0x00d3a8ea)
// WARNING: Removing unreachable block (ram,0x00d3a963)
// WARNING: Removing unreachable block (ram,0x00d3a97c)
// WARNING: Removing unreachable block (ram,0x00d3a983)
// WARNING: Removing unreachable block (ram,0x00d3a99d)
// WARNING: Removing unreachable block (ram,0x00d3a9a4)
// WARNING: Removing unreachable block (ram,0x00d3a9be)
// WARNING: Removing unreachable block (ram,0x00d3a9c5)
// WARNING: Removing unreachable block (ram,0x00d3a9df)
// WARNING: Removing unreachable block (ram,0x00d3a9e7)
// WARNING: Removing unreachable block (ram,0x00d3aa01)
// WARNING: Removing unreachable block (ram,0x00d3aa09)
// WARNING: Removing unreachable block (ram,0x00d3aa23)
// WARNING: Removing unreachable block (ram,0x00d3aa2a)
// WARNING: Removing unreachable block (ram,0x00d3aa42)
// WARNING: Removing unreachable block (ram,0x00d3aa49)
// WARNING: Removing unreachable block (ram,0x00d3aa63)
// WARNING: Removing unreachable block (ram,0x00d3aa6a)
// WARNING: Removing unreachable block (ram,0x00d3aa84)
// WARNING: Removing unreachable block (ram,0x00d3aa8b)
// WARNING: Removing unreachable block (ram,0x00d3aaa3)
// WARNING: Removing unreachable block (ram,0x00d3aaaa)
// WARNING: Removing unreachable block (ram,0x00d3aac4)
// WARNING: Removing unreachable block (ram,0x00d3aacb)
// WARNING: Removing unreachable block (ram,0x00d3aae0)
// WARNING: Removing unreachable block (ram,0x00d3aaeb)
// WARNING: Removing unreachable block (ram,0x00d3ab89)
// WARNING: Removing unreachable block (ram,0x00d3abab)
// WARNING: Removing unreachable block (ram,0x00d3abb2)
// WARNING: Removing unreachable block (ram,0x00d3abb9)
// WARNING: Removing unreachable block (ram,0x00d3abbd)
// WARNING: Removing unreachable block (ram,0x00d3abc1)
// WARNING: Removing unreachable block (ram,0x00d3abd6)
// WARNING: Removing unreachable block (ram,0x00d3abe2)
// WARNING: Removing unreachable block (ram,0x00d3ac0b)
// WARNING: Removing unreachable block (ram,0x00d3abef)

void FUN_00d39ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
                 undefined4 param_25)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined2 in_stack_00000084;
  undefined1 in_stack_000000ac;
  uint in_stack_000000c4;
  undefined4 in_stack_000000cc;
  uint in_stack_000000d0;
  int in_stack_000000d4;
  undefined4 uVar4;
  undefined4 uVar5;
  
  func_0x00e87f70();
  iVar1 = in_stack_000000d4;
  in_stack_000000c4 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_11 = 0;
  pcVar3 = "bad transport parameter";
  param_22 = 0;
  param_9 = 0;
  param_12 = 0;
  param_10 = 0;
  param_13 = 0;
  param_8 = 0;
  param_7 = 0;
  param_19 = 0;
  param_20 = 0;
  param_14 = 0;
  param_15 = 0;
  param_16 = 0;
  param_17 = 0;
  param_18 = 0;
  param_21 = 0;
  param_5 = 0;
  param_25 = 0;
  if ((*(byte *)(in_stack_000000d4 + 0x480) & 0x80) == 0) {
    if (0x7fffffff < in_stack_000000d0) {
      uVar5 = 0x4ad;
      pcVar3 = "internal error (packet buf init)";
      uVar4 = 1;
      goto LAB_00d3ac31;
    }
    param_3 = in_stack_000000cc;
    param_4 = in_stack_000000d0;
    if (in_stack_000000d0 != 0) {
      param_23 = 0;
      param_24 = 0;
      do {
        iVar2 = func_0x00d565a0(&param_3,&param_5);
        if (iVar2 == 0) goto LAB_00d3ac17;
        if ((param_5._4_4_ == 0) && ((uint)param_5 < 0x11)) {
                    // WARNING: Could not recover jumptable at 0x00d3a004. Too many branches
                    // WARNING: Treating indirect jump as call
          (*(code *)(&PTR_LAB_00d3ac58)[(uint)param_5])();
          return;
        }
        iVar2 = func_0x00d55910(&param_3,&param_5,&param_6);
        if (iVar2 == 0) goto LAB_00d3ac17;
      } while (param_4 != 0);
    }
    pcVar3 = "INITIAL_SCID was not sent but is required";
  }
  else {
    pcVar3 = "multiple transport parameter extensions";
  }
LAB_00d3ac17:
  uVar5 = 0x69f;
  uVar4 = 8;
LAB_00d3ac31:
  func_0x00d3c810(iVar1,uVar4,0,0,0,pcVar3,0,"ssl\\quic\\quic_channel.c",uVar5,
                  "ch_on_transport_params");
  FUN_008ab370();
  return;
}



void FUN_00d3aca0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 == 2) && ((*(byte *)(param_3 + 0x484) & 4) != 0)) &&
     (iVar1 = func_0x00d54690(param_1,*(undefined4 *)(param_3 + 0x478),
                              *(undefined4 *)(param_3 + 0x47c)), iVar1 != 0)) {
    *(uint *)(param_3 + 0x484) = *(uint *)(param_3 + 0x484) | 8;
  }
  return;
}



void FUN_00d3bcc0(undefined4 param_1,int param_2)

{
  func_0x00d3ff60(param_2 + 0x250,param_1);
  return;
}



void FUN_00d3bce0(void *param_1)

{
  char *pcStack00000008;
  undefined4 uStack0000000c;
  
  uStack0000000c = 0xb92;
  pcStack00000008 = "ssl\\quic\\quic_channel.c";
  if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
                    // WARNING: Could not recover jumptable at 0x00bbc58c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)PTR_FUN_012b5b08)();
    return;
  }
  free(param_1);
  return;
}



void FUN_00d3bd00(void *param_1)

{
  char *pcStack00000008;
  undefined4 uStack0000000c;
  
  uStack0000000c = 0xa52;
  pcStack00000008 = "ssl\\quic\\quic_channel.c";
  if ((code *)PTR_FUN_012b5b08 != FUN_00bbc580) {
                    // WARNING: Could not recover jumptable at 0x00bbc58c. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)PTR_FUN_012b5b08)();
    return;
  }
  free(param_1);
  return;
}



undefined8 FUN_00d3bd20(int param_1,int param_2)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_2 + 0x3c8);
  }
  return *(undefined8 *)(param_2 + 0x3c0);
}



void FUN_00d3bd50(undefined4 *param_1)

{
  FUN_00d40a80(*param_1);
  return;
}



bool FUN_00d3d210(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = func_0x00d5a030(*(undefined4 *)(param_4 + 0x2c8),param_1,param_2,param_3);
  return iVar1 != 0;
}



// WARNING: Removing unreachable block (ram,0x00d3d2c4)

void FUN_00d3d240(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = param_3[0x120];
  if (((uVar1 & 0x400) != 0) && ((*(byte *)(param_3 + 0x121) & 4) == 0)) {
    uVar2 = func_0x00d59ec0(param_3[0xb2]);
    param_3[0x120] = param_3[0x120] & 0x7fffffff;
    param_3[0x121] = param_3[0x121] | 6;
    param_3[0x11e] = param_1;
    param_3[0x11f] = param_2;
    lVar3 = FUN_00d40a80(*param_3);
    if (CONCAT44(-1 - (int)((ulonglong)lVar3 >> 0x20),-1 - (int)lVar3) < uVar2) {
      lVar3 = -1;
    }
    else {
      lVar3 = uVar2 + lVar3;
    }
    param_3[0x121] = param_3[0x121] & 0xffffffef;
    *(longlong *)(param_3 + 0x11a) = lVar3;
    if (-1 < (int)uVar1) {
      func_0x00d3b870(param_3);
    }
    func_0x00d5e530(param_3[0x10],2);
    return;
  }
  func_0x00d3c810(param_3,0xe,0,0,0,"RX key update again too soon",0,"ssl\\quic\\quic_channel.c",
                  0x315,"rxku_detected");
  return;
}



void FUN_00d3d340(int param_1,undefined4 *param_2)

{
  if (((~(*(uint *)(param_1 + 0xd0) >> 1) & 1) != 0) && ((*(uint *)(param_1 + 0xd0) & 1) == 0)) {
    func_0x00d3d810(param_1 + 0x60,*param_2,param_2[1]);
  }
  return;
}



void FUN_00d3d370(int param_1,undefined4 *param_2)

{
  if (((~(*(uint *)(param_1 + 0xd0) >> 1) & 1) == 0) && ((*(uint *)(param_1 + 0xd0) & 1) == 0)) {
    func_0x00d3d810(param_1 + 0x60,*param_2,param_2[1]);
  }
  return;
}



void FUN_00d3f610(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xd1) == '\x02') || (*(char *)(param_1 + 0xd1) == '\x03')) {
    iVar1 = func_0x00d3e380(*(undefined4 *)(param_1 + 0x58));
    if ((iVar1 == 0) && (-1 < (char)*(uint *)(param_1 + 0xd4))) {
      *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x80;
      *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
    }
  }
  return;
}



undefined4 FUN_00d3f660(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_2 + 0x24);
  if (uVar1 <= uVar2) {
    if ((uVar1 < uVar2) || (*(uint *)(param_1 + 0x20) < *(uint *)(param_2 + 0x20))) {
      return 0xffffffff;
    }
    if ((uVar1 < uVar2) ||
       ((uVar1 <= uVar2 && (*(uint *)(param_1 + 0x20) <= *(uint *)(param_2 + 0x20))))) {
      return 0;
    }
  }
  return 1;
}



void FUN_00d40270(undefined4 param_1,undefined4 param_2)

{
  func_0x00d3fc90(param_2,param_1);
  return;
}



// WARNING: Removing unreachable block (ram,0x00d408b6)
// WARNING: Removing unreachable block (ram,0x00d408ec)

undefined4 FUN_00d40830(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *in_stack_00000014;
  
  func_0x00e87f70();
  uVar3 = func_0x00d3bd90(*in_stack_00000014);
  func_0x00bfa730(uVar3);
  uVar4 = func_0x00d3bdb0(*in_stack_00000014);
  iVar1 = in_stack_00000014[3];
  while (iVar1 == 0) {
    uVar5 = func_0x00d3d950(uVar4);
    if ((((code *)in_stack_00000014[5] != (code *)0x0) && (uVar5 != 0)) &&
       (uVar5 != 0xffffffffffffffff)) {
      uVar6 = (*(code *)in_stack_00000014[5])(in_stack_00000014[6]);
      if (uVar5 < uVar6) {
        lVar2 = 0;
      }
      else {
        lVar2 = uVar5 - uVar6;
      }
      uVar5 = FUN_00c44770();
      if (CONCAT44(~(uint)((ulonglong)lVar2 >> 0x20),~(uint)lVar2) < uVar5) {
        uVar5 = 0xffffffffffffffff;
      }
      else {
        uVar5 = uVar5 + lVar2;
      }
    }
    func_0x00bfa5c0(in_stack_00000014[1],uVar3,uVar5);
    if (in_stack_00000014[3] != 0) break;
    func_0x00d404b0(uVar4,1);
    iVar1 = in_stack_00000014[3];
  }
  func_0x00bfa770(uVar3);
  return 1;
}



void FUN_00d40a80(undefined4 *param_1)

{
  func_0x00d41460(*param_1);
  return;
}



void FUN_00d41230(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5,
                 int param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_00000068;
  int in_stack_0000006c;
  
  func_0x00e87f70();
  iVar3 = in_stack_00000068;
  iVar2 = in_stack_00000064;
  in_stack_0000005c = DAT_0128fd40 ^ (uint)&stack0x00000000;
  param_2 = in_stack_0000006c;
  param_1 = 0;
  if ((~*(uint *)(in_stack_00000068 + 0x3c) & 1) != 0) {
    pbVar1 = (byte *)(in_stack_00000064 + 0x70);
    if ((0x14 < *(uint *)(in_stack_00000064 + 8)) && ((*pbVar1 & 0x40) != 0)) {
      iVar5 = 0;
      iVar4 = func_0x00d589e0(*(undefined4 *)(in_stack_00000068 + 0x30),
                              pbVar1 + (*(uint *)(in_stack_00000064 + 8) - 0x10),0,&stack0x00000000,
                              0);
      while (iVar4 != 0) {
        func_0x00d3c760(0);
        iVar5 = iVar5 + 1;
        iVar4 = func_0x00d589e0(*(undefined4 *)(iVar3 + 0x30),pbVar1 + *(int *)(iVar2 + 8) + -0x10,
                                iVar5,&stack0x00000000,0);
      }
      if (iVar5 != 0) goto LAB_00d413c0;
    }
    if ((param_2 != 0) &&
       (iVar5 = func_0x00d58490(*(undefined4 *)(iVar3 + 0x2c),param_2,0,&param_1), iVar5 != 0)) {
      func_0x00d3be10(param_1,iVar2);
      FUN_008ab370();
      return;
    }
    if (((((*(int *)(iVar3 + 0x28) != 0) && (0x4af < *(uint *)(iVar2 + 8))) &&
         (iVar5 = func_0x00d2a410(&param_3,pbVar1,*(uint *)(iVar2 + 8)), iVar5 != 0)) &&
        ((iVar5 = func_0x00d50e00(&param_3,0xffffffff,1,0,&param_5,0), iVar5 != 0 && (param_6 == 1))
        )) && (param_5 == '\x01')) {
      if ((*(int *)(iVar3 + 0x28) != 0) &&
         (iVar5 = func_0x00d3c2a0(*(int *)(iVar3 + 0x28),iVar2 + 0x28,&stack0x00000031,
                                  &stack0x0000001c), iVar5 != 0)) {
        iVar5 = *(int *)(iVar3 + 0x28);
        *(undefined4 *)(iVar3 + 0x28) = 0;
        if (iVar5 != 0) {
          func_0x00d5c5a0(*(undefined4 *)(iVar5 + 0x2d0),iVar2);
          FUN_008ab370();
          return;
        }
      }
      goto LAB_00d413cc;
    }
  }
LAB_00d413c0:
  func_0x00d384f0(*(undefined4 *)(iVar3 + 0x18),iVar2);
LAB_00d413cc:
  FUN_008ab370();
  return;
}



void FUN_00d41520(void)

{
  int iVar1;
  char *in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  func_0x00e87f70();
  in_stack_00000018[0] = '\0';
  in_stack_00000018[1] = '\0';
  in_stack_00000018[8] = -1;
  in_stack_00000018[9] = -1;
  in_stack_00000018[10] = -1;
  in_stack_00000018[0xb] = -1;
  in_stack_00000018[0xc] = -1;
  in_stack_00000018[0xd] = -1;
  in_stack_00000018[0xe] = -1;
  in_stack_00000018[0xf] = -1;
  if ((*(byte *)(in_stack_0000001c + 0x4c) & 1) == 0) {
    for (iVar1 = *(int *)(in_stack_0000001c + 0x40); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      func_0x00d40f30(iVar1,&stack0x00000000,in_stack_00000020);
      *in_stack_00000018 = *in_stack_00000018 != '\0';
      in_stack_00000018[1] = in_stack_00000018[1] != '\0';
      in_stack_00000018[8] = '\0';
      in_stack_00000018[9] = '\0';
      in_stack_00000018[10] = '\0';
      in_stack_00000018[0xb] = '\0';
      in_stack_00000018[0xc] = '\0';
      in_stack_00000018[0xd] = '\0';
      in_stack_00000018[0xe] = '\0';
      in_stack_00000018[0xf] = '\0';
    }
  }
  FUN_008ab370();
  return;
}



undefined4 FUN_00d41970(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 0xffffffff;
  case 10:
    return 10;
  case 0x14:
    return 0x14;
  case 0x15:
    return 0x15;
  case 0x16:
    return 0x16;
  case 0x1e:
    return 0x1e;
  case 0x28:
  case 0x6d:
  case 0x74:
    return 0x28;
  case 0x2a:
    return 0x2a;
  case 0x2b:
    return 0x2b;
  case 0x2c:
    return 0x2c;
  case 0x2d:
    return 0x2d;
  case 0x2e:
    return 0x2e;
  case 0x2f:
    return 0x2f;
  case 0x30:
    return 0x30;
  case 0x31:
    return 0x31;
  case 0x32:
    return 0x32;
  case 0x33:
    return 0x33;
  case 0x3c:
    return 0x3c;
  case 0x46:
    return 0x46;
  case 0x47:
    return 0x47;
  case 0x50:
    return 0x50;
  case 0x56:
    return 0x56;
  case 0x5a:
    return 0x5a;
  case 100:
    return 100;
  case 0x6e:
    return 0x6e;
  case 0x6f:
    return 0x6f;
  case 0x70:
    return 0x70;
  case 0x71:
    return 0x71;
  case 0x72:
    return 0x72;
  case 0x73:
    return 0x73;
  case 0x78:
    return 0x78;
  }
}



bool FUN_00d41b50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int iStack00000008;
  undefined4 uStack0000000c;
  int in_stack_00000028;
  uint in_stack_0000002c;
  
  func_0x00e87f70();
  uVar14 = *(undefined4 *)(in_stack_00000028 + 600);
  uVar1 = *(undefined4 *)(in_stack_00000028 + 0x254);
  iVar9 = *(int *)(in_stack_00000028 + 0x250);
  uVar2 = *(undefined4 *)(in_stack_00000028 + 0x25c);
  uVar3 = *(undefined4 *)(in_stack_00000028 + 0x264);
  iVar4 = *(int *)(in_stack_00000028 + 0x260);
  iVar5 = FUN_00bc39e0(uVar1);
  iVar6 = func_0x00bc3c70(uVar1);
  if (iVar6 == 6) {
LAB_00d41bd2:
    iVar6 = 4;
  }
  else {
    iVar6 = func_0x00bc3c70(uVar1);
    if (iVar6 == 7) goto LAB_00d41bd2;
    iVar6 = func_0x00bc2520(uVar1);
    if (iVar6 < 0) {
      uVar14 = 0x93;
      goto LAB_00d41c35;
    }
  }
  if ((in_stack_0000002c == 0x12) || (in_stack_0000002c == 0x21)) {
    iVar13 = iVar4 * 2;
    iVar10 = iVar13 + iVar5 * 2;
    uVar11 = iVar10 + iVar6 * 2;
    iStack00000008 = iVar9;
  }
  else {
    iVar13 = iVar5 + iVar4 * 2;
    iVar10 = iVar13 + iVar5 + iVar6;
    uVar11 = iVar10 + iVar6;
    iStack00000008 = iVar4 + iVar9;
  }
  if (*(uint *)(in_stack_00000028 + 0x24c) < uVar11) {
    uVar14 = 0xaa;
LAB_00d41c35:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\t1_enc.c",uVar14,"tls1_change_cipher_state");
    func_0x00d06d50(in_stack_00000028,0x50,0xc0103,0);
    return false;
  }
  iVar7 = func_0x00bc3c70(uVar1);
  if (iVar7 != 6) {
    if (iVar7 == 7) {
      iVar7 = (-(uint)((*(uint *)(*(int *)(in_stack_00000028 + 0x234) + 0x18) & 0x30000) != 0) &
              0xfffffff8) + 0x10;
      goto LAB_00d41cb3;
    }
    iVar7 = func_0x00bc3ef0(uVar1,"CHACHA20-POLY1305");
    if (iVar7 == 0) {
      iVar7 = *(int *)(in_stack_00000028 + 0x260);
      goto LAB_00d41cb3;
    }
  }
  iVar7 = 0x10;
LAB_00d41cb3:
  uVar11 = *(uint *)(in_stack_00000028 + 0xb4);
  if ((in_stack_0000002c & 1) == 0) {
    uStack0000000c = 1;
    uVar12 = uVar11 | 0x400;
    if (*(int *)(in_stack_00000028 + 0x850) == 0) {
      uVar12 = uVar11 & 0xfffffbff;
    }
    *(uint *)(in_stack_00000028 + 0xb4) = uVar12;
    uVar11 = *(uint *)(in_stack_00000028 + 0x3a8) | 2;
    if ((*(uint *)(*(int *)(in_stack_00000028 + 0x234) + 0x34) & 0x10000) == 0) {
      uVar11 = *(uint *)(in_stack_00000028 + 0x3a8) & 0xfffffffd;
    }
    *(uint *)(in_stack_00000028 + 0x3a8) = uVar11;
    uVar12 = *(uint *)(*(int *)(in_stack_00000028 + 0x234) + 0x34);
    uVar8 = uVar11 & 0xfffffff7;
    uVar11 = uVar11 | 8;
  }
  else {
    uStack0000000c = 0;
    uVar12 = uVar11 | 0x100;
    if (*(int *)(in_stack_00000028 + 0x850) == 0) {
      uVar12 = uVar11 & 0xfffffeff;
    }
    *(uint *)(in_stack_00000028 + 0xb4) = uVar12;
    uVar11 = *(uint *)(in_stack_00000028 + 0x3a8) | 1;
    if ((*(uint *)(*(int *)(in_stack_00000028 + 0x234) + 0x34) & 0x10000) == 0) {
      uVar11 = *(uint *)(in_stack_00000028 + 0x3a8) & 0xfffffffe;
    }
    *(uint *)(in_stack_00000028 + 0x3a8) = uVar11;
    uVar12 = *(uint *)(*(int *)(in_stack_00000028 + 0x234) + 0x34);
    uVar8 = uVar11 & 0xfffffffb;
    uVar11 = uVar11 | 4;
  }
  if ((uVar12 & 0x20000) == 0) {
    uVar11 = uVar8;
  }
  *(uint *)(in_stack_00000028 + 0x3a8) = uVar11;
  if ((*(byte *)(*(int *)(*(int *)(in_stack_00000028 + 0xc) + 0x74) + 0x28) & 8) != 0) {
    func_0x00d28900(in_stack_00000028,in_stack_0000002c);
  }
  iVar9 = func_0x00d0d080(in_stack_00000028,*(undefined4 *)(in_stack_00000028 + 0x20),uStack0000000c
                          ,3,0,0,iVar13 + iVar9,iVar5,iVar10 + iVar9,iVar6,iStack00000008,iVar4,
                          uVar1,iVar7,uVar2,uVar14,uVar3,0);
  return iVar9 != 0;
}



undefined4
FUN_00d41e00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,void *param_5,
            size_t param_6,void *param_7,uint param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *_Dst;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  
  func_0x00e87f70();
  uVar12 = 0;
  if (0xffff < param_8) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\t1_enc.c",0x1b4,"tls1_export_keying_material");
    func_0x00bc5160(0x14,0x80106,0);
    return 0;
  }
  iVar9 = param_6 + 0x40;
  if (param_9 != 0) {
    iVar9 = param_6 + 0x42 + param_8;
  }
  _Dst = (int *)FUN_00bbc4f0(iVar9,"ssl\\t1_enc.c",0x1c2);
  if (_Dst != (int *)0x0) {
    memcpy(_Dst,param_5,param_6);
    uVar1 = *(undefined4 *)(param_2 + 0xdc);
    uVar2 = *(undefined4 *)(param_2 + 0xe0);
    uVar3 = *(undefined4 *)(param_2 + 0xe4);
    pcVar8 = (char *)((int)_Dst + param_6);
    *(undefined4 *)pcVar8 = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(pcVar8 + 4) = uVar1;
    *(undefined4 *)(pcVar8 + 8) = uVar2;
    *(undefined4 *)(pcVar8 + 0xc) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0xec);
    uVar2 = *(undefined4 *)(param_2 + 0xf0);
    uVar3 = *(undefined4 *)(param_2 + 0xf4);
    pcVar8 = (char *)((int)_Dst + param_6 + 0x10);
    *(undefined4 *)pcVar8 = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(pcVar8 + 4) = uVar1;
    *(undefined4 *)(pcVar8 + 8) = uVar2;
    *(undefined4 *)(pcVar8 + 0xc) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0xbc);
    uVar2 = *(undefined4 *)(param_2 + 0xc0);
    uVar3 = *(undefined4 *)(param_2 + 0xc4);
    pcVar8 = (char *)(param_6 + 0x20 + (int)_Dst);
    *(undefined4 *)pcVar8 = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)(pcVar8 + 4) = uVar1;
    *(undefined4 *)(pcVar8 + 8) = uVar2;
    *(undefined4 *)(pcVar8 + 0xc) = uVar3;
    uVar1 = *(undefined4 *)(param_2 + 0xcc);
    uVar2 = *(undefined4 *)(param_2 + 0xd0);
    uVar3 = *(undefined4 *)(param_2 + 0xd4);
    pcVar8 = (char *)(param_6 + 0x30 + (int)_Dst);
    *(undefined4 *)pcVar8 = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(pcVar8 + 4) = uVar1;
    *(undefined4 *)(pcVar8 + 8) = uVar2;
    *(undefined4 *)(pcVar8 + 0xc) = uVar3;
    if (param_9 != 0) {
      *(char *)(param_6 + 0x40 + (int)_Dst) = (char)(param_8 >> 8);
      *(char *)(param_6 + 0x41 + (int)_Dst) = (char)param_8;
      if ((param_8 != 0) || (param_7 != (void *)0x0)) {
        memcpy((char *)(param_6 + 0x42 + (int)_Dst),param_7,param_8);
      }
    }
    uVar10 = 0xb;
    piVar6 = _Dst;
    piVar4 = (int *)"client finished";
    do {
      piVar7 = piVar4;
      piVar5 = piVar6;
      if (*piVar5 != *piVar7) goto LAB_00d41f26;
      bVar11 = 3 < uVar10;
      uVar10 = uVar10 - 4;
      piVar6 = piVar5 + 1;
      piVar4 = piVar7 + 1;
    } while (bVar11);
    if (((short)piVar5[1] != (short)piVar7[1]) ||
       (*(char *)((int)piVar5 + 6) != *(char *)((int)piVar7 + 6))) {
LAB_00d41f26:
      uVar10 = 0xb;
      piVar6 = _Dst;
      piVar4 = (int *)"server finished";
      do {
        piVar7 = piVar4;
        piVar5 = piVar6;
        if (*piVar5 != *piVar7) goto LAB_00d41f53;
        bVar11 = 3 < uVar10;
        uVar10 = uVar10 - 4;
        piVar6 = piVar5 + 1;
        piVar4 = piVar7 + 1;
      } while (bVar11);
      if (((short)piVar5[1] != (short)piVar7[1]) ||
         (*(char *)((int)piVar5 + 6) != *(char *)((int)piVar7 + 6))) {
LAB_00d41f53:
        pcVar8 = "master secret";
        uVar10 = 9;
        piVar6 = _Dst;
        do {
          if (*piVar6 != *(int *)pcVar8) goto LAB_00d41f77;
          piVar6 = piVar6 + 1;
          pcVar8 = (char *)((int)pcVar8 + 4);
          bVar11 = 3 < uVar10;
          uVar10 = uVar10 - 4;
        } while (bVar11);
        if ((char)*piVar6 != (char)*(int *)pcVar8) {
LAB_00d41f77:
          pcVar8 = "extended master secret";
          uVar10 = 0x12;
          piVar6 = _Dst;
          do {
            if (*piVar6 != *(int *)pcVar8) goto LAB_00d41f9c;
            piVar6 = piVar6 + 1;
            pcVar8 = (char *)((int)pcVar8 + 4);
            bVar11 = 3 < uVar10;
            uVar10 = uVar10 - 4;
          } while (bVar11);
          if ((short)*piVar6 != (short)*(int *)pcVar8) {
LAB_00d41f9c:
            pcVar8 = "key expansion";
            uVar10 = 9;
            piVar6 = _Dst;
            do {
              if (*piVar6 != *(int *)pcVar8) goto LAB_00d41feb;
              piVar6 = piVar6 + 1;
              pcVar8 = (char *)((int)pcVar8 + 4);
              bVar11 = 3 < uVar10;
              uVar10 = uVar10 - 4;
            } while (bVar11);
            if ((char)*piVar6 != (char)*(int *)pcVar8) {
LAB_00d41feb:
              uVar12 = func_0x00d415f0(param_2,_Dst,iVar9,0,0,0,0,0,0,0,0,
                                       *(int *)(param_2 + 0x71c) + 0x48,
                                       *(undefined4 *)(*(int *)(param_2 + 0x71c) + 4),param_3,
                                       param_4,0);
              goto LAB_00d42025;
            }
          }
        }
      }
    }
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\t1_enc.c",0x1f7,"tls1_export_keying_material");
    func_0x00bc5160(0x14,0x16f,0);
  }
LAB_00d42025:
  FUN_00bbc6c0(_Dst,iVar9,"ssl\\t1_enc.c",0x1f9);
  return uVar12;
}



void FUN_00d42050(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  uint in_stack_00000044;
  int in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  
  func_0x00e87f70();
  uVar3 = in_stack_00000058;
  uVar2 = in_stack_00000050;
  iVar5 = in_stack_0000004c;
  in_stack_00000044 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  uVar1 = *(uint *)(*(int *)(in_stack_0000004c + 0x234) + 0x10);
  iVar4 = func_0x00d42750(in_stack_0000004c,0);
  if (iVar4 != 0) {
    iVar4 = func_0x00d034c0(iVar5,&stack0x00000004,0x40,&stack0x00000000);
    if (iVar4 != 0) {
      iVar5 = func_0x00d415f0(iVar5,uVar2,in_stack_00000054,&stack0x00000004,unaff_retaddr,0,0,0,0,0
                              ,0,*(int *)(iVar5 + 0x71c) + 0x48,
                              *(undefined4 *)(*(int *)(iVar5 + 0x71c) + 4),uVar3,
                              (-((uVar1 & 0x200) != 0) & 0x14U) + 0xc,1);
      if (iVar5 != 0) {
        func_0x00401320(&stack0x00000004,unaff_retaddr);
        FUN_008ab370();
        return;
      }
    }
  }
  FUN_008ab370();
  return;
}



void FUN_00d42130(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_retaddr;
  uint in_stack_00000084;
  int in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 *in_stack_0000009c;
  
  func_0x00e87f70();
  puVar3 = in_stack_0000009c;
  uVar2 = in_stack_00000094;
  uVar1 = in_stack_00000090;
  iVar5 = in_stack_0000008c;
  in_stack_00000084 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if ((*(byte *)(*(int *)(in_stack_0000008c + 0x71c) + 0x310) & 1) == 0) {
    iVar5 = func_0x00d415f0(in_stack_0000008c,"master secret",0xd,in_stack_0000008c + 0xd8,0x20,0,0,
                            in_stack_0000008c + 0xb8,0x20,0,0,in_stack_00000094,in_stack_00000098,
                            in_stack_00000090,0x30,1);
    if (iVar5 == 0) goto LAB_00d42201;
  }
  else {
    iVar4 = func_0x00d42750(in_stack_0000008c);
    if (((iVar4 == 0) ||
        (iVar4 = func_0x00d034c0(iVar5,&stack0x00000004,0x80,&stack0x00000000), iVar4 == 0)) ||
       (iVar5 = func_0x00d415f0(iVar5,"extended master secret",0x16,&stack0x00000004,unaff_retaddr,0
                                ,0,0,0,0,0,uVar2,in_stack_00000098,uVar1,0x30,1), iVar5 == 0))
    goto LAB_00d42201;
    func_0x00401320(&stack0x00000004,unaff_retaddr);
  }
  *puVar3 = 0x30;
LAB_00d42201:
  FUN_008ab370();
  return;
}



bool FUN_00d42260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x00e87f70();
  iVar3 = param_5;
  param_1 = 0;
  if (*(int *)(param_5 + 0x24c) != 0) {
    return true;
  }
  iVar1 = func_0x00d09c70(*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 0x71c),&param_5,
                          &param_2,&param_1,&stack0x00000000,&param_3,
                          *(undefined4 *)(param_5 + 0x850));
  if (iVar1 == 0) {
    func_0x00d06de0(iVar3,0x50);
    return false;
  }
  func_0x00d032c0(*(undefined4 *)(iVar3 + 0x254));
  *(int *)(iVar3 + 0x254) = param_5;
  func_0x00d03350(*(undefined4 *)(iVar3 + 600));
  iVar1 = param_5;
  *(undefined4 *)(iVar3 + 600) = param_2;
  *(undefined4 *)(iVar3 + 0x25c) = param_1;
  *(undefined4 *)(iVar3 + 0x260) = 0;
  iVar2 = func_0x00bc3c70(param_5);
  if ((iVar2 == 6) || (iVar2 = func_0x00bc3c70(iVar1), iVar2 == 7)) {
    iVar1 = 4;
  }
  else {
    iVar1 = func_0x00bc2520(iVar1);
    if (iVar1 < 0) {
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\t1_enc.c",0x11d,"tls1_setup_key_block");
      func_0x00d06d50(iVar3,0x50,0xc0103,0);
      return false;
    }
  }
  iVar2 = FUN_00bc39e0(param_5);
  iVar1 = (iVar1 + iVar2) * 2;
  func_0x00d42710(iVar3);
  iVar2 = FUN_00bbc4f0(iVar1,"ssl\\t1_enc.c",0x125);
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\t1_enc.c",0x126,"tls1_setup_key_block");
    func_0x00d06d50(iVar3,0x50,0x8000f,0);
    return false;
  }
  *(int *)(iVar3 + 0x24c) = iVar1;
  *(int *)(iVar3 + 0x250) = iVar2;
  iVar3 = func_0x00d415f0(iVar3,"key expansion",0xd,iVar3 + 0xb8,0x20,iVar3 + 0xd8,0x20,0,0,0,0,
                          *(int *)(iVar3 + 0x71c) + 0x48,
                          *(undefined4 *)(*(int *)(iVar3 + 0x71c) + 4),iVar2,iVar1,1);
  return iVar3 != 0;
}



undefined4 FUN_00d42450(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 0xffffffff;
  case 10:
    return 10;
  case 0x14:
  case 0x15:
  case 0x16:
    return 0x14;
  case 0x1e:
    return 0x1e;
  case 0x28:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x3c:
  case 0x46:
  case 0x47:
  case 0x50:
  case 0x5a:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x74:
    return 0x28;
  case 0x29:
    return 0x29;
  case 0x2a:
  case 0x30:
    return 0x2a;
  case 0x2b:
    return 0x2b;
  case 0x2c:
    return 0x2c;
  case 0x2d:
    return 0x2d;
  case 0x2e:
    return 0x2e;
  case 0x2f:
    return 0x2f;
  case 0x56:
    return 0x56;
  case 0x73:
    return 0x73;
  case 0x78:
    return 0x78;
  }
}



bool FUN_00d42590(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int in_stack_0000001c;
  uint in_stack_00000020;
  
  func_0x00e87f70();
  iVar6 = *(int *)(in_stack_0000001c + 600);
  uVar8 = *(undefined4 *)(in_stack_0000001c + 0x254);
  if (iVar6 == 0) {
    uVar8 = 0x6b;
  }
  else {
    uVar1 = *(undefined4 *)(in_stack_0000001c + 0x264);
    iVar2 = *(int *)(in_stack_0000001c + 0x250);
    iVar3 = func_0x00bc4320(iVar6);
    if (iVar3 < 1) {
      uVar8 = 0x75;
    }
    else {
      iVar4 = FUN_00bc39e0(uVar8);
      iVar5 = func_0x00bc2520(uVar8);
      if ((in_stack_00000020 == 0x12) || (in_stack_00000020 == 0x21)) {
        iStack00000010 = iVar3 * 2;
        iStack0000000c = iVar3 * 2 + iVar4 * 2;
        uVar7 = iStack0000000c + iVar5 * 2;
        iStack00000008 = iVar2;
      }
      else {
        iStack00000010 = iVar4 + iVar3 * 2;
        iStack0000000c = iStack00000010 + iVar4 + iVar5;
        uVar7 = iStack0000000c + iVar5;
        iStack00000008 = iVar3 + iVar2;
      }
      if (uVar7 <= *(uint *)(in_stack_0000001c + 0x24c)) {
        iVar6 = func_0x00d0d080(in_stack_0000001c,0x300,~in_stack_00000020 & 1,3,0,0,
                                iStack00000010 + iVar2,iVar4,iStack0000000c + iVar2,iVar5,
                                iStack00000008,iVar3,uVar8,0,0,iVar6,uVar1,0);
        return iVar6 != 0;
      }
      uVar8 = 0x8f;
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("ssl\\s3_enc.c",uVar8,"ssl3_change_cipher_state");
  func_0x00d06d50(in_stack_0000001c,0x50,0xc0103,0);
  return false;
}



void FUN_00d428c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 unaff_retaddr;
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
  uint in_stack_00000058;
  int in_stack_00000060;
  int in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  
  func_0x00e87f70();
  uVar6 = in_stack_0000006c;
  iVar5 = in_stack_00000064;
  iVar1 = in_stack_00000060;
  in_stack_00000058 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  if (*(int *)(in_stack_00000060 + 0xfc) == 0) {
    iVar2 = func_0x00baa730(*(undefined4 *)(in_stack_00000060 + 0xf8),3,0,&stack0x00000000);
    if (iVar2 < 1) {
      uVar7 = 0x14c;
      uVar6 = 0x119;
      goto LAB_00d42985;
    }
    iVar3 = func_0x00bd46b0();
    *(int *)(iVar1 + 0xfc) = iVar3;
    if (iVar3 == 0) {
      uVar7 = 0x80006;
      uVar6 = 0x11f;
      goto LAB_00d42985;
    }
    iVar3 = func_0x00d0b120(iVar1);
    if (iVar3 == 0) {
      uVar7 = 0x129;
      uVar6 = 0x126;
      goto LAB_00d42985;
    }
    iVar3 = func_0x00bd3dd0(*(undefined4 *)(iVar1 + 0xfc),iVar3,0);
    if (iVar3 != 0) {
      iVar2 = func_0x00bd3e10(*(undefined4 *)(iVar1 + 0xfc),unaff_retaddr,iVar2);
      if (iVar2 != 0) goto LAB_00d429bd;
    }
    uVar7 = 0xc0103;
    uVar6 = 299;
LAB_00d42985:
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_enc.c",uVar6,"ssl3_digest_cached_records");
    func_0x00d06d50(iVar1,0x50,uVar7,0);
    FUN_008ab370();
    return;
  }
LAB_00d429bd:
  func_0x00baa8e0(*(undefined4 *)(iVar1 + 0xf8));
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  uVar7 = func_0x00bc36d0(*(undefined4 *)(iVar1 + 0xfc));
  iVar2 = FUN_00bbba70(uVar7);
  if (iVar2 != 0x72) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_enc.c",0x14d,"ssl3_final_finish_mac");
    func_0x00d06d50(iVar1,0x50,0x144,0);
    FUN_008ab370();
    return;
  }
  iVar2 = func_0x00bd46b0();
  if (iVar2 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_enc.c",0x153,"ssl3_final_finish_mac");
    func_0x00d06d50(iVar1,0x50,0x80006,0);
    FUN_008ab370();
    return;
  }
  iVar3 = func_0x00bd3f40(iVar2,*(undefined4 *)(iVar1 + 0xfc));
  if (iVar3 == 0) {
    FUN_00bc4f50();
    uVar6 = 0x157;
  }
  else {
    iVar3 = func_0x00bc4130(iVar2);
    if (iVar3 < 0) {
      FUN_00bc4f50();
      uVar6 = 0x15e;
    }
    else {
      if (iVar5 == 0) goto LAB_00d42b72;
      puVar4 = (undefined4 *)
               func_0x00bbfaa0(&stack0x00000008,"ssl3-ms",*(int *)(iVar1 + 0x71c) + 0x48,
                               *(undefined4 *)(*(int *)(iVar1 + 0x71c) + 4));
      in_stack_0000001c = *puVar4;
      in_stack_00000020 = puVar4[1];
      in_stack_00000024 = puVar4[2];
      in_stack_00000028 = puVar4[3];
      in_stack_0000002c = puVar4[4];
      puVar4 = (undefined4 *)func_0x00bbfa10(&stack0x00000008);
      in_stack_00000030 = *puVar4;
      in_stack_00000034 = puVar4[1];
      in_stack_00000038 = puVar4[2];
      in_stack_0000003c = puVar4[3];
      in_stack_00000040 = puVar4[4];
      iVar5 = func_0x00bd3e10(iVar2,iVar5,in_stack_00000068);
      if (0 < iVar5) {
        iVar5 = func_0x00bd46e0(iVar2,&stack0x0000001c);
        if (0 < iVar5) {
          iVar5 = func_0x00bd3c80(iVar2,uVar6,0);
          if (0 < iVar5) goto LAB_00d42b72;
        }
      }
      FUN_00bc4f50();
      uVar6 = 0x16b;
    }
  }
  func_0x00bc5050("ssl\\s3_enc.c",uVar6,"ssl3_final_finish_mac");
  func_0x00d06d50(iVar1,0x50,0xc0103,0);
LAB_00d42b72:
  func_0x00bd45b0(iVar2);
  FUN_008ab370();
  return;
}



void FUN_00d42fb0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined **ppuVar9;
  int unaff_retaddr;
  int iStack00000004;
  int iStack00000008;
  uint in_stack_00000058;
  int in_stack_00000060;
  int in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  int *in_stack_00000070;
  
  func_0x00e87f70();
  piVar5 = in_stack_00000070;
  uVar4 = in_stack_00000068;
  iVar3 = in_stack_00000060;
  in_stack_00000058 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iStack00000004 = in_stack_00000064;
  iVar6 = func_0x00bd46b0();
  iStack00000008 = 0;
  if (iVar6 == 0) {
    FUN_00bc4f50();
    func_0x00bc5050("ssl\\s3_enc.c",0x18c,"ssl3_generate_master_secret");
    func_0x00d06d50(iVar3,0x50,0x80006,0);
    FUN_008ab370();
    return;
  }
  ppuVar9 = &PTR_DAT_010c687c;
  do {
    iVar7 = func_0x00bd3dd0(iVar6,*(undefined4 *)(*(int *)(iVar3 + 4) + 0xa4),0);
    if (iVar7 < 1) {
LAB_00d43181:
      FUN_00bc4f50();
      func_0x00bc5050("ssl\\s3_enc.c",0x19d,"ssl3_generate_master_secret");
      func_0x00d06d50(iVar3,0x50,0xc0103,0);
      func_0x00bd45b0(iVar6);
      func_0x00401320(&stack0x00000018,0x40);
      goto LAB_00d431c6;
    }
    pcVar2 = *ppuVar9;
    pcVar8 = pcVar2;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar7 = func_0x00bd3e10(iVar6,pcVar2,(int)pcVar8 - (int)(pcVar2 + 1));
    if (iVar7 < 1) goto LAB_00d43181;
    iVar7 = func_0x00bd3e10(iVar6,uVar4,in_stack_0000006c);
    if (iVar7 < 1) goto LAB_00d43181;
    iVar7 = func_0x00bd3e10(iVar6,iVar3 + 0xd8,0x20);
    if (iVar7 < 1) goto LAB_00d43181;
    iVar7 = func_0x00bd3e10(iVar6,iVar3 + 0xb8,0x20);
    if (iVar7 < 1) goto LAB_00d43181;
    iVar7 = func_0x00bd3c80(iVar6,&stack0x00000018,&stack0x00000000);
    if (iVar7 < 1) goto LAB_00d43181;
    iVar7 = func_0x00bd3dd0(iVar6,*(undefined4 *)(*(int *)(iVar3 + 4) + 0xa0),0);
    if (iVar7 < 1) goto LAB_00d43181;
    iVar7 = func_0x00bd3e10(iVar6,uVar4,in_stack_0000006c);
    if (iVar7 < 1) goto LAB_00d43181;
