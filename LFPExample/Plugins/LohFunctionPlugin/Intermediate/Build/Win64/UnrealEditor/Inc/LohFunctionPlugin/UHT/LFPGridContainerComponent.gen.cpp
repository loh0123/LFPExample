// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPlugin/Public/Components/LFPGridContainerComponent.h"
#include "LohFunctionPlugin/Public/LohFunctionPluginLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPGridContainerComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPGridContainerComponent();
	LOHFUNCTIONPLUGIN_API UClass* Z_Construct_UClass_ULFPGridContainerComponent_NoRegister();
	LOHFUNCTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature();
	LOHFUNCTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature();
	LOHFUNCTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPChuckUpdateAction();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPCompactIntArray();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPCompactIntNameArray();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridChangeTagData();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridChuckData();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridChuckDelegate();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridNameUpdateData();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridPaletteData();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridRegionData();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridTagDataTable();
	LOHFUNCTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLFPGridUpdateAction();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting;
class UScriptStruct* FLFPGridPaletteContainerSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridPaletteContainerSetting"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridPaletteContainerSetting>()
{
	return FLFPGridPaletteContainerSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PaletteLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegionGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaletteGridSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridPaletteContainerSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionLength = { "RegionLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteContainerSetting, RegionLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionLength_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckLength = { "ChuckLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteContainerSetting, ChuckLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckLength_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteLength = { "PaletteLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteContainerSetting, PaletteLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteLength_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionGridSize_MetaData[] = {
		{ "Category", "GridContainerSetting | Setting" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionGridSize = { "RegionGridSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteContainerSetting, RegionGridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionGridSize_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionGridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckGridSize_MetaData[] = {
		{ "Category", "GridContainerSetting | Setting" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckGridSize = { "ChuckGridSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteContainerSetting, ChuckGridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckGridSize_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckGridSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteGridSize_MetaData[] = {
		{ "Category", "GridContainerSetting | Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Size Of Grid Inside Of A Chuck */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size Of Grid Inside Of A Chuck" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteGridSize = { "PaletteGridSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteContainerSetting, PaletteGridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteGridSize_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteGridSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_RegionGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_ChuckGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewProp_PaletteGridSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridPaletteContainerSetting",
		Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::PropPointers),
		sizeof(FLFPGridPaletteContainerSetting),
		alignof(FLFPGridPaletteContainerSetting),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridPaletteData;
class UScriptStruct* FLFPGridPaletteData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridPaletteData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridPaletteData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridPaletteData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridPaletteData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridPaletteData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridPaletteData>()
{
	return FLFPGridPaletteData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefCounter_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RefCounter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridPaletteData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LFPGridPaletteData" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_TagList_Inner = { "TagList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_TagList_MetaData[] = {
		{ "Category", "LFPGridPaletteData" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_TagList = { "TagList", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteData, TagList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_TagList_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_TagList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_RefCounter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_RefCounter = { "RefCounter", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridPaletteData, RefCounter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_RefCounter_MetaData), Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_RefCounter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_TagList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_TagList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewProp_RefCounter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridPaletteData",
		Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::PropPointers),
		sizeof(FLFPGridPaletteData),
		alignof(FLFPGridPaletteData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridPaletteData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridPaletteData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridPaletteData.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridPaletteData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLFPGridTagDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLFPGridTagDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridTagDataTable;
class UScriptStruct* FLFPGridTagDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridTagDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridTagDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridTagDataTable, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridTagDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridTagDataTable.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridTagDataTable>()
{
	return FLFPGridTagDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSize_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FORCEINLINE uint32 GetTypeHash(const FLFPGridPaletteData& Other)\n//{\n//\x09return FCrc::MemCrc32(&Other, sizeof(FLFPGridPaletteData));\n//}\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FORCEINLINE uint32 GetTypeHash(const FLFPGridPaletteData& Other)\n{\n       return FCrc::MemCrc32(&Other, sizeof(FLFPGridPaletteData));\n}" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridTagDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::NewProp_DataSize_MetaData[] = {
		{ "Category", "LFPGridTagDataTable" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::NewProp_DataSize = { "DataSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridTagDataTable, DataSize), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::NewProp_DataSize_MetaData), Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::NewProp_DataSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::NewProp_DataSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LFPGridTagDataTable",
		Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::PropPointers),
		sizeof(FLFPGridTagDataTable),
		alignof(FLFPGridTagDataTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridTagDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridTagDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridTagDataTable.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridTagDataTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridChuckData;
class UScriptStruct* FLFPGridChuckData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridChuckData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridChuckData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridChuckData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridChuckData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridChuckData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridChuckData>()
{
	return FLFPGridChuckData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridChuckData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaletteList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PaletteList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OpenPaletteList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenPaletteList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OpenPaletteList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridChuckData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_PaletteList_Inner = { "PaletteList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPGridPaletteData, METADATA_PARAMS(0, nullptr) }; // 212468190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_PaletteList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_PaletteList = { "PaletteList", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridChuckData, PaletteList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_PaletteList_MetaData), Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_PaletteList_MetaData) }; // 212468190
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_OpenPaletteList_Inner = { "OpenPaletteList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_OpenPaletteList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_OpenPaletteList = { "OpenPaletteList", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridChuckData, OpenPaletteList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_OpenPaletteList_MetaData), Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_OpenPaletteList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_IndexList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridChuckData, IndexList), Z_Construct_UScriptStruct_FLFPCompactIntArray, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_IndexList_MetaData), Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_IndexList_MetaData) }; // 739085046
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_DataList_Inner = { "DataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPCompactIntNameArray, METADATA_PARAMS(0, nullptr) }; // 1329260582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_DataList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_DataList = { "DataList", nullptr, (EPropertyFlags)0x0040000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridChuckData, DataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_DataList_MetaData), Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_DataList_MetaData) }; // 1329260582
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_PaletteList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_PaletteList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_OpenPaletteList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_OpenPaletteList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_DataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewProp_DataList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridChuckData",
		Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::PropPointers),
		sizeof(FLFPGridChuckData),
		alignof(FLFPGridChuckData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridChuckData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridChuckData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridChuckData.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridChuckData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridRegionData;
class UScriptStruct* FLFPGridRegionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridRegionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridRegionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridRegionData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridRegionData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridRegionData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridRegionData>()
{
	return FLFPGridRegionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridRegionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChuckData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridRegionData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewProp_ChuckData_Inner = { "ChuckData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPGridChuckData, METADATA_PARAMS(0, nullptr) }; // 457078837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewProp_ChuckData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewProp_ChuckData = { "ChuckData", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridRegionData, ChuckData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewProp_ChuckData_MetaData), Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewProp_ChuckData_MetaData) }; // 457078837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewProp_ChuckData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewProp_ChuckData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridRegionData",
		Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::PropPointers),
		sizeof(FLFPGridRegionData),
		alignof(FLFPGridRegionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridRegionData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridRegionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridRegionData.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridRegionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData;
class UScriptStruct* FLFPGridNameUpdateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridNameUpdateData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridNameUpdateData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridNameUpdateData>()
{
	return FLFPGridNameUpdateData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridNameUpdateData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_FromName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_FromName = { "FromName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridNameUpdateData, FromName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_FromName_MetaData), Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_FromName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_ToName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_ToName = { "ToName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridNameUpdateData, ToName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_ToName_MetaData), Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_ToName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_FromName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewProp_ToName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridNameUpdateData",
		Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::PropPointers),
		sizeof(FLFPGridNameUpdateData),
		alignof(FLFPGridNameUpdateData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridNameUpdateData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction;
class UScriptStruct* FLFPChuckUpdateAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPChuckUpdateAction, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPChuckUpdateAction"));
	}
	return Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPChuckUpdateAction>()
{
	return FLFPChuckUpdateAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridChangeNameList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridChangeNameList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GridChangeNameList;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridDirtyIndexList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridDirtyIndexList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GridDirtyIndexList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPChuckUpdateAction>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridChangeNameList_ElementProp = { "GridChangeNameList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPGridNameUpdateData, METADATA_PARAMS(0, nullptr) }; // 3763321925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridChangeNameList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FLFPGridNameUpdateData>, "The structure 'FLFPGridNameUpdateData' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridChangeNameList = { "GridChangeNameList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPChuckUpdateAction, GridChangeNameList), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridChangeNameList_MetaData), Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridChangeNameList_MetaData) }; // 3763321925
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridDirtyIndexList_ElementProp = { "GridDirtyIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridDirtyIndexList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridDirtyIndexList = { "GridDirtyIndexList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPChuckUpdateAction, GridDirtyIndexList), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridDirtyIndexList_MetaData), Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridDirtyIndexList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridChangeNameList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridChangeNameList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridDirtyIndexList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewProp_GridDirtyIndexList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPChuckUpdateAction",
		Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::PropPointers),
		sizeof(FLFPChuckUpdateAction),
		alignof(FLFPChuckUpdateAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPChuckUpdateAction()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction.InnerSingleton, Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate;
class UScriptStruct* FLFPGridChuckDelegate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridChuckDelegate, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridChuckDelegate"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridChuckDelegate>()
{
	return FLFPGridChuckDelegate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BindAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridChuckDelegate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::NewProp_BindAmount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::NewProp_BindAmount = { "BindAmount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridChuckDelegate, BindAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::NewProp_BindAmount_MetaData), Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::NewProp_BindAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::NewProp_BindAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridChuckDelegate",
		Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::PropPointers),
		sizeof(FLFPGridChuckDelegate),
		alignof(FLFPGridChuckDelegate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridChuckDelegate()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridChangeTagData;
class UScriptStruct* FLFPGridChangeTagData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridChangeTagData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridChangeTagData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridChangeTagData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridChangeTagData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridChangeTagData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridChangeTagData>()
{
	return FLFPGridChangeTagData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChangeData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChangeData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChangeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridChangeTagData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData_ValueProp = { "ChangeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData_Key_KeyProp = { "ChangeData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData_MetaData[] = {
		{ "Category", "LFPGridChangeTagData" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData = { "ChangeData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridChangeTagData, ChangeData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData_MetaData), Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewProp_ChangeData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridChangeTagData",
		Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::PropPointers),
		sizeof(FLFPGridChangeTagData),
		alignof(FLFPGridChangeTagData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridChangeTagData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridChangeTagData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridChangeTagData.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridChangeTagData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPGridUpdateAction;
class UScriptStruct* FLFPGridUpdateAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPGridUpdateAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPGridUpdateAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPGridUpdateAction, (UObject*)Z_Construct_UPackage__Script_LohFunctionPlugin(), TEXT("LFPGridUpdateAction"));
	}
	return Z_Registration_Info_UScriptStruct_LFPGridUpdateAction.OuterSingleton;
}
template<> LOHFUNCTIONPLUGIN_API UScriptStruct* StaticStruct<FLFPGridUpdateAction>()
{
	return FLFPGridUpdateAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangePalette_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChangePalette_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangePalette_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChangePalette;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeTagData_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChangeTagData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeTagData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChangeTagData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPGridUpdateAction>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette_ValueProp = { "ChangePalette", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPGridPaletteData, METADATA_PARAMS(0, nullptr) }; // 212468190
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette_Key_KeyProp = { "ChangePalette_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette_MetaData[] = {
		{ "Category", "LFPGridUpdateAction" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette = { "ChangePalette", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridUpdateAction, ChangePalette), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette_MetaData), Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette_MetaData) }; // 212468190
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData_ValueProp = { "ChangeTagData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPGridChangeTagData, METADATA_PARAMS(0, nullptr) }; // 1969501467
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData_Key_KeyProp = { "ChangeTagData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData_MetaData[] = {
		{ "Category", "LFPGridUpdateAction" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData = { "ChangeTagData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPGridUpdateAction, ChangeTagData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData_MetaData), Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData_MetaData) }; // 1969501467
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangePalette,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewProp_ChangeTagData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
		nullptr,
		&NewStructOps,
		"LFPGridUpdateAction",
		Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::PropPointers),
		sizeof(FLFPGridUpdateAction),
		alignof(FLFPGridUpdateAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPGridUpdateAction()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPGridUpdateAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPGridUpdateAction.InnerSingleton, Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPGridUpdateAction.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			FLFPGridUpdateAction GridUpdateAction;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridUpdateAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridUpdateAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_GridUpdateAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_GridUpdateAction = { "GridUpdateAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms, GridUpdateAction), Z_Construct_UScriptStruct_FLFPGridUpdateAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_GridUpdateAction_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_GridUpdateAction_MetaData) }; // 1107001714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::NewProp_GridUpdateAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin, nullptr, "OnGridContainerChuckUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGridContainerChuckUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGridContainerChuckUpdate, const int32 RegionIndex, const int32 ChuckIndex, FLFPGridUpdateAction const& GridUpdateAction)
{
	struct _Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms
	{
		int32 RegionIndex;
		int32 ChuckIndex;
		FLFPGridUpdateAction GridUpdateAction;
	};
	_Script_LohFunctionPlugin_eventOnGridContainerChuckUpdate_Parms Parms;
	Parms.RegionIndex=RegionIndex;
	Parms.ChuckIndex=ChuckIndex;
	Parms.GridUpdateAction=GridUpdateAction;
	OnGridContainerChuckUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPlugin_eventOnGridContainerChuckInitialized_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventOnGridContainerChuckInitialized_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventOnGridContainerChuckInitialized_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_ChuckIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::NewProp_ChuckIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin, nullptr, "OnGridContainerChuckInitialized__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventOnGridContainerChuckInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventOnGridContainerChuckInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGridContainerChuckInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnGridContainerChuckInitialized, const int32 RegionIndex, const int32 ChuckIndex)
{
	struct _Script_LohFunctionPlugin_eventOnGridContainerChuckInitialized_Parms
	{
		int32 RegionIndex;
		int32 ChuckIndex;
	};
	_Script_LohFunctionPlugin_eventOnGridContainerChuckInitialized_Parms Parms;
	Parms.RegionIndex=RegionIndex;
	Parms.ChuckIndex=ChuckIndex;
	OnGridContainerChuckInitialized.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPlugin_eventOnGridContainerRegionInitialized_Parms
		{
			int32 RegionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPlugin_eventOnGridContainerRegionInitialized_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::NewProp_RegionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::NewProp_RegionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPlugin, nullptr, "OnGridContainerRegionInitialized__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventOnGridContainerRegionInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::_Script_LohFunctionPlugin_eventOnGridContainerRegionInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGridContainerRegionInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnGridContainerRegionInitialized, const int32 RegionIndex)
{
	struct _Script_LohFunctionPlugin_eventOnGridContainerRegionInitialized_Parms
	{
		int32 RegionIndex;
	};
	_Script_LohFunctionPlugin_eventOnGridContainerRegionInitialized_Parms Parms;
	Parms.RegionIndex=RegionIndex;
	OnGridContainerRegionInitialized.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execRemoveRenderChuck)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_OBJECT(UActorComponent,Z_Param_RemoveObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRenderChuck(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_RemoveObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execAddRenderChuck)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPGridChuckDelegate*)Z_Param__Result=P_THIS->AddRenderChuck(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execInitializeChuck)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeChuck(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execInitializeRegion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeRegion(Z_Param_RegionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execAddGridGlobalIndexOffset)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GridGlobalIndex);
		P_GET_STRUCT(FIntVector,Z_Param_GridGlobalPositionOffset);
		P_GET_UBOOL(Z_Param_bRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->AddGridGlobalIndexOffset(Z_Param_GridGlobalIndex,Z_Param_GridGlobalPositionOffset,Z_Param_bRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execAddGridGlobalPositionOffset)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GridGlobalPosition);
		P_GET_STRUCT(FIntVector,Z_Param_GridGlobalIndexOffset);
		P_GET_UBOOL(Z_Param_bRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->AddGridGlobalPositionOffset(Z_Param_GridGlobalPosition,Z_Param_GridGlobalIndexOffset,Z_Param_bRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execToGridGlobalIndex)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GridGlobalPosition);
		P_GET_UBOOL(Z_Param_bRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->ToGridGlobalIndex(Z_Param_GridGlobalPosition,Z_Param_bRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execToGridGlobalPosition)
	{
		P_GET_STRUCT(FIntVector,Z_Param_GridGlobalIndex);
		P_GET_UBOOL(Z_Param_bRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->ToGridGlobalPosition(Z_Param_GridGlobalIndex,Z_Param_bRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execGetGridPaletteIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGridPaletteIndex(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execGetGridPaletteList)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFPGridPaletteData>*)Z_Param__Result=P_THIS->GetGridPaletteList(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execGetGridPalette)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPGridPaletteData*)Z_Param__Result=P_THIS->GetGridPalette(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execGetGridTagData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetGridTagData(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execGetGridChuckData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPGridChuckData*)Z_Param__Result=P_THIS->GetGridChuckData(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execGetRenderChuckAmount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRenderChuckAmount(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execInitializeGridChuck)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeGridChuck(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execSetGridChuckData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_STRUCT_REF(FLFPGridChuckData,Z_Param_Out_ChuckData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGridChuckData(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_Out_ChuckData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execSetGridPalettes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_TMAP_REF(int32,FLFPGridPaletteData,Z_Param_Out_PaletteMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGridPalettes(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_Out_PaletteMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execSetGridPalette)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_GET_STRUCT_REF(FLFPGridPaletteData,Z_Param_Out_Palette);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGridPalette(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex,Z_Param_Out_Palette);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execSetTagData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_PROPERTY(FByteProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTagData(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex,Z_Param_Tag,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execRemovePaletteTag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovePaletteTag(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execAddPaletteTag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddPaletteTag(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execIsGridPositionValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGridPositionValid(Z_Param_RegionIndex,Z_Param_ChuckIndex,Z_Param_GridIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execIsChuckPositionValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChuckPositionValid(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execIsRegionPositionValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegionPositionValid(Z_Param_RegionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execIsChuckInitialized)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ChuckIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChuckInitialized(Z_Param_RegionIndex,Z_Param_ChuckIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execIsRegionInitialized)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RegionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRegionInitialized(Z_Param_RegionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPGridContainerComponent::execTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Test();
		P_NATIVE_END;
	}
	void ULFPGridContainerComponent::StaticRegisterNativesULFPGridContainerComponent()
	{
		UClass* Class = ULFPGridContainerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGridGlobalIndexOffset", &ULFPGridContainerComponent::execAddGridGlobalIndexOffset },
			{ "AddGridGlobalPositionOffset", &ULFPGridContainerComponent::execAddGridGlobalPositionOffset },
			{ "AddPaletteTag", &ULFPGridContainerComponent::execAddPaletteTag },
			{ "AddRenderChuck", &ULFPGridContainerComponent::execAddRenderChuck },
			{ "GetGridChuckData", &ULFPGridContainerComponent::execGetGridChuckData },
			{ "GetGridPalette", &ULFPGridContainerComponent::execGetGridPalette },
			{ "GetGridPaletteIndex", &ULFPGridContainerComponent::execGetGridPaletteIndex },
			{ "GetGridPaletteList", &ULFPGridContainerComponent::execGetGridPaletteList },
			{ "GetGridTagData", &ULFPGridContainerComponent::execGetGridTagData },
			{ "GetRenderChuckAmount", &ULFPGridContainerComponent::execGetRenderChuckAmount },
			{ "InitializeChuck", &ULFPGridContainerComponent::execInitializeChuck },
			{ "InitializeGridChuck", &ULFPGridContainerComponent::execInitializeGridChuck },
			{ "InitializeRegion", &ULFPGridContainerComponent::execInitializeRegion },
			{ "IsChuckInitialized", &ULFPGridContainerComponent::execIsChuckInitialized },
			{ "IsChuckPositionValid", &ULFPGridContainerComponent::execIsChuckPositionValid },
			{ "IsGridPositionValid", &ULFPGridContainerComponent::execIsGridPositionValid },
			{ "IsRegionInitialized", &ULFPGridContainerComponent::execIsRegionInitialized },
			{ "IsRegionPositionValid", &ULFPGridContainerComponent::execIsRegionPositionValid },
			{ "RemovePaletteTag", &ULFPGridContainerComponent::execRemovePaletteTag },
			{ "RemoveRenderChuck", &ULFPGridContainerComponent::execRemoveRenderChuck },
			{ "SetGridChuckData", &ULFPGridContainerComponent::execSetGridChuckData },
			{ "SetGridPalette", &ULFPGridContainerComponent::execSetGridPalette },
			{ "SetGridPalettes", &ULFPGridContainerComponent::execSetGridPalettes },
			{ "SetTagData", &ULFPGridContainerComponent::execSetTagData },
			{ "Test", &ULFPGridContainerComponent::execTest },
			{ "ToGridGlobalIndex", &ULFPGridContainerComponent::execToGridGlobalIndex },
			{ "ToGridGlobalPosition", &ULFPGridContainerComponent::execToGridGlobalPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics
	{
		struct LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms
		{
			FIntVector GridGlobalIndex;
			FIntVector GridGlobalPositionOffset;
			bool bRound;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGlobalIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGlobalIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGlobalPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGlobalPositionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRound_MetaData[];
#endif
		static void NewProp_bRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalIndex = { "GridGlobalIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms, GridGlobalIndex), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalPositionOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalPositionOffset = { "GridGlobalPositionOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms, GridGlobalPositionOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalPositionOffset_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalPositionOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_bRound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_bRound_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms*)Obj)->bRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_bRound = { "bRound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_bRound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_bRound_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_bRound_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_GridGlobalPositionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_bRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "CPP_Default_bRound", "false" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "AddGridGlobalIndexOffset", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::LFPGridContainerComponent_eventAddGridGlobalIndexOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics
	{
		struct LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms
		{
			FIntVector GridGlobalPosition;
			FIntVector GridGlobalIndexOffset;
			bool bRound;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGlobalPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGlobalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGlobalIndexOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGlobalIndexOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRound_MetaData[];
#endif
		static void NewProp_bRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalPosition = { "GridGlobalPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms, GridGlobalPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalPosition_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalIndexOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalIndexOffset = { "GridGlobalIndexOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms, GridGlobalIndexOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalIndexOffset_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalIndexOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_bRound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_bRound_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms*)Obj)->bRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_bRound = { "bRound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_bRound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_bRound_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_bRound_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_GridGlobalIndexOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_bRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "CPP_Default_bRound", "false" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "AddGridGlobalPositionOffset", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::LFPGridContainerComponent_eventAddGridGlobalPositionOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics
	{
		struct LFPGridContainerComponent_eventAddPaletteTag_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
			FName Tag;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddPaletteTag_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddPaletteTag_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddPaletteTag_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_GridIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddPaletteTag_Parms, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_Tag_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventAddPaletteTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventAddPaletteTag_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "AddPaletteTag", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::LFPGridContainerComponent_eventAddPaletteTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::LFPGridContainerComponent_eventAddPaletteTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics
	{
		struct LFPGridContainerComponent_eventAddRenderChuck_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			FLFPGridChuckDelegate ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddRenderChuck_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddRenderChuck_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_ChuckIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventAddRenderChuck_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPGridChuckDelegate, METADATA_PARAMS(0, nullptr) }; // 3517729606
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Request chuck info on chuck spawn */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request chuck info on chuck spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "AddRenderChuck", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::LFPGridContainerComponent_eventAddRenderChuck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::LFPGridContainerComponent_eventAddRenderChuck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics
	{
		struct LFPGridContainerComponent_eventGetGridChuckData_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			FLFPGridChuckData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridChuckData_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridChuckData_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_ChuckIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridChuckData_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPGridChuckData, METADATA_PARAMS(0, nullptr) }; // 457078837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "GetGridChuckData", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::LFPGridContainerComponent_eventGetGridChuckData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::LFPGridContainerComponent_eventGetGridChuckData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics
	{
		struct LFPGridContainerComponent_eventGetGridPalette_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
			FLFPGridPaletteData ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPalette_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPalette_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPalette_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_GridIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPalette_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPGridPaletteData, METADATA_PARAMS(0, nullptr) }; // 212468190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "GetGridPalette", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::LFPGridContainerComponent_eventGetGridPalette_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::LFPGridContainerComponent_eventGetGridPalette_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics
	{
		struct LFPGridContainerComponent_eventGetGridPaletteIndex_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
			int32 ReturnValue;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPaletteIndex_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPaletteIndex_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPaletteIndex_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_GridIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPaletteIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "GetGridPaletteIndex", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::LFPGridContainerComponent_eventGetGridPaletteIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::LFPGridContainerComponent_eventGetGridPaletteIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics
	{
		struct LFPGridContainerComponent_eventGetGridPaletteList_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			TArray<FLFPGridPaletteData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPaletteList_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPaletteList_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ChuckIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPGridPaletteData, METADATA_PARAMS(0, nullptr) }; // 212468190
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridPaletteList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 212468190
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "GetGridPaletteList", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::LFPGridContainerComponent_eventGetGridPaletteList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::LFPGridContainerComponent_eventGetGridPaletteList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics
	{
		struct LFPGridContainerComponent_eventGetGridTagData_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
			FName TagName;
			uint8 ReturnValue;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridTagData_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridTagData_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridTagData_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_GridIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridTagData_Parms, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_TagName_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_TagName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetGridTagData_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "GetGridTagData", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::LFPGridContainerComponent_eventGetGridTagData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::LFPGridContainerComponent_eventGetGridTagData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics
	{
		struct LFPGridContainerComponent_eventGetRenderChuckAmount_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetRenderChuckAmount_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetRenderChuckAmount_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_ChuckIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventGetRenderChuckAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "GetRenderChuckAmount", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::LFPGridContainerComponent_eventGetRenderChuckAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::LFPGridContainerComponent_eventGetRenderChuckAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics
	{
		struct LFPGridContainerComponent_eventInitializeChuck_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChuckIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventInitializeChuck_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventInitializeChuck_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_ChuckIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::NewProp_ChuckIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "InitializeChuck", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::LFPGridContainerComponent_eventInitializeChuck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::LFPGridContainerComponent_eventInitializeChuck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics
	{
		struct LFPGridContainerComponent_eventInitializeGridChuck_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
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
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventInitializeGridChuck_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventInitializeGridChuck_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ChuckIndex_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventInitializeGridChuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventInitializeGridChuck_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Setter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "InitializeGridChuck", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::LFPGridContainerComponent_eventInitializeGridChuck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::LFPGridContainerComponent_eventInitializeGridChuck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics
	{
		struct LFPGridContainerComponent_eventInitializeRegion_Parms
		{
			int32 RegionIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventInitializeRegion_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::NewProp_RegionIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::NewProp_RegionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can be override to provide custom behavir */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be override to provide custom behavir" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "InitializeRegion", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::LFPGridContainerComponent_eventInitializeRegion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::LFPGridContainerComponent_eventInitializeRegion_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics
	{
		struct LFPGridContainerComponent_eventIsChuckInitialized_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
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
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsChuckInitialized_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsChuckInitialized_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ChuckIndex_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventIsChuckInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventIsChuckInitialized_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Checker" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "IsChuckInitialized", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::LFPGridContainerComponent_eventIsChuckInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::LFPGridContainerComponent_eventIsChuckInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics
	{
		struct LFPGridContainerComponent_eventIsChuckPositionValid_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
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
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsChuckPositionValid_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsChuckPositionValid_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ChuckIndex_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventIsChuckPositionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventIsChuckPositionValid_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Checker" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "IsChuckPositionValid", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::LFPGridContainerComponent_eventIsChuckPositionValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::LFPGridContainerComponent_eventIsChuckPositionValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics
	{
		struct LFPGridContainerComponent_eventIsGridPositionValid_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsGridPositionValid_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsGridPositionValid_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsGridPositionValid_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_GridIndex_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventIsGridPositionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventIsGridPositionValid_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Checker" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "IsGridPositionValid", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::LFPGridContainerComponent_eventIsGridPositionValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::LFPGridContainerComponent_eventIsGridPositionValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics
	{
		struct LFPGridContainerComponent_eventIsRegionInitialized_Parms
		{
			int32 RegionIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsRegionInitialized_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_RegionIndex_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventIsRegionInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventIsRegionInitialized_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Checker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Checker */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "IsRegionInitialized", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::LFPGridContainerComponent_eventIsRegionInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::LFPGridContainerComponent_eventIsRegionInitialized_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics
	{
		struct LFPGridContainerComponent_eventIsRegionPositionValid_Parms
		{
			int32 RegionIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventIsRegionPositionValid_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_RegionIndex_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventIsRegionPositionValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventIsRegionPositionValid_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Checker" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "IsRegionPositionValid", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::LFPGridContainerComponent_eventIsRegionPositionValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::LFPGridContainerComponent_eventIsRegionPositionValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics
	{
		struct LFPGridContainerComponent_eventRemovePaletteTag_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
			FName Tag;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventRemovePaletteTag_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventRemovePaletteTag_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventRemovePaletteTag_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_GridIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventRemovePaletteTag_Parms, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_Tag_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventRemovePaletteTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventRemovePaletteTag_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Setter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "RemovePaletteTag", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::LFPGridContainerComponent_eventRemovePaletteTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::LFPGridContainerComponent_eventRemovePaletteTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics
	{
		struct LFPGridContainerComponent_eventRemoveRenderChuck_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			const UActorComponent* RemoveObject;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventRemoveRenderChuck_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventRemoveRenderChuck_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RemoveObject_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RemoveObject = { "RemoveObject", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventRemoveRenderChuck_Parms, RemoveObject), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RemoveObject_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RemoveObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::NewProp_RemoveObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Release chuck info on chuck destroy */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Release chuck info on chuck destroy" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "RemoveRenderChuck", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::LFPGridContainerComponent_eventRemoveRenderChuck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::LFPGridContainerComponent_eventRemoveRenderChuck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics
	{
		struct LFPGridContainerComponent_eventSetGridChuckData_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			FLFPGridChuckData ChuckData;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridChuckData_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridChuckData_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckData = { "ChuckData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridChuckData_Parms, ChuckData), Z_Construct_UScriptStruct_FLFPGridChuckData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckData_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckData_MetaData) }; // 457078837
	void Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventSetGridChuckData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventSetGridChuckData_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ChuckData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Setter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "SetGridChuckData", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::LFPGridContainerComponent_eventSetGridChuckData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::LFPGridContainerComponent_eventSetGridChuckData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics
	{
		struct LFPGridContainerComponent_eventSetGridPalette_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
			FLFPGridPaletteData Palette;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Palette_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Palette;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridPalette_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridPalette_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridPalette_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_GridIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_Palette_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_Palette = { "Palette", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridPalette_Parms, Palette), Z_Construct_UScriptStruct_FLFPGridPaletteData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_Palette_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_Palette_MetaData) }; // 212468190
	void Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventSetGridPalette_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventSetGridPalette_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_Palette,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Setter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "SetGridPalette", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::LFPGridContainerComponent_eventSetGridPalette_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::LFPGridContainerComponent_eventSetGridPalette_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics
	{
		struct LFPGridContainerComponent_eventSetGridPalettes_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			TMap<int32,FLFPGridPaletteData> PaletteMap;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaletteMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PaletteMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PaletteMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridPalettes_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridPalettes_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ChuckIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap_ValueProp = { "PaletteMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPGridPaletteData, METADATA_PARAMS(0, nullptr) }; // 212468190
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap_Key_KeyProp = { "PaletteMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap = { "PaletteMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetGridPalettes_Parms, PaletteMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap_MetaData) }; // 212468190
	void Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventSetGridPalettes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventSetGridPalettes_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_PaletteMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Setter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "SetGridPalettes", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::LFPGridContainerComponent_eventSetGridPalettes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::LFPGridContainerComponent_eventSetGridPalettes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics
	{
		struct LFPGridContainerComponent_eventSetTagData_Parms
		{
			int32 RegionIndex;
			int32 ChuckIndex;
			int32 GridIndex;
			FName Tag;
			uint8 Data;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_RegionIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_RegionIndex = { "RegionIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetTagData_Parms, RegionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_RegionIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_RegionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ChuckIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ChuckIndex = { "ChuckIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetTagData_Parms, ChuckIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ChuckIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ChuckIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_GridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_GridIndex = { "GridIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetTagData_Parms, GridIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_GridIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_GridIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetTagData_Parms, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Tag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventSetTagData_Parms, Data), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Data_MetaData) };
	void Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventSetTagData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventSetTagData_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_RegionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ChuckIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_GridIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Setter" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "SetTagData", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::LFPGridContainerComponent_eventSetTagData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::LFPGridContainerComponent_eventSetTagData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics
	{
		struct LFPGridContainerComponent_eventTest_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debugging */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debugging" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "Test", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::LFPGridContainerComponent_eventTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::LFPGridContainerComponent_eventTest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics
	{
		struct LFPGridContainerComponent_eventToGridGlobalIndex_Parms
		{
			FIntVector GridGlobalPosition;
			bool bRound;
			FIntVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGlobalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRound_MetaData[];
#endif
		static void NewProp_bRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_GridGlobalPosition = { "GridGlobalPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventToGridGlobalIndex_Parms, GridGlobalPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_bRound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_bRound_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventToGridGlobalIndex_Parms*)Obj)->bRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_bRound = { "bRound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventToGridGlobalIndex_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_bRound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_bRound_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_bRound_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventToGridGlobalIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_GridGlobalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_bRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "CPP_Default_bRound", "false" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "ToGridGlobalIndex", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::LFPGridContainerComponent_eventToGridGlobalIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::LFPGridContainerComponent_eventToGridGlobalIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics
	{
		struct LFPGridContainerComponent_eventToGridGlobalPosition_Parms
		{
			FIntVector GridGlobalIndex;
			bool bRound;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGlobalIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridGlobalIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRound_MetaData[];
#endif
		static void NewProp_bRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_GridGlobalIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_GridGlobalIndex = { "GridGlobalIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventToGridGlobalPosition_Parms, GridGlobalIndex), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_GridGlobalIndex_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_GridGlobalIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_bRound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_bRound_SetBit(void* Obj)
	{
		((LFPGridContainerComponent_eventToGridGlobalPosition_Parms*)Obj)->bRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_bRound = { "bRound", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPGridContainerComponent_eventToGridGlobalPosition_Parms), &Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_bRound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_bRound_MetaData), Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_bRound_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPGridContainerComponent_eventToGridGlobalPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_GridGlobalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_bRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPGridContainerComponent | Getter" },
		{ "CPP_Default_bRound", "false" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPGridContainerComponent, nullptr, "ToGridGlobalPosition", nullptr, nullptr, Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::LFPGridContainerComponent_eventToGridGlobalPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::LFPGridContainerComponent_eventToGridGlobalPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPGridContainerComponent);
	UClass* Z_Construct_UClass_ULFPGridContainerComponent_NoRegister()
	{
		return ULFPGridContainerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPGridContainerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGridContainerChuckUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGridContainerChuckUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGridContainerChuckInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGridContainerChuckInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGridContainerRegionInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGridContainerRegionInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Setting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Setting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwitchRegionZWithX_MetaData[];
#endif
		static void NewProp_bSwitchRegionZWithX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwitchRegionZWithX;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegionDataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionDataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegionDataList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckDelegateList_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckDelegateList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckDelegateList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChuckDelegateList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckUpdateDataList_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckUpdateDataList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckUpdateDataList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChuckUpdateDataList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckUpdateStateList_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChuckUpdateStateList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChuckUpdateStateList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChuckUpdateStateList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPGridContainerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPGridContainerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalIndexOffset, "AddGridGlobalIndexOffset" }, // 47631935
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_AddGridGlobalPositionOffset, "AddGridGlobalPositionOffset" }, // 130917533
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_AddPaletteTag, "AddPaletteTag" }, // 1685314418
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_AddRenderChuck, "AddRenderChuck" }, // 873971178
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_GetGridChuckData, "GetGridChuckData" }, // 4079537623
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPalette, "GetGridPalette" }, // 823361483
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteIndex, "GetGridPaletteIndex" }, // 344790
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_GetGridPaletteList, "GetGridPaletteList" }, // 839687762
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_GetGridTagData, "GetGridTagData" }, // 1700460326
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_GetRenderChuckAmount, "GetRenderChuckAmount" }, // 2614791996
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_InitializeChuck, "InitializeChuck" }, // 2203945975
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_InitializeGridChuck, "InitializeGridChuck" }, // 4198030874
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_InitializeRegion, "InitializeRegion" }, // 1334061793
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckInitialized, "IsChuckInitialized" }, // 1584025453
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_IsChuckPositionValid, "IsChuckPositionValid" }, // 4048084088
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_IsGridPositionValid, "IsGridPositionValid" }, // 2156949105
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionInitialized, "IsRegionInitialized" }, // 2701873092
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_IsRegionPositionValid, "IsRegionPositionValid" }, // 1912126301
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_RemovePaletteTag, "RemovePaletteTag" }, // 3143990457
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_RemoveRenderChuck, "RemoveRenderChuck" }, // 3686011073
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_SetGridChuckData, "SetGridChuckData" }, // 4208923060
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalette, "SetGridPalette" }, // 2543343664
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_SetGridPalettes, "SetGridPalettes" }, // 1016143731
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_SetTagData, "SetTagData" }, // 1541754019
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_Test, "Test" }, // 3351974874
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalIndex, "ToGridGlobalIndex" }, // 3723122776
		{ &Z_Construct_UFunction_ULFPGridContainerComponent_ToGridGlobalPosition, "ToGridGlobalPosition" }, // 800504398
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LFPlugin" },
		{ "IncludePath", "Components/LFPGridContainerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckUpdate_MetaData[] = {
		{ "Category", "LFPGridContainerComponent | Delegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckUpdate = { "OnGridContainerChuckUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, OnGridContainerChuckUpdate), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckUpdate_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckUpdate_MetaData) }; // 2504274671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckInitialized_MetaData[] = {
		{ "Category", "LFPGridContainerComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckInitialized = { "OnGridContainerChuckInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, OnGridContainerChuckInitialized), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerChuckInitialized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckInitialized_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckInitialized_MetaData) }; // 2297345759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerRegionInitialized_MetaData[] = {
		{ "Category", "LFPGridContainerComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerRegionInitialized = { "OnGridContainerRegionInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, OnGridContainerRegionInitialized), Z_Construct_UDelegateFunction_LohFunctionPlugin_OnGridContainerRegionInitialized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerRegionInitialized_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerRegionInitialized_MetaData) }; // 2415662499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_Setting_MetaData[] = {
		{ "Category", "LFPGridContainerComponent | Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** What setting this component use when saving the Grid */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What setting this component use when saving the Grid" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_Setting = { "Setting", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, Setting), Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_Setting_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_Setting_MetaData) }; // 1970287095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_TagDataTable_MetaData[] = {
		{ "Category", "LFPGridContainerComponent | Setting" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_TagDataTable = { "TagDataTable", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, TagDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_TagDataTable_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_TagDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_bSwitchRegionZWithX_MetaData[] = {
		{ "Category", "LFPGridContainerComponent | Setting" },
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_bSwitchRegionZWithX_SetBit(void* Obj)
	{
		((ULFPGridContainerComponent*)Obj)->bSwitchRegionZWithX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_bSwitchRegionZWithX = { "bSwitchRegionZWithX", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPGridContainerComponent), &Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_bSwitchRegionZWithX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_bSwitchRegionZWithX_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_bSwitchRegionZWithX_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_RegionDataList_Inner = { "RegionDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPGridRegionData, METADATA_PARAMS(0, nullptr) }; // 3717767090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_RegionDataList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This store the chuck */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This store the chuck" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_RegionDataList = { "RegionDataList", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, RegionDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_RegionDataList_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_RegionDataList_MetaData) }; // 3717767090
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList_ValueProp = { "ChuckDelegateList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPGridChuckDelegate, METADATA_PARAMS(0, nullptr) }; // 3517729606
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList_Key_KeyProp = { "ChuckDelegateList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This store chuck delegate to call */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This store chuck delegate to call" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList = { "ChuckDelegateList", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, ChuckDelegateList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList_MetaData) }; // 3517729606
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList_ValueProp = { "ChuckUpdateDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPGridUpdateAction, METADATA_PARAMS(0, nullptr) }; // 1107001714
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList_Key_KeyProp = { "ChuckUpdateDataList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This store future chuck update data to apply */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This store future chuck update data to apply" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList = { "ChuckUpdateDataList", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, ChuckUpdateDataList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList_MetaData) }; // 1107001714
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList_ValueProp = { "ChuckUpdateStateList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLFPChuckUpdateAction, METADATA_PARAMS(0, nullptr) }; // 44397790
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList_Key_KeyProp = { "ChuckUpdateStateList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This store future chuck event data to send */" },
#endif
		{ "ModuleRelativePath", "Public/Components/LFPGridContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This store future chuck event data to send" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList = { "ChuckUpdateStateList", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPGridContainerComponent, ChuckUpdateStateList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList_MetaData), Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList_MetaData) }; // 44397790
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPGridContainerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerChuckInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_OnGridContainerRegionInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_Setting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_TagDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_bSwitchRegionZWithX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_RegionDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_RegionDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckDelegateList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPGridContainerComponent_Statics::NewProp_ChuckUpdateStateList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPGridContainerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPGridContainerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPGridContainerComponent_Statics::ClassParams = {
		&ULFPGridContainerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPGridContainerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPGridContainerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPGridContainerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPGridContainerComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPGridContainerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPGridContainerComponent.OuterSingleton, Z_Construct_UClass_ULFPGridContainerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPGridContainerComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGIN_API UClass* StaticClass<ULFPGridContainerComponent>()
	{
		return ULFPGridContainerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPGridContainerComponent);
	ULFPGridContainerComponent::~ULFPGridContainerComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPGridPaletteContainerSetting::StaticStruct, Z_Construct_UScriptStruct_FLFPGridPaletteContainerSetting_Statics::NewStructOps, TEXT("LFPGridPaletteContainerSetting"), &Z_Registration_Info_UScriptStruct_LFPGridPaletteContainerSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridPaletteContainerSetting), 1970287095U) },
		{ FLFPGridPaletteData::StaticStruct, Z_Construct_UScriptStruct_FLFPGridPaletteData_Statics::NewStructOps, TEXT("LFPGridPaletteData"), &Z_Registration_Info_UScriptStruct_LFPGridPaletteData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridPaletteData), 212468190U) },
		{ FLFPGridTagDataTable::StaticStruct, Z_Construct_UScriptStruct_FLFPGridTagDataTable_Statics::NewStructOps, TEXT("LFPGridTagDataTable"), &Z_Registration_Info_UScriptStruct_LFPGridTagDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridTagDataTable), 2486514601U) },
		{ FLFPGridChuckData::StaticStruct, Z_Construct_UScriptStruct_FLFPGridChuckData_Statics::NewStructOps, TEXT("LFPGridChuckData"), &Z_Registration_Info_UScriptStruct_LFPGridChuckData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridChuckData), 457078837U) },
		{ FLFPGridRegionData::StaticStruct, Z_Construct_UScriptStruct_FLFPGridRegionData_Statics::NewStructOps, TEXT("LFPGridRegionData"), &Z_Registration_Info_UScriptStruct_LFPGridRegionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridRegionData), 3717767090U) },
		{ FLFPGridNameUpdateData::StaticStruct, Z_Construct_UScriptStruct_FLFPGridNameUpdateData_Statics::NewStructOps, TEXT("LFPGridNameUpdateData"), &Z_Registration_Info_UScriptStruct_LFPGridNameUpdateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridNameUpdateData), 3763321925U) },
		{ FLFPChuckUpdateAction::StaticStruct, Z_Construct_UScriptStruct_FLFPChuckUpdateAction_Statics::NewStructOps, TEXT("LFPChuckUpdateAction"), &Z_Registration_Info_UScriptStruct_LFPChuckUpdateAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPChuckUpdateAction), 44397790U) },
		{ FLFPGridChuckDelegate::StaticStruct, Z_Construct_UScriptStruct_FLFPGridChuckDelegate_Statics::NewStructOps, TEXT("LFPGridChuckDelegate"), &Z_Registration_Info_UScriptStruct_LFPGridChuckDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridChuckDelegate), 3517729606U) },
		{ FLFPGridChangeTagData::StaticStruct, Z_Construct_UScriptStruct_FLFPGridChangeTagData_Statics::NewStructOps, TEXT("LFPGridChangeTagData"), &Z_Registration_Info_UScriptStruct_LFPGridChangeTagData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridChangeTagData), 1969501467U) },
		{ FLFPGridUpdateAction::StaticStruct, Z_Construct_UScriptStruct_FLFPGridUpdateAction_Statics::NewStructOps, TEXT("LFPGridUpdateAction"), &Z_Registration_Info_UScriptStruct_LFPGridUpdateAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPGridUpdateAction), 1107001714U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPGridContainerComponent, ULFPGridContainerComponent::StaticClass, TEXT("ULFPGridContainerComponent"), &Z_Registration_Info_UClass_ULFPGridContainerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPGridContainerComponent), 4154274349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_357516399(TEXT("/Script/LohFunctionPlugin"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPlugin_Public_Components_LFPGridContainerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
