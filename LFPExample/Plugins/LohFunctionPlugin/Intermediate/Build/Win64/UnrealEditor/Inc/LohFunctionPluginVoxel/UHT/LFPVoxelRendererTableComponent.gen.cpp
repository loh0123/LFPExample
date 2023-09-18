// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPluginVoxel/Public/Voxel/LFPVoxelRendererTableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPVoxelRendererTableComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LOHFUNCTIONPLUGINVOXEL_API UClass* Z_Construct_UClass_ULFPVoxelRendererComponent();
	LOHFUNCTIONPLUGINVOXEL_API UClass* Z_Construct_UClass_ULFPVoxelRendererTableComponent();
	LOHFUNCTIONPLUGINVOXEL_API UClass* Z_Construct_UClass_ULFPVoxelRendererTableComponent_NoRegister();
	LOHFUNCTIONPLUGINVOXEL_API UEnum* Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation();
	LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelAttributeTable();
	LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelTypeTable();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPluginVoxel();
// End Cross Module References

static_assert(std::is_polymorphic<FLFPVoxelTypeTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLFPVoxelTypeTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable;
class UScriptStruct* FLFPVoxelTypeTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPVoxelTypeTable, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("LFPVoxelTypeTable"));
	}
	return Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<FLFPVoxelTypeTable>()
{
	return FLFPVoxelTypeTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelDefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelDefaultColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPVoxelTypeTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelMaterial_MetaData[] = {
		{ "Category", "VoxelTypeTable" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelMaterial = { "VoxelMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelTypeTable, VoxelMaterial), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelMaterial_MetaData), Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelDefaultColor_MetaData[] = {
		{ "Category", "VoxelTypeTable" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelDefaultColor = { "VoxelDefaultColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelTypeTable, VoxelDefaultColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelDefaultColor_MetaData), Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelDefaultColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewProp_VoxelDefaultColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LFPVoxelTypeTable",
		Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::PropPointers),
		sizeof(FLFPVoxelTypeTable),
		alignof(FLFPVoxelTypeTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelTypeTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable.InnerSingleton, Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation;
	static UEnum* ELFPVoxelAttributeOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("ELFPVoxelAttributeOperation"));
		}
		return Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINVOXEL_API UEnum* StaticEnum<ELFPVoxelAttributeOperation>()
	{
		return ELFPVoxelAttributeOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::Enumerators[] = {
		{ "ELFPVoxelAttributeOperation::Addition", (int64)ELFPVoxelAttributeOperation::Addition },
		{ "ELFPVoxelAttributeOperation::Override", (int64)ELFPVoxelAttributeOperation::Override },
		{ "ELFPVoxelAttributeOperation::Blend", (int64)ELFPVoxelAttributeOperation::Blend },
		{ "ELFPVoxelAttributeOperation::Min", (int64)ELFPVoxelAttributeOperation::Min },
		{ "ELFPVoxelAttributeOperation::Max", (int64)ELFPVoxelAttributeOperation::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::Enum_MetaDataParams[] = {
		{ "Addition.DisplayName", "Addition" },
		{ "Addition.Name", "ELFPVoxelAttributeOperation::Addition" },
		{ "Blend.DisplayName", "Blend" },
		{ "Blend.Name", "ELFPVoxelAttributeOperation::Blend" },
		{ "BlueprintType", "true" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "ELFPVoxelAttributeOperation::Max" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "ELFPVoxelAttributeOperation::Min" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
		{ "Override.DisplayName", "Override" },
		{ "Override.Name", "ELFPVoxelAttributeOperation::Override" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		nullptr,
		"ELFPVoxelAttributeOperation",
		"ELFPVoxelAttributeOperation",
		Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation()
	{
		if (!Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation.InnerSingleton, Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLFPVoxelAttributeTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLFPVoxelAttributeTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable;
class UScriptStruct* FLFPVoxelAttributeTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPVoxelAttributeTable, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginVoxel(), TEXT("LFPVoxelAttributeTable"));
	}
	return Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINVOXEL_API UScriptStruct* StaticStruct<FLFPVoxelAttributeTable>()
{
	return FLFPVoxelAttributeTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPVoxelAttributeTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelColor_MetaData[] = {
		{ "Category", "VoxelAttributeTable" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelColor = { "VoxelColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelAttributeTable, VoxelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelColor_MetaData), Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelData_MetaData[] = {
		{ "Category", "VoxelAttributeTable" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelData = { "VoxelData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelAttributeTable, VoxelData), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelData_MetaData), Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelData_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "VoxelAttributeTable" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPVoxelAttributeTable, Operation), Z_Construct_UEnum_LohFunctionPluginVoxel_ELFPVoxelAttributeOperation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_Operation_MetaData), Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_Operation_MetaData) }; // 601661810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_VoxelData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewProp_Operation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LFPVoxelAttributeTable",
		Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::PropPointers),
		sizeof(FLFPVoxelAttributeTable),
		alignof(FLFPVoxelAttributeTable),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPVoxelAttributeTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable.InnerSingleton, Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable.InnerSingleton;
	}
	void ULFPVoxelRendererTableComponent::StaticRegisterNativesULFPVoxelRendererTableComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPVoxelRendererTableComponent);
	UClass* Z_Construct_UClass_ULFPVoxelRendererTableComponent_NoRegister()
	{
		return ULFPVoxelRendererTableComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelTypeTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VoxelTypeTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelAttributeTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VoxelAttributeTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULFPVoxelRendererComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginVoxel,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LFPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Voxel/LFPVoxelRendererTableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelTypeTable_MetaData[] = {
		{ "Category", "LFPVoxelRendererTableComponent | Setting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelTypeTable = { "VoxelTypeTable", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererTableComponent, VoxelTypeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelTypeTable_MetaData), Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelTypeTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelAttributeTable_MetaData[] = {
		{ "Category", "LFPVoxelRendererTableComponent | Setting" },
		{ "ModuleRelativePath", "Public/Voxel/LFPVoxelRendererTableComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelAttributeTable = { "VoxelAttributeTable", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPVoxelRendererTableComponent, VoxelAttributeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelAttributeTable_MetaData), Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelAttributeTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelTypeTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::NewProp_VoxelAttributeTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPVoxelRendererTableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::ClassParams = {
		&ULFPVoxelRendererTableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPVoxelRendererTableComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPVoxelRendererTableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPVoxelRendererTableComponent.OuterSingleton, Z_Construct_UClass_ULFPVoxelRendererTableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPVoxelRendererTableComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINVOXEL_API UClass* StaticClass<ULFPVoxelRendererTableComponent>()
	{
		return ULFPVoxelRendererTableComponent::StaticClass();
	}
	ULFPVoxelRendererTableComponent::ULFPVoxelRendererTableComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPVoxelRendererTableComponent);
	ULFPVoxelRendererTableComponent::~ULFPVoxelRendererTableComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::EnumInfo[] = {
		{ ELFPVoxelAttributeOperation_StaticEnum, TEXT("ELFPVoxelAttributeOperation"), &Z_Registration_Info_UEnum_ELFPVoxelAttributeOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 601661810U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPVoxelTypeTable::StaticStruct, Z_Construct_UScriptStruct_FLFPVoxelTypeTable_Statics::NewStructOps, TEXT("LFPVoxelTypeTable"), &Z_Registration_Info_UScriptStruct_LFPVoxelTypeTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPVoxelTypeTable), 2681860620U) },
		{ FLFPVoxelAttributeTable::StaticStruct, Z_Construct_UScriptStruct_FLFPVoxelAttributeTable_Statics::NewStructOps, TEXT("LFPVoxelAttributeTable"), &Z_Registration_Info_UScriptStruct_LFPVoxelAttributeTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPVoxelAttributeTable), 544614786U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPVoxelRendererTableComponent, ULFPVoxelRendererTableComponent::StaticClass, TEXT("ULFPVoxelRendererTableComponent"), &Z_Registration_Info_UClass_ULFPVoxelRendererTableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPVoxelRendererTableComponent), 2365863911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_3777542965(TEXT("/Script/LohFunctionPluginVoxel"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginVoxel_Public_Voxel_LFPVoxelRendererTableComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
