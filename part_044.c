    "functions->texStorage2D(ToGLenum(type), static_cast<GLsizei>(levels), texStorageFormat.internalFormat, size.width, size.height)"
    ;
  }
  iVar6 = func_0x009f7360(iStack_18,pcVar15,
                          "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                          ,"rx::TextureGL::setStorage",uVar16);
  param_1 = iStack_18;
  if (iVar6 == 1) {
    return 1;
  }
LAB_00b60cb6:
  uVar7 = func_0x00b5d7b0(auStack_34,uVar17,iStack_68,uVar7);
  func_0x00b60280(param_1,uStack_14,0,uStack_10,uVar7);
  return 0;
}



undefined4 __thiscall
FUN_00b60d00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int unaff_EBP;
  undefined4 unaff_retaddr;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  uVar3 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar4 = func_0x00a01ed0(param_2);
  uVar10 = *(undefined4 *)(param_7 + 0x18);
  uVar5 = func_0x00946ea0(param_5);
  uVar3 = func_0x00acf250(uVar3,uVar4,param_5);
  uVar6 = (uint)**(byte **)(param_1 + 0x30);
  func_0x00ab6cf0(uVar6,*(undefined4 *)(param_1 + 0xa4));
  uStack_2c = CONCAT31((int3)((uint)uVar10 >> 8),**(undefined1 **)(param_1 + 0x30));
  cVar2 = func_0x00a04920(uStack_2c);
  if (cVar2 == '\0') {
    func_0x009f7d30(param_2,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::setStorageExternalMemory",0x551);
    pcVar1 = *(code **)(unaff_EBP + 0xaa4);
    uVar11 = FUN_004b5b10();
    uVar10 = param_4[2];
    uVar7 = param_4[1];
    uVar8 = *param_4;
    uVar12 = func_0x008bb080(unaff_retaddr);
    _guard_check_icall(uVar12,param_2,uVar3,uVar8,uVar7,uVar10,uVar11,param_6,param_7);
    (*pcVar1)();
    iVar9 = func_0x009f7360(uVar4,
                            "functions->texStorageMem3DEXT(ToGLenum(type), static_cast<GLsizei>(levels), texStorageFormat.internalFormat, size.width, size.height, size.depth, memoryObjectGL->getMemoryObjectID(), offset)"
                            ,
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::setStorageExternalMemory",0x551);
    uStack_24 = uVar4;
  }
  else {
    func_0x009f7d30(param_2,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::setStorageExternalMemory",0x548);
    pcVar1 = *(code **)(unaff_EBP + 0xa9c);
    uVar7 = FUN_004b5b10();
    uVar10 = param_4[1];
    uVar4 = *param_4;
    uVar8 = func_0x008bb080(unaff_retaddr);
    _guard_check_icall(uVar8,param_2,uVar3,uVar4,uVar10,uVar7,param_6,param_7);
    (*pcVar1)();
    iVar9 = func_0x009f7360(uStack_24,
                            "functions->texStorageMem2DEXT(ToGLenum(type), static_cast<GLsizei>(levels), texStorageFormat.internalFormat, size.width, size.height, memoryObjectGL->getMemoryObjectID(), offset)"
                            ,
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::setStorageExternalMemory",0x548);
  }
  if (iVar9 != 1) {
    uVar10 = func_0x00b5d7b0(&stack0xffffffc0,param_6,uVar6,uVar3);
    func_0x00b60280(uStack_24,uVar5,0,param_2,uVar10);
    return 0;
  }
  return 1;
}



undefined4 __thiscall
FUN_00b60f00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_EBP;
  undefined4 unaff_retaddr;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar4 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar5 = func_0x00a01ed0(param_2);
  uVar6 = func_0x00946ea0(param_5);
  uVar7 = func_0x00acf250(iVar4,uVar5,param_5);
  uVar5 = *(undefined4 *)(param_1 + 0xa4);
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30),uVar5);
  cVar3 = func_0x00a04920(**(undefined1 **)(unaff_EBP + 0x30));
  if (cVar3 == '\0') {
    func_0x009f7d30(param_2,
                    "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                    ,"rx::TextureGL::setStorageMultisample",0x51c);
    pcVar1 = *(code **)(iVar4 + 0x860);
    uVar6 = param_4[2];
    uVar10 = param_4[1];
    uVar2 = *param_4;
    uVar8 = func_0x008bb080(unaff_retaddr);
    _guard_check_icall(uVar8,param_2,uVar7,uVar2,uVar10,uVar6,param_5);
    (*pcVar1)();
    iVar4 = func_0x009f7360(uStack_20,
                            "functions->texStorage3DMultisample( ToGLenum(type), samples, texStorageFormat.internalFormat, size.width, size.height, size.depth, gl::ConvertToGLBoolean(fixedSampleLocations))"
                            ,
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::setStorageMultisample",0x51c);
    uVar6 = uStack_20;
  }
  else {
    if (*(int *)(iVar4 + 0x85c) == 0) {
      func_0x009f7d30(param_2,
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                      ,"rx::TextureGL::setStorageMultisample",0x513);
      pcVar1 = *(code **)(iVar4 + 0x504);
      uVar10 = param_4[1];
      uVar2 = *param_4;
      uVar8 = func_0x008bb080(unaff_retaddr);
      _guard_check_icall(uVar8,param_2,uVar7,uVar2,uVar10,param_5);
      (*pcVar1)();
      uVar10 = 0x513;
      pcVar9 = 
      "functions->texImage2DMultisample( ToGLenum(type), samples, texStorageFormat.internalFormat, size.width, size.height, gl::ConvertToGLBoolean(fixedSampleLocations))"
      ;
    }
    else {
      func_0x009f7d30(param_2,
                      "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                      ,"rx::TextureGL::setStorageMultisample",0x509);
      pcVar1 = *(code **)(iVar4 + 0x85c);
      uVar10 = param_4[1];
      uVar2 = *param_4;
      uVar8 = func_0x008bb080(unaff_retaddr);
      _guard_check_icall(uVar8,param_2,uVar7,uVar2,uVar10,param_5);
      (*pcVar1)();
      uVar10 = 0x509;
      pcVar9 = 
      "functions->texStorage2DMultisample( ToGLenum(type), samples, texStorageFormat.internalFormat, size.width, size.height, gl::ConvertToGLBoolean(fixedSampleLocations))"
      ;
    }
    iVar4 = func_0x009f7360(uVar6,pcVar9,
                            "C:\\Git\\otcv8_source\\vcpkg\\buildtrees\\angle\\src\\fb17168c17-ae4e4ce263.clean\\src\\libANGLE\\renderer\\gl\\TextureGL.cpp"
                            ,"rx::TextureGL::setStorageMultisample",uVar10);
  }
  if (iVar4 != 1) {
    uVar5 = func_0x00b5d7b0(&stack0xffffffc8,param_5,uVar5,uVar7);
    func_0x00b60280(uVar6,uStack_18,0,1,uVar5);
    return 0;
  }
  return 1;
}



// WARNING: Removing unreachable block (ram,0x00b61275)

undefined4 __thiscall
FUN_00b61120(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined8 uVar14;
  undefined4 *unaff_retaddr;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_8;
  
  uVar9 = func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  iVar10 = func_0x00a01ed0(param_2);
  func_0x008df8a0(param_3);
  uVar14 = func_0x00acf2e0(uStack_24,iVar10,param_4,param_5);
  uStack_1c = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_18 = (undefined4)uVar14;
  uVar7 = func_0x00967be0();
  iVar1 = *(int *)(param_3 + 4);
  iStack_2c = CONCAT31(iStack_2c._1_3_,uVar7);
  func_0x00ab6cf0(**(undefined1 **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4));
  if ((((*(char *)(iVar10 + 0xf0) != '\0') && (param_5 != 0)) && (*(int *)(param_4 + 4) != 0)) &&
     (*(int *)(param_4 + 4) < (int)unaff_retaddr[3])) {
    uVar9 = func_0x00b61780(iStack_8,unaff_EBP,iVar1,unaff_retaddr,param_2,param_3,param_4,param_5,0
                            ,param_6);
    return uVar9;
  }
  if (*(char *)(iVar1 + 0x168) != '\0') {
    uStack_18 = unaff_retaddr[3];
    uStack_14 = unaff_retaddr[4];
    uStack_10 = unaff_retaddr[5];
    uStack_1c._1_3_ = (undefined3)((ulonglong)uVar14 >> 0x28);
    uStack_1c = CONCAT31(uStack_1c._1_3_,**(undefined1 **)(param_1 + 0x30));
    uVar11 = func_0x00a04950(uStack_1c);
    iVar10 = func_0x00a03d90(*(undefined4 *)(iStack_8 + 0x1d14),&uStack_18,param_4,param_5,param_2,
                             param_3,uVar11,param_6,&stack0xffffffcb);
    if (iVar10 == 1) {
      return 1;
    }
  }
  if (*(char *)(iVar1 + 0x708) != '\0') {
    uVar9 = func_0x00b61780(iStack_8,unaff_EBP,unaff_EBX,unaff_retaddr,param_2,param_3,param_4,
                            param_5,0x1dfff,param_6);
    return uVar9;
  }
  uStack_1c = CONCAT31(uStack_1c._1_3_,**(undefined1 **)(param_1 + 0x30));
  cVar8 = func_0x00a04920(uStack_1c);
  if (cVar8 != '\0') {
    pcVar2 = *(code **)(iStack_2c + 0xf4);
    uVar11 = unaff_retaddr[4];
    uVar3 = unaff_retaddr[3];
    uVar4 = unaff_retaddr[1];
    uVar5 = *unaff_retaddr;
    uVar12 = func_0x00a023e0();
    _guard_check_icall(uVar12,unaff_EBX,uVar5,uVar4,uVar3,uVar11,uVar9,uStack_24,param_6);
    (*pcVar2)();
    return 0;
  }
  pcVar2 = *(code **)(iStack_2c + 0x10c);
  uVar11 = unaff_retaddr[5];
  uVar3 = unaff_retaddr[4];
  uVar4 = unaff_retaddr[3];
  uVar5 = unaff_retaddr[2];
  uVar12 = unaff_retaddr[1];
  uVar6 = *unaff_retaddr;
  uVar13 = func_0x008bafc0(unaff_EBP);
  _guard_check_icall(uVar13,unaff_EBX,uVar6,uVar12,uVar5,uVar4,uVar3,uVar11,uVar9,uStack_24,param_6)
  ;
  (*pcVar2)();
  return 0;
}



undefined4 __thiscall FUN_00b61c90(int param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  uint *unaff_retaddr;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_4;
  
  puVar1 = (uint *)(param_1 + 0x40);
  if ((*param_3 == 0) && (*puVar1 == 0)) {
    return 0;
  }
  func_0x00a01ee0(param_2);
  func_0x00a02140(param_2);
  uVar12 = *(undefined4 *)(param_1 + 0xa4);
  uVar7 = (uint)**(byte **)(param_1 + 0x30);
  func_0x00ab6cf0(uVar7,uVar12);
  uVar8 = *unaff_retaddr;
  uVar9 = *puVar1 | uVar8;
  if (((uVar8 >> 0x11 & 1) != 0) || ((uVar8 >> 0x12 & 1) != 0)) {
    uVar9 = uVar9 | 0x1e000;
  }
  if (uVar9 == 0) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *puStack_18 = 0;
    return 0;
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar6 = uVar9;
  iVar3 = param_1;
  if (uVar9 != 0) {
    for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  do {
    switch(uVar8) {
    case 0:
      FUN_00954f40(*(undefined4 *)(*(int *)(iStack_14 + 0x30) + 0x14));
      iVar4 = *(int *)(iVar3 + 0x58);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x2801;
      break;
    case 1:
      FUN_00954eb0(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x18));
      iVar4 = *(int *)(iVar3 + 0x5c);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x2800;
      break;
    case 2:
      FUN_00954fe0(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x1c));
      iVar4 = *(int *)(iVar3 + 0x60);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x2802;
      break;
    case 3:
      FUN_00955010(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x20));
      iVar4 = *(int *)(iVar3 + 100);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x2803;
      break;
    case 4:
      FUN_00954fc0(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x24));
      iVar4 = *(int *)(iVar3 + 0x68);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x8072;
      break;
    case 5:
      FUN_00954ee0(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x28));
      pcVar10 = *(code **)(param_1 + 0xf0);
      iVar4 = *(int *)(iStack_14 + 0x6c);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x84fe;
      break;
    case 6:
      FUN_00954f70(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x2c));
      pcVar10 = *(code **)(param_1 + 0xf0);
      iVar4 = *(int *)(iStack_14 + 0x70);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x813a;
      break;
    case 7:
      FUN_00954f10(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x30));
      pcVar10 = *(code **)(param_1 + 0xf0);
      iVar4 = *(int *)(iStack_14 + 0x74);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x813b;
      break;
    case 8:
      FUN_009547a0(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x34));
      iVar4 = *(int *)(iVar3 + 0x78);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x884c;
      break;
    case 9:
      FUN_00954780(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x38));
      iVar4 = *(int *)(iVar3 + 0x7c);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x884d;
      break;
    case 10:
      FUN_00954fa0(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x3c));
      iVar4 = *(int *)(iVar3 + 0x80);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x8a48;
      break;
    default:
      goto LAB_00b62239;
    case 0xc:
      iVar3 = *(int *)(iVar3 + 0x30);
      iVar4 = iVar3 + 0x40;
      func_0x00954620(iVar4);
      cVar2 = *(char *)(iVar3 + 0x50);
      if (cVar2 == '\0') {
        uVar11 = 0x1004;
        pcVar10 = *(code **)(param_1 + 0xf4);
        uStack_54 = (uint)**(byte **)(iStack_14 + 0x30);
        uStack_4c = uStack_54;
      }
      else if (cVar2 == '\x01') {
        uVar11 = 0x1004;
        pcVar10 = *(code **)(param_1 + 0x454);
        uStack_50 = (uint)**(byte **)(iStack_14 + 0x30);
        uStack_4c = uStack_50;
      }
      else {
        if (cVar2 != '\x02') goto LAB_00b62239;
        uVar11 = 0x1004;
        pcVar10 = *(code **)(param_1 + 0x458);
        uStack_4c = (uint)**(byte **)(iStack_14 + 0x30);
      }
      goto LAB_00b62222;
    case 0xd:
      iVar4 = iVar3 + 0x48;
      uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x30) + 4);
      uVar5 = 0x8e42;
      goto LAB_00b62129;
    case 0xe:
      iVar4 = iVar3 + 0x4c;
      uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x30) + 8);
      uVar5 = 0x8e43;
      goto LAB_00b62129;
    case 0xf:
      iVar4 = iVar3 + 0x50;
      uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0xc);
      uVar5 = 0x8e44;
      goto LAB_00b62129;
    case 0x10:
      iVar4 = iVar3 + 0x54;
      uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x30) + 0x10);
      uVar5 = 0x8e45;
LAB_00b62129:
      iVar3 = func_0x00b622f0(uStack_4,puVar1,uVar5,uVar11,iVar4);
      if (iVar3 == 1) {
        return 1;
      }
      goto LAB_00b62239;
    case 0x11:
      iVar4 = func_0x008df6e0();
      *(int *)(iStack_14 + 0x9c) = iVar4;
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x813c;
      break;
    case 0x12:
      iVar4 = func_0x008df710(uVar7,uVar12,uVar13);
      *(int *)(iStack_14 + 0xa0) = iVar4;
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar5 = func_0x00a02400(**(undefined1 **)(iStack_14 + 0x30));
      uVar11 = 0x813d;
      break;
    case 0x13:
      iVar4 = *(int *)(*(byte **)(iVar3 + 0x30) + 100);
      pcVar10 = *(code **)(param_1 + 0xf8);
      uVar11 = 0x90ea;
      uStack_4c = (uint)**(byte **)(iVar3 + 0x30);
      uVar13 = uStack_4c;
LAB_00b62222:
      uVar5 = func_0x00a02400(uStack_4c,uVar11,iVar4);
    }
    _guard_check_icall(uVar5,uVar11,iVar4);
    (*pcVar10)();
LAB_00b62239:
    uVar6 = uVar6 & ~(1 << (uVar8 & 0x1f));
    if (uVar6 == 0) {
      *(uint *)(iStack_14 + 0x44) = *(uint *)(iStack_14 + 0x44) | uVar9;
      *(undefined4 *)(iStack_14 + 0x40) = 0;
      return 0;
    }
    uVar8 = 0;
    iVar3 = iStack_14;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
  } while( true );
}



undefined4 * __thiscall FUN_00b624a0(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::TransformFeedbackGL::vftable;
  func_0x00ab7430(param_1[4],uVar1);
  param_1[4] = 0;
  *param_1 = rx::TransformFeedbackImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x1c);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



undefined4 FUN_00b62520(void)

{
  func_0x00ab7750();
  return 0;
}



undefined4 __thiscall FUN_00b62530(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 unaff_retaddr;
  
  iVar2 = func_0x00a01ed0(param_2);
  func_0x00ab6d60(0x8e22,*(undefined4 *)(param_1 + 0x10));
  piVar1 = (int *)(param_1 + 8);
  if (*(int *)(param_2 + 4) == 0) {
    uVar3 = 0;
    pcVar5 = *(code **)(*piVar1 + 0x34c);
  }
  else {
    if (*(char *)(iVar2 + 0x5e8) != '\0') {
      pcVar5 = *(code **)(*piVar1 + 0x170);
      uVar3 = FUN_007814c0();
      _guard_check_icall(0x8c8e,uVar3);
      (*pcVar5)();
    }
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 != 0) {
      pcVar5 = *(code **)(*piVar1 + 0x350);
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar4 = FUN_007814c0();
      _guard_check_icall(0x8c8e,unaff_retaddr,uVar4,uVar3,iVar2);
      (*pcVar5)();
      return 0;
    }
    pcVar5 = *(code **)(*piVar1 + 0x34c);
    uVar3 = FUN_007814c0();
  }
  _guard_check_icall(0x8c8e,unaff_retaddr,uVar3);
  (*pcVar5)();
  return 0;
}



undefined4 __fastcall FUN_00b62600(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  func_0x00ab7750();
  if (*(char *)(param_1 + 0x14) == '\0') {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x14) = 0;
  func_0x00ab6d60(0x8e22,*(undefined4 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x14) != '\0') {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 0xec) + 0x34);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    func_0x00abaee0(uVar1);
    pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x348);
    _guard_check_icall(0xf);
    (*pcVar2)();
    return 0;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
  func_0x00abaee0(*(undefined4 *)(param_1 + 0x18));
  pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x39c);
  _guard_check_icall();
  (*pcVar2)();
  func_0x00abaee0(uVar1);
  return 0;
}



undefined4 __fastcall FUN_00b626a0(int param_1)

{
  code *pcVar1;
  
  func_0x00ab7750();
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(char *)(param_1 + 0x15) != '\x01')) {
    *(undefined1 *)(param_1 + 0x15) = 1;
    func_0x00ab6d60(0x8e22,*(undefined4 *)(param_1 + 0x10));
    if (*(char *)(param_1 + 0x15) != '\0') {
      pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x5e8);
      _guard_check_icall();
      (*pcVar1)();
      return 0;
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x5ec);
    _guard_check_icall();
    (*pcVar1)();
  }
  return 0;
}



undefined4 FUN_00b62700(void)

{
  func_0x00ab7750();
  return 0;
}



undefined4 * __thiscall FUN_00b62b10(undefined4 *param_1,byte param_2)

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
  *param_1 = rx::VertexArrayGL::vftable;
  uStack_8 = 0;
  func_0x008ab4ad(param_1 + 10,8,0x10,FUN_008dd7e0,uVar1);
  param_1[8] = angle::BindingPointer<>::vftable;
  *param_1 = rx::VertexArrayImpl::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x100);
  }
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



void __thiscall FUN_00b62ef0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int iStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &DAT_00f66920;
  iStack_1c = *unaff_FS_OFFSET;
  uVar6 = DAT_0128fd40 ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&iStack_1c;
  func_0x00a02140(param_2,uVar6);
  if (*(char *)(param_1 + 0x18) != '\0') {
    func_0x00ab7490(*(undefined4 *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  piVar8 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uStack_14 = 0;
  if (piVar8 != (int *)0x0) {
    piVar4 = piVar8 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      pcVar3 = *(code **)*piVar8;
      _guard_check_icall(param_2);
      (*pcVar3)();
      pcVar3 = *(code **)(*piVar8 + 4);
      _guard_check_icall(1);
      (*pcVar3)();
    }
  }
  if ((int *)(param_1 + 0x28) != (int *)(param_1 + 0xa8)) {
    piVar8 = (int *)(param_1 + 0x2c);
    do {
      piVar4 = (int *)*piVar8;
      *piVar8 = 0;
      uStack_14 = 1;
      if (piVar4 != (int *)0x0) {
        piVar1 = piVar4 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          pcVar3 = *(code **)*piVar4;
          _guard_check_icall(param_2);
          (*pcVar3)();
          pcVar3 = *(code **)(*piVar4 + 4);
          _guard_check_icall(1);
          (*pcVar3)();
        }
      }
      piVar4 = piVar8 + 1;
      piVar8 = piVar8 + 2;
    } while (piVar4 != (int *)(param_1 + 0xa8));
  }
  uStack_14 = 0xffffffff;
  func_0x00ab6e30(*(undefined4 *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  func_0x00ab6e30(*(undefined4 *)(param_1 + 0xb4));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if ((*(char *)(param_1 + 0x18) != '\0') && (iVar5 = *(int *)(param_1 + 0x1c), iVar5 != 0)) {
    iVar7 = *(int *)(iVar5 + 0x248);
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      *(int *)(iVar5 + 0x248) = iVar7;
      *(undefined4 *)(iVar5 + 0x148 + iVar7 * 0x10) = 0x10;
      *(undefined4 *)(iVar5 + 0x14c + iVar7 * 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x150 + iVar7 * 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x154 + iVar7 * 0x10) = 0;
      iVar7 = *(int *)(iVar5 + 0x248);
    }
    iVar7 = *(int *)(iVar5 + 0x144);
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      *(int *)(iVar5 + 0x144) = iVar7;
      puVar2 = (undefined4 *)(iVar5 + 4 + iVar7 * 0x14);
      *puVar2 = 0;
      puVar2[1] = &DAT_01293ac0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined4 *)(iVar5 + 0x14 + iVar7 * 0x14) = 0;
      iVar7 = *(int *)(iVar5 + 0x144);
    }
    func_0x008ab812(iVar5,0x24c);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *unaff_FS_OFFSET = iStack_1c;
  return;
}



void __thiscall
FUN_00b64190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uStack_60;
  uint uStack_38;
  uint uStack_30;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f669a0;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  func_0x00a02140(param_2,uVar4);
  func_0x00ab6dd0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
  func_0x008c2250(param_3,0);
  func_0x008c2250(param_3,2);
  if (uStack_1c != uStack_38) {
    do {
      switch(uStack_18 + uStack_30 * 0x20) {
      case 0:
        piVar2 = *(int **)(param_1 + 0x1c);
        iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x28);
        if (iVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_007814c0();
        }
        if (*piVar2 != iVar5) {
          if (iVar6 == 0) {
            uStack_60 = 0;
            func_0x00a02140(param_2);
            func_0x00ab6980(6,0);
          }
          else {
            uStack_60 = FUN_007814c0();
            func_0x00a02140(param_2);
            func_0x00ab6980(6,uStack_60);
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
          }
          piVar2 = *(int **)(param_1 + 0x24);
          *(int *)(param_1 + 0x24) = iVar6;
          uStack_8 = 0;
          if (piVar2 != (int *)0x0) {
            piVar1 = piVar2 + 1;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              pcVar3 = *(code **)*piVar2;
              _guard_check_icall(param_2);
              (*pcVar3)();
              pcVar3 = *(code **)(*piVar2 + 4);
              _guard_check_icall(1);
              (*pcVar3)();
            }
          }
          uStack_8 = 0xffffffff;
          **(undefined4 **)(param_1 + 0x1c) = uStack_60;
        }
      default:
        goto LAB_00b6455d;
      case 2:
        uVar8 = 0;
        puVar7 = param_5;
        goto LAB_00b64541;
      case 3:
        uVar8 = 1;
        puVar7 = param_5 + 1;
        goto LAB_00b64541;
      case 4:
        uVar8 = 2;
        puVar7 = param_5 + 2;
        goto LAB_00b64541;
      case 5:
        uVar8 = 3;
        puVar7 = param_5 + 3;
        goto LAB_00b64541;
      case 6:
        uVar8 = 4;
        puVar7 = param_5 + 4;
        goto LAB_00b64541;
      case 7:
        uVar8 = 5;
        puVar7 = param_5 + 5;
        goto LAB_00b64541;
      case 8:
        uVar8 = 6;
        puVar7 = param_5 + 6;
        goto LAB_00b64541;
      case 9:
        uVar8 = 7;
        puVar7 = param_5 + 7;
        goto LAB_00b64541;
      case 10:
        uVar8 = 8;
        puVar7 = param_5 + 8;
        goto LAB_00b64541;
      case 0xb:
        uVar8 = 9;
        puVar7 = param_5 + 9;
        goto LAB_00b64541;
      case 0xc:
        uVar8 = 10;
        puVar7 = param_5 + 10;
        goto LAB_00b64541;
      case 0xd:
        uVar8 = 0xb;
        puVar7 = param_5 + 0xb;
        goto LAB_00b64541;
      case 0xe:
        uVar8 = 0xc;
        puVar7 = param_5 + 0xc;
        goto LAB_00b64541;
      case 0xf:
        uVar8 = 0xd;
        puVar7 = param_5 + 0xd;
        goto LAB_00b64541;
      case 0x10:
        uVar8 = 0xe;
        puVar7 = param_5 + 0xe;
        goto LAB_00b64541;
      case 0x11:
        uVar8 = 0xf;
        puVar7 = param_5 + 0xf;
LAB_00b64541:
        iVar6 = func_0x00b63c30(param_2,uVar8,puVar7);
        break;
      case 0x22:
        iVar6 = func_0x00b63960(param_2,0,param_4);
        puVar7 = param_4;
        break;
      case 0x23:
        iVar6 = func_0x00b63960(param_2,1,param_4 + 1);
        puVar7 = param_4 + 1;
        break;
      case 0x24:
        iVar6 = func_0x00b63960(param_2,2,param_4 + 2);
        puVar7 = param_4 + 2;
        break;
      case 0x25:
        iVar6 = func_0x00b63960(param_2,3,param_4 + 3);
        puVar7 = param_4 + 3;
        break;
      case 0x26:
        iVar6 = func_0x00b63960(param_2,4,param_4 + 4);
        puVar7 = param_4 + 4;
        break;
      case 0x27:
        iVar6 = func_0x00b63960(param_2,5,param_4 + 5);
        puVar7 = param_4 + 5;
        break;
      case 0x28:
        iVar6 = func_0x00b63960(param_2,6,param_4 + 6);
        puVar7 = param_4 + 6;
        break;
      case 0x29:
        iVar6 = func_0x00b63960(param_2,7,param_4 + 7);
        puVar7 = param_4 + 7;
        break;
      case 0x2a:
        iVar6 = func_0x00b63960(param_2,8,param_4 + 8);
        puVar7 = param_4 + 8;
        break;
      case 0x2b:
        iVar6 = func_0x00b63960(param_2,9,param_4 + 9);
        puVar7 = param_4 + 9;
        break;
      case 0x2c:
        iVar6 = func_0x00b63960(param_2,10,param_4 + 10);
        puVar7 = param_4 + 10;
        break;
      case 0x2d:
        iVar6 = func_0x00b63960(param_2,0xb,param_4 + 0xb);
        puVar7 = param_4 + 0xb;
        break;
      case 0x2e:
        iVar6 = func_0x00b63960(param_2,0xc,param_4 + 0xc);
        puVar7 = param_4 + 0xc;
        break;
      case 0x2f:
        iVar6 = func_0x00b63960(param_2,0xd,param_4 + 0xd);
        puVar7 = param_4 + 0xd;
        break;
      case 0x30:
        iVar6 = func_0x00b63960(param_2,0xe,param_4 + 0xe);
        puVar7 = param_4 + 0xe;
        break;
      case 0x31:
        iVar6 = func_0x00b63960(param_2,0xf,param_4 + 0xf);
        puVar7 = param_4 + 0xf;
      }
      if (iVar6 == 1) break;
      *puVar7 = 0;
LAB_00b6455d:
      uStack_1c = uStack_1c & ~(1 << (uStack_18 & 0x1f));
      if (uStack_1c == 0) {
        uStack_18 = 0;
      }
      else {
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
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00b67080(undefined4 param_1,byte param_2)

{
  func_0x00ba15c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 * __thiscall FUN_00b670a0(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TDirectiveHandler::vftable;
  func_0x00ba15c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x18);
  }
  return param_1;
}



void FUN_00b670d0(undefined4 param_1,undefined4 *param_2)

