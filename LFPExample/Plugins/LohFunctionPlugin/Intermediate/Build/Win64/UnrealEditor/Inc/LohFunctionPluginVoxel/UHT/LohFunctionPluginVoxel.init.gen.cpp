// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLohFunctionPluginVoxel_init() {}
	LOHFUNCTIONPLUGINVOXEL_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LohFunctionPluginVoxel;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LohFunctionPluginVoxel()
	{
		if (!Z_Registration_Info_UPackage__Script_LohFunctionPluginVoxel.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LohFunctionPluginVoxel",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE60A8BC4,
				0xA87FF3C7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LohFunctionPluginVoxel.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LohFunctionPluginVoxel.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LohFunctionPluginVoxel(Z_Construct_UPackage__Script_LohFunctionPluginVoxel, TEXT("/Script/LohFunctionPluginVoxel"), Z_Registration_Info_UPackage__Script_LohFunctionPluginVoxel, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE60A8BC4, 0xA87FF3C7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
