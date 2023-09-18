// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPluginVoxel/Public/Voxel/LFPVoxelRendererComponent.h"
#include "LohFunctionPlugin/Public/Components/LFPGridContainerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPVoxelRendererComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPGridContainerComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPChuckUpdateAction();
	LOHFUNCTIONPLUGINVOXEL_API UClass* Z_Construct_UClass_ULFPVoxelRendererComponent();
	LOHFUNCTIONPLUGINVOXEL_API UClass* Z_Construct_UClass_ULFPVoxelRendererComponent_NoRegister();
	LOHFUNCTIONPLUGINVOXEL_API UEnum* Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode();
	LOHFUNCTIONPLUGINVOXEL_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature();
	LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelRendererSetting();
	LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelRendererStatus();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPluginVoxel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting;
class UScriptStruct* FLFPVoxelRendererSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("LFPVoxelRendererSetting"));
	}
	return Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<FLFPVoxelRendererSetting>()
{
	return FLFPVoxelRendererSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyVoxelNameColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmptyVoxelNameColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenBoundMultipy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenBoundMultipy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelHalfSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelHalfSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrintGenerateTime_MetaData[];
#endif
		static void NewProp_bPrintGenerateTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintGenerateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableChuckFaceCulling_MetaData[];
#endif
		static void NewProp_bDisableChuckFaceCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableChuckFaceCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRegionFaceCulling_MetaData[];
#endif
		static void NewProp_bDisableRegionFaceCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRegionFaceCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateComplexCollisionData_MetaData[];
#endif
		static void NewProp_bGenerateComplexCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateComplexCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSimpleCollisionData_MetaData[];
#endif
		static void NewProp_bGenerateSimpleCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSimpleCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLumenData_MetaData[];
#endif
		static void NewProp_bGenerateLumenData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLumenData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenQuality_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LumenQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicUpdateDelayPerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicUpdateDelayPerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticUpdateDelayPerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StaticUpdateDelayPerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPVoxelRendererSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_EmptyVoxelNameColor_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_EmptyVoxelNameColor = { "EmptyVoxelNameColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererSetting, EmptyVoxelNameColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_EmptyVoxelNameColor_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_EmptyVoxelNameColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenBoundMultipy_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenBoundMultipy = { "LumenBoundMultipy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererSetting, LumenBoundMultipy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenBoundMultipy_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenBoundMultipy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_VoxelHalfSize_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_VoxelHalfSize = { "VoxelHalfSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererSetting, VoxelHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_VoxelHalfSize_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_VoxelHalfSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bPrintGenerateTime_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bPrintGenerateTime_SetBit(void* Obj)
	{
		((FLFPVoxelRendererSetting*)Obj)->bPrintGenerateTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bPrintGenerateTime = { "bPrintGenerateTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPVoxelRendererSetting), &Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bPrintGenerateTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bPrintGenerateTime_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bPrintGenerateTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableChuckFaceCulling_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableChuckFaceCulling_SetBit(void* Obj)
	{
		((FLFPVoxelRendererSetting*)Obj)->bDisableChuckFaceCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableChuckFaceCulling = { "bDisableChuckFaceCulling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPVoxelRendererSetting), &Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableChuckFaceCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableChuckFaceCulling_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableChuckFaceCulling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableRegionFaceCulling_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableRegionFaceCulling_SetBit(void* Obj)
	{
		((FLFPVoxelRendererSetting*)Obj)->bDisableRegionFaceCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableRegionFaceCulling = { "bDisableRegionFaceCulling", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPVoxelRendererSetting), &Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableRegionFaceCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableRegionFaceCulling_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableRegionFaceCulling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateComplexCollisionData_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateComplexCollisionData_SetBit(void* Obj)
	{
		((FLFPVoxelRendererSetting*)Obj)->bGenerateComplexCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateComplexCollisionData = { "bGenerateComplexCollisionData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPVoxelRendererSetting), &Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateComplexCollisionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateComplexCollisionData_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateComplexCollisionData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateSimpleCollisionData_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateSimpleCollisionData_SetBit(void* Obj)
	{
		((FLFPVoxelRendererSetting*)Obj)->bGenerateSimpleCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateSimpleCollisionData = { "bGenerateSimpleCollisionData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPVoxelRendererSetting), &Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateSimpleCollisionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateSimpleCollisionData_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateSimpleCollisionData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateLumenData_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Generate Distance Field And Lumen Card */" },
#endif
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate Distance Field And Lumen Card" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateLumenData_SetBit(void* Obj)
	{
		((FLFPVoxelRendererSetting*)Obj)->bGenerateLumenData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateLumenData = { "bGenerateLumenData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPVoxelRendererSetting), &Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateLumenData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateLumenData_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateLumenData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenQuality_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenQuality = { "LumenQuality", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererSetting, LumenQuality), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenQuality_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenQuality_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererSetting, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_CollisionTraceFlag_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_CollisionTraceFlag_MetaData) }; // 2608406128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_DynamicUpdateDelayPerComponent_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_DynamicUpdateDelayPerComponent = { "DynamicUpdateDelayPerComponent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererSetting, DynamicUpdateDelayPerComponent), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_DynamicUpdateDelayPerComponent_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_DynamicUpdateDelayPerComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_StaticUpdateDelayPerComponent_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_StaticUpdateDelayPerComponent = { "StaticUpdateDelayPerComponent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererSetting, StaticUpdateDelayPerComponent), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_StaticUpdateDelayPerComponent_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_StaticUpdateDelayPerComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_EmptyVoxelNameColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenBoundMultipy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_VoxelHalfSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bPrintGenerateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableChuckFaceCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bDisableRegionFaceCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateComplexCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateSimpleCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_bGenerateLumenData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_LumenQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_CollisionTraceFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_DynamicUpdateDelayPerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewProp_StaticUpdateDelayPerComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		nullptr,
		&NewStructOps,
		"LFPVoxelRendererSetting",
		Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::PropPointers),
		sizeof(FLFPVoxelRendererSetting),
		alignof(FLFPVoxelRendererSetting),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelRendererSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting.InnerSingleton, Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELFPVoxelRendererMode;
	static UEnum* ELFPVoxelRendererMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELFPVoxelRendererMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELFPVoxelRendererMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("ELFPVoxelRendererMode"));
		}
		return Z_Registration_Info_UEnum_ELFPVoxelRendererMode.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINVOXEL_API UEnum* StaticEnum<ELFPVoxelRendererMode>()
	{
		return ELFPVoxelRendererMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::Enumerators[] = {
		{ "ELFPVoxelRendererMode::LFP_Dynamic", (int64)ELFPVoxelRendererMode::LFP_Dynamic },
		{ "ELFPVoxelRendererMode::LFP_Static", (int64)ELFPVoxelRendererMode::LFP_Static },
		{ "ELFPVoxelRendererMode::LFP_Render", (int64)ELFPVoxelRendererMode::LFP_Render },
		{ "ELFPVoxelRendererMode::LFP_None", (int64)ELFPVoxelRendererMode::LFP_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LFP_Dynamic.DisplayName", "Dynamic" },
		{ "LFP_Dynamic.Name", "ELFPVoxelRendererMode::LFP_Dynamic" },
		{ "LFP_None.DisplayName", "None" },
		{ "LFP_None.Name", "ELFPVoxelRendererMode::LFP_None" },
		{ "LFP_Render.DisplayName", "Render" },
		{ "LFP_Render.Name", "ELFPVoxelRendererMode::LFP_Render" },
		{ "LFP_Static.DisplayName", "Static" },
		{ "LFP_Static.Name", "ELFPVoxelRendererMode::LFP_Static" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		nullptr,
		"ELFPVoxelRendererMode",
		"ELFPVoxelRendererMode",
		Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode()
	{
		if (!Z_Registration_Info_UEnum_ELFPVoxelRendererMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELFPVoxelRendererMode.InnerSingleton, Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELFPVoxelRendererMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus;
class UScriptStruct* FLFPVoxelRendererStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("LFPVoxelRendererStatus"));
	}
	return Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<FLFPVoxelRendererStatus>()
{
	return FLFPVoxelRendererStatus::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentRendererMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRendererMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentRendererMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NextRendererMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextRendererMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NextRendererMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicUpdateDelay_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicUpdateDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticUpdateDelay_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StaticUpdateDelay;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelAttributeDirtyHeightList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelAttributeDirtyHeightList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_VoxelAttributeDirtyHeightList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBodyInvalid_MetaData[];
#endif
		static void NewProp_bIsBodyInvalid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBodyInvalid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickCounter_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TickCounter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPVoxelRendererStatus>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_CurrentRendererMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_CurrentRendererMode_MetaData[] = {
		{ "Category", "VoxelRendererStatus" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_CurrentRendererMode = { "CurrentRendererMode", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererStatus, CurrentRendererMode), Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_CurrentRendererMode_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_CurrentRendererMode_MetaData) }; // 3396121837
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_NextRendererMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_NextRendererMode_MetaData[] = {
		{ "Category", "VoxelRendererStatus" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_NextRendererMode = { "NextRendererMode", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererStatus, NextRendererMode), Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelRendererMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_NextRendererMode_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_NextRendererMode_MetaData) }; // 3396121837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_DynamicUpdateDelay_MetaData[] = {
		{ "Category", "VoxelRendererStatus" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_DynamicUpdateDelay = { "DynamicUpdateDelay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererStatus, DynamicUpdateDelay), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_DynamicUpdateDelay_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_DynamicUpdateDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_StaticUpdateDelay_MetaData[] = {
		{ "Category", "VoxelRendererStatus" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_StaticUpdateDelay = { "StaticUpdateDelay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererStatus, StaticUpdateDelay), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_StaticUpdateDelay_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_StaticUpdateDelay_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_VoxelAttributeDirtyHeightList_ElementProp = { "VoxelAttributeDirtyHeightList", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_VoxelAttributeDirtyHeightList_MetaData[] = {
		{ "Category", "VoxelRendererStatus" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_VoxelAttributeDirtyHeightList = { "VoxelAttributeDirtyHeightList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererStatus, VoxelAttributeDirtyHeightList), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_VoxelAttributeDirtyHeightList_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_VoxelAttributeDirtyHeightList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_bIsBodyInvalid_MetaData[] = {
		{ "Category", "VoxelRendererStatus" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_bIsBodyInvalid_SetBit(void* Obj)
	{
		((FLFPVoxelRendererStatus*)Obj)->bIsBodyInvalid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_bIsBodyInvalid = { "bIsBodyInvalid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLFPVoxelRendererStatus), &Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_bIsBodyInvalid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_bIsBodyInvalid_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_bIsBodyInvalid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_TickCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_TickCounter = { "TickCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelRendererStatus, TickCounter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_TickCounter_MetaData), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_TickCounter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_CurrentRendererMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_CurrentRendererMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_NextRendererMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_NextRendererMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_DynamicUpdateDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_StaticUpdateDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_VoxelAttributeDirtyHeightList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_VoxelAttributeDirtyHeightList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_bIsBodyInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewProp_TickCounter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		nullptr,
		&NewStructOps,
		"LFPVoxelRendererStatus",
		Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::PropPointers),
		sizeof(FLFPVoxelRendererStatus),
		alignof(FLFPVoxelRendererStatus),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelRendererStatus()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus.InnerSingleton, Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel, nullptr, "OnVoxelRendererUpdate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnVoxelRendererUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnVoxelRendererUpdate)
{
	OnVoxelRendererUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execSetMaterialList)
	{
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialList(Z_Param_Out_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execCanUpdateAttribute)
	{
		P_GET_STRUCT_REF(FLFPChuckUpdateAction,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUpdateAttribute(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execCanUpdateMesh)
	{
		P_GET_STRUCT_REF(FLFPChuckUpdateAction,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUpdateMesh(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execOnChuckUpdate)
	{
		P_GET_STRUCT_REF(FLFPChuckUpdateAction,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChuckUpdate(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execToWorldLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ToWorldLocation(Z_Param_GridIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execToGridIndex)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ToGridIndex(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execSetDisableFaceCulling)
	{
		P_GET_UBOOL(Z_Param_bChuck);
		P_GET_UBOOL(Z_Param_bRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableFaceCulling(Z_Param_bChuck,Z_Param_bRegion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execUpdateAttribute)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_DirtyIndexList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAttribute(Z_Param_Out_DirtyIndexList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execUpdateMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execReleaseRenderer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseRenderer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPVoxelRendererComponent::execInitializeRenderer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_OBJECT(ULFPGridContainerComponent,Z_Param_NewVoxelContainer);
		P_GET_TARRAY_REF(UMaterialInstanceDynamic*,Z_Param_Out_OutDynamicMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeRenderer(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_NewVoxelContainer,Z_Param_Out_OutDynamicMaterial);
		P_NATIVE_END;
	}
	void ULFPVoxelRendererComponent::StaticRegisterNativesULFPVoxelRendererComponent()
	{
		UClass* Class = ULFPVoxelRendererComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanUpdateAttribute", &ULFPVoxelRendererComponent::execCanUpdateAttribute },
			{ "CanUpdateMesh", &ULFPVoxelRendererComponent::execCanUpdateMesh },
			{ "InitializeRenderer", &ULFPVoxelRendererComponent::execInitializeRenderer },
			{ "OnChuckUpdate", &ULFPVoxelRendererComponent::execOnChuckUpdate },
			{ "ReleaseRenderer", &ULFPVoxelRendererComponent::execReleaseRenderer },
			{ "SetDisableFaceCulling", &ULFPVoxelRendererComponent::execSetDisableFaceCulling },
			{ "SetMaterialList", &ULFPVoxelRendererComponent::execSetMaterialList },
			{ "ToGridIndex", &ULFPVoxelRendererComponent::execToGridIndex },
			{ "ToWorldLocation", &ULFPVoxelRendererComponent::execToWorldLocation },
			{ "UpdateAttribute", &ULFPVoxelRendererComponent::execUpdateAttribute },
			{ "UpdateMesh", &ULFPVoxelRendererComponent::execUpdateMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics
	{
		struct LFPVoxelRendererComponent_eventCanUpdateAttribute_Parms
		{
			FLFPChuckUpdateAction Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventCanUpdateAttribute_Parms, Data), Z_Construct_UScriptStruct_FLFPChuckUpdateAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_Data_MetaData) }; // 44397790
	void Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPVoxelRendererComponent_eventCanUpdateAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelRendererComponent_eventCanUpdateAttribute_Parms), &Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "CanUpdateAttribute", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::LFPVoxelRendererComponent_eventCanUpdateAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::LFPVoxelRendererComponent_eventCanUpdateAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics
	{
		struct LFPVoxelRendererComponent_eventCanUpdateMesh_Parms
		{
			FLFPChuckUpdateAction Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventCanUpdateMesh_Parms, Data), Z_Construct_UScriptStruct_FLFPChuckUpdateAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_Data_MetaData) }; // 44397790
	void Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPVoxelRendererComponent_eventCanUpdateMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelRendererComponent_eventCanUpdateMesh_Parms), &Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "CanUpdateMesh", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::LFPVoxelRendererComponent_eventCanUpdateMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::LFPVoxelRendererComponent_eventCanUpdateMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics
	{
		struct LFPVoxelRendererComponent_eventInitializeRenderer_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			ULFPGridContainerComponent* NewVoxelContainer;
			TArray<UMaterialInstanceDynamic*> OutDynamicMaterial;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVoxelContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVoxelContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDynamicMaterial_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDynamicMaterial;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventInitializeRenderer_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventInitializeRenderer_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_NewVoxelContainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_NewVoxelContainer = { "NewVoxelContainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventInitializeRenderer_Parms, NewVoxelContainer), Z_Construct_UClass_ULFPGridContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_NewVoxelContainer_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_NewVoxelContainer_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_OutDynamicMaterial_Inner = { "OutDynamicMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_OutDynamicMaterial = { "OutDynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventInitializeRenderer_Parms, OutDynamicMaterial), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPVoxelRendererComponent_eventInitializeRenderer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelRendererComponent_eventInitializeRenderer_Parms), &Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_NewVoxelContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_OutDynamicMaterial_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_OutDynamicMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Setter" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "InitializeRenderer", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::LFPVoxelRendererComponent_eventInitializeRenderer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::LFPVoxelRendererComponent_eventInitializeRenderer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics
	{
		struct LFPVoxelRendererComponent_eventOnChuckUpdate_Parms
		{
			FLFPChuckUpdateAction Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventOnChuckUpdate_Parms, Data), Z_Construct_UScriptStruct_FLFPChuckUpdateAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::NewProp_Data_MetaData) }; // 44397790
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "OnChuckUpdate", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::LFPVoxelRendererComponent_eventOnChuckUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::LFPVoxelRendererComponent_eventOnChuckUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics
	{
		struct LFPVoxelRendererComponent_eventReleaseRenderer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPVoxelRendererComponent_eventReleaseRenderer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelRendererComponent_eventReleaseRenderer_Parms), &Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Setter" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "ReleaseRenderer", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::LFPVoxelRendererComponent_eventReleaseRenderer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::LFPVoxelRendererComponent_eventReleaseRenderer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics
	{
		struct LFPVoxelRendererComponent_eventSetDisableFaceCulling_Parms
		{
			bool bChuck;
			bool bRegion;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChuck_MetaData[];
#endif
		static void NewProp_bChuck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChuck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegion_MetaData[];
#endif
		static void NewProp_bRegion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bChuck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bChuck_SetBit(void* Obj)
	{
		((LFPVoxelRendererComponent_eventSetDisableFaceCulling_Parms*)Obj)->bChuck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bChuck = { "bChuck", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelRendererComponent_eventSetDisableFaceCulling_Parms), &Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bChuck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bChuck_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bChuck_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bRegion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bRegion_SetBit(void* Obj)
	{
		((LFPVoxelRendererComponent_eventSetDisableFaceCulling_Parms*)Obj)->bRegion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bRegion = { "bRegion", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPVoxelRendererComponent_eventSetDisableFaceCulling_Parms), &Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bRegion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bRegion_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bRegion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bChuck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::NewProp_bRegion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "SetDisableFaceCulling", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::LFPVoxelRendererComponent_eventSetDisableFaceCulling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::LFPVoxelRendererComponent_eventSetDisableFaceCulling_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics
	{
		struct LFPVoxelRendererComponent_eventSetMaterialList_Parms
		{
			TArray<UMaterialInterface*> Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::NewProp_Material_Inner = { "Material", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::NewProp_Material_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventSetMaterialList_Parms, Material), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::NewProp_Material_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::NewProp_Material_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This Create A List Of Dynamic Material Instance And Apply VoxelDataTexture And VoxelColorTexture To It (Use Name On Texture Parameter : VoxelAttributesTexture) */" },
#endif
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Create A List Of Dynamic Material Instance And Apply VoxelDataTexture And VoxelColorTexture To It (Use Name On Texture Parameter : VoxelAttributesTexture)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "SetMaterialList", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::LFPVoxelRendererComponent_eventSetMaterialList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::LFPVoxelRendererComponent_eventSetMaterialList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics
	{
		struct LFPVoxelRendererComponent_eventToGridIndex_Parms
		{
			FVector Location;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventToGridIndex_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventToGridIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "ToGridIndex", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::LFPVoxelRendererComponent_eventToGridIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::LFPVoxelRendererComponent_eventToGridIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics
	{
		struct LFPVoxelRendererComponent_eventToWorldLocation_Parms
		{
			int32 GridIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventToWorldLocation_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::NewProp_GridIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventToWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "ToWorldLocation", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::LFPVoxelRendererComponent_eventToWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::LFPVoxelRendererComponent_eventToWorldLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics
	{
		struct LFPVoxelRendererComponent_eventUpdateAttribute_Parms
		{
			TArray<int32> DirtyIndexList;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DirtyIndexList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirtyIndexList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirtyIndexList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::NewProp_DirtyIndexList_Inner = { "DirtyIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::NewProp_DirtyIndexList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::NewProp_DirtyIndexList = { "DirtyIndexList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPVoxelRendererComponent_eventUpdateAttribute_Parms, DirtyIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::NewProp_DirtyIndexList_MetaData), Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::NewProp_DirtyIndexList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::NewProp_DirtyIndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::NewProp_DirtyIndexList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "UpdateAttribute", nullptr, nullptr, Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::LFPVoxelRendererComponent_eventUpdateAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::LFPVoxelRendererComponent_eventUpdateAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPVoxelRendererComponent | Function" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPVoxelRendererComponent, nullptr, "UpdateMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPVoxelRendererComponent);
	UClass* Z_Construct_UClass_ULFPVoxelRendererComponent_NoRegister()
	{
		return ULFPVoxelRendererComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPVoxelRendererComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVoxelRendererUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoxelRendererUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVoxelMeshUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoxelMeshUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVoxelAttributesUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoxelAttributesUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributesTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VoxelContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateAttribute, "CanUpdateAttribute" }, // 2252722639
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_CanUpdateMesh, "CanUpdateMesh" }, // 223965953
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_InitializeRenderer, "InitializeRenderer" }, // 3515694923
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_OnChuckUpdate, "OnChuckUpdate" }, // 3235316354
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_ReleaseRenderer, "ReleaseRenderer" }, // 822916970
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_SetDisableFaceCulling, "SetDisableFaceCulling" }, // 803721127
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_SetMaterialList, "SetMaterialList" }, // 2665804290
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_ToGridIndex, "ToGridIndex" }, // 781433710
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_ToWorldLocation, "ToWorldLocation" }, // 1817037746
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateAttribute, "UpdateAttribute" }, // 3244857956
		{ &Z_Construct_UFunction_ULFPVoxelRendererComponent_UpdateMesh, "UpdateMesh" }, // 3681326363
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LFPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Voxel/LFPVoxelRendererComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelRendererUpdate_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Delegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate */" },
#endif
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelRendererUpdate = { "OnVoxelRendererUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, OnVoxelRendererUpdate), Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelRendererUpdate_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelRendererUpdate_MetaData) }; // 106286791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelMeshUpdate_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelMeshUpdate = { "OnVoxelMeshUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, OnVoxelMeshUpdate), Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelMeshUpdate_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelMeshUpdate_MetaData) }; // 106286791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelAttributesUpdate_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelAttributesUpdate = { "OnVoxelAttributesUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, OnVoxelAttributesUpdate), Z_Construct_UDelegateFunction_LohFunctionPluginVoxel_OnVoxelRendererUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelAttributesUpdate_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelAttributesUpdate_MetaData) }; // 106286791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_AttributesTexture_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Cache" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_AttributesTexture = { "AttributesTexture", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, AttributesTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_AttributesTexture_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_AttributesTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_VoxelContainer_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Cache" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_VoxelContainer = { "VoxelContainer", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, VoxelContainer), Z_Construct_UClass_ULFPGridContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_VoxelContainer_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_VoxelContainer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Cache" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Cache" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_GenerationSetting_MetaData[] = {
		{ "Category", "LFPVoxelRendererComponent | Setting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_GenerationSetting = { "GenerationSetting", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, GenerationSetting), Z_Construct_UScriptStruct_FLFPVoxelRendererSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_GenerationSetting_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_GenerationSetting_MetaData) }; // 3274361229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "VoxelRendererSetting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, DistanceFieldSelfShadowBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_BodySetup_MetaData), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_BodySetup_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelRendererUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelMeshUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_OnVoxelAttributesUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_AttributesTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_VoxelContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_GenerationSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_DistanceFieldSelfShadowBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::NewProp_BodySetup,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(ULFPVoxelRendererComponent, IInterface_CollisionDataProvider), false },  // 1511234675
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPVoxelRendererComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::ClassParams = {
		&ULFPVoxelRendererComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPVoxelRendererComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPVoxelRendererComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPVoxelRendererComponent.OuterSingleton, Z_Construct_UClass_ULFPVoxelRendererComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPVoxelRendererComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINVOXEL_API UClass* StaticClass<ULFPVoxelRendererComponent>()
	{
		return ULFPVoxelRendererComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPVoxelRendererComponent);
	ULFPVoxelRendererComponent::~ULFPVoxelRendererComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::EnumInfo[] = {
		{ ELFPVoxelRendererMode_StaticEnum, TEXT("ELFPVoxelRendererMode"), &Z_Registration_Info_UEnum_ELFPVoxelRendererMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3396121837U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPVoxelRendererSetting::StaticStruct, Z_Construct_UScriptStruct_FLFPVoxelRendererSetting_Statics::NewStructOps, TEXT("LFPVoxelRendererSetting"), &Z_Registration_Info_UScriptStruct_LFPVoxelRendererSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPVoxelRendererSetting), 3274361229U) },
		{ FLFPVoxelRendererStatus::StaticStruct, Z_Construct_UScriptStruct_FLFPVoxelRendererStatus_Statics::NewStructOps, TEXT("LFPVoxelRendererStatus"), &Z_Registration_Info_UScriptStruct_LFPVoxelRendererStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPVoxelRendererStatus), 3257036952U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPVoxelRendererComponent, ULFPVoxelRendererComponent::StaticClass, TEXT("ULFPVoxelRendererComponent"), &Z_Registration_Info_UClass_ULFPVoxelRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPVoxelRendererComponent), 2470290873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_2387623580(TEXT("/Script/LohFunctionPluginVoxel"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