{
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  func_0x00aece30(param_1,param_2,&DAT_0112e1b4);
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

void __thiscall FUN_00b67100(int param_1,undefined4 param_2,undefined1 **param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 uStack_168;
  int **ppiStack_164;
  undefined4 uStack_160;
  undefined4 *puStack_15c;
  undefined4 uStack_158;
  undefined4 *puStack_154;
  undefined4 uStack_150;
  undefined1 **ppuStack_14c;
  undefined4 uStack_148;
  undefined1 *puStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  char cStack_12e;
  undefined1 auStack_12d [5];
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
  undefined2 uStack_c4;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ushort uStack_a0;
  undefined1 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  char acStack_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined2 uStack_28;
  undefined1 uStack_26;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 uStack_8;
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&puStack_13c;
  uStack_138 = param_2;
  builtin_strncpy(acStack_44,"enable",7);
  puStack_c = (undefined1 *)0x6e726177;
  uStack_8 = 0;
  uStack_148 = (char *)&uStack_b8;
  ppuStack_14c = (undefined1 **)param_4;
  puStack_13c = &LAB_006c6c61;
  uStack_b8 = 0x75716572;
  uStack_b4 = 0x657269;
  uStack_c0 = 0x61736964;
  puStack_bc = &LAB_00656c62;
  uStack_150 = (undefined4 *)0xb671b4;
  iStack_134 = param_1;
  cVar3 = func_0x00484a20();
  if (cVar3 == '\0') {
    uStack_148 = acStack_44;
    ppuStack_14c = (undefined1 **)param_4;
    uStack_150 = (undefined4 *)0xb671d6;
    cVar3 = func_0x00484a20();
    if (cVar3 != '\0') {
      cStack_12e = '\x01';
      goto LAB_00b6722a;
    }
    uStack_148 = (char *)&uStack_c0;
    ppuStack_14c = (undefined1 **)param_4;
    uStack_150 = (undefined4 *)0xb671f8;
    cVar3 = func_0x00484a20();
    if (cVar3 != '\0') {
      cStack_12e = '\x03';
      goto LAB_00b6722a;
    }
    uStack_148 = (char *)&puStack_c;
    ppuStack_14c = (undefined1 **)param_4;
    uStack_150 = (undefined4 *)0xb6721a;
    cVar3 = func_0x00484a20();
    if (cVar3 != '\0') {
      cStack_12e = '\x02';
      goto LAB_00b6722a;
    }
    if ((undefined1 *)0xf < param_3[5]) {
      param_3 = (undefined1 **)*param_3;
    }
    ppuStack_14c = (undefined1 **)0x1027a1c;
    uStack_148 = (char *)param_3;
  }
  else {
    cStack_12e = '\0';
LAB_00b6722a:
    uStack_148 = (char *)&puStack_13c;
    ppuStack_14c = param_3;
    uStack_150 = (undefined4 *)0xb67235;
    cVar3 = func_0x00484a20();
    if (cVar3 == '\0') {
      puStack_13c = *(undefined1 **)(param_1 + 8);
      uStack_148 = (char *)param_3;
      if ((undefined1 *)0xf < param_3[5]) {
        uStack_148 = *param_3;
      }
      ppuStack_14c = (undefined1 **)0xb672e8;
      auStack_12d[0] = func_0x00aed2e0();
      uStack_148 = auStack_12d;
      ppuStack_14c = &puStack_c;
      uStack_150 = (undefined4 *)0xb67305;
      func_0x00a13800();
      if (puStack_c != (undefined1 *)**(int **)(param_1 + 8)) {
        uStack_148 = "GL_OVR_multiview2";
        ppuStack_14c = param_3;
        puStack_c[0xf] = cStack_12e;
        uStack_150 = (undefined4 *)0xb67329;
        cVar3 = func_0x00484a20();
        if (cVar3 != '\0') {
          uStack_148 = (char *)&uStack_b0;
          uStack_b0 = 0x4f5f4c47;
          uStack_ac = 0x6d5f5256;
          uStack_a8 = 0x69746c75;
          uStack_a4 = 0x77656976;
          uStack_a0 = uStack_a0 & 0xff00;
          ppuStack_14c = (undefined1 **)0xb67357;
          auStack_12d[0] = func_0x00aed2e0();
          uStack_148 = auStack_12d;
          ppuStack_14c = &puStack_c;
          uStack_150 = (undefined4 *)0xb67372;
          piVar6 = (int *)func_0x00a13800();
          param_1 = iStack_134;
          if (*piVar6 != **(int **)(iStack_134 + 8)) {
            *(char *)(*piVar6 + 0xf) = cStack_12e;
          }
        }
        uStack_148 = "GL_ANDROID_extension_pack_es31a";
        ppuStack_14c = param_3;
        uStack_150 = (undefined4 *)0xb67391;
        cVar3 = func_0x00484a20();
        if (cVar3 != '\0') {
          uStack_148 = (char *)&uStack_3c;
          uStack_3c = 0x455f4c47;
          uStack_38 = 0x675f5458;
          uStack_34 = 0x656d6f65;
          uStack_30 = 0x5f797274;
          uStack_80 = 0x455f4c47;
          uStack_7c = 0x745f5458;
          uStack_78 = 0x65737365;
          uStack_74 = 0x74616c6c;
          uStack_b0 = 0x455f4c47;
          uStack_ac = 0x675f5458;
          uStack_a8 = 0x735f7570;
          uStack_a4 = 0x65646168;
          piStack_2c = (int *)0x64616873;
          uStack_d8 = 0x455f4c47;
          uStack_d4 = 0x745f5458;
          uStack_d0 = 0x75747865;
          uStack_cc = 0x625f6572;
          uStack_28 = 0x7265;
          uStack_64 = 0x455f4c47;
          uStack_60 = 0x745f5458;
          uStack_5c = 0x75747865;
          uStack_58 = 0x635f6572;
          uStack_26 = 0;
          piStack_24 = (int *)0x4f5f4c47;
          uStack_20 = 0x735f5345;
          uStack_1c = 0x6c706d61;
          uStack_18 = 0x61765f65;
          uStack_70 = 0x5f6e6f69;
          auStack_12d._1_4_ = 0x4f5f4c47;
          uStack_128 = 0x735f5345;
          uStack_124 = 0x65646168;
          uStack_120 = 0x756d5f72;
          uStack_6c = 0x64616873;
          uStack_11c = 0x7369746c;
          uStack_118 = 0x6c706d61;
          uStack_114 = 0x6e695f65;
          uStack_110 = 0x70726574;
          uStack_68 = 0x7265;
          uStack_9c = 0x4f5f4c47;
          uStack_98 = 0x735f5345;
          uStack_94 = 0x65646168;
          uStack_90 = 0x6d695f72;
          uStack_66 = 0;
          uStack_104 = 0x4f5f4c47;
          uStack_100 = 0x745f5345;
          uStack_fc = 0x75747865;
          uStack_f8 = 0x735f6572;
          uStack_a0 = 0x3572;
          uStack_9e = 0;
          uStack_c8 = 0x65666675;
          uStack_c4 = 0x72;
          uStack_54 = 0x5f656275;
          uStack_50 = 0x5f70616d;
          uStack_4c = 0x61727261;
          uStack_48 = 0x79;
          uStack_14 = 0x62616972;
          uStack_10 = 0x73656c;
          uStack_10c = 0x74616c6f;
          uStack_108 = 0x6e6f69;
          uStack_8c = 0x5f656761;
          uStack_88 = 0x6d6f7461;
          uStack_84 = 0x6369;
          uStack_82 = 0;
          uStack_f4 = 0x61726f74;
          uStack_f0 = 0x6d5f6567;
          uStack_ec = 0x69746c75;
          uStack_e8 = 0x706d6173;
          uStack_e4 = 0x325f656c;
          uStack_e0 = 0x72615f64;
          uStack_dc = 0x796172;
          ppuStack_14c = (undefined1 **)0xb6753f;
          auStack_12d[0] = func_0x00aed2e0();
          uStack_148 = auStack_12d;
          ppuStack_14c = &puStack_c;
          uStack_150 = (undefined4 *)0xb6755a;
          piVar6 = (int *)func_0x00a13800();
          if (*piVar6 != **(int **)(puStack_13c + 8)) {
            *(undefined1 *)(*piVar6 + 0xf) = uStack_138._2_1_;
          }
          uStack_150 = &uStack_88;
          puStack_154 = (undefined4 *)0xb6757e;
          uVar4 = func_0x00aed2e0();
          uStack_138 = CONCAT13(uVar4,(undefined3)uStack_138);
          uStack_150 = (undefined4 *)((int)&uStack_138 + 3);
          puStack_154 = &uStack_14;
          uStack_158 = (undefined4 *)0xb67599;
          piVar6 = (int *)func_0x00a13800();
          if (*piVar6 != **(int **)(unaff_EDI + 8)) {
            *(char *)(*piVar6 + 0xf) = (char)((uint)unaff_ESI >> 0x10);
          }
          uStack_158 = &uStack_c0;
          puStack_15c = (undefined4 *)0xb675bd;
          func_0x00aed2e0();
          uStack_158 = (undefined4 *)&stack0xfffffec3;
          puStack_15c = &uStack_1c;
          uStack_160 = (undefined4 *)0xb675d8;
          piVar6 = (int *)func_0x00a13800();
          if (*piVar6 != *(int *)ppuStack_14c[2]) {
            *(undefined1 *)(*piVar6 + 0xf) = uStack_148._2_1_;
          }
          uStack_160 = &uStack_f0;
          ppiStack_164 = (int **)0xb675f9;
          uVar4 = func_0x00aed2e0();
          uStack_148 = (char *)CONCAT13(uVar4,(undefined3)uStack_148);
          uStack_160 = (undefined4 *)((int)&uStack_148 + 3);
          ppiStack_164 = &piStack_24;
          uStack_168 = (undefined2 *)0xb67614;
          piVar6 = (int *)func_0x00a13800();
          if (*piVar6 != *(int *)puStack_154[2]) {
            *(undefined1 *)(*piVar6 + 0xf) = uStack_150._2_1_;
          }
          uStack_168 = &uStack_84;
          uVar4 = func_0x00aed2e0();
          uStack_150 = (undefined4 *)CONCAT13(uVar4,(undefined3)uStack_150);
          uStack_168 = (undefined2 *)((int)&uStack_150 + 3);
          piVar6 = (int *)func_0x00a13800();
          if (*piVar6 != *(int *)puStack_15c[2]) {
            *(undefined1 *)(*piVar6 + 0xf) = uStack_158._2_1_;
          }
          uVar4 = func_0x00aed2e0(&uStack_4c);
          uStack_158 = (undefined4 *)CONCAT13(uVar4,(undefined3)uStack_158);
          uVar4 = (undefined1)((uint)((int)&uStack_158 + 3) >> 0x10);
          piVar6 = (int *)func_0x00a13800();
          if (*piVar6 != *ppiStack_164[2]) {
            *(undefined1 *)(*piVar6 + 0xf) = uStack_160._2_1_;
          }
          uVar5 = func_0x00aed2e0(&puStack_15c);
          uStack_160 = (undefined4 *)CONCAT13(uVar5,(undefined3)uStack_160);
          piVar6 = (int *)func_0x00a13800(&uStack_3c,(int)&uStack_160 + 3);
          if (*piVar6 != *piStack_24) {
            *(undefined1 *)(*piVar6 + 0xf) = uStack_168._2_1_;
          }
          uVar5 = func_0x00aed2e0(&uStack_d4);
          uStack_168 = (undefined2 *)CONCAT13(uVar5,(undefined3)uStack_168);
          piVar6 = (int *)func_0x00a13800(acStack_44,(int)&uStack_168 + 3);
          if (*piVar6 != *piStack_2c) {
            *(undefined1 *)(*piVar6 + 0xf) = uVar4;
          }
          func_0x00aed2e0(&stack0xfffffebc);
          piVar6 = (int *)func_0x00a13800(&uStack_4c,&stack0xfffffe93);
          param_1 = iStack_134;
          if (*piVar6 != **(int **)(iStack_134 + 8)) {
            *(char *)(*piVar6 + 0xf) = cStack_12e;
          }
        }
        uStack_148 = "GL_EXT_geometry_shader";
        ppuStack_14c = param_3;
        uStack_150 = (undefined4 *)0xb67768;
        cVar3 = func_0x00484a20();
        if (cVar3 == '\0') {
          uStack_148 = "GL_EXT_tessellation_shader";
          ppuStack_14c = param_3;
          uStack_150 = (undefined4 *)0xb6777e;
          cVar3 = func_0x00484a20();
          if (cVar3 == '\0') {
            uStack_148 = "GL_EXT_clip_cull_distance";
            ppuStack_14c = param_3;
            uStack_150 = (undefined4 *)0xb67794;
            cVar3 = func_0x00484a20();
            if (cVar3 == '\0') goto LAB_00b678ee;
            if (299 < **(int **)(param_1 + 0x10)) {
              uStack_148 = (char *)&uStack_3c;
              uStack_3c = 0x415f4c47;
              uStack_38 = 0x454c5050;
              uStack_34 = 0x696c635f;
              uStack_30 = 0x69645f70;
              piStack_2c = (int *)0x6e617473;
              uStack_28 = 0x6563;
              uStack_26 = 0;
              ppuStack_14c = (undefined1 **)0xb677f9;
              auStack_12d[0] = func_0x00aed2e0();
              uStack_148 = auStack_12d;
              ppuStack_14c = &puStack_c;
              uStack_150 = (undefined4 *)0xb67814;
              piVar6 = (int *)func_0x00a13800();
              if (*piVar6 != **(int **)(iStack_134 + 8)) {
                *(char *)(*piVar6 + 0xf) = cStack_12e;
              }
              goto LAB_00b678ee;
            }
            if ((undefined1 *)0xf < param_3[5]) {
              param_3 = (undefined1 **)*param_3;
            }
            ppuStack_14c = (undefined1 **)0x1027a84;
            uStack_148 = (char *)param_3;
            goto LAB_00b678e2;
          }
        }
        uStack_148 = (char *)&piStack_24;
        piStack_24 = (int *)0x455f4c47;
        uStack_20 = 0x735f5458;
        uStack_1c = 0x65646168;
        uStack_18 = 0x6f695f72;
        uStack_14 = 0x6f6c625f;
        uStack_10 = 0x736b63;
        ppuStack_14c = (undefined1 **)0xb67866;
        auStack_12d[0] = func_0x00aed2e0();
        uStack_148 = auStack_12d;
        ppuStack_14c = &puStack_c;
        uStack_150 = (undefined4 *)0xb67881;
        piVar6 = (int *)func_0x00a13800();
        if (*piVar6 != **(int **)(iStack_134 + 8)) {
          *(char *)(*piVar6 + 0xf) = cStack_12e;
        }
        goto LAB_00b678ee;
      }
      switch(cStack_12e) {
      case '\0':
        if ((undefined1 *)0xf < param_3[5]) {
          param_3 = (undefined1 **)*param_3;
        }
        ppuStack_14c = (undefined1 **)0x1007e7c;
        uStack_148 = (char *)param_3;
        goto LAB_00b678e2;
      case '\x01':
      case '\x02':
      case '\x03':
        if ((undefined1 *)0xf < param_3[5]) {
          param_3 = (undefined1 **)*param_3;
        }
        ppuStack_14c = (undefined1 **)0x1007e7c;
        uStack_150 = (undefined4 *)uStack_138;
        puStack_154 = (undefined4 *)0xb678d2;
        uStack_148 = (char *)param_3;
        func_0x00aed0b0();
      }
      goto LAB_00b678ee;
    }
    if (cStack_12e == '\0') {
      if ((undefined1 *)0xf < param_3[5]) {
        param_3 = (undefined1 **)*param_3;
      }
      ppuStack_14c = (undefined1 **)0x1027a30;
      uStack_148 = (char *)param_3;
    }
    else {
      if (cStack_12e != '\x01') {
        piVar6 = *(int **)**(int **)(param_1 + 8);
        if (piVar6 != (int *)**(int **)(param_1 + 8)) {
          do {
            *(char *)((int)piVar6 + 0xf) = cStack_12e;
            piVar1 = (int *)piVar6[2];
            if (*(char *)((int)piVar1 + 0xd) == '\0') {
              cVar3 = *(char *)(*piVar1 + 0xd);
              piVar6 = piVar1;
              piVar1 = (int *)*piVar1;
              while (cVar3 == '\0') {
                cVar3 = *(char *)(*piVar1 + 0xd);
                piVar6 = piVar1;
                piVar1 = (int *)*piVar1;
              }
            }
            else {
              cVar3 = *(char *)(piVar6[1] + 0xd);
              piVar2 = (int *)piVar6[1];
              piVar1 = piVar6;
              while ((piVar6 = piVar2, cVar3 == '\0' && (piVar1 == (int *)piVar6[2]))) {
                cVar3 = *(char *)(piVar6[1] + 0xd);
                piVar2 = (int *)piVar6[1];
                piVar1 = piVar6;
              }
            }
          } while (piVar6 != (int *)**(int **)(param_1 + 8));
        }
        goto LAB_00b678ee;
      }
      if ((undefined1 *)0xf < param_3[5]) {
        param_3 = (undefined1 **)*param_3;
      }
      ppuStack_14c = (undefined1 **)0x1027a5c;
      uStack_148 = (char *)param_3;
    }
  }
LAB_00b678e2:
  uStack_150 = (undefined4 *)uStack_138;
  puStack_154 = (undefined4 *)0xb678ee;
  func_0x00aece30();
LAB_00b678ee:
  FUN_008ab370();
  return;
}



void __thiscall
FUN_00b67920(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,char param_5)

{
  char cVar1;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined1 *puStack_1c;
  undefined8 uStack_18;
  ushort uStack_10;
  char acStack_c [8];
  uint uStack_4;
  
  uStack_4 = DAT_0128fd40 ^ (uint)&uStack_20;
  if (param_5 != '\0') {
    uStack_10 = 0x74;
    uStack_18 = 0x6e61697261766e69;
    puStack_1c = &LAB_006c6c61;
    cVar1 = func_0x00484a20(param_3,&uStack_18);
    if (cVar1 != '\0') {
      cVar1 = func_0x00484a20(param_4,&puStack_1c);
      if (cVar1 != '\0') {
        if ((**(int **)(param_1 + 0x10) == 300) && (*(int *)(param_1 + 0x14) == 0x8b30)) {
          if (0xf < (uint)param_3[5]) {
            param_3 = (undefined4 *)*param_3;
          }
          func_0x00aece30(param_2,"#pragma STDGL invariant(all) can not be used in fragment shader",
                          param_3);
        }
        *(undefined1 *)(param_1 + 6) = 1;
        FUN_008ab370();
        return;
      }
    }
LAB_00b67b35:
    FUN_008ab370();
    return;
  }
  uStack_10 = uStack_10 & 0xff00;
  builtin_strncpy(acStack_c,"debug",6);
  uStack_20 = 0x6e6f;
  uStack_1e = 0;
  uStack_18 = 0x657a696d6974706f;
  puStack_1c = (undefined1 *)0x66666f;
  cVar1 = func_0x00484a20(param_3,&uStack_18);
  if (cVar1 == '\0') {
    cVar1 = func_0x00484a20(param_3,acStack_c);
    if (cVar1 == '\0') {
      func_0x00b66090(0x2f,param_2,param_3);
      goto LAB_00b67b35;
    }
    cVar1 = func_0x00484a20(param_4,&uStack_20);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
      FUN_008ab370();
      return;
    }
    cVar1 = func_0x00484a20(param_4,&puStack_1c);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
      FUN_008ab370();
      return;
    }
  }
  else {
    cVar1 = func_0x00484a20(param_4,&uStack_20);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      FUN_008ab370();
      return;
    }
    cVar1 = func_0x00484a20(param_4,&puStack_1c);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 4) = 0;
      FUN_008ab370();
      return;
    }
  }
  if (0xf < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  func_0x00aece30(param_2,"invalid pragma value - \'on\' or \'off\' expected",param_4);
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b67b50(int param_1,undefined4 param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined4 ****ppppuVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [4];
  uint uVar6;
  int *unaff_FS_OFFSET;
  undefined1 auStack_104 [16];
  int aiStack_f4 [3];
  uint auStack_e8 [2];
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d0;
  uint *puStack_cc;
  int iStack_c4;
  int *piStack_c0;
  int aiStack_bc [2];
  uint uStack_b4;
  uint uStack_b0;
  char cStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  int aiStack_40 [2];
  undefined1 auStack_38 [4];
  int *piStack_34;
  int *piStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66ab1;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  uStack_48 = param_2;
  piStack_34 = (int *)0x0;
  iStack_4c = param_1;
  if ((((((param_3 == 100) || (param_3 == 300)) || (param_3 == 0x136)) || (param_3 == 0x140)) &&
      ((param_4 == 7 || (param_4 != 8)))) || ((param_4 == 7 || (param_4 == 8)))) {
    **(int **)(param_1 + 0x10) = param_3;
  }
  else {
    func_0x00a10440(auStack_104,uStack_14);
    uStack_8 = 0;
    uVar6 = 0;
    func_0x0046a2c0(aiStack_f4);
    uStack_8._0_1_ = 1;
    if (cStack_50 != '\0') {
      piStack_34 = *(int **)(*(int *)((int)&iStack_c4 + *(int *)(aiStack_f4[0] + 4)) + 4);
      pcVar1 = *(code **)(*piStack_34 + 4);
      piStack_30 = piStack_34;
      _guard_check_icall();
      (*pcVar1)();
      uStack_8._0_1_ = 2;
      piStack_34 = (int *)func_0x00485b10(auStack_38);
      uStack_8._0_1_ = 1;
      if (piStack_30 != (int *)0x0) {
        pcVar1 = *(code **)(*piStack_30 + 8);
        _guard_check_icall();
        piStack_30 = (int *)(*pcVar1)();
        if (piStack_30 != (int *)0x0) {
          pcVar1 = *(code **)*piStack_30;
          _guard_check_icall(1);
          (*pcVar1)();
        }
      }
      iVar3 = *(int *)(aiStack_f4[0] + 4);
      piStack_30 = (int *)CONCAT31(piStack_30._1_3_,*(undefined1 *)((int)&uStack_b4 + iVar3));
      _auStack_44 = (uint5)(uint)auStack_44;
      pcVar1 = *(code **)(*piStack_34 + 0x24);
      _guard_check_icall(auStack_44 + 4,aiStack_40[0],*(undefined4 *)((int)aiStack_bc + iVar3),
                         (int)aiStack_f4 + iVar3,piStack_30,param_3);
      (*pcVar1)();
      uVar6 = 0;
      if ((char)aiStack_40[0] != '\0') {
        uVar6 = 4;
      }
    }
    uVar4 = 4;
    if (*(int *)((int)aiStack_bc + *(int *)(aiStack_f4[0] + 4)) != 0) {
      uVar4 = 0;
    }
    func_0x00464710(uVar4 | *(uint *)((int)auStack_e8 + *(int *)(aiStack_f4[0] + 4)) | uVar6,0);
    func_0x0046a240();
    uStack_1c = 0;
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    piStack_34 = (int *)0x20;
    uStack_18 = 0xf;
    _auStack_44 = 0;
    aiStack_40[1] = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    pppuStack_2c = (undefined4 ****)0x0;
    if ((((byte)uStack_b0 & 0x22) == 2) || (uVar6 = *puStack_cc, uVar6 == 0)) {
      if (((uStack_b0 & 4) == 0) && (*piStack_d0 != 0)) {
        iVar3 = (*piStack_d0 - *piStack_e0) + *piStack_c0;
        auVar5 = (undefined1  [4])*piStack_e0;
      }
      else {
        aiStack_40[0] = 0;
        auStack_44 = (undefined1  [4])0x0;
        iVar3 = aiStack_40[0];
        auVar5 = auStack_44;
      }
    }
    else {
      if (uVar6 < uStack_b4) {
        uVar6 = uStack_b4;
      }
      iVar3 = uVar6 - *piStack_dc;
      auVar5 = (undefined1  [4])*piStack_dc;
    }
    if (auVar5 != (undefined1  [4])0x0) {
      func_0x0046a660(auVar5,iVar3);
    }
    uStack_8 = 4;
    ppppuVar2 = &pppuStack_2c;
    if (0xf < uStack_18) {
      ppppuVar2 = (undefined4 ****)pppuStack_2c;
    }
    func_0x00aece30(uStack_48,"client/version number not supported",ppppuVar2);
    if (0xf < uStack_18) {
      uVar6 = uStack_18 + 1;
      ppppuVar2 = (undefined4 ****)pppuStack_2c;
      if (0xfff < uVar6) {
        ppppuVar2 = (undefined4 ****)pppuStack_2c[-1];
        uVar6 = uStack_18 + 0x24;
        if (0x1f < (uint)((int)pppuStack_2c + (-4 - (int)ppppuVar2))) {
          func_0x008aaf66();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      func_0x008ab812(ppppuVar2,uVar6);
    }
    uStack_1c = 0;
    uStack_18 = 0xf;
    pppuStack_2c = (undefined4 ***)((uint)pppuStack_2c & 0xffffff00);
    func_0x004673c0();
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 FUN_00b6b570(void)

{
  return 5;
}



undefined4 FUN_00b6b580(void)

{
  return 6;
}



char __fastcall FUN_00b6b590(int param_1)

{
  return (*(int *)(param_1 + 0x14) != 0x29) + '\x04';
}



undefined4 __thiscall FUN_00b6b730(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = func_0x00aea8e0();
  if (((cVar1 != '\0') ||
      ((0x3d < *(ushort *)(param_3 + 0xb8) && (0x5a < (ushort)(*(ushort *)(param_3 + 0xb8) - 0x3e)))
      )) && (*(char *)(param_1 + 0x5d) == '\0')) {
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  return 1;
}



undefined1 __fastcall FUN_00b6b770(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00aea620();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5d) == '\0')) {
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  return 1;
}



void __thiscall FUN_00b6b790(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((*(int *)(iVar2 + 8) == 0) && (*(char *)(param_1 + 0x5d) == '\0')) {
    if ((*(int *)(param_1 + 0x58) < 300) && (*(char *)(param_1 + 0x5c) != '\0')) {
      *(undefined1 *)(param_1 + 0x5f) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  return;
}



void __thiscall FUN_00b6b7e0(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  iVar2 = (*pcVar1)();
  switch(*(undefined4 *)(iVar2 + 8)) {
  case 0:
  case 1:
  case 6:
    if (*(char *)(param_1 + 0x5d) != '\0') {
      return;
    }
    if ((*(int *)(param_1 + 0x58) < 300) && (*(char *)(param_1 + 0x5c) != '\0')) {
      *(undefined1 *)(param_1 + 0x5f) = 1;
      return;
    }
    break;
  case 2:
    return;
  }
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return;
}



undefined4 __thiscall FUN_00b6b870(undefined4 param_1,byte param_2)

{
  func_0x008acf70();
  func_0x004c7eb0();
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x84);
  }
  return param_1;
}



undefined4 __fastcall FUN_00b6ba60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c);
  uVar2 = iVar1 >> 2;
  if ((1 < uVar2) && (*(int *)(*(int *)(param_1 + 0x3c) + -8 + uVar2 * 4) != 0)) {
    if (*(char *)(param_1 + 0x61) == '\0') {
      *(undefined1 *)(param_1 + 0x62) = 1;
    }
    *(undefined1 *)(param_1 + 99) = 0;
  }
  return CONCAT31((int3)(iVar1 >> 10),1);
}



undefined1 __fastcall FUN_00b6ba90(int param_1)

{
  if (*(char *)(param_1 + 0x61) == '\0') {
    *(undefined2 *)(param_1 + 0x62) = 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 99) = 0;
  return 1;
}



undefined4 __thiscall FUN_00b6bab0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if ((1 < uVar1) && (*(int *)(*(int *)(param_1 + 0x3c) + -8 + uVar1 * 4) != 0)) {
    if (*(char *)(param_1 + 0x61) == '\0') {
      *(undefined1 *)(param_1 + 0x62) = 1;
    }
    *(undefined1 *)(param_1 + 99) = 0;
    if (param_2 == 0) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    }
    else if (param_2 == 2) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      return 1;
    }
  }
  return 1;
}



uint __thiscall FUN_00b6bb00(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined8 uStack_38;
  int iStack_30;
  undefined1 auStack_2c [4];
  int *piStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int iStack_1c;
  char *pcStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f66cd5;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcStack_18 = "case";
  if (*(int *)(param_3 + 0x14) == 0) {
    pcStack_18 = "default";
  }
  iStack_1c = param_1 + 0x5c;
  if (0 < *(int *)(param_1 + 100)) {
    func_0x00aeced0(param_3 + 4,"label statement nested inside control flow",pcStack_18,uVar3);
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined1 *)(param_1 + 99) = 1;
  if (*(int **)(param_3 + 0x14) == (int *)0x0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    piVar4 = (int *)(param_1 + 0x5c);
    if (1 < *(int *)(param_1 + 0x6c)) {
      piVar4 = (int *)func_0x00aeced0(param_3 + 4,"duplicate default label",pcStack_18,uVar3);
    }
    goto LAB_00b6bd9b;
  }
  pcVar2 = *(code **)(**(int **)(param_3 + 0x14) + 0x10);
  _guard_check_icall();
  piVar5 = (int *)(*pcVar2)();
  piVar4 = piVar5;
  if (piVar5 == (int *)0x0) goto LAB_00b6bd9b;
  pcVar2 = *(code **)(*piVar5 + 0x7c);
  _guard_check_icall();
  piVar4 = (int *)(*pcVar2)();
  iVar7 = *piVar4;
  if (iVar7 != *(int *)(param_1 + 0x58)) {
    piVar4 = (int *)func_0x00aeced0(piVar5 + 1,
                                    "case label type does not match switch init-expression type",
                                    pcStack_18);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (iVar7 == 3) {
    if (piVar5[0x2e] == 0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = FUN_005beae0();
    }
    piVar1 = (int *)(param_1 + 0x70);
    uStack_14 = uStack_20;
    func_0x004a0d30(&uStack_38,&uStack_20);
    if ((*(char *)(iStack_30 + 0xd) == '\0') && (*(int *)(iStack_30 + 0x10) <= (int)uStack_14)) {
      iVar7 = *piVar1;
      if (iStack_30 != iVar7) {
LAB_00b6bd0a:
        piVar4 = (int *)func_0x00aeced0(piVar5 + 1,"duplicate case label",pcStack_18);
        *(undefined1 *)(param_1 + 0x80) = 1;
        goto LAB_00b6bd9b;
      }
    }
    else {
      iVar7 = *piVar1;
    }
    puVar6 = (undefined8 *)func_0x004a0d30(auStack_2c,&uStack_20);
    uVar3 = uStack_14;
    uStack_38 = *puVar6;
    piVar4 = *(int **)(puVar6 + 1);
    if ((*(char *)((int)piVar4 + 0xd) != '\0') || ((int)uStack_14 < piVar4[4])) {
      if (*(int *)(param_1 + 0x74) == 0xccccccc) {
LAB_00b6bdb1:
        func_0x0048d790();
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
      uStack_8 = 0;
      uStack_24 = 0;
      piStack_28 = piVar1;
      piVar4 = (int *)func_0x008ab47d(0x14);
      piVar4[4] = uVar3;
      *piVar4 = iVar7;
      piVar4[1] = iVar7;
      piVar4[2] = iVar7;
      *(undefined2 *)(piVar4 + 3) = 0;
      piVar4 = (int *)func_0x0056d580((undefined4)uStack_38,uStack_38._4_4_,piVar4);
    }
  }
  else {
    if (iVar7 != 4) goto LAB_00b6bd9b;
    if (piVar5[0x2e] == 0) {
      uStack_20 = 0;
    }
    else {
      uStack_20 = FUN_005beae0();
    }
    piVar1 = (int *)(param_1 + 0x78);
    uStack_14 = uStack_20;
    func_0x008ace40(&uStack_38,&uStack_20);
    if ((*(char *)(iStack_30 + 0xd) == '\0') && (*(uint *)(iStack_30 + 0x10) <= uStack_14)) {
      iVar7 = *piVar1;
      if (iStack_30 != iVar7) goto LAB_00b6bd0a;
    }
    else {
      iVar7 = *piVar1;
    }
    puVar6 = (undefined8 *)func_0x008ace40(auStack_2c,&uStack_20);
    uVar3 = uStack_14;
    uStack_38 = *puVar6;
    piVar4 = *(int **)(puVar6 + 1);
    if ((*(char *)((int)piVar4 + 0xd) != '\0') || (uStack_14 < (uint)piVar4[4])) {
      if (*(int *)(param_1 + 0x7c) == 0xccccccc) goto LAB_00b6bdb1;
      uStack_8 = 1;
      uStack_24 = 0;
      piStack_28 = piVar1;
      piVar4 = (int *)func_0x008ab47d(0x14);
      piVar4[4] = uVar3;
      *piVar4 = iVar7;
      piVar4[1] = iVar7;
      piVar4[2] = iVar7;
      *(undefined2 *)(piVar4 + 3) = 0;
      piVar4 = (int *)func_0x008b95c0((undefined4)uStack_38,uStack_38._4_4_,piVar4);
    }
  }
LAB_00b6bd9b:
  *unaff_FS_OFFSET = iStack_10;
  return (uint)piVar4 & 0xffffff00;
}



void __fastcall FUN_00b6bdc0(int param_1)

{
  if (*(char *)(param_1 + 0x61) == '\0') {
    *(undefined2 *)(param_1 + 0x62) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 99) = 0;
  return;
}



undefined4 __thiscall FUN_00b6bde0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  else if (param_2 == 2) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    *(undefined2 *)(param_1 + 0x62) = 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 99) = 0;
  return 1;
}



void __fastcall FUN_00b6be10(int param_1)

{
  if (*(char *)(param_1 + 0x61) == '\0') {
    *(undefined2 *)(param_1 + 0x62) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 99) = 0;
  return;
}



undefined4 * __thiscall FUN_00b71030(undefined4 *param_1,byte param_2)

{
  *param_1 = sh::TQualifierWrapperBase::vftable;
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x7c);
  }
  return param_1;
}



void FUN_00b71060(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = "invariant";
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar1 = iVar3 + 1;
    iVar3 = iVar2;
  } while ("invariant"[iVar1] != '\0');
  param_1[1] = iVar2;
  return;
}



void FUN_00b71080(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = "layout";
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar1 = iVar3 + 1;
    iVar3 = iVar2;
  } while ("layout"[iVar1] != '\0');
  param_1[1] = iVar2;
  return;
}



void FUN_00b710a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = "precise";
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar1 = iVar3 + 1;
    iVar3 = iVar2;
  } while ("precise"[iVar1] != '\0');
  param_1[1] = iVar2;
  return;
}



undefined4 * __thiscall FUN_00b710c0(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    cVar3 = 'l';
    pcVar1 = "lowp";
  }
  else if ((iVar2 == 2) || (iVar2 != 3)) {
    cVar3 = 'm';
    pcVar1 = "mediump";
  }
  else {
    cVar3 = 'h';
    pcVar1 = "highp";
  }
  iVar2 = 0;
  *param_2 = pcVar1;
  while (cVar3 != '\0') {
    iVar2 = iVar2 + 1;
    cVar3 = pcVar1[iVar2];
  }
  param_2[1] = iVar2;
  return param_2;
}



