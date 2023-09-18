// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Components/LFPInstanceGridComponent.h"
#include "LohFunctionPlugin/Public/LohFunctionPluginLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPInstanceGridComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPInstanceGridComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPInstanceGridComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPWorldGrid_NoRegister();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPCompactIntArray();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPInstanceGridMeshData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo;
class UScriptStruct* FLFPInstanceGridInstanceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPInstanceGridInstanceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPInstanceGridInstanceInfo>()
{
	return FLFPInstanceGridInstanceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddHalfGap_MetaData[];
#endif
		static void NewProp_bAddHalfGap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddHalfGap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPInstanceGridInstanceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "LFPInstanceGridInstanceInfo" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInstanceGridInstanceInfo, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "LFPInstanceGridInstanceInfo" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInstanceGridInstanceInfo, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_LocationOffset_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_LocationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "LFPInstanceGridInstanceInfo" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInstanceGridInstanceInfo, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_RotationOffset_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_RotationOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "LFPInstanceGridInstanceInfo" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInstanceGridInstanceInfo, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_bAddHalfGap_MetaData[] = {
		{ "Category", "LFPInstanceGridInstanceInfo" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_bAddHalfGap_SetBit(void* Obj)
	{
		((FLFPInstanceGridInstanceInfo*)Obj)->bAddHalfGap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_bAddHalfGap = { "bAddHalfGap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPInstanceGridInstanceInfo), &Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_bAddHalfGap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_bAddHalfGap_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_bAddHalfGap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "Category", "LFPInstanceGridInstanceInfo" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInstanceGridInstanceInfo, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_InstanceIndex_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_InstanceIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_bAddHalfGap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewProp_InstanceIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPInstanceGridInstanceInfo",
		Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::PropPointers),
		sizeof(FLFPInstanceGridInstanceInfo),
		alignof(FLFPInstanceGridInstanceInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo.InnerSingleton, Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData;
class UScriptStruct* FLFPInstanceGridMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPInstanceGridMeshData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPInstanceGridMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPInstanceGridMeshData>()
{
	return FLFPInstanceGridMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ISMComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceGridIndexList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceGridIndexList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceGridIndexList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FLFPInstanceData\n//{\n//\x09GENERATED_BODY()\n//\n//public:\n//\n//\x09""FLFPInstanceData() {}\n//\n//\x09""FLFPInstanceData(const int32 NewGridIndex) : ISMTransform(), ISMCustomDataList({}), InstanceGridIndex(NewGridIndex) {}\n//\n//\x09""FLFPInstanceData(const FTransform NewTransform, const int32 NewGridIndex) : ISMTransform(NewTransform), ISMCustomDataList({}), InstanceGridIndex(NewGridIndex) {}\n//\n//public:\n//\n//\x09UPROPERTY(VisibleAnywhere, SaveGame, Category = \"FLFPInstanceData\")\n//\x09\x09""FTransform ISMTransform;\n//\n//\x09UPROPERTY(VisibleAnywhere, SaveGame, Category = \"FLFPInstanceData\")\n//\x09\x09TArray<float> ISMCustomDataList;\n//\n//\x09UPROPERTY(VisibleAnywhere, SaveGame, Category = \"FLFPInstanceData\")\n//\x09\x09int32 InstanceGridIndex;\n//\n//public:\n//\n//\x09""FORCEINLINE\x09""bool operator==(const FLFPInstanceData& Other) const\n//\x09{\n//\x09\x09return InstanceGridIndex == Other.InstanceGridIndex;\n//\x09}\n//\n//\x09""FORCEINLINE\x09""bool operator==(const int32 OtherIndex) const\n//\x09{\n//\x09\x09return InstanceGridIndex == OtherIndex;\n//\x09}\n//};\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FLFPInstanceData\n{\n       GENERATED_BODY()\n\npublic:\n\n       FLFPInstanceData() {}\n\n       FLFPInstanceData(const int32 NewGridIndex) : ISMTransform(), ISMCustomDataList({}), InstanceGridIndex(NewGridIndex) {}\n\n       FLFPInstanceData(const FTransform NewTransform, const int32 NewGridIndex) : ISMTransform(NewTransform), ISMCustomDataList({}), InstanceGridIndex(NewGridIndex) {}\n\npublic:\n\n       UPROPERTY(VisibleAnywhere, SaveGame, Category = \"FLFPInstanceData\")\n               FTransform ISMTransform;\n\n       UPROPERTY(VisibleAnywhere, SaveGame, Category = \"FLFPInstanceData\")\n               TArray<float> ISMCustomDataList;\n\n       UPROPERTY(VisibleAnywhere, SaveGame, Category = \"FLFPInstanceData\")\n               int32 InstanceGridIndex;\n\npublic:\n\n       FORCEINLINE     bool operator==(const FLFPInstanceData& Other) const\n       {\n               return InstanceGridIndex == Other.InstanceGridIndex;\n       }\n\n       FORCEINLINE     bool operator==(const int32 OtherIndex) const\n       {\n               return InstanceGridIndex == OtherIndex;\n       }\n};" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPInstanceGridMeshData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_ISMComponent_MetaData[] = {
		{ "Category", "LFPInstanceGridMeshData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_ISMComponent = { "ISMComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInstanceGridMeshData, ISMComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_ISMComponent_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_ISMComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_InstanceGridIndexList_Inner = { "InstanceGridIndexList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_InstanceGridIndexList_MetaData[] = {
		{ "Category", "LFPInstanceGridMeshData" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_InstanceGridIndexList = { "InstanceGridIndexList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInstanceGridMeshData, InstanceGridIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_InstanceGridIndexList_MetaData), Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_InstanceGridIndexList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_ISMComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_InstanceGridIndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewProp_InstanceGridIndexList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPInstanceGridMeshData",
		Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::PropPointers),
		sizeof(FLFPInstanceGridMeshData),
		alignof(FLFPInstanceGridMeshData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPInstanceGridMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData.InnerSingleton, Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData.InnerSingleton;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execSetCustomDatas)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_TARRAY_REF(float,Z_Param_Out_DataList);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDatas(Z_Param_Location,Z_Param_Out_DataList,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execSetCustomData)
	{
		P_GET_STRUCT(FIntVector,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DataValue);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomData(Z_Param_Location,Z_Param_DataIndex,Z_Param_DataValue,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execSetInstances)
	{
		P_GET_TARRAY_REF(FLFPInstanceGridInstanceInfo,Z_Param_Out_InstanceInfoList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInstances(Z_Param_Out_InstanceInfoList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execSetInstance)
	{
		P_GET_STRUCT_REF(FLFPInstanceGridInstanceInfo,Z_Param_Out_InstanceInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInstance(Z_Param_Out_InstanceInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execRegisterInstanceStaticMeshComponentList)
	{
		P_GET_TARRAY(UInstancedStaticMeshComponent*,Z_Param_ISMList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterInstanceStaticMeshComponentList(Z_Param_ISMList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execRegisterInstanceStaticMeshComponent)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_ISM);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RegisterInstanceStaticMeshComponent(Z_Param_ISM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execSetupGrid)
	{
		P_GET_OBJECT(ULFPWorldGrid,Z_Param_NewWorldGrid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupGrid(Z_Param_NewWorldGrid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInstanceGridComponent::execIsMeshIndexValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMeshIndexValid(Z_Param_Index);
		P_NATIVE_END;
	}
	void ULFPInstanceGridComponent::StaticRegisterNativesULFPInstanceGridComponent()
	{
		UClass* Class = ULFPInstanceGridComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMeshIndexValid", &ULFPInstanceGridComponent::execIsMeshIndexValid },
			{ "RegisterInstanceStaticMeshComponent", &ULFPInstanceGridComponent::execRegisterInstanceStaticMeshComponent },
			{ "RegisterInstanceStaticMeshComponentList", &ULFPInstanceGridComponent::execRegisterInstanceStaticMeshComponentList },
			{ "SetCustomData", &ULFPInstanceGridComponent::execSetCustomData },
			{ "SetCustomDatas", &ULFPInstanceGridComponent::execSetCustomDatas },
			{ "SetInstance", &ULFPInstanceGridComponent::execSetInstance },
			{ "SetInstances", &ULFPInstanceGridComponent::execSetInstances },
			{ "SetupGrid", &ULFPInstanceGridComponent::execSetupGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics
	{
		struct LFPInstanceGridComponent_eventIsMeshIndexValid_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventIsMeshIndexValid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInstanceGridComponent_eventIsMeshIndexValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInstanceGridComponent_eventIsMeshIndexValid_Parms), &Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Function For External Blueprint Or C++ To Use */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function For External Blueprint Or C++ To Use" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "IsMeshIndexValid", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::LFPInstanceGridComponent_eventIsMeshIndexValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::LFPInstanceGridComponent_eventIsMeshIndexValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics
	{
		struct LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponent_Parms
		{
			UInstancedStaticMeshComponent* ISM;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ISM;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::NewProp_ISM_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::NewProp_ISM = { "ISM", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponent_Parms, ISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::NewProp_ISM_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::NewProp_ISM_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::NewProp_ISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "RegisterInstanceStaticMeshComponent", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics
	{
		struct LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponentList_Parms
		{
			TArray<UInstancedStaticMeshComponent*> ISMList;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ISMList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ISMList_Inner = { "ISMList", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ISMList_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ISMList = { "ISMList", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponentList_Parms, ISMList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ISMList_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ISMList_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponentList_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ISMList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ISMList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "RegisterInstanceStaticMeshComponentList", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponentList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::LFPInstanceGridComponent_eventRegisterInstanceStaticMeshComponentList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics
	{
		struct LFPInstanceGridComponent_eventSetCustomData_Parms
		{
			FIntVector Location;
			int32 DataIndex;
			float DataValue;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DataValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMarkRenderStateDirty_MetaData[];
#endif
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetCustomData_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetCustomData_Parms, DataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataIndex_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataValue = { "DataValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetCustomData_Parms, DataValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataValue_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_bMarkRenderStateDirty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((LFPInstanceGridComponent_eventSetCustomData_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInstanceGridComponent_eventSetCustomData_Parms), &Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_bMarkRenderStateDirty_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_bMarkRenderStateDirty_MetaData) };
	void Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInstanceGridComponent_eventSetCustomData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInstanceGridComponent_eventSetCustomData_Parms), &Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_DataValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "SetCustomData", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::LFPInstanceGridComponent_eventSetCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::LFPInstanceGridComponent_eventSetCustomData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics
	{
		struct LFPInstanceGridComponent_eventSetCustomDatas_Parms
		{
			FIntVector Location;
			TArray<float> DataList;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMarkRenderStateDirty_MetaData[];
#endif
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetCustomDatas_Parms, Location), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_DataList_Inner = { "DataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_DataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_DataList = { "DataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetCustomDatas_Parms, DataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_DataList_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_DataList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_bMarkRenderStateDirty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((LFPInstanceGridComponent_eventSetCustomDatas_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInstanceGridComponent_eventSetCustomDatas_Parms), &Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_bMarkRenderStateDirty_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_bMarkRenderStateDirty_MetaData) };
	void Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInstanceGridComponent_eventSetCustomDatas_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInstanceGridComponent_eventSetCustomDatas_Parms), &Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_DataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_DataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "SetCustomDatas", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::LFPInstanceGridComponent_eventSetCustomDatas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::LFPInstanceGridComponent_eventSetCustomDatas_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics
	{
		struct LFPInstanceGridComponent_eventSetInstance_Parms
		{
			FLFPInstanceGridInstanceInfo InstanceInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_InstanceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_InstanceInfo = { "InstanceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetInstance_Parms, InstanceInfo), Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_InstanceInfo_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_InstanceInfo_MetaData) }; // 3970789579
	void Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInstanceGridComponent_eventSetInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInstanceGridComponent_eventSetInstance_Parms), &Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_InstanceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set Instance Type On This Grid Location (Use -1 To Remove) */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Instance Type On This Grid Location (Use -1 To Remove)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "SetInstance", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::LFPInstanceGridComponent_eventSetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::LFPInstanceGridComponent_eventSetInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics
	{
		struct LFPInstanceGridComponent_eventSetInstances_Parms
		{
			TArray<FLFPInstanceGridInstanceInfo> InstanceInfoList;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceInfoList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceInfoList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceInfoList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_InstanceInfoList_Inner = { "InstanceInfoList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo, METADATA_PARAMS(0, nullptr) }; // 3970789579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_InstanceInfoList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_InstanceInfoList = { "InstanceInfoList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetInstances_Parms, InstanceInfoList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_InstanceInfoList_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_InstanceInfoList_MetaData) }; // 3970789579
	void Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInstanceGridComponent_eventSetInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInstanceGridComponent_eventSetInstances_Parms), &Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_InstanceInfoList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_InstanceInfoList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "SetInstances", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::LFPInstanceGridComponent_eventSetInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::LFPInstanceGridComponent_eventSetInstances_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics
	{
		struct LFPInstanceGridComponent_eventSetupGrid_Parms
		{
			ULFPWorldGrid* NewWorldGrid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWorldGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWorldGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::NewProp_NewWorldGrid_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::NewProp_NewWorldGrid = { "NewWorldGrid", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInstanceGridComponent_eventSetupGrid_Parms, NewWorldGrid), Z_Construct_UClass_ULFPWorldGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::NewProp_NewWorldGrid_MetaData), Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::NewProp_NewWorldGrid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::NewProp_NewWorldGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInstanceGridComponent | Function" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInstanceGridComponent, nullptr, "SetupGrid", nullptr, nullptr, Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::LFPInstanceGridComponent_eventSetupGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::LFPInstanceGridComponent_eventSetupGrid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPInstanceGridComponent);
	UClass* Z_Construct_UClass_ULFPInstanceGridComponent_NoRegister()
	{
		return ULFPInstanceGridComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPInstanceGridComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridInstanceIndexList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridInstanceIndexList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPInstanceGridComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPInstanceGridComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_IsMeshIndexValid, "IsMeshIndexValid" }, // 3767737349
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponent, "RegisterInstanceStaticMeshComponent" }, // 3069687576
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_RegisterInstanceStaticMeshComponentList, "RegisterInstanceStaticMeshComponentList" }, // 117754764
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomData, "SetCustomData" }, // 3508710337
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_SetCustomDatas, "SetCustomDatas" }, // 564292512
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstance, "SetInstance" }, // 1265938119
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_SetInstances, "SetInstances" }, // 3003966401
		{ &Z_Construct_UFunction_ULFPInstanceGridComponent_SetupGrid, "SetupGrid" }, // 3820553158
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInstanceGridComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LFPlugin" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LFPInstanceGridComponent.h" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_GridInstanceIndexList_MetaData[] = {
		{ "Category", "LFPInstanceGridComponent" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_GridInstanceIndexList = { "GridInstanceIndexList", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInstanceGridComponent, GridInstanceIndexList), Z_Construct_UScriptStruct_FLFPCompactIntArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_GridInstanceIndexList_MetaData), Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_GridInstanceIndexList_MetaData) }; // 739085046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_MeshList_Inner = { "MeshList", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInstanceGridMeshData, METADATA_PARAMS(0, nullptr) }; // 838435034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_MeshList_MetaData[] = {
		{ "Category", "LFPInstanceGridComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere, SaveGame, Category = \"LFPInstanceGridComponent\")\n//\x09TArray<uint8> GridInstanceIndexList = TArray<uint8>();\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, SaveGame, Category = \"LFPInstanceGridComponent\")\n       TArray<uint8> GridInstanceIndexList = TArray<uint8>();" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_MeshList = { "MeshList", nullptr, (EPropertyFlags)0x0040008000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInstanceGridComponent, MeshList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_MeshList_MetaData), Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_MeshList_MetaData) }; // 838435034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_WorldGrid_MetaData[] = {
		{ "Category", "LFPInstanceGridComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPInstanceGridComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_WorldGrid = { "WorldGrid", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInstanceGridComponent, WorldGrid), Z_Construct_UClass_ULFPWorldGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_WorldGrid_MetaData), Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_WorldGrid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPInstanceGridComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_GridInstanceIndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_MeshList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_MeshList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInstanceGridComponent_Statics::NewProp_WorldGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPInstanceGridComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPInstanceGridComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPInstanceGridComponent_Statics::ClassParams = {
		&ULFPInstanceGridComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPInstanceGridComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPInstanceGridComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInstanceGridComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPInstanceGridComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPInstanceGridComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPInstanceGridComponent.OuterSingleton, Z_Construct_UClass_ULFPInstanceGridComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPInstanceGridComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPInstanceGridComponent>()
	{
		return ULFPInstanceGridComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPInstanceGridComponent);
	ULFPInstanceGridComponent::~ULFPInstanceGridComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPInstanceGridInstanceInfo::StaticStruct, Z_Construct_UScriptStruct_FLFPInstanceGridInstanceInfo_Statics::NewStructOps, TEXT("LFPInstanceGridInstanceInfo"), &Z_Registration_Info_UScriptStruct_LFPInstanceGridInstanceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPInstanceGridInstanceInfo), 3970789579U) },
		{ FLFPInstanceGridMeshData::StaticStruct, Z_Construct_UScriptStruct_FLFPInstanceGridMeshData_Statics::NewStructOps, TEXT("LFPInstanceGridMeshData"), &Z_Registration_Info_UScriptStruct_LFPInstanceGridMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPInstanceGridMeshData), 838435034U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPInstanceGridComponent, ULFPInstanceGridComponent::StaticClass, TEXT("ULFPInstanceGridComponent"), &Z_Registration_Info_UClass_ULFPInstanceGridComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPInstanceGridComponent), 453875197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_1440130181(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPInstanceGridComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
