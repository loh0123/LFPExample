// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPluginItem/Public/Item/LFPEquipmentComponent.h"
#include "LohFunctionPluginItem/Public/Item/LFPInventoryComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPEquipmentComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPEquipmentComponent();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPEquipmentComponent_NoRegister();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPInventoryComponent_NoRegister();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPInventoryInterface_NoRegister();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UScriptStruct* Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig();
	LOHFUNCTIONPLUGINITEM_API UScriptStruct* Z_Construct_UScriptStruct_FLFPEquipmentSlotData();
	LOHFUNCTIONPLUGINITEM_API UScriptStruct* Z_Construct_UScriptStruct_FLFPInventoryItemData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPluginItem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig;
class UScriptStruct* FLFPEquipmentSlotConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginItem(), TEXT("LFPEquipmentSlotConfig"));
	}
	return Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<FLFPEquipmentSlotConfig>()
{
	return FLFPEquipmentSlotConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLock_MetaData[];
#endif
		static void NewProp_bIsLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPEquipmentSlotConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "LFPEquipmentSlotConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The inventory slot */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The inventory slot" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPEquipmentSlotConfig, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_SlotName_MetaData), Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_SlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "LFPEquipmentSlotConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This slot won't send any event but still can equip or unequip */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This slot won't send any event but still can equip or unequip" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FLFPEquipmentSlotConfig*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPEquipmentSlotConfig), &Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsActive_MetaData), Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsLock_MetaData[] = {
		{ "Category", "LFPEquipmentSlotConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This slot can't equip or unequip */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This slot can't equip or unequip" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsLock_SetBit(void* Obj)
	{
		((FLFPEquipmentSlotConfig*)Obj)->bIsLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsLock = { "bIsLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPEquipmentSlotConfig), &Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsLock_MetaData), Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsLock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewProp_bIsLock,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
		nullptr,
		&NewStructOps,
		"LFPEquipmentSlotConfig",
		Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::PropPointers),
		sizeof(FLFPEquipmentSlotConfig),
		alignof(FLFPEquipmentSlotConfig),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig.InnerSingleton, Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData;
class UScriptStruct* FLFPEquipmentSlotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPEquipmentSlotData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginItem(), TEXT("LFPEquipmentSlotData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<FLFPEquipmentSlotData>()
{
	return FLFPEquipmentSlotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLock_MetaData[];
#endif
		static void NewProp_bIsLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPEquipmentSlotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "LFPEquipmentSlotData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The inventory slot */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The inventory slot" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPEquipmentSlotData, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "LFPEquipmentSlotData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This slot won't send any event but still can equip or unequip */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This slot won't send any event but still can equip or unequip" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((FLFPEquipmentSlotData*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPEquipmentSlotData), &Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsActive_MetaData), Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsLock_MetaData[] = {
		{ "Category", "LFPEquipmentSlotData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This slot can't equip or unequip */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This slot can't equip or unequip" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsLock_SetBit(void* Obj)
	{
		((FLFPEquipmentSlotData*)Obj)->bIsLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsLock = { "bIsLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPEquipmentSlotData), &Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsLock_MetaData), Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsLock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewProp_bIsLock,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
		nullptr,
		&NewStructOps,
		"LFPEquipmentSlotData",
		Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::PropPointers),
		sizeof(FLFPEquipmentSlotData),
		alignof(FLFPEquipmentSlotData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPEquipmentSlotData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData.InnerSingleton, Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms
		{
			FLFPInventoryItemData ItemData;
			int32 EquipmentSlotIndex;
			int32 InventorySlotIndex;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex = { "EquipmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms, EquipmentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnEquipmentEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEquipmentEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentEvent, FLFPInventoryItemData const& ItemData, const int32 EquipmentSlotIndex, const int32 InventorySlotIndex, const FString& EventInfo)
{
	struct _Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 EquipmentSlotIndex;
		int32 InventorySlotIndex;
		FString EventInfo;
	};
	_Script_LohFunctionPluginItem_eventOnEquipmentEvent_Parms Parms;
	Parms.ItemData=ItemData;
	Parms.EquipmentSlotIndex=EquipmentSlotIndex;
	Parms.InventorySlotIndex=InventorySlotIndex;
	Parms.EventInfo=EventInfo;
	OnEquipmentEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms
		{
			FLFPInventoryItemData ItemData;
			int32 EquipmentSlotIndex;
			int32 InventorySlotIndex;
			bool Value;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex = { "EquipmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms, EquipmentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms), &Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_Value_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_Value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EquipmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnEquipmentChangeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEquipmentChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentChangeEvent, FLFPInventoryItemData const& ItemData, const int32 EquipmentSlotIndex, const int32 InventorySlotIndex, bool Value, const FString& EventInfo)
{
	struct _Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 EquipmentSlotIndex;
		int32 InventorySlotIndex;
		bool Value;
		FString EventInfo;
	};
	_Script_LohFunctionPluginItem_eventOnEquipmentChangeEvent_Parms Parms;
	Parms.ItemData=ItemData;
	Parms.EquipmentSlotIndex=EquipmentSlotIndex;
	Parms.InventorySlotIndex=InventorySlotIndex;
	Parms.Value=Value ? true : false;
	Parms.EventInfo=EventInfo;
	OnEquipmentChangeEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execOnEquipmentSlotListRep)
	{
		P_GET_TARRAY_REF(FLFPEquipmentSlotData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquipmentSlotListRep_Implementation(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execOnInventoryComponentRep)
	{
		P_GET_OBJECT(ULFPInventoryComponent,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInventoryComponentRep_Implementation(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execFindEquipmentSlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InventorySlotIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquipmentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPEquipmentSlotData*)Z_Param__Result=P_THIS->FindEquipmentSlotIndex(Z_Param_InventorySlotIndex,Z_Param_Out_EquipmentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execGetEquipmentSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPInventoryItemData*)Z_Param__Result=P_THIS->GetEquipmentSlot(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execGetEquipmentSlotList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFPEquipmentSlotData>*)Z_Param__Result=P_THIS->GetEquipmentSlotList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execIsEquipmentSlotLock)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipmentSlotLock(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execIsEquipmentSlotActive)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipmentSlotActive(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execIsEquipmentSlotItemValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipmentSlotItemValid(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execIsEquipmentSlotIndexValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEquipmentSlotIndexValid(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execCanUnequipItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentSlotIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_InventorySlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUnequipItem_Implementation(Z_Param_Out_ItemData,Z_Param_EquipmentSlotIndex,Z_Param_InventorySlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execCanEquipItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentSlotIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_InventorySlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEquipItem_Implementation(Z_Param_Out_ItemData,Z_Param_EquipmentSlotIndex,Z_Param_InventorySlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execOnInventoryUpdateItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_OldItemData);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_NewItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInventoryUpdateItem(Z_Param_Out_OldItemData,Z_Param_Out_NewItemData,Z_Param_SlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execSetEquipmentSlotLock)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentSlotIndex);
		P_GET_UBOOL(Z_Param_bIsSlotLock);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEquipmentSlotLock(Z_Param_EquipmentSlotIndex,Z_Param_bIsSlotLock,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execSetEquipmentSlotActive)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentSlotIndex);
		P_GET_UBOOL(Z_Param_bIsSlotActive);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEquipmentSlotActive(Z_Param_EquipmentSlotIndex,Z_Param_bIsSlotActive,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execTryUnequipItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentSlotIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_Slotname);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryUnequipItem(Z_Param_EquipmentSlotIndex,Z_Param_Slotname,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execTryEquipItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InventorySlotIndex);
		P_GET_UBOOL(Z_Param_bToActiveSlotOnly);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryEquipItem(Z_Param_InventorySlotIndex,Z_Param_bToActiveSlotOnly,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execClearEquipmentSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearEquipmentSlot(Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execRemoveEquipmentSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InventorySlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveEquipmentSlot(Z_Param_InventorySlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execAddEquipmentSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InventorySlotIndex);
		P_GET_UBOOL(Z_Param_bIsSlotActive);
		P_GET_UBOOL(Z_Param_bIsSlotLock);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddEquipmentSlot(Z_Param_InventorySlotIndex,Z_Param_bIsSlotActive,Z_Param_bIsSlotLock,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execAddEquipmentSlotName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InventorySlotName);
		P_GET_UBOOL(Z_Param_bIsSlotActive);
		P_GET_UBOOL(Z_Param_bIsSlotLock);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddEquipmentSlotName(Z_Param_InventorySlotName,Z_Param_bIsSlotActive,Z_Param_bIsSlotLock,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPEquipmentComponent::execSetInventoryComponent)
	{
		P_GET_OBJECT(ULFPInventoryComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInventoryComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	struct LFPEquipmentComponent_eventCanEquipItem_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 EquipmentSlotIndex;
		int32 InventorySlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPEquipmentComponent_eventCanEquipItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPEquipmentComponent_eventCanUnequipItem_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 EquipmentSlotIndex;
		int32 InventorySlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPEquipmentComponent_eventCanUnequipItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPEquipmentComponent_eventOnEquipmentSlotListRep_Parms
	{
		TArray<FLFPEquipmentSlotData> OldValue;
	};
	struct LFPEquipmentComponent_eventOnInventoryComponentRep_Parms
	{
		ULFPInventoryComponent* OldValue;
	};
	static FName NAME_ULFPEquipmentComponent_CanEquipItem = FName(TEXT("CanEquipItem"));
	bool ULFPEquipmentComponent::CanEquipItem(FLFPInventoryItemData const& ItemData, const int32 EquipmentSlotIndex, const int32 InventorySlotIndex, const FString& EventInfo) const
	{
		LFPEquipmentComponent_eventCanEquipItem_Parms Parms;
		Parms.ItemData=ItemData;
		Parms.EquipmentSlotIndex=EquipmentSlotIndex;
		Parms.InventorySlotIndex=InventorySlotIndex;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPEquipmentComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPEquipmentComponent_CanEquipItem),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPEquipmentComponent_CanUnequipItem = FName(TEXT("CanUnequipItem"));
	bool ULFPEquipmentComponent::CanUnequipItem(FLFPInventoryItemData const& ItemData, const int32 EquipmentSlotIndex, const int32 InventorySlotIndex, const FString& EventInfo) const
	{
		LFPEquipmentComponent_eventCanUnequipItem_Parms Parms;
		Parms.ItemData=ItemData;
		Parms.EquipmentSlotIndex=EquipmentSlotIndex;
		Parms.InventorySlotIndex=InventorySlotIndex;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPEquipmentComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPEquipmentComponent_CanUnequipItem),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPEquipmentComponent_OnEquipmentSlotListRep = FName(TEXT("OnEquipmentSlotListRep"));
	void ULFPEquipmentComponent::OnEquipmentSlotListRep(TArray<FLFPEquipmentSlotData>& OldValue)
	{
		LFPEquipmentComponent_eventOnEquipmentSlotListRep_Parms Parms;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_ULFPEquipmentComponent_OnEquipmentSlotListRep),&Parms);
		OldValue=Parms.OldValue;
	}
	static FName NAME_ULFPEquipmentComponent_OnInventoryComponentRep = FName(TEXT("OnInventoryComponentRep"));
	void ULFPEquipmentComponent::OnInventoryComponentRep(ULFPInventoryComponent* OldValue)
	{
		LFPEquipmentComponent_eventOnInventoryComponentRep_Parms Parms;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_ULFPEquipmentComponent_OnInventoryComponentRep),&Parms);
	}
	void ULFPEquipmentComponent::StaticRegisterNativesULFPEquipmentComponent()
	{
		UClass* Class = ULFPEquipmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEquipmentSlot", &ULFPEquipmentComponent::execAddEquipmentSlot },
			{ "AddEquipmentSlotName", &ULFPEquipmentComponent::execAddEquipmentSlotName },
			{ "CanEquipItem", &ULFPEquipmentComponent::execCanEquipItem },
			{ "CanUnequipItem", &ULFPEquipmentComponent::execCanUnequipItem },
			{ "ClearEquipmentSlot", &ULFPEquipmentComponent::execClearEquipmentSlot },
			{ "FindEquipmentSlotIndex", &ULFPEquipmentComponent::execFindEquipmentSlotIndex },
			{ "GetEquipmentSlot", &ULFPEquipmentComponent::execGetEquipmentSlot },
			{ "GetEquipmentSlotList", &ULFPEquipmentComponent::execGetEquipmentSlotList },
			{ "IsEquipmentSlotActive", &ULFPEquipmentComponent::execIsEquipmentSlotActive },
			{ "IsEquipmentSlotIndexValid", &ULFPEquipmentComponent::execIsEquipmentSlotIndexValid },
			{ "IsEquipmentSlotItemValid", &ULFPEquipmentComponent::execIsEquipmentSlotItemValid },
			{ "IsEquipmentSlotLock", &ULFPEquipmentComponent::execIsEquipmentSlotLock },
			{ "OnEquipmentSlotListRep", &ULFPEquipmentComponent::execOnEquipmentSlotListRep },
			{ "OnInventoryComponentRep", &ULFPEquipmentComponent::execOnInventoryComponentRep },
			{ "OnInventoryUpdateItem", &ULFPEquipmentComponent::execOnInventoryUpdateItem },
			{ "RemoveEquipmentSlot", &ULFPEquipmentComponent::execRemoveEquipmentSlot },
			{ "SetEquipmentSlotActive", &ULFPEquipmentComponent::execSetEquipmentSlotActive },
			{ "SetEquipmentSlotLock", &ULFPEquipmentComponent::execSetEquipmentSlotLock },
			{ "SetInventoryComponent", &ULFPEquipmentComponent::execSetInventoryComponent },
			{ "TryEquipItem", &ULFPEquipmentComponent::execTryEquipItem },
			{ "TryUnequipItem", &ULFPEquipmentComponent::execTryUnequipItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics
	{
		struct LFPEquipmentComponent_eventAddEquipmentSlot_Parms
		{
			int32 InventorySlotIndex;
			bool bIsSlotActive;
			bool bIsSlotLock;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotActive_MetaData[];
#endif
		static void NewProp_bIsSlotActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotLock_MetaData[];
#endif
		static void NewProp_bIsSlotLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventAddEquipmentSlot_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_InventorySlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotActive_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventAddEquipmentSlot_Parms*)Obj)->bIsSlotActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotActive = { "bIsSlotActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventAddEquipmentSlot_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotActive_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotLock_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotLock_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventAddEquipmentSlot_Parms*)Obj)->bIsSlotLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotLock = { "bIsSlotLock", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventAddEquipmentSlot_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotLock_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventAddEquipmentSlot_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventAddEquipmentSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventAddEquipmentSlot_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_bIsSlotLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_bIsSlotActive", "true" },
		{ "CPP_Default_bIsSlotLock", "true" },
		{ "CPP_Default_EventInfo", "" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "AddEquipmentSlot", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::LFPEquipmentComponent_eventAddEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::LFPEquipmentComponent_eventAddEquipmentSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics
	{
		struct LFPEquipmentComponent_eventAddEquipmentSlotName_Parms
		{
			FName InventorySlotName;
			bool bIsSlotActive;
			bool bIsSlotLock;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InventorySlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotActive_MetaData[];
#endif
		static void NewProp_bIsSlotActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotLock_MetaData[];
#endif
		static void NewProp_bIsSlotLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_InventorySlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_InventorySlotName = { "InventorySlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventAddEquipmentSlotName_Parms, InventorySlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_InventorySlotName_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_InventorySlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotActive_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventAddEquipmentSlotName_Parms*)Obj)->bIsSlotActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotActive = { "bIsSlotActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventAddEquipmentSlotName_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotActive_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotLock_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotLock_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventAddEquipmentSlotName_Parms*)Obj)->bIsSlotLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotLock = { "bIsSlotLock", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventAddEquipmentSlotName_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotLock_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventAddEquipmentSlotName_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventAddEquipmentSlotName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventAddEquipmentSlotName_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_InventorySlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_bIsSlotLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_bIsSlotActive", "true" },
		{ "CPP_Default_bIsSlotLock", "true" },
		{ "CPP_Default_EventInfo", "" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "AddEquipmentSlotName", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::LFPEquipmentComponent_eventAddEquipmentSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::LFPEquipmentComponent_eventAddEquipmentSlotName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanEquipItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ItemData_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EquipmentSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EquipmentSlotIndex = { "EquipmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanEquipItem_Parms, EquipmentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EquipmentSlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EquipmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanEquipItem_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_InventorySlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanEquipItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventCanEquipItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventCanEquipItem_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EquipmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check Is Slot Locked */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check Is Slot Locked" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "CanEquipItem", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::PropPointers), sizeof(LFPEquipmentComponent_eventCanEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPEquipmentComponent_eventCanEquipItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanUnequipItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ItemData_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EquipmentSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EquipmentSlotIndex = { "EquipmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanUnequipItem_Parms, EquipmentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EquipmentSlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EquipmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanUnequipItem_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_InventorySlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventCanUnequipItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventCanUnequipItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventCanUnequipItem_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EquipmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check Is Slot Locked */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check Is Slot Locked" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "CanUnequipItem", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::PropPointers), sizeof(LFPEquipmentComponent_eventCanUnequipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPEquipmentComponent_eventCanUnequipItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics
	{
		struct LFPEquipmentComponent_eventClearEquipmentSlot_Parms
		{
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventClearEquipmentSlot_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_EventInfo", "" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "ClearEquipmentSlot", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::LFPEquipmentComponent_eventClearEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::LFPEquipmentComponent_eventClearEquipmentSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics
	{
		struct LFPEquipmentComponent_eventFindEquipmentSlotIndex_Parms
		{
			int32 InventorySlotIndex;
			int32 EquipmentIndex;
			FLFPEquipmentSlotData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventFindEquipmentSlotIndex_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_InventorySlotIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventFindEquipmentSlotIndex_Parms, EquipmentIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventFindEquipmentSlotIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPEquipmentSlotData, METADATA_PARAMS(0, nullptr) }; // 778491209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_EquipmentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Getter" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "FindEquipmentSlotIndex", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::LFPEquipmentComponent_eventFindEquipmentSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::LFPEquipmentComponent_eventFindEquipmentSlotIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics
	{
		struct LFPEquipmentComponent_eventGetEquipmentSlot_Parms
		{
			int32 Index;
			FLFPInventoryItemData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventGetEquipmentSlot_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventGetEquipmentSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_ReturnValue_MetaData) }; // 2821161623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Getter" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "GetEquipmentSlot", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::LFPEquipmentComponent_eventGetEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::LFPEquipmentComponent_eventGetEquipmentSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics
	{
		struct LFPEquipmentComponent_eventGetEquipmentSlotList_Parms
		{
			TArray<FLFPEquipmentSlotData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPEquipmentSlotData, METADATA_PARAMS(0, nullptr) }; // 778491209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventGetEquipmentSlotList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::NewProp_ReturnValue_MetaData) }; // 778491209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "GetEquipmentSlotList", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::LFPEquipmentComponent_eventGetEquipmentSlotList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::LFPEquipmentComponent_eventGetEquipmentSlotList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics
	{
		struct LFPEquipmentComponent_eventIsEquipmentSlotActive_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventIsEquipmentSlotActive_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventIsEquipmentSlotActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventIsEquipmentSlotActive_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Getter" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "IsEquipmentSlotActive", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::LFPEquipmentComponent_eventIsEquipmentSlotActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::LFPEquipmentComponent_eventIsEquipmentSlotActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics
	{
		struct LFPEquipmentComponent_eventIsEquipmentSlotIndexValid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventIsEquipmentSlotIndexValid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventIsEquipmentSlotIndexValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventIsEquipmentSlotIndexValid_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Valid Checker\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valid Checker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "IsEquipmentSlotIndexValid", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::LFPEquipmentComponent_eventIsEquipmentSlotIndexValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::LFPEquipmentComponent_eventIsEquipmentSlotIndexValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics
	{
		struct LFPEquipmentComponent_eventIsEquipmentSlotItemValid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventIsEquipmentSlotItemValid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventIsEquipmentSlotItemValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventIsEquipmentSlotItemValid_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "IsEquipmentSlotItemValid", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::LFPEquipmentComponent_eventIsEquipmentSlotItemValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::LFPEquipmentComponent_eventIsEquipmentSlotItemValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics
	{
		struct LFPEquipmentComponent_eventIsEquipmentSlotLock_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventIsEquipmentSlotLock_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventIsEquipmentSlotLock_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventIsEquipmentSlotLock_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Getter" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "IsEquipmentSlotLock", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::LFPEquipmentComponent_eventIsEquipmentSlotLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::LFPEquipmentComponent_eventIsEquipmentSlotLock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::NewProp_OldValue_Inner = { "OldValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPEquipmentSlotData, METADATA_PARAMS(0, nullptr) }; // 778491209
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventOnEquipmentSlotListRep_Parms, OldValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 778491209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::NewProp_OldValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "OnEquipmentSlotListRep", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::PropPointers), sizeof(LFPEquipmentComponent_eventOnEquipmentSlotListRep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPEquipmentComponent_eventOnEquipmentSlotListRep_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::NewProp_OldValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventOnInventoryComponentRep_Parms, OldValue), Z_Construct_UClass_ULFPInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::NewProp_OldValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "OnInventoryComponentRep", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::PropPointers), sizeof(LFPEquipmentComponent_eventOnInventoryComponentRep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPEquipmentComponent_eventOnInventoryComponentRep_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics
	{
		struct LFPEquipmentComponent_eventOnInventoryUpdateItem_Parms
		{
			FLFPInventoryItemData OldItemData;
			FLFPInventoryItemData NewItemData;
			int32 SlotIndex;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_OldItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_OldItemData = { "OldItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventOnInventoryUpdateItem_Parms, OldItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_OldItemData_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_OldItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_NewItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventOnInventoryUpdateItem_Parms, NewItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_NewItemData_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_NewItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventOnInventoryUpdateItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventOnInventoryUpdateItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_OldItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_NewItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inventory Event\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "OnInventoryUpdateItem", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::LFPEquipmentComponent_eventOnInventoryUpdateItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::LFPEquipmentComponent_eventOnInventoryUpdateItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics
	{
		struct LFPEquipmentComponent_eventRemoveEquipmentSlot_Parms
		{
			int32 InventorySlotIndex;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventRemoveEquipmentSlot_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_InventorySlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventRemoveEquipmentSlot_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventRemoveEquipmentSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventRemoveEquipmentSlot_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_EventInfo", "" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "RemoveEquipmentSlot", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::LFPEquipmentComponent_eventRemoveEquipmentSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::LFPEquipmentComponent_eventRemoveEquipmentSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics
	{
		struct LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms
		{
			int32 EquipmentSlotIndex;
			bool bIsSlotActive;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotActive_MetaData[];
#endif
		static void NewProp_bIsSlotActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EquipmentSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EquipmentSlotIndex = { "EquipmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms, EquipmentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EquipmentSlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EquipmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_bIsSlotActive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_bIsSlotActive_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms*)Obj)->bIsSlotActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_bIsSlotActive = { "bIsSlotActive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_bIsSlotActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_bIsSlotActive_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_bIsSlotActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EquipmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_bIsSlotActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_EventInfo", "" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "SetEquipmentSlotActive", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::LFPEquipmentComponent_eventSetEquipmentSlotActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics
	{
		struct LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms
		{
			int32 EquipmentSlotIndex;
			bool bIsSlotLock;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlotLock_MetaData[];
#endif
		static void NewProp_bIsSlotLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlotLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EquipmentSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EquipmentSlotIndex = { "EquipmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms, EquipmentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EquipmentSlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EquipmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_bIsSlotLock_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_bIsSlotLock_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms*)Obj)->bIsSlotLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_bIsSlotLock = { "bIsSlotLock", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_bIsSlotLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_bIsSlotLock_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_bIsSlotLock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EquipmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_bIsSlotLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_EventInfo", "" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "SetEquipmentSlotLock", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::LFPEquipmentComponent_eventSetEquipmentSlotLock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics
	{
		struct LFPEquipmentComponent_eventSetInventoryComponent_Parms
		{
			ULFPInventoryComponent* Component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventSetInventoryComponent_Parms, Component), Z_Construct_UClass_ULFPInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "SetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::LFPEquipmentComponent_eventSetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::LFPEquipmentComponent_eventSetInventoryComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics
	{
		struct LFPEquipmentComponent_eventTryEquipItem_Parms
		{
			int32 InventorySlotIndex;
			bool bToActiveSlotOnly;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToActiveSlotOnly_MetaData[];
#endif
		static void NewProp_bToActiveSlotOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToActiveSlotOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_InventorySlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_InventorySlotIndex = { "InventorySlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventTryEquipItem_Parms, InventorySlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_InventorySlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_InventorySlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_bToActiveSlotOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_bToActiveSlotOnly_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventTryEquipItem_Parms*)Obj)->bToActiveSlotOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_bToActiveSlotOnly = { "bToActiveSlotOnly", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventTryEquipItem_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_bToActiveSlotOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_bToActiveSlotOnly_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_bToActiveSlotOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventTryEquipItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventTryEquipItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventTryEquipItem_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_InventorySlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_bToActiveSlotOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_bToActiveSlotOnly", "false" },
		{ "CPP_Default_EventInfo", "" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "TryEquipItem", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::LFPEquipmentComponent_eventTryEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::LFPEquipmentComponent_eventTryEquipItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics
	{
		struct LFPEquipmentComponent_eventTryUnequipItem_Parms
		{
			int32 EquipmentSlotIndex;
			FName Slotname;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slotname_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Slotname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EquipmentSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EquipmentSlotIndex = { "EquipmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventTryUnequipItem_Parms, EquipmentSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EquipmentSlotIndex_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EquipmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_Slotname_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_Slotname = { "Slotname", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventTryUnequipItem_Parms, Slotname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_Slotname_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_Slotname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPEquipmentComponent_eventTryUnequipItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPEquipmentComponent_eventTryUnequipItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPEquipmentComponent_eventTryUnequipItem_Parms), &Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EquipmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_Slotname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPEquipmentComponent | Function" },
		{ "CPP_Default_EventInfo", "" },
		{ "CPP_Default_Slotname", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPEquipmentComponent, nullptr, "TryUnequipItem", nullptr, nullptr, Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::LFPEquipmentComponent_eventTryUnequipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::LFPEquipmentComponent_eventTryUnequipItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPEquipmentComponent);
	UClass* Z_Construct_UClass_ULFPEquipmentComponent_NoRegister()
	{
		return ULFPEquipmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPEquipmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEquipItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquipItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnequipItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnequipItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemActiveChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemActiveChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemLockChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemLockChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetup_MetaData[];
#endif
		static void NewProp_bAutoSetup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentSlotList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentSlotList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentSlotConfigList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotConfigList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentSlotConfigList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPEquipmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPEquipmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlot, "AddEquipmentSlot" }, // 3979087434
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_AddEquipmentSlotName, "AddEquipmentSlotName" }, // 4174324445
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_CanEquipItem, "CanEquipItem" }, // 1169393381
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_CanUnequipItem, "CanUnequipItem" }, // 74479736
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_ClearEquipmentSlot, "ClearEquipmentSlot" }, // 3796649577
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_FindEquipmentSlotIndex, "FindEquipmentSlotIndex" }, // 1779897199
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlot, "GetEquipmentSlot" }, // 3451552447
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_GetEquipmentSlotList, "GetEquipmentSlotList" }, // 2927764908
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotActive, "IsEquipmentSlotActive" }, // 1448777264
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotIndexValid, "IsEquipmentSlotIndexValid" }, // 3987769464
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotItemValid, "IsEquipmentSlotItemValid" }, // 310292780
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_IsEquipmentSlotLock, "IsEquipmentSlotLock" }, // 867180641
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_OnEquipmentSlotListRep, "OnEquipmentSlotListRep" }, // 2688063269
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryComponentRep, "OnInventoryComponentRep" }, // 2635349448
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_OnInventoryUpdateItem, "OnInventoryUpdateItem" }, // 513959465
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_RemoveEquipmentSlot, "RemoveEquipmentSlot" }, // 1256144783
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotActive, "SetEquipmentSlotActive" }, // 219615785
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_SetEquipmentSlotLock, "SetEquipmentSlotLock" }, // 1144544977
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_SetInventoryComponent, "SetInventoryComponent" }, // 2329482114
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_TryEquipItem, "TryEquipItem" }, // 2205120096
		{ &Z_Construct_UFunction_ULFPEquipmentComponent_TryUnequipItem, "TryUnequipItem" }, // 147784090
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Item/LFPEquipmentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnEquipItem_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Delegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnEquipItem = { "OnEquipItem", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPEquipmentComponent, OnEquipItem), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnEquipItem_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnEquipItem_MetaData) }; // 413466643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnUnequipItem_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnUnequipItem = { "OnUnequipItem", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPEquipmentComponent, OnUnequipItem), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnUnequipItem_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnUnequipItem_MetaData) }; // 413466643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemActiveChanged_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemActiveChanged = { "OnItemActiveChanged", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPEquipmentComponent, OnItemActiveChanged), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemActiveChanged_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemActiveChanged_MetaData) }; // 3306511240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemLockChanged_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemLockChanged = { "OnItemLockChanged", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPEquipmentComponent, OnItemLockChanged), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnEquipmentChangeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemLockChanged_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemLockChanged_MetaData) }; // 3306511240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_bAutoSetup_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Setting" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_bAutoSetup_SetBit(void* Obj)
	{
		((ULFPEquipmentComponent*)Obj)->bAutoSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_bAutoSetup = { "bAutoSetup", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPEquipmentComponent), &Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_bAutoSetup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_bAutoSetup_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_bAutoSetup_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotList_Inner = { "EquipmentSlotList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPEquipmentSlotData, METADATA_PARAMS(0, nullptr) }; // 778491209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotList_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Cache" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotList = { "EquipmentSlotList", "OnEquipmentSlotListRep", (EPropertyFlags)0x0020080100020021, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPEquipmentComponent, EquipmentSlotList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotList_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotList_MetaData) }; // 778491209
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotConfigList_Inner = { "EquipmentSlotConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig, METADATA_PARAMS(0, nullptr) }; // 1693634580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotConfigList_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Setting" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotConfigList = { "EquipmentSlotConfigList", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPEquipmentComponent, EquipmentSlotConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotConfigList_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotConfigList_MetaData) }; // 1693634580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "LFPEquipmentComponent | Cache" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPEquipmentComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_InventoryComponent = { "InventoryComponent", "OnInventoryComponentRep", (EPropertyFlags)0x00200801000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPEquipmentComponent, InventoryComponent), Z_Construct_UClass_ULFPInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_InventoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPEquipmentComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnEquipItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnUnequipItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemActiveChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_OnItemLockChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_bAutoSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotConfigList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_EquipmentSlotConfigList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPEquipmentComponent_Statics::NewProp_InventoryComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULFPInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(ULFPEquipmentComponent, ILFPInventoryInterface), false },  // 447292040
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPEquipmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPEquipmentComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPEquipmentComponent_Statics::ClassParams = {
		&ULFPEquipmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPEquipmentComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPEquipmentComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPEquipmentComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPEquipmentComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPEquipmentComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPEquipmentComponent.OuterSingleton, Z_Construct_UClass_ULFPEquipmentComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPEquipmentComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<ULFPEquipmentComponent>()
	{
		return ULFPEquipmentComponent::StaticClass();
	}

	void ULFPEquipmentComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquipmentSlotList(TEXT("EquipmentSlotList"));
		static const FName Name_InventoryComponent(TEXT("InventoryComponent"));

		const bool bIsValid = true
			&& Name_EquipmentSlotList == ClassReps[(int32)ENetFields_Private::EquipmentSlotList].Property->GetFName()
			&& Name_InventoryComponent == ClassReps[(int32)ENetFields_Private::InventoryComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULFPEquipmentComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPEquipmentComponent);
	ULFPEquipmentComponent::~ULFPEquipmentComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULFPEquipmentComponent)
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPEquipmentSlotConfig::StaticStruct, Z_Construct_UScriptStruct_FLFPEquipmentSlotConfig_Statics::NewStructOps, TEXT("LFPEquipmentSlotConfig"), &Z_Registration_Info_UScriptStruct_LFPEquipmentSlotConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPEquipmentSlotConfig), 1693634580U) },
		{ FLFPEquipmentSlotData::StaticStruct, Z_Construct_UScriptStruct_FLFPEquipmentSlotData_Statics::NewStructOps, TEXT("LFPEquipmentSlotData"), &Z_Registration_Info_UScriptStruct_LFPEquipmentSlotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPEquipmentSlotData), 778491209U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPEquipmentComponent, ULFPEquipmentComponent::StaticClass, TEXT("ULFPEquipmentComponent"), &Z_Registration_Info_UClass_ULFPEquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPEquipmentComponent), 2338415893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_1511395999(TEXT("/Script/LohFunctionPluginItem"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPEquipmentComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