void __thiscall FUN_00b77380(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 auStack_8 [8];
  
  if ((*(byte *)(*(int *)(param_2 + 0x18) + 0xf) & 0xf) == 3) {
    return;
  }
  puVar5 = (undefined4 *)func_0x00aea310(auStack_8);
  uVar1 = puVar5[1];
  if (uVar1 != *(uint *)(param_1 + 0x5c)) {
    return;
  }
  piVar6 = (int *)&DAT_0112e1b4;
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    piVar6 = *(int **)(param_1 + 0x58);
  }
  piVar4 = (int *)&DAT_0112e1b4;
  if ((int *)*puVar5 != (int *)0x0) {
    piVar4 = (int *)*puVar5;
  }
  while (uVar3 = uVar1 - 4, 3 < uVar1) {
    if (*piVar4 != *piVar6) goto LAB_00b773e6;
    piVar6 = piVar6 + 1;
    piVar4 = piVar4 + 1;
    uVar1 = uVar3;
  }
  if (uVar3 != 0xfffffffc) {
LAB_00b773e6:
    if (((char)*piVar4 != (char)*piVar6) ||
       ((uVar3 != 0xfffffffd &&
        ((*(char *)((int)piVar4 + 1) != *(char *)((int)piVar6 + 1) ||
         ((uVar3 != 0xfffffffe &&
          ((*(char *)((int)piVar4 + 2) != *(char *)((int)piVar6 + 2) ||
           ((uVar3 != 0xffffffff && (*(char *)((int)piVar4 + 3) != *(char *)((int)piVar6 + 3))))))))
         ))))) {
      bVar2 = false;
      goto LAB_00b77419;
    }
  }
  bVar2 = true;
LAB_00b77419:
  if (bVar2) {
    *(int *)(param_1 + 0x60) = param_2;
  }
  return;
}



int __thiscall FUN_00b77700(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  
  sVar1 = *(short *)(param_3 + 0x14);
  if ((sVar1 == 4) || (sVar1 == 3)) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return (uint)(byte)((ushort)sVar1 >> 8) << 8;
}



uint FUN_00b77a40(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6718b;
  iStack_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall(uVar3);
  puVar4 = (undefined4 *)(*pcVar1)();
  puVar2 = (undefined4 *)puVar4[1];
  for (puVar8 = (undefined4 *)*puVar4; puVar8 != puVar2; puVar8 = puVar8 + 1) {
    pcStack_14 = (code *)*puVar8;
    pcStack_18 = *(code **)(*(int *)pcStack_14 + 0x48);
    _guard_check_icall(uVar3);
    iStack_20 = (*pcStack_18)();
    pcStack_18 = *(code **)(*(int *)pcStack_14 + 0x30);
    _guard_check_icall();
    iVar5 = (*pcStack_18)();
    iVar6 = iStack_20;
    if (iVar5 != 0) {
      pcStack_18 = *(code **)(iVar5 + 0xbc);
      pcStack_14 = *(code **)(*(int *)pcStack_18 + 0x48);
      _guard_check_icall();
      iVar6 = (*pcStack_14)();
    }
    pcStack_18 = *(code **)(iVar6 + 0x18);
    func_0x00ad78b0();
    iStack_28 = func_0x00ad7620(0x18);
    uStack_8 = 6;
    if (iStack_28 == 0) {
      pcStack_14 = (code *)0x0;
    }
    else {
      iStack_20 = *(int *)((int)pcStack_18 + 0x10);
      uStack_24 = CONCAT31(uStack_24._1_3_,*(undefined1 *)((int)pcStack_18 + 0xf)) & 0xffffff0f;
      uVar7 = func_0x00aee9d0(auStack_38);
      pcStack_14 = (code *)func_0x00aee0e0(*(undefined4 *)(iStack_1c + 0x20),uVar7,iStack_20,
                                           uStack_24,0);
    }
    uStack_8 = 0xffffffff;
    func_0x00ad78b0();
    iStack_30 = func_0x00ad7620(0x1c);
    uStack_8 = 7;
    if (iStack_30 == 0) {
      pcStack_14 = (code *)0x0;
    }
    else {
      pcStack_14 = (code *)func_0x00ae10c0(pcStack_14);
    }
    iStack_2c = (int)pcStack_18;
    uStack_8 = 0xffffffff;
    puVar4 = (undefined4 *)func_0x00b1b9c0(auStack_40,&iStack_2c);
    puVar4 = (undefined4 *)*puVar4;
    puVar4[3] = pcStack_14;
  }
  *unaff_FS_OFFSET = iStack_10;
  return (uint)puVar4 & 0xffffff00;
}



void __thiscall FUN_00b77be0(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x58)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x5c) + 0x58);
    _guard_check_icall(1);
    uVar2 = (*pcVar1)();
    func_0x00ade720(uVar2);
  }
  return;
}



void __thiscall FUN_00b77c20(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uStack_c;
  undefined1 auStack_8 [8];
  
  uStack_c = *(uint *)(param_2 + 0x18);
  iVar1 = *(int *)(param_1 + 0x58);
  iVar3 = func_0x00887e10(auStack_8,&uStack_c,
                          ((((uStack_c & 0xff ^ 0x811c9dc5) * 0x1000193 ^ uStack_c >> 8 & 0xff) *
                            0x1000193 ^ uStack_c >> 0x10 & 0xff) * 0x1000193 ^ uStack_c >> 0x18) *
                          0x1000193);
  iVar3 = *(int *)(iVar3 + 4);
  if ((iVar3 != 0) && (iVar3 != *(int *)(iVar1 + 4))) {
    pcVar2 = *(code **)(**(int **)(iVar3 + 0xc) + 0x58);
    _guard_check_icall(1);
    uVar4 = (*pcVar2)();
    func_0x00ade720(uVar4);
  }
  return;
}



undefined4 __thiscall FUN_00b78e70(undefined4 param_1,byte param_2)

{
  func_0x00adddc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x7c);
  }
  return param_1;
}



void FUN_00b7a390(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



undefined4 __thiscall FUN_00b7a3b0(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [16];
  
  if ((short)param_3[0x2e] == 7) {
    pcVar1 = *(code **)(*param_3 + 0x7c);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    if (param_2 == 0) {
      if (*(int *)(iVar2 + 0x84) != 0) {
        uVar3 = func_0x00b79cc0(&uStack_18,iVar2);
        func_0x00b660c0(uVar3);
        uVar3 = func_0x00b25e60(&stack0xffffffdc,iVar2);
        func_0x00b660c0(uVar3);
        func_0x0046a880(&DAT_011434e0,1);
        return 1;
      }
      uVar3 = func_0x00b79cc0(&uStack_18,iVar2);
      func_0x00b660c0(uVar3);
      func_0x0046a880(&DAT_011434e0,1);
      return 1;
    }
    if (param_2 == 1) {
      func_0x0046a880(&DAT_0112e444,2);
      return 1;
    }
    if (param_2 == 2) {
      func_0x0046a880(&DAT_0112e458,1);
      return 1;
    }
  }
  else {
    func_0x00aee9d0(&uStack_18);
    if (unaff_retaddr == 0) {
      if ((short)param_3[0x2e] == 1) {
        iVar2 = func_0x00b79d40(auStack_14,param_3[0x34]);
      }
      else {
        iVar2 = param_1[0x1e];
        pcVar1 = *(code **)(*param_1 + 0x70);
        uVar3 = func_0x00aee9d0(auStack_14);
        _guard_check_icall(auStack_10,uVar3,iVar2);
        iVar2 = (*pcVar1)();
      }
      uStack_18 = *(undefined4 *)(iVar2 + 4);
    }
    func_0x00b7c120(unaff_retaddr,&stack0xffffffe4,(char)param_3[0x33]);
  }
  return 1;
}



undefined1 __thiscall FUN_00b7a540(int param_1,int param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_retaddr;
  int iStack_20;
  undefined1 uStack_9;
  
  uStack_9 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x58) >> 0x18);
  switch(*(undefined2 *)(param_3 + 0xb8)) {
  case 0x11:
    if (param_2 == 0) {
LAB_00b7a57d:
      iStack_20 = 1;
      func_0x0046a880(&DAT_011434e0);
      return uStack_9;
    }
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_0101f568);
      return uStack_9;
    }
    break;
  case 0x12:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_00ffa508);
      return uStack_9;
    }
    break;
  case 0x13:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_0101f56c);
      return uStack_9;
    }
    break;
  case 0x14:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_0101f570);
      return uStack_9;
    }
    break;
  case 0x15:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_0101f574);
      return uStack_9;
    }
    break;
  case 0x16:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f47c);
      return uStack_9;
    }
    break;
  case 0x17:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f484);
      return uStack_9;
    }
    break;
  case 0x18:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_0101f590);
      return uStack_9;
    }
    break;
  case 0x19:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_01008044);
      return uStack_9;
    }
    break;
  case 0x1a:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f594);
      return uStack_9;
    }
    break;
  case 0x1b:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f59c);
      return uStack_9;
    }
    break;
  case 0x1c:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 2;
      func_0x0046a880(&DAT_0112e444);
      return uStack_9;
    }
    break;
  case 0x22:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f5e0);
      return uStack_9;
    }
    break;
  case 0x23:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_01031be8);
      return uStack_9;
    }
    break;
  case 0x24:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f5f0);
      return uStack_9;
    }
    break;
  case 0x25:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f578);
      return uStack_9;
    }
    break;
  case 0x26:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f580);
      return uStack_9;
    }
    break;
  case 0x27:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_0101f588);
      return uStack_9;
    }
    break;
  case 0x28:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_0101f58c);
      return uStack_9;
    }
    break;
  case 0x29:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_011a0440);
      return uStack_9;
    }
    break;
  case 0x2a:
  case 0x2b:
    if (param_2 == 1) {
      iStack_20 = param_2;
      func_0x0046a880(&DAT_0119cad0);
      return uStack_9;
    }
    if (param_2 != 2) {
      return 1;
    }
    iStack_20 = 1;
    func_0x0046a880(&DAT_0112e28c);
    return uStack_9;
  case 0x2c:
    if (param_2 != 1) {
      return 1;
    }
    iStack_20 = 1;
    func_0x0046a880(&DAT_0113c6d8);
    pcVar2 = *(code **)(**(int **)(param_3 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar4 = (*pcVar2)();
    iVar4 = *(int *)(iVar4 + 0x90);
    goto LAB_00b7a83d;
  case 0x2d:
    if (param_2 != 1) {
      return 1;
    }
    iStack_20 = 1;
    func_0x0046a880(&DAT_0113c6d8);
    pcVar2 = *(code **)(**(int **)(param_3 + 0xbc) + 0x7c);
    _guard_check_icall();
    iVar4 = (*pcVar2)();
    iVar4 = *(int *)(iVar4 + 0x8c);
LAB_00b7a83d:
    pcVar2 = *(code **)(**(int **)(unaff_retaddr + 0xc0) + 0x10);
    _guard_check_icall();
    (*pcVar2)();
    piVar1 = *(int **)(iVar4 + 0x10);
    iVar4 = func_0x00aea2f0(0);
    uVar3 = func_0x00b79d00(&iStack_20,*(undefined4 *)(*piVar1 + iVar4 * 4));
    func_0x00b660c0(uVar3);
    return 0;
  case 0x2e:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 3;
      func_0x0046a880(&DAT_00fa32d8);
      return uStack_9;
    }
    break;
  case 0x2f:
    if (param_2 != 1) {
      return 1;
    }
    iStack_20 = 3;
    func_0x0046a880(&DAT_00fa32d8);
    *(undefined1 *)(param_1 + 0x5c) = 0;
    return uStack_9;
  case 0x30:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f498);
      return uStack_9;
    }
    break;
  case 0x31:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f4a0);
      return uStack_9;
    }
    break;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f4a8);
      return uStack_9;
    }
    break;
  case 0x37:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f500);
      return uStack_9;
    }
    break;
  case 0x38:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f508);
      return uStack_9;
    }
    break;
  case 0x39:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 5;
      func_0x0046a880(&DAT_0101f510);
      return uStack_9;
    }
    break;
  case 0x3a:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 5;
      func_0x0046a880(&DAT_0101f518);
      return uStack_9;
    }
    break;
  case 0x3b:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f520);
      return uStack_9;
    }
    break;
  case 0x3c:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f528);
      return uStack_9;
    }
    break;
  case 0x3d:
    if (param_2 == 0) goto LAB_00b7a57d;
    if (param_2 == 1) {
      iStack_20 = 4;
      func_0x0046a880(&DAT_0101f530);
      return uStack_9;
    }
    break;
  default:
    goto LAB_00b7ac29;
  }
  if (param_2 == 2) {
    iStack_20 = 1;
    func_0x0046a880(&DAT_0112e458);
  }
LAB_00b7ac29:
  return 1;
}



uint __thiscall FUN_00b7acf0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  piVar1 = *(int **)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
  if (iVar4 != 1 && -1 < iVar4 + -1) {
    func_0x0046a880(&DAT_00ffb7f4,2);
  }
  pcVar2 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  piVar5 = (int *)(*pcVar2)();
  puVar9 = (undefined4 *)*piVar5;
  pcVar2 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  iVar4 = (*pcVar2)();
  if (puVar9 != *(undefined4 **)(iVar4 + 4)) {
    do {
      pcVar2 = *(code **)(*(int *)*puVar9 + 0x44);
      _guard_check_icall();
      iVar4 = (*pcVar2)();
      iVar8 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3) + (-1 - (uint)(iVar4 != 0))
      ;
      iVar4 = 10;
      if (iVar8 < 10) {
        iVar4 = iVar8;
      }
      pcVar6 = "                   " + iVar4 * -2 + 0x13;
      do {
        cVar3 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
      func_0x0046a880("                   " + iVar4 * -2 + 0x13,
                      (int)pcVar6 - (int)(&UNK_01031b19 + iVar4 * -2));
      pcVar2 = *(code **)(*piVar1 + 4);
      iVar8 = param_1;
      _guard_check_icall(param_1);
      (*pcVar2)();
      cVar3 = func_0x00b79d90(param_1);
      if (cVar3 != '\0') {
        func_0x0046a880(&DAT_00ffb794,2);
      }
      puVar9 = puVar9 + 1;
      pcVar2 = *(code **)(*(int *)(&UNK_01031b19 + iVar4 * -2) + 8);
      _guard_check_icall(iVar8);
      iVar4 = (*pcVar2)();
    } while (puVar9 != *(undefined4 **)(iVar4 + 4));
  }
  uVar7 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2) - 1;
  if (0 < (int)uVar7) {
    iVar8 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3) + -2;
    iVar4 = 10;
    if (iVar8 < 10) {
      iVar4 = iVar8;
    }
    pcVar6 = "                   " + iVar4 * -2 + 0x13;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    func_0x0046a880("                   " + iVar4 * -2 + 0x13,
                    (int)pcVar6 - (int)(&UNK_01031b19 + iVar4 * -2));
    uVar7 = func_0x0046a880(&DAT_00ffb85c,2);
  }
  return uVar7 & 0xffffff00;
}



undefined4 FUN_00b7ae90(int param_1,int param_2)

{
  switch(*(ushort *)(param_2 + 0x14) - 3) {
  case 0:
    if (param_1 == 0) {
      func_0x0046a880("discard",7);
      return 1;
    }
    break;
  case 1:
    if (param_1 == 0) {
      func_0x0046a880("return ",7);
    }
    break;
  case 2:
    if (param_1 == 0) {
      func_0x0046a880("break",5);
      return 1;
    }
    break;
  case 3:
    if (param_1 == 0) {
      func_0x0046a880("continue",8);
      return 1;
    }
  }
  return 1;
}



undefined4 FUN_00b7af30(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x14) == 0) {
    func_0x0046a880("default:\n",9);
    return 0;
  }
  if (param_1 == 0) {
    func_0x0046a880("case (",6);
    return 1;
  }
  if (param_1 == 2) {
    func_0x0046a880(&DAT_0101fa08,3);
  }
  return 1;
}



void FUN_00b7b010(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x74);
  _guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall();
  uVar3 = (*pcVar1)();
  func_0x00b7bbd0(uVar3,uVar2);
  return;
}



undefined4 __thiscall FUN_00b7b050(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int *piVar9;
  bool bVar10;
  int iStack_14;
  code *pcStack_10;
  int *piStack_c;
  int *piStack_8;
  int iStack_4;
  
  iStack_14 = param_1[0x16];
  if (param_2 != 0) {
    if (param_2 != 1) {
      *(undefined1 *)(param_1 + 0x17) = 0;
    }
    return 1;
  }
  pcVar2 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  piStack_8 = param_1;
  _guard_check_icall();
  puVar3 = (undefined4 *)(*pcVar2)();
  pcVar2 = *(code **)(**(int **)*puVar3 + 0xc);
  _guard_check_icall();
  piStack_c = (int *)(*pcVar2)();
  pcVar2 = *(code **)(*piStack_c + 0x48);
  _guard_check_icall();
  iStack_4 = (*pcVar2)();
  if (iStack_4 == 0) {
    pcVar2 = *(code **)(*piStack_c + 0x30);
    _guard_check_icall();
    iVar4 = (*pcVar2)();
    pcVar2 = *(code **)(**(int **)(iVar4 + 0xbc) + 0x48);
    _guard_check_icall();
    iStack_4 = (*pcVar2)();
  }
  puVar3 = (undefined4 *)func_0x00aea310(&pcStack_10);
  pbVar8 = &DAT_0112e1b4;
  if ((byte *)*puVar3 != (byte *)0x0) {
    pbVar8 = (byte *)*puVar3;
  }
  pcVar5 = "gl_ClipDistance";
  do {
    bVar1 = *pbVar8;
    bVar10 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00b7b130:
      uVar6 = -(uint)bVar10 | 1;
      goto LAB_00b7b135;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar10 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b7b130;
    pbVar8 = pbVar8 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  uVar6 = 0;
LAB_00b7b135:
  piVar9 = piStack_c;
  if (uVar6 != 0) {
    puVar3 = (undefined4 *)func_0x00aea310(&iStack_14);
    piVar9 = piStack_c;
    pbVar8 = &DAT_0112e1b4;
    if ((byte *)*puVar3 != (byte *)0x0) {
      pbVar8 = (byte *)*puVar3;
    }
    pcVar5 = "gl_CullDistance";
    do {
      bVar1 = *pbVar8;
      bVar10 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00b7b171:
        uVar6 = -(uint)bVar10 | 1;
        goto LAB_00b7b176;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar10 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b7b171;
      pbVar8 = pbVar8 + 2;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_00b7b176:
    if (uVar6 != 0) {
      pcVar2 = *(code **)(*piStack_c + 100);
      _guard_check_icall(piStack_8);
      (*pcVar2)();
    }
  }
  pcStack_10 = *(code **)(*piVar9 + 0x68);
  iVar4 = piStack_8[6];
  pcVar2 = *(code **)(*piStack_8 + 0x7c);
  _guard_check_icall();
  uVar7 = (*pcVar2)();
  pcVar2 = pcStack_10;
  _guard_check_icall(uVar7,iVar4,0);
  piVar9 = piStack_c;
  (*pcVar2)();
  if ((*(byte *)(*(int *)(iStack_14 + 0x18) + 0xf) & 0xf) != 3) {
    func_0x0046a880(&DAT_0113c2f0,1);
  }
  *(undefined1 *)(piVar9 + 0x17) = 1;
  return 1;
}



uint __thiscall FUN_00b7b220(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  FUN_00ade900(param_1);
  iVar2 = *(int *)(param_3 + 0x18);
  if (iVar2 == 0) {
    uVar4 = func_0x0046a880(&DAT_01031c1c,4);
  }
  else {
    iVar3 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3) + -1;
    iVar5 = 10;
    if (iVar3 < 10) {
      iVar5 = iVar3;
    }
    pcVar6 = "                   " + iVar5 * -2 + 0x13;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    func_0x0046a880("                   " + iVar5 * -2 + 0x13,
                    (int)pcVar6 - (int)(&UNK_01031b19 + iVar5 * -2));
    FUN_00ade830(param_1);
    uVar4 = func_0x00b79d90(iVar2);
    if ((char)uVar4 != '\0') {
      uVar4 = func_0x0046a880(&DAT_00ffb794,2);
      return uVar4 & 0xffffff00;
    }
  }
  return uVar4 & 0xffffff00;
}



void __thiscall FUN_00b7b2c0(int *param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_1c [8];
  int iStack_14;
  
  iStack_14 = param_1[0x16];
  pcVar1 = *(code **)(*param_2 + 0x7c);
  piStack_2c = param_1;
  _guard_check_icall();
  uStack_28 = (*pcVar1)();
  pcVar1 = *(code **)(*param_1 + 0x68);
  _guard_check_icall(uStack_28,param_2[6],0);
  (*pcVar1)();
  if (*(int *)(unaff_EBP + 0x84) != 0) {
    uVar4 = func_0x00b25e60(auStack_1c,unaff_EBP);
    func_0x00b660c0(uVar4);
  }
  piVar8 = (int *)&DAT_0113c2f0;
  func_0x0046a880(&DAT_0113c2f0,1);
  iVar11 = param_2[6];
  cVar3 = func_0x00aee990();
  if (cVar3 == '\0') {
    func_0x00b66b10(&stack0xffffffd0,iVar11,param_1[0x18],param_1[0x19]);
  }
  else {
    func_0x00aee9d0(&stack0xffffffd0);
  }
  puVar7 = &stack0xffffffcc;
  func_0x00b660c0();
  func_0x0046a880(&DAT_011434e0,1);
  iVar11 = param_2[6];
  uVar6 = 0;
  uVar10 = *(uint *)(iVar11 + 0x24);
  if (uVar10 != 0) {
    uVar5 = uVar10 - 1;
    do {
      iVar9 = *(int *)(*(int *)(iVar11 + 0x14) + uVar6 * 4);
      iVar2 = *(int *)(iVar9 + 0x10);
      pcVar1 = *(code **)(*piVar8 + 0x68);
      _guard_check_icall(iVar2,iVar9,1);
      (*pcVar1)();
      if ((*(byte *)(iVar9 + 0xf) & 0xf) != 3) {
        func_0x0046a880(&DAT_0113c2f0,1);
        func_0x00b66b10(&stack0xffffffc4,iVar9,*(undefined4 *)(puVar7 + 0x60),
                        *(undefined4 *)(puVar7 + 100));
        func_0x00b660c0(&stack0xffffffc4);
      }
      if (*(int *)(iVar2 + 0x84) != 0) {
        uVar4 = func_0x00b25e60(&piStack_2c,iVar2);
        func_0x00b660c0(uVar4);
      }
      if (uVar6 != uVar5) {
        func_0x0046a880(&DAT_0112e444,2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar10);
  }
  func_0x0046a880(&DAT_0112e458,1);
  return;
}



uint __thiscall FUN_00b7b470(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = "precise ";
  iVar2 = *(int *)(param_3 + 0x14);
  if (*(char *)(param_3 + 0x18) == '\0') {
    pcVar5 = "invariant ";
  }
  pcVar3 = pcVar5;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046a880(pcVar5,(int)pcVar3 - (int)(pcVar5 + 1));
  func_0x00b66b10(&stack0xfffffff0,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(param_1 + 0x60),
                  *(undefined4 *)(param_1 + 100));
  uVar4 = func_0x00b660c0(&stack0xfffffff0);
  return uVar4 & 0xffffff00;
}



uint __fastcall FUN_00b7b4e0(int param_1)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_EDI;
  int unaff_retaddr;
  undefined *puVar10;
  undefined4 uVar11;
  
  func_0x0046a880(&DAT_0101f9d8,4);
  pcVar3 = *(code **)(**(int **)(unaff_retaddr + 0x14) + 4);
  _guard_check_icall(param_1);
  (*pcVar3)();
  func_0x0046a880(&DAT_011a2310,2);
  piVar1 = (int *)(param_1 + 0x4c);
  if (*(int *)(unaff_retaddr + 0x18) == 0) {
    uVar11 = 4;
    puVar10 = &DAT_01031c1c;
  }
  else {
    iVar4 = (*(int *)(param_1 + 0x50) - *piVar1 >> 3) + -1;
    iVar8 = 10;
    if (iVar4 < 10) {
      iVar8 = iVar4;
    }
    pcVar7 = "                   " + iVar8 * -2 + 0x13;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    func_0x0046a880("                   " + iVar8 * -2 + 0x13,
                    (int)pcVar7 - (int)(&UNK_01031b19 + iVar8 * -2));
    FUN_00ade830(param_1);
    uVar5 = func_0x00b79d90(unaff_EDI);
    if ((char)uVar5 == '\0') goto LAB_00b7b5a7;
    uVar11 = 2;
    puVar10 = &DAT_00ffb794;
  }
  uVar5 = func_0x0046a880(puVar10,uVar11);
LAB_00b7b5a7:
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar4 = (*(int *)(param_1 + 0x50) - *piVar1 >> 3) + -1;
    iVar8 = 10;
    if (iVar4 < 10) {
      iVar8 = iVar4;
    }
    pcVar7 = "                   " + iVar8 * -2 + 0x13;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    iVar4 = (int)pcVar7 - (int)(&UNK_01031b19 + iVar8 * -2);
    func_0x0046a880("                   " + iVar8 * -2 + 0x13,iVar4);
    func_0x0046a880("else\n",5);
    iVar8 = *(int *)(param_1 + 0x1c);
    if (iVar8 == 0) {
      uVar5 = func_0x0046a880(&DAT_01031c1c,4);
    }
    else {
      iVar6 = (*(int *)(param_1 + 0x50) - *piVar1 >> 3) + -1;
      iVar9 = 10;
      if (iVar6 < 10) {
        iVar9 = iVar6;
      }
      pcVar7 = "                   " + iVar9 * -2 + 0x13;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      func_0x0046a880("                   " + iVar9 * -2 + 0x13,
                      (int)pcVar7 - (int)(&UNK_01031b19 + iVar9 * -2));
      FUN_00ade830(iVar4);
      uVar5 = func_0x00b79d90(iVar8);
      if ((char)uVar5 != '\0') {
        uVar5 = func_0x0046a880(&DAT_00ffb794,2);
        return uVar5 & 0xffffff00;
      }
    }
  }
  return uVar5 & 0xffffff00;
}



uint __thiscall FUN_00b7b690(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    func_0x0046a880("for (",5);
    if (*(int **)(param_3 + 0x18) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(param_3 + 0x18) + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
    }
    func_0x0046a880(&DAT_0101fa3c,2);
    if (*(int **)(param_3 + 0x1c) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(param_3 + 0x1c) + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
    }
    func_0x0046a880(&DAT_0101fa3c,2);
    if (*(int **)(param_3 + 0x20) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(param_3 + 0x20) + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
    }
    func_0x0046a880(&DAT_011a2310,2);
    iVar3 = *(int *)(param_3 + 0x24);
    if (iVar3 == 0) {
      uVar5 = func_0x0046a880(&DAT_01031c1c,4);
      return uVar5 & 0xffffff00;
    }
    iVar4 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3) + -1;
    iVar6 = 10;
    if (iVar4 < 10) {
      iVar6 = iVar4;
    }
    pcVar7 = "                   " + iVar6 * -2 + 0x13;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    func_0x0046a880("                   " + iVar6 * -2 + 0x13,
                    (int)pcVar7 - (int)(&UNK_01031b19 + iVar6 * -2));
    FUN_00ade830(param_1);
    uVar5 = func_0x00b79d90(iVar3);
    if ((char)uVar5 != '\0') {
      uVar5 = func_0x0046a880(&DAT_00ffb794,2);
      return uVar5 & 0xffffff00;
    }
  }
  else {
    if (*(int *)(param_3 + 0x14) == 1) {
      func_0x0046a880("while (",7);
      pcVar2 = *(code **)(**(int **)(param_3 + 0x1c) + 4);
      _guard_check_icall(param_1);
      (*pcVar2)();
      func_0x0046a880(&DAT_011a2310,2);
      uVar5 = func_0x00b7af80(*(undefined4 *)(param_3 + 0x24));
      return uVar5 & 0xffffff00;
    }
    func_0x0046a880(&DAT_01031c18,3);
    func_0x00b7af80(*(undefined4 *)(param_3 + 0x24));
    func_0x0046a880("while (",7);
    pcVar2 = *(code **)(**(int **)(param_3 + 0x1c) + 4);
    _guard_check_icall(param_1);
    (*pcVar2)();
    uVar5 = func_0x0046a880(&DAT_0101f8a4,3);
  }
  return uVar5 & 0xffffff00;
}



void FUN_00b7b870(void)

{
  int unaff_ESI;
  char *pcVar1;
  undefined4 uVar2;
  
  func_0x0046a880(&DAT_0113d23c,1);
  switch(*(undefined4 *)(unaff_ESI + 0x14)) {
  case 0:
    uVar2 = 7;
    pcVar1 = "#define";
    break;
  case 1:
    uVar2 = 6;
    pcVar1 = "#ifdef";
    break;
  case 2:
    uVar2 = 3;
    pcVar1 = "#if";
    break;
  case 3:
    uVar2 = 6;
    pcVar1 = "#endif";
    break;
  default:
    goto LAB_00b7b8bf;
  }
  func_0x0046a880(pcVar1,uVar2);
LAB_00b7b8bf:
  if (*(int *)(unaff_ESI + 0x1c) != 0) {
    func_0x0046a880(&DAT_0113c2f0,1);
    func_0x00b660c0(unaff_ESI + 0x18);
  }
  func_0x0046a880(&DAT_0113d23c,1);
  return;
}



undefined4 FUN_00b7b910(int param_1)

{
  if (param_1 == 0) {
    func_0x0046a880("switch (",8);
    return 1;
  }
  if (param_1 == 1) {
    func_0x0046a880(&DAT_01002298,2);
  }
  return 1;
}



undefined1 __thiscall FUN_00b7b950(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  if (param_2 == 2) {
    func_0x0046a880(&DAT_0113c6d8,1);
    func_0x00aebb40(uVar1);
  }
  return 1;
}



void __thiscall FUN_00b7b980(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_8 [8];
  
  func_0x00b66b10(auStack_8,param_2[6],*(undefined4 *)(param_1 + 0x60),
                  *(undefined4 *)(param_1 + 100));
  func_0x00b660c0(auStack_8);
  if (*(char *)(param_1 + 0x5c) != '\0') {
    pcVar1 = *(code **)(*param_2 + 0x7c);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    if (*(int *)(iVar2 + 0x84) != 0) {
      pcVar1 = *(code **)(*param_2 + 0x7c);
      _guard_check_icall();
      uVar3 = (*pcVar1)();
      uVar3 = func_0x00b25e60(&stack0xfffffff4,uVar3);
      func_0x00b660c0(uVar3);
    }
  }
  return;
}



uint __fastcall FUN_00b7ba00(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  int unaff_retaddr;
  
  func_0x0046a880(&DAT_01031bf0,2);
  pcVar1 = *(code **)(**(int **)(unaff_retaddr + 0xb8) + 4);
  _guard_check_icall(param_1);
  (*pcVar1)();
  func_0x0046a880(") ? (",5);
  pcVar1 = *(code **)(**(int **)(unaff_retaddr + 0xbc) + 4);
  _guard_check_icall(param_1);
  (*pcVar1)();
  func_0x0046a880(") : (",5);
  pcVar1 = *(code **)(**(int **)(unaff_retaddr + 0xc0) + 4);
  _guard_check_icall(param_1);
  (*pcVar1)();
  uVar2 = func_0x0046a880(&DAT_0101f5a4,2);
  return uVar2 & 0xffffff00;
}



