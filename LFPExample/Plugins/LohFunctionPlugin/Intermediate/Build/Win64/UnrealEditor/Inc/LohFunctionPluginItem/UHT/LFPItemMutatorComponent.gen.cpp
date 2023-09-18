// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LohFunctionPluginItem/Public/Item/LFPItemMutatorComponent.h"
#include "LohFunctionPluginItem/Public/Item/LFPInventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLFPItemMutatorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPInventoryComponent_NoRegister();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPItemMutatorComponent();
	LOHFUNCTIONPLUGINITEM_API UClass* Z_Construct_UClass_ULFPItemMutatorComponent_NoRegister();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature();
	LOHFUNCTIONPLUGINITEM_API UScriptStruct* Z_Construct_UScriptStruct_FLFPInventoryItemData();
	LOHFUNCTIONPLUGINITEM_API UScriptStruct* Z_Construct_UScriptStruct_FLFPItemMutatorQueueData();
	UPackage* Z_Construct_UPackage__Script_LohFunctionPluginItem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData;
class UScriptStruct* FLFPItemMutatorQueueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, (UObject*)Z_Construct_UPackage__Script_LohFunctionPluginItem(), TEXT("LFPItemMutatorQueueData"));
	}
	return Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData.OuterSingleton;
}
template<> LOHFUNCTIONPLUGINITEM_API UScriptStruct* StaticStruct<FLFPItemMutatorQueueData>()
{
	return FLFPItemMutatorQueueData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RecipeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemConsumeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemConsumeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemConsumeList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSearchSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ItemSearchSlotName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemProduceList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemProduceList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemProduceList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPause_MetaData[];
#endif
		static void NewProp_bIsPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPause;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLFPItemMutatorQueueData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_RecipeName_MetaData[] = {
		{ "Category", "LFPItemMutatorQueueData" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_RecipeName = { "RecipeName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPItemMutatorQueueData, RecipeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_RecipeName_MetaData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_RecipeName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemConsumeList_Inner = { "ItemConsumeList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemConsumeList_MetaData[] = {
		{ "Category", "LFPItemMutatorQueueData" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemConsumeList = { "ItemConsumeList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPItemMutatorQueueData, ItemConsumeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemConsumeList_MetaData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemConsumeList_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemSearchSlotName_MetaData[] = {
		{ "Category", "LFPItemMutatorQueueData" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemSearchSlotName = { "ItemSearchSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPItemMutatorQueueData, ItemSearchSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemSearchSlotName_MetaData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemSearchSlotName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemProduceList_Inner = { "ItemProduceList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPInventoryItemData, METADATA_PARAMS(0, nullptr) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemProduceList_MetaData[] = {
		{ "Category", "LFPItemMutatorQueueData" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemProduceList = { "ItemProduceList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPItemMutatorQueueData, ItemProduceList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemProduceList_MetaData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemProduceList_MetaData) }; // 2821161623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_MaxDelay_MetaData[] = {
		{ "Category", "LFPItemMutatorQueueData" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_MaxDelay = { "MaxDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPItemMutatorQueueData, MaxDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_MaxDelay_MetaData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_MaxDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "LFPItemMutatorQueueData" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLFPItemMutatorQueueData, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_Delay_MetaData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_Delay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_bIsPause_MetaData[] = {
		{ "Category", "LFPItemMutatorQueueData" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_bIsPause_SetBit(void* Obj)
	{
		((FLFPItemMutatorQueueData*)Obj)->bIsPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_bIsPause = { "bIsPause", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLFPItemMutatorQueueData), &Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_bIsPause_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_bIsPause_MetaData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_bIsPause_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_RecipeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemConsumeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemConsumeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemSearchSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemProduceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_ItemProduceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_MaxDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewProp_bIsPause,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
		nullptr,
		&NewStructOps,
		"LFPItemMutatorQueueData",
		Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::PropPointers),
		sizeof(FLFPItemMutatorQueueData),
		alignof(FLFPItemMutatorQueueData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLFPItemMutatorQueueData()
	{
		if (!Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData.InnerSingleton, Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPluginItem_eventOnMutatorItemEvent_Parms
		{
			int32 QueueIndex;
			FLFPItemMutatorQueueData QueueData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueueData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueIndex = { "QueueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnMutatorItemEvent_Parms, QueueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueIndex_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueData = { "QueueData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnMutatorItemEvent_Parms, QueueData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueData_MetaData) }; // 2896375502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::NewProp_QueueData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnMutatorItemEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnMutatorItemEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnMutatorItemEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMutatorItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMutatorItemEvent, const int32 QueueIndex, const FLFPItemMutatorQueueData QueueData)
{
	struct _Script_LohFunctionPluginItem_eventOnMutatorItemEvent_Parms
	{
		int32 QueueIndex;
		FLFPItemMutatorQueueData QueueData;
	};
	_Script_LohFunctionPluginItem_eventOnMutatorItemEvent_Parms Parms;
	Parms.QueueIndex=QueueIndex;
	Parms.QueueData=QueueData;
	OnMutatorItemEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnMutatorFunctionEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMutatorFunctionEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMutatorFunctionEvent)
{
	OnMutatorFunctionEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics
	{
		struct _Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms
		{
			FLFPItemMutatorQueueData ItemData;
			bool bReturnConsume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReturnConsume_MetaData[];
#endif
		static void NewProp_bReturnConsume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnConsume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms, ItemData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_ItemData_MetaData) }; // 2896375502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_bReturnConsume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_bReturnConsume_SetBit(void* Obj)
	{
		((_Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms*)Obj)->bReturnConsume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_bReturnConsume = { "bReturnConsume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms), &Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_bReturnConsume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_bReturnConsume_MetaData), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_bReturnConsume_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::NewProp_bReturnConsume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LohFunctionPluginItem, nullptr, "OnProcessMutatorItemEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::_Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnProcessMutatorItemEvent_DelegateWrapper(const FMulticastScriptDelegate& OnProcessMutatorItemEvent, FLFPItemMutatorQueueData const& ItemData, bool bReturnConsume)
{
	struct _Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms
	{
		FLFPItemMutatorQueueData ItemData;
		bool bReturnConsume;
	};
	_Script_LohFunctionPluginItem_eventOnProcessMutatorItemEvent_Parms Parms;
	Parms.ItemData=ItemData;
	Parms.bReturnConsume=bReturnConsume ? true : false;
	OnProcessMutatorItemEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execGetItemRecipe)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RecipeName);
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_RecipeData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetItemRecipe_Implementation(Z_Param_RecipeName,Z_Param_Out_RecipeData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execGetQueueItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QueueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLFPItemMutatorQueueData*)Z_Param__Result=P_THIS->GetQueueItem(Z_Param_QueueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execIsQueueIndexValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsQueueIndexValid(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execOnMutatorQueueRep)
	{
		P_GET_TARRAY_REF(FLFPItemMutatorQueueData,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMutatorQueueRep_Implementation(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execConsumeItemFromInventory)
	{
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_ItemMutatorQueueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConsumeItemFromInventory_Implementation(Z_Param_Out_ItemMutatorQueueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execCanDeleteItemFromQueue)
	{
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_ItemMutatorQueueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDeleteItemFromQueue_Implementation(Z_Param_Out_ItemMutatorQueueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execCanResumeItemCountdown)
	{
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_ItemMutatorQueueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanResumeItemCountdown_Implementation(Z_Param_Out_ItemMutatorQueueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execCanPauseItemCountdown)
	{
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_ItemMutatorQueueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPauseItemCountdown_Implementation(Z_Param_Out_ItemMutatorQueueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execCanRemoveItemFromQueue)
	{
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_ItemMutatorQueueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRemoveItemFromQueue_Implementation(Z_Param_Out_ItemMutatorQueueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execCanAddItemToQueue)
	{
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_ItemMutatorQueueData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddItemToQueue_Implementation(Z_Param_Out_ItemMutatorQueueData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execProcessItem)
	{
		P_GET_STRUCT_REF(FLFPItemMutatorQueueData,Z_Param_Out_ItemData);
		P_GET_UBOOL(Z_Param_bReturnConsume);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessItem(Z_Param_Out_ItemData,Z_Param_bReturnConsume,Z_Param_QueueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execProcessItemQueue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ConsumeDelayAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessItemQueue(Z_Param_ConsumeDelayAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execClearItemQueue)
	{
		P_GET_UBOOL(Z_Param_bDeleteItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearItemQueue(Z_Param_bDeleteItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execDeleteItemFromQueue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QueueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteItemFromQueue(Z_Param_QueueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execResumeItemCountdown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QueueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResumeItemCountdown(Z_Param_QueueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execPauseItemCountdown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QueueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PauseItemCountdown(Z_Param_QueueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execRemoveItemFromQueue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QueueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItemFromQueue(Z_Param_QueueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execAddItemToQueue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RecipeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemToQueue(Z_Param_RecipeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULFPItemMutatorComponent::execSetInventoryComponent)
	{
		P_GET_OBJECT(ULFPInventoryComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInventoryComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	struct LFPItemMutatorComponent_eventCanAddItemToQueue_Parms
	{
		FLFPItemMutatorQueueData ItemMutatorQueueData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPItemMutatorComponent_eventCanAddItemToQueue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms
	{
		FLFPItemMutatorQueueData ItemMutatorQueueData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms
	{
		FLFPItemMutatorQueueData ItemMutatorQueueData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms
	{
		FLFPItemMutatorQueueData ItemMutatorQueueData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms
	{
		FLFPItemMutatorQueueData ItemMutatorQueueData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms
	{
		FLFPItemMutatorQueueData ItemMutatorQueueData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPItemMutatorComponent_eventGetItemRecipe_Parms
	{
		FName RecipeName;
		FLFPItemMutatorQueueData RecipeData;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LFPItemMutatorComponent_eventGetItemRecipe_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LFPItemMutatorComponent_eventOnMutatorQueueRep_Parms
	{
		TArray<FLFPItemMutatorQueueData> OldValue;
	};
	static FName NAME_ULFPItemMutatorComponent_CanAddItemToQueue = FName(TEXT("CanAddItemToQueue"));
	bool ULFPItemMutatorComponent::CanAddItemToQueue(FLFPItemMutatorQueueData const& ItemMutatorQueueData) const
	{
		LFPItemMutatorComponent_eventCanAddItemToQueue_Parms Parms;
		Parms.ItemMutatorQueueData=ItemMutatorQueueData;
		const_cast<ULFPItemMutatorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_CanAddItemToQueue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPItemMutatorComponent_CanDeleteItemFromQueue = FName(TEXT("CanDeleteItemFromQueue"));
	bool ULFPItemMutatorComponent::CanDeleteItemFromQueue(FLFPItemMutatorQueueData const& ItemMutatorQueueData) const
	{
		LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms Parms;
		Parms.ItemMutatorQueueData=ItemMutatorQueueData;
		const_cast<ULFPItemMutatorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_CanDeleteItemFromQueue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPItemMutatorComponent_CanPauseItemCountdown = FName(TEXT("CanPauseItemCountdown"));
	bool ULFPItemMutatorComponent::CanPauseItemCountdown(FLFPItemMutatorQueueData const& ItemMutatorQueueData) const
	{
		LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms Parms;
		Parms.ItemMutatorQueueData=ItemMutatorQueueData;
		const_cast<ULFPItemMutatorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_CanPauseItemCountdown),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPItemMutatorComponent_CanRemoveItemFromQueue = FName(TEXT("CanRemoveItemFromQueue"));
	bool ULFPItemMutatorComponent::CanRemoveItemFromQueue(FLFPItemMutatorQueueData const& ItemMutatorQueueData) const
	{
		LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms Parms;
		Parms.ItemMutatorQueueData=ItemMutatorQueueData;
		const_cast<ULFPItemMutatorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_CanRemoveItemFromQueue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPItemMutatorComponent_CanResumeItemCountdown = FName(TEXT("CanResumeItemCountdown"));
	bool ULFPItemMutatorComponent::CanResumeItemCountdown(FLFPItemMutatorQueueData const& ItemMutatorQueueData) const
	{
		LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms Parms;
		Parms.ItemMutatorQueueData=ItemMutatorQueueData;
		const_cast<ULFPItemMutatorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_CanResumeItemCountdown),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPItemMutatorComponent_ConsumeItemFromInventory = FName(TEXT("ConsumeItemFromInventory"));
	bool ULFPItemMutatorComponent::ConsumeItemFromInventory(FLFPItemMutatorQueueData const& ItemMutatorQueueData)
	{
		LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms Parms;
		Parms.ItemMutatorQueueData=ItemMutatorQueueData;
		ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_ConsumeItemFromInventory),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPItemMutatorComponent_GetItemRecipe = FName(TEXT("GetItemRecipe"));
	bool ULFPItemMutatorComponent::GetItemRecipe(const FName RecipeName, FLFPItemMutatorQueueData& RecipeData) const
	{
		LFPItemMutatorComponent_eventGetItemRecipe_Parms Parms;
		Parms.RecipeName=RecipeName;
		Parms.RecipeData=RecipeData;
		const_cast<ULFPItemMutatorComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_GetItemRecipe),&Parms);
		RecipeData=Parms.RecipeData;
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULFPItemMutatorComponent_OnMutatorQueueRep = FName(TEXT("OnMutatorQueueRep"));
	void ULFPItemMutatorComponent::OnMutatorQueueRep(TArray<FLFPItemMutatorQueueData> const& OldValue)
	{
		LFPItemMutatorComponent_eventOnMutatorQueueRep_Parms Parms;
		Parms.OldValue=OldValue;
		ProcessEvent(FindFunctionChecked(NAME_ULFPItemMutatorComponent_OnMutatorQueueRep),&Parms);
	}
	void ULFPItemMutatorComponent::StaticRegisterNativesULFPItemMutatorComponent()
	{
		UClass* Class = ULFPItemMutatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToQueue", &ULFPItemMutatorComponent::execAddItemToQueue },
			{ "CanAddItemToQueue", &ULFPItemMutatorComponent::execCanAddItemToQueue },
			{ "CanDeleteItemFromQueue", &ULFPItemMutatorComponent::execCanDeleteItemFromQueue },
			{ "CanPauseItemCountdown", &ULFPItemMutatorComponent::execCanPauseItemCountdown },
			{ "CanRemoveItemFromQueue", &ULFPItemMutatorComponent::execCanRemoveItemFromQueue },
			{ "CanResumeItemCountdown", &ULFPItemMutatorComponent::execCanResumeItemCountdown },
			{ "ClearItemQueue", &ULFPItemMutatorComponent::execClearItemQueue },
			{ "ConsumeItemFromInventory", &ULFPItemMutatorComponent::execConsumeItemFromInventory },
			{ "DeleteItemFromQueue", &ULFPItemMutatorComponent::execDeleteItemFromQueue },
			{ "GetItemRecipe", &ULFPItemMutatorComponent::execGetItemRecipe },
			{ "GetQueueItem", &ULFPItemMutatorComponent::execGetQueueItem },
			{ "IsQueueIndexValid", &ULFPItemMutatorComponent::execIsQueueIndexValid },
			{ "OnMutatorQueueRep", &ULFPItemMutatorComponent::execOnMutatorQueueRep },
			{ "PauseItemCountdown", &ULFPItemMutatorComponent::execPauseItemCountdown },
			{ "ProcessItem", &ULFPItemMutatorComponent::execProcessItem },
			{ "ProcessItemQueue", &ULFPItemMutatorComponent::execProcessItemQueue },
			{ "RemoveItemFromQueue", &ULFPItemMutatorComponent::execRemoveItemFromQueue },
			{ "ResumeItemCountdown", &ULFPItemMutatorComponent::execResumeItemCountdown },
			{ "SetInventoryComponent", &ULFPItemMutatorComponent::execSetInventoryComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics
	{
		struct LFPItemMutatorComponent_eventAddItemToQueue_Parms
		{
			FName RecipeName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RecipeName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_RecipeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_RecipeName = { "RecipeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventAddItemToQueue_Parms, RecipeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_RecipeName_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_RecipeName_MetaData) };
	void Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventAddItemToQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventAddItemToQueue_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_RecipeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "AddItemToQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::LFPItemMutatorComponent_eventAddItemToQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::LFPItemMutatorComponent_eventAddItemToQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMutatorQueueData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMutatorQueueData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ItemMutatorQueueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ItemMutatorQueueData = { "ItemMutatorQueueData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventCanAddItemToQueue_Parms, ItemMutatorQueueData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ItemMutatorQueueData_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ItemMutatorQueueData_MetaData) }; // 2896375502
	void Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventCanAddItemToQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventCanAddItemToQueue_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ItemMutatorQueueData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "CanAddItemToQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventCanAddItemToQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventCanAddItemToQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMutatorQueueData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMutatorQueueData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ItemMutatorQueueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ItemMutatorQueueData = { "ItemMutatorQueueData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms, ItemMutatorQueueData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ItemMutatorQueueData_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ItemMutatorQueueData_MetaData) }; // 2896375502
	void Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ItemMutatorQueueData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "CanDeleteItemFromQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventCanDeleteItemFromQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMutatorQueueData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMutatorQueueData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ItemMutatorQueueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ItemMutatorQueueData = { "ItemMutatorQueueData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms, ItemMutatorQueueData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ItemMutatorQueueData_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ItemMutatorQueueData_MetaData) }; // 2896375502
	void Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ItemMutatorQueueData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "CanPauseItemCountdown", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventCanPauseItemCountdown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMutatorQueueData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMutatorQueueData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ItemMutatorQueueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ItemMutatorQueueData = { "ItemMutatorQueueData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms, ItemMutatorQueueData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ItemMutatorQueueData_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ItemMutatorQueueData_MetaData) }; // 2896375502
	void Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ItemMutatorQueueData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "CanRemoveItemFromQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventCanRemoveItemFromQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMutatorQueueData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMutatorQueueData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ItemMutatorQueueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ItemMutatorQueueData = { "ItemMutatorQueueData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms, ItemMutatorQueueData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ItemMutatorQueueData_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ItemMutatorQueueData_MetaData) }; // 2896375502
	void Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ItemMutatorQueueData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "CanResumeItemCountdown", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventCanResumeItemCountdown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics
	{
		struct LFPItemMutatorComponent_eventClearItemQueue_Parms
		{
			bool bDeleteItem;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteItem_MetaData[];
#endif
		static void NewProp_bDeleteItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::NewProp_bDeleteItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::NewProp_bDeleteItem_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventClearItemQueue_Parms*)Obj)->bDeleteItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::NewProp_bDeleteItem = { "bDeleteItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventClearItemQueue_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::NewProp_bDeleteItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::NewProp_bDeleteItem_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::NewProp_bDeleteItem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::NewProp_bDeleteItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "CPP_Default_bDeleteItem", "false" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "ClearItemQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::LFPItemMutatorComponent_eventClearItemQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::LFPItemMutatorComponent_eventClearItemQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMutatorQueueData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMutatorQueueData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ItemMutatorQueueData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ItemMutatorQueueData = { "ItemMutatorQueueData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms, ItemMutatorQueueData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ItemMutatorQueueData_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ItemMutatorQueueData_MetaData) }; // 2896375502
	void Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ItemMutatorQueueData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "ConsumeItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventConsumeItemFromInventory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics
	{
		struct LFPItemMutatorComponent_eventDeleteItemFromQueue_Parms
		{
			int32 QueueIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_QueueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_QueueIndex = { "QueueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventDeleteItemFromQueue_Parms, QueueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_QueueIndex_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_QueueIndex_MetaData) };
	void Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventDeleteItemFromQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventDeleteItemFromQueue_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_QueueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "DeleteItemFromQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::LFPItemMutatorComponent_eventDeleteItemFromQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::LFPItemMutatorComponent_eventDeleteItemFromQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecipeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RecipeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecipeData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_RecipeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_RecipeName = { "RecipeName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventGetItemRecipe_Parms, RecipeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_RecipeName_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_RecipeName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_RecipeData = { "RecipeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventGetItemRecipe_Parms, RecipeData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(0, nullptr) }; // 2896375502
	void Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventGetItemRecipe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventGetItemRecipe_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_RecipeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_RecipeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "GetItemRecipe", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventGetItemRecipe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventGetItemRecipe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics
	{
		struct LFPItemMutatorComponent_eventGetQueueItem_Parms
		{
			int32 QueueIndex;
			FLFPItemMutatorQueueData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::NewProp_QueueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::NewProp_QueueIndex = { "QueueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventGetQueueItem_Parms, QueueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::NewProp_QueueIndex_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::NewProp_QueueIndex_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventGetQueueItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(0, nullptr) }; // 2896375502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::NewProp_QueueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "GetQueueItem", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::LFPItemMutatorComponent_eventGetQueueItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::LFPItemMutatorComponent_eventGetQueueItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics
	{
		struct LFPItemMutatorComponent_eventIsQueueIndexValid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventIsQueueIndexValid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventIsQueueIndexValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventIsQueueIndexValid_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Getter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Valid Checker\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valid Checker" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "IsQueueIndexValid", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::LFPItemMutatorComponent_eventIsQueueIndexValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::LFPItemMutatorComponent_eventIsQueueIndexValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::NewProp_OldValue_Inner = { "OldValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(0, nullptr) }; // 2896375502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventOnMutatorQueueRep_Parms, OldValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::NewProp_OldValue_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::NewProp_OldValue_MetaData) }; // 2896375502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::NewProp_OldValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Event" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "OnMutatorQueueRep", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::PropPointers), sizeof(LFPItemMutatorComponent_eventOnMutatorQueueRep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::PropPointers) < 2048);
	static_assert(sizeof(LFPItemMutatorComponent_eventOnMutatorQueueRep_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics
	{
		struct LFPItemMutatorComponent_eventPauseItemCountdown_Parms
		{
			int32 QueueIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_QueueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_QueueIndex = { "QueueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventPauseItemCountdown_Parms, QueueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_QueueIndex_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_QueueIndex_MetaData) };
	void Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventPauseItemCountdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventPauseItemCountdown_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_QueueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "PauseItemCountdown", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::LFPItemMutatorComponent_eventPauseItemCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::LFPItemMutatorComponent_eventPauseItemCountdown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics
	{
		struct LFPItemMutatorComponent_eventProcessItem_Parms
		{
			FLFPItemMutatorQueueData ItemData;
			bool bReturnConsume;
			int32 QueueIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReturnConsume_MetaData[];
#endif
		static void NewProp_bReturnConsume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnConsume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventProcessItem_Parms, ItemData), Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(0, nullptr) }; // 2896375502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_bReturnConsume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_bReturnConsume_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventProcessItem_Parms*)Obj)->bReturnConsume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_bReturnConsume = { "bReturnConsume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventProcessItem_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_bReturnConsume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_bReturnConsume_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_bReturnConsume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_QueueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_QueueIndex = { "QueueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventProcessItem_Parms, QueueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_QueueIndex_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_QueueIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_bReturnConsume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::NewProp_QueueIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "ProcessItem", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::LFPItemMutatorComponent_eventProcessItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::LFPItemMutatorComponent_eventProcessItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics
	{
		struct LFPItemMutatorComponent_eventProcessItemQueue_Parms
		{
			float ConsumeDelayAmount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeDelayAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConsumeDelayAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::NewProp_ConsumeDelayAmount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::NewProp_ConsumeDelayAmount = { "ConsumeDelayAmount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventProcessItemQueue_Parms, ConsumeDelayAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::NewProp_ConsumeDelayAmount_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::NewProp_ConsumeDelayAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::NewProp_ConsumeDelayAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "ProcessItemQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::LFPItemMutatorComponent_eventProcessItemQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::LFPItemMutatorComponent_eventProcessItemQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics
	{
		struct LFPItemMutatorComponent_eventRemoveItemFromQueue_Parms
		{
			int32 QueueIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_QueueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_QueueIndex = { "QueueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventRemoveItemFromQueue_Parms, QueueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_QueueIndex_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_QueueIndex_MetaData) };
	void Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventRemoveItemFromQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventRemoveItemFromQueue_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_QueueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "RemoveItemFromQueue", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::LFPItemMutatorComponent_eventRemoveItemFromQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::LFPItemMutatorComponent_eventRemoveItemFromQueue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics
	{
		struct LFPItemMutatorComponent_eventResumeItemCountdown_Parms
		{
			int32 QueueIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_QueueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_QueueIndex = { "QueueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventResumeItemCountdown_Parms, QueueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_QueueIndex_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_QueueIndex_MetaData) };
	void Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventResumeItemCountdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventResumeItemCountdown_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_QueueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "ResumeItemCountdown", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::LFPItemMutatorComponent_eventResumeItemCountdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::LFPItemMutatorComponent_eventResumeItemCountdown_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics
	{
		struct LFPItemMutatorComponent_eventSetInventoryComponent_Parms
		{
			ULFPInventoryComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LFPItemMutatorComponent_eventSetInventoryComponent_Parms, Component), Z_Construct_UClass_ULFPInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_Component_MetaData) };
	void Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LFPItemMutatorComponent_eventSetInventoryComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LFPItemMutatorComponent_eventSetInventoryComponent_Parms), &Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LFPItemMutatorComponent | Function" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULFPItemMutatorComponent, nullptr, "SetInventoryComponent", nullptr, nullptr, Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::LFPItemMutatorComponent_eventSetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::LFPItemMutatorComponent_eventSetInventoryComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULFPItemMutatorComponent);
	UClass* Z_Construct_UClass_ULFPItemMutatorComponent_NoRegister()
	{
		return ULFPItemMutatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULFPItemMutatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddItemToQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddItemToQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveItemFromQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveItemFromQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPauseItemCountdown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPauseItemCountdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResumeItemCountdown_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResumeItemCountdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeleteItemFromQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeleteItemFromQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClearItemQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClearItemQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProcessItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProcessItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetup_MetaData[];
#endif
		static void NewProp_bAutoSetup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxQueueAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQueueAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueProcessAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueueProcessAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceProcess_MetaData[];
#endif
		static void NewProp_bInstanceProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProcessQueueOnTick_MetaData[];
#endif
		static void NewProp_bProcessQueueOnTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessQueueOnTick;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MutatorQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MutatorQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MutatorQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULFPItemMutatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LohFunctionPluginItem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULFPItemMutatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_AddItemToQueue, "AddItemToQueue" }, // 2451429674
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_CanAddItemToQueue, "CanAddItemToQueue" }, // 1069519458
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_CanDeleteItemFromQueue, "CanDeleteItemFromQueue" }, // 1487261345
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_CanPauseItemCountdown, "CanPauseItemCountdown" }, // 4274053505
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_CanRemoveItemFromQueue, "CanRemoveItemFromQueue" }, // 704145622
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_CanResumeItemCountdown, "CanResumeItemCountdown" }, // 2525575112
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_ClearItemQueue, "ClearItemQueue" }, // 1424454953
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_ConsumeItemFromInventory, "ConsumeItemFromInventory" }, // 2898348910
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_DeleteItemFromQueue, "DeleteItemFromQueue" }, // 1590763695
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_GetItemRecipe, "GetItemRecipe" }, // 3024540539
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_GetQueueItem, "GetQueueItem" }, // 2740550964
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_IsQueueIndexValid, "IsQueueIndexValid" }, // 68276889
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_OnMutatorQueueRep, "OnMutatorQueueRep" }, // 387570328
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_PauseItemCountdown, "PauseItemCountdown" }, // 3562524316
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItem, "ProcessItem" }, // 1172180546
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_ProcessItemQueue, "ProcessItemQueue" }, // 3659160342
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_RemoveItemFromQueue, "RemoveItemFromQueue" }, // 4101458183
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_ResumeItemCountdown, "ResumeItemCountdown" }, // 1541678422
		{ &Z_Construct_UFunction_ULFPItemMutatorComponent_SetInventoryComponent, "SetInventoryComponent" }, // 961910882
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "LFPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Crafting System\n* Has a crafting queue\n* Can connect inventory\n*/" },
#endif
		{ "IncludePath", "Item/LFPItemMutatorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crafting System\nHas a crafting queue\nCan connect inventory" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnAddItemToQueue_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Delegate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnAddItemToQueue = { "OnAddItemToQueue", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, OnAddItemToQueue), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnAddItemToQueue_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnAddItemToQueue_MetaData) }; // 718298337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnRemoveItemFromQueue_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnRemoveItemFromQueue = { "OnRemoveItemFromQueue", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, OnRemoveItemFromQueue), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnRemoveItemFromQueue_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnRemoveItemFromQueue_MetaData) }; // 718298337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnPauseItemCountdown_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnPauseItemCountdown = { "OnPauseItemCountdown", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, OnPauseItemCountdown), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnPauseItemCountdown_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnPauseItemCountdown_MetaData) }; // 718298337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnResumeItemCountdown_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnResumeItemCountdown = { "OnResumeItemCountdown", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, OnResumeItemCountdown), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnResumeItemCountdown_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnResumeItemCountdown_MetaData) }; // 718298337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnDeleteItemFromQueue_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnDeleteItemFromQueue = { "OnDeleteItemFromQueue", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, OnDeleteItemFromQueue), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnDeleteItemFromQueue_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnDeleteItemFromQueue_MetaData) }; // 718298337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnClearItemQueue_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnClearItemQueue = { "OnClearItemQueue", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, OnClearItemQueue), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnMutatorFunctionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnClearItemQueue_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnClearItemQueue_MetaData) }; // 984701450
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnProcessItem_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Delegate" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnProcessItem = { "OnProcessItem", nullptr, (EPropertyFlags)0x0010200010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, OnProcessItem), Z_Construct_UDelegateFunction_LohFunctionPluginItem_OnProcessMutatorItemEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnProcessItem_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnProcessItem_MetaData) }; // 1407567013
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bAutoSetup_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Setting" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bAutoSetup_SetBit(void* Obj)
	{
		((ULFPItemMutatorComponent*)Obj)->bAutoSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bAutoSetup = { "bAutoSetup", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPItemMutatorComponent), &Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bAutoSetup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bAutoSetup_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bAutoSetup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MaxQueueAmount_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Setting" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MaxQueueAmount = { "MaxQueueAmount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, MaxQueueAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MaxQueueAmount_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MaxQueueAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_QueueProcessAmount_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Setting" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_QueueProcessAmount = { "QueueProcessAmount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, QueueProcessAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_QueueProcessAmount_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_QueueProcessAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bInstanceProcess_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Process non delay item without adding to queue */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Process non delay item without adding to queue" },
#endif
	};
#endif
	void Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bInstanceProcess_SetBit(void* Obj)
	{
		((ULFPItemMutatorComponent*)Obj)->bInstanceProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bInstanceProcess = { "bInstanceProcess", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPItemMutatorComponent), &Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bInstanceProcess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bInstanceProcess_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bInstanceProcess_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bProcessQueueOnTick_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Setting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Process queue item on tick automatic */" },
#endif
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Process queue item on tick automatic" },
#endif
	};
#endif
	void Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bProcessQueueOnTick_SetBit(void* Obj)
	{
		((ULFPItemMutatorComponent*)Obj)->bProcessQueueOnTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bProcessQueueOnTick = { "bProcessQueueOnTick", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULFPItemMutatorComponent), &Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bProcessQueueOnTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bProcessQueueOnTick_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bProcessQueueOnTick_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MutatorQueue_Inner = { "MutatorQueue", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLFPItemMutatorQueueData, METADATA_PARAMS(0, nullptr) }; // 2896375502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MutatorQueue_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Cache" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MutatorQueue = { "MutatorQueue", "OnMutatorQueueRep", (EPropertyFlags)0x0020080101020021, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, MutatorQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MutatorQueue_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MutatorQueue_MetaData) }; // 2896375502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "LFPItemMutatorComponent | Cache" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Item/LFPItemMutatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x00200800010a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULFPItemMutatorComponent, InventoryComponent), Z_Construct_UClass_ULFPInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_InventoryComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULFPItemMutatorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnAddItemToQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnRemoveItemFromQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnPauseItemCountdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnResumeItemCountdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnDeleteItemFromQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnClearItemQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_OnProcessItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bAutoSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MaxQueueAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_QueueProcessAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bInstanceProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_bProcessQueueOnTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MutatorQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_MutatorQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULFPItemMutatorComponent_Statics::NewProp_InventoryComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULFPItemMutatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULFPItemMutatorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULFPItemMutatorComponent_Statics::ClassParams = {
		&ULFPItemMutatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULFPItemMutatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULFPItemMutatorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULFPItemMutatorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULFPItemMutatorComponent()
	{
		if (!Z_Registration_Info_UClass_ULFPItemMutatorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULFPItemMutatorComponent.OuterSingleton, Z_Construct_UClass_ULFPItemMutatorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULFPItemMutatorComponent.OuterSingleton;
	}
	template<> LOHFUNCTIONPLUGINITEM_API UClass* StaticClass<ULFPItemMutatorComponent>()
	{
		return ULFPItemMutatorComponent::StaticClass();
	}

	void ULFPItemMutatorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MutatorQueue(TEXT("MutatorQueue"));

		const bool bIsValid = true
			&& Name_MutatorQueue == ClassReps[(int32)ENetFields_Private::MutatorQueue].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULFPItemMutatorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULFPItemMutatorComponent);
	ULFPItemMutatorComponent::~ULFPItemMutatorComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_Statics::ScriptStructInfo[] = {
		{ FLFPItemMutatorQueueData::StaticStruct, Z_Construct_UScriptStruct_FLFPItemMutatorQueueData_Statics::NewStructOps, TEXT("LFPItemMutatorQueueData"), &Z_Registration_Info_UScriptStruct_LFPItemMutatorQueueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLFPItemMutatorQueueData), 2896375502U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULFPItemMutatorComponent, ULFPItemMutatorComponent::StaticClass, TEXT("ULFPItemMutatorComponent"), &Z_Registration_Info_UClass_ULFPItemMutatorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULFPItemMutatorComponent), 738873757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_1354157971(TEXT("/Script/LohFunctionPluginItem"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Project_File_ProjectWorldSim_Plugins_LohFunctionPlugin_Source_LohFunctionPluginItem_Public_Item_LFPItemMutatorComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
