// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPluginItem/Public/Item/LFPInventoryComponent.h"
#include "GameplayTagContainer.h"
#include "JsonObjectWrapper.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPInventoryComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPInventoryComponent();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPInventoryComponent_NoRegister();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UScriptStruct* Z_Construct_UScriptStruct_FLFPInventoryItemData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPluginItem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPInventoryItemData;
class UScriptStruct* FLFPInventoryItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPInventoryItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPInventoryItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPInventoryItemData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginItem(), TEXT("LFPInventoryItemData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPInventoryItemData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<FLFPInventoryItemData>()
{
	return FLFPInventoryItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPInventoryItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "LFPInventorySlotData" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInventoryItemData, MetaData), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_MetaData_MetaData), Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_MetaData_MetaData) }; // 3346433754
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "LFPInventorySlotData" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPInventoryItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_ItemName_MetaData), Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_ItemName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewProp_ItemName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
		nullptr,
		&NewStructOps,
		"LFPInventoryItemData",
		Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::PropPointers),
		sizeof(FLFPInventoryItemData),
		alignof(FLFPInventoryItemData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPInventoryItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPInventoryItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPInventoryItemData.InnerSingleton, Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPInventoryItemData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPluginItem_eventOnItemEvent_Parms
		{
			FLFPInventoryItemData ItemData;
			int32 SlotIndex;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnItemEvent_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnItemEvent_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnItemEvent_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnItemEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnItemEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnItemEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnItemEvent, FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo)
{
	struct _Script_LohFunctionPluginItem_eventOnItemEvent_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 SlotIndex;
		FString EventInfo;
	};
	_Script_LohFunctionPluginItem_eventOnItemEvent_Parms Parms;
	Parms.ItemData=ItemData;
	Parms.SlotIndex=SlotIndex;
	Parms.EventInfo=EventInfo;
	OnItemEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_OldItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_OldItemData = { "OldItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms, OldItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_OldItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_OldItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_NewItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms, NewItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_NewItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_NewItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_OldItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_NewItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnUpdateItemEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUpdateItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateItemEvent, FLFPInventoryItemData const& OldItemData, FLFPInventoryItemData const& NewItemData, const int32 SlotIndex, const FString& EventInfo)
{
	struct _Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms
	{
		FLFPInventoryItemData OldItemData;
		FLFPInventoryItemData NewItemData;
		int32 SlotIndex;
		FString EventInfo;
	};
	_Script_LohFunctionPluginItem_eventOnUpdateItemEvent_Parms Parms;
	Parms.OldItemData=OldItemData;
	Parms.NewItemData=NewItemData;
	Parms.SlotIndex=SlotIndex;
	Parms.EventInfo=EventInfo;
	OnUpdateItemEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms
		{
			FLFPInventoryItemData FromItemData;
			int32 FromSlot;
			FLFPInventoryItemData ToItemData;
			int32 ToSlot;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToSlot;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromItemData = { "FromItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms, FromItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromSlot = { "FromSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms, FromSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromSlot_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToItemData = { "ToItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms, ToItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToSlot = { "ToSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms, ToSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToSlot_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_FromSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_ToSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnSwapItemEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSwapItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSwapItemEvent, FLFPInventoryItemData const& FromItemData, const int32 FromSlot, FLFPInventoryItemData const& ToItemData, const int32 ToSlot, const FString& EventInfo)
{
	struct _Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms
	{
		FLFPInventoryItemData FromItemData;
		int32 FromSlot;
		FLFPInventoryItemData ToItemData;
		int32 ToSlot;
		FString EventInfo;
	};
	_Script_LohFunctionPluginItem_eventOnSwapItemEvent_Parms Parms;
	Parms.FromItemData=FromItemData;
	Parms.FromSlot=FromSlot;
	Parms.ToItemData=ToItemData;
	Parms.ToSlot=ToSlot;
	Parms.EventInfo=EventInfo;
	OnSwapItemEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnItemFunctionEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemFunctionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnItemFunctionEvent)
{
	OnItemFunctionEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ULFPInventoryComponent::execGetInventorySlotList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLFPInventoryItemData>*)Z_Param__Result=P_THIS->GetInventorySlotList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execGetInventorySlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPInventoryItemData*)Z_Param__Result=P_THIS->GetInventorySlot(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execFindItemListWithItemName)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_ItemIndexList);
		P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindItemListWithItemName(Z_Param_Out_ItemIndexList,Z_Param_ItemName,Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execFindItemListWithTag)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_SlotList);
		P_GET_STRUCT(FGameplayTag,Z_Param_SlotTag);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindItemListWithTag(Z_Param_Out_SlotList,Z_Param_SlotTag,Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execFindInventorySlotWithName)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_SlotList);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindInventorySlotWithName(Z_Param_Out_SlotList,Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execFindInventorySlotOffsetWithName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindInventorySlotOffsetWithName(Z_Param_SlotName,Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execFindAvailableInventorySlot)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_SlotList);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ForItem);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindAvailableInventorySlot(Z_Param_Out_SlotList,Z_Param_Out_ForItem,Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execHaveItemsAtSlotName)
	{
		P_GET_TARRAY_REF(FLFPInventoryItemData,Z_Param_Out_ItemList);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveItemsAtSlotName(Z_Param_Out_ItemList,Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execIsInventorySlotHasName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInventorySlotHasName(Z_Param_Index,Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execHasInventorySlotName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasInventorySlotName(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execIsInventorySlotItemSame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexA);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInventorySlotItemSame(Z_Param_IndexA,Z_Param_IndexB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execIsInventorySlotItemValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInventorySlotItemValid(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execIsInventorySlotIndexValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInventorySlotIndexValid(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execOnInventorySlotItemListRep)
	{
		P_GET_TARRAY_REF(FLFPInventoryItemData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInventorySlotItemListRep_Implementation(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execIsInventorySlotHasTag)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SlotIndex);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SlotTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInventorySlotHasTag_Implementation(Z_Param_Out_SlotIndex,Z_Param_Out_SlotTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execIsInventorySlotAvailable)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SlotIndex);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_SlotItem);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ForItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInventorySlotAvailable_Implementation(Z_Param_Out_SlotIndex,Z_Param_Out_SlotItem,Z_Param_Out_ForItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execIsItemSortPriorityHigher)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemDataA);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemDataB);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsItemSortPriorityHigher_Implementation(Z_Param_Out_ItemDataA,Z_Param_Out_ItemDataB,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execProcessSwapItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemDataA);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndexA);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemDataB);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndexB);
		P_GET_UBOOL(Z_Param_bMultipleSwap);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessSwapItem_Implementation(Z_Param_Out_ItemDataA,Z_Param_SlotIndexA,Z_Param_Out_ItemDataB,Z_Param_SlotIndexB,Z_Param_bMultipleSwap,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execProcessRemoveItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_CurrentItemData);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_RemoveItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessRemoveItem_Implementation(Z_Param_Out_CurrentItemData,Z_Param_Out_RemoveItemData,Z_Param_SlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execProcessAddItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_CurrentItemData);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_AddItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProcessAddItem_Implementation(Z_Param_Out_CurrentItemData,Z_Param_Out_AddItemData,Z_Param_SlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execCanSwapItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_FromItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_FromSlot);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ToItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_ToSlot);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSwapItem_Implementation(Z_Param_Out_FromItemData,Z_Param_FromSlot,Z_Param_Out_ToItemData,Z_Param_ToSlot,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execCanRemoveItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRemoveItem_Implementation(Z_Param_Out_ItemData,Z_Param_SlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execCanAddItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddItem_Implementation(Z_Param_Out_ItemData,Z_Param_SlotIndex,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execTrimInventorySlotList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrimInventorySlotList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execSortInventory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Slotname);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortInventory(Z_Param_Slotname,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execTransferItem)
	{
		P_GET_OBJECT(ULFPInventoryComponent,Z_Param_ToInventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_FromSlotIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_FromSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ToSlotIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_ToSlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransferItem(Z_Param_ToInventory,Z_Param_FromSlotIndex,Z_Param_FromSlotName,Z_Param_ToSlotIndex,Z_Param_ToSlotName,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execSwapItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FromSlotIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_FromSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_ToSlotIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_ToSlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwapItem(Z_Param_FromSlotIndex,Z_Param_FromSlotName,Z_Param_ToSlotIndex,Z_Param_ToSlotName,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execClearInventory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInventory(Z_Param_SlotName,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execRemoveItemList)
	{
		P_GET_TARRAY_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FNameProperty,Z_Param_Slotname);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItemList(Z_Param_Out_ItemData,Z_Param_Slotname,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execRemoveItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_Slotname);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_Out_ItemData,Z_Param_SlotIndex,Z_Param_Slotname,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execAddItemList)
	{
		P_GET_TARRAY_REF(FLFPInventoryItemData,Z_Param_Out_ItemDataList);
		P_GET_PROPERTY(FNameProperty,Z_Param_Slotname);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemList(Z_Param_Out_ItemDataList,Z_Param_Slotname,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execAddItem)
	{
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_Slotname);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Out_ItemData,Z_Param_SlotIndex,Z_Param_Slotname,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPInventoryComponent::execBroadcastItemEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_OldItemData);
		P_GET_STRUCT_REF(FLFPInventoryItemData,Z_Param_Out_NewItemData);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastItemEvent(Z_Param_SlotIndex,Z_Param_Out_OldItemData,Z_Param_Out_NewItemData,Z_Param_EventInfo);
		P_NATIVE_END;
	}
	struct LFPInventoryComponent_eventCanAddItem_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 SlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventCanAddItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventCanRemoveItem_Parms
	{
		FLFPInventoryItemData ItemData;
		int32 SlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventCanRemoveItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventCanSwapItem_Parms
	{
		FLFPInventoryItemData FromItemData;
		int32 FromSlot;
		FLFPInventoryItemData ToItemData;
		int32 ToSlot;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventCanSwapItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventIsInventorySlotAvailable_Parms
	{
		int32 SlotIndex;
		FLFPInventoryItemData SlotItem;
		FLFPInventoryItemData ForItem;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventIsInventorySlotAvailable_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventIsInventorySlotHasTag_Parms
	{
		int32 SlotIndex;
		FGameplayTag SlotTag;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventIsInventorySlotHasTag_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms
	{
		FLFPInventoryItemData ItemDataA;
		FLFPInventoryItemData ItemDataB;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventOnInventorySlotItemListRep_Parms
	{
		TArray<FLFPInventoryItemData> OldValue;
	};
	struct LFPInventoryComponent_eventProcessAddItem_Parms
	{
		FLFPInventoryItemData CurrentItemData;
		FLFPInventoryItemData AddItemData;
		int32 SlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventProcessAddItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventProcessRemoveItem_Parms
	{
		FLFPInventoryItemData CurrentItemData;
		FLFPInventoryItemData RemoveItemData;
		int32 SlotIndex;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventProcessRemoveItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPInventoryComponent_eventProcessSwapItem_Parms
	{
		FLFPInventoryItemData ItemDataA;
		int32 SlotIndexA;
		FLFPInventoryItemData ItemDataB;
		int32 SlotIndexB;
		bool bMultipleSwap;
		FString EventInfo;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPInventoryComponent_eventProcessSwapItem_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_ULFPInventoryComponent_CanAddItem = FName(TEXT("CanAddItem"));
	bool ULFPInventoryComponent::CanAddItem(FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo) const
	{
		LFPInventoryComponent_eventCanAddItem_Parms Parms;
		Parms.ItemData=ItemData;
		Parms.SlotIndex=SlotIndex;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_CanAddItem),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_CanRemoveItem = FName(TEXT("CanRemoveItem"));
	bool ULFPInventoryComponent::CanRemoveItem(FLFPInventoryItemData const& ItemData, const int32 SlotIndex, const FString& EventInfo) const
	{
		LFPInventoryComponent_eventCanRemoveItem_Parms Parms;
		Parms.ItemData=ItemData;
		Parms.SlotIndex=SlotIndex;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_CanRemoveItem),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_CanSwapItem = FName(TEXT("CanSwapItem"));
	bool ULFPInventoryComponent::CanSwapItem(FLFPInventoryItemData const& FromItemData, const int32 FromSlot, FLFPInventoryItemData const& ToItemData, const int32 ToSlot, const FString& EventInfo) const
	{
		LFPInventoryComponent_eventCanSwapItem_Parms Parms;
		Parms.FromItemData=FromItemData;
		Parms.FromSlot=FromSlot;
		Parms.ToItemData=ToItemData;
		Parms.ToSlot=ToSlot;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_CanSwapItem),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_IsInventorySlotAvailable = FName(TEXT("IsInventorySlotAvailable"));
	bool ULFPInventoryComponent::IsInventorySlotAvailable(int32 const& SlotIndex, FLFPInventoryItemData const& SlotItem, FLFPInventoryItemData const& ForItem) const
	{
		LFPInventoryComponent_eventIsInventorySlotAvailable_Parms Parms;
		Parms.SlotIndex=SlotIndex;
		Parms.SlotItem=SlotItem;
		Parms.ForItem=ForItem;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_IsInventorySlotAvailable),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_IsInventorySlotHasTag = FName(TEXT("IsInventorySlotHasTag"));
	bool ULFPInventoryComponent::IsInventorySlotHasTag(int32 const& SlotIndex, FGameplayTag const& SlotTag) const
	{
		LFPInventoryComponent_eventIsInventorySlotHasTag_Parms Parms;
		Parms.SlotIndex=SlotIndex;
		Parms.SlotTag=SlotTag;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_IsInventorySlotHasTag),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_IsItemSortPriorityHigher = FName(TEXT("IsItemSortPriorityHigher"));
	bool ULFPInventoryComponent::IsItemSortPriorityHigher(FLFPInventoryItemData const& ItemDataA, FLFPInventoryItemData const& ItemDataB, const FString& EventInfo) const
	{
		LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms Parms;
		Parms.ItemDataA=ItemDataA;
		Parms.ItemDataB=ItemDataB;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_IsItemSortPriorityHigher),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_OnInventorySlotItemListRep = FName(TEXT("OnInventorySlotItemListRep"));
	void ULFPInventoryComponent::OnInventorySlotItemListRep(TArray<FLFPInventoryItemData> const& OldValue)
	{
		LFPInventoryComponent_eventOnInventorySlotItemListRep_Parms Parms;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_OnInventorySlotItemListRep),&Parms);
	}
	static FName NAME_ULFPInventoryComponent_ProcessAddItem = FName(TEXT("ProcessAddItem"));
	bool ULFPInventoryComponent::ProcessAddItem(FLFPInventoryItemData& CurrentItemData, FLFPInventoryItemData& AddItemData, const int32 SlotIndex, const FString& EventInfo) const
	{
		LFPInventoryComponent_eventProcessAddItem_Parms Parms;
		Parms.CurrentItemData=CurrentItemData;
		Parms.AddItemData=AddItemData;
		Parms.SlotIndex=SlotIndex;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_ProcessAddItem),&Parms);
		CurrentItemData=Parms.CurrentItemData;
		AddItemData=Parms.AddItemData;
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_ProcessRemoveItem = FName(TEXT("ProcessRemoveItem"));
	bool ULFPInventoryComponent::ProcessRemoveItem(FLFPInventoryItemData& CurrentItemData, FLFPInventoryItemData& RemoveItemData, const int32 SlotIndex, const FString& EventInfo) const
	{
		LFPInventoryComponent_eventProcessRemoveItem_Parms Parms;
		Parms.CurrentItemData=CurrentItemData;
		Parms.RemoveItemData=RemoveItemData;
		Parms.SlotIndex=SlotIndex;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_ProcessRemoveItem),&Parms);
		CurrentItemData=Parms.CurrentItemData;
		RemoveItemData=Parms.RemoveItemData;
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPInventoryComponent_ProcessSwapItem = FName(TEXT("ProcessSwapItem"));
	bool ULFPInventoryComponent::ProcessSwapItem(FLFPInventoryItemData& ItemDataA, const int32 SlotIndexA, FLFPInventoryItemData& ItemDataB, const int32 SlotIndexB, bool bMultipleSwap, const FString& EventInfo) const
	{
		LFPInventoryComponent_eventProcessSwapItem_Parms Parms;
		Parms.ItemDataA=ItemDataA;
		Parms.SlotIndexA=SlotIndexA;
		Parms.ItemDataB=ItemDataB;
		Parms.SlotIndexB=SlotIndexB;
		Parms.bMultipleSwap=bMultipleSwap ? true : false;
		Parms.EventInfo=EventInfo;
		const_cast<ULFPInventoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPInventoryComponent_ProcessSwapItem),&Parms);
		ItemDataA=Parms.ItemDataA;
		ItemDataB=Parms.ItemDataB;
		return !!Parms.ReturnValue;
	}
	void ULFPInventoryComponent::StaticRegisterNativesULFPInventoryComponent()
	{
		UClass* Class = ULFPInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &ULFPInventoryComponent::execAddItem },
			{ "AddItemList", &ULFPInventoryComponent::execAddItemList },
			{ "BroadcastItemEvent", &ULFPInventoryComponent::execBroadcastItemEvent },
			{ "CanAddItem", &ULFPInventoryComponent::execCanAddItem },
			{ "CanRemoveItem", &ULFPInventoryComponent::execCanRemoveItem },
			{ "CanSwapItem", &ULFPInventoryComponent::execCanSwapItem },
			{ "ClearInventory", &ULFPInventoryComponent::execClearInventory },
			{ "FindAvailableInventorySlot", &ULFPInventoryComponent::execFindAvailableInventorySlot },
			{ "FindInventorySlotOffsetWithName", &ULFPInventoryComponent::execFindInventorySlotOffsetWithName },
			{ "FindInventorySlotWithName", &ULFPInventoryComponent::execFindInventorySlotWithName },
			{ "FindItemListWithItemName", &ULFPInventoryComponent::execFindItemListWithItemName },
			{ "FindItemListWithTag", &ULFPInventoryComponent::execFindItemListWithTag },
			{ "GetInventorySlot", &ULFPInventoryComponent::execGetInventorySlot },
			{ "GetInventorySlotList", &ULFPInventoryComponent::execGetInventorySlotList },
			{ "HasInventorySlotName", &ULFPInventoryComponent::execHasInventorySlotName },
			{ "HaveItemsAtSlotName", &ULFPInventoryComponent::execHaveItemsAtSlotName },
			{ "IsInventorySlotAvailable", &ULFPInventoryComponent::execIsInventorySlotAvailable },
			{ "IsInventorySlotHasName", &ULFPInventoryComponent::execIsInventorySlotHasName },
			{ "IsInventorySlotHasTag", &ULFPInventoryComponent::execIsInventorySlotHasTag },
			{ "IsInventorySlotIndexValid", &ULFPInventoryComponent::execIsInventorySlotIndexValid },
			{ "IsInventorySlotItemSame", &ULFPInventoryComponent::execIsInventorySlotItemSame },
			{ "IsInventorySlotItemValid", &ULFPInventoryComponent::execIsInventorySlotItemValid },
			{ "IsItemSortPriorityHigher", &ULFPInventoryComponent::execIsItemSortPriorityHigher },
			{ "OnInventorySlotItemListRep", &ULFPInventoryComponent::execOnInventorySlotItemListRep },
			{ "ProcessAddItem", &ULFPInventoryComponent::execProcessAddItem },
			{ "ProcessRemoveItem", &ULFPInventoryComponent::execProcessRemoveItem },
			{ "ProcessSwapItem", &ULFPInventoryComponent::execProcessSwapItem },
			{ "RemoveItem", &ULFPInventoryComponent::execRemoveItem },
			{ "RemoveItemList", &ULFPInventoryComponent::execRemoveItemList },
			{ "SortInventory", &ULFPInventoryComponent::execSortInventory },
			{ "SwapItem", &ULFPInventoryComponent::execSwapItem },
			{ "TransferItem", &ULFPInventoryComponent::execTransferItem },
			{ "TrimInventorySlotList", &ULFPInventoryComponent::execTrimInventorySlotList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics
	{
		struct LFPInventoryComponent_eventAddItem_Parms
		{
			FLFPInventoryItemData ItemData;
			int32 SlotIndex;
			FName Slotname;
			FString EventInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventAddItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventAddItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_Slotname_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_Slotname = { "Slotname", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventAddItem_Parms, Slotname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_Slotname_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_Slotname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventAddItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventAddItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_Slotname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Add item to inventory\n\x09* @param ItemData Item Data to add to inventory or equipment\n\x09* @param SlotIndex Index on where the item has been added or update and what is leave of the item added\n\x09* @param SlotName What Slot Are Use On This Function\n\x09* @param EventInfo Info to pass to trigger event\n\x09* @return Some item has been added to inventory\n\x09*/" },
#endif
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_Slotname", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add item to inventory\n@param ItemData Item Data to add to inventory or equipment\n@param SlotIndex Index on where the item has been added or update and what is leave of the item added\n@param SlotName What Slot Are Use On This Function\n@param EventInfo Info to pass to trigger event\n@return Some item has been added to inventory" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::LFPInventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::LFPInventoryComponent_eventAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics
	{
		struct LFPInventoryComponent_eventAddItemList_Parms
		{
			TArray<FLFPInventoryItemData> ItemDataList;
			FName Slotname;
			FString EventInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDataList;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ItemDataList_Inner = { "ItemDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ItemDataList = { "ItemDataList", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventAddItemList_Parms, ItemDataList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_Slotname_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_Slotname = { "Slotname", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventAddItemList_Parms, Slotname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_Slotname_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_Slotname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventAddItemList_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventAddItemList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventAddItemList_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ItemDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ItemDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_Slotname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_Slotname", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "AddItemList", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::LFPInventoryComponent_eventAddItemList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::LFPInventoryComponent_eventAddItemList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_AddItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_AddItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics
	{
		struct LFPInventoryComponent_eventBroadcastItemEvent_Parms
		{
			int32 SlotIndex;
			FLFPInventoryItemData OldItemData;
			FLFPInventoryItemData NewItemData;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewItemData;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventBroadcastItemEvent_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_OldItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_OldItemData = { "OldItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventBroadcastItemEvent_Parms, OldItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_OldItemData_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_OldItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_NewItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventBroadcastItemEvent_Parms, NewItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_NewItemData_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_NewItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventBroadcastItemEvent_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_OldItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_NewItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "BroadcastItemEvent", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::LFPInventoryComponent_eventBroadcastItemEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::LFPInventoryComponent_eventBroadcastItemEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanAddItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ItemData_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanAddItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanAddItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventCanAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventCanAddItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "CanAddItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::PropPointers), sizeof(LFPInventoryComponent_eventCanAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventCanAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanRemoveItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ItemData_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanRemoveItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanRemoveItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventCanRemoveItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventCanRemoveItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "CanRemoveItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::PropPointers), sizeof(LFPInventoryComponent_eventCanRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventCanRemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToSlot;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromItemData = { "FromItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanSwapItem_Parms, FromItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromItemData_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromSlot = { "FromSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanSwapItem_Parms, FromSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromSlot_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToItemData = { "ToItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanSwapItem_Parms, ToItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToItemData_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToItemData_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToSlot = { "ToSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanSwapItem_Parms, ToSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToSlot_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventCanSwapItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventCanSwapItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventCanSwapItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_FromSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ToSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "CanSwapItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::PropPointers), sizeof(LFPInventoryComponent_eventCanSwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventCanSwapItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics
	{
		struct LFPInventoryComponent_eventClearInventory_Parms
		{
			FName SlotName;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventClearInventory_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_SlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventClearInventory_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Remove All item From inventory\n\x09* @param SlotName What Slot Are Use On This Function\n\x09*/" },
#endif
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_SlotName", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove All item From inventory\n@param SlotName What Slot Are Use On This Function" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "ClearInventory", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::LFPInventoryComponent_eventClearInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::LFPInventoryComponent_eventClearInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics
	{
		struct LFPInventoryComponent_eventFindAvailableInventorySlot_Parms
		{
			TArray<int32> SlotList;
			FLFPInventoryItemData ForItem;
			FName SlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotList_Inner = { "SlotList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotList = { "SlotList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindAvailableInventorySlot_Parms, SlotList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ForItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ForItem = { "ForItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindAvailableInventorySlot_Parms, ForItem), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ForItem_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ForItem_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindAvailableInventorySlot_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventFindAvailableInventorySlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventFindAvailableInventorySlot_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ForItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Find Empty Or Available Inventory Slot\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Empty Or Available Inventory Slot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "FindAvailableInventorySlot", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::LFPInventoryComponent_eventFindAvailableInventorySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::LFPInventoryComponent_eventFindAvailableInventorySlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics
	{
		struct LFPInventoryComponent_eventFindInventorySlotOffsetWithName_Parms
		{
			FName SlotName;
			int32 SlotIndex;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindInventorySlotOffsetWithName_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindInventorySlotOffsetWithName_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindInventorySlotOffsetWithName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Find Slot Index Within Slot Name Range\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Slot Index Within Slot Name Range" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "FindInventorySlotOffsetWithName", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::LFPInventoryComponent_eventFindInventorySlotOffsetWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::LFPInventoryComponent_eventFindInventorySlotOffsetWithName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics
	{
		struct LFPInventoryComponent_eventFindInventorySlotWithName_Parms
		{
			TArray<int32> SlotList;
			FName SlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotList_Inner = { "SlotList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotList = { "SlotList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindInventorySlotWithName_Parms, SlotList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindInventorySlotWithName_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventFindInventorySlotWithName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventFindInventorySlotWithName_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Find Inventory Slot Using Slot Name Defined On (InventorySlotNameList) variable\n\x09* Suitable To Using For Getting Slot Based On Slot Type\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Inventory Slot Using Slot Name Defined On (InventorySlotNameList) variable\nSuitable To Using For Getting Slot Based On Slot Type" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "FindInventorySlotWithName", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::LFPInventoryComponent_eventFindInventorySlotWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::LFPInventoryComponent_eventFindInventorySlotWithName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics
	{
		struct LFPInventoryComponent_eventFindItemListWithItemName_Parms
		{
			TArray<int32> ItemIndexList;
			FName ItemName;
			FName SlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndexList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemIndexList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemIndexList_Inner = { "ItemIndexList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemIndexList = { "ItemIndexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindItemListWithItemName_Parms, ItemIndexList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindItemListWithItemName_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindItemListWithItemName_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventFindItemListWithItemName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventFindItemListWithItemName_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemIndexList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemIndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Find Items Using Item Name \n\x09* Suitable To Using For Getting Multiple Same Item\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Items Using Item Name\nSuitable To Using For Getting Multiple Same Item" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "FindItemListWithItemName", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::LFPInventoryComponent_eventFindItemListWithItemName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::LFPInventoryComponent_eventFindItemListWithItemName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics
	{
		struct LFPInventoryComponent_eventFindItemListWithTag_Parms
		{
			TArray<int32> SlotList;
			FGameplayTag SlotTag;
			FName SlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotList_Inner = { "SlotList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotList = { "SlotList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindItemListWithTag_Parms, SlotList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindItemListWithTag_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotTag_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventFindItemListWithTag_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventFindItemListWithTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventFindItemListWithTag_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Find Items Using Gameplay Tag \n\x09* Suitable To Using For Getting Item Based On Categorize\n\x09* Please Override (IsInventorySlotHasTag) To Use This Function \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Items Using Gameplay Tag\nSuitable To Using For Getting Item Based On Categorize\nPlease Override (IsInventorySlotHasTag) To Use This Function" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "FindItemListWithTag", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::LFPInventoryComponent_eventFindItemListWithTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::LFPInventoryComponent_eventFindItemListWithTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics
	{
		struct LFPInventoryComponent_eventGetInventorySlot_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventGetInventorySlot_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventGetInventorySlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_ReturnValue_MetaData) }; // 2821161623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "GetInventorySlot", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::LFPInventoryComponent_eventGetInventorySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::LFPInventoryComponent_eventGetInventorySlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics
	{
		struct LFPInventoryComponent_eventGetInventorySlotList_Parms
		{
			TArray<FLFPInventoryItemData> ReturnValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventGetInventorySlotList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::NewProp_ReturnValue_MetaData) }; // 2821161623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "GetInventorySlotList", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::LFPInventoryComponent_eventGetInventorySlotList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::LFPInventoryComponent_eventGetInventorySlotList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics
	{
		struct LFPInventoryComponent_eventHasInventorySlotName_Parms
		{
			FName SlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventHasInventorySlotName_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventHasInventorySlotName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventHasInventorySlotName_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Valid Checker" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "HasInventorySlotName", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::LFPInventoryComponent_eventHasInventorySlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::LFPInventoryComponent_eventHasInventorySlotName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics
	{
		struct LFPInventoryComponent_eventHaveItemsAtSlotName_Parms
		{
			TArray<FLFPInventoryItemData> ItemList;
			FName SlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ItemList_Inner = { "ItemList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ItemList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ItemList = { "ItemList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventHaveItemsAtSlotName_Parms, ItemList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ItemList_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ItemList_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventHaveItemsAtSlotName_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventHaveItemsAtSlotName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventHaveItemsAtSlotName_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ItemList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ItemList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "HaveItemsAtSlotName", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::LFPInventoryComponent_eventHaveItemsAtSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::LFPInventoryComponent_eventHaveItemsAtSlotName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotAvailable_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotItem = { "SlotItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotAvailable_Parms, SlotItem), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotItem_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotItem_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ForItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ForItem = { "ForItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotAvailable_Parms, ForItem), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ForItem_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ForItem_MetaData) }; // 2821161623
	void Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventIsInventorySlotAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventIsInventorySlotAvailable_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_SlotItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ForItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "IsInventorySlotAvailable", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::PropPointers), sizeof(LFPInventoryComponent_eventIsInventorySlotAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventIsInventorySlotAvailable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics
	{
		struct LFPInventoryComponent_eventIsInventorySlotHasName_Parms
		{
			int32 Index;
			FName SlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotHasName_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotHasName_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_SlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_SlotName_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventIsInventorySlotHasName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventIsInventorySlotHasName_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Valid Checker" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "IsInventorySlotHasName", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::LFPInventoryComponent_eventIsInventorySlotHasName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::LFPInventoryComponent_eventIsInventorySlotHasName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotHasTag_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotHasTag_Parms, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotTag_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotTag_MetaData) }; // 2083603574
	void Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventIsInventorySlotHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventIsInventorySlotHasTag_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_SlotTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "IsInventorySlotHasTag", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::PropPointers), sizeof(LFPInventoryComponent_eventIsInventorySlotHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventIsInventorySlotHasTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics
	{
		struct LFPInventoryComponent_eventIsInventorySlotIndexValid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotIndexValid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventIsInventorySlotIndexValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventIsInventorySlotIndexValid_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Valid Checker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Valid Checker\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valid Checker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "IsInventorySlotIndexValid", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::LFPInventoryComponent_eventIsInventorySlotIndexValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::LFPInventoryComponent_eventIsInventorySlotIndexValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics
	{
		struct LFPInventoryComponent_eventIsInventorySlotItemSame_Parms
		{
			int32 IndexA;
			int32 IndexB;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexA = { "IndexA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotItemSame_Parms, IndexA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexA_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexB = { "IndexB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotItemSame_Parms, IndexB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexB_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexB_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventIsInventorySlotItemSame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventIsInventorySlotItemSame_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_IndexB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Valid Checker" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "IsInventorySlotItemSame", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::LFPInventoryComponent_eventIsInventorySlotItemSame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::LFPInventoryComponent_eventIsInventorySlotItemSame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics
	{
		struct LFPInventoryComponent_eventIsInventorySlotItemValid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsInventorySlotItemValid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventIsInventorySlotItemValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventIsInventorySlotItemValid_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Valid Checker" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "IsInventorySlotItemValid", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::LFPInventoryComponent_eventIsInventorySlotItemValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::LFPInventoryComponent_eventIsInventorySlotItemValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataB;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataA = { "ItemDataA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms, ItemDataA), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataA_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataA_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataB = { "ItemDataB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms, ItemDataB), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataB_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataB_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ItemDataB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "IsItemSortPriorityHigher", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::PropPointers), sizeof(LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventIsItemSortPriorityHigher_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::NewProp_OldValue_Inner = { "OldValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventOnInventorySlotItemListRep_Parms, OldValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::NewProp_OldValue_MetaData) }; // 2821161623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::NewProp_OldValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "OnInventorySlotItemListRep", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::PropPointers), sizeof(LFPInventoryComponent_eventOnInventorySlotItemListRep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventOnInventorySlotItemListRep_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentItemData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_CurrentItemData = { "CurrentItemData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessAddItem_Parms, CurrentItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_AddItemData = { "AddItemData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessAddItem_Parms, AddItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessAddItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessAddItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventProcessAddItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventProcessAddItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_CurrentItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_AddItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @param CurrentItemData The Item Currently On The Slot Under Process\n\x09* @param AddItemData The Item That Need To Be Add\n\x09* @param SlotIndex What Index This Slot In Inventory\n\x09* @param EventInfo Info to pass to trigger event\n\x09* @return Is The Process Completed And Stop Iteracte Next Slot\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param CurrentItemData The Item Currently On The Slot Under Process\n@param AddItemData The Item That Need To Be Add\n@param SlotIndex What Index This Slot In Inventory\n@param EventInfo Info to pass to trigger event\n@return Is The Process Completed And Stop Iteracte Next Slot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "ProcessAddItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::PropPointers), sizeof(LFPInventoryComponent_eventProcessAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventProcessAddItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentItemData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_CurrentItemData = { "CurrentItemData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessRemoveItem_Parms, CurrentItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_RemoveItemData = { "RemoveItemData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessRemoveItem_Parms, RemoveItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessRemoveItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessRemoveItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventProcessRemoveItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventProcessRemoveItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_CurrentItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_RemoveItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @param CurrentItemData The Item Currently On The Slot Under Process\n\x09* @param RemoveItemData The Item That Need To Be Remove\n\x09* @param SlotIndex What Index This Slot In Inventory\n\x09* @param EventInfo Info to pass to trigger event\n\x09* @return Is The Process Completed And Stop Iteracte Next Slot\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param CurrentItemData The Item Currently On The Slot Under Process\n@param RemoveItemData The Item That Need To Be Remove\n@param SlotIndex What Index This Slot In Inventory\n@param EventInfo Info to pass to trigger event\n@return Is The Process Completed And Stop Iteracte Next Slot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "ProcessRemoveItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::PropPointers), sizeof(LFPInventoryComponent_eventProcessRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventProcessRemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndexA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndexA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemDataB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndexB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndexB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultipleSwap_MetaData[];
#endif
		static void NewProp_bMultipleSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultipleSwap;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ItemDataA = { "ItemDataA", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessSwapItem_Parms, ItemDataA), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexA = { "SlotIndexA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessSwapItem_Parms, SlotIndexA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexA_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexA_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ItemDataB = { "ItemDataB", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessSwapItem_Parms, ItemDataB), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexB = { "SlotIndexB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessSwapItem_Parms, SlotIndexB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexB_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_bMultipleSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_bMultipleSwap_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventProcessSwapItem_Parms*)Obj)->bMultipleSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_bMultipleSwap = { "bMultipleSwap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventProcessSwapItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_bMultipleSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_bMultipleSwap_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_bMultipleSwap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventProcessSwapItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventProcessSwapItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventProcessSwapItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ItemDataA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ItemDataB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_SlotIndexB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_bMultipleSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "ProcessSwapItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::PropPointers), sizeof(LFPInventoryComponent_eventProcessSwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPInventoryComponent_eventProcessSwapItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics
	{
		struct LFPInventoryComponent_eventRemoveItem_Parms
		{
			FLFPInventoryItemData ItemData;
			int32 SlotIndex;
			FName Slotname;
			FString EventInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventRemoveItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventRemoveItem_Parms, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_SlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_SlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_Slotname_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_Slotname = { "Slotname", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventRemoveItem_Parms, Slotname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_Slotname_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_Slotname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventRemoveItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventRemoveItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_Slotname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Remove item From inventory\n\x09* @param ItemData Item Data that got removed from inventory or equipment\n\x09* @param SlotIndex Index on where the item has been added or update and what is leave of the item removed\n\x09* @param SlotName What Slot Are Use On This Function\n\x09* @param EventInfo Info to pass to trigger event\n\x09* @return Some item has been Removed from inventory\n\x09*/" },
#endif
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_Slotname", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove item From inventory\n@param ItemData Item Data that got removed from inventory or equipment\n@param SlotIndex Index on where the item has been added or update and what is leave of the item removed\n@param SlotName What Slot Are Use On This Function\n@param EventInfo Info to pass to trigger event\n@return Some item has been Removed from inventory" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::LFPInventoryComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::LFPInventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics
	{
		struct LFPInventoryComponent_eventRemoveItemList_Parms
		{
			TArray<FLFPInventoryItemData> ItemData;
			FName Slotname;
			FString EventInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemData;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ItemData_Inner = { "ItemData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventRemoveItemList_Parms, ItemData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_Slotname_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_Slotname = { "Slotname", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventRemoveItemList_Parms, Slotname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_Slotname_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_Slotname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventRemoveItemList_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventRemoveItemList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventRemoveItemList_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ItemData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_Slotname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_Slotname", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "RemoveItemList", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::LFPInventoryComponent_eventRemoveItemList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::LFPInventoryComponent_eventRemoveItemList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics
	{
		struct LFPInventoryComponent_eventSortInventory_Parms
		{
			FName Slotname;
			FString EventInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slotname_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Slotname;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_Slotname_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_Slotname = { "Slotname", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventSortInventory_Parms, Slotname), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_Slotname_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_Slotname_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventSortInventory_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_EventInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_Slotname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::NewProp_EventInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sort inventory using sort function\n\x09* @param EventInfo Info to pass to trigger event\n\x09*/" },
#endif
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_Slotname", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sort inventory using sort function\n@param EventInfo Info to pass to trigger event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "SortInventory", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::LFPInventoryComponent_eventSortInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::LFPInventoryComponent_eventSortInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_SortInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_SortInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics
	{
		struct LFPInventoryComponent_eventSwapItem_Parms
		{
			int32 FromSlotIndex;
			FName FromSlotName;
			int32 ToSlotIndex;
			FName ToSlotName;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToSlotName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotIndex = { "FromSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventSwapItem_Parms, FromSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotName = { "FromSlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventSwapItem_Parms, FromSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotIndex = { "ToSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventSwapItem_Parms, ToSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotName = { "ToSlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventSwapItem_Parms, ToSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventSwapItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventSwapItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventSwapItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_FromSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ToSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Swap Item In Inventory\n\x09* @param FromSlot From other inventory slot\n\x09* @param ToSlot To this inventory slot\n\x09* @param EventInfo Info to pass to trigger event\n\x09*/" },
#endif
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_FromSlotName", "All" },
		{ "CPP_Default_ToSlotIndex", "-1" },
		{ "CPP_Default_ToSlotName", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Swap Item In Inventory\n@param FromSlot From other inventory slot\n@param ToSlot To this inventory slot\n@param EventInfo Info to pass to trigger event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "SwapItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::LFPInventoryComponent_eventSwapItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::LFPInventoryComponent_eventSwapItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_SwapItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_SwapItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics
	{
		struct LFPInventoryComponent_eventTransferItem_Parms
		{
			ULFPInventoryComponent* ToInventory;
			int32 FromSlotIndex;
			FName FromSlotName;
			int32 ToSlotIndex;
			FName ToSlotName;
			FString EventInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToInventory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FromSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ToSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToSlotName;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToInventory = { "ToInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventTransferItem_Parms, ToInventory), Z_Construct_UClass_ULFPInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToInventory_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToInventory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotIndex = { "FromSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventTransferItem_Parms, FromSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotName = { "FromSlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventTransferItem_Parms, FromSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotIndex = { "ToSlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventTransferItem_Parms, ToSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotIndex_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotName = { "ToSlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventTransferItem_Parms, ToSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotName_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_EventInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_EventInfo = { "EventInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPInventoryComponent_eventTransferItem_Parms, EventInfo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_EventInfo_MetaData), Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_EventInfo_MetaData) };
	void Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPInventoryComponent_eventTransferItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPInventoryComponent_eventTransferItem_Parms), &Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_FromSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ToSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_EventInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Transfer Item From To Inventory\n\x09* @param ToInventory Take item on this inventory\n\x09* @param FromSlot From other inventory slot\n\x09* @param ToSlot To this inventory slot\n\x09* @param EventInfo Info to pass to trigger event\n\x09*/" },
#endif
		{ "CPP_Default_EventInfo", "None" },
		{ "CPP_Default_FromSlotName", "All" },
		{ "CPP_Default_ToSlotIndex", "-1" },
		{ "CPP_Default_ToSlotName", "All" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transfer Item From To Inventory\n@param ToInventory Take item on this inventory\n@param FromSlot From other inventory slot\n@param ToSlot To this inventory slot\n@param EventInfo Info to pass to trigger event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "TransferItem", nullptr, nullptr, Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::LFPInventoryComponent_eventTransferItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::LFPInventoryComponent_eventTransferItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_TransferItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_TransferItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPInventoryComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Trim inventory to make it more compact\n\x09* @param FromSlot Trim from this index to lower index\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trim inventory to make it more compact\n@param FromSlot Trim from this index to lower index" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPInventoryComponent, nullptr, "TrimInventorySlotList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPInventoryComponent);
	UClass* Z_Construct_UClass_ULFPInventoryComponent_NoRegister()
	{
		return ULFPInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSwapItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSwapItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemSortEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemSortEvent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CheckComponentList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckComponentList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheckComponentList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInventorySlotAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInventorySlotAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InventorySlotNameList_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InventorySlotNameList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotNameList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InventorySlotNameList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InventorySlotItemList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlotItemList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InventorySlotItemList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPInventoryComponent_AddItem, "AddItem" }, // 782261340
		{ &Z_Construct_UFunction_ULFPInventoryComponent_AddItemList, "AddItemList" }, // 1807376880
		{ &Z_Construct_UFunction_ULFPInventoryComponent_BroadcastItemEvent, "BroadcastItemEvent" }, // 2956445389
		{ &Z_Construct_UFunction_ULFPInventoryComponent_CanAddItem, "CanAddItem" }, // 4049089011
		{ &Z_Construct_UFunction_ULFPInventoryComponent_CanRemoveItem, "CanRemoveItem" }, // 29276088
		{ &Z_Construct_UFunction_ULFPInventoryComponent_CanSwapItem, "CanSwapItem" }, // 1971112061
		{ &Z_Construct_UFunction_ULFPInventoryComponent_ClearInventory, "ClearInventory" }, // 1431063130
		{ &Z_Construct_UFunction_ULFPInventoryComponent_FindAvailableInventorySlot, "FindAvailableInventorySlot" }, // 3216672663
		{ &Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotOffsetWithName, "FindInventorySlotOffsetWithName" }, // 384110550
		{ &Z_Construct_UFunction_ULFPInventoryComponent_FindInventorySlotWithName, "FindInventorySlotWithName" }, // 766300487
		{ &Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithItemName, "FindItemListWithItemName" }, // 2327619355
		{ &Z_Construct_UFunction_ULFPInventoryComponent_FindItemListWithTag, "FindItemListWithTag" }, // 1951829630
		{ &Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlot, "GetInventorySlot" }, // 2064053731
		{ &Z_Construct_UFunction_ULFPInventoryComponent_GetInventorySlotList, "GetInventorySlotList" }, // 1663665014
		{ &Z_Construct_UFunction_ULFPInventoryComponent_HasInventorySlotName, "HasInventorySlotName" }, // 83370641
		{ &Z_Construct_UFunction_ULFPInventoryComponent_HaveItemsAtSlotName, "HaveItemsAtSlotName" }, // 2955724849
		{ &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotAvailable, "IsInventorySlotAvailable" }, // 2278266866
		{ &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasName, "IsInventorySlotHasName" }, // 3397424193
		{ &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotHasTag, "IsInventorySlotHasTag" }, // 2646527658
		{ &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotIndexValid, "IsInventorySlotIndexValid" }, // 1315358290
		{ &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemSame, "IsInventorySlotItemSame" }, // 3567282306
		{ &Z_Construct_UFunction_ULFPInventoryComponent_IsInventorySlotItemValid, "IsInventorySlotItemValid" }, // 2424759773
		{ &Z_Construct_UFunction_ULFPInventoryComponent_IsItemSortPriorityHigher, "IsItemSortPriorityHigher" }, // 1803115748
		{ &Z_Construct_UFunction_ULFPInventoryComponent_OnInventorySlotItemListRep, "OnInventorySlotItemListRep" }, // 572586876
		{ &Z_Construct_UFunction_ULFPInventoryComponent_ProcessAddItem, "ProcessAddItem" }, // 3861178450
		{ &Z_Construct_UFunction_ULFPInventoryComponent_ProcessRemoveItem, "ProcessRemoveItem" }, // 2204065408
		{ &Z_Construct_UFunction_ULFPInventoryComponent_ProcessSwapItem, "ProcessSwapItem" }, // 1865281196
		{ &Z_Construct_UFunction_ULFPInventoryComponent_RemoveItem, "RemoveItem" }, // 1237878954
		{ &Z_Construct_UFunction_ULFPInventoryComponent_RemoveItemList, "RemoveItemList" }, // 1881965268
		{ &Z_Construct_UFunction_ULFPInventoryComponent_SortInventory, "SortInventory" }, // 1033284861
		{ &Z_Construct_UFunction_ULFPInventoryComponent_SwapItem, "SwapItem" }, // 2007032061
		{ &Z_Construct_UFunction_ULFPInventoryComponent_TransferItem, "TransferItem" }, // 2765841072
		{ &Z_Construct_UFunction_ULFPInventoryComponent_TrimInventorySlotList, "TrimInventorySlotList" }, // 3516968861
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LFPlugin" },
		{ "IncludePath", "Item/LFPInventoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnUpdateItem_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Delegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnUpdateItem = { "OnUpdateItem", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, OnUpdateItem), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnUpdateItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnUpdateItem_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnUpdateItem_MetaData) }; // 3758260275
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnAddItem_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnAddItem = { "OnAddItem", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, OnAddItem), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnAddItem_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnAddItem_MetaData) }; // 3845622920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnRemoveItem_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnRemoveItem = { "OnRemoveItem", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, OnRemoveItem), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnRemoveItem_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnRemoveItem_MetaData) }; // 3845622920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnSwapItem_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnSwapItem = { "OnSwapItem", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, OnSwapItem), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnSwapItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnSwapItem_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnSwapItem_MetaData) }; // 1908788703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnItemSortEvent_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnItemSortEvent = { "OnItemSortEvent", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, OnItemSortEvent), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnItemFunctionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnItemSortEvent_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnItemSortEvent_MetaData) }; // 2515140177
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_CheckComponentList_Inner = { "CheckComponentList", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_CheckComponentList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checker Function\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checker Function" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_CheckComponentList = { "CheckComponentList", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, CheckComponentList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_CheckComponentList_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_CheckComponentList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_MaxInventorySlotAmount_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Setting" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How big is this inventory can get ( It can't change runtime ) */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How big is this inventory can get ( It can't change runtime )" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_MaxInventorySlotAmount = { "MaxInventorySlotAmount", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, MaxInventorySlotAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_MaxInventorySlotAmount_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_MaxInventorySlotAmount_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList_ValueProp = { "InventorySlotNameList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList_Key_KeyProp = { "InventorySlotNameList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Can use this to mark equipment slot and hidden slot ( It can't change runtime ) */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can use this to mark equipment slot and hidden slot ( It can't change runtime )" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList = { "InventorySlotNameList", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, InventorySlotNameList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotItemList_Inner = { "InventorySlotItemList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotItemList_MetaData[] = {
		{ "Category", "LFPInventoryComponent | Cache" },
		{ "ModuleRelativePath", "Public/Item/LFPInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotItemList = { "InventorySlotItemList", "OnInventorySlotItemListRep", (EPropertyFlags)0x0020080100020021, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPInventoryComponent, InventorySlotItemList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotItemList_MetaData), Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotItemList_MetaData) }; // 2821161623
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnUpdateItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnAddItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnRemoveItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnSwapItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_OnItemSortEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_CheckComponentList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_CheckComponentList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_MaxInventorySlotAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotNameList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotItemList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPInventoryComponent_Statics::NewProp_InventorySlotItemList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPInventoryComponent_Statics::ClassParams = {
		&ULFPInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPInventoryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPInventoryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPInventoryComponent.OuterSingleton, Z_Construct_UClass_ULFPInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPInventoryComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<ULFPInventoryComponent>()
	{
		return ULFPInventoryComponent::StaticClass();
	}

	void ULFPInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InventorySlotItemList(TEXT("InventorySlotItemList"));

		const bool bIsValid = true
			&& Name_InventorySlotItemList == ClassReps[(int32)ENetFields_Private::InventorySlotItemList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULFPInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPInventoryComponent);
	ULFPInventoryComponent::~ULFPInventoryComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULFPInventoryComponent)
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPInventoryItemData::StaticStruct, Z_Construct_UScriptStruct_FLFPInventoryItemData_Statics::NewStructOps, TEXT("LFPInventoryItemData"), &Z_Registration_Info_UScriptStruct_LFPInventoryItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPInventoryItemData), 2821161623U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPInventoryComponent, ULFPInventoryComponent::StaticClass, TEXT("ULFPInventoryComponent"), &Z_Registration_Info_UClass_ULFPInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPInventoryComponent), 4026658312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_1848309737(TEXT("/Script/LohFunctionPluginItem"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPInventoryComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