undefined4 FUN_00b7bab0(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 unaff_retaddr;
  undefined1 auStack_8 [8];
  
  pcVar5 = ")";
  switch(*(undefined2 *)(param_2 + 0xb8)) {
  case 8:
    pcVar4 = "(-";
    break;
  case 9:
    pcVar4 = "(+";
    break;
  case 10:
    pcVar4 = "(!";
    break;
  case 0xb:
    pcVar4 = "(~";
    break;
  case 0xc:
    pcVar4 = "(";
    pcVar5 = "++)";
    break;
  case 0xd:
    pcVar4 = "(";
    pcVar5 = "--)";
    break;
  case 0xe:
    pcVar4 = "(++";
    break;
  case 0xf:
    pcVar4 = "(--";
    break;
  case 0x10:
    pcVar4 = "((";
    pcVar5 = ").length())";
    break;
  default:
    uVar2 = *(undefined1 *)(param_2 + 0xc0);
    uVar3 = func_0x00aee9d0(auStack_8);
    func_0x00b7c120(unaff_retaddr,uVar3,uVar2);
    return 1;
  }
  if (param_1 != 0) {
    if (param_1 == 2) {
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      func_0x0046a880(pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
    }
    return 1;
  }
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  func_0x0046a880(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
  return 1;
}



void FUN_00b7c1b0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 ****ppppuVar5;
  int iVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool bVar8;
  char *pcVar9;
  int iStack_a4;
  int *piStack_a0;
  int iStack_9c;
  char cStack_95;
  int aiStack_94 [7];
  int aiStack_78 [3];
  int iStack_6c;
  char cStack_64;
  int iStack_40;
  char cStack_38;
  undefined4 ***apppuStack_2c [4];
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f673ed;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pcVar1 = *(code **)(*param_1 + 0x7c);
  _guard_check_icall(uStack_14);
  piVar3 = (int *)(*pcVar1)();
  piVar7 = piVar3 + 5;
  piVar4 = aiStack_94;
  for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar4 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar4 = piVar4 + 1;
  }
  piStack_a0 = piVar3;
  if (*piVar3 == 0x5e) {
    bVar8 = piVar3[2] == 0x5d;
LAB_00b7c2b6:
    if (bVar8) goto LAB_00b7c501;
  }
  else {
    cVar2 = func_0x00b26720(piVar3[2]);
    if (((((cVar2 == '\0') && (piVar3[2] != 9)) &&
         (cVar2 = func_0x00b26a80(piVar3[2]), cVar2 == '\0')) ||
        ((aiStack_94[0] < 0 &&
         ((*(char *)(iStack_9c + 0x75) == '\0' ||
          (cVar2 = func_0x00b26720(piVar3[2]), cVar2 == '\0')))))) &&
       (((iVar6 = piVar3[2], iVar6 != 10 && (iVar6 != 0xd)) ||
        (((iStack_40 < 0 && (cStack_64 == '\0')) && ((iVar6 != 0xd || (cStack_38 == '\0')))))))) {
      iVar6 = *piVar3;
      cVar2 = func_0x00aef9e0(iVar6);
      if ((cVar2 == '\0') || (aiStack_78[0] == -1)) {
        if (0x20 < iVar6 - 0x33U) goto LAB_00b7c501;
        bVar8 = iStack_6c == 0;
        goto LAB_00b7c2b6;
      }
    }
  }
  if (*piVar3 != 0x5e) {
    piVar7 = piVar3 + 5;
    piVar4 = aiStack_94;
    for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar4 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar4 = piVar4 + 1;
    }
    func_0x0046a880("layout(",7);
    piVar7 = piStack_a0;
    cStack_95 = '\x01';
    cVar2 = func_0x00b26720(piStack_a0[2]);
    if ((((cVar2 != '\0') || (piVar7[2] == 9)) ||
        (cVar2 = func_0x00b26a80(piVar7[2]), cVar2 != '\0')) &&
       ((-1 < aiStack_94[0] ||
        ((*(char *)(iStack_9c + 0x75) != '\0' && (cVar2 = func_0x00b26720(piVar7[2]), cVar2 != '\0')
         ))))) {
      cStack_95 = '\0';
      func_0x0046a880("location = ",0xb);
      iStack_a4 = 0;
      piVar4 = &iStack_a4;
      if (-1 < aiStack_94[0]) {
        piVar4 = aiStack_94;
      }
      func_0x00af6e40(piVar4);
    }
    iVar6 = *piVar7;
    if ((((iVar6 - 8U < 0x2b) || (iVar6 - 0x33U < 0x21)) ||
        ((iVar6 == 6 || ((iVar6 - 0x54U < 3 || (iVar6 - 0x57U < 6)))))) && (-1 < aiStack_78[0])) {
      if (cStack_95 == '\0') {
        func_0x0046a880(&DAT_0112e444,2);
      }
      else {
        cStack_95 = '\0';
      }
      func_0x0046a880("binding = ",10);
      func_0x00af6e40(aiStack_78);
    }
    func_0x00b79900(apppuStack_2c,param_1);
    uStack_8 = 2;
    if (iStack_1c != 0) {
      if (cStack_95 == '\0') {
        func_0x0046a880(&DAT_0112e444,2);
      }
      ppppuVar5 = apppuStack_2c;
      if (0xf < uStack_18) {
        ppppuVar5 = (undefined4 ****)apppuStack_2c[0];
      }
      func_0x0046a880(ppppuVar5,iStack_1c);
    }
    func_0x0046a880(&DAT_01002298,2);
    FUN_00469ba0();
    goto LAB_00b7c501;
  }
  cVar2 = func_0x00af42a0(piVar3[2]);
  if (cVar2 != '\0') goto LAB_00b7c501;
  iVar6 = piVar3[0x23];
  func_0x0046a880("layout(",7);
  switch(*(undefined4 *)(iVar6 + 0x34)) {
  case 0:
  case 1:
    pcVar9 = "shared";
    break;
  case 2:
    pcVar9 = "packed";
    break;
  case 3:
    pcVar9 = "std140";
    break;
  case 4:
    pcVar9 = "std430";
    break;
  default:
    goto LAB_00b7c32d;
  }
  func_0x0046a880(pcVar9,6);
LAB_00b7c32d:
  if (-1 < *(int *)(iVar6 + 0x38)) {
    func_0x0046a880(&DAT_0112e444,2);
    func_0x0046a880("binding = ",10);
    piStack_a0 = *(int **)(iVar6 + 0x38);
    func_0x00af6e40(&piStack_a0);
  }
  func_0x0046a880(&DAT_01002298,2);
LAB_00b7c501:
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b7c540(int *param_1,int *param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  undefined1 auStack_3c [4];
  int iStack_38;
  char *pcStack_34;
  int iStack_30;
  int aiStack_2c [5];
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f67435;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  iStack_30 = param_1[0x16];
  iVar9 = param_2[2];
  if ((char)param_2[3] != '\0') {
    cVar3 = func_0x00a11910(param_1[0x1a],param_1[0x1b],param_1[0x1c],param_1[0x1e],uStack_14);
    if (cVar3 == '\0') {
      func_0x0046a880("invariant ",10);
    }
  }
  if (*(char *)((int)param_2 + 0xd) != '\0') {
    func_0x0046a880("precise ",8);
  }
  if ((iVar9 != 0) && (iVar9 != 1)) {
    pcVar4 = (char *)func_0x00b79e40(iVar9);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
      iStack_38 = param_1[0x16];
      pcStack_34 = pcVar4 + 1;
      pcVar8 = pcVar4;
      do {
        cVar3 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar3 != '\0');
      func_0x0046a880(pcVar4,(int)pcVar8 - (int)pcStack_34);
      func_0x0046a880(&DAT_0113c2f0,1);
    }
    puVar5 = (undefined4 *)func_0x00b79b60(aiStack_2c,param_2);
    puVar1 = puVar5 + 4;
    uStack_8 = 0;
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    func_0x0046a880(puVar5,*puVar1);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_18) {
      uVar7 = uStack_18 + 1;
      iVar9 = aiStack_2c[0];
      if (0xfff < uVar7) {
        iVar9 = *(int *)(aiStack_2c[0] + -4);
        uVar7 = uStack_18 + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar9) - 4U) {
          func_0x008aaf66();
          goto LAB_00b7c764;
        }
      }
      func_0x008ab812(iVar9,uVar7);
    }
  }
  if (param_4 != '\0') {
    puVar5 = (undefined4 *)func_0x00b79b60(aiStack_2c,param_2);
    puVar1 = puVar5 + 4;
    uStack_8 = 1;
    if (0xf < (uint)puVar5[5]) {
      puVar5 = (undefined4 *)*puVar5;
    }
    func_0x0046a880(puVar5,*puVar1);
    uStack_8 = 0xffffffff;
    if (0xf < uStack_18) {
      uVar7 = uStack_18 + 1;
      iVar9 = aiStack_2c[0];
      if (0xfff < uVar7) {
        iVar9 = *(int *)(aiStack_2c[0] + -4);
        uVar7 = uStack_18 + 0x24;
        if (0x1f < (aiStack_2c[0] - iVar9) - 4U) {
LAB_00b7c764:
          func_0x008aaf66();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      func_0x008ab812(iVar9,uVar7);
    }
  }
  if ((char)param_2[0x25] == '\0') {
    if (*param_2 == 0x5e) {
      func_0x00b79210(param_2);
    }
    else {
      pcVar2 = *(code **)(*param_1 + 0x6c);
      _guard_check_icall(param_2[1]);
      cVar3 = (*pcVar2)();
      if (cVar3 != '\0') {
        func_0x0046a880(&DAT_0113c2f0,1);
      }
      uVar6 = func_0x00b79cc0(auStack_3c,param_2);
      func_0x00b660c0(uVar6);
    }
  }
  else {
    func_0x00b796c0(param_2[0x24]);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void FUN_00b7c7a0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar9;
  int iVar8;
  
  pbVar6 = &DAT_0112e1b4;
  if ((byte *)*param_2 != (byte *)0x0) {
    pbVar6 = (byte *)*param_2;
  }
  pcVar4 = "textureVideoWEBGL";
  do {
    bVar1 = *pbVar6;
    bVar9 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00b7c7d6:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_00b7c7db;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar9 = bVar1 < ((byte *)pcVar4)[1];
    if (bVar1 != ((byte *)pcVar4)[1]) goto LAB_00b7c7d6;
    pbVar6 = pbVar6 + 2;
    pcVar4 = (char *)((byte *)pcVar4 + 2);
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_00b7c7db:
  if (uVar5 != 0) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    return;
  }
  if ((*(uint *)(param_3 + 4) & 0x800) != 0) {
    *param_1 = &DAT_0112e1b4;
    param_1[1] = 0;
    return;
  }
  *param_1 = "texture2D";
  iVar8 = 0;
  do {
    iVar7 = iVar8 + 1;
    iVar3 = iVar8 + 1;
    iVar8 = iVar7;
  } while ("texture2D"[iVar3] != '\0');
  param_1[1] = iVar7;
  return;
}



undefined4 __thiscall FUN_00b7c840(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 == 3) && (*(char *)(param_1 + 0x74) == '\0')) {
    pcVar2 = "mediump";
  }
  else if (param_2 == 1) {
    pcVar2 = "lowp";
  }
  else if ((param_2 == 2) || (param_2 != 3)) {
    pcVar2 = "mediump";
  }
  else {
    pcVar2 = "highp";
  }
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  func_0x0046a880(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return 1;
}



void __thiscall FUN_00b7ca80(int param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = *(code **)(*param_2 + 0x7c);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  if (1 < *(int *)(iVar3 + 4)) {
    cVar2 = func_0x00b7c940(param_2);
    if (cVar2 != '\0') {
      uVar4 = func_0x00b76e80(*(undefined4 *)(param_1 + 0x20),param_2,2,&stack0xfffffff8);
      func_0x00ade110(0);
      uVar4 = func_0x00b76660(uVar4,1);
      func_0x00ade720(uVar4);
    }
  }
  return;
}



int __fastcall FUN_00b7cbc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 100) + 4);
  func_0x007d9ca0((undefined4 *)(param_1 + 100));
  func_0x008ab812(*(undefined4 *)(param_1 + 100),0x28);
  func_0x007d9ca0((undefined4 *)(param_1 + 0x5c),*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
  func_0x008ab812(*(undefined4 *)(param_1 + 0x5c),0x28);
  func_0x00adddc0();
  if (((byte)uVar1 & 5) == 5) {
    _guard_check_icall(param_1,0x6c);
  }
  return param_1;
}



undefined1 FUN_00b7d150(undefined4 param_1,undefined4 param_2)

{
  func_0x00b7cc30(param_2);
  return 1;
}



undefined4 * __thiscall
FUN_00b7d190(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  undefined **ppuVar11;
  bool bVar12;
  
  pbVar8 = &DAT_0112e1b4;
  if ((byte *)*param_3 != (byte *)0x0) {
    pbVar8 = (byte *)*param_3;
  }
  pcVar4 = "textureVideoWEBGL";
  do {
    bVar1 = *pbVar8;
    bVar12 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00b7d1c8:
      uVar5 = -(uint)bVar12 | 1;
      goto LAB_00b7d1cd;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar12 = bVar1 < ((byte *)pcVar4)[1];
    if (bVar1 != ((byte *)pcVar4)[1]) goto LAB_00b7d1c8;
    pbVar8 = pbVar8 + 2;
    pcVar4 = (char *)((byte *)pcVar4 + 2);
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_00b7d1cd:
  if (uVar5 == 0) {
    if ((*(uint *)(param_4 + 4) & 0x800) != 0) {
      *param_2 = &DAT_0112e1b4;
      param_2[1] = 0;
      return param_2;
    }
    *param_2 = "texture2D";
    iVar10 = 0;
    do {
      iVar7 = iVar10 + 1;
      iVar6 = iVar10 + 1;
      iVar10 = iVar7;
    } while ("texture2D"[iVar6] != '\0');
    param_2[1] = iVar7;
    return param_2;
  }
  cVar3 = func_0x00a11880(*(undefined4 *)(param_1 + 0x70));
  ppuVar11 = &PTR_s_texture2D_012b5730;
  if (cVar3 == '\0') {
    ppuVar11 = &PTR_s_texture2DLodEXT_012b56f8;
  }
  iVar10 = 0;
  pbVar8 = *ppuVar11;
  do {
    if (pbVar8 == (byte *)0x0) {
      uVar2 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar2;
      return param_2;
    }
    pbVar9 = &DAT_0112e1b4;
    if ((byte *)*param_3 != (byte *)0x0) {
      pbVar9 = (byte *)*param_3;
    }
    do {
      bVar1 = *pbVar9;
      bVar12 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00b7d274:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_00b7d279;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar9[1];
      bVar12 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00b7d274;
      pbVar9 = pbVar9 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_00b7d279:
    if (uVar5 == 0) {
      iVar6 = 0;
      pcVar4 = ppuVar11[iVar10 + 1];
      *param_2 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        cVar3 = *pcVar4;
        while (cVar3 != '\0') {
          iVar6 = iVar6 + 1;
          cVar3 = pcVar4[iVar6];
        }
      }
      param_2[1] = iVar6;
      return param_2;
    }
    pbVar8 = ppuVar11[iVar10 + 2];
    iVar10 = iVar10 + 2;
  } while( true );
}



void __thiscall FUN_00b7d2d0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  byte *apbStack_8 [2];
  
  if ((*(byte *)(*(int *)(param_2 + 0x18) + 0xf) & 0xf) == 0) {
    func_0x00aea310(apbStack_8);
    pcVar5 = "gl_FragDepthEXT";
    pbVar3 = &DAT_0112e1b4;
    if (apbStack_8[0] != (byte *)0x0) {
      pbVar3 = apbStack_8[0];
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00b7d330:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_00b7d335;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b7d330;
      pbVar3 = pbVar3 + 2;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00b7d335:
    if (uVar4 == 0) {
      func_0x0046a880("gl_FragDepth",0xc);
      return;
    }
    pcVar5 = "gl_FragColor";
    pbVar3 = &DAT_0112e1b4;
    if (apbStack_8[0] != (byte *)0x0) {
      pbVar3 = apbStack_8[0];
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00b7d380:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_00b7d385;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b7d380;
      pbVar3 = pbVar3 + 2;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00b7d385:
    if ((uVar4 == 0) && (cVar2 = func_0x00a11880(*(undefined4 *)(param_1 + 0x70)), cVar2 != '\0')) {
      func_0x0046a880("webgl_FragColor",0xf);
      return;
    }
    pcVar5 = "gl_FragData";
    pbVar3 = &DAT_0112e1b4;
    if (apbStack_8[0] != (byte *)0x0) {
      pbVar3 = apbStack_8[0];
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00b7d3e0:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_00b7d3e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b7d3e0;
      pbVar3 = pbVar3 + 2;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00b7d3e5:
    if ((uVar4 == 0) && (cVar2 = func_0x00a11880(*(undefined4 *)(param_1 + 0x70)), cVar2 != '\0')) {
      func_0x0046a880("webgl_FragData",0xe);
      return;
    }
    pcVar5 = "gl_SecondaryFragColorEXT";
    pbVar3 = &DAT_0112e1b4;
    if (apbStack_8[0] != (byte *)0x0) {
      pbVar3 = apbStack_8[0];
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00b7d440:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_00b7d445;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b7d440;
      pbVar3 = pbVar3 + 2;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00b7d445:
    if (uVar4 == 0) {
      func_0x0046a880("webgl_SecondaryFragColor",0x18);
      return;
    }
    pcVar5 = "gl_SecondaryFragDataEXT";
    pbVar3 = &DAT_0112e1b4;
    if (apbStack_8[0] != (byte *)0x0) {
      pbVar3 = apbStack_8[0];
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00b7d490:
        uVar4 = -(uint)bVar6 | 1;
        goto LAB_00b7d495;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < ((byte *)pcVar5)[1];
      if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00b7d490;
      pcVar5 = (char *)((byte *)pcVar5 + 2);
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_00b7d495:
    if (uVar4 == 0) {
      func_0x0046a880("webgl_SecondaryFragData",0x17);
      return;
    }
  }
  FUN_00b7b980(param_2);
  return;
}



undefined4 __thiscall FUN_00b7d710(int param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((short)param_3[0x2e] == 7) {
    pcVar1 = *(code **)(*param_3 + 0x7c);
    _guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((1 < *(byte *)(iVar2 + 0x7c)) && (1 < *(byte *)(iVar2 + 0x7d))) {
      pcVar1 = *(code **)(param_3[0x2f] + 8);
      _guard_check_icall();
      piVar3 = (int *)(*pcVar1)();
      if ((piVar3[1] - *piVar3 & 0xfffffffcU) == 4) {
        pcVar1 = *(code **)(**(int **)*piVar3 + 0xc);
        _guard_check_icall();
        piVar3 = (int *)(*pcVar1)();
        if (piVar3 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar3 + 0x7c);
          _guard_check_icall();
          iVar2 = (*pcVar1)();
          if ((1 < *(byte *)(iVar2 + 0x7c)) && (1 < *(byte *)(iVar2 + 0x7d))) {
            uVar4 = 0x78;
            if (0x78 < *(int *)(param_1 + 0x58)) {
              uVar4 = *(undefined4 *)(param_1 + 0x58);
            }
            *(undefined4 *)(param_1 + 0x58) = uVar4;
          }
        }
      }
    }
    return 1;
  }
  return 1;
}



undefined4 __thiscall FUN_00b7d7c0(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar1 = *(code **)(*(int *)(param_3 + 0x14) + 8);
  _guard_check_icall();
  puVar2 = (undefined4 *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)*puVar2 + 0xc);
  _guard_check_icall();
  piVar3 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*piVar3 + 0x7c);
  _guard_check_icall();
  iVar4 = (*pcVar1)();
  if (*(char *)(iVar4 + 0xc) != '\0') {
    uVar5 = 0x78;
    if (0x78 < *(int *)(param_1 + 0x58)) {
      uVar5 = *(undefined4 *)(param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  return 1;
}



void __thiscall FUN_00b7d830(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  uVar1 = *(uint *)(*(int *)(param_2 + 0x18) + 0x24);
  if (uVar1 != 0) {
    piVar5 = *(int **)(*(int *)(param_2 + 0x18) + 0x14);
    while ((*(int *)(*(int *)(*piVar5 + 0x10) + 0x84) == 0 ||
           ((iVar2 = *(int *)(*(int *)(*piVar5 + 0x10) + 8), iVar2 != 0xf && (iVar2 != 0x10))))) {
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
    }
    uVar3 = 0x78;
    if (0x78 < *(int *)(param_1 + 0x58)) {
      uVar3 = *(undefined4 *)(param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0x58) = uVar3;
  }
  return;
}



undefined4 __thiscall FUN_00b7d890(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0x1a4;
  if (*(char *)(param_3 + 0x18) == '\0') {
    iVar1 = 0x78;
  }
  if (iVar1 < *(int *)(param_1 + 0x58)) {
    iVar1 = *(int *)(param_1 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



void __thiscall FUN_00b7d8c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_8 [8];
  
  if ((*(byte *)(*(int *)(param_2 + 0x18) + 0xf) & 0xf) == 0) {
    puVar1 = (undefined4 *)func_0x00aea310(auStack_8);
    if (puVar1[1] == 0xd) {
      pcVar4 = "gl_PointCoord";
      piVar3 = (int *)&DAT_0112e1b4;
      if ((int *)*puVar1 != (int *)0x0) {
        piVar3 = (int *)*puVar1;
      }
      uVar5 = 9;
      do {
        if (*piVar3 != *(int *)pcVar4) goto LAB_00b7d91b;
        piVar3 = piVar3 + 1;
        pcVar4 = (char *)((int)pcVar4 + 4);
        bVar6 = 3 < uVar5;
        uVar5 = uVar5 - 4;
      } while (bVar6);
      if ((char)*piVar3 == (char)*(int *)pcVar4) {
        bVar6 = true;
      }
      else {
LAB_00b7d91b:
        bVar6 = false;
      }
      if (bVar6) {
        uVar2 = 0x78;
        if (0x78 < *(int *)(param_1 + 0x58)) {
          uVar2 = *(undefined4 *)(param_1 + 0x58);
        }
        *(undefined4 *)(param_1 + 0x58) = uVar2;
      }
    }
  }
  return;
}



undefined4 __thiscall FUN_00b7e340(undefined4 param_1,byte param_2)

{
  func_0x00b7e220();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x80);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b7e370(undefined4 param_1,byte param_2)

{
  func_0x00b7e2d0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x7c);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b7e870(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == 0) && (*(short *)(param_3 + 0xb8) == 1)) {
    iVar1 = func_0x00aec9e0(*(int *)(param_3 + 0xd0) + 8);
    if (*(char *)(**(int **)(param_1 + 0x58) + 0xd + iVar1 * 0x24) != '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0xd) = 1;
      if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x78)) {
        func_0x00af1510(&stack0xfffffff4,*(int *)(param_1 + 0x78) + -4);
      }
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00b7e8e0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_14 [4];
  int aiStack_10 [4];
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_3 + 0xb8);
    if (uVar1 == 1) {
      iVar3 = func_0x00aec9e0(*(int *)(param_3 + 0xd0) + 8);
      if ((*(char *)(**(int **)(param_1 + 0x58) + iVar3 * 0x24) != '\0') &&
         (**(undefined1 **)(param_1 + 0x5c) = 1,
         *(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x6c))) {
        func_0x00af1510(&stack0xffffffe8,*(int *)(param_1 + 0x6c) + -4);
        return 1;
      }
    }
    else if ((0x3d < uVar1) && (0x5a < (ushort)(uVar1 - 0x3e))) {
      uVar4 = func_0x00aee9d0(auStack_14);
      func_0x00af12d0(aiStack_10,uVar4);
      if ((*(char *)(aiStack_10[0] + 0xd) == '\0') &&
         ((cVar2 = func_0x00af1bc0(uVar4,aiStack_10[0] + 0x10), cVar2 == '\0' &&
          (aiStack_10[0] != *(int *)(param_1 + 0x74))))) {
        func_0x00b7e750();
      }
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00b7e9c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(ushort *)(param_3 + 0xb8) - 1;
  if (((iVar1 == 0) && (param_2 == 0)) && (0 < *(int *)(param_1 + 0x68))) {
    iVar2 = func_0x00aec9e0(*(int *)(param_3 + 0xd0) + 8);
    iVar1 = **(int **)(param_1 + 0x58);
    *(undefined1 *)(iVar1 + 0xc + iVar2 * 0x24) = 1;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}



// WARNING: Control flow encountered bad instruction data

undefined4 __thiscall FUN_00b7ea10(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  undefined4 *puStack_10;
  uint uStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  if (param_2 == 0) {
    iStack_4 = param_1;
    switch(*(undefined2 *)(param_3 + 0x14)) {
    case 3:
    case 4:
      puStack_8 = *(undefined4 **)(param_1 + 0x68);
      puStack_10 = *(undefined4 **)(param_1 + 0x6c);
      if (puStack_8 != puStack_10) {
        do {
          pcVar1 = *(code **)(*(int *)*puStack_8 + 0x4c);
          _guard_check_icall();
          uStack_c = (*pcVar1)();
          if (uStack_c != 0) {
            func_0x00af1510(auStack_1c,&uStack_c);
          }
          puStack_8 = puStack_8 + 1;
        } while (puStack_8 != puStack_10);
      }
      break;
    case 5:
      pcVar1 = *(code **)(**(int **)(*(int *)(param_1 + 0x6c) + -4) + 0x4c);
      _guard_check_icall();
      puStack_8 = (undefined4 *)(*pcVar1)();
      if (puStack_8 != (undefined4 *)0x0) {
        func_0x00af1510(auStack_14,&puStack_8);
        return 1;
      }
      break;
    case 6:
      puStack_8 = (undefined4 *)0x0;
      uVar2 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2;
      do {
        if (uVar2 == 0) break;
        uStack_c = uVar2 - 1;
        if ((uint)(*(int *)(iStack_4 + 0x6c) - *(int *)(iStack_4 + 0x68) >> 2) <= uStack_c) {
          func_0x0046e490();
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        pcVar1 = *(code **)(**(int **)(*(int *)(iStack_4 + 0x68) + uStack_c * 4) + 0x4c);
        _guard_check_icall();
        puStack_8 = (undefined4 *)(*pcVar1)();
        uVar2 = uStack_c;
      } while (puStack_8 == (undefined4 *)0x0);
      func_0x00af1510(auStack_14,&puStack_8);
      return 1;
    }
  }
  return 1;
}



undefined4 __thiscall FUN_00b7ece0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint unaff_retaddr;
  undefined1 auStack_c [12];
  
  if (param_2 != 0) {
    if (param_2 == 2) {
      iVar2 = *(int *)(param_1 + 0x78);
      iVar4 = iVar2 + -4;
      *(int *)(param_1 + 0x78) = iVar4;
      iVar3 = func_0x008ace40(auStack_c,&param_3);
      if (((*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') &&
          (*(uint *)(*(int *)(iVar3 + 8) + 0x10) <= unaff_retaddr)) &&
         (*(int *)(param_1 + 0x74) != iVar4)) {
        func_0x00af1510(&stack0xffffffec,iVar2 + -8);
      }
    }
    return 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  if (puVar1 == *(undefined4 **)(param_1 + 0x7c)) {
    func_0x008c0640(puVar1);
    return 1;
  }
  *puVar1 = param_3;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 4;
  return 1;
}



undefined1 FUN_00b7ed80(undefined4 param_1,undefined4 param_2)

{
  func_0x00b7eb80(param_1,param_2);
  return 1;
}



undefined4 __thiscall FUN_00b7eda0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uStack_14;
  undefined1 auStack_10 [16];
  
  if (param_2 == 0) {
    uStack_14 = param_3;
    func_0x00b7e780(&uStack_14);
    iVar1 = *(int *)(param_1 + 0x5c);
    iVar2 = func_0x008ace40(auStack_10,&stack0xffffffe8);
    if (((*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') &&
        (*(uint *)(*(int *)(iVar2 + 8) + 0x10) <= param_3)) &&
       (*(undefined1 *)(iVar1 + 0xd) = 1, *(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x78))) {
      func_0x00af1510(&stack0xffffffe0,*(int *)(param_1 + 0x78) + -4);
    }
  }
  else if (param_2 == 2) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -4;
    return 1;
  }
  return 1;
}



undefined4 __fastcall FUN_00b7ee30(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 uVar4;
  uint unaff_retaddr;
  undefined1 auStack_c [8];
  int iStack_4;
  
  uVar2 = func_0x008ace40(auStack_c,&stack0x00000008);
  uVar3 = uVar2;
  if ((*(char *)(*(int *)(uVar2 + 8) + 0xd) == '\0') &&
     (uVar3 = unaff_retaddr, *(uint *)(*(int *)(uVar2 + 8) + 0x10) <= unaff_retaddr)) {
    uVar3 = CONCAT31((int3)(unaff_retaddr >> 8),1);
    bVar1 = true;
  }
  else {
    uVar3 = uVar3 & 0xffffff00;
    bVar1 = false;
  }
  uVar4 = (undefined3)(uVar3 >> 8);
  if (iStack_4 == 0) {
    if (bVar1) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      return CONCAT31(uVar4,1);
    }
  }
  else if ((iStack_4 == 2) && (bVar1)) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    return CONCAT31(uVar4,1);
  }
  return CONCAT31(uVar4,1);
}



undefined4 __thiscall FUN_00b7eea0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  if (param_2 == 0) {
    uStack_4 = param_3;
    func_0x00b7e780(&uStack_4);
    return 1;
  }
  if (param_2 == 2) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -4;
  }
  return 1;
}



undefined4 __thiscall FUN_00b7ef40(undefined4 param_1,byte param_2)

{
  func_0x00b7eee0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,100);
  }
  return param_1;
}



uint FUN_00b7f100(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piStack_8;
  undefined4 *puStack_4;
  
  pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 8);
  _guard_check_icall();
  iVar3 = (*pcVar1)();
  pcVar1 = *(code **)(**(int **)(*(int *)(iVar3 + 4) + -4) + 0xc);
  _guard_check_icall();
  piVar4 = (int *)(*pcVar1)();
  pcVar1 = *(code **)(*piVar4 + 0x7c);
  _guard_check_icall();
  piStack_8 = (int *)(*pcVar1)();
  if (*piStack_8 == 0x5e) {
    pcVar1 = *(code **)(*piVar4 + 0x7c);
    _guard_check_icall();
    iVar3 = (*pcVar1)();
    piStack_8 = *(int **)(iVar3 + 0x8c);
    if (piStack_8[0xd] == 3) {
      pcVar1 = *(code **)(*piVar4 + 0x48);
      _guard_check_icall();
      piVar5 = (int *)(*pcVar1)();
      puVar2 = (undefined4 *)((undefined4 *)piStack_8[4])[1];
      piVar4 = piVar5;
      for (puVar6 = *(undefined4 **)piStack_8[4]; puVar6 != puVar2; puVar6 = puVar6 + 1) {
        puStack_4 = (undefined4 *)*puVar6;
        piVar4 = (int *)*puStack_4;
        if (*piVar4 == 0x5d) {
          piStack_8 = piVar5;
          piVar4 = (int *)func_0x009cca20(&piStack_8);
        }
      }
      return (uint)piVar4 & 0xffffff00;
    }
  }
  return (uint)piStack_8 & 0xffffff00;
}



int __thiscall FUN_00b7f5e0(int param_1,byte param_2)

{
  *(undefined ***)(param_1 + 0x54) = sh::BlockLayoutEncoder::vftable;
  *(undefined ***)(param_1 + 0x4c) = sh::BlockLayoutEncoder::vftable;
  *(undefined ***)(param_1 + 0x44) = sh::BlockLayoutEncoder::vftable;
  func_0x00a18930();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x68);
  }
  return param_1;
}



void __thiscall FUN_00b80370(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  undefined8 uStack_44;
  int iStack_3c;
  undefined4 *puStack_38;
  uint uStack_34;
  uint uStack_30;
  uint auStack_2c [3];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f678bd;
  iStack_10 = *unaff_FS_OFFSET;
  uStack_14 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piVar1 = *(int **)(param_1 + 0x3c);
  uStack_30 = param_1;
  uStack_34 = func_0x00b7ffa0(auStack_2c,param_4,uStack_14);
  func_0x008c07f0(&uStack_44,uStack_34);
  if (*(char *)(iStack_3c + 0xd) == '\0') {
    cVar7 = func_0x0056edb0(uStack_34,iStack_3c + 0x10);
    iVar8 = iStack_3c;
    if (cVar7 != '\0') goto LAB_00b803da;
  }
  else {
LAB_00b803da:
    iVar8 = *piVar1;
  }
  if (0xf < uStack_18) {
    uVar11 = uStack_18 + 1;
    uVar12 = auStack_2c[0];
    if (0xfff < uVar11) {
      uVar12 = *(uint *)(auStack_2c[0] - 4);
      uVar11 = uStack_18 + 0x24;
      if (0x1f < (auStack_2c[0] - uVar12) - 4) {
        func_0x008aaf66();
        goto LAB_00b804f9;
      }
    }
    func_0x008ab812(uVar12,uVar11);
  }
  uStack_1c = 0;
  uStack_18 = 0xf;
  auStack_2c[0] = auStack_2c[0] & 0xffffff00;
  if (iVar8 != **(int **)(uStack_30 + 0x3c)) {
    uVar12 = *(uint *)(iVar8 + 0x28);
    puVar10 = *(undefined4 **)(uStack_30 + 0x40);
    uStack_34 = uVar12;
    uStack_30 = uVar12;
    iVar8 = func_0x008ace40(&uStack_44,&uStack_34);
    if ((*(char *)(*(int *)(iVar8 + 8) + 0xd) != '\0') ||
       (uVar12 < *(uint *)(*(int *)(iVar8 + 8) + 0x10))) {
      puVar9 = (undefined8 *)func_0x008ace40(auStack_20,&uStack_34);
      uStack_44 = *puVar9;
      if ((*(char *)(*(int *)(puVar9 + 1) + 0xd) != '\0') ||
         (uVar12 < *(uint *)(*(int *)(puVar9 + 1) + 0x10))) {
        if (puVar10[1] == 0x6666666) {
LAB_00b804f9:
          func_0x0048d790();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *puVar10;
        uStack_8 = 0;
        uStack_34 = 0;
        puStack_38 = puVar10;
        puVar10 = (undefined4 *)func_0x008ab47d(0x28);
        puVar10[4] = uStack_30;
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        puVar10[5] = *param_3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar10[8] = uVar6;
        puVar10[9] = param_3[4];
        *puVar10 = uVar2;
        puVar10[1] = uVar2;
        puVar10[2] = uVar2;
        *(undefined2 *)(puVar10 + 3) = 0;
        func_0x008b95c0((undefined4)uStack_44,uStack_44._4_4_,puVar10);
      }
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



// WARNING: Type propagation algorithm not settling

void __thiscall FUN_00b80500(int param_1,undefined ***param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined ***pppuVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *******pppppppuVar6;
  undefined ***pppuVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  int *unaff_FS_OFFSET;
  undefined1 auStack_d0 [68];
  undefined **appuStack_8c [2];
  undefined **appuStack_84 [2];
  undefined **appuStack_7c [5];
  undefined8 uStack_68;
  int iStack_60;
  undefined ***pppuStack_5c;
  undefined1 auStack_58 [4];
  undefined4 *puStack_54;
  int iStack_50;
  undefined ***pppuStack_4c;
  undefined ***pppuStack_48;
  undefined4 *******apppppppuStack_44 [4];
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f67918;
  iStack_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  pppuStack_48 = param_2;
  iStack_50 = param_1;
  uStack_14 = uVar4;
  FUN_00a19900(param_2,param_3);
  uVar5 = func_0x00a19220(&uStack_2c,uVar4);
  uStack_8 = 0;
  func_0x00b7ffa0(apppppppuStack_44,uVar5);
  uStack_8._0_1_ = 2;
  if (0xf < uStack_18) {
    uVar11 = uStack_18 + 1;
    uVar4 = uStack_2c;
    if (uVar11 < 0x1000) {
LAB_00b8058e:
      func_0x008ab812(uVar4,uVar11);
      goto LAB_00b80598;
    }
    uVar4 = *(uint *)(uStack_2c - 4);
    uVar11 = uStack_18 + 0x24;
    if ((uStack_2c - uVar4) - 4 < 0x20) goto LAB_00b8058e;
    func_0x008aaf66();
LAB_00b80857:
    func_0x0048d790();
LAB_00b8085c:
    func_0x008aaf66();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_00b80598:
  iStack_34 = iStack_34 + -1;
  uStack_1c = 0;
  pppppppuVar6 = apppppppuStack_44;
  if (0xf < uStack_30) {
    pppppppuVar6 = apppppppuStack_44[0];
  }
  uStack_18 = 0xf;
  uStack_2c = uStack_2c & 0xffffff00;
  *(undefined1 *)((int)pppppppuVar6 + iStack_34) = 0;
  func_0x00b7f2a0(apppppppuStack_44,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x3c),
                  *(undefined4 *)(param_1 + 0x40));
  uStack_8._0_1_ = 3;
  if (*(int *)(param_1 + 100) == 3) {
    pppuStack_4c = appuStack_8c;
    ppuVar13 = appuStack_8c[0];
  }
  else if (*(int *)(param_1 + 100) == 4) {
    pppuStack_4c = appuStack_84;
    ppuVar13 = appuStack_84[0];
  }
  else {
    pppuStack_4c = appuStack_7c;
    ppuVar13 = appuStack_7c[0];
  }
  pcVar1 = (code *)ppuVar13[1];
  _guard_check_icall(pppuStack_48);
  (*pcVar1)();
  ppuVar13 = pppuStack_48[0x13];
  for (ppuVar12 = pppuStack_48[0x12]; ppuVar12 != ppuVar13; ppuVar12 = ppuVar12 + 0x2d) {
    func_0x00a18da0(ppuVar12,param_3,auStack_d0);
    param_1 = iStack_50;
  }
  if (*(int *)(param_1 + 100) == 3) {
    pppuVar7 = appuStack_8c;
    ppuVar13 = appuStack_8c[0];
  }
  else if (*(int *)(param_1 + 100) == 4) {
    pppuVar7 = appuStack_84;
    ppuVar13 = appuStack_84[0];
  }
  else {
    pppuVar7 = appuStack_7c;
    ppuVar13 = appuStack_7c[0];
  }
  pcVar1 = (code *)ppuVar13[2];
  pppuVar2 = pppuStack_48;
  pppuStack_48 = pppuVar7;
  _guard_check_icall(pppuVar2);
  (*pcVar1)();
  iStack_50 = func_0x00a19f10();
  pppuStack_4c = (undefined ***)func_0x00a19f10();
  func_0x008c07f0(&uStack_68,apppppppuStack_44);
  if (((*(char *)(iStack_60 + 0xd) == '\0') &&
      (cVar3 = func_0x0056edb0(apppppppuStack_44,iStack_60 + 0x10), cVar3 == '\0')) &&
     (iStack_60 != **(int **)(param_1 + 0x3c))) {
    pppuVar7 = *(undefined ****)(iStack_60 + 0x28);
    puVar10 = *(undefined4 **)(param_1 + 0x40);
    pppuStack_5c = pppuVar7;
    pppuStack_48 = pppuVar7;
    iVar8 = func_0x008ace40(&uStack_68,&pppuStack_48);
    if ((*(char *)(*(int *)(iVar8 + 8) + 0xd) != '\0') ||
       (pppuVar7 < *(undefined ****)(*(int *)(iVar8 + 8) + 0x10))) {
      iStack_28 = iStack_50;
      uStack_24 = pppuStack_4c;
      uStack_20 = 0xffffffff;
      uStack_1c = uStack_1c & 0xffffff00;
      puVar9 = (undefined8 *)func_0x008ace40(auStack_58,&pppuStack_48);
      uStack_68 = *puVar9;
      if ((*(char *)(*(int *)(puVar9 + 1) + 0xd) != '\0') ||
         (pppuVar7 < *(undefined ****)(*(int *)(puVar9 + 1) + 0x10))) {
        if (puVar10[1] == 0x6666666) goto LAB_00b80857;
        uVar5 = *puVar10;
        uStack_8._0_1_ = 4;
        iStack_50 = 0;
        puStack_54 = puVar10;
        puVar10 = (undefined4 *)func_0x008ab47d(0x28);
        puVar10[5] = iStack_28;
        puVar10[6] = uStack_24;
        puVar10[7] = uStack_20;
        puVar10[8] = uStack_1c;
        puVar10[4] = pppuStack_5c;
        puVar10[9] = 0xffffffff;
        *puVar10 = uVar5;
        puVar10[1] = uVar5;
        puVar10[2] = uVar5;
        *(undefined2 *)(puVar10 + 3) = 0;
        func_0x008b95c0((undefined4)uStack_68,uStack_68._4_4_,puVar10);
      }
    }
  }
  appuStack_7c[0] = sh::BlockLayoutEncoder::vftable;
  appuStack_84[0] = sh::BlockLayoutEncoder::vftable;
  appuStack_8c[0] = sh::BlockLayoutEncoder::vftable;
  func_0x00a18930();
  if (0xf < uStack_30) {
    uVar4 = uStack_30 + 1;
    pppppppuVar6 = apppppppuStack_44[0];
    if (0xfff < uVar4) {
      pppppppuVar6 = (undefined4 *******)apppppppuStack_44[0][-1];
      uVar4 = uStack_30 + 0x24;
      if (0x1f < (uint)((int)apppppppuStack_44[0] + (-4 - (int)pppppppuVar6))) goto LAB_00b8085c;
    }
    func_0x008ab812(pppppppuVar6,uVar4);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



undefined4 __thiscall FUN_00b90e20(undefined4 param_1,byte param_2)

{
  func_0x00b90dc0();
  if ((param_2 & 5) == 5) {
    _guard_check_icall(param_1,0x78);
  }
  return param_1;
}



uint __thiscall FUN_00b91440(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iStack_4;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 100) + 0x14) + 8);
  iStack_4 = param_1;
  _guard_check_icall();
  (*pcVar1)();
  iStack_4 = param_3;
  uVar2 = func_0x00ade4a0(&iStack_4);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return uVar2 & 0xffffff00;
}



undefined4 __thiscall FUN_00b91480(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int iStack_4;
  
  if (param_3 != *(int *)(param_1 + 0x58)) {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 100) + 0x14) + 8);
    iStack_4 = param_1;
    _guard_check_icall();
    (*pcVar1)();
    iStack_4 = param_3;
    func_0x00ade4a0(&iStack_4);
    uVar2 = func_0x00b90e50(param_3);
    *(undefined1 *)(param_1 + 0x60) = uVar2;
    return 0;
  }
  return 1;
}



uint __thiscall FUN_00b914e0(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iStack_4;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 100) + 0x14) + 8);
  iStack_4 = param_1;
  _guard_check_icall();
  (*pcVar1)();
  iStack_4 = param_3;
  uVar2 = func_0x00ade4a0(&iStack_4);
  *(undefined1 *)(param_1 + 0x60) = 1;
  return uVar2 & 0xffffff00;
}



uint __thiscall FUN_00b91520(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  func_0x00b90f20();
  func_0x00ad78b0();
  puVar6 = (undefined4 *)func_0x00ad7620(0x28);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[3] = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[2] = 0;
    puVar6[5] = sh::TIntermAggregateBase::vftable;
    *puVar6 = sh::TIntermBlock::vftable;
    puVar6[5] = sh::TIntermBlock::vftable;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *(undefined1 *)(puVar6 + 9) = 0;
  }
  *(undefined4 **)(param_1 + 100) = puVar6;
  pcVar1 = *(code **)(puVar6[5] + 8);
  _guard_check_icall();
  (*pcVar1)();
  func_0x00ade4a0(&stack0xfffffff8);
  iVar2 = *(int *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar2 + 8) = uVar3;
  *(undefined4 *)(iVar2 + 0xc) = uVar4;
  *(undefined4 *)(iVar2 + 0x10) = uVar5;
  return (uint)(iVar2 + 4) & 0xffffff00;
}



void __thiscall FUN_00b915d0(int param_1,int param_2)

{
  code *pcVar1;
  int iStack_4;
  
  pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 100) + 0x14) + 8);
  iStack_4 = param_1;
  _guard_check_icall();
  (*pcVar1)();
  iStack_4 = param_2;
  func_0x00ade4a0(&iStack_4);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



void FUN_00b94f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95d90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1
                  ,0);
  return;
}



void FUN_00b94f90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95d90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1
                  ,1);
  return;
}



void FUN_00b94fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95d90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0
                  ,0);
  return;
}



void FUN_00b95010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95d90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0
                  ,1);
  return;
}



void FUN_00b95050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b96150(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1
                  ,0);
  return;
}



void FUN_00b95090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b96150(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1
                  ,1);
  return;
}



void FUN_00b950d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b96150(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0
                  ,0);
  return;
}



void FUN_00b95110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b96150(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0
                  ,1);
  return;
}



void FUN_00b95150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0
                 );
  return;
}



void FUN_00b95190(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95690(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0
                 );
  return;
}



void FUN_00b951d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1
                 );
  return;
}



void FUN_00b95210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95690(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1
                 );
  return;
}



void FUN_00b95d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95970(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0
                 );
  return;
}



void FUN_00b95d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  func_0x00b95970(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,1
                 );
  return;
}



undefined4 * __thiscall FUN_00b99b70(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Ref_count_obj2<>::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x48);
  }
  return param_1;
}



void __fastcall FUN_00b99f80(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  
  func_0x00b99a90();
  FUN_004c7ec0();
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (0xf < uVar1) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      uVar5 = uVar1 + 0x24;
      if (0x1f < (iVar2 - iVar4) - 4U) {
        func_0x008aaf66();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    func_0x008ab812(iVar4,uVar5);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



undefined4 * __thiscall FUN_00b9a4c0(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::pp::DirectiveParser::vftable;
  func_0x00a1e470();
  func_0x00ba30c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x30);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b9a4f0(undefined4 param_1,byte param_2)

{
  func_0x00ba30c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



void __thiscall FUN_00b9ab00(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  
  while( true ) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 4);
    _guard_check_icall(param_2);
    (*pcVar1)();
    iVar2 = *param_2;
    if (iVar2 == 0x11a) {
      func_0x00b9b380(param_2);
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else if (((iVar2 != 10) && (iVar2 != 0)) &&
            ((*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc) ||
             ((*(char *)(*(int *)(param_1 + 0xc) + -4) == '\0' &&
              (*(char *)(*(int *)(param_1 + 0xc) + -3) == '\0')))))) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    if (*param_2 == 0) break;
    if (((*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) ||
        ((*(char *)(*(int *)(param_1 + 0xc) + -4) == '\0' &&
         (*(char *)(*(int *)(param_1 + 0xc) + -3) == '\0')))) && (*param_2 != 10)) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
    func_0x00b66090(0x1c,*(int *)(param_1 + 0xc) + -0xc,*(int *)(param_1 + 0xc) + -0x24);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



undefined4 __thiscall FUN_00b9d370(undefined4 param_1,byte param_2)

{
  func_0x00b9d150();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x40);
  }
  return param_1;
}



undefined4 __thiscall FUN_00b9d390(undefined4 param_1,byte param_2)

{
  func_0x00b99a90();
  func_0x00ba30c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x14);
  }
  return param_1;
}



void __thiscall FUN_00b9e4f0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  byte *pbVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *unaff_FS_OFFSET;
  bool bVar18;
  undefined4 *puStack_6c;
  uint uStack_64;
  int iStack_60;
  int *piStack_5c;
  char cStack_55;
  undefined1 auStack_54 [24];
  int aiStack_3c [11];
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00f6983d;
  iStack_10 = *unaff_FS_OFFSET;
  aiStack_3c[10] = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  piStack_5c = param_2;
  iStack_60 = param_1;
  func_0x00b9e310(param_2,aiStack_3c[10]);
  if (*param_2 == 0x102) {
    pbVar15 = (byte *)(param_2 + 4);
    do {
      if (*(char *)(param_1 + 0x10) != '\0') {
        pcVar7 = "defined";
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (*pcVar11 != '\0');
        pbVar9 = pbVar15;
        if (0xf < (uint)param_2[9]) {
          pbVar9 = *(byte **)pbVar15;
        }
        cVar8 = func_0x0046cf20(pbVar9,param_2[8],"defined",pcVar11 + -0x1036634);
        piVar2 = piStack_5c;
        if (cVar8 != '\0') {
          if ((*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c)) ||
             (((iVar3 = *(int *)(param_1 + 0x2c), iVar3 != 1 && (iVar3 != 3)) && (iVar3 != 5)))) {
            cStack_55 = '\0';
            func_0x00b9e310(piStack_5c);
            if (*piVar2 == 0x28) {
              cStack_55 = '\x01';
              func_0x00b9e310(piVar2);
            }
            if (*piVar2 == 0x102) {
              puVar5 = *(uint **)(param_1 + 8);
              func_0x00b9a510(&uStack_64,piVar2 + 4);
              puVar12 = &DAT_01142cd8;
              if (uStack_64 == *puVar5) {
                puVar12 = &DAT_0113ffdc;
              }
              func_0x00469d30(puVar12);
              piVar2 = piStack_5c;
              uStack_8 = 0;
              if ((cStack_55 == '\0') || (func_0x00b9e310(piStack_5c), *piVar2 == 0x29)) {
                *piVar2 = 0x103;
                func_0x00469b70(auStack_54);
                FUN_00469ba0();
              }
              else {
                func_0x00b66090(0xb,piVar2 + 2,piVar2 + 4);
                FUN_00469ba0();
              }
            }
            else {
              func_0x00b66090(0xb,piVar2 + 2);
            }
          }
          break;
        }
      }
      if (((uint)piStack_5c[1] >> 2 & 1) != 0) break;
      piVar2 = *(int **)(param_1 + 8);
      puStack_6c = (undefined4 *)*piVar2;
      if (*(char *)((int)puStack_6c[1] + 0xd) == '\0') {
        uVar14 = param_2[8];
        puVar16 = (undefined4 *)puStack_6c[1];
        do {
          pbVar9 = (byte *)(puVar16 + 4);
          pbVar13 = pbVar15;
          if (0xf < (uint)param_2[9]) {
            pbVar13 = *(byte **)pbVar15;
          }
          uStack_64 = puVar16[8];
          if (0xf < (uint)puVar16[9]) {
            pbVar9 = *(byte **)pbVar9;
          }
          uVar10 = uStack_64;
          if (uVar14 < uStack_64) {
            uVar10 = uVar14;
          }
          while (uVar6 = uVar10 - 4, 3 < uVar10) {
            if (*(int *)pbVar9 != *(int *)pbVar13) goto LAB_00b9e5f6;
            pbVar9 = pbVar9 + 4;
            pbVar13 = pbVar13 + 4;
            uVar10 = uVar6;
          }
          if (uVar6 == 0xfffffffc) {
LAB_00b9e62a:
            uVar10 = 0;
          }
          else {
LAB_00b9e5f6:
            bVar18 = *pbVar9 < *pbVar13;
            if ((*pbVar9 == *pbVar13) &&
               ((uVar6 == 0xfffffffd ||
                ((bVar18 = pbVar9[1] < pbVar13[1], pbVar9[1] == pbVar13[1] &&
                 ((uVar6 == 0xfffffffe ||
                  ((bVar18 = pbVar9[2] < pbVar13[2], pbVar9[2] == pbVar13[2] &&
                   ((uVar6 == 0xffffffff ||
                    (bVar18 = pbVar9[3] < pbVar13[3], pbVar9[3] == pbVar13[3]))))))))))))
            goto LAB_00b9e62a;
            uVar10 = -(uint)bVar18 | 1;
          }
          if (uVar10 == 0) {
            if (uStack_64 < uVar14) goto LAB_00b9e66a;
LAB_00b9e632:
            puVar17 = (undefined4 *)*puVar16;
            puStack_6c = puVar16;
          }
          else {
            if (-1 < (int)uVar10) goto LAB_00b9e632;
LAB_00b9e66a:
            puVar17 = (undefined4 *)puVar16[2];
          }
          puVar16 = puVar17;
        } while (*(char *)((int)puVar17 + 0xd) == '\0');
      }
      if ((*(char *)((int)puStack_6c + 0xd) != '\0') ||
         (cVar8 = func_0x0056edb0(pbVar15,puStack_6c + 4), cVar8 != '\0')) {
        puStack_6c = (undefined4 *)*piVar2;
      }
      if (puStack_6c == (undefined4 *)**(int **)(iStack_60 + 8)) break;
      if (puStack_6c[0xb] != 0) {
        LOCK();
        piVar2 = (int *)(puStack_6c[0xb] + 4);
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      iVar3 = puStack_6c[10];
      piVar2 = (int *)puStack_6c[0xb];
      uStack_8 = 1;
      if (*(char *)(iVar3 + 1) != '\0') {
        func_0x00ba2f70(1);
LAB_00b9e8e2:
        if (piVar2 != (int *)0x0) {
          LOCK();
          iVar3 = piVar2[1] + -1;
          piVar2[1] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar4 = *(code **)*piVar2;
            _guard_check_icall();
            (*pcVar4)();
            LOCK();
            piVar1 = piVar2 + 2;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              pcVar4 = *(code **)(*piVar2 + 4);
              _guard_check_icall();
              (*pcVar4)();
            }
          }
        }
        break;
      }
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      if (*(int *)(iVar3 + 8) == 1) {
        aiStack_3c[0] = 0;
        aiStack_3c[5] = 0;
        aiStack_3c[6] = 0;
        aiStack_3c[7] = 0;
        aiStack_3c[1] = 0;
        aiStack_3c[2] = 0;
        aiStack_3c[3] = 0;
        aiStack_3c[8] = 0;
        aiStack_3c[9] = 0xf;
        aiStack_3c[4] = 0;
        uStack_8._0_1_ = 2;
        uStack_8._1_3_ = 0;
        func_0x00b9e310(aiStack_3c);
        cStack_55 = aiStack_3c[0] == 0x28;
        func_0x00b9eef0(aiStack_3c);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        if (0xf < (uint)aiStack_3c[9]) {
          uVar10 = aiStack_3c[9] + 1;
          uVar14 = aiStack_3c[4];
          if (0xfff < uVar10) {
            uVar14 = *(uint *)(aiStack_3c[4] - 4);
            uVar10 = aiStack_3c[9] + 0x24;
            if (0x1f < (aiStack_3c[4] - uVar14) - 4) {
              func_0x008aaf66();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          func_0x008ab812(uVar14,uVar10);
        }
        aiStack_3c[8] = 0;
        aiStack_3c[9] = 0xf;
        aiStack_3c[4] = aiStack_3c[4] & 0xffffff00;
        if (cStack_55 == '\0') {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
          goto LAB_00b9e8e2;
        }
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        piVar2[1] = piVar2[1] + 1;
        UNLOCK();
      }
      func_0x00b9e9a0(iVar3,piVar2,piStack_5c);
      uStack_8 = 0xffffffff;
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar3 = piVar2[1] + -1;
        piVar2[1] = iVar3;
        UNLOCK();
        if (iVar3 == 0) {
          pcVar4 = *(code **)*piVar2;
          _guard_check_icall();
          (*pcVar4)();
          LOCK();
          iVar3 = piVar2[2] + -1;
          piVar2[2] = iVar3;
          UNLOCK();
          if (iVar3 == 0) {
            pcVar4 = *(code **)(*piVar2 + 4);
            _guard_check_icall();
            (*pcVar4)();
          }
        }
      }
      piVar2 = piStack_5c;
      param_1 = iStack_60;
      func_0x00b9e310(piStack_5c);
    } while (*piVar2 == 0x102);
  }
  *unaff_FS_OFFSET = iStack_10;
  FUN_008ab370();
  return;
}



void __thiscall FUN_00b9e940(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == *(undefined4 **)(param_1 + 8)) {
    func_0x00ba2f10();
    *param_2 = 0;
    return;
  }
  *(undefined4 **)(param_1 + 0x10) = puVar1 + 10;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  uVar2 = puVar1[3];
  param_2[2] = puVar1[2];
  puVar3 = puVar1 + 4;
  param_2[3] = uVar2;
  if (param_2 + 4 != puVar3) {
    if (0xf < (uint)puVar1[9]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    func_0x0046a660(puVar3,puVar1[8]);
  }
  return;
}



undefined4 * __thiscall FUN_00b9f040(undefined4 *param_1,byte param_2)

{
  *param_1 = angle::pp::Tokenizer::vftable;
  func_0x00b9f170();
  func_0x00ba5640();
  func_0x00ba30c0();
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x38);
  }
  return param_1;
}



void __thiscall FUN_00b9f400(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = param_2 + 2;
  piVar5 = param_2 + 4;
  iVar4 = func_0x00b9f4a0(piVar5,piVar1,*(undefined4 *)(param_1 + 4));
  if (iVar4 == -1) {
    func_0x00b66090(0x2b,piVar1,piVar5);
    iVar4 = 0;
  }
  *param_2 = iVar4;
  if (*(uint *)(param_1 + 0x34) < (uint)param_2[8]) {
    func_0x00b66090(7,piVar1,piVar5);
    uVar2 = *(uint *)(param_1 + 0x34);
    if ((uint)param_2[8] < uVar2) {
      func_0x00484870();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    param_2[8] = uVar2;
    if (0xf < (uint)param_2[9]) {
      piVar5 = (int *)*piVar5;
    }
    *(undefined1 *)((int)piVar5 + uVar2) = 0;
  }
  param_2[1] = 0;
  func_0x00ba2f50(*(undefined1 *)(param_1 + 0x31));
  *(bool *)(param_1 + 0x31) = *param_2 == 10;
  func_0x00ba2f90(*(undefined1 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



int FUN_00ba2b50(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_01037300;
  uVar2 = 0;
  do {
    if (*piVar1 == param_1) {
      return piVar1[1];
    }
    uVar2 = uVar2 + 8;
    piVar1 = piVar1 + 2;
  } while (uVar2 < 0x2e8);
  return 0;
}



undefined4 __thiscall FUN_00ba2b80(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,4);
  }
  return param_1;
}



undefined4 FUN_00ba2ba0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    LOCK();
    iVar2 = param_2[1] + -1;
    param_2[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*param_2;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = param_2[2] + -1;
      param_2[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*param_2 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  if (param_4 != (int *)0x0) {
    LOCK();
    iVar2 = param_4[1] + -1;
    param_4[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      pcVar1 = *(code **)*param_4;
      _guard_check_icall();
      (*pcVar1)();
      LOCK();
      iVar2 = param_4[2] + -1;
      param_4[2] = iVar2;
      UNLOCK();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*param_4 + 4);
        _guard_check_icall();
        (*pcVar1)();
      }
    }
  }
  return 0xffffffff;
}



char * FUN_00ba2cd0(void)

{
  return "ASTC CPU decomp not available";
}



void FUN_00ba5840(void)

{
  func_0x008ab7fd(FUN_00ba5cf0);
  return;
}



undefined4 * __thiscall FUN_00ba5850(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    func_0x008ab812(param_1,0x34);
  }
  return param_1;
}



void FUN_00ba5cf0(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  piVar4 = DAT_013deaa4;
  if (DAT_013deaa4 != (int *)0x0) {
    if (7 < (uint)DAT_013deaa4[5]) {
      iVar2 = *DAT_013deaa4;
      iVar1 = DAT_013deaa4[5] * 2;
      uVar7 = iVar1 + 2;
      iVar5 = iVar2;
      if (0xfff < uVar7) {
        iVar5 = *(int *)(iVar2 + -4);
        uVar7 = iVar1 + 0x25;
        if (0x1f < (iVar2 - iVar5) - 4U) goto LAB_00ba5dfc;
      }
      func_0x008ab812(iVar5,uVar7);
    }
    piVar4[4] = 0;
    piVar4[5] = 7;
    *(undefined2 *)piVar4 = 0;
    func_0x008ab812(piVar4,0x18);
  }
  piVar4 = DAT_013deaa0;
  DAT_013deaa4 = (int *)0x0;
  if (DAT_013deaa0 != (int *)0x0) {
    if (7 < (uint)DAT_013deaa0[5]) {
      iVar2 = *DAT_013deaa0;
      iVar1 = DAT_013deaa0[5] * 2;
      uVar7 = iVar1 + 2;
      iVar5 = iVar2;
      if (0xfff < uVar7) {
        iVar5 = *(int *)(iVar2 + -4);
        uVar7 = iVar1 + 0x25;
        if (0x1f < (iVar2 - iVar5) - 4U) {
LAB_00ba5dfc:
          func_0x008aaf66();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      func_0x008ab812(iVar5,uVar7);
    }
    piVar4[4] = 0;
    piVar4[5] = 7;
    *(undefined2 *)piVar4 = 0;
    func_0x008ab812(piVar4,0x18);
  }
  iVar1 = DAT_013dea9c;
  DAT_013deaa0 = (int *)0x0;
  if (DAT_013dea9c != 0) {
    if ((*(int **)(DAT_013dea9c + 4) != (int *)0x0) &&
       (puVar6 = (undefined4 *)(**(code **)(**(int **)(DAT_013dea9c + 4) + 8))(),
       puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    func_0x008ab812(iVar1,8);
  }
  DAT_013dea9c = 0;
  return;
}



undefined4
FUN_00ba6390(undefined4 param_1,LPCSTR param_2,int param_3,int *param_4,LPWSTR param_5,int param_6,
            undefined4 *param_7)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = AreFileApisANSI();
  iVar2 = MultiByteToWideChar((uint)(BVar1 == 0),1,param_2,param_3 - (int)param_2,param_5,
                              param_6 - (int)param_5 >> 1);
  if (iVar2 == 0) {
    return 2;
  }
  *param_4 = param_3;
  *param_7 = param_5 + iVar2;
  param_5[iVar2] = L'\0';
  return 0;
}



undefined4
FUN_00ba63f0(undefined4 param_1,LPCWSTR param_2,int param_3,int *param_4,LPSTR param_5,int param_6,
            undefined4 *param_7)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = AreFileApisANSI();
  iVar2 = WideCharToMultiByte((uint)(BVar1 == 0),0x400,param_2,param_3 - (int)param_2 >> 1,param_5,
                              param_6 - (int)param_5,(LPCSTR)0x0,(LPBOOL)0x0);
  if (iVar2 == 0) {
    return 2;
  }
  *param_4 = param_3;
  *param_7 = param_5 + iVar2;
  param_5[iVar2] = '\0';
  return 0;
}



undefined4 * FUN_00ba6460(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  char *pcVar2;
  int iStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_00f69f5e;
  iStack_10 = *unaff_FS_OFFSET;
  uVar1 = DAT_0128fd40 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&iStack_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_8 = 0;
  switch(param_2) {
  case 0:
    pcVar2 = "ok";
    break;
  case 1:
    pcVar2 = "partial";
    break;
  case 2:
    pcVar2 = "error";
    break;
  case 3:
    pcVar2 = "noconv";
    break;
  default:
    pcVar2 = "unknown error";
  }
  func_0x00499bb0(pcVar2,uVar1);
  *unaff_FS_OFFSET = iStack_10;
  return param_1;
}



char * FUN_00ba6520(void)

{
  return "codecvt";
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00ba6d70(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00bb8800(0x40000,0,0);
  if (iVar1 != 0) {
    DAT_013deab8 = func_0x00bbb390();
    if (DAT_013deab8 != 0) {
      uVar2 = func_0x00bbe4d0(FUN_00ba7160,FUN_00ba7140,FUN_00ba7390,FUN_00ba7370,FUN_00ba7380,
                              FUN_00ba7370);
      DAT_013deabc = func_0x00bbe5c0(uVar2);
      if (DAT_013deabc != 0) {
        _DAT_013deac0 = 1;
        return;
      }
      func_0x00bbb370(DAT_013deab8);
      DAT_013deab8 = 0;
    }
  }
  _DAT_013deac0 = 0;
  return;
}



void FUN_00ba6fa0(void)

{
  int iVar1;
  
  iVar1 = func_0x00bbb320(&DAT_013deab0);
  if (iVar1 != 0) {
    func_0x00bbb420(&DAT_013deab0,0);
    func_0x00ba6c90(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00ba6fd0(void)

{
  DAT_013deaac = 1;
  _DAT_013deac4 = func_0x00bbb350(&DAT_013deab0,0);
  return;
}



int FUN_00ba7140(uint *param_1,uint *param_2)

{
  if (*param_2 == *param_1) {
    return 0;
  }
  return (-(uint)(*param_2 < *param_1) & 2) - 1;
}



uint FUN_00ba7160(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = uVar1 >> 0x17 & 0xff;
  }
  return ((uVar2 ^ uVar1) % 0x13) * 0xd ^ uVar2 ^ uVar1;
}



void FUN_00ba7370(undefined4 param_1,undefined4 param_2,code *param_3)

{
  (*param_3)(param_1,param_2);
  return;
}



void FUN_00ba7380(undefined4 param_1,code *param_2)

{
  (*param_2)(param_1);
  return;
}



void FUN_00ba7390(undefined4 param_1,code *param_2)

{
  (*param_2)(param_1);
  return;
}



void FUN_00ba8550(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) == 0)) {
    piVar1 = (int *)(param_1 + 0x48);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      FUN_00bbc580(*(undefined4 *)(param_1 + 0x3c),"crypto\\evp\\evp_enc.c",0x6c6);
      FUN_00bc7c90(*(undefined4 *)(param_1 + 0x44));
      FUN_00bbc580(param_1,"crypto\\evp\\evp_enc.c",0x6c9);
    }
  }
  return;
}



undefined8 __fastcall FUN_00ba85f0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    piVar1 = (int *)(param_3 + 0x48);
    LOCK();
    param_2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return CONCAT44(param_2,1);
}



int * FUN_00ba95d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = param_2;
  piVar4 = *(int **)(param_2 + 8);
  iVar5 = 0;
  param_2 = 0;
  piVar1 = (int *)FUN_00bbc830(0x84,"crypto\\evp\\evp_enc.c",0x5f4);
  if (piVar1 == (int *)0x0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\evp_enc.c",0x625,"evp_cipher_from_algorithm");
    func_0x00bc5160(6,0x80006,0);
    return (int *)0x0;
  }
  piVar1[0x12] = 1;
  *piVar1 = 0;
  iVar2 = func_0x00bc9710(param_3,param_1,FUN_00baa5b0,piVar1);
  if ((iVar2 == 0) || (*piVar1 == -1)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\evp_enc.c",0x62d,"evp_cipher_from_algorithm");
    func_0x00bc5160(6,0xc0103,0);
    if (piVar1[5] != 0) {
      return (int *)0x0;
    }
    piVar4 = piVar1 + 0x12;
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (0 < iVar3 + -1) {
      return (int *)0x0;
    }
    FUN_00bbc580(piVar1[0xf],"crypto\\evp\\evp_enc.c",0x6c6);
    FUN_00bc7c90(piVar1[0x11]);
    FUN_00bbc580(piVar1,"crypto\\evp\\evp_enc.c",0x6c9);
    return (int *)0x0;
  }
  piVar1[0xe] = param_1;
  iVar2 = func_0x00bc9200(iVar3);
  piVar1[0xf] = iVar2;
  if (iVar2 == 0) {
    FUN_00ba8550(piVar1);
    return (int *)0x0;
  }
  piVar1[0x10] = *(int *)(iVar3 + 0xc);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
LAB_00ba97f6:
    if (piVar1[0x18] == 0) goto LAB_00ba9783;
  }
  else {
    piVar4 = piVar4 + 1;
    do {
      switch(iVar3) {
      case 1:
        if (piVar1[0x13] == 0) {
          param_2 = param_2 + 1;
          piVar1[0x13] = *piVar4;
        }
        break;
      case 2:
        if (piVar1[0x14] == 0) {
          iVar5 = iVar5 + 1;
          piVar1[0x14] = *piVar4;
        }
        break;
      case 3:
        if (piVar1[0x15] == 0) {
          iVar5 = iVar5 + 1;
          piVar1[0x15] = *piVar4;
        }
        break;
      case 4:
        if (piVar1[0x16] == 0) {
          iVar5 = iVar5 + 1;
          piVar1[0x16] = *piVar4;
        }
        break;
      case 5:
        if (piVar1[0x17] == 0) {
          iVar5 = iVar5 + 1;
          piVar1[0x17] = *piVar4;
        }
        break;
      case 6:
        if (piVar1[0x18] == 0) {
          piVar1[0x18] = *piVar4;
        }
        break;
      case 7:
        if (piVar1[0x19] == 0) {
          param_2 = param_2 + 1;
          piVar1[0x19] = *piVar4;
        }
        break;
      case 8:
        if (piVar1[0x1a] == 0) {
          piVar1[0x1a] = *piVar4;
        }
        break;
      case 9:
        if (piVar1[0x1b] == 0) {
          piVar1[0x1b] = *piVar4;
        }
        break;
      case 10:
        if (piVar1[0x1c] == 0) {
          piVar1[0x1c] = *piVar4;
        }
        break;
      case 0xb:
        if (piVar1[0x1d] == 0) {
          piVar1[0x1d] = *piVar4;
        }
        break;
      case 0xc:
        if (piVar1[0x1e] == 0) {
          piVar1[0x1e] = *piVar4;
        }
        break;
      case 0xd:
        if (piVar1[0x1f] == 0) {
          piVar1[0x1f] = *piVar4;
        }
        break;
      case 0xe:
        if (piVar1[0x20] == 0) {
          piVar1[0x20] = *piVar4;
        }
      }
      iVar3 = piVar4[1];
      piVar4 = piVar4 + 2;
    } while (iVar3 != 0);
    if (iVar5 == 0) goto LAB_00ba97f6;
    if ((iVar5 != 3) && (iVar5 != 4)) goto LAB_00ba9783;
  }
  if (param_2 == 2) {
    piVar1[0x11] = param_3;
    if (param_3 != 0) {
      func_0x00bc8620(param_3);
    }
    iVar3 = func_0x00bc4870(piVar1);
    if (iVar3 == 0) {
      FUN_00ba8550(piVar1);
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\evp_enc.c",0x69f,"evp_cipher_from_algorithm");
      func_0x00bc5160(6,0xe1,0);
      piVar1 = (int *)0x0;
    }
    return piVar1;
  }
LAB_00ba9783:
  if (piVar1[5] == 0) {
    piVar4 = piVar1 + 0x12;
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      FUN_00bbc580(piVar1[0xf],"crypto\\evp\\evp_enc.c",0x6c6);
      FUN_00bc7c90(piVar1[0x11]);
      FUN_00bbc580(piVar1,"crypto\\evp\\evp_enc.c",0x6c9);
    }
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\evp\\evp_enc.c",0x696,"evp_cipher_from_algorithm");
  func_0x00bc5160(6,0xc1,0);
  return (int *)0x0;
}



void FUN_00baa5b0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = func_0x00bc1f70(param_1,2);
  if ((*param_2 != -1) && (iVar1 != 0)) {
    iVar1 = func_0x00bc36d0(iVar1);
    if ((*param_2 != 0) && (*param_2 != iVar1)) {
      *param_2 = -1;
      return;
    }
    *param_2 = iVar1;
  }
  return;
}



undefined4 FUN_00baaa30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



undefined4 FUN_00baaa40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



undefined4 FUN_00baaa50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



size_t FUN_00babb20(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (param_2 != (void *)0x0)) {
    sVar1 = fwrite(param_2,param_3,1,*(FILE **)(param_1 + 0x28));
    if (sVar1 != 0) {
      sVar1 = param_3;
    }
    return sVar1;
  }
  return 0;
}



int FUN_00babb50(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  DWORD DVar2;
  char *pcVar3;
  
  if ((*(int *)(param_1 + 0x14) != 0) && (param_2 != 0)) {
    iVar1 = func_0x008aafd2(param_2,1,param_3,*(undefined4 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = func_0x008ab05e(*(undefined4 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\bio\\bss_file.c",0x94,"file_read");
      pcVar3 = "calling fread()";
      DVar2 = GetLastError();
      func_0x00bc5160(2,DVar2,pcVar3);
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\bio\\bss_file.c",0x96,"file_read");
      func_0x00bc5160(0x20,0x80002,0);
      return -1;
    }
  }
  return 0;
}



size_t FUN_00babc00(int param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((*(int *)(param_1 + 0x14) != 0) && (param_2 != (char *)0x0)) {
    sVar2 = fwrite(param_2,(int)pcVar3 - (int)(param_2 + 1),1,*(FILE **)(param_1 + 0x28));
    if (sVar2 != 0) {
      sVar2 = (int)pcVar3 - (int)(param_2 + 1);
    }
    return sVar2;
  }
  return 0;
}



int FUN_00babc50(int param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  *param_2 = '\0';
  iVar3 = func_0x00e87a46(param_2,param_3,*(undefined4 *)(param_1 + 0x28));
  if ((iVar3 != 0) && (*param_2 != '\0')) {
    pcVar1 = param_2 + 1;
    do {
      cVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    return (int)param_2 - (int)pcVar1;
  }
  return 0;
}



undefined4 FUN_00babc90(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  FILE *_File;
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar6 = param_1;
  uVar8 = 1;
  _File = *(FILE **)(param_1 + 0x28);
  switch(param_2) {
  case 1:
  case 0x80:
    uVar8 = func_0x008ab064(_File,param_3,0);
    return uVar8;
  case 2:
    uVar8 = func_0x00e87a40(_File);
    return uVar8;
  case 3:
  case 0x85:
    uVar8 = func_0x008ab03a(_File);
    return uVar8;
  case 8:
    return *(undefined4 *)(param_1 + 0x18);
  case 9:
    *(uint *)(param_1 + 0x18) = param_3;
    return 1;
  case 0xb:
    iVar6 = fflush(_File);
    if (iVar6 != -1) {
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_file.c",0x146,"file_ctrl");
    pcVar9 = "calling fflush()";
    DVar5 = GetLastError();
    func_0x00bc5160(2,DVar5,pcVar9);
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_file.c",0x148,"file_ctrl");
    func_0x00bc5160(0x20,0x80002,0);
  default:
    uVar8 = 0;
    break;
  case 0xc:
    break;
  case 0x6a:
    FUN_00bac050(param_1);
    puVar10 = param_4;
    *(uint *)(iVar6 + 0x18) = param_3 & 1;
    *(undefined4 **)(iVar6 + 0x28) = param_4;
    *(undefined4 *)(iVar6 + 0x14) = 1;
    uVar1 = func_0x00e87a4c(param_4);
    uVar7 = 0x4000;
    if ((param_3 & 0x10) == 0) {
      uVar7 = 0x8000;
    }
    func_0x00e87a52(uVar1,uVar7);
    if ((param_3 & 0x10) != 0) {
      func_0x008aafc6(puVar10,0,4,0);
      return 1;
    }
    break;
  case 0x6b:
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = _File;
      return 1;
    }
    break;
  case 0x6c:
    if (*(int *)(param_1 + 0x18) != 0) {
      if ((*(int *)(param_1 + 0x14) != 0) && (_File != (FILE *)0x0)) {
        func_0x008aafb6(_File);
        *(undefined4 *)(iVar6 + 0x28) = 0;
        *(undefined4 *)(iVar6 + 0x1c) = 0;
      }
      *(undefined4 *)(iVar6 + 0x14) = 0;
    }
    *(uint *)(iVar6 + 0x18) = param_3 & 1;
    if ((param_3 & 8) == 0) {
      if (((byte)param_3 & 6) == 6) {
        puVar2 = &DAT_0103dba8;
      }
      else if ((param_3 & 4) == 0) {
        if ((param_3 & 2) == 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\bio\\bss_file.c",0x11a,"file_ctrl");
          func_0x00bc5160(0x20,0x65,0);
          return 0;
        }
        puVar2 = &DAT_01198360;
      }
      else {
        puVar2 = &DAT_0114337c;
      }
    }
    else {
      puVar2 = &DAT_0119836c;
      if ((param_3 & 2) != 0) {
        puVar2 = &DAT_0103dba4;
      }
    }
    func_0x00bbc0b0(&param_1,puVar2,4);
    puVar3 = &DAT_0101faf8;
    if ((param_3 & 0x10) == 0) {
      puVar3 = &DAT_01198370;
    }
    func_0x00bbc050(&param_1,puVar3,4);
    puVar10 = param_4;
    iVar4 = func_0x00bcc320(param_4,&param_1);
    if (iVar4 != 0) {
      *(int *)(iVar6 + 0x28) = iVar4;
      *(undefined4 *)(iVar6 + 0x14) = 1;
      func_0x00baa700(iVar6,0);
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_file.c",0x129,"file_ctrl");
    puVar11 = &param_1;
    pcVar9 = "calling fopen(%s, %s)";
    DVar5 = GetLastError();
    func_0x00bc5160(2,DVar5,pcVar9,puVar10,puVar11);
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_file.c",300,"file_ctrl");
    func_0x00bc5160(0x20,0x80002,0);
    return 0;
  }
  return uVar8;
}



undefined4 FUN_00bac020(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}



undefined4 FUN_00bac050(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
      func_0x008aafb6(*(int *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 1;
}



undefined4 FUN_00bac1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar1 = func_0x00bc36f0(param_1);
  iVar2 = func_0x00bc3840(param_1);
  iVar2 = iVar2 << 3;
  if (iVar2 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0x98,"aesni_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  uVar3 = func_0x00bc36d0(param_1);
  iVar4 = func_0x00bc3c70(uVar3);
  if (((iVar4 == 1) || (iVar4 == 2)) && (param_4 == 0)) {
    iVar2 = func_0x004089e0(param_2,iVar2,iVar1);
    puVar5 = (undefined1 *)0x0;
    *(undefined1 **)(iVar1 + 0xf8) = &LAB_00405990;
    if (iVar4 == 2) {
      puVar5 = &SUB_004080f0;
    }
  }
  else {
    iVar2 = func_0x004089c0(param_2,iVar2,iVar1);
    *(undefined1 **)(iVar1 + 0xf8) = &LAB_00405940;
    if (iVar4 == 2) {
      puVar5 = &SUB_004080f0;
    }
    else if (iVar4 == 5) {
      puVar5 = &LAB_004064d0;
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
  }
  *(undefined1 **)(iVar1 + 0xfc) = puVar5;
  if (-1 < iVar2) {
    return 1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\evp\\e_aes.c",0xae,"aesni_init_key");
  func_0x00bc5160(6,0x8f,0);
  return 0;
}



undefined4 FUN_00bac2f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00bc39e0(param_1);
  uVar1 = func_0x00bc36f0(param_1,param_1 + 0x20,uVar1);
  func_0x004080f0(param_3,param_2,param_4,uVar1);
  return 1;
}



undefined4 FUN_00bac330(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0x00bc36e0(param_1);
  if (uVar1 <= param_4) {
    uVar2 = FUN_00bc39e0(param_1);
    uVar2 = func_0x00bc36f0(param_1,uVar2);
    func_0x00405e80(param_3,param_2,param_4,uVar2);
  }
  return 1;
}



undefined4 FUN_00bac380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  func_0x00bccc10(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,*(undefined4 *)(iVar2 + 0xf8))
  ;
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4 FUN_00bac3d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  uVar3 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0xf8));
  func_0x00bcce30(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,uVar3);
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4 FUN_00bac430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  iVar2 = func_0x00bc36f0(param_1);
  param_1 = func_0x00bc3930(iVar1);
  uVar3 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0xf8));
  func_0x00bccde0(param_3,param_2,param_4,iVar2,iVar1 + 0x20,&param_1,uVar3);
  func_0x00bc3aa0(iVar1,param_1);
  return 1;
}



undefined4
FUN_00bac490(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  func_0x00e87f70();
  iVar1 = param_4;
  iVar2 = func_0x00bc36f0(param_4);
  iVar3 = func_0x00bc3b60(iVar1,0x2000);
  if (iVar3 != 0) {
    uVar4 = func_0x00bc3930(iVar1);
    uVar5 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0xf8));
    func_0x00bccd40(param_6,param_5,param_7,iVar2,iVar1 + 0x20,&stack0x00000000,uVar5);
    func_0x00bc3aa0(iVar1,uVar4);
    return 1;
  }
  iVar3 = param_6;
  iVar6 = param_5;
  uVar7 = param_7;
  if (0xfffffff < param_7) {
    param_2 = param_7 >> 0x1c;
    do {
      param_1 = func_0x00bc3930(iVar1);
      uVar4 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0xf8));
      func_0x00bccd40(iVar3,iVar6,0x80000000,iVar2,iVar1 + 0x20,&param_1,uVar4);
      func_0x00bc3aa0(iVar1,param_1);
      uVar7 = uVar7 + 0xf0000000;
      iVar6 = iVar6 + 0x10000000;
      iVar3 = iVar3 + 0x10000000;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (uVar7 != 0) {
    param_2 = func_0x00bc3930(iVar1);
    uVar4 = FUN_00bc39e0(iVar1,*(undefined4 *)(iVar2 + 0xf8));
    func_0x00bccd40(iVar3,iVar6,uVar7 * 8,iVar2,iVar1 + 0x20,&param_2,uVar4);
    func_0x00bc3aa0(iVar1,param_2);
  }
  return 1;
}



undefined4
FUN_00bac5f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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
  if (*(int *)(iVar2 + 0xfc) == 0) {
    uVar3 = func_0x00bc36c0(param_2,&stack0x00000000,*(undefined4 *)(iVar2 + 0xf8));
    func_0x00bcc940(param_4,param_3,param_5,iVar2,param_2 + 0x20,uVar3);
  }
  else {
    uVar3 = func_0x00bc36c0(param_2,&stack0x00000000,*(int *)(iVar2 + 0xfc));
    func_0x00bcca60(param_4,param_3,param_5,iVar2,param_2 + 0x20,uVar3);
  }
  func_0x00bc3aa0(param_2,iVar1);
  return 1;
}



undefined4 FUN_00bac6a0(undefined4 param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(iVar1 + 0xf8) == 0) {
      memcpy(*(void **)(iVar1 + 0x2b0),param_3,*(size_t *)(iVar1 + 0x2b4));
    }
    else {
      func_0x00bce560(iVar1 + 0x100);
    }
    *(undefined4 *)(iVar1 + 0xfc) = 1;
    *(undefined4 *)(iVar1 + 700) = 0;
    return 1;
  }
  iVar2 = func_0x00bc3840(param_1);
  if (iVar2 << 3 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xec,"aesni_gcm_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  func_0x004089c0(param_2,iVar2 << 3,iVar1);
  func_0x00bce4f0(iVar1 + 0x100,iVar1,&LAB_00405940);
  *(undefined1 **)(iVar1 + 0x2d0) = &LAB_004064d0;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(iVar1 + 0xfc) != 0 && (param_3 = *(void **)(iVar1 + 0x2b0), param_3 != (void *)0x0))
     )) {
    func_0x00bce560(iVar1 + 0x100,param_3,*(undefined4 *)(iVar1 + 0x2b4));
    *(undefined4 *)(iVar1 + 0xfc) = 1;
  }
  *(undefined4 *)(iVar1 + 0xf8) = 1;
  return 1;
}



undefined4 FUN_00bac7d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (*(int *)(iVar1 + 0xf8) != 0) {
    if (-1 < *(int *)(iVar1 + 0x2c4)) {
      uVar2 = func_0x00baeef0(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    if (*(int *)(iVar1 + 0xfc) != 0) {
      if (param_3 == 0) {
        iVar4 = FUN_00bc39e0(param_1);
        if (iVar4 != 0) {
          uVar2 = func_0x00bc36c0(param_1,0x10);
          func_0x00bce740(iVar1 + 0x100,uVar2);
          *(undefined4 *)(iVar1 + 0x2b8) = 0x10;
          *(undefined4 *)(iVar1 + 0xfc) = 0;
          return 0;
        }
        if (-1 < *(int *)(iVar1 + 0x2b8)) {
          uVar2 = func_0x00bc36c0(param_1,*(int *)(iVar1 + 0x2b8));
          iVar4 = func_0x00bce3a0(iVar1 + 0x100,uVar2);
          if (iVar4 == 0) {
            *(undefined4 *)(iVar1 + 0xfc) = 0;
            return 0;
          }
        }
      }
      else {
        iVar4 = iVar1 + 0x100;
        if (param_2 == 0) {
          iVar1 = func_0x00bcd4a0(iVar4,param_3,param_4);
        }
        else {
          iVar3 = FUN_00bc39e0(param_1);
          iVar1 = *(int *)(iVar1 + 0x2d0);
          if (iVar3 == 0) {
            if (iVar1 == 0) {
              iVar1 = func_0x00bcd5a0(iVar4,param_3,param_2,param_4);
            }
            else {
              iVar1 = func_0x00bcd970(iVar4,param_3,param_2,param_4,iVar1);
            }
          }
          else if (iVar1 == 0) {
            iVar1 = func_0x00bcdcc0(iVar4,param_3,param_2,param_4);
          }
          else {
            iVar1 = func_0x00bce090(iVar4,param_3,param_2,param_4,iVar1);
          }
        }
        if (iVar1 == 0) {
          return param_4;
        }
      }
    }
  }
  return 0xffffffff;
}



undefined4 FUN_00bac930(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  iVar5 = func_0x00bc36f0(param_1);
  if (param_3 == (undefined4 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_00baca67;
  iVar6 = func_0x00bc3840(param_1);
  iVar7 = iVar6 / 2;
  iVar1 = iVar7 * 8;
  if (iVar6 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0x11b,"aesni_xts_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  if (param_4 == 0) {
    func_0x004089e0(param_2,iVar1,iVar5);
    puVar8 = &LAB_00406e00;
    puVar9 = &LAB_00405990;
  }
  else {
    iVar6 = func_0x00401390(param_2,iVar7 + param_2,iVar7);
    if (iVar6 == 0) {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\e_aes.c",0x126,"aesni_xts_init_key");
      func_0x00bc5160(6,0xc0,0);
      return 0;
    }
    func_0x004089c0(param_2,iVar1,iVar5);
    puVar8 = &LAB_00406870;
    puVar9 = &LAB_00405940;
  }
  *(undefined1 **)(iVar5 + 0x1f8) = puVar9;
  *(undefined1 **)(iVar5 + 0x200) = puVar8;
  func_0x004089c0(iVar7 + param_2,iVar1,iVar5 + 0xf8);
  *(undefined1 **)(iVar5 + 0x1fc) = &LAB_00405940;
  *(int *)(iVar5 + 0x1f0) = iVar5;
  if (param_3 == (undefined4 *)0x0) {
    return 1;
  }
LAB_00baca67:
  *(int *)(iVar5 + 500) = iVar5 + 0xf8;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  return 1;
}



undefined4
FUN_00baca80(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,char *param_6
            )

{
  int iVar1;
  undefined4 uVar2;
  
  func_0x00e87f70();
  iVar1 = func_0x00bc36f0(param_3);
  if ((((*(int *)(iVar1 + 0x1f0) != 0) && (*(int *)(iVar1 + 500) != 0)) && (param_4 != 0)) &&
     ((param_5 != 0 && ((char *)0xf < param_6)))) {
    if (param_6 < "ampler2DShadow") {
      if (*(code **)(iVar1 + 0x200) != (code *)0x0) {
        (**(code **)(iVar1 + 0x200))
                  (param_5,param_4,param_6,*(int *)(iVar1 + 0x1f0),*(int *)(iVar1 + 500),
                   param_3 + 0x20);
        return 1;
      }
      uVar2 = FUN_00bc39e0(param_3);
      iVar1 = func_0x00bcf9f0(iVar1 + 0x1f0,param_3 + 0x20,param_5,param_4,param_6,uVar2);
      if (iVar1 == 0) {
        return 1;
      }
    }
    else {
      FUN_00bc4f50();
      func_0x00bc5050("crypto\\evp\\e_aes.c",0xd1a,"aes_xts_cipher");
      func_0x00bc5160(6,0xbf,0);
    }
  }
  return 0;
}



undefined4 FUN_00bacb70(int param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto code_r0x00bacbf6;
  iVar2 = func_0x00bc3840(param_1);
  if (iVar2 << 3 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0x153,"aesni_ccm_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  func_0x004089c0(param_2,iVar2 << 3,iVar1);
  func_0x00bcf8b0(iVar1 + 0x118,*(undefined4 *)(iVar1 + 0x10c),*(undefined4 *)(iVar1 + 0x108),iVar1,
                  &LAB_00405940);
  *(undefined4 *)(iVar1 + 0xf8) = 1;
  puVar3 = &LAB_00406320;
  if (param_4 != 0) {
    puVar3 = &LAB_004061f0;
  }
  *(undefined1 **)(iVar1 + 0x148) = puVar3;
  if (param_3 == (void *)0x0) {
    return 1;
  }
code_r0x00bacbf6:
  memcpy((void *)(param_1 + 0x20),param_3,0xf - *(int *)(iVar1 + 0x108));
  *(undefined4 *)(iVar1 + 0xfc) = 1;
  return 1;
}



void FUN_00bacc70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_stack_00000014;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  func_0x00e87f70();
  iVar7 = in_stack_00000024;
  iVar1 = in_stack_00000020;
  iVar4 = in_stack_0000001c;
  in_stack_00000014 = DAT_0128fd40 ^ (uint)&stack0x00000000;
  iVar3 = func_0x00bc36f0(in_stack_0000001c);
  if (*(int *)(iVar3 + 0xf8) == 0) {
LAB_00bacf05:
    FUN_008ab370();
    return;
  }
  if (-1 < *(int *)(iVar3 + 0x110)) {
    func_0x00baece0(iVar4,iVar1,iVar7,in_stack_00000028);
    FUN_008ab370();
    return;
  }
  if ((iVar7 == 0) && (iVar1 != 0)) {
    FUN_008ab370();
    return;
  }
  if (*(int *)(iVar3 + 0xfc) == 0) goto LAB_00bacf05;
  if (iVar1 == 0) {
    if (iVar7 == 0) {
      iVar4 = func_0x00bcf900(iVar3 + 0x118,iVar4 + 0x20,0xf - *(int *)(iVar3 + 0x108),
                              in_stack_00000028);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar3 + 0x104) = 1;
        FUN_008ab370();
        return;
      }
    }
    else if ((*(int *)(iVar3 + 0x104) != 0) || (in_stack_00000028 == 0)) {
      func_0x00bced50(iVar3 + 0x118,iVar7,in_stack_00000028);
      FUN_008ab370();
      return;
    }
    goto LAB_00bacf05;
  }
  iVar5 = FUN_00bc39e0(iVar4);
  iVar2 = in_stack_00000028;
  if ((iVar5 == 0) && (*(int *)(iVar3 + 0x100) == 0)) goto LAB_00bacf05;
  if (*(int *)(iVar3 + 0x104) == 0) {
    iVar5 = func_0x00bcf900(iVar3 + 0x118,iVar4 + 0x20,0xf - *(int *)(iVar3 + 0x108),
                            in_stack_00000028);
    if (iVar5 != 0) goto LAB_00bacf05;
    *(undefined4 *)(iVar3 + 0x104) = 1;
  }
  iVar6 = FUN_00bc39e0(iVar4);
  iVar5 = *(int *)(iVar3 + 0x148);
  if (iVar6 != 0) {
    if (iVar5 == 0) {
      iVar4 = func_0x00bcf200(iVar3 + 0x118,iVar7,iVar1,iVar2);
    }
    else {
      iVar4 = func_0x00bcf570(iVar3 + 0x118,iVar7,iVar1,iVar2,iVar5);
    }
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x100) = 1;
      FUN_008ab370();
      return;
    }
    goto LAB_00bacf05;
  }
  if (iVar5 == 0) {
    iVar7 = func_0x00bcee40(iVar3 + 0x118,iVar7,iVar1,iVar2);
  }
  else {
    iVar7 = func_0x00bcf050(iVar3 + 0x118,iVar7,iVar1,iVar2,iVar5);
  }
  if ((iVar7 == 0) &&
     (iVar7 = func_0x00bcf970(iVar3 + 0x118,&stack0x00000004,*(undefined4 *)(iVar3 + 0x10c)),
     iVar7 != 0)) {
    uVar8 = func_0x00bc36c0(iVar4,*(undefined4 *)(iVar3 + 0x10c));
    iVar4 = func_0x00401390(&stack0x00000004,uVar8);
    if ((iVar4 == 0) && (iVar2 != -1)) goto LAB_00baced2;
  }
  func_0x00401320(iVar1,iVar2);
LAB_00baced2:
  *(undefined4 *)(iVar3 + 0xfc) = 0;
  *(undefined4 *)(iVar3 + 0x100) = 0;
  *(undefined4 *)(iVar3 + 0x104) = 0;
  FUN_008ab370();
  return;
}



undefined4 FUN_00bacf20(undefined4 param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x1f0) == 0) {
      memcpy(*(void **)(iVar1 + 0x290),param_3,*(size_t *)(iVar1 + 0x2cc));
      *(undefined4 *)(iVar1 + 500) = 1;
      return 1;
    }
    func_0x00bd0d90(iVar1 + 0x1f8,param_3,*(size_t *)(iVar1 + 0x2cc),*(undefined4 *)(iVar1 + 0x2d0))
    ;
    *(undefined4 *)(iVar1 + 500) = 1;
    return 1;
  }
  iVar2 = func_0x00bc3840(param_1);
  iVar2 = iVar2 << 3;
  if (iVar2 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0x175,"aesni_ocb_init_key");
    func_0x00bc5160(6,0x82,0);
  }
  else {
    func_0x004089c0(param_2,iVar2,iVar1);
    func_0x004089e0(param_2,iVar2,iVar1 + 0xf8);
    puVar3 = &LAB_00407a70;
    if (param_4 != 0) {
      puVar3 = &LAB_004073f0;
    }
    iVar2 = func_0x00bd0c60(iVar1 + 0x1f8,iVar1,iVar1 + 0xf8,&LAB_00405940,&LAB_00405990,puVar3);
    if (iVar2 != 0) {
      if ((param_3 != (void *)0x0) ||
         ((*(int *)(iVar1 + 500) != 0 &&
          (param_3 = *(void **)(iVar1 + 0x290), param_3 != (void *)0x0)))) {
        iVar2 = func_0x00bd0d90(iVar1 + 0x1f8,param_3,*(undefined4 *)(iVar1 + 0x2cc),
                                *(undefined4 *)(iVar1 + 0x2d0));
        if (iVar2 != 1) {
          return 0;
        }
        *(undefined4 *)(iVar1 + 500) = 1;
      }
      *(undefined4 *)(iVar1 + 0x1f0) = 1;
      return 1;
    }
  }
  return 0;
}



int FUN_00bad090(void)

{
  int iVar1;
  uint _Size;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  int iStack00000004;
  void *pvStack00000008;
  int iStack0000000c;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  void *in_stack_00000024;
  uint in_stack_00000028;
  
  func_0x00e87f70();
  iVar4 = 0;
  iStack00000004 = 0;
  iVar1 = func_0x00bc36f0(in_stack_0000001c);
  if ((*(int *)(iVar1 + 500) != 0) && (*(int *)(iVar1 + 0x1f0) != 0)) {
    if (in_stack_00000024 != (void *)0x0) {
      iStack0000000c = in_stack_00000020;
      if (in_stack_00000020 == 0) {
        pvStack00000008 = (void *)(iVar1 + 0x2b4);
        puVar6 = (uint *)(iVar1 + 0x2c8);
      }
      else {
        pvStack00000008 = (void *)(iVar1 + 0x2a4);
        puVar6 = (uint *)(iVar1 + 0x2c4);
        iVar4 = func_0x00baa460(*puVar6 + in_stack_00000020,in_stack_00000024,in_stack_00000028);
        if (iVar4 != 0) {
          FUN_00bc4f50();
          func_0x00bc5050("crypto\\evp\\e_aes.c",0xfb9,"aes_ocb_cipher");
          func_0x00bc5160(6,0xa2,0);
          return 0;
        }
      }
      uVar3 = *puVar6;
      if ((int)uVar3 < 1) {
        iVar4 = 0;
      }
      else {
        _Size = 0x10 - uVar3;
        if (in_stack_00000028 < _Size) {
          memcpy((void *)((int)pvStack00000008 + uVar3),in_stack_00000024,in_stack_00000028);
          *puVar6 = *puVar6 + in_stack_00000028;
          return 0;
        }
        memcpy((void *)((int)pvStack00000008 + uVar3),in_stack_00000024,_Size);
        in_stack_00000028 = in_stack_00000028 - _Size;
        in_stack_00000024 = (void *)((int)in_stack_00000024 + _Size);
        if (in_stack_00000020 == 0) {
          iVar4 = func_0x00bd03a0(iVar1 + 0x1f8,pvStack00000008,0x10);
          if (iVar4 == 0) {
            return -1;
          }
          iVar4 = 0x10;
          iStack00000004 = 0x10;
          *puVar6 = 0;
        }
        else {
          iVar4 = FUN_00bc39e0(in_stack_0000001c);
          if (iVar4 == 0) {
            iVar4 = func_0x00bd0680(iVar1 + 0x1f8,pvStack00000008,in_stack_00000020,0x10);
          }
          else {
            iVar4 = func_0x00bd0940();
          }
          if (iVar4 == 0) {
            return -1;
          }
          iVar4 = 0x10;
          iStack0000000c = in_stack_00000020 + 0x10;
          iStack00000004 = 0x10;
          *puVar6 = 0;
        }
      }
      uVar3 = in_stack_00000028 & 0xf;
      if (in_stack_00000028 != uVar3) {
        if (iStack0000000c == 0) {
          iVar4 = func_0x00bd03a0(iVar1 + 0x1f8,in_stack_00000024,in_stack_00000028 - uVar3);
        }
        else {
          iVar4 = FUN_00bc39e0(in_stack_0000001c);
          if (iVar4 == 0) {
            iVar4 = func_0x00bd0680(iVar1 + 0x1f8,in_stack_00000024,iStack0000000c,
                                    in_stack_00000028 - uVar3);
          }
          else {
            iVar4 = func_0x00bd0940();
          }
        }
        if (iVar4 == 0) {
          return -1;
        }
        iVar4 = iStack00000004 + (in_stack_00000028 - uVar3);
        in_stack_00000024 = (void *)((int)in_stack_00000024 + (in_stack_00000028 - uVar3));
        iStack00000004 = iVar4;
      }
      if (uVar3 != 0) {
        memcpy(pvStack00000008,in_stack_00000024,uVar3);
        *puVar6 = uVar3;
        iVar4 = iStack00000004;
      }
      return iVar4;
    }
    if (0 < *(int *)(iVar1 + 0x2c4)) {
      iVar4 = FUN_00bc39e0(in_stack_0000001c);
      if (iVar4 == 0) {
        iVar4 = func_0x00bd0680(iVar1 + 0x1f8,iVar1 + 0x2a4,in_stack_00000020,
                                *(undefined4 *)(iVar1 + 0x2c4));
      }
      else {
        iVar4 = func_0x00bd0940();
      }
      if (iVar4 == 0) {
        return -1;
      }
      iVar4 = *(int *)(iVar1 + 0x2c4);
      *(undefined4 *)(iVar1 + 0x2c4) = 0;
    }
    if (0 < *(int *)(iVar1 + 0x2c8)) {
      iVar2 = func_0x00bd03a0(iVar1 + 0x1f8,iVar1 + 0x2b4,*(int *)(iVar1 + 0x2c8));
      if (iVar2 == 0) {
        return -1;
      }
      *(undefined4 *)(iVar1 + 0x2c8) = 0;
    }
    iVar2 = FUN_00bc39e0(in_stack_0000001c);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x2d0) < 0) {
        return -1;
      }
      iVar2 = func_0x00bd0c40(iVar1 + 0x1f8,iVar1 + 0x294,*(int *)(iVar1 + 0x2d0));
      bVar5 = iVar2 == 0;
    }
    else {
      iVar2 = func_0x00bd0ed0(iVar1 + 0x1f8,iVar1 + 0x294,0x10);
      bVar5 = iVar2 == 1;
    }
    if (bVar5) {
      *(undefined4 *)(iVar1 + 500) = 0;
      return iVar4;
    }
  }
  return -1;
}



undefined4 FUN_00bad3c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  
  iVar1 = func_0x00bc36f0(param_1);
  iVar2 = func_0x00bc3840(param_1);
  iVar2 = iVar2 << 3;
  if (iVar2 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0x96b,"aes_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  uVar3 = func_0x00bc36d0(param_1);
  iVar4 = func_0x00bc3c70(uVar3);
  if (((iVar4 == 1) || (iVar4 == 2)) && (param_4 == 0)) {
    if ((DAT_01466b74 & 0x200) == 0) {
      iVar2 = func_0x00404a60(param_2,iVar2,iVar1);
      puVar5 = (undefined *)0x0;
      if (iVar4 == 2) {
        puVar5 = &DAT_004040f0;
      }
      puVar6 = &LAB_00404040;
    }
    else {
      iVar2 = func_0x00405770();
      puVar5 = (undefined *)0x0;
      if (iVar4 == 2) {
        puVar5 = &LAB_00405850;
      }
      puVar6 = &LAB_00405810;
    }
  }
  else if ((DAT_01466b74 & 0x200) == 0) {
    iVar2 = func_0x00404a50(param_2,iVar2,iVar1);
    puVar5 = (undefined *)0x0;
    if (iVar4 == 2) {
      puVar5 = &DAT_004040f0;
    }
    puVar6 = &LAB_00402a00;
  }
  else {
    iVar2 = func_0x00405720();
    puVar5 = (undefined *)0x0;
    if (iVar4 == 2) {
      puVar5 = &LAB_00405850;
    }
    puVar6 = &LAB_004057d0;
  }
  *(undefined1 **)(iVar1 + 0xf8) = puVar6;
  *(undefined **)(iVar1 + 0xfc) = puVar5;
  if (iVar2 < 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0x9c0,"aes_init_key");
    func_0x00bc5160(6,0x8f,0);
    return 0;
  }
  return 1;
}



undefined4 FUN_00bad520(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = func_0x00bc36f0(param_1);
  if (*(int *)(iVar2 + 0xfc) != 0) {
    pcVar1 = *(code **)(iVar2 + 0xfc);
    uVar3 = FUN_00bc39e0(param_1);
    (*pcVar1)(param_3,param_2,param_4,iVar2,param_1 + 0x20,uVar3);
    return 1;
  }
  iVar4 = FUN_00bc39e0(param_1);
  if (iVar4 != 0) {
    func_0x00bcc780();
    return 1;
  }
  func_0x00bcc480(param_3,param_2,param_4,iVar2,param_1 + 0x20,*(undefined4 *)(iVar2 + 0xf8));
  return 1;
}



undefined4 FUN_00bad5b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  func_0x00e87f70();
  uVar1 = func_0x00bc36e0(param_2);
  iVar2 = func_0x00bc36f0(param_2);
  if (uVar1 <= param_5) {
    uVar3 = 0;
    param_3 = param_3 - param_4;
    do {
      (**(code **)(iVar2 + 0xf8))(param_4,param_3 + param_4,iVar2);
      uVar3 = uVar3 + uVar1;
      param_4 = param_4 + uVar1;
    } while (uVar3 <= param_5 - uVar1);
  }
  return 1;
}



undefined4 FUN_00bad620(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x00401320(iVar1 + 0x100,0x1b0);
  if (*(int *)(iVar1 + 0x2b0) != param_1 + 0x20) {
    FUN_00bbc580(*(int *)(iVar1 + 0x2b0),"crypto\\evp\\e_aes.c",0xa56);
  }
  return 1;
}



undefined4 FUN_00bad680(undefined4 *param_1,undefined4 param_2,size_t param_3,undefined8 *param_4)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  uint uVar9;
  uint uVar10;
  int iVar8;
  
  iVar4 = func_0x00bc36f0(param_1);
  switch(param_2) {
  case 0:
    *(undefined4 *)(iVar4 + 0xf8) = 0;
    *(undefined4 *)(iVar4 + 0xfc) = 0;
    uVar5 = func_0x00bc2520(*param_1);
    *(undefined4 *)(iVar4 + 0x2b4) = uVar5;
    *(undefined4 *)(iVar4 + 0x2b8) = 0xffffffff;
    *(undefined4 **)(iVar4 + 0x2b0) = param_1 + 8;
    *(undefined4 *)(iVar4 + 700) = 0;
    *(undefined4 *)(iVar4 + 0x2c4) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    iVar6 = func_0x00bc36f0(param_4);
    if (*(int *)(iVar4 + 0x278) != 0) {
      if (*(int *)(iVar4 + 0x278) != iVar4) {
        return 0;
      }
      *(int *)(iVar6 + 0x278) = iVar6;
    }
    if (*(undefined4 **)(iVar4 + 0x2b0) == param_1 + 8) {
      *(undefined8 **)(iVar6 + 0x2b0) = param_4 + 4;
      return 1;
    }
    _Dst = (void *)FUN_00bbc4f0(*(undefined4 *)(iVar4 + 0x2b4),"crypto\\evp\\e_aes.c",0xad7);
    *(void **)(iVar6 + 0x2b0) = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,*(void **)(iVar4 + 0x2b0),*(size_t *)(iVar4 + 0x2b4));
      return 1;
    }
    break;
  case 9:
    if (0 < (int)param_3) {
      if ((0x10 < (int)param_3) && (*(int *)(iVar4 + 0x2b4) < (int)param_3)) {
        if (*(undefined4 **)(iVar4 + 0x2b0) != param_1 + 8) {
          FUN_00bbc580(*(undefined4 **)(iVar4 + 0x2b0),"crypto\\evp\\e_aes.c",0xa72);
        }
        iVar6 = FUN_00bbc4f0(param_3,"crypto\\evp\\e_aes.c",0xa73);
        *(int *)(iVar4 + 0x2b0) = iVar6;
        if (iVar6 == 0) {
          return 0;
        }
      }
      *(size_t *)(iVar4 + 0x2b4) = param_3;
      return 1;
    }
    break;
  case 0x10:
    if (((param_3 - 1 < 0x10) && (param_1[2] != 0)) && (-1 < *(int *)(iVar4 + 0x2b8))) {
      memcpy(param_4,param_1 + 0xc,param_3);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1 < 0x10) && (param_1[2] == 0)) {
      memcpy(param_1 + 0xc,param_4,param_3);
      *(size_t *)(iVar4 + 0x2b8) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 0xffffffff) {
      memcpy(*(void **)(iVar4 + 0x2b0),param_4,*(size_t *)(iVar4 + 0x2b4));
      *(undefined4 *)(iVar4 + 700) = 1;
      return 1;
    }
    if (((3 < (int)param_3) && (7 < (int)(*(int *)(iVar4 + 0x2b4) - param_3))) &&
       ((memcpy(*(void **)(iVar4 + 0x2b0),param_4,param_3), param_1[2] == 0 ||
        (iVar6 = func_0x00bc5330(*(int *)(iVar4 + 0x2b0) + param_3,*(int *)(iVar4 + 0x2b4) - param_3
                                ), 0 < iVar6)))) {
      *(undefined4 *)(iVar4 + 700) = 1;
      return 1;
    }
    break;
  case 0x13:
    if ((*(int *)(iVar4 + 700) != 0) && (*(int *)(iVar4 + 0xf8) != 0)) {
      func_0x00bce560(iVar4 + 0x100,*(undefined4 *)(iVar4 + 0x2b0),*(undefined4 *)(iVar4 + 0x2b4));
      sVar2 = *(size_t *)(iVar4 + 0x2b4);
      if (((int)param_3 < 1) || ((int)sVar2 < (int)param_3)) {
        param_3 = sVar2;
      }
      memcpy(param_4,(void *)((*(int *)(iVar4 + 0x2b0) - param_3) + sVar2),param_3);
      iVar6 = *(int *)(iVar4 + 0x2b0);
      iVar3 = *(int *)(iVar4 + 0x2b4);
      iVar8 = 8;
      do {
        iVar7 = iVar8 + -1;
        pcVar1 = (char *)(iVar8 + -9 + iVar6 + iVar3);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 != '\0') break;
        iVar8 = iVar7;
      } while (iVar7 != 0);
      *(undefined4 *)(iVar4 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      *(undefined8 *)(param_1 + 0xc) = *param_4;
      param_1[0xe] = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)((int)param_4 + 0xc);
      *(undefined4 *)(iVar4 + 0x2c4) = 0xd;
      *(undefined4 *)(iVar4 + 0x2c8) = 0;
      *(undefined4 *)(iVar4 + 0x2cc) = 0;
      uVar9 = (uint)CONCAT11(*(undefined1 *)((int)param_1 + 0x3b),*(undefined1 *)(param_1 + 0xf));
      if (7 < uVar9) {
        uVar10 = uVar9 - 8;
        if (param_1[2] == 0) {
          if (uVar10 < 0x10) {
            return 0;
          }
          uVar10 = uVar9 - 0x18;
        }
        *(char *)(param_1 + 0xf) = (char)uVar10;
        *(char *)((int)param_1 + 0x3b) = (char)(uVar10 >> 8);
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(iVar4 + 700) != 0) && (*(int *)(iVar4 + 0xf8) != 0)) && (param_1[2] == 0)) {
      memcpy((void *)((*(int *)(iVar4 + 0x2b4) - param_3) + *(int *)(iVar4 + 0x2b0)),param_4,param_3
            );
      func_0x00bce560(iVar4 + 0x100,*(undefined4 *)(iVar4 + 0x2b0),*(undefined4 *)(iVar4 + 0x2b4));
      *(undefined4 *)(iVar4 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(iVar4 + 0x2b4);
    return 1;
  }
  return 0;
}



undefined4 FUN_00badaf0(undefined4 param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(iVar1 + 0xf8) == 0) {
      memcpy(*(void **)(iVar1 + 0x2b0),param_3,*(size_t *)(iVar1 + 0x2b4));
    }
    else {
      func_0x00bce560(iVar1 + 0x100);
    }
    *(undefined4 *)(iVar1 + 0xfc) = 1;
    *(undefined4 *)(iVar1 + 700) = 0;
    return 1;
  }
  iVar2 = func_0x00bc3840(param_1);
  if (iVar2 << 3 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xaf0,"aes_gcm_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  if ((DAT_01466b74 & 0x200) == 0) {
    func_0x00404a50(param_2,iVar2 << 3,iVar1);
    puVar3 = &LAB_00402a00;
  }
  else {
    func_0x00405720();
    puVar3 = &LAB_004057d0;
  }
  func_0x00bce4f0(iVar1 + 0x100,iVar1,puVar3);
  *(undefined4 *)(iVar1 + 0x2d0) = 0;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(iVar1 + 0xfc) != 0 && (param_3 = *(void **)(iVar1 + 0x2b0), param_3 != (void *)0x0))
     )) {
    func_0x00bce560(iVar1 + 0x100,param_3,*(undefined4 *)(iVar1 + 0x2b4));
    *(undefined4 *)(iVar1 + 0xfc) = 1;
  }
  *(undefined4 *)(iVar1 + 0xf8) = 1;
  return 1;
}



undefined4 FUN_00badc40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_2 == 8) {
    iVar2 = func_0x00bc36f0(param_4);
    if (*(int *)(iVar1 + 0x1f0) != 0) {
      if (*(int *)(iVar1 + 0x1f0) != iVar1) {
        return 0;
      }
      *(int *)(iVar2 + 0x1f0) = iVar2;
    }
    if (*(int *)(iVar1 + 500) != 0) {
      if (*(int *)(iVar1 + 500) != iVar1 + 0xf8) {
        return 0;
      }
      *(int *)(iVar2 + 500) = iVar2 + 0xf8;
      return 1;
    }
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(iVar1 + 0x1f0) = 0;
    *(undefined4 *)(iVar1 + 500) = 0;
  }
  return 1;
}



undefined4 FUN_00badcd0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  
  func_0x00e87f70();
  iVar5 = func_0x00bc36f0(param_2);
  if (param_4 == (undefined4 *)0x0) {
    if (param_3 == 0) {
      return 1;
    }
  }
  else if (param_3 == 0) goto LAB_00bade50;
  iVar6 = func_0x00bc3840(param_2);
  iVar7 = iVar6 / 2;
  iVar1 = iVar7 * 8;
  if (iVar6 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xca2,"aes_xts_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  iVar6 = iVar7 + param_3;
  if ((param_5 != 0) && (iVar7 = func_0x00401390(param_3,iVar6,iVar7), iVar7 == 0)) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xcb7,"aes_xts_init_key");
    func_0x00bc5160(6,0xc0,0);
    return 0;
  }
  *(undefined4 *)(iVar5 + 0x200) = 0;
  if ((DAT_01466b74 & 0x200) == 0) {
    if (param_5 == 0) {
      func_0x00404a60(param_3,iVar1,iVar5);
      puVar8 = &LAB_00404040;
    }
    else {
      func_0x00404a50();
      puVar8 = &LAB_00402a00;
    }
    *(undefined1 **)(iVar5 + 0x1f8) = puVar8;
    func_0x00404a50(iVar6,iVar1,iVar5 + 0xf8);
    puVar8 = &LAB_00402a00;
  }
  else {
    if (param_5 == 0) {
      func_0x00405770();
      puVar8 = &LAB_00405810;
    }
    else {
      func_0x00405720();
      puVar8 = &LAB_004057d0;
    }
    *(undefined1 **)(iVar5 + 0x1f8) = puVar8;
    func_0x00405720(iVar6,iVar1,iVar5 + 0xf8);
    puVar8 = &LAB_004057d0;
  }
  *(undefined1 **)(iVar5 + 0x1fc) = puVar8;
  *(int *)(iVar5 + 0x1f0) = iVar5;
  if (param_4 == (undefined4 *)0x0) {
    return 1;
  }
LAB_00bade50:
  *(int *)(iVar5 + 500) = iVar5 + 0xf8;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(param_2 + 0x20) = *param_4;
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  *(undefined4 *)(param_2 + 0x2c) = uVar4;
  return 1;
}



undefined4 FUN_00bade80(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  void *_Dst;
  uint _Size;
  
  iVar3 = func_0x00bc36f0(param_1);
  switch(param_2) {
  case 0:
    *(undefined4 *)(iVar3 + 0xf8) = 0;
    *(undefined4 *)(iVar3 + 0xfc) = 0;
    *(undefined4 *)(iVar3 + 0x108) = 8;
    *(undefined4 *)(iVar3 + 0x10c) = 0xc;
    *(undefined4 *)(iVar3 + 0x100) = 0;
    *(undefined4 *)(iVar3 + 0x104) = 0;
    *(undefined4 *)(iVar3 + 0x110) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    iVar5 = func_0x00bc36f0(param_4);
    if (*(int *)(iVar3 + 0x144) != 0) {
      if (*(int *)(iVar3 + 0x144) != iVar3) {
        return 0;
      }
      *(int *)(iVar5 + 0x144) = iVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
    goto LAB_00badff7;
  case 0x10:
    iVar5 = FUN_00bc39e0(param_1);
    if (((iVar5 != 0) && (*(int *)(iVar3 + 0x100) != 0)) &&
       (iVar5 = func_0x00bcf970(iVar3 + 0x118,param_4,param_3), iVar5 != 0)) {
      *(undefined4 *)(iVar3 + 0x100) = 0;
      *(undefined4 *)(iVar3 + 0xfc) = 0;
      *(undefined4 *)(iVar3 + 0x104) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((param_3 & 1) == 0) && (param_3 - 4 < 0xd)) {
      iVar5 = FUN_00bc39e0(param_1);
      if (param_4 != (int *)0x0) {
        if (iVar5 != 0) {
          return 0;
        }
        *(undefined4 *)(iVar3 + 0x100) = 1;
        _Size = param_3;
        _Dst = (void *)func_0x00bc36c0(param_1);
        memcpy(_Dst,param_4,_Size);
      }
      *(uint *)(iVar3 + 0x10c) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      *(int *)(param_1 + 0x20) = *param_4;
      return 1;
    }
    break;
  case 0x14:
LAB_00badff7:
    if (param_3 - 2 < 7) {
      *(uint *)(iVar3 + 0x108) = param_3;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)func_0x00bc36c0(param_1);
      *puVar4 = *(undefined8 *)param_4;
      *(int *)(puVar4 + 1) = param_4[2];
      *(char *)((int)puVar4 + 0xc) = (char)param_4[3];
      *(undefined4 *)(iVar3 + 0x110) = 0xd;
      iVar5 = func_0x00bc36c0(param_1);
      uVar1 = *(undefined1 *)(iVar5 + 0xb);
      iVar5 = func_0x00bc36c0(param_1);
      uVar2 = CONCAT11(uVar1,*(undefined1 *)(iVar5 + 0xc));
      if (7 < uVar2) {
        uVar2 = uVar2 - 8;
        iVar5 = FUN_00bc39e0(param_1);
        if (iVar5 == 0) {
          if ((int)(uint)uVar2 < *(int *)(iVar3 + 0x10c)) {
            return 0;
          }
          uVar2 = uVar2 - (short)*(int *)(iVar3 + 0x10c);
        }
        iVar5 = func_0x00bc36c0(param_1);
        *(char *)(iVar5 + 0xb) = (char)(uVar2 >> 8);
        iVar5 = func_0x00bc36c0(param_1);
        *(char *)(iVar5 + 0xc) = (char)uVar2;
        return *(undefined4 *)(iVar3 + 0x10c);
      }
    }
    break;
  case 0x25:
    *param_4 = 0xf - *(int *)(iVar3 + 0x108);
    return 1;
  }
  return 0;
}



undefined4
FUN_00bae150(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined1 *param_5)

{
  void *_Src;
  int iVar1;
  int iVar2;
  
  _Src = param_5;
  func_0x00e87f70();
  iVar1 = func_0x00bc36f0(param_3);
  if (param_5 == (undefined1 *)0x0) {
    if (param_4 == 0) {
      return 1;
    }
  }
  else if (param_4 == 0) goto LAB_00bae261;
  iVar2 = func_0x00bc3840(param_3);
  if (iVar2 << 3 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xda2,"aes_ccm_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  if ((DAT_01466b74 & 0x200) == 0) {
    func_0x00404a50(param_4,iVar2 << 3,iVar1);
    param_5 = &LAB_00402a00;
  }
  else {
    func_0x00405720();
    param_5 = &LAB_004057d0;
  }
  param_1 = (undefined4 *)(iVar1 + 0xf8);
  func_0x00bcf8b0(iVar1 + 0x118,*(undefined4 *)(iVar1 + 0x10c),*(undefined4 *)(iVar1 + 0x108),iVar1,
                  param_5);
  *(undefined4 *)(iVar1 + 0x148) = 0;
  *param_1 = 1;
  if (_Src == (void *)0x0) {
    return 1;
  }
LAB_00bae261:
  memcpy((void *)(param_3 + 0x20),_Src,0xf - *(int *)(iVar1 + 0x108));
  *(undefined4 *)(iVar1 + 0xfc) = 1;
  return 1;
}



undefined4 FUN_00bae2a0(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t _Size;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_00bae34b;
  iVar2 = func_0x00bc3840(param_1);
  if (iVar2 << 3 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xe60,"aes_wrap_init_key");
    func_0x00bc5160(6,0x82,0);
    return 0;
  }
  iVar3 = FUN_00bc39e0(param_1);
  if (iVar3 == 0) {
    func_0x00404a60(param_2,iVar2 << 3,iVar1);
  }
  else {
    func_0x00404a50();
  }
  if (param_3 == (void *)0x0) {
    *(undefined4 *)(iVar1 + 0xf8) = 0;
    return 1;
  }
LAB_00bae34b:
  _Size = func_0x00bc3700(param_1);
  if ((int)_Size < 0) {
    return 0;
  }
  memcpy((void *)(param_1 + 0x20),param_3,_Size);
  *(void **)(iVar1 + 0xf8) = (void *)(param_1 + 0x20);
  return 1;
}



int FUN_00bae380(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  func_0x00e87f70();
  iVar2 = func_0x00bc36f0(param_3);
  iVar3 = func_0x00bc3700(param_3);
  if (param_5 == 0) {
    return 0;
  }
  if (((param_6 == 0) ||
      ((iVar4 = FUN_00bc39e0(param_3), iVar4 == 0 && ((param_6 < 0x10 || ((param_6 & 7) != 0))))))
     || ((iVar3 != 4 && ((param_6 & 7) != 0)))) {
    return -1;
  }
  iVar4 = func_0x00baa460(param_4,param_5,param_6);
  if (iVar4 != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xe87,"aes_wrap_cipher");
    func_0x00bc5160(6,0xa2,0);
    return 0;
  }
  iVar4 = FUN_00bc39e0(param_3);
  if (param_4 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0xf8);
    if (iVar3 != 4) {
      if (iVar4 == 0) {
        iVar3 = FUN_00bcfd20(iVar2,uVar1,param_4,param_5,param_6,&LAB_00404040);
        iVar2 = -1;
        if (iVar3 != 0) {
          iVar2 = iVar3;
        }
        return iVar2;
      }
      iVar3 = FUN_00bcff10(iVar2,uVar1,param_4,param_5,param_6,&LAB_00402a00);
      iVar2 = -1;
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      return iVar2;
    }
    if (iVar4 == 0) {
      iVar3 = FUN_00bcfdc0(iVar2,uVar1,param_4,param_5,param_6,&LAB_00404040);
      iVar2 = -1;
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      return iVar2;
    }
    iVar3 = FUN_00bd0060(iVar2,uVar1,param_4,param_5,param_6,&LAB_00402a00);
    iVar2 = -1;
    if (iVar3 != 0) {
      iVar2 = iVar3;
    }
    return iVar2;
  }
  if (iVar4 == 0) {
    return param_6 - 8;
  }
  if (iVar3 == 4) {
    param_6 = param_6 + 7 & 0xfffffff8;
  }
  return param_6 + 8;
}



undefined4 FUN_00bae520(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x00bc36f0(param_1);
  switch(param_2) {
  case 0:
    *(undefined4 *)(iVar1 + 0x1f0) = 0;
    *(undefined4 *)(iVar1 + 500) = 0;
    uVar3 = func_0x00bc2520(*param_1);
    *(undefined4 *)(iVar1 + 0x2cc) = uVar3;
    *(undefined4 *)(iVar1 + 0x2d0) = 0x10;
    *(undefined4 **)(iVar1 + 0x290) = param_1 + 8;
    *(undefined4 *)(iVar1 + 0x2c4) = 0;
    *(undefined4 *)(iVar1 + 0x2c8) = 0;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    iVar2 = func_0x00bc36f0(param_4);
    uVar3 = func_0x00bd0600(iVar2 + 0x1f8,iVar1 + 0x1f8,iVar2,iVar2 + 0xf8);
    return uVar3;
  case 9:
    if (param_3 - 1 < 0xf) {
      *(uint *)(iVar1 + 0x2cc) = param_3;
      return 1;
    }
    break;
  case 0x10:
    if ((param_3 == *(uint *)(iVar1 + 0x2d0)) && (iVar2 = FUN_00bc39e0(param_1), iVar2 != 0)) {
      memcpy(param_4,(void *)(iVar1 + 0x294),param_3);
      return 1;
    }
    break;
  case 0x11:
    if (param_4 == (undefined4 *)0x0) {
      if (param_3 < 0x11) {
        *(uint *)(iVar1 + 0x2d0) = param_3;
        return 1;
      }
    }
    else if ((param_3 == *(uint *)(iVar1 + 0x2d0)) && (iVar2 = FUN_00bc39e0(param_1), iVar2 == 0)) {
      memcpy((void *)(iVar1 + 0x294),param_4,param_3);
      return 1;
    }
    break;
  case 0x25:
    *param_4 = *(undefined4 *)(iVar1 + 0x2cc);
    return 1;
  }
  return 0;
}



undefined4 FUN_00bae6d0(undefined4 param_1,int param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  iVar1 = func_0x00bc36f0(param_1);
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(iVar1 + 0x1f0) == 0) {
      memcpy(*(void **)(iVar1 + 0x290),param_3,*(size_t *)(iVar1 + 0x2cc));
      *(undefined4 *)(iVar1 + 500) = 1;
      return 1;
    }
    func_0x00bd0d90(iVar1 + 0x1f8,param_3,*(size_t *)(iVar1 + 0x2cc),*(undefined4 *)(iVar1 + 0x2d0))
    ;
    *(undefined4 *)(iVar1 + 500) = 1;
    return 1;
  }
  iVar2 = func_0x00bc3840(param_1);
  iVar2 = iVar2 << 3;
  if (iVar2 < 1) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\evp\\e_aes.c",0xf52,"aes_ocb_init_key");
    func_0x00bc5160(6,0x82,0);
  }
  else {
    if ((DAT_01466b74 & 0x200) == 0) {
      func_0x00404a50(param_2,iVar2,iVar1);
      func_0x00404a60(param_2,iVar2,iVar1 + 0xf8);
      puVar4 = &LAB_00404040;
      puVar3 = &LAB_00402a00;
    }
    else {
      func_0x00405720();
      func_0x00405770(param_2,iVar2,iVar1 + 0xf8);
      puVar4 = &LAB_00405810;
      puVar3 = &LAB_004057d0;
    }
    iVar2 = func_0x00bd0c60(iVar1 + 0x1f8,iVar1,iVar1 + 0xf8,puVar3,puVar4,0);
    if (iVar2 != 0) {
      if ((param_3 != (void *)0x0) ||
         ((*(int *)(iVar1 + 500) != 0 &&
          (param_3 = *(void **)(iVar1 + 0x290), param_3 != (void *)0x0)))) {
        iVar2 = func_0x00bd0d90(iVar1 + 0x1f8,param_3,*(undefined4 *)(iVar1 + 0x2cc),
                                *(undefined4 *)(iVar1 + 0x2d0));
        if (iVar2 != 1) {
          return 0;
        }
        *(undefined4 *)(iVar1 + 500) = 1;
      }
      *(undefined4 *)(iVar1 + 0x1f0) = 1;
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00bae860(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00bc36f0(param_1);
  func_0x00bd05c0(iVar1 + 0x1f8);
  return 1;
}



bool FUN_00bb03a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  iVar3 = param_1;
  if (((*(byte *)(*(int *)(param_1 + 0x10) + 0x14) & 0x10) == 0) &&
     ((*(uint *)(param_2 + 0x48) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0x24;
    iVar1 = (**(code **)(param_1 + 0x1c))(0,param_1);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar2 = func_0x00bdb900(iVar2,&param_1,param_3);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1c) == 8) {
      return (bool)2;
    }
    *(undefined4 *)(iVar3 + 0x60) = 0x17;
    iVar3 = (**(code **)(iVar3 + 0x1c))(0,iVar3);
    return iVar3 != 0;
  }
  return true;
}



bool FUN_00bb05e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000050;
  int in_stack_0000008c;
  undefined4 *in_stack_0000009c;
  int in_stack_000000a0;
  
  func_0x00e87f70();
  iVar3 = in_stack_0000009c[0x17];
  iVar1 = func_0x00bd1830(in_stack_0000009c[0x14]);
  iVar2 = in_stack_0000009c[0x1a];
  if (iVar2 == 0) {
    if (iVar3 < iVar1 + -1) {
      iVar2 = func_0x00bd1a80(in_stack_0000009c[0x14],iVar3 + 1);
    }
    else {
      iVar2 = func_0x00bd1a80(in_stack_0000009c[0x14],iVar1 + -1);
      iVar3 = (*(code *)in_stack_0000009c[9])(in_stack_0000009c,iVar2,iVar2);
      if (iVar3 == 0) {
        in_stack_0000009c[0x18] = 0x21;
        iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
        if (iVar3 == 0) {
          return false;
        }
      }
    }
    if (iVar2 == 0) {
      return true;
    }
  }
  if (*(int *)(in_stack_000000a0 + 0x60) == 0) {
    if (((*(byte *)(iVar2 + 0x84) & 2) != 0) && ((*(byte *)(iVar2 + 0x88) & 2) == 0)) {
      in_stack_0000009c[0x18] = 0x23;
      iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      if (iVar3 == 0) {
        return false;
      }
    }
    if ((*(byte *)(in_stack_0000009c + 0x1c) & 0x80) == 0) {
      in_stack_0000009c[0x18] = 0x2c;
      iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      if (iVar3 == 0) {
        return false;
      }
    }
    if ((*(byte *)(in_stack_0000009c + 0x1c) & 8) == 0) {
      memset(&stack0x00000000,0,0x98);
      if ((in_stack_0000009c[0x1e] == 0) &&
         (iVar3 = func_0x00baf1e0(&stack0x00000000,*in_stack_0000009c,in_stack_0000009c[0x1a],
                                  in_stack_0000009c[2]), iVar3 != 0)) {
        func_0x00bd9c70(in_stack_00000010);
        if (in_stack_0000008c == 0) {
          uVar4 = func_0x00bb3420(&stack0x00000000);
        }
        else {
          uVar4 = func_0x00bb3340();
        }
        if (0 < (int)uVar4) {
          uVar5 = in_stack_0000009c[0x14];
          iVar3 = func_0x00bd1830(uVar5);
          uVar5 = func_0x00bd1a80(uVar5,iVar3 + -1);
          iVar3 = func_0x00bd1830(in_stack_00000050);
          uVar6 = func_0x00bd1a80(in_stack_00000050,iVar3 + -1);
          iVar3 = func_0x00bdf040(uVar5,uVar6);
          uVar4 = (uint)(iVar3 == 0);
        }
        func_0x00baf0d0(&stack0x00000000);
        if (0 < (int)uVar4) goto LAB_00bb07b0;
      }
      in_stack_0000009c[0x18] = 0x36;
      iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      if (iVar3 == 0) {
        return false;
      }
    }
LAB_00bb07b0:
    if ((*(byte *)(in_stack_000000a0 + 0x54) & 2) != 0) {
      in_stack_0000009c[0x18] = 0x29;
      iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      if (iVar3 == 0) {
        return false;
      }
    }
  }
  if ((*(byte *)(in_stack_0000009c + 0x1c) & 0x40) == 0) {
    uVar4 = *(uint *)(in_stack_0000009c[4] + 0x14);
    if ((uVar4 & 2) == 0) {
      if ((uVar4 & 0x200000) != 0) goto LAB_00bb08b5;
      iVar3 = 0;
    }
    else {
      iVar3 = in_stack_0000009c[4] + 8;
    }
    in_stack_0000009c[0x1b] = in_stack_000000a0;
    uVar5 = func_0x00baf190(in_stack_000000a0,iVar3);
    iVar1 = func_0x00baf6a0(uVar5);
    if (iVar1 == 0) {
      in_stack_0000009c[0x18] = 0xf;
      iVar1 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      if (iVar1 == 0) {
        return false;
      }
    }
    else if (0 < iVar1) {
      in_stack_0000009c[0x18] = 0xb;
      iVar1 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = FUN_00baaa40(in_stack_000000a0);
    if (iVar1 != 0) {
      uVar5 = FUN_00baaa40(in_stack_000000a0,iVar3);
      iVar3 = func_0x00baf6a0(uVar5);
      if (iVar3 == 0) {
        in_stack_0000009c[0x18] = 0x10;
        iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
        if (iVar3 == 0) {
          return false;
        }
      }
      else if ((iVar3 < 0) && ((*(byte *)(in_stack_0000009c + 0x1c) & 2) == 0)) {
        in_stack_0000009c[0x18] = 0xc;
        iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
        if (iVar3 == 0) {
          return false;
        }
      }
    }
    in_stack_0000009c[0x1b] = 0;
  }
LAB_00bb08b5:
  iVar3 = func_0x00bdf170(iVar2);
  if (iVar3 == 0) {
    in_stack_0000009c[0x18] = 6;
    iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
    if (iVar3 == 0) {
      return false;
    }
  }
  else {
    iVar2 = func_0x00bde790(in_stack_000000a0,iVar3,*(undefined4 *)(in_stack_0000009c[4] + 0x14));
    if (iVar2 != 0) {
      in_stack_0000009c[0x18] = iVar2;
      iVar2 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      if (iVar2 == 0) {
        return false;
      }
    }
    iVar3 = func_0x00bdb950(in_stack_000000a0,iVar3);
    if (iVar3 < 1) {
      in_stack_0000009c[0x18] = 8;
      iVar3 = (*(code *)in_stack_0000009c[7])(0,in_stack_0000009c);
      return iVar3 != 0;
    }
  }
  return true;
}



bool FUN_00bb12a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x00be1b70(param_3,param_2);
  return iVar1 == 0;
}



uint FUN_00bb1620(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x88) == 0) ||
     (iVar2 = func_0x00bd18c0(*(undefined4 *)(param_1 + 0x50),0), iVar2 != 0)) {
    iVar2 = func_0x00bda2d0(param_1 + 0x54,param_1 + 0x58,*(undefined4 *)(param_1 + 0x50),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x28),
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14));
    if (*(int *)(param_1 + 0x88) != 0) {
      func_0x00bd1840(*(undefined4 *)(param_1 + 0x50));
    }
    if (iVar2 != 0) {
      if (iVar2 == -1) {
        bVar1 = false;
        iVar6 = 0;
        iVar2 = func_0x00bd1830(*(undefined4 *)(param_1 + 0x50));
        if (0 < iVar2) {
          do {
            iVar2 = func_0x00bd1a80(*(undefined4 *)(param_1 + 0x50),iVar6);
            if ((*(uint *)(iVar2 + 0x84) & 0x800) != 0) {
              bVar1 = true;
              if (-1 < iVar6) {
                *(int *)(param_1 + 0x5c) = iVar6;
              }
              *(int *)(param_1 + 100) = iVar2;
              *(undefined4 *)(param_1 + 0x60) = 0x2a;
              iVar2 = (**(code **)(param_1 + 0x1c))(0,param_1);
              if (iVar2 == 0) {
                return 0;
              }
            }
            iVar6 = iVar6 + 1;
            iVar2 = func_0x00bd1830(*(undefined4 *)(param_1 + 0x50));
          } while (iVar6 < iVar2);
          if (bVar1) {
            return 1;
          }
        }
        FUN_00bc4f50();
        uVar4 = 0x6cc;
      }
      else {
        if (iVar2 == -2) {
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0x2b;
          uVar3 = (**(code **)(param_1 + 0x1c))(0,param_1);
          return uVar3;
        }
        if (iVar2 == 1) {
          if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x14) & 0x800) == 0) {
            return 1;
          }
          *(undefined4 *)(param_1 + 100) = 0;
          iVar2 = (**(code **)(param_1 + 0x1c))(2,param_1);
          return (uint)(iVar2 != 0);
        }
        FUN_00bc4f50();
        uVar4 = 0x6d8;
      }
      func_0x00bc5050("crypto\\x509\\x509_vfy.c",uVar4,"check_policy");
      func_0x00bc5160(0xb,0xc0103,0);
      return 0;
    }
    uVar5 = 0x8000b;
    uVar4 = 0x6ba;
  }
  else {
    uVar5 = 0x8000f;
    uVar4 = 0x6b1;
  }
  FUN_00bc4f50();
  func_0x00bc5050("crypto\\x509\\x509_vfy.c",uVar4,"check_policy");
  func_0x00bc5160(0xb,uVar5,0);
  *(undefined4 *)(param_1 + 0x60) = 0x11;
  return 0xffffffff;
}



// WARNING: Removing unreachable block (ram,0x00bb1963)
// WARNING: Removing unreachable block (ram,0x00bb19b8)
// WARNING: Removing unreachable block (ram,0x00bb19c8)
// WARNING: Removing unreachable block (ram,0x00bb19dc)

undefined4
FUN_00bb17e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int param_6,int param_7,undefined4 *param_8,int param_9,undefined4 param_10,
            int param_11)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  func_0x00e87f70();
  iVar2 = param_11;
  uVar1 = *(uint *)(*(int *)(param_11 + 0x10) + 0x14);
  if ((uVar1 & 4) != 0) {
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_11 + 0x78) == 0) {
        puVar6 = (undefined4 *)(param_11 + 0x50);
        param_9 = 0;
        param_6 = 0;
        param_8 = puVar6;
        goto LAB_00bb1850;
      }
    }
    else {
      puVar6 = (undefined4 *)(param_11 + 0x50);
      param_8 = puVar6;
      param_9 = func_0x00bd1830(*(undefined4 *)(param_11 + 0x50));
      param_9 = param_9 + -1;
      param_6 = 0;
      if (-1 < param_9) {
LAB_00bb1850:
        do {
          uVar4 = *puVar6;
          *(int *)(iVar2 + 0x5c) = param_6;
          param_11 = 0;
          param_5 = func_0x00bd1a80(uVar4,param_6);
          *(undefined4 *)(iVar2 + 0x68) = 0;
          *(int *)(iVar2 + 100) = param_5;
          *(undefined4 *)(iVar2 + 0x70) = 0;
          *(undefined4 *)(iVar2 + 0x74) = 0;
          if ((*(uint *)(param_5 + 0x84) & 0x400) == 0) {
            param_7 = 0;
            iVar3 = param_7;
            while( true ) {
              param_7 = iVar3;
              if (*(code **)(iVar2 + 0x2c) == (code *)0x0) {
                param_1 = 0;
                param_2 = 0;
                param_4 = 0;
                uVar4 = func_0x00bb6140(param_5);
                param_3 = *(undefined4 *)(iVar2 + 0x74);
                iVar3 = func_0x00bb2b90(iVar2,&stack0x00000000,&param_4,&param_1,&param_2,&param_3,
                                        *(undefined4 *)(iVar2 + 0xc));
                if (iVar3 == 0) {
                  uVar4 = (**(code **)(iVar2 + 0x40))(iVar2,uVar4);
                  func_0x00bb2b90(iVar2,&stack0x00000000,&param_4,&param_1,&param_2,&param_3,uVar4);
                  func_0x00bd1860(uVar4,FUN_00bdb8e0);
                }
                iVar3 = 0;
              }
              else {
                iVar3 = (**(code **)(iVar2 + 0x2c))(iVar2,&param_11);
              }
              if (iVar3 == 0) break;
              *(int *)(iVar2 + 0x6c) = param_11;
              iVar5 = (**(code **)(iVar2 + 0x30))(iVar2,param_11);
              if ((iVar5 == 0) ||
                 (iVar5 = (**(code **)(iVar2 + 0x34))(iVar2,param_11,param_5), iVar5 == 0))
              goto LAB_00bb1a45;
              FUN_00bdb8e0(param_11);
              FUN_00bdb8e0(0);
              iVar3 = *(int *)(iVar2 + 0x74);
              param_11 = 0;
              if (param_7 == iVar3) break;
              if (iVar3 == 0x807f) goto LAB_00bb1a45;
            }
            *(undefined4 *)(iVar2 + 0x60) = 3;
            iVar5 = (**(code **)(iVar2 + 0x1c))(0,iVar2);
LAB_00bb1a45:
            FUN_00bdb8e0(param_11);
            FUN_00bdb8e0(0);
            *(undefined4 *)(iVar2 + 0x6c) = 0;
            puVar6 = param_8;
            if (iVar5 == 0) {
              return 0;
            }
          }
          param_6 = param_6 + 1;
          if (param_9 < param_6) {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 1;
}



undefined4 FUN_00bb2e70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar2 = func_0x00bd1830(*(undefined4 *)(param_1 + 0x50));
    iVar5 = iVar2 + -1;
    iVar3 = func_0x00bd1a80(*(undefined4 *)(param_1 + 0x50),iVar5);
    *(int *)(param_1 + 0x5c) = iVar5;
    if (*(int *)(param_1 + 0x88) == 0) {
      iVar4 = func_0x00be1b70(iVar3,iVar3);
      iVar6 = iVar3;
      if ((iVar4 != 0) && ((*(uint *)(*(int *)(param_1 + 0x10) + 0x14) & 0x80000) == 0)) {
        if (iVar5 < 1) {
          *(undefined4 *)(param_1 + 0x5c) = 0;
          iVar2 = iVar3;
          if (iVar3 == 0) {
            iVar2 = func_0x00bd1a80(*(undefined4 *)(param_1 + 0x50),0);
          }
          *(int *)(param_1 + 100) = iVar2;
          *(undefined4 *)(param_1 + 0x60) = 0x15;
          iVar2 = (**(code **)(param_1 + 0x1c))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        else {
          iVar5 = iVar2 + -2;
          *(int *)(param_1 + 0x5c) = iVar5;
          iVar3 = func_0x00bd1a80(*(undefined4 *)(param_1 + 0x50),iVar5);
        }
      }
    }
    else {
      iVar6 = 0;
    }
    param_1 = iVar3;
    if (-1 < iVar5) {
      do {
        if (iVar6 != 0) {
          if (param_1 == iVar6) {
            if (((*(uint *)(*(int *)(iVar1 + 0x10) + 0x14) & 0x4000) == 0) ||
               ((*(uint *)(iVar6 + 0x84) & 0x2000) == 0)) goto LAB_00bb2ff8;
            iVar3 = (uint)(param_1 != iVar6) + iVar5;
            if ((*(byte *)(iVar6 + 0x84) & 0x10) != 0) goto LAB_00bb2f95;
          }
          else {
            iVar3 = (uint)(param_1 != iVar6) + iVar5;
LAB_00bb2f95:
            iVar2 = func_0x00be1bf0(iVar6,param_1);
            if (iVar2 != 0) {
              if (-1 < iVar3) {
                *(int *)(iVar1 + 0x5c) = iVar3;
              }
              *(int *)(iVar1 + 0x60) = iVar2;
              *(int *)(iVar1 + 100) = iVar6;
              iVar2 = (**(code **)(iVar1 + 0x1c))(0,iVar1);
              if (iVar2 == 0) {
                return 0;
              }
            }
          }
          iVar2 = func_0x00bdf170(iVar6);
          if (iVar2 == 0) {
            if (-1 < iVar3) {
              *(int *)(iVar1 + 0x5c) = iVar3;
            }
            *(int *)(iVar1 + 100) = iVar6;
            *(undefined4 *)(iVar1 + 0x60) = 6;
            iVar3 = (**(code **)(iVar1 + 0x1c))(0,iVar1);
          }
          else {
            iVar3 = func_0x00bdb1a0(param_1,iVar2);
            if (0 < iVar3) goto LAB_00bb2ff8;
            *(int *)(iVar1 + 0x5c) = iVar5;
            iVar3 = param_1;
            if (param_1 == 0) {
              iVar3 = func_0x00bd1a80(*(undefined4 *)(iVar1 + 0x50),iVar5);
            }
            *(int *)(iVar1 + 100) = iVar3;
            *(undefined4 *)(iVar1 + 0x60) = 7;
            iVar3 = (**(code **)(iVar1 + 0x1c))(0,iVar1);
          }
          if (iVar3 == 0) {
            return 0;
          }
        }
LAB_00bb2ff8:
        iVar3 = func_0x00bb30a0(iVar1,param_1,iVar5);
        if (iVar3 == 0) {
          return 0;
        }
        *(int *)(iVar1 + 0x68) = iVar6;
        *(int *)(iVar1 + 100) = param_1;
        *(int *)(iVar1 + 0x5c) = iVar5;
        iVar3 = (**(code **)(iVar1 + 0x1c))(1,iVar1);
        if (iVar3 == 0) {
          return 0;
        }
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) {
          return 1;
        }
        iVar3 = func_0x00bd1a80(*(undefined4 *)(iVar1 + 0x50),iVar5);
        iVar6 = param_1;
        param_1 = iVar3;
      } while( true );
    }
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x1c))(*(int *)(param_1 + 0x60) == 0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



undefined4 FUN_00bb3550(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bbc830(0x1c,"crypto\\bio\\bss_bio.c",0x4e);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0x4400;
  *(int *)(param_1 + 0x28) = iVar1;
  return 1;
}



int FUN_00bb3580(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return param_1;
  }
  piVar1 = *(int **)(param_1 + 0x28);
  if (*piVar1 != 0) {
    func_0x00bb3dd0(param_1);
  }
  FUN_00bbc580(piVar1[5],"crypto\\bio\\bss_bio.c",0x67);
  FUN_00bbc580(piVar1,"crypto\\bio\\bss_bio.c",0x68);
  return 1;
}



uint FUN_00bb35d0(int param_1,void *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  func_0x00baa700(param_1,0xf);
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = *(int *)(**(int **)(param_1 + 0x28) + 0x28);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    if ((param_2 != (void *)0x0) && (param_3 != 0)) {
      uVar4 = *(uint *)(iVar2 + 8);
      if (uVar4 != 0) {
        uVar5 = param_3;
        if (uVar4 < param_3) {
          param_3 = uVar4;
          uVar5 = uVar4;
        }
        do {
          iVar3 = *(int *)(iVar2 + 0xc);
          uVar4 = param_3;
          if (*(uint *)(iVar2 + 0x10) < iVar3 + param_3) {
            uVar4 = *(int *)(iVar2 + 0x10) - iVar3;
          }
          memcpy(param_2,(void *)(*(int *)(iVar2 + 0x14) + iVar3),uVar4);
          piVar1 = (int *)(iVar2 + 8);
          *piVar1 = *piVar1 - uVar4;
          if (*piVar1 == 0) {
            *(undefined4 *)(iVar2 + 0xc) = 0;
          }
          else {
            *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + uVar4;
            if (*(int *)(iVar2 + 0xc) == *(int *)(iVar2 + 0x10)) {
              *(undefined4 *)(iVar2 + 0xc) = 0;
            }
            param_2 = (void *)((int)param_2 + uVar4);
          }
          param_3 = param_3 - uVar4;
        } while (param_3 != 0);
        return uVar5;
      }
      if (*(int *)(iVar2 + 4) == 0) {
        func_0x00bab680(param_1,9);
        uVar4 = *(uint *)(iVar2 + 0x10);
        if (param_3 <= *(uint *)(iVar2 + 0x10)) {
          uVar4 = param_3;
        }
        *(uint *)(iVar2 + 0x18) = uVar4;
        return 0xffffffff;
      }
    }
  }
  return 0;
}



uint FUN_00bb36b0(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  func_0x00baa700(param_1,0xf);
  if (((*(int *)(param_1 + 0x14) == 0) || (param_2 == (void *)0x0)) || ((int)param_3 < 1)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_bio.c",0x11f,"bio_write");
    func_0x00bc5160(0x20,0x7c,0);
    return 0xffffffff;
  }
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 != *(int *)(iVar1 + 0x10)) {
    uVar2 = *(int *)(iVar1 + 0x10) - iVar4;
    uVar5 = param_3;
    if (uVar2 < param_3) {
      param_3 = uVar2;
      uVar5 = uVar2;
    }
    do {
      uVar2 = *(uint *)(iVar1 + 0x10);
      uVar3 = *(int *)(iVar1 + 0xc) + iVar4;
      uVar6 = uVar3 - uVar2;
      if (uVar3 < uVar2) {
        uVar6 = uVar3;
      }
      uVar3 = param_3;
      if (uVar2 < uVar6 + param_3) {
        uVar3 = uVar2 - uVar6;
      }
      memcpy((void *)(*(int *)(iVar1 + 0x14) + uVar6),param_2,uVar3);
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + uVar3;
      param_2 = (void *)((int)param_2 + uVar3);
      iVar4 = *(int *)(iVar1 + 8);
      param_3 = param_3 - uVar3;
    } while (param_3 != 0);
    return uVar5;
  }
  func_0x00bab680(param_1,10);
  return 0xffffffff;
}



uint FUN_00bb37a0(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x28);
  switch(param_2) {
  case 1:
    if (piVar1[5] != 0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      return 0;
    }
    break;
  case 2:
    if (*piVar1 == 0) {
      return 1;
    }
    iVar3 = *(int *)(*piVar1 + 0x28);
    if ((*(int *)(iVar3 + 8) == 0) && (*(int *)(iVar3 + 4) != 0)) {
      return 1;
    }
    break;
  case 8:
    return *(uint *)(param_1 + 0x18);
  case 9:
    *(uint *)(param_1 + 0x18) = param_3;
    return 1;
  case 10:
    if (*piVar1 != 0) {
      return *(uint *)(*(int *)(*piVar1 + 0x28) + 8);
    }
    break;
  case 0xb:
    return 1;
  case 0xc:
    *(int *)(*(int *)(param_4 + 0x28) + 0x10) = piVar1[4];
    return 1;
  case 0xd:
    if (piVar1[5] != 0) {
      return piVar1[2];
    }
    break;
  case 0x88:
    if (*piVar1 == 0) {
      if (param_3 == 0) {
        FUN_00bc4f50();
        func_0x00bc5050("crypto\\bio\\bss_bio.c",0x1af,"bio_ctrl");
        func_0x00bc5160(0x20,0x7d,0);
        return 0;
      }
      if (piVar1[4] == param_3) {
        return 1;
      }
      FUN_00bbc580(piVar1[5],"crypto\\bio\\bss_bio.c",0x1b5);
      piVar1[5] = 0;
      piVar1[4] = param_3;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_bio.c",0x1ac,"bio_ctrl");
    func_0x00bc5160(0x20,0x7b,0);
    break;
  case 0x89:
    return piVar1[4];
  case 0x8a:
    piVar2 = *(int **)(param_4 + 0x28);
    if ((*piVar1 == 0) && (*piVar2 == 0)) {
      if (piVar1[5] == 0) {
        iVar3 = FUN_00bbc4f0(piVar1[4],"crypto\\bio\\bss_bio.c",0x26e);
        piVar1[5] = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        piVar1[2] = 0;
        piVar1[3] = 0;
      }
      if (piVar2[5] == 0) {
        iVar3 = FUN_00bbc4f0(piVar2[4],"crypto\\bio\\bss_bio.c",0x276);
        piVar2[5] = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      *piVar1 = param_4;
      piVar1[1] = 0;
      piVar1[6] = 0;
      *piVar2 = param_1;
      piVar2[1] = 0;
      piVar2[6] = 0;
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_4 + 0x14) = 1;
      return 1;
    }
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_bio.c",0x269,"bio_make_pair");
    func_0x00bc5160(0x20,0x7b,0);
    return 0;
  case 0x8b:
    func_0x00bb3dd0(param_1);
    return 1;
  case 0x8c:
    if ((*piVar1 != 0) && (piVar1[1] == 0)) {
      return piVar1[4] - piVar1[2];
    }
    break;
  case 0x8d:
    return piVar1[6];
  case 0x8e:
    piVar1[1] = 1;
    return 1;
  case 0x8f:
    uVar5 = func_0x00bb3e20(param_1,param_4);
    return uVar5;
  case 0x90:
    uVar5 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      uVar5 = param_3;
    }
    uVar6 = func_0x00bb3e20(param_1,param_4);
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 1) {
      return uVar5;
    }
    iVar3 = *(int *)(**(int **)(param_1 + 0x28) + 0x28);
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 - uVar5;
    if ((*piVar1 != 0) &&
       (iVar4 = *(int *)(iVar3 + 0xc) + uVar5, *(int *)(iVar3 + 0xc) = iVar4,
       iVar4 != *(int *)(iVar3 + 0x10))) {
      return uVar5;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
    return uVar5;
  case 0x91:
    uVar5 = func_0x00bb3f60(param_1,param_4);
    return uVar5;
  case 0x92:
    uVar5 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      uVar5 = param_3;
    }
    uVar6 = func_0x00bb3f60(param_1,param_4);
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 1) {
      return uVar5;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x28) + 8);
    *piVar1 = *piVar1 + uVar5;
    return uVar5;
  case 0x93:
    piVar1[6] = 0;
    return 1;
  }
  return 0;
}



uint FUN_00bb3bf0(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  
  func_0x00e87f70();
  pcVar7 = param_3;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar8 = (int)pcVar7 - (int)(param_3 + 1);
  func_0x00baa700(param_2,0xf);
  if (((*(int *)(param_2 + 0x14) == 0) || (param_3 == (char *)0x0)) || ((int)uVar8 < 1)) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(iVar2 + 0x18) = 0;
  if (*(int *)(iVar2 + 4) != 0) {
    FUN_00bc4f50();
    func_0x00bc5050("crypto\\bio\\bss_bio.c",0x11f,"bio_write");
    func_0x00bc5160(0x20,0x7c,0);
    return 0xffffffff;
  }
  iVar4 = *(int *)(iVar2 + 8);
  if (iVar4 != *(int *)(iVar2 + 0x10)) {
    uVar5 = *(int *)(iVar2 + 0x10) - iVar4;
    uVar6 = uVar5;
    if (uVar8 <= uVar5) {
      uVar5 = uVar8;
      uVar6 = uVar8;
    }
    do {
      uVar3 = *(int *)(iVar2 + 0xc) + iVar4;
      uVar8 = *(uint *)(iVar2 + 0x10);
      uVar9 = uVar3 - uVar8;
      if (uVar3 < uVar8) {
        uVar9 = uVar3;
      }
      uVar3 = uVar5;
      if (uVar8 < uVar9 + uVar5) {
        uVar3 = uVar8 - uVar9;
      }
      memcpy((void *)(*(int *)(iVar2 + 0x14) + uVar9),param_3,uVar3);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + uVar3;
      uVar5 = uVar5 - uVar3;
      iVar4 = *(int *)(iVar2 + 8);
      param_3 = param_3 + uVar3;
    } while (uVar5 != 0);
    return uVar6;
  }
  func_0x00bab680(param_2,10);
  return 0xffffffff;
}



void FUN_00bb4170(undefined4 param_1,undefined4 param_2)

{
  func_0x00408b00(param_1,param_2,1);
  return;
}



undefined4 FUN_00bb4190(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x10) + param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
    piVar1 = (int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
    _Dst = (void *)(param_1 + 0x18);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (param_3 < 0x40) {
        if (iVar2 + param_3 < 0x40) {
          memcpy((void *)(*piVar1 + (int)_Dst),param_2,param_3);
          *piVar1 = *piVar1 + param_3;
          return 1;
        }
        iVar2 = *piVar1;
      }
      _Size = 0x40 - iVar2;
      memcpy((void *)(iVar2 + (int)_Dst),param_2,_Size);
      func_0x00408b00(param_1,_Dst,1);
      param_2 = (void *)((int)param_2 + _Size);
      *piVar1 = 0;
      param_3 = param_3 - _Size;
      memset(_Dst,0,0x40);
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      func_0x00408b00(param_1,param_2,uVar3);
      param_2 = (void *)((int)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(size_t *)(param_1 + 0x58) = param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}



undefined4 FUN_00bb4300(int param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  int *piVar1;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20) + param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    _Dst = (void *)(param_1 + 0x28);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (param_3 >> 0x1d);
    iVar2 = *(int *)(param_1 + 0x68);
    piVar1 = (int *)(param_1 + 0x68);
    if (iVar2 != 0) {
      if (param_3 < 0x40) {
        if (iVar2 + param_3 < 0x40) {
          memcpy((void *)(*piVar1 + (int)_Dst),param_2,param_3);
          *piVar1 = *piVar1 + param_3;
          return 1;
        }
        iVar2 = *piVar1;
      }
      _Size = 0x40 - iVar2;
      memcpy((void *)(iVar2 + (int)_Dst),param_2,_Size);
      func_0x004091c0(param_1,_Dst,1);
      param_2 = (void *)((int)param_2 + _Size);
      *piVar1 = 0;
      param_3 = param_3 - _Size;
      memset(_Dst,0,0x40);
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      func_0x004091c0(param_1,param_2,uVar3);
      param_2 = (void *)((int)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(size_t *)(param_1 + 0x68) = param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}



void FUN_00bb4800(undefined4 param_1,undefined4 param_2)

{
  func_0x004091c0(param_1,param_2,1);
  return;
}



undefined4 FUN_00bb4820(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x20) + param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    piVar1 = (int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (param_3 >> 0x1d);
    _Dst = (void *)(param_1 + 0x28);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (param_3 < 0x40) {
        if (iVar2 + param_3 < 0x40) {
          memcpy((void *)(*piVar1 + (int)_Dst),param_2,param_3);
          *piVar1 = *piVar1 + param_3;
          return 1;
        }
        iVar2 = *piVar1;
      }
      _Size = 0x40 - iVar2;
      memcpy((void *)(iVar2 + (int)_Dst),param_2,_Size);
      func_0x004091c0(param_1,_Dst,1);
      param_2 = (void *)((int)param_2 + _Size);
      *piVar1 = 0;
      param_3 = param_3 - _Size;
      memset(_Dst,0,0x40);
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      func_0x004091c0(param_1,param_2,uVar3);
      param_2 = (void *)((int)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(size_t *)(param_1 + 0x68) = param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}



void FUN_00bb6040(int param_1)

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



void FUN_00bb7280(undefined4 param_1,undefined4 param_2)

{
  func_0x0040e680(param_1,param_2,1);
  return;
}



undefined4 FUN_00bb72a0(int param_1,void *param_2,size_t param_3)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  size_t _Size;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_1 + 0x14) + param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar3;
    piVar1 = (int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (param_3 >> 0x1d);
    _Dst = (void *)(param_1 + 0x1c);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (param_3 < 0x40) {
        if (iVar2 + param_3 < 0x40) {
          memcpy((void *)(*piVar1 + (int)_Dst),param_2,param_3);
          *piVar1 = *piVar1 + param_3;
          return 1;
        }
        iVar2 = *piVar1;
      }
      _Size = 0x40 - iVar2;
      memcpy((void *)(iVar2 + (int)_Dst),param_2,_Size);
      func_0x0040e680(param_1,_Dst,1);
      param_2 = (void *)((int)param_2 + _Size);
      *piVar1 = 0;
      param_3 = param_3 - _Size;
      memset(_Dst,0,0x40);
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      func_0x0040e680(param_1,param_2,uVar3);
      param_2 = (void *)((int)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(size_t *)(param_1 + 0x5c) = param_3;
      memcpy(_Dst,param_2,param_3);
    }
  }
  return 1;
}



undefined4 FUN_00bb7d90(int param_1,void *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *_Dst;
  
  if (param_3 != 0) {
    uVar4 = (uint)((ulonglong)param_3 * 8);
    uVar5 = uVar4 + *(uint *)(param_1 + 0x40);
    uVar4 = (int)((ulonglong)param_3 * 8 >> 0x20) + *(int *)(param_1 + 0x44) +
            (uint)CARRY4(uVar4,*(uint *)(param_1 + 0x40));
    if ((uVar4 <= *(uint *)(param_1 + 0x44)) &&
       ((uVar4 < *(uint *)(param_1 + 0x44) || (uVar5 < *(uint *)(param_1 + 0x40))))) {
      puVar1 = (uint *)(param_1 + 0x48);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)(0xfffffffe < uVar2);
    }
    *(uint *)(param_1 + 0x40) = uVar5;
    iVar3 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0x44) = uVar4;
    if (iVar3 != 0) {
      uVar4 = 0x80 - iVar3;
      _Dst = (void *)(iVar3 + 0x50 + param_1);
      if (param_3 < uVar4) {
        memcpy(_Dst,param_2,param_3);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_3;
        return 1;
      }
      memcpy(_Dst,param_2,uVar4);
      param_3 = param_3 - uVar4;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      param_2 = (void *)((int)param_2 + uVar4);
      func_0x00412600(param_1,param_1 + 0x50,1);
    }
    uVar4 = param_3;
    if (0x7f < param_3) {
      func_0x00412600(param_1,param_2,param_3 >> 7);
      uVar4 = param_3 & 0x7f;
      param_2 = (void *)((int)param_2 + (param_3 - uVar4));
    }
    if (uVar4 != 0) {
      memcpy((void *)(param_1 + 0x50),param_2,uVar4);
      *(uint *)(param_1 + 0xd0) = uVar4;
    }
  }
  return 1;
}



void FUN_00bb8680(undefined4 param_1,undefined4 param_2)

{
  func_0x00412600(param_1,param_2,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8cb0(void)

{
  func_0x00bf00d0();
  _DAT_013dec0c = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8cc0(void)

{
  func_0x00bf0b30();
  _DAT_013dec14 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8cd0(void)

{
  _DAT_013dec30 = func_0x00bf2430();
  if (_DAT_013dec30 == 0) {
    return;
  }
  DAT_013dec2c = 1;
  _DAT_013dec30 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8d00(void)

{
  int iVar1;
  
  DAT_013debd8 = func_0x00bbb390();
  if ((DAT_013debd8 != 0) && (DAT_013debdc = func_0x00bbb390(), DAT_013debdc != 0)) {
    FUN_00bef3b0();
    iVar1 = func_0x00bbf460();
    if ((iVar1 != 0) && (iVar1 = func_0x00bbb350(&DAT_013debe0,0), iVar1 != 0)) {
      DAT_013debe8 = 1;
      _DAT_013debec = 1;
      return;
    }
  }
  func_0x00bbb370(DAT_013debd8);
  DAT_013debd8 = 0;
  func_0x00bbb370(DAT_013debdc);
  DAT_013debdc = 0;
  _DAT_013debec = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8d90(void)

{
  _DAT_013dec24 = func_0x00bf1050(0);
  _DAT_013dec1c = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8db0(void)

{
  _DAT_013dec24 = func_0x00bf1050(DAT_013dec20);
  _DAT_013dec1c = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8dd0(void)

{
  func_0x00bf7e00();
  _DAT_013dec58 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8de0(void)

{
  func_0x00bf37f0();
  _DAT_013dec48 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8df0(void)

{
  func_0x00bf2890();
  _DAT_013dec38 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8e00(void)

{
  func_0x00bf3960();
  _DAT_013dec50 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8e10(void)

{
  func_0x00bf2ed0();
  _DAT_013dec40 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00bb8e20(void)

{
  BOOL BVar1;
  
  func_0x00e87f70();
  BVar1 = GetModuleHandleExW(5,(LPCWSTR)&DAT_013debe8,(HMODULE *)&stack0x00000000);
  _DAT_013debfc = (uint)(BVar1 == 1);
  return;
}
